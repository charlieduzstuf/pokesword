/* main functions 008a7f30..008b14b0 (67 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 008a7f30 size=32 callers=7 calls=0
*/
void sub_8a7f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7f30ULL || rel >= 0x8a7f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7f50 size=16 callers=8 calls=0
*/
void sub_8a7f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7f50ULL || rel >= 0x8a7f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7f60 size=16 callers=4 calls=0
*/
void sub_8a7f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7f60ULL || rel >= 0x8a7f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7f70 size=16 callers=4 calls=0
*/
void sub_8a7f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7f70ULL || rel >= 0x8a7f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7f80 size=16 callers=7 calls=0
*/
void sub_8a7f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7f80ULL || rel >= 0x8a7f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7f90 size=16 callers=5 calls=0
*/
void sub_8a7f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7f90ULL || rel >= 0x8a7fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7fa0 size=16 callers=0 calls=0
*/
void sub_8a7fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7fa0ULL || rel >= 0x8a7fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7fb0 size=16 callers=0 calls=0
*/
void sub_8a7fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7fb0ULL || rel >= 0x8a7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7fc0 size=32 callers=3 calls=0
*/
void sub_8a7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7fc0ULL || rel >= 0x8a7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a7fe0 size=48 callers=3 calls=0
*/
void sub_8a7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a7fe0ULL || rel >= 0x8a8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8010 size=16 callers=1 calls=0
*/
void sub_8a8010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8010ULL || rel >= 0x8a8020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8020 size=16 callers=1 calls=0
*/
void sub_8a8020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8020ULL || rel >= 0x8a8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8030 size=80 callers=3 calls=0
*/
void sub_8a8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8030ULL || rel >= 0x8a8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8080 size=96 callers=4 calls=0
*/
void sub_8a8080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8080ULL || rel >= 0x8a80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a80e0 size=32 callers=2 calls=0
*/
void sub_8a80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a80e0ULL || rel >= 0x8a8100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8100 size=16 callers=7 calls=0
*/
void sub_8a8100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8100ULL || rel >= 0x8a8110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8110 size=16 callers=2 calls=0
*/
void sub_8a8110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8110ULL || rel >= 0x8a8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8120 size=32 callers=2 calls=0
*/
void sub_8a8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8120ULL || rel >= 0x8a8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8140 size=32 callers=1 calls=0
*/
void sub_8a8140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8140ULL || rel >= 0x8a8160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8160 size=96 callers=1 calls=0
*/
void sub_8a8160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8160ULL || rel >= 0x8a81c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a81c0 size=112 callers=1 calls=0
*/
void sub_8a81c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a81c0ULL || rel >= 0x8a8230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8230 size=32 callers=1 calls=0
*/
void sub_8a8230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8230ULL || rel >= 0x8a8250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8250 size=16 callers=2 calls=0
*/
void sub_8a8250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8250ULL || rel >= 0x8a8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8260 size=48 callers=4 calls=0
*/
void sub_8a8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8260ULL || rel >= 0x8a8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8290 size=48 callers=2 calls=0
*/
void sub_8a8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8290ULL || rel >= 0x8a82c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a82c0 size=16 callers=1 calls=0
*/
void sub_8a82c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a82c0ULL || rel >= 0x8a82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a82d0 size=16 callers=4 calls=0
*/
void sub_8a82d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a82d0ULL || rel >= 0x8a82e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a82e0 size=80 callers=2 calls=1
   calls: sub_8a8330
*/
void sub_8a82e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a82e0ULL || rel >= 0x8a8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8330 size=272 callers=1 calls=1
   calls: sub_7fd000
*/
void sub_8a8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8330ULL || rel >= 0x8a8440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8440 size=272 callers=0 calls=2
   calls: sub_7dfde0, sub_7e7c20
*/
void sub_8a8440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8440ULL || rel >= 0x8a8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8550 size=96 callers=1 calls=6
   calls: sub_7e88d0, sub_7e8910, sub_7fe080, sub_8139d0, sub_828a60, sub_8341a0
*/
void sub_8a8550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8550ULL || rel >= 0x8a85b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a85b0 size=112 callers=2 calls=6
   calls: sub_7e88d0, sub_7e8910, sub_7fe080, sub_8139d0, sub_828930, sub_855f20
*/
void sub_8a85b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a85b0ULL || rel >= 0x8a8620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8620 size=112 callers=1 calls=6
   calls: sub_7e88d0, sub_7e8910, sub_7fe080, sub_8139d0, sub_828940, sub_863cf0
*/
void sub_8a8620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8620ULL || rel >= 0x8a8690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8690 size=80 callers=1 calls=2
   calls: sub_7e8900, sub_7fe080
*/
void sub_8a8690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8690ULL || rel >= 0x8a86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a86e0 size=144 callers=9 calls=6
   calls: sub_7e88d0, sub_7e8910, sub_7fe080, sub_8139d0, sub_8292a0, sub_8544a0
*/
void sub_8a86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a86e0ULL || rel >= 0x8a8770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8770 size=144 callers=8 calls=6
   calls: sub_7e88d0, sub_7e8910, sub_7fe080, sub_8139d0, sub_829290, sub_8546d0
*/
void sub_8a8770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8770ULL || rel >= 0x8a8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8800 size=128 callers=0 calls=0
*/
void sub_8a8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8800ULL || rel >= 0x8a8880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8880 size=32 callers=1 calls=0
*/
void sub_8a8880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8880ULL || rel >= 0x8a88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a88a0 size=80 callers=0 calls=0
*/
void sub_8a88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a88a0ULL || rel >= 0x8a88f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a88f0 size=80 callers=0 calls=0
*/
void sub_8a88f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a88f0ULL || rel >= 0x8a8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8940 size=112 callers=1 calls=0
*/
void sub_8a8940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8940ULL || rel >= 0x8a89b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a89b0 size=16 callers=1 calls=0
*/
void sub_8a89b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a89b0ULL || rel >= 0x8a89c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a89c0 size=16 callers=0 calls=0
*/
void sub_8a89c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a89c0ULL || rel >= 0x8a89d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a89d0 size=32 callers=1 calls=0
*/
void sub_8a89d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a89d0ULL || rel >= 0x8a89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a89f0 size=128 callers=0 calls=0
*/
void sub_8a89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a89f0ULL || rel >= 0x8a8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8a70 size=48 callers=1 calls=0
*/
void sub_8a8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8a70ULL || rel >= 0x8a8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8aa0 size=80 callers=0 calls=0
*/
void sub_8a8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8aa0ULL || rel >= 0x8a8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8af0 size=80 callers=0 calls=0
*/
void sub_8a8af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8af0ULL || rel >= 0x8a8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8b40 size=112 callers=1 calls=0
*/
void sub_8a8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8b40ULL || rel >= 0x8a8bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8bb0 size=16 callers=1 calls=0
*/
void sub_8a8bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8bb0ULL || rel >= 0x8a8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8bc0 size=16 callers=0 calls=0
*/
void sub_8a8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8bc0ULL || rel >= 0x8a8bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8bd0 size=480 callers=1 calls=8
   calls: sub_7c5700, sub_7d90d0, sub_7ed5e0, sub_7ef2b0, sub_7f0b70, sub_804810, sub_8aabb0, sub_8aabe0
*/
void sub_8a8bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8bd0ULL || rel >= 0x8a8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8db0 size=128 callers=0 calls=0
*/
void sub_8a8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8db0ULL || rel >= 0x8a8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8e30 size=208 callers=1 calls=0
*/
void sub_8a8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8e30ULL || rel >= 0x8a8f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a8f00 size=352 callers=0 calls=2
   calls: sub_7dfde0, sub_8a82e0
*/
void sub_8a8f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a8f00ULL || rel >= 0x8a9060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9060 size=16 callers=94 calls=0
*/
void sub_8a9060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9060ULL || rel >= 0x8a9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9070 size=16 callers=28 calls=0
*/
void sub_8a9070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9070ULL || rel >= 0x8a9080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9080 size=16 callers=0 calls=0
*/
void sub_8a9080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9080ULL || rel >= 0x8a9090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9090 size=16 callers=0 calls=0
*/
void sub_8a9090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9090ULL || rel >= 0x8a90a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a90a0 size=96 callers=0 calls=0
*/
void sub_8a90a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a90a0ULL || rel >= 0x8a9100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9100 size=176 callers=0 calls=4
   calls: sub_7c56e0, sub_7eebd0, sub_7eef50, sub_7f13e0
*/
void sub_8a9100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9100ULL || rel >= 0x8a91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a91b0 size=96 callers=0 calls=2
   calls: sub_7ed220, sub_7ee6b0
*/
void sub_8a91b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a91b0ULL || rel >= 0x8a9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9210 size=64 callers=0 calls=1
   calls: sub_7dfdb0
*/
void sub_8a9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9210ULL || rel >= 0x8a9250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9250 size=64 callers=0 calls=1
   calls: sub_7cb860
*/
void sub_8a9250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9250ULL || rel >= 0x8a9290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9290 size=64 callers=0 calls=1
   calls: sub_7cb8c0
*/
void sub_8a9290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9290ULL || rel >= 0x8a92d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a92d0 size=48 callers=0 calls=0
*/
void sub_8a92d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a92d0ULL || rel >= 0x8a9300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9300 size=16 callers=0 calls=0
*/
void sub_8a9300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9300ULL || rel >= 0x8a9310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9310 size=16 callers=0 calls=0
*/
void sub_8a9310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9310ULL || rel >= 0x8a9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9320 size=16 callers=0 calls=0
*/
void sub_8a9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9320ULL || rel >= 0x8a9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9330 size=16 callers=0 calls=0
*/
void sub_8a9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9330ULL || rel >= 0x8a9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9340 size=16 callers=0 calls=0
*/
void sub_8a9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9340ULL || rel >= 0x8a9350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9350 size=16 callers=0 calls=0
*/
void sub_8a9350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9350ULL || rel >= 0x8a9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9360 size=16 callers=0 calls=0
*/
void sub_8a9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9360ULL || rel >= 0x8a9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9370 size=16 callers=0 calls=0
*/
void sub_8a9370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9370ULL || rel >= 0x8a9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9380 size=80 callers=0 calls=0
*/
void sub_8a9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9380ULL || rel >= 0x8a93d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a93d0 size=128 callers=0 calls=0
*/
void sub_8a93d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a93d0ULL || rel >= 0x8a9450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9450 size=16 callers=0 calls=0
*/
void sub_8a9450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9450ULL || rel >= 0x8a9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9460 size=112 callers=0 calls=0
*/
void sub_8a9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9460ULL || rel >= 0x8a94d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a94d0 size=48 callers=0 calls=0
*/
void sub_8a94d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a94d0ULL || rel >= 0x8a9500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9500 size=32 callers=0 calls=0
*/
void sub_8a9500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9500ULL || rel >= 0x8a9520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9520 size=16 callers=0 calls=0
*/
void sub_8a9520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9520ULL || rel >= 0x8a9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9530 size=16 callers=0 calls=0
*/
void sub_8a9530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9530ULL || rel >= 0x8a9540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9540 size=16 callers=0 calls=0
*/
void sub_8a9540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9540ULL || rel >= 0x8a9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9550 size=16 callers=0 calls=0
*/
void sub_8a9550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9550ULL || rel >= 0x8a9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9560 size=16 callers=0 calls=0
*/
void sub_8a9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9560ULL || rel >= 0x8a9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9570 size=32 callers=0 calls=0
*/
void sub_8a9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9570ULL || rel >= 0x8a9590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9590 size=64 callers=0 calls=1
   calls: sub_7c9b60
*/
void sub_8a9590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9590ULL || rel >= 0x8a95d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a95d0 size=112 callers=0 calls=0
*/
void sub_8a95d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a95d0ULL || rel >= 0x8a9640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9640 size=128 callers=0 calls=1
   calls: sub_7cae30
*/
void sub_8a9640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9640ULL || rel >= 0x8a96c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a96c0 size=96 callers=0 calls=0
*/
void sub_8a96c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a96c0ULL || rel >= 0x8a9720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9720 size=32 callers=0 calls=1
   calls: sub_7ccf30
*/
void sub_8a9720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9720ULL || rel >= 0x8a9740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9740 size=16 callers=0 calls=0
*/
void sub_8a9740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9740ULL || rel >= 0x8a9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9750 size=16 callers=0 calls=0
*/
void sub_8a9750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9750ULL || rel >= 0x8a9760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9760 size=16 callers=0 calls=0
*/
void sub_8a9760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9760ULL || rel >= 0x8a9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9770 size=208 callers=0 calls=1
   calls: sub_1c0
*/
void sub_8a9770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9770ULL || rel >= 0x8a9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9840 size=32 callers=0 calls=0
*/
void sub_8a9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9840ULL || rel >= 0x8a9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9860 size=16 callers=0 calls=0
*/
void sub_8a9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9860ULL || rel >= 0x8a9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9870 size=16 callers=0 calls=0
*/
void sub_8a9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9870ULL || rel >= 0x8a9880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9880 size=16 callers=0 calls=0
*/
void sub_8a9880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9880ULL || rel >= 0x8a9890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9890 size=112 callers=0 calls=2
   calls: sub_7ca1c0, sub_7fc2f0
*/
void sub_8a9890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9890ULL || rel >= 0x8a9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9900 size=64 callers=0 calls=0
*/
void sub_8a9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9900ULL || rel >= 0x8a9940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9940 size=64 callers=0 calls=0
*/
void sub_8a9940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9940ULL || rel >= 0x8a9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9980 size=48 callers=0 calls=0
*/
void sub_8a9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9980ULL || rel >= 0x8a99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a99b0 size=64 callers=0 calls=0
*/
void sub_8a99b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a99b0ULL || rel >= 0x8a99f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a99f0 size=48 callers=0 calls=0
*/
void sub_8a99f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a99f0ULL || rel >= 0x8a9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9a20 size=16 callers=0 calls=0
*/
void sub_8a9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9a20ULL || rel >= 0x8a9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9a30 size=16 callers=0 calls=0
*/
void sub_8a9a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9a30ULL || rel >= 0x8a9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9a40 size=16 callers=0 calls=0
*/
void sub_8a9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9a40ULL || rel >= 0x8a9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9a50 size=16 callers=0 calls=0
*/
void sub_8a9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9a50ULL || rel >= 0x8a9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9a60 size=48 callers=0 calls=0
*/
void sub_8a9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9a60ULL || rel >= 0x8a9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9a90 size=48 callers=0 calls=0
*/
void sub_8a9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9a90ULL || rel >= 0x8a9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9ac0 size=16 callers=0 calls=0
*/
void sub_8a9ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9ac0ULL || rel >= 0x8a9ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9ad0 size=32 callers=0 calls=0
*/
void sub_8a9ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9ad0ULL || rel >= 0x8a9af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9af0 size=16 callers=0 calls=0
*/
void sub_8a9af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9af0ULL || rel >= 0x8a9b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9b00 size=32 callers=0 calls=0
*/
void sub_8a9b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9b00ULL || rel >= 0x8a9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9b20 size=16 callers=0 calls=0
*/
void sub_8a9b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9b20ULL || rel >= 0x8a9b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9b30 size=32 callers=0 calls=0
*/
void sub_8a9b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9b30ULL || rel >= 0x8a9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9b50 size=192 callers=0 calls=1
   calls: sub_7c9b60
*/
void sub_8a9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9b50ULL || rel >= 0x8a9c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9c10 size=32 callers=0 calls=0
*/
void sub_8a9c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9c10ULL || rel >= 0x8a9c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9c30 size=32 callers=0 calls=0
*/
void sub_8a9c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9c30ULL || rel >= 0x8a9c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9c50 size=112 callers=0 calls=0
*/
void sub_8a9c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9c50ULL || rel >= 0x8a9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9cc0 size=80 callers=0 calls=0
*/
void sub_8a9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9cc0ULL || rel >= 0x8a9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9d10 size=112 callers=0 calls=1
   calls: sub_7cd220
*/
void sub_8a9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9d10ULL || rel >= 0x8a9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9d80 size=32 callers=0 calls=1
   calls: sub_7d0bb0
*/
void sub_8a9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9d80ULL || rel >= 0x8a9da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9da0 size=32 callers=0 calls=1
   calls: sub_7d0bb0
*/
void sub_8a9da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9da0ULL || rel >= 0x8a9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9dc0 size=112 callers=0 calls=2
   calls: sub_7d0bb0, sub_7dfdb0
*/
void sub_8a9dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9dc0ULL || rel >= 0x8a9e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9e30 size=256 callers=0 calls=6
   calls: sub_7ffaa0, sub_7ffab0, sub_7ffac0, sub_7ffaf0, sub_7ffb00, sub_7ffb30
*/
void sub_8a9e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9e30ULL || rel >= 0x8a9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008a9f30 size=240 callers=0 calls=6
   calls: sub_8003c0, sub_8003d0, sub_8003e0, sub_800430, sub_800480, sub_8004b0
*/
void sub_8a9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8a9f30ULL || rel >= 0x8aa020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa020 size=16 callers=0 calls=0
*/
void sub_8aa020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa020ULL || rel >= 0x8aa030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa030 size=16 callers=0 calls=0
*/
void sub_8aa030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa030ULL || rel >= 0x8aa040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa040 size=16 callers=0 calls=0
*/
void sub_8aa040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa040ULL || rel >= 0x8aa050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa050 size=272 callers=0 calls=6
   calls: sub_802460, sub_802480, sub_802490, sub_8024a0, sub_8024c0, sub_8024f0
*/
void sub_8aa050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa050ULL || rel >= 0x8aa160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa160 size=208 callers=0 calls=3
   calls: sub_7cac80, sub_7cc000, sub_7cce80
*/
void sub_8aa160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa160ULL || rel >= 0x8aa230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa230 size=304 callers=0 calls=7
   calls: sub_7cac80, sub_7cc000, sub_7ed1e0, sub_7ee6b0, sub_7ef360, sub_7f05d0, sub_7f29c0
*/
void sub_8aa230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa230ULL || rel >= 0x8aa360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa360 size=208 callers=2 calls=2
   calls: sub_804700, sub_82d9a0
*/
void sub_8aa360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa360ULL || rel >= 0x8aa430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa430 size=128 callers=0 calls=1
   calls: sub_7eef40
*/
void sub_8aa430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa430ULL || rel >= 0x8aa4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa4b0 size=32 callers=0 calls=0
*/
void sub_8aa4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa4b0ULL || rel >= 0x8aa4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa4d0 size=32 callers=0 calls=0
*/
void sub_8aa4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa4d0ULL || rel >= 0x8aa4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa4f0 size=16 callers=0 calls=0
*/
void sub_8aa4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa4f0ULL || rel >= 0x8aa500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa500 size=144 callers=0 calls=1
   calls: sub_8abfc0
*/
void sub_8aa500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa500ULL || rel >= 0x8aa590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa590 size=80 callers=0 calls=1
   calls: sub_7cd0c0
*/
void sub_8aa590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa590ULL || rel >= 0x8aa5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa5e0 size=16 callers=0 calls=0
*/
void sub_8aa5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa5e0ULL || rel >= 0x8aa5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa5f0 size=16 callers=0 calls=0
*/
void sub_8aa5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa5f0ULL || rel >= 0x8aa600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa600 size=400 callers=0 calls=8
   calls: sub_136b520, sub_136b580, sub_136b590, sub_67bdd0, sub_67be10, sub_67bfa0, sub_7ca170, sub_7ca190
*/
void sub_8aa600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa600ULL || rel >= 0x8aa790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa790 size=240 callers=0 calls=7
   calls: sub_12fa500, sub_1379b90, sub_7c56e0, sub_7c58b0, sub_7cb050, sub_7ed1e0, sub_7eef40
*/
void sub_8aa790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa790ULL || rel >= 0x8aa880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa880 size=176 callers=0 calls=3
   calls: sub_780d70, sub_7ebe00, sub_8a8770
*/
void sub_8aa880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa880ULL || rel >= 0x8aa930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa930 size=128 callers=0 calls=2
   calls: sub_7c58c0, sub_7d0b80
*/
void sub_8aa930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa930ULL || rel >= 0x8aa9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aa9b0 size=112 callers=0 calls=3
   calls: sub_7ed5e0, sub_7ee810, sub_7f36f0
*/
void sub_8aa9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aa9b0ULL || rel >= 0x8aaa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaa20 size=112 callers=0 calls=3
   calls: sub_7ed5e0, sub_7ee810, sub_7f36f0
*/
void sub_8aaa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaa20ULL || rel >= 0x8aaa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaa90 size=128 callers=0 calls=4
   calls: sub_7ed5e0, sub_7ee810, sub_7f36f0, sub_7fc7f0
*/
void sub_8aaa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaa90ULL || rel >= 0x8aab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aab10 size=64 callers=0 calls=1
   calls: sub_7d0b80
*/
void sub_8aab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aab10ULL || rel >= 0x8aab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aab50 size=48 callers=0 calls=1
   calls: sub_7d0b90
*/
void sub_8aab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aab50ULL || rel >= 0x8aab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aab80 size=48 callers=0 calls=1
   calls: sub_7d0b90
*/
void sub_8aab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aab80ULL || rel >= 0x8aabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aabb0 size=48 callers=41 calls=0
*/
void sub_8aabb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aabb0ULL || rel >= 0x8aabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aabe0 size=32 callers=39 calls=0
*/
void sub_8aabe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aabe0ULL || rel >= 0x8aac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aac00 size=16 callers=6 calls=0
*/
void sub_8aac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aac00ULL || rel >= 0x8aac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aac10 size=208 callers=0 calls=1
   calls: sub_7dfde0
*/
void sub_8aac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aac10ULL || rel >= 0x8aace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aace0 size=208 callers=0 calls=1
   calls: sub_7dfde0
*/
void sub_8aace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aace0ULL || rel >= 0x8aadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aadb0 size=16 callers=0 calls=0
*/
void sub_8aadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aadb0ULL || rel >= 0x8aadc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aadc0 size=16 callers=0 calls=0
*/
void sub_8aadc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aadc0ULL || rel >= 0x8aadd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aadd0 size=16 callers=0 calls=0
*/
void sub_8aadd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aadd0ULL || rel >= 0x8aade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aade0 size=16 callers=0 calls=0
*/
void sub_8aade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aade0ULL || rel >= 0x8aadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aadf0 size=16 callers=0 calls=0
*/
void sub_8aadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aadf0ULL || rel >= 0x8aae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aae00 size=16 callers=0 calls=0
*/
void sub_8aae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aae00ULL || rel >= 0x8aae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aae10 size=16 callers=0 calls=0
*/
void sub_8aae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aae10ULL || rel >= 0x8aae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aae20 size=16 callers=0 calls=0
*/
void sub_8aae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aae20ULL || rel >= 0x8aae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aae30 size=16 callers=0 calls=0
*/
void sub_8aae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aae30ULL || rel >= 0x8aae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aae40 size=16 callers=0 calls=0
*/
void sub_8aae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aae40ULL || rel >= 0x8aae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aae50 size=16 callers=0 calls=0
*/
void sub_8aae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aae50ULL || rel >= 0x8aae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aae60 size=16 callers=0 calls=0
*/
void sub_8aae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aae60ULL || rel >= 0x8aae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aae70 size=16 callers=0 calls=0
*/
void sub_8aae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aae70ULL || rel >= 0x8aae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aae80 size=16 callers=0 calls=0
*/
void sub_8aae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aae80ULL || rel >= 0x8aae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aae90 size=16 callers=0 calls=0
*/
void sub_8aae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aae90ULL || rel >= 0x8aaea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaea0 size=16 callers=0 calls=0
*/
void sub_8aaea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaea0ULL || rel >= 0x8aaeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaeb0 size=16 callers=0 calls=0
*/
void sub_8aaeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaeb0ULL || rel >= 0x8aaec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaec0 size=16 callers=0 calls=0
*/
void sub_8aaec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaec0ULL || rel >= 0x8aaed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaed0 size=16 callers=0 calls=0
*/
void sub_8aaed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaed0ULL || rel >= 0x8aaee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaee0 size=16 callers=0 calls=0
*/
void sub_8aaee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaee0ULL || rel >= 0x8aaef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaef0 size=16 callers=0 calls=0
*/
void sub_8aaef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaef0ULL || rel >= 0x8aaf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaf00 size=16 callers=0 calls=0
*/
void sub_8aaf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaf00ULL || rel >= 0x8aaf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaf10 size=16 callers=0 calls=0
*/
void sub_8aaf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaf10ULL || rel >= 0x8aaf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaf20 size=16 callers=0 calls=0
*/
void sub_8aaf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaf20ULL || rel >= 0x8aaf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaf30 size=16 callers=0 calls=0
*/
void sub_8aaf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaf30ULL || rel >= 0x8aaf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaf40 size=16 callers=0 calls=0
*/
void sub_8aaf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaf40ULL || rel >= 0x8aaf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaf50 size=16 callers=0 calls=0
*/
void sub_8aaf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaf50ULL || rel >= 0x8aaf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaf60 size=16 callers=0 calls=0
*/
void sub_8aaf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaf60ULL || rel >= 0x8aaf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaf70 size=16 callers=0 calls=0
*/
void sub_8aaf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaf70ULL || rel >= 0x8aaf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaf80 size=16 callers=0 calls=0
*/
void sub_8aaf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaf80ULL || rel >= 0x8aaf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaf90 size=16 callers=0 calls=0
*/
void sub_8aaf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaf90ULL || rel >= 0x8aafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aafa0 size=16 callers=0 calls=0
*/
void sub_8aafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aafa0ULL || rel >= 0x8aafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aafb0 size=16 callers=0 calls=0
*/
void sub_8aafb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aafb0ULL || rel >= 0x8aafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aafc0 size=16 callers=0 calls=0
*/
void sub_8aafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aafc0ULL || rel >= 0x8aafd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aafd0 size=16 callers=0 calls=0
*/
void sub_8aafd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aafd0ULL || rel >= 0x8aafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aafe0 size=16 callers=0 calls=0
*/
void sub_8aafe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aafe0ULL || rel >= 0x8aaff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aaff0 size=16 callers=0 calls=0
*/
void sub_8aaff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aaff0ULL || rel >= 0x8ab000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab000 size=16 callers=0 calls=0
*/
void sub_8ab000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab000ULL || rel >= 0x8ab010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab010 size=16 callers=0 calls=0
*/
void sub_8ab010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab010ULL || rel >= 0x8ab020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab020 size=16 callers=0 calls=0
*/
void sub_8ab020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab020ULL || rel >= 0x8ab030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab030 size=16 callers=0 calls=0
*/
void sub_8ab030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab030ULL || rel >= 0x8ab040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab040 size=16 callers=0 calls=0
*/
void sub_8ab040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab040ULL || rel >= 0x8ab050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab050 size=16 callers=0 calls=0
*/
void sub_8ab050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab050ULL || rel >= 0x8ab060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab060 size=16 callers=0 calls=0
*/
void sub_8ab060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab060ULL || rel >= 0x8ab070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab070 size=16 callers=0 calls=0
*/
void sub_8ab070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab070ULL || rel >= 0x8ab080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab080 size=16 callers=0 calls=0
*/
void sub_8ab080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab080ULL || rel >= 0x8ab090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab090 size=16 callers=0 calls=0
*/
void sub_8ab090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab090ULL || rel >= 0x8ab0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab0a0 size=16 callers=0 calls=0
*/
void sub_8ab0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab0a0ULL || rel >= 0x8ab0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab0b0 size=16 callers=0 calls=0
*/
void sub_8ab0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab0b0ULL || rel >= 0x8ab0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab0c0 size=16 callers=0 calls=0
*/
void sub_8ab0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab0c0ULL || rel >= 0x8ab0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab0d0 size=16 callers=0 calls=0
*/
void sub_8ab0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab0d0ULL || rel >= 0x8ab0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab0e0 size=16 callers=0 calls=0
*/
void sub_8ab0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab0e0ULL || rel >= 0x8ab0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab0f0 size=16 callers=0 calls=0
*/
void sub_8ab0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab0f0ULL || rel >= 0x8ab100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab100 size=16 callers=0 calls=0
*/
void sub_8ab100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab100ULL || rel >= 0x8ab110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab110 size=16 callers=0 calls=0
*/
void sub_8ab110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab110ULL || rel >= 0x8ab120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab120 size=16 callers=0 calls=0
*/
void sub_8ab120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab120ULL || rel >= 0x8ab130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab130 size=16 callers=0 calls=0
*/
void sub_8ab130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab130ULL || rel >= 0x8ab140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab140 size=16 callers=0 calls=0
*/
void sub_8ab140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab140ULL || rel >= 0x8ab150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab150 size=16 callers=0 calls=0
*/
void sub_8ab150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab150ULL || rel >= 0x8ab160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab160 size=16 callers=0 calls=0
*/
void sub_8ab160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab160ULL || rel >= 0x8ab170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab170 size=16 callers=0 calls=0
*/
void sub_8ab170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab170ULL || rel >= 0x8ab180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab180 size=16 callers=0 calls=0
*/
void sub_8ab180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab180ULL || rel >= 0x8ab190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab190 size=16 callers=0 calls=0
*/
void sub_8ab190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab190ULL || rel >= 0x8ab1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab1a0 size=16 callers=0 calls=0
*/
void sub_8ab1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab1a0ULL || rel >= 0x8ab1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab1b0 size=16 callers=0 calls=0
*/
void sub_8ab1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab1b0ULL || rel >= 0x8ab1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab1c0 size=16 callers=0 calls=0
*/
void sub_8ab1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab1c0ULL || rel >= 0x8ab1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab1d0 size=16 callers=0 calls=0
*/
void sub_8ab1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab1d0ULL || rel >= 0x8ab1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab1e0 size=16 callers=0 calls=0
*/
void sub_8ab1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab1e0ULL || rel >= 0x8ab1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab1f0 size=16 callers=0 calls=0
*/
void sub_8ab1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab1f0ULL || rel >= 0x8ab200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab200 size=16 callers=0 calls=0
*/
void sub_8ab200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab200ULL || rel >= 0x8ab210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab210 size=16 callers=0 calls=0
*/
void sub_8ab210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab210ULL || rel >= 0x8ab220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab220 size=16 callers=0 calls=0
*/
void sub_8ab220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab220ULL || rel >= 0x8ab230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab230 size=16 callers=0 calls=0
*/
void sub_8ab230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab230ULL || rel >= 0x8ab240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab240 size=16 callers=0 calls=0
*/
void sub_8ab240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab240ULL || rel >= 0x8ab250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab250 size=16 callers=0 calls=0
*/
void sub_8ab250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab250ULL || rel >= 0x8ab260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab260 size=16 callers=0 calls=0
*/
void sub_8ab260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab260ULL || rel >= 0x8ab270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab270 size=16 callers=0 calls=0
*/
void sub_8ab270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab270ULL || rel >= 0x8ab280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab280 size=16 callers=0 calls=0
*/
void sub_8ab280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab280ULL || rel >= 0x8ab290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab290 size=16 callers=0 calls=0
*/
void sub_8ab290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab290ULL || rel >= 0x8ab2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab2a0 size=16 callers=0 calls=0
*/
void sub_8ab2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab2a0ULL || rel >= 0x8ab2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab2b0 size=16 callers=0 calls=0
*/
void sub_8ab2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab2b0ULL || rel >= 0x8ab2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab2c0 size=16 callers=0 calls=0
*/
void sub_8ab2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab2c0ULL || rel >= 0x8ab2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab2d0 size=16 callers=0 calls=0
*/
void sub_8ab2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab2d0ULL || rel >= 0x8ab2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab2e0 size=16 callers=0 calls=0
*/
void sub_8ab2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab2e0ULL || rel >= 0x8ab2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab2f0 size=16 callers=0 calls=0
*/
void sub_8ab2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab2f0ULL || rel >= 0x8ab300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab300 size=16 callers=0 calls=0
*/
void sub_8ab300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab300ULL || rel >= 0x8ab310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab310 size=16 callers=0 calls=0
*/
void sub_8ab310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab310ULL || rel >= 0x8ab320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab320 size=16 callers=0 calls=0
*/
void sub_8ab320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab320ULL || rel >= 0x8ab330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab330 size=16 callers=0 calls=0
*/
void sub_8ab330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab330ULL || rel >= 0x8ab340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab340 size=16 callers=0 calls=0
*/
void sub_8ab340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab340ULL || rel >= 0x8ab350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab350 size=16 callers=0 calls=0
*/
void sub_8ab350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab350ULL || rel >= 0x8ab360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab360 size=16 callers=0 calls=0
*/
void sub_8ab360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab360ULL || rel >= 0x8ab370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab370 size=16 callers=0 calls=0
*/
void sub_8ab370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab370ULL || rel >= 0x8ab380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab380 size=16 callers=0 calls=0
*/
void sub_8ab380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab380ULL || rel >= 0x8ab390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab390 size=16 callers=0 calls=0
*/
void sub_8ab390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab390ULL || rel >= 0x8ab3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab3a0 size=16 callers=0 calls=0
*/
void sub_8ab3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab3a0ULL || rel >= 0x8ab3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab3b0 size=16 callers=0 calls=0
*/
void sub_8ab3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab3b0ULL || rel >= 0x8ab3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab3c0 size=16 callers=0 calls=0
*/
void sub_8ab3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab3c0ULL || rel >= 0x8ab3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab3d0 size=16 callers=0 calls=0
*/
void sub_8ab3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab3d0ULL || rel >= 0x8ab3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab3e0 size=16 callers=0 calls=0
*/
void sub_8ab3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab3e0ULL || rel >= 0x8ab3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab3f0 size=16 callers=0 calls=0
*/
void sub_8ab3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab3f0ULL || rel >= 0x8ab400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab400 size=16 callers=0 calls=0
*/
void sub_8ab400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab400ULL || rel >= 0x8ab410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab410 size=16 callers=0 calls=0
*/
void sub_8ab410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab410ULL || rel >= 0x8ab420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab420 size=16 callers=0 calls=0
*/
void sub_8ab420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab420ULL || rel >= 0x8ab430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab430 size=16 callers=0 calls=0
*/
void sub_8ab430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab430ULL || rel >= 0x8ab440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab440 size=16 callers=0 calls=0
*/
void sub_8ab440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab440ULL || rel >= 0x8ab450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab450 size=16 callers=0 calls=0
*/
void sub_8ab450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab450ULL || rel >= 0x8ab460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab460 size=16 callers=0 calls=0
*/
void sub_8ab460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab460ULL || rel >= 0x8ab470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab470 size=16 callers=0 calls=0
*/
void sub_8ab470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab470ULL || rel >= 0x8ab480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab480 size=16 callers=0 calls=0
*/
void sub_8ab480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab480ULL || rel >= 0x8ab490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab490 size=16 callers=0 calls=0
*/
void sub_8ab490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab490ULL || rel >= 0x8ab4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab4a0 size=16 callers=0 calls=0
*/
void sub_8ab4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab4a0ULL || rel >= 0x8ab4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab4b0 size=16 callers=0 calls=0
*/
void sub_8ab4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab4b0ULL || rel >= 0x8ab4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab4c0 size=16 callers=0 calls=0
*/
void sub_8ab4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab4c0ULL || rel >= 0x8ab4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab4d0 size=16 callers=0 calls=0
*/
void sub_8ab4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab4d0ULL || rel >= 0x8ab4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab4e0 size=16 callers=0 calls=0
*/
void sub_8ab4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab4e0ULL || rel >= 0x8ab4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab4f0 size=16 callers=0 calls=0
*/
void sub_8ab4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab4f0ULL || rel >= 0x8ab500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab500 size=16 callers=0 calls=0
*/
void sub_8ab500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab500ULL || rel >= 0x8ab510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab510 size=16 callers=0 calls=0
*/
void sub_8ab510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab510ULL || rel >= 0x8ab520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab520 size=16 callers=0 calls=0
*/
void sub_8ab520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab520ULL || rel >= 0x8ab530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab530 size=16 callers=0 calls=0
*/
void sub_8ab530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab530ULL || rel >= 0x8ab540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab540 size=16 callers=0 calls=0
*/
void sub_8ab540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab540ULL || rel >= 0x8ab550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab550 size=16 callers=0 calls=0
*/
void sub_8ab550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab550ULL || rel >= 0x8ab560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab560 size=16 callers=0 calls=0
*/
void sub_8ab560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab560ULL || rel >= 0x8ab570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab570 size=16 callers=0 calls=0
*/
void sub_8ab570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab570ULL || rel >= 0x8ab580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab580 size=16 callers=0 calls=0
*/
void sub_8ab580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab580ULL || rel >= 0x8ab590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab590 size=16 callers=0 calls=0
*/
void sub_8ab590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab590ULL || rel >= 0x8ab5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab5a0 size=16 callers=0 calls=0
*/
void sub_8ab5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab5a0ULL || rel >= 0x8ab5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab5b0 size=16 callers=0 calls=0
*/
void sub_8ab5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab5b0ULL || rel >= 0x8ab5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab5c0 size=16 callers=0 calls=0
*/
void sub_8ab5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab5c0ULL || rel >= 0x8ab5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab5d0 size=16 callers=0 calls=0
*/
void sub_8ab5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab5d0ULL || rel >= 0x8ab5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab5e0 size=16 callers=0 calls=0
*/
void sub_8ab5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab5e0ULL || rel >= 0x8ab5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab5f0 size=16 callers=0 calls=0
*/
void sub_8ab5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab5f0ULL || rel >= 0x8ab600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab600 size=16 callers=0 calls=0
*/
void sub_8ab600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab600ULL || rel >= 0x8ab610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab610 size=16 callers=0 calls=0
*/
void sub_8ab610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab610ULL || rel >= 0x8ab620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab620 size=16 callers=0 calls=0
*/
void sub_8ab620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab620ULL || rel >= 0x8ab630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab630 size=16 callers=0 calls=0
*/
void sub_8ab630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab630ULL || rel >= 0x8ab640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab640 size=16 callers=0 calls=0
*/
void sub_8ab640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab640ULL || rel >= 0x8ab650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab650 size=16 callers=0 calls=0
*/
void sub_8ab650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab650ULL || rel >= 0x8ab660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab660 size=16 callers=0 calls=0
*/
void sub_8ab660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab660ULL || rel >= 0x8ab670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab670 size=16 callers=0 calls=0
*/
void sub_8ab670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab670ULL || rel >= 0x8ab680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab680 size=16 callers=0 calls=0
*/
void sub_8ab680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab680ULL || rel >= 0x8ab690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab690 size=16 callers=0 calls=0
*/
void sub_8ab690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab690ULL || rel >= 0x8ab6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab6a0 size=16 callers=0 calls=0
*/
void sub_8ab6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab6a0ULL || rel >= 0x8ab6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab6b0 size=16 callers=0 calls=0
*/
void sub_8ab6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab6b0ULL || rel >= 0x8ab6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab6c0 size=16 callers=0 calls=0
*/
void sub_8ab6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab6c0ULL || rel >= 0x8ab6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab6d0 size=16 callers=0 calls=0
*/
void sub_8ab6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab6d0ULL || rel >= 0x8ab6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab6e0 size=16 callers=0 calls=0
*/
void sub_8ab6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab6e0ULL || rel >= 0x8ab6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab6f0 size=16 callers=0 calls=0
*/
void sub_8ab6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab6f0ULL || rel >= 0x8ab700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab700 size=16 callers=0 calls=0
*/
void sub_8ab700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab700ULL || rel >= 0x8ab710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab710 size=16 callers=0 calls=0
*/
void sub_8ab710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab710ULL || rel >= 0x8ab720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab720 size=16 callers=0 calls=0
*/
void sub_8ab720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab720ULL || rel >= 0x8ab730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab730 size=16 callers=0 calls=0
*/
void sub_8ab730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab730ULL || rel >= 0x8ab740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab740 size=16 callers=0 calls=0
*/
void sub_8ab740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab740ULL || rel >= 0x8ab750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab750 size=16 callers=0 calls=0
*/
void sub_8ab750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab750ULL || rel >= 0x8ab760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab760 size=16 callers=0 calls=0
*/
void sub_8ab760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab760ULL || rel >= 0x8ab770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab770 size=16 callers=0 calls=0
*/
void sub_8ab770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab770ULL || rel >= 0x8ab780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab780 size=16 callers=0 calls=0
*/
void sub_8ab780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab780ULL || rel >= 0x8ab790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab790 size=16 callers=0 calls=0
*/
void sub_8ab790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab790ULL || rel >= 0x8ab7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab7a0 size=16 callers=0 calls=0
*/
void sub_8ab7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab7a0ULL || rel >= 0x8ab7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab7b0 size=16 callers=0 calls=0
*/
void sub_8ab7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab7b0ULL || rel >= 0x8ab7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab7c0 size=16 callers=0 calls=0
*/
void sub_8ab7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab7c0ULL || rel >= 0x8ab7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab7d0 size=16 callers=0 calls=0
*/
void sub_8ab7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab7d0ULL || rel >= 0x8ab7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab7e0 size=16 callers=0 calls=0
*/
void sub_8ab7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab7e0ULL || rel >= 0x8ab7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab7f0 size=16 callers=0 calls=0
*/
void sub_8ab7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab7f0ULL || rel >= 0x8ab800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab800 size=16 callers=0 calls=0
*/
void sub_8ab800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab800ULL || rel >= 0x8ab810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab810 size=16 callers=0 calls=0
*/
void sub_8ab810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab810ULL || rel >= 0x8ab820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab820 size=16 callers=0 calls=0
*/
void sub_8ab820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab820ULL || rel >= 0x8ab830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab830 size=16 callers=0 calls=0
*/
void sub_8ab830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab830ULL || rel >= 0x8ab840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab840 size=16 callers=0 calls=0
*/
void sub_8ab840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab840ULL || rel >= 0x8ab850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab850 size=16 callers=0 calls=0
*/
void sub_8ab850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab850ULL || rel >= 0x8ab860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab860 size=16 callers=0 calls=0
*/
void sub_8ab860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab860ULL || rel >= 0x8ab870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab870 size=16 callers=0 calls=0
*/
void sub_8ab870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab870ULL || rel >= 0x8ab880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab880 size=16 callers=0 calls=0
*/
void sub_8ab880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab880ULL || rel >= 0x8ab890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab890 size=16 callers=0 calls=0
*/
void sub_8ab890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab890ULL || rel >= 0x8ab8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab8a0 size=16 callers=0 calls=0
*/
void sub_8ab8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab8a0ULL || rel >= 0x8ab8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab8b0 size=16 callers=0 calls=0
*/
void sub_8ab8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab8b0ULL || rel >= 0x8ab8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab8c0 size=16 callers=0 calls=0
*/
void sub_8ab8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab8c0ULL || rel >= 0x8ab8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab8d0 size=16 callers=0 calls=0
*/
void sub_8ab8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab8d0ULL || rel >= 0x8ab8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab8e0 size=16 callers=0 calls=0
*/
void sub_8ab8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab8e0ULL || rel >= 0x8ab8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab8f0 size=16 callers=0 calls=0
*/
void sub_8ab8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab8f0ULL || rel >= 0x8ab900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab900 size=16 callers=0 calls=0
*/
void sub_8ab900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab900ULL || rel >= 0x8ab910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab910 size=16 callers=0 calls=0
*/
void sub_8ab910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab910ULL || rel >= 0x8ab920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab920 size=16 callers=0 calls=0
*/
void sub_8ab920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab920ULL || rel >= 0x8ab930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab930 size=16 callers=0 calls=0
*/
void sub_8ab930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab930ULL || rel >= 0x8ab940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab940 size=16 callers=0 calls=0
*/
void sub_8ab940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab940ULL || rel >= 0x8ab950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab950 size=16 callers=0 calls=0
*/
void sub_8ab950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab950ULL || rel >= 0x8ab960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab960 size=16 callers=0 calls=0
*/
void sub_8ab960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab960ULL || rel >= 0x8ab970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab970 size=16 callers=0 calls=0
*/
void sub_8ab970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab970ULL || rel >= 0x8ab980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab980 size=16 callers=0 calls=0
*/
void sub_8ab980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab980ULL || rel >= 0x8ab990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab990 size=16 callers=0 calls=0
*/
void sub_8ab990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab990ULL || rel >= 0x8ab9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab9a0 size=16 callers=0 calls=0
*/
void sub_8ab9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab9a0ULL || rel >= 0x8ab9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab9b0 size=16 callers=0 calls=0
*/
void sub_8ab9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab9b0ULL || rel >= 0x8ab9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab9c0 size=16 callers=0 calls=0
*/
void sub_8ab9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab9c0ULL || rel >= 0x8ab9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab9d0 size=16 callers=0 calls=0
*/
void sub_8ab9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab9d0ULL || rel >= 0x8ab9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab9e0 size=16 callers=0 calls=0
*/
void sub_8ab9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab9e0ULL || rel >= 0x8ab9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ab9f0 size=16 callers=0 calls=0
*/
void sub_8ab9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ab9f0ULL || rel >= 0x8aba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aba00 size=16 callers=0 calls=0
*/
void sub_8aba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aba00ULL || rel >= 0x8aba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aba10 size=16 callers=0 calls=0
*/
void sub_8aba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aba10ULL || rel >= 0x8aba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aba20 size=16 callers=0 calls=0
*/
void sub_8aba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aba20ULL || rel >= 0x8aba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aba30 size=16 callers=0 calls=0
*/
void sub_8aba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aba30ULL || rel >= 0x8aba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aba40 size=16 callers=0 calls=0
*/
void sub_8aba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aba40ULL || rel >= 0x8aba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aba50 size=16 callers=0 calls=0
*/
void sub_8aba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aba50ULL || rel >= 0x8aba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aba60 size=16 callers=0 calls=0
*/
void sub_8aba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aba60ULL || rel >= 0x8aba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aba70 size=16 callers=0 calls=0
*/
void sub_8aba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aba70ULL || rel >= 0x8aba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aba80 size=16 callers=0 calls=0
*/
void sub_8aba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aba80ULL || rel >= 0x8aba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aba90 size=16 callers=0 calls=0
*/
void sub_8aba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aba90ULL || rel >= 0x8abaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abaa0 size=16 callers=0 calls=0
*/
void sub_8abaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abaa0ULL || rel >= 0x8abab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abab0 size=16 callers=0 calls=0
*/
void sub_8abab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abab0ULL || rel >= 0x8abac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abac0 size=16 callers=0 calls=0
*/
void sub_8abac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abac0ULL || rel >= 0x8abad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abad0 size=16 callers=0 calls=0
*/
void sub_8abad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abad0ULL || rel >= 0x8abae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abae0 size=16 callers=0 calls=0
*/
void sub_8abae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abae0ULL || rel >= 0x8abaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abaf0 size=16 callers=0 calls=0
*/
void sub_8abaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abaf0ULL || rel >= 0x8abb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abb00 size=16 callers=0 calls=0
*/
void sub_8abb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abb00ULL || rel >= 0x8abb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abb10 size=16 callers=0 calls=0
*/
void sub_8abb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abb10ULL || rel >= 0x8abb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abb20 size=16 callers=0 calls=0
*/
void sub_8abb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abb20ULL || rel >= 0x8abb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abb30 size=16 callers=0 calls=0
*/
void sub_8abb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abb30ULL || rel >= 0x8abb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abb40 size=16 callers=0 calls=0
*/
void sub_8abb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abb40ULL || rel >= 0x8abb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abb50 size=16 callers=0 calls=0
*/
void sub_8abb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abb50ULL || rel >= 0x8abb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abb60 size=16 callers=0 calls=0
*/
void sub_8abb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abb60ULL || rel >= 0x8abb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abb70 size=16 callers=0 calls=0
*/
void sub_8abb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abb70ULL || rel >= 0x8abb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abb80 size=16 callers=0 calls=0
*/
void sub_8abb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abb80ULL || rel >= 0x8abb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abb90 size=16 callers=0 calls=0
*/
void sub_8abb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abb90ULL || rel >= 0x8abba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abba0 size=16 callers=0 calls=0
*/
void sub_8abba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abba0ULL || rel >= 0x8abbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abbb0 size=16 callers=0 calls=0
*/
void sub_8abbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abbb0ULL || rel >= 0x8abbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abbc0 size=16 callers=0 calls=0
*/
void sub_8abbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abbc0ULL || rel >= 0x8abbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abbd0 size=208 callers=0 calls=1
   calls: sub_7dfde0
*/
void sub_8abbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abbd0ULL || rel >= 0x8abca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abca0 size=208 callers=0 calls=1
   calls: sub_7dfde0
*/
void sub_8abca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abca0ULL || rel >= 0x8abd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abd70 size=128 callers=0 calls=0
*/
void sub_8abd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abd70ULL || rel >= 0x8abdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abdf0 size=336 callers=5 calls=0
*/
void sub_8abdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abdf0ULL || rel >= 0x8abf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abf40 size=16 callers=0 calls=0
*/
void sub_8abf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abf40ULL || rel >= 0x8abf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abf50 size=16 callers=0 calls=0
*/
void sub_8abf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abf50ULL || rel >= 0x8abf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abf60 size=16 callers=0 calls=0
*/
void sub_8abf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abf60ULL || rel >= 0x8abf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abf70 size=16 callers=0 calls=0
*/
void sub_8abf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abf70ULL || rel >= 0x8abf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abf80 size=64 callers=8 calls=0
*/
void sub_8abf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abf80ULL || rel >= 0x8abfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008abfc0 size=80 callers=3 calls=0
*/
void sub_8abfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8abfc0ULL || rel >= 0x8ac010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac010 size=80 callers=1 calls=0
*/
void sub_8ac010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac010ULL || rel >= 0x8ac060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac060 size=112 callers=1 calls=0
*/
void sub_8ac060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac060ULL || rel >= 0x8ac0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac0d0 size=112 callers=1 calls=0
*/
void sub_8ac0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac0d0ULL || rel >= 0x8ac140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac140 size=112 callers=4 calls=0
*/
void sub_8ac140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac140ULL || rel >= 0x8ac1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac1b0 size=64 callers=1 calls=0
*/
void sub_8ac1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac1b0ULL || rel >= 0x8ac1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac1f0 size=64 callers=4 calls=1
   calls: sub_8ac230
*/
void sub_8ac1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac1f0ULL || rel >= 0x8ac230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac230 size=288 callers=2 calls=0
*/
void sub_8ac230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac230ULL || rel >= 0x8ac350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac350 size=208 callers=6 calls=0
*/
void sub_8ac350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac350ULL || rel >= 0x8ac420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac420 size=224 callers=7 calls=0
*/
void sub_8ac420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac420ULL || rel >= 0x8ac500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac500 size=144 callers=7 calls=0
*/
void sub_8ac500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac500ULL || rel >= 0x8ac590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac590 size=64 callers=9 calls=1
   calls: sub_8ac230
*/
void sub_8ac590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac590ULL || rel >= 0x8ac5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac5d0 size=32 callers=3 calls=0
*/
void sub_8ac5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac5d0ULL || rel >= 0x8ac5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac5f0 size=160 callers=1 calls=0
*/
void sub_8ac5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac5f0ULL || rel >= 0x8ac690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac690 size=16 callers=0 calls=0
*/
void sub_8ac690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac690ULL || rel >= 0x8ac6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac6a0 size=16 callers=0 calls=0
*/
void sub_8ac6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac6a0ULL || rel >= 0x8ac6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac6b0 size=16 callers=0 calls=0
*/
void sub_8ac6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac6b0ULL || rel >= 0x8ac6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac6c0 size=16 callers=0 calls=0
*/
void sub_8ac6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac6c0ULL || rel >= 0x8ac6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac6d0 size=128 callers=5 calls=1
   calls: sub_7ccf30
*/
void sub_8ac6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac6d0ULL || rel >= 0x8ac750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac750 size=48 callers=1 calls=0
*/
void sub_8ac750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac750ULL || rel >= 0x8ac780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac780 size=128 callers=0 calls=0
*/
void sub_8ac780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac780ULL || rel >= 0x8ac800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac800 size=32 callers=1 calls=0
*/
void sub_8ac800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac800ULL || rel >= 0x8ac820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac820 size=48 callers=0 calls=0
*/
void sub_8ac820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac820ULL || rel >= 0x8ac850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac850 size=48 callers=1 calls=0
*/
void sub_8ac850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac850ULL || rel >= 0x8ac880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac880 size=96 callers=0 calls=0
*/
void sub_8ac880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac880ULL || rel >= 0x8ac8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac8e0 size=96 callers=0 calls=0
*/
void sub_8ac8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac8e0ULL || rel >= 0x8ac940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac940 size=160 callers=2 calls=0
*/
void sub_8ac940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac940ULL || rel >= 0x8ac9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ac9e0 size=32 callers=2 calls=0
*/
void sub_8ac9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ac9e0ULL || rel >= 0x8aca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aca00 size=336 callers=2 calls=4
   calls: sub_7cb720, sub_7ccf30, sub_8ac750, sub_8ac800
*/
void sub_8aca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aca00ULL || rel >= 0x8acb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008acb50 size=16 callers=2 calls=0
*/
void sub_8acb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8acb50ULL || rel >= 0x8acb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008acb60 size=128 callers=0 calls=0
*/
void sub_8acb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8acb60ULL || rel >= 0x8acbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008acbe0 size=16 callers=1 calls=0
*/
void sub_8acbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8acbe0ULL || rel >= 0x8acbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008acbf0 size=64 callers=1 calls=0
*/
void sub_8acbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8acbf0ULL || rel >= 0x8acc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008acc30 size=464 callers=1 calls=7
   calls: sub_7cb4b0, sub_8a7f80, sub_8ace00, sub_8acea0, sub_8acfe0, sub_8ad120, sub_8ad1d0
*/
void sub_8acc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8acc30ULL || rel >= 0x8ace00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ace00 size=160 callers=1 calls=2
   calls: sub_7cb4b0, sub_8a7f80
*/
void sub_8ace00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ace00ULL || rel >= 0x8acea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008acea0 size=320 callers=1 calls=2
   calls: sub_7cd310, sub_8a7f90
*/
void sub_8acea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8acea0ULL || rel >= 0x8acfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008acfe0 size=320 callers=1 calls=2
   calls: sub_7cd3a0, sub_8a7f90
*/
void sub_8acfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8acfe0ULL || rel >= 0x8ad120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad120 size=176 callers=1 calls=2
   calls: sub_8a7f90, sub_8aabb0
*/
void sub_8ad120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad120ULL || rel >= 0x8ad1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad1d0 size=176 callers=1 calls=2
   calls: sub_8a7f90, sub_8aabb0
*/
void sub_8ad1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad1d0ULL || rel >= 0x8ad280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad280 size=128 callers=0 calls=0
*/
void sub_8ad280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad280ULL || rel >= 0x8ad300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad300 size=192 callers=1 calls=0
*/
void sub_8ad300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad300ULL || rel >= 0x8ad3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad3c0 size=112 callers=0 calls=0
*/
void sub_8ad3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad3c0ULL || rel >= 0x8ad430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad430 size=112 callers=0 calls=0
*/
void sub_8ad430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad430ULL || rel >= 0x8ad4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad4a0 size=112 callers=0 calls=0
*/
void sub_8ad4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad4a0ULL || rel >= 0x8ad510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad510 size=112 callers=0 calls=0
*/
void sub_8ad510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad510ULL || rel >= 0x8ad580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad580 size=256 callers=1 calls=1
   calls: sub_8adb30
*/
void sub_8ad580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad580ULL || rel >= 0x8ad680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad680 size=16 callers=1 calls=0
*/
void sub_8ad680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad680ULL || rel >= 0x8ad690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad690 size=16 callers=1 calls=0
*/
void sub_8ad690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad690ULL || rel >= 0x8ad6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad6a0 size=656 callers=1 calls=16
   calls: sub_8ae0c0, sub_8aea60, sub_8aeed0, sub_8af080, sub_8af090, sub_8af100, sub_8af850, sub_8af860, sub_8afc30, sub_8afc40, sub_8b0010, sub_8b0020
   ... +4 more
*/
void sub_8ad6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad6a0ULL || rel >= 0x8ad930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad930 size=16 callers=2 calls=0
*/
void sub_8ad930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad930ULL || rel >= 0x8ad940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad940 size=16 callers=3 calls=0
*/
void sub_8ad940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad940ULL || rel >= 0x8ad950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad950 size=16 callers=2 calls=0
*/
void sub_8ad950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad950ULL || rel >= 0x8ad960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad960 size=96 callers=1 calls=1
   calls: sub_8b16f0
*/
void sub_8ad960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad960ULL || rel >= 0x8ad9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ad9c0 size=80 callers=1 calls=0
*/
void sub_8ad9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ad9c0ULL || rel >= 0x8ada10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ada10 size=16 callers=1 calls=0
*/
void sub_8ada10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ada10ULL || rel >= 0x8ada20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ada20 size=16 callers=1 calls=0
*/
void sub_8ada20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ada20ULL || rel >= 0x8ada30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ada30 size=16 callers=0 calls=0
*/
void sub_8ada30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ada30ULL || rel >= 0x8ada40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ada40 size=16 callers=1 calls=0
*/
void sub_8ada40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ada40ULL || rel >= 0x8ada50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ada50 size=16 callers=1 calls=0
*/
void sub_8ada50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ada50ULL || rel >= 0x8ada60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ada60 size=64 callers=1 calls=0
*/
void sub_8ada60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ada60ULL || rel >= 0x8adaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008adaa0 size=16 callers=1 calls=0
*/
void sub_8adaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8adaa0ULL || rel >= 0x8adab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008adab0 size=128 callers=0 calls=0
*/
void sub_8adab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8adab0ULL || rel >= 0x8adb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008adb30 size=928 callers=1 calls=2
   calls: sub_8b17a0, sub_8b2890
*/
void sub_8adb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8adb30ULL || rel >= 0x8aded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aded0 size=448 callers=1 calls=0
*/
void sub_8aded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aded0ULL || rel >= 0x8ae090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ae090 size=48 callers=0 calls=1
   calls: sub_8aded0
*/
void sub_8ae090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ae090ULL || rel >= 0x8ae0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ae0c0 size=736 callers=1 calls=5
   calls: sub_6ae890, sub_6d7610, sub_8ae3a0, sub_8b2980, sub_8bf810
*/
void sub_8ae0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ae0c0ULL || rel >= 0x8ae3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ae3a0 size=1264 callers=1 calls=8
   calls: sub_5e2350, sub_6be8b0, sub_6bee70, sub_6d0a20, sub_6d1530, sub_6d1540, sub_6d7840, sub_6d7aa0
*/
void sub_8ae3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ae3a0ULL || rel >= 0x8ae890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ae890 size=80 callers=0 calls=2
   calls: sub_6d1070, sub_8ae8e0
*/
void sub_8ae890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ae890ULL || rel >= 0x8ae8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008ae8e0 size=320 callers=1 calls=4
   calls: sub_6d1530, sub_6d7910, sub_89a0f0, sub_8b2540
*/
void sub_8ae8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ae8e0ULL || rel >= 0x8aea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aea20 size=64 callers=0 calls=1
   calls: sub_6d1070
*/
void sub_8aea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aea20ULL || rel >= 0x8aea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aea60 size=16 callers=1 calls=0
*/
void sub_8aea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aea60ULL || rel >= 0x8aea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aea70 size=1120 callers=0 calls=16
   calls: sub_172bd80, sub_6cf5a0, sub_6cf8f0, sub_6cfbd0, sub_6d1070, sub_6d12e0, sub_6d13b0, sub_6d1450, sub_6d1490, sub_6d14f0, sub_6d7d80, sub_6d7e60
   ... +4 more
*/
void sub_8aea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aea70ULL || rel >= 0x8aeed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aeed0 size=144 callers=1 calls=4
   calls: sub_6d1070, sub_8aef60, sub_8bce00, sub_8bce60
*/
void sub_8aeed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aeed0ULL || rel >= 0x8aef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008aef60 size=288 callers=2 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_8b3e90, sub_8b3fb0
*/
void sub_8aef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8aef60ULL || rel >= 0x8af080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008af080 size=16 callers=2 calls=0
*/
void sub_8af080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8af080ULL || rel >= 0x8af090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008af090 size=112 callers=2 calls=3
   calls: sub_8aef60, sub_8bce00, sub_8bce60
*/
void sub_8af090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8af090ULL || rel >= 0x8af100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008af100 size=1584 callers=1 calls=9
   calls: sub_136b860, sub_136b870, sub_65da00, sub_65daf0, sub_6f6640, sub_8af730, sub_8bda80, sub_c70, sub_ce0
*/
void sub_8af100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8af100ULL || rel >= 0x8af730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008af730 size=288 callers=1 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_8b3e90, sub_8b4250
*/
void sub_8af730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8af730ULL || rel >= 0x8af850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008af850 size=16 callers=2 calls=0
*/
void sub_8af850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8af850ULL || rel >= 0x8af860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008af860 size=688 callers=1 calls=9
   calls: sub_65da00, sub_65daf0, sub_6f6640, sub_784e40, sub_784f30, sub_8afb10, sub_8b4e00, sub_c70, sub_ce0
*/
void sub_8af860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8af860ULL || rel >= 0x8afb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008afb10 size=288 callers=1 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_8b3e90, sub_8b4380
*/
void sub_8afb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8afb10ULL || rel >= 0x8afc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008afc30 size=16 callers=1 calls=0
*/
void sub_8afc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8afc30ULL || rel >= 0x8afc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008afc40 size=688 callers=1 calls=9
   calls: sub_65da00, sub_65daf0, sub_6f6640, sub_784e40, sub_784f30, sub_8afef0, sub_8b9050, sub_c70, sub_ce0
*/
void sub_8afc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8afc40ULL || rel >= 0x8afef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008afef0 size=288 callers=1 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_8b3e90, sub_8b44b0
*/
void sub_8afef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8afef0ULL || rel >= 0x8b0010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0010 size=16 callers=1 calls=0
*/
void sub_8b0010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0010ULL || rel >= 0x8b0020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0020 size=576 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_6f6640, sub_8b0260, sub_8b66b0, sub_c70, sub_ce0
*/
void sub_8b0020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0020ULL || rel >= 0x8b0260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0260 size=288 callers=1 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_8b3e90, sub_8b45e0
*/
void sub_8b0260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0260ULL || rel >= 0x8b0380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0380 size=16 callers=1 calls=0
*/
void sub_8b0380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0380ULL || rel >= 0x8b0390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0390 size=48 callers=3 calls=0
*/
void sub_8b0390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0390ULL || rel >= 0x8b03c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b03c0 size=368 callers=0 calls=4
   calls: sub_65da00, sub_65daf0, sub_8b0530, sub_8b5a40
*/
void sub_8b03c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b03c0ULL || rel >= 0x8b0530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0530 size=288 callers=1 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_8b3e90, sub_8b4710
*/
void sub_8b0530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0530ULL || rel >= 0x8b0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0650 size=560 callers=0 calls=7
   calls: sub_65da00, sub_65daf0, sub_6f6640, sub_8b0880, sub_8b8340, sub_c70, sub_ce0
*/
void sub_8b0650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0650ULL || rel >= 0x8b0880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0880 size=288 callers=1 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_8b3e90, sub_8b4840
*/
void sub_8b0880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0880ULL || rel >= 0x8b09a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b09a0 size=80 callers=0 calls=0
*/
void sub_8b09a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b09a0ULL || rel >= 0x8b09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b09f0 size=16 callers=0 calls=0
*/
void sub_8b09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b09f0ULL || rel >= 0x8b0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0a00 size=368 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_8b0b70, sub_8b76c0
*/
void sub_8b0a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0a00ULL || rel >= 0x8b0b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0b70 size=288 callers=1 calls=5
   calls: sub_65da00, sub_65daf0, sub_6d7ab0, sub_8b3e90, sub_8b4970
*/
void sub_8b0b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0b70ULL || rel >= 0x8b0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0c90 size=48 callers=0 calls=0
*/
void sub_8b0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0c90ULL || rel >= 0x8b0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0cc0 size=128 callers=0 calls=0
*/
void sub_8b0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0cc0ULL || rel >= 0x8b0d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0d40 size=128 callers=0 calls=0
*/
void sub_8b0d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0d40ULL || rel >= 0x8b0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0dc0 size=128 callers=0 calls=0
*/
void sub_8b0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0dc0ULL || rel >= 0x8b0e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0e40 size=128 callers=0 calls=0
*/
void sub_8b0e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0e40ULL || rel >= 0x8b0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0ec0 size=32 callers=0 calls=0
*/
void sub_8b0ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0ec0ULL || rel >= 0x8b0ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b0ee0 size=288 callers=0 calls=0
*/
void sub_8b0ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b0ee0ULL || rel >= 0x8b1000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1000 size=32 callers=0 calls=0
*/
void sub_8b1000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1000ULL || rel >= 0x8b1020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1020 size=176 callers=0 calls=0
*/
void sub_8b1020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1020ULL || rel >= 0x8b10d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b10d0 size=176 callers=0 calls=0
*/
void sub_8b10d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b10d0ULL || rel >= 0x8b1180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1180 size=32 callers=0 calls=0
*/
void sub_8b1180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1180ULL || rel >= 0x8b11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b11a0 size=32 callers=0 calls=0
*/
void sub_8b11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b11a0ULL || rel >= 0x8b11c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b11c0 size=80 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_8b11c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b11c0ULL || rel >= 0x8b1210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1210 size=80 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_8b1210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1210ULL || rel >= 0x8b1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1260 size=192 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_8b1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1260ULL || rel >= 0x8b1320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1320 size=192 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_8b1320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1320ULL || rel >= 0x8b13e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b13e0 size=80 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_8b13e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b13e0ULL || rel >= 0x8b1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1430 size=80 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_8b1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1430ULL || rel >= 0x8b1480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1480 size=16 callers=0 calls=0
*/
void sub_8b1480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1480ULL || rel >= 0x8b1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b1490 size=16 callers=0 calls=0
*/
void sub_8b1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b1490ULL || rel >= 0x8b14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b14a0 size=16 callers=0 calls=0
*/
void sub_8b14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b14a0ULL || rel >= 0x8b14b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008b14b0 size=16 callers=0 calls=0
*/
void sub_8b14b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b14b0ULL || rel >= 0x8b14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

