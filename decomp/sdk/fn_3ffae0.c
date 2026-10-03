/* sdk functions 003ffae0..00413080 (44 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 003ffae0 size=224 callers=3 calls=0
*/
void sub_3ffae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffae0ULL || rel >= 0x3ffbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffbc0 size=240 callers=0 calls=0
*/
void sub_3ffbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffbc0ULL || rel >= 0x3ffcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffcb0 size=32 callers=0 calls=0
*/
void sub_3ffcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffcb0ULL || rel >= 0x3ffcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffcd0 size=272 callers=0 calls=0
*/
void sub_3ffcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffcd0ULL || rel >= 0x3ffde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffde0 size=32 callers=0 calls=0
*/
void sub_3ffde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffde0ULL || rel >= 0x3ffe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffe00 size=64 callers=0 calls=0
*/
void sub_3ffe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffe00ULL || rel >= 0x3ffe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffe40 size=48 callers=0 calls=0
*/
void sub_3ffe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffe40ULL || rel >= 0x3ffe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffe70 size=16 callers=0 calls=0
*/
void sub_3ffe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffe70ULL || rel >= 0x3ffe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffe80 size=80 callers=0 calls=0
*/
void sub_3ffe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffe80ULL || rel >= 0x3ffed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffed0 size=16 callers=0 calls=0
*/
void sub_3ffed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffed0ULL || rel >= 0x3ffee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffee0 size=400 callers=0 calls=1
   calls: sub_3fd780
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffee0ULL || rel >= 0x400070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400070 size=16 callers=0 calls=0
*/
void sub_400070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400070ULL || rel >= 0x400080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400080 size=96 callers=0 calls=0
*/
void sub_400080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400080ULL || rel >= 0x4000e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004000e0 size=32 callers=0 calls=0
*/
void sub_4000e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4000e0ULL || rel >= 0x400100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400100 size=16 callers=2 calls=0
*/
void sub_400100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400100ULL || rel >= 0x400110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400110 size=32 callers=0 calls=0
*/
void sub_400110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400110ULL || rel >= 0x400130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400130 size=32 callers=0 calls=0
*/
void sub_400130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400130ULL || rel >= 0x400150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400150 size=32 callers=0 calls=0
*/
void sub_400150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400150ULL || rel >= 0x400170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400170 size=128 callers=0 calls=0
*/
void sub_400170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400170ULL || rel >= 0x4001f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004001f0 size=16 callers=0 calls=0
*/
void sub_4001f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4001f0ULL || rel >= 0x400200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400200 size=240 callers=0 calls=0
*/
void sub_400200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400200ULL || rel >= 0x4002f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004002f0 size=432 callers=0 calls=1
   calls: sub_3fd150
*/
void sub_4002f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4002f0ULL || rel >= 0x4004a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004004a0 size=16 callers=0 calls=0
*/
void sub_4004a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4004a0ULL || rel >= 0x4004b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004004b0 size=144 callers=0 calls=0
*/
void sub_4004b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4004b0ULL || rel >= 0x400540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400540 size=16 callers=0 calls=0
*/
void sub_400540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400540ULL || rel >= 0x400550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400550 size=720 callers=0 calls=1
   calls: sub_3fd150
*/
void sub_400550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400550ULL || rel >= 0x400820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400820 size=176 callers=0 calls=0
*/
void sub_400820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400820ULL || rel >= 0x4008d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004008d0 size=128 callers=0 calls=0
*/
void sub_4008d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4008d0ULL || rel >= 0x400950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400950 size=32 callers=0 calls=0
*/
void sub_400950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400950ULL || rel >= 0x400970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400970 size=16 callers=0 calls=0
*/
void sub_400970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400970ULL || rel >= 0x400980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400980 size=16 callers=0 calls=0
*/
void sub_400980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400980ULL || rel >= 0x400990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400990 size=48 callers=0 calls=0
*/
void sub_400990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400990ULL || rel >= 0x4009c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004009c0 size=16 callers=0 calls=0
*/
void sub_4009c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4009c0ULL || rel >= 0x4009d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004009d0 size=16 callers=0 calls=0
*/
void sub_4009d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4009d0ULL || rel >= 0x4009e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004009e0 size=16 callers=0 calls=0
*/
void sub_4009e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4009e0ULL || rel >= 0x4009f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004009f0 size=240 callers=1 calls=0
*/
void sub_4009f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4009f0ULL || rel >= 0x400ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400ae0 size=496 callers=1 calls=0
*/
void sub_400ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400ae0ULL || rel >= 0x400cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400cd0 size=160 callers=4 calls=0
*/
void sub_400cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400cd0ULL || rel >= 0x400d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400d70 size=400 callers=1 calls=3
   calls: sub_400f00, sub_4011b0, sub_441da0
*/
void sub_400d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400d70ULL || rel >= 0x400f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00400f00 size=688 callers=3 calls=0
*/
void sub_400f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x400f00ULL || rel >= 0x4011b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004011b0 size=256 callers=3 calls=2
   calls: sub_441b00, sub_441e30
*/
void sub_4011b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4011b0ULL || rel >= 0x4012b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004012b0 size=400 callers=1 calls=2
   calls: sub_442120, sub_442220
*/
void sub_4012b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4012b0ULL || rel >= 0x401440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401440 size=16 callers=1 calls=0
*/
void sub_401440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401440ULL || rel >= 0x401450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401450 size=2128 callers=0 calls=0
*/
void sub_401450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401450ULL || rel >= 0x401ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401ca0 size=16 callers=1 calls=0
*/
void sub_401ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401ca0ULL || rel >= 0x401cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00401cb0 size=2128 callers=0 calls=0
*/
void sub_401cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x401cb0ULL || rel >= 0x402500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402500 size=16 callers=1 calls=0
*/
void sub_402500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402500ULL || rel >= 0x402510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402510 size=16 callers=0 calls=0
*/
void sub_402510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402510ULL || rel >= 0x402520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402520 size=16 callers=1 calls=0
*/
void sub_402520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402520ULL || rel >= 0x402530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402530 size=16 callers=0 calls=0
*/
void sub_402530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402530ULL || rel >= 0x402540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402540 size=16 callers=0 calls=0
*/
void sub_402540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402540ULL || rel >= 0x402550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402550 size=16 callers=0 calls=0
*/
void sub_402550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402550ULL || rel >= 0x402560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402560 size=16 callers=0 calls=0
*/
void sub_402560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402560ULL || rel >= 0x402570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402570 size=80 callers=1 calls=0
*/
void sub_402570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402570ULL || rel >= 0x4025c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004025c0 size=16 callers=2 calls=0
*/
void sub_4025c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4025c0ULL || rel >= 0x4025d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004025d0 size=64 callers=1 calls=0
*/
void sub_4025d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4025d0ULL || rel >= 0x402610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402610 size=64 callers=3 calls=0
*/
void sub_402610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402610ULL || rel >= 0x402650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402650 size=32 callers=0 calls=0
*/
void sub_402650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402650ULL || rel >= 0x402670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402670 size=32 callers=0 calls=0
*/
void sub_402670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402670ULL || rel >= 0x402690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402690 size=16 callers=0 calls=0
*/
void sub_402690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402690ULL || rel >= 0x4026a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004026a0 size=16 callers=0 calls=0
*/
void sub_4026a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4026a0ULL || rel >= 0x4026b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004026b0 size=16 callers=0 calls=0
*/
void sub_4026b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4026b0ULL || rel >= 0x4026c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004026c0 size=16 callers=0 calls=0
*/
void sub_4026c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4026c0ULL || rel >= 0x4026d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004026d0 size=96 callers=1 calls=0
*/
void sub_4026d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4026d0ULL || rel >= 0x402730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402730 size=16 callers=1 calls=0
*/
void sub_402730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402730ULL || rel >= 0x402740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402740 size=16 callers=1 calls=0
*/
void sub_402740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402740ULL || rel >= 0x402750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402750 size=16 callers=1 calls=0
*/
void sub_402750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402750ULL || rel >= 0x402760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402760 size=16 callers=0 calls=0
*/
void sub_402760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402760ULL || rel >= 0x402770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402770 size=16 callers=0 calls=0
*/
void sub_402770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402770ULL || rel >= 0x402780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402780 size=16 callers=0 calls=0
*/
void sub_402780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402780ULL || rel >= 0x402790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402790 size=464 callers=0 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402790ULL || rel >= 0x402960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402960 size=224 callers=6 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402960ULL || rel >= 0x402a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402a40 size=16 callers=0 calls=0
*/
void sub_402a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402a40ULL || rel >= 0x402a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402a50 size=16 callers=6 calls=0
*/
void sub_402a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402a50ULL || rel >= 0x402a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402a60 size=16 callers=0 calls=0
*/
void sub_402a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402a60ULL || rel >= 0x402a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402a70 size=32 callers=0 calls=0
*/
void sub_402a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402a70ULL || rel >= 0x402a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402a90 size=16 callers=0 calls=0
*/
void sub_402a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402a90ULL || rel >= 0x402aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402aa0 size=16 callers=0 calls=0
*/
void sub_402aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402aa0ULL || rel >= 0x402ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402ab0 size=176 callers=1 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402ab0ULL || rel >= 0x402b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402b60 size=560 callers=0 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402b60ULL || rel >= 0x402d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402d90 size=128 callers=251 calls=0
   ref: CommandBuffer has run out of command memory with no out-of-memory callback.
   ref: CommandBuffer out-of-memory callback didn't add enough command memory.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402d90ULL || rel >= 0x402e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402e10 size=128 callers=50 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402e10ULL || rel >= 0x402e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00402e90 size=1200 callers=6 calls=0
   ref: CommandBuffer has run out of command memory with no out-of-memory callback.
   ref: CommandBuffer out-of-memory callback didn't add enough command memory.
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x402e90ULL || rel >= 0x403340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403340 size=1760 callers=1 calls=27
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_14, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_15, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_16, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_17, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_18, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_19, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_20, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_21, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_22, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_23, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_24, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_25
   ... +15 more
   ref: CommandBuffer has run out of command memory with no out-of-memory callback.
   ref: CommandBuffer out-of-memory callback didn't add enough command memory.
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403340ULL || rel >= 0x403a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00403a20 size=1968 callers=2 calls=27
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_14, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_15, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_16, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_17, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_18, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_19, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_20, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_21, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_22, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_23, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_24, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_25
   ... +15 more
   ref: CommandBuffer has run out of command memory with no out-of-memory callback.
   ref: CommandBuffer out-of-memory callback didn't add enough command memory.
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x403a20ULL || rel >= 0x4041d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004041d0 size=80 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_9
*/
void sub_4041d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4041d0ULL || rel >= 0x404220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404220 size=80 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_9
*/
void sub_404220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404220ULL || rel >= 0x404270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404270 size=112 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_10
*/
void sub_404270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404270ULL || rel >= 0x4042e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004042e0 size=496 callers=1 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4042e0ULL || rel >= 0x4044d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004044d0 size=64 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_11
*/
void sub_4044d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4044d0ULL || rel >= 0x404510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404510 size=496 callers=1 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404510ULL || rel >= 0x404700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404700 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_12
*/
void sub_404700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404700ULL || rel >= 0x404780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404780 size=496 callers=1 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404780ULL || rel >= 0x404970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404970 size=144 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_13
*/
void sub_404970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404970ULL || rel >= 0x404a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404a00 size=496 callers=1 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404a00ULL || rel >= 0x404bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404bf0 size=16 callers=0 calls=0
*/
void sub_404bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404bf0ULL || rel >= 0x404c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404c00 size=16 callers=0 calls=0
*/
void sub_404c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404c00ULL || rel >= 0x404c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404c10 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404c10ULL || rel >= 0x404ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00404ef0 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x404ef0ULL || rel >= 0x4051d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004051d0 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4051d0ULL || rel >= 0x4054b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004054b0 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4054b0ULL || rel >= 0x405790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405790 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405790ULL || rel >= 0x405a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405a70 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405a70ULL || rel >= 0x405d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00405d50 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x405d50ULL || rel >= 0x406030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00406030 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x406030ULL || rel >= 0x406310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00406310 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x406310ULL || rel >= 0x4065f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004065f0 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4065f0ULL || rel >= 0x4068d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004068d0 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4068d0ULL || rel >= 0x406bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00406bb0 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x406bb0ULL || rel >= 0x406e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00406e90 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x406e90ULL || rel >= 0x407170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407170 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407170ULL || rel >= 0x407450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407450 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407450ULL || rel >= 0x407730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407730 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407730ULL || rel >= 0x407a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407a10 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407a10ULL || rel >= 0x407cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407cf0 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407cf0ULL || rel >= 0x407fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00407fd0 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x407fd0ULL || rel >= 0x4082b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004082b0 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4082b0ULL || rel >= 0x408590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00408590 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x408590ULL || rel >= 0x408870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00408870 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x408870ULL || rel >= 0x408b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00408b50 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x408b50ULL || rel >= 0x408e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00408e30 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x408e30ULL || rel >= 0x409110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00409110 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x409110ULL || rel >= 0x4093f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004093f0 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4093f0ULL || rel >= 0x4096d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004096d0 size=736 callers=2 calls=0
   ref: CommandBuffer out-of-memory callback didn't add enough control memory.
   ref: CommandBuffer has run out of control memory with no out-of-memory callback.
*/
void CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4096d0ULL || rel >= 0x4099b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004099b0 size=224 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4099b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4099b0ULL || rel >= 0x409a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00409a90 size=1040 callers=3 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_409a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x409a90ULL || rel >= 0x409ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00409ea0 size=1696 callers=0 calls=4
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_409a90, sub_40b000, sub_417bd0
*/
void sub_409ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x409ea0ULL || rel >= 0x40a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a540 size=832 callers=0 calls=3
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_409a90, sub_417bd0
*/
void sub_40a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a540ULL || rel >= 0x40a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a880 size=368 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_40a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a880ULL || rel >= 0x40a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040a9f0 size=1552 callers=0 calls=3
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_40b000, sub_417bd0
*/
void sub_40a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40a9f0ULL || rel >= 0x40b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b000 size=976 callers=4 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_40b000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b000ULL || rel >= 0x40b3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b3d0 size=400 callers=0 calls=3
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_40b000, sub_417bd0
*/
void sub_40b3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b3d0ULL || rel >= 0x40b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b560 size=16 callers=0 calls=0
*/
void sub_40b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b560ULL || rel >= 0x40b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b570 size=16 callers=0 calls=0
*/
void sub_40b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b570ULL || rel >= 0x40b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b580 size=16 callers=0 calls=0
*/
void sub_40b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b580ULL || rel >= 0x40b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b590 size=16 callers=0 calls=0
*/
void sub_40b590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b590ULL || rel >= 0x40b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b5a0 size=16 callers=0 calls=0
*/
void sub_40b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b5a0ULL || rel >= 0x40b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b5b0 size=16 callers=0 calls=0
*/
void sub_40b5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b5b0ULL || rel >= 0x40b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b5c0 size=320 callers=0 calls=1
   calls: sub_409a90
*/
void sub_40b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b5c0ULL || rel >= 0x40b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b700 size=16 callers=0 calls=0
*/
void sub_40b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b700ULL || rel >= 0x40b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b710 size=16 callers=0 calls=0
*/
void sub_40b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b710ULL || rel >= 0x40b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b720 size=16 callers=0 calls=0
*/
void sub_40b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b720ULL || rel >= 0x40b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b730 size=16 callers=0 calls=0
*/
void sub_40b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b730ULL || rel >= 0x40b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b740 size=16 callers=0 calls=0
*/
void sub_40b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b740ULL || rel >= 0x40b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b750 size=16 callers=0 calls=0
*/
void sub_40b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b750ULL || rel >= 0x40b760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b760 size=16 callers=0 calls=0
*/
void sub_40b760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b760ULL || rel >= 0x40b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b770 size=16 callers=0 calls=0
*/
void sub_40b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b770ULL || rel >= 0x40b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b780 size=16 callers=0 calls=0
*/
void sub_40b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b780ULL || rel >= 0x40b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b790 size=16 callers=0 calls=0
*/
void sub_40b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b790ULL || rel >= 0x40b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b7a0 size=16 callers=0 calls=0
*/
void sub_40b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b7a0ULL || rel >= 0x40b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b7b0 size=16 callers=0 calls=0
*/
void sub_40b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b7b0ULL || rel >= 0x40b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b7c0 size=16 callers=0 calls=0
*/
void sub_40b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b7c0ULL || rel >= 0x40b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b7d0 size=80 callers=3 calls=4
   calls: sub_434120, sub_43a610, sub_43a6e0, sub_43cce0
*/
void sub_40b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b7d0ULL || rel >= 0x40b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b820 size=16 callers=0 calls=0
*/
void sub_40b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b820ULL || rel >= 0x40b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b830 size=16 callers=0 calls=0
*/
void sub_40b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b830ULL || rel >= 0x40b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b840 size=16 callers=0 calls=0
*/
void sub_40b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b840ULL || rel >= 0x40b850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b850 size=16 callers=0 calls=0
*/
void sub_40b850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b850ULL || rel >= 0x40b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b860 size=400 callers=1 calls=11
   calls: sub_40b7d0, sub_40d580, sub_40d5b0, sub_40d6e0, sub_40db00, sub_40e8b0, sub_40ed80, sub_40fec0, sub_4142b0, sub_441050, sub_441090
*/
void sub_40b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b860ULL || rel >= 0x40b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040b9f0 size=32 callers=0 calls=0
*/
void sub_40b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40b9f0ULL || rel >= 0x40ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ba10 size=80 callers=0 calls=1
   calls: sub_410010
*/
void sub_40ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ba10ULL || rel >= 0x40ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ba60 size=16 callers=0 calls=0
*/
void sub_40ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ba60ULL || rel >= 0x40ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ba70 size=16 callers=0 calls=0
*/
void sub_40ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ba70ULL || rel >= 0x40ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ba80 size=48 callers=0 calls=1
   calls: sub_40cde0
*/
void sub_40ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ba80ULL || rel >= 0x40bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bab0 size=16 callers=0 calls=0
*/
void sub_40bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bab0ULL || rel >= 0x40bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bac0 size=16 callers=0 calls=0
*/
void sub_40bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bac0ULL || rel >= 0x40bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bad0 size=16 callers=0 calls=0
*/
void sub_40bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bad0ULL || rel >= 0x40bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bae0 size=16 callers=0 calls=0
*/
void sub_40bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bae0ULL || rel >= 0x40baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040baf0 size=16 callers=0 calls=0
*/
void sub_40baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40baf0ULL || rel >= 0x40bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bb00 size=32 callers=0 calls=0
*/
void sub_40bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bb00ULL || rel >= 0x40bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bb20 size=16 callers=0 calls=0
*/
void sub_40bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bb20ULL || rel >= 0x40bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bb30 size=16 callers=0 calls=0
*/
void sub_40bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bb30ULL || rel >= 0x40bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bb40 size=16 callers=0 calls=0
*/
void sub_40bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bb40ULL || rel >= 0x40bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bb50 size=16 callers=0 calls=0
*/
void sub_40bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bb50ULL || rel >= 0x40bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bb60 size=16 callers=0 calls=0
*/
void sub_40bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bb60ULL || rel >= 0x40bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bb70 size=16 callers=0 calls=0
*/
void sub_40bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bb70ULL || rel >= 0x40bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bb80 size=16 callers=0 calls=0
*/
void sub_40bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bb80ULL || rel >= 0x40bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bb90 size=16 callers=0 calls=0
*/
void sub_40bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bb90ULL || rel >= 0x40bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bba0 size=16 callers=0 calls=0
*/
void sub_40bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bba0ULL || rel >= 0x40bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bbb0 size=16 callers=0 calls=0
*/
void sub_40bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bbb0ULL || rel >= 0x40bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bbc0 size=16 callers=0 calls=0
*/
void sub_40bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bbc0ULL || rel >= 0x40bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bbd0 size=48 callers=1 calls=0
*/
void sub_40bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bbd0ULL || rel >= 0x40bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bc00 size=64 callers=3 calls=0
*/
void sub_40bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bc00ULL || rel >= 0x40bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bc40 size=560 callers=1 calls=3
   calls: sub_40bf60, sub_4167c0, sub_4167d0
*/
void sub_40bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bc40ULL || rel >= 0x40be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040be70 size=240 callers=1 calls=1
   calls: sub_4167d0
*/
void sub_40be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40be70ULL || rel >= 0x40bf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040bf60 size=224 callers=2 calls=1
   calls: sub_40bf60
*/
void sub_40bf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40bf60ULL || rel >= 0x40c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c040 size=16 callers=1 calls=0
*/
void sub_40c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c040ULL || rel >= 0x40c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c050 size=16 callers=0 calls=0
*/
void sub_40c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c050ULL || rel >= 0x40c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c060 size=16 callers=0 calls=0
*/
void sub_40c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c060ULL || rel >= 0x40c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c070 size=16 callers=3 calls=0
*/
void sub_40c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c070ULL || rel >= 0x40c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040c080 size=3424 callers=0 calls=16
   calls: sub_40b7d0, sub_40b860, sub_40d6e0, sub_40e650, sub_40e720, sub_40ebb0, sub_40fd20, sub_410050, sub_4101a0, sub_4101b0, sub_4101c0, sub_4163b0
   ... +4 more
   ref: 808EE280
   ref: 13279512
   ref: FF54EC97
   ref: 7CCD93
   ref: fbf4ac45
   ref: 0xce2348
   ref: 49867584
   ref: 0x9abdc6
*/
void ShaderCacheInitSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40c080ULL || rel >= 0x40cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cde0 size=272 callers=8 calls=1
   calls: sub_4009f0
*/
void sub_40cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cde0ULL || rel >= 0x40cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cef0 size=48 callers=1 calls=0
*/
void sub_40cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cef0ULL || rel >= 0x40cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cf20 size=208 callers=3 calls=0
   ref: BlendStateGetAdvancedMode
*/
void BlendStateGetAdvancedMode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cf20ULL || rel >= 0x40cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040cff0 size=800 callers=2 calls=0
   ref: nvnSyncGetNvRmSyncNVX
   ref: nvnMemoryPoolBuilderGetNativeHandleNVX
   ref: nvnMemoryPoolBuilderSetSpecialAddressNVX
   ref: nvnSyncInitializeFromNvRmSyncNVX
   ref: nvnSyncGetSyncpointsNVX
   ref: nvnCommandBufferCopyTextureToTextureWithCopyEngineNVX
   ref: nvnQueueSetTimeoutNVX
   ref: nvnMemoryPoolBuilderSetNativeHandleNVX
*/
void nvnTextureGetNvRmSurfaceNVX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40cff0ULL || rel >= 0x40d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d310 size=16 callers=0 calls=0
*/
void sub_40d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d310ULL || rel >= 0x40d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d320 size=176 callers=0 calls=0
   ref: BlendStateGetAdvancedMode
*/
void BlendStateGetAdvancedMode_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d320ULL || rel >= 0x40d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d3d0 size=16 callers=0 calls=0
*/
void sub_40d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d3d0ULL || rel >= 0x40d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d3e0 size=368 callers=0 calls=3
   calls: nvnTextureGetNvRmSurfaceNVX, sub_40b7d0, sub_40d680
   ref: BlendStateGetAdvancedMode
*/
void BlendStateGetAdvancedMode_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d3e0ULL || rel >= 0x40d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d550 size=16 callers=0 calls=0
*/
void sub_40d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d550ULL || rel >= 0x40d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d560 size=16 callers=9 calls=0
*/
void sub_40d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d560ULL || rel >= 0x40d570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d570 size=16 callers=2 calls=0
*/
void sub_40d570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d570ULL || rel >= 0x40d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d580 size=48 callers=1 calls=0
*/
void sub_40d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d580ULL || rel >= 0x40d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d5b0 size=96 callers=2 calls=1
   calls: sub_40d5b0
*/
void sub_40d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d5b0ULL || rel >= 0x40d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d610 size=16 callers=0 calls=0
*/
void sub_40d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d610ULL || rel >= 0x40d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d620 size=80 callers=0 calls=0
*/
void sub_40d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d620ULL || rel >= 0x40d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d670 size=16 callers=0 calls=0
*/
void sub_40d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d670ULL || rel >= 0x40d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d680 size=96 callers=1 calls=1
   calls: sub_40e200
*/
void sub_40d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d680ULL || rel >= 0x40d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d6e0 size=64 callers=3 calls=1
   calls: sub_40c040
*/
void sub_40d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d6e0ULL || rel >= 0x40d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d720 size=16 callers=0 calls=0
*/
void sub_40d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d720ULL || rel >= 0x40d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d730 size=16 callers=0 calls=0
*/
void sub_40d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d730ULL || rel >= 0x40d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d740 size=16 callers=0 calls=0
*/
void sub_40d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d740ULL || rel >= 0x40d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d750 size=144 callers=0 calls=0
*/
void sub_40d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d750ULL || rel >= 0x40d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d7e0 size=16 callers=0 calls=0
*/
void sub_40d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d7e0ULL || rel >= 0x40d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d7f0 size=16 callers=0 calls=0
*/
void sub_40d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d7f0ULL || rel >= 0x40d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d800 size=32 callers=0 calls=0
*/
void sub_40d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d800ULL || rel >= 0x40d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d820 size=208 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_433d00
*/
void sub_40d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d820ULL || rel >= 0x40d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040d8f0 size=272 callers=0 calls=3
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_433da0, sub_433e80
*/
void sub_40d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40d8f0ULL || rel >= 0x40da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040da00 size=16 callers=0 calls=0
*/
void sub_40da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40da00ULL || rel >= 0x40da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040da10 size=48 callers=0 calls=1
   calls: sub_40db90
*/
void sub_40da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40da10ULL || rel >= 0x40da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040da40 size=192 callers=1 calls=3
   calls: sub_40db70, sub_40dbe0, sub_441070
*/
void sub_40da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40da40ULL || rel >= 0x40db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040db00 size=80 callers=1 calls=0
*/
void sub_40db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40db00ULL || rel >= 0x40db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040db50 size=16 callers=0 calls=0
*/
void sub_40db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40db50ULL || rel >= 0x40db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040db60 size=16 callers=2 calls=0
*/
void sub_40db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40db60ULL || rel >= 0x40db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040db70 size=32 callers=1 calls=0
*/
void sub_40db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40db70ULL || rel >= 0x40db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040db90 size=80 callers=1 calls=1
   calls: sub_441050
*/
void sub_40db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40db90ULL || rel >= 0x40dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dbe0 size=208 callers=1 calls=3
   calls: sub_40ea90, sub_440fe0, sub_441050
*/
void sub_40dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dbe0ULL || rel >= 0x40dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dcb0 size=16 callers=0 calls=0
*/
void sub_40dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dcb0ULL || rel >= 0x40dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dcc0 size=160 callers=0 calls=0
*/
void sub_40dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dcc0ULL || rel >= 0x40dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dd60 size=16 callers=0 calls=0
*/
void sub_40dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dd60ULL || rel >= 0x40dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dd70 size=16 callers=0 calls=0
*/
void sub_40dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dd70ULL || rel >= 0x40dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dd80 size=16 callers=0 calls=0
*/
void sub_40dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dd80ULL || rel >= 0x40dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dd90 size=16 callers=0 calls=0
*/
void sub_40dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dd90ULL || rel >= 0x40dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dda0 size=560 callers=0 calls=0
*/
void sub_40dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dda0ULL || rel >= 0x40dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040dfd0 size=272 callers=1 calls=0
*/
void sub_40dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40dfd0ULL || rel >= 0x40e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e0e0 size=128 callers=0 calls=1
   calls: sub_40dfd0
*/
void sub_40e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e0e0ULL || rel >= 0x40e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e160 size=96 callers=0 calls=0
*/
void sub_40e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e160ULL || rel >= 0x40e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e1c0 size=32 callers=0 calls=0
*/
void sub_40e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e1c0ULL || rel >= 0x40e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e1e0 size=32 callers=0 calls=0
*/
void sub_40e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e1e0ULL || rel >= 0x40e200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e200 size=368 callers=1 calls=0
*/
void sub_40e200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e200ULL || rel >= 0x40e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e370 size=16 callers=0 calls=0
*/
void sub_40e370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e370ULL || rel >= 0x40e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e380 size=64 callers=0 calls=0
*/
void sub_40e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e380ULL || rel >= 0x40e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e3c0 size=16 callers=0 calls=0
*/
void sub_40e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e3c0ULL || rel >= 0x40e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e3d0 size=16 callers=0 calls=0
*/
void sub_40e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e3d0ULL || rel >= 0x40e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e3e0 size=16 callers=0 calls=0
*/
void sub_40e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e3e0ULL || rel >= 0x40e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e3f0 size=16 callers=0 calls=0
*/
void sub_40e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e3f0ULL || rel >= 0x40e400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e400 size=16 callers=0 calls=0
*/
void sub_40e400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e400ULL || rel >= 0x40e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e410 size=32 callers=0 calls=0
*/
void sub_40e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e410ULL || rel >= 0x40e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e430 size=48 callers=0 calls=0
*/
void sub_40e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e430ULL || rel >= 0x40e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e460 size=16 callers=0 calls=0
*/
void sub_40e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e460ULL || rel >= 0x40e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e470 size=16 callers=0 calls=0
*/
void sub_40e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e470ULL || rel >= 0x40e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e480 size=16 callers=0 calls=0
*/
void sub_40e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e480ULL || rel >= 0x40e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e490 size=48 callers=0 calls=0
*/
void sub_40e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e490ULL || rel >= 0x40e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e4c0 size=128 callers=0 calls=0
*/
void sub_40e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e4c0ULL || rel >= 0x40e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e540 size=16 callers=11 calls=0
*/
void sub_40e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e540ULL || rel >= 0x40e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e550 size=160 callers=3 calls=0
*/
void sub_40e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e550ULL || rel >= 0x40e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e5f0 size=16 callers=2 calls=0
*/
void sub_40e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e5f0ULL || rel >= 0x40e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e600 size=32 callers=2 calls=0
*/
void sub_40e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e600ULL || rel >= 0x40e620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e620 size=16 callers=2 calls=0
*/
void sub_40e620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e620ULL || rel >= 0x40e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e630 size=16 callers=0 calls=0
*/
void sub_40e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e630ULL || rel >= 0x40e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e640 size=16 callers=0 calls=0
*/
void sub_40e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e640ULL || rel >= 0x40e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e650 size=16 callers=1 calls=0
*/
void sub_40e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e650ULL || rel >= 0x40e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e660 size=16 callers=0 calls=0
*/
void sub_40e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e660ULL || rel >= 0x40e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e670 size=32 callers=0 calls=0
*/
void sub_40e670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e670ULL || rel >= 0x40e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e690 size=16 callers=0 calls=0
*/
void sub_40e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e690ULL || rel >= 0x40e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e6a0 size=16 callers=0 calls=0
*/
void sub_40e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e6a0ULL || rel >= 0x40e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e6b0 size=16 callers=0 calls=0
*/
void sub_40e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e6b0ULL || rel >= 0x40e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e6c0 size=16 callers=0 calls=0
*/
void sub_40e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e6c0ULL || rel >= 0x40e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e6d0 size=16 callers=2 calls=0
*/
void sub_40e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e6d0ULL || rel >= 0x40e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e6e0 size=16 callers=0 calls=0
*/
void sub_40e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e6e0ULL || rel >= 0x40e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e6f0 size=16 callers=0 calls=0
*/
void sub_40e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e6f0ULL || rel >= 0x40e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e700 size=16 callers=0 calls=0
*/
void sub_40e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e700ULL || rel >= 0x40e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e710 size=16 callers=0 calls=0
*/
void sub_40e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e710ULL || rel >= 0x40e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e720 size=400 callers=3 calls=2
   calls: sub_40ea90, sub_419e80
*/
void sub_40e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e720ULL || rel >= 0x40e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e8b0 size=112 callers=9 calls=1
   calls: sub_419e80
*/
void sub_40e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e8b0ULL || rel >= 0x40e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e920 size=16 callers=0 calls=0
*/
void sub_40e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e920ULL || rel >= 0x40e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e930 size=16 callers=0 calls=0
*/
void sub_40e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e930ULL || rel >= 0x40e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e940 size=16 callers=0 calls=0
*/
void sub_40e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e940ULL || rel >= 0x40e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e950 size=16 callers=0 calls=0
*/
void sub_40e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e950ULL || rel >= 0x40e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e960 size=112 callers=0 calls=0
*/
void sub_40e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e960ULL || rel >= 0x40e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e9d0 size=16 callers=0 calls=0
*/
void sub_40e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e9d0ULL || rel >= 0x40e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e9e0 size=16 callers=0 calls=0
*/
void sub_40e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e9e0ULL || rel >= 0x40e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040e9f0 size=32 callers=0 calls=0
*/
void sub_40e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40e9f0ULL || rel >= 0x40ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ea10 size=64 callers=0 calls=0
*/
void sub_40ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ea10ULL || rel >= 0x40ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ea50 size=64 callers=0 calls=0
*/
void sub_40ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ea50ULL || rel >= 0x40ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ea90 size=16 callers=3 calls=0
*/
void sub_40ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ea90ULL || rel >= 0x40eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040eaa0 size=272 callers=2 calls=1
   calls: sub_40f760
*/
void sub_40eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40eaa0ULL || rel >= 0x40ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ebb0 size=224 callers=1 calls=4
   calls: sub_40eaa0, sub_40ec90, sub_441070, sub_441090
*/
void sub_40ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ebb0ULL || rel >= 0x40ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ec90 size=240 callers=1 calls=0
*/
void sub_40ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ec90ULL || rel >= 0x40ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ed80 size=80 callers=1 calls=2
   calls: sub_40eaa0, sub_441090
*/
void sub_40ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ed80ULL || rel >= 0x40edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040edd0 size=512 callers=1 calls=1
   calls: sub_40f7c0
*/
void sub_40edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40edd0ULL || rel >= 0x40efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040efd0 size=192 callers=1 calls=0
*/
void sub_40efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40efd0ULL || rel >= 0x40f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f090 size=544 callers=2 calls=1
   calls: sub_40f2b0
*/
void sub_40f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f090ULL || rel >= 0x40f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f2b0 size=368 callers=1 calls=1
   calls: sub_40fa00
*/
void sub_40f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f2b0ULL || rel >= 0x40f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f420 size=48 callers=1 calls=0
*/
void sub_40f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f420ULL || rel >= 0x40f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f450 size=640 callers=1 calls=1
   calls: sub_40f7c0
*/
void sub_40f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f450ULL || rel >= 0x40f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f6d0 size=80 callers=3 calls=0
*/
void sub_40f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f6d0ULL || rel >= 0x40f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f720 size=16 callers=0 calls=0
*/
void sub_40f720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f720ULL || rel >= 0x40f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f730 size=32 callers=0 calls=0
*/
void sub_40f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f730ULL || rel >= 0x40f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f750 size=16 callers=0 calls=0
*/
void sub_40f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f750ULL || rel >= 0x40f760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f760 size=96 callers=2 calls=1
   calls: sub_40f760
*/
void sub_40f760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f760ULL || rel >= 0x40f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040f7c0 size=576 callers=2 calls=0
*/
void sub_40f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40f7c0ULL || rel >= 0x40fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fa00 size=800 callers=1 calls=0
*/
void sub_40fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fa00ULL || rel >= 0x40fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fd20 size=160 callers=1 calls=1
   calls: sub_40fdc0
*/
void sub_40fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fd20ULL || rel >= 0x40fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fdc0 size=256 callers=1 calls=1
   calls: sub_40d560
*/
void sub_40fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fdc0ULL || rel >= 0x40fec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040fec0 size=96 callers=1 calls=0
*/
void sub_40fec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40fec0ULL || rel >= 0x40ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ff20 size=96 callers=4 calls=0
*/
void sub_40ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ff20ULL || rel >= 0x40ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ff80 size=80 callers=2 calls=0
*/
void sub_40ff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ff80ULL || rel >= 0x40ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0040ffd0 size=64 callers=1 calls=0
*/
void sub_40ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x40ffd0ULL || rel >= 0x410010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410010 size=64 callers=1 calls=0
*/
void sub_410010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410010ULL || rel >= 0x410050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410050 size=16 callers=1 calls=0
*/
void sub_410050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410050ULL || rel >= 0x410060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410060 size=320 callers=3 calls=0
*/
void sub_410060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410060ULL || rel >= 0x4101a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004101a0 size=16 callers=1 calls=0
*/
void sub_4101a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4101a0ULL || rel >= 0x4101b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004101b0 size=16 callers=1 calls=0
*/
void sub_4101b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4101b0ULL || rel >= 0x4101c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004101c0 size=112 callers=63 calls=0
*/
void sub_4101c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4101c0ULL || rel >= 0x410230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410230 size=208 callers=3 calls=0
*/
void sub_410230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410230ULL || rel >= 0x410300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410300 size=496 callers=0 calls=0
*/
void sub_410300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410300ULL || rel >= 0x4104f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004104f0 size=224 callers=5 calls=0
*/
void sub_4104f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4104f0ULL || rel >= 0x4105d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004105d0 size=224 callers=1 calls=1
   calls: sub_413fb0
*/
void sub_4105d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4105d0ULL || rel >= 0x4106b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004106b0 size=48 callers=0 calls=1
   calls: sub_4105d0
*/
void sub_4106b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4106b0ULL || rel >= 0x4106e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004106e0 size=480 callers=1 calls=0
*/
void sub_4106e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4106e0ULL || rel >= 0x4108c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004108c0 size=80 callers=1 calls=0
*/
void sub_4108c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4108c0ULL || rel >= 0x410910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410910 size=80 callers=1 calls=0
*/
void sub_410910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410910ULL || rel >= 0x410960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410960 size=256 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_410960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410960ULL || rel >= 0x410a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410a60 size=32 callers=1 calls=0
*/
void sub_410a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410a60ULL || rel >= 0x410a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410a80 size=64 callers=0 calls=0
*/
void sub_410a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410a80ULL || rel >= 0x410ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410ac0 size=48 callers=1 calls=0
*/
void sub_410ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410ac0ULL || rel >= 0x410af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410af0 size=80 callers=1 calls=0
*/
void sub_410af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410af0ULL || rel >= 0x410b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410b40 size=16 callers=0 calls=0
*/
void sub_410b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410b40ULL || rel >= 0x410b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410b50 size=112 callers=1 calls=0
*/
void sub_410b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410b50ULL || rel >= 0x410bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410bc0 size=128 callers=0 calls=0
*/
void sub_410bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410bc0ULL || rel >= 0x410c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410c40 size=48 callers=0 calls=0
*/
void sub_410c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410c40ULL || rel >= 0x410c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410c70 size=128 callers=1 calls=0
*/
void sub_410c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410c70ULL || rel >= 0x410cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410cf0 size=16 callers=0 calls=0
*/
void sub_410cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410cf0ULL || rel >= 0x410d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410d00 size=16 callers=0 calls=0
*/
void sub_410d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410d00ULL || rel >= 0x410d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410d10 size=64 callers=0 calls=0
*/
void sub_410d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410d10ULL || rel >= 0x410d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410d50 size=96 callers=0 calls=0
*/
void sub_410d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410d50ULL || rel >= 0x410db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410db0 size=544 callers=3 calls=0
*/
void sub_410db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410db0ULL || rel >= 0x410fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00410fd0 size=336 callers=3 calls=2
   calls: sub_4125c0, sub_412730
*/
void sub_410fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x410fd0ULL || rel >= 0x411120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411120 size=16 callers=0 calls=0
*/
void sub_411120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411120ULL || rel >= 0x411130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411130 size=1664 callers=1 calls=8
   calls: sub_40efd0, sub_410db0, sub_410fd0, sub_411940, sub_412c40, sub_42e850, sub_43ce30, sub_43cea0
*/
void sub_411130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411130ULL || rel >= 0x4117b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004117b0 size=240 callers=0 calls=1
   calls: sub_411130
*/
void sub_4117b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4117b0ULL || rel >= 0x4118a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004118a0 size=160 callers=0 calls=0
*/
void sub_4118a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4118a0ULL || rel >= 0x411940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411940 size=656 callers=1 calls=1
   calls: sub_441070
*/
void sub_411940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411940ULL || rel >= 0x411bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411bd0 size=16 callers=0 calls=0
*/
void sub_411bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411bd0ULL || rel >= 0x411be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411be0 size=16 callers=0 calls=0
*/
void sub_411be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411be0ULL || rel >= 0x411bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411bf0 size=16 callers=0 calls=0
*/
void sub_411bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411bf0ULL || rel >= 0x411c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411c00 size=16 callers=0 calls=0
*/
void sub_411c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411c00ULL || rel >= 0x411c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411c10 size=16 callers=0 calls=0
*/
void sub_411c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411c10ULL || rel >= 0x411c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411c20 size=16 callers=0 calls=0
*/
void sub_411c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411c20ULL || rel >= 0x411c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411c30 size=16 callers=0 calls=0
*/
void sub_411c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411c30ULL || rel >= 0x411c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411c40 size=16 callers=0 calls=0
*/
void sub_411c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411c40ULL || rel >= 0x411c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411c50 size=16 callers=0 calls=0
*/
void sub_411c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411c50ULL || rel >= 0x411c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411c60 size=16 callers=0 calls=0
*/
void sub_411c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411c60ULL || rel >= 0x411c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411c70 size=16 callers=0 calls=0
*/
void sub_411c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411c70ULL || rel >= 0x411c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411c80 size=16 callers=0 calls=0
*/
void sub_411c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411c80ULL || rel >= 0x411c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411c90 size=16 callers=0 calls=0
*/
void sub_411c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411c90ULL || rel >= 0x411ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411ca0 size=16 callers=0 calls=0
*/
void sub_411ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411ca0ULL || rel >= 0x411cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411cb0 size=16 callers=0 calls=0
*/
void sub_411cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411cb0ULL || rel >= 0x411cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411cc0 size=16 callers=0 calls=0
*/
void sub_411cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411cc0ULL || rel >= 0x411cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411cd0 size=16 callers=0 calls=0
*/
void sub_411cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411cd0ULL || rel >= 0x411ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411ce0 size=16 callers=0 calls=0
*/
void sub_411ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411ce0ULL || rel >= 0x411cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411cf0 size=16 callers=0 calls=0
*/
void sub_411cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411cf0ULL || rel >= 0x411d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d00 size=16 callers=0 calls=0
*/
void sub_411d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d00ULL || rel >= 0x411d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d10 size=16 callers=0 calls=0
*/
void sub_411d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d10ULL || rel >= 0x411d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d20 size=16 callers=0 calls=0
*/
void sub_411d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d20ULL || rel >= 0x411d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d30 size=16 callers=0 calls=0
*/
void sub_411d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d30ULL || rel >= 0x411d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d40 size=16 callers=0 calls=0
*/
void sub_411d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d40ULL || rel >= 0x411d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d50 size=16 callers=0 calls=0
*/
void sub_411d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d50ULL || rel >= 0x411d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d60 size=16 callers=0 calls=0
*/
void sub_411d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d60ULL || rel >= 0x411d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d70 size=16 callers=0 calls=0
*/
void sub_411d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d70ULL || rel >= 0x411d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d80 size=16 callers=0 calls=0
*/
void sub_411d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d80ULL || rel >= 0x411d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411d90 size=16 callers=0 calls=0
*/
void sub_411d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411d90ULL || rel >= 0x411da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411da0 size=16 callers=0 calls=0
*/
void sub_411da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411da0ULL || rel >= 0x411db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411db0 size=16 callers=0 calls=0
*/
void sub_411db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411db0ULL || rel >= 0x411dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411dc0 size=16 callers=0 calls=0
*/
void sub_411dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411dc0ULL || rel >= 0x411dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411dd0 size=32 callers=0 calls=0
*/
void sub_411dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411dd0ULL || rel >= 0x411df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411df0 size=32 callers=0 calls=0
*/
void sub_411df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411df0ULL || rel >= 0x411e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411e10 size=32 callers=0 calls=0
*/
void sub_411e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411e10ULL || rel >= 0x411e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411e30 size=16 callers=0 calls=0
*/
void sub_411e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411e30ULL || rel >= 0x411e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411e40 size=16 callers=0 calls=0
*/
void sub_411e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411e40ULL || rel >= 0x411e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411e50 size=16 callers=0 calls=0
*/
void sub_411e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411e50ULL || rel >= 0x411e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411e60 size=16 callers=0 calls=0
*/
void sub_411e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411e60ULL || rel >= 0x411e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411e70 size=16 callers=0 calls=0
*/
void sub_411e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411e70ULL || rel >= 0x411e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411e80 size=16 callers=0 calls=0
*/
void sub_411e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411e80ULL || rel >= 0x411e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411e90 size=16 callers=0 calls=0
*/
void sub_411e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411e90ULL || rel >= 0x411ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411ea0 size=16 callers=0 calls=0
*/
void sub_411ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411ea0ULL || rel >= 0x411eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411eb0 size=16 callers=0 calls=0
*/
void sub_411eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411eb0ULL || rel >= 0x411ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411ec0 size=16 callers=0 calls=0
*/
void sub_411ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411ec0ULL || rel >= 0x411ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411ed0 size=16 callers=0 calls=0
*/
void sub_411ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411ed0ULL || rel >= 0x411ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411ee0 size=16 callers=0 calls=0
*/
void sub_411ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411ee0ULL || rel >= 0x411ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411ef0 size=16 callers=0 calls=0
*/
void sub_411ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411ef0ULL || rel >= 0x411f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411f00 size=16 callers=0 calls=0
*/
void sub_411f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411f00ULL || rel >= 0x411f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411f10 size=16 callers=0 calls=0
*/
void sub_411f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411f10ULL || rel >= 0x411f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411f20 size=16 callers=0 calls=0
*/
void sub_411f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411f20ULL || rel >= 0x411f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411f30 size=16 callers=0 calls=0
*/
void sub_411f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411f30ULL || rel >= 0x411f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411f40 size=16 callers=0 calls=0
*/
void sub_411f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411f40ULL || rel >= 0x411f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411f50 size=16 callers=0 calls=0
*/
void sub_411f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411f50ULL || rel >= 0x411f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411f60 size=16 callers=0 calls=0
*/
void sub_411f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411f60ULL || rel >= 0x411f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411f70 size=16 callers=0 calls=0
*/
void sub_411f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411f70ULL || rel >= 0x411f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411f80 size=16 callers=0 calls=0
*/
void sub_411f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411f80ULL || rel >= 0x411f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411f90 size=16 callers=0 calls=0
*/
void sub_411f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411f90ULL || rel >= 0x411fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411fa0 size=16 callers=0 calls=0
*/
void sub_411fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411fa0ULL || rel >= 0x411fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411fb0 size=16 callers=0 calls=0
*/
void sub_411fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411fb0ULL || rel >= 0x411fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411fc0 size=16 callers=0 calls=0
*/
void sub_411fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411fc0ULL || rel >= 0x411fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411fd0 size=16 callers=0 calls=0
*/
void sub_411fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411fd0ULL || rel >= 0x411fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411fe0 size=16 callers=0 calls=0
*/
void sub_411fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411fe0ULL || rel >= 0x411ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00411ff0 size=16 callers=0 calls=0
*/
void sub_411ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x411ff0ULL || rel >= 0x412000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412000 size=16 callers=0 calls=0
*/
void sub_412000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412000ULL || rel >= 0x412010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412010 size=16 callers=0 calls=0
*/
void sub_412010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412010ULL || rel >= 0x412020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412020 size=16 callers=0 calls=0
*/
void sub_412020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412020ULL || rel >= 0x412030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412030 size=16 callers=0 calls=0
*/
void sub_412030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412030ULL || rel >= 0x412040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412040 size=16 callers=0 calls=0
*/
void sub_412040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412040ULL || rel >= 0x412050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412050 size=16 callers=0 calls=0
*/
void sub_412050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412050ULL || rel >= 0x412060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412060 size=16 callers=0 calls=0
*/
void sub_412060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412060ULL || rel >= 0x412070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412070 size=16 callers=0 calls=0
*/
void sub_412070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412070ULL || rel >= 0x412080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412080 size=16 callers=0 calls=0
*/
void sub_412080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412080ULL || rel >= 0x412090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412090 size=16 callers=0 calls=0
*/
void sub_412090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412090ULL || rel >= 0x4120a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004120a0 size=16 callers=0 calls=0
*/
void sub_4120a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4120a0ULL || rel >= 0x4120b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004120b0 size=16 callers=0 calls=0
*/
void sub_4120b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4120b0ULL || rel >= 0x4120c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004120c0 size=16 callers=0 calls=0
*/
void sub_4120c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4120c0ULL || rel >= 0x4120d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004120d0 size=16 callers=0 calls=0
*/
void sub_4120d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4120d0ULL || rel >= 0x4120e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004120e0 size=16 callers=0 calls=0
*/
void sub_4120e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4120e0ULL || rel >= 0x4120f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004120f0 size=16 callers=0 calls=0
*/
void sub_4120f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4120f0ULL || rel >= 0x412100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412100 size=16 callers=0 calls=0
*/
void sub_412100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412100ULL || rel >= 0x412110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412110 size=16 callers=0 calls=0
*/
void sub_412110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412110ULL || rel >= 0x412120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412120 size=16 callers=0 calls=0
*/
void sub_412120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412120ULL || rel >= 0x412130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412130 size=16 callers=0 calls=0
*/
void sub_412130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412130ULL || rel >= 0x412140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412140 size=16 callers=0 calls=0
*/
void sub_412140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412140ULL || rel >= 0x412150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412150 size=16 callers=0 calls=0
*/
void sub_412150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412150ULL || rel >= 0x412160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412160 size=16 callers=0 calls=0
*/
void sub_412160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412160ULL || rel >= 0x412170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412170 size=16 callers=0 calls=0
*/
void sub_412170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412170ULL || rel >= 0x412180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412180 size=16 callers=0 calls=0
*/
void sub_412180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412180ULL || rel >= 0x412190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412190 size=16 callers=0 calls=0
*/
void sub_412190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412190ULL || rel >= 0x4121a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004121a0 size=16 callers=0 calls=0
*/
void sub_4121a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4121a0ULL || rel >= 0x4121b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004121b0 size=16 callers=0 calls=0
*/
void sub_4121b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4121b0ULL || rel >= 0x4121c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004121c0 size=16 callers=0 calls=0
*/
void sub_4121c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4121c0ULL || rel >= 0x4121d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004121d0 size=16 callers=0 calls=0
*/
void sub_4121d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4121d0ULL || rel >= 0x4121e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004121e0 size=16 callers=0 calls=0
*/
void sub_4121e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4121e0ULL || rel >= 0x4121f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004121f0 size=16 callers=0 calls=0
*/
void sub_4121f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4121f0ULL || rel >= 0x412200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412200 size=16 callers=0 calls=0
*/
void sub_412200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412200ULL || rel >= 0x412210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412210 size=16 callers=0 calls=0
*/
void sub_412210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412210ULL || rel >= 0x412220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412220 size=16 callers=0 calls=0
*/
void sub_412220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412220ULL || rel >= 0x412230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412230 size=16 callers=0 calls=0
*/
void sub_412230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412230ULL || rel >= 0x412240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412240 size=16 callers=0 calls=0
*/
void sub_412240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412240ULL || rel >= 0x412250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412250 size=16 callers=0 calls=0
*/
void sub_412250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412250ULL || rel >= 0x412260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412260 size=16 callers=0 calls=0
*/
void sub_412260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412260ULL || rel >= 0x412270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412270 size=16 callers=0 calls=0
*/
void sub_412270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412270ULL || rel >= 0x412280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412280 size=16 callers=0 calls=0
*/
void sub_412280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412280ULL || rel >= 0x412290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412290 size=16 callers=0 calls=0
*/
void sub_412290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412290ULL || rel >= 0x4122a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004122a0 size=16 callers=0 calls=0
*/
void sub_4122a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4122a0ULL || rel >= 0x4122b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004122b0 size=16 callers=0 calls=0
*/
void sub_4122b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4122b0ULL || rel >= 0x4122c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004122c0 size=16 callers=0 calls=0
*/
void sub_4122c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4122c0ULL || rel >= 0x4122d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004122d0 size=16 callers=0 calls=0
*/
void sub_4122d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4122d0ULL || rel >= 0x4122e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004122e0 size=16 callers=0 calls=0
*/
void sub_4122e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4122e0ULL || rel >= 0x4122f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004122f0 size=16 callers=0 calls=0
*/
void sub_4122f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4122f0ULL || rel >= 0x412300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412300 size=16 callers=0 calls=0
*/
void sub_412300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412300ULL || rel >= 0x412310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412310 size=16 callers=0 calls=0
*/
void sub_412310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412310ULL || rel >= 0x412320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412320 size=16 callers=0 calls=0
*/
void sub_412320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412320ULL || rel >= 0x412330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412330 size=16 callers=0 calls=0
*/
void sub_412330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412330ULL || rel >= 0x412340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412340 size=16 callers=0 calls=0
*/
void sub_412340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412340ULL || rel >= 0x412350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412350 size=16 callers=0 calls=0
*/
void sub_412350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412350ULL || rel >= 0x412360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412360 size=16 callers=0 calls=0
*/
void sub_412360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412360ULL || rel >= 0x412370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412370 size=16 callers=0 calls=0
*/
void sub_412370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412370ULL || rel >= 0x412380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412380 size=16 callers=0 calls=0
*/
void sub_412380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412380ULL || rel >= 0x412390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412390 size=16 callers=0 calls=0
*/
void sub_412390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412390ULL || rel >= 0x4123a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004123a0 size=16 callers=0 calls=0
*/
void sub_4123a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4123a0ULL || rel >= 0x4123b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004123b0 size=16 callers=0 calls=0
*/
void sub_4123b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4123b0ULL || rel >= 0x4123c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004123c0 size=16 callers=0 calls=0
*/
void sub_4123c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4123c0ULL || rel >= 0x4123d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004123d0 size=16 callers=0 calls=0
*/
void sub_4123d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4123d0ULL || rel >= 0x4123e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004123e0 size=16 callers=0 calls=0
*/
void sub_4123e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4123e0ULL || rel >= 0x4123f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004123f0 size=16 callers=0 calls=0
*/
void sub_4123f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4123f0ULL || rel >= 0x412400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412400 size=16 callers=0 calls=0
*/
void sub_412400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412400ULL || rel >= 0x412410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412410 size=16 callers=0 calls=0
*/
void sub_412410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412410ULL || rel >= 0x412420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412420 size=16 callers=0 calls=0
*/
void sub_412420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412420ULL || rel >= 0x412430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412430 size=16 callers=0 calls=0
*/
void sub_412430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412430ULL || rel >= 0x412440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412440 size=16 callers=0 calls=0
*/
void sub_412440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412440ULL || rel >= 0x412450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412450 size=32 callers=0 calls=0
*/
void sub_412450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412450ULL || rel >= 0x412470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412470 size=48 callers=0 calls=0
*/
void sub_412470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412470ULL || rel >= 0x4124a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004124a0 size=16 callers=0 calls=0
*/
void sub_4124a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4124a0ULL || rel >= 0x4124b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004124b0 size=16 callers=0 calls=0
*/
void sub_4124b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4124b0ULL || rel >= 0x4124c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004124c0 size=16 callers=0 calls=0
*/
void sub_4124c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4124c0ULL || rel >= 0x4124d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004124d0 size=16 callers=0 calls=0
*/
void sub_4124d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4124d0ULL || rel >= 0x4124e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004124e0 size=16 callers=0 calls=0
*/
void sub_4124e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4124e0ULL || rel >= 0x4124f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004124f0 size=16 callers=0 calls=0
*/
void sub_4124f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4124f0ULL || rel >= 0x412500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412500 size=16 callers=0 calls=0
*/
void sub_412500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412500ULL || rel >= 0x412510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412510 size=16 callers=0 calls=0
*/
void sub_412510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412510ULL || rel >= 0x412520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412520 size=16 callers=0 calls=0
*/
void sub_412520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412520ULL || rel >= 0x412530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412530 size=16 callers=0 calls=0
*/
void sub_412530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412530ULL || rel >= 0x412540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412540 size=16 callers=0 calls=0
*/
void sub_412540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412540ULL || rel >= 0x412550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412550 size=16 callers=0 calls=0
*/
void sub_412550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412550ULL || rel >= 0x412560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412560 size=16 callers=0 calls=0
*/
void sub_412560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412560ULL || rel >= 0x412570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412570 size=16 callers=0 calls=0
*/
void sub_412570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412570ULL || rel >= 0x412580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412580 size=16 callers=0 calls=0
*/
void sub_412580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412580ULL || rel >= 0x412590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412590 size=16 callers=0 calls=0
*/
void sub_412590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412590ULL || rel >= 0x4125a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004125a0 size=16 callers=0 calls=0
*/
void sub_4125a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4125a0ULL || rel >= 0x4125b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004125b0 size=16 callers=0 calls=0
*/
void sub_4125b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4125b0ULL || rel >= 0x4125c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004125c0 size=368 callers=1 calls=0
*/
void sub_4125c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4125c0ULL || rel >= 0x412730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412730 size=1296 callers=1 calls=0
*/
void sub_412730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412730ULL || rel >= 0x412c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412c40 size=64 callers=7 calls=1
   calls: sub_412c40
*/
void sub_412c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412c40ULL || rel >= 0x412c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412c80 size=16 callers=0 calls=0
*/
void sub_412c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412c80ULL || rel >= 0x412c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412c90 size=32 callers=0 calls=0
*/
void sub_412c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412c90ULL || rel >= 0x412cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412cb0 size=16 callers=0 calls=0
*/
void sub_412cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412cb0ULL || rel >= 0x412cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412cc0 size=16 callers=0 calls=0
*/
void sub_412cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412cc0ULL || rel >= 0x412cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412cd0 size=16 callers=0 calls=0
*/
void sub_412cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412cd0ULL || rel >= 0x412ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412ce0 size=16 callers=0 calls=0
*/
void sub_412ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412ce0ULL || rel >= 0x412cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412cf0 size=16 callers=0 calls=0
*/
void sub_412cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412cf0ULL || rel >= 0x412d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412d00 size=16 callers=0 calls=0
*/
void sub_412d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412d00ULL || rel >= 0x412d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412d10 size=592 callers=1 calls=1
   calls: sub_40cde0
*/
void sub_412d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412d10ULL || rel >= 0x412f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00412f60 size=256 callers=0 calls=0
*/
void sub_412f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x412f60ULL || rel >= 0x413060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413060 size=16 callers=0 calls=0
*/
void sub_413060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413060ULL || rel >= 0x413070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413070 size=16 callers=0 calls=0
*/
void sub_413070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413070ULL || rel >= 0x413080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413080 size=16 callers=0 calls=0
*/
void sub_413080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413080ULL || rel >= 0x413090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

