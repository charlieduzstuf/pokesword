/* main functions 00e9e780..00eb28d0 (115 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00e9e780 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_e9e780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e780ULL || rel >= 0xe9e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e830 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_e9e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e830ULL || rel >= 0xe9e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e8e0 size=96 callers=0 calls=0
*/
void sub_e9e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e8e0ULL || rel >= 0xe9e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e940 size=96 callers=0 calls=0
*/
void sub_e9e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e940ULL || rel >= 0xe9e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9e9a0 size=240 callers=34 calls=0
*/
void sub_e9e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e9a0ULL || rel >= 0xe9ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ea90 size=304 callers=1 calls=4
   calls: sub_5d12d0, sub_5d1b50, sub_5d1ea0, sub_5ecb70
*/
void sub_e9ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ea90ULL || rel >= 0xe9ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ebc0 size=16 callers=0 calls=0
*/
void sub_e9ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ebc0ULL || rel >= 0xe9ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ebd0 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_e9ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ebd0ULL || rel >= 0xe9ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ec40 size=16 callers=0 calls=0
*/
void sub_e9ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ec40ULL || rel >= 0xe9ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ec50 size=16 callers=0 calls=0
*/
void sub_e9ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ec50ULL || rel >= 0xe9ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ec60 size=16 callers=0 calls=0
*/
void sub_e9ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ec60ULL || rel >= 0xe9ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ec70 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_e9ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ec70ULL || rel >= 0xe9ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ece0 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_e9ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ece0ULL || rel >= 0xe9ed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ed50 size=16 callers=0 calls=0
*/
void sub_e9ed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ed50ULL || rel >= 0xe9ed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ed60 size=16 callers=0 calls=0
*/
void sub_e9ed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ed60ULL || rel >= 0xe9ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ed70 size=1920 callers=1 calls=16
   calls: poke_resource_table_gfbpmcatalog, sub_13ff420, sub_b4a7a0, sub_e8a660, sub_e8cbf0, sub_e9d970, sub_e9f4f0, sub_e9fad0, sub_e9fbe0, sub_ea0c10, sub_ead0a0, sub_eaf4d0
   ... +4 more
*/
void sub_e9ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ed70ULL || rel >= 0xe9f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9f4f0 size=1168 callers=1 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2070, sub_5eca40, sub_5ecb70, sub_e9fda0
*/
void sub_e9f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9f4f0ULL || rel >= 0xe9f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9f980 size=128 callers=1 calls=0
*/
void sub_e9f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9f980ULL || rel >= 0xe9fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9fa00 size=176 callers=7 calls=2
   calls: sub_5cf8f0, sub_5d2070
*/
void sub_e9fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fa00ULL || rel >= 0xe9fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9fab0 size=32 callers=10 calls=0
*/
void sub_e9fab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fab0ULL || rel >= 0xe9fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9fad0 size=272 callers=2 calls=2
   calls: sub_5e2350, sub_ea46c0
*/
void sub_e9fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fad0ULL || rel >= 0xe9fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9fbe0 size=400 callers=1 calls=0
*/
void sub_e9fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fbe0ULL || rel >= 0xe9fd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9fd70 size=16 callers=0 calls=0
*/
void sub_e9fd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fd70ULL || rel >= 0xe9fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9fd80 size=16 callers=0 calls=0
*/
void sub_e9fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fd80ULL || rel >= 0xe9fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9fd90 size=16 callers=0 calls=0
*/
void sub_e9fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fd90ULL || rel >= 0xe9fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9fda0 size=240 callers=1 calls=2
   calls: sub_5d12d0, sub_5d1b50
*/
void sub_e9fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fda0ULL || rel >= 0xe9fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9fe90 size=96 callers=0 calls=0
*/
void sub_e9fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fe90ULL || rel >= 0xe9fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9fef0 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_e9fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fef0ULL || rel >= 0xe9ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ff60 size=16 callers=0 calls=0
*/
void sub_e9ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ff60ULL || rel >= 0xe9ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ff70 size=96 callers=0 calls=0
*/
void sub_e9ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ff70ULL || rel >= 0xe9ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e9ffd0 size=96 callers=0 calls=0
*/
void sub_e9ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ffd0ULL || rel >= 0xea0030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0030 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_ea0030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0030ULL || rel >= 0xea00a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea00a0 size=112 callers=0 calls=1
   calls: sub_5eca40
*/
void sub_ea00a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea00a0ULL || rel >= 0xea0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0110 size=96 callers=0 calls=0
*/
void sub_ea0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0110ULL || rel >= 0xea0170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0170 size=96 callers=0 calls=0
*/
void sub_ea0170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0170ULL || rel >= 0xea01d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea01d0 size=512 callers=0 calls=7
   calls: sub_e9ddb0, sub_ea1090, sub_ea3cd0, sub_eaa570, sub_eadc60, sub_eaf520, sub_eeb1d0
*/
void sub_ea01d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea01d0ULL || rel >= 0xea03d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea03d0 size=240 callers=7 calls=3
   calls: sub_5d1b50, sub_5e2350, sub_e94a50
*/
void sub_ea03d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea03d0ULL || rel >= 0xea04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea04c0 size=240 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_ea04c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea04c0ULL || rel >= 0xea05b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea05b0 size=160 callers=0 calls=0
*/
void sub_ea05b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea05b0ULL || rel >= 0xea0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0650 size=160 callers=0 calls=0
*/
void sub_ea0650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0650ULL || rel >= 0xea06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea06f0 size=160 callers=0 calls=0
*/
void sub_ea06f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea06f0ULL || rel >= 0xea0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0790 size=160 callers=0 calls=0
*/
void sub_ea0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0790ULL || rel >= 0xea0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0830 size=160 callers=0 calls=0
*/
void sub_ea0830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0830ULL || rel >= 0xea08d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea08d0 size=160 callers=0 calls=0
*/
void sub_ea08d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea08d0ULL || rel >= 0xea0970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0970 size=16 callers=0 calls=0
*/
void sub_ea0970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0970ULL || rel >= 0xea0980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0980 size=16 callers=0 calls=0
*/
void sub_ea0980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0980ULL || rel >= 0xea0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0990 size=16 callers=0 calls=0
*/
void sub_ea0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0990ULL || rel >= 0xea09a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea09a0 size=16 callers=0 calls=0
*/
void sub_ea09a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea09a0ULL || rel >= 0xea09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea09b0 size=16 callers=0 calls=0
*/
void sub_ea09b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea09b0ULL || rel >= 0xea09c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea09c0 size=16 callers=0 calls=0
*/
void sub_ea09c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea09c0ULL || rel >= 0xea09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea09d0 size=112 callers=0 calls=1
   calls: sub_ea0b20
*/
void sub_ea09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea09d0ULL || rel >= 0xea0a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0a40 size=112 callers=0 calls=1
   calls: sub_ea0b20
*/
void sub_ea0a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0a40ULL || rel >= 0xea0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0ab0 size=112 callers=0 calls=1
   calls: sub_ea0b20
*/
void sub_ea0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0ab0ULL || rel >= 0xea0b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0b20 size=240 callers=3 calls=0
*/
void sub_ea0b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0b20ULL || rel >= 0xea0c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0c10 size=960 callers=1 calls=9
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2070, sub_672620, sub_ea14c0, sub_ea15b0, sub_ea2100, sub_ea2520
*/
void sub_ea0c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0c10ULL || rel >= 0xea0fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea0fd0 size=192 callers=83 calls=1
   calls: sub_672980
*/
void sub_ea0fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0fd0ULL || rel >= 0xea1090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1090 size=112 callers=2 calls=2
   calls: sub_672950, sub_672980
*/
void sub_ea1090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1090ULL || rel >= 0xea1100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1100 size=288 callers=1 calls=9
   calls: sub_1105c00, sub_6728b0, sub_672950, sub_672980, sub_6729b0, sub_672a50, sub_b4c050, sub_c44060, sub_eafd60
*/
void sub_ea1100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1100ULL || rel >= 0xea1220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1220 size=112 callers=0 calls=0
*/
void sub_ea1220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1220ULL || rel >= 0xea1290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1290 size=112 callers=0 calls=0
*/
void sub_ea1290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1290ULL || rel >= 0xea1300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1300 size=112 callers=0 calls=0
*/
void sub_ea1300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1300ULL || rel >= 0xea1370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1370 size=112 callers=0 calls=0
*/
void sub_ea1370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1370ULL || rel >= 0xea13e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea13e0 size=112 callers=0 calls=0
*/
void sub_ea13e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea13e0ULL || rel >= 0xea1450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1450 size=112 callers=0 calls=0
*/
void sub_ea1450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1450ULL || rel >= 0xea14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea14c0 size=240 callers=5 calls=1
   calls: sub_e9e9a0
*/
void sub_ea14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea14c0ULL || rel >= 0xea15b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea15b0 size=224 callers=1 calls=1
   calls: sub_ea1690
*/
void sub_ea15b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea15b0ULL || rel >= 0xea1690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1690 size=416 callers=2 calls=6
   calls: sub_5d12d0, sub_5d1b50, sub_5d1d30, sub_5d1ea0, sub_ea14c0, sub_ea1c20
*/
void sub_ea1690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1690ULL || rel >= 0xea1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1830 size=112 callers=0 calls=0
*/
void sub_ea1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1830ULL || rel >= 0xea18a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea18a0 size=112 callers=0 calls=0
*/
void sub_ea18a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea18a0ULL || rel >= 0xea1910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1910 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_ea1910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1910ULL || rel >= 0xea1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1980 size=112 callers=0 calls=0
*/
void sub_ea1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1980ULL || rel >= 0xea19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea19f0 size=112 callers=0 calls=0
*/
void sub_ea19f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea19f0ULL || rel >= 0xea1a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1a60 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_ea1a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1a60ULL || rel >= 0xea1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1ad0 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_ea1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1ad0ULL || rel >= 0xea1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1b40 size=112 callers=0 calls=0
*/
void sub_ea1b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1b40ULL || rel >= 0xea1bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1bb0 size=112 callers=0 calls=0
*/
void sub_ea1bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1bb0ULL || rel >= 0xea1c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1c20 size=224 callers=2 calls=1
   calls: sub_ea1d00
*/
void sub_ea1c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1c20ULL || rel >= 0xea1d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1d00 size=608 callers=2 calls=5
   calls: sub_5d12d0, sub_5d1b50, sub_5d1d30, sub_5d1ea0, sub_5d7670
*/
void sub_ea1d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1d00ULL || rel >= 0xea1f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1f60 size=16 callers=0 calls=0
*/
void sub_ea1f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1f60ULL || rel >= 0xea1f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1f70 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_ea1f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1f70ULL || rel >= 0xea1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1fe0 size=16 callers=0 calls=0
*/
void sub_ea1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1fe0ULL || rel >= 0xea1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea1ff0 size=16 callers=0 calls=0
*/
void sub_ea1ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea1ff0ULL || rel >= 0xea2000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2000 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_ea2000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2000ULL || rel >= 0xea2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2070 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_ea2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2070ULL || rel >= 0xea20e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea20e0 size=16 callers=0 calls=0
*/
void sub_ea20e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea20e0ULL || rel >= 0xea20f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea20f0 size=16 callers=0 calls=0
*/
void sub_ea20f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea20f0ULL || rel >= 0xea2100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2100 size=304 callers=1 calls=4
   calls: sub_5d12d0, sub_5d1b50, sub_5d1ea0, sub_5ecb70
*/
void sub_ea2100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2100ULL || rel >= 0xea2230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2230 size=16 callers=0 calls=0
*/
void sub_ea2230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2230ULL || rel >= 0xea2240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2240 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_ea2240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2240ULL || rel >= 0xea22b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea22b0 size=16 callers=0 calls=0
*/
void sub_ea22b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea22b0ULL || rel >= 0xea22c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea22c0 size=16 callers=0 calls=0
*/
void sub_ea22c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea22c0ULL || rel >= 0xea22d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea22d0 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_ea22d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea22d0ULL || rel >= 0xea2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2340 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_ea2340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2340ULL || rel >= 0xea23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea23b0 size=16 callers=0 calls=0
*/
void sub_ea23b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea23b0ULL || rel >= 0xea23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea23c0 size=16 callers=0 calls=0
*/
void sub_ea23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea23c0ULL || rel >= 0xea23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea23d0 size=128 callers=0 calls=5
   calls: sub_105c2b0, sub_105c360, sub_791d40, sub_ea1100, sub_f17a80
*/
void sub_ea23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea23d0ULL || rel >= 0xea2450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2450 size=16 callers=0 calls=0
*/
void sub_ea2450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2450ULL || rel >= 0xea2460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2460 size=16 callers=0 calls=0
*/
void sub_ea2460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2460ULL || rel >= 0xea2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2470 size=16 callers=0 calls=0
*/
void sub_ea2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2470ULL || rel >= 0xea2480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2480 size=112 callers=0 calls=2
   calls: sub_672950, sub_672980
*/
void sub_ea2480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2480ULL || rel >= 0xea24f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea24f0 size=16 callers=0 calls=0
*/
void sub_ea24f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea24f0ULL || rel >= 0xea2500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2500 size=16 callers=0 calls=0
*/
void sub_ea2500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2500ULL || rel >= 0xea2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2510 size=16 callers=0 calls=0
*/
void sub_ea2510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2510ULL || rel >= 0xea2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2520 size=336 callers=2 calls=1
   calls: sub_ea2670
*/
void sub_ea2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2520ULL || rel >= 0xea2670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2670 size=688 callers=11 calls=0
*/
void sub_ea2670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2670ULL || rel >= 0xea2920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2920 size=48 callers=0 calls=1
   calls: sub_130e7d0
*/
void sub_ea2920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2920ULL || rel >= 0xea2950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2950 size=16 callers=0 calls=0
*/
void sub_ea2950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2950ULL || rel >= 0xea2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2960 size=16 callers=0 calls=0
*/
void sub_ea2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2960ULL || rel >= 0xea2970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2970 size=16 callers=0 calls=0
*/
void sub_ea2970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2970ULL || rel >= 0xea2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2980 size=128 callers=0 calls=0
*/
void sub_ea2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2980ULL || rel >= 0xea2a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2a00 size=336 callers=1 calls=3
   calls: sub_ea2ba0, sub_ea2ce0, sub_ea83b0
*/
void sub_ea2a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2a00ULL || rel >= 0xea2b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2b50 size=16 callers=0 calls=0
*/
void sub_ea2b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2b50ULL || rel >= 0xea2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2b60 size=64 callers=0 calls=0
*/
void sub_ea2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2b60ULL || rel >= 0xea2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2ba0 size=320 callers=1 calls=0
*/
void sub_ea2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2ba0ULL || rel >= 0xea2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2ce0 size=320 callers=2 calls=0
*/
void sub_ea2ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2ce0ULL || rel >= 0xea2e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2e20 size=448 callers=0 calls=1
   calls: sub_ea4f60
*/
void sub_ea2e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2e20ULL || rel >= 0xea2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2fe0 size=16 callers=1 calls=0
*/
void sub_ea2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2fe0ULL || rel >= 0xea2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea2ff0 size=432 callers=0 calls=9
   calls: sub_ea2ce0, sub_ea31a0, sub_ea32a0, sub_ea33e0, sub_ea3520, sub_ea3660, sub_ea4890, sub_eaa550, sub_eaa560
*/
void sub_ea2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea2ff0ULL || rel >= 0xea31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea31a0 size=256 callers=1 calls=2
   calls: sub_ea4890, sub_ea89d0
*/
void sub_ea31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea31a0ULL || rel >= 0xea32a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea32a0 size=320 callers=1 calls=0
*/
void sub_ea32a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea32a0ULL || rel >= 0xea33e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea33e0 size=320 callers=1 calls=0
*/
void sub_ea33e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea33e0ULL || rel >= 0xea3520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3520 size=320 callers=1 calls=0
*/
void sub_ea3520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3520ULL || rel >= 0xea3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3660 size=320 callers=1 calls=0
*/
void sub_ea3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3660ULL || rel >= 0xea37a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea37a0 size=16 callers=1 calls=0
*/
void sub_ea37a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea37a0ULL || rel >= 0xea37b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea37b0 size=448 callers=7 calls=1
   calls: sub_ea5900
*/
void sub_ea37b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea37b0ULL || rel >= 0xea3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3970 size=448 callers=1 calls=1
   calls: sub_ea5480
*/
void sub_ea3970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3970ULL || rel >= 0xea3b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3b30 size=208 callers=4 calls=0
*/
void sub_ea3b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3b30ULL || rel >= 0xea3c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3c00 size=208 callers=4 calls=0
*/
void sub_ea3c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3c00ULL || rel >= 0xea3cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3cd0 size=64 callers=1 calls=2
   calls: sub_ea48c0, sub_ea5e90
*/
void sub_ea3cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3cd0ULL || rel >= 0xea3d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3d10 size=16 callers=85 calls=0
*/
void sub_ea3d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3d10ULL || rel >= 0xea3d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3d20 size=16 callers=21 calls=0
*/
void sub_ea3d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3d20ULL || rel >= 0xea3d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3d30 size=16 callers=0 calls=0
*/
void sub_ea3d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3d30ULL || rel >= 0xea3d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3d40 size=16 callers=0 calls=0
*/
void sub_ea3d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3d40ULL || rel >= 0xea3d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3d50 size=16 callers=0 calls=0
*/
void sub_ea3d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3d50ULL || rel >= 0xea3d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3d60 size=16 callers=0 calls=0
*/
void sub_ea3d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3d60ULL || rel >= 0xea3d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3d70 size=16 callers=0 calls=0
*/
void sub_ea3d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3d70ULL || rel >= 0xea3d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3d80 size=16 callers=0 calls=0
*/
void sub_ea3d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3d80ULL || rel >= 0xea3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3d90 size=16 callers=0 calls=0
*/
void sub_ea3d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3d90ULL || rel >= 0xea3da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3da0 size=16 callers=0 calls=0
*/
void sub_ea3da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3da0ULL || rel >= 0xea3db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3db0 size=16 callers=0 calls=0
*/
void sub_ea3db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3db0ULL || rel >= 0xea3dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3dc0 size=16 callers=0 calls=0
*/
void sub_ea3dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3dc0ULL || rel >= 0xea3dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3dd0 size=16 callers=0 calls=0
*/
void sub_ea3dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3dd0ULL || rel >= 0xea3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3de0 size=16 callers=0 calls=0
*/
void sub_ea3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3de0ULL || rel >= 0xea3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3df0 size=32 callers=0 calls=0
*/
void sub_ea3df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3df0ULL || rel >= 0xea3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3e10 size=16 callers=0 calls=0
*/
void sub_ea3e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3e10ULL || rel >= 0xea3e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3e20 size=32 callers=0 calls=0
*/
void sub_ea3e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3e20ULL || rel >= 0xea3e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3e40 size=32 callers=0 calls=0
*/
void sub_ea3e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3e40ULL || rel >= 0xea3e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3e60 size=16 callers=0 calls=0
*/
void sub_ea3e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3e60ULL || rel >= 0xea3e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3e70 size=176 callers=0 calls=1
   calls: sub_ea3fc0
*/
void sub_ea3e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3e70ULL || rel >= 0xea3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3f20 size=16 callers=0 calls=0
*/
void sub_ea3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3f20ULL || rel >= 0xea3f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3f30 size=16 callers=0 calls=0
*/
void sub_ea3f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3f30ULL || rel >= 0xea3f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3f40 size=16 callers=0 calls=0
*/
void sub_ea3f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3f40ULL || rel >= 0xea3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3f50 size=16 callers=0 calls=0
*/
void sub_ea3f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3f50ULL || rel >= 0xea3f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3f60 size=16 callers=0 calls=0
*/
void sub_ea3f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3f60ULL || rel >= 0xea3f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3f70 size=16 callers=0 calls=0
*/
void sub_ea3f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3f70ULL || rel >= 0xea3f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3f80 size=16 callers=0 calls=0
*/
void sub_ea3f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3f80ULL || rel >= 0xea3f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3f90 size=16 callers=0 calls=0
*/
void sub_ea3f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3f90ULL || rel >= 0xea3fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3fa0 size=16 callers=0 calls=0
*/
void sub_ea3fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3fa0ULL || rel >= 0xea3fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3fb0 size=16 callers=0 calls=0
*/
void sub_ea3fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3fb0ULL || rel >= 0xea3fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea3fc0 size=160 callers=8 calls=1
   calls: sub_ea4060
*/
void sub_ea3fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea3fc0ULL || rel >= 0xea4060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4060 size=352 callers=1 calls=0
*/
void sub_ea4060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4060ULL || rel >= 0xea41c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea41c0 size=16 callers=0 calls=0
*/
void sub_ea41c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea41c0ULL || rel >= 0xea41d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea41d0 size=176 callers=0 calls=1
   calls: sub_ea3fc0
*/
void sub_ea41d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea41d0ULL || rel >= 0xea4280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4280 size=16 callers=0 calls=0
*/
void sub_ea4280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4280ULL || rel >= 0xea4290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4290 size=16 callers=0 calls=0
*/
void sub_ea4290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4290ULL || rel >= 0xea42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea42a0 size=16 callers=0 calls=0
*/
void sub_ea42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea42a0ULL || rel >= 0xea42b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea42b0 size=16 callers=0 calls=0
*/
void sub_ea42b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea42b0ULL || rel >= 0xea42c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea42c0 size=16 callers=0 calls=0
*/
void sub_ea42c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea42c0ULL || rel >= 0xea42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea42d0 size=16 callers=0 calls=0
*/
void sub_ea42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea42d0ULL || rel >= 0xea42e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea42e0 size=16 callers=0 calls=0
*/
void sub_ea42e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea42e0ULL || rel >= 0xea42f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea42f0 size=16 callers=0 calls=0
*/
void sub_ea42f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea42f0ULL || rel >= 0xea4300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4300 size=16 callers=0 calls=0
*/
void sub_ea4300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4300ULL || rel >= 0xea4310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4310 size=160 callers=0 calls=1
   calls: sub_ea3fc0
*/
void sub_ea4310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4310ULL || rel >= 0xea43b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea43b0 size=16 callers=0 calls=0
*/
void sub_ea43b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea43b0ULL || rel >= 0xea43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea43c0 size=16 callers=0 calls=0
*/
void sub_ea43c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea43c0ULL || rel >= 0xea43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea43d0 size=16 callers=0 calls=0
*/
void sub_ea43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea43d0ULL || rel >= 0xea43e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea43e0 size=16 callers=0 calls=0
*/
void sub_ea43e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea43e0ULL || rel >= 0xea43f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea43f0 size=16 callers=0 calls=0
*/
void sub_ea43f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea43f0ULL || rel >= 0xea4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4400 size=16 callers=0 calls=0
*/
void sub_ea4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4400ULL || rel >= 0xea4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4410 size=16 callers=0 calls=0
*/
void sub_ea4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4410ULL || rel >= 0xea4420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4420 size=16 callers=0 calls=0
*/
void sub_ea4420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4420ULL || rel >= 0xea4430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4430 size=16 callers=0 calls=0
*/
void sub_ea4430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4430ULL || rel >= 0xea4440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4440 size=16 callers=0 calls=0
*/
void sub_ea4440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4440ULL || rel >= 0xea4450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4450 size=176 callers=0 calls=1
   calls: sub_ea3fc0
*/
void sub_ea4450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4450ULL || rel >= 0xea4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4500 size=16 callers=0 calls=0
*/
void sub_ea4500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4500ULL || rel >= 0xea4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4510 size=16 callers=0 calls=0
*/
void sub_ea4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4510ULL || rel >= 0xea4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4520 size=16 callers=0 calls=0
*/
void sub_ea4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4520ULL || rel >= 0xea4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4530 size=16 callers=0 calls=0
*/
void sub_ea4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4530ULL || rel >= 0xea4540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4540 size=16 callers=0 calls=0
*/
void sub_ea4540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4540ULL || rel >= 0xea4550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4550 size=16 callers=0 calls=0
*/
void sub_ea4550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4550ULL || rel >= 0xea4560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4560 size=16 callers=0 calls=0
*/
void sub_ea4560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4560ULL || rel >= 0xea4570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4570 size=16 callers=0 calls=0
*/
void sub_ea4570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4570ULL || rel >= 0xea4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4580 size=16 callers=0 calls=0
*/
void sub_ea4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4580ULL || rel >= 0xea4590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4590 size=160 callers=0 calls=1
   calls: sub_ea3fc0
*/
void sub_ea4590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4590ULL || rel >= 0xea4630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4630 size=16 callers=0 calls=0
*/
void sub_ea4630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4630ULL || rel >= 0xea4640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4640 size=16 callers=0 calls=0
*/
void sub_ea4640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4640ULL || rel >= 0xea4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4650 size=16 callers=0 calls=0
*/
void sub_ea4650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4650ULL || rel >= 0xea4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4660 size=16 callers=0 calls=0
*/
void sub_ea4660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4660ULL || rel >= 0xea4670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4670 size=16 callers=0 calls=0
*/
void sub_ea4670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4670ULL || rel >= 0xea4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4680 size=16 callers=0 calls=0
*/
void sub_ea4680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4680ULL || rel >= 0xea4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4690 size=16 callers=0 calls=0
*/
void sub_ea4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4690ULL || rel >= 0xea46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea46a0 size=16 callers=0 calls=0
*/
void sub_ea46a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea46a0ULL || rel >= 0xea46b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea46b0 size=16 callers=0 calls=0
*/
void sub_ea46b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea46b0ULL || rel >= 0xea46c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea46c0 size=96 callers=15 calls=1
   calls: sub_ea5d30
*/
void sub_ea46c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea46c0ULL || rel >= 0xea4720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4720 size=32 callers=0 calls=0
*/
void sub_ea4720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4720ULL || rel >= 0xea4740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4740 size=16 callers=72 calls=0
*/
void sub_ea4740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4740ULL || rel >= 0xea4750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4750 size=16 callers=1 calls=0
*/
void sub_ea4750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4750ULL || rel >= 0xea4760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4760 size=16 callers=145 calls=0
*/
void sub_ea4760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4760ULL || rel >= 0xea4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4770 size=16 callers=1 calls=0
*/
void sub_ea4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4770ULL || rel >= 0xea4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4780 size=16 callers=18 calls=0
*/
void sub_ea4780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4780ULL || rel >= 0xea4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4790 size=16 callers=1 calls=0
*/
void sub_ea4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4790ULL || rel >= 0xea47a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea47a0 size=32 callers=8 calls=0
*/
void sub_ea47a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea47a0ULL || rel >= 0xea47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea47c0 size=16 callers=1 calls=0
*/
void sub_ea47c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea47c0ULL || rel >= 0xea47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea47d0 size=16 callers=12 calls=0
*/
void sub_ea47d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea47d0ULL || rel >= 0xea47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea47e0 size=16 callers=7 calls=0
*/
void sub_ea47e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea47e0ULL || rel >= 0xea47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea47f0 size=16 callers=4 calls=0
*/
void sub_ea47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea47f0ULL || rel >= 0xea4800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4800 size=16 callers=9 calls=0
*/
void sub_ea4800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4800ULL || rel >= 0xea4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4810 size=16 callers=12 calls=0
*/
void sub_ea4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4810ULL || rel >= 0xea4820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4820 size=112 callers=9 calls=0
*/
void sub_ea4820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4820ULL || rel >= 0xea4890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4890 size=48 callers=8 calls=0
*/
void sub_ea4890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4890ULL || rel >= 0xea48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea48c0 size=1696 callers=1 calls=4
   calls: sub_ea5d60, sub_ea5d70, sub_ea5d80, sub_ea99c0
*/
void sub_ea48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea48c0ULL || rel >= 0xea4f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea4f60 size=192 callers=1 calls=0
*/
void sub_ea4f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea4f60ULL || rel >= 0xea5020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5020 size=144 callers=0 calls=0
*/
void sub_ea5020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5020ULL || rel >= 0xea50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea50b0 size=160 callers=0 calls=0
*/
void sub_ea50b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea50b0ULL || rel >= 0xea5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5150 size=336 callers=0 calls=0
*/
void sub_ea5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5150ULL || rel >= 0xea52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea52a0 size=240 callers=0 calls=0
*/
void sub_ea52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea52a0ULL || rel >= 0xea5390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5390 size=176 callers=0 calls=0
*/
void sub_ea5390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5390ULL || rel >= 0xea5440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5440 size=48 callers=0 calls=0
*/
void sub_ea5440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5440ULL || rel >= 0xea5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5470 size=16 callers=0 calls=0
*/
void sub_ea5470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5470ULL || rel >= 0xea5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5480 size=208 callers=1 calls=0
*/
void sub_ea5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5480ULL || rel >= 0xea5550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5550 size=192 callers=1 calls=0
*/
void sub_ea5550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5550ULL || rel >= 0xea5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5610 size=48 callers=0 calls=1
   calls: sub_ea5550
*/
void sub_ea5610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5610ULL || rel >= 0xea5640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5640 size=224 callers=0 calls=1
   calls: sub_ea5720
*/
void sub_ea5640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5640ULL || rel >= 0xea5720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5720 size=240 callers=3 calls=0
*/
void sub_ea5720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5720ULL || rel >= 0xea5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5810 size=240 callers=0 calls=0
*/
void sub_ea5810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5810ULL || rel >= 0xea5900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5900 size=192 callers=1 calls=0
*/
void sub_ea5900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5900ULL || rel >= 0xea59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea59c0 size=144 callers=0 calls=0
*/
void sub_ea59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea59c0ULL || rel >= 0xea5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5a50 size=160 callers=0 calls=0
*/
void sub_ea5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5a50ULL || rel >= 0xea5af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5af0 size=336 callers=0 calls=0
*/
void sub_ea5af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5af0ULL || rel >= 0xea5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5c40 size=240 callers=0 calls=0
*/
void sub_ea5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5c40ULL || rel >= 0xea5d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5d30 size=48 callers=1 calls=0
*/
void sub_ea5d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5d30ULL || rel >= 0xea5d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5d60 size=16 callers=1 calls=0
*/
void sub_ea5d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5d60ULL || rel >= 0xea5d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5d70 size=16 callers=1 calls=0
*/
void sub_ea5d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5d70ULL || rel >= 0xea5d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5d80 size=48 callers=1 calls=0
*/
void sub_ea5d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5d80ULL || rel >= 0xea5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5db0 size=16 callers=0 calls=0
*/
void sub_ea5db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5db0ULL || rel >= 0xea5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5dc0 size=16 callers=0 calls=0
*/
void sub_ea5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5dc0ULL || rel >= 0xea5dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5dd0 size=16 callers=11 calls=0
*/
void sub_ea5dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5dd0ULL || rel >= 0xea5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5de0 size=16 callers=10 calls=0
*/
void sub_ea5de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5de0ULL || rel >= 0xea5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5df0 size=112 callers=7 calls=0
*/
void sub_ea5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5df0ULL || rel >= 0xea5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5e60 size=48 callers=8 calls=0
*/
void sub_ea5e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5e60ULL || rel >= 0xea5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea5e90 size=768 callers=1 calls=0
*/
void sub_ea5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5e90ULL || rel >= 0xea6190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6190 size=128 callers=0 calls=0
*/
void sub_ea6190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6190ULL || rel >= 0xea6210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6210 size=112 callers=0 calls=0
*/
void sub_ea6210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6210ULL || rel >= 0xea6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6280 size=480 callers=0 calls=0
*/
void sub_ea6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6280ULL || rel >= 0xea6460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6460 size=128 callers=0 calls=0
*/
void sub_ea6460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6460ULL || rel >= 0xea64e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea64e0 size=144 callers=0 calls=0
*/
void sub_ea64e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea64e0ULL || rel >= 0xea6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6570 size=128 callers=0 calls=0
*/
void sub_ea6570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6570ULL || rel >= 0xea65f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea65f0 size=160 callers=0 calls=0
*/
void sub_ea65f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea65f0ULL || rel >= 0xea6690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6690 size=160 callers=0 calls=0
*/
void sub_ea6690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6690ULL || rel >= 0xea6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6730 size=128 callers=0 calls=0
*/
void sub_ea6730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6730ULL || rel >= 0xea67b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea67b0 size=128 callers=0 calls=0
*/
void sub_ea67b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea67b0ULL || rel >= 0xea6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6830 size=112 callers=0 calls=0
*/
void sub_ea6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6830ULL || rel >= 0xea68a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea68a0 size=144 callers=0 calls=0
*/
void sub_ea68a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea68a0ULL || rel >= 0xea6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6930 size=128 callers=0 calls=0
*/
void sub_ea6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6930ULL || rel >= 0xea69b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea69b0 size=128 callers=0 calls=0
*/
void sub_ea69b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea69b0ULL || rel >= 0xea6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6a30 size=16 callers=0 calls=0
*/
void sub_ea6a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6a30ULL || rel >= 0xea6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6a40 size=16 callers=0 calls=0
*/
void sub_ea6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6a40ULL || rel >= 0xea6a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6a50 size=16 callers=0 calls=0
*/
void sub_ea6a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6a50ULL || rel >= 0xea6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea6a60 size=2656 callers=1 calls=1
   calls: sub_ea74c0
*/
void sub_ea6a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6a60ULL || rel >= 0xea74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea74c0 size=352 callers=1 calls=1
   calls: sub_ea8e30
*/
void sub_ea74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea74c0ULL || rel >= 0xea7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea7620 size=400 callers=30 calls=2
   calls: sub_5dd790, sub_5e2930
*/
void sub_ea7620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea7620ULL || rel >= 0xea77b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea77b0 size=336 callers=32 calls=6
   calls: sub_5e2bc0, sub_658e20, sub_65a0d0, sub_ea7900, sub_ea79d0, sub_ea7b30
*/
void sub_ea77b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea77b0ULL || rel >= 0xea7900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea7900 size=208 callers=5 calls=3
   calls: sub_658e30, sub_65a0d0, sub_ea79d0
*/
void sub_ea7900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea7900ULL || rel >= 0xea79d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea79d0 size=352 callers=33 calls=0
*/
void sub_ea79d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea79d0ULL || rel >= 0xea7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea7b30 size=272 callers=5 calls=3
   calls: sub_658e30, sub_65a0d0, sub_ea79d0
*/
void sub_ea7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea7b30ULL || rel >= 0xea7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea7c40 size=640 callers=20 calls=7
   calls: sub_658e40, sub_658e80, sub_658f00, sub_65a0d0, sub_ea7900, sub_ea79d0, sub_ea7b30
*/
void sub_ea7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea7c40ULL || rel >= 0xea7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea7ec0 size=576 callers=6 calls=7
   calls: sub_658e40, sub_658e80, sub_658f00, sub_65a0d0, sub_ea7900, sub_ea79d0, sub_ea7b30
*/
void sub_ea7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea7ec0ULL || rel >= 0xea8100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea8100 size=400 callers=16 calls=6
   calls: sub_658e50, sub_658e70, sub_65a0d0, sub_ea7900, sub_ea79d0, sub_ea7b30
*/
void sub_ea8100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea8100ULL || rel >= 0xea8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea8290 size=288 callers=3 calls=5
   calls: sub_658e60, sub_65a0d0, sub_ea7900, sub_ea79d0, sub_ea7b30
*/
void sub_ea8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea8290ULL || rel >= 0xea83b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea83b0 size=1376 callers=1 calls=10
   calls: sub_11061d0, sub_5e2bc0, sub_6595c0, sub_65a190, sub_ea8ff0, sub_ea92e0, sub_ea9430, vib_table, vib_table_2, vib_table_3
*/
void sub_ea83b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea83b0ULL || rel >= 0xea8910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea8910 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_ea8910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea8910ULL || rel >= 0xea89d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea89d0 size=144 callers=2 calls=3
   calls: sub_65a0c0, sub_65a510, sub_65a580
*/
void sub_ea89d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea89d0ULL || rel >= 0xea8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea8a60 size=528 callers=0 calls=4
   calls: sub_658e00, sub_658e30, sub_65a0d0, sub_ea79d0
*/
void sub_ea8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea8a60ULL || rel >= 0xea8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea8c70 size=80 callers=90 calls=0
*/
void sub_ea8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea8c70ULL || rel >= 0xea8cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea8cc0 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_ea8cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea8cc0ULL || rel >= 0xea8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea8d80 size=176 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_ea8d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea8d80ULL || rel >= 0xea8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea8e30 size=448 callers=2 calls=0
*/
void sub_ea8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea8e30ULL || rel >= 0xea8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea8ff0 size=752 callers=1 calls=1
   calls: sub_ea8e30
*/
void sub_ea8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea8ff0ULL || rel >= 0xea92e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea92e0 size=336 callers=1 calls=6
   calls: sub_1106200, sub_1106f30, sub_5dd790, sub_5e26a0, sub_5e2930, sub_8c2c10
*/
void sub_ea92e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea92e0ULL || rel >= 0xea9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9430 size=80 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_ea9430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9430ULL || rel >= 0xea9480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9480 size=96 callers=1 calls=2
   calls: sub_1106280, sub_11063e0
   ref: vib_table
*/
void vib_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9480ULL || rel >= 0xea94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea94e0 size=224 callers=1 calls=4
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_1106cd0
   ref: vib_table
*/
void vib_table_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea94e0ULL || rel >= 0xea95c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea95c0 size=352 callers=1 calls=5
   calls: sub_1106280, sub_1106320, sub_11063e0, sub_11069b0, sub_8c2c10
   ref: vib_table
*/
void vib_table_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea95c0ULL || rel >= 0xea9720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9720 size=64 callers=0 calls=0
   ref: bin/misc/vibration/data_table/vibration_data_table.prmb
*/
void vibration_data_table(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9720ULL || rel >= 0xea9760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9760 size=112 callers=0 calls=0
*/
void sub_ea9760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9760ULL || rel >= 0xea97d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea97d0 size=112 callers=0 calls=0
*/
void sub_ea97d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea97d0ULL || rel >= 0xea9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9840 size=112 callers=0 calls=0
*/
void sub_ea9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9840ULL || rel >= 0xea98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea98b0 size=112 callers=0 calls=0
*/
void sub_ea98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea98b0ULL || rel >= 0xea9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9920 size=112 callers=0 calls=0
*/
void sub_ea9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9920ULL || rel >= 0xea9990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9990 size=16 callers=0 calls=0
*/
void sub_ea9990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9990ULL || rel >= 0xea99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea99a0 size=16 callers=0 calls=0
*/
void sub_ea99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea99a0ULL || rel >= 0xea99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea99b0 size=16 callers=0 calls=0
*/
void sub_ea99b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea99b0ULL || rel >= 0xea99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea99c0 size=80 callers=2 calls=0
*/
void sub_ea99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea99c0ULL || rel >= 0xea9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9a10 size=32 callers=0 calls=0
*/
void sub_ea9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9a10ULL || rel >= 0xea9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9a30 size=16 callers=0 calls=0
*/
void sub_ea9a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9a30ULL || rel >= 0xea9a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9a40 size=32 callers=0 calls=0
*/
void sub_ea9a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9a40ULL || rel >= 0xea9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9a60 size=32 callers=0 calls=0
*/
void sub_ea9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9a60ULL || rel >= 0xea9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9a80 size=112 callers=0 calls=0
*/
void sub_ea9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9a80ULL || rel >= 0xea9af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9af0 size=112 callers=0 calls=0
*/
void sub_ea9af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9af0ULL || rel >= 0xea9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9b60 size=112 callers=0 calls=0
*/
void sub_ea9b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9b60ULL || rel >= 0xea9bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9bd0 size=112 callers=0 calls=0
*/
void sub_ea9bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9bd0ULL || rel >= 0xea9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9c40 size=112 callers=0 calls=0
*/
void sub_ea9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9c40ULL || rel >= 0xea9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9cb0 size=16 callers=0 calls=0
*/
void sub_ea9cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9cb0ULL || rel >= 0xea9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9cc0 size=384 callers=10 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2010
*/
void sub_ea9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9cc0ULL || rel >= 0xea9e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9e40 size=16 callers=22 calls=0
*/
void sub_ea9e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9e40ULL || rel >= 0xea9e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9e50 size=16 callers=7 calls=0
*/
void sub_ea9e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9e50ULL || rel >= 0xea9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9e60 size=336 callers=0 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_ea9cc0
*/
void sub_ea9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9e60ULL || rel >= 0xea9fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ea9fb0 size=128 callers=1 calls=0
*/
void sub_ea9fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9fb0ULL || rel >= 0xeaa030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa030 size=16 callers=2 calls=0
*/
void sub_eaa030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa030ULL || rel >= 0xeaa040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa040 size=80 callers=7 calls=0
*/
void sub_eaa040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa040ULL || rel >= 0xeaa090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa090 size=16 callers=2 calls=0
*/
void sub_eaa090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa090ULL || rel >= 0xeaa0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa0a0 size=48 callers=1 calls=0
*/
void sub_eaa0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa0a0ULL || rel >= 0xeaa0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa0d0 size=128 callers=1 calls=0
*/
void sub_eaa0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa0d0ULL || rel >= 0xeaa150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa150 size=144 callers=0 calls=0
*/
void sub_eaa150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa150ULL || rel >= 0xeaa1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa1e0 size=416 callers=1 calls=0
*/
void sub_eaa1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa1e0ULL || rel >= 0xeaa380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa380 size=240 callers=2 calls=1
   calls: sub_eaa7e0
*/
void sub_eaa380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa380ULL || rel >= 0xeaa470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa470 size=80 callers=0 calls=0
*/
void sub_eaa470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa470ULL || rel >= 0xeaa4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa4c0 size=80 callers=0 calls=0
*/
void sub_eaa4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa4c0ULL || rel >= 0xeaa510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa510 size=16 callers=0 calls=0
*/
void sub_eaa510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa510ULL || rel >= 0xeaa520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa520 size=16 callers=0 calls=0
*/
void sub_eaa520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa520ULL || rel >= 0xeaa530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa530 size=16 callers=0 calls=0
*/
void sub_eaa530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa530ULL || rel >= 0xeaa540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa540 size=16 callers=0 calls=0
*/
void sub_eaa540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa540ULL || rel >= 0xeaa550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa550 size=16 callers=1 calls=0
*/
void sub_eaa550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa550ULL || rel >= 0xeaa560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa560 size=16 callers=1 calls=0
*/
void sub_eaa560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa560ULL || rel >= 0xeaa570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa570 size=16 callers=1 calls=0
*/
void sub_eaa570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa570ULL || rel >= 0xeaa580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa580 size=128 callers=1 calls=1
   calls: sub_eab4f0
*/
void sub_eaa580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa580ULL || rel >= 0xeaa600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa600 size=32 callers=0 calls=1
   calls: sub_eab5c0
*/
void sub_eaa600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa600ULL || rel >= 0xeaa620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa620 size=16 callers=0 calls=0
*/
void sub_eaa620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa620ULL || rel >= 0xeaa630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa630 size=16 callers=1 calls=0
*/
void sub_eaa630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa630ULL || rel >= 0xeaa640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa640 size=16 callers=0 calls=0
*/
void sub_eaa640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa640ULL || rel >= 0xeaa650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa650 size=16 callers=0 calls=0
*/
void sub_eaa650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa650ULL || rel >= 0xeaa660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa660 size=16 callers=0 calls=0
*/
void sub_eaa660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa660ULL || rel >= 0xeaa670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa670 size=16 callers=0 calls=0
*/
void sub_eaa670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa670ULL || rel >= 0xeaa680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa680 size=16 callers=0 calls=0
*/
void sub_eaa680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa680ULL || rel >= 0xeaa690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa690 size=16 callers=0 calls=0
*/
void sub_eaa690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa690ULL || rel >= 0xeaa6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa6a0 size=16 callers=0 calls=0
*/
void sub_eaa6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa6a0ULL || rel >= 0xeaa6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa6b0 size=16 callers=0 calls=0
*/
void sub_eaa6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa6b0ULL || rel >= 0xeaa6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa6c0 size=16 callers=0 calls=0
*/
void sub_eaa6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa6c0ULL || rel >= 0xeaa6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa6d0 size=16 callers=0 calls=0
*/
void sub_eaa6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa6d0ULL || rel >= 0xeaa6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa6e0 size=16 callers=0 calls=0
*/
void sub_eaa6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa6e0ULL || rel >= 0xeaa6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa6f0 size=112 callers=0 calls=0
*/
void sub_eaa6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa6f0ULL || rel >= 0xeaa760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa760 size=16 callers=0 calls=0
*/
void sub_eaa760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa760ULL || rel >= 0xeaa770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa770 size=112 callers=0 calls=0
*/
void sub_eaa770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa770ULL || rel >= 0xeaa7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa7e0 size=224 callers=1 calls=1
   calls: sub_eaae60
*/
void sub_eaa7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa7e0ULL || rel >= 0xeaa8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaa8c0 size=352 callers=6 calls=0
*/
void sub_eaa8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa8c0ULL || rel >= 0xeaaa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaaa20 size=656 callers=1 calls=0
*/
void sub_eaaa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaaa20ULL || rel >= 0xeaacb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaacb0 size=432 callers=0 calls=1
   calls: sub_eaaa20
*/
void sub_eaacb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaacb0ULL || rel >= 0xeaae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaae60 size=320 callers=2 calls=2
   calls: sub_eaa8c0, sub_eaafa0
*/
void sub_eaae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaae60ULL || rel >= 0xeaafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaafa0 size=432 callers=1 calls=0
*/
void sub_eaafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaafa0ULL || rel >= 0xeab150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab150 size=112 callers=0 calls=1
   calls: sub_eaa8c0
*/
void sub_eab150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab150ULL || rel >= 0xeab1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab1c0 size=112 callers=0 calls=1
   calls: sub_eaa8c0
*/
void sub_eab1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab1c0ULL || rel >= 0xeab230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab230 size=112 callers=0 calls=1
   calls: sub_eaa8c0
*/
void sub_eab230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab230ULL || rel >= 0xeab2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab2a0 size=112 callers=0 calls=1
   calls: sub_eaa8c0
*/
void sub_eab2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab2a0ULL || rel >= 0xeab310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab310 size=208 callers=0 calls=0
*/
void sub_eab310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab310ULL || rel >= 0xeab3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab3e0 size=208 callers=0 calls=0
*/
void sub_eab3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab3e0ULL || rel >= 0xeab4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab4b0 size=16 callers=0 calls=0
*/
void sub_eab4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab4b0ULL || rel >= 0xeab4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab4c0 size=32 callers=0 calls=0
*/
void sub_eab4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab4c0ULL || rel >= 0xeab4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab4e0 size=16 callers=0 calls=0
*/
void sub_eab4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab4e0ULL || rel >= 0xeab4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab4f0 size=208 callers=1 calls=0
*/
void sub_eab4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab4f0ULL || rel >= 0xeab5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab5c0 size=80 callers=1 calls=0
*/
void sub_eab5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab5c0ULL || rel >= 0xeab610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab610 size=96 callers=0 calls=1
   calls: sub_eab670
*/
void sub_eab610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab610ULL || rel >= 0xeab670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab670 size=592 callers=11 calls=0
*/
void sub_eab670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab670ULL || rel >= 0xeab8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab8c0 size=160 callers=0 calls=1
   calls: sub_eab670
*/
void sub_eab8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab8c0ULL || rel >= 0xeab960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab960 size=144 callers=0 calls=1
   calls: sub_eab670
*/
void sub_eab960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab960ULL || rel >= 0xeab9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eab9f0 size=96 callers=0 calls=1
   calls: sub_eab670
*/
void sub_eab9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab9f0ULL || rel >= 0xeaba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaba50 size=80 callers=0 calls=1
   calls: sub_eab670
*/
void sub_eaba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaba50ULL || rel >= 0xeabaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eabaa0 size=80 callers=0 calls=1
   calls: sub_eab670
*/
void sub_eabaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeabaa0ULL || rel >= 0xeabaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eabaf0 size=112 callers=0 calls=1
   calls: sub_eab670
*/
void sub_eabaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeabaf0ULL || rel >= 0xeabb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eabb60 size=144 callers=0 calls=1
   calls: sub_eab670
*/
void sub_eabb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeabb60ULL || rel >= 0xeabbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eabbf0 size=96 callers=0 calls=1
   calls: sub_eab670
*/
void sub_eabbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeabbf0ULL || rel >= 0xeabc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eabc50 size=80 callers=0 calls=1
   calls: sub_eab670
*/
void sub_eabc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeabc50ULL || rel >= 0xeabca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eabca0 size=96 callers=0 calls=1
   calls: sub_eab670
*/
void sub_eabca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeabca0ULL || rel >= 0xeabd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eabd00 size=176 callers=0 calls=0
*/
void sub_eabd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeabd00ULL || rel >= 0xeabdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eabdb0 size=448 callers=1 calls=1
   calls: sub_67b990
*/
void sub_eabdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeabdb0ULL || rel >= 0xeabf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eabf70 size=336 callers=1 calls=2
   calls: place_name, place_name_2
*/
void sub_eabf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeabf70ULL || rel >= 0xeac0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eac0c0 size=336 callers=2 calls=2
   calls: place_name, place_name_2
*/
void sub_eac0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeac0c0ULL || rel >= 0xeac210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eac210 size=16 callers=6 calls=0
*/
void sub_eac210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeac210ULL || rel >= 0xeac220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eac220 size=496 callers=2 calls=4
   calls: sub_1318f70, sub_5e2bc0, sub_5e7b30, unnamed_47
   ref: script/place_name.dat
*/
void place_name(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeac220ULL || rel >= 0xeac410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eac410 size=320 callers=4 calls=3
   calls: sub_1318b50, sub_67d080, unnamed_47
   ref: script/place_name.dat
*/
void place_name_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeac410ULL || rel >= 0xeac550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eac550 size=512 callers=2 calls=0
*/
void sub_eac550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeac550ULL || rel >= 0xeac750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eac750 size=480 callers=1 calls=1
   calls: sub_5d7c40
*/
void sub_eac750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeac750ULL || rel >= 0xeac930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eac930 size=112 callers=4 calls=0
*/
void sub_eac930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeac930ULL || rel >= 0xeac9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eac9a0 size=80 callers=7 calls=0
*/
void sub_eac9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeac9a0ULL || rel >= 0xeac9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eac9f0 size=96 callers=1 calls=0
*/
void sub_eac9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeac9f0ULL || rel >= 0xeaca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaca50 size=112 callers=0 calls=1
   calls: sub_5e95a0
*/
void sub_eaca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaca50ULL || rel >= 0xeacac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eacac0 size=704 callers=0 calls=1
   calls: sub_619770
*/
void sub_eacac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacac0ULL || rel >= 0xeacd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eacd80 size=16 callers=0 calls=0
*/
void sub_eacd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacd80ULL || rel >= 0xeacd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eacd90 size=112 callers=0 calls=0
*/
void sub_eacd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacd90ULL || rel >= 0xeace00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eace00 size=16 callers=0 calls=0
*/
void sub_eace00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeace00ULL || rel >= 0xeace10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eace10 size=112 callers=0 calls=0
*/
void sub_eace10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeace10ULL || rel >= 0xeace80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eace80 size=128 callers=0 calls=0
*/
void sub_eace80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeace80ULL || rel >= 0xeacf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eacf00 size=16 callers=0 calls=0
*/
void sub_eacf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacf00ULL || rel >= 0xeacf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eacf10 size=16 callers=0 calls=0
*/
void sub_eacf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacf10ULL || rel >= 0xeacf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eacf20 size=16 callers=0 calls=0
*/
void sub_eacf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacf20ULL || rel >= 0xeacf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eacf30 size=144 callers=0 calls=0
*/
void sub_eacf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacf30ULL || rel >= 0xeacfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eacfc0 size=16 callers=0 calls=0
*/
void sub_eacfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacfc0ULL || rel >= 0xeacfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eacfd0 size=16 callers=0 calls=0
*/
void sub_eacfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacfd0ULL || rel >= 0xeacfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eacfe0 size=16 callers=0 calls=0
*/
void sub_eacfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacfe0ULL || rel >= 0xeacff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eacff0 size=48 callers=0 calls=0
*/
void sub_eacff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacff0ULL || rel >= 0xead020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead020 size=16 callers=0 calls=0
*/
void sub_ead020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead020ULL || rel >= 0xead030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead030 size=16 callers=0 calls=0
*/
void sub_ead030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead030ULL || rel >= 0xead040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead040 size=16 callers=0 calls=0
*/
void sub_ead040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead040ULL || rel >= 0xead050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead050 size=16 callers=0 calls=1
   calls: sub_ead070
*/
void sub_ead050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead050ULL || rel >= 0xead060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead060 size=16 callers=0 calls=0
*/
void sub_ead060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead060ULL || rel >= 0xead070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead070 size=16 callers=1 calls=1
   calls: sub_eac9f0
*/
void sub_ead070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead070ULL || rel >= 0xead080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead080 size=16 callers=0 calls=0
*/
void sub_ead080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead080ULL || rel >= 0xead090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead090 size=16 callers=0 calls=0
*/
void sub_ead090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead090ULL || rel >= 0xead0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead0a0 size=80 callers=1 calls=0
*/
void sub_ead0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead0a0ULL || rel >= 0xead0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead0f0 size=32 callers=17 calls=0
*/
void sub_ead0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead0f0ULL || rel >= 0xead110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead110 size=48 callers=14 calls=0
*/
void sub_ead110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead110ULL || rel >= 0xead140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead140 size=16 callers=0 calls=0
*/
void sub_ead140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead140ULL || rel >= 0xead150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead150 size=64 callers=95 calls=0
*/
void sub_ead150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead150ULL || rel >= 0xead190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead190 size=176 callers=22 calls=0
*/
void sub_ead190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead190ULL || rel >= 0xead240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead240 size=288 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_ead240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead240ULL || rel >= 0xead360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead360 size=16 callers=0 calls=0
*/
void sub_ead360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead360ULL || rel >= 0xead370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead370 size=16 callers=0 calls=0
*/
void sub_ead370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead370ULL || rel >= 0xead380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead380 size=16 callers=0 calls=0
*/
void sub_ead380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead380ULL || rel >= 0xead390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead390 size=16 callers=0 calls=0
*/
void sub_ead390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead390ULL || rel >= 0xead3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead3a0 size=320 callers=17 calls=4
   calls: sub_5dd790, sub_5e26a0, sub_5e2930, sub_8c2c10
*/
void sub_ead3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead3a0ULL || rel >= 0xead4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead4e0 size=304 callers=2 calls=3
   calls: sub_5dd790, sub_5e2930, sub_8c2c10
*/
void sub_ead4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead4e0ULL || rel >= 0xead610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead610 size=96 callers=4 calls=0
*/
void sub_ead610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead610ULL || rel >= 0xead670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead670 size=160 callers=4 calls=2
   calls: sub_101b7d0, sub_ead840
*/
void sub_ead670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead670ULL || rel >= 0xead710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead710 size=304 callers=33 calls=2
   calls: sub_101b7d0, sub_ead840
*/
void sub_ead710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead710ULL || rel >= 0xead840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ead840 size=464 callers=5 calls=0
*/
void sub_ead840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead840ULL || rel >= 0xeada10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eada10 size=64 callers=0 calls=0
*/
void sub_eada10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeada10ULL || rel >= 0xeada50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eada50 size=176 callers=2 calls=0
*/
void sub_eada50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeada50ULL || rel >= 0xeadb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadb00 size=16 callers=5 calls=0
*/
void sub_eadb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadb00ULL || rel >= 0xeadb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadb10 size=48 callers=12 calls=0
*/
void sub_eadb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadb10ULL || rel >= 0xeadb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadb40 size=32 callers=3 calls=0
*/
void sub_eadb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadb40ULL || rel >= 0xeadb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadb60 size=16 callers=1 calls=0
*/
void sub_eadb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadb60ULL || rel >= 0xeadb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadb70 size=96 callers=1 calls=0
*/
void sub_eadb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadb70ULL || rel >= 0xeadbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadbd0 size=16 callers=1 calls=0
*/
void sub_eadbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadbd0ULL || rel >= 0xeadbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadbe0 size=16 callers=1 calls=0
*/
void sub_eadbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadbe0ULL || rel >= 0xeadbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadbf0 size=16 callers=1 calls=0
*/
void sub_eadbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadbf0ULL || rel >= 0xeadc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadc00 size=16 callers=0 calls=0
*/
void sub_eadc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadc00ULL || rel >= 0xeadc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadc10 size=80 callers=1 calls=2
   calls: sub_5c63d0, sub_5c6450
*/
void sub_eadc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadc10ULL || rel >= 0xeadc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadc60 size=96 callers=3 calls=2
   calls: sub_5c63d0, sub_5c6450
*/
void sub_eadc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadc60ULL || rel >= 0xeadcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadcc0 size=16 callers=1 calls=0
*/
void sub_eadcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadcc0ULL || rel >= 0xeadcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadcd0 size=32 callers=4 calls=0
*/
void sub_eadcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadcd0ULL || rel >= 0xeadcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadcf0 size=16 callers=9 calls=0
*/
void sub_eadcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadcf0ULL || rel >= 0xeadd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadd00 size=16 callers=0 calls=0
*/
void sub_eadd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadd00ULL || rel >= 0xeadd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadd10 size=16 callers=0 calls=0
*/
void sub_eadd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadd10ULL || rel >= 0xeadd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadd20 size=112 callers=0 calls=0
*/
void sub_eadd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadd20ULL || rel >= 0xeadd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadd90 size=16 callers=0 calls=0
*/
void sub_eadd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadd90ULL || rel >= 0xeadda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadda0 size=112 callers=0 calls=0
*/
void sub_eadda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadda0ULL || rel >= 0xeade10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eade10 size=320 callers=2 calls=0
*/
void sub_eade10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeade10ULL || rel >= 0xeadf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eadf50 size=752 callers=1 calls=8
   calls: sub_135a4b0, sub_1361f80, sub_1362080, sub_1362160, sub_eadb10, sub_eadcf0, sub_eae2d0, sub_eae400
*/
void sub_eadf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadf50ULL || rel >= 0xeae240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eae240 size=144 callers=1 calls=1
   calls: sub_135a4b0
*/
void sub_eae240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeae240ULL || rel >= 0xeae2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eae2d0 size=304 callers=2 calls=4
   calls: sub_1361fa0, sub_1361fd0, sub_eadb00, sub_eadb40
*/
void sub_eae2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeae2d0ULL || rel >= 0xeae400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eae400 size=1360 callers=2 calls=17
   calls: BOX_WAZA2, sub_135a4b0, sub_135a760, sub_135aaa0, sub_1362080, sub_1363cf0, sub_136b4e0, sub_136c8a0, sub_136d010, sub_1373f30, sub_137a060, sub_137a1a0
   ... +5 more
*/
void sub_eae400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeae400ULL || rel >= 0xeae950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eae950 size=16 callers=1 calls=0
*/
void sub_eae950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeae950ULL || rel >= 0xeae960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eae960 size=560 callers=2 calls=8
   calls: sub_135a3c0, sub_135a4b0, sub_13658b0, sub_136c8a0, sub_1370980, sub_1373eb0, sub_1373f50, sub_eadc60
*/
void sub_eae960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeae960ULL || rel >= 0xeaeb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaeb90 size=144 callers=1 calls=2
   calls: sub_1362000, sub_eadcd0
*/
void sub_eaeb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaeb90ULL || rel >= 0xeaec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaec20 size=96 callers=6 calls=2
   calls: sub_eadb10, sub_eadcd0
*/
void sub_eaec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaec20ULL || rel >= 0xeaec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaec80 size=240 callers=7 calls=3
   calls: sub_1361fd0, sub_eadb10, sub_eadcd0
*/
void sub_eaec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaec80ULL || rel >= 0xeaed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaed70 size=128 callers=12 calls=2
   calls: sub_eadb10, sub_eadcf0
*/
void sub_eaed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaed70ULL || rel >= 0xeaedf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaedf0 size=384 callers=2 calls=4
   calls: sub_135a760, sub_eadb10, sub_eadb60, sub_eadcf0
*/
void sub_eaedf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaedf0ULL || rel >= 0xeaef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaef70 size=304 callers=3 calls=5
   calls: sub_135a2d0, sub_135a3c0, sub_eadb10, sub_eadcf0, sub_eaedf0
*/
void sub_eaef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaef70ULL || rel >= 0xeaf0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf0a0 size=224 callers=0 calls=1
   calls: sub_619770
*/
void sub_eaf0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf0a0ULL || rel >= 0xeaf180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf180 size=224 callers=0 calls=1
   calls: sub_619770
*/
void sub_eaf180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf180ULL || rel >= 0xeaf260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf260 size=16 callers=0 calls=0
*/
void sub_eaf260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf260ULL || rel >= 0xeaf270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf270 size=112 callers=0 calls=0
*/
void sub_eaf270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf270ULL || rel >= 0xeaf2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf2e0 size=16 callers=0 calls=0
*/
void sub_eaf2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf2e0ULL || rel >= 0xeaf2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf2f0 size=112 callers=0 calls=0
*/
void sub_eaf2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf2f0ULL || rel >= 0xeaf360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf360 size=256 callers=0 calls=4
   calls: sub_1361f40, sub_1362010, sub_1362090, sub_eae960
*/
void sub_eaf360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf360ULL || rel >= 0xeaf460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf460 size=16 callers=0 calls=0
*/
void sub_eaf460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf460ULL || rel >= 0xeaf470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf470 size=16 callers=0 calls=0
*/
void sub_eaf470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf470ULL || rel >= 0xeaf480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf480 size=16 callers=0 calls=0
*/
void sub_eaf480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf480ULL || rel >= 0xeaf490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf490 size=64 callers=0 calls=0
   ref: WK_EV_REAL_DAYS
*/
void WK_EV_REAL_DAYS(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf490ULL || rel >= 0xeaf4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf4d0 size=32 callers=1 calls=0
*/
void sub_eaf4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf4d0ULL || rel >= 0xeaf4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf4f0 size=48 callers=2 calls=0
*/
void sub_eaf4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf4f0ULL || rel >= 0xeaf520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf520 size=320 callers=1 calls=1
   calls: sub_136f4f0
*/
void sub_eaf520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf520ULL || rel >= 0xeaf660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf660 size=80 callers=3 calls=1
   calls: sub_eaec20
*/
void sub_eaf660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf660ULL || rel >= 0xeaf6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf6b0 size=96 callers=7 calls=2
   calls: sub_eaec20, sub_eaec80
*/
void sub_eaf6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf6b0ULL || rel >= 0xeaf710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf710 size=112 callers=1 calls=2
   calls: sub_eaec20, sub_eaec80
*/
void sub_eaf710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf710ULL || rel >= 0xeaf780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf780 size=336 callers=1 calls=3
   calls: sub_eaec20, sub_eaec80, sub_eaf8d0
*/
void sub_eaf780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf780ULL || rel >= 0xeaf8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eaf8d0 size=480 callers=2 calls=0
*/
void sub_eaf8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf8d0ULL || rel >= 0xeafab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eafab0 size=80 callers=1 calls=1
   calls: sub_eaec80
*/
void sub_eafab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeafab0ULL || rel >= 0xeafb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eafb00 size=528 callers=0 calls=0
*/
void sub_eafb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeafb00ULL || rel >= 0xeafd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eafd10 size=16 callers=0 calls=0
*/
void sub_eafd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeafd10ULL || rel >= 0xeafd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eafd20 size=16 callers=0 calls=0
*/
void sub_eafd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeafd20ULL || rel >= 0xeafd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eafd30 size=16 callers=0 calls=0
*/
void sub_eafd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeafd30ULL || rel >= 0xeafd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eafd40 size=16 callers=0 calls=0
*/
void sub_eafd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeafd40ULL || rel >= 0xeafd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eafd50 size=16 callers=0 calls=0
*/
void sub_eafd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeafd50ULL || rel >= 0xeafd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eafd60 size=2880 callers=4 calls=11
   calls: sub_eb08a0, sub_eb0b60, sub_eb0e30, sub_eb1100, sub_eb13d0, sub_eb28e0, sub_eb2ab0, sub_eb3070, sub_eb3350, sub_eb4ac0, sub_eb5c70
*/
void sub_eafd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeafd60ULL || rel >= 0xeb08a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb08a0 size=704 callers=2 calls=1
   calls: sub_eb28e0
*/
void sub_eb08a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb08a0ULL || rel >= 0xeb0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb0b60 size=720 callers=1 calls=1
   calls: sub_eb28e0
*/
void sub_eb0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb0b60ULL || rel >= 0xeb0e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb0e30 size=720 callers=2 calls=1
   calls: sub_eb28e0
*/
void sub_eb0e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb0e30ULL || rel >= 0xeb1100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb1100 size=720 callers=2 calls=1
   calls: sub_eb28e0
*/
void sub_eb1100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb1100ULL || rel >= 0xeb13d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb13d0 size=688 callers=1 calls=1
   calls: sub_eb28e0
*/
void sub_eb13d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb13d0ULL || rel >= 0xeb1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb1680 size=400 callers=1 calls=2
   calls: sub_eb28e0, sub_eb5750
*/
void sub_eb1680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb1680ULL || rel >= 0xeb1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb1810 size=16 callers=1 calls=0
*/
void sub_eb1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb1810ULL || rel >= 0xeb1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb1820 size=448 callers=1 calls=2
   calls: sub_eb28e0, sub_eb5100
*/
void sub_eb1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb1820ULL || rel >= 0xeb19e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb19e0 size=432 callers=6 calls=1
   calls: sub_eb28e0
*/
void sub_eb19e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb19e0ULL || rel >= 0xeb1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb1b90 size=704 callers=2 calls=1
   calls: sub_eb28e0
*/
void sub_eb1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb1b90ULL || rel >= 0xeb1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb1e50 size=720 callers=1 calls=1
   calls: sub_eb28e0
*/
void sub_eb1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb1e50ULL || rel >= 0xeb2120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2120 size=624 callers=1 calls=1
   calls: sub_eb28e0
*/
void sub_eb2120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2120ULL || rel >= 0xeb2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2390 size=624 callers=1 calls=1
   calls: sub_eb28e0
*/
void sub_eb2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2390ULL || rel >= 0xeb2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb2600 size=464 callers=6 calls=1
   calls: sub_eb28e0
*/
void sub_eb2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2600ULL || rel >= 0xeb27d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb27d0 size=240 callers=0 calls=0
*/
void sub_eb27d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb27d0ULL || rel >= 0xeb28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb28c0 size=16 callers=0 calls=0
*/
void sub_eb28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb28c0ULL || rel >= 0xeb28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eb28d0 size=16 callers=0 calls=0
*/
void sub_eb28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb28d0ULL || rel >= 0xeb28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

