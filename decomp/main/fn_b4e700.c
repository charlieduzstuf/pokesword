/* main functions 00b4e700..00b747f0 (88 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00b4e700 size=16 callers=0 calls=0
*/
void sub_b4e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e700ULL || rel >= 0xb4e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e710 size=16 callers=0 calls=0
*/
void sub_b4e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e710ULL || rel >= 0xb4e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e720 size=16 callers=0 calls=0
*/
void sub_b4e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e720ULL || rel >= 0xb4e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e730 size=32 callers=0 calls=0
*/
void sub_b4e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e730ULL || rel >= 0xb4e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e750 size=256 callers=2 calls=0
*/
void sub_b4e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e750ULL || rel >= 0xb4e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e850 size=272 callers=1 calls=1
   calls: sub_7c2d90
*/
void sub_b4e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e850ULL || rel >= 0xb4e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e960 size=64 callers=0 calls=1
   calls: sub_b4ea40
*/
void sub_b4e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e960ULL || rel >= 0xb4e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e9a0 size=64 callers=0 calls=2
   calls: sub_b4ea40, sub_b4edd0
*/
void sub_b4e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e9a0ULL || rel >= 0xb4e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4e9e0 size=96 callers=0 calls=1
   calls: sub_b4eed0
*/
void sub_b4e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4e9e0ULL || rel >= 0xb4ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ea40 size=672 callers=4 calls=1
   calls: sub_7c2da0
*/
void sub_b4ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ea40ULL || rel >= 0xb4ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ece0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b4ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ece0ULL || rel >= 0xb4ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ed80 size=16 callers=0 calls=0
*/
void sub_b4ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ed80ULL || rel >= 0xb4ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4ed90 size=16 callers=0 calls=0
*/
void sub_b4ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ed90ULL || rel >= 0xb4eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4eda0 size=16 callers=0 calls=0
*/
void sub_b4eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4eda0ULL || rel >= 0xb4edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4edb0 size=32 callers=0 calls=0
*/
void sub_b4edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4edb0ULL || rel >= 0xb4edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4edd0 size=256 callers=2 calls=0
*/
void sub_b4edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4edd0ULL || rel >= 0xb4eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4eed0 size=272 callers=1 calls=1
   calls: sub_7c2d90
*/
void sub_b4eed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4eed0ULL || rel >= 0xb4efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4efe0 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b4efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4efe0ULL || rel >= 0xb4f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f0e0 size=512 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_7c2da0
*/
void sub_b4f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f0e0ULL || rel >= 0xb4f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f2e0 size=48 callers=0 calls=1
   calls: sub_b4f0e0
*/
void sub_b4f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f2e0ULL || rel >= 0xb4f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f310 size=160 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b4f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f310ULL || rel >= 0xb4f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f3b0 size=176 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b4f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f3b0ULL || rel >= 0xb4f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f460 size=480 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b4f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f460ULL || rel >= 0xb4f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f640 size=16 callers=0 calls=0
*/
void sub_b4f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f640ULL || rel >= 0xb4f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f650 size=16 callers=0 calls=0
*/
void sub_b4f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f650ULL || rel >= 0xb4f660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f660 size=16 callers=0 calls=0
*/
void sub_b4f660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f660ULL || rel >= 0xb4f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f670 size=32 callers=0 calls=0
*/
void sub_b4f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f670ULL || rel >= 0xb4f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f690 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b4f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f690ULL || rel >= 0xb4f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f790 size=512 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_7c2da0
*/
void sub_b4f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f790ULL || rel >= 0xb4f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f990 size=48 callers=0 calls=1
   calls: sub_b4f790
*/
void sub_b4f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f990ULL || rel >= 0xb4f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4f9c0 size=160 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b4f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4f9c0ULL || rel >= 0xb4fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4fa60 size=176 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b4fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4fa60ULL || rel >= 0xb4fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4fb10 size=480 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b4fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4fb10ULL || rel >= 0xb4fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4fcf0 size=16 callers=0 calls=0
*/
void sub_b4fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4fcf0ULL || rel >= 0xb4fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4fd00 size=16 callers=0 calls=0
*/
void sub_b4fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4fd00ULL || rel >= 0xb4fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4fd10 size=16 callers=0 calls=0
*/
void sub_b4fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4fd10ULL || rel >= 0xb4fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4fd20 size=32 callers=0 calls=0
*/
void sub_b4fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4fd20ULL || rel >= 0xb4fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4fd40 size=64 callers=0 calls=1
   calls: sub_b4fe20
*/
void sub_b4fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4fd40ULL || rel >= 0xb4fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4fd80 size=64 callers=0 calls=2
   calls: sub_b4fe20, sub_b50160
*/
void sub_b4fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4fd80ULL || rel >= 0xb4fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4fdc0 size=96 callers=0 calls=1
   calls: sub_b50250
*/
void sub_b4fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4fdc0ULL || rel >= 0xb4fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b4fe20 size=608 callers=4 calls=1
   calls: sub_7c2da0
*/
void sub_b4fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4fe20ULL || rel >= 0xb50080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50080 size=144 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b50080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50080ULL || rel >= 0xb50110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50110 size=16 callers=0 calls=0
*/
void sub_b50110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50110ULL || rel >= 0xb50120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50120 size=16 callers=0 calls=0
*/
void sub_b50120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50120ULL || rel >= 0xb50130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50130 size=16 callers=0 calls=0
*/
void sub_b50130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50130ULL || rel >= 0xb50140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50140 size=32 callers=0 calls=0
*/
void sub_b50140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50140ULL || rel >= 0xb50160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50160 size=240 callers=2 calls=0
*/
void sub_b50160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50160ULL || rel >= 0xb50250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50250 size=240 callers=1 calls=1
   calls: sub_7c2d90
*/
void sub_b50250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50250ULL || rel >= 0xb50340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50340 size=64 callers=0 calls=1
   calls: sub_b50420
*/
void sub_b50340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50340ULL || rel >= 0xb50380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50380 size=64 callers=0 calls=2
   calls: sub_b50420, sub_b50760
*/
void sub_b50380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50380ULL || rel >= 0xb503c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b503c0 size=96 callers=0 calls=1
   calls: sub_b50850
*/
void sub_b503c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb503c0ULL || rel >= 0xb50420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50420 size=608 callers=4 calls=1
   calls: sub_7c2da0
*/
void sub_b50420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50420ULL || rel >= 0xb50680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50680 size=144 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b50680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50680ULL || rel >= 0xb50710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50710 size=16 callers=0 calls=0
*/
void sub_b50710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50710ULL || rel >= 0xb50720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50720 size=16 callers=0 calls=0
*/
void sub_b50720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50720ULL || rel >= 0xb50730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50730 size=16 callers=0 calls=0
*/
void sub_b50730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50730ULL || rel >= 0xb50740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50740 size=32 callers=0 calls=0
*/
void sub_b50740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50740ULL || rel >= 0xb50760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50760 size=240 callers=2 calls=0
*/
void sub_b50760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50760ULL || rel >= 0xb50850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50850 size=240 callers=1 calls=1
   calls: sub_7c2d90
*/
void sub_b50850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50850ULL || rel >= 0xb50940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50940 size=64 callers=0 calls=1
   calls: sub_b50a20
*/
void sub_b50940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50940ULL || rel >= 0xb50980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50980 size=64 callers=0 calls=2
   calls: sub_b50a20, sub_b50d60
*/
void sub_b50980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50980ULL || rel >= 0xb509c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b509c0 size=96 callers=0 calls=1
   calls: sub_b50e50
*/
void sub_b509c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb509c0ULL || rel >= 0xb50a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50a20 size=608 callers=3 calls=1
   calls: sub_7c2da0
*/
void sub_b50a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50a20ULL || rel >= 0xb50c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50c80 size=144 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b50c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50c80ULL || rel >= 0xb50d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50d10 size=16 callers=0 calls=0
*/
void sub_b50d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50d10ULL || rel >= 0xb50d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50d20 size=16 callers=0 calls=0
*/
void sub_b50d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50d20ULL || rel >= 0xb50d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50d30 size=16 callers=0 calls=0
*/
void sub_b50d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50d30ULL || rel >= 0xb50d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50d40 size=32 callers=0 calls=0
*/
void sub_b50d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50d40ULL || rel >= 0xb50d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50d60 size=240 callers=2 calls=0
*/
void sub_b50d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50d60ULL || rel >= 0xb50e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50e50 size=240 callers=1 calls=1
   calls: sub_7c2d90
*/
void sub_b50e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50e50ULL || rel >= 0xb50f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b50f40 size=448 callers=2 calls=3
   calls: sub_5cf8f0, sub_65f110, sub_b51200
*/
void sub_b50f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb50f40ULL || rel >= 0xb51100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51100 size=48 callers=0 calls=1
   calls: sub_b50f40
*/
void sub_b51100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51100ULL || rel >= 0xb51130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51130 size=208 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b51130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51130ULL || rel >= 0xb51200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51200 size=368 callers=2 calls=1
   calls: sub_7c2da0
*/
void sub_b51200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51200ULL || rel >= 0xb51370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51370 size=96 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b51370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51370ULL || rel >= 0xb513d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b513d0 size=16 callers=0 calls=0
*/
void sub_b513d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb513d0ULL || rel >= 0xb513e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b513e0 size=16 callers=0 calls=0
*/
void sub_b513e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb513e0ULL || rel >= 0xb513f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b513f0 size=16 callers=0 calls=0
*/
void sub_b513f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb513f0ULL || rel >= 0xb51400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51400 size=32 callers=0 calls=0
*/
void sub_b51400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51400ULL || rel >= 0xb51420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51420 size=448 callers=2 calls=3
   calls: sub_5cf8f0, sub_65f110, sub_b516e0
*/
void sub_b51420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51420ULL || rel >= 0xb515e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b515e0 size=48 callers=0 calls=1
   calls: sub_b51420
*/
void sub_b515e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb515e0ULL || rel >= 0xb51610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51610 size=208 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b51610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51610ULL || rel >= 0xb516e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b516e0 size=368 callers=2 calls=1
   calls: sub_7c2da0
*/
void sub_b516e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb516e0ULL || rel >= 0xb51850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51850 size=96 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b51850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51850ULL || rel >= 0xb518b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b518b0 size=16 callers=0 calls=0
*/
void sub_b518b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb518b0ULL || rel >= 0xb518c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b518c0 size=16 callers=0 calls=0
*/
void sub_b518c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb518c0ULL || rel >= 0xb518d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b518d0 size=16 callers=0 calls=0
*/
void sub_b518d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb518d0ULL || rel >= 0xb518e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b518e0 size=32 callers=0 calls=0
*/
void sub_b518e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb518e0ULL || rel >= 0xb51900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51900 size=416 callers=2 calls=3
   calls: sub_5cf8f0, sub_65f110, sub_b51b80
*/
void sub_b51900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51900ULL || rel >= 0xb51aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51aa0 size=48 callers=0 calls=1
   calls: sub_b51900
*/
void sub_b51aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51aa0ULL || rel >= 0xb51ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51ad0 size=176 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b51ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51ad0ULL || rel >= 0xb51b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51b80 size=304 callers=2 calls=1
   calls: sub_7c2da0
*/
void sub_b51b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51b80ULL || rel >= 0xb51cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51cb0 size=80 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b51cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51cb0ULL || rel >= 0xb51d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51d00 size=16 callers=0 calls=0
*/
void sub_b51d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51d00ULL || rel >= 0xb51d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51d10 size=16 callers=0 calls=0
*/
void sub_b51d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51d10ULL || rel >= 0xb51d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51d20 size=16 callers=0 calls=0
*/
void sub_b51d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51d20ULL || rel >= 0xb51d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51d30 size=32 callers=0 calls=0
*/
void sub_b51d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51d30ULL || rel >= 0xb51d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51d50 size=416 callers=2 calls=3
   calls: sub_5cf8f0, sub_65f110, sub_b51fd0
*/
void sub_b51d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51d50ULL || rel >= 0xb51ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51ef0 size=48 callers=0 calls=1
   calls: sub_b51d50
*/
void sub_b51ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51ef0ULL || rel >= 0xb51f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51f20 size=176 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b51f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51f20ULL || rel >= 0xb51fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b51fd0 size=304 callers=2 calls=1
   calls: sub_7c2da0
*/
void sub_b51fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb51fd0ULL || rel >= 0xb52100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52100 size=80 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b52100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52100ULL || rel >= 0xb52150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52150 size=16 callers=0 calls=0
*/
void sub_b52150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52150ULL || rel >= 0xb52160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52160 size=16 callers=0 calls=0
*/
void sub_b52160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52160ULL || rel >= 0xb52170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52170 size=16 callers=0 calls=0
*/
void sub_b52170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52170ULL || rel >= 0xb52180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52180 size=32 callers=0 calls=0
*/
void sub_b52180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52180ULL || rel >= 0xb521a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b521a0 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b521a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb521a0ULL || rel >= 0xb522a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b522a0 size=208 callers=0 calls=2
   calls: sub_7c2da0, sub_b52700
*/
void sub_b522a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb522a0ULL || rel >= 0xb52370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52370 size=208 callers=0 calls=3
   calls: sub_7c2da0, sub_b52700, sub_ce0
*/
void sub_b52370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52370ULL || rel >= 0xb52440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52440 size=96 callers=0 calls=1
   calls: sub_b52920
*/
void sub_b52440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52440ULL || rel >= 0xb524a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b524a0 size=176 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b524a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb524a0ULL || rel >= 0xb52550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52550 size=352 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b52550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52550ULL || rel >= 0xb526b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b526b0 size=16 callers=0 calls=0
*/
void sub_b526b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb526b0ULL || rel >= 0xb526c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b526c0 size=16 callers=0 calls=0
*/
void sub_b526c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb526c0ULL || rel >= 0xb526d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b526d0 size=16 callers=0 calls=0
*/
void sub_b526d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb526d0ULL || rel >= 0xb526e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b526e0 size=32 callers=0 calls=0
*/
void sub_b526e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb526e0ULL || rel >= 0xb52700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52700 size=544 callers=3 calls=0
*/
void sub_b52700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52700ULL || rel >= 0xb52920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52920 size=688 callers=2 calls=1
   calls: sub_7c2d90
*/
void sub_b52920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52920ULL || rel >= 0xb52bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52bd0 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b52bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52bd0ULL || rel >= 0xb52cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52cd0 size=208 callers=0 calls=2
   calls: sub_7c2da0, sub_b53130
*/
void sub_b52cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52cd0ULL || rel >= 0xb52da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52da0 size=208 callers=0 calls=3
   calls: sub_7c2da0, sub_b53130, sub_ce0
*/
void sub_b52da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52da0ULL || rel >= 0xb52e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52e70 size=96 callers=0 calls=1
   calls: sub_b53350
*/
void sub_b52e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52e70ULL || rel >= 0xb52ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52ed0 size=176 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b52ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52ed0ULL || rel >= 0xb52f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b52f80 size=352 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b52f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb52f80ULL || rel >= 0xb530e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b530e0 size=16 callers=0 calls=0
*/
void sub_b530e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb530e0ULL || rel >= 0xb530f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b530f0 size=16 callers=0 calls=0
*/
void sub_b530f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb530f0ULL || rel >= 0xb53100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53100 size=16 callers=0 calls=0
*/
void sub_b53100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53100ULL || rel >= 0xb53110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53110 size=32 callers=0 calls=0
*/
void sub_b53110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53110ULL || rel >= 0xb53130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53130 size=544 callers=3 calls=0
*/
void sub_b53130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53130ULL || rel >= 0xb53350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53350 size=688 callers=2 calls=1
   calls: sub_7c2d90
*/
void sub_b53350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53350ULL || rel >= 0xb53600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53600 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b53600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53600ULL || rel >= 0xb53700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53700 size=208 callers=0 calls=2
   calls: sub_7c2da0, sub_b53b20
*/
void sub_b53700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53700ULL || rel >= 0xb537d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b537d0 size=208 callers=0 calls=3
   calls: sub_7c2da0, sub_b53b20, sub_ce0
*/
void sub_b537d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb537d0ULL || rel >= 0xb538a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b538a0 size=96 callers=0 calls=1
   calls: sub_b53ce0
*/
void sub_b538a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb538a0ULL || rel >= 0xb53900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53900 size=176 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b53900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53900ULL || rel >= 0xb539b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b539b0 size=288 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b539b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb539b0ULL || rel >= 0xb53ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53ad0 size=16 callers=0 calls=0
*/
void sub_b53ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53ad0ULL || rel >= 0xb53ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53ae0 size=16 callers=0 calls=0
*/
void sub_b53ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53ae0ULL || rel >= 0xb53af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53af0 size=16 callers=0 calls=0
*/
void sub_b53af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53af0ULL || rel >= 0xb53b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53b00 size=32 callers=0 calls=0
*/
void sub_b53b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53b00ULL || rel >= 0xb53b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53b20 size=448 callers=3 calls=0
*/
void sub_b53b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53b20ULL || rel >= 0xb53ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53ce0 size=560 callers=2 calls=1
   calls: sub_7c2d90
*/
void sub_b53ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53ce0ULL || rel >= 0xb53f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b53f10 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b53f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb53f10ULL || rel >= 0xb54010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54010 size=208 callers=0 calls=2
   calls: sub_7c2da0, sub_b54470
*/
void sub_b54010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54010ULL || rel >= 0xb540e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b540e0 size=208 callers=0 calls=3
   calls: sub_7c2da0, sub_b54470, sub_ce0
*/
void sub_b540e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb540e0ULL || rel >= 0xb541b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b541b0 size=96 callers=0 calls=1
   calls: sub_b54690
*/
void sub_b541b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb541b0ULL || rel >= 0xb54210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54210 size=176 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b54210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54210ULL || rel >= 0xb542c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b542c0 size=352 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b542c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb542c0ULL || rel >= 0xb54420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54420 size=16 callers=0 calls=0
*/
void sub_b54420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54420ULL || rel >= 0xb54430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54430 size=16 callers=0 calls=0
*/
void sub_b54430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54430ULL || rel >= 0xb54440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54440 size=16 callers=0 calls=0
*/
void sub_b54440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54440ULL || rel >= 0xb54450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54450 size=32 callers=0 calls=0
*/
void sub_b54450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54450ULL || rel >= 0xb54470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54470 size=544 callers=3 calls=0
*/
void sub_b54470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54470ULL || rel >= 0xb54690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54690 size=688 callers=2 calls=1
   calls: sub_7c2d90
*/
void sub_b54690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54690ULL || rel >= 0xb54940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54940 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b54940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54940ULL || rel >= 0xb54a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54a40 size=208 callers=0 calls=2
   calls: sub_7c2da0, sub_b54ea0
*/
void sub_b54a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54a40ULL || rel >= 0xb54b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54b10 size=208 callers=0 calls=3
   calls: sub_7c2da0, sub_b54ea0, sub_ce0
*/
void sub_b54b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54b10ULL || rel >= 0xb54be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54be0 size=96 callers=0 calls=1
   calls: sub_b550c0
*/
void sub_b54be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54be0ULL || rel >= 0xb54c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54c40 size=176 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b54c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54c40ULL || rel >= 0xb54cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54cf0 size=352 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b54cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54cf0ULL || rel >= 0xb54e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54e50 size=16 callers=0 calls=0
*/
void sub_b54e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54e50ULL || rel >= 0xb54e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54e60 size=16 callers=0 calls=0
*/
void sub_b54e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54e60ULL || rel >= 0xb54e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54e70 size=16 callers=0 calls=0
*/
void sub_b54e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54e70ULL || rel >= 0xb54e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54e80 size=32 callers=0 calls=0
*/
void sub_b54e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54e80ULL || rel >= 0xb54ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b54ea0 size=544 callers=3 calls=0
*/
void sub_b54ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb54ea0ULL || rel >= 0xb550c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b550c0 size=688 callers=2 calls=1
   calls: sub_7c2d90
*/
void sub_b550c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb550c0ULL || rel >= 0xb55370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55370 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_b55370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55370ULL || rel >= 0xb55470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55470 size=208 callers=0 calls=2
   calls: sub_7c2da0, sub_b55890
*/
void sub_b55470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55470ULL || rel >= 0xb55540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55540 size=208 callers=0 calls=3
   calls: sub_7c2da0, sub_b55890, sub_ce0
*/
void sub_b55540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55540ULL || rel >= 0xb55610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55610 size=96 callers=0 calls=1
   calls: sub_b55a50
*/
void sub_b55610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55610ULL || rel >= 0xb55670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55670 size=176 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b55670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55670ULL || rel >= 0xb55720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55720 size=288 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_b55720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55720ULL || rel >= 0xb55840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55840 size=16 callers=0 calls=0
*/
void sub_b55840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55840ULL || rel >= 0xb55850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55850 size=16 callers=0 calls=0
*/
void sub_b55850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55850ULL || rel >= 0xb55860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55860 size=16 callers=0 calls=0
*/
void sub_b55860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55860ULL || rel >= 0xb55870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55870 size=32 callers=0 calls=0
*/
void sub_b55870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55870ULL || rel >= 0xb55890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55890 size=448 callers=3 calls=0
*/
void sub_b55890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55890ULL || rel >= 0xb55a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55a50 size=560 callers=2 calls=1
   calls: sub_7c2d90
*/
void sub_b55a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55a50ULL || rel >= 0xb55c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55c80 size=480 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_7c2da0
*/
void sub_b55c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55c80ULL || rel >= 0xb55e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55e60 size=48 callers=0 calls=1
   calls: sub_b55c80
*/
void sub_b55e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55e60ULL || rel >= 0xb55e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55e90 size=128 callers=0 calls=1
   calls: sub_7c2d90
*/
void sub_b55e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55e90ULL || rel >= 0xb55f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55f10 size=144 callers=0 calls=1
   calls: sub_7c2da0
*/
void sub_b55f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55f10ULL || rel >= 0xb55fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55fa0 size=16 callers=0 calls=0
*/
void sub_b55fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55fa0ULL || rel >= 0xb55fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55fb0 size=16 callers=0 calls=0
*/
void sub_b55fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55fb0ULL || rel >= 0xb55fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55fc0 size=16 callers=0 calls=0
*/
void sub_b55fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55fc0ULL || rel >= 0xb55fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55fd0 size=16 callers=0 calls=0
*/
void sub_b55fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55fd0ULL || rel >= 0xb55fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b55fe0 size=32 callers=0 calls=0
*/
void sub_b55fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb55fe0ULL || rel >= 0xb56000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b56000 size=1120 callers=1 calls=6
   calls: eyelash, only_model_and_animation_component, resident_chara_table_nx64, sub_b56690, sub_b568a0, sub_b5e1b0
*/
void sub_b56000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb56000ULL || rel >= 0xb56460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b56460 size=192 callers=5 calls=1
   calls: sub_b56690
*/
void sub_b56460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb56460ULL || rel >= 0xb56520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b56520 size=192 callers=0 calls=1
   calls: sub_b56690
*/
void sub_b56520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb56520ULL || rel >= 0xb565e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b565e0 size=48 callers=0 calls=1
   calls: sub_b628f0
*/
void sub_b565e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb565e0ULL || rel >= 0xb56610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b56610 size=32 callers=0 calls=0
*/
void sub_b56610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb56610ULL || rel >= 0xb56630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b56630 size=32 callers=0 calls=0
*/
void sub_b56630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb56630ULL || rel >= 0xb56650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b56650 size=64 callers=1 calls=0
*/
void sub_b56650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb56650ULL || rel >= 0xb56690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b56690 size=528 callers=3 calls=1
   calls: sub_5e2bc0
*/
void sub_b56690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb56690ULL || rel >= 0xb568a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b568a0 size=288 callers=1 calls=1
   calls: sub_b33070
*/
void sub_b568a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb568a0ULL || rel >= 0xb569c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b569c0 size=480 callers=1 calls=5
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_b5a430, sub_c46830
   ref: bin/archive/chara/data/resident_chara_table_nx64.gfpak
*/
void resident_chara_table_nx64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb569c0ULL || rel >= 0xb56ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b56ba0 size=1488 callers=1 calls=14
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_8c2c10, sub_b572f0, sub_b573d0, sub_b574b0, sub_b57590, sub_b57670, sub_b57750, sub_b57830, sub_b57910
   ... +2 more
   ref: bin/chara/table/chara_model_data_nx64.bin
   ref: bin/chara/table/orion_dressup_p1_table.bin
   ref: bin/chara/table/orion_dressup_p2_table.bin
*/
void orion_dressup_p2_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb56ba0ULL || rel >= 0xb57170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57170 size=16 callers=4 calls=0
*/
void sub_b57170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57170ULL || rel >= 0xb57180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57180 size=16 callers=4 calls=0
*/
void sub_b57180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57180ULL || rel >= 0xb57190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57190 size=32 callers=2 calls=0
*/
void sub_b57190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57190ULL || rel >= 0xb571b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b571b0 size=16 callers=1 calls=0
*/
void sub_b571b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb571b0ULL || rel >= 0xb571c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b571c0 size=16 callers=1 calls=0
*/
void sub_b571c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb571c0ULL || rel >= 0xb571d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b571d0 size=16 callers=4 calls=0
*/
void sub_b571d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb571d0ULL || rel >= 0xb571e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b571e0 size=16 callers=4 calls=0
*/
void sub_b571e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb571e0ULL || rel >= 0xb571f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b571f0 size=16 callers=1 calls=0
*/
void sub_b571f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb571f0ULL || rel >= 0xb57200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57200 size=16 callers=1 calls=0
*/
void sub_b57200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57200ULL || rel >= 0xb57210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57210 size=16 callers=2 calls=0
*/
void sub_b57210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57210ULL || rel >= 0xb57220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57220 size=160 callers=0 calls=3
   calls: orion_dressup_p2_table, sub_5e2bc0, sub_5e3870
*/
void sub_b57220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57220ULL || rel >= 0xb572c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b572c0 size=16 callers=0 calls=0
*/
void sub_b572c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb572c0ULL || rel >= 0xb572d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b572d0 size=16 callers=0 calls=0
*/
void sub_b572d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb572d0ULL || rel >= 0xb572e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b572e0 size=16 callers=0 calls=0
*/
void sub_b572e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb572e0ULL || rel >= 0xb572f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b572f0 size=224 callers=1 calls=1
   calls: sub_b83c70
*/
void sub_b572f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb572f0ULL || rel >= 0xb573d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b573d0 size=224 callers=1 calls=1
   calls: sub_b580f0
*/
void sub_b573d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb573d0ULL || rel >= 0xb574b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b574b0 size=224 callers=1 calls=1
   calls: sub_b74760
*/
void sub_b574b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb574b0ULL || rel >= 0xb57590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57590 size=224 callers=1 calls=1
   calls: sub_b743e0
*/
void sub_b57590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57590ULL || rel >= 0xb57670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57670 size=224 callers=1 calls=1
   calls: sub_b58380
*/
void sub_b57670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57670ULL || rel >= 0xb57750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57750 size=224 callers=1 calls=1
   calls: sub_b83910
*/
void sub_b57750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57750ULL || rel >= 0xb57830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57830 size=224 callers=1 calls=1
   calls: sub_b82f00
*/
void sub_b57830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57830ULL || rel >= 0xb57910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57910 size=128 callers=2 calls=1
   calls: sub_ead190
*/
void sub_b57910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57910ULL || rel >= 0xb57990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57990 size=80 callers=0 calls=0
*/
void sub_b57990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57990ULL || rel >= 0xb579e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b579e0 size=96 callers=0 calls=0
*/
void sub_b579e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb579e0ULL || rel >= 0xb57a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57a40 size=80 callers=0 calls=0
*/
void sub_b57a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57a40ULL || rel >= 0xb57a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57a90 size=96 callers=0 calls=0
*/
void sub_b57a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57a90ULL || rel >= 0xb57af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57af0 size=16 callers=0 calls=0
*/
void sub_b57af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57af0ULL || rel >= 0xb57b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57b00 size=112 callers=1 calls=1
   calls: sub_ead710
*/
void sub_b57b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57b00ULL || rel >= 0xb57b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57b70 size=112 callers=1 calls=1
   calls: sub_ead710
*/
void sub_b57b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57b70ULL || rel >= 0xb57be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57be0 size=112 callers=1 calls=1
   calls: sub_ead710
*/
void sub_b57be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57be0ULL || rel >= 0xb57c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57c50 size=112 callers=1 calls=1
   calls: sub_ead710
*/
void sub_b57c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57c50ULL || rel >= 0xb57cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57cc0 size=240 callers=5 calls=1
   calls: sub_ead710
*/
void sub_b57cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57cc0ULL || rel >= 0xb57db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57db0 size=432 callers=31 calls=1
   calls: sub_ead710
*/
void sub_b57db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57db0ULL || rel >= 0xb57f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57f60 size=80 callers=2 calls=1
   calls: sub_ead710
*/
void sub_b57f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57f60ULL || rel >= 0xb57fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b57fb0 size=224 callers=2 calls=1
   calls: sub_ead710
*/
void sub_b57fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb57fb0ULL || rel >= 0xb58090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58090 size=96 callers=4 calls=2
   calls: sub_ead670, sub_ead710
*/
void sub_b58090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58090ULL || rel >= 0xb580f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b580f0 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_b580f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb580f0ULL || rel >= 0xb58130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58130 size=16 callers=0 calls=0
*/
void sub_b58130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58130ULL || rel >= 0xb58140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58140 size=16 callers=0 calls=0
*/
void sub_b58140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58140ULL || rel >= 0xb58150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58150 size=16 callers=0 calls=0
*/
void sub_b58150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58150ULL || rel >= 0xb58160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58160 size=16 callers=0 calls=0
*/
void sub_b58160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58160ULL || rel >= 0xb58170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58170 size=16 callers=0 calls=0
*/
void sub_b58170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58170ULL || rel >= 0xb58180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58180 size=224 callers=1 calls=1
   calls: sub_ead710
*/
void sub_b58180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58180ULL || rel >= 0xb58260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58260 size=224 callers=1 calls=1
   calls: sub_ead710
*/
void sub_b58260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58260ULL || rel >= 0xb58340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58340 size=64 callers=0 calls=0
   ref: bin/chara/table/autoblink.bin
*/
void autoblink(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58340ULL || rel >= 0xb58380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58380 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_b58380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58380ULL || rel >= 0xb583c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b583c0 size=32 callers=0 calls=0
*/
void sub_b583c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb583c0ULL || rel >= 0xb583e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b583e0 size=48 callers=0 calls=0
*/
void sub_b583e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb583e0ULL || rel >= 0xb58410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58410 size=32 callers=0 calls=0
*/
void sub_b58410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58410ULL || rel >= 0xb58430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58430 size=48 callers=0 calls=0
*/
void sub_b58430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58430ULL || rel >= 0xb58460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58460 size=16 callers=0 calls=0
*/
void sub_b58460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58460ULL || rel >= 0xb58470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58470 size=1104 callers=13 calls=5
   calls: sub_5cfad0, sub_b3abe0, sub_b4c080, sub_b571f0, sub_ed3920
*/
void sub_b58470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58470ULL || rel >= 0xb588c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b588c0 size=64 callers=0 calls=0
   ref: bin/chara/table/outline_parameter.bin
*/
void outline_parameter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb588c0ULL || rel >= 0xb58900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58900 size=272 callers=1 calls=5
   calls: sub_b4d450, sub_b58a10, sub_b58b50, sub_b59890, sub_b59c50
*/
void sub_b58900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58900ULL || rel >= 0xb58a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58a10 size=320 callers=1 calls=1
   calls: sub_7c2d90
*/
void sub_b58a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58a10ULL || rel >= 0xb58b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b58b50 size=3392 callers=2 calls=13
   calls: sub_65f1c0, sub_7c2d90, sub_7c2da0, sub_7c2db0, sub_b3abe0, sub_b4c080, sub_b5a450, sub_b5a640, sub_b5a7e0, sub_b5a980, sub_b5ab60, sub_b5acf0
   ... +1 more
*/
void sub_b58b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb58b50ULL || rel >= 0xb59890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b59890 size=960 callers=1 calls=4
   calls: sub_b52920, sub_b53350, sub_b54690, sub_b550c0
*/
void sub_b59890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb59890ULL || rel >= 0xb59c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b59c50 size=464 callers=1 calls=2
   calls: sub_b53ce0, sub_b55a50
*/
void sub_b59c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb59c50ULL || rel >= 0xb59e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b59e20 size=1520 callers=4 calls=10
   calls: sub_7c2da0, sub_b4cf40, sub_b4e3c0, sub_b4ea40, sub_b4fe20, sub_b50420, sub_b51200, sub_b516e0, sub_b51b80, sub_b51fd0
*/
void sub_b59e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb59e20ULL || rel >= 0xb5a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5a410 size=32 callers=4 calls=0
*/
void sub_b5a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5a410ULL || rel >= 0xb5a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5a430 size=32 callers=6 calls=0
*/
void sub_b5a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5a430ULL || rel >= 0xb5a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5a450 size=496 callers=1 calls=0
*/
void sub_b5a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5a450ULL || rel >= 0xb5a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5a640 size=416 callers=1 calls=0
*/
void sub_b5a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5a640ULL || rel >= 0xb5a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5a7e0 size=416 callers=1 calls=0
*/
void sub_b5a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5a7e0ULL || rel >= 0xb5a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5a980 size=480 callers=1 calls=0
*/
void sub_b5a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5a980ULL || rel >= 0xb5ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5ab60 size=400 callers=1 calls=0
*/
void sub_b5ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5ab60ULL || rel >= 0xb5acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5acf0 size=400 callers=1 calls=0
*/
void sub_b5acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5acf0ULL || rel >= 0xb5ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5ae80 size=144 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5ae80ULL || rel >= 0xb5af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5af10 size=16 callers=0 calls=0
*/
void sub_b5af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5af10ULL || rel >= 0xb5af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5af20 size=16 callers=0 calls=0
*/
void sub_b5af20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5af20ULL || rel >= 0xb5af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5af30 size=16 callers=0 calls=0
*/
void sub_b5af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5af30ULL || rel >= 0xb5af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5af40 size=976 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5af40ULL || rel >= 0xb5b310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b310 size=16 callers=0 calls=0
*/
void sub_b5b310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b310ULL || rel >= 0xb5b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b320 size=16 callers=0 calls=0
*/
void sub_b5b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b320ULL || rel >= 0xb5b330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b330 size=16 callers=0 calls=0
*/
void sub_b5b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b330ULL || rel >= 0xb5b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b340 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5b340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b340ULL || rel >= 0xb5b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b420 size=16 callers=0 calls=0
*/
void sub_b5b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b420ULL || rel >= 0xb5b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b430 size=16 callers=0 calls=0
*/
void sub_b5b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b430ULL || rel >= 0xb5b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b440 size=16 callers=0 calls=0
*/
void sub_b5b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b440ULL || rel >= 0xb5b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b450 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b450ULL || rel >= 0xb5b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b530 size=16 callers=0 calls=0
*/
void sub_b5b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b530ULL || rel >= 0xb5b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b540 size=16 callers=0 calls=0
*/
void sub_b5b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b540ULL || rel >= 0xb5b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b550 size=16 callers=0 calls=0
*/
void sub_b5b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b550ULL || rel >= 0xb5b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b560 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b560ULL || rel >= 0xb5b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b640 size=16 callers=0 calls=0
*/
void sub_b5b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b640ULL || rel >= 0xb5b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b650 size=16 callers=0 calls=0
*/
void sub_b5b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b650ULL || rel >= 0xb5b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b660 size=16 callers=0 calls=0
*/
void sub_b5b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b660ULL || rel >= 0xb5b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b670 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5b670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b670ULL || rel >= 0xb5b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b750 size=16 callers=0 calls=0
*/
void sub_b5b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b750ULL || rel >= 0xb5b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b760 size=16 callers=0 calls=0
*/
void sub_b5b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b760ULL || rel >= 0xb5b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b770 size=16 callers=0 calls=0
*/
void sub_b5b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b770ULL || rel >= 0xb5b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b780 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b780ULL || rel >= 0xb5b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b860 size=16 callers=0 calls=0
*/
void sub_b5b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b860ULL || rel >= 0xb5b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b870 size=16 callers=0 calls=0
*/
void sub_b5b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b870ULL || rel >= 0xb5b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b880 size=16 callers=0 calls=0
*/
void sub_b5b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b880ULL || rel >= 0xb5b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b890 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b890ULL || rel >= 0xb5b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b970 size=16 callers=0 calls=0
*/
void sub_b5b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b970ULL || rel >= 0xb5b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b980 size=16 callers=0 calls=0
*/
void sub_b5b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b980ULL || rel >= 0xb5b990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b990 size=16 callers=0 calls=0
*/
void sub_b5b990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b990ULL || rel >= 0xb5b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5b9a0 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5b9a0ULL || rel >= 0xb5ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5ba80 size=16 callers=0 calls=0
*/
void sub_b5ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5ba80ULL || rel >= 0xb5ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5ba90 size=16 callers=0 calls=0
*/
void sub_b5ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5ba90ULL || rel >= 0xb5baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5baa0 size=16 callers=0 calls=0
*/
void sub_b5baa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5baa0ULL || rel >= 0xb5bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bab0 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bab0ULL || rel >= 0xb5bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bb90 size=16 callers=0 calls=0
*/
void sub_b5bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bb90ULL || rel >= 0xb5bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bba0 size=16 callers=0 calls=0
*/
void sub_b5bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bba0ULL || rel >= 0xb5bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bbb0 size=16 callers=0 calls=0
*/
void sub_b5bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bbb0ULL || rel >= 0xb5bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bbc0 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bbc0ULL || rel >= 0xb5bca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bca0 size=16 callers=0 calls=0
*/
void sub_b5bca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bca0ULL || rel >= 0xb5bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bcb0 size=16 callers=0 calls=0
*/
void sub_b5bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bcb0ULL || rel >= 0xb5bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bcc0 size=16 callers=0 calls=0
*/
void sub_b5bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bcc0ULL || rel >= 0xb5bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bcd0 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bcd0ULL || rel >= 0xb5bdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bdb0 size=16 callers=0 calls=0
*/
void sub_b5bdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bdb0ULL || rel >= 0xb5bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bdc0 size=16 callers=0 calls=0
*/
void sub_b5bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bdc0ULL || rel >= 0xb5bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bdd0 size=16 callers=0 calls=0
*/
void sub_b5bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bdd0ULL || rel >= 0xb5bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bde0 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bde0ULL || rel >= 0xb5bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bec0 size=16 callers=0 calls=0
*/
void sub_b5bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bec0ULL || rel >= 0xb5bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bed0 size=16 callers=0 calls=0
*/
void sub_b5bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bed0ULL || rel >= 0xb5bee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bee0 size=16 callers=0 calls=0
*/
void sub_b5bee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bee0ULL || rel >= 0xb5bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bef0 size=224 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bef0ULL || rel >= 0xb5bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bfd0 size=16 callers=0 calls=0
*/
void sub_b5bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bfd0ULL || rel >= 0xb5bfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bfe0 size=16 callers=0 calls=0
*/
void sub_b5bfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bfe0ULL || rel >= 0xb5bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5bff0 size=16 callers=0 calls=0
*/
void sub_b5bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5bff0ULL || rel >= 0xb5c000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5c000 size=1856 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5c000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5c000ULL || rel >= 0xb5c740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5c740 size=16 callers=0 calls=0
*/
void sub_b5c740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5c740ULL || rel >= 0xb5c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5c750 size=16 callers=0 calls=0
*/
void sub_b5c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5c750ULL || rel >= 0xb5c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5c760 size=16 callers=0 calls=0
*/
void sub_b5c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5c760ULL || rel >= 0xb5c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5c770 size=1856 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5c770ULL || rel >= 0xb5ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5ceb0 size=16 callers=0 calls=0
*/
void sub_b5ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5ceb0ULL || rel >= 0xb5cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5cec0 size=16 callers=0 calls=0
*/
void sub_b5cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5cec0ULL || rel >= 0xb5ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5ced0 size=16 callers=0 calls=0
*/
void sub_b5ced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5ced0ULL || rel >= 0xb5cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5cee0 size=256 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5cee0ULL || rel >= 0xb5cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5cfe0 size=16 callers=0 calls=0
*/
void sub_b5cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5cfe0ULL || rel >= 0xb5cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5cff0 size=16 callers=0 calls=0
*/
void sub_b5cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5cff0ULL || rel >= 0xb5d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d000 size=16 callers=0 calls=0
*/
void sub_b5d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d000ULL || rel >= 0xb5d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d010 size=256 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5d010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d010ULL || rel >= 0xb5d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d110 size=16 callers=0 calls=0
*/
void sub_b5d110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d110ULL || rel >= 0xb5d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d120 size=16 callers=0 calls=0
*/
void sub_b5d120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d120ULL || rel >= 0xb5d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d130 size=16 callers=0 calls=0
*/
void sub_b5d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d130ULL || rel >= 0xb5d140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d140 size=1568 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5d140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d140ULL || rel >= 0xb5d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d760 size=16 callers=0 calls=0
*/
void sub_b5d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d760ULL || rel >= 0xb5d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d770 size=16 callers=0 calls=0
*/
void sub_b5d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d770ULL || rel >= 0xb5d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d780 size=16 callers=0 calls=0
*/
void sub_b5d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d780ULL || rel >= 0xb5d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d790 size=144 callers=0 calls=1
   calls: sub_65f1c0
*/
void sub_b5d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d790ULL || rel >= 0xb5d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d820 size=16 callers=0 calls=0
*/
void sub_b5d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d820ULL || rel >= 0xb5d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d830 size=16 callers=0 calls=0
*/
void sub_b5d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d830ULL || rel >= 0xb5d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d840 size=16 callers=0 calls=0
*/
void sub_b5d840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d840ULL || rel >= 0xb5d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d850 size=400 callers=1 calls=5
   calls: sub_b5d9e0, sub_b6c780, sub_b6c8a0, sub_b75de0, sub_b77210
*/
void sub_b5d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d850ULL || rel >= 0xb5d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5d9e0 size=1632 callers=8 calls=3
   calls: sub_b3aa10, sub_b6b950, sub_b73f00
*/
void sub_b5d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d9e0ULL || rel >= 0xb5e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5e040 size=368 callers=1 calls=1
   calls: sub_b60780
*/
void sub_b5e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5e040ULL || rel >= 0xb5e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5e1b0 size=2640 callers=1 calls=8
   calls: resident_chara_nx64, sub_5cf8c0, sub_5e2350, sub_b5ec00, sub_b6c990, sub_b6cb10, sub_b6cc90, sub_b6d6e0
*/
void sub_b5e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5e1b0ULL || rel >= 0xb5ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5ec00 size=544 callers=3 calls=4
   calls: sub_5cf8f0, sub_b5fbb0, sub_b5fd40, sub_b5fea0
*/
void sub_b5ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5ec00ULL || rel >= 0xb5ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5ee20 size=464 callers=1 calls=4
   calls: sub_5dd790, sub_5e2930, sub_b5a430, sub_c46830
   ref: bin/archive/chara/data/resident_chara_nx64.gfpak
*/
void resident_chara_nx64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5ee20ULL || rel >= 0xb5eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5eff0 size=2928 callers=0 calls=8
   calls: sub_5cf8d0, sub_5cf8e0, sub_5cf8f0, sub_5e2bc0, sub_b5ff80, sub_b60e00, sub_b6c990, sub_b6cb10
*/
void sub_b5eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5eff0ULL || rel >= 0xb5fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5fb60 size=16 callers=0 calls=0
*/
void sub_b5fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5fb60ULL || rel >= 0xb5fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5fb70 size=16 callers=0 calls=0
*/
void sub_b5fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5fb70ULL || rel >= 0xb5fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5fb80 size=16 callers=0 calls=0
*/
void sub_b5fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5fb80ULL || rel >= 0xb5fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5fb90 size=16 callers=0 calls=0
*/
void sub_b5fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5fb90ULL || rel >= 0xb5fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5fba0 size=16 callers=0 calls=0
*/
void sub_b5fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5fba0ULL || rel >= 0xb5fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5fbb0 size=400 callers=1 calls=0
*/
void sub_b5fbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5fbb0ULL || rel >= 0xb5fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5fd40 size=352 callers=1 calls=0
*/
void sub_b5fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5fd40ULL || rel >= 0xb5fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5fea0 size=224 callers=1 calls=0
*/
void sub_b5fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5fea0ULL || rel >= 0xb5ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b5ff80 size=2048 callers=12 calls=4
   calls: sub_b39cf0, sub_b426b0, sub_b60780, sub_b61090
*/
void sub_b5ff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5ff80ULL || rel >= 0xb60780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b60780 size=1664 callers=38 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0
*/
void sub_b60780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb60780ULL || rel >= 0xb60e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b60e00 size=656 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0, sub_b60780
*/
void sub_b60e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb60e00ULL || rel >= 0xb61090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b61090 size=464 callers=5 calls=3
   calls: sub_5cf8f0, sub_b426b0, sub_b67dd0
*/
void sub_b61090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb61090ULL || rel >= 0xb61260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b61260 size=1056 callers=0 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0, sub_b60780
*/
void sub_b61260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb61260ULL || rel >= 0xb61680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b61680 size=336 callers=1 calls=2
   calls: sub_12f6d30, sub_b334c0
*/
void sub_b61680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb61680ULL || rel >= 0xb617d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b617d0 size=976 callers=1 calls=8
   calls: sub_12f9fc0, sub_b3aa10, sub_b61ba0, sub_b61e40, sub_b62060, sub_b62290, sub_b6c3d0, sub_b73f00
*/
void sub_b617d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb617d0ULL || rel >= 0xb61ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b61ba0 size=672 callers=2 calls=5
   calls: sub_12f6d30, sub_b39cf0, sub_b60780, sub_b6c550, sub_b794e0
*/
void sub_b61ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb61ba0ULL || rel >= 0xb61e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b61e40 size=544 callers=2 calls=3
   calls: sub_b426b0, sub_b5d850, sub_b61090
*/
void sub_b61e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb61e40ULL || rel >= 0xb62060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b62060 size=560 callers=2 calls=5
   calls: sub_12f85b0, sub_b4c060, sub_b61680, sub_b66520, sub_b67420
*/
void sub_b62060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb62060ULL || rel >= 0xb62290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b62290 size=1040 callers=2 calls=2
   calls: sub_b63f70, sub_b65b20
*/
void sub_b62290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb62290ULL || rel >= 0xb626a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b626a0 size=592 callers=6 calls=0
*/
void sub_b626a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb626a0ULL || rel >= 0xb628f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b628f0 size=1152 callers=1 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0, sub_b62d70, sub_b63890, sub_b63b30, sub_b63d50
*/
void sub_b628f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb628f0ULL || rel >= 0xb62d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b62d70 size=2848 callers=1 calls=11
   calls: sub_5e2bc0, sub_b39cf0, sub_b424e0, sub_b5d9e0, sub_b66520, sub_b67420, sub_b68910, sub_b68ef0, sub_b6b700, sub_b6bfd0, sub_b6c150
*/
void sub_b62d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb62d70ULL || rel >= 0xb63890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b63890 size=672 callers=2 calls=3
   calls: sub_7c2db0, sub_b6c780, sub_b6c8a0
*/
void sub_b63890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb63890ULL || rel >= 0xb63b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b63b30 size=544 callers=2 calls=3
   calls: sub_b39cf0, sub_b60780, sub_b659b0
*/
void sub_b63b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb63b30ULL || rel >= 0xb63d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b63d50 size=544 callers=2 calls=4
   calls: sub_b426b0, sub_b5e040, sub_b61090, sub_b67c30
*/
void sub_b63d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb63d50ULL || rel >= 0xb63f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b63f70 size=2288 callers=2 calls=10
   calls: sub_5cf8e0, sub_5cf8f0, sub_7c2d90, sub_b39cf0, sub_b426b0, sub_b427a0, sub_b60780, sub_b64860, sub_b64ba0, sub_b64d00
*/
void sub_b63f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb63f70ULL || rel >= 0xb64860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b64860 size=832 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_b68800, sub_b6c780, sub_b75de0
*/
void sub_b64860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb64860ULL || rel >= 0xb64ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b64ba0 size=352 callers=1 calls=0
*/
void sub_b64ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb64ba0ULL || rel >= 0xb64d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b64d00 size=2704 callers=3 calls=7
   calls: sub_b426b0, sub_b65790, sub_b663a0, sub_b66520, sub_b67420, sub_b6c780, sub_b6c8a0
*/
void sub_b64d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb64d00ULL || rel >= 0xb65790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b65790 size=544 callers=2 calls=1
   calls: sub_b659b0
*/
void sub_b65790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb65790ULL || rel >= 0xb659b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b659b0 size=368 callers=21 calls=1
   calls: sub_b39cf0
*/
void sub_b659b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb659b0ULL || rel >= 0xb65b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b65b20 size=1616 callers=2 calls=6
   calls: sub_b3aa10, sub_b5a410, sub_b5a430, sub_b5d9e0, sub_b66170, sub_b73f00
*/
void sub_b65b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb65b20ULL || rel >= 0xb66170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b66170 size=560 callers=4 calls=0
*/
void sub_b66170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb66170ULL || rel >= 0xb663a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b663a0 size=384 callers=2 calls=0
*/
void sub_b663a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb663a0ULL || rel >= 0xb66520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b66520 size=3696 callers=11 calls=6
   calls: sub_b39cf0, sub_b60780, sub_b676b0, sub_b676f0, sub_b677f0, sub_b67950
*/
void sub_b66520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb66520ULL || rel >= 0xb67390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b67390 size=144 callers=7 calls=2
   calls: sub_b66520, sub_b67420
*/
void sub_b67390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb67390ULL || rel >= 0xb67420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b67420 size=656 callers=10 calls=1
   calls: sub_b39cf0
*/
void sub_b67420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb67420ULL || rel >= 0xb676b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b676b0 size=64 callers=1 calls=0
*/
void sub_b676b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb676b0ULL || rel >= 0xb676f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b676f0 size=256 callers=1 calls=7
   calls: sub_b68910, sub_b68ef0, sub_b69440, sub_b699f0, sub_b69f90, sub_b6a530, sub_b6ab70
*/
void sub_b676f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb676f0ULL || rel >= 0xb677f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b677f0 size=352 callers=5 calls=0
*/
void sub_b677f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb677f0ULL || rel >= 0xb67950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b67950 size=736 callers=1 calls=13
   calls: sub_5cf8e0, sub_5cf8f0, sub_b6e130, sub_b6e260, sub_b6e390, sub_b6e4c0, sub_b6e610, sub_b6e770, sub_b6e9b0, sub_b6eb20, sub_b6ecb0, sub_b6ee00
   ... +1 more
*/
void sub_b67950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb67950ULL || rel >= 0xb67c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b67c30 size=416 callers=1 calls=2
   calls: sub_b426b0, sub_b659b0
*/
void sub_b67c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb67c30ULL || rel >= 0xb67dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b67dd0 size=256 callers=1 calls=0
*/
void sub_b67dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb67dd0ULL || rel >= 0xb67ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b67ed0 size=256 callers=3 calls=0
*/
void sub_b67ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb67ed0ULL || rel >= 0xb67fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b67fd0 size=368 callers=2 calls=1
   calls: sub_b39cf0
*/
void sub_b67fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb67fd0ULL || rel >= 0xb68140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b68140 size=336 callers=0 calls=0
*/
void sub_b68140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb68140ULL || rel >= 0xb68290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b68290 size=336 callers=0 calls=0
*/
void sub_b68290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb68290ULL || rel >= 0xb683e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b683e0 size=352 callers=0 calls=0
*/
void sub_b683e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb683e0ULL || rel >= 0xb68540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b68540 size=368 callers=0 calls=1
   calls: sub_b6f8c0
*/
void sub_b68540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb68540ULL || rel >= 0xb686b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b686b0 size=336 callers=0 calls=0
*/
void sub_b686b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb686b0ULL || rel >= 0xb68800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b68800 size=272 callers=2 calls=2
   calls: sub_b6c8a0, sub_b77210
*/
void sub_b68800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb68800ULL || rel >= 0xb68910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b68910 size=1504 callers=3 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0, sub_b6c780, sub_b75de0
*/
void sub_b68910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb68910ULL || rel >= 0xb68ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b68ef0 size=1360 callers=3 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0, sub_b68800
*/
void sub_b68ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb68ef0ULL || rel >= 0xb69440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b69440 size=1456 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0, sub_b6f420, sub_b785b0
*/
void sub_b69440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb69440ULL || rel >= 0xb699f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b699f0 size=1440 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0, sub_b6c550, sub_b794e0
*/
void sub_b699f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb699f0ULL || rel >= 0xb69f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b69f90 size=1440 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0, sub_b6f5f0, sub_b7ad10
*/
void sub_b69f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb69f90ULL || rel >= 0xb6a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6a530 size=1600 callers=3 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0, sub_b6e8c0, sub_b7f290
*/
void sub_b6a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6a530ULL || rel >= 0xb6ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6ab70 size=1600 callers=3 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_b39cf0, sub_b6c8a0, sub_b7fa70
*/
void sub_b6ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6ab70ULL || rel >= 0xb6b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6b1b0 size=1360 callers=1 calls=9
   calls: sub_b57170, sub_b57180, sub_b57b00, sub_b57b70, sub_b57be0, sub_b57c50, sub_b57cc0, sub_b6b700, sub_b75640
*/
void sub_b6b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6b1b0ULL || rel >= 0xb6b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6b700 size=592 callers=2 calls=2
   calls: sub_b3aa10, sub_b73f00
*/
void sub_b6b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6b700ULL || rel >= 0xb6b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6b950 size=1088 callers=1 calls=1
   calls: sub_b6bd90
*/
void sub_b6b950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6b950ULL || rel >= 0xb6bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6bd90 size=576 callers=1 calls=0
*/
void sub_b6bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6bd90ULL || rel >= 0xb6bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6bfd0 size=384 callers=2 calls=0
*/
void sub_b6bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6bfd0ULL || rel >= 0xb6c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6c150 size=368 callers=1 calls=1
   calls: sub_b60780
*/
void sub_b6c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6c150ULL || rel >= 0xb6c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6c2c0 size=240 callers=0 calls=0
*/
void sub_b6c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6c2c0ULL || rel >= 0xb6c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6c3b0 size=16 callers=0 calls=0
*/
void sub_b6c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6c3b0ULL || rel >= 0xb6c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6c3c0 size=16 callers=0 calls=0
*/
void sub_b6c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6c3c0ULL || rel >= 0xb6c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6c3d0 size=384 callers=6 calls=0
*/
void sub_b6c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6c3d0ULL || rel >= 0xb6c550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6c550 size=464 callers=10 calls=1
   calls: sub_b39cf0
*/
void sub_b6c550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6c550ULL || rel >= 0xb6c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6c720 size=80 callers=0 calls=0
*/
void sub_b6c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6c720ULL || rel >= 0xb6c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6c770 size=16 callers=0 calls=0
*/
void sub_b6c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6c770ULL || rel >= 0xb6c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6c780 size=288 callers=5 calls=1
   calls: sub_b39cf0
*/
void sub_b6c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6c780ULL || rel >= 0xb6c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6c8a0 size=240 callers=6 calls=1
   calls: sub_b39cf0
*/
void sub_b6c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6c8a0ULL || rel >= 0xb6c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6c990 size=336 callers=14 calls=0
*/
void sub_b6c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6c990ULL || rel >= 0xb6cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6cae0 size=48 callers=0 calls=1
   calls: sub_b6c990
*/
void sub_b6cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6cae0ULL || rel >= 0xb6cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6cb10 size=336 callers=5 calls=0
*/
void sub_b6cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6cb10ULL || rel >= 0xb6cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6cc60 size=48 callers=0 calls=1
   calls: sub_b6cb10
*/
void sub_b6cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6cc60ULL || rel >= 0xb6cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6cc90 size=1008 callers=5 calls=2
   calls: sub_b6d080, sub_b6d300
*/
void sub_b6cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6cc90ULL || rel >= 0xb6d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6d080 size=640 callers=1 calls=0
*/
void sub_b6d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6d080ULL || rel >= 0xb6d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6d300 size=384 callers=1 calls=0
*/
void sub_b6d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6d300ULL || rel >= 0xb6d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6d480 size=608 callers=0 calls=0
*/
void sub_b6d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6d480ULL || rel >= 0xb6d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6d6e0 size=1008 callers=2 calls=2
   calls: sub_b6dad0, sub_b6dd50
*/
void sub_b6d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6d6e0ULL || rel >= 0xb6dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6dad0 size=640 callers=1 calls=0
*/
void sub_b6dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6dad0ULL || rel >= 0xb6dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6dd50 size=384 callers=1 calls=0
*/
void sub_b6dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6dd50ULL || rel >= 0xb6ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6ded0 size=608 callers=0 calls=0
*/
void sub_b6ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6ded0ULL || rel >= 0xb6e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6e130 size=304 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_b6e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6e130ULL || rel >= 0xb6e260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6e260 size=304 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_b6e260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6e260ULL || rel >= 0xb6e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6e390 size=304 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_b6e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6e390ULL || rel >= 0xb6e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6e4c0 size=336 callers=1 calls=2
   calls: sub_5e2350, sub_7c2da0
*/
void sub_b6e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6e4c0ULL || rel >= 0xb6e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6e610 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_b6e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6e610ULL || rel >= 0xb6e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6e770 size=336 callers=1 calls=2
   calls: sub_5e2350, sub_7c2da0
*/
void sub_b6e770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6e770ULL || rel >= 0xb6e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6e8c0 size=240 callers=3 calls=1
   calls: sub_b39cf0
*/
void sub_b6e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6e8c0ULL || rel >= 0xb6e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6e9b0 size=368 callers=1 calls=2
   calls: sub_5e2350, sub_7c2da0
*/
void sub_b6e9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6e9b0ULL || rel >= 0xb6eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6eb20 size=400 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_b6eb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6eb20ULL || rel >= 0xb6ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6ecb0 size=336 callers=1 calls=3
   calls: sub_5e2350, sub_7c2da0, sub_b6f8c0
*/
void sub_b6ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6ecb0ULL || rel >= 0xb6ee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6ee00 size=320 callers=1 calls=2
   calls: sub_5e2350, sub_7c2da0
*/
void sub_b6ee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6ee00ULL || rel >= 0xb6ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6ef40 size=416 callers=1 calls=0
*/
void sub_b6ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6ef40ULL || rel >= 0xb6f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f0e0 size=128 callers=0 calls=0
*/
void sub_b6f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f0e0ULL || rel >= 0xb6f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f160 size=128 callers=0 calls=0
*/
void sub_b6f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f160ULL || rel >= 0xb6f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f1e0 size=128 callers=0 calls=0
*/
void sub_b6f1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f1e0ULL || rel >= 0xb6f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f260 size=128 callers=0 calls=0
*/
void sub_b6f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f260ULL || rel >= 0xb6f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f2e0 size=80 callers=0 calls=0
*/
void sub_b6f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f2e0ULL || rel >= 0xb6f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f330 size=80 callers=0 calls=0
*/
void sub_b6f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f330ULL || rel >= 0xb6f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f380 size=80 callers=0 calls=0
*/
void sub_b6f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f380ULL || rel >= 0xb6f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f3d0 size=80 callers=0 calls=0
*/
void sub_b6f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f3d0ULL || rel >= 0xb6f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f420 size=464 callers=1 calls=1
   calls: sub_b39cf0
*/
void sub_b6f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f420ULL || rel >= 0xb6f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f5f0 size=464 callers=1 calls=1
   calls: sub_b39cf0
*/
void sub_b6f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f5f0ULL || rel >= 0xb6f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f7c0 size=208 callers=0 calls=1
   calls: sub_5e3870
*/
void sub_b6f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f7c0ULL || rel >= 0xb6f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f890 size=16 callers=0 calls=0
*/
void sub_b6f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f890ULL || rel >= 0xb6f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f8a0 size=16 callers=0 calls=0
*/
void sub_b6f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f8a0ULL || rel >= 0xb6f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f8b0 size=16 callers=0 calls=0
*/
void sub_b6f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f8b0ULL || rel >= 0xb6f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f8c0 size=96 callers=37 calls=1
   calls: sub_b72950
*/
void sub_b6f8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f8c0ULL || rel >= 0xb6f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6f920 size=288 callers=0 calls=0
*/
void sub_b6f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f920ULL || rel >= 0xb6fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6fa40 size=48 callers=2 calls=1
   calls: sub_b72950
*/
void sub_b6fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6fa40ULL || rel >= 0xb6fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6fa70 size=96 callers=6 calls=2
   calls: sub_67be60, sub_67c910
*/
void sub_b6fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6fa70ULL || rel >= 0xb6fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6fad0 size=112 callers=2 calls=3
   calls: sub_67bdb0, sub_67bdc0, sub_67c7e0
*/
void sub_b6fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6fad0ULL || rel >= 0xb6fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6fb40 size=16 callers=2 calls=0
*/
void sub_b6fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6fb40ULL || rel >= 0xb6fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6fb50 size=16 callers=1 calls=0
*/
void sub_b6fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6fb50ULL || rel >= 0xb6fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6fb60 size=16 callers=2 calls=0
*/
void sub_b6fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6fb60ULL || rel >= 0xb6fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6fb70 size=128 callers=25 calls=2
   calls: sub_b6fbf0, sub_b72950
*/
void sub_b6fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6fb70ULL || rel >= 0xb6fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6fbf0 size=816 callers=12 calls=5
   calls: sub_b3abe0, sub_b4c080, sub_b571d0, sub_b72950, sub_b74850
*/
void sub_b6fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6fbf0ULL || rel >= 0xb6ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6ff20 size=128 callers=15 calls=2
   calls: sub_b6fbf0, sub_b72950
*/
void sub_b6ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6ff20ULL || rel >= 0xb6ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b6ffa0 size=1184 callers=2 calls=3
   calls: sub_b6fbf0, sub_b70440, sub_b72950
*/
void sub_b6ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6ffa0ULL || rel >= 0xb70440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b70440 size=992 callers=14 calls=4
   calls: sub_b3abe0, sub_b4c080, sub_b571d0, sub_b74850
*/
void sub_b70440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb70440ULL || rel >= 0xb70820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b70820 size=1376 callers=1 calls=2
   calls: sub_b70440, sub_b72950
*/
void sub_b70820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb70820ULL || rel >= 0xb70d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b70d80 size=176 callers=3 calls=2
   calls: sub_b70440, sub_b72950
*/
void sub_b70d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb70d80ULL || rel >= 0xb70e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b70e30 size=48 callers=4 calls=0
*/
void sub_b70e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb70e30ULL || rel >= 0xb70e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b70e60 size=64 callers=3 calls=0
*/
void sub_b70e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb70e60ULL || rel >= 0xb70ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b70ea0 size=16 callers=3 calls=0
*/
void sub_b70ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb70ea0ULL || rel >= 0xb70eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b70eb0 size=2880 callers=2 calls=7
   calls: sub_b3abe0, sub_b4c070, sub_b4c080, sub_b571e0, sub_b72950, sub_b745d0, sub_b751c0
*/
void sub_b70eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb70eb0ULL || rel >= 0xb719f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b719f0 size=1104 callers=1 calls=9
   calls: sub_b3abe0, sub_b4c070, sub_b4c080, sub_b571e0, sub_b70440, sub_b72440, sub_b72950, sub_b746b0, sub_b74f10
*/
void sub_b719f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb719f0ULL || rel >= 0xb71e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b71e40 size=1536 callers=4 calls=14
   calls: sub_b3abe0, sub_b4c080, sub_b57170, sub_b57180, sub_b571d0, sub_b571e0, sub_b57cc0, sub_b6f8c0, sub_b70440, sub_b70e30, sub_b72440, sub_b72950
   ... +2 more
*/
void sub_b71e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb71e40ULL || rel >= 0xb72440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b72440 size=1296 callers=2 calls=1
   calls: sub_b72950
*/
void sub_b72440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb72440ULL || rel >= 0xb72950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b72950 size=144 callers=117 calls=1
   calls: sub_1c0
*/
void sub_b72950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb72950ULL || rel >= 0xb729e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b729e0 size=4576 callers=1 calls=2
   calls: sub_5e2350, sub_b73bc0
   ref: fi0002_wait02
   ref: only_model
   ref: Default
   ref: battle
   ref: only_model_and_animation_component
   ref: ba0001_wait01_loop
   ref: eye01_default
   ref: pm0094_81_00_YukaSkin
*/
void only_model_and_animation_component(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb729e0ULL || rel >= 0xb73bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b73bc0 size=832 callers=1 calls=0
*/
void sub_b73bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb73bc0ULL || rel >= 0xb73f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b73f00 size=16 callers=27 calls=0
*/
void sub_b73f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb73f00ULL || rel >= 0xb73f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b73f10 size=160 callers=0 calls=0
*/
void sub_b73f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb73f10ULL || rel >= 0xb73fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b73fb0 size=160 callers=0 calls=0
*/
void sub_b73fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb73fb0ULL || rel >= 0xb74050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74050 size=240 callers=0 calls=0
*/
void sub_b74050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74050ULL || rel >= 0xb74140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74140 size=160 callers=0 calls=0
*/
void sub_b74140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74140ULL || rel >= 0xb741e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b741e0 size=160 callers=0 calls=0
*/
void sub_b741e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb741e0ULL || rel >= 0xb74280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74280 size=16 callers=0 calls=0
*/
void sub_b74280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74280ULL || rel >= 0xb74290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74290 size=16 callers=0 calls=0
*/
void sub_b74290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74290ULL || rel >= 0xb742a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b742a0 size=160 callers=0 calls=0
*/
void sub_b742a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb742a0ULL || rel >= 0xb74340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74340 size=160 callers=0 calls=0
*/
void sub_b74340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74340ULL || rel >= 0xb743e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b743e0 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_b743e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb743e0ULL || rel >= 0xb74420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74420 size=32 callers=0 calls=0
*/
void sub_b74420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74420ULL || rel >= 0xb74440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74440 size=48 callers=0 calls=0
*/
void sub_b74440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74440ULL || rel >= 0xb74470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74470 size=32 callers=0 calls=0
*/
void sub_b74470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74470ULL || rel >= 0xb74490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74490 size=48 callers=0 calls=0
*/
void sub_b74490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74490ULL || rel >= 0xb744c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b744c0 size=16 callers=0 calls=0
*/
void sub_b744c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb744c0ULL || rel >= 0xb744d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b744d0 size=256 callers=2 calls=0
*/
void sub_b744d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb744d0ULL || rel >= 0xb745d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b745d0 size=224 callers=1 calls=0
*/
void sub_b745d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb745d0ULL || rel >= 0xb746b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b746b0 size=112 callers=1 calls=0
*/
void sub_b746b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb746b0ULL || rel >= 0xb74720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74720 size=64 callers=0 calls=0
   ref: bin/chara/table/skin_color_table.bin
*/
void skin_color_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74720ULL || rel >= 0xb74760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b74760 size=64 callers=2 calls=1
   calls: sub_ead190
*/
void sub_b74760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb74760ULL || rel >= 0xb747a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b747a0 size=32 callers=0 calls=0
*/
void sub_b747a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb747a0ULL || rel >= 0xb747c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b747c0 size=48 callers=0 calls=0
*/
void sub_b747c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb747c0ULL || rel >= 0xb747f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00b747f0 size=32 callers=0 calls=0
*/
void sub_b747f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb747f0ULL || rel >= 0xb74810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

