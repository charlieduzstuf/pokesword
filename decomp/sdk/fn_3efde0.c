/* sdk functions 003efde0..003ffa90 (43 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 003efde0 size=16 callers=0 calls=0
*/
void sub_3efde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efde0ULL || rel >= 0x3efdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efdf0 size=16 callers=0 calls=0
*/
void sub_3efdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efdf0ULL || rel >= 0x3efe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efe00 size=16 callers=0 calls=0
*/
void sub_3efe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efe00ULL || rel >= 0x3efe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efe10 size=16 callers=0 calls=0
*/
void sub_3efe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efe10ULL || rel >= 0x3efe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efe20 size=16 callers=0 calls=0
*/
void sub_3efe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efe20ULL || rel >= 0x3efe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efe30 size=16 callers=0 calls=0
*/
void sub_3efe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efe30ULL || rel >= 0x3efe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efe40 size=16 callers=0 calls=0
*/
void sub_3efe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efe40ULL || rel >= 0x3efe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efe50 size=16 callers=0 calls=0
*/
void sub_3efe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efe50ULL || rel >= 0x3efe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efe60 size=16 callers=0 calls=0
*/
void sub_3efe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efe60ULL || rel >= 0x3efe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efe70 size=16 callers=0 calls=0
*/
void sub_3efe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efe70ULL || rel >= 0x3efe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efe80 size=32 callers=2 calls=0
*/
void sub_3efe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efe80ULL || rel >= 0x3efea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efea0 size=16 callers=0 calls=0
*/
void sub_3efea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efea0ULL || rel >= 0x3efeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efeb0 size=16 callers=0 calls=0
*/
void sub_3efeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efeb0ULL || rel >= 0x3efec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efec0 size=32 callers=2 calls=0
*/
void sub_3efec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efec0ULL || rel >= 0x3efee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efee0 size=16 callers=0 calls=0
*/
void sub_3efee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efee0ULL || rel >= 0x3efef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efef0 size=32 callers=3 calls=0
*/
void sub_3efef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efef0ULL || rel >= 0x3eff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eff10 size=16 callers=0 calls=0
*/
void sub_3eff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eff10ULL || rel >= 0x3eff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eff20 size=16 callers=0 calls=0
*/
void sub_3eff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eff20ULL || rel >= 0x3eff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eff30 size=32 callers=2 calls=0
*/
void sub_3eff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eff30ULL || rel >= 0x3eff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eff50 size=16 callers=0 calls=0
*/
void sub_3eff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eff50ULL || rel >= 0x3eff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eff60 size=16 callers=0 calls=0
*/
void sub_3eff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eff60ULL || rel >= 0x3eff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eff70 size=16 callers=0 calls=0
*/
void sub_3eff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eff70ULL || rel >= 0x3eff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eff80 size=16 callers=0 calls=0
*/
void sub_3eff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eff80ULL || rel >= 0x3eff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eff90 size=16 callers=0 calls=0
*/
void sub_3eff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eff90ULL || rel >= 0x3effa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003effa0 size=16 callers=0 calls=0
*/
void sub_3effa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3effa0ULL || rel >= 0x3effb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003effb0 size=16 callers=0 calls=0
*/
void sub_3effb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3effb0ULL || rel >= 0x3effc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003effc0 size=16 callers=0 calls=0
*/
void sub_3effc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3effc0ULL || rel >= 0x3effd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003effd0 size=16 callers=0 calls=0
*/
void sub_3effd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3effd0ULL || rel >= 0x3effe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003effe0 size=16 callers=0 calls=0
*/
void sub_3effe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3effe0ULL || rel >= 0x3efff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003efff0 size=16 callers=0 calls=0
*/
void sub_3efff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3efff0ULL || rel >= 0x3f0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0000 size=16 callers=0 calls=0
*/
void sub_3f0000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0000ULL || rel >= 0x3f0010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0010 size=16 callers=0 calls=0
*/
void sub_3f0010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0010ULL || rel >= 0x3f0020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0020 size=16 callers=0 calls=0
*/
void sub_3f0020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0020ULL || rel >= 0x3f0030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0030 size=16 callers=0 calls=0
*/
void sub_3f0030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0030ULL || rel >= 0x3f0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0040 size=32 callers=1 calls=0
*/
void sub_3f0040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0040ULL || rel >= 0x3f0060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0060 size=32 callers=1 calls=0
*/
void sub_3f0060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0060ULL || rel >= 0x3f0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0080 size=16 callers=0 calls=0
*/
void sub_3f0080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0080ULL || rel >= 0x3f0090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0090 size=16 callers=0 calls=0
*/
void sub_3f0090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0090ULL || rel >= 0x3f00a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f00a0 size=16 callers=0 calls=0
*/
void sub_3f00a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f00a0ULL || rel >= 0x3f00b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f00b0 size=16 callers=0 calls=0
*/
void sub_3f00b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f00b0ULL || rel >= 0x3f00c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f00c0 size=16 callers=0 calls=0
*/
void sub_3f00c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f00c0ULL || rel >= 0x3f00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f00d0 size=16 callers=0 calls=0
*/
void sub_3f00d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f00d0ULL || rel >= 0x3f00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f00e0 size=16 callers=0 calls=0
*/
void sub_3f00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f00e0ULL || rel >= 0x3f00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f00f0 size=16 callers=0 calls=0
*/
void sub_3f00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f00f0ULL || rel >= 0x3f0100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0100 size=16 callers=0 calls=0
*/
void sub_3f0100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0100ULL || rel >= 0x3f0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0110 size=16 callers=0 calls=0
*/
void sub_3f0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0110ULL || rel >= 0x3f0120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0120 size=16 callers=0 calls=0
*/
void sub_3f0120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0120ULL || rel >= 0x3f0130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0130 size=16 callers=0 calls=0
*/
void sub_3f0130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0130ULL || rel >= 0x3f0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0140 size=16 callers=0 calls=0
*/
void sub_3f0140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0140ULL || rel >= 0x3f0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0150 size=16 callers=0 calls=0
*/
void sub_3f0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0150ULL || rel >= 0x3f0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0160 size=32 callers=1 calls=0
*/
void sub_3f0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0160ULL || rel >= 0x3f0180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0180 size=16 callers=0 calls=0
*/
void sub_3f0180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0180ULL || rel >= 0x3f0190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0190 size=16 callers=0 calls=0
*/
void sub_3f0190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0190ULL || rel >= 0x3f01a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f01a0 size=16 callers=0 calls=0
*/
void sub_3f01a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f01a0ULL || rel >= 0x3f01b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f01b0 size=80 callers=1 calls=0
*/
void sub_3f01b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f01b0ULL || rel >= 0x3f0200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0200 size=64 callers=1 calls=1
   calls: sub_3f05e0
*/
void sub_3f0200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0200ULL || rel >= 0x3f0240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0240 size=64 callers=0 calls=1
   calls: sub_3f05e0
*/
void sub_3f0240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0240ULL || rel >= 0x3f0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0280 size=96 callers=0 calls=0
*/
void sub_3f0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0280ULL || rel >= 0x3f02e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f02e0 size=96 callers=2 calls=0
*/
void sub_3f02e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f02e0ULL || rel >= 0x3f0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0340 size=16 callers=0 calls=0
*/
void sub_3f0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0340ULL || rel >= 0x3f0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0350 size=16 callers=0 calls=0
*/
void sub_3f0350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0350ULL || rel >= 0x3f0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0360 size=16 callers=0 calls=0
*/
void sub_3f0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0360ULL || rel >= 0x3f0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0370 size=16 callers=0 calls=0
*/
void sub_3f0370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0370ULL || rel >= 0x3f0380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0380 size=16 callers=0 calls=0
*/
void sub_3f0380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0380ULL || rel >= 0x3f0390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0390 size=16 callers=0 calls=0
*/
void sub_3f0390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0390ULL || rel >= 0x3f03a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f03a0 size=16 callers=0 calls=0
*/
void sub_3f03a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f03a0ULL || rel >= 0x3f03b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f03b0 size=32 callers=1 calls=0
*/
void sub_3f03b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f03b0ULL || rel >= 0x3f03d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f03d0 size=16 callers=0 calls=0
*/
void sub_3f03d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f03d0ULL || rel >= 0x3f03e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f03e0 size=16 callers=0 calls=0
*/
void sub_3f03e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f03e0ULL || rel >= 0x3f03f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f03f0 size=16 callers=0 calls=0
*/
void sub_3f03f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f03f0ULL || rel >= 0x3f0400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0400 size=16 callers=0 calls=0
*/
void sub_3f0400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0400ULL || rel >= 0x3f0410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0410 size=16 callers=0 calls=0
*/
void sub_3f0410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0410ULL || rel >= 0x3f0420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0420 size=16 callers=0 calls=0
*/
void sub_3f0420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0420ULL || rel >= 0x3f0430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0430 size=16 callers=0 calls=0
*/
void sub_3f0430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0430ULL || rel >= 0x3f0440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0440 size=32 callers=0 calls=0
*/
void sub_3f0440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0440ULL || rel >= 0x3f0460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0460 size=16 callers=0 calls=0
*/
void sub_3f0460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0460ULL || rel >= 0x3f0470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0470 size=16 callers=13 calls=0
*/
void sub_3f0470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0470ULL || rel >= 0x3f0480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0480 size=16 callers=0 calls=0
*/
void sub_3f0480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0480ULL || rel >= 0x3f0490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0490 size=16 callers=0 calls=0
*/
void sub_3f0490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0490ULL || rel >= 0x3f04a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f04a0 size=16 callers=0 calls=0
*/
void sub_3f04a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f04a0ULL || rel >= 0x3f04b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f04b0 size=16 callers=0 calls=0
*/
void sub_3f04b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f04b0ULL || rel >= 0x3f04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f04c0 size=112 callers=14 calls=1
   calls: sub_3f0530
*/
void sub_3f04c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f04c0ULL || rel >= 0x3f0530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0530 size=176 callers=4 calls=0
*/
void sub_3f0530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0530ULL || rel >= 0x3f05e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f05e0 size=48 callers=2 calls=0
*/
void sub_3f05e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f05e0ULL || rel >= 0x3f0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0610 size=48 callers=1 calls=0
*/
void sub_3f0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0610ULL || rel >= 0x3f0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0640 size=288 callers=2 calls=3
   calls: sub_3f0760, sub_3f0fd0, sub_3f1040
*/
void sub_3f0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0640ULL || rel >= 0x3f0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0760 size=176 callers=6 calls=0
*/
void sub_3f0760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0760ULL || rel >= 0x3f0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0810 size=416 callers=2 calls=0
*/
void sub_3f0810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0810ULL || rel >= 0x3f09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f09b0 size=640 callers=2 calls=9
   calls: sub_3f0760, sub_3f0c30, sub_3f0d00, sub_3f0e00, sub_3f0f90, sub_3f0fd0, sub_3f1040, sub_3f10c0, sub_3f1140
*/
void sub_3f09b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f09b0ULL || rel >= 0x3f0c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0c30 size=208 callers=3 calls=0
*/
void sub_3f0c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0c30ULL || rel >= 0x3f0d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0d00 size=144 callers=1 calls=1
   calls: sub_3f0c30
*/
void sub_3f0d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0d00ULL || rel >= 0x3f0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0d90 size=112 callers=0 calls=0
*/
void sub_3f0d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0d90ULL || rel >= 0x3f0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0e00 size=192 callers=3 calls=0
*/
void sub_3f0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0e00ULL || rel >= 0x3f0ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0ec0 size=176 callers=2 calls=0
   ref: Graphics Device
*/
void Graphics_Device(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0ec0ULL || rel >= 0x3f0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0f70 size=32 callers=0 calls=0
*/
void sub_3f0f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0f70ULL || rel >= 0x3f0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0f90 size=64 callers=1 calls=1
   calls: sub_3f0c30
*/
void sub_3f0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0f90ULL || rel >= 0x3f0fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f0fd0 size=112 callers=18 calls=1
   calls: sub_3f0760
*/
void sub_3f0fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f0fd0ULL || rel >= 0x3f1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1040 size=128 callers=7 calls=1
   calls: sub_3f0760
*/
void sub_3f1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1040ULL || rel >= 0x3f10c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f10c0 size=128 callers=4 calls=1
   calls: sub_3f0e00
*/
void sub_3f10c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f10c0ULL || rel >= 0x3f1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1140 size=144 callers=1 calls=1
   calls: sub_3f0e00
*/
void sub_3f1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1140ULL || rel >= 0x3f11d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f11d0 size=16 callers=2 calls=0
*/
void sub_3f11d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f11d0ULL || rel >= 0x3f11e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f11e0 size=784 callers=2 calls=2
   calls: sub_3f1bb0, sub_3f1f10
   ref: NVRM_GPU_
*/
void NVRM_GPU(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f11e0ULL || rel >= 0x3f14f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f14f0 size=32 callers=23 calls=1
   calls: sub_3f1510
*/
void sub_3f14f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f14f0ULL || rel >= 0x3f1510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1510 size=224 callers=8 calls=1
   calls: NVRM_GPU
*/
void sub_3f1510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1510ULL || rel >= 0x3f15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f15f0 size=288 callers=2 calls=2
   calls: NVRM_GPU, sub_3ef790
*/
void sub_3f15f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f15f0ULL || rel >= 0x3f1710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1710 size=448 callers=1 calls=2
   calls: sub_3f1510, sub_3f18e0
   ref: %s is set, libnvrm_gpu.so cannot be used!
   ref: NVRM_GPU_PREVENT_USE
*/
void NVRM_GPU_PREVENT_USE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1710ULL || rel >= 0x3f18d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f18d0 size=16 callers=1 calls=0
*/
void sub_3f18d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f18d0ULL || rel >= 0x3f18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f18e0 size=720 callers=1 calls=1
   calls: sub_3ef790
*/
void sub_3f18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f18e0ULL || rel >= 0x3f1bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1bb0 size=864 callers=1 calls=0
*/
void sub_3f1bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1bb0ULL || rel >= 0x3f1f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f1f10 size=560 callers=1 calls=1
   calls: sub_3f2140
*/
void sub_3f1f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f1f10ULL || rel >= 0x3f2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2140 size=528 callers=1 calls=0
*/
void sub_3f2140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2140ULL || rel >= 0x3f2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2350 size=48 callers=1 calls=0
*/
void sub_3f2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2350ULL || rel >= 0x3f2380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2380 size=48 callers=0 calls=1
   calls: sub_3ef9d0
*/
void sub_3f2380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2380ULL || rel >= 0x3f23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f23b0 size=336 callers=0 calls=4
   calls: sub_3ef840, sub_3f04c0, sub_3f11d0, sub_3f15f0
   ref: Bad value for %s
   ref: Dummy %s
*/
void Dummy_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f23b0ULL || rel >= 0x3f2500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2500 size=832 callers=0 calls=7
   calls: Graphics_Device, sub_3efac0, sub_3f04c0, sub_3f0640, sub_3f0810, sub_3f09b0, sub_3f2c50
*/
void sub_3f2500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2500ULL || rel >= 0x3f2840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2840 size=32 callers=0 calls=0
*/
void sub_3f2840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2840ULL || rel >= 0x3f2860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2860 size=64 callers=0 calls=1
   calls: sub_3ef790
*/
void sub_3f2860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2860ULL || rel >= 0x3f28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f28a0 size=64 callers=0 calls=1
   calls: sub_3ef790
*/
void sub_3f28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f28a0ULL || rel >= 0x3f28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f28e0 size=208 callers=1 calls=4
   calls: sub_3f04c0, sub_3f0fd0, sub_3f10c0, sub_3f2c50
*/
void sub_3f28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f28e0ULL || rel >= 0x3f29b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f29b0 size=48 callers=0 calls=1
   calls: sub_3f28e0
*/
void sub_3f29b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f29b0ULL || rel >= 0x3f29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f29e0 size=16 callers=0 calls=0
*/
void sub_3f29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f29e0ULL || rel >= 0x3f29f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f29f0 size=16 callers=0 calls=0
*/
void sub_3f29f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f29f0ULL || rel >= 0x3f2a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2a00 size=16 callers=0 calls=0
*/
void sub_3f2a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2a00ULL || rel >= 0x3f2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2a10 size=320 callers=0 calls=2
   calls: sub_3efe80, sub_3f2d70
*/
void sub_3f2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2a10ULL || rel >= 0x3f2b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2b50 size=176 callers=0 calls=1
   calls: sub_3eff30
*/
void sub_3f2b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2b50ULL || rel >= 0x3f2c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2c00 size=16 callers=0 calls=0
*/
void sub_3f2c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2c00ULL || rel >= 0x3f2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2c10 size=16 callers=0 calls=0
*/
void sub_3f2c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2c10ULL || rel >= 0x3f2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2c20 size=16 callers=0 calls=0
*/
void sub_3f2c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2c20ULL || rel >= 0x3f2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2c30 size=16 callers=0 calls=0
*/
void sub_3f2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2c30ULL || rel >= 0x3f2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2c40 size=16 callers=0 calls=0
*/
void sub_3f2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2c40ULL || rel >= 0x3f2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2c50 size=112 callers=4 calls=1
   calls: sub_3f2cc0
*/
void sub_3f2c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2c50ULL || rel >= 0x3f2cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2cc0 size=176 callers=1 calls=0
*/
void sub_3f2cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2cc0ULL || rel >= 0x3f2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2d70 size=128 callers=9 calls=1
   calls: sub_3f3090
*/
void sub_3f2d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2d70ULL || rel >= 0x3f2df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2df0 size=80 callers=0 calls=1
   calls: sub_3f2d70
*/
void sub_3f2df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2df0ULL || rel >= 0x3f2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2e40 size=80 callers=0 calls=2
   calls: sub_3f0470, sub_3f2d70
*/
void sub_3f2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2e40ULL || rel >= 0x3f2e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2e90 size=256 callers=0 calls=1
   calls: sub_3efec0
*/
void sub_3f2e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2e90ULL || rel >= 0x3f2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2f90 size=16 callers=0 calls=0
*/
void sub_3f2f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2f90ULL || rel >= 0x3f2fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2fa0 size=16 callers=0 calls=0
*/
void sub_3f2fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2fa0ULL || rel >= 0x3f2fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f2fb0 size=192 callers=0 calls=1
   calls: sub_3efef0
*/
void sub_3f2fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f2fb0ULL || rel >= 0x3f3070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3070 size=32 callers=0 calls=0
*/
void sub_3f3070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3070ULL || rel >= 0x3f3090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3090 size=208 callers=1 calls=0
*/
void sub_3f3090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3090ULL || rel >= 0x3f3160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3160 size=48 callers=0 calls=1
   calls: sub_3f0470
*/
void sub_3f3160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3160ULL || rel >= 0x3f3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3190 size=32 callers=0 calls=0
*/
void sub_3f3190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3190ULL || rel >= 0x3f31b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f31b0 size=160 callers=0 calls=1
   calls: sub_3efef0
*/
void sub_3f31b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f31b0ULL || rel >= 0x3f3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3250 size=16 callers=0 calls=0
*/
void sub_3f3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3250ULL || rel >= 0x3f3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3260 size=48 callers=0 calls=1
   calls: sub_3f0470
*/
void sub_3f3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3260ULL || rel >= 0x3f3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3290 size=32 callers=0 calls=0
*/
void sub_3f3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3290ULL || rel >= 0x3f32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f32b0 size=64 callers=0 calls=1
   calls: sub_3f0470
*/
void sub_3f32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f32b0ULL || rel >= 0x3f32f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f32f0 size=64 callers=0 calls=0
*/
void sub_3f32f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f32f0ULL || rel >= 0x3f3330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3330 size=64 callers=0 calls=0
*/
void sub_3f3330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3330ULL || rel >= 0x3f3370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3370 size=16 callers=0 calls=0
*/
void sub_3f3370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3370ULL || rel >= 0x3f3380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3380 size=16 callers=0 calls=0
*/
void sub_3f3380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3380ULL || rel >= 0x3f3390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3390 size=16 callers=0 calls=0
*/
void sub_3f3390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3390ULL || rel >= 0x3f33a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f33a0 size=16 callers=0 calls=0
*/
void sub_3f33a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f33a0ULL || rel >= 0x3f33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f33b0 size=16 callers=0 calls=0
*/
void sub_3f33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f33b0ULL || rel >= 0x3f33c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f33c0 size=384 callers=3 calls=4
   calls: NVRM_GPU_PREVENT_USE, sub_3f14f0, sub_3f1510, sub_3f4b20
*/
void sub_3f33c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f33c0ULL || rel >= 0x3f3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3540 size=96 callers=3 calls=1
   calls: sub_3f18d0
*/
void sub_3f3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3540ULL || rel >= 0x3f35a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f35a0 size=16 callers=1 calls=0
*/
void sub_3f35a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f35a0ULL || rel >= 0x3f35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f35b0 size=64 callers=0 calls=0
*/
void sub_3f35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f35b0ULL || rel >= 0x3f35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f35f0 size=16 callers=3 calls=0
*/
void sub_3f35f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f35f0ULL || rel >= 0x3f3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3600 size=16 callers=0 calls=0
*/
void sub_3f3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3600ULL || rel >= 0x3f3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3610 size=16 callers=0 calls=0
*/
void sub_3f3610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3610ULL || rel >= 0x3f3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3620 size=16 callers=0 calls=0
*/
void sub_3f3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3620ULL || rel >= 0x3f3630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3630 size=16 callers=0 calls=0
*/
void sub_3f3630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3630ULL || rel >= 0x3f3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3640 size=16 callers=0 calls=0
*/
void sub_3f3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3640ULL || rel >= 0x3f3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3650 size=16 callers=0 calls=0
*/
void sub_3f3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3650ULL || rel >= 0x3f3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3660 size=144 callers=0 calls=1
   calls: sub_3f1040
*/
void sub_3f3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3660ULL || rel >= 0x3f36f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f36f0 size=16 callers=0 calls=0
*/
void sub_3f36f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f36f0ULL || rel >= 0x3f3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3700 size=128 callers=0 calls=0
*/
void sub_3f3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3700ULL || rel >= 0x3f3780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3780 size=64 callers=0 calls=0
*/
void sub_3f3780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3780ULL || rel >= 0x3f37c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f37c0 size=32 callers=0 calls=0
*/
void sub_3f37c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f37c0ULL || rel >= 0x3f37e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f37e0 size=16 callers=0 calls=0
*/
void sub_3f37e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f37e0ULL || rel >= 0x3f37f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f37f0 size=128 callers=0 calls=0
*/
void sub_3f37f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f37f0ULL || rel >= 0x3f3870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3870 size=80 callers=0 calls=0
*/
void sub_3f3870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3870ULL || rel >= 0x3f38c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f38c0 size=256 callers=0 calls=0
*/
void sub_3f38c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f38c0ULL || rel >= 0x3f39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f39c0 size=288 callers=0 calls=0
*/
void sub_3f39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f39c0ULL || rel >= 0x3f3ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3ae0 size=80 callers=0 calls=0
*/
void sub_3f3ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3ae0ULL || rel >= 0x3f3b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3b30 size=144 callers=0 calls=0
*/
void sub_3f3b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3b30ULL || rel >= 0x3f3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3bc0 size=64 callers=0 calls=0
*/
void sub_3f3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3bc0ULL || rel >= 0x3f3c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3c00 size=576 callers=0 calls=0
*/
void sub_3f3c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3c00ULL || rel >= 0x3f3e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3e40 size=96 callers=0 calls=0
*/
void sub_3f3e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3e40ULL || rel >= 0x3f3ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3ea0 size=80 callers=0 calls=0
*/
void sub_3f3ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3ea0ULL || rel >= 0x3f3ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3ef0 size=16 callers=0 calls=0
*/
void sub_3f3ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3ef0ULL || rel >= 0x3f3f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f3f00 size=400 callers=0 calls=0
*/
void sub_3f3f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f3f00ULL || rel >= 0x3f4090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4090 size=64 callers=0 calls=0
*/
void sub_3f4090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4090ULL || rel >= 0x3f40d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f40d0 size=16 callers=0 calls=0
*/
void sub_3f40d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f40d0ULL || rel >= 0x3f40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f40e0 size=80 callers=0 calls=0
*/
void sub_3f40e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f40e0ULL || rel >= 0x3f4130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4130 size=16 callers=0 calls=0
*/
void sub_3f4130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4130ULL || rel >= 0x3f4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4140 size=16 callers=0 calls=0
*/
void sub_3f4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4140ULL || rel >= 0x3f4150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4150 size=16 callers=0 calls=0
*/
void sub_3f4150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4150ULL || rel >= 0x3f4160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4160 size=16 callers=0 calls=0
*/
void sub_3f4160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4160ULL || rel >= 0x3f4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4170 size=16 callers=0 calls=0
*/
void sub_3f4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4170ULL || rel >= 0x3f4180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4180 size=16 callers=0 calls=0
*/
void sub_3f4180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4180ULL || rel >= 0x3f4190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4190 size=16 callers=0 calls=0
*/
void sub_3f4190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4190ULL || rel >= 0x3f41a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f41a0 size=16 callers=0 calls=0
*/
void sub_3f41a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f41a0ULL || rel >= 0x3f41b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f41b0 size=32 callers=0 calls=0
*/
void sub_3f41b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f41b0ULL || rel >= 0x3f41d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f41d0 size=16 callers=0 calls=0
*/
void sub_3f41d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f41d0ULL || rel >= 0x3f41e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f41e0 size=80 callers=0 calls=1
   calls: sub_3f0fd0
*/
void sub_3f41e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f41e0ULL || rel >= 0x3f4230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4230 size=80 callers=0 calls=2
   calls: sub_3f0fd0, sub_3f35f0
*/
void sub_3f4230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4230ULL || rel >= 0x3f4280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4280 size=16 callers=0 calls=0
*/
void sub_3f4280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4280ULL || rel >= 0x3f4290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4290 size=16 callers=0 calls=0
*/
void sub_3f4290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4290ULL || rel >= 0x3f42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f42a0 size=160 callers=0 calls=0
*/
void sub_3f42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f42a0ULL || rel >= 0x3f4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4340 size=144 callers=0 calls=0
*/
void sub_3f4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4340ULL || rel >= 0x3f43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f43d0 size=16 callers=0 calls=0
*/
void sub_3f43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f43d0ULL || rel >= 0x3f43e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f43e0 size=32 callers=0 calls=0
*/
void sub_3f43e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f43e0ULL || rel >= 0x3f4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4400 size=96 callers=0 calls=0
*/
void sub_3f4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4400ULL || rel >= 0x3f4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4460 size=32 callers=0 calls=0
*/
void sub_3f4460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4460ULL || rel >= 0x3f4480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4480 size=32 callers=0 calls=0
*/
void sub_3f4480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4480ULL || rel >= 0x3f44a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f44a0 size=32 callers=0 calls=0
*/
void sub_3f44a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f44a0ULL || rel >= 0x3f44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f44c0 size=32 callers=0 calls=0
*/
void sub_3f44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f44c0ULL || rel >= 0x3f44e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f44e0 size=80 callers=0 calls=2
   calls: sub_3f0fd0, sub_3f35f0
*/
void sub_3f44e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f44e0ULL || rel >= 0x3f4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4530 size=16 callers=0 calls=0
*/
void sub_3f4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4530ULL || rel >= 0x3f4540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4540 size=16 callers=0 calls=0
*/
void sub_3f4540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4540ULL || rel >= 0x3f4550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4550 size=80 callers=0 calls=2
   calls: sub_3f0fd0, sub_3f35f0
*/
void sub_3f4550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4550ULL || rel >= 0x3f45a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f45a0 size=80 callers=1 calls=2
   calls: sub_3efa80, sub_3f33c0
*/
void sub_3f45a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f45a0ULL || rel >= 0x3f45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f45f0 size=176 callers=1 calls=3
   calls: sub_3f04c0, sub_3f3540, sub_3f4870
*/
void sub_3f45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f45f0ULL || rel >= 0x3f46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f46a0 size=48 callers=0 calls=1
   calls: sub_3f45f0
*/
void sub_3f46a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f46a0ULL || rel >= 0x3f46d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f46d0 size=416 callers=0 calls=5
   calls: sub_3f0530, sub_3f2350, sub_3f4870, sub_3f49e0, sub_3fad70
*/
void sub_3f46d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f46d0ULL || rel >= 0x3f4870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4870 size=128 callers=2 calls=1
   calls: sub_3f4a60
*/
void sub_3f4870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4870ULL || rel >= 0x3f48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f48f0 size=16 callers=0 calls=0
*/
void sub_3f48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f48f0ULL || rel >= 0x3f4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4900 size=160 callers=0 calls=0
*/
void sub_3f4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4900ULL || rel >= 0x3f49a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f49a0 size=16 callers=0 calls=0
*/
void sub_3f49a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f49a0ULL || rel >= 0x3f49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f49b0 size=16 callers=0 calls=0
*/
void sub_3f49b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f49b0ULL || rel >= 0x3f49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f49c0 size=32 callers=0 calls=0
*/
void sub_3f49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f49c0ULL || rel >= 0x3f49e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f49e0 size=128 callers=3 calls=1
   calls: sub_3f0530
*/
void sub_3f49e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f49e0ULL || rel >= 0x3f4a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4a60 size=192 callers=1 calls=0
*/
void sub_3f4a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4a60ULL || rel >= 0x3f4b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4b20 size=48 callers=1 calls=1
   calls: sub_3f14f0
*/
void sub_3f4b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4b20ULL || rel >= 0x3f4b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4b50 size=16 callers=0 calls=0
*/
void sub_3f4b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4b50ULL || rel >= 0x3f4b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4b60 size=16 callers=0 calls=0
*/
void sub_3f4b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4b60ULL || rel >= 0x3f4b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4b70 size=16 callers=0 calls=0
*/
void sub_3f4b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4b70ULL || rel >= 0x3f4b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4b80 size=16 callers=0 calls=0
*/
void sub_3f4b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4b80ULL || rel >= 0x3f4b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4b90 size=128 callers=1 calls=1
   calls: sub_3efe80
*/
void sub_3f4b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4b90ULL || rel >= 0x3f4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4c10 size=112 callers=0 calls=1
   calls: sub_3f2d70
*/
void sub_3f4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4c10ULL || rel >= 0x3f4c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4c80 size=128 callers=0 calls=2
   calls: sub_3f0470, sub_3f2d70
*/
void sub_3f4c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4c80ULL || rel >= 0x3f4d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4d00 size=16 callers=15 calls=0
*/
void sub_3f4d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4d00ULL || rel >= 0x3f4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4d10 size=16 callers=0 calls=0
*/
void sub_3f4d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4d10ULL || rel >= 0x3f4d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4d20 size=464 callers=1 calls=2
   calls: sub_3f5870, sub_3fc740
*/
void sub_3f4d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4d20ULL || rel >= 0x3f4ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f4ef0 size=272 callers=0 calls=2
   calls: sub_3f5a50, sub_3fc740
*/
void sub_3f4ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f4ef0ULL || rel >= 0x3f5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5000 size=368 callers=2 calls=1
   calls: sub_3f9fa0
*/
void sub_3f5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5000ULL || rel >= 0x3f5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5170 size=16 callers=1 calls=0
*/
void sub_3f5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5170ULL || rel >= 0x3f5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5180 size=16 callers=1 calls=0
*/
void sub_3f5180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5180ULL || rel >= 0x3f5190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5190 size=16 callers=0 calls=0
*/
void sub_3f5190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5190ULL || rel >= 0x3f51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f51a0 size=272 callers=0 calls=3
   calls: sub_3f5000, sub_3fa580, sub_3fc740
*/
void sub_3f51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f51a0ULL || rel >= 0x3f52b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f52b0 size=64 callers=1 calls=0
*/
void sub_3f52b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f52b0ULL || rel >= 0x3f52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f52f0 size=96 callers=2 calls=1
   calls: sub_3fc740
*/
void sub_3f52f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f52f0ULL || rel >= 0x3f5350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5350 size=96 callers=2 calls=1
   calls: sub_3fc740
*/
void sub_3f5350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5350ULL || rel >= 0x3f53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f53b0 size=16 callers=0 calls=0
*/
void sub_3f53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f53b0ULL || rel >= 0x3f53c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f53c0 size=144 callers=0 calls=0
*/
void sub_3f53c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f53c0ULL || rel >= 0x3f5450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5450 size=288 callers=0 calls=5
   calls: sub_3f5000, sub_3f5170, sub_3f5180, sub_3f52b0, sub_3fa580
*/
void sub_3f5450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5450ULL || rel >= 0x3f5570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5570 size=768 callers=0 calls=3
   calls: sub_3f4d00, sub_3f9fa0, sub_3fc740
*/
void sub_3f5570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5570ULL || rel >= 0x3f5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5870 size=480 callers=1 calls=4
   calls: sub_3f2d70, sub_3f4d00, sub_3fc740, sub_3fcc60
*/
void sub_3f5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5870ULL || rel >= 0x3f5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5a50 size=80 callers=1 calls=1
   calls: sub_3efec0
*/
void sub_3f5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5a50ULL || rel >= 0x3f5aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5aa0 size=176 callers=0 calls=3
   calls: sub_3f0470, sub_3f4d00, sub_3fc740
*/
void sub_3f5aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5aa0ULL || rel >= 0x3f5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5b50 size=192 callers=0 calls=4
   calls: sub_3ef780, sub_3f0470, sub_3f4d00, sub_3fc740
*/
void sub_3f5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5b50ULL || rel >= 0x3f5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5c10 size=32 callers=0 calls=0
*/
void sub_3f5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5c10ULL || rel >= 0x3f5c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f5c30 size=2368 callers=1 calls=8
   calls: sub_3f0610, sub_3f1040, sub_3f11d0, sub_3f14f0, sub_3f1510, sub_3f6570, sub_3fc740, sub_3fc960
   ref: nvrm_gpu: Bug %llu workaround enabled.
*/
void nvrm_gpu_Bug_llu_workaround_enabled(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f5c30ULL || rel >= 0x3f6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f6570 size=3104 callers=1 calls=7
   calls: Graphics_Device, sub_3f04c0, sub_3f0760, sub_3f1040, sub_3f14f0, sub_3f15f0, sub_3fcbb0
*/
void sub_3f6570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f6570ULL || rel >= 0x3f7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7190 size=448 callers=1 calls=2
   calls: sub_3eff30, sub_3fc510
*/
void sub_3f7190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7190ULL || rel >= 0x3f7350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7350 size=272 callers=1 calls=2
   calls: sub_3ef9a0, sub_3fce40
*/
void sub_3f7350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7350ULL || rel >= 0x3f7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7460 size=112 callers=1 calls=1
   calls: sub_3fce40
*/
void sub_3f7460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7460ULL || rel >= 0x3f74d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f74d0 size=48 callers=0 calls=1
   calls: sub_3f7350
*/
void sub_3f74d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f74d0ULL || rel >= 0x3f7500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7500 size=16 callers=37 calls=0
*/
void sub_3f7500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7500ULL || rel >= 0x3f7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7510 size=704 callers=1 calls=1
   calls: sub_3fc740
   ref: Failed to set channel timeout
*/
void Failed_to_set_channel_timeout(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7510ULL || rel >= 0x3f77d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f77d0 size=96 callers=1 calls=1
   calls: sub_3fcd20
*/
void sub_3f77d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f77d0ULL || rel >= 0x3f7830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7830 size=160 callers=0 calls=0
*/
void sub_3f7830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7830ULL || rel >= 0x3f78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f78d0 size=16 callers=0 calls=0
*/
void sub_3f78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f78d0ULL || rel >= 0x3f78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f78e0 size=80 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f78e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f78e0ULL || rel >= 0x3f7930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7930 size=144 callers=0 calls=2
   calls: sub_3fae90, sub_3fb0e0
*/
void sub_3f7930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7930ULL || rel >= 0x3f79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f79c0 size=16 callers=0 calls=0
*/
void sub_3f79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f79c0ULL || rel >= 0x3f79d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f79d0 size=16 callers=0 calls=0
*/
void sub_3f79d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f79d0ULL || rel >= 0x3f79e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f79e0 size=256 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f79e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f79e0ULL || rel >= 0x3f7ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7ae0 size=48 callers=0 calls=0
*/
void sub_3f7ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7ae0ULL || rel >= 0x3f7b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7b10 size=128 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f7b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7b10ULL || rel >= 0x3f7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7b90 size=48 callers=0 calls=0
*/
void sub_3f7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7b90ULL || rel >= 0x3f7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7bc0 size=96 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7bc0ULL || rel >= 0x3f7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7c20 size=96 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7c20ULL || rel >= 0x3f7c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7c80 size=112 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f7c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7c80ULL || rel >= 0x3f7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7cf0 size=96 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7cf0ULL || rel >= 0x3f7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7d50 size=96 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f7d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7d50ULL || rel >= 0x3f7db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7db0 size=176 callers=0 calls=0
*/
void sub_3f7db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7db0ULL || rel >= 0x3f7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7e60 size=16 callers=0 calls=0
*/
void sub_3f7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7e60ULL || rel >= 0x3f7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7e70 size=160 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7e70ULL || rel >= 0x3f7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7f10 size=64 callers=1 calls=1
   calls: sub_3fc740
*/
void sub_3f7f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7f10ULL || rel >= 0x3f7f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f7f50 size=384 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f7f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f7f50ULL || rel >= 0x3f80d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f80d0 size=160 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f80d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f80d0ULL || rel >= 0x3f8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8170 size=880 callers=1 calls=2
   calls: sub_3f7500, sub_3f84e0
*/
void sub_3f8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8170ULL || rel >= 0x3f84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f84e0 size=1248 callers=3 calls=2
   calls: sub_3f7500, sub_3fca40
*/
void sub_3f84e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f84e0ULL || rel >= 0x3f89c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f89c0 size=272 callers=1 calls=1
   calls: sub_3efac0
*/
void sub_3f89c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f89c0ULL || rel >= 0x3f8ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8ad0 size=352 callers=1 calls=4
   calls: sub_3ef790, sub_3f0fd0, sub_3f10c0, sub_3f8c30
*/
void sub_3f8ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8ad0ULL || rel >= 0x3f8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8c30 size=272 callers=1 calls=5
   calls: sub_3f04c0, sub_3f0fd0, sub_3f10c0, sub_3f2c50, sub_3fa350
*/
void sub_3f8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8c30ULL || rel >= 0x3f8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8d40 size=224 callers=0 calls=1
   calls: sub_3ef790
*/
void sub_3f8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8d40ULL || rel >= 0x3f8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8e20 size=48 callers=0 calls=1
   calls: sub_3f8ad0
*/
void sub_3f8e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8e20ULL || rel >= 0x3f8e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f8e50 size=880 callers=1 calls=9
   calls: nvrm_gpu_Bug_llu_workaround_enabled, sub_3f0640, sub_3f0760, sub_3f0810, sub_3f09b0, sub_3f0fd0, sub_3f1040, sub_3f14f0, sub_3f2c50
*/
void sub_3f8e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f8e50ULL || rel >= 0x3f91c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f91c0 size=16 callers=0 calls=0
*/
void sub_3f91c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f91c0ULL || rel >= 0x3f91d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f91d0 size=16 callers=0 calls=0
*/
void sub_3f91d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f91d0ULL || rel >= 0x3f91e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f91e0 size=16 callers=0 calls=0
*/
void sub_3f91e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f91e0ULL || rel >= 0x3f91f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f91f0 size=288 callers=0 calls=1
   calls: sub_3efae0
*/
void sub_3f91f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f91f0ULL || rel >= 0x3f9310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9310 size=16 callers=0 calls=0
*/
void sub_3f9310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9310ULL || rel >= 0x3f9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9320 size=96 callers=1 calls=0
*/
void sub_3f9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9320ULL || rel >= 0x3f9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9380 size=144 callers=0 calls=2
   calls: sub_3f4b90, sub_3f4d20
*/
void sub_3f9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9380ULL || rel >= 0x3f9410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9410 size=352 callers=0 calls=6
   calls: Failed_to_set_channel_timeout, sub_3f7190, sub_3f77d0, sub_3f7f10, sub_3fbc80, sub_3fbcf0
*/
void sub_3f9410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9410ULL || rel >= 0x3f9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9570 size=16 callers=0 calls=0
*/
void sub_3f9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9570ULL || rel >= 0x3f9580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9580 size=304 callers=0 calls=0
*/
void sub_3f9580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9580ULL || rel >= 0x3f96b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f96b0 size=128 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f96b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f96b0ULL || rel >= 0x3f9730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9730 size=176 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f9730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9730ULL || rel >= 0x3f97e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f97e0 size=144 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f97e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f97e0ULL || rel >= 0x3f9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9870 size=144 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9870ULL || rel >= 0x3f9900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9900 size=96 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f9900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9900ULL || rel >= 0x3f9960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9960 size=112 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f9960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9960ULL || rel >= 0x3f99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f99d0 size=144 callers=0 calls=2
   calls: sub_3fae90, sub_3fb040
*/
void sub_3f99d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f99d0ULL || rel >= 0x3f9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9a60 size=160 callers=0 calls=2
   calls: sub_3fa470, sub_3fa560
*/
void sub_3f9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9a60ULL || rel >= 0x3f9b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9b00 size=128 callers=0 calls=2
   calls: sub_3fbc80, sub_3fbcf0
*/
void sub_3f9b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9b00ULL || rel >= 0x3f9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9b80 size=96 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9b80ULL || rel >= 0x3f9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9be0 size=96 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f9be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9be0ULL || rel >= 0x3f9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9c40 size=112 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9c40ULL || rel >= 0x3f9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9cb0 size=80 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f9cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9cb0ULL || rel >= 0x3f9d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9d00 size=16 callers=0 calls=0
*/
void sub_3f9d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9d00ULL || rel >= 0x3f9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9d10 size=320 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9d10ULL || rel >= 0x3f9e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9e50 size=16 callers=0 calls=0
*/
void sub_3f9e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9e50ULL || rel >= 0x3f9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9e60 size=16 callers=0 calls=0
*/
void sub_3f9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9e60ULL || rel >= 0x3f9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9e70 size=288 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3f9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9e70ULL || rel >= 0x3f9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9f90 size=16 callers=0 calls=0
*/
void sub_3f9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9f90ULL || rel >= 0x3f9fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003f9fa0 size=96 callers=3 calls=0
*/
void sub_3f9fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3f9fa0ULL || rel >= 0x3fa000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa000 size=16 callers=0 calls=0
*/
void sub_3fa000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa000ULL || rel >= 0x3fa010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa010 size=16 callers=0 calls=0
*/
void sub_3fa010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa010ULL || rel >= 0x3fa020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa020 size=16 callers=0 calls=0
*/
void sub_3fa020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa020ULL || rel >= 0x3fa030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa030 size=16 callers=0 calls=0
*/
void sub_3fa030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa030ULL || rel >= 0x3fa040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa040 size=16 callers=0 calls=0
*/
void sub_3fa040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa040ULL || rel >= 0x3fa050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa050 size=16 callers=0 calls=0
*/
void sub_3fa050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa050ULL || rel >= 0x3fa060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa060 size=16 callers=0 calls=0
*/
void sub_3fa060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa060ULL || rel >= 0x3fa070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa070 size=16 callers=0 calls=0
*/
void sub_3fa070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa070ULL || rel >= 0x3fa080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa080 size=16 callers=0 calls=0
*/
void sub_3fa080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa080ULL || rel >= 0x3fa090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa090 size=16 callers=0 calls=0
*/
void sub_3fa090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa090ULL || rel >= 0x3fa0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa0a0 size=16 callers=0 calls=0
*/
void sub_3fa0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa0a0ULL || rel >= 0x3fa0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa0b0 size=160 callers=0 calls=1
   calls: sub_3fc740
*/
void sub_3fa0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa0b0ULL || rel >= 0x3fa150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa150 size=16 callers=0 calls=0
*/
void sub_3fa150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa150ULL || rel >= 0x3fa160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa160 size=224 callers=0 calls=1
   calls: sub_3ef790
*/
void sub_3fa160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa160ULL || rel >= 0x3fa240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa240 size=128 callers=0 calls=1
   calls: sub_3ef790
*/
void sub_3fa240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa240ULL || rel >= 0x3fa2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa2c0 size=144 callers=0 calls=1
   calls: sub_3ef790
*/
void sub_3fa2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa2c0ULL || rel >= 0x3fa350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa350 size=112 callers=1 calls=1
   calls: sub_3fa3c0
*/
void sub_3fa350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa350ULL || rel >= 0x3fa3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa3c0 size=176 callers=1 calls=0
*/
void sub_3fa3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa3c0ULL || rel >= 0x3fa470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa470 size=64 callers=1 calls=1
   calls: sub_3f0060
*/
void sub_3fa470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa470ULL || rel >= 0x3fa4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa4b0 size=80 callers=0 calls=0
*/
void sub_3fa4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa4b0ULL || rel >= 0x3fa500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa500 size=96 callers=0 calls=1
   calls: sub_3f0470
*/
void sub_3fa500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa500ULL || rel >= 0x3fa560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa560 size=16 callers=1 calls=0
*/
void sub_3fa560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa560ULL || rel >= 0x3fa570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa570 size=16 callers=0 calls=0
*/
void sub_3fa570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa570ULL || rel >= 0x3fa580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa580 size=128 callers=2 calls=1
   calls: sub_3efef0
*/
void sub_3fa580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa580ULL || rel >= 0x3fa600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa600 size=112 callers=0 calls=2
   calls: sub_3f52f0, sub_3f5350
*/
void sub_3fa600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa600ULL || rel >= 0x3fa670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa670 size=96 callers=0 calls=3
   calls: sub_3f0470, sub_3f52f0, sub_3f5350
*/
void sub_3fa670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa670ULL || rel >= 0x3fa6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa6d0 size=48 callers=0 calls=0
*/
void sub_3fa6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa6d0ULL || rel >= 0x3fa700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa700 size=192 callers=0 calls=3
   calls: sub_3f4d00, sub_3f9fa0, sub_3fc740
*/
void sub_3fa700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa700ULL || rel >= 0x3fa7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fa7c0 size=864 callers=1 calls=5
   calls: s_gpu, sub_3ef790, sub_3f14f0, sub_3f49e0, sub_3fd140
   ref: /dev/nvhost
*/
void nvhost(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fa7c0ULL || rel >= 0x3fab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fab20 size=32 callers=0 calls=0
*/
void sub_3fab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fab20ULL || rel >= 0x3fab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fab40 size=208 callers=0 calls=4
   calls: nvhost, sub_3f04c0, sub_3f0530, sub_3f14f0
*/
void sub_3fab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fab40ULL || rel >= 0x3fac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fac10 size=160 callers=0 calls=2
   calls: sub_3f89c0, sub_3f8e50
*/
void sub_3fac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fac10ULL || rel >= 0x3facb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003facb0 size=192 callers=0 calls=1
   calls: sub_3ef790
*/
void sub_3facb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3facb0ULL || rel >= 0x3fad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fad70 size=48 callers=1 calls=0
*/
void sub_3fad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fad70ULL || rel >= 0x3fada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fada0 size=48 callers=0 calls=1
   calls: sub_3ef9d0
*/
void sub_3fada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fada0ULL || rel >= 0x3fadd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fadd0 size=64 callers=1 calls=1
   calls: sub_3f0160
*/
void sub_3fadd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fadd0ULL || rel >= 0x3fae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fae10 size=32 callers=0 calls=0
*/
void sub_3fae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fae10ULL || rel >= 0x3fae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fae30 size=64 callers=0 calls=1
   calls: sub_3f0470
*/
void sub_3fae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fae30ULL || rel >= 0x3fae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fae70 size=16 callers=1 calls=0
*/
void sub_3fae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fae70ULL || rel >= 0x3fae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fae80 size=16 callers=0 calls=0
*/
void sub_3fae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fae80ULL || rel >= 0x3fae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fae90 size=80 callers=2 calls=1
   calls: sub_3f0040
*/
void sub_3fae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fae90ULL || rel >= 0x3faee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003faee0 size=176 callers=0 calls=3
   calls: sub_3f0470, sub_3f7500, sub_3fc740
*/
void sub_3faee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3faee0ULL || rel >= 0x3faf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003faf90 size=176 callers=0 calls=4
   calls: sub_3ef780, sub_3f0470, sub_3f7500, sub_3fc740
*/
void sub_3faf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3faf90ULL || rel >= 0x3fb040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb040 size=160 callers=1 calls=0
*/
void sub_3fb040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb040ULL || rel >= 0x3fb0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb0e0 size=272 callers=1 calls=2
   calls: sub_3f7500, sub_3fc740
*/
void sub_3fb0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb0e0ULL || rel >= 0x3fb1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb1f0 size=128 callers=0 calls=2
   calls: sub_3fadd0, sub_3fae70
*/
void sub_3fb1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb1f0ULL || rel >= 0x3fb270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb270 size=784 callers=0 calls=2
   calls: sub_3f7500, sub_3fc870
*/
void sub_3fb270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb270ULL || rel >= 0x3fb580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb580 size=128 callers=0 calls=2
   calls: sub_3f7500, sub_3fc740
*/
void sub_3fb580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb580ULL || rel >= 0x3fb600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb600 size=144 callers=0 calls=2
   calls: sub_3f7500, sub_3fc740
*/
void sub_3fb600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb600ULL || rel >= 0x3fb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb690 size=128 callers=0 calls=2
   calls: sub_3f7500, sub_3fc740
*/
void sub_3fb690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb690ULL || rel >= 0x3fb710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb710 size=16 callers=0 calls=0
*/
void sub_3fb710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb710ULL || rel >= 0x3fb720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb720 size=192 callers=0 calls=2
   calls: sub_3f7500, sub_3fc740
*/
void sub_3fb720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb720ULL || rel >= 0x3fb7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb7e0 size=192 callers=0 calls=2
   calls: sub_3f7500, sub_3fc740
*/
void sub_3fb7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb7e0ULL || rel >= 0x3fb8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb8a0 size=144 callers=0 calls=2
   calls: sub_3f7500, sub_3fc740
*/
void sub_3fb8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb8a0ULL || rel >= 0x3fb930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb930 size=176 callers=0 calls=2
   calls: sub_3f7500, sub_3fc740
*/
void sub_3fb930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb930ULL || rel >= 0x3fb9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fb9e0 size=144 callers=0 calls=2
   calls: sub_3f7500, sub_3fc740
*/
void sub_3fb9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fb9e0ULL || rel >= 0x3fba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fba70 size=208 callers=0 calls=2
   calls: sub_3f7500, sub_3fc7d0
*/
void sub_3fba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fba70ULL || rel >= 0x3fbb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbb40 size=160 callers=0 calls=2
   calls: sub_3f7500, sub_3fc740
*/
void sub_3fbb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbb40ULL || rel >= 0x3fbbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbbe0 size=160 callers=0 calls=1
   calls: sub_3f7500
*/
void sub_3fbbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbbe0ULL || rel >= 0x3fbc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbc80 size=112 callers=2 calls=2
   calls: sub_3f01b0, sub_3f9320
*/
void sub_3fbc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbc80ULL || rel >= 0x3fbcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbcf0 size=192 callers=2 calls=1
   calls: sub_3f0fd0
*/
void sub_3fbcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbcf0ULL || rel >= 0x3fbdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbdb0 size=96 callers=0 calls=0
*/
void sub_3fbdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbdb0ULL || rel >= 0x3fbe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbe10 size=256 callers=0 calls=3
   calls: sub_3f02e0, sub_3f7460, sub_3fbf10
*/
void sub_3fbe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbe10ULL || rel >= 0x3fbf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fbf10 size=304 callers=1 calls=1
   calls: sub_3f8170
*/
void sub_3fbf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fbf10ULL || rel >= 0x3fc040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc040 size=32 callers=0 calls=0
*/
void sub_3fc040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc040ULL || rel >= 0x3fc060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc060 size=16 callers=0 calls=0
*/
void sub_3fc060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc060ULL || rel >= 0x3fc070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc070 size=16 callers=0 calls=0
*/
void sub_3fc070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc070ULL || rel >= 0x3fc080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc080 size=16 callers=0 calls=0
*/
void sub_3fc080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc080ULL || rel >= 0x3fc090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc090 size=16 callers=0 calls=0
*/
void sub_3fc090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc090ULL || rel >= 0x3fc0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc0a0 size=304 callers=1 calls=0
*/
void sub_3fc0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc0a0ULL || rel >= 0x3fc1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc1d0 size=112 callers=2 calls=0
*/
void sub_3fc1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc1d0ULL || rel >= 0x3fc240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc240 size=288 callers=0 calls=3
   calls: sub_3fc0a0, sub_3fc480, sub_3fc570
*/
void sub_3fc240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc240ULL || rel >= 0x3fc360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc360 size=144 callers=0 calls=1
   calls: sub_3f0fd0
*/
void sub_3fc360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc360ULL || rel >= 0x3fc3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc3f0 size=144 callers=0 calls=2
   calls: sub_3f0200, sub_3f0fd0
*/
void sub_3fc3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc3f0ULL || rel >= 0x3fc480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc480 size=80 callers=1 calls=1
   calls: sub_3f03b0
*/
void sub_3fc480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc480ULL || rel >= 0x3fc4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc4d0 size=64 callers=0 calls=1
   calls: sub_3fc1d0
*/
void sub_3fc4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc4d0ULL || rel >= 0x3fc510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc510 size=16 callers=1 calls=0
*/
void sub_3fc510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc510ULL || rel >= 0x3fc520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc520 size=80 callers=0 calls=2
   calls: sub_3f0470, sub_3fc1d0
*/
void sub_3fc520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc520ULL || rel >= 0x3fc570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc570 size=16 callers=2 calls=0
*/
void sub_3fc570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc570ULL || rel >= 0x3fc580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc580 size=48 callers=0 calls=0
*/
void sub_3fc580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc580ULL || rel >= 0x3fc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc5b0 size=16 callers=0 calls=0
*/
void sub_3fc5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc5b0ULL || rel >= 0x3fc5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc5c0 size=128 callers=0 calls=0
*/
void sub_3fc5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc5c0ULL || rel >= 0x3fc640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc640 size=128 callers=0 calls=0
*/
void sub_3fc640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc640ULL || rel >= 0x3fc6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc6c0 size=128 callers=0 calls=0
*/
void sub_3fc6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc6c0ULL || rel >= 0x3fc740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc740 size=144 callers=55 calls=0
*/
void sub_3fc740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc740ULL || rel >= 0x3fc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc7d0 size=160 callers=1 calls=0
*/
void sub_3fc7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc7d0ULL || rel >= 0x3fc870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc870 size=240 callers=1 calls=0
*/
void sub_3fc870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc870ULL || rel >= 0x3fc960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fc960 size=224 callers=1 calls=0
*/
void sub_3fc960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fc960ULL || rel >= 0x3fca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fca40 size=368 callers=2 calls=0
*/
void sub_3fca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fca40ULL || rel >= 0x3fcbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcbb0 size=176 callers=1 calls=0
*/
void sub_3fcbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcbb0ULL || rel >= 0x3fcc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcc60 size=192 callers=1 calls=0
*/
void sub_3fcc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcc60ULL || rel >= 0x3fcd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcd20 size=288 callers=1 calls=0
*/
void sub_3fcd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcd20ULL || rel >= 0x3fce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fce40 size=176 callers=2 calls=0
*/
void sub_3fce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fce40ULL || rel >= 0x3fcef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fcef0 size=592 callers=1 calls=2
   calls: sub_3ef790, sub_3ef840
   ref: %s-prof-gpu
   ref: %s-dbg-gpu
   ref: %s-tsg-gpu
   ref: nvgpu:%s
   ref: %s-gpu
   ref: %s-as-gpu
   ref: %s-ctrl-gpu
*/
void s_gpu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fcef0ULL || rel >= 0x3fd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd140 size=16 callers=1 calls=0
*/
void sub_3fd140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd140ULL || rel >= 0x3fd150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd150 size=16 callers=8 calls=0
*/
void sub_3fd150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd150ULL || rel >= 0x3fd160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd160 size=16 callers=0 calls=0
*/
void sub_3fd160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd160ULL || rel >= 0x3fd170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd170 size=288 callers=0 calls=3
   calls: sub_3fd7a0, sub_3fe650, sub_400100
   ref: NVWSI_FILL
   ref: NVWSI_DUMP
*/
void NVWSI_FILL(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd170ULL || rel >= 0x3fd290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd290 size=368 callers=0 calls=3
   calls: sub_3fd7a0, sub_3fe650, sub_400100
   ref: android
   ref: simpledisp
   ref: NV_WINSYS
*/
void simpledisp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd290ULL || rel >= 0x3fd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd400 size=48 callers=0 calls=0
*/
void sub_3fd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd400ULL || rel >= 0x3fd430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd430 size=48 callers=0 calls=0
*/
void sub_3fd430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd430ULL || rel >= 0x3fd460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd460 size=80 callers=0 calls=0
*/
void sub_3fd460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd460ULL || rel >= 0x3fd4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd4b0 size=16 callers=0 calls=0
*/
void sub_3fd4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd4b0ULL || rel >= 0x3fd4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd4c0 size=64 callers=0 calls=0
*/
void sub_3fd4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd4c0ULL || rel >= 0x3fd500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd500 size=304 callers=0 calls=1
   calls: sub_3fdf20
*/
void sub_3fd500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd500ULL || rel >= 0x3fd630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd630 size=256 callers=0 calls=1
   calls: sub_3fe3e0
*/
void sub_3fd630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd630ULL || rel >= 0x3fd730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd730 size=32 callers=0 calls=0
*/
void sub_3fd730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd730ULL || rel >= 0x3fd750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd750 size=16 callers=0 calls=0
*/
void sub_3fd750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd750ULL || rel >= 0x3fd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd760 size=16 callers=3 calls=0
*/
void sub_3fd760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd760ULL || rel >= 0x3fd770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd770 size=16 callers=3 calls=0
*/
void sub_3fd770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd770ULL || rel >= 0x3fd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd780 size=32 callers=1 calls=0
*/
void sub_3fd780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd780ULL || rel >= 0x3fd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd7a0 size=16 callers=2 calls=0
*/
void sub_3fd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd7a0ULL || rel >= 0x3fd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd7b0 size=32 callers=0 calls=0
*/
void sub_3fd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd7b0ULL || rel >= 0x3fd7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd7d0 size=32 callers=0 calls=0
*/
void sub_3fd7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd7d0ULL || rel >= 0x3fd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd7f0 size=32 callers=0 calls=0
*/
void sub_3fd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd7f0ULL || rel >= 0x3fd810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd810 size=16 callers=0 calls=0
*/
void sub_3fd810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd810ULL || rel >= 0x3fd820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd820 size=16 callers=0 calls=0
*/
void sub_3fd820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd820ULL || rel >= 0x3fd830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd830 size=240 callers=0 calls=0
*/
void sub_3fd830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd830ULL || rel >= 0x3fd920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fd920 size=448 callers=0 calls=1
   calls: sub_3fd150
*/
void sub_3fd920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fd920ULL || rel >= 0x3fdae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdae0 size=16 callers=0 calls=0
*/
void sub_3fdae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdae0ULL || rel >= 0x3fdaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdaf0 size=16 callers=0 calls=0
*/
void sub_3fdaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdaf0ULL || rel >= 0x3fdb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdb00 size=16 callers=0 calls=0
*/
void sub_3fdb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdb00ULL || rel >= 0x3fdb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdb10 size=160 callers=0 calls=0
*/
void sub_3fdb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdb10ULL || rel >= 0x3fdbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdbb0 size=16 callers=0 calls=0
*/
void sub_3fdbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdbb0ULL || rel >= 0x3fdbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdbc0 size=464 callers=0 calls=1
   calls: sub_3fd150
*/
void sub_3fdbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdbc0ULL || rel >= 0x3fdd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdd90 size=96 callers=0 calls=0
*/
void sub_3fdd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdd90ULL || rel >= 0x3fddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fddf0 size=144 callers=0 calls=0
*/
void sub_3fddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fddf0ULL || rel >= 0x3fde80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fde80 size=16 callers=0 calls=0
*/
void sub_3fde80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fde80ULL || rel >= 0x3fde90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fde90 size=16 callers=0 calls=0
*/
void sub_3fde90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fde90ULL || rel >= 0x3fdea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdea0 size=16 callers=0 calls=0
*/
void sub_3fdea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdea0ULL || rel >= 0x3fdeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdeb0 size=64 callers=0 calls=0
*/
void sub_3fdeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdeb0ULL || rel >= 0x3fdef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdef0 size=16 callers=0 calls=0
*/
void sub_3fdef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdef0ULL || rel >= 0x3fdf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdf00 size=16 callers=0 calls=0
*/
void sub_3fdf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdf00ULL || rel >= 0x3fdf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdf10 size=16 callers=0 calls=0
*/
void sub_3fdf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdf10ULL || rel >= 0x3fdf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fdf20 size=448 callers=1 calls=0
*/
void sub_3fdf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fdf20ULL || rel >= 0x3fe0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe0e0 size=64 callers=0 calls=0
*/
void sub_3fe0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe0e0ULL || rel >= 0x3fe120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe120 size=416 callers=0 calls=0
*/
void sub_3fe120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe120ULL || rel >= 0x3fe2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe2c0 size=16 callers=0 calls=0
*/
void sub_3fe2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe2c0ULL || rel >= 0x3fe2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe2d0 size=16 callers=0 calls=0
*/
void sub_3fe2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe2d0ULL || rel >= 0x3fe2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe2e0 size=16 callers=0 calls=0
*/
void sub_3fe2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe2e0ULL || rel >= 0x3fe2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe2f0 size=16 callers=0 calls=0
*/
void sub_3fe2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe2f0ULL || rel >= 0x3fe300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe300 size=16 callers=0 calls=0
*/
void sub_3fe300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe300ULL || rel >= 0x3fe310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe310 size=16 callers=0 calls=0
*/
void sub_3fe310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe310ULL || rel >= 0x3fe320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe320 size=16 callers=0 calls=0
*/
void sub_3fe320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe320ULL || rel >= 0x3fe330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe330 size=16 callers=0 calls=0
*/
void sub_3fe330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe330ULL || rel >= 0x3fe340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe340 size=16 callers=0 calls=0
*/
void sub_3fe340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe340ULL || rel >= 0x3fe350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe350 size=16 callers=0 calls=0
*/
void sub_3fe350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe350ULL || rel >= 0x3fe360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe360 size=16 callers=0 calls=0
*/
void sub_3fe360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe360ULL || rel >= 0x3fe370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe370 size=16 callers=0 calls=0
*/
void sub_3fe370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe370ULL || rel >= 0x3fe380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe380 size=16 callers=0 calls=0
*/
void sub_3fe380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe380ULL || rel >= 0x3fe390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe390 size=16 callers=0 calls=0
*/
void sub_3fe390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe390ULL || rel >= 0x3fe3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe3a0 size=16 callers=0 calls=0
*/
void sub_3fe3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe3a0ULL || rel >= 0x3fe3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe3b0 size=16 callers=0 calls=0
*/
void sub_3fe3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe3b0ULL || rel >= 0x3fe3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe3c0 size=16 callers=0 calls=0
*/
void sub_3fe3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe3c0ULL || rel >= 0x3fe3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe3d0 size=16 callers=0 calls=0
*/
void sub_3fe3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe3d0ULL || rel >= 0x3fe3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe3e0 size=320 callers=1 calls=0
*/
void sub_3fe3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe3e0ULL || rel >= 0x3fe520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe520 size=64 callers=0 calls=0
*/
void sub_3fe520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe520ULL || rel >= 0x3fe560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe560 size=16 callers=0 calls=0
*/
void sub_3fe560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe560ULL || rel >= 0x3fe570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe570 size=16 callers=0 calls=0
*/
void sub_3fe570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe570ULL || rel >= 0x3fe580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe580 size=16 callers=0 calls=0
*/
void sub_3fe580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe580ULL || rel >= 0x3fe590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe590 size=16 callers=0 calls=0
*/
void sub_3fe590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe590ULL || rel >= 0x3fe5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe5a0 size=16 callers=0 calls=0
*/
void sub_3fe5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe5a0ULL || rel >= 0x3fe5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe5b0 size=16 callers=0 calls=0
*/
void sub_3fe5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe5b0ULL || rel >= 0x3fe5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe5c0 size=144 callers=0 calls=0
   ref: nvwsi/dump%05u.raw
*/
void dump_05u(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe5c0ULL || rel >= 0x3fe650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe650 size=16 callers=2 calls=0
*/
void sub_3fe650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe650ULL || rel >= 0x3fe660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe660 size=16 callers=0 calls=0
*/
void sub_3fe660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe660ULL || rel >= 0x3fe670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe670 size=32 callers=0 calls=0
*/
void sub_3fe670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe670ULL || rel >= 0x3fe690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe690 size=64 callers=0 calls=0
*/
void sub_3fe690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe690ULL || rel >= 0x3fe6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe6d0 size=176 callers=0 calls=0
   ref: NVIDIA
*/
void NVIDIA(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe6d0ULL || rel >= 0x3fe780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe780 size=48 callers=0 calls=0
*/
void sub_3fe780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe780ULL || rel >= 0x3fe7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fe7b0 size=672 callers=0 calls=0
*/
void sub_3fe7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fe7b0ULL || rel >= 0x3fea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fea50 size=352 callers=0 calls=0
*/
void sub_3fea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fea50ULL || rel >= 0x3febb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003febb0 size=96 callers=0 calls=0
*/
void sub_3febb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3febb0ULL || rel >= 0x3fec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fec10 size=128 callers=0 calls=0
   ref: nvn_no_vsync_capability
*/
void nvn_no_vsync_capability_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fec10ULL || rel >= 0x3fec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fec90 size=16 callers=0 calls=0
*/
void sub_3fec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fec90ULL || rel >= 0x3feca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003feca0 size=48 callers=0 calls=0
*/
void sub_3feca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3feca0ULL || rel >= 0x3fecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fecd0 size=560 callers=0 calls=0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fecd0ULL || rel >= 0x3fef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fef00 size=16 callers=0 calls=0
*/
void sub_3fef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fef00ULL || rel >= 0x3fef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fef10 size=16 callers=0 calls=0
*/
void sub_3fef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fef10ULL || rel >= 0x3fef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003fef20 size=1968 callers=0 calls=4
   calls: sub_3fd150, sub_3fd760, sub_3fd770, sub_3ffae0
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
   ref: nvwsi-merge-%d-%p
*/
void unnamed_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3fef20ULL || rel >= 0x3ff6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff6d0 size=512 callers=0 calls=2
   calls: sub_3fd760, sub_3fd770
   ref: nvwsi-post-%d-%p
   ref: <%d:%s>
   ref: <%d:UNKNOWN>
*/
void unnamed_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff6d0ULL || rel >= 0x3ff8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff8d0 size=80 callers=0 calls=0
*/
void sub_3ff8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff8d0ULL || rel >= 0x3ff920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff920 size=160 callers=0 calls=1
   calls: sub_3fd760
*/
void sub_3ff920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff920ULL || rel >= 0x3ff9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff9c0 size=16 callers=0 calls=0
*/
void sub_3ff9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff9c0ULL || rel >= 0x3ff9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ff9d0 size=96 callers=0 calls=0
*/
void sub_3ff9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ff9d0ULL || rel >= 0x3ffa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffa30 size=32 callers=0 calls=0
*/
void sub_3ffa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffa30ULL || rel >= 0x3ffa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffa50 size=48 callers=0 calls=0
*/
void sub_3ffa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffa50ULL || rel >= 0x3ffa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffa80 size=16 callers=0 calls=0
*/
void sub_3ffa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffa80ULL || rel >= 0x3ffa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ffa90 size=80 callers=0 calls=0
*/
void sub_3ffa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ffa90ULL || rel >= 0x3ffae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

