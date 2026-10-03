/* subsdk1 functions 0006eb50..0009e5f0 (4 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0006eb50 size=16 callers=0 calls=0
*/
void sub_6eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eb50ULL || rel >= 0x6eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006eb60 size=32 callers=0 calls=0
   ref: %d.%d.%d
*/
void d_d_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eb60ULL || rel >= 0x6eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006eb80 size=16 callers=0 calls=0
*/
void sub_6eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eb80ULL || rel >= 0x6eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006eb90 size=16 callers=0 calls=0
*/
void sub_6eb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eb90ULL || rel >= 0x6eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006eba0 size=16 callers=0 calls=0
*/
void sub_6eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eba0ULL || rel >= 0x6ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ebb0 size=16 callers=0 calls=0
*/
void sub_6ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ebb0ULL || rel >= 0x6ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ebc0 size=16 callers=0 calls=0
*/
void sub_6ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ebc0ULL || rel >= 0x6ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ebd0 size=16 callers=0 calls=0
*/
void sub_6ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ebd0ULL || rel >= 0x6ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ebe0 size=16 callers=0 calls=0
*/
void sub_6ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ebe0ULL || rel >= 0x6ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ebf0 size=16 callers=0 calls=0
*/
void sub_6ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ebf0ULL || rel >= 0x6ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec00 size=16 callers=0 calls=0
*/
void sub_6ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec00ULL || rel >= 0x6ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec10 size=16 callers=0 calls=0
*/
void sub_6ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec10ULL || rel >= 0x6ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec20 size=16 callers=0 calls=0
*/
void sub_6ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec20ULL || rel >= 0x6ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec30 size=16 callers=0 calls=0
*/
void sub_6ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec30ULL || rel >= 0x6ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec40 size=16 callers=0 calls=0
*/
void sub_6ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec40ULL || rel >= 0x6ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec50 size=16 callers=0 calls=0
*/
void sub_6ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec50ULL || rel >= 0x6ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec60 size=16 callers=0 calls=0
*/
void sub_6ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec60ULL || rel >= 0x6ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec70 size=16 callers=0 calls=0
*/
void sub_6ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec70ULL || rel >= 0x6ec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec80 size=16 callers=0 calls=0
*/
void sub_6ec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec80ULL || rel >= 0x6ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ec90 size=16 callers=0 calls=0
*/
void sub_6ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec90ULL || rel >= 0x6eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006eca0 size=16 callers=0 calls=0
*/
void sub_6eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eca0ULL || rel >= 0x6ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ecb0 size=16 callers=0 calls=0
*/
void sub_6ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ecb0ULL || rel >= 0x6ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ecc0 size=16 callers=0 calls=0
*/
void sub_6ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ecc0ULL || rel >= 0x6ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ecd0 size=16 callers=0 calls=0
*/
void sub_6ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ecd0ULL || rel >= 0x6ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ece0 size=16 callers=0 calls=0
*/
void sub_6ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ece0ULL || rel >= 0x6ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ecf0 size=16 callers=0 calls=0
*/
void sub_6ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ecf0ULL || rel >= 0x6ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ed00 size=16 callers=0 calls=0
*/
void sub_6ed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ed00ULL || rel >= 0x6ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ed10 size=16 callers=0 calls=0
*/
void sub_6ed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ed10ULL || rel >= 0x6ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006ed20 size=1504 callers=2 calls=5
   calls: sub_64490, sub_6b1b0, sub_9a050, sub_9d2f0, sub_a7090
*/
void sub_6ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ed20ULL || rel >= 0x6f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f300 size=16 callers=0 calls=0
*/
void sub_6f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f300ULL || rel >= 0x6f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f310 size=64 callers=0 calls=0
*/
void sub_6f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f310ULL || rel >= 0x6f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f350 size=16 callers=0 calls=0
*/
void sub_6f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f350ULL || rel >= 0x6f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f360 size=48 callers=0 calls=0
*/
void sub_6f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f360ULL || rel >= 0x6f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f390 size=80 callers=0 calls=0
*/
void sub_6f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f390ULL || rel >= 0x6f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f3e0 size=160 callers=0 calls=0
*/
void sub_6f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f3e0ULL || rel >= 0x6f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f480 size=160 callers=0 calls=0
*/
void sub_6f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f480ULL || rel >= 0x6f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f520 size=48 callers=0 calls=0
*/
void sub_6f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f520ULL || rel >= 0x6f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f550 size=32 callers=0 calls=0
*/
void sub_6f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f550ULL || rel >= 0x6f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006f570 size=1408 callers=0 calls=0
*/
void sub_6f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f570ULL || rel >= 0x6faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006faf0 size=48 callers=0 calls=0
*/
void sub_6faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6faf0ULL || rel >= 0x6fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fb20 size=80 callers=0 calls=0
*/
void sub_6fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fb20ULL || rel >= 0x6fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fb70 size=96 callers=1 calls=1
   calls: sub_3870
*/
void sub_6fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fb70ULL || rel >= 0x6fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fbd0 size=32 callers=0 calls=0
*/
void sub_6fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fbd0ULL || rel >= 0x6fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fbf0 size=32 callers=0 calls=0
*/
void sub_6fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fbf0ULL || rel >= 0x6fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fc10 size=32 callers=5 calls=0
*/
void sub_6fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fc10ULL || rel >= 0x6fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fc30 size=32 callers=1 calls=0
*/
void sub_6fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fc30ULL || rel >= 0x6fc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fc50 size=64 callers=1 calls=0
*/
void sub_6fc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fc50ULL || rel >= 0x6fc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fc90 size=112 callers=1 calls=0
*/
void sub_6fc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fc90ULL || rel >= 0x6fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0006fd00 size=1248 callers=18 calls=5
   calls: sub_35320, sub_391d0, sub_9b3e0, sub_9b4d0, sub_9b920
*/
void sub_6fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fd00ULL || rel >= 0x701e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000701e0 size=528 callers=30 calls=8
   calls: sub_3af80, sub_66bc0, sub_66c00, sub_6fd00, sub_a7090, sub_a70d0, sub_a78d0, sub_a7940
*/
void sub_701e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x701e0ULL || rel >= 0x703f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000703f0 size=240 callers=196 calls=1
   calls: sub_701e0
*/
void sub_703f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x703f0ULL || rel >= 0x704e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000704e0 size=144 callers=3 calls=0
*/
void sub_704e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x704e0ULL || rel >= 0x70570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070570 size=496 callers=84 calls=0
*/
void sub_70570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70570ULL || rel >= 0x70760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070760 size=320 callers=7 calls=2
   calls: sub_3cc80, sub_99cf0
*/
void sub_70760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70760ULL || rel >= 0x708a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000708a0 size=64 callers=0 calls=0
*/
void sub_708a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x708a0ULL || rel >= 0x708e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000708e0 size=384 callers=1 calls=0
*/
void sub_708e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x708e0ULL || rel >= 0x70a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070a60 size=32 callers=1 calls=0
*/
void sub_70a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70a60ULL || rel >= 0x70a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070a80 size=752 callers=8 calls=4
   calls: sub_a7800, sub_a7850, sub_a7890, sub_a8080
*/
void sub_70a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70a80ULL || rel >= 0x70d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00070d70 size=1280 callers=1 calls=12
   calls: sub_703f0, sub_99cf0, sub_9b920, sub_a7090, sub_a70d0, sub_a7310, sub_a7370, sub_a73d0, sub_a7890, sub_a78d0, sub_a7a30, sub_a8080
*/
void sub_70d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x70d70ULL || rel >= 0x71270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071270 size=1504 callers=1 calls=10
   calls: sub_703f0, sub_99cf0, sub_9b920, sub_a7090, sub_a70d0, sub_a7310, sub_a73d0, sub_a78d0, sub_a7b70, sub_a8030
*/
void sub_71270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71270ULL || rel >= 0x71850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071850 size=272 callers=1 calls=4
   calls: sub_703f0, sub_70570, sub_70a80, sub_99cf0
*/
void sub_71850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71850ULL || rel >= 0x71960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071960 size=320 callers=1 calls=5
   calls: sub_703f0, sub_70570, sub_70a80, sub_99cf0, sub_a7850
*/
void sub_71960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71960ULL || rel >= 0x71aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071aa0 size=320 callers=1 calls=5
   calls: sub_703f0, sub_70570, sub_70a80, sub_99cf0, sub_a7850
*/
void sub_71aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71aa0ULL || rel >= 0x71be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071be0 size=592 callers=1 calls=7
   calls: sub_310a0, sub_703f0, sub_70570, sub_70a80, sub_99cf0, sub_a7110, sub_a7850
*/
void sub_71be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71be0ULL || rel >= 0x71e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071e30 size=416 callers=1 calls=6
   calls: sub_703f0, sub_70570, sub_99cf0, sub_9a1e0, sub_a7800, sub_a8080
*/
void sub_71e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71e30ULL || rel >= 0x71fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00071fd0 size=592 callers=1 calls=9
   calls: sub_703f0, sub_70570, sub_70a80, sub_99cf0, sub_a7090, sub_a7110, sub_a7890, sub_a78d0, sub_a8080
*/
void sub_71fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71fd0ULL || rel >= 0x72220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072220 size=1040 callers=1 calls=12
   calls: sub_3a6d0, sub_703f0, sub_70570, sub_70760, sub_70a80, sub_72630, sub_99cf0, sub_a7090, sub_a70d0, sub_a7800, sub_a7850, sub_a92d0
*/
void sub_72220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72220ULL || rel >= 0x72630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072630 size=352 callers=8 calls=0
*/
void sub_72630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72630ULL || rel >= 0x72790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072790 size=368 callers=1 calls=5
   calls: sub_701e0, sub_703f0, sub_70570, sub_a7850, sub_a8080
*/
void sub_72790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72790ULL || rel >= 0x72900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072900 size=528 callers=1 calls=6
   calls: sub_61f10, sub_701e0, sub_70570, sub_99cf0, sub_a7090, sub_a7850
*/
void sub_72900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72900ULL || rel >= 0x72b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072b10 size=512 callers=1 calls=7
   calls: sub_61f10, sub_701e0, sub_70570, sub_99cf0, sub_a7090, sub_a70d0, sub_a7850
*/
void sub_72b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72b10ULL || rel >= 0x72d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00072d10 size=1040 callers=1 calls=11
   calls: sub_61f10, sub_620d0, sub_701e0, sub_70570, sub_99cf0, sub_a7090, sub_a70d0, sub_a7110, sub_a7890, sub_a78d0, sub_a92d0
*/
void sub_72d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72d10ULL || rel >= 0x73120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073120 size=768 callers=1 calls=12
   calls: sub_35320, sub_61f10, sub_701e0, sub_70570, sub_99cf0, sub_9b3e0, sub_a7090, sub_a70d0, sub_a7370, sub_a7800, sub_a7850, sub_a7a30
*/
void sub_73120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73120ULL || rel >= 0x73420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073420 size=640 callers=1 calls=7
   calls: sub_66bc0, sub_66e10, sub_701e0, sub_70570, sub_99cf0, sub_9b120, sub_a83c0
*/
void sub_73420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73420ULL || rel >= 0x736a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000736a0 size=880 callers=1 calls=5
   calls: sub_66bc0, sub_66e10, sub_703f0, sub_70570, sub_a85c0
*/
void sub_736a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x736a0ULL || rel >= 0x73a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073a10 size=624 callers=1 calls=5
   calls: sub_703f0, sub_70570, sub_99cf0, sub_a8080, sub_a8170
*/
void sub_73a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73a10ULL || rel >= 0x73c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073c80 size=576 callers=1 calls=6
   calls: sub_35320, sub_703f0, sub_70570, sub_99cf0, sub_a7850, sub_a8080
*/
void sub_73c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c80ULL || rel >= 0x73ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00073ec0 size=1536 callers=1 calls=11
   calls: sub_35320, sub_703f0, sub_70570, sub_99cf0, sub_a73d0, sub_a7800, sub_a7850, sub_a7890, sub_a8080, sub_a8170, sub_a9270
*/
void sub_73ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73ec0ULL || rel >= 0x744c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000744c0 size=1216 callers=1 calls=16
   calls: sub_35320, sub_391d0, sub_3af50, sub_3b010, sub_3b040, sub_61f10, sub_68230, sub_703f0, sub_70570, sub_99cf0, sub_9b3e0, sub_a7090
   ... +4 more
*/
void sub_744c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x744c0ULL || rel >= 0x74980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00074980 size=720 callers=1 calls=7
   calls: sub_35320, sub_703f0, sub_70570, sub_99cf0, sub_a7090, sub_a7370, sub_a7850
*/
void sub_74980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74980ULL || rel >= 0x74c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00074c50 size=368 callers=1 calls=5
   calls: sub_703f0, sub_70570, sub_99cf0, sub_a7090, sub_a7850
*/
void sub_74c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c50ULL || rel >= 0x74dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00074dc0 size=544 callers=3 calls=1
   calls: sub_74dc0
*/
void sub_74dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74dc0ULL || rel >= 0x74fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00074fe0 size=144 callers=1 calls=0
*/
void sub_74fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74fe0ULL || rel >= 0x75070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00075070 size=512 callers=1 calls=4
   calls: sub_703f0, sub_74fe0, sub_9a050, sub_9b1a0
*/
void sub_75070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75070ULL || rel >= 0x75270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00075270 size=224 callers=1 calls=4
   calls: sub_70570, sub_75070, sub_99cf0, sub_a7090
*/
void sub_75270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75270ULL || rel >= 0x75350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00075350 size=368 callers=3 calls=1
   calls: sub_74dc0
*/
void sub_75350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75350ULL || rel >= 0x754c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000754c0 size=144 callers=1 calls=0
*/
void sub_754c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754c0ULL || rel >= 0x75550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00075550 size=16 callers=3 calls=0
*/
void sub_75550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75550ULL || rel >= 0x75560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00075560 size=7488 callers=1 calls=27
   calls: Unknown_knob_s, sub_34be0, sub_3620, sub_3870, sub_64bc0, sub_650e0, sub_651d0, sub_66820, sub_66860, sub_6fd00, sub_77380, sub_775c0
   ... +15 more
   ref: Register usage info for %s max_abi_regs = %d max_custom_abi_regs = %d
*/
void Register_usage_info_for_s_max_abi_regs_d_max_custom_abi(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75560ULL || rel >= 0x772a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000772a0 size=224 callers=0 calls=0
*/
void sub_772a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x772a0ULL || rel >= 0x77380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077380 size=576 callers=6 calls=1
   calls: sub_7c7f0
*/
void sub_77380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77380ULL || rel >= 0x775c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000775c0 size=336 callers=2 calls=2
   calls: sub_9a1e0, sub_a92d0
*/
void sub_775c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x775c0ULL || rel >= 0x77710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077710 size=128 callers=3 calls=1
   calls: sub_77710
*/
void sub_77710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77710ULL || rel >= 0x77790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077790 size=16 callers=0 calls=0
*/
void sub_77790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77790ULL || rel >= 0x777a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000777a0 size=16 callers=0 calls=0
*/
void sub_777a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777a0ULL || rel >= 0x777b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000777b0 size=16 callers=0 calls=0
*/
void sub_777b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777b0ULL || rel >= 0x777c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000777c0 size=16 callers=0 calls=0
*/
void sub_777c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777c0ULL || rel >= 0x777d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000777d0 size=16 callers=0 calls=0
*/
void sub_777d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777d0ULL || rel >= 0x777e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000777e0 size=16 callers=0 calls=0
*/
void sub_777e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777e0ULL || rel >= 0x777f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000777f0 size=16 callers=0 calls=0
*/
void sub_777f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x777f0ULL || rel >= 0x77800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077800 size=16 callers=0 calls=0
*/
void sub_77800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77800ULL || rel >= 0x77810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077810 size=16 callers=0 calls=0
*/
void sub_77810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77810ULL || rel >= 0x77820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077820 size=16 callers=0 calls=0
*/
void sub_77820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77820ULL || rel >= 0x77830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077830 size=16 callers=0 calls=0
*/
void sub_77830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77830ULL || rel >= 0x77840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077840 size=16 callers=0 calls=0
*/
void sub_77840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77840ULL || rel >= 0x77850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077850 size=16 callers=0 calls=0
*/
void sub_77850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77850ULL || rel >= 0x77860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077860 size=16 callers=0 calls=0
*/
void sub_77860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77860ULL || rel >= 0x77870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077870 size=16 callers=0 calls=0
*/
void sub_77870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77870ULL || rel >= 0x77880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077880 size=16 callers=0 calls=0
*/
void sub_77880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77880ULL || rel >= 0x77890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00077890 size=16 callers=0 calls=0
*/
void sub_77890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x77890ULL || rel >= 0x778a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000778a0 size=16 callers=0 calls=0
*/
void sub_778a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778a0ULL || rel >= 0x778b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000778b0 size=16 callers=0 calls=0
*/
void sub_778b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778b0ULL || rel >= 0x778c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000778c0 size=18288 callers=0 calls=78
   calls: Unknown_knob_s, sub_310a0, sub_35320, sub_35ec0, sub_3620, sub_3870, sub_391d0, sub_3af50, sub_3af80, sub_61f10, sub_63580, sub_651d0
   ... +66 more
*/
void sub_778c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x778c0ULL || rel >= 0x7c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c030 size=720 callers=2 calls=11
   calls: sub_35320, sub_39540, sub_39560, sub_63580, sub_9a1e0, sub_9b3d0, sub_a70d0, sub_a7110, sub_a73d0, sub_a7a30, sub_a7b70
*/
void sub_7c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c030ULL || rel >= 0x7c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c300 size=304 callers=1 calls=4
   calls: sub_9b3d0, sub_a7110, sub_a7800, sub_a7a30
*/
void sub_7c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c300ULL || rel >= 0x7c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c430 size=64 callers=0 calls=0
*/
void sub_7c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c430ULL || rel >= 0x7c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c470 size=48 callers=0 calls=0
*/
void sub_7c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c470ULL || rel >= 0x7c4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c4a0 size=16 callers=0 calls=0
*/
void sub_7c4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c4a0ULL || rel >= 0x7c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c4b0 size=64 callers=0 calls=0
*/
void sub_7c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c4b0ULL || rel >= 0x7c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c4f0 size=96 callers=0 calls=0
*/
void sub_7c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c4f0ULL || rel >= 0x7c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c550 size=80 callers=0 calls=0
*/
void sub_7c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c550ULL || rel >= 0x7c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c5a0 size=64 callers=0 calls=0
*/
void sub_7c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5a0ULL || rel >= 0x7c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c5e0 size=96 callers=0 calls=0
*/
void sub_7c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c5e0ULL || rel >= 0x7c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c640 size=176 callers=0 calls=0
*/
void sub_7c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c640ULL || rel >= 0x7c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c6f0 size=192 callers=0 calls=0
*/
void sub_7c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c6f0ULL || rel >= 0x7c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c7b0 size=64 callers=0 calls=0
*/
void sub_7c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c7b0ULL || rel >= 0x7c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007c7f0 size=592 callers=1 calls=0
*/
void sub_7c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7c7f0ULL || rel >= 0x7ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ca40 size=208 callers=1 calls=2
   calls: sub_9c950, sub_9d2f0
*/
void sub_7ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ca40ULL || rel >= 0x7cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007cb10 size=176 callers=1 calls=1
   calls: sub_9d2f0
*/
void sub_7cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cb10ULL || rel >= 0x7cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007cbc0 size=240 callers=1 calls=0
*/
void sub_7cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cbc0ULL || rel >= 0x7ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ccb0 size=256 callers=2 calls=4
   calls: sub_35320, sub_3afa0, sub_9b3d0, sub_9b920
*/
void sub_7ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ccb0ULL || rel >= 0x7cdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007cdb0 size=256 callers=1 calls=0
*/
void sub_7cdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7cdb0ULL || rel >= 0x7ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ceb0 size=336 callers=2 calls=4
   calls: sub_61f80, sub_66f40, sub_67010, sub_9d2f0
*/
void sub_7ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ceb0ULL || rel >= 0x7d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007d000 size=1072 callers=2 calls=8
   calls: sub_671b0, sub_7ccb0, sub_7ceb0, sub_7d430, sub_9bed0, sub_9c950, sub_9d2f0, sub_b8aa0
*/
void sub_7d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d000ULL || rel >= 0x7d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007d430 size=208 callers=18 calls=1
   calls: sub_62470
*/
void sub_7d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d430ULL || rel >= 0x7d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007d500 size=1632 callers=1 calls=15
   calls: sub_3550, sub_38b0, sub_3cf40, sub_3d090, sub_3d960, sub_64060, sub_66e80, sub_677d0, sub_696e0, sub_7d000, sub_7db60, sub_86e00
   ... +3 more
*/
void sub_7d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7d500ULL || rel >= 0x7db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007db60 size=432 callers=7 calls=7
   calls: sub_3870, sub_7d500, sub_7dd10, sub_a98f0, sub_b7e20, sub_b89a0, sub_b8aa0
*/
void sub_7db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db60ULL || rel >= 0x7dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007dd10 size=2720 callers=1 calls=23
   calls: sub_117330, sub_1173a0, sub_117400, sub_1182c0, sub_3550, sub_38b0, sub_64060, sub_653d0, sub_696e0, sub_69b70, sub_7d000, sub_7e7b0
   ... +11 more
*/
void sub_7dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dd10ULL || rel >= 0x7e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e7b0 size=752 callers=1 calls=2
   calls: sub_7ee60, sub_7ef60
*/
void sub_7e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7b0ULL || rel >= 0x7eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007eaa0 size=64 callers=0 calls=0
*/
void sub_7eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eaa0ULL || rel >= 0x7eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007eae0 size=48 callers=0 calls=0
*/
void sub_7eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eae0ULL || rel >= 0x7eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007eb10 size=16 callers=0 calls=0
*/
void sub_7eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb10ULL || rel >= 0x7eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007eb20 size=64 callers=0 calls=0
*/
void sub_7eb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb20ULL || rel >= 0x7eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007eb60 size=96 callers=0 calls=0
*/
void sub_7eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb60ULL || rel >= 0x7ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ebc0 size=80 callers=0 calls=0
*/
void sub_7ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebc0ULL || rel >= 0x7ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ec10 size=64 callers=0 calls=0
*/
void sub_7ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ec10ULL || rel >= 0x7ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ec50 size=96 callers=0 calls=0
*/
void sub_7ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ec50ULL || rel >= 0x7ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ecb0 size=176 callers=0 calls=0
*/
void sub_7ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ecb0ULL || rel >= 0x7ed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ed60 size=192 callers=0 calls=0
*/
void sub_7ed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed60ULL || rel >= 0x7ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ee20 size=64 callers=0 calls=0
*/
void sub_7ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee20ULL || rel >= 0x7ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ee60 size=256 callers=1 calls=0
*/
void sub_7ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee60ULL || rel >= 0x7ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ef60 size=592 callers=1 calls=0
*/
void sub_7ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef60ULL || rel >= 0x7f1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007f1b0 size=80 callers=1 calls=1
   calls: sub_7f200
*/
void sub_7f1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f1b0ULL || rel >= 0x7f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007f200 size=288 callers=1 calls=0
*/
void sub_7f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f200ULL || rel >= 0x7f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007f320 size=832 callers=0 calls=2
   calls: sub_3890, sub_55200
*/
void sub_7f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f320ULL || rel >= 0x7f660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007f660 size=720 callers=1 calls=4
   calls: sub_2a1660, sub_2a1690, sub_2a1700, sub_3890
*/
void sub_7f660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f660ULL || rel >= 0x7f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007f930 size=928 callers=2 calls=4
   calls: sub_2a1660, sub_2a1690, sub_2a17c0, sub_3890
*/
void sub_7f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7f930ULL || rel >= 0x7fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007fcd0 size=464 callers=1 calls=3
   calls: sub_2a1660, sub_2a17c0, sub_3890
*/
void sub_7fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fcd0ULL || rel >= 0x7fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007fea0 size=2640 callers=2 calls=15
   calls: sub_117330, sub_1173a0, sub_117400, sub_1182c0, sub_2a1660, sub_2a1690, sub_2a1740, sub_2a1780, sub_2a1820, sub_2a1880, sub_2a1920, sub_2a19b0
   ... +3 more
*/
void sub_7fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7fea0ULL || rel >= 0x808f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000808f0 size=800 callers=2 calls=7
   calls: sub_2a1660, sub_2a1820, sub_2a1e40, sub_2a1f40, sub_3890, sub_80c10, sub_80d00
*/
void sub_808f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x808f0ULL || rel >= 0x80c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00080c10 size=240 callers=1 calls=1
   calls: sub_3890
*/
void sub_80c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80c10ULL || rel >= 0x80d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00080d00 size=272 callers=2 calls=1
   calls: sub_9b3d0
*/
void sub_80d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80d00ULL || rel >= 0x80e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00080e10 size=80 callers=1 calls=0
*/
void sub_80e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e10ULL || rel >= 0x80e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00080e60 size=48 callers=2 calls=0
*/
void sub_80e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e60ULL || rel >= 0x80e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00080e90 size=80 callers=1 calls=0
*/
void sub_80e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80e90ULL || rel >= 0x80ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00080ee0 size=80 callers=1 calls=0
*/
void sub_80ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80ee0ULL || rel >= 0x80f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00080f30 size=160 callers=1 calls=1
   calls: sub_3890
*/
void sub_80f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80f30ULL || rel >= 0x80fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00080fd0 size=112 callers=1 calls=1
   calls: sub_3870
*/
void sub_80fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x80fd0ULL || rel >= 0x81040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081040 size=176 callers=1 calls=2
   calls: sub_3870, sub_3890
*/
void sub_81040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81040ULL || rel >= 0x810f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000810f0 size=256 callers=1 calls=1
   calls: sub_3fa0
*/
void sub_810f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x810f0ULL || rel >= 0x811f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000811f0 size=32 callers=2 calls=0
*/
void sub_811f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x811f0ULL || rel >= 0x81210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081210 size=32 callers=2 calls=0
*/
void sub_81210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81210ULL || rel >= 0x81230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081230 size=6640 callers=2 calls=1
   calls: sub_3870
   ref: OriPropagateVarying
   ref: EmitPSI
   ref: ExpandJmxComputation
   ref: AnalyzeControlFlow
   ref: OriPipelining
   ref: AdvancedPhaseLateConvUnSup
   ref: OriReassociateAndCommon
   ref: MidExpansion
*/
void MidExpansion(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81230ULL || rel >= 0x82c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082c20 size=96 callers=4 calls=0
*/
void sub_82c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c20ULL || rel >= 0x82c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082c80 size=256 callers=2 calls=5
   calls: begin_time_stamp, end_time_stamp, sub_667c0, sub_b7e20, sub_b89a0
*/
void sub_82c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82c80ULL || rel >= 0x82d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082d80 size=16 callers=0 calls=0
*/
void sub_82d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d80ULL || rel >= 0x82d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082d90 size=16 callers=0 calls=0
*/
void sub_82d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82d90ULL || rel >= 0x82da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082da0 size=48 callers=0 calls=1
   calls: sub_6e960
*/
void sub_82da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82da0ULL || rel >= 0x82dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082dd0 size=16 callers=0 calls=0
*/
void sub_82dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82dd0ULL || rel >= 0x82de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082de0 size=16 callers=0 calls=0
*/
void sub_82de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82de0ULL || rel >= 0x82df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082df0 size=16 callers=0 calls=0
*/
void sub_82df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82df0ULL || rel >= 0x82e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082e00 size=16 callers=0 calls=0
*/
void sub_82e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e00ULL || rel >= 0x82e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082e10 size=16 callers=0 calls=0
*/
void sub_82e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e10ULL || rel >= 0x82e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082e20 size=16 callers=0 calls=0
*/
void sub_82e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e20ULL || rel >= 0x82e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082e30 size=16 callers=0 calls=0
*/
void sub_82e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e30ULL || rel >= 0x82e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082e40 size=16 callers=0 calls=0
*/
void sub_82e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e40ULL || rel >= 0x82e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082e50 size=16 callers=0 calls=0
*/
void sub_82e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e50ULL || rel >= 0x82e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082e60 size=16 callers=0 calls=0
*/
void sub_82e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e60ULL || rel >= 0x82e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082e70 size=16 callers=0 calls=0
*/
void sub_82e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e70ULL || rel >= 0x82e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082e80 size=16 callers=0 calls=0
*/
void sub_82e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e80ULL || rel >= 0x82e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082e90 size=16 callers=0 calls=0
*/
void sub_82e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82e90ULL || rel >= 0x82ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082ea0 size=16 callers=0 calls=0
*/
void sub_82ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ea0ULL || rel >= 0x82eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082eb0 size=16 callers=0 calls=0
*/
void sub_82eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82eb0ULL || rel >= 0x82ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082ec0 size=16 callers=0 calls=0
*/
void sub_82ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ec0ULL || rel >= 0x82ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082ed0 size=16 callers=0 calls=0
*/
void sub_82ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ed0ULL || rel >= 0x82ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082ee0 size=16 callers=0 calls=0
*/
void sub_82ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ee0ULL || rel >= 0x82ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082ef0 size=16 callers=0 calls=0
*/
void sub_82ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82ef0ULL || rel >= 0x82f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082f00 size=16 callers=0 calls=0
*/
void sub_82f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f00ULL || rel >= 0x82f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082f10 size=16 callers=0 calls=0
*/
void sub_82f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f10ULL || rel >= 0x82f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082f20 size=16 callers=0 calls=0
*/
void sub_82f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f20ULL || rel >= 0x82f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082f30 size=16 callers=0 calls=0
*/
void sub_82f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f30ULL || rel >= 0x82f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082f40 size=16 callers=0 calls=0
*/
void sub_82f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f40ULL || rel >= 0x82f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082f50 size=16 callers=0 calls=0
*/
void sub_82f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f50ULL || rel >= 0x82f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082f60 size=16 callers=0 calls=0
*/
void sub_82f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f60ULL || rel >= 0x82f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082f70 size=16 callers=0 calls=0
*/
void sub_82f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f70ULL || rel >= 0x82f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082f80 size=16 callers=0 calls=0
*/
void sub_82f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f80ULL || rel >= 0x82f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082f90 size=16 callers=0 calls=0
*/
void sub_82f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82f90ULL || rel >= 0x82fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082fa0 size=16 callers=0 calls=0
*/
void sub_82fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fa0ULL || rel >= 0x82fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082fb0 size=16 callers=0 calls=0
*/
void sub_82fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fb0ULL || rel >= 0x82fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082fc0 size=32 callers=0 calls=0
*/
void sub_82fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fc0ULL || rel >= 0x82fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082fe0 size=32 callers=0 calls=0
*/
void sub_82fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82fe0ULL || rel >= 0x83000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083000 size=32 callers=0 calls=0
*/
void sub_83000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83000ULL || rel >= 0x83020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083020 size=16 callers=0 calls=0
*/
void sub_83020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83020ULL || rel >= 0x83030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083030 size=16 callers=0 calls=0
*/
void sub_83030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83030ULL || rel >= 0x83040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083040 size=16 callers=0 calls=0
*/
void sub_83040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83040ULL || rel >= 0x83050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083050 size=16 callers=0 calls=0
*/
void sub_83050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83050ULL || rel >= 0x83060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083060 size=16 callers=0 calls=0
*/
void sub_83060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83060ULL || rel >= 0x83070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083070 size=16 callers=0 calls=0
*/
void sub_83070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83070ULL || rel >= 0x83080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083080 size=16 callers=0 calls=0
*/
void sub_83080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83080ULL || rel >= 0x83090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083090 size=16 callers=0 calls=0
*/
void sub_83090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83090ULL || rel >= 0x830a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000830a0 size=16 callers=0 calls=0
*/
void sub_830a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830a0ULL || rel >= 0x830b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000830b0 size=16 callers=0 calls=0
*/
void sub_830b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830b0ULL || rel >= 0x830c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000830c0 size=16 callers=0 calls=0
*/
void sub_830c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830c0ULL || rel >= 0x830d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000830d0 size=96 callers=0 calls=2
   calls: sub_b7e20, sub_b89a0
*/
void sub_830d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x830d0ULL || rel >= 0x83130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083130 size=16 callers=0 calls=0
*/
void sub_83130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83130ULL || rel >= 0x83140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083140 size=16 callers=0 calls=0
*/
void sub_83140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83140ULL || rel >= 0x83150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083150 size=16 callers=0 calls=0
*/
void sub_83150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83150ULL || rel >= 0x83160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083160 size=80 callers=0 calls=1
   calls: sub_66820
*/
void sub_83160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83160ULL || rel >= 0x831b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000831b0 size=80 callers=0 calls=1
   calls: sub_66820
*/
void sub_831b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x831b0ULL || rel >= 0x83200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083200 size=16 callers=0 calls=0
*/
void sub_83200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83200ULL || rel >= 0x83210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083210 size=16 callers=0 calls=0
*/
void sub_83210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83210ULL || rel >= 0x83220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083220 size=48 callers=0 calls=1
   calls: sub_97b70
*/
void sub_83220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83220ULL || rel >= 0x83250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083250 size=16 callers=0 calls=0
*/
void sub_83250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83250ULL || rel >= 0x83260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083260 size=64 callers=0 calls=1
   calls: sub_66820
*/
void sub_83260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83260ULL || rel >= 0x832a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000832a0 size=16 callers=0 calls=0
*/
void sub_832a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832a0ULL || rel >= 0x832b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000832b0 size=16 callers=0 calls=0
*/
void sub_832b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832b0ULL || rel >= 0x832c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000832c0 size=16 callers=0 calls=0
*/
void sub_832c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832c0ULL || rel >= 0x832d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000832d0 size=80 callers=0 calls=1
   calls: sub_66820
*/
void sub_832d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x832d0ULL || rel >= 0x83320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083320 size=80 callers=0 calls=1
   calls: sub_66820
*/
void sub_83320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83320ULL || rel >= 0x83370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083370 size=16 callers=0 calls=0
*/
void sub_83370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83370ULL || rel >= 0x83380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083380 size=16 callers=0 calls=0
*/
void sub_83380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83380ULL || rel >= 0x83390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083390 size=80 callers=0 calls=1
   calls: sub_66820
*/
void sub_83390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83390ULL || rel >= 0x833e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000833e0 size=64 callers=0 calls=1
   calls: sub_66820
*/
void sub_833e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x833e0ULL || rel >= 0x83420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083420 size=16 callers=0 calls=0
*/
void sub_83420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83420ULL || rel >= 0x83430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083430 size=16 callers=0 calls=0
*/
void sub_83430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83430ULL || rel >= 0x83440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083440 size=16 callers=0 calls=0
*/
void sub_83440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83440ULL || rel >= 0x83450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083450 size=32 callers=0 calls=0
*/
void sub_83450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83450ULL || rel >= 0x83470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083470 size=16 callers=0 calls=0
*/
void sub_83470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83470ULL || rel >= 0x83480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083480 size=16 callers=0 calls=0
*/
void sub_83480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83480ULL || rel >= 0x83490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083490 size=64 callers=0 calls=1
   calls: sub_66820
*/
void sub_83490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83490ULL || rel >= 0x834d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000834d0 size=80 callers=0 calls=1
   calls: sub_66820
*/
void sub_834d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x834d0ULL || rel >= 0x83520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083520 size=16 callers=0 calls=0
*/
void sub_83520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83520ULL || rel >= 0x83530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083530 size=16 callers=0 calls=0
*/
void sub_83530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83530ULL || rel >= 0x83540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083540 size=32 callers=0 calls=0
*/
void sub_83540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83540ULL || rel >= 0x83560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083560 size=16 callers=0 calls=0
*/
void sub_83560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83560ULL || rel >= 0x83570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083570 size=80 callers=0 calls=2
   calls: sub_66820, sub_b7e20
*/
void sub_83570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83570ULL || rel >= 0x835c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000835c0 size=16 callers=0 calls=0
*/
void sub_835c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835c0ULL || rel >= 0x835d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000835d0 size=16 callers=0 calls=0
*/
void sub_835d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835d0ULL || rel >= 0x835e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000835e0 size=16 callers=0 calls=0
*/
void sub_835e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835e0ULL || rel >= 0x835f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000835f0 size=16 callers=0 calls=0
*/
void sub_835f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x835f0ULL || rel >= 0x83600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083600 size=16 callers=0 calls=0
*/
void sub_83600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83600ULL || rel >= 0x83610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083610 size=16 callers=0 calls=0
*/
void sub_83610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83610ULL || rel >= 0x83620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083620 size=16 callers=0 calls=0
*/
void sub_83620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83620ULL || rel >= 0x83630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083630 size=16 callers=0 calls=0
*/
void sub_83630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83630ULL || rel >= 0x83640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083640 size=16 callers=0 calls=0
*/
void sub_83640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83640ULL || rel >= 0x83650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083650 size=16 callers=0 calls=0
*/
void sub_83650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83650ULL || rel >= 0x83660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083660 size=16 callers=0 calls=0
*/
void sub_83660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83660ULL || rel >= 0x83670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083670 size=64 callers=0 calls=1
   calls: sub_66820
*/
void sub_83670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83670ULL || rel >= 0x836b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000836b0 size=16 callers=0 calls=0
*/
void sub_836b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836b0ULL || rel >= 0x836c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000836c0 size=16 callers=0 calls=0
*/
void sub_836c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836c0ULL || rel >= 0x836d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000836d0 size=16 callers=0 calls=0
*/
void sub_836d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836d0ULL || rel >= 0x836e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000836e0 size=16 callers=0 calls=0
*/
void sub_836e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836e0ULL || rel >= 0x836f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000836f0 size=16 callers=0 calls=0
*/
void sub_836f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x836f0ULL || rel >= 0x83700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083700 size=16 callers=0 calls=0
*/
void sub_83700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83700ULL || rel >= 0x83710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083710 size=16 callers=0 calls=0
*/
void sub_83710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83710ULL || rel >= 0x83720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083720 size=16 callers=0 calls=0
*/
void sub_83720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83720ULL || rel >= 0x83730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083730 size=16 callers=0 calls=0
*/
void sub_83730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83730ULL || rel >= 0x83740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083740 size=16 callers=0 calls=0
*/
void sub_83740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83740ULL || rel >= 0x83750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083750 size=16 callers=0 calls=0
*/
void sub_83750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83750ULL || rel >= 0x83760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083760 size=16 callers=0 calls=0
*/
void sub_83760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83760ULL || rel >= 0x83770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083770 size=16 callers=0 calls=0
*/
void sub_83770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83770ULL || rel >= 0x83780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083780 size=16 callers=0 calls=0
*/
void sub_83780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83780ULL || rel >= 0x83790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083790 size=16 callers=0 calls=0
*/
void sub_83790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83790ULL || rel >= 0x837a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000837a0 size=48 callers=0 calls=0
*/
void sub_837a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x837a0ULL || rel >= 0x837d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000837d0 size=48 callers=0 calls=0
*/
void sub_837d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x837d0ULL || rel >= 0x83800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083800 size=464 callers=2 calls=3
   calls: sub_3fa0, sub_634b0, sub_636f0
   ref: EvoOriStats.SignatureHash=%llx
*/
void EvoOriStats_SignatureHash_llx(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83800ULL || rel >= 0x839d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000839d0 size=528 callers=1 calls=5
   calls: UnknownShaderType, pipe_wait_FMA64PLUS, sub_11d3a0, sub_3890, sub_83e50
*/
void sub_839d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x839d0ULL || rel >= 0x83be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083be0 size=272 callers=1 calls=8
   calls: sub_63560, sub_63580, sub_635b0, sub_635d0, sub_635f0, sub_63610, sub_63640, sub_636f0
   ref: Geometry
   ref: Vertex
   ref: UnknownShaderType
   ref: Compute
   ref: Tessellation
*/
void UnknownShaderType(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83be0ULL || rel >= 0x83cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083cf0 size=352 callers=1 calls=0
   ref: SPA5.0
   ref: pipe_wait_FP16G1
   ref: pipe_wait_FP16G0
   ref: SPA6.1
   ref: SPA6.0
   ref: pipe_wait_FMA64LITE
   ref: SPA5.2
   ref: SPA7.2
*/
void pipe_wait_FMA64PLUS(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83cf0ULL || rel >= 0x83e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083e50 size=1168 callers=1 calls=3
   calls: sub_3890, sub_84a20, sub_84ba0
*/
void sub_83e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83e50ULL || rel >= 0x842e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000842e0 size=1856 callers=0 calls=4
   calls: OP_x_3, evo_analytics_v_1_1f_0, sub_220, sub_b89a0
   ref: NumFuncsUnit
   ref: FUNC_%d
   ref: frequency
   ref: UCodeHash
   ref: ShaderLanguage
   ref: boolean
   ref: BasicBlockCount
   ref: NumFunctionCalls
*/
void NumMainReachableFuncs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x842e0ULL || rel >= 0x84a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084a20 size=384 callers=1 calls=0
*/
void sub_84a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84a20ULL || rel >= 0x84ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084ba0 size=240 callers=1 calls=0
*/
void sub_84ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84ba0ULL || rel >= 0x84c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084c90 size=224 callers=27 calls=3
   calls: sub_210, sub_b7e20, sub_b7e40
   ref: %s.evo_analytics-v%1.1f-0.txt
   ref: evo_analytics-v%1.1f-0.txt
   ref: Evo Error - Could not open log file!
*/
void evo_analytics_v_1_1f_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84c90ULL || rel >= 0x84d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084d70 size=224 callers=1 calls=0
*/
void sub_84d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d70ULL || rel >= 0x84e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084e50 size=240 callers=1 calls=4
   calls: evo_analytics_v_1_1f_0, sub_220, sub_9bbe0, sub_b89a0
   ref: %llx,%llx,%s,%s,%s,%llu,NvU64
   ref: begin_time_stamp
   ref: ori_phases
*/
void begin_time_stamp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84e50ULL || rel >= 0x84f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084f40 size=544 callers=1 calls=8
   calls: evo_analytics_v_1_1f_0, n0x_4_4x_0x_4, sub_220, sub_84d70, sub_9bbe0, sub_b7e20, sub_b7e40, sub_b89a0
   ref: %s.%llx-%llx-0.dot
   ref: ori_stats
   ref: %llx-%llx-0.dot
   ref: %llx,%llx,%s,%s,%s,%llu,NvU64
   ref: is_ir_changed
   ref: end_time_stamp
   ref: %llx,%llx,%s,%s,%s,%d,int
   ref: ori_phases
*/
void end_time_stamp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84f40ULL || rel >= 0x85160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00085160 size=3920 callers=1 calls=7
   calls: sub_66820, sub_811f0, sub_81210, sub_82c20, sub_b7d10, sub_b7e20, sub_b7e40
   ref: OriCopyProp
   ref: OriPerformLiveDead
   ref: NamedPhases
   ref: shuffle
*/
void OriPerformLiveDead(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85160ULL || rel >= 0x860b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000860b0 size=96 callers=1 calls=3
   calls: MidExpansion, OriPerformLiveDead, sub_82c80
*/
void sub_860b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x860b0ULL || rel >= 0x86110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086110 size=240 callers=1 calls=1
   calls: sub_38d0
*/
void sub_86110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86110ULL || rel >= 0x86200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086200 size=272 callers=1 calls=3
   calls: sub_61da0, sub_61df0, sub_9a050
*/
void sub_86200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86200ULL || rel >= 0x86310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086310 size=192 callers=11 calls=2
   calls: sub_68290, sub_86200
*/
void sub_86310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86310ULL || rel >= 0x863d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000863d0 size=96 callers=2 calls=0
*/
void sub_863d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x863d0ULL || rel >= 0x86430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086430 size=80 callers=2 calls=0
*/
void sub_86430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86430ULL || rel >= 0x86480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086480 size=288 callers=1 calls=1
   calls: sub_865a0
*/
void sub_86480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86480ULL || rel >= 0x865a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000865a0 size=208 callers=9 calls=1
   calls: sub_35f0
*/
void sub_865a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865a0ULL || rel >= 0x86670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086670 size=416 callers=4 calls=2
   calls: sub_865a0, sub_9bed0
*/
void sub_86670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86670ULL || rel >= 0x86810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086810 size=720 callers=6 calls=5
   calls: sub_68060, sub_86ae0, sub_9bed0, sub_a7050, sub_a8320
*/
void sub_86810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86810ULL || rel >= 0x86ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086ae0 size=256 callers=3 calls=2
   calls: sub_a92d0, sub_a9a30
*/
void sub_86ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86ae0ULL || rel >= 0x86be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086be0 size=496 callers=9 calls=2
   calls: sub_9bed0, sub_a7050
*/
void sub_86be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86be0ULL || rel >= 0x86dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086dd0 size=48 callers=1 calls=0
*/
void sub_86dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86dd0ULL || rel >= 0x86e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00086e00 size=4272 callers=26 calls=14
   calls: sub_3d120, sub_67890, sub_86670, sub_86be0, sub_8b490, sub_9a730, sub_9bed0, sub_9c100, sub_a5f80, sub_aa4b0, sub_b7e20, sub_b89a0
   ... +2 more
*/
void sub_86e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e00ULL || rel >= 0x87eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00087eb0 size=288 callers=1 calls=2
   calls: sub_63c30, sub_9a740
*/
void sub_87eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87eb0ULL || rel >= 0x87fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00087fd0 size=400 callers=1 calls=4
   calls: sub_3550, sub_38b0, sub_3d090, sub_87eb0
*/
void sub_87fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x87fd0ULL || rel >= 0x88160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00088160 size=448 callers=1 calls=4
   calls: sub_3620, sub_a7a30, sub_a7b70, sub_a8f60
*/
void sub_88160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88160ULL || rel >= 0x88320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00088320 size=560 callers=1 calls=1
   calls: sub_35320
*/
void sub_88320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88320ULL || rel >= 0x88550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00088550 size=1296 callers=1 calls=8
   calls: sub_3d960, sub_87fd0, sub_88160, sub_88320, sub_99f50, sub_9b3d0, sub_9c0c0, sub_b8aa0
*/
void sub_88550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88550ULL || rel >= 0x88a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00088a60 size=224 callers=1 calls=4
   calls: sub_64060, sub_88550, sub_88b40, sub_8aa10
*/
void sub_88a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88a60ULL || rel >= 0x88b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00088b40 size=7888 callers=69 calls=35
   calls: sub_3550, sub_35f0, sub_3870, sub_3890, sub_38b0, sub_3ceb0, sub_3cf40, sub_3d090, sub_3d620, sub_66820, sub_68060, sub_865a0
   ... +23 more
*/
void sub_88b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88b40ULL || rel >= 0x8aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008aa10 size=608 callers=17 calls=5
   calls: sub_3ce70, sub_3ceb0, sub_3cf40, sub_3cf60, sub_3d3e0
*/
void sub_8aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa10ULL || rel >= 0x8ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008ac70 size=176 callers=2 calls=5
   calls: sub_636f0, sub_88a60, sub_b7e20, sub_b89a0, sub_b8aa0
*/
void sub_8ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac70ULL || rel >= 0x8ad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008ad20 size=272 callers=1 calls=0
*/
void sub_8ad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad20ULL || rel >= 0x8ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008ae30 size=752 callers=1 calls=3
   calls: sub_35f0, sub_650d0, sub_8ad20
*/
void sub_8ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ae30ULL || rel >= 0x8b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008b120 size=208 callers=3 calls=1
   calls: sub_8b120
*/
void sub_8b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b120ULL || rel >= 0x8b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008b1f0 size=416 callers=2 calls=1
   calls: sub_68060
*/
void sub_8b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1f0ULL || rel >= 0x8b390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008b390 size=256 callers=1 calls=0
*/
void sub_8b390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b390ULL || rel >= 0x8b490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008b490 size=496 callers=9 calls=8
   calls: sub_35f0, sub_3620, sub_88b40, sub_8ae30, sub_8b120, sub_8b1f0, sub_8b390, sub_9c170
*/
void sub_8b490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b490ULL || rel >= 0x8b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008b680 size=1072 callers=1 calls=1
   calls: sub_8bab0
   ref: bix%d [shape = triangle, style="filled" fillcolor="%s", label = "
   ref: bix%d [style="filled" fillcolor="%s", label = "
   ref: Warning! CFG is not valid.
   ref: bix%d -> bix%d [arrowhead="normal" style="bold" color="red" ];
   ref:  bix%d(L%d)
   ref:  (ILHead)
   ref:  DomBbNo(%d)
   ref: bix%d [shape = diamond, style="filled" fillcolor="%s", label = "
*/
void n0x_4_4x_0x_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b680ULL || rel >= 0x8bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008bab0 size=144 callers=15 calls=1
   calls: sub_99a20
*/
void sub_8bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bab0ULL || rel >= 0x8bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008bb40 size=208 callers=1 calls=2
   calls: sub_3d570, sub_61d70
*/
void sub_8bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bb40ULL || rel >= 0x8bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008bc10 size=720 callers=1 calls=2
   calls: sub_67f30, sub_67ff0
*/
void sub_8bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bc10ULL || rel >= 0x8bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008bee0 size=512 callers=2 calls=2
   calls: sub_3870, sub_8bc10
*/
void sub_8bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bee0ULL || rel >= 0x8c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008c0e0 size=704 callers=4 calls=4
   calls: sub_8c3a0, sub_a7050, sub_a92d0, sub_a9a30
*/
void sub_8c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c0e0ULL || rel >= 0x8c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008c3a0 size=432 callers=2 calls=4
   calls: sub_9bed0, sub_a70d0, sub_a7800, sub_a82d0
*/
void sub_8c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c3a0ULL || rel >= 0x8c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008c550 size=736 callers=1 calls=4
   calls: sub_68060, sub_88b40, sub_8c0e0, sub_9c3a0
*/
void sub_8c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c550ULL || rel >= 0x8c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008c830 size=432 callers=14 calls=5
   calls: sub_3ce70, sub_3ceb0, sub_3cf40, sub_3cf60, sub_3d3e0
*/
void sub_8c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c830ULL || rel >= 0x8c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008c9e0 size=640 callers=1 calls=3
   calls: sub_3620, sub_55190, sub_88b40
*/
void sub_8c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c9e0ULL || rel >= 0x8cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008cc60 size=272 callers=2 calls=0
*/
void sub_8cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cc60ULL || rel >= 0x8cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008cd70 size=208 callers=1 calls=1
   calls: sub_3d960
*/
void sub_8cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8cd70ULL || rel >= 0x8ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008ce40 size=816 callers=1 calls=3
   calls: sub_35f0, sub_550c0, sub_55950
*/
void sub_8ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ce40ULL || rel >= 0x8d170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008d170 size=576 callers=1 calls=4
   calls: sub_550c0, sub_55190, sub_554e0, sub_55c20
*/
void sub_8d170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d170ULL || rel >= 0x8d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008d3b0 size=544 callers=2 calls=1
   calls: sub_35f0
*/
void sub_8d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d3b0ULL || rel >= 0x8d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008d5d0 size=272 callers=2 calls=1
   calls: sub_8d3b0
*/
void sub_8d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d5d0ULL || rel >= 0x8d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008d6e0 size=640 callers=0 calls=9
   calls: sub_35f0, sub_3620, sub_68060, sub_8aa10, sub_8c830, sub_8cc60, sub_8cd70, sub_8ce40, sub_8d170
*/
void sub_8d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d6e0ULL || rel >= 0x8d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008d960 size=16 callers=0 calls=0
*/
void sub_8d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d960ULL || rel >= 0x8d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008d970 size=368 callers=1 calls=1
   calls: sub_3870
*/
void sub_8d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8d970ULL || rel >= 0x8dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008dae0 size=464 callers=1 calls=1
   calls: sub_3870
*/
void sub_8dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dae0ULL || rel >= 0x8dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008dcb0 size=288 callers=1 calls=1
   calls: sub_8dae0
*/
void sub_8dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8dcb0ULL || rel >= 0x8ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008ddd0 size=736 callers=2 calls=1
   calls: sub_3870
*/
void sub_8ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ddd0ULL || rel >= 0x8e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008e0b0 size=512 callers=2 calls=2
   calls: sub_3870, sub_99e90
*/
void sub_8e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0b0ULL || rel >= 0x8e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008e2b0 size=288 callers=1 calls=2
   calls: sub_8ddd0, sub_8e0b0
*/
void sub_8e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e2b0ULL || rel >= 0x8e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008e3d0 size=80 callers=2 calls=1
   calls: sub_8e3d0
*/
void sub_8e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e3d0ULL || rel >= 0x8e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008e420 size=704 callers=3 calls=4
   calls: sub_3550, sub_38b0, sub_3d090, sub_99450
*/
void sub_8e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e420ULL || rel >= 0x8e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008e6e0 size=192 callers=4 calls=0
*/
void sub_8e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6e0ULL || rel >= 0x8e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008e7a0 size=2016 callers=1 calls=13
   calls: sub_64060, sub_68090, sub_86be0, sub_86e00, sub_88b40, sub_9bed0, sub_a7050, sub_a8320, sub_a92d0, sub_a9a30, sub_aa130, sub_b8aa0
   ... +1 more
   ref: LoopMakeSingleEntry
*/
void LoopMakeSingleEntry(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e7a0ULL || rel >= 0x8ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008ef80 size=112 callers=1 calls=1
   calls: sub_38d0
*/
void sub_8ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ef80ULL || rel >= 0x8eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008eff0 size=208 callers=1 calls=0
*/
void sub_8eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eff0ULL || rel >= 0x8f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f0c0 size=3504 callers=12 calls=19
   calls: sub_3550, sub_38d0, sub_3d090, sub_3d960, sub_650d0, sub_66cd0, sub_67290, sub_67ab0, sub_68060, sub_8aa10, sub_8c830, sub_8fe70
   ... +7 more
*/
void sub_8f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0c0ULL || rel >= 0x8fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fe70 size=128 callers=4 calls=1
   calls: sub_8fe70
*/
void sub_8fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fe70ULL || rel >= 0x8fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fef0 size=512 callers=1 calls=1
   calls: sub_3d090
*/
void sub_8fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fef0ULL || rel >= 0x900f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000900f0 size=272 callers=1 calls=1
   calls: sub_3d090
*/
void sub_900f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x900f0ULL || rel >= 0x90200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090200 size=1024 callers=1 calls=4
   calls: sub_3cf40, sub_3cf60, sub_3d3e0, sub_3da60
*/
void sub_90200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90200ULL || rel >= 0x90600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090600 size=512 callers=3 calls=1
   calls: sub_38b0
*/
void sub_90600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90600ULL || rel >= 0x90800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090800 size=256 callers=2 calls=0
*/
void sub_90800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90800ULL || rel >= 0x90900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090900 size=544 callers=1 calls=7
   calls: sub_3d960, sub_67ff0, sub_8e420, sub_90200, sub_90600, sub_90800, sub_b8aa0
*/
void sub_90900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90900ULL || rel >= 0x90b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090b20 size=944 callers=1 calls=7
   calls: sub_38b0, sub_38d0, sub_3ceb0, sub_3d090, sub_3d240, sub_3d960, sub_90800
*/
void sub_90b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90b20ULL || rel >= 0x90ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090ed0 size=240 callers=2 calls=3
   calls: sub_90600, sub_90900, sub_90b20
*/
void sub_90ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90ed0ULL || rel >= 0x90fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090fc0 size=288 callers=3 calls=1
   calls: sub_679f0
*/
void sub_90fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90fc0ULL || rel >= 0x910e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000910e0 size=2784 callers=1 calls=16
   calls: sub_3550, sub_38b0, sub_3d090, sub_3d1a0, sub_66820, sub_86e00, sub_88b40, sub_90fc0, sub_92590, sub_9bed0, sub_9c270, sub_a92d0
   ... +4 more
   ref: SinkCodeIntoBlock
*/
void SinkCodeIntoBlock(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x910e0ULL || rel >= 0x91bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00091bc0 size=144 callers=9 calls=1
   calls: sub_92590
*/
void sub_91bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91bc0ULL || rel >= 0x91c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00091c50 size=1632 callers=1 calls=9
   calls: sub_55190, sub_64060, sub_679f0, sub_88b40, sub_8aa10, sub_8c830, sub_9bed0, sub_9c220, sub_b8aa0
*/
void sub_91c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91c50ULL || rel >= 0x922b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000922b0 size=736 callers=3 calls=4
   calls: sub_63c30, sub_67290, sub_67750, sub_9a740
*/
void sub_922b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922b0ULL || rel >= 0x92590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092590 size=1312 callers=27 calls=7
   calls: sub_5be70, sub_67630, sub_67860, sub_679f0, sub_67ab0, sub_69b70, sub_922b0
*/
void sub_92590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92590ULL || rel >= 0x92ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092ab0 size=96 callers=1 calls=1
   calls: sub_92590
*/
void sub_92ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92ab0ULL || rel >= 0x92b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092b10 size=496 callers=3 calls=1
   calls: sub_92d00
*/
void sub_92b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92b10ULL || rel >= 0x92d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092d00 size=656 callers=3 calls=2
   calls: sub_92590, sub_92d00
*/
void sub_92d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92d00ULL || rel >= 0x92f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092f90 size=608 callers=4 calls=5
   calls: sub_68ce0, sub_92f90, sub_9bed0, sub_9c270, sub_a95d0
*/
void sub_92f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92f90ULL || rel >= 0x931f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000931f0 size=1680 callers=1 calls=12
   calls: sub_3620, sub_3ce70, sub_3d090, sub_3d2f0, sub_3d570, sub_3da60, sub_64060, sub_88b40, sub_8c830, sub_92590, sub_92b10, sub_92f90
*/
void sub_931f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x931f0ULL || rel >= 0x93880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093880 size=112 callers=1 calls=2
   calls: sub_931f0, sub_b8aa0
*/
void sub_93880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93880ULL || rel >= 0x938f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000938f0 size=464 callers=1 calls=2
   calls: sub_55140, sub_55190
*/
void sub_938f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938f0ULL || rel >= 0x93ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093ac0 size=464 callers=1 calls=1
   calls: sub_55950
*/
void sub_93ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93ac0ULL || rel >= 0x93c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093c90 size=304 callers=1 calls=3
   calls: sub_55190, sub_55320, sub_55950
*/
void sub_93c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c90ULL || rel >= 0x93dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093dc0 size=576 callers=2 calls=2
   calls: sub_3da60, sub_8d5d0
*/
void sub_93dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93dc0ULL || rel >= 0x94000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00094000 size=400 callers=1 calls=2
   calls: sub_3d960, sub_93dc0
*/
void sub_94000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94000ULL || rel >= 0x94190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00094190 size=1376 callers=2 calls=6
   calls: sub_86480, sub_865a0, sub_86be0, sub_a7050, sub_a9a30, sub_aa640
*/
void sub_94190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94190ULL || rel >= 0x946f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000946f0 size=3600 callers=2 calls=26
   calls: sub_3550, sub_38d0, sub_3ceb0, sub_3cf40, sub_3da60, sub_55950, sub_67ff0, sub_68060, sub_68090, sub_68110, sub_8aa10, sub_8b490
   ... +14 more
*/
void sub_946f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x946f0ULL || rel >= 0x95500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00095500 size=336 callers=4 calls=1
   calls: sub_93ac0
*/
void sub_95500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95500ULL || rel >= 0x95650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00095650 size=800 callers=9 calls=3
   calls: sub_865a0, sub_a7050, sub_a9a30
*/
void sub_95650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95650ULL || rel >= 0x95970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00095970 size=512 callers=1 calls=2
   calls: sub_3550, sub_38d0
*/
void sub_95970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95970ULL || rel >= 0x95b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00095b70 size=704 callers=2 calls=3
   calls: sub_8c3a0, sub_a7050, sub_a9a30
*/
void sub_95b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95b70ULL || rel >= 0x95e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00095e30 size=1248 callers=1 calls=4
   calls: sub_865a0, sub_90fc0, sub_95650, sub_a9a30
*/
void sub_95e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95e30ULL || rel >= 0x96310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096310 size=256 callers=1 calls=2
   calls: sub_95650, sub_95b70
*/
void sub_96310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96310ULL || rel >= 0x96410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096410 size=736 callers=1 calls=3
   calls: sub_95650, sub_a7050, sub_aa640
*/
void sub_96410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96410ULL || rel >= 0x966f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000966f0 size=336 callers=1 calls=3
   calls: sub_35f0, sub_95650, sub_aa640
*/
void sub_966f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x966f0ULL || rel >= 0x96840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096840 size=256 callers=2 calls=3
   calls: sub_35f0, sub_a7050, sub_a9a30
*/
void sub_96840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96840ULL || rel >= 0x96940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096940 size=2224 callers=1 calls=11
   calls: sub_35f0, sub_68060, sub_88b40, sub_95650, sub_95970, sub_95b70, sub_95e30, sub_96310, sub_96410, sub_966f0, sub_96840
*/
void sub_96940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96940ULL || rel >= 0x971f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000971f0 size=656 callers=1 calls=5
   calls: sub_3d120, sub_3d240, sub_3d570, sub_3d960, sub_3da60
*/
void sub_971f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x971f0ULL || rel >= 0x97480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00097480 size=464 callers=1 calls=2
   calls: sub_95650, sub_a9a30
*/
void sub_97480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97480ULL || rel >= 0x97650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00097650 size=288 callers=1 calls=6
   calls: sub_68090, sub_8aa10, sub_8c830, sub_971f0, sub_97480, sub_99cf0
*/
void sub_97650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97650ULL || rel >= 0x97770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00097770 size=784 callers=1 calls=14
   calls: sub_3550, sub_3ceb0, sub_3cf40, sub_66820, sub_86e00, sub_88b40, sub_8aa10, sub_8c830, sub_90ed0, sub_946f0, sub_96940, sub_97650
   ... +2 more
*/
void sub_97770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97770ULL || rel >= 0x97a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00097a80 size=240 callers=1 calls=1
   calls: sub_9c950
*/
void sub_97a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97a80ULL || rel >= 0x97b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00097b70 size=1120 callers=2 calls=11
   calls: sub_3550, sub_64060, sub_88b40, sub_97a80, sub_9a050, sub_9bed0, sub_a7110, sub_b7e20, sub_b89a0, sub_bc680, sub_be570
*/
void sub_97b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97b70ULL || rel >= 0x97fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00097fd0 size=176 callers=1 calls=1
   calls: sub_7db60
*/
void sub_97fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97fd0ULL || rel >= 0x98080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00098080 size=1024 callers=4 calls=7
   calls: sub_3550, sub_7db60, sub_98480, sub_9a050, sub_9bed0, sub_b8aa0, sub_be570
*/
void sub_98080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98080ULL || rel >= 0x98480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00098480 size=144 callers=2 calls=1
   calls: sub_98480
*/
void sub_98480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98480ULL || rel >= 0x98510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00098510 size=1104 callers=1 calls=8
   calls: sub_64060, sub_679f0, sub_86670, sub_88b40, sub_9bed0, sub_a5f80, sub_a7800, sub_b8aa0
*/
void sub_98510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98510ULL || rel >= 0x98960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00098960 size=320 callers=2 calls=2
   calls: sub_67630, sub_68060
*/
void sub_98960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98960ULL || rel >= 0x98aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00098aa0 size=880 callers=1 calls=4
   calls: sub_67630, sub_68060, sub_69a20, sub_98960
*/
void sub_98aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98aa0ULL || rel >= 0x98e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00098e10 size=1104 callers=1 calls=5
   calls: sub_35f0, sub_9bed0, sub_9c3a0, sub_a9a30, sub_aa130
*/
void sub_98e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x98e10ULL || rel >= 0x99260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099260 size=176 callers=1 calls=5
   calls: sub_68e10, sub_88b40, sub_98aa0, sub_98e10, sub_b8aa0
*/
void sub_99260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99260ULL || rel >= 0x99310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099310 size=16 callers=0 calls=0
*/
void sub_99310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99310ULL || rel >= 0x99320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099320 size=16 callers=0 calls=0
*/
void sub_99320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99320ULL || rel >= 0x99330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099330 size=288 callers=1 calls=2
   calls: sub_3890, sub_3d090
*/
void sub_99330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99330ULL || rel >= 0x99450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099450 size=272 callers=3 calls=0
*/
void sub_99450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99450ULL || rel >= 0x99560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099560 size=208 callers=0 calls=0
*/
void sub_99560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99560ULL || rel >= 0x99630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099630 size=480 callers=0 calls=2
   calls: sub_67f30, sub_67ff0
*/
void sub_99630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99630ULL || rel >= 0x99810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099810 size=96 callers=0 calls=0
*/
void sub_99810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99810ULL || rel >= 0x99870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099870 size=32 callers=0 calls=0
*/
void sub_99870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99870ULL || rel >= 0x99890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099890 size=32 callers=0 calls=0
*/
void sub_99890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99890ULL || rel >= 0x998b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000998b0 size=32 callers=0 calls=0
*/
void sub_998b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x998b0ULL || rel >= 0x998d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000998d0 size=288 callers=2 calls=4
   calls: sub_35f0, sub_3620, sub_8c9e0, sub_938f0
*/
void sub_998d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x998d0ULL || rel >= 0x999f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000999f0 size=48 callers=100 calls=0
*/
void sub_999f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x999f0ULL || rel >= 0x99a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099a20 size=16 callers=1 calls=0
*/
void sub_99a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a20ULL || rel >= 0x99a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099a30 size=80 callers=1 calls=0
*/
void sub_99a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a30ULL || rel >= 0x99a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099a80 size=176 callers=5 calls=0
*/
void sub_99a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99a80ULL || rel >= 0x99b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099b30 size=208 callers=1 calls=0
*/
void sub_99b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99b30ULL || rel >= 0x99c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099c00 size=80 callers=1 calls=0
*/
void sub_99c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99c00ULL || rel >= 0x99c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099c50 size=160 callers=1 calls=0
*/
void sub_99c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99c50ULL || rel >= 0x99cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099cf0 size=208 callers=129 calls=0
*/
void sub_99cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99cf0ULL || rel >= 0x99dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099dc0 size=208 callers=0 calls=0
*/
void sub_99dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99dc0ULL || rel >= 0x99e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099e90 size=192 callers=19 calls=0
*/
void sub_99e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99e90ULL || rel >= 0x99f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00099f50 size=208 callers=3 calls=0
*/
void sub_99f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x99f50ULL || rel >= 0x9a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a020 size=48 callers=0 calls=0
   ref: <<OP=%x>>
*/
void OP_x_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a020ULL || rel >= 0x9a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a050 size=400 callers=1397 calls=1
   calls: sub_3870
*/
void sub_9a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a050ULL || rel >= 0x9a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a1e0 size=96 callers=21 calls=0
*/
void sub_9a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a1e0ULL || rel >= 0x9a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a240 size=16 callers=13 calls=0
*/
void sub_9a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a240ULL || rel >= 0x9a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a250 size=192 callers=1 calls=0
*/
void sub_9a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a250ULL || rel >= 0x9a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a310 size=176 callers=1 calls=0
*/
void sub_9a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a310ULL || rel >= 0x9a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a3c0 size=576 callers=2 calls=0
*/
void sub_9a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a3c0ULL || rel >= 0x9a600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a600 size=16 callers=12 calls=0
*/
void sub_9a600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a600ULL || rel >= 0x9a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a610 size=256 callers=12 calls=1
   calls: sub_66c30
*/
void sub_9a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a610ULL || rel >= 0x9a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a710 size=32 callers=5 calls=0
*/
void sub_9a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a710ULL || rel >= 0x9a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a730 size=16 callers=4 calls=0
*/
void sub_9a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a730ULL || rel >= 0x9a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a740 size=272 callers=70 calls=0
*/
void sub_9a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a740ULL || rel >= 0x9a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a850 size=32 callers=5 calls=0
*/
void sub_9a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a850ULL || rel >= 0x9a870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a870 size=304 callers=1 calls=0
*/
void sub_9a870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a870ULL || rel >= 0x9a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a9a0 size=160 callers=4 calls=2
   calls: sub_635f0, sub_636a0
*/
void sub_9a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a9a0ULL || rel >= 0x9aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009aa40 size=112 callers=0 calls=1
   calls: sub_635f0
*/
void sub_9aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aa40ULL || rel >= 0x9aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009aab0 size=96 callers=1 calls=0
*/
void sub_9aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aab0ULL || rel >= 0x9ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009ab10 size=96 callers=24 calls=2
   calls: sub_9a3c0, sub_9ab70
*/
void sub_9ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ab10ULL || rel >= 0x9ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009ab70 size=576 callers=15 calls=2
   calls: sub_3870, sub_635f0
*/
void sub_9ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ab70ULL || rel >= 0x9adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009adb0 size=144 callers=24 calls=1
   calls: sub_9ab70
*/
void sub_9adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9adb0ULL || rel >= 0x9ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009ae40 size=64 callers=13 calls=1
   calls: sub_9ab70
*/
void sub_9ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae40ULL || rel >= 0x9ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009ae80 size=64 callers=40 calls=1
   calls: sub_9ab70
*/
void sub_9ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae80ULL || rel >= 0x9aec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009aec0 size=64 callers=6 calls=1
   calls: sub_9ab70
*/
void sub_9aec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aec0ULL || rel >= 0x9af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009af00 size=64 callers=2 calls=1
   calls: sub_9ab70
*/
void sub_9af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9af00ULL || rel >= 0x9af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009af40 size=64 callers=1 calls=1
   calls: sub_9ab70
*/
void sub_9af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9af40ULL || rel >= 0x9af80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009af80 size=160 callers=8 calls=1
   calls: sub_9ab70
*/
void sub_9af80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9af80ULL || rel >= 0x9b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b020 size=64 callers=3 calls=1
   calls: sub_9ab70
*/
void sub_9b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b020ULL || rel >= 0x9b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b060 size=64 callers=5 calls=1
   calls: sub_9ab70
*/
void sub_9b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b060ULL || rel >= 0x9b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b0a0 size=64 callers=23 calls=1
   calls: sub_9ab70
*/
void sub_9b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0a0ULL || rel >= 0x9b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b0e0 size=64 callers=2 calls=1
   calls: sub_9ab70
*/
void sub_9b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0e0ULL || rel >= 0x9b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b120 size=64 callers=8 calls=1
   calls: sub_9ab70
*/
void sub_9b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b120ULL || rel >= 0x9b160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b160 size=64 callers=2 calls=1
   calls: sub_9ab70
*/
void sub_9b160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b160ULL || rel >= 0x9b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b1a0 size=128 callers=5 calls=2
   calls: sub_9a3c0, sub_9ab70
*/
void sub_9b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b1a0ULL || rel >= 0x9b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b220 size=432 callers=13 calls=0
*/
void sub_9b220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b220ULL || rel >= 0x9b3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b3d0 size=16 callers=378 calls=0
*/
void sub_9b3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3d0ULL || rel >= 0x9b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b3e0 size=240 callers=793 calls=0
*/
void sub_9b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3e0ULL || rel >= 0x9b4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b4d0 size=48 callers=40 calls=1
   calls: sub_9b220
*/
void sub_9b4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4d0ULL || rel >= 0x9b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b500 size=16 callers=38 calls=0
*/
void sub_9b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b500ULL || rel >= 0x9b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b510 size=256 callers=1 calls=1
   calls: sub_9b610
*/
void sub_9b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b510ULL || rel >= 0x9b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b610 size=528 callers=6 calls=1
   calls: sub_9d620
*/
void sub_9b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b610ULL || rel >= 0x9b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b820 size=128 callers=1 calls=0
*/
void sub_9b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b820ULL || rel >= 0x9b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b8a0 size=128 callers=2 calls=0
*/
void sub_9b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8a0ULL || rel >= 0x9b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009b920 size=256 callers=37 calls=0
*/
void sub_9b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b920ULL || rel >= 0x9ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009ba20 size=32 callers=14 calls=0
*/
void sub_9ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ba20ULL || rel >= 0x9ba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009ba40 size=64 callers=2 calls=1
   calls: sub_9b220
*/
void sub_9ba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ba40ULL || rel >= 0x9ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009ba80 size=48 callers=0 calls=0
*/
void sub_9ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ba80ULL || rel >= 0x9bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009bab0 size=208 callers=2 calls=0
*/
void sub_9bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bab0ULL || rel >= 0x9bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009bb80 size=96 callers=1 calls=1
   calls: sub_3fa0
   ref: <<OP=%x>>
*/
void OP_x_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bb80ULL || rel >= 0x9bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009bbe0 size=672 callers=2 calls=0
*/
void sub_9bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbe0ULL || rel >= 0x9be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009be80 size=80 callers=1 calls=0
*/
void sub_9be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be80ULL || rel >= 0x9bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009bed0 size=224 callers=353 calls=4
   calls: sub_77380, sub_9bfb0, sub_b80f0, sub_b9740
*/
void sub_9bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bed0ULL || rel >= 0x9bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009bfb0 size=272 callers=1 calls=0
*/
void sub_9bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bfb0ULL || rel >= 0x9c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c0c0 size=64 callers=3 calls=0
*/
void sub_9c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c0c0ULL || rel >= 0x9c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c100 size=112 callers=2 calls=0
*/
void sub_9c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c100ULL || rel >= 0x9c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c170 size=80 callers=1 calls=0
*/
void sub_9c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c170ULL || rel >= 0x9c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c1c0 size=96 callers=2 calls=0
*/
void sub_9c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c1c0ULL || rel >= 0x9c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c220 size=80 callers=1 calls=0
*/
void sub_9c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c220ULL || rel >= 0x9c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c270 size=144 callers=9 calls=0
*/
void sub_9c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c270ULL || rel >= 0x9c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c300 size=160 callers=5 calls=0
*/
void sub_9c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c300ULL || rel >= 0x9c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c3a0 size=112 callers=4 calls=0
*/
void sub_9c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c3a0ULL || rel >= 0x9c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c410 size=16 callers=1 calls=0
*/
void sub_9c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c410ULL || rel >= 0x9c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c420 size=864 callers=8 calls=0
*/
void sub_9c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c420ULL || rel >= 0x9c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c780 size=464 callers=1 calls=0
*/
void sub_9c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c780ULL || rel >= 0x9c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009c950 size=224 callers=54 calls=0
*/
void sub_9c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9c950ULL || rel >= 0x9ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009ca30 size=144 callers=232 calls=0
*/
void sub_9ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ca30ULL || rel >= 0x9cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009cac0 size=2096 callers=17 calls=0
*/
void sub_9cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9cac0ULL || rel >= 0x9d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009d2f0 size=48 callers=112 calls=1
   calls: sub_9c950
*/
void sub_9d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9d2f0ULL || rel >= 0x9d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009d320 size=64 callers=13 calls=1
   calls: sub_9a610
*/
void sub_9d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9d320ULL || rel >= 0x9d360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009d360 size=192 callers=2 calls=2
   calls: sub_66c00, sub_66c30
*/
void sub_9d360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9d360ULL || rel >= 0x9d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009d420 size=16 callers=33 calls=0
*/
void sub_9d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9d420ULL || rel >= 0x9d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009d430 size=32 callers=9 calls=0
*/
void sub_9d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9d430ULL || rel >= 0x9d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009d450 size=464 callers=4 calls=1
   calls: sub_9cac0
*/
void sub_9d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9d450ULL || rel >= 0x9d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009d620 size=320 callers=9 calls=0
*/
void sub_9d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9d620ULL || rel >= 0x9d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009d760 size=160 callers=1 calls=0
*/
void sub_9d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9d760ULL || rel >= 0x9d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009d800 size=416 callers=2 calls=0
*/
void sub_9d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9d800ULL || rel >= 0x9d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009d9a0 size=1072 callers=5 calls=1
   calls: sub_62240
*/
void sub_9d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9d9a0ULL || rel >= 0x9ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009ddd0 size=1248 callers=1 calls=3
   calls: sub_3b000, sub_62240, sub_9b220
*/
void sub_9ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ddd0ULL || rel >= 0x9e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009e2b0 size=384 callers=11 calls=2
   calls: sub_62050, sub_9d620
*/
void sub_9e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9e2b0ULL || rel >= 0x9e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009e430 size=448 callers=2 calls=1
   calls: sub_9e2b0
*/
void sub_9e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9e430ULL || rel >= 0x9e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009e5f0 size=448 callers=1 calls=1
   calls: sub_620d0
*/
void sub_9e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9e5f0ULL || rel >= 0x9e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

