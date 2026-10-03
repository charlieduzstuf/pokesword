/* main functions 016d07a0..016f5fc0 (196 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 016d07a0 size=336 callers=3 calls=8
   calls: sub_1652d30, sub_1653890, sub_16d1f00, sub_16d26c0, sub_16d26f0, sub_1749cf0, sub_1749d90, sub_1749da0
*/
void sub_16d07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d07a0ULL || rel >= 0x16d08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d08f0 size=1312 callers=1 calls=28
   calls: sub_1652c70, sub_1652cf0, sub_1652d30, sub_1655110, sub_1655220, sub_1655290, sub_16580f0, sub_1658120, sub_165c600, sub_165c6b0, sub_165e060, sub_16ca680
   ... +16 more
*/
void sub_16d08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d08f0ULL || rel >= 0x16d0e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d0e10 size=944 callers=1 calls=16
   calls: sub_1652ca0, sub_1652d30, sub_1653b50, sub_16a8330, sub_1749cd0, sub_1749ce0, sub_1749cf0, sub_1749dc0, sub_1749de0, sub_1749e20, sub_1749e80, sub_1749ea0
   ... +4 more
*/
void sub_16d0e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d0e10ULL || rel >= 0x16d11c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d11c0 size=608 callers=1 calls=11
   calls: sub_16580f0, sub_1658120, sub_165c600, sub_16d1a00, sub_16d1d10, sub_17498a0, sub_17499e0, sub_1749dc0, sub_1749e60, sub_1749ef0, sub_1749fc0
*/
void sub_16d11c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d11c0ULL || rel >= 0x16d1420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d1420 size=1184 callers=1 calls=24
   calls: sub_1653a70, sub_1655190, sub_16551b0, sub_1655220, sub_16580f0, sub_1658120, sub_165c600, sub_165e060, sub_16cdd50, sub_16cdd90, sub_16ceaf0, sub_16cebf0
   ... +12 more
*/
void sub_16d1420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d1420ULL || rel >= 0x16d18c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d18c0 size=320 callers=2 calls=10
   calls: sub_1652d30, sub_1653a70, sub_165e140, sub_16d1f00, sub_16d26c0, sub_16d26f0, sub_1749cf0, sub_1749d90, sub_1749da0, sub_1749db0
*/
void sub_16d18c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d18c0ULL || rel >= 0x16d1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d1a00 size=784 callers=4 calls=32
   calls: sub_1652c70, sub_1652ca0, sub_1652cf0, sub_1652d30, sub_1653890, sub_1655180, sub_165c600, sub_165c6b0, sub_16a8050, sub_16c9fa0, sub_16ca650, sub_16ca660
   ... +20 more
*/
void sub_16d1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d1a00ULL || rel >= 0x16d1d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d1d10 size=272 callers=1 calls=5
   calls: sub_165c600, sub_165c6b0, sub_1749dc0, sub_1749e60, sub_1749ea0
*/
void sub_16d1d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d1d10ULL || rel >= 0x16d1e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d1e20 size=224 callers=1 calls=8
   calls: sub_165c600, sub_16ca3d0, sub_16ceaf0, sub_16cebf0, sub_1749820, sub_17499e0, sub_1749a80, sub_1749ee0
*/
void sub_16d1e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d1e20ULL || rel >= 0x16d1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d1f00 size=240 callers=2 calls=4
   calls: sub_165e060, sub_173c720, sub_173caa0, sub_173ef10
*/
void sub_16d1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d1f00ULL || rel >= 0x16d1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d1ff0 size=544 callers=1 calls=24
   calls: sub_1653890, sub_16ccdb0, sub_1749a80, sub_1749bf0, sub_1749cd0, sub_1749ce0, sub_1749d50, sub_1749d60, sub_1749d70, sub_1749d80, sub_1749d90, sub_1749da0
   ... +12 more
*/
void sub_16d1ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d1ff0ULL || rel >= 0x16d2210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2210 size=64 callers=0 calls=2
   calls: sub_165e060, sub_16d2250
*/
void sub_16d2210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2210ULL || rel >= 0x16d2250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2250 size=192 callers=1 calls=6
   calls: sub_165c600, sub_165c6b0, sub_16ca3d0, sub_16ca680, sub_16ce4f0, sub_16ce500
*/
void sub_16d2250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2250ULL || rel >= 0x16d2310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2310 size=64 callers=1 calls=1
   calls: sub_165c600
*/
void sub_16d2310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2310ULL || rel >= 0x16d2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2350 size=16 callers=1 calls=0
*/
void sub_16d2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2350ULL || rel >= 0x16d2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2360 size=48 callers=2 calls=1
   calls: sub_1749da0
*/
void sub_16d2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2360ULL || rel >= 0x16d2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2390 size=272 callers=0 calls=4
   calls: sub_165c600, sub_165c6b0, sub_16cccb0, sub_16ccd30
*/
void sub_16d2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2390ULL || rel >= 0x16d24a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d24a0 size=16 callers=1 calls=0
*/
void sub_16d24a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d24a0ULL || rel >= 0x16d24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d24b0 size=16 callers=0 calls=0
*/
void sub_16d24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d24b0ULL || rel >= 0x16d24c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d24c0 size=336 callers=0 calls=3
   calls: sub_165e060, sub_1749a80, sub_1749d80
*/
void sub_16d24c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d24c0ULL || rel >= 0x16d2610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2610 size=16 callers=0 calls=0
*/
void sub_16d2610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2610ULL || rel >= 0x16d2620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2620 size=16 callers=0 calls=0
*/
void sub_16d2620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2620ULL || rel >= 0x16d2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2630 size=128 callers=0 calls=2
   calls: sub_16580b0, sub_16580f0
*/
void sub_16d2630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2630ULL || rel >= 0x16d26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d26b0 size=16 callers=0 calls=0
*/
void sub_16d26b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d26b0ULL || rel >= 0x16d26c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d26c0 size=48 callers=3 calls=0
*/
void sub_16d26c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d26c0ULL || rel >= 0x16d26f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d26f0 size=288 callers=2 calls=1
   calls: sub_165e060
*/
void sub_16d26f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d26f0ULL || rel >= 0x16d2810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2810 size=192 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16d2810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2810ULL || rel >= 0x16d28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d28d0 size=16 callers=0 calls=0
*/
void sub_16d28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d28d0ULL || rel >= 0x16d28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d28e0 size=16 callers=0 calls=0
*/
void sub_16d28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d28e0ULL || rel >= 0x16d28f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d28f0 size=80 callers=1 calls=1
   calls: sub_17498a0
*/
void sub_16d28f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d28f0ULL || rel >= 0x16d2940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2940 size=96 callers=1 calls=3
   calls: sub_1653890, sub_17498a0, sub_1749e40
*/
void sub_16d2940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2940ULL || rel >= 0x16d29a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d29a0 size=64 callers=3 calls=1
   calls: sub_1749820
*/
void sub_16d29a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d29a0ULL || rel >= 0x16d29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d29e0 size=16 callers=1 calls=0
*/
void sub_16d29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d29e0ULL || rel >= 0x16d29f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d29f0 size=32 callers=0 calls=0
*/
void sub_16d29f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d29f0ULL || rel >= 0x16d2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2a10 size=64 callers=0 calls=1
   calls: sub_17499e0
*/
void sub_16d2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2a10ULL || rel >= 0x16d2a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2a50 size=144 callers=1 calls=1
   calls: sub_165e060
   ref: SDK Private+Nintendo+nex::NexFacade::SetRelayServiceEnabled
*/
void SDK_Private_Nintendo_nex_NexFacade_SetRelayServiceEnable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2a50ULL || rel >= 0x16d2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2ae0 size=48 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_16d2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2ae0ULL || rel >= 0x16d2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2b10 size=80 callers=0 calls=1
   calls: sub_1652c70
*/
void sub_16d2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2b10ULL || rel >= 0x16d2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2b60 size=64 callers=1 calls=1
   calls: sub_1652cf0
*/
void sub_16d2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2b60ULL || rel >= 0x16d2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2ba0 size=80 callers=1 calls=2
   calls: sub_16538d0, sub_165ff10
*/
void sub_16d2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2ba0ULL || rel >= 0x16d2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2bf0 size=16 callers=0 calls=0
*/
void sub_16d2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2bf0ULL || rel >= 0x16d2c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2c00 size=16 callers=0 calls=0
*/
void sub_16d2c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2c00ULL || rel >= 0x16d2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2c10 size=48 callers=0 calls=1
   calls: sub_165ff30
*/
void sub_16d2c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2c10ULL || rel >= 0x16d2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2c40 size=48 callers=0 calls=1
   calls: sub_165ff30
*/
void sub_16d2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2c40ULL || rel >= 0x16d2c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2c70 size=128 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16d2c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2c70ULL || rel >= 0x16d2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2cf0 size=752 callers=0 calls=12
   calls: IN_ANY_ADDR_d, sub_1652c70, sub_1652d30, sub_1653860, sub_1653890, sub_165b480, sub_165e060, sub_165e140, sub_165fb30, sub_165fd50, sub_165fd90, sub_16c6880
*/
void sub_16d2cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2cf0ULL || rel >= 0x16d2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d2fe0 size=128 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16d2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d2fe0ULL || rel >= 0x16d3060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3060 size=192 callers=0 calls=2
   calls: sub_165c9b0, sub_165e060
*/
void sub_16d3060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3060ULL || rel >= 0x16d3120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3120 size=16 callers=0 calls=0
*/
void sub_16d3120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3120ULL || rel >= 0x16d3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3130 size=160 callers=1 calls=3
   calls: sub_16c41a0, sub_16c4780, sub_1713e80
*/
void sub_16d3130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3130ULL || rel >= 0x16d31d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d31d0 size=80 callers=1 calls=1
   calls: sub_17142a0
*/
void sub_16d31d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d31d0ULL || rel >= 0x16d3220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3220 size=96 callers=0 calls=2
   calls: sub_16c4560, sub_17142a0
*/
void sub_16d3220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3220ULL || rel >= 0x16d3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3280 size=96 callers=0 calls=1
   calls: sub_16c4780
*/
void sub_16d3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3280ULL || rel >= 0x16d32e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d32e0 size=112 callers=1 calls=2
   calls: sub_165e060, sub_16c45e0
*/
void sub_16d32e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d32e0ULL || rel >= 0x16d3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3350 size=224 callers=1 calls=3
   calls: sub_165e060, sub_1714840, sub_1733de0
*/
void sub_16d3350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3350ULL || rel >= 0x16d3430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3430 size=16 callers=0 calls=0
*/
void sub_16d3430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3430ULL || rel >= 0x16d3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3440 size=32 callers=0 calls=0
*/
void sub_16d3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3440ULL || rel >= 0x16d3460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3460 size=16 callers=0 calls=0
*/
void sub_16d3460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3460ULL || rel >= 0x16d3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3470 size=32 callers=0 calls=0
*/
void sub_16d3470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3470ULL || rel >= 0x16d3490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3490 size=16 callers=0 calls=0
*/
void sub_16d3490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3490ULL || rel >= 0x16d34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d34a0 size=16 callers=1 calls=0
*/
void sub_16d34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d34a0ULL || rel >= 0x16d34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d34b0 size=16 callers=1 calls=0
*/
void sub_16d34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d34b0ULL || rel >= 0x16d34c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d34c0 size=16 callers=1 calls=0
*/
void sub_16d34c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d34c0ULL || rel >= 0x16d34d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d34d0 size=16 callers=0 calls=0
*/
void sub_16d34d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d34d0ULL || rel >= 0x16d34e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d34e0 size=320 callers=2 calls=1
   calls: sub_1724e40
*/
void sub_16d34e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d34e0ULL || rel >= 0x16d3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3620 size=64 callers=0 calls=0
*/
void sub_16d3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3620ULL || rel >= 0x16d3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3660 size=32 callers=2 calls=0
*/
void sub_16d3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3660ULL || rel >= 0x16d3680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3680 size=64 callers=0 calls=1
   calls: sub_1724e60
*/
void sub_16d3680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3680ULL || rel >= 0x16d36c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d36c0 size=144 callers=0 calls=1
   calls: sub_1724f10
*/
void sub_16d36c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d36c0ULL || rel >= 0x16d3750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3750 size=176 callers=2 calls=3
   calls: sub_165be70, sub_165c080, sub_165e060
*/
void sub_16d3750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3750ULL || rel >= 0x16d3800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3800 size=16 callers=3 calls=0
*/
void sub_16d3800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3800ULL || rel >= 0x16d3810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3810 size=16 callers=3 calls=0
*/
void sub_16d3810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3810ULL || rel >= 0x16d3820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3820 size=16 callers=2 calls=0
*/
void sub_16d3820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3820ULL || rel >= 0x16d3830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3830 size=16 callers=1 calls=0
*/
void sub_16d3830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3830ULL || rel >= 0x16d3840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3840 size=16 callers=1 calls=0
*/
void sub_16d3840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3840ULL || rel >= 0x16d3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3850 size=16 callers=1 calls=0
*/
void sub_16d3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3850ULL || rel >= 0x16d3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3860 size=16 callers=1 calls=0
*/
void sub_16d3860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3860ULL || rel >= 0x16d3870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3870 size=16 callers=0 calls=0
*/
void sub_16d3870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3870ULL || rel >= 0x16d3880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3880 size=480 callers=0 calls=2
   calls: sub_165c200, sub_165e060
*/
void sub_16d3880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3880ULL || rel >= 0x16d3a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3a60 size=64 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_16d3a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3a60ULL || rel >= 0x16d3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3aa0 size=16 callers=0 calls=0
*/
void sub_16d3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3aa0ULL || rel >= 0x16d3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3ab0 size=48 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_16d3ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3ab0ULL || rel >= 0x16d3ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3ae0 size=96 callers=1 calls=3
   calls: CallContext, InstanceTable_206, sub_1655290
*/
void sub_16d3ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3ae0ULL || rel >= 0x16d3b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3b40 size=16 callers=0 calls=0
*/
void sub_16d3b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3b40ULL || rel >= 0x16d3b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3b50 size=16 callers=0 calls=0
*/
void sub_16d3b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3b50ULL || rel >= 0x16d3b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3b60 size=96 callers=0 calls=2
   calls: CallContext, InstanceTable_206
*/
void sub_16d3b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3b60ULL || rel >= 0x16d3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3bc0 size=128 callers=0 calls=4
   calls: sub_16c5a50, sub_1749820, sub_17499e0, sub_174a450
*/
void sub_16d3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3bc0ULL || rel >= 0x16d3c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3c40 size=96 callers=0 calls=2
   calls: CallContext, InstanceTable_206
*/
void sub_16d3c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3c40ULL || rel >= 0x16d3ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3ca0 size=96 callers=0 calls=3
   calls: CallContext, InstanceTable_206, sub_15b5200
*/
void sub_16d3ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3ca0ULL || rel >= 0x16d3d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3d00 size=160 callers=0 calls=3
   calls: CallContext, InstanceTable_206, sub_16c6880
*/
void sub_16d3d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3d00ULL || rel >= 0x16d3da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3da0 size=32 callers=0 calls=0
*/
void sub_16d3da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3da0ULL || rel >= 0x16d3dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d3dc0 size=672 callers=1 calls=15
   calls: sub_15b7a70, sub_15b9340, sub_15de560, sub_15e9650, sub_15e9870, sub_15e9a40, sub_1618120, sub_1633be0, sub_1652bd0, sub_1652c70, sub_16538d0, sub_16580b0
   ... +3 more
*/
void sub_16d3dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d3dc0ULL || rel >= 0x16d4060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4060 size=528 callers=1 calls=6
   calls: sub_15b9390, sub_15bc310, sub_1652d30, sub_16580b0, sub_16580f0, sub_1716390
*/
void sub_16d4060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4060ULL || rel >= 0x16d4270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4270 size=48 callers=0 calls=1
   calls: sub_16d4060
*/
void sub_16d4270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4270ULL || rel >= 0x16d42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d42a0 size=16 callers=0 calls=0
*/
void sub_16d42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d42a0ULL || rel >= 0x16d42b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d42b0 size=16 callers=0 calls=0
*/
void sub_16d42b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d42b0ULL || rel >= 0x16d42c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d42c0 size=1872 callers=0 calls=42
   calls: CallContext, InstanceTable_206, probeinit_6, stream_2, sub_15b4d40, sub_15bc310, sub_15d7a30, sub_15df280, sub_15df2b0, sub_15df3a0, sub_15dfb20, sub_15e3750
   ... +30 more
*/
void sub_16d42c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d42c0ULL || rel >= 0x16d4a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4a10 size=128 callers=0 calls=3
   calls: CallContext, InstanceTable_206, sub_15b4f90
*/
void sub_16d4a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4a10ULL || rel >= 0x16d4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4a90 size=128 callers=0 calls=3
   calls: CallContext, InstanceTable_206, sub_15b5200
*/
void sub_16d4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4a90ULL || rel >= 0x16d4b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4b10 size=336 callers=0 calls=7
   calls: sub_15bca70, sub_1652c70, sub_1652d30, sub_16538d0, sub_165b880, sub_16c6880, sub_16d4c60
*/
void sub_16d4b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4b10ULL || rel >= 0x16d4c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4c60 size=160 callers=1 calls=2
   calls: sub_1652d50, sub_165e060
*/
void sub_16d4c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4c60ULL || rel >= 0x16d4d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4d00 size=256 callers=0 calls=7
   calls: CallContext, InstanceTable_206, sub_15b5470, sub_15bead0, sub_15ca030, sub_16538d0, sub_16c6880
*/
void sub_16d4d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4d00ULL || rel >= 0x16d4e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4e00 size=16 callers=0 calls=0
*/
void sub_16d4e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4e00ULL || rel >= 0x16d4e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4e10 size=96 callers=0 calls=1
   calls: sub_16c6880
*/
void sub_16d4e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4e10ULL || rel >= 0x16d4e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4e70 size=192 callers=0 calls=2
   calls: sub_165e060, sub_16c6880
*/
void sub_16d4e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4e70ULL || rel >= 0x16d4f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4f30 size=144 callers=0 calls=2
   calls: sub_1652cf0, sub_1652de0
*/
void sub_16d4f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4f30ULL || rel >= 0x16d4fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4fc0 size=16 callers=0 calls=0
*/
void sub_16d4fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4fc0ULL || rel >= 0x16d4fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d4fd0 size=144 callers=0 calls=4
   calls: sub_15b7f90, sub_1653890, sub_165c730, sub_16c6880
*/
void sub_16d4fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d4fd0ULL || rel >= 0x16d5060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5060 size=112 callers=0 calls=2
   calls: sub_1653890, sub_16c6880
*/
void sub_16d5060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5060ULL || rel >= 0x16d50d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d50d0 size=80 callers=0 calls=1
   calls: sub_16c6880
*/
void sub_16d50d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d50d0ULL || rel >= 0x16d5120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5120 size=16 callers=0 calls=0
*/
void sub_16d5120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5120ULL || rel >= 0x16d5130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5130 size=16 callers=0 calls=0
*/
void sub_16d5130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5130ULL || rel >= 0x16d5140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5140 size=16 callers=0 calls=0
*/
void sub_16d5140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5140ULL || rel >= 0x16d5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5150 size=16 callers=0 calls=0
*/
void sub_16d5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5150ULL || rel >= 0x16d5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5160 size=16 callers=0 calls=0
*/
void sub_16d5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5160ULL || rel >= 0x16d5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5170 size=112 callers=4 calls=1
   calls: sub_1653b50
*/
void sub_16d5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5170ULL || rel >= 0x16d51e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d51e0 size=640 callers=0 calls=7
   calls: sub_15b7b20, sub_15bc310, sub_16538d0, sub_16580b0, sub_16580f0, sub_165c600, sub_16c6880
*/
void sub_16d51e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d51e0ULL || rel >= 0x16d5460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5460 size=288 callers=0 calls=9
   calls: sub_1652d30, sub_16580f0, sub_1658120, sub_165c6b0, sub_16c84d0, sub_1749820, sub_17499e0, sub_1749f00, sub_1749f50
*/
void sub_16d5460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5460ULL || rel >= 0x16d5580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5580 size=352 callers=0 calls=6
   calls: sub_1652d30, sub_1653b50, sub_16580f0, sub_1658120, sub_1749cd0, sub_1749da0
*/
void sub_16d5580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5580ULL || rel >= 0x16d56e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d56e0 size=512 callers=0 calls=7
   calls: sub_1652de0, sub_165c9b0, sub_165c9e0, sub_165d420, sub_165d450, sub_165d560, sub_165e060
*/
void sub_16d56e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d56e0ULL || rel >= 0x16d58e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d58e0 size=544 callers=0 calls=7
   calls: sub_1652d50, sub_165c9d0, sub_165c9f0, sub_165d420, sub_165d450, sub_165d560, sub_165e060
*/
void sub_16d58e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d58e0ULL || rel >= 0x16d5b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5b00 size=416 callers=0 calls=1
   calls: IN_ANY_ADDR_d
*/
void sub_16d5b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5b00ULL || rel >= 0x16d5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5ca0 size=48 callers=0 calls=1
   calls: sub_15de580
*/
void sub_16d5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5ca0ULL || rel >= 0x16d5cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5cd0 size=16 callers=0 calls=0
*/
void sub_16d5cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5cd0ULL || rel >= 0x16d5ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5ce0 size=16 callers=0 calls=0
*/
void sub_16d5ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5ce0ULL || rel >= 0x16d5cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5cf0 size=16 callers=0 calls=0
*/
void sub_16d5cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5cf0ULL || rel >= 0x16d5d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5d00 size=16 callers=0 calls=0
*/
void sub_16d5d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5d00ULL || rel >= 0x16d5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5d10 size=64 callers=0 calls=1
   calls: sub_1652c70
*/
void sub_16d5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5d10ULL || rel >= 0x16d5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5d50 size=96 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_16d5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5d50ULL || rel >= 0x16d5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5db0 size=16 callers=0 calls=0
*/
void sub_16d5db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5db0ULL || rel >= 0x16d5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5dc0 size=48 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_16d5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5dc0ULL || rel >= 0x16d5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5df0 size=288 callers=1 calls=4
   calls: sub_1655190, sub_165baf0, sub_165e060, sub_165e140
   ref: NexNatServerAddressResolveJob::StepResolveNatServerAddress
*/
void NexNatServerAddressResolveJob_StepResolveNatServerAddres(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5df0ULL || rel >= 0x16d5f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d5f10 size=256 callers=0 calls=4
   calls: nncs2_n_n_srv_nintendo, sub_165c6b0, sub_165e140, sub_16c4110
   ref: NexNatServerAddressResolveJob::StepComplete
   ref: NexNatServerAddressResolveJob::StepRequestRelayServerSetting
*/
void NexNatServerAddressResolveJob_StepComplete(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d5f10ULL || rel >= 0x16d6010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6010 size=64 callers=0 calls=1
   calls: sub_1655290
*/
void sub_16d6010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6010ULL || rel >= 0x16d6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6050 size=176 callers=0 calls=4
   calls: sub_16551b0, sub_1655220, sub_1655290, sub_165e060
*/
void sub_16d6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6050ULL || rel >= 0x16d6100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6100 size=160 callers=0 calls=1
   calls: sub_165c6b0
   ref: NexNatServerAddressResolveJob::StepComplete
   ref: NexNatServerAddressResolveJob::StepWaitRequestRelayServerSetting
*/
void NexNatServerAddressResolveJob_StepComplete_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6100ULL || rel >= 0x16d61a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d61a0 size=240 callers=0 calls=1
   calls: sub_16c6880
   ref: NexNatServerAddressResolveJob::StepComplete
   ref: NexNatServerAddressResolveJob::StepResolveRelayServerSetting
*/
void NexNatServerAddressResolveJob_StepComplete_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d61a0ULL || rel >= 0x16d6290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6290 size=144 callers=0 calls=1
   calls: sub_16c6880
   ref: NexNatServerAddressResolveJob::StepComplete
*/
void NexNatServerAddressResolveJob_StepComplete_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6290ULL || rel >= 0x16d6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6320 size=64 callers=1 calls=1
   calls: sub_16c8dd0
*/
void sub_16d6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6320ULL || rel >= 0x16d6360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6360 size=64 callers=0 calls=1
   calls: sub_16c8ff0
*/
void sub_16d6360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6360ULL || rel >= 0x16d63a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d63a0 size=64 callers=0 calls=1
   calls: sub_16c8ff0
*/
void sub_16d63a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d63a0ULL || rel >= 0x16d63e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d63e0 size=240 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16d63e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d63e0ULL || rel >= 0x16d64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d64d0 size=16 callers=0 calls=0
*/
void sub_16d64d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d64d0ULL || rel >= 0x16d64e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d64e0 size=16 callers=1 calls=0
*/
void sub_16d64e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d64e0ULL || rel >= 0x16d64f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d64f0 size=16 callers=0 calls=0
*/
void sub_16d64f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d64f0ULL || rel >= 0x16d6500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6500 size=32 callers=0 calls=0
*/
void sub_16d6500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6500ULL || rel >= 0x16d6520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6520 size=96 callers=0 calls=0
*/
void sub_16d6520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6520ULL || rel >= 0x16d6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6580 size=96 callers=0 calls=0
*/
void sub_16d6580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6580ULL || rel >= 0x16d65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d65e0 size=816 callers=1 calls=17
   calls: sub_1653890, sub_165c600, sub_165c6b0, sub_16cde50, sub_16ceaf0, sub_16cebf0, sub_16cecf0, sub_16d2360, sub_16d24a0, sub_1749820, sub_17499e0, sub_1749a80
   ... +5 more
*/
void sub_16d65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d65e0ULL || rel >= 0x16d6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6910 size=32 callers=0 calls=0
*/
void sub_16d6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6910ULL || rel >= 0x16d6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6930 size=224 callers=0 calls=7
   calls: sub_1652d30, sub_1653890, sub_16d0220, sub_16d0310, sub_1749cf0, sub_1749da0, sub_1749ee0
*/
void sub_16d6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6930ULL || rel >= 0x16d6a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6a10 size=32 callers=0 calls=0
*/
void sub_16d6a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6a10ULL || rel >= 0x16d6a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6a30 size=16 callers=0 calls=0
*/
void sub_16d6a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6a30ULL || rel >= 0x16d6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6a40 size=64 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_16d6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6a40ULL || rel >= 0x16d6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6a80 size=16 callers=0 calls=0
*/
void sub_16d6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6a80ULL || rel >= 0x16d6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6a90 size=48 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_16d6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6a90ULL || rel >= 0x16d6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6ac0 size=64 callers=1 calls=1
   calls: sub_1655290
*/
void sub_16d6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6ac0ULL || rel >= 0x16d6b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6b00 size=48 callers=1 calls=1
   calls: sub_17315f0
*/
void sub_16d6b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6b00ULL || rel >= 0x16d6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6b30 size=16 callers=0 calls=0
*/
void sub_16d6b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6b30ULL || rel >= 0x16d6b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6b40 size=48 callers=0 calls=1
   calls: sub_1731620
*/
void sub_16d6b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6b40ULL || rel >= 0x16d6b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6b70 size=16 callers=0 calls=0
*/
void sub_16d6b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6b70ULL || rel >= 0x16d6b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6b80 size=16 callers=0 calls=0
*/
void sub_16d6b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6b80ULL || rel >= 0x16d6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6b90 size=16 callers=0 calls=0
*/
void sub_16d6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6b90ULL || rel >= 0x16d6ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6ba0 size=16 callers=0 calls=0
*/
void sub_16d6ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6ba0ULL || rel >= 0x16d6bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6bb0 size=16 callers=0 calls=0
*/
void sub_16d6bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6bb0ULL || rel >= 0x16d6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6bc0 size=16 callers=0 calls=0
*/
void sub_16d6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6bc0ULL || rel >= 0x16d6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6bd0 size=16 callers=0 calls=0
*/
void sub_16d6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6bd0ULL || rel >= 0x16d6be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6be0 size=16 callers=0 calls=0
*/
void sub_16d6be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6be0ULL || rel >= 0x16d6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6bf0 size=16 callers=0 calls=0
*/
void sub_16d6bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6bf0ULL || rel >= 0x16d6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6c00 size=16 callers=0 calls=0
*/
void sub_16d6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6c00ULL || rel >= 0x16d6c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6c10 size=16 callers=0 calls=0
*/
void sub_16d6c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6c10ULL || rel >= 0x16d6c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6c20 size=16 callers=0 calls=0
*/
void sub_16d6c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6c20ULL || rel >= 0x16d6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6c30 size=16 callers=0 calls=0
*/
void sub_16d6c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6c30ULL || rel >= 0x16d6c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6c40 size=16 callers=0 calls=0
*/
void sub_16d6c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6c40ULL || rel >= 0x16d6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6c50 size=16 callers=0 calls=0
*/
void sub_16d6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6c50ULL || rel >= 0x16d6c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6c60 size=16 callers=0 calls=0
*/
void sub_16d6c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6c60ULL || rel >= 0x16d6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6c70 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_17162d0, sub_17315f0
*/
void sub_16d6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6c70ULL || rel >= 0x16d6cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6cc0 size=64 callers=0 calls=0
*/
void sub_16d6cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6cc0ULL || rel >= 0x16d6d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6d00 size=176 callers=0 calls=3
   calls: sub_165e060, sub_165e140, sub_16c6640
*/
void sub_16d6d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6d00ULL || rel >= 0x16d6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6db0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_16d2ba0, sub_17162d0
*/
void sub_16d6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6db0ULL || rel >= 0x16d6e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6e00 size=80 callers=0 calls=0
*/
void sub_16d6e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6e00ULL || rel >= 0x16d6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6e50 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_17104e0, sub_17162d0
*/
void sub_16d6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6e50ULL || rel >= 0x16d6ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6ea0 size=80 callers=0 calls=0
*/
void sub_16d6ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6ea0ULL || rel >= 0x16d6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6ef0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16c3050, sub_17162d0
*/
void sub_16d6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6ef0ULL || rel >= 0x16d6f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6f30 size=64 callers=0 calls=0
*/
void sub_16d6f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6f30ULL || rel >= 0x16d6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6f70 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16c2a60, sub_17162d0
*/
void sub_16d6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6f70ULL || rel >= 0x16d6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6fb0 size=64 callers=0 calls=0
*/
void sub_16d6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6fb0ULL || rel >= 0x16d6ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d6ff0 size=16 callers=0 calls=0
*/
void sub_16d6ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d6ff0ULL || rel >= 0x16d7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7000 size=16 callers=0 calls=0
*/
void sub_16d7000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7000ULL || rel >= 0x16d7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7010 size=16 callers=0 calls=0
*/
void sub_16d7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7010ULL || rel >= 0x16d7020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7020 size=16 callers=0 calls=0
*/
void sub_16d7020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7020ULL || rel >= 0x16d7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7030 size=16 callers=0 calls=0
*/
void sub_16d7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7030ULL || rel >= 0x16d7040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7040 size=16 callers=0 calls=0
*/
void sub_16d7040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7040ULL || rel >= 0x16d7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7050 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16d9000, sub_17162d0
*/
void sub_16d7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7050ULL || rel >= 0x16d7090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7090 size=64 callers=0 calls=0
*/
void sub_16d7090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7090ULL || rel >= 0x16d70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d70d0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16d8320, sub_17162d0
*/
void sub_16d70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d70d0ULL || rel >= 0x16d7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7110 size=64 callers=0 calls=0
*/
void sub_16d7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7110ULL || rel >= 0x16d7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7150 size=16 callers=0 calls=0
*/
void sub_16d7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7150ULL || rel >= 0x16d7160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7160 size=16 callers=0 calls=0
*/
void sub_16d7160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7160ULL || rel >= 0x16d7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7170 size=16 callers=0 calls=0
*/
void sub_16d7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7170ULL || rel >= 0x16d7180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7180 size=16 callers=0 calls=0
*/
void sub_16d7180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7180ULL || rel >= 0x16d7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7190 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_16b8830, sub_17162d0
*/
void sub_16d7190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7190ULL || rel >= 0x16d71e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d71e0 size=64 callers=0 calls=0
*/
void sub_16d71e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d71e0ULL || rel >= 0x16d7220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7220 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16f1680, sub_17162d0
*/
void sub_16d7220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7220ULL || rel >= 0x16d7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7260 size=64 callers=0 calls=0
*/
void sub_16d7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7260ULL || rel >= 0x16d72a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d72a0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16f61d0, sub_17162d0
*/
void sub_16d72a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d72a0ULL || rel >= 0x16d72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d72e0 size=64 callers=0 calls=0
*/
void sub_16d72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d72e0ULL || rel >= 0x16d7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7320 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_1711140, sub_17162d0
*/
void sub_16d7320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7320ULL || rel >= 0x16d7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7360 size=64 callers=0 calls=0
*/
void sub_16d7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7360ULL || rel >= 0x16d73a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d73a0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_170b9d0, sub_17162d0
*/
void sub_16d73a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d73a0ULL || rel >= 0x16d73e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d73e0 size=64 callers=0 calls=0
*/
void sub_16d73e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d73e0ULL || rel >= 0x16d7420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7420 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_1706080, sub_17162d0
*/
void sub_16d7420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7420ULL || rel >= 0x16d7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7460 size=64 callers=0 calls=0
*/
void sub_16d7460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7460ULL || rel >= 0x16d74a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d74a0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_1708b90, sub_17162d0
*/
void sub_16d74a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d74a0ULL || rel >= 0x16d74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d74e0 size=64 callers=0 calls=0
*/
void sub_16d74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d74e0ULL || rel >= 0x16d7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7520 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_1707b70, sub_17162d0
*/
void sub_16d7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7520ULL || rel >= 0x16d7560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7560 size=64 callers=0 calls=0
*/
void sub_16d7560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7560ULL || rel >= 0x16d75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d75a0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16f35a0, sub_17162d0
*/
void sub_16d75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d75a0ULL || rel >= 0x16d75e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d75e0 size=64 callers=0 calls=0
*/
void sub_16d75e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d75e0ULL || rel >= 0x16d7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7620 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_1705220, sub_17162d0
*/
void sub_16d7620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7620ULL || rel >= 0x16d7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7660 size=64 callers=0 calls=0
*/
void sub_16d7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7660ULL || rel >= 0x16d76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d76a0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_17075d0, sub_17162d0
*/
void sub_16d76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d76a0ULL || rel >= 0x16d76e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d76e0 size=64 callers=0 calls=0
*/
void sub_16d76e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d76e0ULL || rel >= 0x16d7720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7720 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_170e860, sub_17162d0
*/
void sub_16d7720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7720ULL || rel >= 0x16d7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7760 size=64 callers=0 calls=0
*/
void sub_16d7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7760ULL || rel >= 0x16d77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d77a0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16f6370, sub_17162d0
*/
void sub_16d77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d77a0ULL || rel >= 0x16d77e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d77e0 size=64 callers=0 calls=0
*/
void sub_16d77e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d77e0ULL || rel >= 0x16d7820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7820 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_16d7c80, sub_17162d0
*/
void sub_16d7820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7820ULL || rel >= 0x16d7870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7870 size=64 callers=0 calls=0
*/
void sub_16d7870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7870ULL || rel >= 0x16d78b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d78b0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16d9180, sub_17162d0
*/
void sub_16d78b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d78b0ULL || rel >= 0x16d78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d78f0 size=64 callers=0 calls=0
*/
void sub_16d78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d78f0ULL || rel >= 0x16d7930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7930 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_16ee440, sub_17162d0
*/
void sub_16d7930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7930ULL || rel >= 0x16d7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7970 size=64 callers=0 calls=0
*/
void sub_16d7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7970ULL || rel >= 0x16d79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d79b0 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_170fe40, sub_17162d0
*/
void sub_16d79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d79b0ULL || rel >= 0x16d79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d79f0 size=64 callers=0 calls=0
*/
void sub_16d79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d79f0ULL || rel >= 0x16d7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7a30 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_170beb0, sub_17162d0
*/
void sub_16d7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7a30ULL || rel >= 0x16d7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7a70 size=64 callers=0 calls=0
*/
void sub_16d7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7a70ULL || rel >= 0x16d7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7ab0 size=128 callers=0 calls=2
   calls: sub_1652bd0, sub_17162d0
*/
void sub_16d7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7ab0ULL || rel >= 0x16d7b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7b30 size=64 callers=0 calls=0
*/
void sub_16d7b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7b30ULL || rel >= 0x16d7b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7b70 size=64 callers=0 calls=3
   calls: sub_1652bd0, sub_170c430, sub_17162d0
*/
void sub_16d7b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7b70ULL || rel >= 0x16d7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7bb0 size=64 callers=0 calls=0
*/
void sub_16d7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7bb0ULL || rel >= 0x16d7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7bf0 size=80 callers=0 calls=3
   calls: sub_1652bd0, sub_16d8020, sub_17162d0
*/
void sub_16d7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7bf0ULL || rel >= 0x16d7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7c40 size=64 callers=0 calls=0
*/
void sub_16d7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7c40ULL || rel >= 0x16d7c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7c80 size=304 callers=1 calls=3
   calls: sub_1652bd0, sub_1713980, sub_17162d0
*/
void sub_16d7c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7c80ULL || rel >= 0x16d7db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7db0 size=160 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_16d7db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7db0ULL || rel >= 0x16d7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7e50 size=144 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_16d7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7e50ULL || rel >= 0x16d7ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7ee0 size=16 callers=0 calls=0
*/
void sub_16d7ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7ee0ULL || rel >= 0x16d7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7ef0 size=16 callers=0 calls=0
*/
void sub_16d7ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7ef0ULL || rel >= 0x16d7f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7f00 size=16 callers=0 calls=0
*/
void sub_16d7f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7f00ULL || rel >= 0x16d7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7f10 size=16 callers=0 calls=0
*/
void sub_16d7f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7f10ULL || rel >= 0x16d7f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7f20 size=16 callers=0 calls=0
*/
void sub_16d7f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7f20ULL || rel >= 0x16d7f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7f30 size=16 callers=0 calls=0
*/
void sub_16d7f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7f30ULL || rel >= 0x16d7f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7f40 size=128 callers=0 calls=0
*/
void sub_16d7f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7f40ULL || rel >= 0x16d7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7fc0 size=48 callers=0 calls=0
*/
void sub_16d7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7fc0ULL || rel >= 0x16d7ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d7ff0 size=48 callers=0 calls=1
   calls: sub_1713a20
*/
void sub_16d7ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d7ff0ULL || rel >= 0x16d8020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8020 size=288 callers=1 calls=3
   calls: sub_1652bd0, sub_16d8a40, sub_17162d0
*/
void sub_16d8020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8020ULL || rel >= 0x16d8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8140 size=160 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_16d8140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8140ULL || rel >= 0x16d81e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d81e0 size=144 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_16d81e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d81e0ULL || rel >= 0x16d8270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8270 size=16 callers=0 calls=0
*/
void sub_16d8270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8270ULL || rel >= 0x16d8280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8280 size=16 callers=0 calls=0
*/
void sub_16d8280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8280ULL || rel >= 0x16d8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8290 size=16 callers=0 calls=0
*/
void sub_16d8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8290ULL || rel >= 0x16d82a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d82a0 size=16 callers=0 calls=0
*/
void sub_16d82a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d82a0ULL || rel >= 0x16d82b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d82b0 size=16 callers=0 calls=0
*/
void sub_16d82b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d82b0ULL || rel >= 0x16d82c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d82c0 size=16 callers=0 calls=0
*/
void sub_16d82c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d82c0ULL || rel >= 0x16d82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d82d0 size=80 callers=0 calls=0
*/
void sub_16d82d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d82d0ULL || rel >= 0x16d8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8320 size=48 callers=1 calls=1
   calls: sub_169df40
*/
void sub_16d8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8320ULL || rel >= 0x16d8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8350 size=16 callers=0 calls=0
*/
void sub_16d8350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8350ULL || rel >= 0x16d8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8360 size=48 callers=0 calls=1
   calls: sub_169e170
*/
void sub_16d8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8360ULL || rel >= 0x16d8390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8390 size=144 callers=0 calls=0
   ref: NexJoinMeshJob::SetupLocalPlayerInfo
*/
void NexJoinMeshJob_SetupLocalPlayerInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8390ULL || rel >= 0x16d8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8420 size=16 callers=0 calls=0
*/
void sub_16d8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8420ULL || rel >= 0x16d8430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8430 size=32 callers=0 calls=0
   ref: NexJoinMeshJob::StartMonitoringServerAddressResolution
*/
void NexJoinMeshJob_StartMonitoringServerAddressResolution(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8430ULL || rel >= 0x16d8450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8450 size=32 callers=0 calls=0
   ref: NexJoinMeshJob::SetupLocalStation
*/
void NexJoinMeshJob_SetupLocalStation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8450ULL || rel >= 0x16d8470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8470 size=112 callers=0 calls=1
   calls: sub_16a8020
   ref: NexJoinMeshJob::CompleteProcess
   ref: NexJoinMeshJob::StartBandwidthCheck
*/
void NexJoinMeshJob_CompleteProcess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8470ULL || rel >= 0x16d84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d84e0 size=400 callers=0 calls=6
   calls: sub_16a7890, sub_16a7ea0, sub_1736bf0, sub_1736ce0, sub_1736d20, sub_174de60
   ref: NexJoinMeshJob::WaitBandwidthCheck
   ref: NexJoinMeshJob::CompleteProcess
*/
void NexJoinMeshJob_CompleteProcess_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d84e0ULL || rel >= 0x16d8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8670 size=336 callers=0 calls=7
   calls: sub_169f7e0, sub_169fce0, sub_16a6bd0, sub_16a7890, sub_16a7b10, sub_1736d20, sub_1736d40
   ref: NexJoinMeshJob::LeaveMeshWithHostMigration
   ref: NexJoinMeshJob::LeaveMesh
   ref: NexJoinMeshJob::WaitCheckHostConnection
   ref: NexJoinMeshJob::WaitCheckKickoutJob
*/
void NexJoinMeshJob_LeaveMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8670ULL || rel >= 0x16d87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d87c0 size=384 callers=0 calls=8
   calls: sub_16559c0, sub_169f7e0, sub_16a6bd0, sub_16a7a50, sub_16a7b10, sub_16a8300, sub_16a8310, sub_174de50
   ref: NexJoinMeshJob::CompleteProcess
   ref: NexJoinMeshJob::LeaveMeshWithHostMigration
   ref: NexJoinMeshJob::LeaveMesh
*/
void NexJoinMeshJob_LeaveMesh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d87c0ULL || rel >= 0x16d8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8940 size=256 callers=0 calls=5
   calls: sub_16559c0, sub_169f7e0, sub_16a6bd0, sub_16a7b10, sub_16a8310
   ref: NexJoinMeshJob::CompleteProcess
   ref: NexJoinMeshJob::LeaveMeshWithHostMigration
   ref: NexJoinMeshJob::LeaveMesh
*/
void NexJoinMeshJob_LeaveMesh_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8940ULL || rel >= 0x16d8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8a40 size=288 callers=1 calls=0
*/
void sub_16d8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8a40ULL || rel >= 0x16d8b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8b60 size=32 callers=0 calls=0
*/
void sub_16d8b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8b60ULL || rel >= 0x16d8b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8b80 size=16 callers=0 calls=0
*/
void sub_16d8b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8b80ULL || rel >= 0x16d8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8b90 size=32 callers=0 calls=0
*/
void sub_16d8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8b90ULL || rel >= 0x16d8bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8bb0 size=160 callers=0 calls=0
*/
void sub_16d8bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8bb0ULL || rel >= 0x16d8c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8c50 size=16 callers=0 calls=0
*/
void sub_16d8c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8c50ULL || rel >= 0x16d8c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8c60 size=16 callers=1 calls=0
*/
void sub_16d8c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8c60ULL || rel >= 0x16d8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8c70 size=16 callers=0 calls=0
*/
void sub_16d8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8c70ULL || rel >= 0x16d8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8c80 size=16 callers=1 calls=0
*/
void sub_16d8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8c80ULL || rel >= 0x16d8c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8c90 size=16 callers=0 calls=0
*/
void sub_16d8c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8c90ULL || rel >= 0x16d8ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8ca0 size=16 callers=1 calls=0
*/
void sub_16d8ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8ca0ULL || rel >= 0x16d8cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8cb0 size=16 callers=0 calls=0
*/
void sub_16d8cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8cb0ULL || rel >= 0x16d8cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8cc0 size=64 callers=1 calls=0
*/
void sub_16d8cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8cc0ULL || rel >= 0x16d8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8d00 size=16 callers=0 calls=0
*/
void sub_16d8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8d00ULL || rel >= 0x16d8d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8d10 size=64 callers=1 calls=0
*/
void sub_16d8d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8d10ULL || rel >= 0x16d8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8d50 size=16 callers=0 calls=0
*/
void sub_16d8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8d50ULL || rel >= 0x16d8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8d60 size=16 callers=1 calls=0
*/
void sub_16d8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8d60ULL || rel >= 0x16d8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8d70 size=128 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16d8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8d70ULL || rel >= 0x16d8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8df0 size=16 callers=6 calls=0
*/
void sub_16d8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8df0ULL || rel >= 0x16d8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8e00 size=16 callers=0 calls=0
*/
void sub_16d8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8e00ULL || rel >= 0x16d8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8e10 size=16 callers=1 calls=0
*/
void sub_16d8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8e10ULL || rel >= 0x16d8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8e20 size=16 callers=0 calls=0
*/
void sub_16d8e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8e20ULL || rel >= 0x16d8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8e30 size=16 callers=1 calls=0
*/
void sub_16d8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8e30ULL || rel >= 0x16d8e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8e40 size=16 callers=0 calls=0
*/
void sub_16d8e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8e40ULL || rel >= 0x16d8e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8e50 size=16 callers=1 calls=0
*/
void sub_16d8e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8e50ULL || rel >= 0x16d8e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8e60 size=16 callers=0 calls=0
*/
void sub_16d8e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8e60ULL || rel >= 0x16d8e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8e70 size=16 callers=1 calls=0
*/
void sub_16d8e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8e70ULL || rel >= 0x16d8e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8e80 size=16 callers=0 calls=0
*/
void sub_16d8e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8e80ULL || rel >= 0x16d8e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8e90 size=48 callers=1 calls=1
   calls: sub_165bea0
*/
void sub_16d8e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8e90ULL || rel >= 0x16d8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8ec0 size=144 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16d8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8ec0ULL || rel >= 0x16d8f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8f50 size=112 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16d8f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8f50ULL || rel >= 0x16d8fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8fc0 size=48 callers=1 calls=0
*/
void sub_16d8fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8fc0ULL || rel >= 0x16d8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d8ff0 size=16 callers=0 calls=0
*/
void sub_16d8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d8ff0ULL || rel >= 0x16d9000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d9000 size=48 callers=1 calls=1
   calls: sub_169bfc0
*/
void sub_16d9000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d9000ULL || rel >= 0x16d9030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d9030 size=16 callers=0 calls=0
*/
void sub_16d9030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d9030ULL || rel >= 0x16d9040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d9040 size=48 callers=0 calls=1
   calls: sub_169c000
*/
void sub_16d9040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d9040ULL || rel >= 0x16d9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d9070 size=192 callers=0 calls=1
   calls: sub_165e060
   ref: NexCreateMeshJob::SetupLocalPlayerInfo
*/
void NexCreateMeshJob_SetupLocalPlayerInfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d9070ULL || rel >= 0x16d9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d9130 size=16 callers=0 calls=0
*/
void sub_16d9130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d9130ULL || rel >= 0x16d9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d9140 size=32 callers=0 calls=0
   ref: NexCreateMeshJob::StartMonitoringServerAddressResolution
*/
void NexCreateMeshJob_StartMonitoringServerAddressResolution(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d9140ULL || rel >= 0x16d9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d9160 size=32 callers=0 calls=0
   ref: NexCreateMeshJob::SetupLocalStation
*/
void NexCreateMeshJob_SetupLocalStation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d9160ULL || rel >= 0x16d9180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d9180 size=1760 callers=1 calls=15
   calls: sub_15a5390, sub_15a71f0, sub_15a95d0, sub_15ab4f0, sub_15ab920, sub_15abbf0, sub_15b7a70, sub_15bca80, sub_1618120, sub_1633be0, sub_1652bd0, sub_1713980
   ... +3 more
*/
void sub_16d9180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d9180ULL || rel >= 0x16d9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d9860 size=1648 callers=1 calls=5
   calls: InstanceTable_363, sub_15b9390, sub_1713a20, sub_1716390, sub_17163e0
*/
void sub_16d9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d9860ULL || rel >= 0x16d9ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d9ed0 size=48 callers=0 calls=1
   calls: sub_16d9860
*/
void sub_16d9ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d9ed0ULL || rel >= 0x16d9f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d9f00 size=912 callers=2 calls=4
   calls: sub_159d190, sub_165e060, sub_16ee550, sub_16ee570
*/
void sub_16d9f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d9f00ULL || rel >= 0x16da290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016da290 size=1216 callers=0 calls=13
   calls: CallContext, InstanceTable_206, sub_10ff360, sub_15a5450, sub_15a7310, sub_15a95d0, sub_15ab4f0, sub_15ab920, sub_15abbf0, sub_15b9390, sub_1655220, sub_165e060
   ... +1 more
*/
void sub_16da290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16da290ULL || rel >= 0x16da750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016da750 size=336 callers=2 calls=1
   calls: sub_165e060
*/
void sub_16da750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16da750ULL || rel >= 0x16da8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016da8a0 size=16 callers=0 calls=0
*/
void sub_16da8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16da8a0ULL || rel >= 0x16da8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016da8b0 size=16 callers=0 calls=0
*/
void sub_16da8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16da8b0ULL || rel >= 0x16da8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016da8c0 size=176 callers=0 calls=3
   calls: sub_165e060, sub_1713ac0, sub_1713e60
*/
void sub_16da8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16da8c0ULL || rel >= 0x16da970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016da970 size=16 callers=0 calls=0
*/
void sub_16da970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16da970ULL || rel >= 0x16da980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016da980 size=16 callers=3 calls=0
*/
void sub_16da980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16da980ULL || rel >= 0x16da990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016da990 size=1248 callers=0 calls=11
   calls: sub_159d3a0, sub_15a9930, sub_15b9340, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_1655190, sub_165e060, sub_16c6860, sub_172dea0, sub_172dec0
   ref: %016llx
*/
void f_016llx_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16da990ULL || rel >= 0x16dae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dae70 size=3072 callers=0 calls=16
   calls: CallContext, sub_10ff360, sub_15a5450, sub_15a95d0, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16c6860, sub_16dbaf0
   ... +4 more
*/
void sub_16dae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dae70ULL || rel >= 0x16dba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dba70 size=128 callers=80 calls=1
   calls: sub_15b9390
*/
void sub_16dba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dba70ULL || rel >= 0x16dbaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dbaf0 size=832 callers=9 calls=27
   calls: sub_15a5890, sub_15b38c0, sub_15b7a80, sub_15b80a0, sub_15b80b0, sub_15b80c0, sub_15b80d0, sub_15b80e0, sub_15b80f0, sub_15b8110, sub_15b9390, sub_16ee180
   ... +15 more
*/
void sub_16dbaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dbaf0ULL || rel >= 0x16dbe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dbe30 size=288 callers=2 calls=7
   calls: sub_15bc1e0, sub_15bc310, sub_15bc650, sub_15beca0, sub_15becc0, sub_15bee80, sub_15bf170
*/
void sub_16dbe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dbe30ULL || rel >= 0x16dbf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dbf50 size=432 callers=1 calls=7
   calls: sub_159d3a0, sub_15a9930, sub_15b9340, sub_1655190, sub_165e060, sub_172dea0, sub_172dec0
*/
void sub_16dbf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dbf50ULL || rel >= 0x16dc100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dc100 size=2912 callers=1 calls=15
   calls: CallContext, sub_10ff360, sub_15a5450, sub_15a95d0, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16c6860, sub_16dbe30
   ... +3 more
*/
void sub_16dc100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dc100ULL || rel >= 0x16dcc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dcc60 size=256 callers=0 calls=4
   calls: sub_159d160, sub_1655190, sub_165c6b0, sub_165e060
*/
void sub_16dcc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dcc60ULL || rel >= 0x16dcd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dcd60 size=1520 callers=0 calls=11
   calls: CallContext, InstanceTable_206, sub_15a5450, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16c6860, sub_16dbaf0, sub_1713a40
*/
void sub_16dcd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dcd60ULL || rel >= 0x16dd350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dd350 size=256 callers=2 calls=4
   calls: sub_159f0d0, sub_1655190, sub_165c6b0, sub_165e060
*/
void sub_16dd350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dd350ULL || rel >= 0x16dd450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dd450 size=1232 callers=2 calls=11
   calls: CallContext, InstanceTable_206, sub_15a5450, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16c6860, sub_16dbaf0, sub_1713a40
*/
void sub_16dd450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dd450ULL || rel >= 0x16dd920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dd920 size=240 callers=0 calls=3
   calls: sub_159f750, sub_1655190, sub_165e060
*/
void sub_16dd920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dd920ULL || rel >= 0x16dda10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dda10 size=1632 callers=0 calls=9
   calls: CallContext, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16dbaf0, sub_1713e00
*/
void sub_16dda10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dda10ULL || rel >= 0x16de070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016de070 size=1232 callers=0 calls=11
   calls: sub_159d5a0, sub_15a9930, sub_15b9340, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_1655190, sub_165e060, sub_16c6860, sub_172dea0, sub_172dec0
   ref: %016llx
*/
void f_016llx_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16de070ULL || rel >= 0x16de540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016de540 size=1952 callers=0 calls=15
   calls: CallContext, sub_10ff360, sub_15a5450, sub_15ab4f0, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16c6860, sub_16dbaf0
   ... +3 more
*/
void sub_16de540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16de540ULL || rel >= 0x16dece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dece0 size=416 callers=1 calls=7
   calls: sub_159d5a0, sub_15a9930, sub_15b9340, sub_1655190, sub_165e060, sub_172dea0, sub_172dec0
*/
void sub_16dece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dece0ULL || rel >= 0x16dee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dee80 size=1968 callers=1 calls=14
   calls: CallContext, sub_10ff360, sub_15a5450, sub_15ab4f0, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16c6860, sub_16ee3a0
   ... +2 more
*/
void sub_16dee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dee80ULL || rel >= 0x16df630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016df630 size=208 callers=0 calls=3
   calls: sub_159dbb0, sub_1655190, sub_165e060
*/
void sub_16df630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16df630ULL || rel >= 0x16df700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016df700 size=1168 callers=0 calls=6
   calls: CallContext, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16df700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16df700ULL || rel >= 0x16dfb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dfb90 size=208 callers=0 calls=3
   calls: sub_159d9a0, sub_1655190, sub_165e060
*/
void sub_16dfb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dfb90ULL || rel >= 0x16dfc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016dfc60 size=1168 callers=0 calls=6
   calls: CallContext, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16dfc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16dfc60ULL || rel >= 0x16e00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e00f0 size=192 callers=1 calls=3
   calls: sub_15a0980, sub_1655190, sub_165e060
*/
void sub_16e00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e00f0ULL || rel >= 0x16e01b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e01b0 size=1168 callers=1 calls=6
   calls: CallContext, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16e01b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e01b0ULL || rel >= 0x16e0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e0640 size=192 callers=1 calls=3
   calls: sub_15a0ba0, sub_1655190, sub_165e060
*/
void sub_16e0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e0640ULL || rel >= 0x16e0700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e0700 size=1168 callers=1 calls=6
   calls: CallContext, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16e0700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e0700ULL || rel >= 0x16e0b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e0b90 size=208 callers=0 calls=3
   calls: sub_15b2710, sub_1655190, sub_165e060
*/
void sub_16e0b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e0b90ULL || rel >= 0x16e0c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e0c60 size=1424 callers=0 calls=8
   calls: CallContext, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16c5630
*/
void sub_16e0c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e0c60ULL || rel >= 0x16e11f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e11f0 size=1248 callers=0 calls=11
   calls: sub_159d7a0, sub_15a9930, sub_15b9340, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_1655190, sub_165e060, sub_16c6860, sub_172dea0, sub_172dec0
   ref: %016llx
*/
void f_016llx_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e11f0ULL || rel >= 0x16e16d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e16d0 size=2528 callers=0 calls=14
   calls: CallContext, sub_15a5450, sub_15ab920, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16c6860, sub_16dbaf0, sub_16ee3a0
   ... +2 more
*/
void sub_16e16d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e16d0ULL || rel >= 0x16e20b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e20b0 size=448 callers=1 calls=7
   calls: sub_159d7a0, sub_15a9930, sub_15b9340, sub_1655190, sub_165e060, sub_172dea0, sub_172dec0
*/
void sub_16e20b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e20b0ULL || rel >= 0x16e2270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e2270 size=2512 callers=1 calls=13
   calls: CallContext, sub_15a5450, sub_15ab920, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16c6860, sub_16ee3a0, sub_16ef880
   ... +1 more
*/
void sub_16e2270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e2270ULL || rel >= 0x16e2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e2c40 size=544 callers=0 calls=8
   calls: sub_15b2140, sub_15bc1e0, sub_15bc310, sub_1655190, sub_165c6b0, sub_165e060, sub_165e140, sub_16ef5f0
*/
void sub_16e2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e2c40ULL || rel >= 0x16e2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e2e60 size=1376 callers=0 calls=10
   calls: CallContext, InstanceTable_206, sub_15a5450, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16ef5f0, sub_1713a40
*/
void sub_16e2e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e2e60ULL || rel >= 0x16e33c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e33c0 size=608 callers=9 calls=7
   calls: sub_15b2140, sub_15bc1e0, sub_15bc310, sub_1655190, sub_165c6b0, sub_165e060, sub_165e140
*/
void sub_16e33c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e33c0ULL || rel >= 0x16e3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e3620 size=1360 callers=3 calls=7
   calls: CallContext, InstanceTable_206, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16e3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e3620ULL || rel >= 0x16e3b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e3b70 size=448 callers=0 calls=6
   calls: sub_15b1ee0, sub_1655190, sub_165c6b0, sub_165e060, sub_165e140, sub_16ef5f0
*/
void sub_16e3b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e3b70ULL || rel >= 0x16e3d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e3d30 size=1280 callers=0 calls=10
   calls: CallContext, InstanceTable_206, sub_15a5450, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16ef5f0, sub_1713a40
*/
void sub_16e3d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e3d30ULL || rel >= 0x16e4230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e4230 size=208 callers=1 calls=3
   calls: sub_159ddc0, sub_1655190, sub_165e060
*/
void sub_16e4230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e4230ULL || rel >= 0x16e4300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e4300 size=1168 callers=1 calls=6
   calls: CallContext, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16e4300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e4300ULL || rel >= 0x16e4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e4790 size=208 callers=1 calls=3
   calls: sub_159e060, sub_1655190, sub_165e060
*/
void sub_16e4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e4790ULL || rel >= 0x16e4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e4860 size=1168 callers=1 calls=6
   calls: CallContext, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16e4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e4860ULL || rel >= 0x16e4cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e4cf0 size=352 callers=1 calls=5
   calls: sub_15b21b0, sub_15b9340, sub_1655190, sub_165c6b0, sub_165e060
*/
void sub_16e4cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e4cf0ULL || rel >= 0x16e4e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e4e50 size=1648 callers=1 calls=8
   calls: CallContext, InstanceTable_206, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16e4e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e4e50ULL || rel >= 0x16e54c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e54c0 size=720 callers=1 calls=5
   calls: sub_159ea40, sub_15b9340, sub_15b9390, sub_1655190, sub_165e060
*/
void sub_16e54c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e54c0ULL || rel >= 0x16e5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e5790 size=1296 callers=1 calls=6
   calls: CallContext, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16e5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e5790ULL || rel >= 0x16e5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e5ca0 size=288 callers=0 calls=3
   calls: sub_159e7e0, sub_165c600, sub_165e060
*/
void sub_16e5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e5ca0ULL || rel >= 0x16e5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e5dc0 size=128 callers=0 calls=2
   calls: sub_165c600, sub_165c730
*/
void sub_16e5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e5dc0ULL || rel >= 0x16e5e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e5e40 size=4064 callers=2 calls=73
   calls: sub_10ff360, sub_15a4e30, sub_15a4f30, sub_15a5450, sub_15a5800, sub_15a5840, sub_15a5850, sub_15a5860, sub_15a5880, sub_15a58a0, sub_15a58c0, sub_15ac3e0
   ... +61 more
*/
void sub_16e5e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e5e40ULL || rel >= 0x16e6e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e6e20 size=32 callers=1 calls=0
*/
void sub_16e6e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e6e20ULL || rel >= 0x16e6e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e6e40 size=208 callers=2 calls=6
   calls: sub_15a5940, sub_15ab4f0, sub_165e060, sub_16c5170, sub_16c5180, sub_16e5e40
*/
void sub_16e6e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e6e40ULL || rel >= 0x16e6f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e6f10 size=544 callers=2 calls=13
   calls: sub_15a37e0, sub_15a5940, sub_15a95d0, sub_15a9a70, sub_165e060, sub_16c4dd0, sub_16c5170, sub_16c5180, sub_16d34a0, sub_16d34b0, sub_16d34c0, sub_16e5e40
   ... +1 more
*/
void sub_16e6f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e6f10ULL || rel >= 0x16e7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e7130 size=464 callers=2 calls=8
   calls: sub_15a6650, sub_15a93d0, sub_15a9c00, sub_15b9340, sub_15b9390, sub_165e060, sub_1714bb0, sub_17159a0
*/
void sub_16e7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e7130ULL || rel >= 0x16e7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e7300 size=672 callers=2 calls=16
   calls: sub_15a37e0, sub_15ab920, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_15bc340, sub_165be70, sub_165c180, sub_165e060, sub_16d3800, sub_16d3810, sub_16d3820
   ... +4 more
*/
void sub_16e7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e7300ULL || rel >= 0x16e75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e75a0 size=3088 callers=1 calls=55
   calls: sub_10ff360, sub_15a4e30, sub_15a4f30, sub_15a5920, sub_15aa0d0, sub_15abbf0, sub_15abec0, sub_15ac3e0, sub_15b7a90, sub_15b7b20, sub_15b9390, sub_15bab00
   ... +43 more
*/
void sub_16e75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e75a0ULL || rel >= 0x16e81b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e81b0 size=1424 callers=1 calls=28
   calls: sub_15a7310, sub_15a73b0, sub_15a73d0, sub_15aa0d0, sub_15b38d0, sub_15b7a80, sub_15b7a90, sub_15b7b20, sub_15b8100, sub_15b9340, sub_15b9390, sub_15bab00
   ... +16 more
*/
void sub_16e81b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e81b0ULL || rel >= 0x16e8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e8740 size=336 callers=1 calls=11
   calls: sub_15a7310, sub_15bab00, sub_15bc1e0, sub_15bc310, sub_15bc340, sub_165be70, sub_165c080, sub_165c180, sub_165e060, sub_16f1420, sub_17360c0
*/
void sub_16e8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e8740ULL || rel >= 0x16e8890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e8890 size=1312 callers=1 calls=30
   calls: sub_15a7310, sub_15a73b0, sub_15a73d0, sub_15aa0d0, sub_15b38d0, sub_15b7a80, sub_15b7a90, sub_15b7b20, sub_15b8100, sub_15b9340, sub_15b9390, sub_15bab00
   ... +18 more
*/
void sub_16e8890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e8890ULL || rel >= 0x16e8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e8db0 size=224 callers=1 calls=3
   calls: sub_159e850, sub_1655190, sub_165e060
*/
void sub_16e8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e8db0ULL || rel >= 0x16e8e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e8e90 size=1232 callers=1 calls=8
   calls: CallContext, sub_10ff360, sub_15abbf0, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16e8e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e8e90ULL || rel >= 0x16e9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e9360 size=336 callers=1 calls=5
   calls: sub_159f950, sub_15bc1e0, sub_15bc310, sub_1655190, sub_165e060
*/
void sub_16e9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e9360ULL || rel >= 0x16e94b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e94b0 size=1264 callers=1 calls=7
   calls: CallContext, sub_15a7310, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16e94b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e94b0ULL || rel >= 0x16e99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e99a0 size=336 callers=1 calls=5
   calls: sub_159fb90, sub_15bc1e0, sub_15bc310, sub_1655190, sub_165e060
*/
void sub_16e99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e99a0ULL || rel >= 0x16e9af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016e9af0 size=1504 callers=1 calls=7
   calls: CallContext, sub_15a7310, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16e9af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16e9af0ULL || rel >= 0x16ea0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ea0d0 size=208 callers=1 calls=3
   calls: sub_15a0790, sub_1655190, sub_165e060
*/
void sub_16ea0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ea0d0ULL || rel >= 0x16ea1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ea1a0 size=1232 callers=1 calls=7
   calls: CallContext, sub_15a7310, sub_15b8cf0, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10
*/
void sub_16ea1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ea1a0ULL || rel >= 0x16ea670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ea670 size=1264 callers=4 calls=25
   calls: sub_15a73c0, sub_15a73f0, sub_15b80a0, sub_15b80b0, sub_15b80c0, sub_15b80d0, sub_15b80e0, sub_15b80f0, sub_15b8110, sub_15b9340, sub_15b9390, sub_165bc90
   ... +13 more
*/
void sub_16ea670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ea670ULL || rel >= 0x16eab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eab60 size=112 callers=1 calls=1
   calls: sub_15b9340
*/
void sub_16eab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eab60ULL || rel >= 0x16eabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eabd0 size=80 callers=0 calls=3
   calls: sub_15a0db0, sub_16c7f40, sub_16c8010
*/
void sub_16eabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eabd0ULL || rel >= 0x16eac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eac20 size=80 callers=0 calls=3
   calls: sub_15a0e20, sub_16c7f40, sub_16c8010
*/
void sub_16eac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eac20ULL || rel >= 0x16eac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eac70 size=224 callers=1 calls=3
   calls: sub_159fe10, sub_1655190, sub_165e060
*/
void sub_16eac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eac70ULL || rel >= 0x16ead50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ead50 size=1552 callers=1 calls=8
   calls: CallContext, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16ea670
*/
void sub_16ead50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ead50ULL || rel >= 0x16eb360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eb360 size=240 callers=1 calls=3
   calls: sub_15a02b0, sub_1655190, sub_165e060
*/
void sub_16eb360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eb360ULL || rel >= 0x16eb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eb450 size=1408 callers=1 calls=8
   calls: CallContext, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16ea670
*/
void sub_16eb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eb450ULL || rel >= 0x16eb9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eb9d0 size=240 callers=1 calls=3
   calls: sub_15a0040, sub_1655190, sub_165e060
*/
void sub_16eb9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eb9d0ULL || rel >= 0x16ebac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ebac0 size=1408 callers=1 calls=8
   calls: CallContext, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16ea670
*/
void sub_16ebac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ebac0ULL || rel >= 0x16ec040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ec040 size=240 callers=1 calls=3
   calls: sub_15a0520, sub_1655190, sub_165e060
*/
void sub_16ec040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ec040ULL || rel >= 0x16ec130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ec130 size=1408 callers=1 calls=8
   calls: CallContext, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16ea670
*/
void sub_16ec130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ec130ULL || rel >= 0x16ec6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ec6b0 size=352 callers=1 calls=6
   calls: sub_159f2f0, sub_1655190, sub_165e060, sub_17159c0, sub_1733df0, sub_1733e00
*/
void sub_16ec6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ec6b0ULL || rel >= 0x16ec810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ec810 size=1456 callers=1 calls=9
   calls: CallContext, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16dbaf0, sub_1713e00
*/
void sub_16ec810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ec810ULL || rel >= 0x16ecdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ecdc0 size=800 callers=1 calls=12
   calls: sub_159f550, sub_15a37e0, sub_15a9930, sub_15b9340, sub_15b9390, sub_1655190, sub_165e060, sub_17159d0, sub_17159e0, sub_17159f0, sub_1715a00, sub_1715a10
*/
void sub_16ecdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ecdc0ULL || rel >= 0x16ed0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ed0e0 size=1648 callers=1 calls=9
   calls: CallContext, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16dbaf0, sub_1713e00
*/
void sub_16ed0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ed0e0ULL || rel >= 0x16ed750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ed750 size=512 callers=1 calls=8
   calls: sub_159eea0, sub_15b9340, sub_15b9390, sub_1655190, sub_165c6b0, sub_165e060, sub_1715a20, sub_1715a30
*/
void sub_16ed750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ed750ULL || rel >= 0x16ed950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ed950 size=1584 callers=1 calls=10
   calls: CallContext, InstanceTable_206, sub_15b8cf0, sub_15b9390, sub_16551b0, sub_1655220, sub_165e060, sub_165fb10, sub_16dbaf0, sub_1713e00
*/
void sub_16ed950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ed950ULL || rel >= 0x16edf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016edf80 size=224 callers=0 calls=4
   calls: CallContext, InstanceTable_206, sub_15b24c0, sub_165e060
*/
void sub_16edf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16edf80ULL || rel >= 0x16ee060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee060 size=32 callers=2 calls=0
*/
void sub_16ee060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee060ULL || rel >= 0x16ee080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee080 size=16 callers=0 calls=0
*/
void sub_16ee080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee080ULL || rel >= 0x16ee090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee090 size=16 callers=2 calls=0
*/
void sub_16ee090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee090ULL || rel >= 0x16ee0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee0a0 size=16 callers=2 calls=0
*/
void sub_16ee0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee0a0ULL || rel >= 0x16ee0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee0b0 size=16 callers=2 calls=0
*/
void sub_16ee0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee0b0ULL || rel >= 0x16ee0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee0c0 size=16 callers=1 calls=0
*/
void sub_16ee0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee0c0ULL || rel >= 0x16ee0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee0d0 size=176 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16ee0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee0d0ULL || rel >= 0x16ee180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee180 size=304 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_16ee180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee180ULL || rel >= 0x16ee2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee2b0 size=240 callers=4 calls=3
   calls: sub_16580b0, sub_16580c0, sub_16580f0
*/
void sub_16ee2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee2b0ULL || rel >= 0x16ee3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee3a0 size=160 callers=6 calls=2
   calls: sub_16580f0, sub_1658120
*/
void sub_16ee3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee3a0ULL || rel >= 0x16ee440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee440 size=96 callers=1 calls=4
   calls: sub_1652bd0, sub_16f00e0, sub_17162d0, sub_17273b0
*/
void sub_16ee440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee440ULL || rel >= 0x16ee4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee4a0 size=80 callers=0 calls=1
   calls: sub_1716390
*/
void sub_16ee4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee4a0ULL || rel >= 0x16ee4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee4f0 size=96 callers=0 calls=1
   calls: sub_1716390
*/
void sub_16ee4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee4f0ULL || rel >= 0x16ee550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee550 size=32 callers=45 calls=0
*/
void sub_16ee550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee550ULL || rel >= 0x16ee570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee570 size=16 callers=1 calls=0
*/
void sub_16ee570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee570ULL || rel >= 0x16ee580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ee580 size=1920 callers=0 calls=10
   calls: sub_165bea0, sub_165c5e0, sub_165e060, sub_165e140, sub_16a6090, sub_16a80e0, sub_16c8d00, sub_16d9f00, sub_17276d0, sub_6af650
*/
void sub_16ee580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ee580ULL || rel >= 0x16eed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eed00 size=64 callers=0 calls=0
*/
void sub_16eed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eed00ULL || rel >= 0x16eed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eed40 size=128 callers=3 calls=5
   calls: InstanceTable_458, InstanceTable_460, sub_165e140, sub_16c6ac0, sub_16c7d20
*/
void sub_16eed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eed40ULL || rel >= 0x16eedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eedc0 size=192 callers=3 calls=6
   calls: sub_165e140, sub_16c6ac0, sub_16c6c10, sub_16c6c40, sub_16c7d20, sub_16c7e70
*/
void sub_16eedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eedc0ULL || rel >= 0x16eee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eee80 size=16 callers=2 calls=0
*/
void sub_16eee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eee80ULL || rel >= 0x16eee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eee90 size=320 callers=0 calls=1
   calls: sub_1727510
*/
void sub_16eee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eee90ULL || rel >= 0x16eefd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eefd0 size=352 callers=4 calls=1
   calls: sub_165e060
*/
void sub_16eefd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eefd0ULL || rel >= 0x16ef130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef130 size=224 callers=0 calls=2
   calls: sub_165e060, sub_16eefd0
*/
void sub_16ef130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef130ULL || rel >= 0x16ef210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef210 size=32 callers=0 calls=0
*/
void sub_16ef210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef210ULL || rel >= 0x16ef230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef230 size=48 callers=0 calls=2
   calls: sub_16c7d20, sub_1727660
*/
void sub_16ef230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef230ULL || rel >= 0x16ef260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef260 size=368 callers=0 calls=9
   calls: sub_16c6ac0, sub_16c7d20, sub_16c8d10, sub_16da750, sub_16f0450, sub_1727660, sub_1727820, sub_172be20, sub_6af650
*/
void sub_16ef260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef260ULL || rel >= 0x16ef3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef3d0 size=112 callers=3 calls=2
   calls: sub_16f0450, sub_172be20
*/
void sub_16ef3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef3d0ULL || rel >= 0x16ef440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef440 size=336 callers=4 calls=3
   calls: sub_16580b0, sub_16580f0, sub_165e060
*/
void sub_16ef440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef440ULL || rel >= 0x16ef590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef590 size=96 callers=11 calls=0
*/
void sub_16ef590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef590ULL || rel >= 0x16ef5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef5f0 size=16 callers=8 calls=0
*/
void sub_16ef5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef5f0ULL || rel >= 0x16ef600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef600 size=560 callers=2 calls=2
   calls: sub_16580b0, sub_16580f0
*/
void sub_16ef600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef600ULL || rel >= 0x16ef830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef830 size=48 callers=35 calls=0
*/
void sub_16ef830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef830ULL || rel >= 0x16ef860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef860 size=32 callers=48 calls=0
*/
void sub_16ef860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef860ULL || rel >= 0x16ef880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef880 size=96 callers=8 calls=0
*/
void sub_16ef880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef880ULL || rel >= 0x16ef8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ef8e0 size=384 callers=0 calls=1
   calls: sub_172c170
*/
void sub_16ef8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ef8e0ULL || rel >= 0x16efa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016efa60 size=400 callers=0 calls=1
   calls: sub_172c170
*/
void sub_16efa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16efa60ULL || rel >= 0x16efbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016efbf0 size=224 callers=1 calls=0
*/
void sub_16efbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16efbf0ULL || rel >= 0x16efcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016efcd0 size=192 callers=9 calls=0
*/
void sub_16efcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16efcd0ULL || rel >= 0x16efd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016efd90 size=224 callers=9 calls=0
*/
void sub_16efd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16efd90ULL || rel >= 0x16efe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016efe70 size=208 callers=0 calls=0
*/
void sub_16efe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16efe70ULL || rel >= 0x16eff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016eff40 size=192 callers=0 calls=0
*/
void sub_16eff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16eff40ULL || rel >= 0x16f0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f0000 size=208 callers=0 calls=2
   calls: sub_16a8390, sub_16c18d0
*/
void sub_16f0000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f0000ULL || rel >= 0x16f00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f00d0 size=16 callers=0 calls=0
*/
void sub_16f00d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f00d0ULL || rel >= 0x16f00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f00e0 size=400 callers=1 calls=3
   calls: sub_16580b0, sub_16580f0, sub_16ee2b0
*/
void sub_16f00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f00e0ULL || rel >= 0x16f0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f0270 size=432 callers=1 calls=4
   calls: sub_16580b0, sub_16580f0, sub_16f0450, sub_172be20
*/
void sub_16f0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f0270ULL || rel >= 0x16f0420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f0420 size=48 callers=0 calls=1
   calls: sub_16f0270
*/
void sub_16f0420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f0420ULL || rel >= 0x16f0450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f0450 size=336 callers=3 calls=2
   calls: sub_16580b0, sub_16580f0
*/
void sub_16f0450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f0450ULL || rel >= 0x16f05a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f05a0 size=720 callers=2 calls=7
   calls: sub_16580c0, sub_16580f0, sub_1658120, sub_16581f0, sub_165c600, sub_165c6b0, sub_16ef440
*/
void sub_16f05a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f05a0ULL || rel >= 0x16f0870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f0870 size=768 callers=2 calls=7
   calls: sub_16580c0, sub_16580f0, sub_1658120, sub_16581f0, sub_165c600, sub_165c6b0, sub_16ef440
*/
void sub_16f0870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f0870ULL || rel >= 0x16f0b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f0b70 size=2224 callers=0 calls=24
   calls: sub_15bca70, sub_16559c0, sub_165bc90, sub_165c080, sub_165e140, sub_16c6860, sub_16c8540, sub_16c85d0, sub_16ee0b0, sub_16ee0c0, sub_16ef440, sub_16ef600
   ... +12 more
*/
void sub_16f0b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f0b70ULL || rel >= 0x16f1420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f1420 size=16 callers=4 calls=0
*/
void sub_16f1420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f1420ULL || rel >= 0x16f1430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f1430 size=16 callers=1 calls=0
*/
void sub_16f1430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f1430ULL || rel >= 0x16f1440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f1440 size=16 callers=1 calls=0
*/
void sub_16f1440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f1440ULL || rel >= 0x16f1450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f1450 size=32 callers=6 calls=0
*/
void sub_16f1450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f1450ULL || rel >= 0x16f1470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f1470 size=48 callers=11 calls=0
*/
void sub_16f1470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f1470ULL || rel >= 0x16f14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f14a0 size=16 callers=3 calls=0
*/
void sub_16f14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f14a0ULL || rel >= 0x16f14b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f14b0 size=16 callers=4 calls=0
*/
void sub_16f14b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f14b0ULL || rel >= 0x16f14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f14c0 size=448 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_16f14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f14c0ULL || rel >= 0x16f1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f1680 size=80 callers=1 calls=3
   calls: sub_1655080, sub_169af30, sub_1749820
*/
void sub_16f1680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f1680ULL || rel >= 0x16f16d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f16d0 size=96 callers=0 calls=4
   calls: sub_1655110, sub_1655170, sub_1655290, sub_17499e0
*/
void sub_16f16d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f16d0ULL || rel >= 0x16f1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f1730 size=112 callers=0 calls=5
   calls: sub_1655110, sub_1655170, sub_1655290, sub_169af80, sub_17499e0
*/
void sub_16f1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f1730ULL || rel >= 0x16f17a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f17a0 size=960 callers=0 calls=19
   calls: ConnectStationJob_SendConnectionRequest_2, sub_1652d30, sub_1653930, sub_165e060, sub_165e140, sub_165fd50, sub_171e0e0, sub_1749a80, sub_1749cf0, sub_1749dc0, sub_1749de0, sub_1749e20
   ... +7 more
   ref: NexConnectStationJob::TestCurrentAddress
*/
void NexConnectStationJob_TestCurrentAddress(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f17a0ULL || rel >= 0x16f1b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f1b60 size=240 callers=0 calls=5
   calls: sub_165c600, sub_165c6b0, sub_16c8c80, sub_1749e00, sub_1749e10
   ref: NexConnectStationJob::PrepareNatTraversal
   ref: NexConnectStationJob::ResolveCurrentAddress
*/
void NexConnectStationJob_PrepareNatTraversal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f1b60ULL || rel >= 0x16f1c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f1c50 size=608 callers=0 calls=10
   calls: sub_1655220, sub_165c600, sub_165c6b0, sub_165e060, sub_16a8340, sub_16c8540, sub_16c8b60, sub_16c8ca0, sub_1749dc0, sub_174de60
   ref: NexConnectStationJob::WaitForNatTraversalCompleted
   ref: ConnectStationJob::ConnectionFailed
   ref: NexConnectStationJob::WaitForNatTraversalStarted
   ref: NexConnectStationJob::ResolveCurrentAddress
*/
void ConnectStationJob_ConnectionFailed_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f1c50ULL || rel >= 0x16f1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f1eb0 size=240 callers=0 calls=5
   calls: sub_1652d30, sub_165fd50, sub_16c8c70, sub_1749cf0, sub_174de60
   ref: NexConnectStationJob::TryCurrentAddress
*/
void NexConnectStationJob_TryCurrentAddress(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f1eb0ULL || rel >= 0x16f1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f1fa0 size=1408 callers=0 calls=19
   calls: sub_1655110, sub_1655220, sub_1655290, sub_165c600, sub_165c6b0, sub_165e060, sub_165e140, sub_16c4110, sub_16c6880, sub_16c7e80, sub_16c84e0, sub_16c8540
   ... +7 more
   ref: NexConnectStationJob::PrepareNatTraversalByRelay
   ref: ConnectStationJob::ConnectionFailed
   ref: NexConnectStationJob::PrepareNatTraversal
   ref: NexConnectStationJob::ResolveCurrentAddress
*/
void ConnectStationJob_ConnectionFailed_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f1fa0ULL || rel >= 0x16f2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f2520 size=944 callers=0 calls=12
   calls: sub_1655110, sub_1655220, sub_165c600, sub_165c6b0, sub_165e060, sub_16a8340, sub_16c8540, sub_16c8ca0, sub_171e1e0, sub_1749dc0, sub_174a450, sub_174de60
   ref: NexConnectStationJob::WaitForNatTraversalCompleted
   ref: ConnectStationJob::ConnectionFailed
   ref: NexConnectStationJob::PrepareNatTraversal
*/
void ConnectStationJob_ConnectionFailed_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f2520ULL || rel >= 0x16f28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f28d0 size=448 callers=0 calls=8
   calls: sub_1655220, sub_165c600, sub_165c6b0, sub_165e060, sub_16c8540, sub_16c8b60, sub_16c8ca0, sub_1749fc0
   ref: ConnectStationJob::ConnectionFailed
   ref: NexConnectStationJob::ResolveCurrentAddress
   ref: NexConnectStationJob::WaitForNatTraversalStartedByRelay
*/
void ConnectStationJob_ConnectionFailed_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f28d0ULL || rel >= 0x16f2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f2a90 size=496 callers=0 calls=8
   calls: sub_1655220, sub_165c600, sub_165c6b0, sub_165e060, sub_16a8340, sub_16c8540, sub_16c8ca0, sub_174a450
   ref: ConnectStationJob::ConnectionFailed
   ref: NexConnectStationJob::WaitForNatTraversalCompletedByRelay
*/
void ConnectStationJob_ConnectionFailed_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f2a90ULL || rel >= 0x16f2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f2c80 size=1024 callers=0 calls=15
   calls: sub_1655220, sub_165c600, sub_165e060, sub_165e140, sub_16c4110, sub_16c7e80, sub_16c84e0, sub_16c8540, sub_16c8ca0, sub_1749da0, sub_1749dc0, sub_1749de0
   ... +3 more
   ref: ConnectStationJob::ConnectionFailed
   ref: NexConnectStationJob::ResolveCurrentAddress
*/
void ConnectStationJob_ConnectionFailed_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f2c80ULL || rel >= 0x16f3080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f3080 size=288 callers=0 calls=6
   calls: sub_1652d30, sub_165e060, sub_165fd50, sub_16c8c80, sub_16c8ca0, sub_1749cf0
   ref: ConnectStationJob::SendConnectionRequest
*/
void ConnectStationJob_SendConnectionRequest_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f3080ULL || rel >= 0x16f31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f31a0 size=208 callers=0 calls=7
   calls: sub_1655110, sub_1655290, sub_16a8390, sub_16c1a70, sub_16c8540, sub_1749d80, sub_1749da0
*/
void sub_16f31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f31a0ULL || rel >= 0x16f3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f3270 size=224 callers=0 calls=1
   calls: sub_1749d80
*/
void sub_16f3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f3270ULL || rel >= 0x16f3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f3350 size=16 callers=0 calls=0
*/
void sub_16f3350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f3350ULL || rel >= 0x16f3360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f3360 size=576 callers=0 calls=2
   calls: sub_165e060, sub_171e0e0
*/
void sub_16f3360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f3360ULL || rel >= 0x16f35a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f35a0 size=64 callers=1 calls=1
   calls: sub_1723b00
*/
void sub_16f35a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f35a0ULL || rel >= 0x16f35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f35e0 size=16 callers=0 calls=0
*/
void sub_16f35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f35e0ULL || rel >= 0x16f35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f35f0 size=48 callers=0 calls=1
   calls: sub_1723b80
*/
void sub_16f35f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f35f0ULL || rel >= 0x16f3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f3620 size=320 callers=0 calls=4
   calls: sub_165e060, sub_16e7300, sub_16ef830, sub_16ef860
   ref: NexMatchJoinSessionJob::LeaveJoinedMatchmakeSession
*/
void NexMatchJoinSessionJob_LeaveJoinedMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f3620ULL || rel >= 0x16f3760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f3760 size=528 callers=0 calls=3
   calls: sub_1655110, sub_165e140, sub_172be20
   ref: NexMatchJoinSessionJob::JoinMatchmakeSession
   ref: NexMatchJoinSessionJob::MeshCleanup
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
   ref: NexMatchJoinSessionJob::WaitLeaveJoinedMatchmakeSession
*/
void NexMatchJoinSessionJob_MeshCleanup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f3760ULL || rel >= 0x16f3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f3970 size=464 callers=0 calls=3
   calls: sub_165e140, sub_16ef3d0, sub_172be20
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
   ref: NexMatchJoinSessionJob::WaitJoinMatchmake
   ref: NexMatchJoinSessionJob::MeshCleanup
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
*/
void NexMatchJoinSessionJob_MeshCleanup_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f3970ULL || rel >= 0x16f3b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f3b40 size=496 callers=0 calls=3
   calls: sub_165e060, sub_165e140, sub_172be20
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
   ref: NexMatchJoinSessionJob::LeaveJoinedMatchmakeSession
*/
void nex_NexMatchJoinSessionJob_CompleteFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f3b40ULL || rel >= 0x16f3d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f3d30 size=2000 callers=0 calls=13
   calls: sub_1655110, sub_165e140, sub_16c6860, sub_16e33c0, sub_16ee550, sub_16ef5f0, sub_16ef830, sub_16ef860, sub_16efcd0, sub_16efd90, sub_172be20, sub_172e100
   ... +1 more
   ref: NexMatchJoinSessionJob::WaitLeaveMatchmakeSessionCompanions
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
   ref: NexMatchJoinSessionJob::CompleteFailure
   ref: NexMatchJoinSessionJob::WaitLeaveCurrentMatchmakeSession
   ref: NexMatchJoinSessionJob::WaitLeaveBufferMatchmakeSession
*/
void NexMatchJoinSessionJob_CompleteFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f3d30ULL || rel >= 0x16f4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f4500 size=544 callers=0 calls=8
   calls: sub_1655110, sub_165c6b0, sub_165e060, sub_165e140, sub_16ee550, sub_1724c60, sub_172be20, sub_172e100
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
   ref: NexMatchJoinSessionJob::WaitNotification
*/
void NexMatchJoinSessionJob_WaitNotification(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f4500ULL || rel >= 0x16f4720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f4720 size=784 callers=0 calls=4
   calls: sub_165c6b0, sub_165e140, sub_16ee550, sub_172be20
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
   ref: NexMatchJoinSessionJob::GetStationLocation
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
*/
void NexMatchJoinSessionJob_GetStationLocation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f4720ULL || rel >= 0x16f4a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f4a30 size=576 callers=0 calls=5
   calls: sub_165e060, sub_165e140, sub_1749820, sub_1749960, sub_17499e0
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
   ref: NexMatchJoinSessionJob::WaitGetStationLocation
*/
void nex_NexMatchJoinSessionJob_CompleteFailure_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f4a30ULL || rel >= 0x16f4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f4c70 size=432 callers=0 calls=3
   calls: sub_165e060, sub_165e140, sub_172be20
   ref: NexMatchJoinSessionJob::StartNatSession
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
*/
void NexMatchJoinSessionJob_StartNatSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f4c70ULL || rel >= 0x16f4e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f4e20 size=240 callers=0 calls=2
   calls: sub_165e140, sub_16eed40
   ref: NexMatchJoinSessionJob::WaitStartNatSession
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
*/
void NexMatchJoinSessionJob_WaitStartNatSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f4e20ULL || rel >= 0x16f4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f4f10 size=1088 callers=0 calls=6
   calls: sub_165e060, sub_165e140, sub_16eedc0, sub_16eee80, sub_1724c80, sub_172be20
   ref: JoinSessionJob::MeshStartup
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
   ref: NexMatchJoinSessionJob::CompleteFailure
*/
void JoinSessionJob_MeshStartup_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f4f10ULL || rel >= 0x16f5350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f5350 size=160 callers=0 calls=3
   calls: sub_1713c40, sub_1713df0, sub_172be90
   ref: JoinSessionJob::CompleteProcess
*/
void JoinSessionJob_CompleteProcess_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f5350ULL || rel >= 0x16f53f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f53f0 size=960 callers=0 calls=6
   calls: sub_165e140, sub_16a7890, sub_16a8020, sub_1735840, sub_1736ce0, sub_1736d20
   ref: NexMatchJoinSessionJob::MeshCleanup
   ref: NexMatchJoinSessionJob::CleanupForRetryJoinMesh
*/
void NexMatchJoinSessionJob_MeshCleanup_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f53f0ULL || rel >= 0x16f57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f57b0 size=480 callers=0 calls=5
   calls: sub_165c6b0, sub_1735840, sub_1749820, sub_1749960, sub_17499e0
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
   ref: NexMatchJoinSessionJob::WaitForRetryJoinMesh
   ref: NexMatchJoinSessionJob::GetStationLocation
*/
void NexMatchJoinSessionJob_GetStationLocation_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f57b0ULL || rel >= 0x16f5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f5990 size=32 callers=0 calls=0
   ref: NexMatchJoinSessionJob::MeshCleanup
*/
void NexMatchJoinSessionJob_MeshCleanup_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f5990ULL || rel >= 0x16f59b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f59b0 size=32 callers=0 calls=0
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
*/
void NexMatchJoinSessionJob_LeaveMatchmakeSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f59b0ULL || rel >= 0x16f59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f59d0 size=272 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_16e3620, sub_172be20
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
*/
void nex_NexMatchJoinSessionJob_CompleteFailure_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f59d0ULL || rel >= 0x16f5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f5ae0 size=496 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_172be20, sub_172e120
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
*/
void nex_NexMatchJoinSessionJob_CompleteFailure_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f5ae0ULL || rel >= 0x16f5cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f5cd0 size=480 callers=0 calls=4
   calls: sub_165e060, sub_165e140, sub_172be20, sub_172e100
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
*/
void nex_NexMatchJoinSessionJob_CompleteFailure_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f5cd0ULL || rel >= 0x16f5eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f5eb0 size=240 callers=0 calls=6
   calls: sub_165c6b0, sub_16a6bd0, sub_16a7c60, sub_16a8010, sub_16a8080, sub_16c6860
*/
void sub_16f5eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f5eb0ULL || rel >= 0x16f5fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f5fa0 size=32 callers=0 calls=0
*/
void sub_16f5fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f5fa0ULL || rel >= 0x16f5fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016f5fc0 size=496 callers=0 calls=6
   calls: sub_165e140, sub_16c6860, sub_172be20, sub_1749820, sub_1749960, sub_17499e0
   ref: NexMatchJoinSessionJob::LeaveMatchmakeSession
   ref: NexMatchJoinSessionJob::GetStationLocation
   ref: nex::NexMatchJoinSessionJob::CompleteFailure
*/
void NexMatchJoinSessionJob_GetStationLocation_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16f5fc0ULL || rel >= 0x16f61b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

