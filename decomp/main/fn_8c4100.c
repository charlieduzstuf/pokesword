/* main functions 008c4100..008dfff0 (69 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 008c4100 size=384 callers=0 calls=14
   calls: sub_780ec0, sub_7c58c0, sub_7dfdd0, sub_7ee6b0, sub_7efe00, sub_7efef0, sub_7f0160, sub_7f0500, sub_8a8770, sub_8c1f00, sub_8c1f10, sub_8c1f30
   ... +2 more
*/
void sub_8c4100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4100ULL || rel >= 0x8c4280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4280 size=384 callers=0 calls=14
   calls: sub_780ec0, sub_7c58c0, sub_7dfdd0, sub_7ee6b0, sub_7efe00, sub_7efef0, sub_7f0160, sub_7f0500, sub_8a8770, sub_8c1f00, sub_8c1f10, sub_8c1f30
   ... +2 more
*/
void sub_8c4280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4280ULL || rel >= 0x8c4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4400 size=32 callers=0 calls=1
   calls: sub_8c6230
*/
void sub_8c4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4400ULL || rel >= 0x8c4420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4420 size=32 callers=0 calls=1
   calls: sub_8c6230
*/
void sub_8c4420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4420ULL || rel >= 0x8c4440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4440 size=32 callers=0 calls=2
   calls: sub_8a8550, sub_8c1f10
*/
void sub_8c4440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4440ULL || rel >= 0x8c4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4460 size=64 callers=0 calls=2
   calls: sub_7eef50, sub_8c20a0
*/
void sub_8c4460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4460ULL || rel >= 0x8c44a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c44a0 size=64 callers=0 calls=2
   calls: sub_7eef50, sub_8c20a0
*/
void sub_8c44a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c44a0ULL || rel >= 0x8c44e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c44e0 size=64 callers=0 calls=2
   calls: sub_7eef50, sub_8c20a0
*/
void sub_8c44e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c44e0ULL || rel >= 0x8c4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4520 size=64 callers=0 calls=2
   calls: sub_7eef50, sub_8c20a0
*/
void sub_8c4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4520ULL || rel >= 0x8c4560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4560 size=32 callers=0 calls=1
   calls: sub_8c6180
*/
void sub_8c4560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4560ULL || rel >= 0x8c4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4580 size=32 callers=0 calls=1
   calls: sub_8c6180
*/
void sub_8c4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4580ULL || rel >= 0x8c45a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c45a0 size=176 callers=0 calls=5
   calls: sub_7ef2b0, sub_7efe00, sub_7efef0, sub_8c20a0, sub_8c2580
*/
void sub_8c45a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c45a0ULL || rel >= 0x8c4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4650 size=192 callers=0 calls=5
   calls: sub_7ef2b0, sub_7efe00, sub_7efef0, sub_8c20a0, sub_8c2580
*/
void sub_8c4650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4650ULL || rel >= 0x8c4710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4710 size=48 callers=0 calls=1
   calls: sub_8c62f0
*/
void sub_8c4710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4710ULL || rel >= 0x8c4740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4740 size=48 callers=0 calls=1
   calls: sub_8c62f0
*/
void sub_8c4740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4740ULL || rel >= 0x8c4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4770 size=32 callers=0 calls=1
   calls: sub_8c2620
*/
void sub_8c4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4770ULL || rel >= 0x8c4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4790 size=32 callers=0 calls=2
   calls: sub_7f09c0, sub_8c20a0
*/
void sub_8c4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4790ULL || rel >= 0x8c47b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c47b0 size=64 callers=0 calls=3
   calls: sub_7f09c0, sub_7f7ae0, sub_8c20a0
*/
void sub_8c47b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c47b0ULL || rel >= 0x8c47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c47f0 size=48 callers=0 calls=2
   calls: sub_7eef50, sub_8c20a0
*/
void sub_8c47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c47f0ULL || rel >= 0x8c4820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4820 size=48 callers=0 calls=2
   calls: sub_7f05a0, sub_8c20a0
*/
void sub_8c4820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4820ULL || rel >= 0x8c4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4850 size=48 callers=0 calls=2
   calls: sub_7f0ba0, sub_8c20a0
*/
void sub_8c4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4850ULL || rel >= 0x8c4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4880 size=32 callers=0 calls=2
   calls: sub_7ca1c0, sub_8c1f00
*/
void sub_8c4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4880ULL || rel >= 0x8c48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c48a0 size=32 callers=0 calls=2
   calls: sub_7c58b0, sub_8c1f00
*/
void sub_8c48a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c48a0ULL || rel >= 0x8c48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c48c0 size=32 callers=0 calls=2
   calls: sub_7f24b0, sub_8c20a0
*/
void sub_8c48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c48c0ULL || rel >= 0x8c48e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c48e0 size=32 callers=0 calls=2
   calls: sub_780d40, sub_8c2050
*/
void sub_8c48e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c48e0ULL || rel >= 0x8c4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4900 size=32 callers=0 calls=2
   calls: sub_780d10, sub_8c2050
*/
void sub_8c4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4900ULL || rel >= 0x8c4920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4920 size=32 callers=0 calls=2
   calls: sub_781210, sub_8c2050
*/
void sub_8c4920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4920ULL || rel >= 0x8c4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4940 size=48 callers=0 calls=2
   calls: sub_7f0ba0, sub_8c20a0
*/
void sub_8c4940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4940ULL || rel >= 0x8c4970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4970 size=176 callers=0 calls=3
   calls: sub_7eef50, sub_8c1f40, sub_8c1f50
*/
void sub_8c4970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4970ULL || rel >= 0x8c4a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4a20 size=48 callers=0 calls=2
   calls: sub_7ef4c0, sub_8c1f50
*/
void sub_8c4a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4a20ULL || rel >= 0x8c4a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4a50 size=48 callers=0 calls=2
   calls: sub_7ef4c0, sub_8c1f50
*/
void sub_8c4a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4a50ULL || rel >= 0x8c4a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4a80 size=144 callers=0 calls=4
   calls: sub_7cb3f0, sub_8c1f00, sub_8c1f60, sub_8c1fd0
*/
void sub_8c4a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4a80ULL || rel >= 0x8c4b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4b10 size=144 callers=0 calls=2
   calls: sub_7f05d0, sub_8c20a0
*/
void sub_8c4b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4b10ULL || rel >= 0x8c4ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4ba0 size=48 callers=0 calls=1
   calls: sub_8c22a0
*/
void sub_8c4ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4ba0ULL || rel >= 0x8c4bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4bd0 size=48 callers=0 calls=2
   calls: sub_7f05a0, sub_8c20a0
*/
void sub_8c4bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4bd0ULL || rel >= 0x8c4c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4c00 size=64 callers=0 calls=2
   calls: sub_7f09c0, sub_8c20a0
*/
void sub_8c4c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4c00ULL || rel >= 0x8c4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4c40 size=48 callers=0 calls=3
   calls: sub_7fe1f0, sub_7ffe20, sub_8c1f30
*/
void sub_8c4c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4c40ULL || rel >= 0x8c4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4c70 size=128 callers=0 calls=7
   calls: sub_7cc000, sub_7ee6b0, sub_7fe220, sub_802470, sub_8c1f00, sub_8c1f30, sub_8c20a0
*/
void sub_8c4c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4c70ULL || rel >= 0x8c4cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4cf0 size=176 callers=0 calls=9
   calls: sub_7cbf20, sub_7ed1b0, sub_7ef2b0, sub_7f0bb0, sub_7fc2e0, sub_7fc450, sub_8c1f00, sub_8c1f20, sub_8c2270
*/
void sub_8c4cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4cf0ULL || rel >= 0x8c4da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4da0 size=224 callers=0 calls=10
   calls: sub_7cbf20, sub_7ed1b0, sub_7ef2b0, sub_7efe00, sub_7f00f0, sub_7fc2e0, sub_7fc450, sub_8c1f00, sub_8c1f20, sub_8c2270
*/
void sub_8c4da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4da0ULL || rel >= 0x8c4e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4e80 size=96 callers=0 calls=4
   calls: sub_7ef4c0, sub_7f09c0, sub_7f7ae0, sub_8c20a0
*/
void sub_8c4e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4e80ULL || rel >= 0x8c4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4ee0 size=64 callers=0 calls=3
   calls: sub_7f0130, sub_8c1f40, sub_8c2040
*/
void sub_8c4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4ee0ULL || rel >= 0x8c4f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4f20 size=80 callers=0 calls=3
   calls: sub_7efe00, sub_7efe60, sub_8c20a0
*/
void sub_8c4f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4f20ULL || rel >= 0x8c4f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4f70 size=32 callers=0 calls=2
   calls: sub_780d70, sub_8c2050
*/
void sub_8c4f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4f70ULL || rel >= 0x8c4f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4f90 size=48 callers=0 calls=3
   calls: sub_780d70, sub_7f2520, sub_8c1f50
*/
void sub_8c4f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4f90ULL || rel >= 0x8c4fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c4fc0 size=64 callers=0 calls=3
   calls: sub_8a8620, sub_8c1f10, sub_8c20a0
*/
void sub_8c4fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c4fc0ULL || rel >= 0x8c5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5000 size=32 callers=0 calls=2
   calls: sub_7f0a90, sub_8c20a0
*/
void sub_8c5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5000ULL || rel >= 0x8c5020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5020 size=320 callers=0 calls=12
   calls: sub_7cb660, sub_7cbf20, sub_7ed1b0, sub_7ef2b0, sub_7fc2e0, sub_7fc450, sub_8c1f00, sub_8c1f20, sub_8c1f40, sub_8c1f50, sub_8c1f60, sub_8c2420
*/
void sub_8c5020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5020ULL || rel >= 0x8c5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5160 size=240 callers=0 calls=6
   calls: sub_7ee6b0, sub_7efe00, sub_7efef0, sub_8a8770, sub_8c1f10, sub_8c20a0
*/
void sub_8c5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5160ULL || rel >= 0x8c5250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5250 size=224 callers=0 calls=8
   calls: sub_7ee6b0, sub_7f2520, sub_8a86e0, sub_8c1f10, sub_8c1f40, sub_8c1f50, sub_8c20a0, sub_8c2420
*/
void sub_8c5250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5250ULL || rel >= 0x8c5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5330 size=208 callers=0 calls=2
   calls: sub_7eef50, sub_8c20a0
*/
void sub_8c5330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5330ULL || rel >= 0x8c5400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5400 size=112 callers=0 calls=3
   calls: sub_7eef50, sub_8c1f40, sub_8c20a0
*/
void sub_8c5400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5400ULL || rel >= 0x8c5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5470 size=48 callers=0 calls=2
   calls: sub_7eef50, sub_8c20a0
*/
void sub_8c5470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5470ULL || rel >= 0x8c54a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c54a0 size=672 callers=0 calls=18
   calls: sub_7cb660, sub_7cbf20, sub_7ed1b0, sub_7ee6b0, sub_7ef580, sub_7efe00, sub_7efef0, sub_7fc450, sub_7fc4a0, sub_8a86e0, sub_8c1f00, sub_8c1f10
   ... +6 more
*/
void sub_8c54a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c54a0ULL || rel >= 0x8c5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5740 size=32 callers=0 calls=2
   calls: sub_7ef2b0, sub_8c20a0
*/
void sub_8c5740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5740ULL || rel >= 0x8c5760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5760 size=48 callers=0 calls=2
   calls: sub_7ef2b0, sub_8c20a0
*/
void sub_8c5760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5760ULL || rel >= 0x8c5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5790 size=48 callers=0 calls=2
   calls: sub_7eef50, sub_8c20a0
*/
void sub_8c5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5790ULL || rel >= 0x8c57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c57c0 size=32 callers=0 calls=2
   calls: sub_7f2e70, sub_8c20a0
*/
void sub_8c57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c57c0ULL || rel >= 0x8c57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c57e0 size=32 callers=0 calls=2
   calls: sub_7eef40, sub_8c20a0
*/
void sub_8c57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c57e0ULL || rel >= 0x8c5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5800 size=32 callers=0 calls=1
   calls: sub_8c20a0
*/
void sub_8c5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5800ULL || rel >= 0x8c5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5820 size=48 callers=0 calls=1
   calls: sub_8a82d0
*/
void sub_8c5820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5820ULL || rel >= 0x8c5850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5850 size=48 callers=0 calls=1
   calls: sub_8a82d0
*/
void sub_8c5850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5850ULL || rel >= 0x8c5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5880 size=48 callers=0 calls=1
   calls: sub_8a82d0
*/
void sub_8c5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5880ULL || rel >= 0x8c58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c58b0 size=48 callers=0 calls=1
   calls: sub_8a82d0
*/
void sub_8c58b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c58b0ULL || rel >= 0x8c58e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c58e0 size=64 callers=0 calls=3
   calls: sub_8a8690, sub_8c1f10, sub_8c20f0
*/
void sub_8c58e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c58e0ULL || rel >= 0x8c5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5920 size=80 callers=0 calls=2
   calls: sub_7eef50, sub_8c20a0
*/
void sub_8c5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5920ULL || rel >= 0x8c5970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5970 size=80 callers=0 calls=2
   calls: sub_7eef50, sub_8c20a0
*/
void sub_8c5970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5970ULL || rel >= 0x8c59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c59c0 size=80 callers=0 calls=2
   calls: sub_7eef50, sub_8c20a0
*/
void sub_8c59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c59c0ULL || rel >= 0x8c5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5a10 size=48 callers=0 calls=2
   calls: sub_7f0ad0, sub_8c20a0
*/
void sub_8c5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5a10ULL || rel >= 0x8c5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5a40 size=64 callers=0 calls=2
   calls: sub_7f2340, sub_8c20a0
*/
void sub_8c5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5a40ULL || rel >= 0x8c5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5a80 size=64 callers=0 calls=3
   calls: sub_7fe1f0, sub_800130, sub_8c1f30
*/
void sub_8c5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5a80ULL || rel >= 0x8c5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5ac0 size=32 callers=0 calls=2
   calls: sub_7f2580, sub_8c20a0
*/
void sub_8c5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5ac0ULL || rel >= 0x8c5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5ae0 size=32 callers=0 calls=2
   calls: sub_7cb2e0, sub_8c1f00
*/
void sub_8c5ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5ae0ULL || rel >= 0x8c5b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5b00 size=16 callers=0 calls=0
*/
void sub_8c5b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5b00ULL || rel >= 0x8c5b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5b10 size=16 callers=0 calls=0
*/
void sub_8c5b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5b10ULL || rel >= 0x8c5b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5b20 size=48 callers=0 calls=2
   calls: sub_7f0b30, sub_8c20a0
*/
void sub_8c5b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5b20ULL || rel >= 0x8c5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5b50 size=48 callers=0 calls=3
   calls: sub_764ca0, sub_7ef330, sub_8c20a0
*/
void sub_8c5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5b50ULL || rel >= 0x8c5b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5b80 size=32 callers=0 calls=2
   calls: sub_7c58b0, sub_8c1f00
*/
void sub_8c5b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5b80ULL || rel >= 0x8c5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5ba0 size=176 callers=0 calls=4
   calls: sub_8c1f10, sub_8c1f30, sub_8c20a0, sub_8c63e0
*/
void sub_8c5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5ba0ULL || rel >= 0x8c5c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5c50 size=320 callers=0 calls=9
   calls: sub_780d40, sub_7cb490, sub_7cce80, sub_7ee6b0, sub_7eef50, sub_8a8290, sub_8c1f00, sub_8c20a0, sub_8c2270
*/
void sub_8c5c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5c50ULL || rel >= 0x8c5d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5d90 size=64 callers=0 calls=2
   calls: sub_7f2650, sub_8c20a0
*/
void sub_8c5d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5d90ULL || rel >= 0x8c5dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5dd0 size=32 callers=0 calls=1
   calls: sub_8c2050
*/
void sub_8c5dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5dd0ULL || rel >= 0x8c5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5df0 size=32 callers=0 calls=1
   calls: sub_8c2060
*/
void sub_8c5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5df0ULL || rel >= 0x8c5e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5e10 size=144 callers=0 calls=5
   calls: sub_7ee6b0, sub_7fe290, sub_800680, sub_8c1f30, sub_8c20a0
*/
void sub_8c5e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5e10ULL || rel >= 0x8c5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5ea0 size=64 callers=0 calls=4
   calls: sub_7ed1b0, sub_7fc630, sub_8c1f20, sub_8c2270
*/
void sub_8c5ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5ea0ULL || rel >= 0x8c5ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5ee0 size=64 callers=0 calls=3
   calls: sub_7f8070, sub_8c1f40, sub_8c2050
*/
void sub_8c5ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5ee0ULL || rel >= 0x8c5f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c5f20 size=240 callers=0 calls=6
   calls: sub_7ee6b0, sub_7efe00, sub_7efef0, sub_8a8770, sub_8c1f10, sub_8c20a0
*/
void sub_8c5f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5f20ULL || rel >= 0x8c6010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6010 size=48 callers=0 calls=2
   calls: sub_7ee6c0, sub_8c20a0
*/
void sub_8c6010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6010ULL || rel >= 0x8c6040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6040 size=48 callers=0 calls=3
   calls: sub_786d90, sub_7f09c0, sub_8c20a0
*/
void sub_8c6040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6040ULL || rel >= 0x8c6070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6070 size=48 callers=0 calls=4
   calls: sub_7ee810, sub_7f36f0, sub_7fc800, sub_8c2070
*/
void sub_8c6070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6070ULL || rel >= 0x8c60a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c60a0 size=112 callers=0 calls=5
   calls: sub_7c56e0, sub_7cb490, sub_7ee6b0, sub_8c1f00, sub_8c1f40
*/
void sub_8c60a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c60a0ULL || rel >= 0x8c6110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6110 size=80 callers=0 calls=4
   calls: sub_7cd440, sub_7ee6b0, sub_8c1f00, sub_8c20a0
*/
void sub_8c6110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6110ULL || rel >= 0x8c6160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6160 size=32 callers=0 calls=1
   calls: sub_8c1ee0
*/
void sub_8c6160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6160ULL || rel >= 0x8c6180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6180 size=176 callers=2 calls=7
   calls: sub_7ee6b0, sub_7eef50, sub_8a86e0, sub_8c1f10, sub_8c1f40, sub_8c1f50, sub_8c2050
*/
void sub_8c6180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6180ULL || rel >= 0x8c6230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6230 size=192 callers=2 calls=8
   calls: sub_7cbf20, sub_7ed1b0, sub_7ef6a0, sub_7fc2e0, sub_7fc450, sub_8c1f00, sub_8c1f20, sub_8c2270
*/
void sub_8c6230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6230ULL || rel >= 0x8c62f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c62f0 size=240 callers=2 calls=6
   calls: sub_781210, sub_7ef2b0, sub_7efe00, sub_7efef0, sub_8c20a0, sub_8c2580
*/
void sub_8c62f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c62f0ULL || rel >= 0x8c63e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c63e0 size=240 callers=2 calls=8
   calls: sub_780d10, sub_780ec0, sub_7ee6b0, sub_7efe00, sub_7efef0, sub_7f0130, sub_7f75d0, sub_8a8770
*/
void sub_8c63e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c63e0ULL || rel >= 0x8c64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c64d0 size=128 callers=0 calls=0
*/
void sub_8c64d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c64d0ULL || rel >= 0x8c6550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6550 size=64 callers=1 calls=1
   calls: sub_66afd0
*/
void sub_8c6550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6550ULL || rel >= 0x8c6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6590 size=16 callers=0 calls=0
*/
void sub_8c6590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6590ULL || rel >= 0x8c65a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c65a0 size=16 callers=0 calls=0
*/
void sub_8c65a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c65a0ULL || rel >= 0x8c65b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c65b0 size=16 callers=0 calls=0
*/
void sub_8c65b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c65b0ULL || rel >= 0x8c65c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c65c0 size=16 callers=0 calls=0
*/
void sub_8c65c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c65c0ULL || rel >= 0x8c65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c65d0 size=16 callers=0 calls=0
*/
void sub_8c65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c65d0ULL || rel >= 0x8c65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c65e0 size=16 callers=0 calls=0
*/
void sub_8c65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c65e0ULL || rel >= 0x8c65f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c65f0 size=16 callers=1 calls=0
*/
void sub_8c65f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c65f0ULL || rel >= 0x8c6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6600 size=240 callers=0 calls=0
*/
void sub_8c6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6600ULL || rel >= 0x8c66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c66f0 size=16 callers=0 calls=0
*/
void sub_8c66f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c66f0ULL || rel >= 0x8c6700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6700 size=16 callers=0 calls=0
*/
void sub_8c6700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6700ULL || rel >= 0x8c6710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6710 size=192 callers=3 calls=0
*/
void sub_8c6710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6710ULL || rel >= 0x8c67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c67d0 size=16 callers=0 calls=0
*/
void sub_8c67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c67d0ULL || rel >= 0x8c67e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c67e0 size=16 callers=0 calls=0
*/
void sub_8c67e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c67e0ULL || rel >= 0x8c67f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c67f0 size=16 callers=0 calls=0
*/
void sub_8c67f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c67f0ULL || rel >= 0x8c6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6800 size=16 callers=0 calls=0
*/
void sub_8c6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6800ULL || rel >= 0x8c6810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6810 size=16 callers=3 calls=0
*/
void sub_8c6810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6810ULL || rel >= 0x8c6820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6820 size=16 callers=3 calls=0
*/
void sub_8c6820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6820ULL || rel >= 0x8c6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6830 size=64 callers=1 calls=0
*/
void sub_8c6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6830ULL || rel >= 0x8c6870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6870 size=64 callers=3 calls=0
*/
void sub_8c6870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6870ULL || rel >= 0x8c68b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c68b0 size=16 callers=3 calls=0
*/
void sub_8c68b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c68b0ULL || rel >= 0x8c68c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c68c0 size=608 callers=1 calls=4
   calls: sub_7f8c00, sub_8c1770, sub_8c1d40, sub_8c6710
*/
void sub_8c68c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c68c0ULL || rel >= 0x8c6b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6b20 size=176 callers=0 calls=0
*/
void sub_8c6b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6b20ULL || rel >= 0x8c6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6bd0 size=192 callers=0 calls=0
*/
void sub_8c6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6bd0ULL || rel >= 0x8c6c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6c90 size=176 callers=0 calls=0
*/
void sub_8c6c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6c90ULL || rel >= 0x8c6d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6d40 size=192 callers=0 calls=0
*/
void sub_8c6d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6d40ULL || rel >= 0x8c6e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6e00 size=128 callers=1 calls=3
   calls: sub_7cb490, sub_7ed1e0, sub_7fe1d0
*/
void sub_8c6e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6e00ULL || rel >= 0x8c6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6e80 size=32 callers=1 calls=0
*/
void sub_8c6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6e80ULL || rel >= 0x8c6ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6ea0 size=16 callers=0 calls=0
*/
void sub_8c6ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6ea0ULL || rel >= 0x8c6eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6eb0 size=64 callers=0 calls=0
*/
void sub_8c6eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6eb0ULL || rel >= 0x8c6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c6ef0 size=1296 callers=0 calls=26
   calls: sub_780ec0, sub_7ca1c0, sub_7caa70, sub_7cac40, sub_7cacb0, sub_7cb3b0, sub_7cb3d0, sub_7ed5e0, sub_7ee6c0, sub_7ee800, sub_7ef2b0, sub_7efe00
   ... +14 more
*/
void sub_8c6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c6ef0ULL || rel >= 0x8c7400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c7400 size=1200 callers=1 calls=1
   calls: sub_7f8c20
*/
void sub_8c7400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c7400ULL || rel >= 0x8c78b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c78b0 size=1712 callers=1 calls=9
   calls: sub_7cb3f0, sub_7ee6c0, sub_7efe00, sub_7efef0, sub_7f8320, sub_7f8c20, sub_7fe1d0, sub_82d9a0, sub_8c7f60
*/
void sub_8c78b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c78b0ULL || rel >= 0x8c7f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c7f60 size=304 callers=1 calls=8
   calls: sub_7811e0, sub_7cb3f0, sub_7cc070, sub_7cd220, sub_7ee6c0, sub_7efef0, sub_82d9a0, sub_8c8090
*/
void sub_8c7f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c7f60ULL || rel >= 0x8c8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8090 size=544 callers=2 calls=1
   calls: sub_7cd220
*/
void sub_8c8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8090ULL || rel >= 0x8c82b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c82b0 size=16 callers=1 calls=0
*/
void sub_8c82b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c82b0ULL || rel >= 0x8c82c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c82c0 size=16 callers=1 calls=0
*/
void sub_8c82c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c82c0ULL || rel >= 0x8c82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c82d0 size=16 callers=1 calls=0
*/
void sub_8c82d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c82d0ULL || rel >= 0x8c82e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c82e0 size=32 callers=1 calls=0
*/
void sub_8c82e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c82e0ULL || rel >= 0x8c8300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8300 size=128 callers=0 calls=0
*/
void sub_8c8300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8300ULL || rel >= 0x8c8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8380 size=544 callers=1 calls=4
   calls: sub_7f8c00, sub_8c1770, sub_8c1d40, sub_8c6710
*/
void sub_8c8380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8380ULL || rel >= 0x8c85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c85a0 size=176 callers=0 calls=0
*/
void sub_8c85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c85a0ULL || rel >= 0x8c8650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8650 size=192 callers=0 calls=0
*/
void sub_8c8650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8650ULL || rel >= 0x8c8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8710 size=176 callers=0 calls=0
*/
void sub_8c8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8710ULL || rel >= 0x8c87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c87c0 size=192 callers=0 calls=0
*/
void sub_8c87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c87c0ULL || rel >= 0x8c8880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8880 size=96 callers=1 calls=2
   calls: sub_7cc890, sub_7ee6b0
*/
void sub_8c8880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8880ULL || rel >= 0x8c88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c88e0 size=560 callers=0 calls=8
   calls: sub_7d7600, sub_7d7cf0, sub_7f8c20, sub_8c1c10, sub_8c1d30, sub_8c6870, sub_8c68b0, sub_8c8b10
*/
void sub_8c88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c88e0ULL || rel >= 0x8c8b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8b10 size=352 callers=1 calls=10
   calls: sub_7cb3b0, sub_7cb420, sub_7d72b0, sub_7ed5e0, sub_7ee6b0, sub_7fc450, sub_7fe1d0, sub_8c1b50, sub_8c6810, sub_8c6820
*/
void sub_8c8b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8b10ULL || rel >= 0x8c8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8c70 size=16 callers=0 calls=0
*/
void sub_8c8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8c70ULL || rel >= 0x8c8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8c80 size=16 callers=1 calls=0
*/
void sub_8c8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8c80ULL || rel >= 0x8c8c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8c90 size=128 callers=0 calls=0
*/
void sub_8c8c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8c90ULL || rel >= 0x8c8d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8d10 size=400 callers=1 calls=4
   calls: sub_7c56e0, sub_7cc1b0, sub_7ccf80, sub_7f8c20
*/
void sub_8c8d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8d10ULL || rel >= 0x8c8ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8ea0 size=128 callers=0 calls=0
*/
void sub_8c8ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8ea0ULL || rel >= 0x8c8f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c8f20 size=400 callers=1 calls=11
   calls: sub_7c5910, sub_7c7a00, sub_7ca0a0, sub_7ed1a0, sub_7ee6b0, sub_7eef50, sub_7ef2b0, sub_7ef6a0, sub_7fc2e0, sub_7fc430, sub_7fe1d0
*/
void sub_8c8f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c8f20ULL || rel >= 0x8c90b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c90b0 size=1328 callers=1 calls=28
   calls: sub_12f6970, sub_1453cf0, sub_762890, sub_762930, sub_762d70, sub_762d90, sub_7847d0, sub_7c7a00, sub_7ca110, sub_7ca1c0, sub_7caa70, sub_7cad10
   ... +16 more
*/
void sub_8c90b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c90b0ULL || rel >= 0x8c95e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c95e0 size=208 callers=1 calls=4
   calls: sub_762d70, sub_762d90, sub_7847d0, sub_7f7ae0
*/
void sub_8c95e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c95e0ULL || rel >= 0x8c96b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c96b0 size=208 callers=1 calls=5
   calls: sub_764b40, sub_7651c0, sub_7655f0, sub_7656d0, sub_7847d0
*/
void sub_8c96b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c96b0ULL || rel >= 0x8c9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c9780 size=192 callers=2 calls=4
   calls: sub_762930, sub_762940, sub_763d00, sub_76c060
*/
void sub_8c9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c9780ULL || rel >= 0x8c9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c9840 size=224 callers=1 calls=6
   calls: sub_7cc410, sub_7cc440, sub_892bd0, sub_892be0, sub_892bf0, sub_892e60
*/
void sub_8c9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c9840ULL || rel >= 0x8c9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c9920 size=128 callers=1 calls=5
   calls: sub_7cb490, sub_7ed1e0, sub_7ef250, sub_7fe1d0, sub_804820
*/
void sub_8c9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c9920ULL || rel >= 0x8c99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c99a0 size=128 callers=0 calls=0
*/
void sub_8c99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c99a0ULL || rel >= 0x8c9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c9a20 size=80 callers=2 calls=3
   calls: sub_7c58b0, sub_7ca1c0, sub_7fc190
*/
void sub_8c9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c9a20ULL || rel >= 0x8c9a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c9a70 size=368 callers=0 calls=12
   calls: sub_762930, sub_762940, sub_7c58b0, sub_7c7a00, sub_7ca1c0, sub_7cb490, sub_7cb850, sub_7cbf80, sub_7cce80, sub_7ee6b0, sub_7ef330, sub_7fc190
*/
void sub_8c9a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c9a70ULL || rel >= 0x8c9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c9be0 size=448 callers=1 calls=15
   calls: sub_7c58b0, sub_7c7a00, sub_7ca1c0, sub_7cb490, sub_7cb850, sub_7cce80, sub_7ed1b0, sub_7ee6b0, sub_7efe00, sub_7f0010, sub_7f0080, sub_7fc190
   ... +3 more
*/
void sub_8c9be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c9be0ULL || rel >= 0x8c9da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c9da0 size=128 callers=0 calls=0
*/
void sub_8c9da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c9da0ULL || rel >= 0x8c9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c9e20 size=160 callers=1 calls=0
*/
void sub_8c9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c9e20ULL || rel >= 0x8c9ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008c9ec0 size=512 callers=3 calls=1
   calls: sub_8a79a0
*/
void sub_8c9ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c9ec0ULL || rel >= 0x8ca0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ca0c0 size=352 callers=7 calls=2
   calls: sub_8a7910, sub_8a79a0
*/
void sub_8ca0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ca0c0ULL || rel >= 0x8ca220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ca220 size=128 callers=0 calls=0
*/
void sub_8ca220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ca220ULL || rel >= 0x8ca2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ca2a0 size=224 callers=1 calls=1
   calls: sub_941260
*/
void sub_8ca2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ca2a0ULL || rel >= 0x8ca380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ca380 size=224 callers=0 calls=0
*/
void sub_8ca380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ca380ULL || rel >= 0x8ca460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ca460 size=176 callers=0 calls=0
*/
void sub_8ca460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ca460ULL || rel >= 0x8ca510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ca510 size=416 callers=0 calls=1
   calls: sub_1c0
   ref: common/gwazamessage.dat
   ref: common/btl_std.dat
   ref: common/btl_set.dat
   ref: common/btl_talk.dat
   ref: common/btl_attack.dat
*/
void gwazamessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ca510ULL || rel >= 0x8ca6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ca6b0 size=1424 callers=1 calls=4
   calls: sub_1307dd0, sub_13118e0, sub_67b990, sub_c4ac70
*/
void sub_8ca6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ca6b0ULL || rel >= 0x8cac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cac40 size=128 callers=1 calls=1
   calls: sub_1307dd0
*/
void sub_8cac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cac40ULL || rel >= 0x8cacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cacc0 size=112 callers=1 calls=1
   calls: sub_1308340
*/
void sub_8cacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cacc0ULL || rel >= 0x8cad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cad30 size=240 callers=1 calls=0
*/
void sub_8cad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cad30ULL || rel >= 0x8cae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cae20 size=160 callers=1 calls=3
   calls: sub_7c56e0, sub_7ed220, sub_7ef330
*/
void sub_8cae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cae20ULL || rel >= 0x8caec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008caec0 size=240 callers=1 calls=5
   calls: sub_1313fa0, sub_7c56e0, sub_7cc000, sub_7ed220, sub_7ef330
*/
void sub_8caec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8caec0ULL || rel >= 0x8cafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cafb0 size=208 callers=2 calls=4
   calls: sub_1313310, sub_7ca170, sub_7ccf00, sub_7ccf60
*/
void sub_8cafb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cafb0ULL || rel >= 0x8cb080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cb080 size=208 callers=11 calls=6
   calls: sub_1313310, sub_13149a0, sub_7ca170, sub_7ca190, sub_7ccca0, sub_7cced0
*/
void sub_8cb080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cb080ULL || rel >= 0x8cb150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cb150 size=288 callers=9 calls=1
   calls: sub_8cb270
*/
void sub_8cb150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cb150ULL || rel >= 0x8cb270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cb270 size=448 callers=3 calls=0
*/
void sub_8cb270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cb270ULL || rel >= 0x8cb430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cb430 size=96 callers=0 calls=1
   calls: sub_7cb320
*/
void sub_8cb430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cb430ULL || rel >= 0x8cb490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cb490 size=304 callers=0 calls=4
   calls: sub_67d080, sub_7ca170, sub_7cb850, sub_8cb970
*/
void sub_8cb490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cb490ULL || rel >= 0x8cb5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cb5c0 size=176 callers=0 calls=1
   calls: sub_67d080
*/
void sub_8cb5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cb5c0ULL || rel >= 0x8cb670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cb670 size=144 callers=0 calls=0
*/
void sub_8cb670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cb670ULL || rel >= 0x8cb700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cb700 size=176 callers=0 calls=1
   calls: sub_7cb850
*/
void sub_8cb700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cb700ULL || rel >= 0x8cb7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cb7b0 size=448 callers=0 calls=10
   calls: sub_130a6d0, sub_130a9c0, sub_130abf0, sub_1314400, sub_67bdb0, sub_67c470, sub_67d080, sub_8cb080, sub_8cb970, trtype
*/
void sub_8cb7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cb7b0ULL || rel >= 0x8cb970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cb970 size=1040 callers=10 calls=23
   calls: sub_130a6d0, sub_130a9c0, sub_130abf0, sub_130ac20, sub_1313500, sub_1313580, sub_1314400, sub_1315270, sub_1315b90, sub_67bdb0, sub_67c470, sub_7c56e0
   ... +11 more
*/
void sub_8cb970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cb970ULL || rel >= 0x8cbd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cbd80 size=336 callers=3 calls=0
*/
void sub_8cbd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cbd80ULL || rel >= 0x8cbed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cbed0 size=272 callers=0 calls=7
   calls: sub_1313580, sub_67d080, sub_7cb490, sub_7ed220, sub_7ef330, sub_8cb080, sub_8cc7b0
*/
void sub_8cbed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cbed0ULL || rel >= 0x8cbfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cbfe0 size=256 callers=0 calls=7
   calls: sub_1313580, sub_67d080, sub_7cb490, sub_7ed220, sub_7ef330, sub_8cb080, sub_8cc7b0
*/
void sub_8cbfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cbfe0ULL || rel >= 0x8cc0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cc0e0 size=304 callers=0 calls=8
   calls: sub_1313580, sub_1315270, sub_67d080, sub_7cb490, sub_7ed220, sub_7ef330, sub_8cb080, sub_8cc7b0
*/
void sub_8cc0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc0e0ULL || rel >= 0x8cc210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cc210 size=256 callers=0 calls=7
   calls: sub_1313580, sub_67d080, sub_7cb490, sub_7ed220, sub_7ef330, sub_8cb080, sub_8cc7b0
*/
void sub_8cc210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc210ULL || rel >= 0x8cc310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cc310 size=288 callers=0 calls=3
   calls: sub_67d080, sub_8cb970, sub_8cc7b0
*/
void sub_8cc310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc310ULL || rel >= 0x8cc430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cc430 size=304 callers=0 calls=2
   calls: sub_67d080, sub_8cc560
*/
void sub_8cc430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc430ULL || rel >= 0x8cc560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cc560 size=240 callers=2 calls=6
   calls: sub_130a6d0, sub_130a9c0, sub_130abf0, sub_130ac20, sub_67bdb0, sub_67c470
*/
void sub_8cc560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc560ULL || rel >= 0x8cc650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cc650 size=352 callers=0 calls=3
   calls: sub_67d080, sub_8cb970, sub_8cc7b0
*/
void sub_8cc650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc650ULL || rel >= 0x8cc7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cc7b0 size=192 callers=10 calls=6
   calls: sub_7c58b0, sub_7ca1c0, sub_7cb410, sub_7cb420, sub_7cb490, sub_8cc870
*/
void sub_8cc7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc7b0ULL || rel >= 0x8cc870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cc870 size=192 callers=1 calls=5
   calls: sub_7c56e0, sub_7cb490, sub_7ed1e0, sub_7eef40, sub_84b8d0
*/
void sub_8cc870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc870ULL || rel >= 0x8cc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cc930 size=112 callers=2 calls=1
   calls: sub_8cc9a0
*/
void sub_8cc930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc930ULL || rel >= 0x8cc9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cc9a0 size=1200 callers=1 calls=3
   calls: sub_7ed1e0, sub_7eef40, sub_7f3350
*/
void sub_8cc9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc9a0ULL || rel >= 0x8cce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cce50 size=240 callers=0 calls=7
   calls: sub_1313580, sub_67d080, sub_7cb490, sub_7ed220, sub_7ef330, sub_8cb080, sub_8cc7b0
*/
void sub_8cce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cce50ULL || rel >= 0x8ccf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ccf40 size=240 callers=0 calls=7
   calls: sub_1313580, sub_67d080, sub_7cb490, sub_7ed220, sub_7ef330, sub_8cb080, sub_8cc7b0
*/
void sub_8ccf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ccf40ULL || rel >= 0x8cd030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cd030 size=80 callers=1 calls=2
   calls: sub_8cb080, trmsg
*/
void sub_8cd030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cd030ULL || rel >= 0x8cd080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cd080 size=32 callers=0 calls=0
*/
void sub_8cd080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cd080ULL || rel >= 0x8cd0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cd0a0 size=400 callers=2 calls=5
   calls: sub_1307dd0, sub_67b990, sub_67d080, sub_767570, sub_c4ac70
*/
void sub_8cd0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cd0a0ULL || rel >= 0x8cd230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cd230 size=256 callers=4 calls=2
   calls: sub_67d080, sub_8cb970
*/
void sub_8cd230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cd230ULL || rel >= 0x8cd330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cd330 size=160 callers=2 calls=1
   calls: sub_67d080
*/
void sub_8cd330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cd330ULL || rel >= 0x8cd3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cd3d0 size=32 callers=9 calls=0
*/
void sub_8cd3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cd3d0ULL || rel >= 0x8cd3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cd3f0 size=352 callers=1 calls=6
   calls: sub_7e37b0, sub_7fc170, sub_8cd550, sub_8cd680, sub_8cd910, sub_8cdaa0
*/
void sub_8cd3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cd3f0ULL || rel >= 0x8cd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cd550 size=304 callers=1 calls=0
*/
void sub_8cd550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cd550ULL || rel >= 0x8cd680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cd680 size=656 callers=1 calls=3
   calls: sub_7d0b90, sub_7e3b50, sub_8cdca0
*/
void sub_8cd680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cd680ULL || rel >= 0x8cd910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cd910 size=400 callers=1 calls=3
   calls: sub_7e3b50, sub_7faf80, sub_8ca0c0
*/
void sub_8cd910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cd910ULL || rel >= 0x8cdaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cdaa0 size=512 callers=1 calls=1
   calls: sub_8cddf0
*/
void sub_8cdaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cdaa0ULL || rel >= 0x8cdca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cdca0 size=336 callers=5 calls=4
   calls: sub_7faf80, sub_7fb740, sub_8ca0c0, sub_8cdee0
*/
void sub_8cdca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cdca0ULL || rel >= 0x8cddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cddf0 size=240 callers=5 calls=3
   calls: sub_7faf80, sub_8ca0c0, sub_8cdee0
*/
void sub_8cddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cddf0ULL || rel >= 0x8cdee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cdee0 size=368 callers=2 calls=1
   calls: sub_7ce220
*/
void sub_8cdee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cdee0ULL || rel >= 0x8ce050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce050 size=128 callers=0 calls=0
*/
void sub_8ce050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce050ULL || rel >= 0x8ce0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce0d0 size=64 callers=0 calls=0
*/
void sub_8ce0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce0d0ULL || rel >= 0x8ce110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce110 size=160 callers=0 calls=0
*/
void sub_8ce110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce110ULL || rel >= 0x8ce1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce1b0 size=160 callers=0 calls=0
*/
void sub_8ce1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce1b0ULL || rel >= 0x8ce250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce250 size=144 callers=0 calls=1
   calls: sub_1c0
*/
void sub_8ce250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce250ULL || rel >= 0x8ce2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce2e0 size=656 callers=1 calls=1
   calls: sub_891a20
*/
void sub_8ce2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce2e0ULL || rel >= 0x8ce570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce570 size=320 callers=1 calls=0
*/
void sub_8ce570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce570ULL || rel >= 0x8ce6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce6b0 size=16 callers=2 calls=0
*/
void sub_8ce6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce6b0ULL || rel >= 0x8ce6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce6c0 size=32 callers=5 calls=0
*/
void sub_8ce6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce6c0ULL || rel >= 0x8ce6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce6e0 size=32 callers=6 calls=0
*/
void sub_8ce6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce6e0ULL || rel >= 0x8ce700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce700 size=16 callers=1 calls=0
*/
void sub_8ce700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce700ULL || rel >= 0x8ce710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce710 size=16 callers=1 calls=0
*/
void sub_8ce710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce710ULL || rel >= 0x8ce720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce720 size=32 callers=1 calls=0
*/
void sub_8ce720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce720ULL || rel >= 0x8ce740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce740 size=16 callers=1 calls=0
*/
void sub_8ce740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce740ULL || rel >= 0x8ce750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce750 size=368 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_7c2da0
*/
void sub_8ce750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce750ULL || rel >= 0x8ce8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce8c0 size=32 callers=5 calls=0
*/
void sub_8ce8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce8c0ULL || rel >= 0x8ce8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ce8e0 size=352 callers=1 calls=0
*/
void sub_8ce8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce8e0ULL || rel >= 0x8cea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cea40 size=64 callers=0 calls=1
   calls: sub_8ce8e0
*/
void sub_8cea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cea40ULL || rel >= 0x8cea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cea80 size=1264 callers=1 calls=1
   calls: sub_65f1c0
*/
void sub_8cea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cea80ULL || rel >= 0x8cef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cef70 size=112 callers=1 calls=3
   calls: sub_8cefe0, sub_8cf140, sub_8cf230
*/
void sub_8cef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cef70ULL || rel >= 0x8cefe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cefe0 size=352 callers=1 calls=1
   calls: sub_7c2d90
*/
void sub_8cefe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cefe0ULL || rel >= 0x8cf140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf140 size=240 callers=1 calls=1
   calls: sub_7c2db0
*/
void sub_8cf140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf140ULL || rel >= 0x8cf230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf230 size=720 callers=1 calls=0
*/
void sub_8cf230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf230ULL || rel >= 0x8cf500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf500 size=64 callers=5 calls=0
*/
void sub_8cf500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf500ULL || rel >= 0x8cf540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf540 size=64 callers=5 calls=0
*/
void sub_8cf540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf540ULL || rel >= 0x8cf580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf580 size=64 callers=5 calls=0
*/
void sub_8cf580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf580ULL || rel >= 0x8cf5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf5c0 size=16 callers=0 calls=0
*/
void sub_8cf5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf5c0ULL || rel >= 0x8cf5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf5d0 size=16 callers=0 calls=0
*/
void sub_8cf5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf5d0ULL || rel >= 0x8cf5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf5e0 size=16 callers=0 calls=0
*/
void sub_8cf5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf5e0ULL || rel >= 0x8cf5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf5f0 size=32 callers=0 calls=0
*/
void sub_8cf5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf5f0ULL || rel >= 0x8cf610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf610 size=160 callers=1 calls=1
   calls: sub_8cf6b0
*/
void sub_8cf610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf610ULL || rel >= 0x8cf6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf6b0 size=288 callers=1 calls=3
   calls: sub_8d01a0, sub_c38350, sub_e9db40
*/
void sub_8cf6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf6b0ULL || rel >= 0x8cf7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf7d0 size=160 callers=0 calls=0
*/
void sub_8cf7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf7d0ULL || rel >= 0x8cf870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf870 size=160 callers=0 calls=0
*/
void sub_8cf870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf870ULL || rel >= 0x8cf910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf910 size=160 callers=0 calls=0
*/
void sub_8cf910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf910ULL || rel >= 0x8cf9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cf9b0 size=160 callers=0 calls=0
*/
void sub_8cf9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cf9b0ULL || rel >= 0x8cfa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cfa50 size=160 callers=0 calls=0
*/
void sub_8cfa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cfa50ULL || rel >= 0x8cfaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cfaf0 size=160 callers=0 calls=0
*/
void sub_8cfaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cfaf0ULL || rel >= 0x8cfb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cfb90 size=16 callers=0 calls=0
*/
void sub_8cfb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cfb90ULL || rel >= 0x8cfba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cfba0 size=352 callers=0 calls=1
   calls: sub_14db4a0
*/
void sub_8cfba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cfba0ULL || rel >= 0x8cfd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cfd00 size=16 callers=0 calls=0
*/
void sub_8cfd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cfd00ULL || rel >= 0x8cfd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cfd10 size=544 callers=0 calls=4
   calls: sub_104dbb0, sub_12c9b90, sub_8cff30, sub_8d0a70
*/
void sub_8cfd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cfd10ULL || rel >= 0x8cff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008cff30 size=272 callers=2 calls=3
   calls: sub_672c10, sub_8d02c0, sub_c386f0
*/
void sub_8cff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cff30ULL || rel >= 0x8d0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0040 size=16 callers=0 calls=0
*/
void sub_8d0040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0040ULL || rel >= 0x8d0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0050 size=16 callers=0 calls=0
*/
void sub_8d0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0050ULL || rel >= 0x8d0060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0060 size=16 callers=0 calls=0
*/
void sub_8d0060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0060ULL || rel >= 0x8d0070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0070 size=304 callers=0 calls=0
*/
void sub_8d0070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0070ULL || rel >= 0x8d01a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d01a0 size=288 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_8d01a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d01a0ULL || rel >= 0x8d02c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d02c0 size=240 callers=1 calls=2
   calls: sub_8d03b0, sub_e7b660
*/
void sub_8d02c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d02c0ULL || rel >= 0x8d03b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d03b0 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_8d0490, sub_e7b5e0
*/
void sub_8d03b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d03b0ULL || rel >= 0x8d0490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0490 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_8d0490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0490ULL || rel >= 0x8d0580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0580 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_8d0580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0580ULL || rel >= 0x8d0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0600 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_8d0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0600ULL || rel >= 0x8d0770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0770 size=96 callers=0 calls=1
   calls: sub_8d0990
*/
void sub_8d0770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0770ULL || rel >= 0x8d07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d07d0 size=16 callers=0 calls=0
*/
void sub_8d07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d07d0ULL || rel >= 0x8d07e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d07e0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_8d07e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d07e0ULL || rel >= 0x8d0880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0880 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_8d0880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0880ULL || rel >= 0x8d0940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0940 size=16 callers=0 calls=0
*/
void sub_8d0940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0940ULL || rel >= 0x8d0950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0950 size=16 callers=0 calls=0
*/
void sub_8d0950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0950ULL || rel >= 0x8d0960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0960 size=16 callers=0 calls=0
*/
void sub_8d0960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0960ULL || rel >= 0x8d0970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0970 size=32 callers=0 calls=0
*/
void sub_8d0970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0970ULL || rel >= 0x8d0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0990 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_8d0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0990ULL || rel >= 0x8d0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0a70 size=240 callers=1 calls=1
   calls: sub_c39c40
*/
void sub_8d0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0a70ULL || rel >= 0x8d0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0b60 size=128 callers=0 calls=0
*/
void sub_8d0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0b60ULL || rel >= 0x8d0be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0be0 size=288 callers=1 calls=3
   calls: sub_8ddc00, sub_8dfd80, sub_e7c210
*/
void sub_8d0be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0be0ULL || rel >= 0x8d0d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0d00 size=32 callers=4 calls=1
   calls: sub_8dfba0
*/
void sub_8d0d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0d00ULL || rel >= 0x8d0d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0d20 size=32 callers=2 calls=1
   calls: sub_8dfba0
*/
void sub_8d0d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0d20ULL || rel >= 0x8d0d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0d40 size=48 callers=11 calls=1
   calls: sub_14db6e0
*/
void sub_8d0d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0d40ULL || rel >= 0x8d0d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0d70 size=192 callers=2 calls=1
   calls: sub_8de8b0
*/
void sub_8d0d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0d70ULL || rel >= 0x8d0e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0e30 size=224 callers=7 calls=1
   calls: sub_8d2a20
*/
void sub_8d0e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0e30ULL || rel >= 0x8d0f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0f10 size=160 callers=10 calls=1
   calls: sub_8e0ae0
*/
void sub_8d0f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0f10ULL || rel >= 0x8d0fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d0fb0 size=864 callers=0 calls=11
   calls: regulation_preset_core__d, sub_78f150, sub_78f240, sub_79ab20, sub_79b250, sub_8d1310, sub_8d2d20, sub_8d30e0, sub_8d3440, sub_e7c0f0, sub_e7e890
   ref: CommonOptionBar
   ref: common/btl_pokeselect.dat
   ref: ViewAllParty
   ref: ViewTimer
   ref: ViewSelect
   ref: ViewSysMsg
*/
void CommonOptionBar(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d0fb0ULL || rel >= 0x8d1310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d1310 size=400 callers=1 calls=3
   calls: sub_8d0be0, sub_8d2bf0, sub_e7c160
*/
void sub_8d1310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d1310ULL || rel >= 0x8d14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d14a0 size=256 callers=0 calls=1
   calls: sub_8d2bf0
*/
void sub_8d14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d14a0ULL || rel >= 0x8d15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d15a0 size=240 callers=0 calls=2
   calls: sub_8d2bf0, sub_8dde50
*/
void sub_8d15a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d15a0ULL || rel >= 0x8d1690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d1690 size=112 callers=0 calls=2
   calls: sub_14db570, sub_14db6e0
*/
void sub_8d1690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d1690ULL || rel >= 0x8d1700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d1700 size=3216 callers=0 calls=15
   calls: sub_14db6e0, sub_14e6d50, sub_79c240, sub_8d2bf0, sub_8d37a0, sub_8d38f0, sub_8d3a30, sub_8d3b70, sub_8d3cc0, sub_8d3e00, sub_8d4040, sub_8d4190
   ... +3 more
   ref: ViewSelect
*/
void ViewSelect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d1700ULL || rel >= 0x8d2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2390 size=32 callers=0 calls=0
*/
void sub_8d2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2390ULL || rel >= 0x8d23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d23b0 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_8d23b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d23b0ULL || rel >= 0x8d2550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2550 size=16 callers=0 calls=0
*/
void sub_8d2550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2550ULL || rel >= 0x8d2560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2560 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_8d2560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2560ULL || rel >= 0x8d2610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2610 size=16 callers=0 calls=0
*/
void sub_8d2610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2610ULL || rel >= 0x8d2620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2620 size=16 callers=0 calls=0
*/
void sub_8d2620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2620ULL || rel >= 0x8d2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2630 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_8d2630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2630ULL || rel >= 0x8d26e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d26e0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_8d26e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d26e0ULL || rel >= 0x8d2790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2790 size=16 callers=0 calls=0
*/
void sub_8d2790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2790ULL || rel >= 0x8d27a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d27a0 size=16 callers=0 calls=0
*/
void sub_8d27a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d27a0ULL || rel >= 0x8d27b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d27b0 size=96 callers=0 calls=1
   calls: sub_8ddc20
*/
void sub_8d27b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d27b0ULL || rel >= 0x8d2810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2810 size=96 callers=0 calls=1
   calls: sub_8ddc20
*/
void sub_8d2810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2810ULL || rel >= 0x8d2870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2870 size=16 callers=0 calls=0
*/
void sub_8d2870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2870ULL || rel >= 0x8d2880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2880 size=96 callers=0 calls=1
   calls: sub_8ddc20
*/
void sub_8d2880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2880ULL || rel >= 0x8d28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d28e0 size=96 callers=0 calls=1
   calls: sub_8ddc20
*/
void sub_8d28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d28e0ULL || rel >= 0x8d2940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2940 size=16 callers=0 calls=0
*/
void sub_8d2940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2940ULL || rel >= 0x8d2950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2950 size=16 callers=0 calls=0
*/
void sub_8d2950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2950ULL || rel >= 0x8d2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2960 size=96 callers=0 calls=1
   calls: sub_8ddc20
*/
void sub_8d2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2960ULL || rel >= 0x8d29c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d29c0 size=96 callers=0 calls=1
   calls: sub_8ddc20
*/
void sub_8d29c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d29c0ULL || rel >= 0x8d2a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2a20 size=464 callers=3 calls=0
*/
void sub_8d2a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2a20ULL || rel >= 0x8d2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2bf0 size=304 callers=37 calls=0
*/
void sub_8d2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2bf0ULL || rel >= 0x8d2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2d20 size=288 callers=1 calls=2
   calls: sub_8d2e40, sub_e809c0
*/
void sub_8d2d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2d20ULL || rel >= 0x8d2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d2e40 size=672 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_8d2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d2e40ULL || rel >= 0x8d30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d30e0 size=288 callers=1 calls=2
   calls: sub_8d3200, sub_e809c0
*/
void sub_8d30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d30e0ULL || rel >= 0x8d3200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d3200 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_8d3200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d3200ULL || rel >= 0x8d3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d3440 size=288 callers=1 calls=2
   calls: sub_8d3560, sub_e809c0
*/
void sub_8d3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d3440ULL || rel >= 0x8d3560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d3560 size=576 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_8d3560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d3560ULL || rel >= 0x8d37a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d37a0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_8d37a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d37a0ULL || rel >= 0x8d38f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d38f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_8d38f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d38f0ULL || rel >= 0x8d3a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d3a30 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_8d3a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d3a30ULL || rel >= 0x8d3b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d3b70 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_8d3b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d3b70ULL || rel >= 0x8d3cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d3cc0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_8d3cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d3cc0ULL || rel >= 0x8d3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d3e00 size=272 callers=6 calls=2
   calls: sub_5cfaf0, sub_8d3f10
*/
void sub_8d3e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d3e00ULL || rel >= 0x8d3f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d3f10 size=304 callers=1 calls=0
*/
void sub_8d3f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d3f10ULL || rel >= 0x8d4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4040 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_8d4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4040ULL || rel >= 0x8d4190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4190 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_8d4190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4190ULL || rel >= 0x8d42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d42d0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_8d42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d42d0ULL || rel >= 0x8d4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4410 size=512 callers=0 calls=3
   calls: sub_8d4610, sub_8f19b0, sub_e7eb10
*/
void sub_8d4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4410ULL || rel >= 0x8d4610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4610 size=496 callers=2 calls=4
   calls: sub_1315b90, sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_8d4610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4610ULL || rel >= 0x8d4800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4800 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/net_title/bin/net_title_01_lyt.bin
*/
void net_title_01_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4800ULL || rel >= 0x8d4910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4910 size=624 callers=0 calls=5
   calls: sub_1315b90, sub_14ac370, sub_67d450, sub_e7eb10, sub_e83430
*/
void sub_8d4910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4910ULL || rel >= 0x8d4b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4b80 size=496 callers=1 calls=4
   calls: sub_1315b90, sub_14ac370, sub_67d450, sub_e7eb10
*/
void sub_8d4b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4b80ULL || rel >= 0x8d4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4d70 size=160 callers=4 calls=1
   calls: sub_14ab040
*/
void sub_8d4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4d70ULL || rel >= 0x8d4e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4e10 size=160 callers=2 calls=1
   calls: sub_14ab040
*/
void sub_8d4e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4e10ULL || rel >= 0x8d4eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4eb0 size=16 callers=0 calls=0
*/
void sub_8d4eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4eb0ULL || rel >= 0x8d4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4ec0 size=16 callers=0 calls=0
*/
void sub_8d4ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4ec0ULL || rel >= 0x8d4ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4ed0 size=16 callers=0 calls=0
*/
void sub_8d4ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4ed0ULL || rel >= 0x8d4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4ee0 size=16 callers=0 calls=0
*/
void sub_8d4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4ee0ULL || rel >= 0x8d4ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4ef0 size=16 callers=0 calls=0
*/
void sub_8d4ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4ef0ULL || rel >= 0x8d4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4f00 size=16 callers=0 calls=0
*/
void sub_8d4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4f00ULL || rel >= 0x8d4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4f10 size=16 callers=0 calls=0
*/
void sub_8d4f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4f10ULL || rel >= 0x8d4f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4f20 size=16 callers=0 calls=0
*/
void sub_8d4f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4f20ULL || rel >= 0x8d4f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d4f30 size=304 callers=0 calls=0
*/
void sub_8d4f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d4f30ULL || rel >= 0x8d5060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d5060 size=2384 callers=0 calls=23
   calls: N_team_standby_icon, N_team_standby_icon_2, T_pselect_entry_00, pane__s, sub_5cfad0, sub_795bc0, sub_8d0d00, sub_8d0d40, sub_8d2bf0, sub_8d3e00, sub_8d4b80, sub_8d4d70
   ... +11 more
   ref: ViewAllParty
   ref: ViewTimer
   ref: ViewSelect
*/
void ViewAllParty(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5060ULL || rel >= 0x8d59b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d59b0 size=240 callers=0 calls=5
   calls: sub_8d2bf0, sub_8d5aa0, sub_eb6530, sub_eb7790, sub_fee760
*/
void sub_8d59b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d59b0ULL || rel >= 0x8d5aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d5aa0 size=352 callers=1 calls=0
*/
void sub_8d5aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5aa0ULL || rel >= 0x8d5c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d5c00 size=16 callers=0 calls=0
*/
void sub_8d5c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5c00ULL || rel >= 0x8d5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d5c10 size=16 callers=0 calls=0
*/
void sub_8d5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5c10ULL || rel >= 0x8d5c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d5c20 size=16 callers=0 calls=0
*/
void sub_8d5c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5c20ULL || rel >= 0x8d5c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d5c30 size=16 callers=0 calls=0
*/
void sub_8d5c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5c30ULL || rel >= 0x8d5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d5c40 size=16 callers=0 calls=0
*/
void sub_8d5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5c40ULL || rel >= 0x8d5c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d5c50 size=16 callers=0 calls=0
*/
void sub_8d5c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5c50ULL || rel >= 0x8d5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d5c60 size=336 callers=6 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8d5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5c60ULL || rel >= 0x8d5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d5db0 size=336 callers=7 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8d5db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5db0ULL || rel >= 0x8d5f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d5f00 size=1872 callers=0 calls=14
   calls: P_pselect_entry_item, sub_12b7bf0, sub_14ab040, sub_14e1a00, sub_14e1a30, sub_14e6d90, sub_5cfad0, sub_7a3c20, sub_7a3f10, sub_8f19b0, sub_93c570, sub_e7eb10
   ... +2 more
*/
void sub_8d5f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5f00ULL || rel >= 0x8d6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d6650 size=3072 callers=1 calls=11
   calls: sub_12b7e10, sub_14ab040, sub_14ba7b0, sub_14bb830, sub_14bbf30, sub_14e6d90, sub_762d70, sub_7847d0, sub_8d8330, sub_8f3180, sub_e7eb10
   ref: pane_%s
   ref: pane_%s_%s
   ref: L_pokeIcon_00_P_pokeIcon_00
   ref: P_pselect_entry_icn_00
   ref: P_pselect_entry_item
   ref: L_pselect_entry_%02d
   ref: pokelist_%02d
   ref: L_pselect_temochi_00_L
*/
void P_pselect_entry_item(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d6650ULL || rel >= 0x8d7250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d7250 size=176 callers=3 calls=2
   calls: sub_14ab040, sub_14e6d90
*/
void sub_8d7250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d7250ULL || rel >= 0x8d7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d7300 size=112 callers=0 calls=1
   calls: sub_14e1a30
*/
void sub_8d7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d7300ULL || rel >= 0x8d7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d7370 size=96 callers=2 calls=3
   calls: sub_14e1a30, sub_14e6550, sub_1500c40
*/
void sub_8d7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d7370ULL || rel >= 0x8d73d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d73d0 size=112 callers=3 calls=4
   calls: sub_14e1a30, sub_14e6550, sub_14e6d50, sub_1500c40
*/
void sub_8d73d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d73d0ULL || rel >= 0x8d7440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d7440 size=1664 callers=1 calls=7
   calls: Play_UI_common_decide_5, sub_14e3670, sub_14e3680, sub_14e39e0, sub_14e6d50, sub_767950, sub_8d7ac0
   ref: N_cursor
   ref: pane_%s
   ref: pane_%s_%s
   ref: pokelist_%02d
   ref: L_pselect_temochi_00_L
*/
void L_pselect_temochi_00_L(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d7440ULL || rel >= 0x8d7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d7ac0 size=448 callers=11 calls=3
   calls: sub_1311c60, sub_67d450, sub_e7eb10
*/
void sub_8d7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d7ac0ULL || rel >= 0x8d7c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d7c80 size=16 callers=1 calls=0
*/
void sub_8d7c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d7c80ULL || rel >= 0x8d7c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d7c90 size=1216 callers=2 calls=3
   calls: sub_14ab040, sub_8f19b0, sub_e7eb10
   ref: pane_%s
   ref: pane_%s_%s
   ref: T_pselect_entry_00
   ref: L_pselect_entry_%02d
   ref: P_pselect_entry_no
*/
void T_pselect_entry_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d7c90ULL || rel >= 0x8d8150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8150 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_pokeselect/bin/btl_pokeselect_00_lyt.bin
   ref: bin/appli/btl_pokeselect/bin/uikit_btl_pokeselect_00.bin
*/
void uikit_btl_pokeselect_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8150ULL || rel >= 0x8d8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8330 size=288 callers=5 calls=2
   calls: sub_1315270, sub_67d450
*/
void sub_8d8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8330ULL || rel >= 0x8d8450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8450 size=32 callers=0 calls=0
*/
void sub_8d8450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8450ULL || rel >= 0x8d8470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8470 size=64 callers=1 calls=1
   calls: sub_14e4120
*/
void sub_8d8470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8470ULL || rel >= 0x8d84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d84b0 size=432 callers=0 calls=1
   calls: sub_7a3f10
*/
void sub_8d84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d84b0ULL || rel >= 0x8d8660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8660 size=16 callers=0 calls=0
*/
void sub_8d8660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8660ULL || rel >= 0x8d8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8670 size=16 callers=0 calls=0
*/
void sub_8d8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8670ULL || rel >= 0x8d8680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8680 size=16 callers=0 calls=0
*/
void sub_8d8680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8680ULL || rel >= 0x8d8690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8690 size=16 callers=0 calls=0
*/
void sub_8d8690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8690ULL || rel >= 0x8d86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d86a0 size=16 callers=0 calls=0
*/
void sub_8d86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d86a0ULL || rel >= 0x8d86b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d86b0 size=16 callers=0 calls=0
*/
void sub_8d86b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d86b0ULL || rel >= 0x8d86c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d86c0 size=16 callers=0 calls=0
*/
void sub_8d86c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d86c0ULL || rel >= 0x8d86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d86d0 size=16 callers=0 calls=0
*/
void sub_8d86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d86d0ULL || rel >= 0x8d86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d86e0 size=32 callers=0 calls=0
*/
void sub_8d86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d86e0ULL || rel >= 0x8d8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8700 size=16 callers=0 calls=0
*/
void sub_8d8700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8700ULL || rel >= 0x8d8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8710 size=16 callers=0 calls=0
*/
void sub_8d8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8710ULL || rel >= 0x8d8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8720 size=16 callers=0 calls=0
*/
void sub_8d8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8720ULL || rel >= 0x8d8730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8730 size=32 callers=0 calls=0
*/
void sub_8d8730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8730ULL || rel >= 0x8d8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8750 size=16 callers=0 calls=0
*/
void sub_8d8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8750ULL || rel >= 0x8d8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8760 size=16 callers=0 calls=0
*/
void sub_8d8760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8760ULL || rel >= 0x8d8770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8770 size=16 callers=0 calls=0
*/
void sub_8d8770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8770ULL || rel >= 0x8d8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8780 size=128 callers=0 calls=2
   calls: sub_14e6d50, sub_767950
*/
void sub_8d8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8780ULL || rel >= 0x8d8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8800 size=16 callers=0 calls=0
*/
void sub_8d8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8800ULL || rel >= 0x8d8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8810 size=16 callers=0 calls=0
*/
void sub_8d8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8810ULL || rel >= 0x8d8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8820 size=16 callers=0 calls=0
*/
void sub_8d8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8820ULL || rel >= 0x8d8830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d8830 size=2112 callers=0 calls=10
   calls: sub_12b7bf0, sub_14ab040, sub_14ba7b0, sub_14e1a00, sub_5cfad0, sub_7a3c20, sub_7a3f10, sub_8f19b0, sub_8f3180, sub_e7eb10
   ref: pane_%s
   ref: L_netbtl_standby_team_%02d
   ref: L_btlteam_pokelist_%02d
   ref: pane_%s_%s
   ref: T_btlteam_icon_00
   ref: P_team_pokelist_icon_03
*/
void P_team_pokelist_icon_03(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d8830ULL || rel >= 0x8d9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d9070 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/net_btl/bin/netbtl_standby_00_lyt.bin
   ref: bin/appli/btl_pokeselect/bin/uikit_netbtl_standby_00_dummy.bin
*/
void netbtl_standby_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d9070ULL || rel >= 0x8d9250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d9250 size=32 callers=0 calls=0
*/
void sub_8d9250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d9250ULL || rel >= 0x8d9270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d9270 size=80 callers=1 calls=1
   calls: sub_e83930
*/
void sub_8d9270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d9270ULL || rel >= 0x8d92c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d92c0 size=976 callers=8 calls=2
   calls: sub_14ab040, sub_e83930
   ref: team_bg_color
   ref: pane_%s
   ref: L_netbtl_standby_team_%02d
   ref: anime_%s
   ref: pane_%s_%s
   ref: P_btlteam_bg_07
   ref: N_btlteam_standby
   ref: anime_%s_%s
*/
void N_team_standby_icon(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d92c0ULL || rel >= 0x8d9690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d9690 size=2064 callers=7 calls=12
   calls: sub_12b7e10, sub_1311c60, sub_13149a0, sub_14ab040, sub_14bb830, sub_14bbf30, sub_67bdb0, sub_67d450, sub_762d70, sub_7847d0, sub_e7eb10, sub_e83b20
   ref: pane_%s
   ref: L_netbtl_standby_team_%02d_T_btlteam_00
*/
void pane__s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d9690ULL || rel >= 0x8d9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008d9ea0 size=368 callers=9 calls=1
   calls: sub_14ab040
   ref: pane_%s
   ref: L_netbtl_standby_team_%02d
   ref: pane_%s_%s
   ref: N_team_standby_icon
*/
void N_team_standby_icon_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d9ea0ULL || rel >= 0x8da010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da010 size=224 callers=3 calls=1
   calls: sub_14ab040
*/
void sub_8da010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da010ULL || rel >= 0x8da0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da0f0 size=160 callers=0 calls=1
   calls: sub_7a3f10
*/
void sub_8da0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da0f0ULL || rel >= 0x8da190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da190 size=160 callers=0 calls=1
   calls: sub_7a3f10
*/
void sub_8da190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da190ULL || rel >= 0x8da230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da230 size=16 callers=0 calls=0
*/
void sub_8da230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da230ULL || rel >= 0x8da240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da240 size=176 callers=0 calls=1
   calls: sub_7a3f10
*/
void sub_8da240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da240ULL || rel >= 0x8da2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da2f0 size=176 callers=0 calls=1
   calls: sub_7a3f10
*/
void sub_8da2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da2f0ULL || rel >= 0x8da3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da3a0 size=16 callers=0 calls=0
*/
void sub_8da3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da3a0ULL || rel >= 0x8da3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da3b0 size=16 callers=0 calls=0
*/
void sub_8da3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da3b0ULL || rel >= 0x8da3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da3c0 size=176 callers=0 calls=1
   calls: sub_7a3f10
*/
void sub_8da3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da3c0ULL || rel >= 0x8da470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da470 size=176 callers=0 calls=1
   calls: sub_7a3f10
*/
void sub_8da470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da470ULL || rel >= 0x8da520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da520 size=304 callers=0 calls=0
*/
void sub_8da520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da520ULL || rel >= 0x8da650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da650 size=16 callers=0 calls=0
*/
void sub_8da650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da650ULL || rel >= 0x8da660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da660 size=16 callers=0 calls=0
*/
void sub_8da660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da660ULL || rel >= 0x8da670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da670 size=16 callers=0 calls=0
*/
void sub_8da670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da670ULL || rel >= 0x8da680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da680 size=16 callers=0 calls=0
*/
void sub_8da680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da680ULL || rel >= 0x8da690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008da690 size=1616 callers=0 calls=19
   calls: sub_5cfad0, sub_5cfaf0, sub_67d450, sub_795bc0, sub_79b990, sub_8d0d20, sub_8d2bf0, sub_8d3e00, sub_8d5c60, sub_8d7250, sub_8d7370, sub_8d73d0
   ... +7 more
   ref: ViewTimer
   ref: ViewSelect
   ref: Select
*/
void ViewSelect_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8da690ULL || rel >= 0x8dace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dace0 size=2160 callers=0 calls=23
   calls: L_pselect_temochi_00_L, T_pselect_entry_00, sub_1311c60, sub_1315b90, sub_14e1a30, sub_67d450, sub_8d0d00, sub_8d0d20, sub_8d0d40, sub_8d0d70, sub_8d2bf0, sub_8d7250
   ... +11 more
*/
void sub_8dace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dace0ULL || rel >= 0x8db550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008db550 size=688 callers=1 calls=3
   calls: sub_783bd0, sub_8d2bf0, sub_8de3d0
*/
void sub_8db550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8db550ULL || rel >= 0x8db800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008db800 size=912 callers=1 calls=4
   calls: sub_14e6d50, sub_8d0d00, sub_8d2bf0, sub_8d4610
*/
void sub_8db800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8db800ULL || rel >= 0x8dbb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dbb90 size=16 callers=0 calls=0
*/
void sub_8dbb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dbb90ULL || rel >= 0x8dbba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dbba0 size=16 callers=0 calls=0
*/
void sub_8dbba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dbba0ULL || rel >= 0x8dbbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dbbb0 size=16 callers=0 calls=0
*/
void sub_8dbbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dbbb0ULL || rel >= 0x8dbbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dbbc0 size=16 callers=0 calls=0
*/
void sub_8dbbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dbbc0ULL || rel >= 0x8dbbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dbbd0 size=16 callers=0 calls=0
*/
void sub_8dbbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dbbd0ULL || rel >= 0x8dbbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dbbe0 size=16 callers=0 calls=0
*/
void sub_8dbbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dbbe0ULL || rel >= 0x8dbbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dbbf0 size=16 callers=0 calls=0
*/
void sub_8dbbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dbbf0ULL || rel >= 0x8dbc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dbc00 size=16 callers=0 calls=0
*/
void sub_8dbc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dbc00ULL || rel >= 0x8dbc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dbc10 size=16 callers=0 calls=0
*/
void sub_8dbc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dbc10ULL || rel >= 0x8dbc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dbc20 size=304 callers=0 calls=0
*/
void sub_8dbc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dbc20ULL || rel >= 0x8dbd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dbd50 size=704 callers=0 calls=11
   calls: sub_5cfad0, sub_67d450, sub_795bc0, sub_8d5db0, sub_c39c40, sub_d0c0, sub_e7eb10, sub_e80580, sub_e807f0, sub_eb7570, sub_eb75e0
   ref: ViewAllParty
   ref: AllParty
*/
void ViewAllParty_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dbd50ULL || rel >= 0x8dc010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc010 size=272 callers=0 calls=6
   calls: N_team_standby_icon_2, sub_8d0d40, sub_8d0d70, sub_8d0e30, sub_8d0f10, sub_8d2bf0
*/
void sub_8dc010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc010ULL || rel >= 0x8dc120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc120 size=16 callers=0 calls=0
*/
void sub_8dc120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc120ULL || rel >= 0x8dc130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc130 size=16 callers=0 calls=0
*/
void sub_8dc130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc130ULL || rel >= 0x8dc140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc140 size=16 callers=0 calls=0
*/
void sub_8dc140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc140ULL || rel >= 0x8dc150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc150 size=16 callers=0 calls=0
*/
void sub_8dc150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc150ULL || rel >= 0x8dc160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc160 size=16 callers=0 calls=0
*/
void sub_8dc160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc160ULL || rel >= 0x8dc170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc170 size=16 callers=0 calls=0
*/
void sub_8dc170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc170ULL || rel >= 0x8dc180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc180 size=416 callers=0 calls=4
   calls: sub_8d5c60, sub_8d5db0, sub_c39c40, sub_d0c0
   ref: ViewAllParty
   ref: WaitWatch
   ref: ViewTimer
*/
void ViewAllParty_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc180ULL || rel >= 0x8dc320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc320 size=848 callers=0 calls=11
   calls: N_team_standby_icon_2, sub_104bf60, sub_8d0d40, sub_8d0e30, sub_8d0f10, sub_8d2a20, sub_8d2bf0, sub_fee610, sub_fee880, sub_fee8a0, sub_feeb80
*/
void sub_8dc320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc320ULL || rel >= 0x8dc670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc670 size=16 callers=0 calls=0
*/
void sub_8dc670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc670ULL || rel >= 0x8dc680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc680 size=48 callers=0 calls=0
*/
void sub_8dc680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc680ULL || rel >= 0x8dc6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc6b0 size=48 callers=0 calls=0
*/
void sub_8dc6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc6b0ULL || rel >= 0x8dc6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc6e0 size=48 callers=0 calls=0
*/
void sub_8dc6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc6e0ULL || rel >= 0x8dc710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc710 size=48 callers=0 calls=0
*/
void sub_8dc710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc710ULL || rel >= 0x8dc740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc740 size=48 callers=0 calls=0
*/
void sub_8dc740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc740ULL || rel >= 0x8dc770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc770 size=48 callers=0 calls=0
*/
void sub_8dc770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc770ULL || rel >= 0x8dc7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc7a0 size=528 callers=0 calls=7
   calls: sub_8d3e00, sub_8d4d70, sub_8d5c60, sub_8d5db0, sub_c39c40, sub_d0c0, sub_eb6230
   ref: ViewAllParty
   ref: ViewTimer
   ref: ViewSelect
   ref: ReturnSelect
*/
void ViewAllParty_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc7a0ULL || rel >= 0x8dc9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc9b0 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_8dc9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc9b0ULL || rel >= 0x8dc9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dc9f0 size=16 callers=0 calls=0
*/
void sub_8dc9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dc9f0ULL || rel >= 0x8dca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dca00 size=16 callers=0 calls=0
*/
void sub_8dca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dca00ULL || rel >= 0x8dca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dca10 size=16 callers=0 calls=0
*/
void sub_8dca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dca10ULL || rel >= 0x8dca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dca20 size=16 callers=0 calls=0
*/
void sub_8dca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dca20ULL || rel >= 0x8dca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dca30 size=16 callers=0 calls=0
*/
void sub_8dca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dca30ULL || rel >= 0x8dca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dca40 size=16 callers=0 calls=0
*/
void sub_8dca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dca40ULL || rel >= 0x8dca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dca50 size=560 callers=0 calls=8
   calls: sub_5cfad0, sub_5cfaf0, sub_795bc0, sub_79b990, sub_8d5db0, sub_c39c40, sub_d0c0, sub_eb75e0
   ref: ViewAllParty
   ref: WaitOtherPlayer
*/
void WaitOtherPlayer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dca50ULL || rel >= 0x8dcc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dcc80 size=1296 callers=0 calls=17
   calls: N_team_standby_icon_2, sub_104bf60, sub_67d450, sub_8d0d40, sub_8d0e30, sub_8d0f10, sub_8d2a20, sub_8d2bf0, sub_c39c40, sub_e7eb10, sub_eb8930, sub_eb8a30
   ... +5 more
*/
void sub_8dcc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dcc80ULL || rel >= 0x8dd190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd190 size=16 callers=0 calls=0
*/
void sub_8dd190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd190ULL || rel >= 0x8dd1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd1a0 size=48 callers=0 calls=0
*/
void sub_8dd1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd1a0ULL || rel >= 0x8dd1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd1d0 size=48 callers=0 calls=0
*/
void sub_8dd1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd1d0ULL || rel >= 0x8dd200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd200 size=16 callers=0 calls=0
*/
void sub_8dd200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd200ULL || rel >= 0x8dd210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd210 size=48 callers=0 calls=0
*/
void sub_8dd210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd210ULL || rel >= 0x8dd240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd240 size=48 callers=0 calls=0
*/
void sub_8dd240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd240ULL || rel >= 0x8dd270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd270 size=16 callers=0 calls=0
*/
void sub_8dd270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd270ULL || rel >= 0x8dd280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd280 size=16 callers=0 calls=0
*/
void sub_8dd280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd280ULL || rel >= 0x8dd290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd290 size=48 callers=0 calls=0
*/
void sub_8dd290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd290ULL || rel >= 0x8dd2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd2c0 size=48 callers=0 calls=0
*/
void sub_8dd2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd2c0ULL || rel >= 0x8dd2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd2f0 size=304 callers=0 calls=0
*/
void sub_8dd2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd2f0ULL || rel >= 0x8dd420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd420 size=896 callers=0 calls=12
   calls: N_team_standby_icon_2, sub_8d0e30, sub_8d2bf0, sub_8d3e00, sub_8d4d70, sub_8d5c60, sub_8d5db0, sub_8e0ae0, sub_c39c40, sub_d0c0, sub_e806b0, sub_eb6230
   ref: SelectToAllParty
   ref: ViewAllParty
   ref: ViewTimer
   ref: ViewSelect
*/
void SelectToAllParty(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd420ULL || rel >= 0x8dd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd7a0 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_8dd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd7a0ULL || rel >= 0x8dd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd7e0 size=16 callers=0 calls=0
*/
void sub_8dd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd7e0ULL || rel >= 0x8dd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd7f0 size=16 callers=0 calls=0
*/
void sub_8dd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd7f0ULL || rel >= 0x8dd800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd800 size=16 callers=0 calls=0
*/
void sub_8dd800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd800ULL || rel >= 0x8dd810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd810 size=16 callers=0 calls=0
*/
void sub_8dd810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd810ULL || rel >= 0x8dd820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd820 size=16 callers=0 calls=0
*/
void sub_8dd820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd820ULL || rel >= 0x8dd830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd830 size=16 callers=0 calls=0
*/
void sub_8dd830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd830ULL || rel >= 0x8dd840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dd840 size=704 callers=0 calls=10
   calls: sub_5cfad0, sub_795bc0, sub_8d2bf0, sub_8d3e00, sub_8d5c60, sub_8d5db0, sub_c39c40, sub_d0c0, sub_eb6230, sub_eb77f0
   ref: ViewAllParty
   ref: ViewTimer
   ref: ViewSelect
*/
void ViewAllParty_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dd840ULL || rel >= 0x8ddb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddb00 size=160 callers=0 calls=3
   calls: sub_8d2bf0, sub_eb6530, sub_eb7830
*/
void sub_8ddb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddb00ULL || rel >= 0x8ddba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddba0 size=16 callers=0 calls=0
*/
void sub_8ddba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddba0ULL || rel >= 0x8ddbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddbb0 size=16 callers=0 calls=0
*/
void sub_8ddbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddbb0ULL || rel >= 0x8ddbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddbc0 size=16 callers=0 calls=0
*/
void sub_8ddbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddbc0ULL || rel >= 0x8ddbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddbd0 size=16 callers=0 calls=0
*/
void sub_8ddbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddbd0ULL || rel >= 0x8ddbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddbe0 size=16 callers=0 calls=0
*/
void sub_8ddbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddbe0ULL || rel >= 0x8ddbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddbf0 size=16 callers=0 calls=0
*/
void sub_8ddbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddbf0ULL || rel >= 0x8ddc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddc00 size=32 callers=9 calls=0
*/
void sub_8ddc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddc00ULL || rel >= 0x8ddc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddc20 size=80 callers=11 calls=0
*/
void sub_8ddc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddc20ULL || rel >= 0x8ddc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddc70 size=80 callers=0 calls=0
*/
void sub_8ddc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddc70ULL || rel >= 0x8ddcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddcc0 size=160 callers=8 calls=0
*/
void sub_8ddcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddcc0ULL || rel >= 0x8ddd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddd60 size=144 callers=4 calls=0
*/
void sub_8ddd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddd60ULL || rel >= 0x8dddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dddf0 size=96 callers=1 calls=4
   calls: sub_762930, sub_762940, sub_76bd60, sub_76bdf0
*/
void sub_8dddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dddf0ULL || rel >= 0x8dde50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dde50 size=112 callers=9 calls=0
*/
void sub_8dde50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dde50ULL || rel >= 0x8ddec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ddec0 size=640 callers=5 calls=4
   calls: sub_767950, sub_783bd0, sub_7847d0, sub_8de140
*/
void sub_8ddec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddec0ULL || rel >= 0x8de140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008de140 size=656 callers=2 calls=7
   calls: sub_7847d0, sub_8de510, sub_8df130, sub_8df370, sub_8df470, sub_8df680, sub_8dfba0
*/
void sub_8de140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8de140ULL || rel >= 0x8de3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008de3d0 size=320 callers=1 calls=4
   calls: sub_7847d0, sub_7847f0, sub_8de510, sub_8dfba0
*/
void sub_8de3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8de3d0ULL || rel >= 0x8de510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008de510 size=928 callers=4 calls=8
   calls: sub_762930, sub_762940, sub_767950, sub_7847d0, sub_8e0e30, sub_8e0e70, sub_8e0eb0, sub_8e0ef0
*/
void sub_8de510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8de510ULL || rel >= 0x8de8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008de8b0 size=1168 callers=3 calls=9
   calls: sub_762930, sub_762940, sub_767950, sub_7847d0, sub_8dfba0, sub_8e0e30, sub_8e0e70, sub_8e0eb0, sub_8e0ef0
*/
void sub_8de8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8de8b0ULL || rel >= 0x8ded40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ded40 size=448 callers=7 calls=10
   calls: sub_762930, sub_762940, sub_764b40, sub_765830, sub_767950, sub_76bd60, sub_76bdf0, sub_7847d0, sub_8dfba0, sub_8e0b00
*/
void sub_8ded40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ded40ULL || rel >= 0x8def00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008def00 size=560 callers=7 calls=6
   calls: sub_1048a80, sub_1048de0, sub_762890, sub_767950, sub_7847d0, sub_8e0730
*/
void sub_8def00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8def00ULL || rel >= 0x8df130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008df130 size=576 callers=2 calls=5
   calls: sub_762930, sub_762d70, sub_767950, sub_7847d0, sub_8df8a0
*/
void sub_8df130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8df130ULL || rel >= 0x8df370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008df370 size=256 callers=2 calls=5
   calls: sub_762930, sub_762940, sub_7847d0, sub_8ddcc0, sub_8dfba0
*/
void sub_8df370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8df370ULL || rel >= 0x8df470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008df470 size=528 callers=2 calls=4
   calls: sub_762930, sub_767950, sub_7847d0, sub_8e0730
*/
void sub_8df470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8df470ULL || rel >= 0x8df680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008df680 size=544 callers=2 calls=4
   calls: sub_762d70, sub_767950, sub_7847d0, sub_8e0730
*/
void sub_8df680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8df680ULL || rel >= 0x8df8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008df8a0 size=432 callers=2 calls=15
   calls: sub_762930, sub_762940, sub_762d70, sub_762fe0, sub_763dc0, sub_764b40, sub_765dd0, sub_765de0, sub_767950, sub_8dfba0, sub_8e0b00, sub_8e0d30
   ... +3 more
*/
void sub_8df8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8df8a0ULL || rel >= 0x8dfa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dfa50 size=336 callers=3 calls=1
   calls: sub_136b590
   ref: https://battle.pokemon-home.com/regulation/%09d/%s
*/
void unnamed_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dfa50ULL || rel >= 0x8dfba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dfba0 size=480 callers=92 calls=1
   calls: sub_7c2280
*/
void sub_8dfba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dfba0ULL || rel >= 0x8dfd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dfd80 size=160 callers=39 calls=1
   calls: sub_5e2350
*/
void sub_8dfd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dfd80ULL || rel >= 0x8dfe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dfe20 size=384 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_8dfe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dfe20ULL || rel >= 0x8dffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dffa0 size=16 callers=0 calls=0
*/
void sub_8dffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dffa0ULL || rel >= 0x8dffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dffb0 size=16 callers=0 calls=0
*/
void sub_8dffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dffb0ULL || rel >= 0x8dffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dffc0 size=16 callers=0 calls=0
*/
void sub_8dffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dffc0ULL || rel >= 0x8dffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dffd0 size=16 callers=0 calls=0
*/
void sub_8dffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dffd0ULL || rel >= 0x8dffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dffe0 size=16 callers=0 calls=0
*/
void sub_8dffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dffe0ULL || rel >= 0x8dfff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008dfff0 size=80 callers=3 calls=0
*/
void sub_8dfff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dfff0ULL || rel >= 0x8e0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

