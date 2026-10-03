/* main functions 00bf0820..00c04780 (94 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00bf0820 size=304 callers=144 calls=0
*/
void sub_bf0820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0820ULL || rel >= 0xbf0950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0950 size=16 callers=0 calls=0
*/
void sub_bf0950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0950ULL || rel >= 0xbf0960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0960 size=16 callers=0 calls=0
*/
void sub_bf0960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0960ULL || rel >= 0xbf0970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0970 size=832 callers=0 calls=4
   calls: sub_bc2530, sub_bca8b0, sub_be2f70, sub_bf15c0
*/
void sub_bf0970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0970ULL || rel >= 0xbf0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0cb0 size=16 callers=0 calls=0
*/
void sub_bf0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0cb0ULL || rel >= 0xbf0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0cc0 size=16 callers=0 calls=0
*/
void sub_bf0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0cc0ULL || rel >= 0xbf0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0cd0 size=16 callers=0 calls=0
*/
void sub_bf0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0cd0ULL || rel >= 0xbf0ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0ce0 size=96 callers=0 calls=2
   calls: sub_140b690, sub_140bd70
*/
void sub_bf0ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0ce0ULL || rel >= 0xbf0d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0d40 size=2176 callers=0 calls=9
   calls: sub_5d99d0, sub_5e2930, sub_631840, sub_95afb0, sub_9aca80, sub_9ad440, sub_bca8b0, sub_be32b0, sub_c18300
*/
void sub_bf0d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0d40ULL || rel >= 0xbf15c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf15c0 size=128 callers=1 calls=0
*/
void sub_bf15c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf15c0ULL || rel >= 0xbf1640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1640 size=416 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_bf1640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1640ULL || rel >= 0xbf17e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf17e0 size=16 callers=0 calls=0
*/
void sub_bf17e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf17e0ULL || rel >= 0xbf17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf17f0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf17f0ULL || rel >= 0xbf1860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1860 size=16 callers=0 calls=0
*/
void sub_bf1860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1860ULL || rel >= 0xbf1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1870 size=16 callers=0 calls=0
*/
void sub_bf1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1870ULL || rel >= 0xbf1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1880 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1880ULL || rel >= 0xbf18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf18f0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf18f0ULL || rel >= 0xbf1960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1960 size=16 callers=0 calls=0
*/
void sub_bf1960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1960ULL || rel >= 0xbf1970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1970 size=16 callers=0 calls=0
*/
void sub_bf1970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1970ULL || rel >= 0xbf1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1980 size=48 callers=0 calls=0
*/
void sub_bf1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1980ULL || rel >= 0xbf19b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf19b0 size=16 callers=0 calls=0
*/
void sub_bf19b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf19b0ULL || rel >= 0xbf19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf19c0 size=16 callers=0 calls=0
*/
void sub_bf19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf19c0ULL || rel >= 0xbf19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf19d0 size=16 callers=0 calls=0
*/
void sub_bf19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf19d0ULL || rel >= 0xbf19e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf19e0 size=192 callers=0 calls=4
   calls: nn_ldn_SetStationAcceptPolicy, sub_6323a0, sub_637e80, sub_bd74d0
*/
void sub_bf19e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf19e0ULL || rel >= 0xbf1aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1aa0 size=16 callers=0 calls=0
*/
void sub_bf1aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1aa0ULL || rel >= 0xbf1ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1ab0 size=16 callers=0 calls=0
*/
void sub_bf1ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1ab0ULL || rel >= 0xbf1ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1ac0 size=16 callers=0 calls=0
*/
void sub_bf1ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1ac0ULL || rel >= 0xbf1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1ad0 size=176 callers=0 calls=3
   calls: sub_140b690, sub_140bc80, sub_140bd40
*/
void sub_bf1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1ad0ULL || rel >= 0xbf1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1b80 size=208 callers=0 calls=0
*/
void sub_bf1b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1b80ULL || rel >= 0xbf1c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1c50 size=16 callers=0 calls=0
*/
void sub_bf1c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1c50ULL || rel >= 0xbf1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1c60 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1c60ULL || rel >= 0xbf1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1cd0 size=16 callers=0 calls=0
*/
void sub_bf1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1cd0ULL || rel >= 0xbf1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1ce0 size=16 callers=0 calls=0
*/
void sub_bf1ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1ce0ULL || rel >= 0xbf1cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1cf0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf1cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1cf0ULL || rel >= 0xbf1d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1d60 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf1d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1d60ULL || rel >= 0xbf1dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1dd0 size=16 callers=0 calls=0
*/
void sub_bf1dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1dd0ULL || rel >= 0xbf1de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1de0 size=16 callers=0 calls=0
*/
void sub_bf1de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1de0ULL || rel >= 0xbf1df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1df0 size=400 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_bf1df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1df0ULL || rel >= 0xbf1f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1f80 size=16 callers=0 calls=0
*/
void sub_bf1f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1f80ULL || rel >= 0xbf1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1f90 size=16 callers=0 calls=0
*/
void sub_bf1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1f90ULL || rel >= 0xbf1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1fa0 size=16 callers=0 calls=0
*/
void sub_bf1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1fa0ULL || rel >= 0xbf1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf1fb0 size=800 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_bf1fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf1fb0ULL || rel >= 0xbf22d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf22d0 size=16 callers=0 calls=0
*/
void sub_bf22d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf22d0ULL || rel >= 0xbf22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf22e0 size=16 callers=0 calls=0
*/
void sub_bf22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf22e0ULL || rel >= 0xbf22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf22f0 size=16 callers=0 calls=0
*/
void sub_bf22f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf22f0ULL || rel >= 0xbf2300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2300 size=32 callers=0 calls=0
*/
void sub_bf2300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2300ULL || rel >= 0xbf2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2320 size=384 callers=0 calls=4
   calls: sub_bc2530, sub_bca8b0, sub_bde690, sub_be6ec0
*/
void sub_bf2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2320ULL || rel >= 0xbf24a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf24a0 size=16 callers=0 calls=0
*/
void sub_bf24a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf24a0ULL || rel >= 0xbf24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf24b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf24b0ULL || rel >= 0xbf2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2520 size=16 callers=0 calls=0
*/
void sub_bf2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2520ULL || rel >= 0xbf2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2530 size=16 callers=0 calls=0
*/
void sub_bf2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2530ULL || rel >= 0xbf2540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2540 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf2540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2540ULL || rel >= 0xbf25b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf25b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf25b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf25b0ULL || rel >= 0xbf2620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2620 size=16 callers=0 calls=0
*/
void sub_bf2620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2620ULL || rel >= 0xbf2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2630 size=16 callers=0 calls=0
*/
void sub_bf2630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2630ULL || rel >= 0xbf2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2640 size=672 callers=0 calls=5
   calls: sub_5d99d0, sub_bc2290, sub_bca8b0, sub_bf28f0, sub_c181b0
*/
void sub_bf2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2640ULL || rel >= 0xbf28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf28e0 size=16 callers=0 calls=0
*/
void sub_bf28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf28e0ULL || rel >= 0xbf28f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf28f0 size=224 callers=2 calls=1
   calls: sub_c1c7a0
*/
void sub_bf28f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf28f0ULL || rel >= 0xbf29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf29d0 size=304 callers=0 calls=5
   calls: sub_59a930, sub_5b9220, sub_b44bb0, sub_bc2290, sub_bca8b0
*/
void sub_bf29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf29d0ULL || rel >= 0xbf2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2b00 size=16 callers=0 calls=0
*/
void sub_bf2b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2b00ULL || rel >= 0xbf2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2b10 size=16 callers=0 calls=0
*/
void sub_bf2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2b10ULL || rel >= 0xbf2b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2b20 size=16 callers=0 calls=0
*/
void sub_bf2b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2b20ULL || rel >= 0xbf2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2b30 size=112 callers=0 calls=2
   calls: sub_bca8b0, sub_c18230
*/
void sub_bf2b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2b30ULL || rel >= 0xbf2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2ba0 size=16 callers=0 calls=0
*/
void sub_bf2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2ba0ULL || rel >= 0xbf2bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2bb0 size=16 callers=0 calls=0
*/
void sub_bf2bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2bb0ULL || rel >= 0xbf2bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2bc0 size=16 callers=0 calls=0
*/
void sub_bf2bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2bc0ULL || rel >= 0xbf2bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2bd0 size=16 callers=0 calls=0
*/
void sub_bf2bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2bd0ULL || rel >= 0xbf2be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2be0 size=16 callers=0 calls=0
*/
void sub_bf2be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2be0ULL || rel >= 0xbf2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2bf0 size=176 callers=0 calls=3
   calls: sub_bc2290, sub_bca8b0, sub_bf2cb0
*/
void sub_bf2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2bf0ULL || rel >= 0xbf2ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2ca0 size=16 callers=0 calls=0
*/
void sub_bf2ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2ca0ULL || rel >= 0xbf2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2cb0 size=800 callers=2 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_bf2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2cb0ULL || rel >= 0xbf2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2fd0 size=16 callers=0 calls=0
*/
void sub_bf2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2fd0ULL || rel >= 0xbf2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2fe0 size=16 callers=0 calls=0
*/
void sub_bf2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2fe0ULL || rel >= 0xbf2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf2ff0 size=336 callers=0 calls=3
   calls: sub_140b690, sub_140bcf0, sub_14ba3b0
*/
void sub_bf2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf2ff0ULL || rel >= 0xbf3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3140 size=448 callers=0 calls=3
   calls: sub_bc2530, sub_bca8b0, sub_bea510
*/
void sub_bf3140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3140ULL || rel >= 0xbf3300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3300 size=128 callers=0 calls=0
*/
void sub_bf3300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3300ULL || rel >= 0xbf3380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3380 size=128 callers=0 calls=0
*/
void sub_bf3380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3380ULL || rel >= 0xbf3400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3400 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf3400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3400ULL || rel >= 0xbf3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3470 size=128 callers=0 calls=0
*/
void sub_bf3470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3470ULL || rel >= 0xbf34f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf34f0 size=128 callers=0 calls=0
*/
void sub_bf34f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf34f0ULL || rel >= 0xbf3570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3570 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf3570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3570ULL || rel >= 0xbf35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf35e0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf35e0ULL || rel >= 0xbf3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3650 size=128 callers=0 calls=0
*/
void sub_bf3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3650ULL || rel >= 0xbf36d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf36d0 size=128 callers=0 calls=0
*/
void sub_bf36d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf36d0ULL || rel >= 0xbf3750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3750 size=48 callers=0 calls=1
   calls: sub_14ba4c0
*/
void sub_bf3750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3750ULL || rel >= 0xbf3780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3780 size=640 callers=0 calls=10
   calls: sub_14aad40, sub_14ba7b0, sub_14ba820, sub_67bdb0, sub_67bdc0, sub_67c7e0, sub_bc2530, sub_bca8b0, sub_bea510, sub_bf3a10
*/
void sub_bf3780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3780ULL || rel >= 0xbf3a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3a00 size=16 callers=0 calls=0
*/
void sub_bf3a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3a00ULL || rel >= 0xbf3a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3a10 size=320 callers=10 calls=3
   calls: sub_5e6180, sub_bf3b50, sub_d0c0
*/
void sub_bf3a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3a10ULL || rel >= 0xbf3b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3b50 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_bf3b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3b50ULL || rel >= 0xbf3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3bd0 size=16 callers=0 calls=0
*/
void sub_bf3bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3bd0ULL || rel >= 0xbf3be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3be0 size=16 callers=0 calls=0
*/
void sub_bf3be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3be0ULL || rel >= 0xbf3bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3bf0 size=16 callers=0 calls=0
*/
void sub_bf3bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3bf0ULL || rel >= 0xbf3c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3c00 size=16 callers=0 calls=0
*/
void sub_bf3c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3c00ULL || rel >= 0xbf3c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3c10 size=16 callers=0 calls=0
*/
void sub_bf3c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3c10ULL || rel >= 0xbf3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3c20 size=16 callers=0 calls=0
*/
void sub_bf3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3c20ULL || rel >= 0xbf3c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3c30 size=96 callers=0 calls=0
*/
void sub_bf3c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3c30ULL || rel >= 0xbf3c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3c90 size=16 callers=0 calls=0
*/
void sub_bf3c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3c90ULL || rel >= 0xbf3ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3ca0 size=16 callers=0 calls=0
*/
void sub_bf3ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3ca0ULL || rel >= 0xbf3cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3cb0 size=16 callers=0 calls=0
*/
void sub_bf3cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3cb0ULL || rel >= 0xbf3cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3cc0 size=176 callers=0 calls=1
   calls: sub_140bcf0
*/
void sub_bf3cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3cc0ULL || rel >= 0xbf3d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf3d70 size=1264 callers=0 calls=3
   calls: sub_7910b0, sub_7912b0, sub_be32b0
*/
void sub_bf3d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf3d70ULL || rel >= 0xbf4260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4260 size=112 callers=0 calls=0
*/
void sub_bf4260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4260ULL || rel >= 0xbf42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf42d0 size=112 callers=0 calls=0
*/
void sub_bf42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf42d0ULL || rel >= 0xbf4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4340 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4340ULL || rel >= 0xbf43b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf43b0 size=112 callers=0 calls=0
*/
void sub_bf43b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf43b0ULL || rel >= 0xbf4420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4420 size=112 callers=0 calls=0
*/
void sub_bf4420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4420ULL || rel >= 0xbf4490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4490 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf4490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4490ULL || rel >= 0xbf4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4500 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf4500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4500ULL || rel >= 0xbf4570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4570 size=112 callers=0 calls=0
*/
void sub_bf4570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4570ULL || rel >= 0xbf45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf45e0 size=112 callers=0 calls=0
*/
void sub_bf45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf45e0ULL || rel >= 0xbf4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4650 size=32 callers=0 calls=0
*/
void sub_bf4650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4650ULL || rel >= 0xbf4670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4670 size=16 callers=0 calls=0
*/
void sub_bf4670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4670ULL || rel >= 0xbf4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4680 size=16 callers=0 calls=0
*/
void sub_bf4680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4680ULL || rel >= 0xbf4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4690 size=16 callers=0 calls=0
*/
void sub_bf4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4690ULL || rel >= 0xbf46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf46a0 size=16 callers=0 calls=0
*/
void sub_bf46a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf46a0ULL || rel >= 0xbf46b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf46b0 size=16 callers=0 calls=0
*/
void sub_bf46b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf46b0ULL || rel >= 0xbf46c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf46c0 size=16 callers=0 calls=0
*/
void sub_bf46c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf46c0ULL || rel >= 0xbf46d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf46d0 size=16 callers=0 calls=0
*/
void sub_bf46d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf46d0ULL || rel >= 0xbf46e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf46e0 size=1152 callers=0 calls=2
   calls: sub_791400, sub_be32b0
*/
void sub_bf46e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf46e0ULL || rel >= 0xbf4b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4b60 size=16 callers=0 calls=0
*/
void sub_bf4b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4b60ULL || rel >= 0xbf4b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4b70 size=80 callers=0 calls=2
   calls: sub_791180, sub_791560
*/
void sub_bf4b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4b70ULL || rel >= 0xbf4bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4bc0 size=16 callers=0 calls=0
*/
void sub_bf4bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4bc0ULL || rel >= 0xbf4bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4bd0 size=16 callers=0 calls=0
*/
void sub_bf4bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4bd0ULL || rel >= 0xbf4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4be0 size=16 callers=0 calls=0
*/
void sub_bf4be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4be0ULL || rel >= 0xbf4bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4bf0 size=16 callers=0 calls=0
*/
void sub_bf4bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4bf0ULL || rel >= 0xbf4c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4c00 size=16 callers=0 calls=0
*/
void sub_bf4c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4c00ULL || rel >= 0xbf4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4c10 size=16 callers=0 calls=0
*/
void sub_bf4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4c10ULL || rel >= 0xbf4c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4c20 size=16 callers=0 calls=0
*/
void sub_bf4c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4c20ULL || rel >= 0xbf4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4c30 size=16 callers=0 calls=0
*/
void sub_bf4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4c30ULL || rel >= 0xbf4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4c40 size=16 callers=0 calls=0
*/
void sub_bf4c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4c40ULL || rel >= 0xbf4c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4c50 size=160 callers=0 calls=2
   calls: sub_140b690, sub_140bd70
*/
void sub_bf4c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4c50ULL || rel >= 0xbf4cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf4cf0 size=1904 callers=0 calls=4
   calls: sub_5e2930, sub_95afb0, sub_96bb80, sub_be32b0
*/
void sub_bf4cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf4cf0ULL || rel >= 0xbf5460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5460 size=384 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_bf5460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5460ULL || rel >= 0xbf55e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf55e0 size=16 callers=0 calls=0
*/
void sub_bf55e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf55e0ULL || rel >= 0xbf55f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf55f0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf55f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf55f0ULL || rel >= 0xbf5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5660 size=16 callers=0 calls=0
*/
void sub_bf5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5660ULL || rel >= 0xbf5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5670 size=16 callers=0 calls=0
*/
void sub_bf5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5670ULL || rel >= 0xbf5680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5680 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf5680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5680ULL || rel >= 0xbf56f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf56f0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf56f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf56f0ULL || rel >= 0xbf5760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5760 size=16 callers=0 calls=0
*/
void sub_bf5760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5760ULL || rel >= 0xbf5770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5770 size=16 callers=0 calls=0
*/
void sub_bf5770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5770ULL || rel >= 0xbf5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5780 size=48 callers=0 calls=0
*/
void sub_bf5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5780ULL || rel >= 0xbf57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf57b0 size=16 callers=0 calls=0
*/
void sub_bf57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf57b0ULL || rel >= 0xbf57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf57c0 size=16 callers=0 calls=0
*/
void sub_bf57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf57c0ULL || rel >= 0xbf57d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf57d0 size=16 callers=0 calls=0
*/
void sub_bf57d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf57d0ULL || rel >= 0xbf57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf57e0 size=384 callers=0 calls=8
   calls: sub_5d99d0, sub_68d630, sub_68f670, sub_969e30, sub_98eec0, sub_bc2290, sub_bca8b0, sub_bd74d0
*/
void sub_bf57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf57e0ULL || rel >= 0xbf5960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5960 size=16 callers=0 calls=0
*/
void sub_bf5960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5960ULL || rel >= 0xbf5970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5970 size=16 callers=0 calls=0
*/
void sub_bf5970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5970ULL || rel >= 0xbf5980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5980 size=16 callers=0 calls=0
*/
void sub_bf5980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5980ULL || rel >= 0xbf5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5990 size=304 callers=0 calls=4
   calls: sub_68d950, sub_bc2530, sub_bca8b0, sub_bf5ad0
*/
void sub_bf5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5990ULL || rel >= 0xbf5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5ac0 size=16 callers=0 calls=0
*/
void sub_bf5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5ac0ULL || rel >= 0xbf5ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5ad0 size=368 callers=1 calls=1
   calls: sub_bc8a00
*/
void sub_bf5ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5ad0ULL || rel >= 0xbf5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5c40 size=16 callers=0 calls=0
*/
void sub_bf5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5c40ULL || rel >= 0xbf5c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5c50 size=16 callers=0 calls=0
*/
void sub_bf5c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5c50ULL || rel >= 0xbf5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5c60 size=64 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_bf5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5c60ULL || rel >= 0xbf5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5ca0 size=16 callers=0 calls=0
*/
void sub_bf5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5ca0ULL || rel >= 0xbf5cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5cb0 size=16 callers=0 calls=0
*/
void sub_bf5cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5cb0ULL || rel >= 0xbf5cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5cc0 size=16 callers=0 calls=0
*/
void sub_bf5cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5cc0ULL || rel >= 0xbf5cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5cd0 size=80 callers=0 calls=1
   calls: sub_68d9f0
*/
void sub_bf5cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5cd0ULL || rel >= 0xbf5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5d20 size=16 callers=0 calls=0
*/
void sub_bf5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5d20ULL || rel >= 0xbf5d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5d30 size=16 callers=0 calls=0
*/
void sub_bf5d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5d30ULL || rel >= 0xbf5d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5d40 size=16 callers=0 calls=0
*/
void sub_bf5d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5d40ULL || rel >= 0xbf5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5d50 size=80 callers=0 calls=2
   calls: sub_140b690, sub_140bc80
*/
void sub_bf5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5d50ULL || rel >= 0xbf5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf5da0 size=3184 callers=0 calls=22
   calls: sub_5d99d0, sub_5dd790, sub_5e20, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_5f19d0, sub_618ec0, sub_619060, sub_6194a0, sub_9568b0, sub_96a5a0
   ... +10 more
   ref: bin/archive/field/resident/skybox.gfpak
   ref: bin/field/model/buildmodel/skybox_01/skybox_01.gfbanm
   ref: bin/field/model/buildmodel/skybox_01/skybox_01.gfbmdl
*/
void skybox_01_gfbmdl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf5da0ULL || rel >= 0xbf6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf6a10 size=432 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_bf6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6a10ULL || rel >= 0xbf6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf6bc0 size=16 callers=0 calls=0
*/
void sub_bf6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6bc0ULL || rel >= 0xbf6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf6bd0 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6bd0ULL || rel >= 0xbf6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf6c80 size=16 callers=0 calls=0
*/
void sub_bf6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6c80ULL || rel >= 0xbf6c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf6c90 size=16 callers=0 calls=0
*/
void sub_bf6c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6c90ULL || rel >= 0xbf6ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf6ca0 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf6ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6ca0ULL || rel >= 0xbf6d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf6d50 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf6d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6d50ULL || rel >= 0xbf6e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf6e00 size=16 callers=0 calls=0
*/
void sub_bf6e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6e00ULL || rel >= 0xbf6e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf6e10 size=16 callers=0 calls=0
*/
void sub_bf6e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6e10ULL || rel >= 0xbf6e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf6e20 size=336 callers=1 calls=2
   calls: sub_59e480, sub_5db1b0
*/
void sub_bf6e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6e20ULL || rel >= 0xbf6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf6f70 size=336 callers=0 calls=2
   calls: sub_59c570, sub_5e2bc0
*/
void sub_bf6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf6f70ULL || rel >= 0xbf70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf70c0 size=16 callers=0 calls=0
*/
void sub_bf70c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf70c0ULL || rel >= 0xbf70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf70d0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_bf70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf70d0ULL || rel >= 0xbf7140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7140 size=400 callers=0 calls=3
   calls: sub_59bee0, sub_59e970, sub_967240
*/
void sub_bf7140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7140ULL || rel >= 0xbf72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf72d0 size=112 callers=0 calls=2
   calls: sub_59eec0, sub_59efe0
*/
void sub_bf72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf72d0ULL || rel >= 0xbf7340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7340 size=16 callers=0 calls=0
*/
void sub_bf7340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7340ULL || rel >= 0xbf7350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7350 size=16 callers=0 calls=0
*/
void sub_bf7350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7350ULL || rel >= 0xbf7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7360 size=16 callers=0 calls=0
*/
void sub_bf7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7360ULL || rel >= 0xbf7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7370 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_bf7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7370ULL || rel >= 0xbf73e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf73e0 size=112 callers=0 calls=2
   calls: sub_59eec0, sub_59efe0
*/
void sub_bf73e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf73e0ULL || rel >= 0xbf7450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7450 size=16 callers=0 calls=0
*/
void sub_bf7450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7450ULL || rel >= 0xbf7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7460 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_bf7460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7460ULL || rel >= 0xbf74d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf74d0 size=16 callers=0 calls=0
*/
void sub_bf74d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf74d0ULL || rel >= 0xbf74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf74e0 size=16 callers=0 calls=0
*/
void sub_bf74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf74e0ULL || rel >= 0xbf74f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf74f0 size=128 callers=0 calls=1
   calls: sub_d52f20
*/
void sub_bf74f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf74f0ULL || rel >= 0xbf7570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7570 size=16 callers=0 calls=0
*/
void sub_bf7570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7570ULL || rel >= 0xbf7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7580 size=16 callers=0 calls=0
*/
void sub_bf7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7580ULL || rel >= 0xbf7590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7590 size=16 callers=0 calls=0
*/
void sub_bf7590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7590ULL || rel >= 0xbf75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf75a0 size=80 callers=0 calls=3
   calls: sub_59e990, sub_619060, sub_d52df0
*/
void sub_bf75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf75a0ULL || rel >= 0xbf75f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf75f0 size=16 callers=0 calls=0
*/
void sub_bf75f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf75f0ULL || rel >= 0xbf7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7600 size=16 callers=0 calls=0
*/
void sub_bf7600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7600ULL || rel >= 0xbf7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7610 size=16 callers=0 calls=0
*/
void sub_bf7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7610ULL || rel >= 0xbf7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7620 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_bf7620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7620ULL || rel >= 0xbf7650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7650 size=16 callers=0 calls=0
*/
void sub_bf7650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7650ULL || rel >= 0xbf7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7660 size=16 callers=0 calls=0
*/
void sub_bf7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7660ULL || rel >= 0xbf7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7670 size=16 callers=0 calls=0
*/
void sub_bf7670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7670ULL || rel >= 0xbf7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7680 size=752 callers=0 calls=8
   calls: sub_5e2bc0, sub_967240, sub_b43db0, sub_bc2290, sub_bca8b0, sub_bf2cb0, sub_bf7980, sub_c51740
*/
void sub_bf7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7680ULL || rel >= 0xbf7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7970 size=16 callers=0 calls=0
*/
void sub_bf7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7970ULL || rel >= 0xbf7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7980 size=800 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_bf7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7980ULL || rel >= 0xbf7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7ca0 size=16 callers=0 calls=0
*/
void sub_bf7ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7ca0ULL || rel >= 0xbf7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7cb0 size=16 callers=0 calls=0
*/
void sub_bf7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7cb0ULL || rel >= 0xbf7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7cc0 size=32 callers=0 calls=0
*/
void sub_bf7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7cc0ULL || rel >= 0xbf7ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf7ce0 size=5424 callers=0 calls=8
   calls: sub_5dd790, sub_5e2930, sub_5e3870, sub_957d70, sub_95afb0, sub_96a5a0, sub_be32b0, sub_ec20
   ref: bin/archive/graphics/mask_texture/pattern_%02d.gfpak
   ref: bin/graphics/mask_texture/pattern_%02d/mask%d.bntx
   ref: bin/graphics/mask_graphics/pattern_%02d/pattern_%02d.gfbmdl
   ref: bin/archive/graphics/mask_graphics/pattern_%02d.gfpak
*/
void mask_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf7ce0ULL || rel >= 0xbf9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9210 size=896 callers=0 calls=2
   calls: sub_5e2bc0, sub_682dd0
*/
void sub_bf9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9210ULL || rel >= 0xbf9590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9590 size=16 callers=0 calls=0
*/
void sub_bf9590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9590ULL || rel >= 0xbf95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf95a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf95a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf95a0ULL || rel >= 0xbf9610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9610 size=16 callers=0 calls=0
*/
void sub_bf9610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9610ULL || rel >= 0xbf9620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9620 size=16 callers=0 calls=0
*/
void sub_bf9620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9620ULL || rel >= 0xbf9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9630 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf9630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9630ULL || rel >= 0xbf96a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf96a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf96a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf96a0ULL || rel >= 0xbf9710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9710 size=16 callers=0 calls=0
*/
void sub_bf9710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9710ULL || rel >= 0xbf9720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9720 size=16 callers=0 calls=0
*/
void sub_bf9720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9720ULL || rel >= 0xbf9730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9730 size=48 callers=0 calls=0
*/
void sub_bf9730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9730ULL || rel >= 0xbf9760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9760 size=16 callers=0 calls=0
*/
void sub_bf9760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9760ULL || rel >= 0xbf9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9770 size=16 callers=0 calls=0
*/
void sub_bf9770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9770ULL || rel >= 0xbf9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9780 size=16 callers=0 calls=0
*/
void sub_bf9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9780ULL || rel >= 0xbf9790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9790 size=176 callers=0 calls=6
   calls: sub_5cfaf0, sub_5fc600, sub_5fda10, sub_611740, sub_682dd0, sub_d0c0
*/
void sub_bf9790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9790ULL || rel >= 0xbf9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9840 size=16 callers=0 calls=0
*/
void sub_bf9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9840ULL || rel >= 0xbf9850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9850 size=16 callers=0 calls=0
*/
void sub_bf9850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9850ULL || rel >= 0xbf9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9860 size=16 callers=0 calls=0
*/
void sub_bf9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9860ULL || rel >= 0xbf9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9870 size=48 callers=0 calls=0
*/
void sub_bf9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9870ULL || rel >= 0xbf98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf98a0 size=16 callers=0 calls=0
*/
void sub_bf98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf98a0ULL || rel >= 0xbf98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf98b0 size=16 callers=0 calls=0
*/
void sub_bf98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf98b0ULL || rel >= 0xbf98c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf98c0 size=16 callers=0 calls=0
*/
void sub_bf98c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf98c0ULL || rel >= 0xbf98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf98d0 size=176 callers=0 calls=6
   calls: sub_5cfaf0, sub_5fc600, sub_5fda10, sub_611740, sub_682dd0, sub_d0c0
*/
void sub_bf98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf98d0ULL || rel >= 0xbf9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9980 size=16 callers=0 calls=0
*/
void sub_bf9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9980ULL || rel >= 0xbf9990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9990 size=16 callers=0 calls=0
*/
void sub_bf9990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9990ULL || rel >= 0xbf99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf99a0 size=16 callers=0 calls=0
*/
void sub_bf99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf99a0ULL || rel >= 0xbf99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf99b0 size=48 callers=0 calls=0
*/
void sub_bf99b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf99b0ULL || rel >= 0xbf99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf99e0 size=16 callers=0 calls=0
*/
void sub_bf99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf99e0ULL || rel >= 0xbf99f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf99f0 size=16 callers=0 calls=0
*/
void sub_bf99f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf99f0ULL || rel >= 0xbf9a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9a00 size=16 callers=0 calls=0
*/
void sub_bf9a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9a00ULL || rel >= 0xbf9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9a10 size=704 callers=0 calls=9
   calls: sub_5e2bc0, sub_5f19d0, sub_618ec0, sub_619060, sub_6194a0, sub_b8ae40, sub_bc2290, sub_bc7540, sub_bca8b0
*/
void sub_bf9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9a10ULL || rel >= 0xbf9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9cd0 size=16 callers=0 calls=0
*/
void sub_bf9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9cd0ULL || rel >= 0xbf9ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9ce0 size=16 callers=0 calls=0
*/
void sub_bf9ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9ce0ULL || rel >= 0xbf9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9cf0 size=16 callers=0 calls=0
*/
void sub_bf9cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9cf0ULL || rel >= 0xbf9d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf9d00 size=1264 callers=0 calls=5
   calls: sub_5f19d0, sub_619060, sub_bc7540, sub_bca8b0, sub_ed3650
*/
void sub_bf9d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf9d00ULL || rel >= 0xbfa1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfa1f0 size=16 callers=0 calls=0
*/
void sub_bfa1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfa1f0ULL || rel >= 0xbfa200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfa200 size=16 callers=0 calls=0
*/
void sub_bfa200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfa200ULL || rel >= 0xbfa210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfa210 size=16 callers=0 calls=0
*/
void sub_bfa210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfa210ULL || rel >= 0xbfa220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfa220 size=1232 callers=0 calls=5
   calls: sub_5f19d0, sub_619060, sub_bc7540, sub_bca8b0, sub_ed3830
*/
void sub_bfa220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfa220ULL || rel >= 0xbfa6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfa6f0 size=16 callers=0 calls=0
*/
void sub_bfa6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfa6f0ULL || rel >= 0xbfa700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfa700 size=16 callers=0 calls=0
*/
void sub_bfa700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfa700ULL || rel >= 0xbfa710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfa710 size=16 callers=0 calls=0
*/
void sub_bfa710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfa710ULL || rel >= 0xbfa720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfa720 size=1344 callers=0 calls=5
   calls: sub_5e2bc0, sub_5f19d0, sub_bc7540, sub_bca8b0, sub_ed3830
*/
void sub_bfa720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfa720ULL || rel >= 0xbfac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfac60 size=16 callers=0 calls=0
*/
void sub_bfac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfac60ULL || rel >= 0xbfac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfac70 size=16 callers=0 calls=0
*/
void sub_bfac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfac70ULL || rel >= 0xbfac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfac80 size=16 callers=0 calls=0
*/
void sub_bfac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfac80ULL || rel >= 0xbfac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfac90 size=176 callers=0 calls=2
   calls: sub_140b690, sub_140bc80
*/
void sub_bfac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfac90ULL || rel >= 0xbfad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfad40 size=208 callers=0 calls=0
*/
void sub_bfad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfad40ULL || rel >= 0xbfae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfae10 size=16 callers=0 calls=0
*/
void sub_bfae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfae10ULL || rel >= 0xbfae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfae20 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfae20ULL || rel >= 0xbfae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfae90 size=16 callers=0 calls=0
*/
void sub_bfae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfae90ULL || rel >= 0xbfaea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfaea0 size=16 callers=0 calls=0
*/
void sub_bfaea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfaea0ULL || rel >= 0xbfaeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfaeb0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfaeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfaeb0ULL || rel >= 0xbfaf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfaf20 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfaf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfaf20ULL || rel >= 0xbfaf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfaf90 size=16 callers=0 calls=0
*/
void sub_bfaf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfaf90ULL || rel >= 0xbfafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfafa0 size=16 callers=0 calls=0
*/
void sub_bfafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfafa0ULL || rel >= 0xbfafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfafb0 size=432 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_bfafb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfafb0ULL || rel >= 0xbfb160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb160 size=16 callers=0 calls=0
*/
void sub_bfb160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb160ULL || rel >= 0xbfb170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb170 size=16 callers=0 calls=0
*/
void sub_bfb170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb170ULL || rel >= 0xbfb180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb180 size=16 callers=0 calls=0
*/
void sub_bfb180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb180ULL || rel >= 0xbfb190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb190 size=928 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_bfb190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb190ULL || rel >= 0xbfb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb530 size=16 callers=0 calls=0
*/
void sub_bfb530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb530ULL || rel >= 0xbfb540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb540 size=16 callers=0 calls=0
*/
void sub_bfb540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb540ULL || rel >= 0xbfb550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb550 size=16 callers=0 calls=0
*/
void sub_bfb550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb550ULL || rel >= 0xbfb560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb560 size=144 callers=0 calls=2
   calls: sub_140b690, sub_140bc80
*/
void sub_bfb560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb560ULL || rel >= 0xbfb5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb5f0 size=288 callers=0 calls=3
   calls: sub_5f19d0, sub_bd74d0, sub_ed32f0
*/
void sub_bfb5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb5f0ULL || rel >= 0xbfb710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb710 size=16 callers=0 calls=0
*/
void sub_bfb710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb710ULL || rel >= 0xbfb720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb720 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfb720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb720ULL || rel >= 0xbfb790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb790 size=16 callers=0 calls=0
*/
void sub_bfb790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb790ULL || rel >= 0xbfb7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb7a0 size=16 callers=0 calls=0
*/
void sub_bfb7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb7a0ULL || rel >= 0xbfb7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb7b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfb7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb7b0ULL || rel >= 0xbfb820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb820 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfb820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb820ULL || rel >= 0xbfb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb890 size=16 callers=0 calls=0
*/
void sub_bfb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb890ULL || rel >= 0xbfb8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb8a0 size=16 callers=0 calls=0
*/
void sub_bfb8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb8a0ULL || rel >= 0xbfb8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfb8b0 size=400 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_bfb8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfb8b0ULL || rel >= 0xbfba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfba40 size=16 callers=0 calls=0
*/
void sub_bfba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfba40ULL || rel >= 0xbfba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfba50 size=16 callers=0 calls=0
*/
void sub_bfba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfba50ULL || rel >= 0xbfba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfba60 size=16 callers=0 calls=0
*/
void sub_bfba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfba60ULL || rel >= 0xbfba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfba70 size=128 callers=0 calls=3
   calls: sub_140b690, sub_140bd40, sub_140bd70
*/
void sub_bfba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfba70ULL || rel >= 0xbfbaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfbaf0 size=992 callers=0 calls=1
   calls: sub_bfc310
*/
void sub_bfbaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfbaf0ULL || rel >= 0xbfbed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfbed0 size=672 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_bfbed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfbed0ULL || rel >= 0xbfc170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc170 size=16 callers=0 calls=0
*/
void sub_bfc170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc170ULL || rel >= 0xbfc180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc180 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfc180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc180ULL || rel >= 0xbfc1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc1f0 size=16 callers=0 calls=0
*/
void sub_bfc1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc1f0ULL || rel >= 0xbfc200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc200 size=16 callers=0 calls=0
*/
void sub_bfc200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc200ULL || rel >= 0xbfc210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc210 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfc210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc210ULL || rel >= 0xbfc280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc280 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfc280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc280ULL || rel >= 0xbfc2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc2f0 size=16 callers=0 calls=0
*/
void sub_bfc2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc2f0ULL || rel >= 0xbfc300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc300 size=16 callers=0 calls=0
*/
void sub_bfc300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc300ULL || rel >= 0xbfc310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc310 size=320 callers=2 calls=4
   calls: sub_5dd790, sub_5e2930, sub_95afb0, sub_bfc450
*/
void sub_bfc310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc310ULL || rel >= 0xbfc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc450 size=1104 callers=1 calls=1
   calls: sub_be32b0
*/
void sub_bfc450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc450ULL || rel >= 0xbfc8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc8a0 size=48 callers=0 calls=0
*/
void sub_bfc8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc8a0ULL || rel >= 0xbfc8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc8d0 size=16 callers=0 calls=0
*/
void sub_bfc8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc8d0ULL || rel >= 0xbfc8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc8e0 size=16 callers=0 calls=0
*/
void sub_bfc8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc8e0ULL || rel >= 0xbfc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc8f0 size=16 callers=0 calls=0
*/
void sub_bfc8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc8f0ULL || rel >= 0xbfc900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc900 size=16 callers=0 calls=0
*/
void sub_bfc900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc900ULL || rel >= 0xbfc910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc910 size=16 callers=0 calls=0
*/
void sub_bfc910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc910ULL || rel >= 0xbfc920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc920 size=16 callers=0 calls=0
*/
void sub_bfc920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc920ULL || rel >= 0xbfc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc930 size=16 callers=0 calls=0
*/
void sub_bfc930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc930ULL || rel >= 0xbfc940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfc940 size=2144 callers=0 calls=9
   calls: sub_5c5e40, sub_5cf8e0, sub_5cf8f0, sub_5d99d0, sub_607750, sub_620d70, sub_bc2290, sub_bca8b0, sub_bfd1b0
*/
void sub_bfc940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc940ULL || rel >= 0xbfd1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd1a0 size=16 callers=0 calls=0
*/
void sub_bfd1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd1a0ULL || rel >= 0xbfd1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd1b0 size=336 callers=2 calls=2
   calls: sub_5c5de0, sub_5db1b0
*/
void sub_bfd1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd1b0ULL || rel >= 0xbfd300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd300 size=336 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_bfd300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd300ULL || rel >= 0xbfd450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd450 size=16 callers=0 calls=0
*/
void sub_bfd450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd450ULL || rel >= 0xbfd460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd460 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_bfd460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd460ULL || rel >= 0xbfd4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd4d0 size=400 callers=0 calls=3
   calls: sub_5c5e30, sub_607840, sub_967240
*/
void sub_bfd4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd4d0ULL || rel >= 0xbfd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd660 size=112 callers=0 calls=2
   calls: sub_5c6030, sub_5c60d0
*/
void sub_bfd660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd660ULL || rel >= 0xbfd6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd6d0 size=16 callers=0 calls=0
*/
void sub_bfd6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd6d0ULL || rel >= 0xbfd6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd6e0 size=16 callers=0 calls=0
*/
void sub_bfd6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd6e0ULL || rel >= 0xbfd6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd6f0 size=16 callers=0 calls=0
*/
void sub_bfd6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd6f0ULL || rel >= 0xbfd700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd700 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_bfd700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd700ULL || rel >= 0xbfd770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd770 size=112 callers=0 calls=2
   calls: sub_5c6030, sub_5c60d0
*/
void sub_bfd770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd770ULL || rel >= 0xbfd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd7e0 size=16 callers=0 calls=0
*/
void sub_bfd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd7e0ULL || rel >= 0xbfd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd7f0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_bfd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd7f0ULL || rel >= 0xbfd860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd860 size=16 callers=0 calls=0
*/
void sub_bfd860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd860ULL || rel >= 0xbfd870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd870 size=16 callers=0 calls=0
*/
void sub_bfd870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd870ULL || rel >= 0xbfd880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd880 size=16 callers=0 calls=0
*/
void sub_bfd880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd880ULL || rel >= 0xbfd890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd890 size=16 callers=0 calls=0
*/
void sub_bfd890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd890ULL || rel >= 0xbfd8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfd8a0 size=2272 callers=0 calls=5
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750, sub_bc2290, sub_bca8b0
*/
void sub_bfd8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfd8a0ULL || rel >= 0xbfe180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe180 size=16 callers=0 calls=0
*/
void sub_bfe180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe180ULL || rel >= 0xbfe190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe190 size=16 callers=0 calls=0
*/
void sub_bfe190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe190ULL || rel >= 0xbfe1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe1a0 size=16 callers=0 calls=0
*/
void sub_bfe1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe1a0ULL || rel >= 0xbfe1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe1b0 size=208 callers=0 calls=3
   calls: sub_140b690, sub_140bcf0, sub_140bd40
*/
void sub_bfe1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe1b0ULL || rel >= 0xbfe280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe280 size=128 callers=0 calls=0
*/
void sub_bfe280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe280ULL || rel >= 0xbfe300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe300 size=96 callers=0 calls=0
*/
void sub_bfe300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe300ULL || rel >= 0xbfe360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe360 size=96 callers=0 calls=0
*/
void sub_bfe360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe360ULL || rel >= 0xbfe3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe3c0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfe3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe3c0ULL || rel >= 0xbfe430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe430 size=96 callers=0 calls=0
*/
void sub_bfe430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe430ULL || rel >= 0xbfe490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe490 size=96 callers=0 calls=0
*/
void sub_bfe490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe490ULL || rel >= 0xbfe4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe4f0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfe4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe4f0ULL || rel >= 0xbfe560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe560 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfe560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe560ULL || rel >= 0xbfe5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe5d0 size=96 callers=0 calls=0
*/
void sub_bfe5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe5d0ULL || rel >= 0xbfe630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe630 size=96 callers=0 calls=0
*/
void sub_bfe630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe630ULL || rel >= 0xbfe690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe690 size=32 callers=0 calls=0
*/
void sub_bfe690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe690ULL || rel >= 0xbfe6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe6b0 size=16 callers=0 calls=0
*/
void sub_bfe6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe6b0ULL || rel >= 0xbfe6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe6c0 size=16 callers=0 calls=0
*/
void sub_bfe6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe6c0ULL || rel >= 0xbfe6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe6d0 size=16 callers=0 calls=0
*/
void sub_bfe6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe6d0ULL || rel >= 0xbfe6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe6e0 size=64 callers=1 calls=1
   calls: sub_140b690
*/
void sub_bfe6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe6e0ULL || rel >= 0xbfe720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe720 size=304 callers=0 calls=0
*/
void sub_bfe720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe720ULL || rel >= 0xbfe850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfe850 size=848 callers=0 calls=6
   calls: sub_bc2530, sub_bca8b0, sub_bdebd0, sub_bdecc0, sub_bfef00, sub_bff030
*/
void sub_bfe850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe850ULL || rel >= 0xbfeba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfeba0 size=16 callers=0 calls=0
*/
void sub_bfeba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfeba0ULL || rel >= 0xbfebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfebb0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfebb0ULL || rel >= 0xbfec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfec20 size=16 callers=0 calls=0
*/
void sub_bfec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfec20ULL || rel >= 0xbfec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfec30 size=16 callers=0 calls=0
*/
void sub_bfec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfec30ULL || rel >= 0xbfec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfec40 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfec40ULL || rel >= 0xbfecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfecb0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bfecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfecb0ULL || rel >= 0xbfed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfed20 size=16 callers=0 calls=0
*/
void sub_bfed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfed20ULL || rel >= 0xbfed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfed30 size=16 callers=0 calls=0
*/
void sub_bfed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfed30ULL || rel >= 0xbfed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfed40 size=96 callers=0 calls=1
   calls: Play_PV_EV__03d__02d__02d
*/
void sub_bfed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfed40ULL || rel >= 0xbfeda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfeda0 size=16 callers=0 calls=0
*/
void sub_bfeda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfeda0ULL || rel >= 0xbfedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfedb0 size=16 callers=0 calls=0
*/
void sub_bfedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfedb0ULL || rel >= 0xbfedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfedc0 size=16 callers=0 calls=0
*/
void sub_bfedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfedc0ULL || rel >= 0xbfedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfedd0 size=128 callers=0 calls=3
   calls: sub_793a60, sub_bca8b0, sub_c18230
*/
void sub_bfedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfedd0ULL || rel >= 0xbfee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfee50 size=16 callers=0 calls=0
*/
void sub_bfee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfee50ULL || rel >= 0xbfee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfee60 size=16 callers=0 calls=0
*/
void sub_bfee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfee60ULL || rel >= 0xbfee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfee70 size=16 callers=0 calls=0
*/
void sub_bfee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfee70ULL || rel >= 0xbfee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfee80 size=80 callers=0 calls=2
   calls: sub_793a10, sub_793a60
*/
void sub_bfee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfee80ULL || rel >= 0xbfeed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfeed0 size=16 callers=0 calls=0
*/
void sub_bfeed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfeed0ULL || rel >= 0xbfeee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfeee0 size=16 callers=0 calls=0
*/
void sub_bfeee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfeee0ULL || rel >= 0xbfeef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfeef0 size=16 callers=0 calls=0
*/
void sub_bfeef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfeef0ULL || rel >= 0xbfef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfef00 size=240 callers=2 calls=1
   calls: sub_bc8a00
*/
void sub_bfef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfef00ULL || rel >= 0xbfeff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bfeff0 size=64 callers=0 calls=1
   calls: sub_140b690
*/
void sub_bfeff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfeff0ULL || rel >= 0xbff030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bff030 size=288 callers=1 calls=7
   calls: sub_1108730, sub_1134fa0, sub_12f9ef0, sub_763000, sub_bc2290, sub_bca8b0, sub_bf05e0
*/
void sub_bff030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbff030ULL || rel >= 0xbff150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bff150 size=1424 callers=0 calls=1
   calls: sub_be32b0
*/
void sub_bff150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbff150ULL || rel >= 0xbff6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bff6e0 size=16 callers=0 calls=0
*/
void sub_bff6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbff6e0ULL || rel >= 0xbff6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bff6f0 size=2416 callers=0 calls=15
   calls: sub_5f19d0, sub_607750, sub_6707e0, sub_987040, sub_b33760, sub_b33c60, sub_b46790, sub_b46800, sub_b46e30, sub_b4c060, sub_b8c930, sub_bc2530
   ... +3 more
*/
void sub_bff6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbff6f0ULL || rel >= 0xc00060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00060 size=144 callers=0 calls=0
*/
void sub_c00060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00060ULL || rel >= 0xc000f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c000f0 size=144 callers=0 calls=0
*/
void sub_c000f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc000f0ULL || rel >= 0xc00180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00180 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c00180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00180ULL || rel >= 0xc00230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00230 size=144 callers=0 calls=0
*/
void sub_c00230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00230ULL || rel >= 0xc002c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c002c0 size=144 callers=0 calls=0
*/
void sub_c002c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc002c0ULL || rel >= 0xc00350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00350 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c00350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00350ULL || rel >= 0xc00400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00400 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c00400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00400ULL || rel >= 0xc004b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c004b0 size=144 callers=0 calls=0
*/
void sub_c004b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc004b0ULL || rel >= 0xc00540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00540 size=144 callers=0 calls=0
*/
void sub_c00540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00540ULL || rel >= 0xc005d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c005d0 size=208 callers=0 calls=3
   calls: sub_b335e0, sub_b4c060, sub_bca8b0
*/
void sub_c005d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc005d0ULL || rel >= 0xc006a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c006a0 size=16 callers=0 calls=0
*/
void sub_c006a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc006a0ULL || rel >= 0xc006b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c006b0 size=16 callers=0 calls=0
*/
void sub_c006b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc006b0ULL || rel >= 0xc006c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c006c0 size=16 callers=0 calls=0
*/
void sub_c006c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc006c0ULL || rel >= 0xc006d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c006d0 size=448 callers=0 calls=2
   calls: sub_607750, sub_b46790
*/
void sub_c006d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc006d0ULL || rel >= 0xc00890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00890 size=16 callers=0 calls=0
*/
void sub_c00890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00890ULL || rel >= 0xc008a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c008a0 size=16 callers=0 calls=0
*/
void sub_c008a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc008a0ULL || rel >= 0xc008b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c008b0 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c008b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc008b0ULL || rel >= 0xc008e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c008e0 size=16 callers=0 calls=0
*/
void sub_c008e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc008e0ULL || rel >= 0xc008f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c008f0 size=16 callers=0 calls=0
*/
void sub_c008f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc008f0ULL || rel >= 0xc00900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00900 size=16 callers=0 calls=0
*/
void sub_c00900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00900ULL || rel >= 0xc00910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00910 size=80 callers=0 calls=1
   calls: sub_619060
*/
void sub_c00910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00910ULL || rel >= 0xc00960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00960 size=16 callers=0 calls=0
*/
void sub_c00960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00960ULL || rel >= 0xc00970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00970 size=16 callers=0 calls=0
*/
void sub_c00970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00970ULL || rel >= 0xc00980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00980 size=736 callers=0 calls=2
   calls: sub_607750, sub_b46790
*/
void sub_c00980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00980ULL || rel >= 0xc00c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00c60 size=16 callers=0 calls=0
*/
void sub_c00c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00c60ULL || rel >= 0xc00c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00c70 size=16 callers=0 calls=0
*/
void sub_c00c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00c70ULL || rel >= 0xc00c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00c80 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c00c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00c80ULL || rel >= 0xc00cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00cb0 size=16 callers=0 calls=0
*/
void sub_c00cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00cb0ULL || rel >= 0xc00cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00cc0 size=16 callers=0 calls=0
*/
void sub_c00cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00cc0ULL || rel >= 0xc00cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00cd0 size=16 callers=0 calls=0
*/
void sub_c00cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00cd0ULL || rel >= 0xc00ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00ce0 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_c00ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00ce0ULL || rel >= 0xc00d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00d10 size=16 callers=0 calls=0
*/
void sub_c00d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00d10ULL || rel >= 0xc00d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00d20 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c00d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00d20ULL || rel >= 0xc00d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00d50 size=16 callers=0 calls=0
*/
void sub_c00d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00d50ULL || rel >= 0xc00d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00d60 size=16 callers=0 calls=0
*/
void sub_c00d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00d60ULL || rel >= 0xc00d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00d70 size=16 callers=0 calls=0
*/
void sub_c00d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00d70ULL || rel >= 0xc00d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00d80 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_c00d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00d80ULL || rel >= 0xc00db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00db0 size=16 callers=0 calls=0
*/
void sub_c00db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00db0ULL || rel >= 0xc00dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00dc0 size=16 callers=0 calls=0
*/
void sub_c00dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00dc0ULL || rel >= 0xc00dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c00dd0 size=736 callers=0 calls=2
   calls: sub_607750, sub_b46790
*/
void sub_c00dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc00dd0ULL || rel >= 0xc010b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c010b0 size=16 callers=0 calls=0
*/
void sub_c010b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc010b0ULL || rel >= 0xc010c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c010c0 size=16 callers=0 calls=0
*/
void sub_c010c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc010c0ULL || rel >= 0xc010d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c010d0 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c010d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc010d0ULL || rel >= 0xc01100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01100 size=16 callers=0 calls=0
*/
void sub_c01100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01100ULL || rel >= 0xc01110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01110 size=16 callers=0 calls=0
*/
void sub_c01110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01110ULL || rel >= 0xc01120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01120 size=16 callers=0 calls=0
*/
void sub_c01120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01120ULL || rel >= 0xc01130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01130 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_c01130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01130ULL || rel >= 0xc01160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01160 size=16 callers=0 calls=0
*/
void sub_c01160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01160ULL || rel >= 0xc01170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01170 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c01170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01170ULL || rel >= 0xc011a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c011a0 size=16 callers=0 calls=0
*/
void sub_c011a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc011a0ULL || rel >= 0xc011b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c011b0 size=16 callers=0 calls=0
*/
void sub_c011b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc011b0ULL || rel >= 0xc011c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c011c0 size=16 callers=0 calls=0
*/
void sub_c011c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc011c0ULL || rel >= 0xc011d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c011d0 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_c011d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc011d0ULL || rel >= 0xc01200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01200 size=16 callers=0 calls=0
*/
void sub_c01200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01200ULL || rel >= 0xc01210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01210 size=16 callers=0 calls=0
*/
void sub_c01210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01210ULL || rel >= 0xc01220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01220 size=416 callers=0 calls=2
   calls: sub_607750, sub_b46790
*/
void sub_c01220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01220ULL || rel >= 0xc013c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c013c0 size=16 callers=0 calls=0
*/
void sub_c013c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc013c0ULL || rel >= 0xc013d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c013d0 size=16 callers=0 calls=0
*/
void sub_c013d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc013d0ULL || rel >= 0xc013e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c013e0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_c013e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc013e0ULL || rel >= 0xc01420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01420 size=32 callers=0 calls=0
*/
void sub_c01420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01420ULL || rel >= 0xc01440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01440 size=16 callers=0 calls=0
*/
void sub_c01440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01440ULL || rel >= 0xc01450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01450 size=16 callers=0 calls=0
*/
void sub_c01450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01450ULL || rel >= 0xc01460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01460 size=16 callers=0 calls=0
*/
void sub_c01460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01460ULL || rel >= 0xc01470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01470 size=16 callers=0 calls=0
*/
void sub_c01470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01470ULL || rel >= 0xc01480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01480 size=16 callers=0 calls=0
*/
void sub_c01480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01480ULL || rel >= 0xc01490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01490 size=16 callers=0 calls=0
*/
void sub_c01490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01490ULL || rel >= 0xc014a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c014a0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_c014a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc014a0ULL || rel >= 0xc014e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c014e0 size=32 callers=0 calls=0
*/
void sub_c014e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc014e0ULL || rel >= 0xc01500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01500 size=16 callers=0 calls=0
*/
void sub_c01500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01500ULL || rel >= 0xc01510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01510 size=16 callers=0 calls=0
*/
void sub_c01510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01510ULL || rel >= 0xc01520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01520 size=64 callers=0 calls=0
*/
void sub_c01520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01520ULL || rel >= 0xc01560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01560 size=16 callers=0 calls=0
*/
void sub_c01560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01560ULL || rel >= 0xc01570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01570 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c01570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01570ULL || rel >= 0xc015a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c015a0 size=16 callers=0 calls=0
*/
void sub_c015a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc015a0ULL || rel >= 0xc015b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c015b0 size=16 callers=0 calls=0
*/
void sub_c015b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc015b0ULL || rel >= 0xc015c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c015c0 size=16 callers=0 calls=0
*/
void sub_c015c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc015c0ULL || rel >= 0xc015d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c015d0 size=16 callers=0 calls=0
*/
void sub_c015d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc015d0ULL || rel >= 0xc015e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c015e0 size=256 callers=0 calls=3
   calls: sub_140b690, sub_140b6b0, sub_140bd40
*/
void sub_c015e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc015e0ULL || rel >= 0xc016e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c016e0 size=1424 callers=0 calls=11
   calls: sub_136b4f0, sub_136b780, sub_7cd960, sub_b334c0, sub_b334e0, sub_b334f0, sub_b4c060, sub_b6ff20, sub_bc2290, sub_bca8b0, sub_c19590
*/
void sub_c016e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc016e0ULL || rel >= 0xc01c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c01c70 size=1696 callers=0 calls=12
   calls: sub_5f19d0, sub_607750, sub_b33760, sub_b33c60, sub_b46b30, sub_b46e30, sub_b4c060, sub_b988d0, sub_bc2290, sub_bca8b0, sub_bd74d0, sub_d17500
*/
void sub_c01c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc01c70ULL || rel >= 0xc02310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02310 size=32 callers=0 calls=0
*/
void sub_c02310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02310ULL || rel >= 0xc02330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02330 size=16 callers=0 calls=0
*/
void sub_c02330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02330ULL || rel >= 0xc02340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02340 size=16 callers=0 calls=0
*/
void sub_c02340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02340ULL || rel >= 0xc02350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02350 size=1648 callers=0 calls=5
   calls: sub_bc2530, sub_bca8b0, sub_be32b0, sub_c029c0, sub_c178a0
*/
void sub_c02350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02350ULL || rel >= 0xc029c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c029c0 size=368 callers=1 calls=1
   calls: sub_bc8a00
*/
void sub_c029c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc029c0ULL || rel >= 0xc02b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02b30 size=96 callers=0 calls=0
*/
void sub_c02b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02b30ULL || rel >= 0xc02b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02b90 size=96 callers=0 calls=0
*/
void sub_c02b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02b90ULL || rel >= 0xc02bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02bf0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c02bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02bf0ULL || rel >= 0xc02c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02c60 size=96 callers=0 calls=0
*/
void sub_c02c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02c60ULL || rel >= 0xc02cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02cc0 size=96 callers=0 calls=0
*/
void sub_c02cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02cc0ULL || rel >= 0xc02d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02d20 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c02d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02d20ULL || rel >= 0xc02d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02d90 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c02d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02d90ULL || rel >= 0xc02e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02e00 size=96 callers=0 calls=0
*/
void sub_c02e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02e00ULL || rel >= 0xc02e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02e60 size=96 callers=0 calls=0
*/
void sub_c02e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02e60ULL || rel >= 0xc02ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02ec0 size=304 callers=0 calls=4
   calls: sub_b335e0, sub_b4c060, sub_bc2290, sub_bca8b0
*/
void sub_c02ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02ec0ULL || rel >= 0xc02ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c02ff0 size=16 callers=0 calls=0
*/
void sub_c02ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc02ff0ULL || rel >= 0xc03000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03000 size=16 callers=0 calls=0
*/
void sub_c03000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03000ULL || rel >= 0xc03010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03010 size=16 callers=0 calls=0
*/
void sub_c03010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03010ULL || rel >= 0xc03020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03020 size=1376 callers=0 calls=7
   calls: sub_607750, sub_619490, sub_b46a10, sub_b48550, sub_b99000, sub_bc2290, sub_bca8b0
*/
void sub_c03020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03020ULL || rel >= 0xc03580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03580 size=16 callers=0 calls=0
*/
void sub_c03580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03580ULL || rel >= 0xc03590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03590 size=16 callers=0 calls=0
*/
void sub_c03590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03590ULL || rel >= 0xc035a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c035a0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_c035a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc035a0ULL || rel >= 0xc035e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c035e0 size=32 callers=0 calls=0
*/
void sub_c035e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc035e0ULL || rel >= 0xc03600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03600 size=16 callers=0 calls=0
*/
void sub_c03600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03600ULL || rel >= 0xc03610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03610 size=16 callers=0 calls=0
*/
void sub_c03610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03610ULL || rel >= 0xc03620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03620 size=224 callers=0 calls=2
   calls: sub_bca8b0, sub_c51540
*/
void sub_c03620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03620ULL || rel >= 0xc03700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03700 size=16 callers=0 calls=0
*/
void sub_c03700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03700ULL || rel >= 0xc03710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03710 size=16 callers=0 calls=0
*/
void sub_c03710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03710ULL || rel >= 0xc03720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03720 size=368 callers=0 calls=2
   calls: sub_607750, sub_b46a10
*/
void sub_c03720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03720ULL || rel >= 0xc03890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03890 size=16 callers=0 calls=0
*/
void sub_c03890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03890ULL || rel >= 0xc038a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c038a0 size=16 callers=0 calls=0
*/
void sub_c038a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc038a0ULL || rel >= 0xc038b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c038b0 size=16 callers=0 calls=0
*/
void sub_c038b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc038b0ULL || rel >= 0xc038c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c038c0 size=368 callers=0 calls=2
   calls: sub_607750, sub_b46a10
*/
void sub_c038c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc038c0ULL || rel >= 0xc03a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03a30 size=16 callers=0 calls=0
*/
void sub_c03a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03a30ULL || rel >= 0xc03a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03a40 size=16 callers=0 calls=0
*/
void sub_c03a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03a40ULL || rel >= 0xc03a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03a50 size=16 callers=0 calls=0
*/
void sub_c03a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03a50ULL || rel >= 0xc03a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c03a60 size=2000 callers=0 calls=8
   calls: sub_607750, sub_b33640, sub_b46720, sub_b47a90, sub_b4c060, sub_bc2290, sub_bca8b0, sub_be32b0
*/
void sub_c03a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc03a60ULL || rel >= 0xc04230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04230 size=16 callers=0 calls=0
*/
void sub_c04230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04230ULL || rel >= 0xc04240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04240 size=16 callers=0 calls=0
*/
void sub_c04240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04240ULL || rel >= 0xc04250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04250 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c04250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04250ULL || rel >= 0xc04280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04280 size=16 callers=0 calls=0
*/
void sub_c04280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04280ULL || rel >= 0xc04290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04290 size=16 callers=0 calls=0
*/
void sub_c04290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04290ULL || rel >= 0xc042a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c042a0 size=16 callers=0 calls=0
*/
void sub_c042a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc042a0ULL || rel >= 0xc042b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c042b0 size=16 callers=0 calls=0
*/
void sub_c042b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc042b0ULL || rel >= 0xc042c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c042c0 size=304 callers=0 calls=4
   calls: sub_b336a0, sub_b4c060, sub_bc2290, sub_bca8b0
*/
void sub_c042c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc042c0ULL || rel >= 0xc043f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c043f0 size=16 callers=0 calls=0
*/
void sub_c043f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc043f0ULL || rel >= 0xc04400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04400 size=16 callers=0 calls=0
*/
void sub_c04400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04400ULL || rel >= 0xc04410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04410 size=16 callers=0 calls=0
*/
void sub_c04410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04410ULL || rel >= 0xc04420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04420 size=16 callers=0 calls=0
*/
void sub_c04420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04420ULL || rel >= 0xc04430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04430 size=16 callers=0 calls=0
*/
void sub_c04430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04430ULL || rel >= 0xc04440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04440 size=16 callers=0 calls=0
*/
void sub_c04440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04440ULL || rel >= 0xc04450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04450 size=16 callers=0 calls=0
*/
void sub_c04450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04450ULL || rel >= 0xc04460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04460 size=16 callers=0 calls=0
*/
void sub_c04460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04460ULL || rel >= 0xc04470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04470 size=16 callers=0 calls=0
*/
void sub_c04470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04470ULL || rel >= 0xc04480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04480 size=304 callers=0 calls=1
   calls: sub_140bcf0
*/
void sub_c04480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04480ULL || rel >= 0xc045b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c045b0 size=128 callers=0 calls=0
*/
void sub_c045b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc045b0ULL || rel >= 0xc04630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04630 size=112 callers=0 calls=0
*/
void sub_c04630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04630ULL || rel >= 0xc046a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c046a0 size=112 callers=0 calls=0
*/
void sub_c046a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc046a0ULL || rel >= 0xc04710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04710 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c04710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04710ULL || rel >= 0xc04780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04780 size=112 callers=0 calls=0
*/
void sub_c04780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04780ULL || rel >= 0xc047f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

