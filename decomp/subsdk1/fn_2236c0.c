/* subsdk1 functions 002236c0..00253af0 (11 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 002236c0 size=16 callers=1 calls=0
*/
void sub_2236c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2236c0ULL || rel >= 0x2236d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002236d0 size=16 callers=1 calls=0
*/
void sub_2236d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2236d0ULL || rel >= 0x2236e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002236e0 size=16 callers=1 calls=0
*/
void sub_2236e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2236e0ULL || rel >= 0x2236f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002236f0 size=16 callers=75 calls=0
*/
void sub_2236f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2236f0ULL || rel >= 0x223700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223700 size=16 callers=60 calls=0
*/
void sub_223700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223700ULL || rel >= 0x223710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223710 size=32 callers=3 calls=0
*/
void sub_223710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223710ULL || rel >= 0x223730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223730 size=80 callers=1 calls=0
*/
void sub_223730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223730ULL || rel >= 0x223780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223780 size=16 callers=3 calls=0
*/
void sub_223780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223780ULL || rel >= 0x223790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223790 size=16 callers=14 calls=0
*/
void sub_223790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223790ULL || rel >= 0x2237a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002237a0 size=432 callers=14 calls=1
   calls: sub_63c30
*/
void sub_2237a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2237a0ULL || rel >= 0x223950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223950 size=576 callers=14 calls=0
*/
void sub_223950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223950ULL || rel >= 0x223b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223b90 size=32 callers=172 calls=0
*/
void sub_223b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223b90ULL || rel >= 0x223bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223bb0 size=160 callers=86 calls=3
   calls: sub_9b3d0, sub_9b500, sub_9ca30
*/
void sub_223bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223bb0ULL || rel >= 0x223c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223c50 size=320 callers=6 calls=3
   calls: sub_9b3d0, sub_9b500, sub_9ca30
*/
void sub_223c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223c50ULL || rel >= 0x223d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223d90 size=48 callers=14 calls=0
*/
void sub_223d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223d90ULL || rel >= 0x223dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223dc0 size=48 callers=27 calls=0
*/
void sub_223dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223dc0ULL || rel >= 0x223df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223df0 size=16 callers=4 calls=0
*/
void sub_223df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223df0ULL || rel >= 0x223e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223e00 size=16 callers=4 calls=0
*/
void sub_223e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223e00ULL || rel >= 0x223e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223e10 size=128 callers=1 calls=0
*/
void sub_223e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223e10ULL || rel >= 0x223e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223e90 size=112 callers=5 calls=0
*/
void sub_223e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223e90ULL || rel >= 0x223f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223f00 size=16 callers=1 calls=0
*/
void sub_223f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223f00ULL || rel >= 0x223f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223f10 size=64 callers=1 calls=0
*/
void sub_223f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223f10ULL || rel >= 0x223f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223f50 size=48 callers=1 calls=0
*/
void sub_223f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223f50ULL || rel >= 0x223f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00223f80 size=208 callers=1 calls=0
*/
void sub_223f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x223f80ULL || rel >= 0x224050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224050 size=64 callers=1 calls=0
*/
void sub_224050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224050ULL || rel >= 0x224090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224090 size=64 callers=1 calls=0
*/
void sub_224090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224090ULL || rel >= 0x2240d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002240d0 size=16 callers=1 calls=0
*/
void sub_2240d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2240d0ULL || rel >= 0x2240e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002240e0 size=48 callers=1 calls=0
*/
void sub_2240e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2240e0ULL || rel >= 0x224110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224110 size=96 callers=2 calls=0
*/
void sub_224110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224110ULL || rel >= 0x224170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224170 size=176 callers=1 calls=0
*/
void sub_224170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224170ULL || rel >= 0x224220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224220 size=48 callers=1 calls=0
*/
void sub_224220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224220ULL || rel >= 0x224250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224250 size=64 callers=1 calls=0
*/
void sub_224250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224250ULL || rel >= 0x224290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224290 size=16 callers=1 calls=0
*/
void sub_224290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224290ULL || rel >= 0x2242a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002242a0 size=80 callers=1 calls=0
*/
void sub_2242a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2242a0ULL || rel >= 0x2242f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002242f0 size=32 callers=1 calls=0
*/
void sub_2242f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2242f0ULL || rel >= 0x224310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224310 size=128 callers=3 calls=0
*/
void sub_224310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224310ULL || rel >= 0x224390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224390 size=128 callers=16 calls=0
*/
void sub_224390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224390ULL || rel >= 0x224410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224410 size=16 callers=8 calls=0
*/
void sub_224410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224410ULL || rel >= 0x224420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224420 size=16 callers=2 calls=0
*/
void sub_224420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224420ULL || rel >= 0x224430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224430 size=64 callers=2 calls=0
*/
void sub_224430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224430ULL || rel >= 0x224470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224470 size=32 callers=2 calls=0
*/
void sub_224470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224470ULL || rel >= 0x224490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224490 size=256 callers=18 calls=1
   calls: sub_1bb950
*/
void sub_224490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224490ULL || rel >= 0x224590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224590 size=16 callers=0 calls=0
*/
void sub_224590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224590ULL || rel >= 0x2245a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002245a0 size=16 callers=0 calls=0
*/
void sub_2245a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2245a0ULL || rel >= 0x2245b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002245b0 size=80 callers=0 calls=0
*/
void sub_2245b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2245b0ULL || rel >= 0x224600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224600 size=16 callers=0 calls=0
*/
void sub_224600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224600ULL || rel >= 0x224610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224610 size=144 callers=0 calls=0
*/
void sub_224610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224610ULL || rel >= 0x2246a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002246a0 size=16 callers=0 calls=0
*/
void sub_2246a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2246a0ULL || rel >= 0x2246b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002246b0 size=16 callers=0 calls=0
*/
void sub_2246b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2246b0ULL || rel >= 0x2246c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002246c0 size=128 callers=0 calls=0
*/
void sub_2246c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2246c0ULL || rel >= 0x224740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224740 size=16 callers=0 calls=0
*/
void sub_224740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224740ULL || rel >= 0x224750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224750 size=352 callers=0 calls=3
   calls: sub_11d890, sub_1bb8d0, sub_1bb950
*/
void sub_224750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224750ULL || rel >= 0x2248b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002248b0 size=16 callers=0 calls=0
*/
void sub_2248b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2248b0ULL || rel >= 0x2248c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002248c0 size=16 callers=0 calls=0
*/
void sub_2248c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2248c0ULL || rel >= 0x2248d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002248d0 size=16 callers=0 calls=0
*/
void sub_2248d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2248d0ULL || rel >= 0x2248e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002248e0 size=16 callers=0 calls=0
*/
void sub_2248e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2248e0ULL || rel >= 0x2248f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002248f0 size=80 callers=0 calls=0
*/
void sub_2248f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2248f0ULL || rel >= 0x224940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224940 size=32 callers=0 calls=0
*/
void sub_224940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224940ULL || rel >= 0x224960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224960 size=64 callers=0 calls=0
*/
void sub_224960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224960ULL || rel >= 0x2249a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002249a0 size=64 callers=0 calls=0
*/
void sub_2249a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2249a0ULL || rel >= 0x2249e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002249e0 size=240 callers=0 calls=1
   calls: sub_1bb950
*/
void sub_2249e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2249e0ULL || rel >= 0x224ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224ad0 size=128 callers=0 calls=1
   calls: sub_3af80
*/
void sub_224ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224ad0ULL || rel >= 0x224b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224b50 size=16 callers=0 calls=0
*/
void sub_224b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224b50ULL || rel >= 0x224b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224b60 size=16 callers=0 calls=0
*/
void sub_224b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224b60ULL || rel >= 0x224b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224b70 size=16 callers=0 calls=0
*/
void sub_224b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224b70ULL || rel >= 0x224b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224b80 size=16 callers=0 calls=0
*/
void sub_224b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224b80ULL || rel >= 0x224b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224b90 size=16 callers=0 calls=0
*/
void sub_224b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224b90ULL || rel >= 0x224ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224ba0 size=16 callers=0 calls=0
*/
void sub_224ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224ba0ULL || rel >= 0x224bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224bb0 size=272 callers=51 calls=0
*/
void sub_224bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224bb0ULL || rel >= 0x224cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224cc0 size=64 callers=97 calls=1
   calls: sub_1bb830
*/
void sub_224cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224cc0ULL || rel >= 0x224d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224d00 size=32 callers=1 calls=0
*/
void sub_224d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224d00ULL || rel >= 0x224d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224d20 size=32 callers=1 calls=0
*/
void sub_224d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224d20ULL || rel >= 0x224d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224d40 size=16 callers=8 calls=0
*/
void sub_224d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224d40ULL || rel >= 0x224d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224d50 size=32 callers=2 calls=0
*/
void sub_224d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224d50ULL || rel >= 0x224d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224d70 size=48 callers=1 calls=0
*/
void sub_224d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224d70ULL || rel >= 0x224da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224da0 size=32 callers=4 calls=0
*/
void sub_224da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224da0ULL || rel >= 0x224dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224dc0 size=448 callers=1 calls=0
*/
void sub_224dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224dc0ULL || rel >= 0x224f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00224f80 size=208 callers=2 calls=0
*/
void sub_224f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x224f80ULL || rel >= 0x225050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225050 size=32 callers=1 calls=0
*/
void sub_225050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225050ULL || rel >= 0x225070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225070 size=16 callers=1 calls=0
*/
void sub_225070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225070ULL || rel >= 0x225080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225080 size=48 callers=1 calls=0
*/
void sub_225080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225080ULL || rel >= 0x2250b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002250b0 size=32 callers=1 calls=0
*/
void sub_2250b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2250b0ULL || rel >= 0x2250d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002250d0 size=16 callers=1 calls=0
*/
void sub_2250d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2250d0ULL || rel >= 0x2250e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002250e0 size=16 callers=3 calls=0
*/
void sub_2250e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2250e0ULL || rel >= 0x2250f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002250f0 size=32 callers=1 calls=0
*/
void sub_2250f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2250f0ULL || rel >= 0x225110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225110 size=48 callers=0 calls=0
*/
void sub_225110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225110ULL || rel >= 0x225140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225140 size=176 callers=0 calls=1
   calls: sub_63c30
*/
void sub_225140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225140ULL || rel >= 0x2251f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002251f0 size=16 callers=0 calls=0
*/
void sub_2251f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2251f0ULL || rel >= 0x225200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225200 size=16 callers=0 calls=0
*/
void sub_225200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225200ULL || rel >= 0x225210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225210 size=16 callers=0 calls=0
*/
void sub_225210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225210ULL || rel >= 0x225220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225220 size=16 callers=0 calls=0
*/
void sub_225220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225220ULL || rel >= 0x225230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225230 size=16 callers=0 calls=0
*/
void sub_225230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225230ULL || rel >= 0x225240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225240 size=16 callers=0 calls=0
*/
void sub_225240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225240ULL || rel >= 0x225250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225250 size=16 callers=0 calls=0
*/
void sub_225250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225250ULL || rel >= 0x225260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225260 size=16 callers=0 calls=0
*/
void sub_225260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225260ULL || rel >= 0x225270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225270 size=16 callers=0 calls=0
*/
void sub_225270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225270ULL || rel >= 0x225280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225280 size=16 callers=0 calls=0
*/
void sub_225280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225280ULL || rel >= 0x225290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225290 size=16 callers=0 calls=0
*/
void sub_225290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225290ULL || rel >= 0x2252a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002252a0 size=16 callers=0 calls=0
*/
void sub_2252a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2252a0ULL || rel >= 0x2252b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002252b0 size=16 callers=0 calls=0
*/
void sub_2252b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2252b0ULL || rel >= 0x2252c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002252c0 size=16 callers=0 calls=0
*/
void sub_2252c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2252c0ULL || rel >= 0x2252d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002252d0 size=16 callers=0 calls=0
*/
void sub_2252d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2252d0ULL || rel >= 0x2252e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002252e0 size=16 callers=0 calls=0
*/
void sub_2252e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2252e0ULL || rel >= 0x2252f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002252f0 size=16 callers=0 calls=0
*/
void sub_2252f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2252f0ULL || rel >= 0x225300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225300 size=16 callers=0 calls=0
*/
void sub_225300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225300ULL || rel >= 0x225310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225310 size=16 callers=0 calls=0
*/
void sub_225310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225310ULL || rel >= 0x225320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225320 size=16 callers=0 calls=0
*/
void sub_225320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225320ULL || rel >= 0x225330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225330 size=16 callers=0 calls=0
*/
void sub_225330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225330ULL || rel >= 0x225340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225340 size=16 callers=0 calls=0
*/
void sub_225340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225340ULL || rel >= 0x225350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225350 size=16 callers=0 calls=0
*/
void sub_225350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225350ULL || rel >= 0x225360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225360 size=16 callers=0 calls=0
*/
void sub_225360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225360ULL || rel >= 0x225370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225370 size=16 callers=0 calls=0
*/
void sub_225370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225370ULL || rel >= 0x225380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225380 size=16 callers=0 calls=0
*/
void sub_225380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225380ULL || rel >= 0x225390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225390 size=16 callers=0 calls=0
*/
void sub_225390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225390ULL || rel >= 0x2253a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002253a0 size=320 callers=0 calls=2
   calls: sub_2236f0, sub_223700
*/
void sub_2253a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2253a0ULL || rel >= 0x2254e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002254e0 size=128 callers=0 calls=2
   calls: sub_2236f0, sub_223700
*/
void sub_2254e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2254e0ULL || rel >= 0x225560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225560 size=256 callers=0 calls=1
   calls: sub_2236f0
*/
void sub_225560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225560ULL || rel >= 0x225660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225660 size=736 callers=0 calls=9
   calls: sub_2236f0, sub_223700, sub_223790, sub_2237a0, sub_223950, sub_224410, sub_224420, sub_224430, sub_63c30
*/
void sub_225660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225660ULL || rel >= 0x225940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225940 size=256 callers=0 calls=6
   calls: sub_2236f0, sub_223700, sub_223790, sub_2237a0, sub_223950, sub_224410
*/
void sub_225940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225940ULL || rel >= 0x225a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225a40 size=272 callers=0 calls=7
   calls: sub_2236f0, sub_223700, sub_223790, sub_2237a0, sub_223950, sub_224410, sub_224d00
*/
void sub_225a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225a40ULL || rel >= 0x225b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225b50 size=304 callers=0 calls=8
   calls: sub_2236f0, sub_223700, sub_223790, sub_2237a0, sub_223950, sub_224410, sub_224420, sub_224430
*/
void sub_225b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225b50ULL || rel >= 0x225c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225c80 size=128 callers=0 calls=2
   calls: sub_2236f0, sub_223700
*/
void sub_225c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225c80ULL || rel >= 0x225d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00225d00 size=848 callers=0 calls=1
   calls: sub_2236f0
*/
void sub_225d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x225d00ULL || rel >= 0x226050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226050 size=1280 callers=0 calls=6
   calls: sub_1bb950, sub_223640, sub_2236f0, sub_223700, sub_223bb0, sub_224cc0
*/
void sub_226050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226050ULL || rel >= 0x226550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226550 size=288 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_23daa0, sub_23dbf0, sub_23dd20
*/
void sub_226550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226550ULL || rel >= 0x226670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226670 size=64 callers=0 calls=1
   calls: sub_224d20
*/
void sub_226670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226670ULL || rel >= 0x2266b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002266b0 size=192 callers=0 calls=3
   calls: sub_223650, sub_223710, sub_224490
*/
void sub_2266b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2266b0ULL || rel >= 0x226770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226770 size=80 callers=0 calls=2
   calls: sub_1bb950, sub_224490
*/
void sub_226770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226770ULL || rel >= 0x2267c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002267c0 size=240 callers=0 calls=9
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223bb0, sub_224bb0, sub_224cc0, sub_23e1d0, sub_23e300, sub_23e410
*/
void sub_2267c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2267c0ULL || rel >= 0x2268b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002268b0 size=112 callers=0 calls=2
   calls: sub_223650, sub_224490
*/
void sub_2268b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2268b0ULL || rel >= 0x226920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226920 size=112 callers=0 calls=3
   calls: sub_1bb950, sub_223730, sub_224490
*/
void sub_226920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226920ULL || rel >= 0x226990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226990 size=80 callers=0 calls=2
   calls: sub_1bb950, sub_224490
*/
void sub_226990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226990ULL || rel >= 0x2269e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002269e0 size=640 callers=0 calls=6
   calls: sub_1bb830, sub_1bb950, sub_223710, sub_224290, sub_224490, sub_66d40
*/
void sub_2269e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2269e0ULL || rel >= 0x226c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226c60 size=128 callers=0 calls=2
   calls: sub_2236f0, sub_224d50
*/
void sub_226c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226c60ULL || rel >= 0x226ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226ce0 size=96 callers=0 calls=2
   calls: sub_2236f0, sub_224d50
*/
void sub_226ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226ce0ULL || rel >= 0x226d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226d40 size=16 callers=0 calls=0
*/
void sub_226d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226d40ULL || rel >= 0x226d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226d50 size=80 callers=0 calls=1
   calls: sub_223f50
*/
void sub_226d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226d50ULL || rel >= 0x226da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226da0 size=416 callers=0 calls=10
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_23f570, sub_23f730, sub_23f8a0
*/
void sub_226da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226da0ULL || rel >= 0x226f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226f40 size=96 callers=0 calls=0
*/
void sub_226f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226f40ULL || rel >= 0x226fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00226fa0 size=944 callers=0 calls=7
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0
*/
void sub_226fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x226fa0ULL || rel >= 0x227350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227350 size=416 callers=0 calls=10
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_2404d0, sub_240690, sub_240800
*/
void sub_227350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227350ULL || rel >= 0x2274f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002274f0 size=544 callers=0 calls=10
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_2409a0, sub_240bc0, sub_240d90
*/
void sub_2274f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2274f0ULL || rel >= 0x227710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227710 size=16 callers=0 calls=0
*/
void sub_227710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227710ULL || rel >= 0x227720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227720 size=96 callers=0 calls=3
   calls: sub_224050, sub_224090, sub_224490
*/
void sub_227720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227720ULL || rel >= 0x227780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227780 size=1408 callers=0 calls=21
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223bb0, sub_224bb0, sub_224cc0, sub_241190, sub_241350, sub_2414b0, sub_241650, sub_241800, sub_241960
   ... +9 more
*/
void sub_227780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227780ULL || rel >= 0x227d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227d00 size=752 callers=0 calls=15
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223bb0, sub_224bb0, sub_224cc0, sub_246c90, sub_246e50, sub_246fb0, sub_247150, sub_247300, sub_247460
   ... +3 more
*/
void sub_227d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227d00ULL || rel >= 0x227ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00227ff0 size=1520 callers=0 calls=26
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223bb0, sub_224110, sub_224310, sub_224bb0, sub_224cc0, sub_242920, sub_242b20, sub_242cc0, sub_242ea0
   ... +14 more
*/
void sub_227ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x227ff0ULL || rel >= 0x2285e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002285e0 size=416 callers=0 calls=9
   calls: sub_1bb950, sub_223780, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_244920, sub_244b00, sub_244c90
*/
void sub_2285e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2285e0ULL || rel >= 0x228780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228780 size=368 callers=0 calls=9
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223bb0, sub_224bb0, sub_224cc0, sub_244e50, sub_244ff0, sub_245140
*/
void sub_228780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228780ULL || rel >= 0x2288f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002288f0 size=944 callers=0 calls=7
   calls: sub_1bb950, sub_223780, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_224da0
*/
void sub_2288f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2288f0ULL || rel >= 0x228ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228ca0 size=320 callers=0 calls=9
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223bb0, sub_224bb0, sub_224cc0, sub_245d40, sub_245ed0, sub_246030
*/
void sub_228ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228ca0ULL || rel >= 0x228de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228de0 size=416 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_2461a0, sub_246380, sub_246510
*/
void sub_228de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228de0ULL || rel >= 0x228f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00228f80 size=320 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_252520, sub_2526a0, sub_252800
*/
void sub_228f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x228f80ULL || rel >= 0x2290c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002290c0 size=448 callers=0 calls=11
   calls: sub_1bb950, sub_223780, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_224d70, sub_224da0, sub_2466d0, sub_2468e0, sub_246aa0
*/
void sub_2290c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2290c0ULL || rel >= 0x229280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229280 size=400 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_247a90, sub_247c70, sub_247e00
*/
void sub_229280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229280ULL || rel >= 0x229410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229410 size=432 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_2485d0, sub_2487e0, sub_2489a0
*/
void sub_229410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229410ULL || rel >= 0x2295c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002295c0 size=448 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_247fc0, sub_2481e0, sub_2483c0
*/
void sub_2295c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2295c0ULL || rel >= 0x229780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229780 size=192 callers=0 calls=3
   calls: sub_1bb950, sub_223b90, sub_224170
*/
void sub_229780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229780ULL || rel >= 0x229840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229840 size=80 callers=0 calls=2
   calls: sub_2236f0, sub_223700
*/
void sub_229840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229840ULL || rel >= 0x229890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229890 size=480 callers=0 calls=10
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223b90, sub_223c50, sub_224bb0, sub_224cc0, sub_248e00, sub_249020, sub_2491f0
*/
void sub_229890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229890ULL || rel >= 0x229a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229a70 size=1088 callers=0 calls=8
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223b90, sub_223c50, sub_224bb0, sub_224cc0, sub_224da0
*/
void sub_229a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229a70ULL || rel >= 0x229eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00229eb0 size=496 callers=0 calls=11
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223b90, sub_223c50, sub_224bb0, sub_224cc0, sub_224da0, sub_24a210, sub_24a440, sub_24a620
*/
void sub_229eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x229eb0ULL || rel >= 0x22a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a0a0 size=512 callers=0 calls=10
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223b90, sub_223c50, sub_224bb0, sub_224cc0, sub_24a840, sub_24aaa0, sub_24acb0
*/
void sub_22a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a0a0ULL || rel >= 0x22a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a2a0 size=528 callers=0 calls=10
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223b90, sub_223c50, sub_224bb0, sub_224cc0, sub_24af00, sub_24b180, sub_24b3b0
*/
void sub_22a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a2a0ULL || rel >= 0x22a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022a4b0 size=1520 callers=0 calls=32
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223bb0, sub_2242f0, sub_224390, sub_224bb0, sub_224cc0, sub_24b610, sub_24b7b0, sub_24b940, sub_24bad0
   ... +20 more
*/
void sub_22a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22a4b0ULL || rel >= 0x22aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022aaa0 size=240 callers=0 calls=9
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224310, sub_224bb0, sub_224cc0, sub_24dd90, sub_24dec0, sub_24dfe0
*/
void sub_22aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22aaa0ULL || rel >= 0x22ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ab90 size=224 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_24e100, sub_24e220, sub_24e320
*/
void sub_22ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ab90ULL || rel >= 0x22ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ac70 size=976 callers=0 calls=11
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_24e420, sub_24e650, sub_24e850, sub_24ea60, sub_24ec60, sub_24ee30
*/
void sub_22ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ac70ULL || rel >= 0x22b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b040 size=1280 callers=0 calls=11
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_24e420, sub_24e650, sub_24e850, sub_24ea60, sub_24ec60, sub_24ee30
*/
void sub_22b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b040ULL || rel >= 0x22b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b540 size=32 callers=0 calls=0
*/
void sub_22b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b540ULL || rel >= 0x22b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b560 size=592 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_224bb0, sub_224cc0, sub_24f110, sub_24f2a0, sub_24f420, sub_24f5b0
*/
void sub_22b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b560ULL || rel >= 0x22b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022b7b0 size=4528 callers=0 calls=31
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_24f730, sub_24f8e0, sub_24fa80, sub_24fc30, sub_24fdd0, sub_24ffa0, sub_250160
   ... +19 more
*/
void sub_22b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22b7b0ULL || rel >= 0x22c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c960 size=32 callers=0 calls=0
*/
void sub_22c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c960ULL || rel >= 0x22c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022c980 size=176 callers=0 calls=2
   calls: sub_2236f0, sub_223700
*/
void sub_22c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22c980ULL || rel >= 0x22ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ca30 size=144 callers=0 calls=2
   calls: sub_2236f0, sub_223700
*/
void sub_22ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ca30ULL || rel >= 0x22cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cac0 size=480 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_252db0, sub_252fc0, sub_2531b0
*/
void sub_22cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cac0ULL || rel >= 0x22cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cca0 size=96 callers=0 calls=2
   calls: sub_223650, sub_224490
*/
void sub_22cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cca0ULL || rel >= 0x22cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cd00 size=48 callers=0 calls=1
   calls: sub_224490
*/
void sub_22cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cd00ULL || rel >= 0x22cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cd30 size=224 callers=0 calls=6
   calls: sub_2236f0, sub_223700, sub_223790, sub_2237a0, sub_223950, sub_224d40
*/
void sub_22cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cd30ULL || rel >= 0x22ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ce10 size=160 callers=0 calls=3
   calls: sub_1bb830, sub_2236f0, sub_223700
*/
void sub_22ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ce10ULL || rel >= 0x22ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ceb0 size=240 callers=0 calls=6
   calls: sub_2236f0, sub_223700, sub_223790, sub_2237a0, sub_223950, sub_224d40
*/
void sub_22ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ceb0ULL || rel >= 0x22cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022cfa0 size=144 callers=0 calls=3
   calls: sub_2236f0, sub_223700, sub_224d40
*/
void sub_22cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22cfa0ULL || rel >= 0x22d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d030 size=128 callers=0 calls=3
   calls: sub_2236f0, sub_223700, sub_223f80
*/
void sub_22d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d030ULL || rel >= 0x22d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022d0b0 size=2672 callers=0 calls=6
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_3afa0
*/
void sub_22d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22d0b0ULL || rel >= 0x22db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022db20 size=32 callers=0 calls=0
*/
void sub_22db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22db20ULL || rel >= 0x22db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022db40 size=384 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_256270, sub_256430, sub_2565d0
*/
void sub_22db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22db40ULL || rel >= 0x22dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022dcc0 size=528 callers=0 calls=9
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_224f80, sub_256270, sub_256430, sub_2565d0
*/
void sub_22dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22dcc0ULL || rel >= 0x22ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ded0 size=112 callers=0 calls=4
   calls: sub_2236f0, sub_2240d0, sub_2240e0, sub_225050
*/
void sub_22ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ded0ULL || rel >= 0x22df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022df40 size=240 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_256a00, sub_256b30, sub_256c50
*/
void sub_22df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22df40ULL || rel >= 0x22e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e030 size=80 callers=0 calls=1
   calls: sub_1bbac0
*/
void sub_22e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e030ULL || rel >= 0x22e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e080 size=336 callers=0 calls=10
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223bb0, sub_224bb0, sub_224cc0, sub_225070, sub_256d70, sub_256ee0, sub_257010
*/
void sub_22e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e080ULL || rel >= 0x22e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e1d0 size=160 callers=0 calls=4
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_3b000
*/
void sub_22e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e1d0ULL || rel >= 0x22e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e270 size=256 callers=0 calls=4
   calls: sub_1bb950, sub_223bb0, sub_224490, sub_224cc0
*/
void sub_22e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e270ULL || rel >= 0x22e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e370 size=256 callers=0 calls=5
   calls: sub_1bb950, sub_2236f0, sub_223bb0, sub_224490, sub_224cc0
*/
void sub_22e370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e370ULL || rel >= 0x22e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e470 size=16 callers=0 calls=0
*/
void sub_22e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e470ULL || rel >= 0x22e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e480 size=480 callers=0 calls=4
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223bb0
*/
void sub_22e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e480ULL || rel >= 0x22e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e660 size=96 callers=0 calls=1
   calls: sub_223b90
*/
void sub_22e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e660ULL || rel >= 0x22e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e6c0 size=176 callers=0 calls=3
   calls: sub_2236f0, sub_223700, sub_225080
*/
void sub_22e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e6c0ULL || rel >= 0x22e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e770 size=272 callers=0 calls=9
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223bb0, sub_224bb0, sub_224cc0, sub_258de0, sub_258f20, sub_259030
*/
void sub_22e770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e770ULL || rel >= 0x22e880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e880 size=192 callers=0 calls=1
   calls: sub_224dc0
*/
void sub_22e880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e880ULL || rel >= 0x22e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022e940 size=1168 callers=0 calls=11
   calls: sub_1bb950, sub_223b90, sub_224bb0, sub_224cc0, sub_258120, sub_258300, sub_2584c0, sub_258670, sub_258820, sub_2589b0, sub_258b40
*/
void sub_22e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22e940ULL || rel >= 0x22edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022edd0 size=80 callers=0 calls=2
   calls: sub_223bb0, sub_224490
*/
void sub_22edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22edd0ULL || rel >= 0x22ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ee20 size=608 callers=0 calls=5
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0
*/
void sub_22ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ee20ULL || rel >= 0x22f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f080 size=224 callers=0 calls=5
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_224220, sub_224250
*/
void sub_22f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f080ULL || rel >= 0x22f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f160 size=96 callers=0 calls=2
   calls: sub_1bb950, sub_2236f0
*/
void sub_22f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f160ULL || rel >= 0x22f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f1c0 size=96 callers=0 calls=1
   calls: sub_223b90
*/
void sub_22f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f1c0ULL || rel >= 0x22f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f220 size=208 callers=0 calls=5
   calls: sub_2236f0, sub_223790, sub_2237a0, sub_223950, sub_224410
*/
void sub_22f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f220ULL || rel >= 0x22f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f2f0 size=256 callers=0 calls=3
   calls: sub_1bb950, sub_2242a0, sub_224490
*/
void sub_22f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f2f0ULL || rel >= 0x22f3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f3f0 size=96 callers=0 calls=2
   calls: sub_2236f0, sub_223700
*/
void sub_22f3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f3f0ULL || rel >= 0x22f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f450 size=336 callers=0 calls=9
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_259ff0, sub_25a150, sub_25a2a0, sub_3af50
*/
void sub_22f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f450ULL || rel >= 0x22f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f5a0 size=128 callers=0 calls=3
   calls: sub_1bb950, sub_2236f0, sub_223700
*/
void sub_22f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f5a0ULL || rel >= 0x22f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f620 size=80 callers=0 calls=2
   calls: sub_1bb950, sub_2236f0
*/
void sub_22f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f620ULL || rel >= 0x22f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f670 size=304 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_25a5f0, sub_25a750, sub_25a8a0
*/
void sub_22f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f670ULL || rel >= 0x22f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022f7a0 size=720 callers=0 calls=7
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_2250b0, sub_2250d0
*/
void sub_22f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22f7a0ULL || rel >= 0x22fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fa70 size=448 callers=0 calls=5
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223bb0, sub_224bb0
*/
void sub_22fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fa70ULL || rel >= 0x22fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fc30 size=368 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_25afb0, sub_25b160, sub_25b630
*/
void sub_22fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fc30ULL || rel >= 0x22fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022fda0 size=432 callers=0 calls=8
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_25afb0, sub_25b160, sub_25b630
*/
void sub_22fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22fda0ULL || rel >= 0x22ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0022ff50 size=208 callers=0 calls=5
   calls: sub_2236f0, sub_223790, sub_2237a0, sub_223950, sub_224d40
*/
void sub_22ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x22ff50ULL || rel >= 0x230020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230020 size=208 callers=0 calls=5
   calls: sub_2236f0, sub_223790, sub_2237a0, sub_223950, sub_224d40
*/
void sub_230020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230020ULL || rel >= 0x2300f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002300f0 size=128 callers=0 calls=2
   calls: sub_2236f0, sub_224d40
*/
void sub_2300f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2300f0ULL || rel >= 0x230170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230170 size=96 callers=0 calls=1
   calls: sub_2236f0
*/
void sub_230170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230170ULL || rel >= 0x2301d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002301d0 size=480 callers=0 calls=8
   calls: sub_2236f0, sub_223700, sub_223790, sub_2237a0, sub_223950, sub_223d90, sub_224410, sub_2250e0
*/
void sub_2301d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2301d0ULL || rel >= 0x2303b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002303b0 size=448 callers=0 calls=8
   calls: sub_2236f0, sub_223700, sub_223790, sub_2237a0, sub_223950, sub_223d90, sub_224410, sub_2250e0
*/
void sub_2303b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2303b0ULL || rel >= 0x230570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230570 size=672 callers=0 calls=7
   calls: sub_2236f0, sub_223700, sub_223790, sub_2237a0, sub_223950, sub_223d90, sub_224d40
*/
void sub_230570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230570ULL || rel >= 0x230810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230810 size=416 callers=0 calls=7
   calls: sub_2236f0, sub_223790, sub_2237a0, sub_223950, sub_223d90, sub_224410, sub_2250e0
*/
void sub_230810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230810ULL || rel >= 0x2309b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002309b0 size=640 callers=0 calls=6
   calls: sub_2236f0, sub_223790, sub_2237a0, sub_223950, sub_223d90, sub_224d40
*/
void sub_2309b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2309b0ULL || rel >= 0x230c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00230c30 size=1088 callers=0 calls=7
   calls: sub_2236f0, sub_223700, sub_223dc0, sub_223df0, sub_223e00, sub_223e10, sub_223e90
*/
void sub_230c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x230c30ULL || rel >= 0x231070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231070 size=1104 callers=0 calls=7
   calls: sub_2236f0, sub_223700, sub_223dc0, sub_223df0, sub_223e00, sub_223e90, sub_223f10
*/
void sub_231070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231070ULL || rel >= 0x2314c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002314c0 size=1072 callers=0 calls=6
   calls: sub_2236f0, sub_223700, sub_223dc0, sub_223df0, sub_223e00, sub_223e90
*/
void sub_2314c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2314c0ULL || rel >= 0x2318f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002318f0 size=592 callers=0 calls=4
   calls: sub_2236f0, sub_223700, sub_223dc0, sub_223e90
*/
void sub_2318f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2318f0ULL || rel >= 0x231b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231b40 size=688 callers=0 calls=6
   calls: sub_2236f0, sub_223700, sub_223dc0, sub_223df0, sub_223e00, sub_223e90
*/
void sub_231b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231b40ULL || rel >= 0x231df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231df0 size=512 callers=0 calls=4
   calls: sub_2236f0, sub_223700, sub_223dc0, sub_223f00
*/
void sub_231df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231df0ULL || rel >= 0x231ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00231ff0 size=656 callers=0 calls=6
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224bb0, sub_224cc0, sub_3af80
*/
void sub_231ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x231ff0ULL || rel >= 0x232280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232280 size=80 callers=0 calls=0
*/
void sub_232280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232280ULL || rel >= 0x2322d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002322d0 size=128 callers=0 calls=1
   calls: sub_2250f0
*/
void sub_2322d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2322d0ULL || rel >= 0x232350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232350 size=208 callers=0 calls=8
   calls: sub_1bb950, sub_223bb0, sub_224490, sub_224bb0, sub_224cc0, sub_263fb0, sub_2640e0, sub_264200
*/
void sub_232350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232350ULL || rel >= 0x232420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232420 size=48 callers=0 calls=1
   calls: sub_224490
*/
void sub_232420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232420ULL || rel >= 0x232450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232450 size=528 callers=0 calls=4
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223b90
*/
void sub_232450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232450ULL || rel >= 0x232660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232660 size=400 callers=0 calls=5
   calls: sub_1bb950, sub_2236f0, sub_223700, sub_223b90, sub_224470
*/
void sub_232660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232660ULL || rel >= 0x2327f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002327f0 size=528 callers=0 calls=7
   calls: sub_1bb950, sub_223b90, sub_223bb0, sub_224310, sub_224bb0, sub_224cc0, sub_3af80
*/
void sub_2327f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2327f0ULL || rel >= 0x232a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00232a00 size=1904 callers=0 calls=6
   calls: sub_1bbbb0, sub_1bbd50, sub_1c04e0, sub_2236c0, sub_2236d0, sub_2236e0
*/
void sub_232a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x232a00ULL || rel >= 0x233170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00233170 size=16 callers=0 calls=0
*/
void sub_233170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x233170ULL || rel >= 0x233180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00233180 size=16 callers=0 calls=0
*/
void sub_233180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x233180ULL || rel >= 0x233190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00233190 size=16 callers=0 calls=0
*/
void sub_233190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x233190ULL || rel >= 0x2331a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002331a0 size=16 callers=0 calls=0
*/
void sub_2331a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2331a0ULL || rel >= 0x2331b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002331b0 size=16 callers=0 calls=0
*/
void sub_2331b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2331b0ULL || rel >= 0x2331c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002331c0 size=16 callers=0 calls=0
*/
void sub_2331c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2331c0ULL || rel >= 0x2331d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002331d0 size=16 callers=0 calls=0
*/
void sub_2331d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2331d0ULL || rel >= 0x2331e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002331e0 size=16 callers=0 calls=0
*/
void sub_2331e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2331e0ULL || rel >= 0x2331f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002331f0 size=3664 callers=252 calls=0
*/
void sub_2331f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2331f0ULL || rel >= 0x234040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00234040 size=3136 callers=46 calls=0
*/
void sub_234040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x234040ULL || rel >= 0x234c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00234c80 size=3888 callers=38 calls=0
*/
void sub_234c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x234c80ULL || rel >= 0x235bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00235bb0 size=5392 callers=23 calls=0
*/
void sub_235bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x235bb0ULL || rel >= 0x2370c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002370c0 size=3888 callers=46 calls=0
*/
void sub_2370c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2370c0ULL || rel >= 0x237ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00237ff0 size=3136 callers=4 calls=0
*/
void sub_237ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x237ff0ULL || rel >= 0x238c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00238c30 size=3888 callers=1 calls=0
*/
void sub_238c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x238c30ULL || rel >= 0x239b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00239b60 size=3136 callers=1 calls=0
*/
void sub_239b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x239b60ULL || rel >= 0x23a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023a7a0 size=352 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23a7a0ULL || rel >= 0x23a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023a900 size=384 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23a900ULL || rel >= 0x23aa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023aa80 size=368 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23aa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23aa80ULL || rel >= 0x23abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023abf0 size=352 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23abf0ULL || rel >= 0x23ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ad50 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ad50ULL || rel >= 0x23aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023aea0 size=528 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23aea0ULL || rel >= 0x23b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023b0b0 size=528 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23b0b0ULL || rel >= 0x23b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023b2c0 size=496 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23b2c0ULL || rel >= 0x23b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023b4b0 size=384 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23b4b0ULL || rel >= 0x23b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023b630 size=400 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23b630ULL || rel >= 0x23b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023b7c0 size=544 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23b7c0ULL || rel >= 0x23b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023b9e0 size=320 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23b9e0ULL || rel >= 0x23bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023bb20 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23bb20ULL || rel >= 0x23bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023bc40 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23bc40ULL || rel >= 0x23bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023bd60 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23bd60ULL || rel >= 0x23be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023be80 size=256 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23be80ULL || rel >= 0x23bf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023bf80 size=384 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23bf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23bf80ULL || rel >= 0x23c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c100 size=384 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c100ULL || rel >= 0x23c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c280 size=384 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c280ULL || rel >= 0x23c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c400 size=352 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c400ULL || rel >= 0x23c560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c560 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23c560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c560ULL || rel >= 0x23c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c6b0 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23c6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c6b0ULL || rel >= 0x23c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c800 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c800ULL || rel >= 0x23c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023c950 size=304 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23c950ULL || rel >= 0x23ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ca80 size=256 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ca80ULL || rel >= 0x23cb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cb80 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23cb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cb80ULL || rel >= 0x23cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cca0 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cca0ULL || rel >= 0x23cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cdc0 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cdc0ULL || rel >= 0x23cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cee0 size=272 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cee0ULL || rel >= 0x23cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023cff0 size=272 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23cff0ULL || rel >= 0x23d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d100 size=256 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d100ULL || rel >= 0x23d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d200 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d200ULL || rel >= 0x23d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d320 size=256 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23d320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d320ULL || rel >= 0x23d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d420 size=256 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d420ULL || rel >= 0x23d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d520 size=240 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d520ULL || rel >= 0x23d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d610 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d610ULL || rel >= 0x23d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d730 size=304 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d730ULL || rel >= 0x23d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d860 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d860ULL || rel >= 0x23d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023d980 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23d980ULL || rel >= 0x23daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023daa0 size=336 callers=1 calls=1
   calls: sub_234040
*/
void sub_23daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23daa0ULL || rel >= 0x23dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023dbf0 size=304 callers=1 calls=1
   calls: sub_234040
*/
void sub_23dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23dbf0ULL || rel >= 0x23dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023dd20 size=304 callers=1 calls=1
   calls: sub_234c80
*/
void sub_23dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23dd20ULL || rel >= 0x23de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023de50 size=256 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23de50ULL || rel >= 0x23df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023df50 size=352 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23df50ULL || rel >= 0x23e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e0b0 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e0b0ULL || rel >= 0x23e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e1d0 size=304 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_23e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e1d0ULL || rel >= 0x23e300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e300 size=272 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_23e300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e300ULL || rel >= 0x23e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e410 size=272 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_23e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e410ULL || rel >= 0x23e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e520 size=352 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e520ULL || rel >= 0x23e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e680 size=304 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23e680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e680ULL || rel >= 0x23e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e7b0 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e7b0ULL || rel >= 0x23e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023e8d0 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23e8d0ULL || rel >= 0x23ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ea20 size=320 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ea20ULL || rel >= 0x23eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023eb60 size=352 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23eb60ULL || rel >= 0x23ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ecc0 size=320 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ecc0ULL || rel >= 0x23ee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ee00 size=352 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23ee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ee00ULL || rel >= 0x23ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ef60 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ef60ULL || rel >= 0x23f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023f0b0 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23f0b0ULL || rel >= 0x23f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023f1d0 size=240 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23f1d0ULL || rel >= 0x23f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023f2c0 size=288 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23f2c0ULL || rel >= 0x23f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023f3e0 size=400 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23f3e0ULL || rel >= 0x23f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023f570 size=448 callers=1 calls=1
   calls: sub_234040
*/
void sub_23f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23f570ULL || rel >= 0x23f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023f730 size=368 callers=1 calls=1
   calls: sub_234040
*/
void sub_23f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23f730ULL || rel >= 0x23f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023f8a0 size=416 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_23f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23f8a0ULL || rel >= 0x23fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023fa40 size=304 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_23fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23fa40ULL || rel >= 0x23fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023fb70 size=512 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_23fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23fb70ULL || rel >= 0x23fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023fd70 size=448 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_23fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23fd70ULL || rel >= 0x23ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0023ff30 size=512 callers=0 calls=1
   calls: sub_234c80
*/
void sub_23ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x23ff30ULL || rel >= 0x240130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00240130 size=448 callers=0 calls=1
   calls: sub_234c80
*/
void sub_240130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x240130ULL || rel >= 0x2402f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002402f0 size=480 callers=0 calls=1
   calls: sub_235bb0
*/
void sub_2402f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2402f0ULL || rel >= 0x2404d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002404d0 size=448 callers=1 calls=1
   calls: sub_234040
*/
void sub_2404d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2404d0ULL || rel >= 0x240690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00240690 size=368 callers=1 calls=1
   calls: sub_234040
*/
void sub_240690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x240690ULL || rel >= 0x240800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00240800 size=416 callers=1 calls=1
   calls: sub_234c80
*/
void sub_240800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x240800ULL || rel >= 0x2409a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002409a0 size=544 callers=1 calls=1
   calls: sub_234040
*/
void sub_2409a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2409a0ULL || rel >= 0x240bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00240bc0 size=464 callers=1 calls=1
   calls: sub_234040
*/
void sub_240bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x240bc0ULL || rel >= 0x240d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00240d90 size=512 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_240d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x240d90ULL || rel >= 0x240f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00240f90 size=208 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_240f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x240f90ULL || rel >= 0x241060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00241060 size=304 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_241060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x241060ULL || rel >= 0x241190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00241190 size=448 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_241190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x241190ULL || rel >= 0x241350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00241350 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_241350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x241350ULL || rel >= 0x2414b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002414b0 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_2414b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2414b0ULL || rel >= 0x241650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00241650 size=432 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_241650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x241650ULL || rel >= 0x241800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00241800 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_241800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x241800ULL || rel >= 0x241960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00241960 size=400 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_241960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x241960ULL || rel >= 0x241af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00241af0 size=448 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_241af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x241af0ULL || rel >= 0x241cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00241cb0 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_241cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x241cb0ULL || rel >= 0x241e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00241e10 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_241e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x241e10ULL || rel >= 0x241fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00241fb0 size=432 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_241fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x241fb0ULL || rel >= 0x242160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00242160 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_242160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x242160ULL || rel >= 0x2422c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002422c0 size=400 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_2422c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2422c0ULL || rel >= 0x242450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00242450 size=448 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_242450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x242450ULL || rel >= 0x242610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00242610 size=368 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_242610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x242610ULL || rel >= 0x242780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00242780 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_242780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x242780ULL || rel >= 0x242920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00242920 size=512 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_242920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x242920ULL || rel >= 0x242b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00242b20 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_242b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x242b20ULL || rel >= 0x242cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00242cc0 size=480 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_242cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x242cc0ULL || rel >= 0x242ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00242ea0 size=480 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_242ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x242ea0ULL || rel >= 0x243080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00243080 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_243080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x243080ULL || rel >= 0x243220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00243220 size=448 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_243220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x243220ULL || rel >= 0x2433e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002433e0 size=480 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_2433e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2433e0ULL || rel >= 0x2435c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002435c0 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_2435c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2435c0ULL || rel >= 0x243760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00243760 size=448 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_243760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x243760ULL || rel >= 0x243920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00243920 size=512 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_243920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x243920ULL || rel >= 0x243b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00243b20 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_243b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x243b20ULL || rel >= 0x243cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00243cc0 size=480 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_243cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x243cc0ULL || rel >= 0x243ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00243ea0 size=480 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_243ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x243ea0ULL || rel >= 0x244080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00244080 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_244080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x244080ULL || rel >= 0x244220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00244220 size=448 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_244220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x244220ULL || rel >= 0x2443e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002443e0 size=480 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_2443e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2443e0ULL || rel >= 0x2445c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002445c0 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_2445c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2445c0ULL || rel >= 0x244760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00244760 size=448 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_244760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x244760ULL || rel >= 0x244920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00244920 size=480 callers=1 calls=1
   calls: sub_234040
*/
void sub_244920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x244920ULL || rel >= 0x244b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00244b00 size=400 callers=1 calls=1
   calls: sub_234040
*/
void sub_244b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x244b00ULL || rel >= 0x244c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00244c90 size=448 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_244c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x244c90ULL || rel >= 0x244e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00244e50 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_244e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x244e50ULL || rel >= 0x244ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00244ff0 size=336 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_244ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x244ff0ULL || rel >= 0x245140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00245140 size=384 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_245140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x245140ULL || rel >= 0x2452c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002452c0 size=576 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_2452c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2452c0ULL || rel >= 0x245500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00245500 size=496 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_245500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x245500ULL || rel >= 0x2456f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002456f0 size=576 callers=0 calls=1
   calls: sub_234c80
*/
void sub_2456f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2456f0ULL || rel >= 0x245930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00245930 size=496 callers=0 calls=1
   calls: sub_234c80
*/
void sub_245930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x245930ULL || rel >= 0x245b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00245b20 size=544 callers=0 calls=1
   calls: sub_235bb0
*/
void sub_245b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x245b20ULL || rel >= 0x245d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00245d40 size=400 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_245d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x245d40ULL || rel >= 0x245ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00245ed0 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_245ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x245ed0ULL || rel >= 0x246030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00246030 size=368 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_246030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x246030ULL || rel >= 0x2461a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002461a0 size=480 callers=1 calls=1
   calls: sub_234040
*/
void sub_2461a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2461a0ULL || rel >= 0x246380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00246380 size=400 callers=1 calls=1
   calls: sub_234040
*/
void sub_246380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x246380ULL || rel >= 0x246510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00246510 size=448 callers=1 calls=1
   calls: sub_234c80
*/
void sub_246510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x246510ULL || rel >= 0x2466d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002466d0 size=528 callers=1 calls=1
   calls: sub_234040
*/
void sub_2466d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2466d0ULL || rel >= 0x2468e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002468e0 size=448 callers=1 calls=1
   calls: sub_234040
*/
void sub_2468e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2468e0ULL || rel >= 0x246aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00246aa0 size=496 callers=1 calls=1
   calls: sub_234c80
*/
void sub_246aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x246aa0ULL || rel >= 0x246c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00246c90 size=448 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_246c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x246c90ULL || rel >= 0x246e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00246e50 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_246e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x246e50ULL || rel >= 0x246fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00246fb0 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_246fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x246fb0ULL || rel >= 0x247150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00247150 size=432 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_247150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x247150ULL || rel >= 0x247300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00247300 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_247300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x247300ULL || rel >= 0x247460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00247460 size=400 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_247460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x247460ULL || rel >= 0x2475f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002475f0 size=432 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_2475f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2475f0ULL || rel >= 0x2477a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002477a0 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_2477a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2477a0ULL || rel >= 0x247900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00247900 size=400 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_247900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x247900ULL || rel >= 0x247a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00247a90 size=480 callers=1 calls=1
   calls: sub_234040
*/
void sub_247a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x247a90ULL || rel >= 0x247c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00247c70 size=400 callers=1 calls=1
   calls: sub_234040
*/
void sub_247c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x247c70ULL || rel >= 0x247e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00247e00 size=448 callers=1 calls=1
   calls: sub_234c80
*/
void sub_247e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x247e00ULL || rel >= 0x247fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00247fc0 size=544 callers=1 calls=1
   calls: sub_234040
*/
void sub_247fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x247fc0ULL || rel >= 0x2481e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002481e0 size=480 callers=1 calls=1
   calls: sub_234040
*/
void sub_2481e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2481e0ULL || rel >= 0x2483c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002483c0 size=528 callers=1 calls=1
   calls: sub_234c80
*/
void sub_2483c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2483c0ULL || rel >= 0x2485d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002485d0 size=528 callers=1 calls=1
   calls: sub_234040
*/
void sub_2485d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2485d0ULL || rel >= 0x2487e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002487e0 size=448 callers=1 calls=1
   calls: sub_234040
*/
void sub_2487e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2487e0ULL || rel >= 0x2489a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002489a0 size=496 callers=1 calls=1
   calls: sub_234c80
*/
void sub_2489a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2489a0ULL || rel >= 0x248b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00248b90 size=368 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_248b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x248b90ULL || rel >= 0x248d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00248d00 size=256 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_248d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x248d00ULL || rel >= 0x248e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00248e00 size=544 callers=1 calls=1
   calls: sub_234040
*/
void sub_248e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x248e00ULL || rel >= 0x249020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00249020 size=464 callers=1 calls=1
   calls: sub_234040
*/
void sub_249020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x249020ULL || rel >= 0x2491f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002491f0 size=512 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_2491f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2491f0ULL || rel >= 0x2493f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002493f0 size=656 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_2493f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2493f0ULL || rel >= 0x249680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00249680 size=576 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_249680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x249680ULL || rel >= 0x2498c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002498c0 size=656 callers=0 calls=1
   calls: sub_234c80
*/
void sub_2498c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2498c0ULL || rel >= 0x249b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00249b50 size=576 callers=0 calls=1
   calls: sub_234c80
*/
void sub_249b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x249b50ULL || rel >= 0x249d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00249d90 size=624 callers=0 calls=1
   calls: sub_235bb0
*/
void sub_249d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x249d90ULL || rel >= 0x24a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024a000 size=528 callers=0 calls=1
   calls: sub_235bb0
*/
void sub_24a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24a000ULL || rel >= 0x24a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024a210 size=560 callers=1 calls=1
   calls: sub_234040
*/
void sub_24a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24a210ULL || rel >= 0x24a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024a440 size=480 callers=1 calls=1
   calls: sub_234040
*/
void sub_24a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24a440ULL || rel >= 0x24a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024a620 size=544 callers=1 calls=1
   calls: sub_234c80
*/
void sub_24a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24a620ULL || rel >= 0x24a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024a840 size=608 callers=1 calls=1
   calls: sub_234040
*/
void sub_24a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24a840ULL || rel >= 0x24aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024aaa0 size=528 callers=1 calls=1
   calls: sub_234040
*/
void sub_24aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24aaa0ULL || rel >= 0x24acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024acb0 size=592 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_24acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24acb0ULL || rel >= 0x24af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024af00 size=640 callers=1 calls=1
   calls: sub_234040
*/
void sub_24af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24af00ULL || rel >= 0x24b180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024b180 size=560 callers=1 calls=1
   calls: sub_234040
*/
void sub_24b180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24b180ULL || rel >= 0x24b3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024b3b0 size=608 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_24b3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24b3b0ULL || rel >= 0x24b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024b610 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24b610ULL || rel >= 0x24b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024b7b0 size=400 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24b7b0ULL || rel >= 0x24b940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024b940 size=400 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24b940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24b940ULL || rel >= 0x24bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024bad0 size=368 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24bad0ULL || rel >= 0x24bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024bc40 size=400 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24bc40ULL || rel >= 0x24bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024bdd0 size=368 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24bdd0ULL || rel >= 0x24bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024bf40 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24bf40ULL || rel >= 0x24c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024c0e0 size=400 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24c0e0ULL || rel >= 0x24c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024c270 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24c270ULL || rel >= 0x24c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024c410 size=384 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24c410ULL || rel >= 0x24c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024c590 size=384 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24c590ULL || rel >= 0x24c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024c710 size=368 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24c710ULL || rel >= 0x24c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024c880 size=384 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24c880ULL || rel >= 0x24ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024ca00 size=368 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24ca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24ca00ULL || rel >= 0x24cb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024cb70 size=416 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24cb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24cb70ULL || rel >= 0x24cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024cd10 size=384 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24cd10ULL || rel >= 0x24ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024ce90 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24ce90ULL || rel >= 0x24cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024cff0 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24cff0ULL || rel >= 0x24d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024d150 size=336 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24d150ULL || rel >= 0x24d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024d2a0 size=336 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24d2a0ULL || rel >= 0x24d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024d3f0 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24d3f0ULL || rel >= 0x24d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024d550 size=352 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24d550ULL || rel >= 0x24d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024d6b0 size=336 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24d6b0ULL || rel >= 0x24d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024d800 size=336 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24d800ULL || rel >= 0x24d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024d950 size=384 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_24d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24d950ULL || rel >= 0x24dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024dad0 size=352 callers=0 calls=1
   calls: sub_2370c0
*/
void sub_24dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24dad0ULL || rel >= 0x24dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024dc30 size=352 callers=0 calls=1
   calls: sub_235bb0
*/
void sub_24dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24dc30ULL || rel >= 0x24dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024dd90 size=304 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24dd90ULL || rel >= 0x24dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024dec0 size=288 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24dec0ULL || rel >= 0x24dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024dfe0 size=288 callers=1 calls=1
   calls: sub_237ff0
*/
void sub_24dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24dfe0ULL || rel >= 0x24e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024e100 size=288 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24e100ULL || rel >= 0x24e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024e220 size=256 callers=1 calls=1
   calls: sub_2331f0
*/
void sub_24e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24e220ULL || rel >= 0x24e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024e320 size=256 callers=1 calls=1
   calls: sub_237ff0
*/
void sub_24e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24e320ULL || rel >= 0x24e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024e420 size=560 callers=2 calls=1
   calls: sub_2370c0
*/
void sub_24e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24e420ULL || rel >= 0x24e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024e650 size=512 callers=2 calls=1
   calls: sub_2370c0
*/
void sub_24e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24e650ULL || rel >= 0x24e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024e850 size=528 callers=2 calls=1
   calls: sub_235bb0
*/
void sub_24e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24e850ULL || rel >= 0x24ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024ea60 size=512 callers=2 calls=1
   calls: sub_2370c0
*/
void sub_24ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24ea60ULL || rel >= 0x24ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024ec60 size=464 callers=2 calls=1
   calls: sub_2370c0
*/
void sub_24ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24ec60ULL || rel >= 0x24ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024ee30 size=480 callers=2 calls=1
   calls: sub_235bb0
*/
void sub_24ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24ee30ULL || rel >= 0x24f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024f010 size=256 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_24f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24f010ULL || rel >= 0x24f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024f110 size=400 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_24f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24f110ULL || rel >= 0x24f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024f2a0 size=384 callers=1 calls=1
   calls: sub_235bb0
*/
void sub_24f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24f2a0ULL || rel >= 0x24f420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024f420 size=400 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_24f420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24f420ULL || rel >= 0x24f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024f5b0 size=384 callers=1 calls=1
   calls: sub_235bb0
*/
void sub_24f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24f5b0ULL || rel >= 0x24f730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024f730 size=432 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_24f730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24f730ULL || rel >= 0x24f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024f8e0 size=416 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_24f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24f8e0ULL || rel >= 0x24fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024fa80 size=432 callers=1 calls=1
   calls: sub_234c80
*/
void sub_24fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24fa80ULL || rel >= 0x24fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024fc30 size=416 callers=1 calls=1
   calls: sub_235bb0
*/
void sub_24fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24fc30ULL || rel >= 0x24fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024fdd0 size=464 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_24fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24fdd0ULL || rel >= 0x24ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0024ffa0 size=448 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_24ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x24ffa0ULL || rel >= 0x250160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00250160 size=464 callers=1 calls=1
   calls: sub_234c80
*/
void sub_250160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x250160ULL || rel >= 0x250330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00250330 size=448 callers=1 calls=1
   calls: sub_235bb0
*/
void sub_250330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x250330ULL || rel >= 0x2504f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002504f0 size=432 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_2504f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2504f0ULL || rel >= 0x2506a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002506a0 size=400 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_2506a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2506a0ULL || rel >= 0x250830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00250830 size=432 callers=1 calls=1
   calls: sub_234c80
*/
void sub_250830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x250830ULL || rel >= 0x2509e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002509e0 size=384 callers=1 calls=1
   calls: sub_234c80
*/
void sub_2509e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2509e0ULL || rel >= 0x250b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00250b60 size=400 callers=1 calls=1
   calls: sub_235bb0
*/
void sub_250b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x250b60ULL || rel >= 0x250cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00250cf0 size=432 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_250cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x250cf0ULL || rel >= 0x250ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00250ea0 size=416 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_250ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x250ea0ULL || rel >= 0x251040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00251040 size=432 callers=1 calls=1
   calls: sub_234c80
*/
void sub_251040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251040ULL || rel >= 0x2511f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002511f0 size=416 callers=1 calls=1
   calls: sub_235bb0
*/
void sub_2511f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2511f0ULL || rel >= 0x251390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00251390 size=464 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_251390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251390ULL || rel >= 0x251560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00251560 size=448 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_251560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251560ULL || rel >= 0x251720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00251720 size=464 callers=1 calls=1
   calls: sub_234c80
*/
void sub_251720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251720ULL || rel >= 0x2518f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002518f0 size=448 callers=1 calls=1
   calls: sub_235bb0
*/
void sub_2518f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2518f0ULL || rel >= 0x251ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00251ab0 size=464 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_251ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251ab0ULL || rel >= 0x251c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00251c80 size=432 callers=1 calls=1
   calls: sub_2370c0
*/
void sub_251c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251c80ULL || rel >= 0x251e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00251e30 size=464 callers=1 calls=1
   calls: sub_234c80
*/
void sub_251e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x251e30ULL || rel >= 0x252000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252000 size=416 callers=1 calls=1
   calls: sub_234c80
*/
void sub_252000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252000ULL || rel >= 0x2521a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002521a0 size=432 callers=1 calls=1
   calls: sub_235bb0
*/
void sub_2521a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2521a0ULL || rel >= 0x252350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252350 size=464 callers=0 calls=1
   calls: sub_235bb0
*/
void sub_252350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252350ULL || rel >= 0x252520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252520 size=384 callers=1 calls=1
   calls: sub_234040
*/
void sub_252520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252520ULL || rel >= 0x2526a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002526a0 size=352 callers=1 calls=1
   calls: sub_234040
*/
void sub_2526a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2526a0ULL || rel >= 0x252800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252800 size=352 callers=1 calls=1
   calls: sub_234c80
*/
void sub_252800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252800ULL || rel >= 0x252960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252960 size=368 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_252960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252960ULL || rel >= 0x252ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252ad0 size=368 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_252ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252ad0ULL || rel >= 0x252c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252c40 size=368 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_252c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252c40ULL || rel >= 0x252db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252db0 size=528 callers=1 calls=1
   calls: sub_234040
*/
void sub_252db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252db0ULL || rel >= 0x252fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00252fc0 size=496 callers=1 calls=1
   calls: sub_234040
*/
void sub_252fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x252fc0ULL || rel >= 0x2531b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002531b0 size=496 callers=1 calls=1
   calls: sub_234c80
*/
void sub_2531b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2531b0ULL || rel >= 0x2533a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002533a0 size=352 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2533a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2533a0ULL || rel >= 0x253500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00253500 size=256 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_253500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253500ULL || rel >= 0x253600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00253600 size=432 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_253600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253600ULL || rel >= 0x2537b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002537b0 size=368 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_2537b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2537b0ULL || rel >= 0x253920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00253920 size=464 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_253920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253920ULL || rel >= 0x253af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00253af0 size=336 callers=0 calls=1
   calls: sub_2331f0
*/
void sub_253af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x253af0ULL || rel >= 0x253c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

