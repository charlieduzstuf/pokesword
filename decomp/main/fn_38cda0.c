/* main functions 0038cda0..003b3a10 (22 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0038cda0 size=112 callers=0 calls=0
*/
void sub_38cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38cda0ULL || rel >= 0x38ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ce10 size=112 callers=0 calls=0
*/
void sub_38ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ce10ULL || rel >= 0x38ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ce80 size=96 callers=3 calls=0
*/
void sub_38ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ce80ULL || rel >= 0x38cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038cee0 size=192 callers=0 calls=0
*/
void sub_38cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38cee0ULL || rel >= 0x38cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038cfa0 size=192 callers=0 calls=0
*/
void sub_38cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38cfa0ULL || rel >= 0x38d060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d060 size=288 callers=3 calls=3
   calls: sub_3802b0, sub_3bf640, sub_3bf680
*/
void sub_38d060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d060ULL || rel >= 0x38d180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d180 size=192 callers=4 calls=1
   calls: sub_3802b0
*/
void sub_38d180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d180ULL || rel >= 0x38d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d240 size=16 callers=0 calls=0
*/
void sub_38d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d240ULL || rel >= 0x38d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d250 size=16 callers=0 calls=0
*/
void sub_38d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d250ULL || rel >= 0x38d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d260 size=16 callers=0 calls=0
*/
void sub_38d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d260ULL || rel >= 0x38d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d270 size=16 callers=0 calls=0
*/
void sub_38d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d270ULL || rel >= 0x38d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d280 size=32 callers=4 calls=0
*/
void sub_38d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d280ULL || rel >= 0x38d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d2a0 size=32 callers=1 calls=0
*/
void sub_38d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d2a0ULL || rel >= 0x38d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d2c0 size=16 callers=0 calls=0
*/
void sub_38d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d2c0ULL || rel >= 0x38d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d2d0 size=32 callers=1 calls=0
*/
void sub_38d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d2d0ULL || rel >= 0x38d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d2f0 size=32 callers=1 calls=0
*/
void sub_38d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d2f0ULL || rel >= 0x38d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d310 size=32 callers=1 calls=0
*/
void sub_38d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d310ULL || rel >= 0x38d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d330 size=160 callers=1 calls=0
*/
void sub_38d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d330ULL || rel >= 0x38d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d3d0 size=96 callers=0 calls=0
*/
void sub_38d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d3d0ULL || rel >= 0x38d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d430 size=112 callers=0 calls=0
*/
void sub_38d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d430ULL || rel >= 0x38d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d4a0 size=176 callers=1 calls=2
   calls: sub_377830, sub_3798c0
*/
void sub_38d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d4a0ULL || rel >= 0x38d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d550 size=64 callers=1 calls=0
*/
void sub_38d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d550ULL || rel >= 0x38d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038d590 size=1840 callers=2 calls=11
   calls: sub_3045e0, sub_3047c0, sub_3514e0, sub_353010, sub_353330, sub_3536a0, sub_377830, sub_3798c0, sub_381700, sub_384650, sub_3888e0
*/
void sub_38d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38d590ULL || rel >= 0x38dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038dcc0 size=16 callers=0 calls=0
*/
void sub_38dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38dcc0ULL || rel >= 0x38dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038dcd0 size=272 callers=0 calls=2
   calls: sub_34ee20, sub_381700
*/
void sub_38dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38dcd0ULL || rel >= 0x38dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038dde0 size=16 callers=0 calls=0
*/
void sub_38dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38dde0ULL || rel >= 0x38ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ddf0 size=208 callers=0 calls=1
   calls: sub_34ee20
*/
void sub_38ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ddf0ULL || rel >= 0x38dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038dec0 size=240 callers=1 calls=4
   calls: sub_389ec0, sub_38a3b0, sub_395920, sub_3bed00
*/
void sub_38dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38dec0ULL || rel >= 0x38dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038dfb0 size=96 callers=4 calls=1
   calls: sub_38c050
*/
void sub_38dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38dfb0ULL || rel >= 0x38e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e010 size=16 callers=0 calls=0
*/
void sub_38e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e010ULL || rel >= 0x38e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e020 size=16 callers=1 calls=0
*/
void sub_38e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e020ULL || rel >= 0x38e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e030 size=32 callers=1 calls=0
*/
void sub_38e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e030ULL || rel >= 0x38e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e050 size=80 callers=1 calls=0
*/
void sub_38e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e050ULL || rel >= 0x38e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e0a0 size=192 callers=1 calls=1
   calls: sub_35fa60
*/
void sub_38e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e0a0ULL || rel >= 0x38e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e160 size=96 callers=1 calls=1
   calls: sub_38e1c0
*/
void sub_38e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e160ULL || rel >= 0x38e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e1c0 size=432 callers=1 calls=2
   calls: sub_3a7eb0, sub_3a7f20
*/
void sub_38e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e1c0ULL || rel >= 0x38e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e370 size=288 callers=1 calls=2
   calls: sub_3802b0, sub_38c050
*/
void sub_38e370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e370ULL || rel >= 0x38e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e490 size=304 callers=2 calls=2
   calls: sub_3802b0, sub_3bf660
*/
void sub_38e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e490ULL || rel >= 0x38e5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e5c0 size=48 callers=19 calls=0
*/
void sub_38e5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e5c0ULL || rel >= 0x38e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e5f0 size=432 callers=2 calls=3
   calls: sub_353010, sub_3536a0, sub_382ce0
*/
void sub_38e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e5f0ULL || rel >= 0x38e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e7a0 size=192 callers=1 calls=1
   calls: sub_3802b0
*/
void sub_38e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e7a0ULL || rel >= 0x38e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e860 size=128 callers=1 calls=1
   calls: sub_381540
*/
void sub_38e860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e860ULL || rel >= 0x38e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e8e0 size=64 callers=0 calls=1
   calls: sub_38a390
*/
void sub_38e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e8e0ULL || rel >= 0x38e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e920 size=64 callers=0 calls=1
   calls: sub_38a390
*/
void sub_38e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e920ULL || rel >= 0x38e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e960 size=16 callers=0 calls=0
*/
void sub_38e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e960ULL || rel >= 0x38e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e970 size=16 callers=0 calls=0
*/
void sub_38e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e970ULL || rel >= 0x38e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e980 size=16 callers=0 calls=0
*/
void sub_38e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e980ULL || rel >= 0x38e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e990 size=16 callers=0 calls=0
*/
void sub_38e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e990ULL || rel >= 0x38e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038e9a0 size=128 callers=0 calls=2
   calls: sub_3045e0, sub_38b060
*/
void sub_38e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38e9a0ULL || rel >= 0x38ea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ea20 size=96 callers=1 calls=1
   calls: sub_38ea80
*/
void sub_38ea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ea20ULL || rel >= 0x38ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ea80 size=336 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_38ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ea80ULL || rel >= 0x38ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ebd0 size=64 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_38ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ebd0ULL || rel >= 0x38ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ec10 size=368 callers=1 calls=3
   calls: sub_3045e0, sub_3900a0, sub_3a56f0
*/
void sub_38ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ec10ULL || rel >= 0x38ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ed80 size=496 callers=0 calls=6
   calls: sub_3047c0, sub_331150, sub_390cc0, sub_397bc0, sub_3a5700, sub_3a5710
*/
void sub_38ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ed80ULL || rel >= 0x38ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038ef70 size=240 callers=2 calls=0
*/
void sub_38ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38ef70ULL || rel >= 0x38f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f060 size=272 callers=1 calls=0
*/
void sub_38f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f060ULL || rel >= 0x38f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f170 size=224 callers=5 calls=0
*/
void sub_38f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f170ULL || rel >= 0x38f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f250 size=304 callers=1 calls=0
*/
void sub_38f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f250ULL || rel >= 0x38f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f380 size=272 callers=2 calls=0
*/
void sub_38f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f380ULL || rel >= 0x38f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f490 size=208 callers=1 calls=0
*/
void sub_38f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f490ULL || rel >= 0x38f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f560 size=112 callers=1 calls=1
   calls: sub_38f380
*/
void sub_38f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f560ULL || rel >= 0x38f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f5d0 size=272 callers=6 calls=0
*/
void sub_38f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f5d0ULL || rel >= 0x38f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f6e0 size=272 callers=1 calls=0
*/
void sub_38f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f6e0ULL || rel >= 0x38f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f7f0 size=224 callers=2 calls=0
*/
void sub_38f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f7f0ULL || rel >= 0x38f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f8d0 size=240 callers=1 calls=0
*/
void sub_38f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f8d0ULL || rel >= 0x38f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038f9c0 size=144 callers=1 calls=1
   calls: sub_38fdc0
*/
void sub_38f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38f9c0ULL || rel >= 0x38fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038fa50 size=144 callers=1 calls=1
   calls: sub_38fdc0
*/
void sub_38fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38fa50ULL || rel >= 0x38fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038fae0 size=176 callers=4 calls=0
*/
void sub_38fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38fae0ULL || rel >= 0x38fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038fb90 size=144 callers=2 calls=0
*/
void sub_38fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38fb90ULL || rel >= 0x38fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038fc20 size=144 callers=3 calls=0
*/
void sub_38fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38fc20ULL || rel >= 0x38fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038fcb0 size=144 callers=36 calls=0
*/
void sub_38fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38fcb0ULL || rel >= 0x38fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038fd40 size=128 callers=0 calls=0
*/
void sub_38fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38fd40ULL || rel >= 0x38fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0038fdc0 size=736 callers=6 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_38fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x38fdc0ULL || rel >= 0x3900a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003900a0 size=928 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3900a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3900a0ULL || rel >= 0x390440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390440 size=64 callers=11 calls=1
   calls: sub_3047c0
*/
void sub_390440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390440ULL || rel >= 0x390480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390480 size=128 callers=6 calls=1
   calls: sub_3046a0
*/
void sub_390480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390480ULL || rel >= 0x390500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390500 size=64 callers=9 calls=1
   calls: sub_304740
*/
void sub_390500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390500ULL || rel >= 0x390540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390540 size=96 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_390540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390540ULL || rel >= 0x3905a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003905a0 size=112 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3905a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3905a0ULL || rel >= 0x390610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390610 size=208 callers=0 calls=0
*/
void sub_390610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390610ULL || rel >= 0x3906e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003906e0 size=576 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3906e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3906e0ULL || rel >= 0x390920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390920 size=240 callers=1 calls=0
*/
void sub_390920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390920ULL || rel >= 0x390a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390a10 size=688 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_390a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390a10ULL || rel >= 0x390cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390cc0 size=192 callers=1 calls=0
*/
void sub_390cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390cc0ULL || rel >= 0x390d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00390d80 size=704 callers=5 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_390d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x390d80ULL || rel >= 0x391040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391040 size=976 callers=1 calls=5
   calls: sub_3045e0, sub_349be0, sub_385430, sub_391410, sub_3931b0
*/
void sub_391040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391040ULL || rel >= 0x391410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391410 size=256 callers=1 calls=4
   calls: sub_3045e0, sub_3931b0, sub_394ec0, sub_395390
*/
void sub_391410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391410ULL || rel >= 0x391510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391510 size=80 callers=0 calls=1
   calls: sub_391560
*/
void sub_391510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391510ULL || rel >= 0x391560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391560 size=224 callers=4 calls=1
   calls: sub_3047c0
*/
void sub_391560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391560ULL || rel >= 0x391640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391640 size=80 callers=0 calls=1
   calls: sub_391560
*/
void sub_391640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391640ULL || rel >= 0x391690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391690 size=80 callers=0 calls=2
   calls: sub_365ee0, sub_391560
*/
void sub_391690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391690ULL || rel >= 0x3916e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003916e0 size=80 callers=0 calls=2
   calls: sub_365ee0, sub_391560
*/
void sub_3916e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3916e0ULL || rel >= 0x391730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391730 size=208 callers=1 calls=4
   calls: sub_3045e0, sub_3820f0, sub_394ec0, sub_395390
*/
void sub_391730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391730ULL || rel >= 0x391800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391800 size=224 callers=1 calls=3
   calls: sub_3045e0, sub_365e90, sub_391730
*/
void sub_391800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391800ULL || rel >= 0x3918e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003918e0 size=16 callers=0 calls=0
*/
void sub_3918e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3918e0ULL || rel >= 0x3918f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003918f0 size=464 callers=0 calls=1
   calls: sub_3828e0
*/
void sub_3918f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3918f0ULL || rel >= 0x391ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391ac0 size=336 callers=2 calls=5
   calls: sub_3045e0, sub_385c60, sub_391c10, sub_394c80, sub_395ed0
*/
void sub_391ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391ac0ULL || rel >= 0x391c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391c10 size=960 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_391c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391c10ULL || rel >= 0x391fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00391fd0 size=480 callers=1 calls=6
   calls: sub_3045e0, sub_385c60, sub_391c10, sub_394270, sub_3942b0, sub_395ed0
*/
void sub_391fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x391fd0ULL || rel >= 0x3921b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003921b0 size=800 callers=1 calls=7
   calls: sub_3351b0, sub_391ac0, sub_391fd0, sub_3924d0, sub_392770, sub_394700, sub_3947d0
*/
void sub_3921b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3921b0ULL || rel >= 0x3924d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003924d0 size=672 callers=2 calls=4
   calls: sub_3045e0, sub_3047c0, sub_394770, sub_3947a0
*/
void sub_3924d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3924d0ULL || rel >= 0x392770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00392770 size=1296 callers=2 calls=10
   calls: sub_3045e0, sub_3047c0, sub_3924d0, sub_3946d0, sub_394700, sub_394730, sub_394770, sub_3947a0, sub_3947d0, sub_394810
*/
void sub_392770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392770ULL || rel >= 0x392c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00392c80 size=1328 callers=7 calls=7
   calls: sub_3045e0, sub_3351b0, sub_391ac0, sub_392770, sub_394270, sub_3942b0, sub_394c80
*/
void sub_392c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392c80ULL || rel >= 0x3931b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003931b0 size=192 callers=8 calls=2
   calls: sub_33c170, sub_33c330
*/
void sub_3931b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3931b0ULL || rel >= 0x393270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393270 size=16 callers=11 calls=0
*/
void sub_393270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393270ULL || rel >= 0x393280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393280 size=480 callers=3 calls=2
   calls: sub_39d140, sub_3b33a0
*/
void sub_393280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393280ULL || rel >= 0x393460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393460 size=32 callers=0 calls=0
*/
void sub_393460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393460ULL || rel >= 0x393480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393480 size=560 callers=1 calls=0
*/
void sub_393480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393480ULL || rel >= 0x3936b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003936b0 size=32 callers=1 calls=0
*/
void sub_3936b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3936b0ULL || rel >= 0x3936d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003936d0 size=304 callers=0 calls=5
   calls: sub_35b580, sub_35b5d0, sub_3790e0, sub_393980, sub_393e30
*/
void sub_3936d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3936d0ULL || rel >= 0x393800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393800 size=384 callers=0 calls=5
   calls: sub_37f560, sub_37fbd0, sub_380dd0, sub_38e5c0, sub_3921b0
*/
void sub_393800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393800ULL || rel >= 0x393980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393980 size=1200 callers=1 calls=12
   calls: sub_3351b0, sub_35b330, sub_35b5c0, sub_35b5d0, sub_37f080, sub_37f560, sub_37fbd0, sub_380dd0, sub_38e5c0, sub_392c80, sub_393280, sub_393ff0
*/
void sub_393980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393980ULL || rel >= 0x393e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393e30 size=448 callers=1 calls=6
   calls: sub_35b330, sub_37f560, sub_380dd0, sub_38e5c0, sub_392c80, sub_393ff0
*/
void sub_393e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393e30ULL || rel >= 0x393ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393ff0 size=400 callers=2 calls=2
   calls: sub_35b310, sub_37a8f0
*/
void sub_393ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393ff0ULL || rel >= 0x394180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394180 size=160 callers=0 calls=2
   calls: sub_3045e0, sub_35d430
*/
void sub_394180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394180ULL || rel >= 0x394220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394220 size=80 callers=0 calls=0
*/
void sub_394220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394220ULL || rel >= 0x394270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394270 size=64 callers=5 calls=0
*/
void sub_394270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394270ULL || rel >= 0x3942b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003942b0 size=176 callers=5 calls=1
   calls: sub_3045e0
*/
void sub_3942b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3942b0ULL || rel >= 0x394360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394360 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_394360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394360ULL || rel >= 0x3943d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003943d0 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3943d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3943d0ULL || rel >= 0x394440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394440 size=656 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_394440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394440ULL || rel >= 0x3946d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003946d0 size=48 callers=4 calls=0
*/
void sub_3946d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3946d0ULL || rel >= 0x394700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394700 size=48 callers=9 calls=0
*/
void sub_394700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394700ULL || rel >= 0x394730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394730 size=64 callers=3 calls=0
*/
void sub_394730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394730ULL || rel >= 0x394770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394770 size=48 callers=4 calls=0
*/
void sub_394770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394770ULL || rel >= 0x3947a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003947a0 size=48 callers=5 calls=0
*/
void sub_3947a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3947a0ULL || rel >= 0x3947d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003947d0 size=48 callers=5 calls=0
*/
void sub_3947d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3947d0ULL || rel >= 0x394800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394800 size=16 callers=0 calls=0
*/
void sub_394800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394800ULL || rel >= 0x394810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394810 size=64 callers=2 calls=0
*/
void sub_394810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394810ULL || rel >= 0x394850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394850 size=384 callers=0 calls=0
*/
void sub_394850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394850ULL || rel >= 0x3949d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003949d0 size=688 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3949d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3949d0ULL || rel >= 0x394c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394c80 size=48 callers=6 calls=0
*/
void sub_394c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394c80ULL || rel >= 0x394cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394cb0 size=16 callers=0 calls=0
*/
void sub_394cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394cb0ULL || rel >= 0x394cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394cc0 size=16 callers=0 calls=0
*/
void sub_394cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394cc0ULL || rel >= 0x394cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394cd0 size=80 callers=0 calls=0
*/
void sub_394cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394cd0ULL || rel >= 0x394d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394d20 size=16 callers=0 calls=0
*/
void sub_394d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394d20ULL || rel >= 0x394d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394d30 size=112 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_394d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394d30ULL || rel >= 0x394da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394da0 size=144 callers=0 calls=0
*/
void sub_394da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394da0ULL || rel >= 0x394e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394e30 size=144 callers=0 calls=0
*/
void sub_394e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394e30ULL || rel >= 0x394ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394ec0 size=32 callers=2 calls=0
*/
void sub_394ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394ec0ULL || rel >= 0x394ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394ee0 size=32 callers=0 calls=0
*/
void sub_394ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394ee0ULL || rel >= 0x394f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394f00 size=16 callers=0 calls=0
*/
void sub_394f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394f00ULL || rel >= 0x394f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394f10 size=16 callers=0 calls=0
*/
void sub_394f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394f10ULL || rel >= 0x394f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394f20 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_394f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394f20ULL || rel >= 0x394f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394f90 size=16 callers=0 calls=0
*/
void sub_394f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394f90ULL || rel >= 0x394fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394fa0 size=32 callers=0 calls=0
*/
void sub_394fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394fa0ULL || rel >= 0x394fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394fc0 size=336 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_394fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394fc0ULL || rel >= 0x395110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395110 size=256 callers=0 calls=0
*/
void sub_395110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395110ULL || rel >= 0x395210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395210 size=16 callers=0 calls=0
*/
void sub_395210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395210ULL || rel >= 0x395220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395220 size=32 callers=0 calls=0
*/
void sub_395220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395220ULL || rel >= 0x395240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395240 size=32 callers=0 calls=0
*/
void sub_395240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395240ULL || rel >= 0x395260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395260 size=160 callers=0 calls=0
*/
void sub_395260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395260ULL || rel >= 0x395300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395300 size=64 callers=0 calls=0
*/
void sub_395300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395300ULL || rel >= 0x395340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395340 size=80 callers=0 calls=0
*/
void sub_395340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395340ULL || rel >= 0x395390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395390 size=32 callers=2 calls=0
*/
void sub_395390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395390ULL || rel >= 0x3953b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003953b0 size=32 callers=0 calls=0
*/
void sub_3953b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3953b0ULL || rel >= 0x3953d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003953d0 size=16 callers=0 calls=0
*/
void sub_3953d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3953d0ULL || rel >= 0x3953e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003953e0 size=16 callers=0 calls=0
*/
void sub_3953e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3953e0ULL || rel >= 0x3953f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003953f0 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3953f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3953f0ULL || rel >= 0x395460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395460 size=16 callers=0 calls=0
*/
void sub_395460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395460ULL || rel >= 0x395470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395470 size=16 callers=0 calls=0
*/
void sub_395470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395470ULL || rel >= 0x395480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395480 size=320 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_395480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395480ULL || rel >= 0x3955c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003955c0 size=224 callers=0 calls=0
*/
void sub_3955c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3955c0ULL || rel >= 0x3956a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003956a0 size=16 callers=0 calls=0
*/
void sub_3956a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3956a0ULL || rel >= 0x3956b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003956b0 size=16 callers=0 calls=0
*/
void sub_3956b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3956b0ULL || rel >= 0x3956c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003956c0 size=80 callers=0 calls=0
*/
void sub_3956c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3956c0ULL || rel >= 0x395710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395710 size=112 callers=0 calls=0
*/
void sub_395710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395710ULL || rel >= 0x395780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395780 size=16 callers=0 calls=0
*/
void sub_395780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395780ULL || rel >= 0x395790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395790 size=80 callers=0 calls=1
   calls: sub_3bbf80
*/
void sub_395790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395790ULL || rel >= 0x3957e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003957e0 size=80 callers=0 calls=2
   calls: sub_362d20, sub_3bbf80
*/
void sub_3957e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3957e0ULL || rel >= 0x395830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395830 size=240 callers=6 calls=1
   calls: sub_3045e0
*/
void sub_395830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395830ULL || rel >= 0x395920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395920 size=256 callers=10 calls=1
   calls: sub_3045e0
*/
void sub_395920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395920ULL || rel >= 0x395a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395a20 size=272 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_395a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395a20ULL || rel >= 0x395b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395b30 size=112 callers=1 calls=0
*/
void sub_395b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395b30ULL || rel >= 0x395ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395ba0 size=272 callers=0 calls=2
   calls: sub_3352a0, sub_395cb0
*/
void sub_395ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395ba0ULL || rel >= 0x395cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395cb0 size=272 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_395cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395cb0ULL || rel >= 0x395dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395dc0 size=272 callers=0 calls=2
   calls: sub_3352a0, sub_395cb0
*/
void sub_395dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395dc0ULL || rel >= 0x395ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395ed0 size=240 callers=3 calls=1
   calls: sub_3045e0
*/
void sub_395ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395ed0ULL || rel >= 0x395fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395fc0 size=144 callers=1 calls=0
*/
void sub_395fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395fc0ULL || rel >= 0x396050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396050 size=352 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_396050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396050ULL || rel >= 0x3961b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003961b0 size=48 callers=0 calls=1
   calls: sub_396050
*/
void sub_3961b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3961b0ULL || rel >= 0x3961e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003961e0 size=304 callers=8 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3961e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3961e0ULL || rel >= 0x396310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396310 size=1744 callers=3 calls=5
   calls: sub_3045e0, sub_32c040, sub_32e540, sub_350c50, sub_3969e0
*/
void sub_396310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396310ULL || rel >= 0x3969e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003969e0 size=384 callers=1 calls=2
   calls: sub_32e350, sub_39eff0
*/
void sub_3969e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3969e0ULL || rel >= 0x396b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396b60 size=64 callers=0 calls=1
   calls: sub_396ba0
*/
void sub_396b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396b60ULL || rel >= 0x396ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396ba0 size=432 callers=1 calls=2
   calls: sub_396f70, sub_397220
*/
void sub_396ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396ba0ULL || rel >= 0x396d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396d50 size=32 callers=1 calls=0
*/
void sub_396d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396d50ULL || rel >= 0x396d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396d70 size=32 callers=1 calls=0
*/
void sub_396d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396d70ULL || rel >= 0x396d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396d90 size=432 callers=0 calls=2
   calls: sub_396f70, sub_397220
*/
void sub_396d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396d90ULL || rel >= 0x396f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396f40 size=48 callers=0 calls=0
*/
void sub_396f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396f40ULL || rel >= 0x396f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396f70 size=688 callers=4 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_396f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396f70ULL || rel >= 0x397220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397220 size=304 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_397220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397220ULL || rel >= 0x397350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397350 size=128 callers=0 calls=0
*/
void sub_397350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397350ULL || rel >= 0x3973d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003973d0 size=128 callers=0 calls=0
*/
void sub_3973d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3973d0ULL || rel >= 0x397450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397450 size=128 callers=0 calls=0
*/
void sub_397450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397450ULL || rel >= 0x3974d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003974d0 size=128 callers=0 calls=0
*/
void sub_3974d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3974d0ULL || rel >= 0x397550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397550 size=32 callers=1 calls=0
*/
void sub_397550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397550ULL || rel >= 0x397570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397570 size=64 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_397570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397570ULL || rel >= 0x3975b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003975b0 size=128 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3975b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3975b0ULL || rel >= 0x397630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397630 size=368 callers=1 calls=2
   calls: sub_3047c0, sub_3977a0
*/
void sub_397630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397630ULL || rel >= 0x3977a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003977a0 size=816 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_3977a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3977a0ULL || rel >= 0x397ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397ad0 size=240 callers=3 calls=1
   calls: sub_3047c0
*/
void sub_397ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397ad0ULL || rel >= 0x397bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397bc0 size=96 callers=47 calls=0
*/
void sub_397bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397bc0ULL || rel >= 0x397c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397c20 size=816 callers=2 calls=7
   calls: sub_3045e0, sub_3047c0, sub_35b0d0, sub_3961e0, sub_399620, sub_3a56f0, sub_3e9e60
*/
void sub_397c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397c20ULL || rel >= 0x397f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397f50 size=272 callers=2 calls=2
   calls: sub_32bda0, sub_3961e0
*/
void sub_397f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397f50ULL || rel >= 0x398060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398060 size=544 callers=2 calls=6
   calls: sub_35ab00, sub_35ab50, sub_35ad50, sub_35b0d0, sub_398280, sub_3c5b10
*/
void sub_398060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398060ULL || rel >= 0x398280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398280 size=320 callers=3 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3e6ea0
*/
void sub_398280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398280ULL || rel >= 0x3983c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003983c0 size=432 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_3983c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3983c0ULL || rel >= 0x398570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398570 size=544 callers=1 calls=7
   calls: sub_3045e0, sub_35ab00, sub_35ab50, sub_35ad50, sub_35b0d0, sub_3983c0, sub_3c5b10
*/
void sub_398570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398570ULL || rel >= 0x398790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398790 size=176 callers=1 calls=3
   calls: sub_35aec0, sub_3c5b10, sub_3e9e60
*/
void sub_398790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398790ULL || rel >= 0x398840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398840 size=64 callers=1 calls=0
*/
void sub_398840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398840ULL || rel >= 0x398880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398880 size=256 callers=7 calls=5
   calls: sub_35a8f0, sub_35b0d0, sub_398280, sub_3983c0, sub_3e9e60
*/
void sub_398880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398880ULL || rel >= 0x398980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398980 size=304 callers=1 calls=4
   calls: sub_35a190, sub_35a790, sub_35b0d0, sub_398280
*/
void sub_398980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398980ULL || rel >= 0x398ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398ab0 size=144 callers=1 calls=1
   calls: sub_32c220
*/
void sub_398ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398ab0ULL || rel >= 0x398b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398b40 size=208 callers=1 calls=2
   calls: sub_35b0d0, sub_3e9e60
*/
void sub_398b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398b40ULL || rel >= 0x398c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398c10 size=160 callers=9 calls=2
   calls: sub_35b0d0, sub_3e9e60
*/
void sub_398c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398c10ULL || rel >= 0x398cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398cb0 size=208 callers=1 calls=2
   calls: sub_35b0d0, sub_3e9e60
*/
void sub_398cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398cb0ULL || rel >= 0x398d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398d80 size=160 callers=1 calls=2
   calls: sub_35b0d0, sub_3e9e60
*/
void sub_398d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398d80ULL || rel >= 0x398e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398e20 size=160 callers=2 calls=0
*/
void sub_398e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398e20ULL || rel >= 0x398ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398ec0 size=528 callers=2 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3990d0
*/
void sub_398ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398ec0ULL || rel >= 0x3990d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003990d0 size=304 callers=1 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3e6ea0
*/
void sub_3990d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3990d0ULL || rel >= 0x399200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399200 size=336 callers=3 calls=0
*/
void sub_399200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399200ULL || rel >= 0x399350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399350 size=208 callers=3 calls=1
   calls: sub_3045e0
*/
void sub_399350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399350ULL || rel >= 0x399420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399420 size=400 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_399420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399420ULL || rel >= 0x3995b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003995b0 size=112 callers=1 calls=1
   calls: sub_396310
*/
void sub_3995b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3995b0ULL || rel >= 0x399620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399620 size=944 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_399620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399620ULL || rel >= 0x3999d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003999d0 size=192 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3999d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3999d0ULL || rel >= 0x399a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399a90 size=192 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_399a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399a90ULL || rel >= 0x399b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399b50 size=128 callers=0 calls=0
*/
void sub_399b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399b50ULL || rel >= 0x399bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399bd0 size=128 callers=0 calls=0
*/
void sub_399bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399bd0ULL || rel >= 0x399c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399c50 size=48 callers=2 calls=0
*/
void sub_399c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399c50ULL || rel >= 0x399c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399c80 size=384 callers=0 calls=6
   calls: sub_3047c0, sub_39a100, sub_39c830, sub_39c920, sub_39f0a0, sub_3a55d0
*/
void sub_399c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399c80ULL || rel >= 0x399e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399e00 size=304 callers=1 calls=3
   calls: sub_3047c0, sub_399f30, sub_39f8e0
*/
void sub_399e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399e00ULL || rel >= 0x399f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399f30 size=464 callers=1 calls=2
   calls: sub_3047c0, sub_3be1a0
*/
void sub_399f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399f30ULL || rel >= 0x39a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a100 size=320 callers=4 calls=2
   calls: sub_39f8e0, sub_3a0e00
*/
void sub_39a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a100ULL || rel >= 0x39a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a240 size=880 callers=1 calls=2
   calls: sub_3047c0, sub_3be1a0
*/
void sub_39a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a240ULL || rel >= 0x39a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a5b0 size=784 callers=0 calls=3
   calls: sub_3047c0, sub_39f690, sub_39f8e0
*/
void sub_39a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a5b0ULL || rel >= 0x39a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a8c0 size=64 callers=1 calls=0
*/
void sub_39a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a8c0ULL || rel >= 0x39a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a900 size=16 callers=1 calls=0
*/
void sub_39a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a900ULL || rel >= 0x39a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a910 size=128 callers=1 calls=3
   calls: sub_39a990, sub_39aae0, sub_39d770
*/
void sub_39a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a910ULL || rel >= 0x39a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a990 size=336 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_39a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a990ULL || rel >= 0x39aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039aae0 size=336 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_39aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39aae0ULL || rel >= 0x39ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ac30 size=832 callers=1 calls=3
   calls: sub_3047c0, sub_399e00, sub_39af70
*/
void sub_39ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ac30ULL || rel >= 0x39af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039af70 size=368 callers=3 calls=2
   calls: sub_3047c0, sub_39c5e0
*/
void sub_39af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39af70ULL || rel >= 0x39b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b0e0 size=112 callers=1 calls=1
   calls: sub_39b150
*/
void sub_39b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b0e0ULL || rel >= 0x39b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b150 size=1504 callers=11 calls=10
   calls: sub_3045e0, sub_3047c0, sub_377a30, sub_377de0, sub_39af70, sub_39c0c0, sub_39c350, sub_39d770, sub_39d880, sub_3a3d40
*/
void sub_39b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b150ULL || rel >= 0x39b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b730 size=16 callers=2 calls=0
*/
void sub_39b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b730ULL || rel >= 0x39b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b740 size=256 callers=5 calls=2
   calls: sub_3047c0, sub_39af70
*/
void sub_39b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b740ULL || rel >= 0x39b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b840 size=112 callers=1 calls=1
   calls: sub_39b150
*/
void sub_39b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b840ULL || rel >= 0x39b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b8b0 size=16 callers=2 calls=0
*/
void sub_39b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b8b0ULL || rel >= 0x39b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b8c0 size=80 callers=2 calls=1
   calls: sub_39b910
*/
void sub_39b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b8c0ULL || rel >= 0x39b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b910 size=592 callers=10 calls=4
   calls: sub_3045e0, sub_39bb60, sub_39f0a0, sub_3a1490
*/
void sub_39b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b910ULL || rel >= 0x39bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039bb60 size=752 callers=2 calls=7
   calls: sub_3047c0, sub_39a100, sub_39be50, sub_39c830, sub_39c920, sub_3a55d0, sub_3be1a0
*/
void sub_39bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39bb60ULL || rel >= 0x39be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039be50 size=624 callers=1 calls=5
   calls: sub_3045e0, sub_3047c0, sub_3bdd90, sub_3be1a0, sub_3be290
*/
void sub_39be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39be50ULL || rel >= 0x39c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c0c0 size=656 callers=1 calls=3
   calls: sub_3045e0, sub_3047c0, sub_378ac0
*/
void sub_39c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c0c0ULL || rel >= 0x39c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c350 size=656 callers=2 calls=0
*/
void sub_39c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c350ULL || rel >= 0x39c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c5e0 size=592 callers=2 calls=0
*/
void sub_39c5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c5e0ULL || rel >= 0x39c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c830 size=240 callers=3 calls=2
   calls: sub_3a1830, sub_3a1d70
*/
void sub_39c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c830ULL || rel >= 0x39c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c920 size=192 callers=2 calls=1
   calls: sub_39c9e0
*/
void sub_39c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c920ULL || rel >= 0x39c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c9e0 size=1504 callers=2 calls=9
   calls: sub_32e6c0, sub_34fb40, sub_366b00, sub_366d40, sub_36abf0, sub_39cfc0, sub_3bc280, sub_3bc350, sub_3bc370
*/
void sub_39c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c9e0ULL || rel >= 0x39cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039cfc0 size=384 callers=1 calls=1
   calls: sub_32e6c0
*/
void sub_39cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39cfc0ULL || rel >= 0x39d140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d140 size=112 callers=42 calls=0
*/
void sub_39d140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d140ULL || rel >= 0x39d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d1b0 size=464 callers=0 calls=3
   calls: sub_32e6c0, sub_3657c0, sub_378420
*/
void sub_39d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d1b0ULL || rel >= 0x39d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d380 size=464 callers=3 calls=3
   calls: sub_32e6c0, sub_3657c0, sub_378420
*/
void sub_39d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d380ULL || rel >= 0x39d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d550 size=448 callers=1 calls=3
   calls: sub_32e6c0, sub_3657c0, sub_378420
*/
void sub_39d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d550ULL || rel >= 0x39d710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d710 size=96 callers=2 calls=0
*/
void sub_39d710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d710ULL || rel >= 0x39d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d770 size=272 callers=4 calls=2
   calls: sub_3045e0, sub_3a1490
*/
void sub_39d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d770ULL || rel >= 0x39d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d880 size=480 callers=1 calls=7
   calls: sub_34fb40, sub_39d380, sub_39e660, sub_39e820, sub_3bc280, sub_3bc350, sub_3bc370
*/
void sub_39d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d880ULL || rel >= 0x39da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039da60 size=80 callers=1 calls=0
*/
void sub_39da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39da60ULL || rel >= 0x39dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039dab0 size=608 callers=1 calls=3
   calls: sub_3047c0, sub_377de0, sub_39c350
*/
void sub_39dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39dab0ULL || rel >= 0x39dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039dd10 size=688 callers=6 calls=1
   calls: sub_378ac0
*/
void sub_39dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39dd10ULL || rel >= 0x39dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039dfc0 size=688 callers=7 calls=1
   calls: sub_378ac0
*/
void sub_39dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39dfc0ULL || rel >= 0x39e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e270 size=1008 callers=1 calls=3
   calls: sub_3047c0, sub_377de0, sub_39a240
*/
void sub_39e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e270ULL || rel >= 0x39e660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e660 size=448 callers=1 calls=3
   calls: sub_32e6c0, sub_3657c0, sub_378420
*/
void sub_39e660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e660ULL || rel >= 0x39e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e820 size=448 callers=1 calls=3
   calls: sub_32e6c0, sub_3657c0, sub_378420
*/
void sub_39e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e820ULL || rel >= 0x39e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e9e0 size=48 callers=1 calls=1
   calls: sub_39d770
*/
void sub_39e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e9e0ULL || rel >= 0x39ea10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ea10 size=64 callers=1 calls=1
   calls: sub_39d770
*/
void sub_39ea10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ea10ULL || rel >= 0x39ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ea50 size=64 callers=3 calls=1
   calls: sub_39ea90
*/
void sub_39ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ea50ULL || rel >= 0x39ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ea90 size=304 callers=4 calls=2
   calls: sub_39bb60, sub_39f0a0
*/
void sub_39ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ea90ULL || rel >= 0x39ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ebc0 size=64 callers=5 calls=1
   calls: sub_39b910
*/
void sub_39ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ebc0ULL || rel >= 0x39ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ec00 size=336 callers=1 calls=3
   calls: sub_3045e0, sub_3047c0, sub_39ed50
*/
void sub_39ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ec00ULL || rel >= 0x39ed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ed50 size=672 callers=1 calls=0
*/
void sub_39ed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ed50ULL || rel >= 0x39eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039eff0 size=160 callers=11 calls=1
   calls: sub_39b910
*/
void sub_39eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39eff0ULL || rel >= 0x39f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f090 size=16 callers=1 calls=0
*/
void sub_39f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f090ULL || rel >= 0x39f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f0a0 size=256 callers=4 calls=0
*/
void sub_39f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f0a0ULL || rel >= 0x39f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f1a0 size=240 callers=0 calls=0
*/
void sub_39f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f1a0ULL || rel >= 0x39f290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f290 size=496 callers=0 calls=0
*/
void sub_39f290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f290ULL || rel >= 0x39f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f480 size=464 callers=0 calls=0
*/
void sub_39f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f480ULL || rel >= 0x39f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f650 size=32 callers=0 calls=0
*/
void sub_39f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f650ULL || rel >= 0x39f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f670 size=16 callers=0 calls=0
*/
void sub_39f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f670ULL || rel >= 0x39f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f680 size=16 callers=0 calls=0
*/
void sub_39f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f680ULL || rel >= 0x39f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f690 size=592 callers=2 calls=2
   calls: sub_3047c0, sub_39fb90
*/
void sub_39f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f690ULL || rel >= 0x39f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f8e0 size=320 callers=6 calls=2
   calls: sub_3047c0, sub_3a0250
*/
void sub_39f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f8e0ULL || rel >= 0x39fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fa20 size=368 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_39fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fa20ULL || rel >= 0x39fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fb90 size=768 callers=2 calls=3
   calls: sub_3047c0, sub_3a0000, sub_3a0250
*/
void sub_39fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fb90ULL || rel >= 0x39fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fe90 size=368 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_39fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fe90ULL || rel >= 0x3a0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0000 size=592 callers=2 calls=2
   calls: sub_3047c0, sub_3a0510
*/
void sub_3a0000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0000ULL || rel >= 0x3a0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0250 size=336 callers=5 calls=1
   calls: sub_3047c0
*/
void sub_3a0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0250ULL || rel >= 0x3a03a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a03a0 size=368 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3a03a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a03a0ULL || rel >= 0x3a0510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0510 size=1552 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_3a0510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0510ULL || rel >= 0x3a0b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0b20 size=368 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3a0b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0b20ULL || rel >= 0x3a0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0c90 size=368 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3a0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0c90ULL || rel >= 0x3a0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0e00 size=352 callers=1 calls=2
   calls: sub_3047c0, sub_3a0f60
*/
void sub_3a0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0e00ULL || rel >= 0x3a0f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0f60 size=288 callers=1 calls=2
   calls: sub_3a0250, sub_3a1080
*/
void sub_3a0f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0f60ULL || rel >= 0x3a1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1080 size=320 callers=1 calls=2
   calls: sub_3047c0, sub_3a11c0
*/
void sub_3a1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1080ULL || rel >= 0x3a11c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a11c0 size=720 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3a11c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a11c0ULL || rel >= 0x3a1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1490 size=928 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3a1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1490ULL || rel >= 0x3a1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1830 size=336 callers=1 calls=2
   calls: sub_3a1980, sub_3a1b40
*/
void sub_3a1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1830ULL || rel >= 0x3a1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1980 size=448 callers=1 calls=2
   calls: sub_3047c0, sub_3a1b40
*/
void sub_3a1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1980ULL || rel >= 0x3a1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1b40 size=496 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3a1b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1b40ULL || rel >= 0x3a1d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1d30 size=32 callers=0 calls=0
*/
void sub_3a1d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1d30ULL || rel >= 0x3a1d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1d50 size=16 callers=0 calls=0
*/
void sub_3a1d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1d50ULL || rel >= 0x3a1d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1d60 size=16 callers=0 calls=0
*/
void sub_3a1d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1d60ULL || rel >= 0x3a1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1d70 size=336 callers=1 calls=2
   calls: sub_3a1fb0, sub_3a2170
*/
void sub_3a1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1d70ULL || rel >= 0x3a1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1ec0 size=240 callers=0 calls=4
   calls: sub_3a23a0, sub_3a28e0, sub_3a2e20, sub_3a32c0
*/
void sub_3a1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1ec0ULL || rel >= 0x3a1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1fb0 size=448 callers=1 calls=2
   calls: sub_3047c0, sub_3a2170
*/
void sub_3a1fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1fb0ULL || rel >= 0x3a2170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2170 size=496 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3a2170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2170ULL || rel >= 0x3a2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2360 size=16 callers=0 calls=0
*/
void sub_3a2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2360ULL || rel >= 0x3a2370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2370 size=32 callers=0 calls=0
*/
void sub_3a2370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2370ULL || rel >= 0x3a2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2390 size=16 callers=0 calls=0
*/
void sub_3a2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2390ULL || rel >= 0x3a23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a23a0 size=336 callers=1 calls=2
   calls: sub_3a24f0, sub_3a26b0
*/
void sub_3a23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a23a0ULL || rel >= 0x3a24f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a24f0 size=448 callers=1 calls=2
   calls: sub_3047c0, sub_3a26b0
*/
void sub_3a24f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a24f0ULL || rel >= 0x3a26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a26b0 size=496 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3a26b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a26b0ULL || rel >= 0x3a28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a28a0 size=32 callers=0 calls=0
*/
void sub_3a28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a28a0ULL || rel >= 0x3a28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a28c0 size=16 callers=0 calls=0
*/
void sub_3a28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a28c0ULL || rel >= 0x3a28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a28d0 size=16 callers=0 calls=0
*/
void sub_3a28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a28d0ULL || rel >= 0x3a28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a28e0 size=336 callers=1 calls=2
   calls: sub_3a2a30, sub_3a2bf0
*/
void sub_3a28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a28e0ULL || rel >= 0x3a2a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2a30 size=448 callers=1 calls=2
   calls: sub_3047c0, sub_3a2bf0
*/
void sub_3a2a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2a30ULL || rel >= 0x3a2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2bf0 size=496 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3a2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2bf0ULL || rel >= 0x3a2de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2de0 size=32 callers=0 calls=0
*/
void sub_3a2de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2de0ULL || rel >= 0x3a2e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2e00 size=16 callers=0 calls=0
*/
void sub_3a2e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2e00ULL || rel >= 0x3a2e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2e10 size=16 callers=0 calls=0
*/
void sub_3a2e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2e10ULL || rel >= 0x3a2e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2e20 size=336 callers=1 calls=2
   calls: sub_3a2f70, sub_3a30e0
*/
void sub_3a2e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2e20ULL || rel >= 0x3a2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2f70 size=368 callers=1 calls=2
   calls: sub_3047c0, sub_3a30e0
*/
void sub_3a2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2f70ULL || rel >= 0x3a30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a30e0 size=416 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3a30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a30e0ULL || rel >= 0x3a3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3280 size=32 callers=0 calls=0
*/
void sub_3a3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3280ULL || rel >= 0x3a32a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a32a0 size=16 callers=0 calls=0
*/
void sub_3a32a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a32a0ULL || rel >= 0x3a32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a32b0 size=16 callers=0 calls=0
*/
void sub_3a32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a32b0ULL || rel >= 0x3a32c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a32c0 size=832 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3a32c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a32c0ULL || rel >= 0x3a3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3600 size=144 callers=0 calls=0
*/
void sub_3a3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3600ULL || rel >= 0x3a3690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3690 size=336 callers=0 calls=0
*/
void sub_3a3690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3690ULL || rel >= 0x3a37e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a37e0 size=336 callers=0 calls=0
*/
void sub_3a37e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a37e0ULL || rel >= 0x3a3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3930 size=640 callers=0 calls=0
*/
void sub_3a3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3930ULL || rel >= 0x3a3bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3bb0 size=400 callers=0 calls=0
*/
void sub_3a3bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3bb0ULL || rel >= 0x3a3d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3d40 size=944 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3a3d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3d40ULL || rel >= 0x3a40f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a40f0 size=64 callers=6 calls=0
*/
void sub_3a40f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a40f0ULL || rel >= 0x3a4130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4130 size=16 callers=1 calls=0
*/
void sub_3a4130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4130ULL || rel >= 0x3a4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4140 size=272 callers=3 calls=0
*/
void sub_3a4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4140ULL || rel >= 0x3a4250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4250 size=368 callers=13 calls=1
   calls: sub_3a4140
*/
void sub_3a4250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4250ULL || rel >= 0x3a43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a43c0 size=144 callers=1 calls=1
   calls: sub_386530
*/
void sub_3a43c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a43c0ULL || rel >= 0x3a4450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4450 size=80 callers=4 calls=0
*/
void sub_3a4450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4450ULL || rel >= 0x3a44a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a44a0 size=176 callers=4 calls=1
   calls: sub_386bc0
*/
void sub_3a44a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a44a0ULL || rel >= 0x3a4550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4550 size=16 callers=0 calls=0
*/
void sub_3a4550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4550ULL || rel >= 0x3a4560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4560 size=80 callers=3 calls=1
   calls: sub_386530
*/
void sub_3a4560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4560ULL || rel >= 0x3a45b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a45b0 size=64 callers=4 calls=1
   calls: sub_386bc0
*/
void sub_3a45b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a45b0ULL || rel >= 0x3a45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a45f0 size=32 callers=4 calls=0
*/
void sub_3a45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a45f0ULL || rel >= 0x3a4610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4610 size=224 callers=3 calls=2
   calls: sub_3047c0, sub_39b740
*/
void sub_3a4610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4610ULL || rel >= 0x3a46f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a46f0 size=112 callers=1 calls=1
   calls: sub_386bc0
*/
void sub_3a46f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a46f0ULL || rel >= 0x3a4760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4760 size=352 callers=0 calls=3
   calls: sub_3045e0, sub_39b150, sub_3a48c0
*/
void sub_3a4760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4760ULL || rel >= 0x3a48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a48c0 size=432 callers=4 calls=2
   calls: sub_3045e0, sub_386530
*/
void sub_3a48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a48c0ULL || rel >= 0x3a4a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4a70 size=128 callers=1 calls=2
   calls: sub_39dab0, sub_3a4af0
*/
void sub_3a4a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4a70ULL || rel >= 0x3a4af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4af0 size=432 callers=1 calls=2
   calls: sub_3047c0, sub_386530
*/
void sub_3a4af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4af0ULL || rel >= 0x3a4ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4ca0 size=528 callers=0 calls=0
*/
void sub_3a4ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4ca0ULL || rel >= 0x3a4eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4eb0 size=496 callers=2 calls=1
   calls: sub_3a4140
*/
void sub_3a4eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4eb0ULL || rel >= 0x3a50a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a50a0 size=560 callers=0 calls=1
   calls: sub_3a4140
*/
void sub_3a50a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a50a0ULL || rel >= 0x3a52d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a52d0 size=208 callers=0 calls=0
*/
void sub_3a52d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a52d0ULL || rel >= 0x3a53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a53a0 size=112 callers=0 calls=0
*/
void sub_3a53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a53a0ULL || rel >= 0x3a5410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5410 size=112 callers=0 calls=0
*/
void sub_3a5410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5410ULL || rel >= 0x3a5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5480 size=336 callers=2 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3784f0
*/
void sub_3a5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5480ULL || rel >= 0x3a55d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a55d0 size=144 callers=3 calls=2
   calls: sub_38f9c0, sub_38fdc0
*/
void sub_3a55d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a55d0ULL || rel >= 0x3a5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5660 size=144 callers=1 calls=2
   calls: sub_38fa50, sub_38fdc0
*/
void sub_3a5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5660ULL || rel >= 0x3a56f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a56f0 size=16 callers=3 calls=0
*/
void sub_3a56f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a56f0ULL || rel >= 0x3a5700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5700 size=16 callers=6 calls=0
*/
void sub_3a5700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5700ULL || rel >= 0x3a5710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5710 size=240 callers=3 calls=3
   calls: sub_3047c0, sub_378a00, sub_39e270
*/
void sub_3a5710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5710ULL || rel >= 0x3a5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5800 size=144 callers=1 calls=0
*/
void sub_3a5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5800ULL || rel >= 0x3a5890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5890 size=144 callers=1 calls=0
*/
void sub_3a5890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5890ULL || rel >= 0x3a5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5920 size=432 callers=1 calls=4
   calls: sub_3046a0, sub_304740, sub_3ca550, sub_3cad90
*/
void sub_3a5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5920ULL || rel >= 0x3a5ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5ad0 size=80 callers=0 calls=0
*/
void sub_3a5ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5ad0ULL || rel >= 0x3a5b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5b20 size=32 callers=7 calls=0
*/
void sub_3a5b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5b20ULL || rel >= 0x3a5b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5b40 size=16 callers=0 calls=0
*/
void sub_3a5b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5b40ULL || rel >= 0x3a5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5b50 size=80 callers=0 calls=0
*/
void sub_3a5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5b50ULL || rel >= 0x3a5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5ba0 size=16 callers=0 calls=0
*/
void sub_3a5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5ba0ULL || rel >= 0x3a5bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5bb0 size=32 callers=0 calls=0
*/
void sub_3a5bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5bb0ULL || rel >= 0x3a5bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5bd0 size=176 callers=0 calls=2
   calls: sub_3cad80, sub_3cb590
*/
void sub_3a5bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5bd0ULL || rel >= 0x3a5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5c80 size=96 callers=0 calls=0
*/
void sub_3a5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5c80ULL || rel >= 0x3a5ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5ce0 size=32 callers=0 calls=0
*/
void sub_3a5ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5ce0ULL || rel >= 0x3a5d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5d00 size=80 callers=0 calls=0
*/
void sub_3a5d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5d00ULL || rel >= 0x3a5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5d50 size=16 callers=0 calls=0
*/
void sub_3a5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5d50ULL || rel >= 0x3a5d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5d60 size=16 callers=0 calls=0
*/
void sub_3a5d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5d60ULL || rel >= 0x3a5d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5d70 size=16 callers=0 calls=0
*/
void sub_3a5d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5d70ULL || rel >= 0x3a5d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5d80 size=16 callers=0 calls=0
*/
void sub_3a5d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5d80ULL || rel >= 0x3a5d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5d90 size=16 callers=0 calls=0
*/
void sub_3a5d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5d90ULL || rel >= 0x3a5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5da0 size=16 callers=0 calls=0
*/
void sub_3a5da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5da0ULL || rel >= 0x3a5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5db0 size=16 callers=0 calls=0
*/
void sub_3a5db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5db0ULL || rel >= 0x3a5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5dc0 size=16 callers=0 calls=0
*/
void sub_3a5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5dc0ULL || rel >= 0x3a5dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5dd0 size=16 callers=0 calls=0
*/
void sub_3a5dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5dd0ULL || rel >= 0x3a5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5de0 size=16 callers=0 calls=0
*/
void sub_3a5de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5de0ULL || rel >= 0x3a5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5df0 size=16 callers=0 calls=0
*/
void sub_3a5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5df0ULL || rel >= 0x3a5e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5e00 size=112 callers=0 calls=0
*/
void sub_3a5e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5e00ULL || rel >= 0x3a5e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5e70 size=192 callers=0 calls=1
   calls: sub_3a5b20
*/
void sub_3a5e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5e70ULL || rel >= 0x3a5f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5f30 size=48 callers=0 calls=0
*/
void sub_3a5f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5f30ULL || rel >= 0x3a5f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5f60 size=64 callers=0 calls=0
*/
void sub_3a5f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5f60ULL || rel >= 0x3a5fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5fa0 size=576 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_3a5fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5fa0ULL || rel >= 0x3a61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a61e0 size=256 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3a61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a61e0ULL || rel >= 0x3a62e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a62e0 size=272 callers=0 calls=0
*/
void sub_3a62e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a62e0ULL || rel >= 0x3a63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a63f0 size=128 callers=0 calls=0
*/
void sub_3a63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a63f0ULL || rel >= 0x3a6470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6470 size=16 callers=0 calls=0
*/
void sub_3a6470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6470ULL || rel >= 0x3a6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6480 size=16 callers=0 calls=0
*/
void sub_3a6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6480ULL || rel >= 0x3a6490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6490 size=128 callers=0 calls=0
*/
void sub_3a6490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6490ULL || rel >= 0x3a6510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6510 size=48 callers=0 calls=0
*/
void sub_3a6510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6510ULL || rel >= 0x3a6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6540 size=16 callers=0 calls=0
*/
void sub_3a6540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6540ULL || rel >= 0x3a6550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6550 size=160 callers=4 calls=2
   calls: sub_3047c0, sub_3be1a0
*/
void sub_3a6550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6550ULL || rel >= 0x3a65f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a65f0 size=352 callers=2 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3a48c0
*/
void sub_3a65f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a65f0ULL || rel >= 0x3a6750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6750 size=304 callers=0 calls=1
   calls: sub_3a4eb0
*/
void sub_3a6750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6750ULL || rel >= 0x3a6880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6880 size=80 callers=0 calls=1
   calls: sub_3a7bb0
*/
void sub_3a6880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6880ULL || rel >= 0x3a68d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a68d0 size=80 callers=0 calls=1
   calls: sub_3a7bb0
*/
void sub_3a68d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a68d0ULL || rel >= 0x3a6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6920 size=80 callers=0 calls=2
   calls: sub_3a7300, sub_3a7bb0
*/
void sub_3a6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6920ULL || rel >= 0x3a6970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6970 size=80 callers=0 calls=2
   calls: sub_3a7300, sub_3a7bb0
*/
void sub_3a6970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6970ULL || rel >= 0x3a69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a69c0 size=176 callers=2 calls=4
   calls: sub_3045e0, sub_3820f0, sub_3a72c0, sub_3a7b80
*/
void sub_3a69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a69c0ULL || rel >= 0x3a6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6a70 size=16 callers=0 calls=0
*/
void sub_3a6a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6a70ULL || rel >= 0x3a6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6a80 size=560 callers=0 calls=6
   calls: sub_3045e0, sub_37f2f0, sub_37f540, sub_38e5c0, sub_39ebc0, sub_3beff0
*/
void sub_3a6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6a80ULL || rel >= 0x3a6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6cb0 size=48 callers=0 calls=0
*/
void sub_3a6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6cb0ULL || rel >= 0x3a6ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6ce0 size=320 callers=0 calls=0
*/
void sub_3a6ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6ce0ULL || rel >= 0x3a6e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6e20 size=112 callers=0 calls=1
   calls: sub_3b3a10
*/
void sub_3a6e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6e20ULL || rel >= 0x3a6e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6e90 size=16 callers=0 calls=0
*/
void sub_3a6e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6e90ULL || rel >= 0x3a6ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6ea0 size=240 callers=2 calls=5
   calls: sub_349990, sub_349be0, sub_385430, sub_3a7d40, sub_3a7e40
*/
void sub_3a6ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6ea0ULL || rel >= 0x3a6f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6f90 size=16 callers=0 calls=0
*/
void sub_3a6f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6f90ULL || rel >= 0x3a6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6fa0 size=16 callers=0 calls=0
*/
void sub_3a6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6fa0ULL || rel >= 0x3a6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6fb0 size=160 callers=0 calls=2
   calls: sub_37e4d0, sub_388080
*/
void sub_3a6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6fb0ULL || rel >= 0x3a7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7050 size=592 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3a7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7050ULL || rel >= 0x3a72a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a72a0 size=16 callers=0 calls=0
*/
void sub_3a72a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a72a0ULL || rel >= 0x3a72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a72b0 size=16 callers=0 calls=0
*/
void sub_3a72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a72b0ULL || rel >= 0x3a72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a72c0 size=64 callers=2 calls=1
   calls: sub_37e080
*/
void sub_3a72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a72c0ULL || rel >= 0x3a7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7300 size=16 callers=2 calls=0
*/
void sub_3a7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7300ULL || rel >= 0x3a7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7310 size=16 callers=0 calls=0
*/
void sub_3a7310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7310ULL || rel >= 0x3a7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7320 size=16 callers=0 calls=0
*/
void sub_3a7320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7320ULL || rel >= 0x3a7330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7330 size=16 callers=0 calls=0
*/
void sub_3a7330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7330ULL || rel >= 0x3a7340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7340 size=64 callers=0 calls=1
   calls: sub_38be60
*/
void sub_3a7340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7340ULL || rel >= 0x3a7380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7380 size=208 callers=0 calls=0
*/
void sub_3a7380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7380ULL || rel >= 0x3a7450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7450 size=112 callers=0 calls=1
   calls: sub_34f530
*/
void sub_3a7450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7450ULL || rel >= 0x3a74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a74c0 size=96 callers=0 calls=1
   calls: sub_38ca70
*/
void sub_3a74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a74c0ULL || rel >= 0x3a7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7520 size=160 callers=0 calls=1
   calls: sub_38ca70
*/
void sub_3a7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7520ULL || rel >= 0x3a75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a75c0 size=224 callers=0 calls=0
*/
void sub_3a75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a75c0ULL || rel >= 0x3a76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a76a0 size=240 callers=0 calls=1
   calls: sub_34f7b0
*/
void sub_3a76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a76a0ULL || rel >= 0x3a7790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7790 size=64 callers=0 calls=1
   calls: sub_34fa00
*/
void sub_3a7790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7790ULL || rel >= 0x3a77d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a77d0 size=64 callers=0 calls=1
   calls: sub_38e860
*/
void sub_3a77d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a77d0ULL || rel >= 0x3a7810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7810 size=240 callers=0 calls=1
   calls: sub_38ce80
*/
void sub_3a7810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7810ULL || rel >= 0x3a7900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7900 size=64 callers=0 calls=1
   calls: sub_38e030
*/
void sub_3a7900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7900ULL || rel >= 0x3a7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7940 size=288 callers=0 calls=0
*/
void sub_3a7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7940ULL || rel >= 0x3a7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7a60 size=272 callers=2 calls=0
*/
void sub_3a7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7a60ULL || rel >= 0x3a7b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7b70 size=16 callers=2 calls=0
*/
void sub_3a7b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7b70ULL || rel >= 0x3a7b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7b80 size=48 callers=3 calls=0
*/
void sub_3a7b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7b80ULL || rel >= 0x3a7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7bb0 size=112 callers=7 calls=1
   calls: sub_3047c0
*/
void sub_3a7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7bb0ULL || rel >= 0x3a7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7c20 size=288 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3a7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7c20ULL || rel >= 0x3a7d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7d40 size=128 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_3a7d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7d40ULL || rel >= 0x3a7dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7dc0 size=128 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3a7dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7dc0ULL || rel >= 0x3a7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7e40 size=112 callers=3 calls=1
   calls: sub_3047c0
*/
void sub_3a7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7e40ULL || rel >= 0x3a7eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7eb0 size=112 callers=4 calls=1
   calls: sub_348f10
*/
void sub_3a7eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7eb0ULL || rel >= 0x3a7f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7f20 size=48 callers=5 calls=0
*/
void sub_3a7f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7f20ULL || rel >= 0x3a7f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7f50 size=48 callers=1 calls=0
*/
void sub_3a7f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7f50ULL || rel >= 0x3a7f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7f80 size=48 callers=2 calls=0
*/
void sub_3a7f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7f80ULL || rel >= 0x3a7fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7fb0 size=128 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3a7fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7fb0ULL || rel >= 0x3a8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8030 size=16 callers=1 calls=0
*/
void sub_3a8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8030ULL || rel >= 0x3a8040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8040 size=32 callers=2 calls=0
*/
void sub_3a8040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8040ULL || rel >= 0x3a8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8060 size=880 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_3a8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8060ULL || rel >= 0x3a83d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a83d0 size=720 callers=0 calls=3
   calls: sub_3c0e30, sub_3c0fb0, sub_3c10c0
*/
void sub_3a83d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a83d0ULL || rel >= 0x3a86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a86a0 size=96 callers=1 calls=1
   calls: sub_3c0fb0
*/
void sub_3a86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a86a0ULL || rel >= 0x3a8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8700 size=976 callers=1 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_3a8700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8700ULL || rel >= 0x3a8ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8ad0 size=544 callers=2 calls=0
*/
void sub_3a8ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8ad0ULL || rel >= 0x3a8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8cf0 size=256 callers=1 calls=0
*/
void sub_3a8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8cf0ULL || rel >= 0x3a8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8df0 size=656 callers=1 calls=0
*/
void sub_3a8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8df0ULL || rel >= 0x3a9080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9080 size=640 callers=1 calls=1
   calls: sub_3a8df0
*/
void sub_3a9080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9080ULL || rel >= 0x3a9300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9300 size=14672 callers=2 calls=6
   calls: sub_333560, sub_37b470, sub_37b750, sub_3acc50, sub_3acf70, sub_3c1980
*/
void sub_3a9300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9300ULL || rel >= 0x3acc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003acc50 size=800 callers=3 calls=1
   calls: sub_3b15e0
*/
void sub_3acc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3acc50ULL || rel >= 0x3acf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003acf70 size=416 callers=2 calls=1
   calls: sub_3b15e0
*/
void sub_3acf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3acf70ULL || rel >= 0x3ad110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad110 size=48 callers=2 calls=0
*/
void sub_3ad110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad110ULL || rel >= 0x3ad140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad140 size=2032 callers=3 calls=1
   calls: sub_333560
*/
void sub_3ad140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad140ULL || rel >= 0x3ad930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad930 size=3168 callers=0 calls=5
   calls: sub_3045e0, sub_3047c0, sub_37b470, sub_3ae590, sub_3c1560
*/
void sub_3ad930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad930ULL || rel >= 0x3ae590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae590 size=368 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3ae590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae590ULL || rel >= 0x3ae700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae700 size=10688 callers=0 calls=0
*/
void sub_3ae700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae700ULL || rel >= 0x3b10c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b10c0 size=48 callers=2 calls=0
*/
void sub_3b10c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b10c0ULL || rel >= 0x3b10f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b10f0 size=272 callers=1 calls=0
*/
void sub_3b10f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b10f0ULL || rel >= 0x3b1200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1200 size=864 callers=0 calls=1
   calls: sub_37b470
*/
void sub_3b1200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1200ULL || rel >= 0x3b1560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1560 size=128 callers=1 calls=0
*/
void sub_3b1560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1560ULL || rel >= 0x3b15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b15e0 size=704 callers=2 calls=0
*/
void sub_3b15e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b15e0ULL || rel >= 0x3b18a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b18a0 size=80 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3b18a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b18a0ULL || rel >= 0x3b18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b18f0 size=96 callers=0 calls=2
   calls: sub_3047c0, sub_363530
*/
void sub_3b18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b18f0ULL || rel >= 0x3b1950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1950 size=256 callers=1 calls=3
   calls: sub_3045e0, sub_335420, sub_363510
*/
void sub_3b1950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1950ULL || rel >= 0x3b1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1a50 size=176 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3b1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1a50ULL || rel >= 0x3b1b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1b00 size=96 callers=0 calls=0
*/
void sub_3b1b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1b00ULL || rel >= 0x3b1b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1b60 size=288 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3b1b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1b60ULL || rel >= 0x3b1c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1c80 size=16 callers=1 calls=0
*/
void sub_3b1c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1c80ULL || rel >= 0x3b1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1c90 size=16 callers=4 calls=0
*/
void sub_3b1c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1c90ULL || rel >= 0x3b1ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1ca0 size=32 callers=2 calls=0
*/
void sub_3b1ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1ca0ULL || rel >= 0x3b1cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1cc0 size=16 callers=0 calls=0
*/
void sub_3b1cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1cc0ULL || rel >= 0x3b1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1cd0 size=16 callers=0 calls=0
*/
void sub_3b1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1cd0ULL || rel >= 0x3b1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1ce0 size=384 callers=2 calls=2
   calls: sub_3047c0, sub_3b1e60
*/
void sub_3b1ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1ce0ULL || rel >= 0x3b1e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1e60 size=304 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3b1e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1e60ULL || rel >= 0x3b1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1f90 size=1056 callers=3 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3be1a0, sub_3be290
*/
void sub_3b1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1f90ULL || rel >= 0x3b23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b23b0 size=96 callers=0 calls=0
*/
void sub_3b23b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b23b0ULL || rel >= 0x3b2410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2410 size=128 callers=0 calls=0
*/
void sub_3b2410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2410ULL || rel >= 0x3b2490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2490 size=384 callers=1 calls=5
   calls: sub_3045e0, sub_3047c0, sub_3b1f90, sub_3b4650, sub_3b5280
*/
void sub_3b2490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2490ULL || rel >= 0x3b2610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2610 size=592 callers=1 calls=3
   calls: sub_3047c0, sub_3b1c90, sub_3b4740
*/
void sub_3b2610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2610ULL || rel >= 0x3b2860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2860 size=592 callers=2 calls=3
   calls: sub_3047c0, sub_3b1c90, sub_3b4740
*/
void sub_3b2860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2860ULL || rel >= 0x3b2ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2ab0 size=1088 callers=3 calls=5
   calls: sub_3045e0, sub_3047c0, sub_3b1c80, sub_3b1c90, sub_3b1f90
*/
void sub_3b2ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2ab0ULL || rel >= 0x3b2ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b2ef0 size=1200 callers=1 calls=3
   calls: sub_3b1c90, sub_3b1f90, sub_3b2ab0
*/
void sub_3b2ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b2ef0ULL || rel >= 0x3b33a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b33a0 size=16 callers=12 calls=0
*/
void sub_3b33a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b33a0ULL || rel >= 0x3b33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b33b0 size=32 callers=1 calls=0
*/
void sub_3b33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b33b0ULL || rel >= 0x3b33d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b33d0 size=768 callers=1 calls=2
   calls: sub_3b1e60, sub_3b2ab0
*/
void sub_3b33d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b33d0ULL || rel >= 0x3b36d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b36d0 size=672 callers=4 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3b36d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b36d0ULL || rel >= 0x3b3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3970 size=160 callers=2 calls=1
   calls: sub_3be1a0
*/
void sub_3b3970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3970ULL || rel >= 0x3b3a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b3a10 size=320 callers=3 calls=2
   calls: sub_3be230, sub_3be260
*/
void sub_3b3a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b3a10ULL || rel >= 0x3b3b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

