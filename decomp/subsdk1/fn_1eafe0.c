/* subsdk1 functions 001eafe0..00223650 (10 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 001eafe0 size=624 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1eafe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eafe0ULL || rel >= 0x1eb250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eb250 size=240 callers=0 calls=0
*/
void sub_1eb250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eb250ULL || rel >= 0x1eb340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eb340 size=128 callers=0 calls=0
*/
void sub_1eb340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eb340ULL || rel >= 0x1eb3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eb3c0 size=336 callers=0 calls=1
   calls: sub_1bb950
*/
void sub_1eb3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eb3c0ULL || rel >= 0x1eb510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eb510 size=544 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1eb510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eb510ULL || rel >= 0x1eb730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eb730 size=112 callers=0 calls=0
*/
void sub_1eb730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eb730ULL || rel >= 0x1eb7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eb7a0 size=976 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1eb7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eb7a0ULL || rel >= 0x1ebb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ebb70 size=256 callers=0 calls=0
*/
void sub_1ebb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ebb70ULL || rel >= 0x1ebc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ebc70 size=256 callers=0 calls=0
*/
void sub_1ebc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ebc70ULL || rel >= 0x1ebd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ebd70 size=176 callers=0 calls=1
   calls: sub_1bb950
*/
void sub_1ebd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ebd70ULL || rel >= 0x1ebe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ebe20 size=224 callers=0 calls=0
*/
void sub_1ebe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ebe20ULL || rel >= 0x1ebf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ebf00 size=32 callers=0 calls=0
*/
void sub_1ebf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ebf00ULL || rel >= 0x1ebf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ebf20 size=240 callers=0 calls=0
*/
void sub_1ebf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ebf20ULL || rel >= 0x1ec010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec010 size=592 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1ec010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec010ULL || rel >= 0x1ec260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec260 size=128 callers=0 calls=0
*/
void sub_1ec260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec260ULL || rel >= 0x1ec2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec2e0 size=32 callers=0 calls=0
*/
void sub_1ec2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec2e0ULL || rel >= 0x1ec300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec300 size=656 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1ec300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec300ULL || rel >= 0x1ec590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec590 size=80 callers=0 calls=1
   calls: sub_1bb950
*/
void sub_1ec590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec590ULL || rel >= 0x1ec5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec5e0 size=704 callers=0 calls=3
   calls: sub_1bb950, sub_1dec50, sub_9b3d0
*/
void sub_1ec5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec5e0ULL || rel >= 0x1ec8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec8a0 size=1040 callers=0 calls=3
   calls: sub_1bb950, sub_1dec50, sub_9b3d0
*/
void sub_1ec8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec8a0ULL || rel >= 0x1eccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eccb0 size=656 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1eccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eccb0ULL || rel >= 0x1ecf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ecf40 size=672 callers=0 calls=4
   calls: sub_1bb830, sub_1bb950, sub_1de8f0, sub_9ca30
*/
void sub_1ecf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ecf40ULL || rel >= 0x1ed1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed1e0 size=128 callers=0 calls=0
*/
void sub_1ed1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed1e0ULL || rel >= 0x1ed260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed260 size=256 callers=0 calls=0
*/
void sub_1ed260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed260ULL || rel >= 0x1ed360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed360 size=240 callers=0 calls=0
*/
void sub_1ed360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed360ULL || rel >= 0x1ed450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed450 size=208 callers=0 calls=0
*/
void sub_1ed450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed450ULL || rel >= 0x1ed520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed520 size=192 callers=0 calls=0
*/
void sub_1ed520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed520ULL || rel >= 0x1ed5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed5e0 size=784 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1ed5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed5e0ULL || rel >= 0x1ed8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed8f0 size=592 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1ed8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed8f0ULL || rel >= 0x1edb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001edb40 size=1008 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1edb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1edb40ULL || rel >= 0x1edf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001edf30 size=496 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1edf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1edf30ULL || rel >= 0x1ee120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ee120 size=896 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1ee120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ee120ULL || rel >= 0x1ee4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ee4a0 size=96 callers=0 calls=0
*/
void sub_1ee4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ee4a0ULL || rel >= 0x1ee500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ee500 size=912 callers=0 calls=0
*/
void sub_1ee500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ee500ULL || rel >= 0x1ee890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ee890 size=400 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1ee890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ee890ULL || rel >= 0x1eea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eea20 size=688 callers=0 calls=0
*/
void sub_1eea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eea20ULL || rel >= 0x1eecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eecd0 size=400 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1eecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eecd0ULL || rel >= 0x1eee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eee60 size=800 callers=0 calls=0
*/
void sub_1eee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eee60ULL || rel >= 0x1ef180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef180 size=528 callers=0 calls=1
   calls: sub_1dec50
*/
void sub_1ef180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef180ULL || rel >= 0x1ef390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef390 size=512 callers=0 calls=0
*/
void sub_1ef390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef390ULL || rel >= 0x1ef590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef590 size=304 callers=0 calls=0
*/
void sub_1ef590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef590ULL || rel >= 0x1ef6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef6c0 size=672 callers=0 calls=0
*/
void sub_1ef6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef6c0ULL || rel >= 0x1ef960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef960 size=560 callers=0 calls=0
*/
void sub_1ef960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef960ULL || rel >= 0x1efb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001efb90 size=912 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1efb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1efb90ULL || rel >= 0x1eff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001eff20 size=864 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1eff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1eff20ULL || rel >= 0x1f0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0280 size=1104 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1f0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0280ULL || rel >= 0x1f06d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f06d0 size=1056 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1f06d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f06d0ULL || rel >= 0x1f0af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0af0 size=960 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1f0af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0af0ULL || rel >= 0x1f0eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0eb0 size=192 callers=0 calls=0
*/
void sub_1f0eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0eb0ULL || rel >= 0x1f0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0f70 size=144 callers=0 calls=0
*/
void sub_1f0f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0f70ULL || rel >= 0x1f1000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1000 size=864 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1f1000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1000ULL || rel >= 0x1f1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1360 size=944 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1f1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1360ULL || rel >= 0x1f1710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1710 size=912 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1f1710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1710ULL || rel >= 0x1f1aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1aa0 size=912 callers=0 calls=2
   calls: sub_1bb950, sub_9b3d0
*/
void sub_1f1aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1aa0ULL || rel >= 0x1f1e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1e30 size=1792 callers=0 calls=3
   calls: sub_1bb830, sub_1bb950, sub_9b3d0
*/
void sub_1f1e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1e30ULL || rel >= 0x1f2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2530 size=160 callers=0 calls=2
   calls: sub_3afa0, sub_3b000
*/
void sub_1f2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2530ULL || rel >= 0x1f25d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f25d0 size=48 callers=0 calls=0
*/
void sub_1f25d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f25d0ULL || rel >= 0x1f2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2600 size=128 callers=0 calls=0
*/
void sub_1f2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2600ULL || rel >= 0x1f2680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2680 size=16 callers=0 calls=0
*/
void sub_1f2680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2680ULL || rel >= 0x1f2690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2690 size=80 callers=0 calls=0
*/
void sub_1f2690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2690ULL || rel >= 0x1f26e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f26e0 size=1696 callers=0 calls=3
   calls: sub_1bbbb0, sub_1bbd50, sub_1c04e0
*/
void sub_1f26e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f26e0ULL || rel >= 0x1f2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2d80 size=16 callers=0 calls=0
*/
void sub_1f2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2d80ULL || rel >= 0x1f2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2d90 size=64 callers=0 calls=0
*/
void sub_1f2d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2d90ULL || rel >= 0x1f2dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2dd0 size=512 callers=0 calls=2
   calls: sub_12ec00, sub_9bed0
*/
void sub_1f2dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2dd0ULL || rel >= 0x1f2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2fd0 size=288 callers=10 calls=1
   calls: sub_12ec00
*/
void sub_1f2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2fd0ULL || rel >= 0x1f30f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f30f0 size=224 callers=1 calls=1
   calls: sub_12ec00
*/
void sub_1f30f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f30f0ULL || rel >= 0x1f31d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f31d0 size=224 callers=1 calls=3
   calls: sub_a7800, sub_a92d0, sub_a9a30
*/
void sub_1f31d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f31d0ULL || rel >= 0x1f32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f32b0 size=480 callers=2 calls=6
   calls: sub_1f30f0, sub_9a050, sub_9b920, sub_a8030, sub_a8080, sub_a92d0
*/
void sub_1f32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f32b0ULL || rel >= 0x1f3490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3490 size=288 callers=4 calls=2
   calls: sub_9b920, sub_a8210
*/
void sub_1f3490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3490ULL || rel >= 0x1f35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f35b0 size=2400 callers=1 calls=11
   calls: sub_1f2fd0, sub_1f32b0, sub_1f3490, sub_669c0, sub_669f0, sub_9b920, sub_a7150, sub_a7800, sub_a8030, sub_a8210, sub_a92d0
*/
void sub_1f35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f35b0ULL || rel >= 0x1f3f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3f10 size=352 callers=1 calls=5
   calls: sub_1f2fd0, sub_1f32b0, sub_669c0, sub_669f0, sub_a92d0
*/
void sub_1f3f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3f10ULL || rel >= 0x1f4070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4070 size=304 callers=1 calls=2
   calls: sub_9bed0, sub_a8960
*/
void sub_1f4070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4070ULL || rel >= 0x1f41a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f41a0 size=416 callers=1 calls=2
   calls: sub_9b920, sub_a70d0
*/
void sub_1f41a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f41a0ULL || rel >= 0x1f4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4340 size=384 callers=1 calls=1
   calls: sub_12ec00
*/
void sub_1f4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4340ULL || rel >= 0x1f44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f44c0 size=1648 callers=1 calls=16
   calls: sub_12ec00, sub_1f31d0, sub_1f35b0, sub_1f3f10, sub_1f4070, sub_1f41a0, sub_1f4340, sub_1f5540, sub_3550, sub_3ce70, sub_3ceb0, sub_3d120
   ... +4 more
*/
void sub_1f44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f44c0ULL || rel >= 0x1f4b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4b30 size=656 callers=0 calls=4
   calls: sub_1f44c0, sub_3550, sub_3870, sub_9a050
*/
void sub_1f4b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4b30ULL || rel >= 0x1f4dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4dc0 size=320 callers=0 calls=2
   calls: sub_11d890, sub_128540
*/
void sub_1f4dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4dc0ULL || rel >= 0x1f4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4f00 size=16 callers=0 calls=0
*/
void sub_1f4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4f00ULL || rel >= 0x1f4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4f10 size=16 callers=0 calls=0
*/
void sub_1f4f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4f10ULL || rel >= 0x1f4f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4f20 size=48 callers=0 calls=0
*/
void sub_1f4f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4f20ULL || rel >= 0x1f4f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4f50 size=32 callers=0 calls=0
*/
void sub_1f4f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4f50ULL || rel >= 0x1f4f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4f70 size=64 callers=0 calls=0
*/
void sub_1f4f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4f70ULL || rel >= 0x1f4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4fb0 size=16 callers=0 calls=0
*/
void sub_1f4fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4fb0ULL || rel >= 0x1f4fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4fc0 size=48 callers=0 calls=0
*/
void sub_1f4fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4fc0ULL || rel >= 0x1f4ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4ff0 size=80 callers=0 calls=0
*/
void sub_1f4ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4ff0ULL || rel >= 0x1f5040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5040 size=160 callers=0 calls=0
*/
void sub_1f5040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5040ULL || rel >= 0x1f50e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f50e0 size=160 callers=0 calls=0
*/
void sub_1f50e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f50e0ULL || rel >= 0x1f5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5180 size=64 callers=0 calls=0
*/
void sub_1f5180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5180ULL || rel >= 0x1f51c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f51c0 size=48 callers=0 calls=0
*/
void sub_1f51c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f51c0ULL || rel >= 0x1f51f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f51f0 size=16 callers=0 calls=0
*/
void sub_1f51f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f51f0ULL || rel >= 0x1f5200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5200 size=64 callers=0 calls=0
*/
void sub_1f5200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5200ULL || rel >= 0x1f5240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5240 size=96 callers=0 calls=0
*/
void sub_1f5240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5240ULL || rel >= 0x1f52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f52a0 size=80 callers=0 calls=0
*/
void sub_1f52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f52a0ULL || rel >= 0x1f52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f52f0 size=64 callers=0 calls=0
*/
void sub_1f52f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f52f0ULL || rel >= 0x1f5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5330 size=96 callers=0 calls=0
*/
void sub_1f5330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5330ULL || rel >= 0x1f5390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5390 size=176 callers=0 calls=0
*/
void sub_1f5390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5390ULL || rel >= 0x1f5440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5440 size=192 callers=0 calls=0
*/
void sub_1f5440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5440ULL || rel >= 0x1f5500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5500 size=64 callers=0 calls=0
*/
void sub_1f5500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5500ULL || rel >= 0x1f5540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5540 size=576 callers=5 calls=1
   calls: sub_1f5780
*/
void sub_1f5540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5540ULL || rel >= 0x1f5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5780 size=624 callers=1 calls=0
*/
void sub_1f5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5780ULL || rel >= 0x1f59f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f59f0 size=32 callers=7 calls=0
*/
void sub_1f59f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f59f0ULL || rel >= 0x1f5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5a10 size=2096 callers=4 calls=16
   calls: sub_13e070, sub_1789d0, sub_18fe90, sub_1f6240, sub_1f6350, sub_1f6810, sub_1f6cd0, sub_1f6e00, sub_1f6f70, sub_66820, sub_9b3d0, sub_a7150
   ... +4 more
*/
void sub_1f5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5a10ULL || rel >= 0x1f6240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6240 size=272 callers=1 calls=2
   calls: sub_63c30, sub_a92d0
*/
void sub_1f6240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6240ULL || rel >= 0x1f6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6350 size=1216 callers=1 calls=4
   calls: sub_1789d0, sub_63c30, sub_9a740, sub_a92d0
*/
void sub_1f6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6350ULL || rel >= 0x1f6810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6810 size=1216 callers=1 calls=3
   calls: sub_18fe90, sub_88b40, sub_9b3d0
*/
void sub_1f6810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6810ULL || rel >= 0x1f6cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6cd0 size=304 callers=1 calls=2
   calls: sub_1789d0, sub_a92d0
*/
void sub_1f6cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6cd0ULL || rel >= 0x1f6e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6e00 size=368 callers=1 calls=4
   calls: sub_1f88d0, sub_1f8900, sub_68160, sub_88b40
*/
void sub_1f6e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6e00ULL || rel >= 0x1f6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6f70 size=416 callers=1 calls=3
   calls: sub_a7050, sub_a92d0, sub_a9a30
*/
void sub_1f6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6f70ULL || rel >= 0x1f7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7110 size=1584 callers=1 calls=11
   calls: sub_1f7740, sub_3d960, sub_3db80, sub_66820, sub_88b40, sub_9a050, sub_9a740, sub_a92d0, sub_a9a30, sub_bbc80, sub_bc030
*/
void sub_1f7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7110ULL || rel >= 0x1f7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7740 size=240 callers=2 calls=3
   calls: sub_9b3e0, sub_a92d0, sub_a9a30
*/
void sub_1f7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7740ULL || rel >= 0x1f7830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7830 size=288 callers=4 calls=4
   calls: sub_9a050, sub_9b3e0, sub_a7800, sub_a92e0
*/
void sub_1f7830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7830ULL || rel >= 0x1f7950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7950 size=768 callers=1 calls=7
   calls: sub_126f00, sub_1f7830, sub_9bed0, sub_a7800, sub_a92d0, sub_a9a30, sub_a9df0
*/
void sub_1f7950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7950ULL || rel >= 0x1f7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7c50 size=672 callers=1 calls=5
   calls: sub_126f00, sub_1f7830, sub_a7050, sub_a82d0, sub_a9a30
*/
void sub_1f7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7c50ULL || rel >= 0x1f7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7ef0 size=512 callers=1 calls=4
   calls: sub_126f00, sub_1f7950, sub_1f7c50, sub_8f0c0
*/
void sub_1f7ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7ef0ULL || rel >= 0x1f80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f80f0 size=1168 callers=1 calls=9
   calls: sub_88b40, sub_9a050, sub_a7150, sub_a7890, sub_a7a30, sub_a81c0, sub_a82d0, sub_a92d0, sub_a9a30
*/
void sub_1f80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f80f0ULL || rel >= 0x1f8580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8580 size=848 callers=1 calls=3
   calls: sub_88b40, sub_a92d0, sub_a9a30
*/
void sub_1f8580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8580ULL || rel >= 0x1f88d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f88d0 size=48 callers=1 calls=0
*/
void sub_1f88d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f88d0ULL || rel >= 0x1f8900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8900 size=272 callers=1 calls=2
   calls: sub_1789d0, sub_a92e0
*/
void sub_1f8900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8900ULL || rel >= 0x1f8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8a10 size=2320 callers=1 calls=10
   calls: sub_3870, sub_3890, sub_38b0, sub_3d090, sub_61e80, sub_66f90, sub_9a050, sub_9ae40, sub_a7800, sub_a8080
*/
void sub_1f8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8a10ULL || rel >= 0x1f9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9320 size=336 callers=1 calls=1
   calls: sub_14ba10
*/
void sub_1f9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9320ULL || rel >= 0x1f9470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9470 size=240 callers=1 calls=1
   calls: sub_63580
*/
void sub_1f9470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9470ULL || rel >= 0x1f9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9560 size=848 callers=1 calls=2
   calls: sub_14ba10, sub_635b0
*/
void sub_1f9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9560ULL || rel >= 0x1f98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f98b0 size=1392 callers=1 calls=3
   calls: sub_14ba10, sub_61e80, sub_9b3d0
*/
void sub_1f98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f98b0ULL || rel >= 0x1f9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9e20 size=2560 callers=1 calls=9
   calls: sub_129410, sub_14ba10, sub_3870, sub_620d0, sub_62240, sub_9b3d0, sub_9b3e0, sub_a7800, sub_e7a30
*/
void sub_1f9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9e20ULL || rel >= 0x1fa820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa820 size=128 callers=4 calls=2
   calls: sub_9b3e0, sub_a7800
*/
void sub_1fa820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa820ULL || rel >= 0x1fa8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa8a0 size=2384 callers=1 calls=16
   calls: sub_14ba10, sub_1f9320, sub_1f9560, sub_1f98b0, sub_1f9e20, sub_1fa820, sub_1fb220, sub_1fb290, sub_3550, sub_3d090, sub_650d0, sub_8aa10
   ... +4 more
*/
void sub_1fa8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa8a0ULL || rel >= 0x1fb1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb1f0 size=48 callers=0 calls=0
*/
void sub_1fb1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb1f0ULL || rel >= 0x1fb220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb220 size=112 callers=3 calls=1
   calls: sub_1fb220
*/
void sub_1fb220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb220ULL || rel >= 0x1fb290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb290 size=400 callers=1 calls=4
   calls: sub_1fe830, sub_1fe980, sub_3870, sub_3d960
*/
void sub_1fb290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb290ULL || rel >= 0x1fb420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb420 size=32 callers=0 calls=0
*/
void sub_1fb420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb420ULL || rel >= 0x1fb440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb440 size=976 callers=2 calls=1
   calls: sub_3870
*/
void sub_1fb440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb440ULL || rel >= 0x1fb810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb810 size=976 callers=1 calls=4
   calls: sub_14ba10, sub_200030, sub_66f90, sub_9ae80
*/
void sub_1fb810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb810ULL || rel >= 0x1fbbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fbbe0 size=16 callers=0 calls=0
*/
void sub_1fbbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fbbe0ULL || rel >= 0x1fbbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fbbf0 size=1424 callers=4 calls=7
   calls: sub_1fb810, sub_200030, sub_9a050, sub_9b3d0, sub_9c950, sub_a7090, sub_a9df0
*/
void sub_1fbbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fbbf0ULL || rel >= 0x1fc180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc180 size=1184 callers=1 calls=8
   calls: sub_1fc620, sub_61e80, sub_9ae80, sub_9b3e0, sub_a70d0, sub_a7800, sub_a8110, sub_a8960
*/
void sub_1fc180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc180ULL || rel >= 0x1fc620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc620 size=384 callers=3 calls=5
   calls: sub_9a050, sub_9b3e0, sub_a7090, sub_a7800, sub_a7850
*/
void sub_1fc620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc620ULL || rel >= 0x1fc7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc7a0 size=2144 callers=1 calls=13
   calls: sub_14ba10, sub_1fa820, sub_1fc180, sub_200060, sub_9a050, sub_9ae80, sub_9b3e0, sub_9bed0, sub_a7090, sub_a70d0, sub_a7800, sub_a7890
   ... +1 more
*/
void sub_1fc7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc7a0ULL || rel >= 0x1fd000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd000 size=1344 callers=1 calls=10
   calls: sub_1fbbf0, sub_1fd540, sub_1fd630, sub_200060, sub_680e0, sub_999f0, sub_a7050, sub_a8320, sub_a92d0, sub_a9a30
   ref: Guard view computation around %d and %d 
*/
void Guard_view_computation_around_d_and_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd000ULL || rel >= 0x1fd540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd540 size=240 callers=3 calls=1
   calls: sub_99e90
*/
void sub_1fd540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd540ULL || rel >= 0x1fd630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd630 size=400 callers=4 calls=2
   calls: sub_a7050, sub_a8320
*/
void sub_1fd630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd630ULL || rel >= 0x1fd7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd7c0 size=336 callers=1 calls=2
   calls: sub_a8320, sub_a9a30
*/
void sub_1fd7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd7c0ULL || rel >= 0x1fd910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd910 size=880 callers=1 calls=9
   calls: sub_1fbbf0, sub_1fd540, sub_1fd630, sub_3870, sub_652b0, sub_68060, sub_8b490, sub_a92d0, sub_aa640
*/
void sub_1fd910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd910ULL || rel >= 0x1fdc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fdc80 size=1088 callers=0 calls=9
   calls: Guard_view_computation_around_d_and_d, sub_1fbbf0, sub_1fc7a0, sub_1fd7c0, sub_1fd910, sub_9b3e0, sub_9bed0, sub_9c950, sub_a7090
*/
void sub_1fdc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fdc80ULL || rel >= 0x1fe0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fe0c0 size=160 callers=1 calls=3
   calls: sub_1f9470, sub_1fa8a0, sub_1fb440
*/
void sub_1fe0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fe0c0ULL || rel >= 0x1fe160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fe160 size=272 callers=1 calls=2
   calls: sub_1fe270, sub_3890
*/
void sub_1fe160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fe160ULL || rel >= 0x1fe270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fe270 size=576 callers=2 calls=5
   calls: sub_3550, sub_3870, sub_3890, sub_3d090, sub_3d960
*/
void sub_1fe270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fe270ULL || rel >= 0x1fe4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fe4b0 size=352 callers=1 calls=2
   calls: sub_1fe270, sub_3890
*/
void sub_1fe4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fe4b0ULL || rel >= 0x1fe610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fe610 size=400 callers=0 calls=5
   calls: sub_1f8a10, sub_1fe0c0, sub_1fe160, sub_3550, sub_9bed0
*/
void sub_1fe610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fe610ULL || rel >= 0x1fe7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fe7a0 size=96 callers=0 calls=0
*/
void sub_1fe7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fe7a0ULL || rel >= 0x1fe800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fe800 size=48 callers=0 calls=0
*/
void sub_1fe800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fe800ULL || rel >= 0x1fe830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fe830 size=272 callers=1 calls=0
*/
void sub_1fe830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fe830ULL || rel >= 0x1fe940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fe940 size=64 callers=0 calls=0
*/
void sub_1fe940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fe940ULL || rel >= 0x1fe980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fe980 size=576 callers=1 calls=1
   calls: sub_1febc0
*/
void sub_1fe980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fe980ULL || rel >= 0x1febc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001febc0 size=592 callers=1 calls=0
*/
void sub_1febc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1febc0ULL || rel >= 0x1fee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fee10 size=64 callers=0 calls=0
*/
void sub_1fee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fee10ULL || rel >= 0x1fee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fee50 size=48 callers=0 calls=0
*/
void sub_1fee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fee50ULL || rel >= 0x1fee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fee80 size=16 callers=0 calls=0
*/
void sub_1fee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fee80ULL || rel >= 0x1fee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fee90 size=96 callers=0 calls=0
*/
void sub_1fee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fee90ULL || rel >= 0x1feef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001feef0 size=80 callers=0 calls=0
*/
void sub_1feef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1feef0ULL || rel >= 0x1fef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fef40 size=64 callers=0 calls=0
*/
void sub_1fef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fef40ULL || rel >= 0x1fef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fef80 size=96 callers=0 calls=0
*/
void sub_1fef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fef80ULL || rel >= 0x1fefe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fefe0 size=176 callers=0 calls=0
*/
void sub_1fefe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fefe0ULL || rel >= 0x1ff090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff090 size=192 callers=0 calls=0
*/
void sub_1ff090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff090ULL || rel >= 0x1ff150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff150 size=64 callers=0 calls=0
*/
void sub_1ff150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff150ULL || rel >= 0x1ff190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff190 size=80 callers=0 calls=0
*/
void sub_1ff190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff190ULL || rel >= 0x1ff1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff1e0 size=96 callers=0 calls=0
*/
void sub_1ff1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff1e0ULL || rel >= 0x1ff240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff240 size=112 callers=0 calls=0
*/
void sub_1ff240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff240ULL || rel >= 0x1ff2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff2b0 size=128 callers=0 calls=0
*/
void sub_1ff2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff2b0ULL || rel >= 0x1ff330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff330 size=80 callers=0 calls=0
*/
void sub_1ff330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff330ULL || rel >= 0x1ff380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff380 size=80 callers=0 calls=0
*/
void sub_1ff380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff380ULL || rel >= 0x1ff3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff3d0 size=80 callers=0 calls=0
*/
void sub_1ff3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff3d0ULL || rel >= 0x1ff420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff420 size=192 callers=0 calls=0
*/
void sub_1ff420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff420ULL || rel >= 0x1ff4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff4e0 size=192 callers=0 calls=0
*/
void sub_1ff4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff4e0ULL || rel >= 0x1ff5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff5a0 size=80 callers=0 calls=0
*/
void sub_1ff5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff5a0ULL || rel >= 0x1ff5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff5f0 size=64 callers=0 calls=0
*/
void sub_1ff5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff5f0ULL || rel >= 0x1ff630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff630 size=48 callers=0 calls=0
*/
void sub_1ff630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff630ULL || rel >= 0x1ff660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff660 size=16 callers=0 calls=0
*/
void sub_1ff660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff660ULL || rel >= 0x1ff670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff670 size=64 callers=0 calls=0
*/
void sub_1ff670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff670ULL || rel >= 0x1ff6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff6b0 size=96 callers=0 calls=0
*/
void sub_1ff6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff6b0ULL || rel >= 0x1ff710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff710 size=80 callers=0 calls=0
*/
void sub_1ff710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff710ULL || rel >= 0x1ff760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff760 size=64 callers=0 calls=0
*/
void sub_1ff760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff760ULL || rel >= 0x1ff7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff7a0 size=96 callers=0 calls=0
*/
void sub_1ff7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff7a0ULL || rel >= 0x1ff800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff800 size=176 callers=0 calls=0
*/
void sub_1ff800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff800ULL || rel >= 0x1ff8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff8b0 size=192 callers=0 calls=0
*/
void sub_1ff8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff8b0ULL || rel >= 0x1ff970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff970 size=64 callers=0 calls=0
*/
void sub_1ff970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff970ULL || rel >= 0x1ff9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ff9b0 size=80 callers=0 calls=0
*/
void sub_1ff9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ff9b0ULL || rel >= 0x1ffa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffa00 size=96 callers=0 calls=0
*/
void sub_1ffa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffa00ULL || rel >= 0x1ffa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffa60 size=112 callers=0 calls=0
*/
void sub_1ffa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffa60ULL || rel >= 0x1ffad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffad0 size=128 callers=0 calls=0
*/
void sub_1ffad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffad0ULL || rel >= 0x1ffb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffb50 size=80 callers=0 calls=0
*/
void sub_1ffb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffb50ULL || rel >= 0x1ffba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffba0 size=80 callers=0 calls=0
*/
void sub_1ffba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffba0ULL || rel >= 0x1ffbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffbf0 size=80 callers=0 calls=0
*/
void sub_1ffbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffbf0ULL || rel >= 0x1ffc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffc40 size=192 callers=0 calls=0
*/
void sub_1ffc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffc40ULL || rel >= 0x1ffd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffd00 size=192 callers=0 calls=0
*/
void sub_1ffd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffd00ULL || rel >= 0x1ffdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffdc0 size=80 callers=0 calls=0
*/
void sub_1ffdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffdc0ULL || rel >= 0x1ffe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffe10 size=16 callers=0 calls=0
*/
void sub_1ffe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffe10ULL || rel >= 0x1ffe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffe20 size=16 callers=0 calls=0
*/
void sub_1ffe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffe20ULL || rel >= 0x1ffe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffe30 size=64 callers=0 calls=0
*/
void sub_1ffe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffe30ULL || rel >= 0x1ffe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffe70 size=48 callers=0 calls=0
*/
void sub_1ffe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffe70ULL || rel >= 0x1ffea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffea0 size=80 callers=0 calls=0
*/
void sub_1ffea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffea0ULL || rel >= 0x1ffef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ffef0 size=160 callers=0 calls=0
*/
void sub_1ffef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ffef0ULL || rel >= 0x1fff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fff90 size=160 callers=0 calls=0
*/
void sub_1fff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fff90ULL || rel >= 0x200030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00200030 size=48 callers=2 calls=0
*/
void sub_200030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x200030ULL || rel >= 0x200060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00200060 size=576 callers=2 calls=1
   calls: sub_2002a0
*/
void sub_200060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x200060ULL || rel >= 0x2002a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002002a0 size=592 callers=1 calls=0
*/
void sub_2002a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2002a0ULL || rel >= 0x2004f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002004f0 size=336 callers=1 calls=3
   calls: sub_200640, sub_2007b0, sub_86810
*/
void sub_2004f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2004f0ULL || rel >= 0x200640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00200640 size=368 callers=1 calls=0
*/
void sub_200640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x200640ULL || rel >= 0x2007b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002007b0 size=240 callers=1 calls=5
   calls: sub_2008a0, sub_200980, sub_200dc0, sub_2019e0, sub_201c60
*/
void sub_2007b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2007b0ULL || rel >= 0x2008a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002008a0 size=224 callers=1 calls=1
   calls: sub_a9a30
*/
void sub_2008a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2008a0ULL || rel >= 0x200980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00200980 size=1088 callers=1 calls=14
   calls: sub_201ec0, sub_9a050, sub_9af00, sub_9b3e0, sub_a70d0, sub_a7110, sub_a7150, sub_a7800, sub_a7890, sub_a7a30, sub_a80d0, sub_a8320
   ... +2 more
*/
void sub_200980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x200980ULL || rel >= 0x200dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00200dc0 size=3104 callers=1 calls=19
   calls: sub_201ec0, sub_201f70, sub_9a050, sub_9ae80, sub_9af00, sub_9b3e0, sub_a6e70, sub_a70d0, sub_a7110, sub_a7150, sub_a7800, sub_a7890
   ... +7 more
*/
void sub_200dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x200dc0ULL || rel >= 0x2019e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002019e0 size=640 callers=1 calls=7
   calls: sub_9a050, sub_9ae80, sub_9b3e0, sub_9bed0, sub_a7890, sub_a80d0, sub_a85c0
*/
void sub_2019e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2019e0ULL || rel >= 0x201c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00201c60 size=608 callers=1 calls=6
   calls: sub_11d890, sub_201ec0, sub_9ae80, sub_9bed0, sub_a7890, sub_a85c0
*/
void sub_201c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x201c60ULL || rel >= 0x201ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00201ec0 size=176 callers=3 calls=3
   calls: sub_9b3e0, sub_a7800, sub_a94f0
*/
void sub_201ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x201ec0ULL || rel >= 0x201f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00201f70 size=1888 callers=2 calls=11
   calls: sub_9ae80, sub_9b3e0, sub_a7050, sub_a7110, sub_a7800, sub_a7890, sub_a7a30, sub_a80d0, sub_a8320, sub_a85c0, sub_a9a30
*/
void sub_201f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x201f70ULL || rel >= 0x2026d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002026d0 size=32 callers=2 calls=0
*/
void sub_2026d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2026d0ULL || rel >= 0x2026f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002026f0 size=336 callers=1 calls=1
   calls: sub_11d890
*/
void sub_2026f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2026f0ULL || rel >= 0x202840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00202840 size=736 callers=2 calls=1
   calls: sub_9b3d0
*/
void sub_202840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x202840ULL || rel >= 0x202b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00202b20 size=720 callers=1 calls=4
   calls: sub_9b3d0, sub_9b3e0, sub_9bed0, sub_a7890
*/
void sub_202b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x202b20ULL || rel >= 0x202df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00202df0 size=880 callers=1 calls=4
   calls: sub_202840, sub_35f0, sub_9b3d0, sub_9bed0
*/
void sub_202df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x202df0ULL || rel >= 0x203160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00203160 size=5280 callers=1 calls=18
   calls: sub_11d890, sub_2026f0, sub_202b20, sub_202df0, sub_35f0, sub_55190, sub_64060, sub_66820, sub_88b40, sub_9a740, sub_9ae80, sub_9b3e0
   ... +6 more
*/
void sub_203160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x203160ULL || rel >= 0x204600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00204600 size=1712 callers=1 calls=11
   calls: sub_118d80, sub_9a740, sub_9adb0, sub_9ae80, sub_9b3e0, sub_9bed0, sub_a70d0, sub_a80d0, sub_a85c0, sub_a8960, sub_a92d0
*/
void sub_204600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x204600ULL || rel >= 0x204cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00204cb0 size=448 callers=1 calls=5
   calls: sub_9ae80, sub_9b3e0, sub_a7890, sub_a81c0, sub_a8960
*/
void sub_204cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x204cb0ULL || rel >= 0x204e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00204e70 size=64 callers=14 calls=0
*/
void sub_204e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x204e70ULL || rel >= 0x204eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00204eb0 size=1040 callers=1 calls=9
   calls: sub_2052c0, sub_2080b0, sub_208390, sub_20a4c0, sub_67cd0, sub_68090, sub_88b40, sub_9bed0, sub_e0110
*/
void sub_204eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x204eb0ULL || rel >= 0x2052c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002052c0 size=416 callers=1 calls=4
   calls: sub_3870, sub_3890, sub_b7e20, sub_b89a0
*/
void sub_2052c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2052c0ULL || rel >= 0x205460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00205460 size=368 callers=1 calls=1
   calls: sub_3870
*/
void sub_205460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205460ULL || rel >= 0x2055d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002055d0 size=32 callers=3 calls=0
*/
void sub_2055d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2055d0ULL || rel >= 0x2055f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002055f0 size=32 callers=2 calls=0
*/
void sub_2055f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2055f0ULL || rel >= 0x205610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00205610 size=32 callers=1 calls=0
*/
void sub_205610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205610ULL || rel >= 0x205630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00205630 size=32 callers=4 calls=0
*/
void sub_205630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205630ULL || rel >= 0x205650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00205650 size=16 callers=3 calls=0
*/
void sub_205650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205650ULL || rel >= 0x205660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00205660 size=16 callers=4 calls=0
*/
void sub_205660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205660ULL || rel >= 0x205670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00205670 size=208 callers=1 calls=1
   calls: sub_3870
*/
void sub_205670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205670ULL || rel >= 0x205740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00205740 size=208 callers=1 calls=1
   calls: sub_3870
*/
void sub_205740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205740ULL || rel >= 0x205810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00205810 size=432 callers=3 calls=1
   calls: sub_3870
*/
void sub_205810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205810ULL || rel >= 0x2059c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002059c0 size=32 callers=2 calls=0
*/
void sub_2059c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2059c0ULL || rel >= 0x2059e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002059e0 size=240 callers=2 calls=0
*/
void sub_2059e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2059e0ULL || rel >= 0x205ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00205ad0 size=320 callers=4 calls=1
   calls: sub_2059e0
*/
void sub_205ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205ad0ULL || rel >= 0x205c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00205c10 size=528 callers=1 calls=2
   calls: sub_3870, sub_3890
*/
void sub_205c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205c10ULL || rel >= 0x205e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00205e20 size=480 callers=2 calls=4
   calls: sub_206000, sub_206330, sub_3870, sub_3d090
*/
void sub_205e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x205e20ULL || rel >= 0x206000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00206000 size=352 callers=2 calls=1
   calls: sub_3870
*/
void sub_206000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x206000ULL || rel >= 0x206160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00206160 size=464 callers=5 calls=3
   calls: sub_206330, sub_3cf40, sub_3d960
*/
void sub_206160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x206160ULL || rel >= 0x206330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00206330 size=352 callers=18 calls=1
   calls: sub_3870
*/
void sub_206330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x206330ULL || rel >= 0x206490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00206490 size=480 callers=2 calls=1
   calls: sub_3870
*/
void sub_206490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x206490ULL || rel >= 0x206670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00206670 size=464 callers=1 calls=3
   calls: sub_204e70, sub_206330, sub_67cd0
*/
void sub_206670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x206670ULL || rel >= 0x206840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00206840 size=352 callers=2 calls=3
   calls: sub_204e70, sub_206490, sub_67cd0
*/
void sub_206840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x206840ULL || rel >= 0x2069a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002069a0 size=256 callers=1 calls=1
   calls: sub_2081c0
*/
void sub_2069a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2069a0ULL || rel >= 0x206aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00206aa0 size=688 callers=1 calls=2
   calls: sub_2081c0, sub_3870
*/
void sub_206aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x206aa0ULL || rel >= 0x206d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00206d50 size=2768 callers=1 calls=18
   calls: sub_204e70, sub_2055d0, sub_205630, sub_205670, sub_205740, sub_205810, sub_2059c0, sub_205ad0, sub_205e20, sub_206160, sub_206330, sub_206670
   ... +6 more
*/
void sub_206d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x206d50ULL || rel >= 0x207820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00207820 size=336 callers=1 calls=5
   calls: sub_205610, sub_207970, sub_207a70, sub_207e90, sub_3870
*/
void sub_207820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x207820ULL || rel >= 0x207970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00207970 size=256 callers=1 calls=2
   calls: sub_205630, sub_206330
*/
void sub_207970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x207970ULL || rel >= 0x207a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00207a70 size=1056 callers=1 calls=6
   calls: sub_205630, sub_205ad0, sub_206330, sub_2069a0, sub_206aa0, sub_3870
*/
void sub_207a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x207a70ULL || rel >= 0x207e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00207e90 size=544 callers=1 calls=4
   calls: sub_2055d0, sub_2055f0, sub_206330, sub_3870
*/
void sub_207e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x207e90ULL || rel >= 0x2080b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002080b0 size=256 callers=1 calls=5
   calls: sub_205460, sub_205c10, sub_206d50, sub_207820, sub_3890
*/
void sub_2080b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2080b0ULL || rel >= 0x2081b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002081b0 size=16 callers=0 calls=0
*/
void sub_2081b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2081b0ULL || rel >= 0x2081c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002081c0 size=192 callers=6 calls=2
   calls: sub_2081c0, sub_208280
*/
void sub_2081c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2081c0ULL || rel >= 0x208280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00208280 size=272 callers=1 calls=0
*/
void sub_208280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x208280ULL || rel >= 0x208390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00208390 size=1152 callers=1 calls=6
   calls: sub_20a840, sub_3870, sub_3890, sub_3d090, sub_b7e20, sub_b89a0
*/
void sub_208390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x208390ULL || rel >= 0x208810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00208810 size=320 callers=1 calls=2
   calls: sub_205650, sub_205660
*/
void sub_208810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x208810ULL || rel >= 0x208950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00208950 size=480 callers=0 calls=2
   calls: sub_205650, sub_205660
*/
void sub_208950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x208950ULL || rel >= 0x208b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00208b30 size=336 callers=2 calls=1
   calls: sub_208810
*/
void sub_208b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x208b30ULL || rel >= 0x208c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00208c80 size=896 callers=2 calls=4
   calls: sub_205650, sub_205660, sub_20aa40, sub_3870
*/
void sub_208c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x208c80ULL || rel >= 0x209000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00209000 size=320 callers=3 calls=1
   calls: sub_a92d0
*/
void sub_209000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x209000ULL || rel >= 0x209140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00209140 size=1232 callers=1 calls=3
   calls: sub_209000, sub_209610, sub_20af50
*/
void sub_209140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x209140ULL || rel >= 0x209610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00209610 size=1216 callers=1 calls=3
   calls: sub_209000, sub_209c30, sub_3890
*/
void sub_209610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x209610ULL || rel >= 0x209ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00209ad0 size=352 callers=1 calls=2
   calls: sub_204e70, sub_67cd0
*/
void sub_209ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x209ad0ULL || rel >= 0x209c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00209c30 size=544 callers=1 calls=3
   calls: sub_204e70, sub_209ad0, sub_67cd0
*/
void sub_209c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x209c30ULL || rel >= 0x209e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00209e50 size=256 callers=1 calls=1
   calls: sub_3d960
*/
void sub_209e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x209e50ULL || rel >= 0x209f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00209f50 size=288 callers=1 calls=2
   calls: sub_204e70, sub_67cd0
*/
void sub_209f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x209f50ULL || rel >= 0x20a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020a070 size=1104 callers=0 calls=12
   calls: sub_2055d0, sub_2055f0, sub_208b30, sub_208c80, sub_209140, sub_209e50, sub_209f50, sub_20a6e0, sub_20aa00, sub_20ac30, sub_20acd0, sub_20adb0
*/
void sub_20a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20a070ULL || rel >= 0x20a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020a4c0 size=16 callers=1 calls=0
*/
void sub_20a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20a4c0ULL || rel >= 0x20a4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020a4d0 size=400 callers=3 calls=2
   calls: sub_1896b0, sub_a92d0
*/
void sub_20a4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20a4d0ULL || rel >= 0x20a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020a660 size=128 callers=0 calls=1
   calls: sub_20a4d0
*/
void sub_20a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20a660ULL || rel >= 0x20a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020a6e0 size=352 callers=1 calls=1
   calls: sub_20a4d0
*/
void sub_20a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20a6e0ULL || rel >= 0x20a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020a840 size=448 callers=1 calls=1
   calls: sub_3890
*/
void sub_20a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20a840ULL || rel >= 0x20aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020aa00 size=64 callers=1 calls=0
*/
void sub_20aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20aa00ULL || rel >= 0x20aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020aa40 size=496 callers=1 calls=2
   calls: sub_204e70, sub_67cd0
*/
void sub_20aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20aa40ULL || rel >= 0x20ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020ac30 size=160 callers=1 calls=0
*/
void sub_20ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20ac30ULL || rel >= 0x20acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020acd0 size=224 callers=1 calls=2
   calls: sub_204e70, sub_67cd0
*/
void sub_20acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20acd0ULL || rel >= 0x20adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020adb0 size=416 callers=1 calls=2
   calls: sub_204e70, sub_67cd0
*/
void sub_20adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20adb0ULL || rel >= 0x20af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020af50 size=192 callers=1 calls=0
*/
void sub_20af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20af50ULL || rel >= 0x20b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b010 size=272 callers=0 calls=7
   calls: OPTION_ATI_draw_buffers, OPTION_NV_internal, sub_10e8d0, sub_10e9a0, sub_10eb30, sub_1a6c0, sub_1a780
   ref: OPTION NV_texture_multisample;
   ref: OPTION NV_parameter_buffer_object2;
   ref: OPTION ARB_draw_buffers;
   ref: OPTION ARB_fragment_layer_viewport;
   ref: OPTION NV_explicit_multisample;
   ref: OPTION ARB_blend_func_extended;
   ref: OPTION ARB_fragment_coord_origin_upper_left;
   ref: OPTION ARB_fragment_coord_pixel_center_integer;
*/
void OPTION_ARB_draw_buffers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b010ULL || rel >= 0x20b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b120 size=272 callers=0 calls=5
   calls: OPTION_NV_internal, sub_10ea70, sub_1a6c0, sub_1a780, sub_3fa0
   ref: OPTION NV_texture_multisample;
   ref: PRIMITIVE_IN %s;
   ref: VERTICES_OUT %d;
   ref: OPTION NV_parameter_buffer_object2;
   ref: OPTION ARB_viewport_array;
   ref: OPTION NV_explicit_multisample;
   ref: PRIMITIVE_OUT %s;
*/
void VERTICES_OUT_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b120ULL || rel >= 0x20b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b230 size=160 callers=0 calls=3
   calls: OPTION_NV_internal, sub_1a6c0, sub_1a780
   ref: OPTION NV_texture_multisample;
   ref: OPTION ARB_position_invariant;
   ref: OPTION NV_parameter_buffer_object2;
   ref: OPTION NV_explicit_multisample;
*/
void OPTION_NV_texture_multisample(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b230ULL || rel >= 0x20b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b2d0 size=32 callers=0 calls=0
*/
void sub_20b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b2d0ULL || rel >= 0x20b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b2f0 size=64 callers=0 calls=1
   calls: sub_110f00
*/
void sub_20b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b2f0ULL || rel >= 0x20b330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b330 size=272 callers=0 calls=0
*/
void sub_20b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b330ULL || rel >= 0x20b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b440 size=112 callers=0 calls=1
   calls: sub_f120
*/
void sub_20b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b440ULL || rel >= 0x20b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b4b0 size=80 callers=0 calls=1
   calls: sub_10f770
*/
void sub_20b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b4b0ULL || rel >= 0x20b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b500 size=640 callers=0 calls=4
   calls: combined_use_of_gl_ClipDistance_and_gl_CullDistance_grea, gl_ClipVertex, sub_1e30, sub_1e40
*/
void sub_20b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b500ULL || rel >= 0x20b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b780 size=32 callers=0 calls=0
*/
void sub_20b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b780ULL || rel >= 0x20b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b7a0 size=64 callers=0 calls=1
   calls: sub_10f770
*/
void sub_20b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b7a0ULL || rel >= 0x20b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020b7e0 size=672 callers=0 calls=4
   calls: combined_use_of_gl_ClipDistance_and_gl_CullDistance_grea, gl_ClipVertex, sub_1e30, sub_1e40
*/
void sub_20b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20b7e0ULL || rel >= 0x20ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020ba80 size=320 callers=0 calls=8
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: !!NVfp4.0
*/
void NVfp4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20ba80ULL || rel >= 0x20bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020bbc0 size=320 callers=0 calls=8
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: !!NVfp4.1
*/
void NVfp4_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20bbc0ULL || rel >= 0x20bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020bd00 size=384 callers=0 calls=8
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: UNKNOWN
   ref: !!NVgp4.0
*/
void UNKNOWN(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20bd00ULL || rel >= 0x20be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020be80 size=384 callers=0 calls=8
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: UNKNOWN
   ref: !!NVgp4.1
*/
void UNKNOWN_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20be80ULL || rel >= 0x20c000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020c000 size=320 callers=0 calls=8
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: !!NVvp4.0
*/
void NVvp4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20c000ULL || rel >= 0x20c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020c140 size=320 callers=0 calls=8
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: !!NVvp4.1
*/
void NVvp4_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20c140ULL || rel >= 0x20c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020c280 size=16 callers=0 calls=0
*/
void sub_20c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20c280ULL || rel >= 0x20c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020c290 size=16 callers=0 calls=0
*/
void sub_20c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20c290ULL || rel >= 0x20c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020c2a0 size=16 callers=0 calls=0
*/
void sub_20c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20c2a0ULL || rel >= 0x20c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020c2b0 size=16 callers=0 calls=0
*/
void sub_20c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20c2b0ULL || rel >= 0x20c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020c2c0 size=192 callers=0 calls=2
   calls: sub_108390, sub_108420
*/
void sub_20c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20c2c0ULL || rel >= 0x20c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020c380 size=784 callers=0 calls=3
   calls: s_dcc, sub_36430, sub_3fa0
   ref: %s%s%s
   ref: <<COLOR=ZERO>>
*/
void s_s_s_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20c380ULL || rel >= 0x20c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020c690 size=672 callers=0 calls=1
   calls: sub_3fa0
   ref: texture_arr%d
   ref: <<BAD_TEXUNIT>>
   ref: texture%d
   ref: handle(
*/
void handle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20c690ULL || rel >= 0x20c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020c930 size=240 callers=0 calls=2
   calls: NOPERSPECTIVE_2, sub_3fa0
   ref: TEXTURE texture_arr%d[] = { texture[%d..%d] };
   ref: TEXTURE texture%d = texture[%d];
*/
void TEXTURE_texture_d_texture_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20c930ULL || rel >= 0x20ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020ca20 size=928 callers=0 calls=5
   calls: program_subroutine__d, sub_1e20, sub_1e30, sub_1e40, sub_40100
   ref: dlmem[%i]
   ref: <<not bound>>
   ref: sbo_storage_len%d[%d]
   ref: %s[%i]
   ref: imm[%i]
   ref: env[%i]
   ref: sbo_buf%d[%d][%d]
   ref: buf%d[%d]
*/
void unnamed_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20ca20ULL || rel >= 0x20cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020cdc0 size=256 callers=0 calls=1
   calls: sub_3fa0
   ref: {SBOBUFFER %d IDX[%s + %d][%s + %d] (%s)} 
   ref: {SBOBUFFER %d IDX[%s + %d] (%s)} 
*/
void SBOBUFFER_d_IDX_s_d_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20cdc0ULL || rel >= 0x20cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020cec0 size=544 callers=0 calls=0
   ref: ATOMB.DWRAP
   ref: ATOMBB.OR
   ref: ATOMBB.CSWAP
   ref: ATOMB.XOR
   ref: ATOMBB.MAX
   ref: ATOMBB.EXCH
   ref: ATOMB.OR
   ref: ATOMBB.MIN
*/
void ATOMB_OR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20cec0ULL || rel >= 0x20d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020d0e0 size=352 callers=0 calls=0
   ref: ATOMBB.OR
   ref: ATOMBB.CSWAP
   ref: ATOMB.XOR
   ref: ATOMBB.MAX
   ref: ATOMBB.EXCH
   ref: ATOMB.OR
   ref: ATOMBB.MIN
   ref: ATOMB.MAX
*/
void SPARSE_TEX_STATUS(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20d0e0ULL || rel >= 0x20d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020d240 size=544 callers=6 calls=3
   calls: OPTION_NV_internal, sub_1a6c0, sub_1a780
   ref: OPTION NV_shader_atomic_int64;
   ref: OPTION NV_texture_multisample;
   ref: OPTION ARB_cull_distance;
   ref: OPTION NV_gpu_program_fp64;
   ref: OPTION ARB_shader_texture_image_samples;
   ref: OPTION NV_gpu_program5_mem_extended;
   ref: OPTION NV_shader_thread_group;
   ref: OPTION NV_shader_thread_shuffle;
*/
void OPTION_ARB_cull_distance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20d240ULL || rel >= 0x20d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020d460 size=176 callers=0 calls=4
   calls: sub_1e30, sub_1e40, sub_3fa0, sub_401f0
   ref: THREAD_MEMORY %d;
*/
void THREAD_MEMORY_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20d460ULL || rel >= 0x20d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020d510 size=400 callers=0 calls=2
   calls: CBUFFER, sub_3fa0
   ref: STORAGE sbo_buf%d[] = { program.storage[%d] };
   ref: PARAM sbo_storage_len%d[] = { program.storagelen[%d..%d] };
   ref: PARAM sbo_storage_len%d[] = { program.storagelen[%d] };
   ref: STORAGE sbo_buf%d[][] = { program.storage[%d..%d] };
*/
void STORAGE_sbo_buf_d_program_storage_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20d510ULL || rel >= 0x20d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020d6a0 size=352 callers=0 calls=4
   calls: sub_1e30, sub_1e40, sub_40170, sub_401f0
*/
void sub_20d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20d6a0ULL || rel >= 0x20d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020d800 size=176 callers=0 calls=1
   calls: sub_3fa0
   ref: sbo_buf%d[
   ref: sbo_buf%d[%d][
*/
void sbo_buf_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20d800ULL || rel >= 0x20d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020d8b0 size=128 callers=0 calls=1
   calls: sub_3fa0
   ref: sbo_storage_len%d[
   ref: sbo_storage_len%d[%d]
*/
void sbo_storage_len_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20d8b0ULL || rel >= 0x20d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020d930 size=64 callers=0 calls=0
   ref: #viewport_relative_rtaidx 1;
*/
void viewport_relative_rtaidx_1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20d930ULL || rel >= 0x20d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020d970 size=336 callers=0 calls=2
   calls: OPTION_ARB_cull_distance, sub_3fa0
   ref: TESS_POINT_MODE;
   ref: VERTICES_OUT %d;
   ref: OPTION NV_viewport_array2;
   ref: TESS_VERTEX_ORDER %s;
   ref: OPTION NV_layer_viewport_relative;
   ref: TESS_SPACING %s;
   ref: SECONDARY_VIEW_LAYER_OFFSET %d;
   ref: TESS_MODE %s;
*/
void TESS_MODE_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20d970ULL || rel >= 0x20dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020dac0 size=64 callers=0 calls=0
   ref: #viewport_relative_rtaidx 1;
*/
void viewport_relative_rtaidx_1_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20dac0ULL || rel >= 0x20db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020db00 size=336 callers=0 calls=2
   calls: OPTION_ARB_cull_distance, sub_3fa0
   ref: TESS_POINT_MODE;
   ref: VERTICES_OUT %d;
   ref: OPTION NV_viewport_array2;
   ref: TESS_VERTEX_ORDER %s;
   ref: OPTION NV_layer_viewport_relative;
   ref: TESS_SPACING %s;
   ref: SECONDARY_VIEW_LAYER_OFFSET %d;
   ref: TESS_MODE %s;
*/
void TESS_MODE_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20db00ULL || rel >= 0x20dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020dc50 size=416 callers=0 calls=5
   calls: OPTION_ARB_cull_distance, OPTION_ATI_draw_buffers, sub_10e8d0, sub_10e9a0, sub_10eb30
   ref: OPTION NV_pixel_interlock_ordered;
   ref: OPTION NV_sample_interlock_unordered;
   ref: OPTION NV_early_fragment_tests;
   ref: OPTION NV_sample_mask_override_coverage;
   ref: OPTION ARB_draw_buffers;
   ref: OPTION ARB_fragment_layer_viewport;
   ref: OPTION EXT_post_depth_coverage;
   ref: OPTION NV_sample_interlock_ordered;
*/
void OPTION_ARB_draw_buffers_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20dc50ULL || rel >= 0x20ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020ddf0 size=64 callers=0 calls=0
   ref: #viewport_relative_rtaidx 1;
*/
void viewport_relative_rtaidx_1_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20ddf0ULL || rel >= 0x20de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020de30 size=928 callers=0 calls=4
   calls: OPTION_ARB_cull_distance, sub_10ea70, sub_2220, sub_3fa0
   ref: pointsize
   ref: INVOCATIONS %d;
   ref: PRIMITIVE_IN %s;
   ref: attrib[%d]
   ref: VERTICES_OUT %d;
   ref: PASSTHROUGH result.
   ref: cull[%d]
   ref: fogcoord
*/
void secondaryposition_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20de30ULL || rel >= 0x20e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020e1d0 size=64 callers=0 calls=0
   ref: #viewport_relative_rtaidx 1;
*/
void viewport_relative_rtaidx_1_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20e1d0ULL || rel >= 0x20e210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020e210 size=208 callers=0 calls=2
   calls: OPTION_ARB_cull_distance, sub_3fa0
   ref: OPTION ARB_position_invariant;
   ref: NUM_VIEWS %d;
   ref: OPTION NV_viewport_array2;
   ref: OPTION NV_layer_viewport_relative;
   ref: SECONDARY_VIEW_LAYER_OFFSET %d;
*/
void NUM_VIEWS_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20e210ULL || rel >= 0x20e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020e2e0 size=256 callers=0 calls=0
   ref: ATOMS.XOR
   ref: ATOMS.AND
   ref: ATOMS.MIN
   ref: ATOMS.DWRAP
   ref: ATOMS.ADD
   ref: ATOMS.OR
   ref: ATOMS.MAX
   ref: ATOMS.IWRAP
*/
void ATOMS_OR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20e2e0ULL || rel >= 0x20e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020e3e0 size=80 callers=0 calls=0
*/
void sub_20e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20e3e0ULL || rel >= 0x20e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020e430 size=96 callers=0 calls=2
   calls: sub_107510, sub_40170
   ref: shared_mem[%d]
*/
void shared_mem_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20e430ULL || rel >= 0x20e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020e490 size=304 callers=0 calls=1
   calls: sub_3fa0
   ref: #SHARED_MEMORY %d;
   ref: #GROUP_SIZE
*/
void GROUP_SIZE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20e490ULL || rel >= 0x20e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020e5c0 size=112 callers=0 calls=1
   calls: sub_3fa0
   ref: SHARED_MEMORY %d;
   ref: SHARED shared_mem[] = { program.sharedmem };
*/
void SHARED_MEMORY_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20e5c0ULL || rel >= 0x20e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020e630 size=272 callers=0 calls=3
   calls: OPTION_ARB_cull_distance, sub_3fa0, sub_f080
   ref: no work group size specified
   ref: OPTION ARB_compute_variable_group_size;
   ref: GROUP_SIZE
*/
void GROUP_SIZE_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20e630ULL || rel >= 0x20e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020e740 size=96 callers=0 calls=0
*/
void sub_20e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20e740ULL || rel >= 0x20e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020e7a0 size=128 callers=0 calls=1
   calls: sub_f120
*/
void sub_20e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20e7a0ULL || rel >= 0x20e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020e820 size=1152 callers=0 calls=7
   calls: sub_110f00, sub_1860, sub_1e40, sub_34be0, sub_37660, sub_37780, sub_388c0
*/
void sub_20e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20e820ULL || rel >= 0x20eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020eca0 size=80 callers=0 calls=1
   calls: sub_37be0
*/
void sub_20eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20eca0ULL || rel >= 0x20ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020ecf0 size=144 callers=0 calls=1
   calls: sub_108ef0
*/
void sub_20ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20ecf0ULL || rel >= 0x20ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020ed80 size=896 callers=0 calls=4
   calls: sub_1860, sub_1e40, sub_37660, sub_37780
*/
void sub_20ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20ed80ULL || rel >= 0x20f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f100 size=32 callers=0 calls=0
*/
void sub_20f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f100ULL || rel >= 0x20f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f120 size=32 callers=0 calls=0
*/
void sub_20f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f120ULL || rel >= 0x20f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f140 size=64 callers=0 calls=0
*/
void sub_20f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f140ULL || rel >= 0x20f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f180 size=112 callers=0 calls=1
   calls: sub_1e40
*/
void sub_20f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f180ULL || rel >= 0x20f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f1f0 size=16 callers=0 calls=0
*/
void sub_20f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f1f0ULL || rel >= 0x20f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f200 size=144 callers=0 calls=1
   calls: sub_10f770
*/
void sub_20f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f200ULL || rel >= 0x20f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f290 size=96 callers=0 calls=1
   calls: sub_10f770
*/
void sub_20f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f290ULL || rel >= 0x20f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f2f0 size=688 callers=0 calls=5
   calls: combined_use_of_gl_ClipDistance_and_gl_CullDistance_grea, gl_ClipVertex, sub_1e30, sub_1e40, sub_2220
*/
void sub_20f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f2f0ULL || rel >= 0x20f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f5a0 size=80 callers=0 calls=1
   calls: sub_1e40
*/
void sub_20f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f5a0ULL || rel >= 0x20f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f5f0 size=128 callers=0 calls=1
   calls: sub_1e40
*/
void sub_20f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f5f0ULL || rel >= 0x20f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f670 size=112 callers=0 calls=1
   calls: sub_10f770
*/
void sub_20f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f670ULL || rel >= 0x20f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f6e0 size=672 callers=0 calls=4
   calls: combined_use_of_gl_ClipDistance_and_gl_CullDistance_grea, gl_ClipVertex, sub_1e30, sub_1e40
*/
void sub_20f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f6e0ULL || rel >= 0x20f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f980 size=80 callers=0 calls=1
   calls: sub_10f770
*/
void sub_20f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f980ULL || rel >= 0x20f9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020f9d0 size=80 callers=0 calls=1
   calls: sub_10f770
*/
void sub_20f9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20f9d0ULL || rel >= 0x20fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020fa20 size=128 callers=0 calls=1
   calls: sub_2220
*/
void sub_20fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20fa20ULL || rel >= 0x20faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020faa0 size=240 callers=0 calls=5
   calls: sub_107510, sub_1e30, sub_1e40, sub_40170, sub_451e0
*/
void sub_20faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20faa0ULL || rel >= 0x20fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020fb90 size=272 callers=0 calls=2
   calls: sub_10810, sub_37660
*/
void sub_20fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20fb90ULL || rel >= 0x20fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020fca0 size=80 callers=0 calls=1
   calls: sub_10f770
*/
void sub_20fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20fca0ULL || rel >= 0x20fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020fcf0 size=448 callers=0 calls=10
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_2220, sub_2880, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: !!NVfp5.0
*/
void NVfp5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20fcf0ULL || rel >= 0x20feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0020feb0 size=544 callers=0 calls=10
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_2220, sub_2880, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: UNKNOWN
   ref: !!NVgp5.0
*/
void UNKNOWN_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x20feb0ULL || rel >= 0x2100d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002100d0 size=576 callers=0 calls=10
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_2220, sub_2880, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: !!NVtcp5.0
   ref: UNKNOWN
*/
void UNKNOWN_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2100d0ULL || rel >= 0x210310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00210310 size=560 callers=0 calls=10
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_2220, sub_2880, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: UNKNOWN
   ref: !!NVtep5.0
*/
void UNKNOWN_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210310ULL || rel >= 0x210540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00210540 size=464 callers=0 calls=10
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_2220, sub_2880, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: !!NVvp5.0
*/
void NVvp5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210540ULL || rel >= 0x210710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00210710 size=464 callers=0 calls=10
   calls: sub_103be0, sub_10f6e0, sub_10f9e0, sub_2220, sub_2880, sub_29c20, sub_2ba40, sub_2e5f0, sub_3670, sub_e210
   ref: !!NVcp5.0
*/
void NVcp5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210710ULL || rel >= 0x2108e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002108e0 size=64 callers=0 calls=1
   calls: sub_35f0
*/
void sub_2108e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2108e0ULL || rel >= 0x210920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00210920 size=16 callers=0 calls=0
*/
void sub_210920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210920ULL || rel >= 0x210930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00210930 size=96 callers=0 calls=2
   calls: sub_1e30, sub_1e40
*/
void sub_210930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210930ULL || rel >= 0x210990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00210990 size=192 callers=0 calls=2
   calls: sub_108390, sub_108420
*/
void sub_210990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210990ULL || rel >= 0x210a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00210a50 size=464 callers=0 calls=5
   calls: sub_108390, sub_108420, sub_2ebc0, sub_35f0, sub_37660
*/
void sub_210a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210a50ULL || rel >= 0x210c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00210c20 size=144 callers=0 calls=1
   calls: sub_103990
*/
void sub_210c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210c20ULL || rel >= 0x210cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00210cb0 size=416 callers=0 calls=4
   calls: sub_103990, sub_2ebc0, sub_35f0, sub_37660
*/
void sub_210cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210cb0ULL || rel >= 0x210e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00210e50 size=320 callers=1 calls=4
   calls: sub_1127e0, sub_1134f0, sub_68880, sub_9a050
*/
void sub_210e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210e50ULL || rel >= 0x210f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00210f90 size=1104 callers=1 calls=9
   calls: sub_684d0, sub_9ae80, sub_9aec0, sub_9b3e0, sub_9bed0, sub_a7110, sub_a7850, sub_a92d0, sub_a9a30
*/
void sub_210f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x210f90ULL || rel >= 0x2113e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002113e0 size=144 callers=1 calls=0
*/
void sub_2113e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2113e0ULL || rel >= 0x211470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00211470 size=768 callers=0 calls=6
   calls: sub_67890, sub_684d0, sub_9b3e0, sub_9bed0, sub_a7890, sub_a92d0
*/
void sub_211470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x211470ULL || rel >= 0x211770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00211770 size=144 callers=1 calls=0
*/
void sub_211770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x211770ULL || rel >= 0x211800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00211800 size=560 callers=1 calls=6
   calls: sub_210e50, sub_65420, sub_68060, sub_68880, sub_9a050, sub_a92d0
*/
void sub_211800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x211800ULL || rel >= 0x211a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00211a30 size=256 callers=1 calls=2
   calls: sub_86810, sub_a7110
*/
void sub_211a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x211a30ULL || rel >= 0x211b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00211b30 size=304 callers=1 calls=6
   calls: sub_210f90, sub_2113e0, sub_211770, sub_211800, sub_211a30, sub_68060
*/
void sub_211b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x211b30ULL || rel >= 0x211c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00211c60 size=1328 callers=1 calls=8
   calls: sub_1128d0, sub_650d0, sub_67890, sub_68060, sub_680e0, sub_a7050, sub_a7090, sub_a9a30
*/
void sub_211c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x211c60ULL || rel >= 0x212190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00212190 size=1200 callers=0 calls=2
   calls: sub_63210, sub_9a050
*/
void sub_212190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x212190ULL || rel >= 0x212640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00212640 size=368 callers=0 calls=0
*/
void sub_212640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x212640ULL || rel >= 0x2127b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002127b0 size=976 callers=0 calls=4
   calls: sub_63560, sub_636f0, sub_b7e20, sub_b89a0
*/
void sub_2127b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2127b0ULL || rel >= 0x212b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00212b80 size=128 callers=0 calls=2
   calls: sub_11e040, sub_9ca30
*/
void sub_212b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x212b80ULL || rel >= 0x212c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00212c00 size=160 callers=0 calls=1
   calls: sub_9b3d0
*/
void sub_212c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x212c00ULL || rel >= 0x212ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00212ca0 size=272 callers=0 calls=1
   calls: sub_a70d0
*/
void sub_212ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x212ca0ULL || rel >= 0x212db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00212db0 size=976 callers=0 calls=10
   calls: sub_620d0, sub_652b0, sub_9a050, sub_9ae80, sub_a7850, sub_a7890, sub_a91b0, sub_a92d0, sub_a9a30, sub_aa640
*/
void sub_212db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x212db0ULL || rel >= 0x213180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213180 size=336 callers=0 calls=3
   calls: sub_215b50, sub_3870, sub_3d090
*/
void sub_213180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213180ULL || rel >= 0x2132d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002132d0 size=320 callers=1 calls=1
   calls: sub_a92d0
*/
void sub_2132d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2132d0ULL || rel >= 0x213410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213410 size=576 callers=1 calls=3
   calls: sub_68160, sub_8e6e0, sub_a92d0
*/
void sub_213410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213410ULL || rel >= 0x213650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213650 size=272 callers=0 calls=9
   calls: sub_2132d0, sub_213410, sub_66820, sub_86e00, sub_88b40, sub_8f0c0, sub_9bed0, sub_b7e20, sub_b89a0
*/
void sub_213650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213650ULL || rel >= 0x213760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213760 size=272 callers=1 calls=3
   calls: sub_3ceb0, sub_3cf40, sub_3d620
*/
void sub_213760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213760ULL || rel >= 0x213870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00213870 size=5056 callers=1 calls=19
   calls: sub_1896f0, sub_213760, sub_3870, sub_3ceb0, sub_3d140, sub_67890, sub_67ff0, sub_68060, sub_68090, sub_68110, sub_88b40, sub_8aa10
   ... +7 more
*/
void sub_213870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x213870ULL || rel >= 0x214c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00214c30 size=160 callers=0 calls=5
   calls: sub_211b30, sub_211c60, sub_213870, sub_b7e20, sub_b89a0
*/
void sub_214c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x214c30ULL || rel >= 0x214cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00214cd0 size=976 callers=0 calls=7
   calls: sub_62240, sub_67cd0, sub_69a20, sub_9a050, sub_9b3e0, sub_9bed0, sub_a7090
*/
void sub_214cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x214cd0ULL || rel >= 0x2150a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002150a0 size=128 callers=0 calls=1
   calls: sub_3d960
*/
void sub_2150a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2150a0ULL || rel >= 0x215120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215120 size=176 callers=0 calls=2
   calls: sub_151ab0, sub_65420
*/
void sub_215120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215120ULL || rel >= 0x2151d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002151d0 size=16 callers=0 calls=0
*/
void sub_2151d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2151d0ULL || rel >= 0x2151e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002151e0 size=16 callers=0 calls=0
*/
void sub_2151e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2151e0ULL || rel >= 0x2151f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002151f0 size=16 callers=0 calls=0
*/
void sub_2151f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2151f0ULL || rel >= 0x215200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215200 size=16 callers=0 calls=0
*/
void sub_215200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215200ULL || rel >= 0x215210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215210 size=16 callers=0 calls=0
*/
void sub_215210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215210ULL || rel >= 0x215220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215220 size=16 callers=0 calls=0
*/
void sub_215220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215220ULL || rel >= 0x215230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215230 size=16 callers=0 calls=0
*/
void sub_215230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215230ULL || rel >= 0x215240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215240 size=16 callers=0 calls=0
*/
void sub_215240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215240ULL || rel >= 0x215250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215250 size=320 callers=0 calls=2
   calls: sub_652b0, sub_9a050
*/
void sub_215250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215250ULL || rel >= 0x215390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215390 size=320 callers=0 calls=4
   calls: sub_9a050, sub_9af40, sub_a7110, sub_a92d0
*/
void sub_215390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215390ULL || rel >= 0x2154d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002154d0 size=160 callers=0 calls=2
   calls: sub_620d0, sub_a70d0
*/
void sub_2154d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2154d0ULL || rel >= 0x215570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215570 size=1120 callers=1 calls=9
   calls: sub_3890, sub_9b3e0, sub_a7050, sub_a7800, sub_a8030, sub_a8e10, sub_a92d0, sub_a9a30, sub_aa640
*/
void sub_215570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215570ULL || rel >= 0x2159d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002159d0 size=384 callers=1 calls=3
   calls: sub_a8320, sub_a92d0, sub_a9a30
*/
void sub_2159d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2159d0ULL || rel >= 0x215b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215b50 size=1040 callers=2 calls=8
   calls: sub_11d890, sub_215570, sub_2159d0, sub_9bed0, sub_a7090, sub_a70d0, sub_a7110, sub_a7a30
*/
void sub_215b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215b50ULL || rel >= 0x215f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00215f60 size=576 callers=0 calls=7
   calls: sub_68ce0, sub_9a050, sub_9b3e0, sub_9bed0, sub_a70d0, sub_a8080, sub_a92d0
*/
void sub_215f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x215f60ULL || rel >= 0x2161a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002161a0 size=288 callers=0 calls=2
   calls: sub_9bed0, sub_a7850
*/
void sub_2161a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2161a0ULL || rel >= 0x2162c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002162c0 size=736 callers=0 calls=3
   calls: sub_9bed0, sub_a7850, sub_a7890
*/
void sub_2162c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2162c0ULL || rel >= 0x2165a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002165a0 size=1280 callers=0 calls=3
   calls: sub_1896f0, sub_216aa0, sub_9bed0
*/
void sub_2165a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2165a0ULL || rel >= 0x216aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216aa0 size=272 callers=1 calls=0
*/
void sub_216aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216aa0ULL || rel >= 0x216bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216bb0 size=608 callers=0 calls=5
   calls: sub_117330, sub_1173a0, sub_117400, sub_1182c0, sub_a7890
*/
void sub_216bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216bb0ULL || rel >= 0x216e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216e10 size=320 callers=1 calls=3
   calls: sub_636f0, sub_9b3e0, sub_a92d0
*/
void sub_216e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216e10ULL || rel >= 0x216f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00216f50 size=880 callers=2 calls=10
   calls: sub_61e80, sub_620d0, sub_66d40, sub_9b3d0, sub_9b3e0, sub_9bed0, sub_a70d0, sub_a7800, sub_a7850, sub_a8110
*/
void sub_216f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x216f50ULL || rel >= 0x2172c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002172c0 size=1264 callers=2 calls=10
   calls: sub_61e80, sub_620d0, sub_66820, sub_66d40, sub_9b3d0, sub_9b3e0, sub_9bed0, sub_a7800, sub_a8110, sub_a8170
*/
void sub_2172c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2172c0ULL || rel >= 0x2177b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002177b0 size=448 callers=1 calls=4
   calls: sub_620d0, sub_629c0, sub_9a050, sub_a8080
*/
void sub_2177b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2177b0ULL || rel >= 0x217970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00217970 size=304 callers=0 calls=1
   calls: sub_a92d0
*/
void sub_217970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x217970ULL || rel >= 0x217aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00217aa0 size=2688 callers=1 calls=10
   calls: sub_3afa0, sub_9b3e0, sub_9bed0, sub_9ca30, sub_a7090, sub_a70d0, sub_a7800, sub_a8030, sub_a8110, sub_a8170
*/
void sub_217aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x217aa0ULL || rel >= 0x218520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218520 size=256 callers=0 calls=2
   calls: sub_a92d0, sub_a9a30
*/
void sub_218520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218520ULL || rel >= 0x218620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218620 size=400 callers=0 calls=4
   calls: sub_62240, sub_9b3e0, sub_9bed0, sub_a7090
*/
void sub_218620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218620ULL || rel >= 0x2187b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002187b0 size=400 callers=0 calls=4
   calls: sub_3870, sub_3d090, sub_9b920, sub_a8030
*/
void sub_2187b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2187b0ULL || rel >= 0x218940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218940 size=544 callers=0 calls=2
   calls: sub_636f0, sub_b7e20
*/
void sub_218940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218940ULL || rel >= 0x218b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218b60 size=416 callers=0 calls=3
   calls: sub_9bed0, sub_a7850, sub_a9a30
*/
void sub_218b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218b60ULL || rel >= 0x218d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218d00 size=176 callers=0 calls=2
   calls: sub_15ff80, sub_3550
*/
void sub_218d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218d00ULL || rel >= 0x218db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00218db0 size=880 callers=1 calls=2
   calls: sub_61e80, sub_a8110
*/
void sub_218db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x218db0ULL || rel >= 0x219120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00219120 size=1264 callers=3 calls=15
   calls: sub_16ecd0, sub_35320, sub_68490, sub_68590, sub_688c0, sub_7d430, sub_9a050, sub_9b3e0, sub_9bed0, sub_a7800, sub_a7850, sub_a8030
   ... +3 more
*/
void sub_219120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x219120ULL || rel >= 0x219610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00219610 size=512 callers=1 calls=5
   calls: sub_11e390, sub_9b3e0, sub_9bed0, sub_a7800, sub_a8170
*/
void sub_219610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x219610ULL || rel >= 0x219810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00219810 size=704 callers=1 calls=5
   calls: sub_3af50, sub_67970, sub_9a050, sub_9b3e0, sub_a8170
*/
void sub_219810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x219810ULL || rel >= 0x219ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00219ad0 size=736 callers=0 calls=8
   calls: sub_9b3e0, sub_9bed0, sub_a7090, sub_a7150, sub_a7850, sub_a7a30, sub_a80d0, sub_a8110
*/
void sub_219ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x219ad0ULL || rel >= 0x219db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00219db0 size=592 callers=0 calls=14
   calls: sub_1236d0, sub_123910, sub_15fcd0, sub_216e10, sub_216f50, sub_2172c0, sub_2177b0, sub_218db0, sub_219120, sub_219610, sub_219810, sub_21a000
   ... +2 more
*/
void sub_219db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x219db0ULL || rel >= 0x21a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a000 size=912 callers=1 calls=9
   calls: sub_61f80, sub_620d0, sub_62a70, sub_9b4d0, sub_9bed0, sub_a7090, sub_a7800, sub_a9270, sub_e8260
*/
void sub_21a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a000ULL || rel >= 0x21a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a390 size=288 callers=0 calls=4
   calls: sub_215b50, sub_3870, sub_3d090, sub_66820
*/
void sub_21a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a390ULL || rel >= 0x21a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a4b0 size=208 callers=0 calls=3
   calls: sub_9c950, sub_9d2f0, sub_a73d0
*/
void sub_21a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a4b0ULL || rel >= 0x21a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a580 size=1056 callers=0 calls=11
   calls: sub_160ec0, sub_160f70, sub_1612c0, sub_9a050, sub_a6e70, sub_a7050, sub_a8320, sub_a92d0, sub_a9900, sub_a9a30, sub_a9df0
*/
void sub_21a580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a580ULL || rel >= 0x21a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021a9a0 size=736 callers=0 calls=13
   calls: sub_3af50, sub_3b040, sub_66bc0, sub_9a050, sub_9b3e0, sub_9b4d0, sub_9bed0, sub_a7090, sub_a8030, sub_a82d0, sub_a8490, sub_a85c0
   ... +1 more
*/
void sub_21a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21a9a0ULL || rel >= 0x21ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ac80 size=864 callers=0 calls=14
   calls: sub_3af50, sub_3b040, sub_66bc0, sub_9a050, sub_9b3e0, sub_9b4d0, sub_9bed0, sub_a7090, sub_a70d0, sub_a8030, sub_a82d0, sub_a8490
   ... +2 more
*/
void sub_21ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ac80ULL || rel >= 0x21afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021afe0 size=16 callers=0 calls=0
*/
void sub_21afe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21afe0ULL || rel >= 0x21aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021aff0 size=1072 callers=0 calls=10
   calls: sub_160ec0, sub_9a050, sub_9bed0, sub_a7090, sub_a7850, sub_a7cb0, sub_a8080, sub_a8110, sub_a81c0, sub_a85c0
*/
void sub_21aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21aff0ULL || rel >= 0x21b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021b420 size=1808 callers=0 calls=14
   calls: sub_122430, sub_162a40, sub_162a50, sub_162a80, sub_162ad0, sub_163930, sub_35320, sub_3b0a0, sub_3b0c0, sub_9a050, sub_9b3e0, sub_a8210
   ... +2 more
*/
void sub_21b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21b420ULL || rel >= 0x21bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021bb30 size=928 callers=0 calls=5
   calls: sub_163930, sub_163b80, sub_9bed0, sub_a91b0, sub_a9270
*/
void sub_21bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21bb30ULL || rel >= 0x21bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021bed0 size=1280 callers=0 calls=2
   calls: sub_9bed0, sub_a92d0
*/
void sub_21bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21bed0ULL || rel >= 0x21c3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c3d0 size=32 callers=0 calls=0
*/
void sub_21c3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c3d0ULL || rel >= 0x21c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c3f0 size=96 callers=0 calls=0
*/
void sub_21c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c3f0ULL || rel >= 0x21c450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c450 size=208 callers=0 calls=1
   calls: sub_35320
*/
void sub_21c450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c450ULL || rel >= 0x21c520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c520 size=352 callers=0 calls=1
   calls: sub_35320
*/
void sub_21c520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c520ULL || rel >= 0x21c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c680 size=128 callers=0 calls=1
   calls: sub_35320
*/
void sub_21c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c680ULL || rel >= 0x21c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c700 size=176 callers=0 calls=0
*/
void sub_21c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c700ULL || rel >= 0x21c7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c7b0 size=496 callers=0 calls=6
   calls: sub_9bed0, sub_9ca30, sub_a7370, sub_a73d0, sub_a7700, sub_a7850
*/
void sub_21c7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c7b0ULL || rel >= 0x21c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021c9a0 size=272 callers=0 calls=4
   calls: sub_3af80, sub_61f80, sub_9b3e0, sub_9ca30
*/
void sub_21c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21c9a0ULL || rel >= 0x21cab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021cab0 size=64 callers=0 calls=1
   calls: sub_217aa0
*/
void sub_21cab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21cab0ULL || rel >= 0x21caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021caf0 size=64 callers=0 calls=1
   calls: sub_216f50
*/
void sub_21caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21caf0ULL || rel >= 0x21cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021cb30 size=64 callers=0 calls=1
   calls: sub_2172c0
*/
void sub_21cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21cb30ULL || rel >= 0x21cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021cb70 size=384 callers=0 calls=4
   calls: sub_16e9f0, sub_16ecd0, sub_16f0b0, sub_66d40
*/
void sub_21cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21cb70ULL || rel >= 0x21ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ccf0 size=304 callers=0 calls=4
   calls: sub_11e390, sub_16ecd0, sub_16f0b0, sub_16fd10
*/
void sub_21ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ccf0ULL || rel >= 0x21ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ce20 size=1056 callers=0 calls=8
   calls: sub_16e9f0, sub_16ecd0, sub_16f0b0, sub_16fd10, sub_1700e0, sub_35320, sub_9b3d0, sub_9b500
*/
void sub_21ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ce20ULL || rel >= 0x21d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d240 size=1888 callers=0 calls=17
   calls: sub_129100, sub_219120, sub_35320, sub_624d0, sub_629c0, sub_9a050, sub_9a1e0, sub_9b3e0, sub_9bed0, sub_9ca30, sub_a7370, sub_a7430
   ... +5 more
*/
void sub_21d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d240ULL || rel >= 0x21d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021d9a0 size=672 callers=0 calls=6
   calls: sub_16ecd0, sub_16f0b0, sub_9b3e0, sub_9d420, sub_a7800, sub_a8110
*/
void sub_21d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21d9a0ULL || rel >= 0x21dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021dc40 size=400 callers=0 calls=2
   calls: sub_16ecd0, sub_16f020
*/
void sub_21dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21dc40ULL || rel >= 0x21ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ddd0 size=16 callers=0 calls=0
*/
void sub_21ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ddd0ULL || rel >= 0x21dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021dde0 size=16 callers=0 calls=0
*/
void sub_21dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21dde0ULL || rel >= 0x21ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021ddf0 size=352 callers=1 calls=2
   calls: sub_b7e20, sub_b89a0
*/
void sub_21ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21ddf0ULL || rel >= 0x21df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021df50 size=944 callers=0 calls=1
   calls: sub_63560
*/
void sub_21df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21df50ULL || rel >= 0x21e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e300 size=48 callers=1 calls=0
*/
void sub_21e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e300ULL || rel >= 0x21e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e330 size=336 callers=1 calls=2
   calls: sub_a7050, sub_a9a30
*/
void sub_21e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e330ULL || rel >= 0x21e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021e480 size=2960 callers=0 calls=9
   calls: sub_61d40, sub_62160, sub_624d0, sub_62a70, sub_9b3d0, sub_9b3e0, sub_9bed0, sub_a9210, sub_a9270
*/
void sub_21e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21e480ULL || rel >= 0x21f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f010 size=400 callers=0 calls=7
   calls: sub_21ddf0, sub_21e330, sub_21f1a0, sub_222fe0, sub_66820, sub_b7e20, sub_b89a0
*/
void sub_21f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f010ULL || rel >= 0x21f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f1a0 size=1008 callers=1 calls=0
*/
void sub_21f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f1a0ULL || rel >= 0x21f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f590 size=304 callers=0 calls=0
*/
void sub_21f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f590ULL || rel >= 0x21f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f6c0 size=240 callers=0 calls=0
*/
void sub_21f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f6c0ULL || rel >= 0x21f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f7b0 size=96 callers=0 calls=1
   calls: sub_35f0
*/
void sub_21f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f7b0ULL || rel >= 0x21f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f810 size=128 callers=0 calls=2
   calls: sub_18c3c0, sub_35f0
*/
void sub_21f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f810ULL || rel >= 0x21f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f890 size=80 callers=0 calls=0
*/
void sub_21f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f890ULL || rel >= 0x21f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f8e0 size=64 callers=0 calls=2
   calls: sub_55200, sub_d6890
*/
void sub_21f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f8e0ULL || rel >= 0x21f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021f920 size=400 callers=0 calls=4
   calls: sub_55140, sub_55e00, sub_67890, sub_68110
*/
void sub_21f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21f920ULL || rel >= 0x21fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021fab0 size=112 callers=0 calls=1
   calls: sub_18c950
*/
void sub_21fab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21fab0ULL || rel >= 0x21fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021fb20 size=464 callers=0 calls=3
   calls: sub_18ca40, sub_b81b0, sub_b89c0
*/
void sub_21fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21fb20ULL || rel >= 0x21fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021fcf0 size=464 callers=0 calls=0
*/
void sub_21fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21fcf0ULL || rel >= 0x21fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0021fec0 size=560 callers=0 calls=1
   calls: sub_21e300
*/
void sub_21fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x21fec0ULL || rel >= 0x2200f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002200f0 size=160 callers=0 calls=1
   calls: sub_67470
*/
void sub_2200f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2200f0ULL || rel >= 0x220190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220190 size=3072 callers=0 calls=6
   calls: sub_11e390, sub_35320, sub_3af50, sub_63c30, sub_67750, sub_9ca30
*/
void sub_220190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220190ULL || rel >= 0x220d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220d90 size=176 callers=0 calls=0
*/
void sub_220d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220d90ULL || rel >= 0x220e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220e40 size=112 callers=0 calls=0
*/
void sub_220e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220e40ULL || rel >= 0x220eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00220eb0 size=368 callers=0 calls=0
*/
void sub_220eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x220eb0ULL || rel >= 0x221020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00221020 size=464 callers=0 calls=0
*/
void sub_221020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x221020ULL || rel >= 0x2211f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002211f0 size=800 callers=0 calls=0
*/
void sub_2211f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2211f0ULL || rel >= 0x221510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00221510 size=64 callers=0 calls=0
*/
void sub_221510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x221510ULL || rel >= 0x221550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00221550 size=432 callers=0 calls=0
*/
void sub_221550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x221550ULL || rel >= 0x221700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00221700 size=2672 callers=0 calls=1
   calls: sub_999f0
   ref: Reg Antidep
   ref: COUPLED FMA
   ref: COUPLED SCD
   ref: DECOUP MEM
   ref: PredBypass
   ref: REDIR FP16
   ref: REDIR IMMA
   ref: DECOUP CBU
*/
void NoPredBypass(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x221700ULL || rel >= 0x222170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222170 size=16 callers=0 calls=0
*/
void sub_222170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222170ULL || rel >= 0x222180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222180 size=352 callers=0 calls=1
   calls: sub_67cd0
*/
void sub_222180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222180ULL || rel >= 0x2222e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002222e0 size=64 callers=0 calls=2
   calls: sub_189660, sub_635b0
*/
void sub_2222e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2222e0ULL || rel >= 0x222320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222320 size=96 callers=0 calls=0
*/
void sub_222320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222320ULL || rel >= 0x222380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222380 size=336 callers=0 calls=1
   calls: sub_b8290
*/
void sub_222380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222380ULL || rel >= 0x2224d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002224d0 size=96 callers=0 calls=0
*/
void sub_2224d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2224d0ULL || rel >= 0x222530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222530 size=272 callers=1 calls=2
   calls: sub_222640, sub_67cd0
*/
void sub_222530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222530ULL || rel >= 0x222640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222640 size=400 callers=1 calls=0
*/
void sub_222640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222640ULL || rel >= 0x2227d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002227d0 size=368 callers=1 calls=3
   calls: sub_222940, sub_9d2f0, sub_b8aa0
*/
void sub_2227d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2227d0ULL || rel >= 0x222940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222940 size=704 callers=2 calls=0
*/
void sub_222940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222940ULL || rel >= 0x222c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222c00 size=336 callers=1 calls=2
   calls: sub_222d50, sub_9d2f0
*/
void sub_222c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222c00ULL || rel >= 0x222d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222d50 size=416 callers=2 calls=0
*/
void sub_222d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222d50ULL || rel >= 0x222ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222ef0 size=240 callers=1 calls=3
   calls: sub_222530, sub_2227d0, sub_222c00
*/
void sub_222ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222ef0ULL || rel >= 0x222fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00222fe0 size=240 callers=1 calls=1
   calls: sub_222ef0
*/
void sub_222fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x222fe0ULL || rel >= 0x2230d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002230d0 size=1328 callers=0 calls=0
*/
void sub_2230d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2230d0ULL || rel >= 0x223600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223600 size=32 callers=0 calls=0
*/
void sub_223600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223600ULL || rel >= 0x223620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223620 size=16 callers=0 calls=0
*/
void sub_223620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223620ULL || rel >= 0x223630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223630 size=16 callers=0 calls=0
*/
void sub_223630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223630ULL || rel >= 0x223640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223640 size=16 callers=6 calls=0
*/
void sub_223640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223640ULL || rel >= 0x223650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223650 size=112 callers=3 calls=0
*/
void sub_223650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223650ULL || rel >= 0x2236c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

