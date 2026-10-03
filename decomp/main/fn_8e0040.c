/* main functions 008e0040..008fce70 (70 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 008e0040 size=32 callers=5 calls=0
*/
void sub_8e0040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0040ULL || rel >= 0x8e0060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0060 size=32 callers=1 calls=0
*/
void sub_8e0060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0060ULL || rel >= 0x8e0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0080 size=272 callers=20 calls=3
   calls: sub_65c7c0, sub_8e16f0, sub_8e1aa0
*/
void sub_8e0080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0080ULL || rel >= 0x8e0190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0190 size=192 callers=5 calls=2
   calls: sub_65c7c0, sub_8e16f0
*/
void sub_8e0190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0190ULL || rel >= 0x8e0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0250 size=192 callers=9 calls=2
   calls: sub_65c7c0, sub_8e1aa0
*/
void sub_8e0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0250ULL || rel >= 0x8e0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0310 size=160 callers=1 calls=2
   calls: sub_65c7c0, sub_8e16f0
*/
void sub_8e0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0310ULL || rel >= 0x8e03b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e03b0 size=256 callers=4 calls=2
   calls: sub_8e16f0, sub_8e1aa0
*/
void sub_8e03b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e03b0ULL || rel >= 0x8e04b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e04b0 size=16 callers=1 calls=0
*/
void sub_8e04b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e04b0ULL || rel >= 0x8e04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e04c0 size=432 callers=4 calls=4
   calls: sub_5dd790, sub_5e2930, sub_5e2bc0, sub_76d0d0
   ref: bin/battle/regulation/regulation_preset_core_%d.bin
*/
void regulation_preset_core__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e04c0ULL || rel >= 0x8e0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0670 size=80 callers=10 calls=1
   calls: sub_65c7c0
*/
void sub_8e0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0670ULL || rel >= 0x8e06c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e06c0 size=80 callers=8 calls=1
   calls: sub_65c7c0
*/
void sub_8e06c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e06c0ULL || rel >= 0x8e0710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0710 size=32 callers=2 calls=0
*/
void sub_8e0710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0710ULL || rel >= 0x8e0730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0730 size=272 callers=21 calls=0
*/
void sub_8e0730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0730ULL || rel >= 0x8e0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0840 size=288 callers=11 calls=0
*/
void sub_8e0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0840ULL || rel >= 0x8e0960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0960 size=384 callers=19 calls=2
   calls: sub_67b990, sub_8e0840
*/
void sub_8e0960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0960ULL || rel >= 0x8e0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0ae0 size=32 callers=19 calls=0
*/
void sub_8e0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0ae0ULL || rel >= 0x8e0b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0b00 size=32 callers=6 calls=0
*/
void sub_8e0b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0b00ULL || rel >= 0x8e0b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0b20 size=64 callers=3 calls=0
*/
void sub_8e0b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0b20ULL || rel >= 0x8e0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0b60 size=32 callers=6 calls=0
*/
void sub_8e0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0b60ULL || rel >= 0x8e0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0b80 size=32 callers=4 calls=0
*/
void sub_8e0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0b80ULL || rel >= 0x8e0ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0ba0 size=192 callers=1 calls=0
*/
void sub_8e0ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0ba0ULL || rel >= 0x8e0c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0c60 size=208 callers=1 calls=0
*/
void sub_8e0c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0c60ULL || rel >= 0x8e0d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0d30 size=96 callers=2 calls=0
*/
void sub_8e0d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0d30ULL || rel >= 0x8e0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0d90 size=80 callers=1 calls=0
*/
void sub_8e0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0d90ULL || rel >= 0x8e0de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0de0 size=80 callers=1 calls=0
*/
void sub_8e0de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0de0ULL || rel >= 0x8e0e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0e30 size=64 callers=2 calls=0
*/
void sub_8e0e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0e30ULL || rel >= 0x8e0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0e70 size=64 callers=2 calls=0
*/
void sub_8e0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0e70ULL || rel >= 0x8e0eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0eb0 size=64 callers=2 calls=0
*/
void sub_8e0eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0eb0ULL || rel >= 0x8e0ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0ef0 size=64 callers=2 calls=0
*/
void sub_8e0ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0ef0ULL || rel >= 0x8e0f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0f30 size=32 callers=1 calls=0
*/
void sub_8e0f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0f30ULL || rel >= 0x8e0f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e0f50 size=1168 callers=1 calls=0
*/
void sub_8e0f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e0f50ULL || rel >= 0x8e13e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e13e0 size=80 callers=1 calls=0
*/
void sub_8e13e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e13e0ULL || rel >= 0x8e1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1430 size=48 callers=5 calls=1
   calls: sub_65c7c0
*/
void sub_8e1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1430ULL || rel >= 0x8e1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1460 size=48 callers=3 calls=1
   calls: sub_65c7c0
*/
void sub_8e1460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1460ULL || rel >= 0x8e1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1490 size=128 callers=3 calls=1
   calls: sub_8ddcc0
*/
void sub_8e1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1490ULL || rel >= 0x8e1510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1510 size=240 callers=0 calls=0
*/
void sub_8e1510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1510ULL || rel >= 0x8e1600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1600 size=16 callers=0 calls=0
*/
void sub_8e1600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1600ULL || rel >= 0x8e1610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1610 size=16 callers=0 calls=0
*/
void sub_8e1610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1610ULL || rel >= 0x8e1620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1620 size=160 callers=0 calls=2
   calls: sub_65c7c0, sub_8e16f0
*/
void sub_8e1620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1620ULL || rel >= 0x8e16c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e16c0 size=16 callers=0 calls=0
*/
void sub_8e16c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e16c0ULL || rel >= 0x8e16d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e16d0 size=16 callers=0 calls=0
*/
void sub_8e16d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e16d0ULL || rel >= 0x8e16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e16e0 size=16 callers=0 calls=0
*/
void sub_8e16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e16e0ULL || rel >= 0x8e16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e16f0 size=272 callers=5 calls=1
   calls: sub_5e2350
*/
void sub_8e16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e16f0ULL || rel >= 0x8e1800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1800 size=80 callers=0 calls=0
*/
void sub_8e1800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1800ULL || rel >= 0x8e1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1850 size=240 callers=0 calls=0
*/
void sub_8e1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1850ULL || rel >= 0x8e1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1940 size=80 callers=0 calls=0
*/
void sub_8e1940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1940ULL || rel >= 0x8e1990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1990 size=80 callers=0 calls=0
*/
void sub_8e1990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1990ULL || rel >= 0x8e19e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e19e0 size=16 callers=0 calls=0
*/
void sub_8e19e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e19e0ULL || rel >= 0x8e19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e19f0 size=16 callers=0 calls=0
*/
void sub_8e19f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e19f0ULL || rel >= 0x8e1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1a00 size=80 callers=0 calls=0
*/
void sub_8e1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1a00ULL || rel >= 0x8e1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1a50 size=80 callers=0 calls=0
*/
void sub_8e1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1a50ULL || rel >= 0x8e1aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1aa0 size=272 callers=3 calls=1
   calls: sub_5e2350
*/
void sub_8e1aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1aa0ULL || rel >= 0x8e1bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1bb0 size=80 callers=0 calls=0
*/
void sub_8e1bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1bb0ULL || rel >= 0x8e1c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1c00 size=240 callers=0 calls=0
*/
void sub_8e1c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1c00ULL || rel >= 0x8e1cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1cf0 size=80 callers=0 calls=0
*/
void sub_8e1cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1cf0ULL || rel >= 0x8e1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1d40 size=80 callers=0 calls=0
*/
void sub_8e1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1d40ULL || rel >= 0x8e1d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1d90 size=16 callers=0 calls=0
*/
void sub_8e1d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1d90ULL || rel >= 0x8e1da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1da0 size=16 callers=0 calls=0
*/
void sub_8e1da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1da0ULL || rel >= 0x8e1db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1db0 size=80 callers=0 calls=0
*/
void sub_8e1db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1db0ULL || rel >= 0x8e1e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1e00 size=80 callers=0 calls=0
*/
void sub_8e1e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1e00ULL || rel >= 0x8e1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1e50 size=160 callers=1 calls=1
   calls: sub_8e1ef0
*/
void sub_8e1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1e50ULL || rel >= 0x8e1ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e1ef0 size=288 callers=2 calls=3
   calls: sub_8e3540, sub_c38350, sub_e9db40
*/
void sub_8e1ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e1ef0ULL || rel >= 0x8e2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e2010 size=416 callers=0 calls=1
   calls: sub_fc25f0
*/
void sub_8e2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e2010ULL || rel >= 0x8e21b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e21b0 size=16 callers=0 calls=0
*/
void sub_8e21b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e21b0ULL || rel >= 0x8e21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e21c0 size=16 callers=0 calls=0
*/
void sub_8e21c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e21c0ULL || rel >= 0x8e21d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e21d0 size=16 callers=0 calls=0
*/
void sub_8e21d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e21d0ULL || rel >= 0x8e21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e21e0 size=16 callers=0 calls=0
*/
void sub_8e21e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e21e0ULL || rel >= 0x8e21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e21f0 size=16 callers=0 calls=0
*/
void sub_8e21f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e21f0ULL || rel >= 0x8e2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e2200 size=16 callers=0 calls=0
*/
void sub_8e2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e2200ULL || rel >= 0x8e2210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e2210 size=288 callers=0 calls=1
   calls: sub_783bd0
*/
void sub_8e2210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e2210ULL || rel >= 0x8e2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e2330 size=16 callers=0 calls=0
*/
void sub_8e2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e2330ULL || rel >= 0x8e2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e2340 size=2624 callers=0 calls=15
   calls: regulation_preset_core__d, sub_142b3f0, sub_14e0350, sub_14e0450, sub_14e0750, sub_14e0840, sub_8cff30, sub_8dfd80, sub_8e2d80, sub_8e2f20, sub_8e30b0, sub_8e38b0
   ... +3 more
*/
void sub_8e2340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e2340ULL || rel >= 0x8e2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e2d80 size=416 callers=1 calls=3
   calls: sub_672c10, sub_8e38f0, sub_c386f0
*/
void sub_8e2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e2d80ULL || rel >= 0x8e2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e2f20 size=400 callers=2 calls=5
   calls: sub_785960, sub_8ddc00, sub_8dde50, sub_8ded40, sub_8def00
*/
void sub_8e2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e2f20ULL || rel >= 0x8e30b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e30b0 size=816 callers=1 calls=0
*/
void sub_8e30b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e30b0ULL || rel >= 0x8e33e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e33e0 size=16 callers=0 calls=0
*/
void sub_8e33e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e33e0ULL || rel >= 0x8e33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e33f0 size=16 callers=0 calls=0
*/
void sub_8e33f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e33f0ULL || rel >= 0x8e3400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e3400 size=16 callers=0 calls=0
*/
void sub_8e3400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e3400ULL || rel >= 0x8e3410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e3410 size=304 callers=0 calls=0
*/
void sub_8e3410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e3410ULL || rel >= 0x8e3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e3540 size=752 callers=1 calls=2
   calls: sub_1435450, sub_e9d130
*/
void sub_8e3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e3540ULL || rel >= 0x8e3830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e3830 size=128 callers=0 calls=0
*/
void sub_8e3830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e3830ULL || rel >= 0x8e38b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e38b0 size=64 callers=2 calls=0
*/
void sub_8e38b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e38b0ULL || rel >= 0x8e38f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e38f0 size=96 callers=1 calls=2
   calls: sub_8e3950, sub_e7b660
*/
void sub_8e38f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e38f0ULL || rel >= 0x8e3950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e3950 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_8e5780, sub_e7b5e0
*/
void sub_8e3950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e3950ULL || rel >= 0x8e3a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e3a30 size=1424 callers=0 calls=12
   calls: sub_78f150, sub_78f240, sub_79b250, sub_8e3fc0, sub_8e5870, sub_8e59a0, sub_8e5d80, sub_8e6310, sub_8e7010, sub_e7c0f0, sub_e7e890, sub_e7eb40
   ref: ViewBattletowerSelectmode
   ref: ViewMessage
   ref: common/btl_bgm_select.dat
   ref: common/tips.dat
*/
void ViewBattletowerSelectmode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e3a30ULL || rel >= 0x8e3fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e3fc0 size=400 callers=1 calls=3
   calls: sub_8e5870, sub_8e6f50, sub_e7c160
*/
void sub_8e3fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e3fc0ULL || rel >= 0x8e4150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e4150 size=16 callers=0 calls=0
*/
void sub_8e4150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e4150ULL || rel >= 0x8e4160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e4160 size=48 callers=0 calls=1
   calls: sub_8e4190
*/
void sub_8e4160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e4160ULL || rel >= 0x8e4190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e4190 size=720 callers=1 calls=8
   calls: sub_5cfad0, sub_67b990, sub_67d450, sub_8e4900, sub_e7c160, sub_e7eb10, sub_ebc300, sub_ebc990
*/
void sub_8e4190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e4190ULL || rel >= 0x8e4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e4460 size=1184 callers=0 calls=9
   calls: sub_5cfad0, sub_67b990, sub_67d450, sub_795bc0, sub_e7c160, sub_e7eb10, sub_eb7570, sub_eb75e0, sub_eb7730
*/
void sub_8e4460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e4460ULL || rel >= 0x8e4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e4900 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8e4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e4900ULL || rel >= 0x8e4a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e4a50 size=16 callers=0 calls=0
*/
void sub_8e4a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e4a50ULL || rel >= 0x8e4a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e4a60 size=784 callers=0 calls=6
   calls: sub_8e5870, sub_8e6890, sub_8e69d0, sub_8e6b10, sub_8e6c50, sub_e7c160
*/
void sub_8e4a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e4a60ULL || rel >= 0x8e4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e4d70 size=32 callers=0 calls=1
   calls: sub_8e4d90
*/
void sub_8e4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e4d70ULL || rel >= 0x8e4d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e4d90 size=256 callers=1 calls=1
   calls: sub_8e5870
*/
void sub_8e4d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e4d90ULL || rel >= 0x8e4e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e4e90 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_8e4e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e4e90ULL || rel >= 0x8e5030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5030 size=16 callers=0 calls=0
*/
void sub_8e5030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5030ULL || rel >= 0x8e5040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5040 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_8e5040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5040ULL || rel >= 0x8e50f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e50f0 size=16 callers=0 calls=0
*/
void sub_8e50f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e50f0ULL || rel >= 0x8e5100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5100 size=16 callers=0 calls=0
*/
void sub_8e5100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5100ULL || rel >= 0x8e5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5110 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_8e5110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5110ULL || rel >= 0x8e51c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e51c0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_8e51c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e51c0ULL || rel >= 0x8e5270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5270 size=16 callers=0 calls=0
*/
void sub_8e5270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5270ULL || rel >= 0x8e5280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5280 size=16 callers=0 calls=0
*/
void sub_8e5280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5280ULL || rel >= 0x8e5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5290 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_8e5290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5290ULL || rel >= 0x8e5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5310 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_8e5310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5310ULL || rel >= 0x8e5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5480 size=96 callers=0 calls=1
   calls: sub_8e56a0
*/
void sub_8e5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5480ULL || rel >= 0x8e54e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e54e0 size=16 callers=0 calls=0
*/
void sub_8e54e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e54e0ULL || rel >= 0x8e54f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e54f0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_8e54f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e54f0ULL || rel >= 0x8e5590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5590 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_8e5590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5590ULL || rel >= 0x8e5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5650 size=16 callers=0 calls=0
*/
void sub_8e5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5650ULL || rel >= 0x8e5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5660 size=16 callers=0 calls=0
*/
void sub_8e5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5660ULL || rel >= 0x8e5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5670 size=16 callers=0 calls=0
*/
void sub_8e5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5670ULL || rel >= 0x8e5680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5680 size=32 callers=0 calls=0
*/
void sub_8e5680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5680ULL || rel >= 0x8e56a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e56a0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_8e56a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e56a0ULL || rel >= 0x8e5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5780 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_8e5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5780ULL || rel >= 0x8e5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5870 size=304 callers=6 calls=0
*/
void sub_8e5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5870ULL || rel >= 0x8e59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e59a0 size=288 callers=1 calls=2
   calls: sub_8e5ac0, sub_e809c0
*/
void sub_8e59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e59a0ULL || rel >= 0x8e5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5ac0 size=704 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_8e5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5ac0ULL || rel >= 0x8e5d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5d80 size=288 callers=1 calls=2
   calls: sub_8e5ea0, sub_e809c0
*/
void sub_8e5d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5d80ULL || rel >= 0x8e5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e5ea0 size=384 callers=1 calls=3
   calls: sub_790490, sub_8e6020, sub_e7fe20
*/
void sub_8e5ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e5ea0ULL || rel >= 0x8e6020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6020 size=336 callers=1 calls=2
   calls: anonymous_2, sub_ea46c0
*/
void sub_8e6020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6020ULL || rel >= 0x8e6170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6170 size=16 callers=0 calls=0
*/
void sub_8e6170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6170ULL || rel >= 0x8e6180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6180 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_8e6180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6180ULL || rel >= 0x8e61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e61f0 size=16 callers=0 calls=0
*/
void sub_8e61f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e61f0ULL || rel >= 0x8e6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6200 size=16 callers=0 calls=0
*/
void sub_8e6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6200ULL || rel >= 0x8e6210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6210 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_8e6210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6210ULL || rel >= 0x8e6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6280 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_8e6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6280ULL || rel >= 0x8e62f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e62f0 size=16 callers=0 calls=0
*/
void sub_8e62f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e62f0ULL || rel >= 0x8e6300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6300 size=16 callers=0 calls=0
*/
void sub_8e6300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6300ULL || rel >= 0x8e6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6310 size=288 callers=1 calls=2
   calls: sub_8e6430, sub_e809c0
*/
void sub_8e6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6310ULL || rel >= 0x8e6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6430 size=384 callers=1 calls=3
   calls: sub_790490, sub_8e65b0, sub_e7fe20
*/
void sub_8e6430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6430ULL || rel >= 0x8e65b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e65b0 size=400 callers=1 calls=1
   calls: anonymous_2
*/
void sub_8e65b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e65b0ULL || rel >= 0x8e6740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6740 size=48 callers=0 calls=0
*/
void sub_8e6740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6740ULL || rel >= 0x8e6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6770 size=64 callers=0 calls=0
*/
void sub_8e6770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6770ULL || rel >= 0x8e67b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e67b0 size=32 callers=0 calls=0
*/
void sub_8e67b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e67b0ULL || rel >= 0x8e67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e67d0 size=16 callers=0 calls=0
*/
void sub_8e67d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e67d0ULL || rel >= 0x8e67e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e67e0 size=64 callers=0 calls=1
   calls: sub_67d450
*/
void sub_8e67e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e67e0ULL || rel >= 0x8e6820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6820 size=64 callers=0 calls=0
*/
void sub_8e6820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6820ULL || rel >= 0x8e6860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6860 size=32 callers=0 calls=0
*/
void sub_8e6860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6860ULL || rel >= 0x8e6880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6880 size=16 callers=0 calls=0
*/
void sub_8e6880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6880ULL || rel >= 0x8e6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6890 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_8e6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6890ULL || rel >= 0x8e69d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e69d0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_8e69d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e69d0ULL || rel >= 0x8e6b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6b10 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_8e6b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6b10ULL || rel >= 0x8e6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6c50 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_8e6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6c50ULL || rel >= 0x8e6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6d90 size=400 callers=0 calls=5
   calls: sub_67b990, sub_67d450, sub_e7eb10, sub_e7f7c0, sub_eb8930
*/
void sub_8e6d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6d90ULL || rel >= 0x8e6f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6f20 size=48 callers=1 calls=1
   calls: sub_eb8a30
*/
void sub_8e6f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6f20ULL || rel >= 0x8e6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6f50 size=64 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_8e6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6f50ULL || rel >= 0x8e6f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6f90 size=16 callers=0 calls=0
*/
void sub_8e6f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6f90ULL || rel >= 0x8e6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6fa0 size=16 callers=0 calls=0
*/
void sub_8e6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6fa0ULL || rel >= 0x8e6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6fb0 size=16 callers=0 calls=0
*/
void sub_8e6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6fb0ULL || rel >= 0x8e6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6fc0 size=16 callers=0 calls=0
*/
void sub_8e6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6fc0ULL || rel >= 0x8e6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6fd0 size=16 callers=0 calls=0
*/
void sub_8e6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6fd0ULL || rel >= 0x8e6fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6fe0 size=16 callers=0 calls=0
*/
void sub_8e6fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6fe0ULL || rel >= 0x8e6ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e6ff0 size=16 callers=0 calls=0
*/
void sub_8e6ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e6ff0ULL || rel >= 0x8e7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e7000 size=16 callers=0 calls=0
*/
void sub_8e7000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e7000ULL || rel >= 0x8e7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e7010 size=112 callers=1 calls=0
*/
void sub_8e7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e7010ULL || rel >= 0x8e7080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e7080 size=80 callers=1 calls=0
*/
void sub_8e7080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e7080ULL || rel >= 0x8e70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e70d0 size=912 callers=0 calls=11
   calls: L_rank_gauge_00, sub_14aad40, sub_14d9790, sub_14e1a00, sub_8e38b0, sub_8e7460, sub_8e7620, sub_8e7c70, sub_8e7dd0, sub_e7eb10, sub_e7f7c0
   ref: L_rank_00
*/
void L_rank_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e70d0ULL || rel >= 0x8e7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e7460 size=448 callers=1 calls=3
   calls: sub_8f19b0, sub_e7eb10, sub_e7f7c0
*/
void sub_8e7460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e7460ULL || rel >= 0x8e7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e7620 size=1104 callers=1 calls=6
   calls: sub_14e6510, sub_14e6550, sub_8e7f30, sub_e83e60, sub_e84190, sub_e84310
*/
void sub_8e7620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e7620ULL || rel >= 0x8e7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e7a70 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/btl_tower/bin/btltower_rule_00_uikit.bin
   ref: bin/appli/btl_tower/bin/btltower_rule_00_lyt.bin
*/
void btltower_rule_00_uikit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e7a70ULL || rel >= 0x8e7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e7c50 size=32 callers=0 calls=1
   calls: sub_14d9c40
*/
void sub_8e7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e7c50ULL || rel >= 0x8e7c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e7c70 size=352 callers=2 calls=5
   calls: sub_14ac040, sub_67d450, sub_e7eb10, sub_e7f7c0, sub_ec8f00
*/
void sub_8e7c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e7c70ULL || rel >= 0x8e7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e7dd0 size=352 callers=2 calls=5
   calls: sub_1315b90, sub_14ac370, sub_67d450, sub_e7eb10, sub_e7f7c0
*/
void sub_8e7dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e7dd0ULL || rel >= 0x8e7f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e7f30 size=304 callers=2 calls=2
   calls: sub_5cfad0, sub_e83e60
*/
void sub_8e7f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e7f30ULL || rel >= 0x8e8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8060 size=64 callers=0 calls=0
*/
void sub_8e8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8060ULL || rel >= 0x8e80a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e80a0 size=64 callers=0 calls=0
*/
void sub_8e80a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e80a0ULL || rel >= 0x8e80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e80e0 size=64 callers=1 calls=1
   calls: sub_14e1a30
*/
void sub_8e80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e80e0ULL || rel >= 0x8e8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8120 size=256 callers=0 calls=0
*/
void sub_8e8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8120ULL || rel >= 0x8e8220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8220 size=16 callers=0 calls=0
*/
void sub_8e8220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8220ULL || rel >= 0x8e8230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8230 size=16 callers=0 calls=0
*/
void sub_8e8230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8230ULL || rel >= 0x8e8240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8240 size=16 callers=0 calls=0
*/
void sub_8e8240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8240ULL || rel >= 0x8e8250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8250 size=16 callers=0 calls=0
*/
void sub_8e8250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8250ULL || rel >= 0x8e8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8260 size=16 callers=0 calls=0
*/
void sub_8e8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8260ULL || rel >= 0x8e8270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8270 size=16 callers=0 calls=0
*/
void sub_8e8270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8270ULL || rel >= 0x8e8280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8280 size=16 callers=0 calls=0
*/
void sub_8e8280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8280ULL || rel >= 0x8e8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8290 size=16 callers=0 calls=0
*/
void sub_8e8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8290ULL || rel >= 0x8e82a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e82a0 size=304 callers=0 calls=0
*/
void sub_8e82a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e82a0ULL || rel >= 0x8e83d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e83d0 size=208 callers=0 calls=2
   calls: sub_14d9790, sub_8e7dd0
*/
void sub_8e83d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e83d0ULL || rel >= 0x8e84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e84a0 size=16 callers=0 calls=0
*/
void sub_8e84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e84a0ULL || rel >= 0x8e84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e84b0 size=16 callers=0 calls=0
*/
void sub_8e84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e84b0ULL || rel >= 0x8e84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e84c0 size=16 callers=0 calls=0
*/
void sub_8e84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e84c0ULL || rel >= 0x8e84d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e84d0 size=96 callers=0 calls=0
*/
void sub_8e84d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e84d0ULL || rel >= 0x8e8530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8530 size=16 callers=0 calls=0
*/
void sub_8e8530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8530ULL || rel >= 0x8e8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8540 size=16 callers=0 calls=0
*/
void sub_8e8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8540ULL || rel >= 0x8e8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8550 size=16 callers=0 calls=0
*/
void sub_8e8550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8550ULL || rel >= 0x8e8560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8560 size=80 callers=0 calls=0
*/
void sub_8e8560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8560ULL || rel >= 0x8e85b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e85b0 size=16 callers=0 calls=0
*/
void sub_8e85b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e85b0ULL || rel >= 0x8e85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e85c0 size=16 callers=0 calls=0
*/
void sub_8e85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e85c0ULL || rel >= 0x8e85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e85d0 size=16 callers=0 calls=0
*/
void sub_8e85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e85d0ULL || rel >= 0x8e85e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e85e0 size=80 callers=0 calls=3
   calls: sub_8e7c70, sub_ec9400, sub_ec9430
*/
void sub_8e85e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e85e0ULL || rel >= 0x8e8630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8630 size=16 callers=0 calls=0
*/
void sub_8e8630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8630ULL || rel >= 0x8e8640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8640 size=16 callers=0 calls=0
*/
void sub_8e8640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8640ULL || rel >= 0x8e8650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8650 size=16 callers=0 calls=0
*/
void sub_8e8650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8650ULL || rel >= 0x8e8660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8660 size=176 callers=0 calls=5
   calls: sub_8e5870, sub_8e7080, sub_8e8f80, sub_d0c0, sub_eb6230
   ref: statebattletowerin
*/
void statebattletowerin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8660ULL || rel >= 0x8e8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8710 size=32 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_8e8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8710ULL || rel >= 0x8e8730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8730 size=16 callers=0 calls=0
*/
void sub_8e8730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8730ULL || rel >= 0x8e8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8740 size=160 callers=0 calls=0
*/
void sub_8e8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8740ULL || rel >= 0x8e87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e87e0 size=16 callers=0 calls=0
*/
void sub_8e87e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e87e0ULL || rel >= 0x8e87f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e87f0 size=160 callers=0 calls=0
*/
void sub_8e87f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e87f0ULL || rel >= 0x8e8890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8890 size=160 callers=0 calls=0
*/
void sub_8e8890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8890ULL || rel >= 0x8e8930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8930 size=16 callers=0 calls=0
*/
void sub_8e8930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8930ULL || rel >= 0x8e8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8940 size=16 callers=0 calls=0
*/
void sub_8e8940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8940ULL || rel >= 0x8e8950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8950 size=160 callers=0 calls=0
*/
void sub_8e8950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8950ULL || rel >= 0x8e89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e89f0 size=160 callers=0 calls=0
*/
void sub_8e89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e89f0ULL || rel >= 0x8e8a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8a90 size=160 callers=0 calls=0
*/
void sub_8e8a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8a90ULL || rel >= 0x8e8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8b30 size=160 callers=0 calls=0
*/
void sub_8e8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8b30ULL || rel >= 0x8e8bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8bd0 size=160 callers=0 calls=0
*/
void sub_8e8bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8bd0ULL || rel >= 0x8e8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8c70 size=160 callers=0 calls=0
*/
void sub_8e8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8c70ULL || rel >= 0x8e8d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8d10 size=160 callers=0 calls=0
*/
void sub_8e8d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8d10ULL || rel >= 0x8e8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8db0 size=160 callers=0 calls=0
*/
void sub_8e8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8db0ULL || rel >= 0x8e8e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8e50 size=304 callers=0 calls=0
*/
void sub_8e8e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8e50ULL || rel >= 0x8e8f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e8f80 size=656 callers=4 calls=6
   calls: sub_5cfad0, sub_795bc0, sub_8e4900, sub_8e9210, sub_8e9360, sub_c39c40
*/
void sub_8e8f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e8f80ULL || rel >= 0x8e9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9210 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8e9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9210ULL || rel >= 0x8e9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9360 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8e9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9360ULL || rel >= 0x8e94b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e94b0 size=112 callers=0 calls=5
   calls: sub_8e6f20, sub_8e8f80, sub_d0c0, sub_eb6230, sub_eb77f0
   ref: statebattletowerout
*/
void statebattletowerout(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e94b0ULL || rel >= 0x8e9520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9520 size=64 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_8e9520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9520ULL || rel >= 0x8e9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9560 size=16 callers=0 calls=0
*/
void sub_8e9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9560ULL || rel >= 0x8e9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9570 size=160 callers=0 calls=0
*/
void sub_8e9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9570ULL || rel >= 0x8e9610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9610 size=160 callers=0 calls=0
*/
void sub_8e9610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9610ULL || rel >= 0x8e96b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e96b0 size=160 callers=0 calls=0
*/
void sub_8e96b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e96b0ULL || rel >= 0x8e9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9750 size=160 callers=0 calls=0
*/
void sub_8e9750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9750ULL || rel >= 0x8e97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e97f0 size=160 callers=0 calls=0
*/
void sub_8e97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e97f0ULL || rel >= 0x8e9890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9890 size=112 callers=0 calls=4
   calls: sub_8e8f80, sub_d0c0, sub_e807f0, sub_eb6230
   ref: statebattletowershowhelp
*/
void statebattletowershowhelp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9890ULL || rel >= 0x8e9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9900 size=16 callers=0 calls=0
*/
void sub_8e9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9900ULL || rel >= 0x8e9910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9910 size=16 callers=0 calls=0
*/
void sub_8e9910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9910ULL || rel >= 0x8e9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9920 size=160 callers=0 calls=0
*/
void sub_8e9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9920ULL || rel >= 0x8e99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e99c0 size=160 callers=0 calls=0
*/
void sub_8e99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e99c0ULL || rel >= 0x8e9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9a60 size=160 callers=0 calls=0
*/
void sub_8e9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9a60ULL || rel >= 0x8e9b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9b00 size=160 callers=0 calls=0
*/
void sub_8e9b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9b00ULL || rel >= 0x8e9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9ba0 size=160 callers=0 calls=0
*/
void sub_8e9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9ba0ULL || rel >= 0x8e9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9c40 size=128 callers=0 calls=5
   calls: sub_8e80e0, sub_8e8f80, sub_d0c0, sub_e80580, sub_e807f0
   ref: statebattletowerselectmode
*/
void statebattletowerselectmode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9c40ULL || rel >= 0x8e9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9cc0 size=144 callers=0 calls=1
   calls: sub_8e5870
*/
void sub_8e9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9cc0ULL || rel >= 0x8e9d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9d50 size=16 callers=0 calls=0
*/
void sub_8e9d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9d50ULL || rel >= 0x8e9d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9d60 size=160 callers=0 calls=0
*/
void sub_8e9d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9d60ULL || rel >= 0x8e9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9e00 size=160 callers=0 calls=0
*/
void sub_8e9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9e00ULL || rel >= 0x8e9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9ea0 size=160 callers=0 calls=0
*/
void sub_8e9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9ea0ULL || rel >= 0x8e9f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9f40 size=160 callers=0 calls=0
*/
void sub_8e9f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9f40ULL || rel >= 0x8e9fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008e9fe0 size=160 callers=0 calls=0
*/
void sub_8e9fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8e9fe0ULL || rel >= 0x8ea080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ea080 size=464 callers=0 calls=5
   calls: sub_8eb250, sub_8eb3a0, sub_8eb4f0, sub_8eb640, sub_8eb790
   ref: SpectatorViewName
   ref: BossView
   ref: CommonBGView
   ref: RemainTimeView
   ref: TopView
*/
void SpectatorViewName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ea080ULL || rel >= 0x8ea250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ea250 size=96 callers=1 calls=0
*/
void sub_8ea250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ea250ULL || rel >= 0x8ea2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ea2b0 size=240 callers=0 calls=3
   calls: sub_8ef140, sub_8faa60, sub_905af0
*/
void sub_8ea2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ea2b0ULL || rel >= 0x8ea3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ea3a0 size=16 callers=1 calls=0
*/
void sub_8ea3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ea3a0ULL || rel >= 0x8ea3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ea3b0 size=224 callers=1 calls=4
   calls: sub_8ef110, sub_8fa9a0, sub_9059f0, sub_e806b0
*/
void sub_8ea3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ea3b0ULL || rel >= 0x8ea490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ea490 size=192 callers=1 calls=4
   calls: sub_8ef110, sub_8fa9a0, sub_9059f0, sub_e806b0
*/
void sub_8ea490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ea490ULL || rel >= 0x8ea550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ea550 size=128 callers=1 calls=1
   calls: sub_eb6530
*/
void sub_8ea550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ea550ULL || rel >= 0x8ea5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ea5d0 size=128 callers=1 calls=1
   calls: sub_905d70
*/
void sub_8ea5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ea5d0ULL || rel >= 0x8ea650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ea650 size=96 callers=8 calls=0
*/
void sub_8ea650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ea650ULL || rel >= 0x8ea6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ea6b0 size=96 callers=1 calls=0
*/
void sub_8ea6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ea6b0ULL || rel >= 0x8ea710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ea710 size=1360 callers=22 calls=12
   calls: sub_8ed2e0, sub_8ef110, sub_8ef940, sub_8f43e0, sub_8f9e10, sub_8fa8e0, sub_8fa940, sub_8fa9a0, sub_9059f0, sub_905d70, sub_906540, sub_e806b0
*/
void sub_8ea710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ea710ULL || rel >= 0x8eac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eac60 size=128 callers=0 calls=1
   calls: sub_8eb3a0
   ref: BossView
*/
void BossView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eac60ULL || rel >= 0x8eace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eace0 size=16 callers=0 calls=0
*/
void sub_8eace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eace0ULL || rel >= 0x8eacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eacf0 size=16 callers=0 calls=0
*/
void sub_8eacf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eacf0ULL || rel >= 0x8ead00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ead00 size=16 callers=0 calls=0
*/
void sub_8ead00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ead00ULL || rel >= 0x8ead10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ead10 size=128 callers=0 calls=1
   calls: sub_8eb8e0
   ref: TokuseiView
*/
void TokuseiView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ead10ULL || rel >= 0x8ead90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ead90 size=128 callers=1 calls=1
   calls: sub_8ebc70
*/
void sub_8ead90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ead90ULL || rel >= 0x8eae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eae10 size=64 callers=0 calls=1
   calls: sub_8ebc70
*/
void sub_8eae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eae10ULL || rel >= 0x8eae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eae50 size=64 callers=0 calls=1
   calls: sub_8ebc70
*/
void sub_8eae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eae50ULL || rel >= 0x8eae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eae90 size=64 callers=0 calls=1
   calls: sub_8ebc70
*/
void sub_8eae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eae90ULL || rel >= 0x8eaed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eaed0 size=112 callers=0 calls=1
   calls: sub_8ebc70
*/
void sub_8eaed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eaed0ULL || rel >= 0x8eaf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eaf40 size=64 callers=0 calls=1
   calls: sub_8ebc70
*/
void sub_8eaf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eaf40ULL || rel >= 0x8eaf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eaf80 size=176 callers=0 calls=1
   calls: sub_8ebc70
*/
void sub_8eaf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eaf80ULL || rel >= 0x8eb030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb030 size=80 callers=0 calls=1
   calls: sub_900780
*/
void sub_8eb030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb030ULL || rel >= 0x8eb080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb080 size=128 callers=0 calls=1
   calls: sub_8eb4f0
   ref: RemainTimeView
*/
void RemainTimeView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb080ULL || rel >= 0x8eb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb100 size=64 callers=1 calls=0
*/
void sub_8eb100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb100ULL || rel >= 0x8eb140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb140 size=128 callers=0 calls=1
   calls: sub_8eba30
   ref: FogView
*/
void FogView(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb140ULL || rel >= 0x8eb1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb1c0 size=32 callers=0 calls=0
*/
void sub_8eb1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb1c0ULL || rel >= 0x8eb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb1e0 size=16 callers=0 calls=0
*/
void sub_8eb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb1e0ULL || rel >= 0x8eb1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb1f0 size=16 callers=0 calls=0
*/
void sub_8eb1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb1f0ULL || rel >= 0x8eb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb200 size=16 callers=0 calls=0
*/
void sub_8eb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb200ULL || rel >= 0x8eb210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb210 size=16 callers=0 calls=0
*/
void sub_8eb210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb210ULL || rel >= 0x8eb220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb220 size=16 callers=0 calls=0
*/
void sub_8eb220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb220ULL || rel >= 0x8eb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb230 size=16 callers=0 calls=0
*/
void sub_8eb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb230ULL || rel >= 0x8eb240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb240 size=16 callers=0 calls=0
*/
void sub_8eb240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb240ULL || rel >= 0x8eb250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb250 size=336 callers=4 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8eb250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb250ULL || rel >= 0x8eb3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb3a0 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8eb3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb3a0ULL || rel >= 0x8eb4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb4f0 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8eb4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb4f0ULL || rel >= 0x8eb640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb640 size=336 callers=2 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8eb640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb640ULL || rel >= 0x8eb790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb790 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8eb790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb790ULL || rel >= 0x8eb8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eb8e0 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8eb8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eb8e0ULL || rel >= 0x8eba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eba30 size=336 callers=1 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_8eba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eba30ULL || rel >= 0x8ebb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ebb80 size=240 callers=0 calls=0
*/
void sub_8ebb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ebb80ULL || rel >= 0x8ebc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ebc70 size=32 callers=11 calls=0
*/
void sub_8ebc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ebc70ULL || rel >= 0x8ebc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ebc90 size=112 callers=1 calls=0
*/
void sub_8ebc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ebc90ULL || rel >= 0x8ebd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ebd00 size=272 callers=6 calls=0
*/
void sub_8ebd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ebd00ULL || rel >= 0x8ebe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ebe10 size=320 callers=1 calls=2
   calls: sub_1350f70, sub_7847d0
*/
void sub_8ebe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ebe10ULL || rel >= 0x8ebf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ebf50 size=128 callers=3 calls=3
   calls: sub_7ef2b0, sub_7ef630, sub_7ef6a0
*/
void sub_8ebf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ebf50ULL || rel >= 0x8ebfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ebfd0 size=16 callers=3 calls=0
*/
void sub_8ebfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ebfd0ULL || rel >= 0x8ebfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ebfe0 size=432 callers=8 calls=4
   calls: sub_1314a80, sub_14ac370, sub_67bdc0, sub_67d450
*/
void sub_8ebfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ebfe0ULL || rel >= 0x8ec190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec190 size=240 callers=0 calls=0
*/
void sub_8ec190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec190ULL || rel >= 0x8ec280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec280 size=192 callers=0 calls=0
*/
void sub_8ec280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec280ULL || rel >= 0x8ec340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec340 size=96 callers=1 calls=0
*/
void sub_8ec340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec340ULL || rel >= 0x8ec3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec3a0 size=240 callers=0 calls=0
*/
void sub_8ec3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec3a0ULL || rel >= 0x8ec490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec490 size=48 callers=0 calls=0
*/
void sub_8ec490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec490ULL || rel >= 0x8ec4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec4c0 size=16 callers=0 calls=0
*/
void sub_8ec4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec4c0ULL || rel >= 0x8ec4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec4d0 size=16 callers=0 calls=0
*/
void sub_8ec4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec4d0ULL || rel >= 0x8ec4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec4e0 size=48 callers=0 calls=0
*/
void sub_8ec4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec4e0ULL || rel >= 0x8ec510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec510 size=48 callers=0 calls=0
*/
void sub_8ec510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec510ULL || rel >= 0x8ec540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec540 size=16 callers=0 calls=0
*/
void sub_8ec540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec540ULL || rel >= 0x8ec550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec550 size=16 callers=0 calls=0
*/
void sub_8ec550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec550ULL || rel >= 0x8ec560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec560 size=48 callers=0 calls=0
*/
void sub_8ec560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec560ULL || rel >= 0x8ec590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec590 size=240 callers=0 calls=0
*/
void sub_8ec590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec590ULL || rel >= 0x8ec680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec680 size=48 callers=0 calls=0
*/
void sub_8ec680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec680ULL || rel >= 0x8ec6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec6b0 size=64 callers=0 calls=0
*/
void sub_8ec6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec6b0ULL || rel >= 0x8ec6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec6f0 size=16 callers=0 calls=0
*/
void sub_8ec6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec6f0ULL || rel >= 0x8ec700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec700 size=240 callers=0 calls=0
*/
void sub_8ec700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec700ULL || rel >= 0x8ec7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec7f0 size=16 callers=0 calls=0
*/
void sub_8ec7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec7f0ULL || rel >= 0x8ec800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec800 size=48 callers=0 calls=0
*/
void sub_8ec800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec800ULL || rel >= 0x8ec830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec830 size=16 callers=0 calls=0
*/
void sub_8ec830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec830ULL || rel >= 0x8ec840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec840 size=16 callers=0 calls=0
*/
void sub_8ec840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec840ULL || rel >= 0x8ec850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec850 size=64 callers=0 calls=0
*/
void sub_8ec850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec850ULL || rel >= 0x8ec890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec890 size=16 callers=1 calls=0
*/
void sub_8ec890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec890ULL || rel >= 0x8ec8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec8a0 size=16 callers=0 calls=0
*/
void sub_8ec8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec8a0ULL || rel >= 0x8ec8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec8b0 size=16 callers=0 calls=0
*/
void sub_8ec8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec8b0ULL || rel >= 0x8ec8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec8c0 size=32 callers=0 calls=0
*/
void sub_8ec8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec8c0ULL || rel >= 0x8ec8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec8e0 size=32 callers=0 calls=0
*/
void sub_8ec8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec8e0ULL || rel >= 0x8ec900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec900 size=16 callers=0 calls=0
*/
void sub_8ec900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec900ULL || rel >= 0x8ec910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec910 size=32 callers=0 calls=0
*/
void sub_8ec910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec910ULL || rel >= 0x8ec930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec930 size=16 callers=0 calls=0
*/
void sub_8ec930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec930ULL || rel >= 0x8ec940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec940 size=16 callers=0 calls=0
*/
void sub_8ec940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec940ULL || rel >= 0x8ec950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec950 size=16 callers=0 calls=0
*/
void sub_8ec950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec950ULL || rel >= 0x8ec960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec960 size=16 callers=0 calls=0
*/
void sub_8ec960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec960ULL || rel >= 0x8ec970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec970 size=16 callers=0 calls=0
*/
void sub_8ec970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec970ULL || rel >= 0x8ec980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec980 size=16 callers=0 calls=0
*/
void sub_8ec980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec980ULL || rel >= 0x8ec990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec990 size=80 callers=0 calls=1
   calls: sub_8eca00
*/
void sub_8ec990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec990ULL || rel >= 0x8ec9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec9e0 size=16 callers=0 calls=0
*/
void sub_8ec9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec9e0ULL || rel >= 0x8ec9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ec9f0 size=16 callers=0 calls=0
*/
void sub_8ec9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ec9f0ULL || rel >= 0x8eca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eca00 size=400 callers=1 calls=0
*/
void sub_8eca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eca00ULL || rel >= 0x8ecb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ecb90 size=240 callers=0 calls=0
*/
void sub_8ecb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ecb90ULL || rel >= 0x8ecc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ecc80 size=208 callers=1 calls=2
   calls: sub_8ecd50, sub_8ed390
*/
void sub_8ecc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ecc80ULL || rel >= 0x8ecd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ecd50 size=496 callers=1 calls=0
*/
void sub_8ecd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ecd50ULL || rel >= 0x8ecf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ecf40 size=640 callers=6 calls=8
   calls: sub_7eef50, sub_7ef2b0, sub_7ef6a0, sub_8ed1c0, sub_8ed490, sub_8ed7b0, sub_8edd80, sub_8edd90
*/
void sub_8ecf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ecf40ULL || rel >= 0x8ed1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ed1c0 size=288 callers=1 calls=5
   calls: sub_7ef2b0, sub_7f2350, sub_7f2360, sub_7ffaa0, sub_8003c0
*/
void sub_8ed1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ed1c0ULL || rel >= 0x8ed2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ed2e0 size=144 callers=4 calls=1
   calls: sub_8ecf40
*/
void sub_8ed2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ed2e0ULL || rel >= 0x8ed370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ed370 size=32 callers=4 calls=0
*/
void sub_8ed370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ed370ULL || rel >= 0x8ed390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ed390 size=256 callers=2 calls=0
*/
void sub_8ed390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ed390ULL || rel >= 0x8ed490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ed490 size=560 callers=2 calls=0
*/
void sub_8ed490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ed490ULL || rel >= 0x8ed6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ed6c0 size=240 callers=0 calls=0
*/
void sub_8ed6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ed6c0ULL || rel >= 0x8ed7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ed7b0 size=880 callers=1 calls=12
   calls: sub_7ef2b0, sub_7f05a0, sub_7f0ba0, sub_7f2350, sub_7f2360, sub_7ffe20, sub_800170, sub_8001d0, sub_8017b0, sub_8017e0, sub_8edb20, sub_8edc30
*/
void sub_8ed7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ed7b0ULL || rel >= 0x8edb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008edb20 size=272 callers=1 calls=6
   calls: sub_7ef4c0, sub_7ef630, sub_7ef710, sub_7ef750, sub_7ef760, sub_7f8960
*/
void sub_8edb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8edb20ULL || rel >= 0x8edc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008edc30 size=336 callers=1 calls=4
   calls: sub_802460, sub_802470, sub_802480, sub_802490
*/
void sub_8edc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8edc30ULL || rel >= 0x8edd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008edd80 size=16 callers=1 calls=0
*/
void sub_8edd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8edd80ULL || rel >= 0x8edd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008edd90 size=16 callers=1 calls=0
*/
void sub_8edd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8edd90ULL || rel >= 0x8edda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008edda0 size=240 callers=0 calls=0
*/
void sub_8edda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8edda0ULL || rel >= 0x8ede90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ede90 size=288 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_genm_00_lyt.bin
*/
void battle_genm_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ede90ULL || rel >= 0x8edfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008edfb0 size=2800 callers=0 calls=12
   calls: P_sick_00, gauge_scale_01, pane__s_2, sub_142a1c0, sub_14aad40, sub_7ed820, sub_7ff8c0, sub_7ffa70, sub_8eed60, sub_8efdd0, sub_8f0890, sub_e7eb10
   ref: pane_%s
   ref: L_HP_boss_00
*/
void L_HP_boss_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8edfb0ULL || rel >= 0x8eeaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eeaa0 size=704 callers=11 calls=1
   calls: sub_14aad40
   ref: pane_%s
   ref: anime_%s
   ref: anime_%s_%s
*/
void pane__s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eeaa0ULL || rel >= 0x8eed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008eed60 size=896 callers=1 calls=0
*/
void sub_8eed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8eed60ULL || rel >= 0x8ef0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ef0e0 size=48 callers=0 calls=1
   calls: sub_142aa00
*/
void sub_8ef0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ef0e0ULL || rel >= 0x8ef110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ef110 size=48 callers=3 calls=0
*/
void sub_8ef110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ef110ULL || rel >= 0x8ef140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ef140 size=32 callers=1 calls=0
*/
void sub_8ef140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ef140ULL || rel >= 0x8ef160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ef160 size=1488 callers=0 calls=3
   calls: sub_142a660, sub_8efeb0, sub_8f0a50
*/
void sub_8ef160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ef160ULL || rel >= 0x8ef730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ef730 size=528 callers=0 calls=5
   calls: sub_17919c0, sub_8f0970, sub_8f0a20, sub_e83430, sub_e83c60
*/
void sub_8ef730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ef730ULL || rel >= 0x8ef940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ef940 size=144 callers=6 calls=2
   calls: sub_7ef2b0, sub_8f1de0
*/
void sub_8ef940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ef940ULL || rel >= 0x8ef9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ef9d0 size=336 callers=0 calls=3
   calls: sub_142a480, sub_8f0a70, sub_e83390
*/
void sub_8ef9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ef9d0ULL || rel >= 0x8efb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efb20 size=208 callers=0 calls=0
*/
void sub_8efb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efb20ULL || rel >= 0x8efbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efbf0 size=16 callers=0 calls=0
*/
void sub_8efbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efbf0ULL || rel >= 0x8efc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efc00 size=16 callers=0 calls=0
*/
void sub_8efc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efc00ULL || rel >= 0x8efc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efc10 size=16 callers=0 calls=0
*/
void sub_8efc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efc10ULL || rel >= 0x8efc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efc20 size=16 callers=0 calls=0
*/
void sub_8efc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efc20ULL || rel >= 0x8efc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efc30 size=16 callers=0 calls=0
*/
void sub_8efc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efc30ULL || rel >= 0x8efc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efc40 size=16 callers=0 calls=0
*/
void sub_8efc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efc40ULL || rel >= 0x8efc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efc50 size=16 callers=0 calls=0
*/
void sub_8efc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efc50ULL || rel >= 0x8efc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efc60 size=16 callers=0 calls=0
*/
void sub_8efc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efc60ULL || rel >= 0x8efc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efc70 size=304 callers=0 calls=0
*/
void sub_8efc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efc70ULL || rel >= 0x8efda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efda0 size=16 callers=0 calls=0
*/
void sub_8efda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efda0ULL || rel >= 0x8efdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efdb0 size=16 callers=0 calls=0
*/
void sub_8efdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efdb0ULL || rel >= 0x8efdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efdc0 size=16 callers=0 calls=0
*/
void sub_8efdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efdc0ULL || rel >= 0x8efdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efdd0 size=224 callers=24 calls=1
   calls: sub_14aad40
*/
void sub_8efdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efdd0ULL || rel >= 0x8efeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008efeb0 size=272 callers=1 calls=1
   calls: sub_142a040
*/
void sub_8efeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8efeb0ULL || rel >= 0x8effc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008effc0 size=240 callers=0 calls=0
*/
void sub_8effc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8effc0ULL || rel >= 0x8f00b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f00b0 size=240 callers=0 calls=0
*/
void sub_8f00b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f00b0ULL || rel >= 0x8f01a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f01a0 size=112 callers=0 calls=1
   calls: sub_142b300
*/
void sub_8f01a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f01a0ULL || rel >= 0x8f0210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0210 size=176 callers=0 calls=1
   calls: sub_142a1b0
*/
void sub_8f0210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0210ULL || rel >= 0x8f02c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f02c0 size=240 callers=0 calls=0
*/
void sub_8f02c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f02c0ULL || rel >= 0x8f03b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f03b0 size=240 callers=0 calls=0
*/
void sub_8f03b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f03b0ULL || rel >= 0x8f04a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f04a0 size=112 callers=0 calls=1
   calls: sub_142b300
*/
void sub_8f04a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f04a0ULL || rel >= 0x8f0510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0510 size=112 callers=0 calls=1
   calls: sub_142b300
*/
void sub_8f0510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0510ULL || rel >= 0x8f0580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0580 size=240 callers=0 calls=0
*/
void sub_8f0580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0580ULL || rel >= 0x8f0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0670 size=240 callers=0 calls=0
*/
void sub_8f0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0670ULL || rel >= 0x8f0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0760 size=16 callers=0 calls=0
*/
void sub_8f0760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0760ULL || rel >= 0x8f0770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0770 size=16 callers=0 calls=0
*/
void sub_8f0770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0770ULL || rel >= 0x8f0780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0780 size=16 callers=0 calls=0
*/
void sub_8f0780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0780ULL || rel >= 0x8f0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0790 size=16 callers=0 calls=0
*/
void sub_8f0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0790ULL || rel >= 0x8f07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f07a0 size=240 callers=0 calls=0
*/
void sub_8f07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f07a0ULL || rel >= 0x8f0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0890 size=224 callers=1 calls=2
   calls: sub_14aad40, sub_e83430
*/
void sub_8f0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0890ULL || rel >= 0x8f0970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0970 size=176 callers=1 calls=1
   calls: sub_e83430
*/
void sub_8f0970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0970ULL || rel >= 0x8f0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0a20 size=48 callers=2 calls=0
*/
void sub_8f0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0a20ULL || rel >= 0x8f0a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0a50 size=32 callers=39 calls=0
*/
void sub_8f0a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0a50ULL || rel >= 0x8f0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0a70 size=48 callers=14 calls=0
*/
void sub_8f0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0a70ULL || rel >= 0x8f0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0aa0 size=240 callers=0 calls=0
*/
void sub_8f0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0aa0ULL || rel >= 0x8f0b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f0b90 size=1264 callers=0 calls=4
   calls: sub_67b990, sub_8f3260, sub_8f3390, sub_e7f7f0
*/
void sub_8f0b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0b90ULL || rel >= 0x8f1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f1080 size=2352 callers=5 calls=9
   calls: color_inactive, sub_14aad40, sub_14d74f0, sub_67d450, sub_8f19b0, sub_8f3180, sub_8f3740, sub_e7f7f0, sub_e83430
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: P_sick_00
   ref: anime_%s_%s
*/
void P_sick_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f1080ULL || rel >= 0x8f19b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f19b0 size=224 callers=142 calls=3
   calls: sub_67bdb0, sub_67d450, sub_e83b20
*/
void sub_8f19b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f19b0ULL || rel >= 0x8f1a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f1a90 size=688 callers=1 calls=6
   calls: sub_1315b90, sub_14ac370, sub_14d5c00, sub_67bdc0, sub_67be10, sub_e83930
*/
void sub_8f1a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f1a90ULL || rel >= 0x8f1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f1d40 size=144 callers=0 calls=2
   calls: sub_142a660, sub_14d7b20
*/
void sub_8f1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f1d40ULL || rel >= 0x8f1dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f1dd0 size=16 callers=1 calls=0
*/
void sub_8f1dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f1dd0ULL || rel >= 0x8f1de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f1de0 size=1680 callers=4 calls=28
   calls: sub_142a660, sub_14d5ca0, sub_14d6920, sub_14d6af0, sub_67bdb0, sub_67bdc0, sub_764b40, sub_7670a0, sub_76bd60, sub_76bdf0, sub_7ee6c0, sub_7eef40
   ... +16 more
*/
void sub_8f1de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f1de0ULL || rel >= 0x8f2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f2470 size=256 callers=3 calls=2
   calls: sub_1313580, sub_67be10
*/
void sub_8f2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f2470ULL || rel >= 0x8f2570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f2570 size=272 callers=2 calls=2
   calls: sub_1315b90, sub_67be10
*/
void sub_8f2570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f2570ULL || rel >= 0x8f2680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f2680 size=256 callers=1 calls=2
   calls: sub_67be10, tokusei
*/
void sub_8f2680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f2680ULL || rel >= 0x8f2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f2780 size=272 callers=1 calls=2
   calls: sub_1315270, sub_67be10
*/
void sub_8f2780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f2780ULL || rel >= 0x8f2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f2890 size=16 callers=2 calls=0
*/
void sub_8f2890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f2890ULL || rel >= 0x8f28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f28a0 size=64 callers=1 calls=0
*/
void sub_8f28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f28a0ULL || rel >= 0x8f28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f28e0 size=32 callers=0 calls=0
*/
void sub_8f28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f28e0ULL || rel >= 0x8f2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f2900 size=176 callers=7 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_8f2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f2900ULL || rel >= 0x8f29b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f29b0 size=128 callers=0 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_8f29b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f29b0ULL || rel >= 0x8f2a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f2a30 size=704 callers=1 calls=4
   calls: sub_14aad40, sub_14d74f0, sub_8f3260, sub_e7f7f0
   ref: pane_%s
   ref: anime_%s
   ref: gauge_scale_01
   ref: pane_%s_%s
   ref: anime_%s_%s
   ref: P_body_01
*/
void gauge_scale_01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f2a30ULL || rel >= 0x8f2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f2cf0 size=432 callers=0 calls=3
   calls: sub_142a660, sub_14d7b20, sub_8f3610
*/
void sub_8f2cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f2cf0ULL || rel >= 0x8f2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f2ea0 size=304 callers=3 calls=0
*/
void sub_8f2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f2ea0ULL || rel >= 0x8f2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f2fd0 size=48 callers=0 calls=1
   calls: sub_8f2ea0
*/
void sub_8f2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f2fd0ULL || rel >= 0x8f3000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3000 size=64 callers=0 calls=1
   calls: sub_e83850
*/
void sub_8f3000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3000ULL || rel >= 0x8f3040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3040 size=80 callers=0 calls=0
*/
void sub_8f3040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3040ULL || rel >= 0x8f3090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3090 size=80 callers=0 calls=1
   calls: sub_8f2ea0
*/
void sub_8f3090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3090ULL || rel >= 0x8f30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f30e0 size=160 callers=0 calls=1
   calls: sub_8f1a90
*/
void sub_8f30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f30e0ULL || rel >= 0x8f3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3180 size=224 callers=267 calls=1
   calls: sub_14aad40
*/
void sub_8f3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3180ULL || rel >= 0x8f3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3260 size=304 callers=3 calls=0
*/
void sub_8f3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3260ULL || rel >= 0x8f3390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3390 size=400 callers=4 calls=0
*/
void sub_8f3390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3390ULL || rel >= 0x8f3520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3520 size=240 callers=0 calls=0
*/
void sub_8f3520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3520ULL || rel >= 0x8f3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3610 size=64 callers=3 calls=0
*/
void sub_8f3610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3610ULL || rel >= 0x8f3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3650 size=240 callers=0 calls=0
*/
void sub_8f3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3650ULL || rel >= 0x8f3740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3740 size=16 callers=39 calls=0
*/
void sub_8f3740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3740ULL || rel >= 0x8f3750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3750 size=1728 callers=4 calls=4
   calls: sub_14aad40, sub_14ba7b0, sub_8f3180, sub_e7f7f0
   ref: pane_%s
   ref: anime_%s
   ref: color_inactive
   ref: P_pokeIcon_00
   ref: color_normal
   ref: HP_max
   ref: pane_%s_%s
   ref: HP_sick
*/
void color_inactive(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3750ULL || rel >= 0x8f3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f3e10 size=624 callers=5 calls=9
   calls: sub_14bbf30, sub_14db420, sub_7eef50, sub_7ef330, sub_7ef6a0, sub_7f33a0, sub_e83430, sub_e83850, sub_e83930
*/
void sub_8f3e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3e10ULL || rel >= 0x8f4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4080 size=32 callers=1 calls=0
*/
void sub_8f4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4080ULL || rel >= 0x8f40a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f40a0 size=32 callers=1 calls=0
*/
void sub_8f40a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f40a0ULL || rel >= 0x8f40c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f40c0 size=16 callers=0 calls=0
*/
void sub_8f40c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f40c0ULL || rel >= 0x8f40d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f40d0 size=240 callers=0 calls=0
*/
void sub_8f40d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f40d0ULL || rel >= 0x8f41c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f41c0 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/common_bg/bin/common_bg_white_00_lyt.bin
*/
void common_bg_white_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f41c0ULL || rel >= 0x8f42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f42d0 size=128 callers=0 calls=2
   calls: sub_e806b0, sub_e83850
*/
void sub_8f42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f42d0ULL || rel >= 0x8f4350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4350 size=48 callers=0 calls=0
*/
void sub_8f4350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4350ULL || rel >= 0x8f4380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4380 size=96 callers=9 calls=3
   calls: sub_e83850, sub_e83a40, sub_eb6230
*/
void sub_8f4380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4380ULL || rel >= 0x8f43e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f43e0 size=80 callers=8 calls=3
   calls: sub_e83850, sub_e83a40, sub_eb6230
*/
void sub_8f43e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f43e0ULL || rel >= 0x8f4430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4430 size=48 callers=0 calls=1
   calls: sub_eb6530
*/
void sub_8f4430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4430ULL || rel >= 0x8f4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4460 size=16 callers=0 calls=0
*/
void sub_8f4460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4460ULL || rel >= 0x8f4470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4470 size=16 callers=0 calls=0
*/
void sub_8f4470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4470ULL || rel >= 0x8f4480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4480 size=16 callers=0 calls=0
*/
void sub_8f4480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4480ULL || rel >= 0x8f4490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4490 size=16 callers=0 calls=0
*/
void sub_8f4490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4490ULL || rel >= 0x8f44a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f44a0 size=16 callers=0 calls=0
*/
void sub_8f44a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f44a0ULL || rel >= 0x8f44b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f44b0 size=16 callers=0 calls=0
*/
void sub_8f44b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f44b0ULL || rel >= 0x8f44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f44c0 size=16 callers=0 calls=0
*/
void sub_8f44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f44c0ULL || rel >= 0x8f44d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f44d0 size=16 callers=0 calls=0
*/
void sub_8f44d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f44d0ULL || rel >= 0x8f44e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f44e0 size=304 callers=0 calls=0
*/
void sub_8f44e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f44e0ULL || rel >= 0x8f4610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4610 size=240 callers=0 calls=0
*/
void sub_8f4610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4610ULL || rel >= 0x8f4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4700 size=272 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_fog_00_lyt.bin
*/
void battle_fog_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4700ULL || rel >= 0x8f4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4810 size=16 callers=0 calls=0
*/
void sub_8f4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4810ULL || rel >= 0x8f4820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4820 size=96 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_8f4820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4820ULL || rel >= 0x8f4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4880 size=208 callers=0 calls=2
   calls: sub_e806b0, sub_e83850
*/
void sub_8f4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4880ULL || rel >= 0x8f4950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4950 size=16 callers=0 calls=0
*/
void sub_8f4950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4950ULL || rel >= 0x8f4960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4960 size=16 callers=0 calls=0
*/
void sub_8f4960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4960ULL || rel >= 0x8f4970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4970 size=16 callers=0 calls=0
*/
void sub_8f4970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4970ULL || rel >= 0x8f4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4980 size=16 callers=0 calls=0
*/
void sub_8f4980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4980ULL || rel >= 0x8f4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4990 size=16 callers=0 calls=0
*/
void sub_8f4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4990ULL || rel >= 0x8f49a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f49a0 size=16 callers=0 calls=0
*/
void sub_8f49a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f49a0ULL || rel >= 0x8f49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f49b0 size=16 callers=0 calls=0
*/
void sub_8f49b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f49b0ULL || rel >= 0x8f49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f49c0 size=16 callers=0 calls=0
*/
void sub_8f49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f49c0ULL || rel >= 0x8f49d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f49d0 size=304 callers=0 calls=0
*/
void sub_8f49d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f49d0ULL || rel >= 0x8f4b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4b00 size=240 callers=0 calls=0
*/
void sub_8f4b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4b00ULL || rel >= 0x8f4bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4bf0 size=288 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/battle/bin/battle_kansen_00_lyt.bin
*/
void battle_kansen_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4bf0ULL || rel >= 0x8f4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f4d10 size=20160 callers=0 calls=22
   calls: L_icon_pokemon00, P_separator, T_turn_01, pattern_DM_base, pattern_ouen_out, sub_142a1c0, sub_5cfad0, sub_7ed820, sub_7ff8c0, sub_7ffa70, sub_8efdd0, sub_8f19b0
   ... +10 more
   ref: L_time_near_L_timer_00
   ref: pane_%s
   ref: L_near_temochi_02
   ref: B_near_temochi_02
   ref: N_far_temochi_00
   ref: B_near_temochi_05
   ref: L_far_temochi_05
   ref: pane_%s_%s
*/
void L_time_near_L_timer_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f4d10ULL || rel >= 0x8f9bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f9bd0 size=240 callers=1 calls=2
   calls: sub_8fb170, sub_8fcc00
*/
void sub_8f9bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f9bd0ULL || rel >= 0x8f9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f9cc0 size=48 callers=0 calls=1
   calls: sub_142aa00
*/
void sub_8f9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f9cc0ULL || rel >= 0x8f9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f9cf0 size=288 callers=0 calls=2
   calls: sub_142a480, sub_8fd740
*/
void sub_8f9cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f9cf0ULL || rel >= 0x8f9e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008f9e10 size=912 callers=6 calls=7
   calls: sub_17919c0, sub_8ebfe0, sub_8fa1a0, sub_8fc8a0, sub_8ff0e0, sub_8ff8c0, sub_e83930
*/
void sub_8f9e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f9e10ULL || rel >= 0x8fa1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fa1a0 size=1856 callers=2 calls=10
   calls: sub_7847d0, sub_7edcf0, sub_7ee6b0, sub_7ee6c0, sub_7eebd0, sub_7fc2e0, sub_7fc450, sub_8abf80, sub_8abfc0, sub_8fd890
*/
void sub_8fa1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fa1a0ULL || rel >= 0x8fa8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fa8e0 size=96 callers=1 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_8fa8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fa8e0ULL || rel >= 0x8fa940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fa940 size=96 callers=1 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_8fa940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fa940ULL || rel >= 0x8fa9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fa9a0 size=192 callers=3 calls=1
   calls: sub_8faa60
*/
void sub_8fa9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fa9a0ULL || rel >= 0x8faa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008faa60 size=288 callers=5 calls=1
   calls: sub_7ef2b0
*/
void sub_8faa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8faa60ULL || rel >= 0x8fab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fab80 size=80 callers=0 calls=0
*/
void sub_8fab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fab80ULL || rel >= 0x8fabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fabd0 size=80 callers=0 calls=0
*/
void sub_8fabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fabd0ULL || rel >= 0x8fac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fac20 size=48 callers=2 calls=0
*/
void sub_8fac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fac20ULL || rel >= 0x8fac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fac50 size=32 callers=2 calls=0
*/
void sub_8fac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fac50ULL || rel >= 0x8fac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fac70 size=512 callers=0 calls=2
   calls: sub_8fb2c0, sub_8fb560
*/
void sub_8fac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fac70ULL || rel >= 0x8fae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fae70 size=16 callers=0 calls=0
*/
void sub_8fae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fae70ULL || rel >= 0x8fae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fae80 size=16 callers=0 calls=0
*/
void sub_8fae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fae80ULL || rel >= 0x8fae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fae90 size=16 callers=0 calls=0
*/
void sub_8fae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fae90ULL || rel >= 0x8faea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008faea0 size=16 callers=0 calls=0
*/
void sub_8faea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8faea0ULL || rel >= 0x8faeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008faeb0 size=16 callers=0 calls=0
*/
void sub_8faeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8faeb0ULL || rel >= 0x8faec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008faec0 size=16 callers=0 calls=0
*/
void sub_8faec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8faec0ULL || rel >= 0x8faed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008faed0 size=16 callers=0 calls=0
*/
void sub_8faed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8faed0ULL || rel >= 0x8faee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008faee0 size=16 callers=0 calls=0
*/
void sub_8faee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8faee0ULL || rel >= 0x8faef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008faef0 size=96 callers=0 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_8faef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8faef0ULL || rel >= 0x8faf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008faf50 size=16 callers=0 calls=0
*/
void sub_8faf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8faf50ULL || rel >= 0x8faf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008faf60 size=32 callers=0 calls=0
*/
void sub_8faf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8faf60ULL || rel >= 0x8faf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008faf80 size=32 callers=0 calls=0
*/
void sub_8faf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8faf80ULL || rel >= 0x8fafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fafa0 size=80 callers=0 calls=2
   calls: sub_e83430, sub_e83850
*/
void sub_8fafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fafa0ULL || rel >= 0x8faff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008faff0 size=16 callers=0 calls=0
*/
void sub_8faff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8faff0ULL || rel >= 0x8fb000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb000 size=32 callers=0 calls=0
*/
void sub_8fb000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb000ULL || rel >= 0x8fb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb020 size=32 callers=0 calls=0
*/
void sub_8fb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb020ULL || rel >= 0x8fb040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb040 size=304 callers=0 calls=0
*/
void sub_8fb040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb040ULL || rel >= 0x8fb170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb170 size=336 callers=1 calls=0
*/
void sub_8fb170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb170ULL || rel >= 0x8fb2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb2c0 size=288 callers=3 calls=0
*/
void sub_8fb2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb2c0ULL || rel >= 0x8fb3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb3e0 size=16 callers=0 calls=0
*/
void sub_8fb3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb3e0ULL || rel >= 0x8fb3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb3f0 size=368 callers=1 calls=1
   calls: sub_e7f7f0
*/
void sub_8fb3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb3f0ULL || rel >= 0x8fb560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb560 size=256 callers=3 calls=0
*/
void sub_8fb560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb560ULL || rel >= 0x8fb660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb660 size=112 callers=0 calls=0
*/
void sub_8fb660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb660ULL || rel >= 0x8fb6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb6d0 size=96 callers=0 calls=0
*/
void sub_8fb6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb6d0ULL || rel >= 0x8fb730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb730 size=240 callers=0 calls=0
*/
void sub_8fb730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb730ULL || rel >= 0x8fb820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fb820 size=2032 callers=8 calls=1
   calls: sub_14aad40
   ref: P_separator
   ref: P_sec01
   ref: pane_%s
   ref: anime_%s
   ref: P_min10
   ref: P_sec10
   ref: pane_%s_%s
   ref: P_min01
*/
void P_separator(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb820ULL || rel >= 0x8fc010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fc010 size=736 callers=1 calls=1
   calls: sub_e83930
*/
void sub_8fc010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fc010ULL || rel >= 0x8fc2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fc2f0 size=48 callers=1 calls=0
*/
void sub_8fc2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fc2f0ULL || rel >= 0x8fc320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fc320 size=32 callers=1 calls=0
*/
void sub_8fc320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fc320ULL || rel >= 0x8fc340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fc340 size=112 callers=8 calls=0
*/
void sub_8fc340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fc340ULL || rel >= 0x8fc3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fc3b0 size=112 callers=8 calls=0
*/
void sub_8fc3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fc3b0ULL || rel >= 0x8fc420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fc420 size=240 callers=0 calls=0
*/
void sub_8fc420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fc420ULL || rel >= 0x8fc510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fc510 size=912 callers=12 calls=0
   ref: pattern_DM_in
   ref: anime_%s
   ref: pattern_ouen_in
   ref: anime_%s_%s
   ref: pattern_base
   ref: pattern_DM_out
   ref: pattern_ouen_out
*/
void pattern_ouen_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fc510ULL || rel >= 0x8fc8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fc8a0 size=624 callers=6 calls=3
   calls: sub_7ee6c0, sub_e83430, sub_e83850
*/
void sub_8fc8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fc8a0ULL || rel >= 0x8fcb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fcb10 size=240 callers=0 calls=0
*/
void sub_8fcb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fcb10ULL || rel >= 0x8fcc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fcc00 size=624 callers=12 calls=2
   calls: sub_8f3740, sub_e7f7f0
*/
void sub_8fcc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fcc00ULL || rel >= 0x8fce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008fce70 size=2256 callers=12 calls=6
   calls: P_sick_00, color_inactive, sub_14aad40, sub_5cfad0, sub_e7ea90, sub_e7f7d0
   ref: pane_%s
   ref: anime_%s
   ref: pane_%s_%s
   ref: L_icon_pokemon00
   ref: anime_%s_%s
   ref: L_icon_sick00
*/
void L_icon_pokemon00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fce70ULL || rel >= 0x8fd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

