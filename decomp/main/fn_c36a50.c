/* main functions 00c36a50..00c52600 (97 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00c36a50 size=4368 callers=0 calls=21
   calls: boxname, sub_135a1a0, sub_135a3c0, sub_136b690, sub_137fa40, sub_1c0, sub_5cfaf0, sub_5cff50, sub_5e6770, sub_5e7a30, sub_c37b60, sub_c385e0
   ... +9 more
   ref: common/common_text.dat
   ref: a_t0101_i0101
*/
void a_t0101_i0101(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36a50ULL || rel >= 0xc37b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c37b60 size=528 callers=3 calls=7
   calls: sub_136b690, sub_137fa40, sub_137faa0, sub_c37d80, sub_e3ac30, sub_e8d3f0, sub_e8e4b0
*/
void sub_c37b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc37b60ULL || rel >= 0xc37d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c37d70 size=16 callers=0 calls=0
*/
void sub_c37d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc37d70ULL || rel >= 0xc37d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c37d80 size=432 callers=2 calls=2
   calls: sub_135a1a0, sub_135a2d0
*/
void sub_c37d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc37d80ULL || rel >= 0xc37f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c37f30 size=256 callers=0 calls=0
*/
void sub_c37f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc37f30ULL || rel >= 0xc38030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38030 size=16 callers=0 calls=0
*/
void sub_c38030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38030ULL || rel >= 0xc38040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38040 size=16 callers=0 calls=0
*/
void sub_c38040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38040ULL || rel >= 0xc38050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38050 size=16 callers=0 calls=0
*/
void sub_c38050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38050ULL || rel >= 0xc38060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38060 size=16 callers=0 calls=0
*/
void sub_c38060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38060ULL || rel >= 0xc38070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38070 size=16 callers=0 calls=0
*/
void sub_c38070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38070ULL || rel >= 0xc38080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38080 size=16 callers=0 calls=0
*/
void sub_c38080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38080ULL || rel >= 0xc38090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38090 size=16 callers=0 calls=0
*/
void sub_c38090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38090ULL || rel >= 0xc380a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c380a0 size=16 callers=0 calls=0
*/
void sub_c380a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc380a0ULL || rel >= 0xc380b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c380b0 size=16 callers=0 calls=0
*/
void sub_c380b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc380b0ULL || rel >= 0xc380c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c380c0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_c380c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc380c0ULL || rel >= 0xc38110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38110 size=96 callers=0 calls=0
*/
void sub_c38110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38110ULL || rel >= 0xc38170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38170 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_c38170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38170ULL || rel >= 0xc381c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c381c0 size=96 callers=0 calls=0
*/
void sub_c381c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc381c0ULL || rel >= 0xc38220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38220 size=304 callers=0 calls=0
*/
void sub_c38220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38220ULL || rel >= 0xc38350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38350 size=352 callers=105 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010
*/
void sub_c38350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38350ULL || rel >= 0xc384b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c384b0 size=256 callers=2 calls=0
*/
void sub_c384b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc384b0ULL || rel >= 0xc385b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c385b0 size=16 callers=0 calls=0
*/
void sub_c385b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc385b0ULL || rel >= 0xc385c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c385c0 size=16 callers=0 calls=0
*/
void sub_c385c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc385c0ULL || rel >= 0xc385d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c385d0 size=16 callers=0 calls=0
*/
void sub_c385d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc385d0ULL || rel >= 0xc385e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c385e0 size=272 callers=2 calls=3
   calls: sub_672c10, sub_c386f0, sub_c38850
*/
void sub_c385e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc385e0ULL || rel >= 0xc386f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c386f0 size=352 callers=60 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010
*/
void sub_c386f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc386f0ULL || rel >= 0xc38850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38850 size=480 callers=1 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_c38a30, sub_e7b660
*/
void sub_c38850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38850ULL || rel >= 0xc38a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38a30 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_c38b10, sub_e7b5e0
*/
void sub_c38a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38a30ULL || rel >= 0xc38b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38b10 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c38b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38b10ULL || rel >= 0xc38c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38c00 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_c38c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38c00ULL || rel >= 0xc38c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38c80 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c38c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38c80ULL || rel >= 0xc38df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38df0 size=96 callers=0 calls=1
   calls: sub_c39040
*/
void sub_c38df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38df0ULL || rel >= 0xc38e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38e50 size=16 callers=0 calls=0
*/
void sub_c38e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38e50ULL || rel >= 0xc38e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38e60 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c38e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38e60ULL || rel >= 0xc38f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38f00 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c38f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38f00ULL || rel >= 0xc38fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38fc0 size=32 callers=0 calls=0
*/
void sub_c38fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38fc0ULL || rel >= 0xc38fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38fe0 size=16 callers=0 calls=0
*/
void sub_c38fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38fe0ULL || rel >= 0xc38ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c38ff0 size=16 callers=0 calls=0
*/
void sub_c38ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc38ff0ULL || rel >= 0xc39000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39000 size=16 callers=0 calls=0
*/
void sub_c39000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39000ULL || rel >= 0xc39010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39010 size=16 callers=0 calls=0
*/
void sub_c39010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39010ULL || rel >= 0xc39020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39020 size=32 callers=0 calls=0
*/
void sub_c39020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39020ULL || rel >= 0xc39040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39040 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_c39040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39040ULL || rel >= 0xc39120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39120 size=16 callers=0 calls=0
*/
void sub_c39120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39120ULL || rel >= 0xc39130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39130 size=16 callers=0 calls=0
*/
void sub_c39130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39130ULL || rel >= 0xc39140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39140 size=16 callers=0 calls=0
*/
void sub_c39140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39140ULL || rel >= 0xc39150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39150 size=32 callers=0 calls=0
*/
void sub_c39150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39150ULL || rel >= 0xc39170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39170 size=272 callers=4 calls=3
   calls: sub_672c10, sub_c386f0, sub_c39280
*/
void sub_c39170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39170ULL || rel >= 0xc39280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39280 size=272 callers=1 calls=2
   calls: sub_c39390, sub_e7b660
*/
void sub_c39280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39280ULL || rel >= 0xc39390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39390 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_c39470, sub_e7b5e0
*/
void sub_c39390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39390ULL || rel >= 0xc39470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39470 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c39470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39470ULL || rel >= 0xc39560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39560 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_c39560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39560ULL || rel >= 0xc395e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c395e0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c395e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc395e0ULL || rel >= 0xc39750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39750 size=96 callers=0 calls=1
   calls: sub_c39970
*/
void sub_c39750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39750ULL || rel >= 0xc397b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c397b0 size=16 callers=0 calls=0
*/
void sub_c397b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc397b0ULL || rel >= 0xc397c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c397c0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c397c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc397c0ULL || rel >= 0xc39860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39860 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c39860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39860ULL || rel >= 0xc39920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39920 size=16 callers=0 calls=0
*/
void sub_c39920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39920ULL || rel >= 0xc39930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39930 size=16 callers=0 calls=0
*/
void sub_c39930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39930ULL || rel >= 0xc39940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39940 size=16 callers=0 calls=0
*/
void sub_c39940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39940ULL || rel >= 0xc39950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39950 size=32 callers=0 calls=0
*/
void sub_c39950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39950ULL || rel >= 0xc39970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39970 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_c39970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39970ULL || rel >= 0xc39a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39a50 size=272 callers=4 calls=3
   calls: sub_672c10, sub_c386f0, sub_c39b60
*/
void sub_c39a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39a50ULL || rel >= 0xc39b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39b60 size=224 callers=1 calls=1
   calls: sub_143e0a0
*/
void sub_c39b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39b60ULL || rel >= 0xc39c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39c40 size=304 callers=1037 calls=0
*/
void sub_c39c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39c40ULL || rel >= 0xc39d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39d70 size=400 callers=3 calls=3
   calls: sub_133d350, sub_672c10, sub_c386f0
*/
void sub_c39d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39d70ULL || rel >= 0xc39f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c39f00 size=272 callers=6 calls=3
   calls: sub_672c10, sub_c386f0, sub_c3a010
*/
void sub_c39f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc39f00ULL || rel >= 0xc3a010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a010 size=224 callers=1 calls=2
   calls: sub_c3a0f0, sub_e7b660
*/
void sub_c3a010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a010ULL || rel >= 0xc3a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a0f0 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_c3a1d0, sub_e7b5e0
*/
void sub_c3a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a0f0ULL || rel >= 0xc3a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a1d0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c3a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a1d0ULL || rel >= 0xc3a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a2c0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_c3a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a2c0ULL || rel >= 0xc3a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a340 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c3a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a340ULL || rel >= 0xc3a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a4b0 size=96 callers=0 calls=1
   calls: sub_c3a6d0
*/
void sub_c3a4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a4b0ULL || rel >= 0xc3a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a510 size=16 callers=0 calls=0
*/
void sub_c3a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a510ULL || rel >= 0xc3a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a520 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c3a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a520ULL || rel >= 0xc3a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a5c0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c3a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a5c0ULL || rel >= 0xc3a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a680 size=16 callers=0 calls=0
*/
void sub_c3a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a680ULL || rel >= 0xc3a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a690 size=16 callers=0 calls=0
*/
void sub_c3a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a690ULL || rel >= 0xc3a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a6a0 size=16 callers=0 calls=0
*/
void sub_c3a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a6a0ULL || rel >= 0xc3a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a6b0 size=32 callers=0 calls=0
*/
void sub_c3a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a6b0ULL || rel >= 0xc3a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a6d0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_c3a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a6d0ULL || rel >= 0xc3a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a7b0 size=240 callers=4 calls=1
   calls: sub_c39c40
*/
void sub_c3a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a7b0ULL || rel >= 0xc3a8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a8a0 size=128 callers=0 calls=0
*/
void sub_c3a8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a8a0ULL || rel >= 0xc3a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3a920 size=512 callers=1 calls=2
   calls: sub_c3ab20, sub_c3b730
*/
void sub_c3a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3a920ULL || rel >= 0xc3ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ab20 size=288 callers=2 calls=3
   calls: sub_c38350, sub_c3b860, sub_e9da70
*/
void sub_c3ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ab20ULL || rel >= 0xc3ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ac40 size=16 callers=0 calls=0
*/
void sub_c3ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ac40ULL || rel >= 0xc3ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ac50 size=16 callers=0 calls=0
*/
void sub_c3ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ac50ULL || rel >= 0xc3ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ac60 size=1360 callers=0 calls=16
   calls: sub_10466c0, sub_1046f20, sub_1361f40, sub_1362010, sub_1362090, sub_1377780, sub_1377d60, sub_c3b1b0, sub_c3b970, sub_c443f0, sub_c60e50, sub_c60ed0
   ... +4 more
*/
void sub_c3ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ac60ULL || rel >= 0xc3b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b1b0 size=304 callers=2 calls=0
*/
void sub_c3b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b1b0ULL || rel >= 0xc3b2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b2e0 size=16 callers=0 calls=0
*/
void sub_c3b2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b2e0ULL || rel >= 0xc3b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b2f0 size=96 callers=0 calls=1
   calls: poke_memory
*/
void sub_c3b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b2f0ULL || rel >= 0xc3b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b350 size=112 callers=0 calls=1
   calls: sub_1400210
*/
void sub_c3b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b350ULL || rel >= 0xc3b3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b3c0 size=16 callers=0 calls=0
*/
void sub_c3b3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b3c0ULL || rel >= 0xc3b3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b3d0 size=16 callers=0 calls=0
*/
void sub_c3b3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b3d0ULL || rel >= 0xc3b3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b3e0 size=128 callers=0 calls=1
   calls: sub_e8d3f0
*/
void sub_c3b3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b3e0ULL || rel >= 0xc3b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b460 size=112 callers=0 calls=0
*/
void sub_c3b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b460ULL || rel >= 0xc3b4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b4d0 size=112 callers=0 calls=0
*/
void sub_c3b4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b4d0ULL || rel >= 0xc3b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b540 size=16 callers=0 calls=0
*/
void sub_c3b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b540ULL || rel >= 0xc3b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b550 size=112 callers=0 calls=0
*/
void sub_c3b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b550ULL || rel >= 0xc3b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b5c0 size=112 callers=0 calls=0
*/
void sub_c3b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b5c0ULL || rel >= 0xc3b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b630 size=16 callers=0 calls=0
*/
void sub_c3b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b630ULL || rel >= 0xc3b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b640 size=16 callers=0 calls=0
*/
void sub_c3b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b640ULL || rel >= 0xc3b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b650 size=112 callers=0 calls=0
*/
void sub_c3b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b650ULL || rel >= 0xc3b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b6c0 size=112 callers=0 calls=0
*/
void sub_c3b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b6c0ULL || rel >= 0xc3b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b730 size=304 callers=1 calls=0
*/
void sub_c3b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b730ULL || rel >= 0xc3b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b860 size=272 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_c3b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b860ULL || rel >= 0xc3b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3b970 size=304 callers=18 calls=0
*/
void sub_c3b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b970ULL || rel >= 0xc3baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3baa0 size=128 callers=0 calls=0
*/
void sub_c3baa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3baa0ULL || rel >= 0xc3bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3bb20 size=144 callers=1 calls=1
   calls: sub_c3bbb0
*/
void sub_c3bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3bb20ULL || rel >= 0xc3bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3bbb0 size=288 callers=2 calls=3
   calls: sub_c38350, sub_c3d260, sub_e9db40
*/
void sub_c3bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3bbb0ULL || rel >= 0xc3bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3bcd0 size=16 callers=0 calls=0
*/
void sub_c3bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3bcd0ULL || rel >= 0xc3bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3bce0 size=1472 callers=0 calls=5
   calls: sub_102c890, sub_13517a0, sub_14e0350, sub_76f550, sub_c3d480
*/
void sub_c3bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3bce0ULL || rel >= 0xc3c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3c2a0 size=112 callers=0 calls=1
   calls: sub_102ced0
*/
void sub_c3c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3c2a0ULL || rel >= 0xc3c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3c310 size=2224 callers=0 calls=14
   calls: sub_102cea0, sub_102ceb0, sub_102d1c0, sub_104dbb0, sub_104fb70, sub_1050060, sub_134f3a0, sub_1354890, sub_144f2d0, sub_76f6c0, sub_a75c00, sub_a75e20
   ... +2 more
*/
void sub_c3c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3c310ULL || rel >= 0xc3cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3cbc0 size=560 callers=0 calls=2
   calls: sub_c3cf60, sub_e9d210
*/
void sub_c3cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3cbc0ULL || rel >= 0xc3cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3cdf0 size=16 callers=0 calls=0
*/
void sub_c3cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3cdf0ULL || rel >= 0xc3ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ce00 size=16 callers=0 calls=0
*/
void sub_c3ce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ce00ULL || rel >= 0xc3ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ce10 size=16 callers=0 calls=0
*/
void sub_c3ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ce10ULL || rel >= 0xc3ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ce20 size=16 callers=0 calls=0
*/
void sub_c3ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ce20ULL || rel >= 0xc3ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ce30 size=16 callers=0 calls=0
*/
void sub_c3ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ce30ULL || rel >= 0xc3ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ce40 size=16 callers=0 calls=0
*/
void sub_c3ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ce40ULL || rel >= 0xc3ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ce50 size=16 callers=0 calls=0
*/
void sub_c3ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ce50ULL || rel >= 0xc3ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ce60 size=16 callers=0 calls=0
*/
void sub_c3ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ce60ULL || rel >= 0xc3ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ce70 size=80 callers=0 calls=0
*/
void sub_c3ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ce70ULL || rel >= 0xc3cec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3cec0 size=160 callers=0 calls=0
*/
void sub_c3cec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3cec0ULL || rel >= 0xc3cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3cf60 size=464 callers=1 calls=0
*/
void sub_c3cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3cf60ULL || rel >= 0xc3d130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d130 size=304 callers=0 calls=0
*/
void sub_c3d130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d130ULL || rel >= 0xc3d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d260 size=544 callers=1 calls=3
   calls: sub_144f170, sub_a74910, sub_e9d130
*/
void sub_c3d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d260ULL || rel >= 0xc3d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d480 size=224 callers=1 calls=1
   calls: sub_102c5b0
*/
void sub_c3d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d480ULL || rel >= 0xc3d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d560 size=208 callers=0 calls=1
   calls: sub_76f6c0
*/
void sub_c3d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d560ULL || rel >= 0xc3d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d630 size=16 callers=0 calls=0
*/
void sub_c3d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d630ULL || rel >= 0xc3d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d640 size=16 callers=0 calls=0
*/
void sub_c3d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d640ULL || rel >= 0xc3d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d650 size=16 callers=0 calls=0
*/
void sub_c3d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d650ULL || rel >= 0xc3d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d660 size=128 callers=0 calls=0
*/
void sub_c3d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d660ULL || rel >= 0xc3d6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d6e0 size=240 callers=6 calls=2
   calls: sub_c3d7d0, sub_c3e6e0
*/
void sub_c3d6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d6e0ULL || rel >= 0xc3d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d7d0 size=288 callers=1 calls=3
   calls: sub_c38350, sub_c3e810, sub_e9db40
*/
void sub_c3d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d7d0ULL || rel >= 0xc3d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d8f0 size=160 callers=0 calls=0
*/
void sub_c3d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d8f0ULL || rel >= 0xc3d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3d990 size=160 callers=0 calls=0
*/
void sub_c3d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3d990ULL || rel >= 0xc3da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3da30 size=160 callers=0 calls=0
*/
void sub_c3da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3da30ULL || rel >= 0xc3dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3dad0 size=160 callers=0 calls=0
*/
void sub_c3dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3dad0ULL || rel >= 0xc3db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3db70 size=160 callers=0 calls=0
*/
void sub_c3db70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3db70ULL || rel >= 0xc3dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3dc10 size=160 callers=0 calls=0
*/
void sub_c3dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3dc10ULL || rel >= 0xc3dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3dcb0 size=16 callers=0 calls=0
*/
void sub_c3dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3dcb0ULL || rel >= 0xc3dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3dcc0 size=352 callers=0 calls=2
   calls: sub_14e0550, sub_762930
*/
void sub_c3dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3dcc0ULL || rel >= 0xc3de20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3de20 size=240 callers=0 calls=0
*/
void sub_c3de20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3de20ULL || rel >= 0xc3df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3df10 size=1680 callers=0 calls=10
   calls: sub_14e0350, sub_14e0450, sub_14e0550, sub_1539b10, sub_794330, sub_c39c40, sub_c3e5a0, sub_c3f160, sub_c3fab0, sub_c41280
   ref: Resume_Win_Music
*/
void Resume_Win_Music(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3df10ULL || rel >= 0xc3e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3e5a0 size=272 callers=1 calls=3
   calls: sub_672c10, sub_c386f0, sub_c3e920
*/
void sub_c3e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3e5a0ULL || rel >= 0xc3e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3e6b0 size=16 callers=0 calls=0
*/
void sub_c3e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3e6b0ULL || rel >= 0xc3e6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3e6c0 size=16 callers=0 calls=0
*/
void sub_c3e6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3e6c0ULL || rel >= 0xc3e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3e6d0 size=16 callers=0 calls=0
*/
void sub_c3e6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3e6d0ULL || rel >= 0xc3e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3e6e0 size=304 callers=1 calls=0
*/
void sub_c3e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3e6e0ULL || rel >= 0xc3e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3e810 size=272 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_c3e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3e810ULL || rel >= 0xc3e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3e920 size=240 callers=1 calls=2
   calls: sub_c3ea10, sub_e7b660
*/
void sub_c3e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3e920ULL || rel >= 0xc3ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ea10 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_c3eaf0, sub_e7b5e0
*/
void sub_c3ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ea10ULL || rel >= 0xc3eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3eaf0 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c3eaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3eaf0ULL || rel >= 0xc3ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ebf0 size=160 callers=0 calls=1
   calls: sub_3340
*/
void sub_c3ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ebf0ULL || rel >= 0xc3ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ec90 size=400 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c3ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ec90ULL || rel >= 0xc3ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ee20 size=96 callers=0 calls=1
   calls: sub_c3f060
*/
void sub_c3ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ee20ULL || rel >= 0xc3ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ee80 size=16 callers=0 calls=0
*/
void sub_c3ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ee80ULL || rel >= 0xc3ee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ee90 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c3ee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ee90ULL || rel >= 0xc3ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3ef40 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c3ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ef40ULL || rel >= 0xc3f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f010 size=16 callers=0 calls=0
*/
void sub_c3f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f010ULL || rel >= 0xc3f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f020 size=16 callers=0 calls=0
*/
void sub_c3f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f020ULL || rel >= 0xc3f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f030 size=16 callers=0 calls=0
*/
void sub_c3f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f030ULL || rel >= 0xc3f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f040 size=32 callers=0 calls=0
*/
void sub_c3f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f040ULL || rel >= 0xc3f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f060 size=256 callers=2 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_c3f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f060ULL || rel >= 0xc3f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f160 size=272 callers=7 calls=3
   calls: sub_672c10, sub_c386f0, sub_c3f270
*/
void sub_c3f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f160ULL || rel >= 0xc3f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f270 size=240 callers=2 calls=2
   calls: sub_c3f360, sub_e7b660
*/
void sub_c3f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f270ULL || rel >= 0xc3f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f360 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_c3f440, sub_e7b5e0
*/
void sub_c3f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f360ULL || rel >= 0xc3f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f440 size=256 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c3f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f440ULL || rel >= 0xc3f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f540 size=160 callers=0 calls=1
   calls: sub_3340
*/
void sub_c3f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f540ULL || rel >= 0xc3f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f5e0 size=400 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c3f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f5e0ULL || rel >= 0xc3f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f770 size=96 callers=0 calls=1
   calls: sub_c3f9b0
*/
void sub_c3f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f770ULL || rel >= 0xc3f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f7d0 size=16 callers=0 calls=0
*/
void sub_c3f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f7d0ULL || rel >= 0xc3f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f7e0 size=176 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c3f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f7e0ULL || rel >= 0xc3f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f890 size=208 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c3f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f890ULL || rel >= 0xc3f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f960 size=16 callers=0 calls=0
*/
void sub_c3f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f960ULL || rel >= 0xc3f970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f970 size=16 callers=0 calls=0
*/
void sub_c3f970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f970ULL || rel >= 0xc3f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f980 size=16 callers=0 calls=0
*/
void sub_c3f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f980ULL || rel >= 0xc3f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f990 size=32 callers=0 calls=0
*/
void sub_c3f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f990ULL || rel >= 0xc3f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3f9b0 size=256 callers=2 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_c3f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f9b0ULL || rel >= 0xc3fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3fab0 size=240 callers=5 calls=1
   calls: sub_c39c40
*/
void sub_c3fab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3fab0ULL || rel >= 0xc3fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3fba0 size=128 callers=0 calls=0
*/
void sub_c3fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3fba0ULL || rel >= 0xc3fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3fc20 size=288 callers=0 calls=0
*/
void sub_c3fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3fc20ULL || rel >= 0xc3fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3fd40 size=16 callers=0 calls=0
*/
void sub_c3fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3fd40ULL || rel >= 0xc3fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3fd50 size=16 callers=0 calls=0
*/
void sub_c3fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3fd50ULL || rel >= 0xc3fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3fd60 size=16 callers=0 calls=0
*/
void sub_c3fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3fd60ULL || rel >= 0xc3fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3fd70 size=16 callers=0 calls=0
*/
void sub_c3fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3fd70ULL || rel >= 0xc3fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3fd80 size=16 callers=0 calls=0
*/
void sub_c3fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3fd80ULL || rel >= 0xc3fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3fd90 size=16 callers=5 calls=0
*/
void sub_c3fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3fd90ULL || rel >= 0xc3fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3fda0 size=16 callers=2 calls=0
*/
void sub_c3fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3fda0ULL || rel >= 0xc3fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c3fdb0 size=1152 callers=1 calls=3
   calls: sub_1310f00, sub_67b990, sub_762950
*/
void sub_c3fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3fdb0ULL || rel >= 0xc40230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c40230 size=32 callers=6 calls=0
*/
void sub_c40230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc40230ULL || rel >= 0xc40250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c40250 size=32 callers=7 calls=0
*/
void sub_c40250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc40250ULL || rel >= 0xc40270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c40270 size=32 callers=2 calls=0
*/
void sub_c40270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc40270ULL || rel >= 0xc40290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c40290 size=32 callers=3 calls=0
*/
void sub_c40290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc40290ULL || rel >= 0xc402b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c402b0 size=1952 callers=1 calls=11
   calls: sub_12f9ef0, sub_1311c60, sub_1313580, sub_1313e50, sub_13a4f20, sub_5cfaf0, sub_67d450, sub_763000, sub_767f90, sub_c1b030, sub_d0c0
   ref: sd9110_evolution
*/
void sd9110_evolution(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc402b0ULL || rel >= 0xc40a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c40a50 size=1392 callers=3 calls=6
   calls: sub_12f9ef0, sub_13a4f20, sub_5cfaf0, sub_763000, sub_c1b030, sub_d0c0
   ref: sd9111_evolution_after
*/
void sd9111_evolution_after(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc40a50ULL || rel >= 0xc40fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c40fc0 size=704 callers=1 calls=8
   calls: sub_1351510, sub_1367510, sub_1367890, sub_1379700, sub_762930, sub_76f700, sub_770910, sub_7847d0
*/
void sub_c40fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc40fc0ULL || rel >= 0xc41280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41280 size=16 callers=3 calls=0
*/
void sub_c41280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41280ULL || rel >= 0xc41290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41290 size=800 callers=0 calls=11
   calls: sub_78f150, sub_78f240, sub_794e80, sub_79ab20, sub_c3f060, sub_c3fdb0, sub_c415b0, sub_c42080, sub_e7c0f0, sub_e7e890, sub_ee78c0
   ref: SystemMessageView
   ref: common/shinka_demo.dat
*/
void SystemMessageView_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41290ULL || rel >= 0xc415b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c415b0 size=464 callers=1 calls=3
   calls: sub_c42080, sub_e7c160, sub_e7c210
*/
void sub_c415b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc415b0ULL || rel >= 0xc41780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41780 size=48 callers=0 calls=1
   calls: sub_e7ea20
*/
void sub_c41780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41780ULL || rel >= 0xc417b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c417b0 size=320 callers=0 calls=2
   calls: sub_c42080, sub_e7eb10
*/
void sub_c417b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc417b0ULL || rel >= 0xc418f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c418f0 size=16 callers=0 calls=0
*/
void sub_c418f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc418f0ULL || rel >= 0xc41900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41900 size=496 callers=0 calls=4
   calls: sub_c42080, sub_c421b0, sub_c422f0, sub_e7c160
*/
void sub_c41900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41900ULL || rel >= 0xc41af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41af0 size=320 callers=0 calls=1
   calls: sub_c42080
*/
void sub_c41af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41af0ULL || rel >= 0xc41c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41c30 size=16 callers=0 calls=0
*/
void sub_c41c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41c30ULL || rel >= 0xc41c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41c40 size=16 callers=0 calls=0
*/
void sub_c41c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41c40ULL || rel >= 0xc41c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41c50 size=16 callers=0 calls=0
*/
void sub_c41c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41c50ULL || rel >= 0xc41c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41c60 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c41c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41c60ULL || rel >= 0xc41e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41e20 size=16 callers=0 calls=0
*/
void sub_c41e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41e20ULL || rel >= 0xc41e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41e30 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c41e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41e30ULL || rel >= 0xc41ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41ee0 size=16 callers=0 calls=0
*/
void sub_c41ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41ee0ULL || rel >= 0xc41ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41ef0 size=16 callers=0 calls=0
*/
void sub_c41ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41ef0ULL || rel >= 0xc41f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41f00 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c41f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41f00ULL || rel >= 0xc41fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c41fb0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c41fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc41fb0ULL || rel >= 0xc42060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c42060 size=16 callers=0 calls=0
*/
void sub_c42060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc42060ULL || rel >= 0xc42070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c42070 size=16 callers=0 calls=0
*/
void sub_c42070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc42070ULL || rel >= 0xc42080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c42080 size=304 callers=12 calls=0
*/
void sub_c42080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc42080ULL || rel >= 0xc421b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c421b0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_c421b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc421b0ULL || rel >= 0xc422f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c422f0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_c422f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc422f0ULL || rel >= 0xc42430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c42430 size=368 callers=0 calls=4
   calls: sd9110_evolution, sub_c39c40, sub_c42080, sub_d0c0
   ref: first_demo
*/
void first_demo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc42430ULL || rel >= 0xc425a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c425a0 size=768 callers=0 calls=15
   calls: demo_data, sub_12fac60, sub_13000b0, sub_136e8b0, sub_767f90, sub_bc64a0, sub_bc64e0, sub_c1bcb0, sub_c1bce0, sub_c1bd10, sub_c3fd90, sub_c3fda0
   ... +3 more
   ref: EVOLVE_POKEMON
*/
void EVOLVE_POKEMON(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc425a0ULL || rel >= 0xc428a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c428a0 size=16 callers=0 calls=0
*/
void sub_c428a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc428a0ULL || rel >= 0xc428b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c428b0 size=16 callers=0 calls=0
*/
void sub_c428b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc428b0ULL || rel >= 0xc428c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c428c0 size=16 callers=0 calls=0
*/
void sub_c428c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc428c0ULL || rel >= 0xc428d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c428d0 size=16 callers=0 calls=0
*/
void sub_c428d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc428d0ULL || rel >= 0xc428e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c428e0 size=16 callers=0 calls=0
*/
void sub_c428e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc428e0ULL || rel >= 0xc428f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c428f0 size=16 callers=0 calls=0
*/
void sub_c428f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc428f0ULL || rel >= 0xc42900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c42900 size=16 callers=0 calls=0
*/
void sub_c42900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc42900ULL || rel >= 0xc42910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c42910 size=16 callers=0 calls=0
*/
void sub_c42910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc42910ULL || rel >= 0xc42920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c42920 size=16 callers=0 calls=0
*/
void sub_c42920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc42920ULL || rel >= 0xc42930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c42930 size=304 callers=0 calls=0
*/
void sub_c42930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc42930ULL || rel >= 0xc42a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c42a60 size=848 callers=0 calls=10
   calls: sd9111_evolution_after, sub_1313580, sub_b31900, sub_c39c40, sub_c3fd90, sub_c40250, sub_c40290, sub_c42080, sub_d0c0, wazaname
   ref: set_waza
   ref: SystemMessageView
*/
void SystemMessageView_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc42a60ULL || rel >= 0xc42db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c42db0 size=1184 callers=0 calls=20
   calls: LEARN_SKILL_5, demo_data, sd9111_evolution_after, sub_1313580, sub_bc64a0, sub_bc64e0, sub_c1bcb0, sub_c1bce0, sub_c1bd10, sub_c39c40, sub_c3fd90, sub_c3fda0
   ... +8 more
*/
void sub_c42db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc42db0ULL || rel >= 0xc43250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c43250 size=608 callers=1 calls=9
   calls: sub_12fafe0, sub_1313580, sub_764b40, sub_766da0, sub_766f50, sub_c3fd90, sub_c40250, sub_c42080, wazaname
   ref: LEARN_SKILL
*/
void LEARN_SKILL_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc43250ULL || rel >= 0xc434b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c434b0 size=368 callers=1 calls=9
   calls: sub_1311c60, sub_67d450, sub_c40230, sub_c40250, sub_c40270, sub_c42080, sub_e806b0, sub_e807f0, sub_eb8930
*/
void sub_c434b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc434b0ULL || rel >= 0xc43620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c43620 size=624 callers=1 calls=9
   calls: sub_1311c60, sub_67d450, sub_c40230, sub_c40250, sub_c40270, sub_c42080, sub_e806b0, sub_e807f0, sub_eb8990
*/
void sub_c43620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc43620ULL || rel >= 0xc43890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c43890 size=16 callers=0 calls=0
*/
void sub_c43890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc43890ULL || rel >= 0xc438a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c438a0 size=16 callers=0 calls=0
*/
void sub_c438a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc438a0ULL || rel >= 0xc438b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c438b0 size=16 callers=0 calls=0
*/
void sub_c438b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc438b0ULL || rel >= 0xc438c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c438c0 size=16 callers=0 calls=0
*/
void sub_c438c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc438c0ULL || rel >= 0xc438d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c438d0 size=16 callers=0 calls=0
*/
void sub_c438d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc438d0ULL || rel >= 0xc438e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c438e0 size=16 callers=0 calls=0
*/
void sub_c438e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc438e0ULL || rel >= 0xc438f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c438f0 size=16 callers=0 calls=0
*/
void sub_c438f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc438f0ULL || rel >= 0xc43900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c43900 size=16 callers=0 calls=0
*/
void sub_c43900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc43900ULL || rel >= 0xc43910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c43910 size=16 callers=0 calls=0
*/
void sub_c43910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc43910ULL || rel >= 0xc43920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c43920 size=304 callers=0 calls=0
*/
void sub_c43920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc43920ULL || rel >= 0xc43a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c43a50 size=1152 callers=1 calls=9
   calls: map_destination_data, sub_c448b0, sub_c44990, sub_c44a70, sub_c44b50, sub_c44f40, sub_c4b020, sub_c4c5f0, sub_ee4bc0
   ref: bin/appli/townmap/bin/townmap_top_00_lyt.bin
   ref: bin/appli/fade/bin/fade_rotom_00.arc
   ref: bin/appli/fade/bin/fade_common_00.arc
*/
void townmap_top_00_lyt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc43a50ULL || rel >= 0xc43ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c43ed0 size=112 callers=41 calls=0
*/
void sub_c43ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc43ed0ULL || rel >= 0xc43f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c43f40 size=272 callers=0 calls=0
*/
void sub_c43f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc43f40ULL || rel >= 0xc44050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44050 size=16 callers=0 calls=0
*/
void sub_c44050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44050ULL || rel >= 0xc44060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44060 size=432 callers=1 calls=2
   calls: sub_c44a70, sub_c4b020
*/
void sub_c44060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44060ULL || rel >= 0xc44210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44210 size=144 callers=7 calls=0
*/
void sub_c44210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44210ULL || rel >= 0xc442a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c442a0 size=112 callers=1 calls=0
*/
void sub_c442a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc442a0ULL || rel >= 0xc44310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44310 size=144 callers=69 calls=0
*/
void sub_c44310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44310ULL || rel >= 0xc443a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c443a0 size=80 callers=1 calls=0
*/
void sub_c443a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc443a0ULL || rel >= 0xc443f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c443f0 size=32 callers=6 calls=0
*/
void sub_c443f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc443f0ULL || rel >= 0xc44410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44410 size=160 callers=44 calls=0
*/
void sub_c44410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44410ULL || rel >= 0xc444b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c444b0 size=96 callers=10 calls=0
*/
void sub_c444b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc444b0ULL || rel >= 0xc44510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44510 size=32 callers=1 calls=0
*/
void sub_c44510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44510ULL || rel >= 0xc44530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44530 size=192 callers=3 calls=0
*/
void sub_c44530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44530ULL || rel >= 0xc445f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c445f0 size=320 callers=8 calls=0
*/
void sub_c445f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc445f0ULL || rel >= 0xc44730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44730 size=128 callers=2 calls=0
*/
void sub_c44730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44730ULL || rel >= 0xc447b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c447b0 size=16 callers=0 calls=0
*/
void sub_c447b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc447b0ULL || rel >= 0xc447c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c447c0 size=112 callers=0 calls=0
*/
void sub_c447c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc447c0ULL || rel >= 0xc44830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44830 size=16 callers=0 calls=0
*/
void sub_c44830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44830ULL || rel >= 0xc44840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44840 size=112 callers=0 calls=0
*/
void sub_c44840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44840ULL || rel >= 0xc448b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c448b0 size=224 callers=1 calls=1
   calls: sub_c44c30
*/
void sub_c448b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc448b0ULL || rel >= 0xc44990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44990 size=224 callers=1 calls=1
   calls: N_out_00
*/
void sub_c44990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44990ULL || rel >= 0xc44a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44a70 size=224 callers=2 calls=1
   calls: sub_c4ad50
*/
void sub_c44a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44a70ULL || rel >= 0xc44b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44b50 size=224 callers=1 calls=1
   calls: sub_c47c50
*/
void sub_c44b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44b50ULL || rel >= 0xc44c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44c30 size=352 callers=2 calls=1
   calls: sub_6835f0
*/
void sub_c44c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44c30ULL || rel >= 0xc44d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44d90 size=352 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c44d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44d90ULL || rel >= 0xc44ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44ef0 size=16 callers=0 calls=0
*/
void sub_c44ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44ef0ULL || rel >= 0xc44f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44f00 size=16 callers=0 calls=0
*/
void sub_c44f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44f00ULL || rel >= 0xc44f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44f10 size=16 callers=0 calls=0
*/
void sub_c44f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44f10ULL || rel >= 0xc44f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44f20 size=16 callers=0 calls=0
*/
void sub_c44f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44f20ULL || rel >= 0xc44f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44f30 size=16 callers=0 calls=0
*/
void sub_c44f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44f30ULL || rel >= 0xc44f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c44f40 size=560 callers=1 calls=6
   calls: fade_common_00, sub_5cf8f0, sub_5d1b50, sub_5d2070, sub_5d76c0, sub_c45170
*/
void sub_c44f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc44f40ULL || rel >= 0xc45170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c45170 size=384 callers=1 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_687680, sub_c46830, sub_c47200, sub_c47a90
*/
void sub_c45170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc45170ULL || rel >= 0xc452f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c452f0 size=768 callers=1 calls=9
   calls: gamma_correction, sub_602930, sub_683640, sub_683670, sub_685230, sub_685250, sub_687770, sub_c46970, sub_c47b70
   ref: fade_common_00.bflyt
*/
void fade_common_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc452f0ULL || rel >= 0xc455f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c455f0 size=416 callers=0 calls=6
   calls: sub_601140, sub_c45790, sub_c45900, sub_c459f0, sub_c45b10, sub_ee7830
*/
void sub_c455f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc455f0ULL || rel >= 0xc45790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c45790 size=368 callers=1 calls=2
   calls: P_fade_cross_texture_00_3, sub_685250
*/
void sub_c45790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc45790ULL || rel >= 0xc45900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c45900 size=240 callers=1 calls=2
   calls: P_fade_cross_texture_00_3, sub_685250
*/
void sub_c45900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc45900ULL || rel >= 0xc459f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c459f0 size=288 callers=1 calls=4
   calls: P_fade_cross_texture_00_3, sub_685820, sub_685a50, sub_685c60
*/
void sub_c459f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc459f0ULL || rel >= 0xc45b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c45b10 size=368 callers=1 calls=3
   calls: sub_685250, sub_6859b0, sub_685a50
*/
void sub_c45b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc45b10ULL || rel >= 0xc45c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c45c80 size=240 callers=0 calls=2
   calls: sub_601140, sub_ee7830
*/
void sub_c45c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc45c80ULL || rel >= 0xc45d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c45d70 size=16 callers=0 calls=0
*/
void sub_c45d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc45d70ULL || rel >= 0xc45d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c45d80 size=1104 callers=0 calls=7
   calls: sub_685250, sub_685850, sub_6859b0, sub_685a50, sub_685ab0, sub_685b20, sub_685dc0
   ref: P_fade_cross_texture_00
*/
void P_fade_cross_texture_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc45d80ULL || rel >= 0xc461d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c461d0 size=16 callers=0 calls=0
*/
void sub_c461d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc461d0ULL || rel >= 0xc461e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c461e0 size=32 callers=0 calls=0
*/
void sub_c461e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc461e0ULL || rel >= 0xc46200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c46200 size=1216 callers=0 calls=9
   calls: sub_601140, sub_685250, sub_685850, sub_685910, sub_6859b0, sub_685a50, sub_685ab0, sub_685b20, sub_ee7830
   ref: P_fade_cross_texture_00
*/
void P_fade_cross_texture_00_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc46200ULL || rel >= 0xc466c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c466c0 size=48 callers=0 calls=0
*/
void sub_c466c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc466c0ULL || rel >= 0xc466f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c466f0 size=32 callers=0 calls=0
*/
void sub_c466f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc466f0ULL || rel >= 0xc46710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c46710 size=256 callers=0 calls=3
   calls: sub_685820, sub_685a50, sub_685c60
*/
void sub_c46710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc46710ULL || rel >= 0xc46810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c46810 size=32 callers=0 calls=0
*/
void sub_c46810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc46810ULL || rel >= 0xc46830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c46830 size=320 callers=340 calls=3
   calls: sub_5e6180, sub_c470e0, sub_d0c0
*/
void sub_c46830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc46830ULL || rel >= 0xc46970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c46970 size=688 callers=1 calls=1
   calls: sub_6855a0
*/
void sub_c46970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc46970ULL || rel >= 0xc46c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c46c20 size=752 callers=3 calls=5
   calls: sub_685250, sub_685850, sub_6859b0, sub_685a50, sub_685ab0
   ref: P_fade_cross_texture_00
*/
void P_fade_cross_texture_00_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc46c20ULL || rel >= 0xc46f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c46f10 size=176 callers=0 calls=0
*/
void sub_c46f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc46f10ULL || rel >= 0xc46fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c46fc0 size=16 callers=0 calls=0
*/
void sub_c46fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc46fc0ULL || rel >= 0xc46fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c46fd0 size=16 callers=0 calls=0
*/
void sub_c46fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc46fd0ULL || rel >= 0xc46fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c46fe0 size=16 callers=0 calls=0
*/
void sub_c46fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc46fe0ULL || rel >= 0xc46ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c46ff0 size=16 callers=0 calls=0
*/
void sub_c46ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc46ff0ULL || rel >= 0xc47000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c47000 size=16 callers=0 calls=0
*/
void sub_c47000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc47000ULL || rel >= 0xc47010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c47010 size=32 callers=0 calls=0
*/
void sub_c47010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc47010ULL || rel >= 0xc47030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c47030 size=176 callers=0 calls=0
*/
void sub_c47030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc47030ULL || rel >= 0xc470e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c470e0 size=128 callers=7 calls=1
   calls: sub_d0c0
*/
void sub_c470e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc470e0ULL || rel >= 0xc47160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c47160 size=112 callers=0 calls=0
*/
void sub_c47160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc47160ULL || rel >= 0xc471d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c471d0 size=16 callers=0 calls=0
*/
void sub_c471d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc471d0ULL || rel >= 0xc471e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c471e0 size=16 callers=0 calls=0
*/
void sub_c471e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc471e0ULL || rel >= 0xc471f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c471f0 size=16 callers=0 calls=0
*/
void sub_c471f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc471f0ULL || rel >= 0xc47200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c47200 size=2192 callers=15 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2500, sub_5e6970, sub_687cf0, sub_df90, sub_e840
*/
void sub_c47200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc47200ULL || rel >= 0xc47a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c47a90 size=224 callers=13 calls=1
   calls: sub_6872b0
*/
void sub_c47a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc47a90ULL || rel >= 0xc47b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c47b70 size=224 callers=6 calls=1
   calls: sub_683ce0
*/
void sub_c47b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc47b70ULL || rel >= 0xc47c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c47c50 size=384 callers=2 calls=2
   calls: sub_11061d0, sub_6835f0
*/
void sub_c47c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc47c50ULL || rel >= 0xc47dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c47dd0 size=800 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c47dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc47dd0ULL || rel >= 0xc480f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c480f0 size=16 callers=0 calls=0
*/
void sub_c480f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc480f0ULL || rel >= 0xc48100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c48100 size=16 callers=0 calls=0
*/
void sub_c48100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc48100ULL || rel >= 0xc48110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c48110 size=16 callers=0 calls=0
*/
void sub_c48110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc48110ULL || rel >= 0xc48120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c48120 size=16 callers=0 calls=0
*/
void sub_c48120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc48120ULL || rel >= 0xc48130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c48130 size=16 callers=0 calls=0
*/
void sub_c48130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc48130ULL || rel >= 0xc48140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c48140 size=2864 callers=1 calls=21
   calls: sub_1106200, sub_1106f30, sub_14ab040, sub_14abc90, sub_14ac3c0, sub_14ad840, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e6180, sub_683640, sub_683670
   ... +9 more
   ref: bin/appli/loading_fly/bin/loading_fly_00_lyt.bin
   ref: bin/appli/townmap/bin/map_destination_data.prmb
   ref: bin/appli/loading/bin/loading_00_lyt.bin
*/
void map_destination_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc48140ULL || rel >= 0xc48c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c48c70 size=304 callers=8 calls=1
   calls: sub_14aa140
*/
void sub_c48c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc48c70ULL || rel >= 0xc48da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c48da0 size=304 callers=1 calls=3
   calls: sub_1443180, sub_14aad40, sub_14ab040
*/
void sub_c48da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc48da0ULL || rel >= 0xc48ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c48ed0 size=256 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_c48ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc48ed0ULL || rel >= 0xc48fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c48fd0 size=16 callers=0 calls=0
*/
void sub_c48fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc48fd0ULL || rel >= 0xc48fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c48fe0 size=16 callers=0 calls=0
*/
void sub_c48fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc48fe0ULL || rel >= 0xc48ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c48ff0 size=320 callers=0 calls=6
   calls: DestinationDataList, pane__s_4, sub_1443380, sub_14ab0c0, sub_14ac3c0, sub_c49350
*/
void sub_c48ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc48ff0ULL || rel >= 0xc49130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49130 size=16 callers=0 calls=0
*/
void sub_c49130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49130ULL || rel >= 0xc49140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49140 size=192 callers=0 calls=2
   calls: sub_14ab0c0, sub_14ac3c0
*/
void sub_c49140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49140ULL || rel >= 0xc49200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49200 size=16 callers=0 calls=0
*/
void sub_c49200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49200ULL || rel >= 0xc49210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49210 size=16 callers=0 calls=0
*/
void sub_c49210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49210ULL || rel >= 0xc49220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49220 size=256 callers=0 calls=1
   calls: sub_14ab2b0
*/
void sub_c49220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49220ULL || rel >= 0xc49320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49320 size=32 callers=0 calls=0
*/
void sub_c49320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49320ULL || rel >= 0xc49340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49340 size=16 callers=0 calls=0
*/
void sub_c49340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49340ULL || rel >= 0xc49350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49350 size=352 callers=1 calls=4
   calls: pane__s_4, sub_14aad40, sub_d25c50, sub_e90870
*/
void sub_c49350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49350ULL || rel >= 0xc494b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c494b0 size=848 callers=1 calls=13
   calls: DestinationDataList_2, pane__s_4, sub_11061e0, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_1106cd0, sub_135a760, sub_14aad40, sub_14ab040, sub_14ac370
   ... +1 more
   ref: DestinationDataList
   ref: workId
   ref: zoneHash
*/
void DestinationDataList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc494b0ULL || rel >= 0xc49800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49800 size=1072 callers=4 calls=5
   calls: sub_1c0, sub_5cfaf0, sub_5cff50, sub_5e6770, sub_5e7a30
   ref: pane_%s
*/
void pane__s_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49800ULL || rel >= 0xc49c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49c30 size=208 callers=1 calls=2
   calls: sub_1307dd0, sub_c4ac70
   ref: common/townmap_target.dat
*/
void townmap_target(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49c30ULL || rel >= 0xc49d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49d00 size=112 callers=0 calls=1
   calls: sub_c49ed0
*/
void sub_c49d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49d00ULL || rel >= 0xc49d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49d70 size=16 callers=0 calls=0
*/
void sub_c49d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49d70ULL || rel >= 0xc49d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49d80 size=16 callers=0 calls=0
*/
void sub_c49d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49d80ULL || rel >= 0xc49d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49d90 size=16 callers=0 calls=0
*/
void sub_c49d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49d90ULL || rel >= 0xc49da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49da0 size=16 callers=0 calls=0
*/
void sub_c49da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49da0ULL || rel >= 0xc49db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49db0 size=16 callers=0 calls=0
*/
void sub_c49db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49db0ULL || rel >= 0xc49dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49dc0 size=32 callers=0 calls=0
*/
void sub_c49dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49dc0ULL || rel >= 0xc49de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49de0 size=240 callers=0 calls=0
*/
void sub_c49de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49de0ULL || rel >= 0xc49ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49ed0 size=176 callers=1 calls=0
*/
void sub_c49ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49ed0ULL || rel >= 0xc49f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49f80 size=32 callers=0 calls=0
*/
void sub_c49f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49f80ULL || rel >= 0xc49fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49fa0 size=32 callers=0 calls=0
*/
void sub_c49fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49fa0ULL || rel >= 0xc49fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c49fc0 size=320 callers=30 calls=3
   calls: sub_105b0, sub_5cff50, sub_5e6770
*/
void sub_c49fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc49fc0ULL || rel >= 0xc4a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4a100 size=2304 callers=9 calls=7
   calls: sub_14b14a0, sub_5cf8e0, sub_5cf8f0, sub_5de540, sub_5e2500, sub_5e6970, sub_df90
*/
void sub_c4a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4a100ULL || rel >= 0xc4aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4aa00 size=208 callers=2 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_c4aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4aa00ULL || rel >= 0xc4aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4aad0 size=208 callers=2 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_c4aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4aad0ULL || rel >= 0xc4aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4aba0 size=208 callers=2 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_c4aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4aba0ULL || rel >= 0xc4ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ac70 size=224 callers=54 calls=1
   calls: sub_1307b20
*/
void sub_c4ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ac70ULL || rel >= 0xc4ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ad50 size=336 callers=2 calls=1
   calls: sub_6835f0
*/
void sub_c4ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ad50ULL || rel >= 0xc4aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4aea0 size=304 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c4aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4aea0ULL || rel >= 0xc4afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4afd0 size=16 callers=0 calls=0
*/
void sub_c4afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4afd0ULL || rel >= 0xc4afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4afe0 size=16 callers=0 calls=0
*/
void sub_c4afe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4afe0ULL || rel >= 0xc4aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4aff0 size=16 callers=0 calls=0
*/
void sub_c4aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4aff0ULL || rel >= 0xc4b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b000 size=16 callers=0 calls=0
*/
void sub_c4b000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b000ULL || rel >= 0xc4b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b010 size=16 callers=0 calls=0
*/
void sub_c4b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b010ULL || rel >= 0xc4b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b020 size=112 callers=2 calls=0
*/
void sub_c4b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b020ULL || rel >= 0xc4b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b090 size=304 callers=0 calls=3
   calls: sub_5e2930, sub_c46830, sub_c47200
*/
void sub_c4b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b090ULL || rel >= 0xc4b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b1c0 size=16 callers=0 calls=0
*/
void sub_c4b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b1c0ULL || rel >= 0xc4b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b1d0 size=272 callers=0 calls=7
   calls: sub_687680, sub_c47a90, sub_c4b2e0, sub_c4b460, sub_c4b5c0, sub_c4b6b0, sub_c4b7e0
*/
void sub_c4b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b1d0ULL || rel >= 0xc4b2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b2e0 size=384 callers=1 calls=8
   calls: f_02d_s, gamma_correction, sub_602930, sub_683640, sub_685230, sub_685250, sub_687770, sub_c47b70
*/
void sub_c4b2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b2e0ULL || rel >= 0xc4b460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b460 size=352 callers=1 calls=2
   calls: sub_685250, sub_c4c180
*/
void sub_c4b460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b460ULL || rel >= 0xc4b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b5c0 size=240 callers=1 calls=2
   calls: sub_685250, sub_c4c180
*/
void sub_c4b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b5c0ULL || rel >= 0xc4b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b6b0 size=304 callers=1 calls=4
   calls: sub_685820, sub_685a50, sub_685c60, sub_c4c180
*/
void sub_c4b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b6b0ULL || rel >= 0xc4b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b7e0 size=384 callers=1 calls=3
   calls: sub_685250, sub_6859b0, sub_685a50
*/
void sub_c4b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b7e0ULL || rel >= 0xc4b960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b960 size=16 callers=0 calls=0
*/
void sub_c4b960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b960ULL || rel >= 0xc4b970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4b970 size=496 callers=0 calls=6
   calls: sub_685250, sub_685850, sub_6859b0, sub_685a50, sub_685ab0, sub_685b20
*/
void sub_c4b970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4b970ULL || rel >= 0xc4bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4bb60 size=16 callers=0 calls=0
*/
void sub_c4bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4bb60ULL || rel >= 0xc4bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4bb70 size=32 callers=0 calls=0
*/
void sub_c4bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4bb70ULL || rel >= 0xc4bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4bb90 size=496 callers=0 calls=6
   calls: sub_685250, sub_685850, sub_6859b0, sub_685a50, sub_685ab0, sub_685b20
*/
void sub_c4bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4bb90ULL || rel >= 0xc4bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4bd80 size=16 callers=0 calls=0
*/
void sub_c4bd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4bd80ULL || rel >= 0xc4bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4bd90 size=272 callers=0 calls=3
   calls: sub_685820, sub_685a50, sub_685c60
*/
void sub_c4bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4bd90ULL || rel >= 0xc4bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4bea0 size=32 callers=0 calls=0
*/
void sub_c4bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4bea0ULL || rel >= 0xc4bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4bec0 size=704 callers=1 calls=1
   calls: sub_6855a0
   ref: %02d%s
*/
void f_02d_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4bec0ULL || rel >= 0xc4c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c180 size=384 callers=3 calls=5
   calls: sub_685250, sub_685850, sub_6859b0, sub_685a50, sub_685ab0
*/
void sub_c4c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c180ULL || rel >= 0xc4c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c300 size=16 callers=0 calls=0
*/
void sub_c4c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c300ULL || rel >= 0xc4c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c310 size=16 callers=0 calls=0
*/
void sub_c4c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c310ULL || rel >= 0xc4c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c320 size=32 callers=0 calls=0
*/
void sub_c4c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c320ULL || rel >= 0xc4c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c340 size=320 callers=2 calls=1
   calls: sub_6835f0
   ref: N_out_00
*/
void N_out_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c340ULL || rel >= 0xc4c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c480 size=288 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c4c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c480ULL || rel >= 0xc4c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c5a0 size=16 callers=0 calls=0
*/
void sub_c4c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c5a0ULL || rel >= 0xc4c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c5b0 size=16 callers=0 calls=0
*/
void sub_c4c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c5b0ULL || rel >= 0xc4c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c5c0 size=16 callers=0 calls=0
*/
void sub_c4c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c5c0ULL || rel >= 0xc4c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c5d0 size=16 callers=0 calls=0
*/
void sub_c4c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c5d0ULL || rel >= 0xc4c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c5e0 size=16 callers=0 calls=0
*/
void sub_c4c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c5e0ULL || rel >= 0xc4c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c5f0 size=112 callers=1 calls=1
   calls: sub_c4c660
*/
void sub_c4c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c5f0ULL || rel >= 0xc4c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c660 size=384 callers=1 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_687680, sub_c46830, sub_c47200, sub_c47a90
*/
void sub_c4c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c660ULL || rel >= 0xc4c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c7e0 size=336 callers=0 calls=8
   calls: gamma_correction, sub_602930, sub_683640, sub_685230, sub_685250, sub_6855a0, sub_687770, sub_c47b70
   ref: fade_rotom_00.bflyt
*/
void fade_rotom_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c7e0ULL || rel >= 0xc4c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c930 size=128 callers=0 calls=3
   calls: sub_c4c9b0, sub_c4cb10, sub_c4cc00
*/
void sub_c4c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c930ULL || rel >= 0xc4c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4c9b0 size=352 callers=1 calls=2
   calls: sub_685250, sub_c4d350
*/
void sub_c4c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4c9b0ULL || rel >= 0xc4cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4cb10 size=240 callers=1 calls=2
   calls: sub_685250, sub_c4d350
*/
void sub_c4cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4cb10ULL || rel >= 0xc4cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4cc00 size=288 callers=1 calls=4
   calls: sub_685820, sub_685a50, sub_685c60, sub_c4d350
*/
void sub_c4cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4cc00ULL || rel >= 0xc4cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4cd20 size=352 callers=0 calls=3
   calls: sub_685250, sub_6859b0, sub_685a50
*/
void sub_c4cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4cd20ULL || rel >= 0xc4ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ce80 size=16 callers=0 calls=0
*/
void sub_c4ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ce80ULL || rel >= 0xc4ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ce90 size=432 callers=0 calls=6
   calls: sub_685250, sub_685850, sub_6859b0, sub_685a50, sub_685ab0, sub_685b20
*/
void sub_c4ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ce90ULL || rel >= 0xc4d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d040 size=16 callers=0 calls=0
*/
void sub_c4d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d040ULL || rel >= 0xc4d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d050 size=32 callers=0 calls=0
*/
void sub_c4d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d050ULL || rel >= 0xc4d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d070 size=432 callers=0 calls=6
   calls: sub_685250, sub_685850, sub_6859b0, sub_685a50, sub_685ab0, sub_685b20
*/
void sub_c4d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d070ULL || rel >= 0xc4d220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d220 size=16 callers=0 calls=0
*/
void sub_c4d220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d220ULL || rel >= 0xc4d230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d230 size=256 callers=0 calls=3
   calls: sub_685820, sub_685a50, sub_685c60
*/
void sub_c4d230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d230ULL || rel >= 0xc4d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d330 size=32 callers=0 calls=0
*/
void sub_c4d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d330ULL || rel >= 0xc4d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d350 size=400 callers=3 calls=5
   calls: sub_685250, sub_685850, sub_6859b0, sub_685a50, sub_685ab0
*/
void sub_c4d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d350ULL || rel >= 0xc4d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d4e0 size=16 callers=0 calls=0
*/
void sub_c4d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d4e0ULL || rel >= 0xc4d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d4f0 size=16 callers=0 calls=0
*/
void sub_c4d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d4f0ULL || rel >= 0xc4d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d500 size=32 callers=0 calls=0
*/
void sub_c4d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d500ULL || rel >= 0xc4d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d520 size=288 callers=0 calls=5
   calls: sub_78f150, sub_790140, sub_c4d640, sub_e7c0f0, sub_ee78c0
   ref: attention
*/
void attention_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d520ULL || rel >= 0xc4d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d640 size=432 callers=1 calls=3
   calls: sub_c4deb0, sub_e7c160, sub_e7c210
*/
void sub_c4d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d640ULL || rel >= 0xc4d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d7f0 size=16 callers=0 calls=0
*/
void sub_c4d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d7f0ULL || rel >= 0xc4d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d800 size=16 callers=0 calls=0
*/
void sub_c4d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d800ULL || rel >= 0xc4d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d810 size=16 callers=0 calls=0
*/
void sub_c4d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d810ULL || rel >= 0xc4d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4d820 size=512 callers=0 calls=4
   calls: sub_c4dfe0, sub_c4e120, sub_c4e260, sub_e7c160
*/
void sub_c4d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4d820ULL || rel >= 0xc4da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4da20 size=16 callers=0 calls=0
*/
void sub_c4da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4da20ULL || rel >= 0xc4da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4da30 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c4da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4da30ULL || rel >= 0xc4dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4dbd0 size=16 callers=0 calls=0
*/
void sub_c4dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4dbd0ULL || rel >= 0xc4dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4dbe0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c4dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4dbe0ULL || rel >= 0xc4dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4dc90 size=16 callers=0 calls=0
*/
void sub_c4dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4dc90ULL || rel >= 0xc4dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4dca0 size=16 callers=0 calls=0
*/
void sub_c4dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4dca0ULL || rel >= 0xc4dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4dcb0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c4dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4dcb0ULL || rel >= 0xc4dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4dd60 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c4dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4dd60ULL || rel >= 0xc4de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4de10 size=16 callers=0 calls=0
*/
void sub_c4de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4de10ULL || rel >= 0xc4de20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4de20 size=16 callers=0 calls=0
*/
void sub_c4de20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4de20ULL || rel >= 0xc4de30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4de30 size=16 callers=0 calls=0
*/
void sub_c4de30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4de30ULL || rel >= 0xc4de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4de40 size=16 callers=0 calls=0
*/
void sub_c4de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4de40ULL || rel >= 0xc4de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4de50 size=16 callers=0 calls=0
*/
void sub_c4de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4de50ULL || rel >= 0xc4de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4de60 size=16 callers=0 calls=0
*/
void sub_c4de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4de60ULL || rel >= 0xc4de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4de70 size=16 callers=0 calls=0
*/
void sub_c4de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4de70ULL || rel >= 0xc4de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4de80 size=16 callers=0 calls=0
*/
void sub_c4de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4de80ULL || rel >= 0xc4de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4de90 size=16 callers=0 calls=0
*/
void sub_c4de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4de90ULL || rel >= 0xc4dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4dea0 size=16 callers=0 calls=0
*/
void sub_c4dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4dea0ULL || rel >= 0xc4deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4deb0 size=304 callers=1 calls=0
*/
void sub_c4deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4deb0ULL || rel >= 0xc4dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4dfe0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_c4dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4dfe0ULL || rel >= 0xc4e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e120 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_c4e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e120ULL || rel >= 0xc4e260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e260 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_c4e260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e260ULL || rel >= 0xc4e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e3a0 size=880 callers=0 calls=11
   calls: sub_1307dd0, sub_1308200, sub_1308340, sub_67b990, sub_67d450, sub_790f90, sub_c39c40, sub_c4ac70, sub_d0c0, sub_e807f0, sub_eb5fb0
   ref: attention
*/
void attention_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e3a0ULL || rel >= 0xc4e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e710 size=16 callers=0 calls=0
*/
void sub_c4e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e710ULL || rel >= 0xc4e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e720 size=16 callers=0 calls=0
*/
void sub_c4e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e720ULL || rel >= 0xc4e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e730 size=112 callers=0 calls=0
*/
void sub_c4e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e730ULL || rel >= 0xc4e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e7a0 size=112 callers=0 calls=0
*/
void sub_c4e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e7a0ULL || rel >= 0xc4e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e810 size=16 callers=0 calls=0
*/
void sub_c4e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e810ULL || rel >= 0xc4e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e820 size=112 callers=0 calls=0
*/
void sub_c4e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e820ULL || rel >= 0xc4e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e890 size=112 callers=0 calls=0
*/
void sub_c4e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e890ULL || rel >= 0xc4e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e900 size=16 callers=0 calls=0
*/
void sub_c4e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e900ULL || rel >= 0xc4e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e910 size=16 callers=0 calls=0
*/
void sub_c4e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e910ULL || rel >= 0xc4e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e920 size=112 callers=0 calls=0
*/
void sub_c4e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e920ULL || rel >= 0xc4e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4e990 size=112 callers=0 calls=0
*/
void sub_c4e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4e990ULL || rel >= 0xc4ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ea00 size=304 callers=0 calls=0
*/
void sub_c4ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ea00ULL || rel >= 0xc4eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4eb30 size=80 callers=0 calls=1
   calls: sub_d0c0
   ref: execute
*/
void execute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4eb30ULL || rel >= 0xc4eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4eb80 size=16 callers=0 calls=0
*/
void sub_c4eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4eb80ULL || rel >= 0xc4eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4eb90 size=16 callers=0 calls=0
*/
void sub_c4eb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4eb90ULL || rel >= 0xc4eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4eba0 size=16 callers=0 calls=0
*/
void sub_c4eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4eba0ULL || rel >= 0xc4ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ebb0 size=16 callers=0 calls=0
*/
void sub_c4ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ebb0ULL || rel >= 0xc4ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ebc0 size=16 callers=0 calls=0
*/
void sub_c4ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ebc0ULL || rel >= 0xc4ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ebd0 size=16 callers=0 calls=0
*/
void sub_c4ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ebd0ULL || rel >= 0xc4ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ebe0 size=16 callers=0 calls=0
*/
void sub_c4ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ebe0ULL || rel >= 0xc4ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ebf0 size=16 callers=0 calls=0
*/
void sub_c4ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ebf0ULL || rel >= 0xc4ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ec00 size=16 callers=0 calls=0
*/
void sub_c4ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ec00ULL || rel >= 0xc4ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ec10 size=16 callers=0 calls=0
*/
void sub_c4ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ec10ULL || rel >= 0xc4ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ec20 size=304 callers=0 calls=0
*/
void sub_c4ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ec20ULL || rel >= 0xc4ed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ed50 size=368 callers=0 calls=4
   calls: sub_790f90, sub_c39c40, sub_d0c0, sub_eb6070
   ref: attention
*/
void attention_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ed50ULL || rel >= 0xc4eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4eec0 size=16 callers=0 calls=0
*/
void sub_c4eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4eec0ULL || rel >= 0xc4eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4eed0 size=320 callers=0 calls=4
   calls: sub_790f90, sub_c39c40, sub_e80580, sub_e806b0
   ref: attention
*/
void attention_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4eed0ULL || rel >= 0xc4f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f010 size=16 callers=0 calls=0
*/
void sub_c4f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f010ULL || rel >= 0xc4f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f020 size=16 callers=0 calls=0
*/
void sub_c4f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f020ULL || rel >= 0xc4f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f030 size=16 callers=0 calls=0
*/
void sub_c4f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f030ULL || rel >= 0xc4f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f040 size=16 callers=0 calls=0
*/
void sub_c4f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f040ULL || rel >= 0xc4f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f050 size=16 callers=0 calls=0
*/
void sub_c4f050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f050ULL || rel >= 0xc4f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f060 size=16 callers=0 calls=0
*/
void sub_c4f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f060ULL || rel >= 0xc4f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f070 size=16 callers=0 calls=0
*/
void sub_c4f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f070ULL || rel >= 0xc4f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f080 size=16 callers=0 calls=0
*/
void sub_c4f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f080ULL || rel >= 0xc4f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f090 size=304 callers=0 calls=0
*/
void sub_c4f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f090ULL || rel >= 0xc4f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f1c0 size=368 callers=0 calls=0
*/
void sub_c4f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f1c0ULL || rel >= 0xc4f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f330 size=464 callers=0 calls=0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f330ULL || rel >= 0xc4f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4f500 size=1920 callers=9 calls=3
   calls: sub_c50c10, sub_c50d20, sub_c51170
*/
void sub_c4f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f500ULL || rel >= 0xc4fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4fc80 size=752 callers=8 calls=1
   calls: sub_e95420
*/
void sub_c4fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4fc80ULL || rel >= 0xc4ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c4ff70 size=2240 callers=1 calls=1
   calls: sub_e95420
*/
void sub_c4ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4ff70ULL || rel >= 0xc50830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c50830 size=64 callers=0 calls=0
*/
void sub_c50830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc50830ULL || rel >= 0xc50870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c50870 size=64 callers=2 calls=0
*/
void sub_c50870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc50870ULL || rel >= 0xc508b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c508b0 size=384 callers=2 calls=2
   calls: sub_5e3870, sub_5e3aa0
*/
void sub_c508b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc508b0ULL || rel >= 0xc50a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c50a30 size=48 callers=1 calls=1
   calls: sub_c508b0
*/
void sub_c50a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc50a30ULL || rel >= 0xc50a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c50a60 size=208 callers=8 calls=2
   calls: sub_5e3870, sub_5e3aa0
*/
void sub_c50a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc50a60ULL || rel >= 0xc50b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c50b30 size=224 callers=12 calls=2
   calls: sub_5e3870, sub_5e3aa0
*/
void sub_c50b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc50b30ULL || rel >= 0xc50c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c50c10 size=272 callers=1 calls=0
*/
void sub_c50c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc50c10ULL || rel >= 0xc50d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c50d20 size=400 callers=1 calls=0
*/
void sub_c50d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc50d20ULL || rel >= 0xc50eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c50eb0 size=704 callers=0 calls=0
*/
void sub_c50eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc50eb0ULL || rel >= 0xc51170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51170 size=272 callers=1 calls=0
*/
void sub_c51170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51170ULL || rel >= 0xc51280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51280 size=704 callers=0 calls=0
*/
void sub_c51280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51280ULL || rel >= 0xc51540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51540 size=512 callers=25 calls=5
   calls: sub_5d99d0, sub_967240, sub_c51fd0, sub_c520e0, sub_c5aa90
*/
void sub_c51540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51540ULL || rel >= 0xc51740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51740 size=64 callers=9 calls=2
   calls: sub_c52310, sub_c52780
*/
void sub_c51740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51740ULL || rel >= 0xc51780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51780 size=176 callers=0 calls=1
   calls: sub_c5a8e0
*/
void sub_c51780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51780ULL || rel >= 0xc51830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51830 size=176 callers=0 calls=1
   calls: sub_c5a8e0
*/
void sub_c51830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51830ULL || rel >= 0xc518e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c518e0 size=240 callers=0 calls=0
*/
void sub_c518e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc518e0ULL || rel >= 0xc519d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c519d0 size=240 callers=0 calls=0
*/
void sub_c519d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc519d0ULL || rel >= 0xc51ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51ac0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_c51ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51ac0ULL || rel >= 0xc51b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51b30 size=240 callers=0 calls=0
*/
void sub_c51b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51b30ULL || rel >= 0xc51c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51c20 size=240 callers=0 calls=0
*/
void sub_c51c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51c20ULL || rel >= 0xc51d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51d10 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_c51d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51d10ULL || rel >= 0xc51d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51d80 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_c51d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51d80ULL || rel >= 0xc51df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51df0 size=240 callers=0 calls=0
*/
void sub_c51df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51df0ULL || rel >= 0xc51ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51ee0 size=240 callers=0 calls=0
*/
void sub_c51ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51ee0ULL || rel >= 0xc51fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c51fd0 size=272 callers=1 calls=2
   calls: sub_5d99d0, sub_64e0a0
*/
void sub_c51fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51fd0ULL || rel >= 0xc520e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c520e0 size=560 callers=1 calls=2
   calls: sub_5db1b0, sub_c5a8e0
*/
void sub_c520e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc520e0ULL || rel >= 0xc52310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c52310 size=752 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750, sub_c52600
*/
void sub_c52310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc52310ULL || rel >= 0xc52600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c52600 size=384 callers=2 calls=1
   calls: sub_607750
*/
void sub_c52600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc52600ULL || rel >= 0xc52780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

