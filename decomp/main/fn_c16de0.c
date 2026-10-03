/* main functions 00c16de0..00c36950 (96 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00c16de0 size=672 callers=6 calls=4
   calls: sub_12a25b0, sub_c195d0, sub_eb2600, sub_eb2ee0
*/
void sub_c16de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc16de0ULL || rel >= 0xc17080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c17080 size=672 callers=2 calls=4
   calls: sub_12a25b0, sub_c195d0, sub_eb2600, sub_eb2ee0
*/
void sub_c17080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc17080ULL || rel >= 0xc17320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c17320 size=1376 callers=1 calls=9
   calls: sub_5e2bc0, sub_64a740, sub_64a890, sub_65f1c0, sub_969be0, sub_c539f0, sub_c55e00, sub_c5a8d0, sub_c5ac60
*/
void sub_c17320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc17320ULL || rel >= 0xc17880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c17880 size=32 callers=1 calls=0
*/
void sub_c17880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc17880ULL || rel >= 0xc178a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c178a0 size=16 callers=5 calls=0
*/
void sub_c178a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc178a0ULL || rel >= 0xc178b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c178b0 size=1568 callers=6 calls=5
   calls: sub_12a25b0, sub_5f19d0, sub_c55af0, sub_c5ac40, sub_c5ac60
*/
void sub_c178b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc178b0ULL || rel >= 0xc17ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c17ed0 size=384 callers=1 calls=6
   calls: sub_c178b0, sub_c545c0, sub_c54640, sub_c5a8d0, sub_c5ac60, sub_c5ac90
*/
void sub_c17ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc17ed0ULL || rel >= 0xc18050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18050 size=16 callers=2 calls=0
*/
void sub_c18050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18050ULL || rel >= 0xc18060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18060 size=112 callers=1 calls=0
*/
void sub_c18060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18060ULL || rel >= 0xc180d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c180d0 size=96 callers=2 calls=0
*/
void sub_c180d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc180d0ULL || rel >= 0xc18130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18130 size=128 callers=1 calls=0
*/
void sub_c18130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18130ULL || rel >= 0xc181b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c181b0 size=128 callers=3 calls=0
*/
void sub_c181b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc181b0ULL || rel >= 0xc18230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18230 size=128 callers=4 calls=0
*/
void sub_c18230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18230ULL || rel >= 0xc182b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c182b0 size=80 callers=4 calls=0
*/
void sub_c182b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc182b0ULL || rel >= 0xc18300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18300 size=336 callers=4 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010
*/
void sub_c18300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18300ULL || rel >= 0xc18450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18450 size=1152 callers=2 calls=7
   calls: sub_12a25b0, sub_1310f00, sub_13149a0, sub_1314b50, sub_14b3270, sub_5f19d0, sub_ea3d10
*/
void sub_c18450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18450ULL || rel >= 0xc188d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c188d0 size=48 callers=4 calls=1
   calls: sub_5e3aa0
*/
void sub_c188d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc188d0ULL || rel >= 0xc18900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18900 size=240 callers=0 calls=0
*/
void sub_c18900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18900ULL || rel >= 0xc189f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c189f0 size=16 callers=0 calls=0
*/
void sub_c189f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc189f0ULL || rel >= 0xc18a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18a00 size=16 callers=0 calls=0
*/
void sub_c18a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18a00ULL || rel >= 0xc18a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18a10 size=16 callers=0 calls=0
*/
void sub_c18a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18a10ULL || rel >= 0xc18a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18a20 size=16 callers=0 calls=0
*/
void sub_c18a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18a20ULL || rel >= 0xc18a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18a30 size=16 callers=0 calls=0
*/
void sub_c18a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18a30ULL || rel >= 0xc18a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18a40 size=32 callers=0 calls=0
*/
void sub_c18a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18a40ULL || rel >= 0xc18a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18a60 size=336 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_c18a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18a60ULL || rel >= 0xc18bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18bb0 size=80 callers=0 calls=0
*/
void sub_c18bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18bb0ULL || rel >= 0xc18c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18c00 size=240 callers=0 calls=0
*/
void sub_c18c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18c00ULL || rel >= 0xc18cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18cf0 size=16 callers=0 calls=0
*/
void sub_c18cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18cf0ULL || rel >= 0xc18d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18d00 size=16 callers=0 calls=0
*/
void sub_c18d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18d00ULL || rel >= 0xc18d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18d10 size=80 callers=0 calls=0
*/
void sub_c18d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18d10ULL || rel >= 0xc18d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18d60 size=80 callers=0 calls=0
*/
void sub_c18d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18d60ULL || rel >= 0xc18db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18db0 size=16 callers=0 calls=0
*/
void sub_c18db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18db0ULL || rel >= 0xc18dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18dc0 size=16 callers=0 calls=0
*/
void sub_c18dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18dc0ULL || rel >= 0xc18dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18dd0 size=80 callers=0 calls=0
*/
void sub_c18dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18dd0ULL || rel >= 0xc18e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18e20 size=80 callers=0 calls=0
*/
void sub_c18e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18e20ULL || rel >= 0xc18e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18e70 size=128 callers=2 calls=1
   calls: sub_670830
*/
void sub_c18e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18e70ULL || rel >= 0xc18ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18ef0 size=144 callers=3 calls=2
   calls: sub_670830, sub_671e80
*/
void sub_c18ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18ef0ULL || rel >= 0xc18f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c18f80 size=1552 callers=2 calls=1
   calls: sub_670830
*/
void sub_c18f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc18f80ULL || rel >= 0xc19590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c19590 size=16 callers=4 calls=0
*/
void sub_c19590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc19590ULL || rel >= 0xc195a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c195a0 size=48 callers=2 calls=0
*/
void sub_c195a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc195a0ULL || rel >= 0xc195d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c195d0 size=3040 callers=2 calls=25
   calls: sub_5cfad0, sub_5f19d0, sub_5fe6a0, sub_6032f0, sub_b58470, sub_c1a1b0, sub_eb2c80, sub_ed29e0, sub_ed2ed0, sub_ed3080, sub_ed30a0, sub_ed3120
   ... +13 more
*/
void sub_c195d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc195d0ULL || rel >= 0xc1a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1a1b0 size=464 callers=2 calls=2
   calls: sub_5cfad0, sub_ed3930
*/
void sub_c1a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1a1b0ULL || rel >= 0xc1a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1a380 size=320 callers=0 calls=2
   calls: sub_5f19d0, sub_603250
*/
void sub_c1a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1a380ULL || rel >= 0xc1a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1a4c0 size=416 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_c1a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1a4c0ULL || rel >= 0xc1a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1a660 size=224 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_c1a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1a660ULL || rel >= 0xc1a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1a740 size=288 callers=0 calls=4
   calls: sub_c1a860, sub_c1aa30, sub_ed29f0, sub_ed3050
*/
void sub_c1a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1a740ULL || rel >= 0xc1a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1a860 size=464 callers=1 calls=2
   calls: sub_5cfad0, sub_ed3920
*/
void sub_c1a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1a860ULL || rel >= 0xc1aa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1aa30 size=128 callers=1 calls=4
   calls: sub_ed29e0, sub_ed34f0, sub_ed3940, sub_ed3e60
*/
void sub_c1aa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1aa30ULL || rel >= 0xc1aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1aab0 size=224 callers=0 calls=0
*/
void sub_c1aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1aab0ULL || rel >= 0xc1ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ab90 size=224 callers=0 calls=0
*/
void sub_c1ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ab90ULL || rel >= 0xc1ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ac70 size=16 callers=0 calls=0
*/
void sub_c1ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ac70ULL || rel >= 0xc1ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ac80 size=16 callers=0 calls=0
*/
void sub_c1ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ac80ULL || rel >= 0xc1ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ac90 size=224 callers=0 calls=0
*/
void sub_c1ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ac90ULL || rel >= 0xc1ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ad70 size=224 callers=0 calls=0
*/
void sub_c1ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ad70ULL || rel >= 0xc1ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ae50 size=16 callers=0 calls=0
*/
void sub_c1ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ae50ULL || rel >= 0xc1ae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ae60 size=16 callers=0 calls=0
*/
void sub_c1ae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ae60ULL || rel >= 0xc1ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ae70 size=224 callers=0 calls=0
*/
void sub_c1ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ae70ULL || rel >= 0xc1af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1af50 size=224 callers=0 calls=0
*/
void sub_c1af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1af50ULL || rel >= 0xc1b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1b030 size=48 callers=12 calls=1
   calls: sub_c1b060
*/
void sub_c1b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1b030ULL || rel >= 0xc1b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1b060 size=608 callers=1 calls=6
   calls: sub_1225e60, sub_13a4980, sub_5cf8e0, sub_5cf8f0, sub_65f110, sub_7c2da0
*/
void sub_c1b060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1b060ULL || rel >= 0xc1b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1b2c0 size=1488 callers=13 calls=16
   calls: isDemoSkipEnable, sub_130dae0, sub_1357610, sub_5d1b50, sub_5dd790, sub_5e2930, sub_5e2bc0, sub_601140, sub_65f1c0, sub_7c2d90, sub_bc0340, sub_bc0ee0
   ... +4 more
   ref: bin/demo/demo_data.prmb
*/
void demo_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1b2c0ULL || rel >= 0xc1b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1b890 size=1056 callers=2 calls=7
   calls: sub_1106220, sub_1106280, sub_1106320, sub_11063e0, sub_11065b0, sub_11069b0, sub_1106f30
   ref: demoParamList
   ref: arcFile
   ref: isDemoSkipEnable
   ref: memSize
*/
void isDemoSkipEnable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1b890ULL || rel >= 0xc1bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1bcb0 size=48 callers=13 calls=0
*/
void sub_c1bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1bcb0ULL || rel >= 0xc1bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1bce0 size=48 callers=12 calls=0
*/
void sub_c1bce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1bce0ULL || rel >= 0xc1bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1bd10 size=416 callers=13 calls=5
   calls: sub_601140, sub_7c2db0, sub_bc5730, sub_ed32f0, sub_ee7830
*/
void sub_c1bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1bd10ULL || rel >= 0xc1beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1beb0 size=656 callers=0 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2bc0, sub_65f110
*/
void sub_c1beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1beb0ULL || rel >= 0xc1c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c140 size=16 callers=0 calls=0
*/
void sub_c1c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c140ULL || rel >= 0xc1c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c150 size=16 callers=0 calls=0
*/
void sub_c1c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c150ULL || rel >= 0xc1c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c160 size=16 callers=0 calls=0
*/
void sub_c1c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c160ULL || rel >= 0xc1c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c170 size=16 callers=0 calls=0
*/
void sub_c1c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c170ULL || rel >= 0xc1c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c180 size=16 callers=0 calls=0
*/
void sub_c1c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c180ULL || rel >= 0xc1c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c190 size=16 callers=0 calls=0
*/
void sub_c1c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c190ULL || rel >= 0xc1c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c1a0 size=32 callers=0 calls=0
*/
void sub_c1c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c1a0ULL || rel >= 0xc1c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c1c0 size=416 callers=1 calls=4
   calls: sub_1225e60, sub_13a4980, sub_c1b030, sub_ea03d0
*/
void sub_c1c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c1c0ULL || rel >= 0xc1c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c360 size=176 callers=0 calls=4
   calls: demo_data, sub_c1bcb0, sub_c1bce0, sub_c1bd10
*/
void sub_c1c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c360ULL || rel >= 0xc1c410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c410 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_c1c410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c410ULL || rel >= 0xc1c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c470 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_c1c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c470ULL || rel >= 0xc1c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c4d0 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c1c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c4d0ULL || rel >= 0xc1c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c540 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_c1c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c540ULL || rel >= 0xc1c5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c5a0 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_c1c5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c5a0ULL || rel >= 0xc1c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c600 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c1c600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c600ULL || rel >= 0xc1c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c670 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c1c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c670ULL || rel >= 0xc1c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c6e0 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_c1c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c6e0ULL || rel >= 0xc1c740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c740 size=96 callers=0 calls=1
   calls: sub_13a4f20
*/
void sub_c1c740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c740ULL || rel >= 0xc1c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c7a0 size=96 callers=2 calls=1
   calls: sub_5db3d0
*/
void sub_c1c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c7a0ULL || rel >= 0xc1c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c800 size=96 callers=0 calls=1
   calls: sub_5db450
*/
void sub_c1c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c800ULL || rel >= 0xc1c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c860 size=96 callers=0 calls=1
   calls: sub_5db450
*/
void sub_c1c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c860ULL || rel >= 0xc1c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c8c0 size=208 callers=0 calls=0
*/
void sub_c1c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c8c0ULL || rel >= 0xc1c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1c990 size=208 callers=0 calls=0
*/
void sub_c1c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1c990ULL || rel >= 0xc1ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ca60 size=16 callers=0 calls=0
*/
void sub_c1ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ca60ULL || rel >= 0xc1ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ca70 size=208 callers=0 calls=0
*/
void sub_c1ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ca70ULL || rel >= 0xc1cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1cb40 size=208 callers=0 calls=0
*/
void sub_c1cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1cb40ULL || rel >= 0xc1cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1cc10 size=16 callers=0 calls=0
*/
void sub_c1cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1cc10ULL || rel >= 0xc1cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1cc20 size=16 callers=0 calls=0
*/
void sub_c1cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1cc20ULL || rel >= 0xc1cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1cc30 size=208 callers=0 calls=0
*/
void sub_c1cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1cc30ULL || rel >= 0xc1cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1cd00 size=208 callers=0 calls=0
*/
void sub_c1cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1cd00ULL || rel >= 0xc1cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1cdd0 size=304 callers=0 calls=0
*/
void sub_c1cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1cdd0ULL || rel >= 0xc1cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1cf00 size=144 callers=2 calls=1
   calls: sub_5db8e0
*/
void sub_c1cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1cf00ULL || rel >= 0xc1cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1cf90 size=272 callers=1 calls=1
   calls: sub_c1d0a0
*/
void sub_c1cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1cf90ULL || rel >= 0xc1d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1d0a0 size=896 callers=2 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_967240
*/
void sub_c1d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1d0a0ULL || rel >= 0xc1d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1d420 size=432 callers=1 calls=2
   calls: sub_967240, sub_c1d0a0
*/
void sub_c1d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1d420ULL || rel >= 0xc1d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1d5d0 size=48 callers=0 calls=1
   calls: sub_5db430
*/
void sub_c1d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1d5d0ULL || rel >= 0xc1d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1d600 size=3856 callers=0 calls=8
   calls: sub_13f68d0, sub_17c1a10, sub_59b970, sub_619640, sub_65cdb0, sub_68da30, sub_967240, sub_972c70
*/
void sub_c1d600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1d600ULL || rel >= 0xc1e510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e510 size=48 callers=0 calls=1
   calls: sub_5db430
*/
void sub_c1e510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e510ULL || rel >= 0xc1e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e540 size=48 callers=0 calls=1
   calls: sub_5db450
*/
void sub_c1e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e540ULL || rel >= 0xc1e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e570 size=48 callers=0 calls=1
   calls: sub_5db450
*/
void sub_c1e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e570ULL || rel >= 0xc1e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e5a0 size=256 callers=0 calls=0
*/
void sub_c1e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e5a0ULL || rel >= 0xc1e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e6a0 size=16 callers=0 calls=0
*/
void sub_c1e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e6a0ULL || rel >= 0xc1e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e6b0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_c1e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e6b0ULL || rel >= 0xc1e720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e720 size=16 callers=0 calls=0
*/
void sub_c1e720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e720ULL || rel >= 0xc1e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e730 size=16 callers=0 calls=0
*/
void sub_c1e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e730ULL || rel >= 0xc1e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e740 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_c1e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e740ULL || rel >= 0xc1e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e7b0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_c1e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e7b0ULL || rel >= 0xc1e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e820 size=16 callers=0 calls=0
*/
void sub_c1e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e820ULL || rel >= 0xc1e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e830 size=16 callers=0 calls=0
*/
void sub_c1e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e830ULL || rel >= 0xc1e840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e840 size=176 callers=1 calls=0
*/
void sub_c1e840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e840ULL || rel >= 0xc1e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1e8f0 size=1008 callers=5 calls=11
   calls: sub_5dd790, sub_5e2930, sub_5e5560, sub_96a5a0, sub_96bb80, sub_9ad440, sub_b77710, sub_c1ece0, sub_c1f910, sub_c201d0, sub_ec20
*/
void sub_c1e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1e8f0ULL || rel >= 0xc1ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ece0 size=528 callers=2 calls=0
*/
void sub_c1ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ece0ULL || rel >= 0xc1eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1eef0 size=16 callers=5 calls=0
*/
void sub_c1eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1eef0ULL || rel >= 0xc1ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ef00 size=160 callers=13 calls=4
   calls: sub_c1ece0, sub_c1efa0, sub_c1f910, sub_c201d0
*/
void sub_c1ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ef00ULL || rel >= 0xc1efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1efa0 size=784 callers=1 calls=2
   calls: sub_5dd790, sub_5e2930
*/
void sub_c1efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1efa0ULL || rel >= 0xc1f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1f2b0 size=224 callers=1 calls=0
*/
void sub_c1f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1f2b0ULL || rel >= 0xc1f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1f390 size=256 callers=2 calls=1
   calls: sub_c1f910
*/
void sub_c1f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1f390ULL || rel >= 0xc1f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1f490 size=192 callers=4 calls=0
*/
void sub_c1f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1f490ULL || rel >= 0xc1f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1f550 size=192 callers=7 calls=0
*/
void sub_c1f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1f550ULL || rel >= 0xc1f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1f610 size=192 callers=5 calls=0
*/
void sub_c1f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1f610ULL || rel >= 0xc1f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1f6d0 size=192 callers=4 calls=0
*/
void sub_c1f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1f6d0ULL || rel >= 0xc1f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1f790 size=192 callers=4 calls=0
*/
void sub_c1f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1f790ULL || rel >= 0xc1f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1f850 size=192 callers=2 calls=0
*/
void sub_c1f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1f850ULL || rel >= 0xc1f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1f910 size=1632 callers=7 calls=1
   calls: sub_5e2bc0
*/
void sub_c1f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1f910ULL || rel >= 0xc1ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c1ff70 size=608 callers=0 calls=1
   calls: sub_c1f910
*/
void sub_c1ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1ff70ULL || rel >= 0xc201d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c201d0 size=336 callers=2 calls=0
*/
void sub_c201d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc201d0ULL || rel >= 0xc20320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20320 size=560 callers=0 calls=1
   calls: sub_c1f910
*/
void sub_c20320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20320ULL || rel >= 0xc20550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20550 size=1056 callers=0 calls=9
   calls: sub_5dd790, sub_5e2930, sub_5e3870, sub_5e5560, sub_96a5a0, sub_96bb80, sub_9ad440, sub_b77710, sub_ec20
*/
void sub_c20550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20550ULL || rel >= 0xc20970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20970 size=128 callers=0 calls=0
*/
void sub_c20970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20970ULL || rel >= 0xc209f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c209f0 size=272 callers=0 calls=0
*/
void sub_c209f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc209f0ULL || rel >= 0xc20b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20b00 size=272 callers=0 calls=0
*/
void sub_c20b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20b00ULL || rel >= 0xc20c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20c10 size=128 callers=24 calls=0
*/
void sub_c20c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20c10ULL || rel >= 0xc20c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20c90 size=32 callers=6 calls=0
*/
void sub_c20c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20c90ULL || rel >= 0xc20cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20cb0 size=128 callers=4 calls=1
   calls: sub_c20cb0
*/
void sub_c20cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20cb0ULL || rel >= 0xc20d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20d30 size=240 callers=4 calls=1
   calls: sub_c20d30
*/
void sub_c20d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20d30ULL || rel >= 0xc20e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20e20 size=64 callers=4 calls=0
*/
void sub_c20e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20e20ULL || rel >= 0xc20e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20e60 size=32 callers=3 calls=0
*/
void sub_c20e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20e60ULL || rel >= 0xc20e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20e80 size=32 callers=2 calls=0
*/
void sub_c20e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20e80ULL || rel >= 0xc20ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20ea0 size=32 callers=13 calls=0
*/
void sub_c20ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20ea0ULL || rel >= 0xc20ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20ec0 size=160 callers=2 calls=1
   calls: sub_c20ec0
*/
void sub_c20ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20ec0ULL || rel >= 0xc20f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20f60 size=96 callers=18 calls=1
   calls: sub_e7eb10
*/
void sub_c20f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20f60ULL || rel >= 0xc20fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c20fc0 size=96 callers=3 calls=1
   calls: sub_e7eb10
*/
void sub_c20fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc20fc0ULL || rel >= 0xc21020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21020 size=32 callers=3 calls=0
*/
void sub_c21020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21020ULL || rel >= 0xc21040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21040 size=224 callers=17 calls=4
   calls: sub_b3abe0, sub_b4c080, sub_b571d0, sub_b74850
*/
void sub_c21040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21040ULL || rel >= 0xc21120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21120 size=720 callers=1 calls=1
   calls: sub_b72950
*/
void sub_c21120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21120ULL || rel >= 0xc213f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c213f0 size=1200 callers=5 calls=2
   calls: sub_b6ff20, sub_b72950
*/
void sub_c213f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc213f0ULL || rel >= 0xc218a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c218a0 size=48 callers=2 calls=0
*/
void sub_c218a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc218a0ULL || rel >= 0xc218d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c218d0 size=48 callers=3 calls=0
*/
void sub_c218d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc218d0ULL || rel >= 0xc21900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21900 size=48 callers=1 calls=0
*/
void sub_c21900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21900ULL || rel >= 0xc21930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21930 size=144 callers=2 calls=2
   calls: sub_b6ff20, sub_b72950
*/
void sub_c21930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21930ULL || rel >= 0xc219c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c219c0 size=224 callers=6 calls=2
   calls: sub_b4c070, sub_b751c0
*/
void sub_c219c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc219c0ULL || rel >= 0xc21aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21aa0 size=48 callers=6 calls=0
*/
void sub_c21aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21aa0ULL || rel >= 0xc21ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21ad0 size=32 callers=3 calls=0
*/
void sub_c21ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21ad0ULL || rel >= 0xc21af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21af0 size=160 callers=3 calls=2
   calls: sub_137c8a0, sub_c21120
*/
void sub_c21af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21af0ULL || rel >= 0xc21b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21b90 size=176 callers=3 calls=2
   calls: sub_b6ff20, sub_b72950
*/
void sub_c21b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21b90ULL || rel >= 0xc21c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21c40 size=272 callers=2 calls=0
*/
void sub_c21c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21c40ULL || rel >= 0xc21d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21d50 size=240 callers=1 calls=2
   calls: sub_c21e40, sub_c22600
*/
void sub_c21d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21d50ULL || rel >= 0xc21e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c21e40 size=480 callers=2 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_c21e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc21e40ULL || rel >= 0xc22020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22020 size=16 callers=0 calls=0
*/
void sub_c22020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22020ULL || rel >= 0xc22030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22030 size=128 callers=0 calls=0
*/
void sub_c22030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22030ULL || rel >= 0xc220b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c220b0 size=336 callers=0 calls=2
   calls: sub_c22200, sub_c22ee0
*/
void sub_c220b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc220b0ULL || rel >= 0xc22200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22200 size=272 callers=1 calls=3
   calls: sub_672c10, sub_c22730, sub_c386f0
*/
void sub_c22200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22200ULL || rel >= 0xc22310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22310 size=128 callers=0 calls=0
*/
void sub_c22310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22310ULL || rel >= 0xc22390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22390 size=96 callers=0 calls=0
*/
void sub_c22390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22390ULL || rel >= 0xc223f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c223f0 size=96 callers=0 calls=0
*/
void sub_c223f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc223f0ULL || rel >= 0xc22450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22450 size=16 callers=0 calls=0
*/
void sub_c22450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22450ULL || rel >= 0xc22460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22460 size=96 callers=0 calls=0
*/
void sub_c22460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22460ULL || rel >= 0xc224c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c224c0 size=96 callers=0 calls=0
*/
void sub_c224c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc224c0ULL || rel >= 0xc22520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22520 size=16 callers=0 calls=0
*/
void sub_c22520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22520ULL || rel >= 0xc22530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22530 size=16 callers=0 calls=0
*/
void sub_c22530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22530ULL || rel >= 0xc22540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22540 size=96 callers=0 calls=0
*/
void sub_c22540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22540ULL || rel >= 0xc225a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c225a0 size=96 callers=0 calls=0
*/
void sub_c225a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc225a0ULL || rel >= 0xc22600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22600 size=304 callers=1 calls=0
*/
void sub_c22600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22600ULL || rel >= 0xc22730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22730 size=240 callers=1 calls=2
   calls: sub_c22820, sub_e7b660
*/
void sub_c22730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22730ULL || rel >= 0xc22820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22820 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_c22900, sub_e7b5e0
*/
void sub_c22820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22820ULL || rel >= 0xc22900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22900 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c22900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22900ULL || rel >= 0xc229f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c229f0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_c229f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc229f0ULL || rel >= 0xc22a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22a70 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c22a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22a70ULL || rel >= 0xc22be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22be0 size=96 callers=0 calls=1
   calls: sub_c22e00
*/
void sub_c22be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22be0ULL || rel >= 0xc22c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22c40 size=16 callers=0 calls=0
*/
void sub_c22c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22c40ULL || rel >= 0xc22c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22c50 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c22c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22c50ULL || rel >= 0xc22cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22cf0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_c22cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22cf0ULL || rel >= 0xc22db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22db0 size=16 callers=0 calls=0
*/
void sub_c22db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22db0ULL || rel >= 0xc22dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22dc0 size=16 callers=0 calls=0
*/
void sub_c22dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22dc0ULL || rel >= 0xc22dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22dd0 size=16 callers=0 calls=0
*/
void sub_c22dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22dd0ULL || rel >= 0xc22de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22de0 size=32 callers=0 calls=0
*/
void sub_c22de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22de0ULL || rel >= 0xc22e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22e00 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_c22e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22e00ULL || rel >= 0xc22ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22ee0 size=240 callers=2 calls=1
   calls: sub_c39c40
*/
void sub_c22ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22ee0ULL || rel >= 0xc22fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c22fd0 size=128 callers=0 calls=0
*/
void sub_c22fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc22fd0ULL || rel >= 0xc23050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c23050 size=1312 callers=0 calls=22
   calls: sub_13575e0, sub_136b780, sub_78f150, sub_78f240, sub_794e80, sub_79ab20, sub_79b250, sub_c20c10, sub_c21040, sub_c23570, sub_c24ab0, sub_c25620
   ... +10 more
   ref: CommonOptionBar
   ref: common/dressup.dat
   ref: SystemMessageView
   ref: common/dressup_item_name.dat
   ref: DressupTopView
*/
void SystemMessageView_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc23050ULL || rel >= 0xc23570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c23570 size=400 callers=1 calls=3
   calls: sub_c240e0, sub_c24980, sub_e7c160
*/
void sub_c23570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc23570ULL || rel >= 0xc23700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c23700 size=208 callers=0 calls=2
   calls: sub_c24980, sub_c33590
*/
void sub_c23700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc23700ULL || rel >= 0xc237d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c237d0 size=208 callers=0 calls=3
   calls: sub_c24980, sub_c2cea0, sub_c33590
*/
void sub_c237d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc237d0ULL || rel >= 0xc238a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c238a0 size=880 callers=0 calls=7
   calls: sub_c24e90, sub_c24fd0, sub_c25120, sub_c25260, sub_c253a0, sub_c254e0, sub_e7c160
*/
void sub_c238a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc238a0ULL || rel >= 0xc23c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c23c10 size=176 callers=0 calls=2
   calls: sub_13575e0, sub_ea3d10
*/
void sub_c23c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc23c10ULL || rel >= 0xc23cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c23cc0 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_c23cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc23cc0ULL || rel >= 0xc23e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c23e80 size=16 callers=0 calls=0
*/
void sub_c23e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc23e80ULL || rel >= 0xc23e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c23e90 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c23e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc23e90ULL || rel >= 0xc23f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c23f40 size=16 callers=0 calls=0
*/
void sub_c23f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc23f40ULL || rel >= 0xc23f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c23f50 size=16 callers=0 calls=0
*/
void sub_c23f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc23f50ULL || rel >= 0xc23f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c23f60 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c23f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc23f60ULL || rel >= 0xc24010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24010 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_c24010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24010ULL || rel >= 0xc240c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c240c0 size=16 callers=0 calls=0
*/
void sub_c240c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc240c0ULL || rel >= 0xc240d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c240d0 size=16 callers=0 calls=0
*/
void sub_c240d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc240d0ULL || rel >= 0xc240e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c240e0 size=272 callers=1 calls=4
   calls: sub_b6f8c0, sub_c241f0, sub_c245d0, sub_e7c210
*/
void sub_c240e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc240e0ULL || rel >= 0xc241f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c241f0 size=640 callers=1 calls=1
   calls: sub_65d700
*/
void sub_c241f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc241f0ULL || rel >= 0xc24470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24470 size=224 callers=0 calls=1
   calls: sub_c247d0
*/
void sub_c24470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24470ULL || rel >= 0xc24550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24550 size=16 callers=0 calls=0
*/
void sub_c24550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24550ULL || rel >= 0xc24560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24560 size=16 callers=0 calls=0
*/
void sub_c24560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24560ULL || rel >= 0xc24570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24570 size=16 callers=0 calls=0
*/
void sub_c24570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24570ULL || rel >= 0xc24580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24580 size=16 callers=0 calls=0
*/
void sub_c24580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24580ULL || rel >= 0xc24590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24590 size=16 callers=0 calls=0
*/
void sub_c24590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24590ULL || rel >= 0xc245a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c245a0 size=16 callers=0 calls=0
*/
void sub_c245a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc245a0ULL || rel >= 0xc245b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c245b0 size=16 callers=0 calls=0
*/
void sub_c245b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc245b0ULL || rel >= 0xc245c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c245c0 size=16 callers=0 calls=0
*/
void sub_c245c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc245c0ULL || rel >= 0xc245d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c245d0 size=256 callers=1 calls=1
   calls: sub_c246d0
*/
void sub_c245d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc245d0ULL || rel >= 0xc246d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c246d0 size=256 callers=2 calls=2
   calls: sub_b4a710, sub_b6f8c0
*/
void sub_c246d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc246d0ULL || rel >= 0xc247d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c247d0 size=432 callers=1 calls=0
*/
void sub_c247d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc247d0ULL || rel >= 0xc24980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24980 size=304 callers=14 calls=0
*/
void sub_c24980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24980ULL || rel >= 0xc24ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24ab0 size=288 callers=1 calls=2
   calls: sub_c24bd0, sub_e809c0
*/
void sub_c24ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24ab0ULL || rel >= 0xc24bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24bd0 size=384 callers=1 calls=3
   calls: sub_790490, sub_c24d50, sub_e7fe20
*/
void sub_c24bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24bd0ULL || rel >= 0xc24d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24d50 size=320 callers=1 calls=2
   calls: anonymous_2, sub_c20c90
*/
void sub_c24d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24d50ULL || rel >= 0xc24e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24e90 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_c24e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24e90ULL || rel >= 0xc24fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c24fd0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_c24fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc24fd0ULL || rel >= 0xc25120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25120 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_c25120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25120ULL || rel >= 0xc25260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25260 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_c25260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25260ULL || rel >= 0xc253a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c253a0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_c253a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc253a0ULL || rel >= 0xc254e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c254e0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_c254e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc254e0ULL || rel >= 0xc25620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25620 size=48 callers=1 calls=0
*/
void sub_c25620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25620ULL || rel >= 0xc25650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25650 size=352 callers=0 calls=3
   calls: sub_b4c070, sub_b75230, sub_c258c0
*/
void sub_c25650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25650ULL || rel >= 0xc257b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c257b0 size=272 callers=0 calls=2
   calls: sub_b4c070, sub_b75230
*/
void sub_c257b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc257b0ULL || rel >= 0xc258c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c258c0 size=864 callers=1 calls=6
   calls: sub_c20c10, sub_c21020, sub_c21040, sub_c218a0, sub_c21af0, sub_c260c0
*/
void sub_c258c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc258c0ULL || rel >= 0xc25c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25c20 size=80 callers=5 calls=1
   calls: sub_c20c10
*/
void sub_c25c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25c20ULL || rel >= 0xc25c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25c70 size=32 callers=1 calls=0
*/
void sub_c25c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25c70ULL || rel >= 0xc25c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25c90 size=80 callers=10 calls=1
   calls: sub_c20c10
*/
void sub_c25c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25c90ULL || rel >= 0xc25ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25ce0 size=48 callers=12 calls=0
*/
void sub_c25ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25ce0ULL || rel >= 0xc25d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25d10 size=368 callers=0 calls=4
   calls: sub_137c850, sub_c20c10, sub_c21ad0, sub_c260c0
*/
void sub_c25d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25d10ULL || rel >= 0xc25e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25e80 size=64 callers=0 calls=0
*/
void sub_c25e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25e80ULL || rel >= 0xc25ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25ec0 size=48 callers=0 calls=0
*/
void sub_c25ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25ec0ULL || rel >= 0xc25ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25ef0 size=32 callers=0 calls=0
*/
void sub_c25ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25ef0ULL || rel >= 0xc25f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c25f10 size=384 callers=0 calls=3
   calls: sub_c20c10, sub_c21ad0, sub_c260c0
*/
void sub_c25f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc25f10ULL || rel >= 0xc26090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c26090 size=16 callers=0 calls=0
*/
void sub_c26090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc26090ULL || rel >= 0xc260a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c260a0 size=16 callers=0 calls=0
*/
void sub_c260a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc260a0ULL || rel >= 0xc260b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c260b0 size=16 callers=0 calls=0
*/
void sub_c260b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc260b0ULL || rel >= 0xc260c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c260c0 size=544 callers=4 calls=0
*/
void sub_c260c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc260c0ULL || rel >= 0xc262e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c262e0 size=48 callers=4 calls=1
   calls: sub_c21b90
*/
void sub_c262e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc262e0ULL || rel >= 0xc26310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c26310 size=512 callers=4 calls=1
   calls: sub_c26510
*/
void sub_c26310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc26310ULL || rel >= 0xc26510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c26510 size=176 callers=9 calls=5
   calls: sub_b72950, sub_c218d0, sub_c21900, sub_c338b0, sub_c33910
*/
void sub_c26510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc26510ULL || rel >= 0xc265c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c265c0 size=240 callers=3 calls=0
*/
void sub_c265c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc265c0ULL || rel >= 0xc266b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c266b0 size=288 callers=2 calls=0
*/
void sub_c266b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc266b0ULL || rel >= 0xc267d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c267d0 size=1040 callers=1 calls=4
   calls: sub_5cfad0, sub_b4c060, sub_b959d0, sub_b963f0
   ref: fi_action_trigger
   ref: fi_action_number
*/
void fi_action_trigger(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc267d0ULL || rel >= 0xc26be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c26be0 size=368 callers=1 calls=4
   calls: sub_59b250, sub_59b330, sub_5b9220, sub_c35d10
*/
void sub_c26be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc26be0ULL || rel >= 0xc26d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c26d50 size=48 callers=0 calls=2
   calls: sub_c26d80, sub_c27000
*/
void sub_c26d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc26d50ULL || rel >= 0xc26d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c26d80 size=640 callers=1 calls=0
*/
void sub_c26d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc26d80ULL || rel >= 0xc27000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c27000 size=704 callers=1 calls=0
*/
void sub_c27000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc27000ULL || rel >= 0xc272c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c272c0 size=256 callers=0 calls=4
   calls: sub_ea3d10, sub_ea4740, sub_ea47d0, sub_ea47f0
*/
void sub_c272c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc272c0ULL || rel >= 0xc273c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c273c0 size=704 callers=0 calls=2
   calls: sub_972c70, sub_c34680
*/
void sub_c273c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc273c0ULL || rel >= 0xc27680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c27680 size=320 callers=0 calls=7
   calls: sub_135a1a0, sub_136b730, sub_b48300, sub_b48350, sub_b483a0, sub_b483f0, sub_c350d0
*/
void sub_c27680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc27680ULL || rel >= 0xc277c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c277c0 size=256 callers=0 calls=1
   calls: sub_b4a780
*/
void sub_c277c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc277c0ULL || rel >= 0xc278c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c278c0 size=16 callers=0 calls=0
*/
void sub_c278c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc278c0ULL || rel >= 0xc278d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c278d0 size=16 callers=0 calls=0
*/
void sub_c278d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc278d0ULL || rel >= 0xc278e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c278e0 size=16 callers=0 calls=0
*/
void sub_c278e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc278e0ULL || rel >= 0xc278f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c278f0 size=16 callers=0 calls=0
*/
void sub_c278f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc278f0ULL || rel >= 0xc27900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c27900 size=16 callers=0 calls=0
*/
void sub_c27900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc27900ULL || rel >= 0xc27910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c27910 size=16 callers=0 calls=0
*/
void sub_c27910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc27910ULL || rel >= 0xc27920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c27920 size=16 callers=0 calls=0
*/
void sub_c27920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc27920ULL || rel >= 0xc27930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c27930 size=16 callers=0 calls=0
*/
void sub_c27930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc27930ULL || rel >= 0xc27940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c27940 size=16 callers=0 calls=0
*/
void sub_c27940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc27940ULL || rel >= 0xc27950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c27950 size=16 callers=0 calls=0
*/
void sub_c27950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc27950ULL || rel >= 0xc27960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c27960 size=1664 callers=0 calls=16
   calls: fi_action_trigger, sub_12fac60, sub_1345ca0, sub_1345cb0, sub_136b780, sub_136e8b0, sub_14be490, sub_5cfad0, sub_795bc0, sub_c21c40, sub_c24980, sub_c27fe0
   ... +4 more
   ref: BOUTIQUE_NOTBUY
   ref: DressupEndState
   ref: DressupTopView
*/
void DressupEndState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc27960ULL || rel >= 0xc27fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c27fe0 size=464 callers=1 calls=4
   calls: sub_13ed330, sub_ca8570, sub_d25bd0, sub_d36930
*/
void sub_c27fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc27fe0ULL || rel >= 0xc281b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c281b0 size=384 callers=1 calls=4
   calls: sub_136b780, sub_b4c060, sub_b98390, sub_d25bd0
*/
void sub_c281b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc281b0ULL || rel >= 0xc28330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28330 size=624 callers=0 calls=12
   calls: anime_cover_out, sub_1502120, sub_5cfad0, sub_b4c060, sub_b98550, sub_c24980, sub_c26be0, sub_c285a0, sub_c2e410, sub_c33940, sub_eb77f0, sub_eb7830
*/
void sub_c28330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28330ULL || rel >= 0xc285a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c285a0 size=1264 callers=1 calls=12
   calls: sub_5d99d0, sub_6194a0, sub_967240, sub_b33760, sub_b4c060, sub_c28fd0, sub_c291d0, sub_c293a0, sub_c295a0, sub_c298c0, sub_c51540, sub_ed2fe0
*/
void sub_c285a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc285a0ULL || rel >= 0xc28a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28a90 size=96 callers=0 calls=0
*/
void sub_c28a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28a90ULL || rel >= 0xc28af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28af0 size=96 callers=0 calls=0
*/
void sub_c28af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28af0ULL || rel >= 0xc28b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28b50 size=16 callers=0 calls=0
*/
void sub_c28b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28b50ULL || rel >= 0xc28b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28b60 size=96 callers=0 calls=0
*/
void sub_c28b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28b60ULL || rel >= 0xc28bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28bc0 size=96 callers=0 calls=0
*/
void sub_c28bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28bc0ULL || rel >= 0xc28c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28c20 size=16 callers=0 calls=0
*/
void sub_c28c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28c20ULL || rel >= 0xc28c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28c30 size=16 callers=0 calls=0
*/
void sub_c28c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28c30ULL || rel >= 0xc28c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28c40 size=96 callers=0 calls=0
*/
void sub_c28c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28c40ULL || rel >= 0xc28ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28ca0 size=96 callers=0 calls=0
*/
void sub_c28ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28ca0ULL || rel >= 0xc28d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28d00 size=304 callers=0 calls=0
*/
void sub_c28d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28d00ULL || rel >= 0xc28e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28e30 size=336 callers=6 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_c28e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28e30ULL || rel >= 0xc28f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28f80 size=32 callers=0 calls=0
*/
void sub_c28f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28f80ULL || rel >= 0xc28fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28fa0 size=16 callers=0 calls=0
*/
void sub_c28fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28fa0ULL || rel >= 0xc28fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28fb0 size=16 callers=0 calls=0
*/
void sub_c28fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28fb0ULL || rel >= 0xc28fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28fc0 size=16 callers=0 calls=0
*/
void sub_c28fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28fc0ULL || rel >= 0xc28fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c28fd0 size=512 callers=9 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_c28fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28fd0ULL || rel >= 0xc291d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c291d0 size=464 callers=8 calls=0
*/
void sub_c291d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc291d0ULL || rel >= 0xc293a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c293a0 size=512 callers=6 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_c293a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc293a0ULL || rel >= 0xc295a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c295a0 size=800 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_c295a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc295a0ULL || rel >= 0xc298c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c298c0 size=304 callers=1 calls=1
   calls: sub_cafce0
*/
void sub_c298c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc298c0ULL || rel >= 0xc299f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c299f0 size=128 callers=0 calls=0
*/
void sub_c299f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc299f0ULL || rel >= 0xc29a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c29a70 size=2176 callers=0 calls=23
   calls: anime_cover_out, sub_13575e0, sub_1502120, sub_5cfad0, sub_5cfaf0, sub_67b990, sub_67d450, sub_795bc0, sub_79b990, sub_c20c10, sub_c20c90, sub_c20f60
   ... +11 more
   ref: DressupStartState
   ref: DressupTopView
*/
void DressupStartState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc29a70ULL || rel >= 0xc2a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a2f0 size=112 callers=0 calls=3
   calls: sub_c2d5e0, sub_c2e410, sub_eb7790
*/
void sub_c2a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a2f0ULL || rel >= 0xc2a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a360 size=16 callers=0 calls=0
*/
void sub_c2a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a360ULL || rel >= 0xc2a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a370 size=16 callers=0 calls=0
*/
void sub_c2a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a370ULL || rel >= 0xc2a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a380 size=16 callers=0 calls=0
*/
void sub_c2a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a380ULL || rel >= 0xc2a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a390 size=16 callers=0 calls=0
*/
void sub_c2a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a390ULL || rel >= 0xc2a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a3a0 size=16 callers=0 calls=0
*/
void sub_c2a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a3a0ULL || rel >= 0xc2a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a3b0 size=16 callers=0 calls=0
*/
void sub_c2a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a3b0ULL || rel >= 0xc2a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a3c0 size=16 callers=0 calls=0
*/
void sub_c2a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a3c0ULL || rel >= 0xc2a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a3d0 size=16 callers=0 calls=0
*/
void sub_c2a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a3d0ULL || rel >= 0xc2a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a3e0 size=304 callers=0 calls=0
*/
void sub_c2a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a3e0ULL || rel >= 0xc2a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a510 size=656 callers=0 calls=9
   calls: sub_5cfaf0, sub_79b990, sub_c28e30, sub_c2d700, sub_c2e310, sub_c2e8d0, sub_c39c40, sub_d0c0, sub_e807f0
   ref: DressupSelectState
   ref: DressupTopView
*/
void DressupSelectState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a510ULL || rel >= 0xc2a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a7a0 size=96 callers=0 calls=1
   calls: Play_UI_boutique_change
*/
void sub_c2a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a7a0ULL || rel >= 0xc2a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2a800 size=2720 callers=1 calls=32
   calls: sub_12fac60, sub_1311c60, sub_1315b90, sub_136b780, sub_136e8b0, sub_137b8b0, sub_137b8c0, sub_137c850, sub_137c9c0, sub_1502120, sub_5cfad0, sub_67d450
   ... +20 more
   ref: SHOPPING_CLOTHES
   ref: Play_UI_boutique_change
*/
void Play_UI_boutique_change(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a800ULL || rel >= 0xc2b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2b2a0 size=2256 callers=0 calls=24
   calls: sub_135a1a0, sub_136b780, sub_5cfad0, sub_67d450, sub_c20f60, sub_c21040, sub_c219c0, sub_c21c40, sub_c24980, sub_c25c90, sub_c262e0, sub_c26310
   ... +12 more
   ref: Play_UI_common_report
   ref: Play_UI_boutique_change
*/
void Play_UI_common_report(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2b2a0ULL || rel >= 0xc2bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2bb70 size=1760 callers=1 calls=2
   calls: sub_137ca10, sub_b72950
*/
void sub_c2bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2bb70ULL || rel >= 0xc2c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c250 size=224 callers=3 calls=7
   calls: sub_c24980, sub_c2d5e0, sub_c2d790, sub_c2d8f0, sub_c2e310, sub_c2e8d0, sub_e807f0
*/
void sub_c2c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c250ULL || rel >= 0xc2c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c330 size=16 callers=0 calls=0
*/
void sub_c2c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c330ULL || rel >= 0xc2c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c340 size=16 callers=0 calls=0
*/
void sub_c2c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c340ULL || rel >= 0xc2c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c350 size=16 callers=0 calls=0
*/
void sub_c2c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c350ULL || rel >= 0xc2c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c360 size=16 callers=0 calls=0
*/
void sub_c2c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c360ULL || rel >= 0xc2c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c370 size=16 callers=0 calls=0
*/
void sub_c2c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c370ULL || rel >= 0xc2c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c380 size=16 callers=0 calls=0
*/
void sub_c2c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c380ULL || rel >= 0xc2c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c390 size=16 callers=0 calls=0
*/
void sub_c2c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c390ULL || rel >= 0xc2c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c3a0 size=16 callers=0 calls=0
*/
void sub_c2c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c3a0ULL || rel >= 0xc2c3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c3b0 size=304 callers=0 calls=0
*/
void sub_c2c3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c3b0ULL || rel >= 0xc2c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c4e0 size=624 callers=0 calls=10
   calls: anime_cover_out, sub_13575e0, sub_c24980, sub_c265c0, sub_c266b0, sub_c28e30, sub_c2d790, sub_c39c40, sub_d0c0, sub_ea3d10
   ref: DressupViewerEndState
   ref: DressupTopView
*/
void DressupViewerEndState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c4e0ULL || rel >= 0xc2c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c750 size=208 callers=0 calls=3
   calls: sub_c24980, sub_c2d5e0, sub_c2e410
*/
void sub_c2c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c750ULL || rel >= 0xc2c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c820 size=16 callers=0 calls=0
*/
void sub_c2c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c820ULL || rel >= 0xc2c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c830 size=16 callers=0 calls=0
*/
void sub_c2c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c830ULL || rel >= 0xc2c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c840 size=16 callers=0 calls=0
*/
void sub_c2c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c840ULL || rel >= 0xc2c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c850 size=16 callers=0 calls=0
*/
void sub_c2c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c850ULL || rel >= 0xc2c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c860 size=16 callers=0 calls=0
*/
void sub_c2c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c860ULL || rel >= 0xc2c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c870 size=16 callers=0 calls=0
*/
void sub_c2c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c870ULL || rel >= 0xc2c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c880 size=16 callers=0 calls=0
*/
void sub_c2c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c880ULL || rel >= 0xc2c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c890 size=16 callers=0 calls=0
*/
void sub_c2c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c890ULL || rel >= 0xc2c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c8a0 size=304 callers=0 calls=0
*/
void sub_c2c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c8a0ULL || rel >= 0xc2c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2c9d0 size=640 callers=0 calls=11
   calls: anime_cover_out, sub_13575e0, sub_c24980, sub_c266b0, sub_c28e30, sub_c2d5e0, sub_c2eeb0, sub_c2f0b0, sub_c39c40, sub_d0c0, sub_ea3d10
   ref: DressupViewerStartState
   ref: DressupTopView
*/
void DressupViewerStartState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c9d0ULL || rel >= 0xc2cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2cc50 size=160 callers=0 calls=2
   calls: sub_c24980, sub_c2e410
*/
void sub_c2cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2cc50ULL || rel >= 0xc2ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2ccf0 size=16 callers=0 calls=0
*/
void sub_c2ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2ccf0ULL || rel >= 0xc2cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2cd00 size=16 callers=0 calls=0
*/
void sub_c2cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2cd00ULL || rel >= 0xc2cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2cd10 size=16 callers=0 calls=0
*/
void sub_c2cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2cd10ULL || rel >= 0xc2cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2cd20 size=16 callers=0 calls=0
*/
void sub_c2cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2cd20ULL || rel >= 0xc2cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2cd30 size=16 callers=0 calls=0
*/
void sub_c2cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2cd30ULL || rel >= 0xc2cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2cd40 size=16 callers=0 calls=0
*/
void sub_c2cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2cd40ULL || rel >= 0xc2cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2cd50 size=16 callers=0 calls=0
*/
void sub_c2cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2cd50ULL || rel >= 0xc2cd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2cd60 size=16 callers=0 calls=0
*/
void sub_c2cd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2cd60ULL || rel >= 0xc2cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2cd70 size=304 callers=0 calls=0
*/
void sub_c2cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2cd70ULL || rel >= 0xc2cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2cea0 size=208 callers=1 calls=6
   calls: sub_14ab2b0, sub_1500c40, sub_c20c10, sub_c20ea0, sub_c2cf70, sub_c2d5e0
*/
void sub_c2cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2cea0ULL || rel >= 0xc2cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2cf70 size=1648 callers=2 calls=29
   calls: sub_136b780, sub_14aad40, sub_14e1a00, sub_14e1a30, sub_14edac0, sub_14f1840, sub_14f1850, sub_b4c070, sub_b751c0, sub_c20c10, sub_c20e20, sub_c20f60
   ... +17 more
*/
void sub_c2cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2cf70ULL || rel >= 0xc2d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2d5e0 size=272 callers=8 calls=2
   calls: sub_14e1a30, sub_e843d0
*/
void sub_c2d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2d5e0ULL || rel >= 0xc2d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2d6f0 size=16 callers=0 calls=0
*/
void sub_c2d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2d6f0ULL || rel >= 0xc2d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2d700 size=144 callers=1 calls=3
   calls: sub_14e1a00, sub_c20e20, sub_e83f20
*/
void sub_c2d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2d700ULL || rel >= 0xc2d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2d790 size=352 callers=4 calls=9
   calls: sub_14eebd0, sub_14eebe0, sub_c21040, sub_c213f0, sub_c218d0, sub_c21930, sub_c21aa0, sub_c25c20, sub_c2ec20
*/
void sub_c2d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2d790ULL || rel >= 0xc2d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2d8f0 size=656 callers=3 calls=6
   calls: sub_136b780, sub_67d450, sub_b72950, sub_c20f60, sub_eb7570, sub_eb75e0
*/
void sub_c2d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2d8f0ULL || rel >= 0xc2db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2db80 size=560 callers=2 calls=3
   calls: sub_c20f60, sub_c20fc0, sub_c30710
*/
void sub_c2db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2db80ULL || rel >= 0xc2ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2ddb0 size=672 callers=2 calls=3
   calls: sub_c20f60, sub_c20fc0, sub_c30710
*/
void sub_c2ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2ddb0ULL || rel >= 0xc2e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e050 size=416 callers=2 calls=4
   calls: sub_1315b90, sub_137b8b0, sub_c20f60, sub_c2e1f0
*/
void sub_c2e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e050ULL || rel >= 0xc2e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e1f0 size=288 callers=14 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_c2e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e1f0ULL || rel >= 0xc2e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e310 size=32 callers=2 calls=0
*/
void sub_c2e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e310ULL || rel >= 0xc2e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e330 size=32 callers=2 calls=0
*/
void sub_c2e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e330ULL || rel >= 0xc2e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e350 size=192 callers=5 calls=0
   ref: anime_cover_in
   ref: anime_in
   ref: anime_f_out
   ref: anime_prev_out
   ref: anime_out
   ref: anime_keep
   ref: anime_prev_in
   ref: anime_f_in
*/
void anime_cover_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e350ULL || rel >= 0xc2e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e410 size=512 callers=4 calls=1
   calls: sub_14ab2b0
*/
void sub_c2e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e410ULL || rel >= 0xc2e610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e610 size=160 callers=2 calls=4
   calls: sub_c20c10, sub_c20ea0, sub_e83430, sub_e83850
*/
void sub_c2e610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e610ULL || rel >= 0xc2e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e6b0 size=64 callers=1 calls=2
   calls: sub_14eebd0, sub_14eebe0
*/
void sub_c2e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e6b0ULL || rel >= 0xc2e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e6f0 size=96 callers=5 calls=3
   calls: sub_14eebd0, sub_14eebe0, sub_c25c20
*/
void sub_c2e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e6f0ULL || rel >= 0xc2e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e750 size=384 callers=2 calls=5
   calls: sub_1315b90, sub_c20e80, sub_c20f60, sub_c2e1f0, sub_e83930
*/
void sub_c2e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e750ULL || rel >= 0xc2e8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e8d0 size=144 callers=5 calls=1
   calls: sub_14e1a00
*/
void sub_c2e8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e8d0ULL || rel >= 0xc2e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2e960 size=464 callers=1 calls=7
   calls: sub_14aad40, sub_17919c0, sub_c20c10, sub_c20c90, sub_c20ea0, sub_c25c90, sub_e83430
*/
void sub_c2e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2e960ULL || rel >= 0xc2eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2eb30 size=240 callers=1 calls=5
   calls: sub_c20c10, sub_c20ea0, sub_e83430, sub_e83930, sub_e83a20
*/
void sub_c2eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2eb30ULL || rel >= 0xc2ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2ec20 size=640 callers=3 calls=4
   calls: sub_67d450, sub_c20f60, sub_eb7570, sub_eb75e0
*/
void sub_c2ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2ec20ULL || rel >= 0xc2eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2eea0 size=16 callers=2 calls=0
*/
void sub_c2eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2eea0ULL || rel >= 0xc2eeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2eeb0 size=512 callers=2 calls=4
   calls: sub_67d450, sub_c20f60, sub_eb7570, sub_eb75e0
*/
void sub_c2eeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2eeb0ULL || rel >= 0xc2f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2f0b0 size=80 callers=2 calls=1
   calls: sub_14aad40
*/
void sub_c2f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2f0b0ULL || rel >= 0xc2f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2f100 size=320 callers=0 calls=11
   calls: sub_c20c90, sub_c20ea0, sub_c20ec0, sub_c2f240, sub_c2f6f0, sub_c2f7c0, sub_c2fcb0, sub_c2ff30, sub_e806b0, sub_e83930, sub_e84250
*/
void sub_c2f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2f100ULL || rel >= 0xc2f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2f240 size=1200 callers=1 calls=4
   calls: sub_14f1870, sub_14f1ef0, sub_c25ce0, sub_c320b0
*/
void sub_c2f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2f240ULL || rel >= 0xc2f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2f6f0 size=208 callers=1 calls=4
   calls: sub_1500ea0, sub_5cfad0, sub_795bc0, sub_eb76b0
*/
void sub_c2f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2f6f0ULL || rel >= 0xc2f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2f7c0 size=1264 callers=1 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_c2f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2f7c0ULL || rel >= 0xc2fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2fcb0 size=640 callers=1 calls=3
   calls: sub_c20e80, sub_c20f60, sub_c2e1f0
*/
void sub_c2fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2fcb0ULL || rel >= 0xc2ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c2ff30 size=304 callers=1 calls=3
   calls: sub_14aad40, sub_c2e050, sub_e83930
*/
void sub_c2ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2ff30ULL || rel >= 0xc30060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c30060 size=480 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/dressup/bin/dressup_top_00_lyt.bin
   ref: bin/appli/dressup/bin/uikit_dressup_top_00.bin
*/
void uikit_dressup_top_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc30060ULL || rel >= 0xc30240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c30240 size=480 callers=0 calls=13
   calls: sub_14aad40, sub_1500c40, sub_c21040, sub_c213f0, sub_c218d0, sub_c21aa0, sub_c262e0, sub_c26310, sub_c2db80, sub_c2ddb0, sub_c2ec20, sub_c30910
   ... +1 more
*/
void sub_c30240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc30240ULL || rel >= 0xc30420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c30420 size=48 callers=0 calls=1
   calls: sub_c30fe0
*/
void sub_c30420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc30420ULL || rel >= 0xc30450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c30450 size=704 callers=0 calls=15
   calls: sub_136b780, sub_137cb80, sub_137cd20, sub_14aad40, sub_14eebd0, sub_14eebe0, sub_c20c10, sub_c20e60, sub_c21040, sub_c219c0, sub_c262e0, sub_c26310
   ... +3 more
*/
void sub_c30450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc30450ULL || rel >= 0xc30710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c30710 size=512 callers=12 calls=3
   calls: sub_13133a0, sub_67d450, sub_c2e1f0
*/
void sub_c30710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc30710ULL || rel >= 0xc30910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c30910 size=1216 callers=1 calls=2
   calls: sub_137cbd0, sub_b72950
*/
void sub_c30910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc30910ULL || rel >= 0xc30dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c30dd0 size=528 callers=2 calls=3
   calls: sub_14eebe0, sub_14f1f00, sub_c31920
*/
void sub_c30dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc30dd0ULL || rel >= 0xc30fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c30fe0 size=1280 callers=1 calls=15
   calls: sub_14aad40, sub_17919c0, sub_687770, sub_687a20, sub_8f3180, sub_b72950, sub_c20e20, sub_c20f60, sub_c20fc0, sub_c21040, sub_c30710, sub_c317b0
   ... +3 more
*/
void sub_c30fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc30fe0ULL || rel >= 0xc314e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c314e0 size=336 callers=4 calls=8
   calls: sub_1502120, sub_5cfad0, sub_c20cb0, sub_c20d30, sub_c25c90, sub_c2d5e0, sub_c2e610, sub_e833a0
   ref: anime_L_tab_left_00_key_select
   ref: anime_L_tab_right_00_key_select
*/
void anime_L_tab_right_00_key_select_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc314e0ULL || rel >= 0xc31630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31630 size=160 callers=0 calls=6
   calls: sub_14aad40, sub_1500c40, sub_c21aa0, sub_c2ec20, sub_c30dd0, sub_c33910
*/
void sub_c31630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31630ULL || rel >= 0xc316d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c316d0 size=224 callers=0 calls=4
   calls: sub_136b780, sub_c2d8f0, sub_c338b0, sub_c33910
*/
void sub_c316d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc316d0ULL || rel >= 0xc317b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c317b0 size=144 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_c317b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc317b0ULL || rel >= 0xc31840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31840 size=224 callers=1 calls=4
   calls: sub_137c850, sub_c21040, sub_c21af0, sub_c2e750
*/
void sub_c31840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31840ULL || rel >= 0xc31920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31920 size=240 callers=8 calls=6
   calls: sub_14aad40, sub_c20e60, sub_c21040, sub_c213f0, sub_c21aa0, sub_c25c20
*/
void sub_c31920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31920ULL || rel >= 0xc31a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31a10 size=320 callers=1 calls=5
   calls: sub_137cb30, sub_137cd00, sub_14aad40, sub_c20e60, sub_c21040
*/
void sub_c31a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31a10ULL || rel >= 0xc31b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31b50 size=96 callers=0 calls=0
*/
void sub_c31b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31b50ULL || rel >= 0xc31bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31bb0 size=96 callers=0 calls=0
*/
void sub_c31bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31bb0ULL || rel >= 0xc31c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31c10 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_c31c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31c10ULL || rel >= 0xc31c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31c80 size=96 callers=0 calls=0
*/
void sub_c31c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31c80ULL || rel >= 0xc31ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31ce0 size=96 callers=0 calls=0
*/
void sub_c31ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31ce0ULL || rel >= 0xc31d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31d40 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_c31d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31d40ULL || rel >= 0xc31db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31db0 size=112 callers=0 calls=1
   calls: sub_e7f6c0
*/
void sub_c31db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31db0ULL || rel >= 0xc31e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31e20 size=96 callers=0 calls=0
*/
void sub_c31e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31e20ULL || rel >= 0xc31e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31e80 size=96 callers=0 calls=0
*/
void sub_c31e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31e80ULL || rel >= 0xc31ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c31ee0 size=464 callers=1 calls=0
*/
void sub_c31ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc31ee0ULL || rel >= 0xc320b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c320b0 size=464 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_c320b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc320b0ULL || rel >= 0xc32280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32280 size=240 callers=0 calls=0
*/
void sub_c32280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32280ULL || rel >= 0xc32370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32370 size=240 callers=0 calls=0
*/
void sub_c32370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32370ULL || rel >= 0xc32460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32460 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_c32460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32460ULL || rel >= 0xc324d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c324d0 size=16 callers=0 calls=0
*/
void sub_c324d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc324d0ULL || rel >= 0xc324e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c324e0 size=48 callers=0 calls=0
*/
void sub_c324e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc324e0ULL || rel >= 0xc32510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32510 size=320 callers=0 calls=0
*/
void sub_c32510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32510ULL || rel >= 0xc32650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32650 size=240 callers=0 calls=0
*/
void sub_c32650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32650ULL || rel >= 0xc32740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32740 size=240 callers=0 calls=0
*/
void sub_c32740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32740ULL || rel >= 0xc32830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32830 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_c32830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32830ULL || rel >= 0xc328a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c328a0 size=112 callers=0 calls=1
   calls: sub_7a4ab0
*/
void sub_c328a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc328a0ULL || rel >= 0xc32910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32910 size=240 callers=0 calls=0
*/
void sub_c32910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32910ULL || rel >= 0xc32a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32a00 size=240 callers=0 calls=0
*/
void sub_c32a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32a00ULL || rel >= 0xc32af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32af0 size=48 callers=0 calls=0
*/
void sub_c32af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32af0ULL || rel >= 0xc32b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32b20 size=16 callers=0 calls=0
*/
void sub_c32b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32b20ULL || rel >= 0xc32b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32b30 size=32 callers=0 calls=0
*/
void sub_c32b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32b30ULL || rel >= 0xc32b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32b50 size=32 callers=0 calls=0
*/
void sub_c32b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32b50ULL || rel >= 0xc32b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32b70 size=192 callers=0 calls=5
   calls: anime_L_tab_right_00_key_select_2, sub_1500c40, sub_c20c10, sub_c20cb0, sub_c25c90
*/
void sub_c32b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32b70ULL || rel >= 0xc32c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32c30 size=16 callers=0 calls=0
*/
void sub_c32c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32c30ULL || rel >= 0xc32c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32c40 size=16 callers=0 calls=0
*/
void sub_c32c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32c40ULL || rel >= 0xc32c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32c50 size=16 callers=0 calls=0
*/
void sub_c32c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32c50ULL || rel >= 0xc32c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32c60 size=192 callers=0 calls=5
   calls: anime_L_tab_right_00_key_select_2, sub_1500c40, sub_c20c10, sub_c20cb0, sub_c25c90
*/
void sub_c32c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32c60ULL || rel >= 0xc32d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32d20 size=16 callers=0 calls=0
*/
void sub_c32d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32d20ULL || rel >= 0xc32d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32d30 size=16 callers=0 calls=0
*/
void sub_c32d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32d30ULL || rel >= 0xc32d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32d40 size=16 callers=0 calls=0
*/
void sub_c32d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32d40ULL || rel >= 0xc32d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32d50 size=192 callers=0 calls=5
   calls: anime_L_tab_right_00_key_select_2, sub_1500c40, sub_c20c10, sub_c20d30, sub_c25c90
*/
void sub_c32d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32d50ULL || rel >= 0xc32e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32e10 size=16 callers=0 calls=0
*/
void sub_c32e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32e10ULL || rel >= 0xc32e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32e20 size=16 callers=0 calls=0
*/
void sub_c32e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32e20ULL || rel >= 0xc32e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32e30 size=16 callers=0 calls=0
*/
void sub_c32e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32e30ULL || rel >= 0xc32e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32e40 size=192 callers=0 calls=5
   calls: anime_L_tab_right_00_key_select_2, sub_1500c40, sub_c20c10, sub_c20d30, sub_c25c90
*/
void sub_c32e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32e40ULL || rel >= 0xc32f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32f00 size=16 callers=0 calls=0
*/
void sub_c32f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32f00ULL || rel >= 0xc32f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32f10 size=16 callers=0 calls=0
*/
void sub_c32f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32f10ULL || rel >= 0xc32f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32f20 size=16 callers=0 calls=0
*/
void sub_c32f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32f20ULL || rel >= 0xc32f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c32f30 size=304 callers=0 calls=6
   calls: sub_14e2410, sub_14eebd0, sub_14eebe0, sub_14f1f00, sub_c20e20, sub_e83f20
*/
void sub_c32f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc32f30ULL || rel >= 0xc33060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33060 size=16 callers=0 calls=0
*/
void sub_c33060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33060ULL || rel >= 0xc33070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33070 size=16 callers=0 calls=0
*/
void sub_c33070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33070ULL || rel >= 0xc33080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33080 size=16 callers=0 calls=0
*/
void sub_c33080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33080ULL || rel >= 0xc33090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33090 size=320 callers=0 calls=3
   calls: sub_c28e30, sub_c39c40, sub_d0c0
   ref: DressupViewerState
   ref: DressupTopView
*/
void DressupViewerState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33090ULL || rel >= 0xc331d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c331d0 size=528 callers=0 calls=9
   calls: sub_1502120, sub_5cfad0, sub_c24980, sub_c265c0, sub_c2eeb0, sub_c2f0b0, sub_ea3d10, sub_ea4760, sub_ea47a0
*/
void sub_c331d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc331d0ULL || rel >= 0xc333e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c333e0 size=16 callers=0 calls=0
*/
void sub_c333e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc333e0ULL || rel >= 0xc333f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c333f0 size=16 callers=0 calls=0
*/
void sub_c333f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc333f0ULL || rel >= 0xc33400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33400 size=16 callers=0 calls=0
*/
void sub_c33400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33400ULL || rel >= 0xc33410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33410 size=16 callers=0 calls=0
*/
void sub_c33410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33410ULL || rel >= 0xc33420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33420 size=16 callers=0 calls=0
*/
void sub_c33420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33420ULL || rel >= 0xc33430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33430 size=16 callers=0 calls=0
*/
void sub_c33430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33430ULL || rel >= 0xc33440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33440 size=16 callers=0 calls=0
*/
void sub_c33440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33440ULL || rel >= 0xc33450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33450 size=16 callers=0 calls=0
*/
void sub_c33450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33450ULL || rel >= 0xc33460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33460 size=304 callers=0 calls=0
*/
void sub_c33460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33460ULL || rel >= 0xc33590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33590 size=48 callers=4 calls=1
   calls: sub_c335c0
*/
void sub_c33590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33590ULL || rel >= 0xc335c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c335c0 size=736 callers=1 calls=7
   calls: sub_59b280, sub_c339e0, sub_c34710, sub_c349e0, sub_c35d10, sub_c360b0, sub_c36240
*/
void sub_c335c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc335c0ULL || rel >= 0xc338a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c338a0 size=16 callers=2 calls=0
*/
void sub_c338a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc338a0ULL || rel >= 0xc338b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c338b0 size=48 callers=5 calls=1
   calls: sub_b6fb70
*/
void sub_c338b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc338b0ULL || rel >= 0xc338e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c338e0 size=48 callers=6 calls=0
*/
void sub_c338e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc338e0ULL || rel >= 0xc33910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33910 size=48 callers=7 calls=1
   calls: sub_b6ff20
*/
void sub_c33910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33910ULL || rel >= 0xc33940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33940 size=16 callers=2 calls=0
*/
void sub_c33940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33940ULL || rel >= 0xc33950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33950 size=144 callers=4 calls=1
   calls: sub_c339e0
*/
void sub_c33950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33950ULL || rel >= 0xc339e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c339e0 size=480 callers=9 calls=2
   calls: sub_b4c060, sub_b97e40
*/
void sub_c339e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc339e0ULL || rel >= 0xc33bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33bc0 size=560 callers=0 calls=0
*/
void sub_c33bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33bc0ULL || rel >= 0xc33df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33df0 size=144 callers=0 calls=0
*/
void sub_c33df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33df0ULL || rel >= 0xc33e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33e80 size=96 callers=0 calls=0
*/
void sub_c33e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33e80ULL || rel >= 0xc33ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c33ee0 size=288 callers=0 calls=4
   calls: sub_986200, sub_c34000, sub_ea0fd0, sub_ea9e40
*/
void sub_c33ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33ee0ULL || rel >= 0xc34000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34000 size=1072 callers=2 calls=4
   calls: sub_b334c0, sub_b334f0, sub_b4c060, sub_ea0fd0
*/
void sub_c34000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34000ULL || rel >= 0xc34430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34430 size=288 callers=0 calls=4
   calls: sub_986200, sub_c34000, sub_ea0fd0, sub_ea9e40
*/
void sub_c34430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34430ULL || rel >= 0xc34550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34550 size=304 callers=0 calls=2
   calls: sub_c539f0, sub_c54b90
   ref: fel_910
*/
void fel_910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34550ULL || rel >= 0xc34680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34680 size=144 callers=2 calls=5
   calls: sub_603250, sub_6323a0, sub_c34710, sub_c348f0, sub_c349e0
*/
void sub_c34680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34680ULL || rel >= 0xc34710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34710 size=480 callers=3 calls=2
   calls: sub_b33760, sub_b4c060
*/
void sub_c34710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34710ULL || rel >= 0xc348f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c348f0 size=240 callers=1 calls=2
   calls: sub_b482b0, sub_c350d0
*/
void sub_c348f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc348f0ULL || rel >= 0xc349e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c349e0 size=736 callers=4 calls=7
   calls: sub_6194a0, sub_967240, sub_b46790, sub_c28fd0, sub_c349e0, sub_c350d0, sub_c51540
*/
void sub_c349e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc349e0ULL || rel >= 0xc34cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34cc0 size=272 callers=0 calls=3
   calls: sub_9a5290, sub_ea0fd0, sub_ea9e40
*/
void sub_c34cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34cc0ULL || rel >= 0xc34dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34dd0 size=208 callers=0 calls=2
   calls: sub_ea0fd0, sub_ee5100
*/
void sub_c34dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34dd0ULL || rel >= 0xc34ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34ea0 size=64 callers=0 calls=1
   calls: sub_eeb410
*/
void sub_c34ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34ea0ULL || rel >= 0xc34ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34ee0 size=32 callers=0 calls=0
*/
void sub_c34ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34ee0ULL || rel >= 0xc34f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34f00 size=112 callers=0 calls=0
*/
void sub_c34f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34f00ULL || rel >= 0xc34f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34f70 size=80 callers=0 calls=0
*/
void sub_c34f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34f70ULL || rel >= 0xc34fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c34fc0 size=272 callers=0 calls=4
   calls: sub_b33510, sub_b46b30, sub_b4c060, sub_c350d0
*/
void sub_c34fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc34fc0ULL || rel >= 0xc350d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c350d0 size=928 callers=6 calls=3
   calls: sub_607750, sub_b33c60, sub_b4c060
*/
void sub_c350d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc350d0ULL || rel >= 0xc35470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c35470 size=272 callers=0 calls=4
   calls: sub_b33510, sub_b46b30, sub_b4c060, sub_c350d0
*/
void sub_c35470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35470ULL || rel >= 0xc35580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c35580 size=832 callers=0 calls=5
   calls: sub_5e2bc0, sub_64a740, sub_64a890, sub_c545c0, sub_c55af0
*/
void sub_c35580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35580ULL || rel >= 0xc358c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c358c0 size=96 callers=0 calls=0
*/
void sub_c358c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc358c0ULL || rel >= 0xc35920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c35920 size=64 callers=0 calls=0
*/
void sub_c35920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35920ULL || rel >= 0xc35960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c35960 size=176 callers=0 calls=2
   calls: sub_b33700, sub_b4c060
*/
void sub_c35960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35960ULL || rel >= 0xc35a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c35a10 size=176 callers=0 calls=2
   calls: sub_b33700, sub_b4c060
*/
void sub_c35a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35a10ULL || rel >= 0xc35ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c35ac0 size=16 callers=0 calls=0
*/
void sub_c35ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35ac0ULL || rel >= 0xc35ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c35ad0 size=112 callers=0 calls=0
*/
void sub_c35ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35ad0ULL || rel >= 0xc35b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c35b40 size=80 callers=0 calls=0
*/
void sub_c35b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35b40ULL || rel >= 0xc35b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c35b90 size=192 callers=0 calls=2
   calls: sub_b336a0, sub_b4c060
*/
void sub_c35b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35b90ULL || rel >= 0xc35c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c35c50 size=192 callers=0 calls=2
   calls: sub_b336a0, sub_b4c060
*/
void sub_c35c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35c50ULL || rel >= 0xc35d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c35d10 size=928 callers=6 calls=3
   calls: sub_607750, sub_b33a30, sub_b4c060
*/
void sub_c35d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35d10ULL || rel >= 0xc360b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c360b0 size=400 callers=2 calls=2
   calls: sub_b4c060, sub_b98390
*/
void sub_c360b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc360b0ULL || rel >= 0xc36240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36240 size=448 callers=2 calls=2
   calls: sub_b4c060, sub_b98550
*/
void sub_c36240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36240ULL || rel >= 0xc36400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36400 size=32 callers=0 calls=1
   calls: sub_ed29f0
*/
void sub_c36400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36400ULL || rel >= 0xc36420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36420 size=16 callers=0 calls=0
*/
void sub_c36420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36420ULL || rel >= 0xc36430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36430 size=16 callers=0 calls=0
*/
void sub_c36430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36430ULL || rel >= 0xc36440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36440 size=16 callers=0 calls=0
*/
void sub_c36440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36440ULL || rel >= 0xc36450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36450 size=16 callers=0 calls=0
*/
void sub_c36450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36450ULL || rel >= 0xc36460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36460 size=16 callers=0 calls=0
*/
void sub_c36460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36460ULL || rel >= 0xc36470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36470 size=16 callers=0 calls=0
*/
void sub_c36470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36470ULL || rel >= 0xc36480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36480 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_c36480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36480ULL || rel >= 0xc364c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c364c0 size=32 callers=0 calls=0
*/
void sub_c364c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc364c0ULL || rel >= 0xc364e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c364e0 size=16 callers=0 calls=0
*/
void sub_c364e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc364e0ULL || rel >= 0xc364f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c364f0 size=16 callers=0 calls=0
*/
void sub_c364f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc364f0ULL || rel >= 0xc36500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36500 size=32 callers=0 calls=0
*/
void sub_c36500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36500ULL || rel >= 0xc36520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36520 size=144 callers=1 calls=1
   calls: sub_c365b0
*/
void sub_c36520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36520ULL || rel >= 0xc365b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c365b0 size=416 callers=1 calls=3
   calls: sub_c36750, sub_c38350, sub_e9db40
*/
void sub_c365b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc365b0ULL || rel >= 0xc36750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36750 size=512 callers=1 calls=4
   calls: sub_67b990, sub_c384b0, sub_e76a20, sub_e9d130
*/
void sub_c36750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36750ULL || rel >= 0xc36950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c36950 size=256 callers=0 calls=4
   calls: sub_135b960, sub_135ba00, sub_ea37b0, trainer_id_hash_table
*/
void sub_c36950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc36950ULL || rel >= 0xc36a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

