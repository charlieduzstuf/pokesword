/* subsdk1 functions 0009e7b0..000e1f80 (5 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0009e7b0 size=352 callers=1 calls=0
*/
void sub_9e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9e7b0ULL || rel >= 0x9e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009e910 size=1728 callers=2 calls=5
   calls: sub_61e80, sub_61f10, sub_9b610, sub_9cac0, sub_9e2b0
*/
void sub_9e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9e910ULL || rel >= 0x9efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009efd0 size=2080 callers=2 calls=5
   calls: sub_61f10, sub_9b220, sub_9b610, sub_9cac0, sub_9e2b0
*/
void sub_9efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9efd0ULL || rel >= 0x9f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009f7f0 size=1552 callers=2 calls=4
   calls: sub_61f10, sub_9b220, sub_9c420, sub_9e2b0
*/
void sub_9f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f7f0ULL || rel >= 0x9fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009fe00 size=2128 callers=1 calls=0
*/
void sub_9fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fe00ULL || rel >= 0xa0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a0650 size=272 callers=3 calls=0
*/
void sub_a0650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa0650ULL || rel >= 0xa0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a0760 size=1504 callers=2 calls=6
   calls: sub_35320, sub_3af50, sub_3af80, sub_62050, sub_9b220, sub_9d620
*/
void sub_a0760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa0760ULL || rel >= 0xa0d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a0d40 size=1312 callers=2 calls=3
   calls: sub_3af50, sub_3afa0, sub_62050
*/
void sub_a0d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa0d40ULL || rel >= 0xa1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a1260 size=19744 callers=3 calls=30
   calls: sub_35320, sub_3af50, sub_3af80, sub_3b600, sub_3b630, sub_61d40, sub_61f10, sub_62050, sub_62240, sub_623c0, sub_66820, sub_7d430
   ... +18 more
*/
void sub_a1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa1260ULL || rel >= 0xa5f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a5f80 size=64 callers=27 calls=1
   calls: sub_a1260
*/
void sub_a5f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5f80ULL || rel >= 0xa5fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a5fc0 size=3760 callers=69 calls=13
   calls: sub_35320, sub_3550, sub_3870, sub_3890, sub_38d0, sub_620d0, sub_63c30, sub_66d40, sub_77380, sub_9a050, sub_9a740, sub_a1260
   ... +1 more
*/
void sub_a5fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5fc0ULL || rel >= 0xa6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a6e70 size=480 callers=12 calls=3
   calls: sub_9a050, sub_9c950, sub_a5fc0
*/
void sub_a6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6e70ULL || rel >= 0xa7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7050 size=64 callers=165 calls=1
   calls: sub_a5fc0
*/
void sub_a7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7050ULL || rel >= 0xa7090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7090 size=64 callers=217 calls=1
   calls: sub_a5fc0
*/
void sub_a7090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7090ULL || rel >= 0xa70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a70d0 size=64 callers=194 calls=1
   calls: sub_a5fc0
*/
void sub_a70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa70d0ULL || rel >= 0xa7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7110 size=64 callers=124 calls=1
   calls: sub_a5fc0
*/
void sub_a7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7110ULL || rel >= 0xa7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7150 size=320 callers=53 calls=1
   calls: sub_a5fc0
*/
void sub_a7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7150ULL || rel >= 0xa7290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7290 size=128 callers=2 calls=2
   calls: sub_9b220, sub_a5fc0
*/
void sub_a7290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7290ULL || rel >= 0xa7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7310 size=96 callers=16 calls=1
   calls: sub_a5fc0
*/
void sub_a7310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7310ULL || rel >= 0xa7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7370 size=96 callers=55 calls=1
   calls: sub_a5fc0
*/
void sub_a7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7370ULL || rel >= 0xa73d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a73d0 size=96 callers=59 calls=1
   calls: sub_a5fc0
*/
void sub_a73d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa73d0ULL || rel >= 0xa7430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7430 size=720 callers=5 calls=1
   calls: sub_a5fc0
*/
void sub_a7430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7430ULL || rel >= 0xa7700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7700 size=48 callers=2 calls=1
   calls: sub_a7430
*/
void sub_a7700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7700ULL || rel >= 0xa7730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7730 size=208 callers=8 calls=1
   calls: sub_a5fc0
*/
void sub_a7730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7730ULL || rel >= 0xa7800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7800 size=80 callers=200 calls=1
   calls: sub_a5fc0
*/
void sub_a7800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7800ULL || rel >= 0xa7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7850 size=64 callers=123 calls=1
   calls: sub_a5fc0
*/
void sub_a7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7850ULL || rel >= 0xa7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7890 size=64 callers=111 calls=1
   calls: sub_a5fc0
*/
void sub_a7890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7890ULL || rel >= 0xa78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a78d0 size=112 callers=17 calls=2
   calls: sub_61f10, sub_a5fc0
*/
void sub_a78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa78d0ULL || rel >= 0xa7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7940 size=128 callers=7 calls=2
   calls: sub_61f10, sub_a5fc0
*/
void sub_a7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7940ULL || rel >= 0xa79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a79c0 size=112 callers=3 calls=2
   calls: sub_61f10, sub_a5fc0
*/
void sub_a79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa79c0ULL || rel >= 0xa7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7a30 size=320 callers=78 calls=1
   calls: sub_a5fc0
*/
void sub_a7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7a30ULL || rel >= 0xa7b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7b70 size=320 callers=23 calls=1
   calls: sub_a5fc0
*/
void sub_a7b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7b70ULL || rel >= 0xa7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7cb0 size=320 callers=7 calls=1
   calls: sub_a5fc0
*/
void sub_a7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7cb0ULL || rel >= 0xa7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7df0 size=320 callers=2 calls=1
   calls: sub_a5fc0
*/
void sub_a7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7df0ULL || rel >= 0xa7f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7f30 size=128 callers=1 calls=2
   calls: sub_9b220, sub_a5fc0
*/
void sub_a7f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7f30ULL || rel >= 0xa7fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7fb0 size=128 callers=1 calls=2
   calls: sub_9b220, sub_a5fc0
*/
void sub_a7fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7fb0ULL || rel >= 0xa8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8030 size=80 callers=159 calls=1
   calls: sub_a5fc0
*/
void sub_a8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8030ULL || rel >= 0xa8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8080 size=80 callers=85 calls=1
   calls: sub_a5fc0
*/
void sub_a8080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8080ULL || rel >= 0xa80d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a80d0 size=64 callers=36 calls=1
   calls: sub_a5fc0
*/
void sub_a80d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa80d0ULL || rel >= 0xa8110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8110 size=96 callers=43 calls=1
   calls: sub_a5fc0
*/
void sub_a8110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8110ULL || rel >= 0xa8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8170 size=80 callers=38 calls=1
   calls: sub_a5fc0
*/
void sub_a8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8170ULL || rel >= 0xa81c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a81c0 size=80 callers=23 calls=1
   calls: sub_a5fc0
*/
void sub_a81c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81c0ULL || rel >= 0xa8210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8210 size=96 callers=15 calls=1
   calls: sub_a5fc0
*/
void sub_a8210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8210ULL || rel >= 0xa8270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8270 size=96 callers=9 calls=1
   calls: sub_a5fc0
*/
void sub_a8270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8270ULL || rel >= 0xa82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a82d0 size=80 callers=27 calls=1
   calls: sub_a5fc0
*/
void sub_a82d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa82d0ULL || rel >= 0xa8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8320 size=80 callers=99 calls=1
   calls: sub_a5fc0
*/
void sub_a8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8320ULL || rel >= 0xa8370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8370 size=80 callers=3 calls=1
   calls: sub_a5fc0
*/
void sub_a8370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8370ULL || rel >= 0xa83c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a83c0 size=208 callers=4 calls=1
   calls: sub_a5fc0
*/
void sub_a83c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa83c0ULL || rel >= 0xa8490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8490 size=208 callers=4 calls=1
   calls: sub_a5fc0
*/
void sub_a8490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8490ULL || rel >= 0xa8560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8560 size=96 callers=1 calls=1
   calls: sub_a5fc0
*/
void sub_a8560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8560ULL || rel >= 0xa85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a85c0 size=224 callers=36 calls=1
   calls: sub_a5fc0
*/
void sub_a85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa85c0ULL || rel >= 0xa86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a86a0 size=224 callers=9 calls=1
   calls: sub_a5fc0
*/
void sub_a86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa86a0ULL || rel >= 0xa8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8780 size=240 callers=3 calls=1
   calls: sub_a5fc0
*/
void sub_a8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8780ULL || rel >= 0xa8870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8870 size=240 callers=3 calls=1
   calls: sub_a5fc0
*/
void sub_a8870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8870ULL || rel >= 0xa8960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8960 size=240 callers=20 calls=1
   calls: sub_a5fc0
*/
void sub_a8960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8960ULL || rel >= 0xa8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8a50 size=496 callers=12 calls=1
   calls: sub_a5fc0
*/
void sub_a8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8a50ULL || rel >= 0xa8c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8c40 size=272 callers=2 calls=1
   calls: sub_a5fc0
*/
void sub_a8c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8c40ULL || rel >= 0xa8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8d50 size=192 callers=1 calls=1
   calls: sub_a5fc0
*/
void sub_a8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8d50ULL || rel >= 0xa8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8e10 size=336 callers=1 calls=1
   calls: sub_a5fc0
*/
void sub_a8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8e10ULL || rel >= 0xa8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8f60 size=48 callers=3 calls=0
*/
void sub_a8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8f60ULL || rel >= 0xa8f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a8f90 size=208 callers=3 calls=1
   calls: sub_a5fc0
*/
void sub_a8f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa8f90ULL || rel >= 0xa9060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9060 size=112 callers=5 calls=1
   calls: sub_a5fc0
*/
void sub_a9060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9060ULL || rel >= 0xa90d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a90d0 size=112 callers=2 calls=1
   calls: sub_a5fc0
*/
void sub_a90d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa90d0ULL || rel >= 0xa9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9140 size=112 callers=4 calls=1
   calls: sub_a5fc0
*/
void sub_a9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9140ULL || rel >= 0xa91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a91b0 size=96 callers=28 calls=1
   calls: sub_a5fc0
*/
void sub_a91b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa91b0ULL || rel >= 0xa9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9210 size=96 callers=2 calls=1
   calls: sub_a5fc0
*/
void sub_a9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9210ULL || rel >= 0xa9270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9270 size=96 callers=15 calls=1
   calls: sub_a5fc0
*/
void sub_a9270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9270ULL || rel >= 0xa92d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a92d0 size=16 callers=1458 calls=0
*/
void sub_a92d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92d0ULL || rel >= 0xa92e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a92e0 size=96 callers=14 calls=1
   calls: sub_a5fc0
*/
void sub_a92e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa92e0ULL || rel >= 0xa9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9340 size=80 callers=2 calls=1
   calls: sub_a5fc0
*/
void sub_a9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9340ULL || rel >= 0xa9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9390 size=208 callers=19 calls=1
   calls: sub_a5fc0
*/
void sub_a9390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9390ULL || rel >= 0xa9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9460 size=144 callers=1 calls=1
   calls: sub_a5fc0
*/
void sub_a9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9460ULL || rel >= 0xa94f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a94f0 size=112 callers=11 calls=1
   calls: sub_a5fc0
*/
void sub_a94f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa94f0ULL || rel >= 0xa9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9560 size=112 callers=3 calls=1
   calls: sub_a5fc0
*/
void sub_a9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9560ULL || rel >= 0xa95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a95d0 size=224 callers=6 calls=1
   calls: sub_a5fc0
*/
void sub_a95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa95d0ULL || rel >= 0xa96b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a96b0 size=336 callers=1 calls=1
   calls: sub_a6e70
*/
void sub_a96b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa96b0ULL || rel >= 0xa9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9800 size=240 callers=4 calls=1
   calls: sub_a1260
*/
void sub_a9800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9800ULL || rel >= 0xa98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a98f0 size=16 callers=4 calls=0
*/
void sub_a98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa98f0ULL || rel >= 0xa9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9900 size=304 callers=9 calls=2
   calls: sub_a5fc0, sub_a9a30
*/
void sub_a9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9900ULL || rel >= 0xa9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9a30 size=960 callers=171 calls=4
   calls: sub_77380, sub_a5fc0, sub_aa340, sub_b8030
*/
void sub_a9a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9a30ULL || rel >= 0xa9df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9df0 size=336 callers=22 calls=3
   calls: sub_3890, sub_a5fc0, sub_b80f0
*/
void sub_a9df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9df0ULL || rel >= 0xa9f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9f40 size=432 callers=2 calls=4
   calls: sub_9a050, sub_9bab0, sub_9c950, sub_a5fc0
*/
void sub_a9f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9f40ULL || rel >= 0xaa0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aa0f0 size=64 callers=12 calls=1
   calls: sub_a9df0
*/
void sub_aa0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa0f0ULL || rel >= 0xaa130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aa130 size=528 callers=3 calls=6
   calls: sub_9a050, sub_9bab0, sub_9c950, sub_a5fc0, sub_a9df0, sub_a9f40
*/
void sub_aa130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa130ULL || rel >= 0xaa340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aa340 size=368 callers=12 calls=1
   calls: sub_3870
*/
void sub_aa340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa340ULL || rel >= 0xaa4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aa4b0 size=400 callers=4 calls=1
   calls: sub_3870
*/
void sub_aa4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa4b0ULL || rel >= 0xaa640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aa640 size=272 callers=233 calls=4
   calls: sub_77380, sub_a5fc0, sub_aa340, sub_b8030
*/
void sub_aa640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa640ULL || rel >= 0xaa750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aa750 size=32 callers=2 calls=0
*/
void sub_aa750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa750ULL || rel >= 0xaa770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aa770 size=192 callers=6 calls=1
   calls: sub_650d0
*/
void sub_aa770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa770ULL || rel >= 0xaa830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aa830 size=208 callers=2 calls=1
   calls: sub_9b610
*/
void sub_aa830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa830ULL || rel >= 0xaa900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aa900 size=672 callers=0 calls=3
   calls: sub_3870, sub_3890, sub_65170
*/
void sub_aa900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaa900ULL || rel >= 0xaaba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aaba0 size=32 callers=0 calls=0
*/
void sub_aaba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaba0ULL || rel >= 0xaabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aabc0 size=48 callers=0 calls=0
*/
void sub_aabc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabc0ULL || rel >= 0xaabf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aabf0 size=32 callers=0 calls=0
*/
void sub_aabf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaabf0ULL || rel >= 0xaac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aac10 size=608 callers=0 calls=5
   calls: sub_3af80, sub_651d0, sub_aaef0, sub_ab830, sub_ade10
*/
void sub_aac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaac10ULL || rel >= 0xaae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aae70 size=128 callers=28 calls=2
   calls: sub_3af80, sub_ade10
*/
void sub_aae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaae70ULL || rel >= 0xaaef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aaef0 size=2368 callers=19 calls=10
   calls: sub_66d40, sub_a7090, sub_a7370, sub_a7730, sub_a8110, sub_a8320, sub_a92d0, sub_aa340, sub_ab830, sub_ade10
*/
void sub_aaef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaaef0ULL || rel >= 0xab830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ab830 size=688 callers=13 calls=3
   calls: sub_9a050, sub_a7050, sub_a7090
*/
void sub_ab830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab830ULL || rel >= 0xabae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000abae0 size=1024 callers=0 calls=7
   calls: sub_3af80, sub_9a240, sub_9adb0, sub_a70d0, sub_abfb0, sub_ad9d0, sub_ade10
*/
void sub_abae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabae0ULL || rel >= 0xabee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000abee0 size=208 callers=4 calls=2
   calls: sub_a70d0, sub_ad9d0
*/
void sub_abee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabee0ULL || rel >= 0xabfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000abfb0 size=1856 callers=6 calls=8
   calls: sub_66d40, sub_a7090, sub_a7730, sub_a8320, sub_a92d0, sub_aa340, sub_ab830, sub_ade10
*/
void sub_abfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xabfb0ULL || rel >= 0xac6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ac6f0 size=32 callers=0 calls=0
*/
void sub_ac6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac6f0ULL || rel >= 0xac710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ac710 size=32 callers=0 calls=0
*/
void sub_ac710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac710ULL || rel >= 0xac730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ac730 size=272 callers=0 calls=1
   calls: sub_651d0
*/
void sub_ac730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac730ULL || rel >= 0xac840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ac840 size=272 callers=0 calls=1
   calls: sub_651d0
*/
void sub_ac840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac840ULL || rel >= 0xac950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ac950 size=64 callers=0 calls=1
   calls: sub_652b0
*/
void sub_ac950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac950ULL || rel >= 0xac990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ac990 size=32 callers=0 calls=0
*/
void sub_ac990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac990ULL || rel >= 0xac9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ac9b0 size=112 callers=0 calls=2
   calls: sub_a92d0, sub_aca20
*/
void sub_ac9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac9b0ULL || rel >= 0xaca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aca20 size=224 callers=2 calls=4
   calls: sub_a7050, sub_a92d0, sub_aa340, sub_ab830
*/
void sub_aca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaca20ULL || rel >= 0xacb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acb00 size=80 callers=0 calls=1
   calls: sub_66860
*/
void sub_acb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb00ULL || rel >= 0xacb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acb50 size=160 callers=0 calls=2
   calls: sub_3870, sub_64e20
*/
void sub_acb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacb50ULL || rel >= 0xacbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acbf0 size=80 callers=0 calls=1
   calls: sub_aa340
*/
void sub_acbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacbf0ULL || rel >= 0xacc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acc40 size=16 callers=0 calls=0
*/
void sub_acc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacc40ULL || rel >= 0xacc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acc50 size=240 callers=0 calls=3
   calls: sub_38b0, sub_99b30, sub_9a050
*/
void sub_acc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacc50ULL || rel >= 0xacd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acd40 size=64 callers=0 calls=0
*/
void sub_acd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacd40ULL || rel >= 0xacd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acd80 size=32 callers=0 calls=1
   calls: sub_9a1e0
*/
void sub_acd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacd80ULL || rel >= 0xacda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acda0 size=48 callers=0 calls=0
*/
void sub_acda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacda0ULL || rel >= 0xacdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acdd0 size=448 callers=0 calls=3
   calls: sub_9adb0, sub_9aec0, sub_acf90
*/
void sub_acdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacdd0ULL || rel >= 0xacf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acf90 size=48 callers=2 calls=0
*/
void sub_acf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacf90ULL || rel >= 0xacfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acfc0 size=288 callers=0 calls=1
   calls: sub_9adb0
*/
void sub_acfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacfc0ULL || rel >= 0xad0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad0e0 size=64 callers=0 calls=0
*/
void sub_ad0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad0e0ULL || rel >= 0xad120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad120 size=80 callers=0 calls=1
   calls: sub_9aec0
*/
void sub_ad120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad120ULL || rel >= 0xad170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad170 size=288 callers=0 calls=1
   calls: sub_9aec0
*/
void sub_ad170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad170ULL || rel >= 0xad290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad290 size=32 callers=0 calls=0
*/
void sub_ad290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad290ULL || rel >= 0xad2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad2b0 size=176 callers=0 calls=1
   calls: sub_9b060
*/
void sub_ad2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad2b0ULL || rel >= 0xad360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad360 size=96 callers=0 calls=2
   calls: sub_9adb0, sub_acf90
*/
void sub_ad360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad360ULL || rel >= 0xad3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad3c0 size=592 callers=0 calls=1
   calls: sub_9adb0
*/
void sub_ad3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad3c0ULL || rel >= 0xad610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad610 size=544 callers=0 calls=6
   calls: sub_61e80, sub_66860, sub_9a240, sub_9a850, sub_a7090, sub_a7850
*/
void sub_ad610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad610ULL || rel >= 0xad830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad830 size=96 callers=2 calls=0
*/
void sub_ad830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad830ULL || rel >= 0xad890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad890 size=304 callers=0 calls=4
   calls: sub_66860, sub_a7050, sub_aa340, sub_ab830
*/
void sub_ad890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad890ULL || rel >= 0xad9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad9c0 size=16 callers=0 calls=0
*/
void sub_ad9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9c0ULL || rel >= 0xad9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad9d0 size=1088 callers=17 calls=12
   calls: sub_391d0, sub_3af50, sub_61e80, sub_61f10, sub_66bc0, sub_66c00, sub_9ae40, sub_9b0a0, sub_9b3e0, sub_9b8a0, sub_9b920, sub_a7800
*/
void sub_ad9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad9d0ULL || rel >= 0xade10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ade10 size=240 callers=104 calls=2
   calls: sub_a70d0, sub_ad9d0
*/
void sub_ade10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xade10ULL || rel >= 0xadf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000adf00 size=112 callers=7 calls=1
   calls: sub_3af80
*/
void sub_adf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadf00ULL || rel >= 0xadf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000adf70 size=1264 callers=2 calls=10
   calls: sub_3af80, sub_428a0, sub_66bc0, sub_66c00, sub_9aec0, sub_9b3e0, sub_a70d0, sub_a7110, sub_ad9d0, sub_ade10
*/
void sub_adf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xadf70ULL || rel >= 0xae460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ae460 size=512 callers=1 calls=7
   calls: sub_66bc0, sub_66c00, sub_9ae80, sub_9b3e0, sub_a70d0, sub_a7800, sub_ade10
*/
void sub_ae460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae460ULL || rel >= 0xae660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ae660 size=224 callers=4 calls=0
*/
void sub_ae660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae660ULL || rel >= 0xae740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ae740 size=912 callers=4 calls=1
   calls: sub_428a0
*/
void sub_ae740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae740ULL || rel >= 0xaead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aead0 size=240 callers=24 calls=2
   calls: sub_428a0, sub_ade10
*/
void sub_aead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaead0ULL || rel >= 0xaebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aebc0 size=16 callers=1 calls=0
*/
void sub_aebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaebc0ULL || rel >= 0xaebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aebd0 size=96 callers=1 calls=1
   calls: sub_428a0
*/
void sub_aebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaebd0ULL || rel >= 0xaec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aec30 size=1232 callers=0 calls=12
   calls: sub_428a0, sub_66860, sub_9a050, sub_9b3e0, sub_a7800, sub_a92d0, sub_aa340, sub_aaef0, sub_ab830, sub_ade10, sub_ae740, sub_aead0
*/
void sub_aec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaec30ULL || rel >= 0xaf100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000af100 size=5472 callers=0 calls=23
   calls: sub_3af50, sub_3af80, sub_428a0, sub_66860, sub_66bc0, sub_66c00, sub_7d430, sub_9ae40, sub_9b0a0, sub_a7050, sub_a70d0, sub_a7370
   ... +11 more
*/
void sub_af100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf100ULL || rel >= 0xb0660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b0660 size=912 callers=2 calls=4
   calls: sub_3af80, sub_428a0, sub_a92d0, sub_ade10
*/
void sub_b0660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0660ULL || rel >= 0xb09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b09f0 size=320 callers=1 calls=5
   calls: sub_3af80, sub_aaef0, sub_ade10, sub_aead0, sub_b54e0
*/
void sub_b09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb09f0ULL || rel >= 0xb0b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b0b30 size=6816 callers=0 calls=24
   calls: sub_3af50, sub_3af80, sub_428a0, sub_66860, sub_66bc0, sub_66c00, sub_9a050, sub_9ae40, sub_9b0a0, sub_a7090, sub_a70d0, sub_a8030
   ... +12 more
*/
void sub_b0b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0b30ULL || rel >= 0xb25d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b25d0 size=1120 callers=1 calls=8
   calls: sub_3af80, sub_66bc0, sub_66c00, sub_9aec0, sub_a70d0, sub_a92d0, sub_ad9d0, sub_ade10
*/
void sub_b25d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25d0ULL || rel >= 0xb2a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2a30 size=304 callers=1 calls=4
   calls: sub_3af80, sub_a92d0, sub_ade10, sub_b54e0
*/
void sub_b2a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2a30ULL || rel >= 0xb2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2b60 size=5008 callers=0 calls=18
   calls: sub_391d0, sub_3af50, sub_3af80, sub_428a0, sub_66860, sub_9a050, sub_9af80, sub_9b3e0, sub_9b4d0, sub_a7800, sub_a7890, sub_a8030
   ... +6 more
*/
void sub_b2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b60ULL || rel >= 0xb3ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3ef0 size=1040 callers=1 calls=4
   calls: sub_3af80, sub_428a0, sub_a92d0, sub_ade10
*/
void sub_b3ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3ef0ULL || rel >= 0xb4300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4300 size=592 callers=2 calls=2
   calls: sub_abfb0, sub_aead0
*/
void sub_b4300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4300ULL || rel >= 0xb4550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4550 size=1088 callers=0 calls=7
   calls: sub_3af80, sub_66860, sub_9af80, sub_a8030, sub_aaef0, sub_ade10, sub_aead0
*/
void sub_b4550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4550ULL || rel >= 0xb4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4990 size=304 callers=0 calls=2
   calls: sub_66860, sub_b4300
*/
void sub_b4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4990ULL || rel >= 0xb4ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4ac0 size=336 callers=0 calls=3
   calls: sub_66860, sub_aaef0, sub_aead0
*/
void sub_b4ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ac0ULL || rel >= 0xb4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4c10 size=192 callers=0 calls=2
   calls: sub_66860, sub_b4300
*/
void sub_b4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c10ULL || rel >= 0xb4cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4cd0 size=816 callers=0 calls=12
   calls: sub_168150, sub_1681f0, sub_168240, sub_1698e0, sub_38b0, sub_3af50, sub_428a0, sub_66860, sub_a8320, sub_aa340, sub_ab830, sub_ade10
*/
void sub_b4cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4cd0ULL || rel >= 0xb5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b5000 size=656 callers=0 calls=7
   calls: sub_3890, sub_3af80, sub_66860, sub_9b3d0, sub_a7050, sub_a8f60, sub_ade10
*/
void sub_b5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5000ULL || rel >= 0xb5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b5290 size=464 callers=0 calls=3
   calls: sub_3af80, sub_aaef0, sub_ade10
*/
void sub_b5290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5290ULL || rel >= 0xb5460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b5460 size=128 callers=0 calls=2
   calls: sub_9b3e0, sub_a92d0
*/
void sub_b5460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5460ULL || rel >= 0xb54e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b54e0 size=256 callers=2 calls=1
   calls: sub_428a0
*/
void sub_b54e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54e0ULL || rel >= 0xb55e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b55e0 size=464 callers=1 calls=0
*/
void sub_b55e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55e0ULL || rel >= 0xb57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b57b0 size=1392 callers=0 calls=11
   calls: sub_3af80, sub_428a0, sub_66860, sub_66bc0, sub_66c00, sub_9ae40, sub_a70d0, sub_aaef0, sub_abfb0, sub_ad9d0, sub_aead0
*/
void sub_b57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57b0ULL || rel >= 0xb5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b5d20 size=3600 callers=0 calls=6
   calls: sub_3af80, sub_66860, sub_66f90, sub_abfb0, sub_ade10, sub_aead0
*/
void sub_b5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d20ULL || rel >= 0xb6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b6b30 size=3040 callers=0 calls=6
   calls: sub_3af80, sub_66860, sub_abfb0, sub_ade10, sub_aead0, sub_b55e0
*/
void sub_b6b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6b30ULL || rel >= 0xb7710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7710 size=400 callers=0 calls=2
   calls: sub_38b0, sub_38d0
*/
void sub_b7710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7710ULL || rel >= 0xb78a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b78a0 size=544 callers=0 calls=6
   calls: sub_3550, sub_3620, sub_66820, sub_a92d0, sub_aca20, sub_b7e20
*/
void sub_b78a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78a0ULL || rel >= 0xb7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7ac0 size=32 callers=0 calls=1
   calls: sub_9b8a0
*/
void sub_b7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ac0ULL || rel >= 0xb7ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7ae0 size=32 callers=0 calls=1
   calls: sub_9b610
*/
void sub_b7ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ae0ULL || rel >= 0xb7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7b00 size=368 callers=1 calls=3
   calls: sub_3670, sub_428e0, sub_99a30
*/
void sub_b7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7b00ULL || rel >= 0xb7c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7c70 size=16 callers=0 calls=0
*/
void sub_b7c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c70ULL || rel >= 0xb7c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7c80 size=16 callers=0 calls=0
*/
void sub_b7c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c80ULL || rel >= 0xb7c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7c90 size=16 callers=0 calls=0
*/
void sub_b7c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c90ULL || rel >= 0xb7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7ca0 size=16 callers=0 calls=0
*/
void sub_b7ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ca0ULL || rel >= 0xb7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7cb0 size=16 callers=0 calls=0
*/
void sub_b7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7cb0ULL || rel >= 0xb7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7cc0 size=16 callers=0 calls=0
*/
void sub_b7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7cc0ULL || rel >= 0xb7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7cd0 size=16 callers=0 calls=0
*/
void sub_b7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7cd0ULL || rel >= 0xb7ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7ce0 size=32 callers=0 calls=0
*/
void sub_b7ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ce0ULL || rel >= 0xb7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7d00 size=16 callers=0 calls=0
*/
void sub_b7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d00ULL || rel >= 0xb7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7d10 size=272 callers=2 calls=1
   calls: sub_3890
*/
void sub_b7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d10ULL || rel >= 0xb7e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7e20 size=32 callers=225 calls=0
*/
void sub_b7e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7e20ULL || rel >= 0xb7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7e40 size=32 callers=10 calls=0
*/
void sub_b7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7e40ULL || rel >= 0xb7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7e60 size=432 callers=1 calls=1
   calls: sub_b7d10
*/
void sub_b7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7e60ULL || rel >= 0xb8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8010 size=32 callers=1 calls=0
*/
void sub_b8010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8010ULL || rel >= 0xb8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8030 size=192 callers=2 calls=0
*/
void sub_b8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8030ULL || rel >= 0xb80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b80f0 size=192 callers=4 calls=0
*/
void sub_b80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80f0ULL || rel >= 0xb81b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b81b0 size=224 callers=21 calls=0
*/
void sub_b81b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb81b0ULL || rel >= 0xb8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8290 size=256 callers=10 calls=1
   calls: sub_b8390
*/
void sub_b8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8290ULL || rel >= 0xb8390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8390 size=480 callers=2 calls=0
*/
void sub_b8390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8390ULL || rel >= 0xb8570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8570 size=1072 callers=0 calls=2
   calls: sub_35320, sub_9a740
*/
void sub_b8570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8570ULL || rel >= 0xb89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b89a0 size=32 callers=187 calls=0
*/
void sub_b89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb89a0ULL || rel >= 0xb89c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b89c0 size=224 callers=22 calls=0
*/
void sub_b89c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb89c0ULL || rel >= 0xb8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8aa0 size=64 callers=107 calls=0
*/
void sub_b8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8aa0ULL || rel >= 0xb8ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8ae0 size=96 callers=1 calls=0
*/
void sub_b8ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ae0ULL || rel >= 0xb8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8b40 size=80 callers=3 calls=0
*/
void sub_b8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b40ULL || rel >= 0xb8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8b90 size=32 callers=8 calls=0
*/
void sub_b8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b90ULL || rel >= 0xb8bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8bb0 size=288 callers=2 calls=0
*/
void sub_b8bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8bb0ULL || rel >= 0xb8cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8cd0 size=64 callers=11 calls=1
   calls: sub_b8bb0
*/
void sub_b8cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8cd0ULL || rel >= 0xb8d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8d10 size=240 callers=1 calls=1
   calls: sub_b8bb0
*/
void sub_b8d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8d10ULL || rel >= 0xb8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8e00 size=2368 callers=5 calls=2
   calls: sub_3890, sub_999f0
   ref: Unknown knob: %s
   ref: Redefinition of knob %s. Ignoring
*/
void Unknown_knob_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8e00ULL || rel >= 0xb9740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9740 size=80 callers=1 calls=0
*/
void sub_b9740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9740ULL || rel >= 0xb9790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9790 size=1424 callers=1 calls=4
   calls: Unknown_knob_s, sub_102180, sub_3890, sub_b9d20
   ref: VERTEX_B
*/
void VERTEX_B(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9790ULL || rel >= 0xb9d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9d20 size=352 callers=1 calls=1
   calls: sub_ba310
*/
void sub_b9d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9d20ULL || rel >= 0xb9e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9e80 size=16 callers=1 calls=0
*/
void sub_b9e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e80ULL || rel >= 0xb9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9e90 size=80 callers=4 calls=1
   calls: sub_3890
*/
void sub_b9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e90ULL || rel >= 0xb9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9ee0 size=1072 callers=1 calls=7
   calls: Unknown_knob_s, VERTEX_B, sub_101f40, sub_102180, sub_3890, sub_999f0, sub_b7e60
   ref: noStats
   ref: hexFloat
   ref: immConst
   ref: Use "-knob help" to view all knobs
   ref: lineNo
*/
void immConst(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9ee0ULL || rel >= 0xba310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ba310 size=288 callers=2 calls=0
*/
void sub_ba310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba310ULL || rel >= 0xba430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ba430 size=160 callers=3 calls=0
*/
void sub_ba430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba430ULL || rel >= 0xba4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ba4d0 size=128 callers=3 calls=0
*/
void sub_ba4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba4d0ULL || rel >= 0xba550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ba550 size=128 callers=5 calls=1
   calls: sub_ba5d0
*/
void sub_ba550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba550ULL || rel >= 0xba5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ba5d0 size=368 callers=3 calls=0
*/
void sub_ba5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba5d0ULL || rel >= 0xba740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ba740 size=688 callers=2 calls=0
*/
void sub_ba740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba740ULL || rel >= 0xba9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ba9f0 size=1200 callers=3 calls=1
   calls: sub_ba5d0
*/
void sub_ba9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba9f0ULL || rel >= 0xbaea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000baea0 size=448 callers=4 calls=3
   calls: sub_3d090, sub_3d1a0, sub_3d960
*/
void sub_baea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbaea0ULL || rel >= 0xbb060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb060 size=320 callers=1 calls=3
   calls: sub_ba5d0, sub_ba740, sub_baea0
*/
void sub_bb060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb060ULL || rel >= 0xbb1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb1a0 size=192 callers=0 calls=0
*/
void sub_bb1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb1a0ULL || rel >= 0xbb260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb260 size=960 callers=3 calls=8
   calls: sub_61f80, sub_62240, sub_67330, sub_673d0, sub_9b3e0, sub_a86a0, sub_a8960, sub_a8c40
*/
void sub_bb260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb260ULL || rel >= 0xbb620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb620 size=672 callers=0 calls=3
   calls: sub_9a740, sub_9bed0, sub_bb260
*/
void sub_bb620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb620ULL || rel >= 0xbb8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb8c0 size=960 callers=4 calls=2
   calls: sub_65420, sub_99cf0
*/
void sub_bb8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb8c0ULL || rel >= 0xbbc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bbc80 size=400 callers=7 calls=3
   calls: sub_3ce70, sub_3cfc0, sub_3d090
*/
void sub_bbc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbc80ULL || rel >= 0xbbe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bbe10 size=96 callers=1 calls=3
   calls: sub_aa4b0, sub_bb8c0, sub_bbc80
*/
void sub_bbe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbe10ULL || rel >= 0xbbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bbe70 size=448 callers=1 calls=5
   calls: sub_3d120, sub_88b40, sub_bb8c0, sub_bbc80, sub_bc030
*/
void sub_bbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbe70ULL || rel >= 0xbc030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bc030 size=1376 callers=4 calls=9
   calls: sub_3cf40, sub_3cf60, sub_3d120, sub_3d2f0, sub_3d570, sub_3d850, sub_68060, sub_8b490, sub_aa770
*/
void sub_bc030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc030ULL || rel >= 0xbc590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bc590 size=240 callers=3 calls=1
   calls: sub_3d960
*/
void sub_bc590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc590ULL || rel >= 0xbc680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bc680 size=288 callers=5 calls=5
   calls: sub_3870, sub_3d2f0, sub_bbe70, sub_bc590, sub_bc7a0
*/
void sub_bc680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc680ULL || rel >= 0xbc7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bc7a0 size=1344 callers=5 calls=14
   calls: sub_3870, sub_3ce70, sub_3ceb0, sub_3cf40, sub_3d090, sub_3d120, sub_3d140, sub_3d1a0, sub_3d850, sub_8b490, sub_aa4b0, sub_bb8c0
   ... +2 more
*/
void sub_bc7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc7a0ULL || rel >= 0xbcce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bcce0 size=32 callers=1 calls=0
*/
void sub_bcce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcce0ULL || rel >= 0xbcd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bcd00 size=2048 callers=2 calls=3
   calls: sub_5be70, sub_67ab0, sub_9bed0
*/
void sub_bcd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcd00ULL || rel >= 0xbd500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bd500 size=64 callers=1 calls=1
   calls: sub_bcd00
*/
void sub_bd500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd500ULL || rel >= 0xbd540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bd540 size=992 callers=1 calls=5
   calls: sub_3b040, sub_9a050, sub_9d2f0, sub_a5f80, sub_a70d0
*/
void sub_bd540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd540ULL || rel >= 0xbd920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bd920 size=384 callers=1 calls=3
   calls: sub_64060, sub_bcd00, sub_bd540
*/
void sub_bd920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd920ULL || rel >= 0xbdaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bdaa0 size=112 callers=7 calls=3
   calls: sub_66820, sub_86e00, sub_bd920
*/
void sub_bdaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdaa0ULL || rel >= 0xbdb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bdb10 size=192 callers=1 calls=3
   calls: sub_3d1a0, sub_3d570, sub_bdbd0
*/
void sub_bdb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb10ULL || rel >= 0xbdbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bdbd0 size=1216 callers=1 calls=5
   calls: sub_3d570, sub_5be70, sub_66f00, sub_67ab0, sub_9aab0
*/
void sub_bdbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdbd0ULL || rel >= 0xbe090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000be090 size=160 callers=8 calls=4
   calls: sub_66820, sub_86e00, sub_bc590, sub_bc7a0
*/
void sub_be090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe090ULL || rel >= 0xbe130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000be130 size=1088 callers=4 calls=5
   calls: sub_3870, sub_64060, sub_88b40, sub_bbc80, sub_bc030
*/
void sub_be130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe130ULL || rel >= 0xbe570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000be570 size=192 callers=2 calls=2
   calls: sub_3870, sub_be130
*/
void sub_be570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe570ULL || rel >= 0xbe630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000be630 size=96 callers=1 calls=2
   calls: sub_b8cd0, sub_bc7a0
   ref: TexNodep
*/
void TexNodep(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe630ULL || rel >= 0xbe690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000be690 size=992 callers=0 calls=1
   calls: sub_9a740
*/
void sub_be690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe690ULL || rel >= 0xbea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bea70 size=704 callers=1 calls=9
   calls: sub_3550, sub_3d090, sub_3db80, sub_5be70, sub_67470, sub_69b70, sub_9a740, sub_9bed0, sub_aa770
*/
void sub_bea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea70ULL || rel >= 0xbed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bed30 size=48 callers=0 calls=1
   calls: sub_3d570
*/
void sub_bed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbed30ULL || rel >= 0xbed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bed60 size=64 callers=0 calls=1
   calls: sub_3d850
*/
void sub_bed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbed60ULL || rel >= 0xbeda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000beda0 size=48 callers=0 calls=1
   calls: sub_3d2f0
*/
void sub_beda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeda0ULL || rel >= 0xbedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bedd0 size=64 callers=0 calls=1
   calls: sub_3d850
*/
void sub_bedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbedd0ULL || rel >= 0xbee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bee10 size=2240 callers=3 calls=13
   calls: sub_3ce70, sub_3ceb0, sub_3cf40, sub_3cf60, sub_3d140, sub_3d1a0, sub_3d2f0, sub_3d570, sub_3d620, sub_3d6d0, sub_3d850, sub_650d0
   ... +1 more
*/
void sub_bee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee10ULL || rel >= 0xbf6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bf6d0 size=272 callers=1 calls=2
   calls: sub_61e80, sub_a92d0
*/
void sub_bf6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6d0ULL || rel >= 0xbf7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bf7e0 size=352 callers=4 calls=0
*/
void sub_bf7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7e0ULL || rel >= 0xbf940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bf940 size=576 callers=1 calls=2
   calls: sub_3890, sub_bf7e0
*/
void sub_bf940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf940ULL || rel >= 0xbfb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bfb80 size=1152 callers=1 calls=10
   calls: sub_5be70, sub_66820, sub_67ab0, sub_7d430, sub_9bed0, sub_9ca30, sub_a5f80, sub_a95d0, sub_bf6d0, sub_bf7e0
*/
void sub_bfb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb80ULL || rel >= 0xc0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0000 size=624 callers=1 calls=5
   calls: sub_65350, sub_9ca30, sub_a70d0, sub_a92d0, sub_bf940
*/
void sub_c0000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0000ULL || rel >= 0xc0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0270 size=160 callers=1 calls=2
   calls: sub_9bed0, sub_bfb80
*/
void sub_c0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0270ULL || rel >= 0xc0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0310 size=640 callers=1 calls=0
*/
void sub_c0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0310ULL || rel >= 0xc0590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0590 size=464 callers=1 calls=3
   calls: sub_67010, sub_9b0a0, sub_a7b70
*/
void sub_c0590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0590ULL || rel >= 0xc0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0760 size=624 callers=1 calls=6
   calls: sub_12d3f0, sub_66820, sub_67470, sub_c0310, sub_c0590, sub_ffa40
*/
void sub_c0760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0760ULL || rel >= 0xc09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c09d0 size=112 callers=1 calls=2
   calls: sub_b8aa0, sub_c0760
*/
void sub_c09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09d0ULL || rel >= 0xc0a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0a40 size=48 callers=1 calls=0
*/
void sub_c0a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a40ULL || rel >= 0xc0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0a70 size=1424 callers=1 calls=9
   calls: sub_620d0, sub_67470, sub_9a050, sub_9b3d0, sub_9b3e0, sub_a7090, sub_a70d0, sub_a8030, sub_e7820
*/
void sub_c0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a70ULL || rel >= 0xc1000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c1000 size=352 callers=1 calls=1
   calls: sub_9b3d0
*/
void sub_c1000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1000ULL || rel >= 0xc1160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c1160 size=1024 callers=1 calls=4
   calls: sub_67470, sub_9af80, sub_9bed0, sub_a7090
*/
void sub_c1160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1160ULL || rel >= 0xc1560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c1560 size=928 callers=1 calls=8
   calls: sub_67470, sub_9a050, sub_9bed0, sub_a70d0, sub_a7110, sub_b7e20, sub_b8b90, sub_c0a70
*/
void sub_c1560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1560ULL || rel >= 0xc1900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c1900 size=1456 callers=1 calls=8
   calls: sub_66820, sub_67470, sub_b7e20, sub_b89a0, sub_c1000, sub_c1160, sub_c1560, sub_ffa40
*/
void sub_c1900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1900ULL || rel >= 0xc1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c1eb0 size=368 callers=1 calls=4
   calls: sub_3550, sub_3890, sub_b8aa0, sub_c1900
*/
void sub_c1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1eb0ULL || rel >= 0xc2020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c2020 size=512 callers=1 calls=3
   calls: sub_64060, sub_9a710, sub_c2220
*/
void sub_c2020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2020ULL || rel >= 0xc2220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c2220 size=256 callers=5 calls=1
   calls: sub_9a710
*/
void sub_c2220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2220ULL || rel >= 0xc2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c2320 size=272 callers=2 calls=1
   calls: sub_c2430
*/
void sub_c2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2320ULL || rel >= 0xc2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c2430 size=256 callers=3 calls=2
   calls: sub_a7850, sub_a8080
*/
void sub_c2430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2430ULL || rel >= 0xc2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c2530 size=1424 callers=1 calls=3
   calls: sub_9bed0, sub_c2320, sub_c2430
*/
void sub_c2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2530ULL || rel >= 0xc2ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c2ac0 size=2560 callers=1 calls=5
   calls: sub_35320, sub_b7e20, sub_b8aa0, sub_c2530, sub_c8120
*/
void sub_c2ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2ac0ULL || rel >= 0xc34c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c34c0 size=400 callers=1 calls=7
   calls: sub_636f0, sub_64060, sub_66820, sub_68090, sub_b7e20, sub_b89a0, sub_c2ac0
*/
void sub_c34c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34c0ULL || rel >= 0xc3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c3650 size=960 callers=1 calls=1
   calls: sub_9d2f0
*/
void sub_c3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3650ULL || rel >= 0xc3a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c3a10 size=848 callers=2 calls=2
   calls: sub_91bc0, sub_c3d60
*/
void sub_c3a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a10ULL || rel >= 0xc3d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c3d60 size=384 callers=1 calls=1
   calls: sub_66d40
*/
void sub_c3d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d60ULL || rel >= 0xc3ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c3ee0 size=720 callers=0 calls=5
   calls: sub_86be0, sub_9bed0, sub_9c1c0, sub_a9a30, sub_aa640
*/
void sub_c3ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ee0ULL || rel >= 0xc41b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c41b0 size=720 callers=1 calls=1
   calls: sub_a7800
*/
void sub_c41b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41b0ULL || rel >= 0xc4480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c4480 size=864 callers=1 calls=3
   calls: sub_9bed0, sub_a7800, sub_a7850
*/
void sub_c4480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4480ULL || rel >= 0xc47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c47e0 size=1104 callers=1 calls=3
   calls: sub_9bed0, sub_a7800, sub_a7850
*/
void sub_c47e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc47e0ULL || rel >= 0xc4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c4c30 size=496 callers=2 calls=5
   calls: sub_35320, sub_a5f80, sub_c41b0, sub_c4480, sub_c47e0
*/
void sub_c4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c30ULL || rel >= 0xc4e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c4e20 size=560 callers=2 calls=1
   calls: sub_9d2f0
*/
void sub_c4e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e20ULL || rel >= 0xc5050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c5050 size=480 callers=3 calls=7
   calls: sub_b7e20, sub_b89a0, sub_b8aa0, sub_c3650, sub_c3a10, sub_c4c30, sub_c4e20
*/
void sub_c5050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5050ULL || rel >= 0xc5230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c5230 size=992 callers=1 calls=7
   calls: sub_64060, sub_68110, sub_88b40, sub_8e6e0, sub_92ab0, sub_b7e20, sub_c5050
*/
void sub_c5230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5230ULL || rel >= 0xc5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c5610 size=288 callers=2 calls=7
   calls: sub_66820, sub_86e00, sub_b7e20, sub_b89a0, sub_b8cd0, sub_bdaa0, sub_c5230
   ref: HoistInvariants
*/
void HoistInvariants(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5610ULL || rel >= 0xc5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c5730 size=1920 callers=1 calls=9
   calls: sub_62050, sub_64060, sub_86e00, sub_9b920, sub_9bed0, sub_9c950, sub_a5f80, sub_a7090, sub_a7370
*/
void sub_c5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5730ULL || rel >= 0xc5eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c5eb0 size=480 callers=1 calls=2
   calls: sub_69540, sub_9c950
*/
void sub_c5eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5eb0ULL || rel >= 0xc6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6090 size=256 callers=1 calls=2
   calls: sub_3af50, sub_b7e20
*/
void sub_c6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6090ULL || rel >= 0xc6190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6190 size=608 callers=2 calls=2
   calls: sub_69350, sub_c5eb0
*/
void sub_c6190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6190ULL || rel >= 0xc63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c63f0 size=560 callers=1 calls=1
   calls: sub_c6190
*/
void sub_c63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc63f0ULL || rel >= 0xc6620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6620 size=480 callers=1 calls=0
*/
void sub_c6620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6620ULL || rel >= 0xc6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6800 size=896 callers=1 calls=5
   calls: sub_3af50, sub_9c950, sub_a73d0, sub_a7800, sub_a8030
*/
void sub_c6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6800ULL || rel >= 0xc6b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6b80 size=960 callers=1 calls=6
   calls: sub_3af50, sub_9a050, sub_a7090, sub_a73d0, sub_a7800, sub_a8030
*/
void sub_c6b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6b80ULL || rel >= 0xc6f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6f40 size=272 callers=1 calls=2
   calls: sub_c63f0, sub_c6620
*/
void sub_c6f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6f40ULL || rel >= 0xc7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7050 size=400 callers=1 calls=1
   calls: sub_8e6e0
*/
void sub_c7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7050ULL || rel >= 0xc71e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c71e0 size=432 callers=1 calls=3
   calls: sub_88b40, sub_c6090, sub_c7050
*/
void sub_c71e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71e0ULL || rel >= 0xc7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7390 size=48 callers=0 calls=0
*/
void sub_c7390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7390ULL || rel >= 0xc73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c73c0 size=480 callers=1 calls=4
   calls: sub_9bed0, sub_c6800, sub_c6b80, sub_c6f40
*/
void sub_c73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc73c0ULL || rel >= 0xc75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c75a0 size=96 callers=1 calls=3
   calls: sub_66820, sub_c71e0, sub_c73c0
*/
void sub_c75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc75a0ULL || rel >= 0xc7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7600 size=880 callers=1 calls=7
   calls: sub_64060, sub_66820, sub_88b40, sub_8c830, sub_9bed0, sub_b8aa0, sub_e7a30
*/
void sub_c7600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7600ULL || rel >= 0xc7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7970 size=528 callers=1 calls=6
   calls: sub_636f0, sub_66820, sub_88b40, sub_b7e20, sub_b8aa0, sub_c7b80
*/
void sub_c7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7970ULL || rel >= 0xc7b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7b80 size=224 callers=3 calls=1
   calls: sub_9b3d0
*/
void sub_c7b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7b80ULL || rel >= 0xc7c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7c60 size=400 callers=2 calls=1
   calls: sub_69ac0
*/
void sub_c7c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7c60ULL || rel >= 0xc7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7df0 size=768 callers=1 calls=4
   calls: sub_64060, sub_9bed0, sub_b8aa0, sub_c7c60
*/
void sub_c7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7df0ULL || rel >= 0xc80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c80f0 size=48 callers=1 calls=1
   calls: sub_c7df0
*/
void sub_c80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc80f0ULL || rel >= 0xc8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8120 size=640 callers=1 calls=0
*/
void sub_c8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8120ULL || rel >= 0xc83a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c83a0 size=16 callers=0 calls=0
*/
void sub_c83a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83a0ULL || rel >= 0xc83b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c83b0 size=16 callers=0 calls=0
*/
void sub_c83b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83b0ULL || rel >= 0xc83c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c83c0 size=32 callers=0 calls=0
*/
void sub_c83c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83c0ULL || rel >= 0xc83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c83e0 size=64 callers=0 calls=0
*/
void sub_c83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83e0ULL || rel >= 0xc8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8420 size=16 callers=0 calls=0
*/
void sub_c8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8420ULL || rel >= 0xc8430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8430 size=48 callers=0 calls=0
*/
void sub_c8430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8430ULL || rel >= 0xc8460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8460 size=80 callers=0 calls=0
*/
void sub_c8460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8460ULL || rel >= 0xc84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c84b0 size=160 callers=0 calls=0
*/
void sub_c84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc84b0ULL || rel >= 0xc8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8550 size=160 callers=0 calls=0
*/
void sub_c8550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8550ULL || rel >= 0xc85f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c85f0 size=400 callers=3 calls=2
   calls: sub_91bc0, sub_92590
*/
void sub_c85f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc85f0ULL || rel >= 0xc8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8780 size=464 callers=2 calls=2
   calls: sub_91bc0, sub_92590
*/
void sub_c8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8780ULL || rel >= 0xc8950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8950 size=480 callers=1 calls=2
   calls: sub_3ceb0, sub_3cf40
*/
void sub_c8950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8950ULL || rel >= 0xc8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8b30 size=1424 callers=1 calls=9
   calls: sub_3ceb0, sub_3cf40, sub_68060, sub_91bc0, sub_92590, sub_c85f0, sub_c8780, sub_c90c0, sub_c9240
*/
void sub_c8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8b30ULL || rel >= 0xc90c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c90c0 size=384 callers=2 calls=0
*/
void sub_c90c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc90c0ULL || rel >= 0xc9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9240 size=960 callers=3 calls=3
   calls: sub_62240, sub_63c30, sub_69540
*/
void sub_c9240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9240ULL || rel >= 0xc9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9600 size=768 callers=1 calls=3
   calls: sub_3ceb0, sub_3cf40, sub_c85f0
*/
void sub_c9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9600ULL || rel >= 0xc9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9900 size=320 callers=3 calls=3
   calls: sub_c8950, sub_c8b30, sub_c9600
*/
void sub_c9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9900ULL || rel >= 0xc9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9a40 size=720 callers=2 calls=3
   calls: sub_3d1a0, sub_9bed0, sub_a95d0
*/
void sub_c9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9a40ULL || rel >= 0xc9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9d10 size=1600 callers=1 calls=15
   calls: sub_3ce70, sub_3d1a0, sub_3d570, sub_66820, sub_863d0, sub_86430, sub_86e00, sub_88b40, sub_9bed0, sub_a92d0, sub_b8aa0, sub_c90c0
   ... +3 more
*/
void sub_c9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9d10ULL || rel >= 0xca350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca350 size=112 callers=1 calls=3
   calls: sub_b8aa0, sub_b8cd0, sub_c9d10
   ref: Predication
*/
void Predication(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca350ULL || rel >= 0xca3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca3c0 size=496 callers=1 calls=2
   calls: sub_3890, sub_55200
*/
void sub_ca3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca3c0ULL || rel >= 0xca5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca5b0 size=736 callers=2 calls=5
   calls: sub_3870, sub_66820, sub_b7e20, sub_b7e40, sub_b89a0
*/
void sub_ca5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca5b0ULL || rel >= 0xca890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca890 size=736 callers=7 calls=1
   calls: sub_38b0
*/
void sub_ca890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca890ULL || rel >= 0xcab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cab70 size=1904 callers=1 calls=3
   calls: sub_99cf0, sub_9a050, sub_ca890
*/
void sub_cab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcab70ULL || rel >= 0xcb2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cb2e0 size=384 callers=2 calls=1
   calls: sub_ca890
*/
void sub_cb2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb2e0ULL || rel >= 0xcb460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cb460 size=4080 callers=1 calls=15
   calls: sub_117330, sub_1173a0, sub_117400, sub_1182c0, sub_38d0, sub_3d570, sub_3d960, sub_55950, sub_64d70, sub_69540, sub_bc680, sub_ca3c0
   ... +3 more
*/
void sub_cb460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb460ULL || rel >= 0xcc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cc450 size=64 callers=0 calls=0
*/
void sub_cc450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc450ULL || rel >= 0xcc490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cc490 size=848 callers=2 calls=0
*/
void sub_cc490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc490ULL || rel >= 0xcc7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cc7e0 size=496 callers=1 calls=0
*/
void sub_cc7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7e0ULL || rel >= 0xcc9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cc9d0 size=320 callers=1 calls=1
   calls: sub_cc7e0
*/
void sub_cc9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9d0ULL || rel >= 0xccb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ccb10 size=1504 callers=3 calls=2
   calls: sub_cc490, sub_cc9d0
*/
void sub_ccb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xccb10ULL || rel >= 0xcd0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cd0f0 size=784 callers=0 calls=0
*/
void sub_cd0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcd0f0ULL || rel >= 0xcd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cd400 size=208 callers=0 calls=0
*/
void sub_cd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcd400ULL || rel >= 0xcd4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cd4d0 size=4400 callers=3 calls=5
   calls: sub_55200, sub_b7e20, sub_b7e40, sub_b89a0, sub_ce600
*/
void sub_cd4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcd4d0ULL || rel >= 0xce600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce600 size=1440 callers=3 calls=8
   calls: sub_3550, sub_64060, sub_66820, sub_8aa10, sub_8c830, sub_ced10, sub_cf2a0, sub_cf7d0
*/
void sub_ce600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce600ULL || rel >= 0xceba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ceba0 size=368 callers=0 calls=1
   calls: sub_679f0
*/
void sub_ceba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceba0ULL || rel >= 0xced10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ced10 size=1424 callers=1 calls=1
   calls: sub_64990
*/
void sub_ced10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xced10ULL || rel >= 0xcf2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cf2a0 size=1328 callers=1 calls=3
   calls: sub_3ceb0, sub_3d120, sub_3d570
*/
void sub_cf2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2a0ULL || rel >= 0xcf7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cf7d0 size=496 callers=2 calls=0
*/
void sub_cf7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf7d0ULL || rel >= 0xcf9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cf9c0 size=688 callers=1 calls=2
   calls: sub_3ceb0, sub_55200
*/
void sub_cf9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf9c0ULL || rel >= 0xcfc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cfc70 size=512 callers=1 calls=1
   calls: sub_cfe70
*/
void sub_cfc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfc70ULL || rel >= 0xcfe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cfe70 size=432 callers=2 calls=0
*/
void sub_cfe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe70ULL || rel >= 0xd0020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d0020 size=288 callers=1 calls=1
   calls: sub_cfe70
*/
void sub_d0020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0020ULL || rel >= 0xd0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d0140 size=304 callers=8 calls=1
   calls: sub_9a050
*/
void sub_d0140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0140ULL || rel >= 0xd0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d0270 size=448 callers=3 calls=1
   calls: sub_55f80
*/
void sub_d0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0270ULL || rel >= 0xd0430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d0430 size=224 callers=3 calls=1
   calls: sub_d1100
*/
void sub_d0430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0430ULL || rel >= 0xd0510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d0510 size=656 callers=16 calls=2
   calls: sub_d0270, sub_d0430
*/
void sub_d0510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0510ULL || rel >= 0xd07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d07a0 size=240 callers=2 calls=1
   calls: sub_55f80
*/
void sub_d07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd07a0ULL || rel >= 0xd0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d0890 size=352 callers=4 calls=1
   calls: sub_d07a0
*/
void sub_d0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0890ULL || rel >= 0xd09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d09f0 size=1808 callers=1 calls=2
   calls: sub_38b0, sub_d0890
*/
void sub_d09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd09f0ULL || rel >= 0xd1100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1100 size=2128 callers=8 calls=5
   calls: sub_55950, sub_9a050, sub_a9df0, sub_d0270, sub_d1100
*/
void sub_d1100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1100ULL || rel >= 0xd1950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1950 size=400 callers=4 calls=0
*/
void sub_d1950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1950ULL || rel >= 0xd1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1ae0 size=864 callers=1 calls=5
   calls: sub_9a050, sub_a7110, sub_a8a50, sub_b8aa0, sub_d0140
*/
void sub_d1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1ae0ULL || rel >= 0xd1e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1e40 size=64 callers=0 calls=0
*/
void sub_d1e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1e40ULL || rel >= 0xd1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1e80 size=912 callers=3 calls=2
   calls: sub_3d120, sub_69540
*/
void sub_d1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1e80ULL || rel >= 0xd2210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d2210 size=11664 callers=3 calls=30
   calls: sub_117330, sub_1173a0, sub_117400, sub_1182c0, sub_38b0, sub_3d120, sub_3d960, sub_55140, sub_55870, sub_55e00, sub_55ef0, sub_67630
   ... +18 more
*/
void sub_d2210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2210ULL || rel >= 0xd4fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d4fa0 size=5184 callers=4 calls=12
   calls: sub_3d120, sub_3d960, sub_55140, sub_55ef0, sub_67630, sub_9bed0, sub_d0140, sub_d0430, sub_d0510, sub_d1100, sub_d1950, sub_d1ae0
*/
void sub_d4fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4fa0ULL || rel >= 0xd63e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d63e0 size=432 callers=2 calls=1
   calls: sub_9d2f0
*/
void sub_d63e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd63e0ULL || rel >= 0xd6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d6590 size=704 callers=1 calls=7
   calls: sub_55140, sub_55ef0, sub_67630, sub_67890, sub_d0510, sub_d4fa0, sub_d63e0
*/
void sub_d6590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6590ULL || rel >= 0xd6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d6850 size=64 callers=0 calls=1
   calls: sub_55400
*/
void sub_d6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6850ULL || rel >= 0xd6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d6890 size=224 callers=1 calls=1
   calls: sub_55200
*/
void sub_d6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6890ULL || rel >= 0xd6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d6970 size=464 callers=2 calls=0
*/
void sub_d6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6970ULL || rel >= 0xd6b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d6b40 size=9440 callers=1 calls=24
   calls: sub_38b0, sub_3ceb0, sub_3cf40, sub_3d120, sub_3d570, sub_3d960, sub_55200, sub_5be70, sub_67ab0, sub_69540, sub_9a050, sub_9bed0
   ... +12 more
*/
void sub_d6b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6b40ULL || rel >= 0xd9020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9020 size=2304 callers=1 calls=5
   calls: sub_9b020, sub_9bed0, sub_a7090, sub_a70d0, sub_a85c0
*/
void sub_d9020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9020ULL || rel >= 0xd9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9920 size=64 callers=0 calls=1
   calls: sub_9b020
*/
void sub_d9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9920ULL || rel >= 0xd9960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9960 size=496 callers=1 calls=1
   calls: sub_38d0
*/
void sub_d9960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9960ULL || rel >= 0xd9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9b50 size=224 callers=1 calls=0
*/
void sub_d9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b50ULL || rel >= 0xd9c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9c30 size=816 callers=1 calls=7
   calls: sub_b7e20, sub_b7e40, sub_ccb10, sub_cd4d0, sub_ce600, sub_d6b40, sub_d9b50
*/
void sub_d9c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9c30ULL || rel >= 0xd9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9f60 size=752 callers=7 calls=5
   calls: sub_cb460, sub_ccb10, sub_cd4d0, sub_d9960, sub_d9c30
*/
void sub_d9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9f60ULL || rel >= 0xda250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da250 size=1136 callers=1 calls=5
   calls: sub_3550, sub_88b40, sub_8b490, sub_bc680, sub_d9f60
*/
void sub_da250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda250ULL || rel >= 0xda6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da6c0 size=16 callers=0 calls=0
*/
void sub_da6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6c0ULL || rel >= 0xda6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da6d0 size=352 callers=1 calls=0
*/
void sub_da6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda6d0ULL || rel >= 0xda830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da830 size=32 callers=0 calls=0
*/
void sub_da830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda830ULL || rel >= 0xda850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da850 size=320 callers=1 calls=2
   calls: sub_3870, sub_3890
*/
void sub_da850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda850ULL || rel >= 0xda990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da990 size=400 callers=2 calls=2
   calls: sub_3870, sub_da6d0
*/
void sub_da990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda990ULL || rel >= 0xdab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dab20 size=240 callers=4 calls=5
   calls: sub_61da0, sub_61df0, sub_61e10, sub_61e60, sub_da990
*/
void sub_dab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdab20ULL || rel >= 0xdac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dac10 size=464 callers=7 calls=5
   calls: sub_3870, sub_61df0, sub_61e10, sub_61e60, sub_da990
*/
void sub_dac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdac10ULL || rel >= 0xdade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dade0 size=304 callers=1 calls=3
   calls: sub_61e10, sub_61e60, sub_dac10
*/
void sub_dade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdade0ULL || rel >= 0xdaf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000daf10 size=144 callers=1 calls=3
   calls: sub_61da0, sub_61df0, sub_dade0
*/
void sub_daf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaf10ULL || rel >= 0xdafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dafa0 size=288 callers=1 calls=3
   calls: sub_61e10, sub_61e60, sub_dac10
*/
void sub_dafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdafa0ULL || rel >= 0xdb0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db0c0 size=160 callers=1 calls=5
   calls: sub_61da0, sub_61df0, sub_61e10, sub_61e60, sub_dafa0
*/
void sub_db0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb0c0ULL || rel >= 0xdb160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db160 size=672 callers=4 calls=5
   calls: sub_61da0, sub_61df0, sub_61e10, sub_61e60, sub_dac10
*/
void sub_db160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb160ULL || rel >= 0xdb400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db400 size=448 callers=1 calls=3
   calls: sub_61df0, sub_61e10, sub_61e60
*/
void sub_db400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb400ULL || rel >= 0xdb5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db5c0 size=288 callers=1 calls=5
   calls: sub_61da0, sub_61df0, sub_61e10, sub_61e60, sub_db400
*/
void sub_db5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb5c0ULL || rel >= 0xdb6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db6e0 size=528 callers=1 calls=4
   calls: sub_3870, sub_61e10, sub_61e60, sub_dac10
*/
void sub_db6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb6e0ULL || rel >= 0xdb8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db8f0 size=160 callers=1 calls=3
   calls: sub_61da0, sub_61df0, sub_db6e0
*/
void sub_db8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb8f0ULL || rel >= 0xdb990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db990 size=256 callers=1 calls=1
   calls: sub_3870
*/
void sub_db990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb990ULL || rel >= 0xdba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dba90 size=144 callers=1 calls=3
   calls: sub_61da0, sub_61df0, sub_db990
*/
void sub_dba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdba90ULL || rel >= 0xdbb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dbb20 size=3472 callers=1 calls=20
   calls: sub_3550, sub_3cf40, sub_3d090, sub_3d1a0, sub_3d240, sub_3d850, sub_3d8b0, sub_3d960, sub_61da0, sub_61df0, sub_697e0, sub_99c50
   ... +8 more
*/
void sub_dbb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbb20ULL || rel >= 0xdc8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dc8b0 size=368 callers=1 calls=4
   calls: sub_61dd0, sub_61e40, sub_99c00, sub_9a050
*/
void sub_dc8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc8b0ULL || rel >= 0xdca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dca20 size=16 callers=0 calls=0
*/
void sub_dca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca20ULL || rel >= 0xdca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dca30 size=16 callers=0 calls=0
*/
void sub_dca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca30ULL || rel >= 0xdca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dca40 size=16 callers=0 calls=0
*/
void sub_dca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca40ULL || rel >= 0xdca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dca50 size=16 callers=0 calls=0
*/
void sub_dca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca50ULL || rel >= 0xdca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dca60 size=16 callers=0 calls=0
*/
void sub_dca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca60ULL || rel >= 0xdca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dca70 size=16 callers=0 calls=0
*/
void sub_dca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca70ULL || rel >= 0xdca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dca80 size=16 callers=0 calls=0
*/
void sub_dca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca80ULL || rel >= 0xdca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dca90 size=16 callers=0 calls=0
*/
void sub_dca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdca90ULL || rel >= 0xdcaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcaa0 size=16 callers=0 calls=0
*/
void sub_dcaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcaa0ULL || rel >= 0xdcab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcab0 size=16 callers=0 calls=0
*/
void sub_dcab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcab0ULL || rel >= 0xdcac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcac0 size=16 callers=0 calls=0
*/
void sub_dcac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcac0ULL || rel >= 0xdcad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcad0 size=16 callers=0 calls=0
*/
void sub_dcad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcad0ULL || rel >= 0xdcae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcae0 size=16 callers=0 calls=0
*/
void sub_dcae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcae0ULL || rel >= 0xdcaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcaf0 size=32 callers=0 calls=0
*/
void sub_dcaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcaf0ULL || rel >= 0xdcb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcb10 size=16 callers=0 calls=0
*/
void sub_dcb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb10ULL || rel >= 0xdcb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcb20 size=16 callers=0 calls=0
*/
void sub_dcb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb20ULL || rel >= 0xdcb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcb30 size=16 callers=0 calls=0
*/
void sub_dcb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb30ULL || rel >= 0xdcb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcb40 size=16 callers=0 calls=0
*/
void sub_dcb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb40ULL || rel >= 0xdcb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcb50 size=16 callers=0 calls=0
*/
void sub_dcb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb50ULL || rel >= 0xdcb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcb60 size=16 callers=0 calls=0
*/
void sub_dcb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb60ULL || rel >= 0xdcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcb70 size=16 callers=0 calls=0
*/
void sub_dcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb70ULL || rel >= 0xdcb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcb80 size=16 callers=0 calls=0
*/
void sub_dcb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb80ULL || rel >= 0xdcb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcb90 size=16 callers=0 calls=0
*/
void sub_dcb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcb90ULL || rel >= 0xdcba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcba0 size=16 callers=0 calls=0
*/
void sub_dcba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcba0ULL || rel >= 0xdcbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcbb0 size=16 callers=0 calls=0
*/
void sub_dcbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcbb0ULL || rel >= 0xdcbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcbc0 size=16 callers=0 calls=0
*/
void sub_dcbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcbc0ULL || rel >= 0xdcbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcbd0 size=80 callers=0 calls=0
*/
void sub_dcbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcbd0ULL || rel >= 0xdcc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcc20 size=32 callers=0 calls=0
*/
void sub_dcc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc20ULL || rel >= 0xdcc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcc40 size=48 callers=0 calls=0
*/
void sub_dcc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc40ULL || rel >= 0xdcc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcc70 size=64 callers=0 calls=0
*/
void sub_dcc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc70ULL || rel >= 0xdccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dccb0 size=96 callers=0 calls=0
*/
void sub_dccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdccb0ULL || rel >= 0xdcd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcd10 size=80 callers=0 calls=0
*/
void sub_dcd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd10ULL || rel >= 0xdcd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcd60 size=64 callers=0 calls=0
*/
void sub_dcd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd60ULL || rel >= 0xdcda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcda0 size=96 callers=0 calls=0
*/
void sub_dcda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcda0ULL || rel >= 0xdce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dce00 size=176 callers=0 calls=0
*/
void sub_dce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce00ULL || rel >= 0xdceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dceb0 size=192 callers=0 calls=0
*/
void sub_dceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdceb0ULL || rel >= 0xdcf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcf70 size=96 callers=2 calls=1
   calls: sub_3870
*/
void sub_dcf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcf70ULL || rel >= 0xdcfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcfd0 size=224 callers=9 calls=1
   calls: sub_3870
*/
void sub_dcfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcfd0ULL || rel >= 0xdd0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd0b0 size=176 callers=5 calls=1
   calls: sub_35f0
*/
void sub_dd0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd0b0ULL || rel >= 0xdd160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd160 size=64 callers=2 calls=0
*/
void sub_dd160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd160ULL || rel >= 0xdd1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd1a0 size=256 callers=10 calls=1
   calls: sub_35f0
*/
void sub_dd1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd1a0ULL || rel >= 0xdd2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd2a0 size=288 callers=3 calls=1
   calls: sub_dd1a0
*/
void sub_dd2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd2a0ULL || rel >= 0xdd3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd3c0 size=128 callers=3 calls=2
   calls: sub_b7e20, sub_b89a0
*/
void sub_dd3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3c0ULL || rel >= 0xdd440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd440 size=496 callers=3 calls=1
   calls: sub_9a740
*/
void sub_dd440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd440ULL || rel >= 0xdd630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd630 size=208 callers=3 calls=3
   calls: sub_38b0, sub_dd1a0, sub_dd440
*/
void sub_dd630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd630ULL || rel >= 0xdd700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd700 size=464 callers=3 calls=3
   calls: sub_38b0, sub_dd1a0, sub_dd440
*/
void sub_dd700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd700ULL || rel >= 0xdd8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd8d0 size=368 callers=3 calls=2
   calls: sub_5be70, sub_dd1a0
*/
void sub_dd8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd8d0ULL || rel >= 0xdda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dda40 size=176 callers=1 calls=4
   calls: sub_dd2a0, sub_dd630, sub_dd700, sub_dd8d0
*/
void sub_dda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdda40ULL || rel >= 0xddaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddaf0 size=32 callers=1 calls=0
*/
void sub_ddaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddaf0ULL || rel >= 0xddb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddb10 size=112 callers=2 calls=0
*/
void sub_ddb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb10ULL || rel >= 0xddb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddb80 size=80 callers=3 calls=0
*/
void sub_ddb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb80ULL || rel >= 0xddbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddbd0 size=48 callers=1 calls=0
*/
void sub_ddbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddbd0ULL || rel >= 0xddc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddc00 size=48 callers=0 calls=1
   calls: sub_3870
*/
void sub_ddc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddc00ULL || rel >= 0xddc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddc30 size=96 callers=2 calls=0
*/
void sub_ddc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddc30ULL || rel >= 0xddc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddc90 size=48 callers=16 calls=0
*/
void sub_ddc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddc90ULL || rel >= 0xddcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddcc0 size=32 callers=18 calls=0
*/
void sub_ddcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddcc0ULL || rel >= 0xddce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddce0 size=352 callers=1 calls=1
   calls: sub_3870
*/
void sub_ddce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddce0ULL || rel >= 0xdde40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dde40 size=288 callers=2 calls=4
   calls: sub_b8290, sub_b8390, sub_ddf60, sub_de1a0
*/
void sub_dde40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdde40ULL || rel >= 0xddf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddf60 size=576 callers=1 calls=1
   calls: sub_e06e0
*/
void sub_ddf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddf60ULL || rel >= 0xde1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de1a0 size=256 callers=3 calls=1
   calls: sub_35f0
*/
void sub_de1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde1a0ULL || rel >= 0xde2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de2a0 size=16 callers=1 calls=0
*/
void sub_de2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde2a0ULL || rel >= 0xde2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de2b0 size=160 callers=2 calls=2
   calls: sub_b8290, sub_de1a0
*/
void sub_de2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde2b0ULL || rel >= 0xde350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de350 size=1456 callers=1 calls=8
   calls: sub_35f0, sub_3870, sub_dd2a0, sub_dd630, sub_dd700, sub_dd8d0, sub_dde40, sub_de2b0
*/
void sub_de350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde350ULL || rel >= 0xde900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de900 size=560 callers=2 calls=0
*/
void sub_de900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde900ULL || rel >= 0xdeb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000deb30 size=16 callers=0 calls=0
*/
void sub_deb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb30ULL || rel >= 0xdeb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000deb40 size=16 callers=0 calls=0
*/
void sub_deb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb40ULL || rel >= 0xdeb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000deb50 size=16 callers=0 calls=0
*/
void sub_deb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb50ULL || rel >= 0xdeb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000deb60 size=976 callers=2 calls=1
   calls: sub_ba430
*/
void sub_deb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb60ULL || rel >= 0xdef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000def30 size=2064 callers=3 calls=11
   calls: sub_3550, sub_38d0, sub_64d70, sub_68060, sub_88b40, sub_9c300, sub_b8d10, sub_ba550, sub_baea0, sub_de900, sub_deb60
   ref: ScheduleInstructionsReduceReg
   ref: ScheduleInstructionsDynBatch
*/
void ScheduleInstructionsReduceReg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef30ULL || rel >= 0xdf740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000df740 size=656 callers=1 calls=5
   calls: sub_35f0, sub_dd2a0, sub_dd630, sub_dd700, sub_dd8d0
*/
void sub_df740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf740ULL || rel >= 0xdf9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000df9d0 size=192 callers=1 calls=1
   calls: sub_35f0
*/
void sub_df9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf9d0ULL || rel >= 0xdfa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfa90 size=192 callers=1 calls=1
   calls: sub_35f0
*/
void sub_dfa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfa90ULL || rel >= 0xdfb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfb50 size=208 callers=1 calls=1
   calls: sub_35f0
*/
void sub_dfb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfb50ULL || rel >= 0xdfc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfc20 size=112 callers=2 calls=0
*/
void sub_dfc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfc20ULL || rel >= 0xdfc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfc90 size=240 callers=0 calls=0
*/
void sub_dfc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfc90ULL || rel >= 0xdfd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfd80 size=176 callers=1 calls=0
*/
void sub_dfd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd80ULL || rel >= 0xdfe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfe30 size=416 callers=0 calls=0
*/
void sub_dfe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfe30ULL || rel >= 0xdffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dffd0 size=320 callers=1 calls=1
   calls: sub_9c270
*/
void sub_dffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdffd0ULL || rel >= 0xe0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0110 size=208 callers=3 calls=1
   calls: sub_dffd0
*/
void sub_e0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0110ULL || rel >= 0xe01e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e01e0 size=16 callers=0 calls=0
*/
void sub_e01e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe01e0ULL || rel >= 0xe01f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e01f0 size=16 callers=0 calls=0
*/
void sub_e01f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe01f0ULL || rel >= 0xe0200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0200 size=16 callers=0 calls=0
*/
void sub_e0200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0200ULL || rel >= 0xe0210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0210 size=16 callers=0 calls=0
*/
void sub_e0210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0210ULL || rel >= 0xe0220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0220 size=16 callers=0 calls=0
*/
void sub_e0220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0220ULL || rel >= 0xe0230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0230 size=16 callers=0 calls=0
*/
void sub_e0230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0230ULL || rel >= 0xe0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0240 size=16 callers=0 calls=0
*/
void sub_e0240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0240ULL || rel >= 0xe0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0250 size=16 callers=0 calls=0
*/
void sub_e0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0250ULL || rel >= 0xe0260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0260 size=16 callers=0 calls=0
*/
void sub_e0260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0260ULL || rel >= 0xe0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0270 size=16 callers=0 calls=0
*/
void sub_e0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0270ULL || rel >= 0xe0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0280 size=16 callers=0 calls=0
*/
void sub_e0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0280ULL || rel >= 0xe0290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0290 size=16 callers=0 calls=0
*/
void sub_e0290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0290ULL || rel >= 0xe02a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e02a0 size=16 callers=0 calls=0
*/
void sub_e02a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe02a0ULL || rel >= 0xe02b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e02b0 size=16 callers=0 calls=0
*/
void sub_e02b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe02b0ULL || rel >= 0xe02c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e02c0 size=16 callers=0 calls=0
*/
void sub_e02c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe02c0ULL || rel >= 0xe02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e02d0 size=16 callers=0 calls=0
*/
void sub_e02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe02d0ULL || rel >= 0xe02e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e02e0 size=16 callers=0 calls=0
*/
void sub_e02e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe02e0ULL || rel >= 0xe02f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e02f0 size=16 callers=0 calls=0
*/
void sub_e02f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe02f0ULL || rel >= 0xe0300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0300 size=16 callers=0 calls=0
*/
void sub_e0300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0300ULL || rel >= 0xe0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0310 size=16 callers=0 calls=0
*/
void sub_e0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0310ULL || rel >= 0xe0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0320 size=64 callers=0 calls=0
*/
void sub_e0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0320ULL || rel >= 0xe0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0360 size=48 callers=0 calls=0
*/
void sub_e0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0360ULL || rel >= 0xe0390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0390 size=16 callers=0 calls=0
*/
void sub_e0390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0390ULL || rel >= 0xe03a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e03a0 size=64 callers=0 calls=0
*/
void sub_e03a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03a0ULL || rel >= 0xe03e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e03e0 size=96 callers=0 calls=0
*/
void sub_e03e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03e0ULL || rel >= 0xe0440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0440 size=80 callers=0 calls=0
*/
void sub_e0440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0440ULL || rel >= 0xe0490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0490 size=64 callers=0 calls=0
*/
void sub_e0490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0490ULL || rel >= 0xe04d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e04d0 size=96 callers=0 calls=0
*/
void sub_e04d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe04d0ULL || rel >= 0xe0530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0530 size=176 callers=0 calls=0
*/
void sub_e0530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0530ULL || rel >= 0xe05e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e05e0 size=192 callers=0 calls=0
*/
void sub_e05e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe05e0ULL || rel >= 0xe06a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e06a0 size=64 callers=0 calls=0
*/
void sub_e06a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe06a0ULL || rel >= 0xe06e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e06e0 size=592 callers=1 calls=0
*/
void sub_e06e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe06e0ULL || rel >= 0xe0930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0930 size=432 callers=7 calls=4
   calls: sub_e0ae0, sub_e12a0, sub_e1530, sub_e18f0
*/
void sub_e0930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0930ULL || rel >= 0xe0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0ae0 size=704 callers=1 calls=3
   calls: sub_624d0, sub_62a70, sub_e0930
*/
void sub_e0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0ae0ULL || rel >= 0xe0da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0da0 size=928 callers=4 calls=1
   calls: sub_e0930
*/
void sub_e0da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0da0ULL || rel >= 0xe1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1140 size=352 callers=1 calls=1
   calls: sub_e0930
*/
void sub_e1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1140ULL || rel >= 0xe12a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e12a0 size=656 callers=1 calls=1
   calls: sub_e5f80
*/
void sub_e12a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe12a0ULL || rel >= 0xe1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1530 size=960 callers=1 calls=1
   calls: sub_e61d0
*/
void sub_e1530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1530ULL || rel >= 0xe18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e18f0 size=544 callers=1 calls=3
   calls: sub_e0da0, sub_e1140, sub_e6420
*/
void sub_e18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe18f0ULL || rel >= 0xe1b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1b10 size=464 callers=2 calls=10
   calls: sub_3550, sub_3870, sub_b7e20, sub_b89a0, sub_b8aa0, sub_e1ce0, sub_e1f80, sub_e2270, sub_e2590, sub_e4680
*/
void sub_e1b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1b10ULL || rel >= 0xe1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1ce0 size=672 callers=1 calls=9
   calls: sub_126f00, sub_3870, sub_64060, sub_88b40, sub_8aa10, sub_9ae80, sub_b7e20, sub_b89a0, sub_e27a0
*/
void sub_e1ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ce0ULL || rel >= 0xe1f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1f80 size=752 callers=1 calls=5
   calls: sub_9d2f0, sub_e0930, sub_e2ce0, sub_e2f30, sub_e33a0
*/
void sub_e1f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f80ULL || rel >= 0xe2270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

