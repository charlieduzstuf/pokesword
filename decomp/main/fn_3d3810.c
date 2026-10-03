/* main functions 003d3810..003ee4a0 (24 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 003d3810 size=64 callers=0 calls=1
   calls: sub_3c0fb0
*/
void sub_3d3810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3810ULL || rel >= 0x3d3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3850 size=592 callers=4 calls=3
   calls: sub_37b470, sub_37d6b0, sub_3a9300
*/
void sub_3d3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3850ULL || rel >= 0x3d3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3aa0 size=336 callers=0 calls=1
   calls: sub_3d3850
*/
void sub_3d3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3aa0ULL || rel >= 0x3d3bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3bf0 size=336 callers=0 calls=1
   calls: sub_3d3850
*/
void sub_3d3bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3bf0ULL || rel >= 0x3d3d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3d40 size=256 callers=0 calls=1
   calls: sub_3d3850
*/
void sub_3d3d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3d40ULL || rel >= 0x3d3e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3e40 size=256 callers=0 calls=1
   calls: sub_3d3850
*/
void sub_3d3e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3e40ULL || rel >= 0x3d3f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3f40 size=16 callers=0 calls=0
*/
void sub_3d3f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3f40ULL || rel >= 0x3d3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3f50 size=32 callers=0 calls=0
*/
void sub_3d3f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3f50ULL || rel >= 0x3d3f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d3f70 size=928 callers=2 calls=14
   calls: sub_3045e0, sub_3046a0, sub_3047c0, sub_34ea40, sub_34f480, sub_34fb90, sub_356a80, sub_357d80, sub_357e00, sub_397bc0, sub_3c8e80, sub_3ca380
   ... +2 more
*/
void sub_3d3f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d3f70ULL || rel >= 0x3d4310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4310 size=176 callers=9 calls=4
   calls: sub_304740, sub_3047c0, sub_3cfa80, sub_3d1930
*/
void sub_3d4310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4310ULL || rel >= 0x3d43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d43c0 size=16 callers=0 calls=0
*/
void sub_3d43c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d43c0ULL || rel >= 0x3d43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d43d0 size=48 callers=0 calls=1
   calls: sub_3d4310
*/
void sub_3d43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d43d0ULL || rel >= 0x3d4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4400 size=48 callers=0 calls=1
   calls: sub_3d4310
*/
void sub_3d4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4400ULL || rel >= 0x3d4430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4430 size=64 callers=1 calls=1
   calls: sub_3d4470
*/
void sub_3d4430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4430ULL || rel >= 0x3d4470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4470 size=224 callers=1 calls=0
*/
void sub_3d4470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4470ULL || rel >= 0x3d4550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4550 size=112 callers=1 calls=1
   calls: sub_3d2050
*/
void sub_3d4550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4550ULL || rel >= 0x3d45c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d45c0 size=48 callers=4 calls=0
*/
void sub_3d45c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d45c0ULL || rel >= 0x3d45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d45f0 size=656 callers=2 calls=5
   calls: sub_356a80, sub_3ca450, sub_3ca4b0, sub_3d1c20, sub_3d23e0
*/
void sub_3d45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d45f0ULL || rel >= 0x3d4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4880 size=672 callers=2 calls=3
   calls: sub_390480, sub_390500, sub_3d1330
*/
void sub_3d4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4880ULL || rel >= 0x3d4b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4b20 size=192 callers=0 calls=3
   calls: sub_3cb000, sub_3cb350, sub_3ceca0
*/
void sub_3d4b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4b20ULL || rel >= 0x3d4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4be0 size=544 callers=1 calls=5
   calls: sub_357cb0, sub_3d05f0, sub_3d45f0, sub_3d4e00, sub_3d5090
*/
void sub_3d4be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4be0ULL || rel >= 0x3d4e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d4e00 size=656 callers=2 calls=0
*/
void sub_3d4e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d4e00ULL || rel >= 0x3d5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5090 size=1776 callers=1 calls=1
   calls: sub_3d5a10
*/
void sub_3d5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5090ULL || rel >= 0x3d5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5780 size=16 callers=0 calls=0
*/
void sub_3d5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5780ULL || rel >= 0x3d5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5790 size=16 callers=0 calls=0
*/
void sub_3d5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5790ULL || rel >= 0x3d57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d57a0 size=16 callers=0 calls=0
*/
void sub_3d57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d57a0ULL || rel >= 0x3d57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d57b0 size=16 callers=0 calls=0
*/
void sub_3d57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d57b0ULL || rel >= 0x3d57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d57c0 size=16 callers=0 calls=0
*/
void sub_3d57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d57c0ULL || rel >= 0x3d57d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d57d0 size=16 callers=0 calls=0
*/
void sub_3d57d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d57d0ULL || rel >= 0x3d57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d57e0 size=32 callers=0 calls=0
*/
void sub_3d57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d57e0ULL || rel >= 0x3d5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5800 size=16 callers=0 calls=0
*/
void sub_3d5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5800ULL || rel >= 0x3d5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5810 size=16 callers=0 calls=0
*/
void sub_3d5810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5810ULL || rel >= 0x3d5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5820 size=16 callers=0 calls=0
*/
void sub_3d5820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5820ULL || rel >= 0x3d5830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5830 size=32 callers=0 calls=0
*/
void sub_3d5830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5830ULL || rel >= 0x3d5850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5850 size=64 callers=0 calls=0
*/
void sub_3d5850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5850ULL || rel >= 0x3d5890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5890 size=208 callers=1 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_3d5890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5890ULL || rel >= 0x3d5960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5960 size=48 callers=0 calls=1
   calls: sub_3d5890
*/
void sub_3d5960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5960ULL || rel >= 0x3d5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5990 size=16 callers=0 calls=0
*/
void sub_3d5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5990ULL || rel >= 0x3d59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d59a0 size=16 callers=0 calls=0
*/
void sub_3d59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d59a0ULL || rel >= 0x3d59b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d59b0 size=16 callers=0 calls=0
*/
void sub_3d59b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d59b0ULL || rel >= 0x3d59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d59c0 size=16 callers=0 calls=0
*/
void sub_3d59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d59c0ULL || rel >= 0x3d59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d59d0 size=64 callers=0 calls=0
*/
void sub_3d59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d59d0ULL || rel >= 0x3d5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d5a10 size=1840 callers=1 calls=0
*/
void sub_3d5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d5a10ULL || rel >= 0x3d6140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6140 size=16 callers=0 calls=0
*/
void sub_3d6140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6140ULL || rel >= 0x3d6150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6150 size=16 callers=1 calls=0
*/
void sub_3d6150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6150ULL || rel >= 0x3d6160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6160 size=432 callers=3 calls=2
   calls: sub_3045e0, sub_390440
*/
void sub_3d6160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6160ULL || rel >= 0x3d6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6310 size=16 callers=0 calls=0
*/
void sub_3d6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6310ULL || rel >= 0x3d6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6320 size=160 callers=1 calls=1
   calls: sub_3d71c0
*/
void sub_3d6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6320ULL || rel >= 0x3d63c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d63c0 size=976 callers=1 calls=8
   calls: sub_390440, sub_390480, sub_3d6160, sub_3d6790, sub_3d6db0, sub_3d7190, sub_3d7350, sub_3d75b0
*/
void sub_3d63c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d63c0ULL || rel >= 0x3d6790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6790 size=416 callers=1 calls=3
   calls: sub_3d6dd0, sub_3db8c0, sub_3ddce0
*/
void sub_3d6790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6790ULL || rel >= 0x3d6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6930 size=80 callers=0 calls=1
   calls: sub_390500
*/
void sub_3d6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6930ULL || rel >= 0x3d6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6980 size=416 callers=0 calls=1
   calls: sub_3d76c0
*/
void sub_3d6980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6980ULL || rel >= 0x3d6b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6b20 size=176 callers=0 calls=2
   calls: sub_390440, sub_3d7680
*/
void sub_3d6b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6b20ULL || rel >= 0x3d6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6bd0 size=48 callers=0 calls=0
*/
void sub_3d6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6bd0ULL || rel >= 0x3d6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6c00 size=128 callers=0 calls=2
   calls: sub_390440, sub_3d7680
*/
void sub_3d6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6c00ULL || rel >= 0x3d6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6c80 size=32 callers=1 calls=0
*/
void sub_3d6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6c80ULL || rel >= 0x3d6ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6ca0 size=80 callers=1 calls=2
   calls: sub_390440, sub_390500
*/
void sub_3d6ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6ca0ULL || rel >= 0x3d6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6cf0 size=32 callers=0 calls=0
*/
void sub_3d6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6cf0ULL || rel >= 0x3d6d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6d10 size=32 callers=0 calls=0
*/
void sub_3d6d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6d10ULL || rel >= 0x3d6d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6d30 size=64 callers=0 calls=1
   calls: sub_3d6da0
*/
void sub_3d6d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6d30ULL || rel >= 0x3d6d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6d70 size=48 callers=1 calls=0
*/
void sub_3d6d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6d70ULL || rel >= 0x3d6da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6da0 size=16 callers=3 calls=0
*/
void sub_3d6da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6da0ULL || rel >= 0x3d6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6db0 size=32 callers=2 calls=0
*/
void sub_3d6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6db0ULL || rel >= 0x3d6dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d6dd0 size=960 callers=1 calls=5
   calls: sub_390480, sub_390500, sub_3d71c0, sub_3da1d0, sub_3da340
*/
void sub_3d6dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d6dd0ULL || rel >= 0x3d7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7190 size=48 callers=2 calls=0
*/
void sub_3d7190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7190ULL || rel >= 0x3d71c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d71c0 size=400 callers=2 calls=0
*/
void sub_3d71c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d71c0ULL || rel >= 0x3d7350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7350 size=128 callers=1 calls=3
   calls: sub_390480, sub_390500, sub_3da1d0
*/
void sub_3d7350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7350ULL || rel >= 0x3d73d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d73d0 size=480 callers=0 calls=1
   calls: sub_3046a0
*/
void sub_3d73d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d73d0ULL || rel >= 0x3d75b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d75b0 size=208 callers=1 calls=0
*/
void sub_3d75b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d75b0ULL || rel >= 0x3d7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7680 size=16 callers=2 calls=0
*/
void sub_3d7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7680ULL || rel >= 0x3d7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7690 size=48 callers=0 calls=0
*/
void sub_3d7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7690ULL || rel >= 0x3d76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d76c0 size=160 callers=1 calls=0
*/
void sub_3d76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d76c0ULL || rel >= 0x3d7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7760 size=528 callers=0 calls=0
*/
void sub_3d7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7760ULL || rel >= 0x3d7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7970 size=560 callers=0 calls=0
*/
void sub_3d7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7970ULL || rel >= 0x3d7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7ba0 size=624 callers=0 calls=0
*/
void sub_3d7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7ba0ULL || rel >= 0x3d7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d7e10 size=928 callers=0 calls=0
*/
void sub_3d7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d7e10ULL || rel >= 0x3d81b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d81b0 size=368 callers=0 calls=0
*/
void sub_3d81b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d81b0ULL || rel >= 0x3d8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d8320 size=448 callers=0 calls=0
*/
void sub_3d8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8320ULL || rel >= 0x3d84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d84e0 size=496 callers=0 calls=0
*/
void sub_3d84e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d84e0ULL || rel >= 0x3d86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d86d0 size=624 callers=0 calls=0
*/
void sub_3d86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d86d0ULL || rel >= 0x3d8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d8940 size=480 callers=0 calls=0
*/
void sub_3d8940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8940ULL || rel >= 0x3d8b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d8b20 size=576 callers=0 calls=0
*/
void sub_3d8b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8b20ULL || rel >= 0x3d8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d8d60 size=384 callers=0 calls=0
*/
void sub_3d8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8d60ULL || rel >= 0x3d8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d8ee0 size=1584 callers=0 calls=0
*/
void sub_3d8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d8ee0ULL || rel >= 0x3d9510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d9510 size=1232 callers=0 calls=0
*/
void sub_3d9510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d9510ULL || rel >= 0x3d99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d99e0 size=1168 callers=0 calls=0
*/
void sub_3d99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d99e0ULL || rel >= 0x3d9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003d9e70 size=864 callers=0 calls=0
*/
void sub_3d9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3d9e70ULL || rel >= 0x3da1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da1d0 size=368 callers=2 calls=0
*/
void sub_3da1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da1d0ULL || rel >= 0x3da340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da340 size=368 callers=1 calls=0
*/
void sub_3da340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da340ULL || rel >= 0x3da4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da4b0 size=336 callers=2 calls=2
   calls: sub_3047c0, sub_3d6ca0
*/
void sub_3da4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da4b0ULL || rel >= 0x3da600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da600 size=32 callers=0 calls=0
*/
void sub_3da600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da600ULL || rel >= 0x3da620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da620 size=16 callers=0 calls=0
*/
void sub_3da620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da620ULL || rel >= 0x3da630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da630 size=96 callers=2 calls=1
   calls: sub_3dda40
*/
void sub_3da630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da630ULL || rel >= 0x3da690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da690 size=416 callers=1 calls=3
   calls: sub_34fb90, sub_38f7f0, sub_3ddce0
*/
void sub_3da690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da690ULL || rel >= 0x3da830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da830 size=112 callers=1 calls=1
   calls: sub_34fb90
*/
void sub_3da830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da830ULL || rel >= 0x3da8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da8a0 size=96 callers=0 calls=1
   calls: sub_3ddb90
*/
void sub_3da8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da8a0ULL || rel >= 0x3da900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003da900 size=416 callers=0 calls=0
*/
void sub_3da900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3da900ULL || rel >= 0x3daaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003daaa0 size=272 callers=1 calls=2
   calls: sub_3cd230, sub_3d6d70
*/
void sub_3daaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3daaa0ULL || rel >= 0x3dabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dabb0 size=16 callers=1 calls=0
*/
void sub_3dabb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dabb0ULL || rel >= 0x3dabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dabc0 size=192 callers=0 calls=3
   calls: sub_3047c0, sub_3da4b0, sub_3dd9d0
*/
void sub_3dabc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dabc0ULL || rel >= 0x3dac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dac80 size=128 callers=1 calls=3
   calls: sub_3047c0, sub_3da4b0, sub_3dd9d0
*/
void sub_3dac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dac80ULL || rel >= 0x3dad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dad00 size=48 callers=0 calls=1
   calls: sub_3ddb80
*/
void sub_3dad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dad00ULL || rel >= 0x3dad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dad30 size=112 callers=0 calls=2
   calls: sub_3d6db0, sub_3ddbd0
*/
void sub_3dad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dad30ULL || rel >= 0x3dada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dada0 size=1616 callers=2 calls=7
   calls: sub_38d060, sub_38e490, sub_3d0050, sub_3d05f0, sub_3d1160, sub_3db3f0, sub_3ddce0
*/
void sub_3dada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dada0ULL || rel >= 0x3db3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003db3f0 size=1008 callers=3 calls=8
   calls: sub_3045e0, sub_3047c0, sub_35f000, sub_35f280, sub_38d550, sub_3cd330, sub_3d6c80, sub_3e0ad0
*/
void sub_3db3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3db3f0ULL || rel >= 0x3db7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003db7e0 size=192 callers=1 calls=2
   calls: sub_390a10, sub_3ddce0
*/
void sub_3db7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3db7e0ULL || rel >= 0x3db8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003db8a0 size=32 callers=1 calls=0
*/
void sub_3db8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3db8a0ULL || rel >= 0x3db8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003db8c0 size=176 callers=1 calls=3
   calls: sub_3047c0, sub_3dd9d0, sub_3dda40
*/
void sub_3db8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3db8c0ULL || rel >= 0x3db970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003db970 size=1280 callers=0 calls=7
   calls: sub_3045e0, sub_3047c0, sub_35f000, sub_35f280, sub_3cd330, sub_3cd470, sub_3d6150
*/
void sub_3db970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3db970ULL || rel >= 0x3dbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dbe70 size=96 callers=0 calls=0
*/
void sub_3dbe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dbe70ULL || rel >= 0x3dbed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dbed0 size=32 callers=0 calls=0
*/
void sub_3dbed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dbed0ULL || rel >= 0x3dbef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dbef0 size=32 callers=0 calls=0
*/
void sub_3dbef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dbef0ULL || rel >= 0x3dbf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dbf10 size=112 callers=0 calls=0
*/
void sub_3dbf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dbf10ULL || rel >= 0x3dbf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dbf80 size=128 callers=0 calls=0
*/
void sub_3dbf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dbf80ULL || rel >= 0x3dc000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc000 size=192 callers=1 calls=3
   calls: sub_38dec0, sub_38e7a0, sub_3d0150
*/
void sub_3dc000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc000ULL || rel >= 0x3dc0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc0c0 size=144 callers=2 calls=4
   calls: sub_38d280, sub_38e0a0, sub_3dc150, sub_3dd7e0
*/
void sub_3dc0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc0c0ULL || rel >= 0x3dc150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc150 size=448 callers=2 calls=7
   calls: sub_3045e0, sub_3047c0, sub_34f0f0, sub_38d180, sub_38e490, sub_3dd9d0, sub_3ddce0
*/
void sub_3dc150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc150ULL || rel >= 0x3dc310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc310 size=16 callers=1 calls=0
*/
void sub_3dc310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc310ULL || rel >= 0x3dc320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc320 size=208 callers=0 calls=2
   calls: sub_3047c0, sub_3dd9d0
*/
void sub_3dc320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc320ULL || rel >= 0x3dc3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc3f0 size=192 callers=0 calls=0
*/
void sub_3dc3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc3f0ULL || rel >= 0x3dc4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc4b0 size=320 callers=0 calls=1
   calls: sub_3c9ae0
*/
void sub_3dc4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc4b0ULL || rel >= 0x3dc5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc5f0 size=224 callers=0 calls=1
   calls: sub_3c9b70
*/
void sub_3dc5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc5f0ULL || rel >= 0x3dc6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc6d0 size=16 callers=0 calls=0
*/
void sub_3dc6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc6d0ULL || rel >= 0x3dc6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc6e0 size=32 callers=0 calls=0
*/
void sub_3dc6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc6e0ULL || rel >= 0x3dc700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc700 size=32 callers=0 calls=0
*/
void sub_3dc700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc700ULL || rel >= 0x3dc720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc720 size=32 callers=0 calls=0
*/
void sub_3dc720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc720ULL || rel >= 0x3dc740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc740 size=16 callers=0 calls=0
*/
void sub_3dc740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc740ULL || rel >= 0x3dc750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc750 size=128 callers=0 calls=3
   calls: sub_3cd300, sub_3d6da0, sub_3e0ab0
*/
void sub_3dc750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc750ULL || rel >= 0x3dc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc7d0 size=128 callers=0 calls=4
   calls: sub_3cd300, sub_3cf7b0, sub_3d6da0, sub_3e0ab0
*/
void sub_3dc7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc7d0ULL || rel >= 0x3dc850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc850 size=32 callers=0 calls=0
*/
void sub_3dc850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc850ULL || rel >= 0x3dc870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc870 size=16 callers=0 calls=0
*/
void sub_3dc870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc870ULL || rel >= 0x3dc880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc880 size=64 callers=0 calls=0
*/
void sub_3dc880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc880ULL || rel >= 0x3dc8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc8c0 size=32 callers=0 calls=0
*/
void sub_3dc8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc8c0ULL || rel >= 0x3dc8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc8e0 size=256 callers=0 calls=1
   calls: sub_3046a0
*/
void sub_3dc8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc8e0ULL || rel >= 0x3dc9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dc9e0 size=96 callers=0 calls=1
   calls: sub_304740
*/
void sub_3dc9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dc9e0ULL || rel >= 0x3dca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dca40 size=64 callers=0 calls=0
*/
void sub_3dca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dca40ULL || rel >= 0x3dca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dca80 size=64 callers=0 calls=0
*/
void sub_3dca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dca80ULL || rel >= 0x3dcac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dcac0 size=128 callers=0 calls=1
   calls: sub_3dcd40
*/
void sub_3dcac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dcac0ULL || rel >= 0x3dcb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dcb40 size=48 callers=0 calls=0
*/
void sub_3dcb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dcb40ULL || rel >= 0x3dcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dcb70 size=96 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3dcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dcb70ULL || rel >= 0x3dcbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dcbd0 size=96 callers=0 calls=0
*/
void sub_3dcbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dcbd0ULL || rel >= 0x3dcc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dcc30 size=16 callers=0 calls=0
*/
void sub_3dcc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dcc30ULL || rel >= 0x3dcc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dcc40 size=48 callers=0 calls=0
*/
void sub_3dcc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dcc40ULL || rel >= 0x3dcc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dcc70 size=80 callers=0 calls=0
*/
void sub_3dcc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dcc70ULL || rel >= 0x3dccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dccc0 size=16 callers=0 calls=0
*/
void sub_3dccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dccc0ULL || rel >= 0x3dccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dccd0 size=16 callers=0 calls=0
*/
void sub_3dccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dccd0ULL || rel >= 0x3dcce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dcce0 size=48 callers=0 calls=0
*/
void sub_3dcce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dcce0ULL || rel >= 0x3dcd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dcd10 size=48 callers=0 calls=0
*/
void sub_3dcd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dcd10ULL || rel >= 0x3dcd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dcd40 size=208 callers=2 calls=3
   calls: sub_3045e0, sub_361400, sub_3c9bc0
*/
void sub_3dcd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dcd40ULL || rel >= 0x3dce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dce10 size=96 callers=1 calls=2
   calls: sub_3047c0, sub_362360
*/
void sub_3dce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dce10ULL || rel >= 0x3dce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dce70 size=16 callers=0 calls=0
*/
void sub_3dce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dce70ULL || rel >= 0x3dce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dce80 size=64 callers=0 calls=0
*/
void sub_3dce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dce80ULL || rel >= 0x3dcec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dcec0 size=768 callers=0 calls=4
   calls: sub_3045e0, sub_3ad140, sub_3cad90, sub_3d6160
*/
void sub_3dcec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dcec0ULL || rel >= 0x3dd1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd1c0 size=448 callers=0 calls=2
   calls: sub_390440, sub_3d6160
*/
void sub_3dd1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd1c0ULL || rel >= 0x3dd380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd380 size=96 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3dd380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd380ULL || rel >= 0x3dd3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd3e0 size=112 callers=0 calls=1
   calls: sub_390440
*/
void sub_3dd3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd3e0ULL || rel >= 0x3dd450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd450 size=80 callers=0 calls=0
*/
void sub_3dd450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd450ULL || rel >= 0x3dd4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd4a0 size=192 callers=0 calls=1
   calls: sub_3dcd40
*/
void sub_3dd4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd4a0ULL || rel >= 0x3dd560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd560 size=96 callers=0 calls=3
   calls: sub_3047c0, sub_390440, sub_3dce10
*/
void sub_3dd560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd560ULL || rel >= 0x3dd5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd5c0 size=64 callers=0 calls=0
*/
void sub_3dd5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd5c0ULL || rel >= 0x3dd600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd600 size=224 callers=0 calls=0
*/
void sub_3dd600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd600ULL || rel >= 0x3dd6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd6e0 size=96 callers=0 calls=1
   calls: sub_390440
*/
void sub_3dd6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd6e0ULL || rel >= 0x3dd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd740 size=16 callers=0 calls=0
*/
void sub_3dd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd740ULL || rel >= 0x3dd750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd750 size=80 callers=0 calls=0
*/
void sub_3dd750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd750ULL || rel >= 0x3dd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd7a0 size=16 callers=0 calls=0
*/
void sub_3dd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd7a0ULL || rel >= 0x3dd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd7b0 size=48 callers=2 calls=0
*/
void sub_3dd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd7b0ULL || rel >= 0x3dd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd7e0 size=496 callers=2 calls=7
   calls: sub_3045e0, sub_35f190, sub_3ddd90, sub_3de160, sub_3de830, sub_3df030, sub_3df860
*/
void sub_3dd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd7e0ULL || rel >= 0x3dd9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dd9d0 size=112 callers=6 calls=2
   calls: sub_38d280, sub_390920
*/
void sub_3dd9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dd9d0ULL || rel >= 0x3dda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dda40 size=320 callers=2 calls=3
   calls: sub_34fb90, sub_38d2a0, sub_38f060
*/
void sub_3dda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dda40ULL || rel >= 0x3ddb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddb80 size=16 callers=1 calls=0
*/
void sub_3ddb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddb80ULL || rel >= 0x3ddb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddb90 size=64 callers=1 calls=1
   calls: sub_38d2d0
*/
void sub_3ddb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddb90ULL || rel >= 0x3ddbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddbd0 size=80 callers=1 calls=1
   calls: sub_38d2f0
*/
void sub_3ddbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddbd0ULL || rel >= 0x3ddc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddc20 size=48 callers=1 calls=0
*/
void sub_3ddc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddc20ULL || rel >= 0x3ddc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddc50 size=16 callers=0 calls=0
*/
void sub_3ddc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddc50ULL || rel >= 0x3ddc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddc60 size=128 callers=0 calls=0
*/
void sub_3ddc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddc60ULL || rel >= 0x3ddce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddce0 size=96 callers=6 calls=0
*/
void sub_3ddce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddce0ULL || rel >= 0x3ddd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddd40 size=16 callers=0 calls=0
*/
void sub_3ddd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddd40ULL || rel >= 0x3ddd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddd50 size=16 callers=0 calls=0
*/
void sub_3ddd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddd50ULL || rel >= 0x3ddd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddd60 size=32 callers=0 calls=0
*/
void sub_3ddd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddd60ULL || rel >= 0x3ddd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddd80 size=16 callers=0 calls=0
*/
void sub_3ddd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddd80ULL || rel >= 0x3ddd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddd90 size=48 callers=1 calls=1
   calls: sub_3cbc30
*/
void sub_3ddd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddd90ULL || rel >= 0x3dddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dddc0 size=32 callers=0 calls=0
*/
void sub_3dddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dddc0ULL || rel >= 0x3ddde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddde0 size=64 callers=0 calls=1
   calls: sub_3cbca0
*/
void sub_3ddde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddde0ULL || rel >= 0x3dde20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dde20 size=416 callers=0 calls=2
   calls: sub_35fa60, sub_3cc0e0
*/
void sub_3dde20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dde20ULL || rel >= 0x3ddfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddfc0 size=16 callers=0 calls=0
*/
void sub_3ddfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddfc0ULL || rel >= 0x3ddfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddfd0 size=32 callers=0 calls=0
*/
void sub_3ddfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddfd0ULL || rel >= 0x3ddff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ddff0 size=96 callers=0 calls=0
*/
void sub_3ddff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ddff0ULL || rel >= 0x3de050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de050 size=160 callers=0 calls=1
   calls: sub_3cc0e0
*/
void sub_3de050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de050ULL || rel >= 0x3de0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de0f0 size=96 callers=0 calls=1
   calls: sub_3cc0e0
*/
void sub_3de0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de0f0ULL || rel >= 0x3de150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de150 size=16 callers=0 calls=0
*/
void sub_3de150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de150ULL || rel >= 0x3de160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de160 size=64 callers=1 calls=1
   calls: sub_3cc350
*/
void sub_3de160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de160ULL || rel >= 0x3de1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de1a0 size=16 callers=0 calls=0
*/
void sub_3de1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de1a0ULL || rel >= 0x3de1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de1b0 size=48 callers=0 calls=1
   calls: sub_3cc3a0
*/
void sub_3de1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de1b0ULL || rel >= 0x3de1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de1e0 size=64 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3de1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de1e0ULL || rel >= 0x3de220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de220 size=736 callers=0 calls=5
   calls: sub_3045e0, sub_3047c0, sub_390d80, sub_3cbff0, sub_3ccb80
*/
void sub_3de220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de220ULL || rel >= 0x3de500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de500 size=80 callers=0 calls=0
*/
void sub_3de500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de500ULL || rel >= 0x3de550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de550 size=80 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3de550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de550ULL || rel >= 0x3de5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de5a0 size=464 callers=0 calls=2
   calls: sub_35fa60, sub_3cd170
*/
void sub_3de5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de5a0ULL || rel >= 0x3de770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de770 size=80 callers=0 calls=0
*/
void sub_3de770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de770ULL || rel >= 0x3de7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de7c0 size=16 callers=0 calls=0
*/
void sub_3de7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de7c0ULL || rel >= 0x3de7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de7d0 size=80 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3de7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de7d0ULL || rel >= 0x3de820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de820 size=16 callers=0 calls=0
*/
void sub_3de820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de820ULL || rel >= 0x3de830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de830 size=64 callers=1 calls=1
   calls: sub_3cbc30
*/
void sub_3de830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de830ULL || rel >= 0x3de870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de870 size=32 callers=0 calls=0
*/
void sub_3de870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de870ULL || rel >= 0x3de890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de890 size=64 callers=0 calls=1
   calls: sub_3cbca0
*/
void sub_3de890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de890ULL || rel >= 0x3de8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003de8d0 size=432 callers=0 calls=2
   calls: sub_35fa60, sub_3cc0e0
*/
void sub_3de8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3de8d0ULL || rel >= 0x3dea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dea80 size=16 callers=0 calls=0
*/
void sub_3dea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dea80ULL || rel >= 0x3dea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dea90 size=32 callers=0 calls=0
*/
void sub_3dea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dea90ULL || rel >= 0x3deab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003deab0 size=48 callers=0 calls=0
*/
void sub_3deab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3deab0ULL || rel >= 0x3deae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003deae0 size=64 callers=0 calls=1
   calls: sub_304740
*/
void sub_3deae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3deae0ULL || rel >= 0x3deb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003deb20 size=336 callers=0 calls=2
   calls: sub_3046a0, sub_3dee80
*/
void sub_3deb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3deb20ULL || rel >= 0x3dec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dec70 size=80 callers=0 calls=0
*/
void sub_3dec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dec70ULL || rel >= 0x3decc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003decc0 size=272 callers=0 calls=1
   calls: sub_3cc0e0
*/
void sub_3decc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3decc0ULL || rel >= 0x3dedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dedd0 size=176 callers=0 calls=1
   calls: sub_3cc0e0
*/
void sub_3dedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dedd0ULL || rel >= 0x3dee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dee80 size=432 callers=3 calls=0
*/
void sub_3dee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dee80ULL || rel >= 0x3df030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df030 size=64 callers=1 calls=1
   calls: sub_3cc350
*/
void sub_3df030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df030ULL || rel >= 0x3df070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df070 size=112 callers=0 calls=2
   calls: sub_304740, sub_3047c0
*/
void sub_3df070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df070ULL || rel >= 0x3df0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df0e0 size=112 callers=0 calls=3
   calls: sub_304740, sub_3047c0, sub_3cc3a0
*/
void sub_3df0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df0e0ULL || rel >= 0x3df150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df150 size=1024 callers=0 calls=6
   calls: sub_3045e0, sub_3046a0, sub_390d80, sub_3cbff0, sub_3ccb80, sub_3dee80
*/
void sub_3df150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df150ULL || rel >= 0x3df550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df550 size=48 callers=0 calls=0
*/
void sub_3df550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df550ULL || rel >= 0x3df580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df580 size=64 callers=0 calls=1
   calls: sub_304740
*/
void sub_3df580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df580ULL || rel >= 0x3df5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df5c0 size=48 callers=0 calls=1
   calls: sub_3cccd0
*/
void sub_3df5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df5c0ULL || rel >= 0x3df5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df5f0 size=560 callers=0 calls=2
   calls: sub_35fa60, sub_3cd170
*/
void sub_3df5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df5f0ULL || rel >= 0x3df820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df820 size=48 callers=0 calls=0
*/
void sub_3df820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df820ULL || rel >= 0x3df850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df850 size=16 callers=0 calls=0
*/
void sub_3df850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df850ULL || rel >= 0x3df860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df860 size=176 callers=1 calls=1
   calls: sub_3dd7b0
*/
void sub_3df860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df860ULL || rel >= 0x3df910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df910 size=208 callers=0 calls=3
   calls: sub_304740, sub_362360, sub_390500
*/
void sub_3df910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df910ULL || rel >= 0x3df9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003df9e0 size=208 callers=0 calls=3
   calls: sub_304740, sub_362360, sub_390500
*/
void sub_3df9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3df9e0ULL || rel >= 0x3dfab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dfab0 size=208 callers=0 calls=3
   calls: sub_304740, sub_362360, sub_390500
*/
void sub_3dfab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dfab0ULL || rel >= 0x3dfb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dfb80 size=208 callers=0 calls=4
   calls: sub_304740, sub_362360, sub_390500, sub_3c9550
*/
void sub_3dfb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dfb80ULL || rel >= 0x3dfc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dfc50 size=16 callers=0 calls=0
*/
void sub_3dfc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dfc50ULL || rel >= 0x3dfc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dfc60 size=16 callers=0 calls=0
*/
void sub_3dfc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dfc60ULL || rel >= 0x3dfc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dfc70 size=512 callers=0 calls=3
   calls: sub_35f000, sub_35f280, sub_361400
*/
void sub_3dfc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dfc70ULL || rel >= 0x3dfe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dfe70 size=80 callers=0 calls=0
*/
void sub_3dfe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dfe70ULL || rel >= 0x3dfec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dfec0 size=64 callers=0 calls=0
*/
void sub_3dfec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dfec0ULL || rel >= 0x3dff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003dff00 size=288 callers=0 calls=2
   calls: sub_3046a0, sub_390480
*/
void sub_3dff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3dff00ULL || rel >= 0x3e0020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0020 size=96 callers=0 calls=1
   calls: sub_304740
*/
void sub_3e0020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0020ULL || rel >= 0x3e0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0080 size=32 callers=0 calls=0
*/
void sub_3e0080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0080ULL || rel >= 0x3e00a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e00a0 size=96 callers=0 calls=0
*/
void sub_3e00a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e00a0ULL || rel >= 0x3e0100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0100 size=32 callers=0 calls=0
*/
void sub_3e0100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0100ULL || rel >= 0x3e0120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0120 size=160 callers=0 calls=0
*/
void sub_3e0120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0120ULL || rel >= 0x3e01c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e01c0 size=32 callers=0 calls=0
*/
void sub_3e01c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e01c0ULL || rel >= 0x3e01e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e01e0 size=208 callers=0 calls=0
*/
void sub_3e01e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e01e0ULL || rel >= 0x3e02b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e02b0 size=16 callers=0 calls=0
*/
void sub_3e02b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e02b0ULL || rel >= 0x3e02c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e02c0 size=16 callers=0 calls=0
*/
void sub_3e02c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e02c0ULL || rel >= 0x3e02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e02d0 size=144 callers=0 calls=1
   calls: sub_3c99e0
*/
void sub_3e02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e02d0ULL || rel >= 0x3e0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0360 size=80 callers=0 calls=0
*/
void sub_3e0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0360ULL || rel >= 0x3e03b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e03b0 size=416 callers=0 calls=1
   calls: sub_3c9600
*/
void sub_3e03b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e03b0ULL || rel >= 0x3e0550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0550 size=16 callers=0 calls=0
*/
void sub_3e0550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0550ULL || rel >= 0x3e0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0560 size=16 callers=0 calls=0
*/
void sub_3e0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0560ULL || rel >= 0x3e0570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0570 size=16 callers=0 calls=0
*/
void sub_3e0570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0570ULL || rel >= 0x3e0580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0580 size=16 callers=0 calls=0
*/
void sub_3e0580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0580ULL || rel >= 0x3e0590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0590 size=16 callers=0 calls=0
*/
void sub_3e0590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0590ULL || rel >= 0x3e05a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e05a0 size=16 callers=0 calls=0
*/
void sub_3e05a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e05a0ULL || rel >= 0x3e05b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e05b0 size=16 callers=0 calls=0
*/
void sub_3e05b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e05b0ULL || rel >= 0x3e05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e05c0 size=16 callers=0 calls=0
*/
void sub_3e05c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e05c0ULL || rel >= 0x3e05d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e05d0 size=16 callers=0 calls=0
*/
void sub_3e05d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e05d0ULL || rel >= 0x3e05e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e05e0 size=16 callers=0 calls=0
*/
void sub_3e05e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e05e0ULL || rel >= 0x3e05f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e05f0 size=16 callers=0 calls=0
*/
void sub_3e05f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e05f0ULL || rel >= 0x3e0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0600 size=16 callers=0 calls=0
*/
void sub_3e0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0600ULL || rel >= 0x3e0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0610 size=16 callers=0 calls=0
*/
void sub_3e0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0610ULL || rel >= 0x3e0620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0620 size=48 callers=0 calls=0
*/
void sub_3e0620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0620ULL || rel >= 0x3e0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0650 size=48 callers=0 calls=0
*/
void sub_3e0650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0650ULL || rel >= 0x3e0680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0680 size=64 callers=0 calls=0
*/
void sub_3e0680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0680ULL || rel >= 0x3e06c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e06c0 size=16 callers=0 calls=0
*/
void sub_3e06c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e06c0ULL || rel >= 0x3e06d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e06d0 size=16 callers=0 calls=0
*/
void sub_3e06d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e06d0ULL || rel >= 0x3e06e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e06e0 size=16 callers=0 calls=0
*/
void sub_3e06e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e06e0ULL || rel >= 0x3e06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e06f0 size=16 callers=0 calls=0
*/
void sub_3e06f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e06f0ULL || rel >= 0x3e0700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0700 size=16 callers=0 calls=0
*/
void sub_3e0700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0700ULL || rel >= 0x3e0710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0710 size=16 callers=0 calls=0
*/
void sub_3e0710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0710ULL || rel >= 0x3e0720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0720 size=16 callers=0 calls=0
*/
void sub_3e0720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0720ULL || rel >= 0x3e0730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0730 size=16 callers=0 calls=0
*/
void sub_3e0730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0730ULL || rel >= 0x3e0740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0740 size=16 callers=0 calls=0
*/
void sub_3e0740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0740ULL || rel >= 0x3e0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0750 size=16 callers=0 calls=0
*/
void sub_3e0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0750ULL || rel >= 0x3e0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0760 size=16 callers=0 calls=0
*/
void sub_3e0760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0760ULL || rel >= 0x3e0770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0770 size=16 callers=0 calls=0
*/
void sub_3e0770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0770ULL || rel >= 0x3e0780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0780 size=16 callers=0 calls=0
*/
void sub_3e0780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0780ULL || rel >= 0x3e0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0790 size=16 callers=0 calls=0
*/
void sub_3e0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0790ULL || rel >= 0x3e07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e07a0 size=16 callers=0 calls=0
*/
void sub_3e07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e07a0ULL || rel >= 0x3e07b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e07b0 size=32 callers=0 calls=0
*/
void sub_3e07b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e07b0ULL || rel >= 0x3e07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e07d0 size=32 callers=0 calls=0
*/
void sub_3e07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e07d0ULL || rel >= 0x3e07f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e07f0 size=32 callers=0 calls=0
*/
void sub_3e07f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e07f0ULL || rel >= 0x3e0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0810 size=16 callers=0 calls=0
*/
void sub_3e0810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0810ULL || rel >= 0x3e0820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0820 size=160 callers=0 calls=1
   calls: sub_395920
*/
void sub_3e0820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0820ULL || rel >= 0x3e08c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e08c0 size=16 callers=0 calls=0
*/
void sub_3e08c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e08c0ULL || rel >= 0x3e08d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e08d0 size=16 callers=0 calls=0
*/
void sub_3e08d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e08d0ULL || rel >= 0x3e08e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e08e0 size=16 callers=0 calls=0
*/
void sub_3e08e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e08e0ULL || rel >= 0x3e08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e08f0 size=16 callers=0 calls=0
*/
void sub_3e08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e08f0ULL || rel >= 0x3e0900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0900 size=16 callers=0 calls=0
*/
void sub_3e0900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0900ULL || rel >= 0x3e0910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0910 size=16 callers=0 calls=0
*/
void sub_3e0910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0910ULL || rel >= 0x3e0920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0920 size=16 callers=0 calls=0
*/
void sub_3e0920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0920ULL || rel >= 0x3e0930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0930 size=16 callers=0 calls=0
*/
void sub_3e0930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0930ULL || rel >= 0x3e0940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0940 size=16 callers=0 calls=0
*/
void sub_3e0940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0940ULL || rel >= 0x3e0950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0950 size=16 callers=0 calls=0
*/
void sub_3e0950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0950ULL || rel >= 0x3e0960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0960 size=32 callers=0 calls=0
*/
void sub_3e0960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0960ULL || rel >= 0x3e0980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0980 size=16 callers=0 calls=0
*/
void sub_3e0980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0980ULL || rel >= 0x3e0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0990 size=32 callers=0 calls=0
*/
void sub_3e0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0990ULL || rel >= 0x3e09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e09b0 size=32 callers=0 calls=0
*/
void sub_3e09b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e09b0ULL || rel >= 0x3e09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e09d0 size=160 callers=0 calls=1
   calls: sub_395920
*/
void sub_3e09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e09d0ULL || rel >= 0x3e0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0a70 size=16 callers=0 calls=0
*/
void sub_3e0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0a70ULL || rel >= 0x3e0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0a80 size=16 callers=0 calls=0
*/
void sub_3e0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0a80ULL || rel >= 0x3e0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0a90 size=16 callers=0 calls=0
*/
void sub_3e0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0a90ULL || rel >= 0x3e0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0aa0 size=16 callers=0 calls=0
*/
void sub_3e0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0aa0ULL || rel >= 0x3e0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0ab0 size=16 callers=2 calls=0
*/
void sub_3e0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0ab0ULL || rel >= 0x3e0ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0ac0 size=16 callers=0 calls=0
*/
void sub_3e0ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0ac0ULL || rel >= 0x3e0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0ad0 size=16 callers=1 calls=0
*/
void sub_3e0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0ad0ULL || rel >= 0x3e0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0ae0 size=32 callers=1 calls=0
*/
void sub_3e0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0ae0ULL || rel >= 0x3e0b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0b00 size=416 callers=0 calls=4
   calls: sub_379820, sub_3798e0, sub_379a00, sub_3e0d00
*/
void sub_3e0b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0b00ULL || rel >= 0x3e0ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0ca0 size=16 callers=0 calls=0
*/
void sub_3e0ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0ca0ULL || rel >= 0x3e0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0cb0 size=32 callers=0 calls=0
*/
void sub_3e0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0cb0ULL || rel >= 0x3e0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0cd0 size=16 callers=0 calls=0
*/
void sub_3e0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0cd0ULL || rel >= 0x3e0ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0ce0 size=32 callers=0 calls=0
*/
void sub_3e0ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0ce0ULL || rel >= 0x3e0d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e0d00 size=2128 callers=1 calls=0
*/
void sub_3e0d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e0d00ULL || rel >= 0x3e1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1550 size=48 callers=1 calls=1
   calls: sub_3c2cb0
*/
void sub_3e1550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1550ULL || rel >= 0x3e1580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1580 size=32 callers=1 calls=0
*/
void sub_3e1580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1580ULL || rel >= 0x3e15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e15a0 size=256 callers=1 calls=3
   calls: sub_3045e0, sub_3c2c30, sub_3e1d40
*/
void sub_3e15a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e15a0ULL || rel >= 0x3e16a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e16a0 size=176 callers=1 calls=2
   calls: sub_3c2f40, sub_3e26a0
*/
void sub_3e16a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e16a0ULL || rel >= 0x3e1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1750 size=1328 callers=0 calls=5
   calls: sub_3047c0, sub_3c2c10, sub_3c2c30, sub_3c3020, sub_3e28f0
*/
void sub_3e1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1750ULL || rel >= 0x3e1c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1c80 size=192 callers=1 calls=2
   calls: sub_3e2390, sub_3e23a0
*/
void sub_3e1c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1c80ULL || rel >= 0x3e1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1d40 size=272 callers=1 calls=4
   calls: sub_3096f0, sub_3a4450, sub_3c2900, sub_3e2cc0
*/
void sub_3e1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1d40ULL || rel >= 0x3e1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1e50 size=352 callers=3 calls=8
   calls: sub_3047c0, sub_309710, sub_309740, sub_31dab0, sub_3a44a0, sub_3a7f20, sub_3c2ee0, sub_3e2d10
*/
void sub_3e1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1e50ULL || rel >= 0x3e1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1fb0 size=16 callers=0 calls=0
*/
void sub_3e1fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1fb0ULL || rel >= 0x3e1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1fc0 size=16 callers=0 calls=0
*/
void sub_3e1fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1fc0ULL || rel >= 0x3e1fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e1fd0 size=48 callers=0 calls=1
   calls: sub_3e1e50
*/
void sub_3e1fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e1fd0ULL || rel >= 0x3e2000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2000 size=48 callers=0 calls=1
   calls: sub_3e1e50
*/
void sub_3e2000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2000ULL || rel >= 0x3e2030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2030 size=48 callers=0 calls=1
   calls: sub_3e1e50
*/
void sub_3e2030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2030ULL || rel >= 0x3e2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2060 size=592 callers=0 calls=11
   calls: sub_309730, sub_3a4560, sub_3a7a60, sub_3a7eb0, sub_3c2a50, sub_3c2ec0, sub_3e22b0, sub_3e2d30, sub_3e2f30, sub_3e2f70, sub_3e2f90
*/
void sub_3e2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2060ULL || rel >= 0x3e22b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e22b0 size=176 callers=1 calls=3
   calls: sub_30ac40, sub_30acb0, sub_314a70
*/
void sub_3e22b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e22b0ULL || rel >= 0x3e2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2360 size=16 callers=0 calls=0
*/
void sub_3e2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2360ULL || rel >= 0x3e2370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2370 size=32 callers=0 calls=0
*/
void sub_3e2370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2370ULL || rel >= 0x3e2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2390 size=16 callers=2 calls=0
*/
void sub_3e2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2390ULL || rel >= 0x3e23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e23a0 size=208 callers=1 calls=3
   calls: sub_3a7eb0, sub_3a7f20, sub_3e2ee0
*/
void sub_3e23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e23a0ULL || rel >= 0x3e2470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2470 size=16 callers=0 calls=0
*/
void sub_3e2470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2470ULL || rel >= 0x3e2480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2480 size=16 callers=0 calls=0
*/
void sub_3e2480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2480ULL || rel >= 0x3e2490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2490 size=48 callers=0 calls=0
*/
void sub_3e2490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2490ULL || rel >= 0x3e24c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e24c0 size=48 callers=0 calls=0
*/
void sub_3e24c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e24c0ULL || rel >= 0x3e24f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e24f0 size=48 callers=0 calls=0
*/
void sub_3e24f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e24f0ULL || rel >= 0x3e2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2520 size=48 callers=0 calls=0
*/
void sub_3e2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2520ULL || rel >= 0x3e2550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2550 size=128 callers=2 calls=1
   calls: sub_38cab0
*/
void sub_3e2550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2550ULL || rel >= 0x3e25d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e25d0 size=192 callers=0 calls=4
   calls: sub_3a45b0, sub_3c2bc0, sub_3c2c10, sub_3c2c30
*/
void sub_3e25d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e25d0ULL || rel >= 0x3e2690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2690 size=16 callers=0 calls=0
*/
void sub_3e2690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2690ULL || rel >= 0x3e26a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e26a0 size=592 callers=1 calls=5
   calls: sub_3047c0, sub_3c2a80, sub_3c2c10, sub_3c2c30, sub_3e36c0
*/
void sub_3e26a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e26a0ULL || rel >= 0x3e28f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e28f0 size=416 callers=1 calls=7
   calls: sub_3047c0, sub_3c2a80, sub_3c2c30, sub_3e3470, sub_3e3550, sub_3e3580, sub_3e3830
*/
void sub_3e28f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e28f0ULL || rel >= 0x3e2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2a90 size=224 callers=0 calls=3
   calls: sub_30abc0, sub_3149f0, sub_3351b0
*/
void sub_3e2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2a90ULL || rel >= 0x3e2b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2b70 size=16 callers=0 calls=0
*/
void sub_3e2b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2b70ULL || rel >= 0x3e2b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2b80 size=16 callers=0 calls=0
*/
void sub_3e2b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2b80ULL || rel >= 0x3e2b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2b90 size=16 callers=0 calls=0
*/
void sub_3e2b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2b90ULL || rel >= 0x3e2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2ba0 size=16 callers=0 calls=0
*/
void sub_3e2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2ba0ULL || rel >= 0x3e2bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2bb0 size=16 callers=0 calls=0
*/
void sub_3e2bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2bb0ULL || rel >= 0x3e2bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2bc0 size=16 callers=0 calls=0
*/
void sub_3e2bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2bc0ULL || rel >= 0x3e2bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2bd0 size=16 callers=0 calls=0
*/
void sub_3e2bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2bd0ULL || rel >= 0x3e2be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2be0 size=16 callers=0 calls=0
*/
void sub_3e2be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2be0ULL || rel >= 0x3e2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2bf0 size=16 callers=0 calls=0
*/
void sub_3e2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2bf0ULL || rel >= 0x3e2c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2c00 size=16 callers=0 calls=0
*/
void sub_3e2c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2c00ULL || rel >= 0x3e2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2c10 size=16 callers=0 calls=0
*/
void sub_3e2c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2c10ULL || rel >= 0x3e2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2c20 size=16 callers=0 calls=0
*/
void sub_3e2c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2c20ULL || rel >= 0x3e2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2c30 size=16 callers=0 calls=0
*/
void sub_3e2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2c30ULL || rel >= 0x3e2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2c40 size=16 callers=0 calls=0
*/
void sub_3e2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2c40ULL || rel >= 0x3e2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2c50 size=16 callers=0 calls=0
*/
void sub_3e2c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2c50ULL || rel >= 0x3e2c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2c60 size=16 callers=0 calls=0
*/
void sub_3e2c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2c60ULL || rel >= 0x3e2c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2c70 size=16 callers=0 calls=0
*/
void sub_3e2c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2c70ULL || rel >= 0x3e2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2c80 size=16 callers=0 calls=0
*/
void sub_3e2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2c80ULL || rel >= 0x3e2c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2c90 size=16 callers=0 calls=0
*/
void sub_3e2c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2c90ULL || rel >= 0x3e2ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2ca0 size=16 callers=0 calls=0
*/
void sub_3e2ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2ca0ULL || rel >= 0x3e2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2cb0 size=16 callers=0 calls=0
*/
void sub_3e2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2cb0ULL || rel >= 0x3e2cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2cc0 size=80 callers=1 calls=0
*/
void sub_3e2cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2cc0ULL || rel >= 0x3e2d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2d10 size=16 callers=1 calls=0
*/
void sub_3e2d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2d10ULL || rel >= 0x3e2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2d20 size=16 callers=0 calls=0
*/
void sub_3e2d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2d20ULL || rel >= 0x3e2d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2d30 size=432 callers=1 calls=0
*/
void sub_3e2d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2d30ULL || rel >= 0x3e2ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2ee0 size=80 callers=1 calls=0
*/
void sub_3e2ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2ee0ULL || rel >= 0x3e2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2f30 size=64 callers=1 calls=0
*/
void sub_3e2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2f30ULL || rel >= 0x3e2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2f70 size=32 callers=1 calls=0
*/
void sub_3e2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2f70ULL || rel >= 0x3e2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e2f90 size=352 callers=1 calls=1
   calls: sub_3e30f0
*/
void sub_3e2f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e2f90ULL || rel >= 0x3e30f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e30f0 size=896 callers=4 calls=0
*/
void sub_3e30f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e30f0ULL || rel >= 0x3e3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3470 size=224 callers=1 calls=0
*/
void sub_3e3470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3470ULL || rel >= 0x3e3550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3550 size=48 callers=1 calls=0
*/
void sub_3e3550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3550ULL || rel >= 0x3e3580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3580 size=320 callers=1 calls=1
   calls: sub_3e30f0
*/
void sub_3e3580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3580ULL || rel >= 0x3e36c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e36c0 size=368 callers=1 calls=2
   calls: sub_3045e0, sub_3e30f0
*/
void sub_3e36c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e36c0ULL || rel >= 0x3e3830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3830 size=208 callers=1 calls=1
   calls: sub_3e30f0
*/
void sub_3e3830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3830ULL || rel >= 0x3e3900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3900 size=16 callers=0 calls=0
*/
void sub_3e3900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3900ULL || rel >= 0x3e3910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3910 size=960 callers=0 calls=13
   calls: sub_3045e0, sub_3047c0, sub_397ad0, sub_3e6310, sub_3e63f0, sub_3e65a0, sub_3e66b0, sub_3e78d0, sub_3e7b00, sub_3edfd0, sub_3f3250, sub_3f4880
   ... +1 more
*/
void sub_3e3910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3910ULL || rel >= 0x3e3cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3cd0 size=720 callers=1 calls=5
   calls: sub_3047c0, sub_305660, sub_3326d0, sub_362cc0, sub_3ed720
*/
void sub_3e3cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3cd0ULL || rel >= 0x3e3fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3fa0 size=16 callers=6 calls=0
*/
void sub_3e3fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3fa0ULL || rel >= 0x3e3fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e3fb0 size=1104 callers=0 calls=7
   calls: sub_3045e0, sub_305450, sub_3323d0, sub_3e3cd0, sub_3e4400, sub_3ed6e0, sub_3ed960
*/
void sub_3e3fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e3fb0ULL || rel >= 0x3e4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4400 size=384 callers=17 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3e4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4400ULL || rel >= 0x3e4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4580 size=192 callers=0 calls=4
   calls: sub_3047c0, sub_397bc0, sub_3e5580, sub_3e5720
*/
void sub_3e4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4580ULL || rel >= 0x3e4640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4640 size=80 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3e4640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4640ULL || rel >= 0x3e4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4690 size=208 callers=0 calls=3
   calls: sub_35a9a0, sub_362cc0, sub_397bc0
*/
void sub_3e4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4690ULL || rel >= 0x3e4760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4760 size=160 callers=0 calls=3
   calls: sub_3047c0, sub_397bc0, sub_3e59b0
*/
void sub_3e4760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4760ULL || rel >= 0x3e4800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4800 size=208 callers=0 calls=3
   calls: sub_3047c0, sub_362cc0, sub_397bc0
*/
void sub_3e4800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4800ULL || rel >= 0x3e48d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e48d0 size=480 callers=0 calls=5
   calls: sub_3047c0, sub_397bc0, sub_3e5be0, sub_3e5d20, sub_3f4c70
*/
void sub_3e48d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e48d0ULL || rel >= 0x3e4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4ab0 size=80 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3e4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4ab0ULL || rel >= 0x3e4b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4b00 size=560 callers=0 calls=3
   calls: sub_3047c0, sub_397bc0, sub_3f4c80
*/
void sub_3e4b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4b00ULL || rel >= 0x3e4d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4d30 size=208 callers=0 calls=3
   calls: sub_397bc0, sub_398880, sub_3e5e80
*/
void sub_3e4d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4d30ULL || rel >= 0x3e4e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4e00 size=304 callers=0 calls=4
   calls: sub_3047c0, sub_32bda0, sub_3961e0, sub_397bc0
*/
void sub_3e4e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4e00ULL || rel >= 0x3e4f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4f30 size=160 callers=0 calls=1
   calls: sub_397bc0
*/
void sub_3e4f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4f30ULL || rel >= 0x3e4fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e4fd0 size=96 callers=0 calls=1
   calls: sub_3edcf0
*/
void sub_3e4fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e4fd0ULL || rel >= 0x3e5030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5030 size=80 callers=0 calls=1
   calls: sub_3eb700
*/
void sub_3e5030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5030ULL || rel >= 0x3e5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5080 size=144 callers=0 calls=2
   calls: sub_304740, sub_3e6b10
*/
void sub_3e5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5080ULL || rel >= 0x3e5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5110 size=80 callers=0 calls=1
   calls: sub_3ec6d0
*/
void sub_3e5110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5110ULL || rel >= 0x3e5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5160 size=368 callers=0 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3ec7b0
*/
void sub_3e5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5160ULL || rel >= 0x3e52d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e52d0 size=80 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3e52d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e52d0ULL || rel >= 0x3e5320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5320 size=80 callers=0 calls=1
   calls: sub_3eddd0
*/
void sub_3e5320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5320ULL || rel >= 0x3e5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5370 size=240 callers=0 calls=1
   calls: sub_397bc0
*/
void sub_3e5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5370ULL || rel >= 0x3e5460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5460 size=128 callers=0 calls=2
   calls: sub_3047c0, sub_3ed2b0
*/
void sub_3e5460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5460ULL || rel >= 0x3e54e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e54e0 size=80 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3e54e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e54e0ULL || rel >= 0x3e5530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5530 size=80 callers=0 calls=1
   calls: sub_3edd30
*/
void sub_3e5530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5530ULL || rel >= 0x3e5580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5580 size=416 callers=1 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3e6ea0
*/
void sub_3e5580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5580ULL || rel >= 0x3e5720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5720 size=240 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3e5720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5720ULL || rel >= 0x3e5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5810 size=304 callers=0 calls=3
   calls: sub_3045e0, sub_3358a0, sub_336100
*/
void sub_3e5810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5810ULL || rel >= 0x3e5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5940 size=112 callers=0 calls=2
   calls: sub_3358a0, sub_336100
*/
void sub_3e5940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5940ULL || rel >= 0x3e59b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e59b0 size=336 callers=2 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3e6ea0
*/
void sub_3e59b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e59b0ULL || rel >= 0x3e5b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5b00 size=112 callers=0 calls=2
   calls: sub_3358a0, sub_336100
*/
void sub_3e5b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5b00ULL || rel >= 0x3e5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5b70 size=112 callers=0 calls=2
   calls: sub_3358a0, sub_336100
*/
void sub_3e5b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5b70ULL || rel >= 0x3e5be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5be0 size=320 callers=1 calls=2
   calls: sub_3e7210, sub_3e7380
*/
void sub_3e5be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5be0ULL || rel >= 0x3e5d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5d20 size=352 callers=1 calls=2
   calls: sub_3e7510, sub_3e76f0
*/
void sub_3e5d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5d20ULL || rel >= 0x3e5e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e5e80 size=608 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3e5e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e5e80ULL || rel >= 0x3e60e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e60e0 size=176 callers=0 calls=3
   calls: sub_335850, sub_3358a0, sub_336100
*/
void sub_3e60e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e60e0ULL || rel >= 0x3e6190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6190 size=384 callers=0 calls=2
   calls: sub_3358a0, sub_336100
*/
void sub_3e6190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6190ULL || rel >= 0x3e6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6310 size=224 callers=1 calls=3
   calls: sub_3047c0, sub_3e67c0, sub_3e8b40
*/
void sub_3e6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6310ULL || rel >= 0x3e63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e63f0 size=432 callers=1 calls=7
   calls: sub_3f1060, sub_3f10d0, sub_3f1780, sub_3f1e90, sub_3f2cd0, sub_3f33a0, sub_3f4900
*/
void sub_3e63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e63f0ULL || rel >= 0x3e65a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e65a0 size=272 callers=1 calls=8
   calls: sub_3047c0, sub_3e6920, sub_3e8910, sub_3f3940, sub_3f3b20, sub_3f4130, sub_3f42d0, sub_3f44c0
*/
void sub_3e65a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e65a0ULL || rel >= 0x3e66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e66b0 size=272 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3e66b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e66b0ULL || rel >= 0x3e67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e67c0 size=352 callers=1 calls=2
   calls: sub_3e8850, sub_3edcb0
*/
void sub_3e67c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e67c0ULL || rel >= 0x3e6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6920 size=352 callers=1 calls=2
   calls: sub_3e8850, sub_3edcb0
*/
void sub_3e6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6920ULL || rel >= 0x3e6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6a80 size=48 callers=0 calls=0
*/
void sub_3e6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6a80ULL || rel >= 0x3e6ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6ab0 size=48 callers=0 calls=0
*/
void sub_3e6ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6ab0ULL || rel >= 0x3e6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6ae0 size=48 callers=0 calls=0
*/
void sub_3e6ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6ae0ULL || rel >= 0x3e6b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6b10 size=288 callers=8 calls=1
   calls: sub_3047c0
*/
void sub_3e6b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6b10ULL || rel >= 0x3e6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6c30 size=176 callers=0 calls=2
   calls: sub_358a80, sub_35a060
*/
void sub_3e6c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6c30ULL || rel >= 0x3e6ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6ce0 size=176 callers=0 calls=2
   calls: sub_358a80, sub_35a060
*/
void sub_3e6ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6ce0ULL || rel >= 0x3e6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6d90 size=16 callers=0 calls=0
*/
void sub_3e6d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6d90ULL || rel >= 0x3e6da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6da0 size=128 callers=0 calls=0
*/
void sub_3e6da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6da0ULL || rel >= 0x3e6e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6e20 size=128 callers=0 calls=0
*/
void sub_3e6e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6e20ULL || rel >= 0x3e6ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e6ea0 size=368 callers=6 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_3e6ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e6ea0ULL || rel >= 0x3e7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7010 size=128 callers=0 calls=0
*/
void sub_3e7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7010ULL || rel >= 0x3e7090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7090 size=128 callers=0 calls=0
*/
void sub_3e7090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7090ULL || rel >= 0x3e7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7110 size=128 callers=0 calls=0
*/
void sub_3e7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7110ULL || rel >= 0x3e7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7190 size=128 callers=0 calls=0
*/
void sub_3e7190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7190ULL || rel >= 0x3e7210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7210 size=368 callers=1 calls=2
   calls: sub_3047c0, sub_3e7380
*/
void sub_3e7210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7210ULL || rel >= 0x3e7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7380 size=400 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3e7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7380ULL || rel >= 0x3e7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7510 size=480 callers=1 calls=2
   calls: sub_3047c0, sub_3e76f0
*/
void sub_3e7510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7510ULL || rel >= 0x3e76f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e76f0 size=480 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3e76f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e76f0ULL || rel >= 0x3e78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e78d0 size=560 callers=1 calls=4
   calls: sub_3e7b00, sub_3f4880, sub_3f4900, sub_3f4a50
*/
void sub_3e78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e78d0ULL || rel >= 0x3e7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7b00 size=304 callers=3 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3e3fa0
*/
void sub_3e7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7b00ULL || rel >= 0x3e7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7c30 size=64 callers=4 calls=2
   calls: sub_3047c0, sub_3e3fa0
*/
void sub_3e7c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7c30ULL || rel >= 0x3e7c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7c70 size=64 callers=3 calls=2
   calls: sub_3047c0, sub_3e3fa0
*/
void sub_3e7c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7c70ULL || rel >= 0x3e7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7cb0 size=208 callers=1 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3e3fa0
*/
void sub_3e7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7cb0ULL || rel >= 0x3e7d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7d80 size=80 callers=2 calls=0
*/
void sub_3e7d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7d80ULL || rel >= 0x3e7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7dd0 size=288 callers=5 calls=8
   calls: sub_304740, sub_3047c0, sub_397ad0, sub_397bc0, sub_397c20, sub_398060, sub_3e7ef0, sub_3e8220
*/
void sub_3e7dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7dd0ULL || rel >= 0x3e7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e7ef0 size=816 callers=11 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_3e7ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e7ef0ULL || rel >= 0x3e8220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e8220 size=288 callers=1 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3e6ea0
*/
void sub_3e8220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e8220ULL || rel >= 0x3e8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e8340 size=224 callers=4 calls=2
   calls: sub_3047c0, sub_397bc0
*/
void sub_3e8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e8340ULL || rel >= 0x3e8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e8420 size=400 callers=0 calls=5
   calls: sub_3047c0, sub_397bc0, sub_397f50, sub_398880, sub_3e7dd0
*/
void sub_3e8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e8420ULL || rel >= 0x3e85b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e85b0 size=384 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3e85b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e85b0ULL || rel >= 0x3e8730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e8730 size=288 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3e8730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e8730ULL || rel >= 0x3e8850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e8850 size=192 callers=2 calls=1
   calls: sub_3eb5a0
*/
void sub_3e8850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e8850ULL || rel >= 0x3e8910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e8910 size=560 callers=1 calls=3
   calls: sub_3ea390, sub_3ea510, sub_3eaef0
*/
void sub_3e8910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e8910ULL || rel >= 0x3e8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e8b40 size=112 callers=1 calls=1
   calls: sub_3e8bb0
*/
void sub_3e8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e8b40ULL || rel >= 0x3e8bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e8bb0 size=448 callers=3 calls=3
   calls: sub_3047c0, sub_3e7dd0, sub_3ea8f0
*/
void sub_3e8bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e8bb0ULL || rel >= 0x3e8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e8d70 size=1120 callers=1 calls=7
   calls: sub_3047c0, sub_398880, sub_3e7dd0, sub_3e9330, sub_3e96a0, sub_3e9930, sub_3e9f30
*/
void sub_3e8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e8d70ULL || rel >= 0x3e91d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e91d0 size=352 callers=0 calls=4
   calls: sub_3047c0, sub_398880, sub_398c10, sub_3e7dd0
*/
void sub_3e91d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e91d0ULL || rel >= 0x3e9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9330 size=880 callers=2 calls=6
   calls: sub_3e9b50, sub_3e9cd0, sub_3eafc0, sub_3eb1f0, sub_3eb230, sub_3eb270
*/
void sub_3e9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9330ULL || rel >= 0x3e96a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e96a0 size=656 callers=1 calls=3
   calls: sub_3e9b50, sub_3e9cd0, sub_3eb230
*/
void sub_3e96a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e96a0ULL || rel >= 0x3e9930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9930 size=544 callers=1 calls=4
   calls: sub_3e9b50, sub_3eaef0, sub_3eafc0, sub_3eb270
*/
void sub_3e9930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9930ULL || rel >= 0x3e9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9b50 size=384 callers=3 calls=6
   calls: sub_32bda0, sub_3961e0, sub_396d50, sub_396d70, sub_39eff0, sub_3e9e60
*/
void sub_3e9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9b50ULL || rel >= 0x3e9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9cd0 size=400 callers=2 calls=4
   calls: sub_3eafc0, sub_3eb270, sub_3eb440, sub_3eb6b0
*/
void sub_3e9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9cd0ULL || rel >= 0x3e9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9e60 size=208 callers=14 calls=4
   calls: sub_3045e0, sub_3047c0, sub_395fc0, sub_3e6ea0
*/
void sub_3e9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9e60ULL || rel >= 0x3e9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003e9f30 size=736 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3e9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3e9f30ULL || rel >= 0x3ea210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea210 size=128 callers=0 calls=0
*/
void sub_3ea210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea210ULL || rel >= 0x3ea290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea290 size=128 callers=0 calls=0
*/
void sub_3ea290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea290ULL || rel >= 0x3ea310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea310 size=128 callers=0 calls=0
*/
void sub_3ea310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea310ULL || rel >= 0x3ea390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea390 size=384 callers=2 calls=1
   calls: sub_3ea5f0
*/
void sub_3ea390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea390ULL || rel >= 0x3ea510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea510 size=224 callers=2 calls=1
   calls: sub_3ea5f0
*/
void sub_3ea510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea510ULL || rel >= 0x3ea5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea5f0 size=272 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3ea5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea5f0ULL || rel >= 0x3ea700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea700 size=496 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3ea700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea700ULL || rel >= 0x3ea8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ea8f0 size=1008 callers=2 calls=3
   calls: sub_3e8bb0, sub_3ea390, sub_3ea510
*/
void sub_3ea8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ea8f0ULL || rel >= 0x3eace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eace0 size=528 callers=1 calls=0
*/
void sub_3eace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eace0ULL || rel >= 0x3eaef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eaef0 size=208 callers=2 calls=0
*/
void sub_3eaef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eaef0ULL || rel >= 0x3eafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eafc0 size=560 callers=3 calls=0
*/
void sub_3eafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eafc0ULL || rel >= 0x3eb1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb1f0 size=64 callers=2 calls=0
*/
void sub_3eb1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb1f0ULL || rel >= 0x3eb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb230 size=64 callers=2 calls=0
*/
void sub_3eb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb230ULL || rel >= 0x3eb270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb270 size=464 callers=3 calls=0
*/
void sub_3eb270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb270ULL || rel >= 0x3eb440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb440 size=352 callers=2 calls=0
*/
void sub_3eb440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb440ULL || rel >= 0x3eb5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb5a0 size=272 callers=1 calls=0
*/
void sub_3eb5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb5a0ULL || rel >= 0x3eb6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb6b0 size=80 callers=1 calls=0
*/
void sub_3eb6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb6b0ULL || rel >= 0x3eb700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eb700 size=832 callers=1 calls=7
   calls: sub_304740, sub_3e6b10, sub_3eba40, sub_3ebb80, sub_3ebed0, sub_3ee1d0, sub_3ee4a0
*/
void sub_3eb700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eb700ULL || rel >= 0x3eba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eba40 size=320 callers=4 calls=2
   calls: sub_304740, sub_3e6b10
*/
void sub_3eba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eba40ULL || rel >= 0x3ebb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ebb80 size=848 callers=4 calls=3
   calls: sub_304740, sub_3047c0, sub_3f0360
*/
void sub_3ebb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ebb80ULL || rel >= 0x3ebed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ebed0 size=2048 callers=1 calls=6
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_3047c0, sub_3ee040, sub_3ef2f0
*/
void sub_3ebed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ebed0ULL || rel >= 0x3ec6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec6d0 size=224 callers=1 calls=2
   calls: sub_3eba40, sub_3ebb80
*/
void sub_3ec6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec6d0ULL || rel >= 0x3ec7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec7b0 size=432 callers=1 calls=5
   calls: sub_3047c0, sub_3e8340, sub_3e8730, sub_3ec960, sub_3ee840
*/
void sub_3ec7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec7b0ULL || rel >= 0x3ec960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ec960 size=336 callers=2 calls=1
   calls: sub_3045e0
*/
void sub_3ec960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ec960ULL || rel >= 0x3ecab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ecab0 size=560 callers=2 calls=6
   calls: sub_3047c0, sub_3e8340, sub_3e8730, sub_3ec960, sub_3ecce0, sub_3ee840
   ref: Outdoors
*/
void Outdoors(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ecab0ULL || rel >= 0x3ecce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ecce0 size=1488 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3ecce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ecce0ULL || rel >= 0x3ed2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ed2b0 size=816 callers=1 calls=6
   calls: Outdoors, sub_3045e0, sub_3ea700, sub_3ed5e0, sub_3eebe0, sub_3eef50
*/
void sub_3ed2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ed2b0ULL || rel >= 0x3ed5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ed5e0 size=256 callers=3 calls=2
   calls: sub_3047c0, sub_3e85b0
*/
void sub_3ed5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ed5e0ULL || rel >= 0x3ed6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ed6e0 size=64 callers=1 calls=0
*/
void sub_3ed6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ed6e0ULL || rel >= 0x3ed720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ed720 size=80 callers=1 calls=2
   calls: sub_3ed770, sub_3f09f0
*/
void sub_3ed720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ed720ULL || rel >= 0x3ed770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ed770 size=432 callers=2 calls=5
   calls: sub_3047c0, sub_3eba40, sub_3ebb80, sub_3edaa0, sub_3f09f0
*/
void sub_3ed770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ed770ULL || rel >= 0x3ed920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ed920 size=64 callers=0 calls=1
   calls: sub_3f09f0
*/
void sub_3ed920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ed920ULL || rel >= 0x3ed960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ed960 size=320 callers=1 calls=2
   calls: sub_3045e0, sub_3ed770
*/
void sub_3ed960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ed960ULL || rel >= 0x3edaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edaa0 size=528 callers=1 calls=3
   calls: sub_3047c0, sub_3e8340, sub_3ed5e0
*/
void sub_3edaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edaa0ULL || rel >= 0x3edcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edcb0 size=64 callers=2 calls=0
*/
void sub_3edcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edcb0ULL || rel >= 0x3edcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edcf0 size=64 callers=1 calls=0
*/
void sub_3edcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edcf0ULL || rel >= 0x3edd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edd30 size=160 callers=1 calls=1
   calls: sub_3ed5e0
*/
void sub_3edd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edd30ULL || rel >= 0x3eddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003eddd0 size=352 callers=1 calls=2
   calls: sub_3047c0, sub_3e8340
*/
void sub_3eddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3eddd0ULL || rel >= 0x3edf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edf30 size=160 callers=0 calls=1
   calls: sub_3e8d70
*/
void sub_3edf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edf30ULL || rel >= 0x3edfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003edfd0 size=112 callers=1 calls=0
*/
void sub_3edfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3edfd0ULL || rel >= 0x3ee040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee040 size=400 callers=2 calls=0
*/
void sub_3ee040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee040ULL || rel >= 0x3ee1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee1d0 size=720 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3ee1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee1d0ULL || rel >= 0x3ee4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ee4a0 size=928 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3ee4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ee4a0ULL || rel >= 0x3ee840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

