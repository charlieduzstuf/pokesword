/* main functions 00812a90..00828bf0 (58 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00812a90 size=80 callers=1 calls=1
   calls: sub_8186d0
*/
void sub_812a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812a90ULL || rel >= 0x812ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812ae0 size=80 callers=1 calls=1
   calls: sub_818720
*/
void sub_812ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812ae0ULL || rel >= 0x812b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812b30 size=16 callers=0 calls=0
*/
void sub_812b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812b30ULL || rel >= 0x812b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812b40 size=16 callers=0 calls=0
*/
void sub_812b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812b40ULL || rel >= 0x812b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812b50 size=128 callers=0 calls=0
*/
void sub_812b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812b50ULL || rel >= 0x812bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812bd0 size=32 callers=8 calls=0
*/
void sub_812bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812bd0ULL || rel >= 0x812bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812bf0 size=32 callers=20 calls=0
*/
void sub_812bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812bf0ULL || rel >= 0x812c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812c10 size=64 callers=1 calls=0
*/
void sub_812c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812c10ULL || rel >= 0x812c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812c50 size=80 callers=9 calls=0
*/
void sub_812c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812c50ULL || rel >= 0x812ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812ca0 size=16 callers=0 calls=0
*/
void sub_812ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812ca0ULL || rel >= 0x812cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812cb0 size=16 callers=0 calls=0
*/
void sub_812cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812cb0ULL || rel >= 0x812cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812cc0 size=48 callers=4 calls=0
*/
void sub_812cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812cc0ULL || rel >= 0x812cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812cf0 size=16 callers=1 calls=0
*/
void sub_812cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812cf0ULL || rel >= 0x812d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812d00 size=176 callers=2 calls=5
   calls: sub_7ee6b0, sub_803600, sub_813110, sub_813270, sub_813280
*/
void sub_812d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812d00ULL || rel >= 0x812db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812db0 size=16 callers=1 calls=0
*/
void sub_812db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812db0ULL || rel >= 0x812dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812dc0 size=16 callers=1 calls=0
*/
void sub_812dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812dc0ULL || rel >= 0x812dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812dd0 size=16 callers=1 calls=0
*/
void sub_812dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812dd0ULL || rel >= 0x812de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812de0 size=16 callers=11 calls=0
*/
void sub_812de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812de0ULL || rel >= 0x812df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812df0 size=32 callers=1 calls=0
*/
void sub_812df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812df0ULL || rel >= 0x812e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812e10 size=16 callers=2 calls=0
*/
void sub_812e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812e10ULL || rel >= 0x812e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812e20 size=16 callers=2 calls=0
*/
void sub_812e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812e20ULL || rel >= 0x812e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812e30 size=16 callers=2 calls=0
*/
void sub_812e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812e30ULL || rel >= 0x812e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812e40 size=80 callers=0 calls=0
*/
void sub_812e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812e40ULL || rel >= 0x812e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812e90 size=16 callers=1 calls=0
*/
void sub_812e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812e90ULL || rel >= 0x812ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812ea0 size=16 callers=2 calls=0
*/
void sub_812ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812ea0ULL || rel >= 0x812eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812eb0 size=16 callers=2 calls=0
*/
void sub_812eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812eb0ULL || rel >= 0x812ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812ec0 size=32 callers=23 calls=0
*/
void sub_812ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812ec0ULL || rel >= 0x812ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812ee0 size=32 callers=4 calls=0
*/
void sub_812ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812ee0ULL || rel >= 0x812f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812f00 size=128 callers=24 calls=0
*/
void sub_812f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812f00ULL || rel >= 0x812f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00812f80 size=304 callers=4 calls=0
*/
void sub_812f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x812f80ULL || rel >= 0x8130b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008130b0 size=96 callers=13 calls=0
*/
void sub_8130b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8130b0ULL || rel >= 0x813110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813110 size=32 callers=32 calls=0
*/
void sub_813110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813110ULL || rel >= 0x813130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813130 size=16 callers=38 calls=0
*/
void sub_813130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813130ULL || rel >= 0x813140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813140 size=48 callers=80 calls=0
*/
void sub_813140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813140ULL || rel >= 0x813170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813170 size=96 callers=1 calls=0
*/
void sub_813170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813170ULL || rel >= 0x8131d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008131d0 size=96 callers=1 calls=0
*/
void sub_8131d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8131d0ULL || rel >= 0x813230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813230 size=64 callers=1 calls=0
*/
void sub_813230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813230ULL || rel >= 0x813270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813270 size=16 callers=35 calls=0
*/
void sub_813270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813270ULL || rel >= 0x813280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813280 size=16 callers=9 calls=0
*/
void sub_813280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813280ULL || rel >= 0x813290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813290 size=144 callers=1 calls=1
   calls: sub_7ef2b0
*/
void sub_813290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813290ULL || rel >= 0x813320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813320 size=16 callers=3 calls=0
*/
void sub_813320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813320ULL || rel >= 0x813330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813330 size=48 callers=9 calls=0
*/
void sub_813330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813330ULL || rel >= 0x813360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813360 size=288 callers=1 calls=1
   calls: sub_7ef2b0
*/
void sub_813360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813360ULL || rel >= 0x813480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813480 size=320 callers=1 calls=2
   calls: sub_7cbf80, sub_7ee6b0
*/
void sub_813480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813480ULL || rel >= 0x8135c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008135c0 size=320 callers=1 calls=2
   calls: sub_7cbf80, sub_7ee6b0
*/
void sub_8135c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8135c0ULL || rel >= 0x813700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813700 size=336 callers=3 calls=3
   calls: sub_7ee6b0, sub_7ef2b0, sub_803600
*/
void sub_813700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813700ULL || rel >= 0x813850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813850 size=112 callers=1 calls=0
*/
void sub_813850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813850ULL || rel >= 0x8138c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008138c0 size=128 callers=2 calls=0
*/
void sub_8138c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8138c0ULL || rel >= 0x813940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813940 size=128 callers=0 calls=0
*/
void sub_813940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813940ULL || rel >= 0x8139c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008139c0 size=16 callers=2 calls=0
*/
void sub_8139c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8139c0ULL || rel >= 0x8139d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008139d0 size=16 callers=16 calls=0
*/
void sub_8139d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8139d0ULL || rel >= 0x8139e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008139e0 size=64 callers=1 calls=0
*/
void sub_8139e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8139e0ULL || rel >= 0x813a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813a20 size=16 callers=6 calls=0
*/
void sub_813a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813a20ULL || rel >= 0x813a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813a30 size=16 callers=8 calls=0
*/
void sub_813a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813a30ULL || rel >= 0x813a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813a40 size=224 callers=1 calls=1
   calls: sub_813b40
*/
void sub_813a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813a40ULL || rel >= 0x813b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813b20 size=16 callers=3 calls=0
*/
void sub_813b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813b20ULL || rel >= 0x813b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813b30 size=16 callers=6 calls=0
*/
void sub_813b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813b30ULL || rel >= 0x813b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813b40 size=528 callers=5 calls=1
   calls: sub_813d60
*/
void sub_813b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813b40ULL || rel >= 0x813d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813d50 size=16 callers=0 calls=0
*/
void sub_813d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813d50ULL || rel >= 0x813d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00813d60 size=4960 callers=1 calls=0
*/
void sub_813d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x813d60ULL || rel >= 0x8150c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008150c0 size=272 callers=55 calls=1
   calls: sub_8151d0
*/
void sub_8150c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8150c0ULL || rel >= 0x8151d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008151d0 size=4432 callers=6 calls=0
*/
void sub_8151d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8151d0ULL || rel >= 0x816320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816320 size=256 callers=15 calls=1
   calls: sub_8151d0
*/
void sub_816320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816320ULL || rel >= 0x816420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816420 size=64 callers=2 calls=0
*/
void sub_816420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816420ULL || rel >= 0x816460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816460 size=160 callers=11 calls=1
   calls: sub_8151d0
*/
void sub_816460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816460ULL || rel >= 0x816500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816500 size=384 callers=7 calls=1
   calls: sub_8151d0
*/
void sub_816500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816500ULL || rel >= 0x816680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816680 size=320 callers=6 calls=1
   calls: sub_8151d0
*/
void sub_816680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816680ULL || rel >= 0x8167c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008167c0 size=288 callers=3 calls=1
   calls: sub_8151d0
*/
void sub_8167c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8167c0ULL || rel >= 0x8168e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008168e0 size=48 callers=1 calls=0
*/
void sub_8168e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8168e0ULL || rel >= 0x816910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816910 size=32 callers=2 calls=0
*/
void sub_816910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816910ULL || rel >= 0x816930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816930 size=48 callers=1 calls=0
*/
void sub_816930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816930ULL || rel >= 0x816960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816960 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816960ULL || rel >= 0x8169a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008169a0 size=64 callers=1 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8169a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8169a0ULL || rel >= 0x8169e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008169e0 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8169e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8169e0ULL || rel >= 0x816a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816a20 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816a20ULL || rel >= 0x816a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816a60 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816a60ULL || rel >= 0x816aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816aa0 size=80 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816aa0ULL || rel >= 0x816af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816af0 size=80 callers=1 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816af0ULL || rel >= 0x816b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816b40 size=80 callers=3 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816b40ULL || rel >= 0x816b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816b90 size=48 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816b90ULL || rel >= 0x816bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816bc0 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816bc0ULL || rel >= 0x816c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816c00 size=128 callers=4 calls=4
   calls: sub_7ecc90, sub_7ef2b0, sub_7f13b0, sub_7fe1d0
*/
void sub_816c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816c00ULL || rel >= 0x816c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816c80 size=48 callers=1 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816c80ULL || rel >= 0x816cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816cb0 size=80 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816cb0ULL || rel >= 0x816d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816d00 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816d00ULL || rel >= 0x816d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816d40 size=96 callers=2 calls=3
   calls: sub_7ecc90, sub_7f0010, sub_7fe1d0
*/
void sub_816d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816d40ULL || rel >= 0x816da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816da0 size=96 callers=2 calls=3
   calls: sub_7ecc90, sub_7f0080, sub_7fe1d0
*/
void sub_816da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816da0ULL || rel >= 0x816e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816e00 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816e00ULL || rel >= 0x816e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816e40 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816e40ULL || rel >= 0x816e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816e80 size=48 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816e80ULL || rel >= 0x816eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816eb0 size=48 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816eb0ULL || rel >= 0x816ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816ee0 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816ee0ULL || rel >= 0x816f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816f20 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_816f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816f20ULL || rel >= 0x816f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816f60 size=48 callers=2 calls=1
   calls: sub_7fe290
*/
void sub_816f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816f60ULL || rel >= 0x816f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816f90 size=96 callers=2 calls=3
   calls: sub_7ecc90, sub_7f2590, sub_7fe1d0
*/
void sub_816f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816f90ULL || rel >= 0x816ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00816ff0 size=224 callers=2 calls=9
   calls: sub_7c9b60, sub_7ed1a0, sub_7ee6b0, sub_7f1940, sub_7f2020, sub_7fc430, sub_7fc470, sub_7fe1d0, sub_7fe250
*/
void sub_816ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x816ff0ULL || rel >= 0x8170d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008170d0 size=48 callers=2 calls=1
   calls: sub_7fe1e0
*/
void sub_8170d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8170d0ULL || rel >= 0x817100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817100 size=48 callers=2 calls=1
   calls: sub_7fe1e0
*/
void sub_817100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817100ULL || rel >= 0x817130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817130 size=48 callers=2 calls=1
   calls: sub_7fe1e0
*/
void sub_817130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817130ULL || rel >= 0x817160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817160 size=48 callers=2 calls=1
   calls: sub_7fe1e0
*/
void sub_817160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817160ULL || rel >= 0x817190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817190 size=48 callers=2 calls=1
   calls: sub_7fe1e0
*/
void sub_817190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817190ULL || rel >= 0x8171c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008171c0 size=48 callers=2 calls=1
   calls: sub_7fe1e0
*/
void sub_8171c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8171c0ULL || rel >= 0x8171f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008171f0 size=128 callers=2 calls=4
   calls: sub_7eb130, sub_7fe200, sub_7fe240, sub_8021d0
*/
void sub_8171f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8171f0ULL || rel >= 0x817270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817270 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817270ULL || rel >= 0x8172b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008172b0 size=192 callers=2 calls=3
   calls: sub_7ecc90, sub_7f2fe0, sub_7fe1d0
*/
void sub_8172b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8172b0ULL || rel >= 0x817370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817370 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817370ULL || rel >= 0x8173b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008173b0 size=96 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8173b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8173b0ULL || rel >= 0x817410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817410 size=80 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817410ULL || rel >= 0x817460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817460 size=80 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817460ULL || rel >= 0x8174b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008174b0 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8174b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8174b0ULL || rel >= 0x8174f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008174f0 size=80 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8174f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8174f0ULL || rel >= 0x817540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817540 size=96 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817540ULL || rel >= 0x8175a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008175a0 size=80 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8175a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8175a0ULL || rel >= 0x8175f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008175f0 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8175f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8175f0ULL || rel >= 0x817630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817630 size=224 callers=2 calls=8
   calls: sub_7cb690, sub_7ed1a0, sub_7ef2b0, sub_7f1400, sub_7fc430, sub_7fc470, sub_7fe1d0, sub_7fe250
*/
void sub_817630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817630ULL || rel >= 0x817710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817710 size=96 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817710ULL || rel >= 0x817770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817770 size=64 callers=2 calls=4
   calls: sub_7ecc90, sub_7f1e00, sub_7fe1d0, sub_7fe250
*/
void sub_817770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817770ULL || rel >= 0x8177b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008177b0 size=64 callers=2 calls=4
   calls: sub_7ecc90, sub_7f1a50, sub_7fe1d0, sub_7fe250
*/
void sub_8177b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8177b0ULL || rel >= 0x8177f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008177f0 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8177f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8177f0ULL || rel >= 0x817830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817830 size=48 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817830ULL || rel >= 0x817860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817860 size=96 callers=2 calls=3
   calls: sub_7ecc90, sub_7f13e0, sub_7fe1d0
*/
void sub_817860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817860ULL || rel >= 0x8178c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008178c0 size=80 callers=2 calls=3
   calls: sub_7ecc90, sub_7f19d0, sub_7fe1d0
*/
void sub_8178c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8178c0ULL || rel >= 0x817910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817910 size=112 callers=2 calls=3
   calls: sub_7ecc90, sub_7f15a0, sub_7fe1d0
*/
void sub_817910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817910ULL || rel >= 0x817980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817980 size=112 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817980ULL || rel >= 0x8179f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008179f0 size=48 callers=1 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8179f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8179f0ULL || rel >= 0x817a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817a20 size=48 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817a20ULL || rel >= 0x817a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817a50 size=48 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817a50ULL || rel >= 0x817a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817a80 size=240 callers=2 calls=3
   calls: sub_7ecc90, sub_7f1000, sub_7fe1d0
*/
void sub_817a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817a80ULL || rel >= 0x817b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817b70 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817b70ULL || rel >= 0x817bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817bb0 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817bb0ULL || rel >= 0x817bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817bf0 size=80 callers=2 calls=1
   calls: sub_7fe1e0
*/
void sub_817bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817bf0ULL || rel >= 0x817c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817c40 size=32 callers=2 calls=1
   calls: sub_7fe1e0
*/
void sub_817c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817c40ULL || rel >= 0x817c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817c60 size=32 callers=2 calls=1
   calls: sub_7fe1e0
*/
void sub_817c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817c60ULL || rel >= 0x817c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817c80 size=48 callers=2 calls=1
   calls: sub_7fe330
*/
void sub_817c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817c80ULL || rel >= 0x817cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817cb0 size=48 callers=1 calls=1
   calls: sub_7fe330
*/
void sub_817cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817cb0ULL || rel >= 0x817ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817ce0 size=48 callers=2 calls=1
   calls: sub_7fe350
*/
void sub_817ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817ce0ULL || rel >= 0x817d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817d10 size=48 callers=2 calls=1
   calls: sub_7fe350
*/
void sub_817d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817d10ULL || rel >= 0x817d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817d40 size=48 callers=2 calls=1
   calls: sub_7fe350
*/
void sub_817d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817d40ULL || rel >= 0x817d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817d70 size=64 callers=7 calls=2
   calls: sub_7ed1a0, sub_7fe1d0
*/
void sub_817d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817d70ULL || rel >= 0x817db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817db0 size=48 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_817db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817db0ULL || rel >= 0x817de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817de0 size=32 callers=2 calls=1
   calls: sub_7fe310
*/
void sub_817de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817de0ULL || rel >= 0x817e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817e00 size=48 callers=2 calls=1
   calls: sub_7fe310
*/
void sub_817e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817e00ULL || rel >= 0x817e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817e30 size=48 callers=2 calls=1
   calls: sub_7fe310
*/
void sub_817e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817e30ULL || rel >= 0x817e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817e60 size=48 callers=2 calls=3
   calls: sub_7ecc90, sub_7ee810, sub_7fe1d0
*/
void sub_817e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817e60ULL || rel >= 0x817e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817e90 size=64 callers=2 calls=3
   calls: sub_7ecc90, sub_7ee810, sub_7fe1d0
*/
void sub_817e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817e90ULL || rel >= 0x817ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817ed0 size=48 callers=2 calls=3
   calls: sub_7ecc90, sub_7ee810, sub_7fe1d0
*/
void sub_817ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817ed0ULL || rel >= 0x817f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817f00 size=48 callers=2 calls=3
   calls: sub_7ecc90, sub_7ee810, sub_7fe1d0
*/
void sub_817f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817f00ULL || rel >= 0x817f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817f30 size=48 callers=2 calls=3
   calls: sub_7ecc90, sub_7ee810, sub_7fe1d0
*/
void sub_817f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817f30ULL || rel >= 0x817f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817f60 size=64 callers=2 calls=3
   calls: sub_7ecc90, sub_7ee810, sub_7fe1d0
*/
void sub_817f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817f60ULL || rel >= 0x817fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00817fa0 size=96 callers=2 calls=6
   calls: sub_7ecc90, sub_7ee810, sub_7f3700, sub_7fc7d0, sub_7fc870, sub_7fe1d0
*/
void sub_817fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x817fa0ULL || rel >= 0x818000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818000 size=64 callers=1 calls=4
   calls: sub_7ecc90, sub_7ee810, sub_7f3700, sub_7fe1d0
*/
void sub_818000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818000ULL || rel >= 0x818040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818040 size=64 callers=2 calls=4
   calls: sub_7ecc90, sub_7ee810, sub_7f3700, sub_7fe1d0
*/
void sub_818040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818040ULL || rel >= 0x818080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818080 size=64 callers=2 calls=4
   calls: sub_7ecc90, sub_7ee810, sub_7f3700, sub_7fe1d0
*/
void sub_818080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818080ULL || rel >= 0x8180c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008180c0 size=64 callers=2 calls=4
   calls: sub_7ecc90, sub_7ee810, sub_7f3700, sub_7fe1d0
*/
void sub_8180c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8180c0ULL || rel >= 0x818100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818100 size=64 callers=2 calls=5
   calls: sub_7ecc90, sub_7ee810, sub_7f3700, sub_7fc7e0, sub_7fe1d0
*/
void sub_818100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818100ULL || rel >= 0x818140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818140 size=48 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_818140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818140ULL || rel >= 0x818170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818170 size=48 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_818170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818170ULL || rel >= 0x8181a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008181a0 size=48 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8181a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8181a0ULL || rel >= 0x8181d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008181d0 size=32 callers=2 calls=1
   calls: sub_7fe2f0
*/
void sub_8181d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8181d0ULL || rel >= 0x8181f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008181f0 size=32 callers=2 calls=1
   calls: sub_7fe2f0
*/
void sub_8181f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8181f0ULL || rel >= 0x818210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818210 size=48 callers=2 calls=2
   calls: sub_7fe2d0, sub_800990
*/
void sub_818210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818210ULL || rel >= 0x818240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818240 size=48 callers=2 calls=2
   calls: sub_7fe2d0, sub_800990
*/
void sub_818240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818240ULL || rel >= 0x818270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818270 size=112 callers=1 calls=3
   calls: sub_7cac80, sub_7fe2d0, sub_800990
*/
void sub_818270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818270ULL || rel >= 0x8182e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008182e0 size=48 callers=2 calls=1
   calls: sub_7fe320
*/
void sub_8182e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8182e0ULL || rel >= 0x818310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818310 size=48 callers=2 calls=1
   calls: sub_7fe360
*/
void sub_818310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818310ULL || rel >= 0x818340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818340 size=80 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_818340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818340ULL || rel >= 0x818390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818390 size=80 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_818390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818390ULL || rel >= 0x8183e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008183e0 size=80 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8183e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8183e0ULL || rel >= 0x818430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818430 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_818430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818430ULL || rel >= 0x818470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818470 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_818470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818470ULL || rel >= 0x8184b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008184b0 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8184b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8184b0ULL || rel >= 0x8184f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008184f0 size=96 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8184f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8184f0ULL || rel >= 0x818550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818550 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_818550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818550ULL || rel >= 0x818590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818590 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_818590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818590ULL || rel >= 0x8185d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008185d0 size=16 callers=2 calls=0
*/
void sub_8185d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8185d0ULL || rel >= 0x8185e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008185e0 size=16 callers=2 calls=0
*/
void sub_8185e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8185e0ULL || rel >= 0x8185f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008185f0 size=16 callers=2 calls=0
*/
void sub_8185f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8185f0ULL || rel >= 0x818600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818600 size=16 callers=2 calls=0
*/
void sub_818600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818600ULL || rel >= 0x818610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818610 size=16 callers=2 calls=0
*/
void sub_818610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818610ULL || rel >= 0x818620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818620 size=16 callers=2 calls=0
*/
void sub_818620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818620ULL || rel >= 0x818630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818630 size=16 callers=2 calls=0
*/
void sub_818630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818630ULL || rel >= 0x818640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818640 size=16 callers=2 calls=0
*/
void sub_818640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818640ULL || rel >= 0x818650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818650 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_818650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818650ULL || rel >= 0x818690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818690 size=64 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_818690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818690ULL || rel >= 0x8186d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008186d0 size=80 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_8186d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8186d0ULL || rel >= 0x818720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818720 size=80 callers=2 calls=2
   calls: sub_7ecc90, sub_7fe1d0
*/
void sub_818720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818720ULL || rel >= 0x818770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818770 size=16 callers=0 calls=0
*/
void sub_818770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818770ULL || rel >= 0x818780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818780 size=16 callers=0 calls=0
*/
void sub_818780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818780ULL || rel >= 0x818790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818790 size=128 callers=0 calls=0
*/
void sub_818790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818790ULL || rel >= 0x818810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818810 size=32 callers=0 calls=0
*/
void sub_818810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818810ULL || rel >= 0x818830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818830 size=192 callers=0 calls=4
   calls: sub_7e8c70, sub_7ee6b0, sub_7ef230, sub_7ef3d0
*/
void sub_818830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818830ULL || rel >= 0x8188f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008188f0 size=192 callers=0 calls=7
   calls: sub_7e8c60, sub_7e8d00, sub_7e9ba0, sub_7eafc0, sub_7eb050, sub_7ee6b0, sub_7ef230
*/
void sub_8188f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8188f0ULL || rel >= 0x8189b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008189b0 size=16 callers=0 calls=0
*/
void sub_8189b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8189b0ULL || rel >= 0x8189c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008189c0 size=32 callers=0 calls=0
*/
void sub_8189c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8189c0ULL || rel >= 0x8189e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008189e0 size=32 callers=0 calls=0
*/
void sub_8189e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8189e0ULL || rel >= 0x818a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818a00 size=32 callers=0 calls=0
*/
void sub_818a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818a00ULL || rel >= 0x818a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818a20 size=32 callers=0 calls=0
*/
void sub_818a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818a20ULL || rel >= 0x818a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818a40 size=32 callers=0 calls=0
*/
void sub_818a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818a40ULL || rel >= 0x818a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818a60 size=304 callers=0 calls=6
   calls: sub_7e8c60, sub_7e8c70, sub_7e9a10, sub_7e9ba0, sub_7eafc0, sub_7eb050
*/
void sub_818a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818a60ULL || rel >= 0x818b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818b90 size=160 callers=0 calls=5
   calls: sub_7e8c60, sub_7e8d00, sub_7e9ba0, sub_7eafc0, sub_7eb050
*/
void sub_818b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818b90ULL || rel >= 0x818c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818c30 size=128 callers=0 calls=4
   calls: sub_7e8c60, sub_7e9ba0, sub_7eafc0, sub_7eb050
*/
void sub_818c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818c30ULL || rel >= 0x818cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818cb0 size=224 callers=0 calls=9
   calls: sub_818d90, sub_819600, sub_819690, sub_8196a0, sub_8196b0, sub_8196c0, sub_8198f0, sub_81a440, sub_81be40
*/
void sub_818cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818cb0ULL || rel >= 0x818d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818d90 size=256 callers=1 calls=9
   calls: sub_7ef540, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_8196a0, sub_8196d0, sub_819890, sub_819b00
*/
void sub_818d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818d90ULL || rel >= 0x818e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818e90 size=256 callers=0 calls=11
   calls: sub_7ef540, sub_7ef6a0, sub_7efe00, sub_7f00f0, sub_818f90, sub_819600, sub_819690, sub_8196c0, sub_8196d0, sub_8198c0, sub_81a440
*/
void sub_818e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818e90ULL || rel >= 0x818f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00818f90 size=464 callers=1 calls=12
   calls: sub_7eef50, sub_7ef540, sub_7ef6a0, sub_7efe00, sub_7f00f0, sub_803c60, sub_803d20, sub_803d60, sub_819b00, sub_819c00, sub_819c80, sub_81aa40
*/
void sub_818f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x818f90ULL || rel >= 0x819160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819160 size=448 callers=0 calls=15
   calls: sub_7eef50, sub_7ef540, sub_7ef6a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196c0, sub_8196d0, sub_8198c0, sub_819b00
   ... +3 more
*/
void sub_819160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819160ULL || rel >= 0x819320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819320 size=448 callers=0 calls=18
   calls: sub_7ed660, sub_7ef2b0, sub_7fe1d0, sub_7fe230, sub_8017e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196a0, sub_8196d0
   ... +6 more
*/
void sub_819320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819320ULL || rel >= 0x8194e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008194e0 size=160 callers=0 calls=7
   calls: sub_819600, sub_819690, sub_8196a0, sub_8196c0, sub_819890, sub_81a440, sub_81a7a0
*/
void sub_8194e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8194e0ULL || rel >= 0x819580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819580 size=128 callers=0 calls=0
*/
void sub_819580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819580ULL || rel >= 0x819600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819600 size=16 callers=1633 calls=0
*/
void sub_819600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819600ULL || rel >= 0x819610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819610 size=32 callers=5 calls=1
   calls: sub_7e9830
*/
void sub_819610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819610ULL || rel >= 0x819630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819630 size=16 callers=19 calls=0
*/
void sub_819630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819630ULL || rel >= 0x819640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819640 size=16 callers=272 calls=0
*/
void sub_819640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819640ULL || rel >= 0x819650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819650 size=16 callers=1 calls=0
*/
void sub_819650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819650ULL || rel >= 0x819660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819660 size=16 callers=13 calls=0
*/
void sub_819660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819660ULL || rel >= 0x819670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819670 size=16 callers=1 calls=0
*/
void sub_819670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819670ULL || rel >= 0x819680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819680 size=16 callers=19 calls=0
*/
void sub_819680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819680ULL || rel >= 0x819690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819690 size=16 callers=90 calls=0
*/
void sub_819690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819690ULL || rel >= 0x8196a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008196a0 size=16 callers=185 calls=0
*/
void sub_8196a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8196a0ULL || rel >= 0x8196b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008196b0 size=16 callers=123 calls=0
*/
void sub_8196b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8196b0ULL || rel >= 0x8196c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008196c0 size=16 callers=10 calls=0
*/
void sub_8196c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8196c0ULL || rel >= 0x8196d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008196d0 size=48 callers=459 calls=1
   calls: sub_7fe1d0
*/
void sub_8196d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8196d0ULL || rel >= 0x819700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819700 size=48 callers=2 calls=1
   calls: sub_7fe250
*/
void sub_819700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819700ULL || rel >= 0x819730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819730 size=64 callers=2 calls=3
   calls: sub_7e9ba0, sub_7fe210, sub_802470
*/
void sub_819730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819730ULL || rel >= 0x819770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819770 size=32 callers=2 calls=1
   calls: sub_7fe1e0
*/
void sub_819770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819770ULL || rel >= 0x819790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819790 size=16 callers=14 calls=0
*/
void sub_819790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819790ULL || rel >= 0x8197a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008197a0 size=16 callers=40 calls=0
*/
void sub_8197a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8197a0ULL || rel >= 0x8197b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008197b0 size=48 callers=2 calls=1
   calls: sub_7e9830
*/
void sub_8197b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8197b0ULL || rel >= 0x8197e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008197e0 size=16 callers=6 calls=0
*/
void sub_8197e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8197e0ULL || rel >= 0x8197f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008197f0 size=16 callers=37 calls=0
*/
void sub_8197f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8197f0ULL || rel >= 0x819800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819800 size=16 callers=1 calls=0
*/
void sub_819800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819800ULL || rel >= 0x819810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819810 size=32 callers=14 calls=1
   calls: sub_7fe1e0
*/
void sub_819810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819810ULL || rel >= 0x819830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819830 size=16 callers=1 calls=0
*/
void sub_819830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819830ULL || rel >= 0x819840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819840 size=16 callers=4 calls=0
*/
void sub_819840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819840ULL || rel >= 0x819850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819850 size=16 callers=3 calls=0
*/
void sub_819850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819850ULL || rel >= 0x819860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819860 size=48 callers=2 calls=1
   calls: sub_7fe250
*/
void sub_819860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819860ULL || rel >= 0x819890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819890 size=48 callers=4 calls=1
   calls: sub_7fe1d0
*/
void sub_819890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819890ULL || rel >= 0x8198c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008198c0 size=48 callers=29 calls=1
   calls: sub_7fe1d0
*/
void sub_8198c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8198c0ULL || rel >= 0x8198f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008198f0 size=32 callers=6 calls=2
   calls: sub_7fe350, sub_7ff460
*/
void sub_8198f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8198f0ULL || rel >= 0x819910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819910 size=16 callers=1 calls=0
*/
void sub_819910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819910ULL || rel >= 0x819920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819920 size=16 callers=4 calls=0
*/
void sub_819920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819920ULL || rel >= 0x819930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819930 size=16 callers=4 calls=0
*/
void sub_819930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819930ULL || rel >= 0x819940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819940 size=16 callers=2 calls=0
*/
void sub_819940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819940ULL || rel >= 0x819950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819950 size=16 callers=2 calls=0
*/
void sub_819950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819950ULL || rel >= 0x819960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819960 size=16 callers=1 calls=0
*/
void sub_819960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819960ULL || rel >= 0x819970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819970 size=48 callers=12 calls=1
   calls: sub_7fe1e0
*/
void sub_819970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819970ULL || rel >= 0x8199a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008199a0 size=112 callers=8 calls=5
   calls: sub_7cb2c0, sub_7cb490, sub_7ed1b0, sub_7fc350, sub_7fe1d0
*/
void sub_8199a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8199a0ULL || rel >= 0x819a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819a10 size=16 callers=42 calls=0
*/
void sub_819a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819a10ULL || rel >= 0x819a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819a20 size=16 callers=5 calls=0
*/
void sub_819a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819a20ULL || rel >= 0x819a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819a30 size=48 callers=6 calls=1
   calls: sub_7fe250
*/
void sub_819a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819a30ULL || rel >= 0x819a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819a60 size=16 callers=2 calls=0
*/
void sub_819a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819a60ULL || rel >= 0x819a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819a70 size=16 callers=2 calls=0
*/
void sub_819a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819a70ULL || rel >= 0x819a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819a80 size=64 callers=29 calls=2
   calls: sub_828cf0, sub_864070
*/
void sub_819a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819a80ULL || rel >= 0x819ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819ac0 size=64 callers=26 calls=2
   calls: sub_828d00, sub_8641a0
*/
void sub_819ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819ac0ULL || rel >= 0x819b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819b00 size=64 callers=20 calls=2
   calls: sub_828f40, sub_82ec20
*/
void sub_819b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819b00ULL || rel >= 0x819b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819b40 size=64 callers=1 calls=2
   calls: sub_828a00, sub_84dde0
*/
void sub_819b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819b40ULL || rel >= 0x819b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819b80 size=64 callers=24 calls=2
   calls: sub_8289b0, sub_84d950
*/
void sub_819b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819b80ULL || rel >= 0x819bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819bc0 size=64 callers=5 calls=2
   calls: sub_828c60, sub_8542e0
*/
void sub_819bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819bc0ULL || rel >= 0x819c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819c00 size=64 callers=2 calls=2
   calls: sub_828b80, sub_84a7a0
*/
void sub_819c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819c00ULL || rel >= 0x819c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819c40 size=64 callers=2 calls=2
   calls: sub_8289e0, sub_8561f0
*/
void sub_819c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819c40ULL || rel >= 0x819c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819c80 size=64 callers=32 calls=2
   calls: sub_8289a0, sub_82c6b0
*/
void sub_819c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819c80ULL || rel >= 0x819cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819cc0 size=64 callers=2 calls=2
   calls: sub_828420, sub_836da0
*/
void sub_819cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819cc0ULL || rel >= 0x819d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819d00 size=64 callers=51 calls=2
   calls: sub_8288f0, sub_836520
*/
void sub_819d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819d00ULL || rel >= 0x819d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819d40 size=176 callers=2 calls=5
   calls: sub_7f8820, sub_803c60, sub_8288f0, sub_82d990, sub_836520
*/
void sub_819d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819d40ULL || rel >= 0x819df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819df0 size=64 callers=79 calls=2
   calls: sub_828b30, sub_84a910
*/
void sub_819df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819df0ULL || rel >= 0x819e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819e30 size=64 callers=8 calls=2
   calls: sub_828b70, sub_854180
*/
void sub_819e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819e30ULL || rel >= 0x819e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819e70 size=64 callers=2 calls=2
   calls: sub_828b60, sub_852610
*/
void sub_819e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819e70ULL || rel >= 0x819eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819eb0 size=64 callers=1 calls=2
   calls: sub_828b40, sub_8524e0
*/
void sub_819eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819eb0ULL || rel >= 0x819ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819ef0 size=64 callers=1 calls=2
   calls: sub_828b50, sub_863ab0
*/
void sub_819ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819ef0ULL || rel >= 0x819f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819f30 size=64 callers=7 calls=2
   calls: sub_828c10, sub_8549c0
*/
void sub_819f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819f30ULL || rel >= 0x819f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819f70 size=64 callers=8 calls=2
   calls: sub_828ac0, sub_84d780
*/
void sub_819f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819f70ULL || rel >= 0x819fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819fb0 size=64 callers=9 calls=2
   calls: sub_828950, sub_862a90
*/
void sub_819fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819fb0ULL || rel >= 0x819ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00819ff0 size=64 callers=2 calls=2
   calls: sub_828a10, sub_862cb0
*/
void sub_819ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819ff0ULL || rel >= 0x81a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a030 size=48 callers=119 calls=2
   calls: sub_828ae0, sub_840b50
*/
void sub_81a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a030ULL || rel >= 0x81a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a060 size=64 callers=6 calls=2
   calls: sub_828c20, sub_8565c0
*/
void sub_81a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a060ULL || rel >= 0x81a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a0a0 size=64 callers=2 calls=2
   calls: sub_828bc0, sub_857650
*/
void sub_81a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a0a0ULL || rel >= 0x81a0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a0e0 size=64 callers=21 calls=2
   calls: sub_828bd0, sub_856390
*/
void sub_81a0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a0e0ULL || rel >= 0x81a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a120 size=64 callers=8 calls=2
   calls: sub_828bb0, sub_857530
*/
void sub_81a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a120ULL || rel >= 0x81a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a160 size=48 callers=1 calls=2
   calls: sub_828c00, sub_8564b0
*/
void sub_81a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a160ULL || rel >= 0x81a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a190 size=64 callers=15 calls=2
   calls: sub_828c80, sub_82fa10
*/
void sub_81a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a190ULL || rel >= 0x81a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a1d0 size=64 callers=7 calls=2
   calls: sub_828c90, sub_839560
*/
void sub_81a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a1d0ULL || rel >= 0x81a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a210 size=64 callers=1 calls=2
   calls: sub_828ca0, sub_853f20
*/
void sub_81a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a210ULL || rel >= 0x81a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a250 size=64 callers=1 calls=2
   calls: sub_828cb0, sub_8530d0
*/
void sub_81a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a250ULL || rel >= 0x81a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a290 size=64 callers=13 calls=2
   calls: sub_828a20, sub_82b8b0
*/
void sub_81a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a290ULL || rel >= 0x81a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a2d0 size=64 callers=5 calls=2
   calls: sub_828a30, sub_8642b0
*/
void sub_81a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a2d0ULL || rel >= 0x81a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a310 size=64 callers=13 calls=2
   calls: sub_828a60, sub_8341a0
*/
void sub_81a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a310ULL || rel >= 0x81a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a350 size=64 callers=26 calls=2
   calls: sub_828a60, sub_8341a0
*/
void sub_81a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a350ULL || rel >= 0x81a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a390 size=32 callers=3 calls=1
   calls: sub_7fe1e0
*/
void sub_81a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a390ULL || rel >= 0x81a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a3b0 size=16 callers=3 calls=0
*/
void sub_81a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a3b0ULL || rel >= 0x81a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a3c0 size=64 callers=12 calls=2
   calls: sub_828970, sub_856d80
*/
void sub_81a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a3c0ULL || rel >= 0x81a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a400 size=64 callers=5 calls=2
   calls: sub_828b00, sub_857340
*/
void sub_81a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a400ULL || rel >= 0x81a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a440 size=48 callers=5 calls=2
   calls: sub_828ba0, sub_863bd0
*/
void sub_81a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a440ULL || rel >= 0x81a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a470 size=48 callers=1 calls=2
   calls: sub_828d10, sub_864790
*/
void sub_81a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a470ULL || rel >= 0x81a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a4a0 size=64 callers=7 calls=2
   calls: sub_828960, sub_856ad0
*/
void sub_81a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a4a0ULL || rel >= 0x81a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a4e0 size=48 callers=1 calls=2
   calls: sub_828820, sub_83ddc0
*/
void sub_81a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a4e0ULL || rel >= 0x81a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a510 size=64 callers=10 calls=2
   calls: sub_828bf0, sub_838f90
*/
void sub_81a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a510ULL || rel >= 0x81a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a550 size=64 callers=6 calls=2
   calls: sub_828cc0, sub_854b80
*/
void sub_81a550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a550ULL || rel >= 0x81a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a590 size=48 callers=5 calls=2
   calls: sub_828570, sub_82c210
*/
void sub_81a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a590ULL || rel >= 0x81a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a5c0 size=64 callers=43 calls=2
   calls: sub_829120, sub_850fb0
*/
void sub_81a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a5c0ULL || rel >= 0x81a600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a600 size=64 callers=4 calls=2
   calls: sub_828d30, sub_857770
*/
void sub_81a600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a600ULL || rel >= 0x81a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a640 size=48 callers=21 calls=2
   calls: sub_828990, sub_856020
*/
void sub_81a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a640ULL || rel >= 0x81a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a670 size=16 callers=1 calls=0
*/
void sub_81a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a670ULL || rel >= 0x81a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a680 size=48 callers=2 calls=2
   calls: sub_828d20, sub_855cb0
*/
void sub_81a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a680ULL || rel >= 0x81a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a6b0 size=48 callers=15 calls=2
   calls: sub_828be0, sub_855ba0
*/
void sub_81a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a6b0ULL || rel >= 0x81a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a6e0 size=64 callers=1 calls=2
   calls: sub_8289f0, sub_8636a0
*/
void sub_81a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a6e0ULL || rel >= 0x81a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a720 size=64 callers=2 calls=2
   calls: sub_828b20, sub_8559c0
*/
void sub_81a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a720ULL || rel >= 0x81a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a760 size=64 callers=6 calls=2
   calls: sub_828ad0, sub_8566e0
*/
void sub_81a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a760ULL || rel >= 0x81a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a7a0 size=48 callers=1 calls=2
   calls: sub_828910, sub_855db0
*/
void sub_81a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a7a0ULL || rel >= 0x81a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a7d0 size=64 callers=1 calls=2
   calls: sub_828c70, sub_853920
*/
void sub_81a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a7d0ULL || rel >= 0x81a810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a810 size=48 callers=1 calls=2
   calls: sub_828c50, sub_8551b0
*/
void sub_81a810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a810ULL || rel >= 0x81a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a840 size=64 callers=2 calls=2
   calls: sub_8287c0, sub_83c7b0
*/
void sub_81a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a840ULL || rel >= 0x81a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a880 size=64 callers=2 calls=2
   calls: sub_828aa0, sub_863990
*/
void sub_81a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a880ULL || rel >= 0x81a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a8c0 size=64 callers=1 calls=2
   calls: sub_828ab0, sub_864a80
*/
void sub_81a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a8c0ULL || rel >= 0x81a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a900 size=64 callers=1 calls=2
   calls: sub_828b10, sub_862f30
*/
void sub_81a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a900ULL || rel >= 0x81a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a940 size=64 callers=1 calls=2
   calls: sub_828cd0, sub_854e40
*/
void sub_81a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a940ULL || rel >= 0x81a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a980 size=64 callers=2 calls=2
   calls: sub_828a80, sub_853660
*/
void sub_81a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a980ULL || rel >= 0x81a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081a9c0 size=64 callers=3 calls=2
   calls: sub_828920, sub_847520
*/
void sub_81a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81a9c0ULL || rel >= 0x81aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081aa00 size=64 callers=1 calls=2
   calls: sub_828ce0, sub_863050
*/
void sub_81aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81aa00ULL || rel >= 0x81aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081aa40 size=48 callers=15 calls=2
   calls: sub_828900, sub_856990
*/
void sub_81aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81aa40ULL || rel >= 0x81aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081aa70 size=64 callers=21 calls=2
   calls: sub_828a40, sub_8557b0
*/
void sub_81aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81aa70ULL || rel >= 0x81aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081aab0 size=48 callers=10 calls=2
   calls: sub_828c40, sub_8643c0
*/
void sub_81aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81aab0ULL || rel >= 0x81aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081aae0 size=48 callers=2 calls=2
   calls: sub_828c30, sub_8644b0
*/
void sub_81aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81aae0ULL || rel >= 0x81ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081ab10 size=64 callers=2 calls=2
   calls: sub_828a90, sub_863ec0
*/
void sub_81ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81ab10ULL || rel >= 0x81ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081ab50 size=64 callers=4 calls=2
   calls: sub_828930, sub_855f20
*/
void sub_81ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81ab50ULL || rel >= 0x81ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081ab90 size=64 callers=5 calls=2
   calls: sub_8289d0, sub_864650
*/
void sub_81ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81ab90ULL || rel >= 0x81abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081abd0 size=64 callers=14 calls=2
   calls: sub_828560, sub_8401a0
*/
void sub_81abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81abd0ULL || rel >= 0x81ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081ac10 size=64 callers=3 calls=2
   calls: sub_828a70, sub_855080
*/
void sub_81ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81ac10ULL || rel >= 0x81ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081ac50 size=64 callers=1 calls=2
   calls: sub_828700, sub_846a60
*/
void sub_81ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81ac50ULL || rel >= 0x81ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081ac90 size=48 callers=1 calls=2
   calls: sub_828af0, sub_862e20
*/
void sub_81ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81ac90ULL || rel >= 0x81acc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081acc0 size=176 callers=11 calls=1
   calls: sub_7e9830
*/
void sub_81acc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81acc0ULL || rel >= 0x81ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081ad70 size=176 callers=1 calls=2
   calls: sub_7cc000, sub_7e9830
*/
void sub_81ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81ad70ULL || rel >= 0x81ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081ae20 size=176 callers=5 calls=3
   calls: sub_7ee6b0, sub_82ccb0, sub_82ce80
*/
void sub_81ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81ae20ULL || rel >= 0x81aed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081aed0 size=48 callers=3 calls=2
   calls: sub_7ed1e0, sub_7fe1d0
*/
void sub_81aed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81aed0ULL || rel >= 0x81af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081af00 size=320 callers=8 calls=4
   calls: sub_786ec0, sub_7eb4f0, sub_7eb510, sub_7eb530
*/
void sub_81af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81af00ULL || rel >= 0x81b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b040 size=80 callers=1 calls=4
   calls: sub_7ed1e0, sub_7eef40, sub_7f09c0, sub_7fe1d0
*/
void sub_81b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b040ULL || rel >= 0x81b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b090 size=112 callers=1 calls=3
   calls: sub_7c58b0, sub_7ca1c0, sub_7cb490
*/
void sub_81b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b090ULL || rel >= 0x81b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b100 size=256 callers=5 calls=8
   calls: sub_7c58b0, sub_7ca1c0, sub_7cb490, sub_7ed1e0, sub_7eef40, sub_7f09c0, sub_7fe1d0, sub_81af00
*/
void sub_81b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b100ULL || rel >= 0x81b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b200 size=48 callers=9 calls=2
   calls: sub_7ed1e0, sub_7fe1d0
*/
void sub_81b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b200ULL || rel >= 0x81b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b230 size=240 callers=0 calls=12
   calls: sub_780c60, sub_780da0, sub_7cbf80, sub_7e97b0, sub_7e9830, sub_7ed1e0, sub_7f0b70, sub_7fe1d0, sub_7fe250, sub_803600, sub_82afd0, sub_82b4f0
*/
void sub_81b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b230ULL || rel >= 0x81b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b320 size=272 callers=0 calls=10
   calls: sub_780c60, sub_7e97b0, sub_7e9830, sub_7ecc90, sub_7f0b70, sub_7fe1d0, sub_7fe250, sub_803600, sub_82afd0, sub_82b4f0
*/
void sub_81b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b320ULL || rel >= 0x81b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b430 size=208 callers=1 calls=9
   calls: sub_7e9830, sub_7ecc90, sub_7f0b70, sub_7fe1d0, sub_803c60, sub_803d20, sub_803d60, sub_828ae0, sub_840b50
*/
void sub_81b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b430ULL || rel >= 0x81b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b500 size=80 callers=2 calls=1
   calls: sub_7e9830
*/
void sub_81b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b500ULL || rel >= 0x81b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b550 size=96 callers=0 calls=2
   calls: sub_7cbf80, sub_7e9830
*/
void sub_81b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b550ULL || rel >= 0x81b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b5b0 size=96 callers=2 calls=3
   calls: sub_7cbf80, sub_7e97b0, sub_7e9830
*/
void sub_81b5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b5b0ULL || rel >= 0x81b610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b610 size=208 callers=4 calls=4
   calls: sub_7e9830, sub_7ed1e0, sub_7ef2b0, sub_7fe1d0
*/
void sub_81b610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b610ULL || rel >= 0x81b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b6e0 size=112 callers=0 calls=1
   calls: sub_7e9830
*/
void sub_81b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b6e0ULL || rel >= 0x81b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b750 size=80 callers=2 calls=3
   calls: sub_7e97b0, sub_7e9830, sub_7ebab0
*/
void sub_81b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b750ULL || rel >= 0x81b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b7a0 size=64 callers=2 calls=3
   calls: sub_7ed1e0, sub_7ef330, sub_7fe1d0
*/
void sub_81b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b7a0ULL || rel >= 0x81b7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b7e0 size=128 callers=14 calls=1
   calls: sub_7e9830
*/
void sub_81b7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b7e0ULL || rel >= 0x81b860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b860 size=112 callers=0 calls=4
   calls: sub_7e9830, sub_7ed1e0, sub_7f09c0, sub_7fe1d0
*/
void sub_81b860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b860ULL || rel >= 0x81b8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b8d0 size=96 callers=2 calls=4
   calls: sub_7e9a00, sub_7ed1e0, sub_7f09c0, sub_7fe1d0
*/
void sub_81b8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b8d0ULL || rel >= 0x81b930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081b930 size=560 callers=2 calls=5
   calls: sub_7cbf80, sub_7ed1e0, sub_7fe1d0, sub_828940, sub_863cf0
*/
void sub_81b930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81b930ULL || rel >= 0x81bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bb60 size=64 callers=2 calls=2
   calls: sub_7ed1e0, sub_7fe1d0
*/
void sub_81bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bb60ULL || rel >= 0x81bba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bba0 size=128 callers=8 calls=3
   calls: sub_780da0, sub_781040, sub_7810b0
*/
void sub_81bba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bba0ULL || rel >= 0x81bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bc20 size=256 callers=0 calls=9
   calls: sub_7ca1c0, sub_7cbf80, sub_7e97b0, sub_7e9830, sub_7ed1e0, sub_7ef4c0, sub_7fe1d0, sub_82afd0, sub_82b4f0
*/
void sub_81bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bc20ULL || rel >= 0x81bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bd20 size=32 callers=4 calls=2
   calls: sub_82afd0, sub_82b4f0
*/
void sub_81bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bd20ULL || rel >= 0x81bd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bd40 size=144 callers=0 calls=2
   calls: sub_7e97b0, sub_7e9830
*/
void sub_81bd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bd40ULL || rel >= 0x81bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bdd0 size=64 callers=0 calls=1
   calls: sub_7eb540
*/
void sub_81bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bdd0ULL || rel >= 0x81be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081be10 size=48 callers=6 calls=2
   calls: sub_7ed1e0, sub_7fe1d0
*/
void sub_81be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81be10ULL || rel >= 0x81be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081be40 size=64 callers=23 calls=1
   calls: sub_80d4b0
*/
void sub_81be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81be40ULL || rel >= 0x81be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081be80 size=16 callers=5 calls=0
*/
void sub_81be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81be80ULL || rel >= 0x81be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081be90 size=16 callers=5 calls=0
*/
void sub_81be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81be90ULL || rel >= 0x81bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bea0 size=48 callers=5 calls=1
   calls: sub_7fe1d0
*/
void sub_81bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bea0ULL || rel >= 0x81bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bed0 size=64 callers=7 calls=2
   calls: sub_7cb490, sub_7fe1d0
*/
void sub_81bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bed0ULL || rel >= 0x81bf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bf10 size=16 callers=2 calls=0
*/
void sub_81bf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bf10ULL || rel >= 0x81bf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bf20 size=16 callers=1 calls=0
*/
void sub_81bf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bf20ULL || rel >= 0x81bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bf30 size=16 callers=1 calls=0
*/
void sub_81bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bf30ULL || rel >= 0x81bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bf40 size=80 callers=23 calls=3
   calls: sub_7cad50, sub_7fe250, sub_803600
*/
void sub_81bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bf40ULL || rel >= 0x81bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bf90 size=48 callers=1 calls=3
   calls: sub_7ed1e0, sub_7ef330, sub_7fe1d0
*/
void sub_81bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bf90ULL || rel >= 0x81bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081bfc0 size=160 callers=9 calls=6
   calls: sub_7ed1e0, sub_7eef50, sub_7ef4c0, sub_7fe1d0, sub_7fe1e0, sub_7ffe20
*/
void sub_81bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81bfc0ULL || rel >= 0x81c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c060 size=160 callers=2 calls=6
   calls: sub_7ed1e0, sub_7eef50, sub_7ef4c0, sub_7fe1d0, sub_7fe1e0, sub_7ffe20
*/
void sub_81c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c060ULL || rel >= 0x81c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c100 size=176 callers=4 calls=4
   calls: sub_7cbf80, sub_7ee6b0, sub_804200, sub_804480
*/
void sub_81c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c100ULL || rel >= 0x81c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c1b0 size=112 callers=17 calls=3
   calls: sub_7ca1c0, sub_7ca890, sub_7fe1d0
*/
void sub_81c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c1b0ULL || rel >= 0x81c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c220 size=144 callers=4 calls=6
   calls: sub_7cb2c0, sub_7cb490, sub_7ed1b0, sub_7fc350, sub_7fe1d0, sub_84f4e0
*/
void sub_81c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c220ULL || rel >= 0x81c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c2b0 size=80 callers=1 calls=2
   calls: sub_7caaf0, sub_7cbcf0
*/
void sub_81c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c2b0ULL || rel >= 0x81c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c300 size=112 callers=1 calls=3
   calls: sub_7caa70, sub_7cb490, sub_7cb850
*/
void sub_81c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c300ULL || rel >= 0x81c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c370 size=48 callers=1 calls=2
   calls: sub_82afd0, sub_82b4f0
*/
void sub_81c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c370ULL || rel >= 0x81c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c3a0 size=16 callers=3 calls=0
*/
void sub_81c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c3a0ULL || rel >= 0x81c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c3b0 size=128 callers=0 calls=0
*/
void sub_81c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c3b0ULL || rel >= 0x81c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c430 size=48 callers=1 calls=1
   calls: sub_82a930
*/
void sub_81c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c430ULL || rel >= 0x81c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c460 size=304 callers=2 calls=19
   calls: sub_7cb420, sub_7cb490, sub_7cb690, sub_7fe1d0, sub_7fe260, sub_8028d0, sub_803d10, sub_80dd60, sub_810900, sub_812bd0, sub_812c50, sub_828450
   ... +7 more
*/
void sub_81c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c460ULL || rel >= 0x81c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c590 size=16 callers=0 calls=0
*/
void sub_81c590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c590ULL || rel >= 0x81c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c5a0 size=16 callers=0 calls=0
*/
void sub_81c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c5a0ULL || rel >= 0x81c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c5b0 size=128 callers=0 calls=0
*/
void sub_81c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c5b0ULL || rel >= 0x81c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0081c630 size=48608 callers=1 calls=239
   calls: sub_81c430, sub_829330, sub_829480, sub_829e20, sub_82a270, sub_82a760, sub_82b880, sub_82bdc0, sub_82bf20, sub_82c050, sub_82c1e0, sub_82c300
   ... +227 more
*/
void sub_81c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81c630ULL || rel >= 0x828410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828410 size=16 callers=2 calls=0
*/
void sub_828410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828410ULL || rel >= 0x828420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828420 size=16 callers=4 calls=0
*/
void sub_828420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828420ULL || rel >= 0x828430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828430 size=16 callers=2 calls=0
*/
void sub_828430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828430ULL || rel >= 0x828440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828440 size=16 callers=3 calls=0
*/
void sub_828440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828440ULL || rel >= 0x828450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828450 size=16 callers=6 calls=0
*/
void sub_828450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828450ULL || rel >= 0x828460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828460 size=16 callers=3 calls=0
*/
void sub_828460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828460ULL || rel >= 0x828470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828470 size=16 callers=4 calls=0
*/
void sub_828470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828470ULL || rel >= 0x828480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828480 size=16 callers=1 calls=0
*/
void sub_828480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828480ULL || rel >= 0x828490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828490 size=16 callers=3 calls=0
*/
void sub_828490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828490ULL || rel >= 0x8284a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008284a0 size=16 callers=3 calls=0
*/
void sub_8284a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8284a0ULL || rel >= 0x8284b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008284b0 size=16 callers=1 calls=0
*/
void sub_8284b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8284b0ULL || rel >= 0x8284c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008284c0 size=16 callers=1 calls=0
*/
void sub_8284c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8284c0ULL || rel >= 0x8284d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008284d0 size=16 callers=5 calls=0
*/
void sub_8284d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8284d0ULL || rel >= 0x8284e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008284e0 size=16 callers=5 calls=0
*/
void sub_8284e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8284e0ULL || rel >= 0x8284f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008284f0 size=16 callers=3 calls=0
*/
void sub_8284f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8284f0ULL || rel >= 0x828500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828500 size=16 callers=2 calls=0
*/
void sub_828500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828500ULL || rel >= 0x828510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828510 size=16 callers=3 calls=0
*/
void sub_828510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828510ULL || rel >= 0x828520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828520 size=16 callers=3 calls=0
*/
void sub_828520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828520ULL || rel >= 0x828530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828530 size=16 callers=2 calls=0
*/
void sub_828530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828530ULL || rel >= 0x828540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828540 size=16 callers=1 calls=0
*/
void sub_828540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828540ULL || rel >= 0x828550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828550 size=16 callers=7 calls=0
*/
void sub_828550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828550ULL || rel >= 0x828560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828560 size=16 callers=3 calls=0
*/
void sub_828560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828560ULL || rel >= 0x828570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828570 size=16 callers=15 calls=0
*/
void sub_828570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828570ULL || rel >= 0x828580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828580 size=16 callers=2 calls=0
*/
void sub_828580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828580ULL || rel >= 0x828590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828590 size=16 callers=1 calls=0
*/
void sub_828590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828590ULL || rel >= 0x8285a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008285a0 size=16 callers=1 calls=0
*/
void sub_8285a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8285a0ULL || rel >= 0x8285b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008285b0 size=16 callers=6 calls=0
*/
void sub_8285b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8285b0ULL || rel >= 0x8285c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008285c0 size=16 callers=1 calls=0
*/
void sub_8285c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8285c0ULL || rel >= 0x8285d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008285d0 size=16 callers=1 calls=0
*/
void sub_8285d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8285d0ULL || rel >= 0x8285e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008285e0 size=16 callers=1 calls=0
*/
void sub_8285e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8285e0ULL || rel >= 0x8285f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008285f0 size=16 callers=1 calls=0
*/
void sub_8285f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8285f0ULL || rel >= 0x828600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828600 size=16 callers=12 calls=0
*/
void sub_828600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828600ULL || rel >= 0x828610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828610 size=16 callers=1 calls=0
*/
void sub_828610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828610ULL || rel >= 0x828620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828620 size=16 callers=1 calls=0
*/
void sub_828620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828620ULL || rel >= 0x828630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828630 size=16 callers=1 calls=0
*/
void sub_828630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828630ULL || rel >= 0x828640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828640 size=16 callers=1 calls=0
*/
void sub_828640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828640ULL || rel >= 0x828650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828650 size=16 callers=2 calls=0
*/
void sub_828650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828650ULL || rel >= 0x828660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828660 size=16 callers=1 calls=0
*/
void sub_828660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828660ULL || rel >= 0x828670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828670 size=16 callers=2 calls=0
*/
void sub_828670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828670ULL || rel >= 0x828680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828680 size=16 callers=2 calls=0
*/
void sub_828680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828680ULL || rel >= 0x828690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828690 size=16 callers=1 calls=0
*/
void sub_828690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828690ULL || rel >= 0x8286a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008286a0 size=16 callers=2 calls=0
*/
void sub_8286a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8286a0ULL || rel >= 0x8286b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008286b0 size=16 callers=2 calls=0
*/
void sub_8286b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8286b0ULL || rel >= 0x8286c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008286c0 size=16 callers=1 calls=0
*/
void sub_8286c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8286c0ULL || rel >= 0x8286d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008286d0 size=16 callers=2 calls=0
*/
void sub_8286d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8286d0ULL || rel >= 0x8286e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008286e0 size=16 callers=2 calls=0
*/
void sub_8286e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8286e0ULL || rel >= 0x8286f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008286f0 size=16 callers=3 calls=0
*/
void sub_8286f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8286f0ULL || rel >= 0x828700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828700 size=16 callers=2 calls=0
*/
void sub_828700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828700ULL || rel >= 0x828710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828710 size=16 callers=2 calls=0
*/
void sub_828710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828710ULL || rel >= 0x828720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828720 size=16 callers=2 calls=0
*/
void sub_828720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828720ULL || rel >= 0x828730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828730 size=16 callers=2 calls=0
*/
void sub_828730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828730ULL || rel >= 0x828740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828740 size=16 callers=2 calls=0
*/
void sub_828740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828740ULL || rel >= 0x828750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828750 size=16 callers=2 calls=0
*/
void sub_828750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828750ULL || rel >= 0x828760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828760 size=16 callers=21 calls=0
*/
void sub_828760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828760ULL || rel >= 0x828770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828770 size=16 callers=1 calls=0
*/
void sub_828770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828770ULL || rel >= 0x828780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828780 size=16 callers=2 calls=0
*/
void sub_828780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828780ULL || rel >= 0x828790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828790 size=16 callers=1 calls=0
*/
void sub_828790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828790ULL || rel >= 0x8287a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008287a0 size=16 callers=1 calls=0
*/
void sub_8287a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8287a0ULL || rel >= 0x8287b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008287b0 size=16 callers=1 calls=0
*/
void sub_8287b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8287b0ULL || rel >= 0x8287c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008287c0 size=16 callers=2 calls=0
*/
void sub_8287c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8287c0ULL || rel >= 0x8287d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008287d0 size=16 callers=1 calls=0
*/
void sub_8287d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8287d0ULL || rel >= 0x8287e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008287e0 size=16 callers=1 calls=0
*/
void sub_8287e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8287e0ULL || rel >= 0x8287f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008287f0 size=16 callers=1 calls=0
*/
void sub_8287f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8287f0ULL || rel >= 0x828800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828800 size=16 callers=1 calls=0
*/
void sub_828800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828800ULL || rel >= 0x828810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828810 size=16 callers=1 calls=0
*/
void sub_828810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828810ULL || rel >= 0x828820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828820 size=16 callers=2 calls=0
*/
void sub_828820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828820ULL || rel >= 0x828830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828830 size=16 callers=3 calls=0
*/
void sub_828830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828830ULL || rel >= 0x828840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828840 size=16 callers=1 calls=0
*/
void sub_828840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828840ULL || rel >= 0x828850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828850 size=16 callers=1 calls=0
*/
void sub_828850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828850ULL || rel >= 0x828860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828860 size=16 callers=1 calls=0
*/
void sub_828860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828860ULL || rel >= 0x828870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828870 size=16 callers=1 calls=0
*/
void sub_828870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828870ULL || rel >= 0x828880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828880 size=16 callers=2 calls=0
*/
void sub_828880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828880ULL || rel >= 0x828890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828890 size=16 callers=3 calls=0
*/
void sub_828890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828890ULL || rel >= 0x8288a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008288a0 size=16 callers=1 calls=0
*/
void sub_8288a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8288a0ULL || rel >= 0x8288b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008288b0 size=16 callers=1 calls=0
*/
void sub_8288b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8288b0ULL || rel >= 0x8288c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008288c0 size=16 callers=1 calls=0
*/
void sub_8288c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8288c0ULL || rel >= 0x8288d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008288d0 size=16 callers=2 calls=0
*/
void sub_8288d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8288d0ULL || rel >= 0x8288e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008288e0 size=16 callers=3 calls=0
*/
void sub_8288e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8288e0ULL || rel >= 0x8288f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008288f0 size=16 callers=4 calls=0
*/
void sub_8288f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8288f0ULL || rel >= 0x828900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828900 size=16 callers=1 calls=0
*/
void sub_828900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828900ULL || rel >= 0x828910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828910 size=16 callers=1 calls=0
*/
void sub_828910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828910ULL || rel >= 0x828920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828920 size=16 callers=2 calls=0
*/
void sub_828920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828920ULL || rel >= 0x828930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828930 size=16 callers=4 calls=0
*/
void sub_828930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828930ULL || rel >= 0x828940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828940 size=16 callers=3 calls=0
*/
void sub_828940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828940ULL || rel >= 0x828950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828950 size=16 callers=1 calls=0
*/
void sub_828950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828950ULL || rel >= 0x828960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828960 size=16 callers=1 calls=0
*/
void sub_828960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828960ULL || rel >= 0x828970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828970 size=16 callers=1 calls=0
*/
void sub_828970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828970ULL || rel >= 0x828980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828980 size=16 callers=1 calls=0
*/
void sub_828980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828980ULL || rel >= 0x828990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828990 size=16 callers=1 calls=0
*/
void sub_828990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828990ULL || rel >= 0x8289a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008289a0 size=16 callers=18 calls=0
*/
void sub_8289a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8289a0ULL || rel >= 0x8289b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008289b0 size=16 callers=3 calls=0
*/
void sub_8289b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8289b0ULL || rel >= 0x8289c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008289c0 size=16 callers=1 calls=0
*/
void sub_8289c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8289c0ULL || rel >= 0x8289d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008289d0 size=16 callers=1 calls=0
*/
void sub_8289d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8289d0ULL || rel >= 0x8289e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008289e0 size=16 callers=1 calls=0
*/
void sub_8289e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8289e0ULL || rel >= 0x8289f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008289f0 size=16 callers=1 calls=0
*/
void sub_8289f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8289f0ULL || rel >= 0x828a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828a00 size=16 callers=4 calls=0
*/
void sub_828a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828a00ULL || rel >= 0x828a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828a10 size=16 callers=1 calls=0
*/
void sub_828a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828a10ULL || rel >= 0x828a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828a20 size=16 callers=4 calls=0
*/
void sub_828a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828a20ULL || rel >= 0x828a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828a30 size=16 callers=1 calls=0
*/
void sub_828a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828a30ULL || rel >= 0x828a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828a40 size=16 callers=1 calls=0
*/
void sub_828a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828a40ULL || rel >= 0x828a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828a50 size=16 callers=1 calls=0
*/
void sub_828a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828a50ULL || rel >= 0x828a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828a60 size=16 callers=8 calls=0
*/
void sub_828a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828a60ULL || rel >= 0x828a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828a70 size=16 callers=1 calls=0
*/
void sub_828a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828a70ULL || rel >= 0x828a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828a80 size=16 callers=1 calls=0
*/
void sub_828a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828a80ULL || rel >= 0x828a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828a90 size=16 callers=1 calls=0
*/
void sub_828a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828a90ULL || rel >= 0x828aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828aa0 size=16 callers=1 calls=0
*/
void sub_828aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828aa0ULL || rel >= 0x828ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ab0 size=16 callers=1 calls=0
*/
void sub_828ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ab0ULL || rel >= 0x828ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ac0 size=16 callers=2 calls=0
*/
void sub_828ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ac0ULL || rel >= 0x828ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ad0 size=16 callers=1 calls=0
*/
void sub_828ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ad0ULL || rel >= 0x828ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ae0 size=16 callers=8 calls=0
*/
void sub_828ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ae0ULL || rel >= 0x828af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828af0 size=16 callers=1 calls=0
*/
void sub_828af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828af0ULL || rel >= 0x828b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828b00 size=16 callers=1 calls=0
*/
void sub_828b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828b00ULL || rel >= 0x828b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828b10 size=16 callers=1 calls=0
*/
void sub_828b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828b10ULL || rel >= 0x828b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828b20 size=16 callers=1 calls=0
*/
void sub_828b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828b20ULL || rel >= 0x828b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828b30 size=16 callers=4 calls=0
*/
void sub_828b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828b30ULL || rel >= 0x828b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828b40 size=16 callers=2 calls=0
*/
void sub_828b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828b40ULL || rel >= 0x828b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828b50 size=16 callers=1 calls=0
*/
void sub_828b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828b50ULL || rel >= 0x828b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828b60 size=16 callers=2 calls=0
*/
void sub_828b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828b60ULL || rel >= 0x828b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828b70 size=16 callers=1 calls=0
*/
void sub_828b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828b70ULL || rel >= 0x828b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828b80 size=16 callers=4 calls=0
*/
void sub_828b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828b80ULL || rel >= 0x828b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828b90 size=16 callers=2 calls=0
*/
void sub_828b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828b90ULL || rel >= 0x828ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828ba0 size=16 callers=1 calls=0
*/
void sub_828ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828ba0ULL || rel >= 0x828bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828bb0 size=16 callers=1 calls=0
*/
void sub_828bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828bb0ULL || rel >= 0x828bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828bc0 size=16 callers=1 calls=0
*/
void sub_828bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828bc0ULL || rel >= 0x828bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828bd0 size=16 callers=1 calls=0
*/
void sub_828bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828bd0ULL || rel >= 0x828be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828be0 size=16 callers=1 calls=0
*/
void sub_828be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828be0ULL || rel >= 0x828bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00828bf0 size=16 callers=2 calls=0
*/
void sub_828bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x828bf0ULL || rel >= 0x828c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

