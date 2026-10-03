/* main functions 010c3f80..010d8360 (139 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 010c3f80 size=16 callers=0 calls=0
*/
void sub_10c3f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3f80ULL || rel >= 0x10c3f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3f90 size=16 callers=0 calls=0
*/
void sub_10c3f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3f90ULL || rel >= 0x10c3fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c3fa0 size=96 callers=0 calls=0
*/
void sub_10c3fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c3fa0ULL || rel >= 0x10c4000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4000 size=16 callers=0 calls=0
*/
void sub_10c4000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4000ULL || rel >= 0x10c4010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4010 size=48 callers=0 calls=0
*/
void sub_10c4010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4010ULL || rel >= 0x10c4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4040 size=464 callers=3 calls=0
*/
void sub_10c4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4040ULL || rel >= 0x10c4210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4210 size=336 callers=2 calls=3
   calls: sub_10c4660, sub_15b9340, sub_6a54a0
*/
void sub_10c4210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4210ULL || rel >= 0x10c4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4360 size=768 callers=2 calls=2
   calls: sub_15b9340, sub_6a54a0
*/
void sub_10c4360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4360ULL || rel >= 0x10c4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4660 size=496 callers=1 calls=0
*/
void sub_10c4660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4660ULL || rel >= 0x10c4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4850 size=288 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10c4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4850ULL || rel >= 0x10c4970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4970 size=128 callers=0 calls=0
*/
void sub_10c4970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4970ULL || rel >= 0x10c49f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c49f0 size=96 callers=0 calls=1
   calls: sub_10c54c0
*/
void sub_10c49f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c49f0ULL || rel >= 0x10c4a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4a50 size=96 callers=0 calls=1
   calls: sub_10c54c0
*/
void sub_10c4a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4a50ULL || rel >= 0x10c4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4ab0 size=32 callers=0 calls=0
*/
void sub_10c4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4ab0ULL || rel >= 0x10c4ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4ad0 size=32 callers=0 calls=0
*/
void sub_10c4ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4ad0ULL || rel >= 0x10c4af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4af0 size=688 callers=0 calls=7
   calls: sub_10c54c0, sub_10c5690, sub_6a4240, sub_6a42c0, sub_6a42d0, sub_6a5940, sub_6a5df0
*/
void sub_10c4af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4af0ULL || rel >= 0x10c4da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4da0 size=64 callers=0 calls=0
*/
void sub_10c4da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4da0ULL || rel >= 0x10c4de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4de0 size=16 callers=0 calls=0
*/
void sub_10c4de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4de0ULL || rel >= 0x10c4df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4df0 size=16 callers=0 calls=0
*/
void sub_10c4df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4df0ULL || rel >= 0x10c4e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4e00 size=16 callers=0 calls=0
*/
void sub_10c4e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4e00ULL || rel >= 0x10c4e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4e10 size=144 callers=0 calls=0
*/
void sub_10c4e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4e10ULL || rel >= 0x10c4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4ea0 size=144 callers=0 calls=0
*/
void sub_10c4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4ea0ULL || rel >= 0x10c4f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c4f30 size=240 callers=0 calls=0
*/
void sub_10c4f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c4f30ULL || rel >= 0x10c5020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5020 size=144 callers=0 calls=0
*/
void sub_10c5020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5020ULL || rel >= 0x10c50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c50b0 size=144 callers=0 calls=0
*/
void sub_10c50b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c50b0ULL || rel >= 0x10c5140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5140 size=16 callers=0 calls=0
*/
void sub_10c5140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5140ULL || rel >= 0x10c5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5150 size=16 callers=0 calls=0
*/
void sub_10c5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5150ULL || rel >= 0x10c5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5160 size=144 callers=0 calls=0
*/
void sub_10c5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5160ULL || rel >= 0x10c51f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c51f0 size=144 callers=0 calls=0
*/
void sub_10c51f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c51f0ULL || rel >= 0x10c5280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5280 size=144 callers=0 calls=0
*/
void sub_10c5280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5280ULL || rel >= 0x10c5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5310 size=144 callers=0 calls=0
*/
void sub_10c5310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5310ULL || rel >= 0x10c53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c53a0 size=64 callers=0 calls=0
*/
void sub_10c53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c53a0ULL || rel >= 0x10c53e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c53e0 size=16 callers=0 calls=0
*/
void sub_10c53e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c53e0ULL || rel >= 0x10c53f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c53f0 size=16 callers=0 calls=0
*/
void sub_10c53f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c53f0ULL || rel >= 0x10c5400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5400 size=16 callers=0 calls=0
*/
void sub_10c5400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5400ULL || rel >= 0x10c5410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5410 size=16 callers=0 calls=0
*/
void sub_10c5410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5410ULL || rel >= 0x10c5420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5420 size=96 callers=0 calls=0
*/
void sub_10c5420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5420ULL || rel >= 0x10c5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5480 size=16 callers=0 calls=0
*/
void sub_10c5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5480ULL || rel >= 0x10c5490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5490 size=48 callers=0 calls=0
*/
void sub_10c5490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5490ULL || rel >= 0x10c54c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c54c0 size=464 callers=3 calls=0
*/
void sub_10c54c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c54c0ULL || rel >= 0x10c5690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5690 size=288 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10c5690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5690ULL || rel >= 0x10c57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c57b0 size=128 callers=0 calls=0
*/
void sub_10c57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c57b0ULL || rel >= 0x10c5830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c5830 size=2144 callers=4 calls=10
   calls: sub_10563d0, sub_107e790, sub_10ad190, sub_10c6090, sub_10c74a0, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestSerialAuth
*/
void RequestSerialAuth(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c5830ULL || rel >= 0x10c6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6090 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10c7860, sub_6ce100
*/
void sub_10c6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6090ULL || rel >= 0x10c6210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6210 size=2096 callers=6 calls=9
   calls: sub_10563d0, sub_107e790, sub_10c6a40, sub_10c8c30, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestSyncDelivery
*/
void RequestSyncDelivery(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6210ULL || rel >= 0x10c6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6a40 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10c9360, sub_6ce100
*/
void sub_10c6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6a40ULL || rel >= 0x10c6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6bc0 size=144 callers=0 calls=0
*/
void sub_10c6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6bc0ULL || rel >= 0x10c6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6c50 size=144 callers=0 calls=0
*/
void sub_10c6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6c50ULL || rel >= 0x10c6ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6ce0 size=240 callers=0 calls=0
*/
void sub_10c6ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6ce0ULL || rel >= 0x10c6dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6dd0 size=144 callers=0 calls=0
*/
void sub_10c6dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6dd0ULL || rel >= 0x10c6e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6e60 size=144 callers=0 calls=0
*/
void sub_10c6e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6e60ULL || rel >= 0x10c6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6ef0 size=16 callers=0 calls=0
*/
void sub_10c6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6ef0ULL || rel >= 0x10c6f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6f00 size=16 callers=0 calls=0
*/
void sub_10c6f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6f00ULL || rel >= 0x10c6f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6f10 size=144 callers=0 calls=0
*/
void sub_10c6f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6f10ULL || rel >= 0x10c6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c6fa0 size=144 callers=0 calls=0
*/
void sub_10c6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c6fa0ULL || rel >= 0x10c7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7030 size=144 callers=0 calls=0
*/
void sub_10c7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7030ULL || rel >= 0x10c70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c70c0 size=144 callers=0 calls=0
*/
void sub_10c70c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c70c0ULL || rel >= 0x10c7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7150 size=240 callers=0 calls=0
*/
void sub_10c7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7150ULL || rel >= 0x10c7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7240 size=144 callers=0 calls=0
*/
void sub_10c7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7240ULL || rel >= 0x10c72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c72d0 size=144 callers=0 calls=0
*/
void sub_10c72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c72d0ULL || rel >= 0x10c7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7360 size=16 callers=0 calls=0
*/
void sub_10c7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7360ULL || rel >= 0x10c7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7370 size=16 callers=0 calls=0
*/
void sub_10c7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7370ULL || rel >= 0x10c7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7380 size=144 callers=0 calls=0
*/
void sub_10c7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7380ULL || rel >= 0x10c7410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7410 size=144 callers=0 calls=0
*/
void sub_10c7410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7410ULL || rel >= 0x10c74a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c74a0 size=288 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10c74a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c74a0ULL || rel >= 0x10c75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c75c0 size=80 callers=0 calls=0
*/
void sub_10c75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c75c0ULL || rel >= 0x10c7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7610 size=240 callers=0 calls=0
*/
void sub_10c7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7610ULL || rel >= 0x10c7700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7700 size=80 callers=0 calls=0
*/
void sub_10c7700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7700ULL || rel >= 0x10c7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7750 size=80 callers=0 calls=0
*/
void sub_10c7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7750ULL || rel >= 0x10c77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c77a0 size=16 callers=0 calls=0
*/
void sub_10c77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c77a0ULL || rel >= 0x10c77b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c77b0 size=16 callers=0 calls=0
*/
void sub_10c77b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c77b0ULL || rel >= 0x10c77c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c77c0 size=80 callers=0 calls=0
*/
void sub_10c77c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c77c0ULL || rel >= 0x10c7810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7810 size=80 callers=0 calls=0
*/
void sub_10c7810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7810ULL || rel >= 0x10c7860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7860 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10c7860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7860ULL || rel >= 0x10c79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c79c0 size=176 callers=0 calls=0
*/
void sub_10c79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c79c0ULL || rel >= 0x10c7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7a70 size=176 callers=0 calls=0
*/
void sub_10c7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7a70ULL || rel >= 0x10c7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7b20 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7b20ULL || rel >= 0x10c7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7b90 size=64 callers=0 calls=1
   calls: sub_10c8240
*/
void sub_10c7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7b90ULL || rel >= 0x10c7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7bd0 size=16 callers=0 calls=0
*/
void sub_10c7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7bd0ULL || rel >= 0x10c7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7be0 size=48 callers=0 calls=0
*/
void sub_10c7be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7be0ULL || rel >= 0x10c7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7c10 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c7c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7c10ULL || rel >= 0x10c7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7cd0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7cd0ULL || rel >= 0x10c7d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7d40 size=176 callers=0 calls=0
*/
void sub_10c7d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7d40ULL || rel >= 0x10c7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7df0 size=176 callers=0 calls=0
*/
void sub_10c7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7df0ULL || rel >= 0x10c7ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7ea0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c7ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7ea0ULL || rel >= 0x10c7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7f10 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c7f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7f10ULL || rel >= 0x10c7f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c7f80 size=176 callers=0 calls=0
*/
void sub_10c7f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c7f80ULL || rel >= 0x10c8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8030 size=176 callers=0 calls=0
*/
void sub_10c8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8030ULL || rel >= 0x10c80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c80e0 size=48 callers=0 calls=0
*/
void sub_10c80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c80e0ULL || rel >= 0x10c8110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8110 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c8110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8110ULL || rel >= 0x10c81d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c81d0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c81d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c81d0ULL || rel >= 0x10c8240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8240 size=608 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10c8240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8240ULL || rel >= 0x10c84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c84a0 size=16 callers=0 calls=0
*/
void sub_10c84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c84a0ULL || rel >= 0x10c84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c84b0 size=16 callers=0 calls=0
*/
void sub_10c84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c84b0ULL || rel >= 0x10c84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c84c0 size=16 callers=0 calls=0
*/
void sub_10c84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c84c0ULL || rel >= 0x10c84d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c84d0 size=64 callers=0 calls=0
*/
void sub_10c84d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c84d0ULL || rel >= 0x10c8510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8510 size=80 callers=0 calls=0
*/
void sub_10c8510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8510ULL || rel >= 0x10c8560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8560 size=96 callers=0 calls=0
*/
void sub_10c8560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8560ULL || rel >= 0x10c85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c85c0 size=32 callers=0 calls=0
*/
void sub_10c85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c85c0ULL || rel >= 0x10c85e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c85e0 size=64 callers=0 calls=0
*/
void sub_10c85e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c85e0ULL || rel >= 0x10c8620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8620 size=80 callers=0 calls=0
*/
void sub_10c8620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8620ULL || rel >= 0x10c8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8670 size=96 callers=0 calls=0
*/
void sub_10c8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8670ULL || rel >= 0x10c86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c86d0 size=32 callers=0 calls=0
*/
void sub_10c86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c86d0ULL || rel >= 0x10c86f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c86f0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10c86f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c86f0ULL || rel >= 0x10c8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8750 size=64 callers=0 calls=0
*/
void sub_10c8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8750ULL || rel >= 0x10c8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8790 size=32 callers=0 calls=0
*/
void sub_10c8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8790ULL || rel >= 0x10c87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c87b0 size=16 callers=0 calls=0
*/
void sub_10c87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c87b0ULL || rel >= 0x10c87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c87c0 size=144 callers=0 calls=0
*/
void sub_10c87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c87c0ULL || rel >= 0x10c8850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8850 size=144 callers=0 calls=0
*/
void sub_10c8850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8850ULL || rel >= 0x10c88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c88e0 size=240 callers=0 calls=0
*/
void sub_10c88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c88e0ULL || rel >= 0x10c89d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c89d0 size=144 callers=0 calls=0
*/
void sub_10c89d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c89d0ULL || rel >= 0x10c8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8a60 size=144 callers=0 calls=0
*/
void sub_10c8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8a60ULL || rel >= 0x10c8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8af0 size=16 callers=0 calls=0
*/
void sub_10c8af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8af0ULL || rel >= 0x10c8b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8b00 size=16 callers=0 calls=0
*/
void sub_10c8b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8b00ULL || rel >= 0x10c8b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8b10 size=144 callers=0 calls=0
*/
void sub_10c8b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8b10ULL || rel >= 0x10c8ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8ba0 size=144 callers=0 calls=0
*/
void sub_10c8ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8ba0ULL || rel >= 0x10c8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8c30 size=496 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10c8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8c30ULL || rel >= 0x10c8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8e20 size=128 callers=0 calls=1
   calls: sub_10c9210
*/
void sub_10c8e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8e20ULL || rel >= 0x10c8ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8ea0 size=128 callers=0 calls=1
   calls: sub_10c9210
*/
void sub_10c8ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8ea0ULL || rel >= 0x10c8f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c8f20 size=240 callers=0 calls=0
*/
void sub_10c8f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c8f20ULL || rel >= 0x10c9010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9010 size=112 callers=0 calls=1
   calls: sub_10c9210
*/
void sub_10c9010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9010ULL || rel >= 0x10c9080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9080 size=112 callers=0 calls=1
   calls: sub_10c9210
*/
void sub_10c9080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9080ULL || rel >= 0x10c90f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c90f0 size=16 callers=0 calls=0
*/
void sub_10c90f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c90f0ULL || rel >= 0x10c9100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9100 size=16 callers=0 calls=0
*/
void sub_10c9100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9100ULL || rel >= 0x10c9110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9110 size=128 callers=0 calls=1
   calls: sub_10c9210
*/
void sub_10c9110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9110ULL || rel >= 0x10c9190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9190 size=128 callers=0 calls=1
   calls: sub_10c9210
*/
void sub_10c9190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9190ULL || rel >= 0x10c9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9210 size=336 callers=6 calls=0
*/
void sub_10c9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9210ULL || rel >= 0x10c9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9360 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10c9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9360ULL || rel >= 0x10c94c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c94c0 size=176 callers=0 calls=0
*/
void sub_10c94c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c94c0ULL || rel >= 0x10c9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9570 size=176 callers=0 calls=0
*/
void sub_10c9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9570ULL || rel >= 0x10c9620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9620 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c9620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9620ULL || rel >= 0x10c9690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9690 size=64 callers=0 calls=1
   calls: sub_10c9d40
*/
void sub_10c9690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9690ULL || rel >= 0x10c96d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c96d0 size=16 callers=0 calls=0
*/
void sub_10c96d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c96d0ULL || rel >= 0x10c96e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c96e0 size=48 callers=0 calls=0
*/
void sub_10c96e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c96e0ULL || rel >= 0x10c9710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9710 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c9710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9710ULL || rel >= 0x10c97d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c97d0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c97d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c97d0ULL || rel >= 0x10c9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9840 size=176 callers=0 calls=0
*/
void sub_10c9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9840ULL || rel >= 0x10c98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c98f0 size=176 callers=0 calls=0
*/
void sub_10c98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c98f0ULL || rel >= 0x10c99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c99a0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c99a0ULL || rel >= 0x10c9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9a10 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10c9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9a10ULL || rel >= 0x10c9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9a80 size=176 callers=0 calls=0
*/
void sub_10c9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9a80ULL || rel >= 0x10c9b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9b30 size=176 callers=0 calls=0
*/
void sub_10c9b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9b30ULL || rel >= 0x10c9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9be0 size=48 callers=0 calls=0
*/
void sub_10c9be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9be0ULL || rel >= 0x10c9c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9c10 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c9c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9c10ULL || rel >= 0x10c9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9cd0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10c9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9cd0ULL || rel >= 0x10c9d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9d40 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10c9d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9d40ULL || rel >= 0x10c9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9f80 size=16 callers=0 calls=0
*/
void sub_10c9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9f80ULL || rel >= 0x10c9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9f90 size=16 callers=0 calls=0
*/
void sub_10c9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9f90ULL || rel >= 0x10c9fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9fa0 size=16 callers=0 calls=0
*/
void sub_10c9fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9fa0ULL || rel >= 0x10c9fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9fb0 size=32 callers=0 calls=0
*/
void sub_10c9fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9fb0ULL || rel >= 0x10c9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010c9fd0 size=80 callers=0 calls=0
*/
void sub_10c9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c9fd0ULL || rel >= 0x10ca020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca020 size=96 callers=0 calls=0
*/
void sub_10ca020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca020ULL || rel >= 0x10ca080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca080 size=32 callers=0 calls=0
*/
void sub_10ca080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca080ULL || rel >= 0x10ca0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca0a0 size=16 callers=0 calls=0
*/
void sub_10ca0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca0a0ULL || rel >= 0x10ca0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca0b0 size=64 callers=0 calls=0
*/
void sub_10ca0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca0b0ULL || rel >= 0x10ca0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca0f0 size=32 callers=0 calls=0
*/
void sub_10ca0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca0f0ULL || rel >= 0x10ca110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca110 size=16 callers=0 calls=0
*/
void sub_10ca110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca110ULL || rel >= 0x10ca120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca120 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10ca120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca120ULL || rel >= 0x10ca180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca180 size=64 callers=0 calls=0
*/
void sub_10ca180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca180ULL || rel >= 0x10ca1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca1c0 size=32 callers=0 calls=0
*/
void sub_10ca1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca1c0ULL || rel >= 0x10ca1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca1e0 size=16 callers=0 calls=0
*/
void sub_10ca1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca1e0ULL || rel >= 0x10ca1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca1f0 size=128 callers=0 calls=0
*/
void sub_10ca1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca1f0ULL || rel >= 0x10ca270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca270 size=1568 callers=0 calls=15
   calls: HttpThread, dataNo, sub_104c140, sub_104c3f0, sub_10cae40, sub_136b6e0, sub_6a0d90, sub_6dde00, sub_6ddfe0, sub_6de5b0, sub_6de620, sub_6de640
   ... +3 more
   ref: {"nuid":"%llu","rom":"%02d","serialcode":"%s","tok":"%s","langcode":"%02d"}
   ref: https://api.fushigi.switch1.pokemon-gl.com/serial.update
   ref: "serialcodeStatus":"
   ref: https://api.fushigi.switch1.pokemon-gl.com/serial.auth
*/
void serial_update(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca270ULL || rel >= 0x10ca890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca890 size=64 callers=0 calls=0
*/
void sub_10ca890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca890ULL || rel >= 0x10ca8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca8d0 size=16 callers=0 calls=0
*/
void sub_10ca8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca8d0ULL || rel >= 0x10ca8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca8e0 size=16 callers=0 calls=0
*/
void sub_10ca8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca8e0ULL || rel >= 0x10ca8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ca8f0 size=608 callers=1 calls=2
   calls: sub_10cae40, sub_6de640
   ref: "dataNo":"
*/
void dataNo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ca8f0ULL || rel >= 0x10cab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cab50 size=144 callers=0 calls=0
*/
void sub_10cab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cab50ULL || rel >= 0x10cabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cabe0 size=160 callers=0 calls=1
   calls: sub_6ddfe0
*/
void sub_10cabe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cabe0ULL || rel >= 0x10cac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cac80 size=160 callers=0 calls=1
   calls: sub_6ddfe0
*/
void sub_10cac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cac80ULL || rel >= 0x10cad20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cad20 size=64 callers=0 calls=0
*/
void sub_10cad20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cad20ULL || rel >= 0x10cad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cad60 size=16 callers=0 calls=0
*/
void sub_10cad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cad60ULL || rel >= 0x10cad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cad70 size=16 callers=0 calls=0
*/
void sub_10cad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cad70ULL || rel >= 0x10cad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cad80 size=16 callers=0 calls=0
*/
void sub_10cad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cad80ULL || rel >= 0x10cad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cad90 size=16 callers=0 calls=0
*/
void sub_10cad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cad90ULL || rel >= 0x10cada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cada0 size=96 callers=0 calls=0
*/
void sub_10cada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cada0ULL || rel >= 0x10cae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cae00 size=16 callers=0 calls=0
*/
void sub_10cae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cae00ULL || rel >= 0x10cae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cae10 size=48 callers=0 calls=0
*/
void sub_10cae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cae10ULL || rel >= 0x10cae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cae40 size=464 callers=12 calls=0
*/
void sub_10cae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cae40ULL || rel >= 0x10cb010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cb010 size=128 callers=0 calls=0
*/
void sub_10cb010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cb010ULL || rel >= 0x10cb090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cb090 size=240 callers=0 calls=1
   calls: sub_10cc9d0
*/
void sub_10cb090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cb090ULL || rel >= 0x10cb180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cb180 size=16 callers=0 calls=0
*/
void sub_10cb180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cb180ULL || rel >= 0x10cb190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cb190 size=16 callers=0 calls=0
*/
void sub_10cb190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cb190ULL || rel >= 0x10cb1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cb1a0 size=64 callers=0 calls=0
*/
void sub_10cb1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cb1a0ULL || rel >= 0x10cb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cb1e0 size=32 callers=0 calls=0
*/
void sub_10cb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cb1e0ULL || rel >= 0x10cb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cb200 size=704 callers=0 calls=2
   calls: sub_10cc9d0, sub_10ccba0
*/
void sub_10cb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cb200ULL || rel >= 0x10cb4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cb4c0 size=16 callers=0 calls=0
*/
void sub_10cb4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cb4c0ULL || rel >= 0x10cb4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cb4d0 size=16 callers=0 calls=0
*/
void sub_10cb4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cb4d0ULL || rel >= 0x10cb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cb4e0 size=1344 callers=0 calls=12
   calls: sub_104c1a0, sub_10cc9d0, sub_10cccf0, sub_10cce30, sub_10ccf80, sub_69e1f0, sub_69e310, sub_69e360, sub_69e390, sub_69e3b0, sub_69e3c0, sub_69e7f0
*/
void sub_10cb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cb4e0ULL || rel >= 0x10cba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cba20 size=64 callers=0 calls=0
*/
void sub_10cba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cba20ULL || rel >= 0x10cba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cba60 size=16 callers=0 calls=0
*/
void sub_10cba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cba60ULL || rel >= 0x10cba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cba70 size=16 callers=0 calls=0
*/
void sub_10cba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cba70ULL || rel >= 0x10cba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cba80 size=304 callers=0 calls=4
   calls: sub_69e310, sub_69e360, sub_69e390, sub_69e8d0
*/
void sub_10cba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cba80ULL || rel >= 0x10cbbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cbbb0 size=144 callers=0 calls=0
*/
void sub_10cbbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cbbb0ULL || rel >= 0x10cbc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cbc40 size=144 callers=0 calls=0
*/
void sub_10cbc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cbc40ULL || rel >= 0x10cbcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cbcd0 size=240 callers=0 calls=0
*/
void sub_10cbcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cbcd0ULL || rel >= 0x10cbdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cbdc0 size=144 callers=0 calls=0
*/
void sub_10cbdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cbdc0ULL || rel >= 0x10cbe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cbe50 size=144 callers=0 calls=0
*/
void sub_10cbe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cbe50ULL || rel >= 0x10cbee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cbee0 size=16 callers=0 calls=0
*/
void sub_10cbee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cbee0ULL || rel >= 0x10cbef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cbef0 size=16 callers=0 calls=0
*/
void sub_10cbef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cbef0ULL || rel >= 0x10cbf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cbf00 size=144 callers=0 calls=0
*/
void sub_10cbf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cbf00ULL || rel >= 0x10cbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cbf90 size=144 callers=0 calls=0
*/
void sub_10cbf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cbf90ULL || rel >= 0x10cc020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc020 size=144 callers=0 calls=0
*/
void sub_10cc020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc020ULL || rel >= 0x10cc0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc0b0 size=144 callers=0 calls=0
*/
void sub_10cc0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc0b0ULL || rel >= 0x10cc140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc140 size=240 callers=0 calls=0
*/
void sub_10cc140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc140ULL || rel >= 0x10cc230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc230 size=144 callers=0 calls=0
*/
void sub_10cc230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc230ULL || rel >= 0x10cc2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc2c0 size=144 callers=0 calls=0
*/
void sub_10cc2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc2c0ULL || rel >= 0x10cc350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc350 size=16 callers=0 calls=0
*/
void sub_10cc350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc350ULL || rel >= 0x10cc360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc360 size=16 callers=0 calls=0
*/
void sub_10cc360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc360ULL || rel >= 0x10cc370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc370 size=144 callers=0 calls=0
*/
void sub_10cc370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc370ULL || rel >= 0x10cc400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc400 size=144 callers=0 calls=0
*/
void sub_10cc400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc400ULL || rel >= 0x10cc490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc490 size=80 callers=0 calls=0
*/
void sub_10cc490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc490ULL || rel >= 0x10cc4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc4e0 size=240 callers=0 calls=0
*/
void sub_10cc4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc4e0ULL || rel >= 0x10cc5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc5d0 size=80 callers=0 calls=0
*/
void sub_10cc5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc5d0ULL || rel >= 0x10cc620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc620 size=80 callers=0 calls=0
*/
void sub_10cc620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc620ULL || rel >= 0x10cc670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc670 size=16 callers=0 calls=0
*/
void sub_10cc670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc670ULL || rel >= 0x10cc680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc680 size=16 callers=0 calls=0
*/
void sub_10cc680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc680ULL || rel >= 0x10cc690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc690 size=80 callers=0 calls=0
*/
void sub_10cc690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc690ULL || rel >= 0x10cc6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc6e0 size=80 callers=0 calls=0
*/
void sub_10cc6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc6e0ULL || rel >= 0x10cc730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc730 size=192 callers=0 calls=0
*/
void sub_10cc730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc730ULL || rel >= 0x10cc7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc7f0 size=192 callers=0 calls=0
*/
void sub_10cc7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc7f0ULL || rel >= 0x10cc8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc8b0 size=64 callers=0 calls=0
*/
void sub_10cc8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc8b0ULL || rel >= 0x10cc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc8f0 size=16 callers=0 calls=0
*/
void sub_10cc8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc8f0ULL || rel >= 0x10cc900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc900 size=16 callers=0 calls=0
*/
void sub_10cc900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc900ULL || rel >= 0x10cc910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc910 size=16 callers=0 calls=0
*/
void sub_10cc910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc910ULL || rel >= 0x10cc920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc920 size=16 callers=0 calls=0
*/
void sub_10cc920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc920ULL || rel >= 0x10cc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc930 size=96 callers=0 calls=0
*/
void sub_10cc930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc930ULL || rel >= 0x10cc990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc990 size=16 callers=0 calls=0
*/
void sub_10cc990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc990ULL || rel >= 0x10cc9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc9a0 size=48 callers=0 calls=0
*/
void sub_10cc9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc9a0ULL || rel >= 0x10cc9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cc9d0 size=464 callers=7 calls=0
*/
void sub_10cc9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cc9d0ULL || rel >= 0x10ccba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ccba0 size=336 callers=1 calls=1
   calls: sub_65d700
*/
void sub_10ccba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ccba0ULL || rel >= 0x10cccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cccf0 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10cccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cccf0ULL || rel >= 0x10cce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cce30 size=336 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10cce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cce30ULL || rel >= 0x10ccf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ccf80 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10ccf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ccf80ULL || rel >= 0x10cd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cd0c0 size=128 callers=0 calls=0
*/
void sub_10cd0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cd0c0ULL || rel >= 0x10cd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cd140 size=1568 callers=4 calls=8
   calls: sub_1052df0, sub_10563d0, sub_107da50, sub_107e790, sub_1100970, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestLeaveSession
*/
void RequestLeaveSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cd140ULL || rel >= 0x10cd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cd760 size=1568 callers=1 calls=8
   calls: sub_10563d0, sub_107da50, sub_107e790, sub_10cdd80, sub_1100970, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestBrowseSession
*/
void RequestBrowseSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cd760ULL || rel >= 0x10cdd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cdd80 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10cf2c0, sub_6ce100
*/
void sub_10cdd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cdd80ULL || rel >= 0x10cdf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cdf00 size=1408 callers=3 calls=7
   calls: sub_10563d0, sub_107da50, sub_10ce480, sub_1100970, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestCloseSession
*/
void RequestCloseSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cdf00ULL || rel >= 0x10ce480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ce480 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10d0320, sub_6ce100
*/
void sub_10ce480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ce480ULL || rel >= 0x10ce600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010ce600 size=2032 callers=1 calls=14
   calls: sub_1052df0, sub_10563d0, sub_107da50, sub_107e790, sub_10abf40, sub_10cedf0, sub_10cef70, sub_10d0fe0, sub_1100970, sub_5e2350, sub_6a0d40, sub_6ce100
   ... +2 more
   ref: RequestReconnect
*/
void RequestReconnect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ce600ULL || rel >= 0x10cedf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cedf0 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10d13f0, sub_6ce100
*/
void sub_10cedf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cedf0ULL || rel >= 0x10cef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cef70 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10d1ee0, sub_6ce100
*/
void sub_10cef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cef70ULL || rel >= 0x10cf0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf0f0 size=16 callers=0 calls=0
*/
void sub_10cf0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf0f0ULL || rel >= 0x10cf100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf100 size=64 callers=0 calls=0
*/
void sub_10cf100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf100ULL || rel >= 0x10cf140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf140 size=32 callers=0 calls=0
*/
void sub_10cf140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf140ULL || rel >= 0x10cf160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf160 size=16 callers=0 calls=0
*/
void sub_10cf160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf160ULL || rel >= 0x10cf170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf170 size=16 callers=0 calls=0
*/
void sub_10cf170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf170ULL || rel >= 0x10cf180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf180 size=64 callers=0 calls=0
*/
void sub_10cf180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf180ULL || rel >= 0x10cf1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf1c0 size=32 callers=0 calls=0
*/
void sub_10cf1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf1c0ULL || rel >= 0x10cf1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf1e0 size=16 callers=0 calls=0
*/
void sub_10cf1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf1e0ULL || rel >= 0x10cf1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf1f0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10cf1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf1f0ULL || rel >= 0x10cf250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf250 size=64 callers=0 calls=0
*/
void sub_10cf250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf250ULL || rel >= 0x10cf290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf290 size=32 callers=0 calls=0
*/
void sub_10cf290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf290ULL || rel >= 0x10cf2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf2b0 size=16 callers=0 calls=0
*/
void sub_10cf2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf2b0ULL || rel >= 0x10cf2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf2c0 size=320 callers=1 calls=2
   calls: sub_1050af0, sub_5e2350
*/
void sub_10cf2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf2c0ULL || rel >= 0x10cf400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf400 size=288 callers=0 calls=0
*/
void sub_10cf400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf400ULL || rel >= 0x10cf520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf520 size=288 callers=0 calls=0
*/
void sub_10cf520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf520ULL || rel >= 0x10cf640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf640 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10cf640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf640ULL || rel >= 0x10cf6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf6b0 size=64 callers=0 calls=1
   calls: sub_10cff20
*/
void sub_10cf6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf6b0ULL || rel >= 0x10cf6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf6f0 size=16 callers=0 calls=0
*/
void sub_10cf6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf6f0ULL || rel >= 0x10cf700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf700 size=48 callers=0 calls=0
*/
void sub_10cf700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf700ULL || rel >= 0x10cf730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf730 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10cf730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf730ULL || rel >= 0x10cf7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf7f0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10cf7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf7f0ULL || rel >= 0x10cf860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf860 size=288 callers=0 calls=0
*/
void sub_10cf860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf860ULL || rel >= 0x10cf980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cf980 size=288 callers=0 calls=0
*/
void sub_10cf980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cf980ULL || rel >= 0x10cfaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cfaa0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10cfaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cfaa0ULL || rel >= 0x10cfb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cfb10 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10cfb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cfb10ULL || rel >= 0x10cfb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cfb80 size=288 callers=0 calls=0
*/
void sub_10cfb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cfb80ULL || rel >= 0x10cfca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cfca0 size=288 callers=0 calls=0
*/
void sub_10cfca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cfca0ULL || rel >= 0x10cfdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cfdc0 size=48 callers=0 calls=0
*/
void sub_10cfdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cfdc0ULL || rel >= 0x10cfdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cfdf0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10cfdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cfdf0ULL || rel >= 0x10cfeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cfeb0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10cfeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cfeb0ULL || rel >= 0x10cff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010cff20 size=560 callers=1 calls=3
   calls: sub_1058350, sub_6a1f70, sub_6a1f80
*/
void sub_10cff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cff20ULL || rel >= 0x10d0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0150 size=16 callers=0 calls=0
*/
void sub_10d0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0150ULL || rel >= 0x10d0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0160 size=64 callers=0 calls=0
*/
void sub_10d0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0160ULL || rel >= 0x10d01a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d01a0 size=32 callers=0 calls=0
*/
void sub_10d01a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d01a0ULL || rel >= 0x10d01c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d01c0 size=16 callers=0 calls=0
*/
void sub_10d01c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d01c0ULL || rel >= 0x10d01d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d01d0 size=16 callers=0 calls=0
*/
void sub_10d01d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d01d0ULL || rel >= 0x10d01e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d01e0 size=64 callers=0 calls=0
*/
void sub_10d01e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d01e0ULL || rel >= 0x10d0220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0220 size=32 callers=0 calls=0
*/
void sub_10d0220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0220ULL || rel >= 0x10d0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0240 size=16 callers=0 calls=0
*/
void sub_10d0240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0240ULL || rel >= 0x10d0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0250 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10d0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0250ULL || rel >= 0x10d02b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d02b0 size=64 callers=0 calls=0
*/
void sub_10d02b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d02b0ULL || rel >= 0x10d02f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d02f0 size=32 callers=0 calls=0
*/
void sub_10d02f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d02f0ULL || rel >= 0x10d0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0310 size=16 callers=0 calls=0
*/
void sub_10d0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0310ULL || rel >= 0x10d0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0320 size=288 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10d0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0320ULL || rel >= 0x10d0440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0440 size=144 callers=0 calls=0
*/
void sub_10d0440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0440ULL || rel >= 0x10d04d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d04d0 size=144 callers=0 calls=0
*/
void sub_10d04d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d04d0ULL || rel >= 0x10d0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0560 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0560ULL || rel >= 0x10d05d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d05d0 size=64 callers=0 calls=1
   calls: sub_10d0c00
*/
void sub_10d05d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d05d0ULL || rel >= 0x10d0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0610 size=16 callers=0 calls=0
*/
void sub_10d0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0610ULL || rel >= 0x10d0620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0620 size=48 callers=0 calls=0
*/
void sub_10d0620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0620ULL || rel >= 0x10d0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0650 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d0650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0650ULL || rel >= 0x10d0710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0710 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d0710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0710ULL || rel >= 0x10d0780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0780 size=144 callers=0 calls=0
*/
void sub_10d0780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0780ULL || rel >= 0x10d0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0810 size=144 callers=0 calls=0
*/
void sub_10d0810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0810ULL || rel >= 0x10d08a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d08a0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d08a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d08a0ULL || rel >= 0x10d0910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0910 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d0910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0910ULL || rel >= 0x10d0980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0980 size=144 callers=0 calls=0
*/
void sub_10d0980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0980ULL || rel >= 0x10d0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0a10 size=144 callers=0 calls=0
*/
void sub_10d0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0a10ULL || rel >= 0x10d0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0aa0 size=48 callers=0 calls=0
*/
void sub_10d0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0aa0ULL || rel >= 0x10d0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0ad0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0ad0ULL || rel >= 0x10d0b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0b90 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d0b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0b90ULL || rel >= 0x10d0c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0c00 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10d0c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0c00ULL || rel >= 0x10d0e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0e10 size=16 callers=0 calls=0
*/
void sub_10d0e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0e10ULL || rel >= 0x10d0e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0e20 size=64 callers=0 calls=0
*/
void sub_10d0e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0e20ULL || rel >= 0x10d0e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0e60 size=32 callers=0 calls=0
*/
void sub_10d0e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0e60ULL || rel >= 0x10d0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0e80 size=16 callers=0 calls=0
*/
void sub_10d0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0e80ULL || rel >= 0x10d0e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0e90 size=16 callers=0 calls=0
*/
void sub_10d0e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0e90ULL || rel >= 0x10d0ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0ea0 size=64 callers=0 calls=0
*/
void sub_10d0ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0ea0ULL || rel >= 0x10d0ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0ee0 size=32 callers=0 calls=0
*/
void sub_10d0ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0ee0ULL || rel >= 0x10d0f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0f00 size=16 callers=0 calls=0
*/
void sub_10d0f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0f00ULL || rel >= 0x10d0f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0f10 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10d0f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0f10ULL || rel >= 0x10d0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0f70 size=64 callers=0 calls=0
*/
void sub_10d0f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0f70ULL || rel >= 0x10d0fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0fb0 size=32 callers=0 calls=0
*/
void sub_10d0fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0fb0ULL || rel >= 0x10d0fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0fd0 size=16 callers=0 calls=0
*/
void sub_10d0fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0fd0ULL || rel >= 0x10d0fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d0fe0 size=368 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10d0fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d0fe0ULL || rel >= 0x10d1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1150 size=80 callers=0 calls=0
*/
void sub_10d1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1150ULL || rel >= 0x10d11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d11a0 size=240 callers=0 calls=0
*/
void sub_10d11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d11a0ULL || rel >= 0x10d1290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1290 size=80 callers=0 calls=0
*/
void sub_10d1290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1290ULL || rel >= 0x10d12e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d12e0 size=80 callers=0 calls=0
*/
void sub_10d12e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d12e0ULL || rel >= 0x10d1330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1330 size=16 callers=0 calls=0
*/
void sub_10d1330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1330ULL || rel >= 0x10d1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1340 size=16 callers=0 calls=0
*/
void sub_10d1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1340ULL || rel >= 0x10d1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1350 size=80 callers=0 calls=0
*/
void sub_10d1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1350ULL || rel >= 0x10d13a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d13a0 size=80 callers=0 calls=0
*/
void sub_10d13a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d13a0ULL || rel >= 0x10d13f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d13f0 size=288 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10d13f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d13f0ULL || rel >= 0x10d1510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1510 size=144 callers=0 calls=0
*/
void sub_10d1510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1510ULL || rel >= 0x10d15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d15a0 size=144 callers=0 calls=0
*/
void sub_10d15a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d15a0ULL || rel >= 0x10d1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1630 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1630ULL || rel >= 0x10d16a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d16a0 size=64 callers=0 calls=1
   calls: sub_10d1cd0
*/
void sub_10d16a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d16a0ULL || rel >= 0x10d16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d16e0 size=16 callers=0 calls=0
*/
void sub_10d16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d16e0ULL || rel >= 0x10d16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d16f0 size=48 callers=0 calls=0
*/
void sub_10d16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d16f0ULL || rel >= 0x10d1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1720 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1720ULL || rel >= 0x10d17e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d17e0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d17e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d17e0ULL || rel >= 0x10d1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1850 size=144 callers=0 calls=0
*/
void sub_10d1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1850ULL || rel >= 0x10d18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d18e0 size=144 callers=0 calls=0
*/
void sub_10d18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d18e0ULL || rel >= 0x10d1970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1970 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d1970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1970ULL || rel >= 0x10d19e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d19e0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d19e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d19e0ULL || rel >= 0x10d1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1a50 size=144 callers=0 calls=0
*/
void sub_10d1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1a50ULL || rel >= 0x10d1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1ae0 size=144 callers=0 calls=0
*/
void sub_10d1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1ae0ULL || rel >= 0x10d1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1b70 size=48 callers=0 calls=0
*/
void sub_10d1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1b70ULL || rel >= 0x10d1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1ba0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1ba0ULL || rel >= 0x10d1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1c60 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1c60ULL || rel >= 0x10d1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1cd0 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10d1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1cd0ULL || rel >= 0x10d1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d1ee0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10d1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d1ee0ULL || rel >= 0x10d2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2040 size=176 callers=0 calls=0
*/
void sub_10d2040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2040ULL || rel >= 0x10d20f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d20f0 size=176 callers=0 calls=0
*/
void sub_10d20f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d20f0ULL || rel >= 0x10d21a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d21a0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d21a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d21a0ULL || rel >= 0x10d2210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2210 size=64 callers=0 calls=1
   calls: sub_10d28c0
*/
void sub_10d2210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2210ULL || rel >= 0x10d2250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2250 size=16 callers=0 calls=0
*/
void sub_10d2250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2250ULL || rel >= 0x10d2260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2260 size=48 callers=0 calls=0
*/
void sub_10d2260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2260ULL || rel >= 0x10d2290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2290 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d2290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2290ULL || rel >= 0x10d2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2350 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2350ULL || rel >= 0x10d23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d23c0 size=176 callers=0 calls=0
*/
void sub_10d23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d23c0ULL || rel >= 0x10d2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2470 size=176 callers=0 calls=0
*/
void sub_10d2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2470ULL || rel >= 0x10d2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2520 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2520ULL || rel >= 0x10d2590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2590 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d2590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2590ULL || rel >= 0x10d2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2600 size=176 callers=0 calls=0
*/
void sub_10d2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2600ULL || rel >= 0x10d26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d26b0 size=176 callers=0 calls=0
*/
void sub_10d26b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d26b0ULL || rel >= 0x10d2760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2760 size=48 callers=0 calls=0
*/
void sub_10d2760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2760ULL || rel >= 0x10d2790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2790 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d2790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2790ULL || rel >= 0x10d2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2850 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2850ULL || rel >= 0x10d28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d28c0 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10d28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d28c0ULL || rel >= 0x10d2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2b00 size=16 callers=0 calls=0
*/
void sub_10d2b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2b00ULL || rel >= 0x10d2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2b10 size=16 callers=0 calls=0
*/
void sub_10d2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2b10ULL || rel >= 0x10d2b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2b20 size=16 callers=0 calls=0
*/
void sub_10d2b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2b20ULL || rel >= 0x10d2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2b30 size=16 callers=0 calls=0
*/
void sub_10d2b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2b30ULL || rel >= 0x10d2b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2b40 size=64 callers=0 calls=0
*/
void sub_10d2b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2b40ULL || rel >= 0x10d2b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2b80 size=32 callers=0 calls=0
*/
void sub_10d2b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2b80ULL || rel >= 0x10d2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2ba0 size=16 callers=0 calls=0
*/
void sub_10d2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2ba0ULL || rel >= 0x10d2bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2bb0 size=64 callers=0 calls=0
*/
void sub_10d2bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2bb0ULL || rel >= 0x10d2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2bf0 size=80 callers=0 calls=0
*/
void sub_10d2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2bf0ULL || rel >= 0x10d2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2c40 size=96 callers=0 calls=0
*/
void sub_10d2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2c40ULL || rel >= 0x10d2ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2ca0 size=32 callers=0 calls=0
*/
void sub_10d2ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2ca0ULL || rel >= 0x10d2cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2cc0 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10d2cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2cc0ULL || rel >= 0x10d2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2d20 size=64 callers=0 calls=0
*/
void sub_10d2d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2d20ULL || rel >= 0x10d2d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2d60 size=32 callers=0 calls=0
*/
void sub_10d2d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2d60ULL || rel >= 0x10d2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2d80 size=16 callers=0 calls=0
*/
void sub_10d2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2d80ULL || rel >= 0x10d2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2d90 size=128 callers=0 calls=0
*/
void sub_10d2d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2d90ULL || rel >= 0x10d2e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2e10 size=384 callers=0 calls=7
   calls: sub_6a0d40, sub_6ae700, sub_6ae770, sub_6ae790, sub_6ae7b0, sub_6ae7d0, sub_6ae7f0
*/
void sub_10d2e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2e10ULL || rel >= 0x10d2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2f90 size=16 callers=0 calls=0
*/
void sub_10d2f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2f90ULL || rel >= 0x10d2fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2fa0 size=80 callers=0 calls=0
*/
void sub_10d2fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2fa0ULL || rel >= 0x10d2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d2ff0 size=128 callers=0 calls=0
*/
void sub_10d2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d2ff0ULL || rel >= 0x10d3070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3070 size=912 callers=0 calls=7
   calls: sub_6a0d40, sub_6ae5c0, sub_6ae770, sub_6ae790, sub_6ae7b0, sub_6ae7d0, sub_6ae7f0
*/
void sub_10d3070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3070ULL || rel >= 0x10d3400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3400 size=16 callers=0 calls=0
*/
void sub_10d3400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3400ULL || rel >= 0x10d3410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3410 size=48 callers=0 calls=1
   calls: sub_1079040
*/
void sub_10d3410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3410ULL || rel >= 0x10d3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3440 size=128 callers=0 calls=0
*/
void sub_10d3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3440ULL || rel >= 0x10d34c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d34c0 size=464 callers=0 calls=7
   calls: sub_10d3880, sub_6ae6e0, sub_6ae770, sub_6ae790, sub_6ae7b0, sub_6ae7d0, sub_6ae7f0
*/
void sub_10d34c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d34c0ULL || rel >= 0x10d3690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3690 size=64 callers=0 calls=0
*/
void sub_10d3690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3690ULL || rel >= 0x10d36d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d36d0 size=16 callers=0 calls=0
*/
void sub_10d36d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d36d0ULL || rel >= 0x10d36e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d36e0 size=16 callers=0 calls=0
*/
void sub_10d36e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d36e0ULL || rel >= 0x10d36f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d36f0 size=16 callers=0 calls=0
*/
void sub_10d36f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d36f0ULL || rel >= 0x10d3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3700 size=96 callers=0 calls=0
*/
void sub_10d3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3700ULL || rel >= 0x10d3760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3760 size=64 callers=0 calls=0
*/
void sub_10d3760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3760ULL || rel >= 0x10d37a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d37a0 size=16 callers=0 calls=0
*/
void sub_10d37a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d37a0ULL || rel >= 0x10d37b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d37b0 size=16 callers=0 calls=0
*/
void sub_10d37b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d37b0ULL || rel >= 0x10d37c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d37c0 size=16 callers=0 calls=0
*/
void sub_10d37c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d37c0ULL || rel >= 0x10d37d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d37d0 size=16 callers=0 calls=0
*/
void sub_10d37d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d37d0ULL || rel >= 0x10d37e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d37e0 size=96 callers=0 calls=0
*/
void sub_10d37e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d37e0ULL || rel >= 0x10d3840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3840 size=16 callers=0 calls=0
*/
void sub_10d3840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3840ULL || rel >= 0x10d3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3850 size=48 callers=0 calls=0
*/
void sub_10d3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3850ULL || rel >= 0x10d3880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3880 size=464 callers=1 calls=0
*/
void sub_10d3880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3880ULL || rel >= 0x10d3a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3a50 size=128 callers=0 calls=0
*/
void sub_10d3a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3a50ULL || rel >= 0x10d3ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3ad0 size=128 callers=0 calls=0
*/
void sub_10d3ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3ad0ULL || rel >= 0x10d3b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3b50 size=128 callers=0 calls=0
*/
void sub_10d3b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3b50ULL || rel >= 0x10d3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d3bd0 size=2080 callers=1 calls=9
   calls: sub_10563d0, sub_107e790, sub_10d43f0, sub_10d5500, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestSearchRegulation
*/
void RequestSearchRegulation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d3bd0ULL || rel >= 0x10d43f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d43f0 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10d5c70, sub_6ce100
*/
void sub_10d43f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d43f0ULL || rel >= 0x10d4570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d4570 size=2080 callers=5 calls=9
   calls: sub_10d4d90, sub_10d4f10, sub_10d73e0, sub_10d7a00, sub_1100970, sub_5e2350, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: RequestDownloadRegulation
*/
void RequestDownloadRegulation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d4570ULL || rel >= 0x10d4d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d4d90 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10d7fe0, sub_6ce100
*/
void sub_10d4d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d4d90ULL || rel >= 0x10d4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d4f10 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10d8bb0, sub_6ce100
*/
void sub_10d4f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d4f10ULL || rel >= 0x10d5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5090 size=144 callers=0 calls=0
*/
void sub_10d5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5090ULL || rel >= 0x10d5120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5120 size=144 callers=0 calls=0
*/
void sub_10d5120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5120ULL || rel >= 0x10d51b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d51b0 size=240 callers=0 calls=0
*/
void sub_10d51b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d51b0ULL || rel >= 0x10d52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d52a0 size=144 callers=0 calls=0
*/
void sub_10d52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d52a0ULL || rel >= 0x10d5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5330 size=144 callers=0 calls=0
*/
void sub_10d5330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5330ULL || rel >= 0x10d53c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d53c0 size=16 callers=0 calls=0
*/
void sub_10d53c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d53c0ULL || rel >= 0x10d53d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d53d0 size=16 callers=0 calls=0
*/
void sub_10d53d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d53d0ULL || rel >= 0x10d53e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d53e0 size=144 callers=0 calls=0
*/
void sub_10d53e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d53e0ULL || rel >= 0x10d5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5470 size=144 callers=0 calls=0
*/
void sub_10d5470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5470ULL || rel >= 0x10d5500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5500 size=480 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10d5500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5500ULL || rel >= 0x10d56e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d56e0 size=192 callers=0 calls=0
*/
void sub_10d56e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d56e0ULL || rel >= 0x10d57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d57a0 size=192 callers=0 calls=0
*/
void sub_10d57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d57a0ULL || rel >= 0x10d5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5860 size=240 callers=0 calls=0
*/
void sub_10d5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5860ULL || rel >= 0x10d5950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5950 size=192 callers=0 calls=0
*/
void sub_10d5950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5950ULL || rel >= 0x10d5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5a10 size=192 callers=0 calls=0
*/
void sub_10d5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5a10ULL || rel >= 0x10d5ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5ad0 size=16 callers=0 calls=0
*/
void sub_10d5ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5ad0ULL || rel >= 0x10d5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5ae0 size=16 callers=0 calls=0
*/
void sub_10d5ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5ae0ULL || rel >= 0x10d5af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5af0 size=192 callers=0 calls=0
*/
void sub_10d5af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5af0ULL || rel >= 0x10d5bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5bb0 size=192 callers=0 calls=0
*/
void sub_10d5bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5bb0ULL || rel >= 0x10d5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5c70 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10d5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5c70ULL || rel >= 0x10d5dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5dd0 size=176 callers=0 calls=0
*/
void sub_10d5dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5dd0ULL || rel >= 0x10d5e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5e80 size=176 callers=0 calls=0
*/
void sub_10d5e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5e80ULL || rel >= 0x10d5f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5f30 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d5f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5f30ULL || rel >= 0x10d5fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5fa0 size=64 callers=0 calls=1
   calls: sub_10d6650
*/
void sub_10d5fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5fa0ULL || rel >= 0x10d5fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5fe0 size=16 callers=0 calls=0
*/
void sub_10d5fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5fe0ULL || rel >= 0x10d5ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d5ff0 size=48 callers=0 calls=0
*/
void sub_10d5ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d5ff0ULL || rel >= 0x10d6020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6020 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d6020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6020ULL || rel >= 0x10d60e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d60e0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d60e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d60e0ULL || rel >= 0x10d6150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6150 size=176 callers=0 calls=0
*/
void sub_10d6150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6150ULL || rel >= 0x10d6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6200 size=176 callers=0 calls=0
*/
void sub_10d6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6200ULL || rel >= 0x10d62b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d62b0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d62b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d62b0ULL || rel >= 0x10d6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6320 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6320ULL || rel >= 0x10d6390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6390 size=176 callers=0 calls=0
*/
void sub_10d6390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6390ULL || rel >= 0x10d6440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6440 size=176 callers=0 calls=0
*/
void sub_10d6440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6440ULL || rel >= 0x10d64f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d64f0 size=48 callers=0 calls=0
*/
void sub_10d64f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d64f0ULL || rel >= 0x10d6520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6520 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d6520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6520ULL || rel >= 0x10d65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d65e0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d65e0ULL || rel >= 0x10d6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6650 size=576 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10d6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6650ULL || rel >= 0x10d6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6890 size=16 callers=0 calls=0
*/
void sub_10d6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6890ULL || rel >= 0x10d68a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d68a0 size=16 callers=0 calls=0
*/
void sub_10d68a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d68a0ULL || rel >= 0x10d68b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d68b0 size=16 callers=0 calls=0
*/
void sub_10d68b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d68b0ULL || rel >= 0x10d68c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d68c0 size=32 callers=0 calls=0
*/
void sub_10d68c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d68c0ULL || rel >= 0x10d68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d68e0 size=80 callers=0 calls=0
*/
void sub_10d68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d68e0ULL || rel >= 0x10d6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6930 size=96 callers=0 calls=0
*/
void sub_10d6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6930ULL || rel >= 0x10d6990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6990 size=32 callers=0 calls=0
*/
void sub_10d6990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6990ULL || rel >= 0x10d69b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d69b0 size=16 callers=0 calls=0
*/
void sub_10d69b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d69b0ULL || rel >= 0x10d69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d69c0 size=64 callers=0 calls=0
*/
void sub_10d69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d69c0ULL || rel >= 0x10d6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6a00 size=32 callers=0 calls=0
*/
void sub_10d6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6a00ULL || rel >= 0x10d6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6a20 size=16 callers=0 calls=0
*/
void sub_10d6a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6a20ULL || rel >= 0x10d6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6a30 size=96 callers=0 calls=2
   calls: sub_10f5bf0, sub_f9cab0
*/
void sub_10d6a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6a30ULL || rel >= 0x10d6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6a90 size=64 callers=0 calls=0
*/
void sub_10d6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6a90ULL || rel >= 0x10d6ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6ad0 size=32 callers=0 calls=0
*/
void sub_10d6ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6ad0ULL || rel >= 0x10d6af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6af0 size=16 callers=0 calls=0
*/
void sub_10d6af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6af0ULL || rel >= 0x10d6b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6b00 size=144 callers=0 calls=0
*/
void sub_10d6b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6b00ULL || rel >= 0x10d6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6b90 size=144 callers=0 calls=0
*/
void sub_10d6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6b90ULL || rel >= 0x10d6c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6c20 size=240 callers=0 calls=0
*/
void sub_10d6c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6c20ULL || rel >= 0x10d6d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6d10 size=144 callers=0 calls=0
*/
void sub_10d6d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6d10ULL || rel >= 0x10d6da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6da0 size=144 callers=0 calls=0
*/
void sub_10d6da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6da0ULL || rel >= 0x10d6e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6e30 size=16 callers=0 calls=0
*/
void sub_10d6e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6e30ULL || rel >= 0x10d6e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6e40 size=16 callers=0 calls=0
*/
void sub_10d6e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6e40ULL || rel >= 0x10d6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6e50 size=144 callers=0 calls=0
*/
void sub_10d6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6e50ULL || rel >= 0x10d6ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6ee0 size=144 callers=0 calls=0
*/
void sub_10d6ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6ee0ULL || rel >= 0x10d6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d6f70 size=144 callers=0 calls=0
*/
void sub_10d6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6f70ULL || rel >= 0x10d7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7000 size=144 callers=0 calls=0
*/
void sub_10d7000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7000ULL || rel >= 0x10d7090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7090 size=240 callers=0 calls=0
*/
void sub_10d7090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7090ULL || rel >= 0x10d7180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7180 size=144 callers=0 calls=0
*/
void sub_10d7180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7180ULL || rel >= 0x10d7210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7210 size=144 callers=0 calls=0
*/
void sub_10d7210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7210ULL || rel >= 0x10d72a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d72a0 size=16 callers=0 calls=0
*/
void sub_10d72a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d72a0ULL || rel >= 0x10d72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d72b0 size=16 callers=0 calls=0
*/
void sub_10d72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d72b0ULL || rel >= 0x10d72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d72c0 size=144 callers=0 calls=0
*/
void sub_10d72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d72c0ULL || rel >= 0x10d7350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7350 size=144 callers=0 calls=0
*/
void sub_10d7350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7350ULL || rel >= 0x10d73e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d73e0 size=432 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10d73e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d73e0ULL || rel >= 0x10d7590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7590 size=144 callers=0 calls=0
*/
void sub_10d7590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7590ULL || rel >= 0x10d7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7620 size=144 callers=0 calls=0
*/
void sub_10d7620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7620ULL || rel >= 0x10d76b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d76b0 size=240 callers=0 calls=0
*/
void sub_10d76b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d76b0ULL || rel >= 0x10d77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d77a0 size=144 callers=0 calls=0
*/
void sub_10d77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d77a0ULL || rel >= 0x10d7830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7830 size=144 callers=0 calls=0
*/
void sub_10d7830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7830ULL || rel >= 0x10d78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d78c0 size=16 callers=0 calls=0
*/
void sub_10d78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d78c0ULL || rel >= 0x10d78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d78d0 size=16 callers=0 calls=0
*/
void sub_10d78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d78d0ULL || rel >= 0x10d78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d78e0 size=144 callers=0 calls=0
*/
void sub_10d78e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d78e0ULL || rel >= 0x10d7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7970 size=144 callers=0 calls=0
*/
void sub_10d7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7970ULL || rel >= 0x10d7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7a00 size=304 callers=1 calls=1
   calls: sub_6ce110
*/
void sub_10d7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7a00ULL || rel >= 0x10d7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7b30 size=256 callers=0 calls=0
*/
void sub_10d7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7b30ULL || rel >= 0x10d7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7c30 size=16 callers=0 calls=0
*/
void sub_10d7c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7c30ULL || rel >= 0x10d7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7c40 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_10d7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7c40ULL || rel >= 0x10d7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7cb0 size=336 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7cb0ULL || rel >= 0x10d7e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7e00 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d7e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7e00ULL || rel >= 0x10d7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7e60 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10d7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7e60ULL || rel >= 0x10d7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7ec0 size=16 callers=0 calls=0
*/
void sub_10d7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7ec0ULL || rel >= 0x10d7ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7ed0 size=16 callers=0 calls=0
*/
void sub_10d7ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7ed0ULL || rel >= 0x10d7ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7ee0 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_10d7ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7ee0ULL || rel >= 0x10d7f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7f50 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_10d7f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7f50ULL || rel >= 0x10d7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7fc0 size=16 callers=0 calls=0
*/
void sub_10d7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7fc0ULL || rel >= 0x10d7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7fd0 size=16 callers=0 calls=0
*/
void sub_10d7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7fd0ULL || rel >= 0x10d7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d7fe0 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10d7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7fe0ULL || rel >= 0x10d8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d8140 size=176 callers=0 calls=0
*/
void sub_10d8140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d8140ULL || rel >= 0x10d81f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d81f0 size=176 callers=0 calls=0
*/
void sub_10d81f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d81f0ULL || rel >= 0x10d82a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d82a0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10d82a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d82a0ULL || rel >= 0x10d8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d8310 size=64 callers=0 calls=1
   calls: sub_10d8940
*/
void sub_10d8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d8310ULL || rel >= 0x10d8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d8350 size=16 callers=0 calls=0
*/
void sub_10d8350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d8350ULL || rel >= 0x10d8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010d8360 size=48 callers=0 calls=0
*/
void sub_10d8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d8360ULL || rel >= 0x10d8390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

