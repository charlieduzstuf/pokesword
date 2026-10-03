/* main functions 01778360..01790820 (201 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01778360 size=16 callers=153 calls=0
*/
void sub_1778360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778360ULL || rel >= 0x1778370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778370 size=16 callers=26 calls=0
*/
void sub_1778370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778370ULL || rel >= 0x1778380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778380 size=96 callers=1 calls=0
*/
void sub_1778380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778380ULL || rel >= 0x17783e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017783e0 size=64 callers=4 calls=0
*/
void sub_17783e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17783e0ULL || rel >= 0x1778420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778420 size=16 callers=2 calls=0
   ref: SDK MW+Nintendo+NintendoSDK_libcurl-7_3_2-Release
*/
void SDK_MW_Nintendo_NintendoSDK_libcurl_7_3_2_Release(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778420ULL || rel >= 0x1778430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778430 size=400 callers=1 calls=3
   calls: sub_1759270, sub_1778330, sub_1778340
*/
void sub_1778430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778430ULL || rel >= 0x17785c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017785c0 size=256 callers=1 calls=1
   calls: sub_1759270
*/
void sub_17785c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17785c0ULL || rel >= 0x17786c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017786c0 size=64 callers=9 calls=0
*/
void sub_17786c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17786c0ULL || rel >= 0x1778700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778700 size=144 callers=0 calls=0
*/
void sub_1778700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778700ULL || rel >= 0x1778790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778790 size=16 callers=1 calls=0
*/
void sub_1778790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778790ULL || rel >= 0x17787a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017787a0 size=176 callers=0 calls=2
   calls: sub_1778330, sub_1778340
*/
void sub_17787a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17787a0ULL || rel >= 0x1778850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778850 size=112 callers=1 calls=0
*/
void sub_1778850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778850ULL || rel >= 0x17788c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017788c0 size=80 callers=1 calls=0
*/
void sub_17788c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17788c0ULL || rel >= 0x1778910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778910 size=144 callers=6 calls=0
*/
void sub_1778910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778910ULL || rel >= 0x17789a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017789a0 size=80 callers=1 calls=0
*/
void sub_17789a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17789a0ULL || rel >= 0x17789f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017789f0 size=48 callers=7 calls=0
*/
void sub_17789f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17789f0ULL || rel >= 0x1778a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778a20 size=48 callers=6 calls=0
*/
void sub_1778a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778a20ULL || rel >= 0x1778a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778a50 size=48 callers=2 calls=0
*/
void sub_1778a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778a50ULL || rel >= 0x1778a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778a80 size=48 callers=1 calls=0
*/
void sub_1778a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778a80ULL || rel >= 0x1778ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778ab0 size=48 callers=5 calls=0
*/
void sub_1778ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778ab0ULL || rel >= 0x1778ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778ae0 size=48 callers=1 calls=0
*/
void sub_1778ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778ae0ULL || rel >= 0x1778b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778b10 size=384 callers=2 calls=4
   calls: sub_1778330, sub_1778340, sub_1778380, sub_17783e0
   ref: LibcurlResolver
*/
void LibcurlResolver(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778b10ULL || rel >= 0x1778c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778c90 size=80 callers=0 calls=0
*/
void sub_1778c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778c90ULL || rel >= 0x1778ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778ce0 size=352 callers=2 calls=6
   calls: LibcurlResolver, sub_17577e0, sub_17578f0, sub_1778330, sub_1778340, sub_17783e0
*/
void sub_1778ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778ce0ULL || rel >= 0x1778e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778e40 size=240 callers=0 calls=2
   calls: sub_1757870, sub_17579a0
*/
void sub_1778e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778e40ULL || rel >= 0x1778f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778f30 size=16 callers=0 calls=0
*/
void sub_1778f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778f30ULL || rel >= 0x1778f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778f40 size=80 callers=0 calls=1
   calls: sub_17783e0
*/
void sub_1778f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778f40ULL || rel >= 0x1778f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01778f90 size=160 callers=0 calls=2
   calls: sub_17577f0, sub_1757870
*/
void sub_1778f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1778f90ULL || rel >= 0x1779030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779030 size=272 callers=1 calls=3
   calls: sub_17578f0, sub_1778340, sub_17783e0
*/
void sub_1779030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779030ULL || rel >= 0x1779140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779140 size=256 callers=1 calls=3
   calls: LibcurlResolver, sub_17577f0, sub_17579a0
*/
void sub_1779140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779140ULL || rel >= 0x1779240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779240 size=16 callers=1 calls=0
*/
void sub_1779240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779240ULL || rel >= 0x1779250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779250 size=32 callers=2 calls=0
*/
void sub_1779250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779250ULL || rel >= 0x1779270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779270 size=48 callers=2 calls=0
*/
void sub_1779270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779270ULL || rel >= 0x17792a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017792a0 size=16 callers=28 calls=0
*/
void sub_17792a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17792a0ULL || rel >= 0x17792b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017792b0 size=96 callers=6 calls=0
*/
void sub_17792b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17792b0ULL || rel >= 0x1779310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779310 size=64 callers=10 calls=0
*/
void sub_1779310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779310ULL || rel >= 0x1779350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779350 size=64 callers=6 calls=0
*/
void sub_1779350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779350ULL || rel >= 0x1779390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779390 size=64 callers=2 calls=0
*/
void sub_1779390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779390ULL || rel >= 0x17793d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017793d0 size=176 callers=2 calls=1
   calls: sub_1779480
*/
void sub_17793d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17793d0ULL || rel >= 0x1779480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779480 size=560 callers=1 calls=1
   calls: sub_177a5b0
*/
void sub_1779480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779480ULL || rel >= 0x17796b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017796b0 size=16 callers=2 calls=0
*/
void sub_17796b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17796b0ULL || rel >= 0x17796c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017796c0 size=16 callers=4 calls=0
*/
void sub_17796c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17796c0ULL || rel >= 0x17796d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017796d0 size=64 callers=1 calls=0
*/
void sub_17796d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17796d0ULL || rel >= 0x1779710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779710 size=16 callers=1 calls=0
*/
void sub_1779710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779710ULL || rel >= 0x1779720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779720 size=128 callers=1 calls=0
*/
void sub_1779720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779720ULL || rel >= 0x17797a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017797a0 size=32 callers=1 calls=0
*/
void sub_17797a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17797a0ULL || rel >= 0x17797c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017797c0 size=16 callers=1 calls=0
*/
void sub_17797c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17797c0ULL || rel >= 0x17797d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017797d0 size=192 callers=1 calls=2
   calls: sub_1787320, sub_1787960
*/
void sub_17797d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17797d0ULL || rel >= 0x1779890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779890 size=16 callers=1 calls=0
*/
void sub_1779890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779890ULL || rel >= 0x17798a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017798a0 size=560 callers=1 calls=2
   calls: sub_1779ad0, sub_1779c50
*/
void sub_17798a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17798a0ULL || rel >= 0x1779ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779ad0 size=384 callers=2 calls=0
*/
void sub_1779ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779ad0ULL || rel >= 0x1779c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779c50 size=400 callers=1 calls=0
*/
void sub_1779c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779c50ULL || rel >= 0x1779de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01779de0 size=624 callers=0 calls=2
   calls: sub_177a050, sub_177a2e0
*/
void sub_1779de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1779de0ULL || rel >= 0x177a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177a050 size=656 callers=2 calls=0
*/
void sub_177a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a050ULL || rel >= 0x177a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177a2e0 size=720 callers=2 calls=0
*/
void sub_177a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a2e0ULL || rel >= 0x177a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177a5b0 size=16 callers=1 calls=0
*/
void sub_177a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a5b0ULL || rel >= 0x177a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177a5c0 size=384 callers=1 calls=5
   calls: sub_1787320, sub_1787960, sub_1787a90, sub_1787ac0, sub_1787c60
*/
void sub_177a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a5c0ULL || rel >= 0x177a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177a740 size=240 callers=1 calls=1
   calls: sub_1787bb0
*/
void sub_177a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a740ULL || rel >= 0x177a830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177a830 size=128 callers=1 calls=1
   calls: sub_1787bf0
*/
void sub_177a830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a830ULL || rel >= 0x177a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177a8b0 size=112 callers=1 calls=1
   calls: sub_1787c10
*/
void sub_177a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a8b0ULL || rel >= 0x177a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177a920 size=16 callers=1 calls=0
*/
void sub_177a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a920ULL || rel >= 0x177a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177a930 size=240 callers=1 calls=7
   calls: sub_177aa20, sub_1787360, sub_1787540, sub_1787560, sub_1787570, sub_1789bc0, sub_178fd30
   ref: aVertex
*/
void aVertex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177a930ULL || rel >= 0x177aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177aa20 size=224 callers=2 calls=4
   calls: sub_1787320, sub_1787360, sub_1787960, sub_1789bd0
*/
void sub_177aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177aa20ULL || rel >= 0x177ab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177ab00 size=160 callers=1 calls=4
   calls: sub_1787a90, sub_1789be0, sub_178e4c0, sub_178fda0
*/
void sub_177ab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177ab00ULL || rel >= 0x177aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177aba0 size=160 callers=1 calls=4
   calls: sub_1787ab0, sub_1789c00, sub_178e4f0, sub_178fdb0
*/
void sub_177aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177aba0ULL || rel >= 0x177ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177ac40 size=48 callers=0 calls=1
   calls: sub_177aba0
*/
void sub_177ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177ac40ULL || rel >= 0x177ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177ac70 size=528 callers=0 calls=6
   calls: sub_1787bb0, sub_1789ca0, sub_178e450, sub_178e5b0, sub_178f140, sub_1790120
*/
void sub_177ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177ac70ULL || rel >= 0x177ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177ae80 size=32 callers=1 calls=0
*/
void sub_177ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177ae80ULL || rel >= 0x177aea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177aea0 size=64 callers=1 calls=0
*/
void sub_177aea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177aea0ULL || rel >= 0x177aee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177aee0 size=288 callers=0 calls=1
   calls: sub_177b000
*/
void sub_177aee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177aee0ULL || rel >= 0x177b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177b000 size=672 callers=2 calls=8
   calls: sub_1787c60, sub_1788170, sub_17884a0, sub_1788500, sub_1788610, sub_1789590, sub_1789690, sub_1789700
*/
void sub_177b000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177b000ULL || rel >= 0x177b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177b2a0 size=2128 callers=0 calls=22
   calls: sub_1787320, sub_1787360, sub_1787370, sub_17873f0, sub_1787540, sub_1787560, sub_1787570, sub_1787960, sub_1787ac0, sub_1787bf0, sub_1787c10, sub_1787c40
   ... +10 more
   ref: uTextureSrc
   ref: aVertex
   ref: ShaderParamBlackWhiteInterpolation
   ref: ShaderParam
   ref: PerCharacterParamBlock
   ref: SDK MW+Nintendo+NintendoWare_Font-7_3_2-Release
*/
void ShaderParamBlackWhiteInterpolation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177b2a0ULL || rel >= 0x177baf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177baf0 size=48 callers=2 calls=1
   calls: sub_177bef0
*/
void sub_177baf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177baf0ULL || rel >= 0x177bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177bb20 size=32 callers=1 calls=0
*/
void sub_177bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177bb20ULL || rel >= 0x177bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177bb40 size=64 callers=0 calls=1
   calls: sub_177bfd0
*/
void sub_177bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177bb40ULL || rel >= 0x177bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177bb80 size=48 callers=1 calls=1
   calls: sub_177c9e0
*/
void sub_177bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177bb80ULL || rel >= 0x177bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177bbb0 size=64 callers=1 calls=1
   calls: sub_177c9e0
*/
void sub_177bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177bbb0ULL || rel >= 0x177bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177bbf0 size=496 callers=2 calls=3
   calls: sub_177c0b0, sub_177c800, sub_177c900
   ref: Signature check failed ('%c%c%c%c' must be '%c%c%c%c').
*/
void Signature_check_failed_c_c_c_c_must_be_c_c_c_c(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177bbf0ULL || rel >= 0x177bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177bde0 size=240 callers=0 calls=0
*/
void sub_177bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177bde0ULL || rel >= 0x177bed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177bed0 size=32 callers=0 calls=0
*/
void sub_177bed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177bed0ULL || rel >= 0x177bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177bef0 size=224 callers=1 calls=2
   calls: sub_177cd90, sub_177cdc0
*/
void sub_177bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177bef0ULL || rel >= 0x177bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177bfd0 size=112 callers=1 calls=1
   calls: sub_177cd90
*/
void sub_177bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177bfd0ULL || rel >= 0x177c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c040 size=112 callers=0 calls=2
   calls: sub_177cd90, sub_177cde0
*/
void sub_177c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c040ULL || rel >= 0x177c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c0b0 size=32 callers=1 calls=0
*/
void sub_177c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c0b0ULL || rel >= 0x177c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c0d0 size=32 callers=0 calls=0
*/
void sub_177c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c0d0ULL || rel >= 0x177c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c0f0 size=32 callers=2 calls=0
*/
void sub_177c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c0f0ULL || rel >= 0x177c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c110 size=16 callers=0 calls=0
*/
void sub_177c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c110ULL || rel >= 0x177c120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c120 size=32 callers=2 calls=0
*/
void sub_177c120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c120ULL || rel >= 0x177c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c140 size=16 callers=0 calls=0
*/
void sub_177c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c140ULL || rel >= 0x177c150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c150 size=16 callers=0 calls=0
*/
void sub_177c150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c150ULL || rel >= 0x177c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c160 size=16 callers=0 calls=0
*/
void sub_177c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c160ULL || rel >= 0x177c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c170 size=32 callers=0 calls=0
*/
void sub_177c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c170ULL || rel >= 0x177c190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c190 size=32 callers=0 calls=0
*/
void sub_177c190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c190ULL || rel >= 0x177c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c1b0 size=32 callers=0 calls=0
*/
void sub_177c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c1b0ULL || rel >= 0x177c1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c1d0 size=16 callers=0 calls=0
*/
void sub_177c1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c1d0ULL || rel >= 0x177c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c1e0 size=32 callers=0 calls=0
*/
void sub_177c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c1e0ULL || rel >= 0x177c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c200 size=16 callers=0 calls=0
*/
void sub_177c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c200ULL || rel >= 0x177c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c210 size=32 callers=0 calls=0
*/
void sub_177c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c210ULL || rel >= 0x177c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c230 size=16 callers=0 calls=0
*/
void sub_177c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c230ULL || rel >= 0x177c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c240 size=32 callers=0 calls=0
*/
void sub_177c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c240ULL || rel >= 0x177c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c260 size=32 callers=0 calls=0
*/
void sub_177c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c260ULL || rel >= 0x177c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c280 size=80 callers=0 calls=1
   calls: sub_177c2d0
*/
void sub_177c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c280ULL || rel >= 0x177c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c2d0 size=288 callers=4 calls=0
*/
void sub_177c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c2d0ULL || rel >= 0x177c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c3f0 size=16 callers=0 calls=0
*/
void sub_177c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c3f0ULL || rel >= 0x177c400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c400 size=32 callers=0 calls=0
*/
void sub_177c400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c400ULL || rel >= 0x177c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c420 size=144 callers=0 calls=1
   calls: sub_177c2d0
*/
void sub_177c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c420ULL || rel >= 0x177c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c4b0 size=80 callers=0 calls=1
   calls: sub_177c2d0
*/
void sub_177c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c4b0ULL || rel >= 0x177c500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c500 size=320 callers=0 calls=0
*/
void sub_177c500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c500ULL || rel >= 0x177c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c640 size=32 callers=0 calls=1
   calls: sub_177c2d0
*/
void sub_177c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c640ULL || rel >= 0x177c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c660 size=400 callers=0 calls=0
*/
void sub_177c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c660ULL || rel >= 0x177c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c7f0 size=16 callers=0 calls=0
*/
void sub_177c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c7f0ULL || rel >= 0x177c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c800 size=80 callers=1 calls=0
*/
void sub_177c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c800ULL || rel >= 0x177c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c850 size=32 callers=0 calls=0
*/
void sub_177c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c850ULL || rel >= 0x177c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c870 size=16 callers=0 calls=0
*/
void sub_177c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c870ULL || rel >= 0x177c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c880 size=16 callers=0 calls=0
*/
void sub_177c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c880ULL || rel >= 0x177c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c890 size=16 callers=0 calls=0
*/
void sub_177c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c890ULL || rel >= 0x177c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c8a0 size=16 callers=0 calls=0
*/
void sub_177c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c8a0ULL || rel >= 0x177c8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c8b0 size=16 callers=0 calls=0
*/
void sub_177c8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c8b0ULL || rel >= 0x177c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c8c0 size=32 callers=0 calls=0
*/
void sub_177c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c8c0ULL || rel >= 0x177c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c8e0 size=32 callers=0 calls=0
*/
void sub_177c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c8e0ULL || rel >= 0x177c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c900 size=224 callers=1 calls=1
   calls: sub_177cd90
*/
void sub_177c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c900ULL || rel >= 0x177c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c9e0 size=16 callers=2 calls=0
*/
void sub_177c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c9e0ULL || rel >= 0x177c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177c9f0 size=176 callers=0 calls=5
   calls: sub_177cd90, sub_17873b0, sub_1789ca0, sub_1790c30, sub_1790de0
*/
void sub_177c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177c9f0ULL || rel >= 0x177caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177caa0 size=352 callers=0 calls=5
   calls: sub_17873b0, sub_1787640, sub_1789c10, sub_1790b60, sub_1790ca0
*/
void sub_177caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177caa0ULL || rel >= 0x177cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cc00 size=176 callers=0 calls=0
*/
void sub_177cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cc00ULL || rel >= 0x177ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177ccb0 size=16 callers=0 calls=0
*/
void sub_177ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177ccb0ULL || rel >= 0x177ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177ccc0 size=80 callers=0 calls=1
   calls: sub_177cd90
*/
void sub_177ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177ccc0ULL || rel >= 0x177cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cd10 size=16 callers=0 calls=0
*/
void sub_177cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cd10ULL || rel >= 0x177cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cd20 size=96 callers=0 calls=1
   calls: sub_177cd90
*/
void sub_177cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cd20ULL || rel >= 0x177cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cd80 size=16 callers=0 calls=0
*/
void sub_177cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cd80ULL || rel >= 0x177cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cd90 size=48 callers=13 calls=0
*/
void sub_177cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cd90ULL || rel >= 0x177cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cdc0 size=32 callers=2 calls=0
*/
void sub_177cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cdc0ULL || rel >= 0x177cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cde0 size=16 callers=2 calls=0
*/
void sub_177cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cde0ULL || rel >= 0x177cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cdf0 size=16 callers=0 calls=0
*/
void sub_177cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cdf0ULL || rel >= 0x177ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177ce00 size=112 callers=2 calls=0
*/
void sub_177ce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177ce00ULL || rel >= 0x177ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177ce70 size=64 callers=2 calls=0
*/
void sub_177ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177ce70ULL || rel >= 0x177ceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177ceb0 size=96 callers=0 calls=0
*/
void sub_177ceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177ceb0ULL || rel >= 0x177cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cf10 size=16 callers=0 calls=0
*/
void sub_177cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cf10ULL || rel >= 0x177cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cf20 size=64 callers=0 calls=0
*/
void sub_177cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cf20ULL || rel >= 0x177cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cf60 size=32 callers=0 calls=0
*/
void sub_177cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cf60ULL || rel >= 0x177cf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cf80 size=32 callers=0 calls=0
*/
void sub_177cf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cf80ULL || rel >= 0x177cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cfa0 size=80 callers=0 calls=0
*/
void sub_177cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cfa0ULL || rel >= 0x177cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177cff0 size=32 callers=1 calls=0
*/
void sub_177cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177cff0ULL || rel >= 0x177d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d010 size=112 callers=1 calls=1
   calls: sub_177cdc0
*/
void sub_177d010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d010ULL || rel >= 0x177d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d080 size=16 callers=4 calls=0
*/
void sub_177d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d080ULL || rel >= 0x177d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d090 size=48 callers=0 calls=1
   calls: sub_177cde0
*/
void sub_177d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d090ULL || rel >= 0x177d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d0c0 size=240 callers=1 calls=1
   calls: sub_1780b40
*/
void sub_177d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d0c0ULL || rel >= 0x177d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d1b0 size=192 callers=20 calls=2
   calls: sub_177f9c0, sub_1781520
*/
void sub_177d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d1b0ULL || rel >= 0x177d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d270 size=16 callers=0 calls=0
*/
void sub_177d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d270ULL || rel >= 0x177d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d280 size=16 callers=0 calls=0
*/
void sub_177d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d280ULL || rel >= 0x177d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d290 size=16 callers=0 calls=0
*/
void sub_177d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d290ULL || rel >= 0x177d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d2a0 size=16 callers=0 calls=0
*/
void sub_177d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d2a0ULL || rel >= 0x177d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d2b0 size=16 callers=0 calls=0
*/
void sub_177d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d2b0ULL || rel >= 0x177d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d2c0 size=16 callers=0 calls=0
*/
void sub_177d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d2c0ULL || rel >= 0x177d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d2d0 size=16 callers=0 calls=0
*/
void sub_177d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d2d0ULL || rel >= 0x177d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d2e0 size=16 callers=0 calls=0
*/
void sub_177d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d2e0ULL || rel >= 0x177d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d2f0 size=16 callers=0 calls=0
*/
void sub_177d2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d2f0ULL || rel >= 0x177d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d300 size=16 callers=0 calls=0
*/
void sub_177d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d300ULL || rel >= 0x177d310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d310 size=32 callers=0 calls=0
*/
void sub_177d310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d310ULL || rel >= 0x177d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d330 size=128 callers=0 calls=1
   calls: sub_1780a10
*/
void sub_177d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d330ULL || rel >= 0x177d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d3b0 size=176 callers=0 calls=2
   calls: sub_1780a10, sub_1781520
*/
void sub_177d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d3b0ULL || rel >= 0x177d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d460 size=224 callers=0 calls=3
   calls: sub_1780a10, sub_1780c10, sub_1781520
*/
void sub_177d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d460ULL || rel >= 0x177d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d540 size=400 callers=0 calls=3
   calls: sub_1780a10, sub_1780c10, sub_1781520
*/
void sub_177d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d540ULL || rel >= 0x177d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d6d0 size=128 callers=0 calls=1
   calls: sub_1781520
*/
void sub_177d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d6d0ULL || rel >= 0x177d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d750 size=96 callers=0 calls=0
*/
void sub_177d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d750ULL || rel >= 0x177d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d7b0 size=16 callers=0 calls=0
*/
void sub_177d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d7b0ULL || rel >= 0x177d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d7c0 size=16 callers=0 calls=0
*/
void sub_177d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d7c0ULL || rel >= 0x177d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d7d0 size=16 callers=0 calls=0
*/
void sub_177d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d7d0ULL || rel >= 0x177d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d7e0 size=16 callers=0 calls=0
*/
void sub_177d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d7e0ULL || rel >= 0x177d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d7f0 size=16 callers=0 calls=0
*/
void sub_177d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d7f0ULL || rel >= 0x177d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d800 size=16 callers=0 calls=0
*/
void sub_177d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d800ULL || rel >= 0x177d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d810 size=16 callers=0 calls=0
*/
void sub_177d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d810ULL || rel >= 0x177d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d820 size=16 callers=0 calls=0
*/
void sub_177d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d820ULL || rel >= 0x177d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d830 size=16 callers=0 calls=0
*/
void sub_177d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d830ULL || rel >= 0x177d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d840 size=32 callers=0 calls=0
*/
void sub_177d840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d840ULL || rel >= 0x177d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d860 size=16 callers=0 calls=0
*/
void sub_177d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d860ULL || rel >= 0x177d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d870 size=176 callers=0 calls=0
*/
void sub_177d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d870ULL || rel >= 0x177d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d920 size=16 callers=0 calls=0
*/
void sub_177d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d920ULL || rel >= 0x177d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d930 size=96 callers=0 calls=0
*/
void sub_177d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d930ULL || rel >= 0x177d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d990 size=32 callers=3 calls=0
*/
void sub_177d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d990ULL || rel >= 0x177d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d9b0 size=16 callers=2 calls=0
*/
void sub_177d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d9b0ULL || rel >= 0x177d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d9c0 size=16 callers=0 calls=0
*/
void sub_177d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d9c0ULL || rel >= 0x177d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177d9d0 size=208 callers=0 calls=1
   calls: sub_1779310
*/
void sub_177d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177d9d0ULL || rel >= 0x177daa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177daa0 size=448 callers=0 calls=2
   calls: sub_1779310, sub_1779350
*/
void sub_177daa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177daa0ULL || rel >= 0x177dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dc60 size=16 callers=0 calls=0
*/
void sub_177dc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dc60ULL || rel >= 0x177dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dc70 size=16 callers=0 calls=0
*/
void sub_177dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dc70ULL || rel >= 0x177dc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dc80 size=16 callers=0 calls=0
*/
void sub_177dc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dc80ULL || rel >= 0x177dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dc90 size=16 callers=0 calls=0
*/
void sub_177dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dc90ULL || rel >= 0x177dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dca0 size=16 callers=0 calls=0
*/
void sub_177dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dca0ULL || rel >= 0x177dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dcb0 size=16 callers=0 calls=0
*/
void sub_177dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dcb0ULL || rel >= 0x177dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dcc0 size=16 callers=0 calls=0
*/
void sub_177dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dcc0ULL || rel >= 0x177dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dcd0 size=16 callers=0 calls=0
*/
void sub_177dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dcd0ULL || rel >= 0x177dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dce0 size=16 callers=0 calls=0
*/
void sub_177dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dce0ULL || rel >= 0x177dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dcf0 size=80 callers=0 calls=0
*/
void sub_177dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dcf0ULL || rel >= 0x177dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dd40 size=32 callers=6 calls=0
*/
void sub_177dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dd40ULL || rel >= 0x177dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dd60 size=16 callers=4 calls=0
*/
void sub_177dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dd60ULL || rel >= 0x177dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dd70 size=16 callers=0 calls=0
*/
void sub_177dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dd70ULL || rel >= 0x177dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177dd80 size=208 callers=0 calls=1
   calls: sub_1779310
*/
void sub_177dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177dd80ULL || rel >= 0x177de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177de50 size=448 callers=0 calls=2
   calls: sub_1779310, sub_1779350
*/
void sub_177de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177de50ULL || rel >= 0x177e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e010 size=16 callers=0 calls=0
*/
void sub_177e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e010ULL || rel >= 0x177e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e020 size=16 callers=0 calls=0
*/
void sub_177e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e020ULL || rel >= 0x177e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e030 size=16 callers=0 calls=0
*/
void sub_177e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e030ULL || rel >= 0x177e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e040 size=16 callers=0 calls=0
*/
void sub_177e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e040ULL || rel >= 0x177e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e050 size=16 callers=0 calls=0
*/
void sub_177e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e050ULL || rel >= 0x177e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e060 size=16 callers=0 calls=0
*/
void sub_177e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e060ULL || rel >= 0x177e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e070 size=16 callers=0 calls=0
*/
void sub_177e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e070ULL || rel >= 0x177e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e080 size=16 callers=0 calls=0
*/
void sub_177e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e080ULL || rel >= 0x177e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e090 size=16 callers=0 calls=0
*/
void sub_177e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e090ULL || rel >= 0x177e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e0a0 size=16 callers=0 calls=0
*/
void sub_177e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e0a0ULL || rel >= 0x177e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e0b0 size=624 callers=1 calls=0
*/
void sub_177e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e0b0ULL || rel >= 0x177e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e320 size=384 callers=1 calls=5
   calls: sub_177cd90, sub_1781780, sub_1789be0, sub_1790b10, sub_1790c70
*/
void sub_177e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e320ULL || rel >= 0x177e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e4a0 size=144 callers=0 calls=3
   calls: sub_177cd90, sub_1789c00, sub_1790c90
*/
void sub_177e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e4a0ULL || rel >= 0x177e530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e530 size=160 callers=0 calls=4
   calls: sub_177cd90, sub_1789c00, sub_1790b50, sub_1790c90
*/
void sub_177e530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e530ULL || rel >= 0x177e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177e5d0 size=3712 callers=1 calls=14
   calls: sub_177cd90, sub_177f450, sub_1781790, sub_1787360, sub_1787610, sub_1787640, sub_1789bc0, sub_1789bd0, sub_1789c10, sub_1789ce0, sub_1789d00, sub_1790a50
   ... +2 more
*/
void sub_177e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177e5d0ULL || rel >= 0x177f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177f450 size=160 callers=2 calls=0
*/
void sub_177f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177f450ULL || rel >= 0x177f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177f4f0 size=1168 callers=0 calls=4
   calls: sub_1781840, sub_1789ca0, sub_1790c30, sub_1790de0
*/
void sub_177f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177f4f0ULL || rel >= 0x177f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177f980 size=32 callers=1 calls=0
*/
void sub_177f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177f980ULL || rel >= 0x177f9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177f9a0 size=32 callers=1 calls=0
*/
void sub_177f9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177f9a0ULL || rel >= 0x177f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177f9c0 size=720 callers=2 calls=4
   calls: sub_1780df0, sub_1781870, sub_17818c0, sub_1781b10
*/
void sub_177f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177f9c0ULL || rel >= 0x177fc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0177fc90 size=2288 callers=1 calls=4
   calls: sub_177f450, sub_1780580, sub_1789ce0, sub_1789d00
*/
void sub_177fc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x177fc90ULL || rel >= 0x1780580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01780580 size=416 callers=1 calls=0
*/
void sub_1780580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1780580ULL || rel >= 0x1780720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01780720 size=304 callers=0 calls=1
   calls: sub_1781b10
*/
void sub_1780720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1780720ULL || rel >= 0x1780850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01780850 size=32 callers=1 calls=0
*/
void sub_1780850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1780850ULL || rel >= 0x1780870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01780870 size=336 callers=0 calls=2
   calls: sub_1789ce0, sub_1789d00
*/
void sub_1780870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1780870ULL || rel >= 0x17809c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017809c0 size=80 callers=0 calls=0
*/
void sub_17809c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17809c0ULL || rel >= 0x1780a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01780a10 size=304 callers=6 calls=1
   calls: sub_1780df0
*/
void sub_1780a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1780a10ULL || rel >= 0x1780b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01780b40 size=208 callers=1 calls=0
*/
void sub_1780b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1780b40ULL || rel >= 0x1780c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01780c10 size=480 callers=2 calls=1
   calls: sub_1780df0
*/
void sub_1780c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1780c10ULL || rel >= 0x1780df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01780df0 size=224 callers=12 calls=0
*/
void sub_1780df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1780df0ULL || rel >= 0x1780ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01780ed0 size=1616 callers=0 calls=1
   calls: sub_1780df0
*/
void sub_1780ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1780ed0ULL || rel >= 0x1781520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01781520 size=352 callers=11 calls=1
   calls: sub_1780df0
*/
void sub_1781520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1781520ULL || rel >= 0x1781680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01781680 size=80 callers=0 calls=1
   calls: sub_177cd90
*/
void sub_1781680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1781680ULL || rel >= 0x17816d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017816d0 size=16 callers=0 calls=0
*/
void sub_17816d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17816d0ULL || rel >= 0x17816e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017816e0 size=16 callers=0 calls=0
*/
void sub_17816e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17816e0ULL || rel >= 0x17816f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017816f0 size=128 callers=0 calls=0
*/
void sub_17816f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17816f0ULL || rel >= 0x1781770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01781770 size=16 callers=0 calls=0
*/
void sub_1781770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1781770ULL || rel >= 0x1781780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01781780 size=16 callers=1 calls=0
*/
void sub_1781780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1781780ULL || rel >= 0x1781790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01781790 size=176 callers=1 calls=0
*/
void sub_1781790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1781790ULL || rel >= 0x1781840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01781840 size=48 callers=1 calls=0
*/
void sub_1781840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1781840ULL || rel >= 0x1781870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01781870 size=80 callers=1 calls=0
*/
void sub_1781870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1781870ULL || rel >= 0x17818c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017818c0 size=112 callers=1 calls=1
   calls: sub_1781930
*/
void sub_17818c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17818c0ULL || rel >= 0x1781930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01781930 size=480 callers=3 calls=1
   calls: sub_1781930
*/
void sub_1781930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1781930ULL || rel >= 0x1781b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01781b10 size=80 callers=2 calls=1
   calls: sub_1781b60
*/
void sub_1781b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1781b10ULL || rel >= 0x1781b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01781b60 size=1120 callers=3 calls=2
   calls: sub_1781b60, sub_1781fc0
*/
void sub_1781b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1781b60ULL || rel >= 0x1781fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01781fc0 size=592 callers=2 calls=1
   calls: sub_1781fc0
*/
void sub_1781fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1781fc0ULL || rel >= 0x1782210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01782210 size=128 callers=0 calls=0
*/
void sub_1782210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1782210ULL || rel >= 0x1782290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01782290 size=80 callers=1 calls=1
   calls: sub_1782290
*/
void sub_1782290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1782290ULL || rel >= 0x17822e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017822e0 size=80 callers=1 calls=1
   calls: sub_17822e0
*/
void sub_17822e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17822e0ULL || rel >= 0x1782330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01782330 size=80 callers=2 calls=1
   calls: sub_1779270
*/
void sub_1782330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1782330ULL || rel >= 0x1782380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01782380 size=16 callers=3 calls=0
*/
void sub_1782380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1782380ULL || rel >= 0x1782390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01782390 size=80 callers=0 calls=0
*/
void sub_1782390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1782390ULL || rel >= 0x17823e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017823e0 size=64 callers=2 calls=1
   calls: sub_1782420
*/
void sub_17823e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17823e0ULL || rel >= 0x1782420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01782420 size=320 callers=2 calls=2
   calls: sub_17792a0, sub_1782560
*/
void sub_1782420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1782420ULL || rel >= 0x1782560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01782560 size=1648 callers=8 calls=4
   calls: sub_17792a0, sub_1779350, sub_177ce00, sub_17835b0
*/
void sub_1782560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1782560ULL || rel >= 0x1782bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01782bd0 size=144 callers=2 calls=2
   calls: sub_17792a0, sub_1782cf0
*/
void sub_1782bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1782bd0ULL || rel >= 0x1782c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01782c60 size=144 callers=1 calls=2
   calls: sub_17792a0, sub_1782cf0
*/
void sub_1782c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1782c60ULL || rel >= 0x1782cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01782cf0 size=2240 callers=2 calls=6
   calls: sub_17792a0, sub_17793d0, sub_177ce00, sub_1782560, sub_17835b0, sub_1783610
*/
void sub_1782cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1782cf0ULL || rel >= 0x17835b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017835b0 size=96 callers=4 calls=0
*/
void sub_17835b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17835b0ULL || rel >= 0x1783610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01783610 size=992 callers=1 calls=3
   calls: sub_17792a0, sub_1779390, sub_1782560
*/
void sub_1783610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1783610ULL || rel >= 0x17839f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017839f0 size=96 callers=0 calls=2
   calls: sub_177d990, sub_1c0
*/
void sub_17839f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17839f0ULL || rel >= 0x1783a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01783a50 size=112 callers=0 calls=2
   calls: sub_177d990, sub_1c0
*/
void sub_1783a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1783a50ULL || rel >= 0x1783ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01783ac0 size=80 callers=2 calls=1
   calls: sub_1779270
*/
void sub_1783ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1783ac0ULL || rel >= 0x1783b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01783b10 size=16 callers=3 calls=0
*/
void sub_1783b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1783b10ULL || rel >= 0x1783b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01783b20 size=80 callers=0 calls=0
*/
void sub_1783b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1783b20ULL || rel >= 0x1783b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01783b70 size=64 callers=4 calls=1
   calls: sub_1783bb0
*/
void sub_1783b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1783b70ULL || rel >= 0x1783bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01783bb0 size=336 callers=2 calls=2
   calls: sub_17792a0, sub_1783d00
*/
void sub_1783bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1783bb0ULL || rel >= 0x1783d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01783d00 size=1648 callers=8 calls=4
   calls: sub_17792a0, sub_1779350, sub_177ce70, sub_17835b0
*/
void sub_1783d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1783d00ULL || rel >= 0x1784370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01784370 size=144 callers=2 calls=2
   calls: sub_17792a0, sub_1784490
*/
void sub_1784370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1784370ULL || rel >= 0x1784400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01784400 size=144 callers=1 calls=2
   calls: sub_17792a0, sub_1784490
*/
void sub_1784400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1784400ULL || rel >= 0x1784490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01784490 size=2256 callers=2 calls=6
   calls: sub_17792a0, sub_17793d0, sub_177ce70, sub_17835b0, sub_1783d00, sub_1784d60
*/
void sub_1784490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1784490ULL || rel >= 0x1784d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01784d60 size=992 callers=1 calls=3
   calls: sub_17792a0, sub_1779390, sub_1783d00
*/
void sub_1784d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1784d60ULL || rel >= 0x1785140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785140 size=96 callers=0 calls=2
   calls: sub_177dd40, sub_1c0
*/
void sub_1785140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785140ULL || rel >= 0x17851a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017851a0 size=112 callers=0 calls=2
   calls: sub_177dd40, sub_1c0
*/
void sub_17851a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17851a0ULL || rel >= 0x1785210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785210 size=176 callers=0 calls=0
*/
void sub_1785210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785210ULL || rel >= 0x17852c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017852c0 size=48 callers=0 calls=1
   calls: sub_177d9b0
*/
void sub_17852c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17852c0ULL || rel >= 0x17852f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017852f0 size=16 callers=0 calls=0
*/
void sub_17852f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17852f0ULL || rel >= 0x1785300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785300 size=16 callers=0 calls=0
*/
void sub_1785300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785300ULL || rel >= 0x1785310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785310 size=176 callers=0 calls=0
*/
void sub_1785310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785310ULL || rel >= 0x17853c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017853c0 size=48 callers=0 calls=1
   calls: sub_177dd60
*/
void sub_17853c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17853c0ULL || rel >= 0x17853f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017853f0 size=16 callers=0 calls=0
*/
void sub_17853f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17853f0ULL || rel >= 0x1785400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785400 size=16 callers=0 calls=0
*/
void sub_1785400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785400ULL || rel >= 0x1785410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785410 size=160 callers=0 calls=0
*/
void sub_1785410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785410ULL || rel >= 0x17854b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017854b0 size=160 callers=0 calls=0
*/
void sub_17854b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17854b0ULL || rel >= 0x1785550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785550 size=640 callers=0 calls=6
   calls: sub_1779310, sub_177d990, sub_177d9b0, sub_1782380, sub_17823e0, sub_1782bd0
*/
void sub_1785550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785550ULL || rel >= 0x17857d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017857d0 size=160 callers=0 calls=0
*/
void sub_17857d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17857d0ULL || rel >= 0x1785870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785870 size=80 callers=0 calls=0
*/
void sub_1785870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785870ULL || rel >= 0x17858c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017858c0 size=656 callers=0 calls=6
   calls: sub_1779310, sub_177dd40, sub_177dd60, sub_1783b10, sub_1783b70, sub_1784370
*/
void sub_17858c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17858c0ULL || rel >= 0x1785b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785b50 size=64 callers=1 calls=0
*/
void sub_1785b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785b50ULL || rel >= 0x1785b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785b90 size=160 callers=1 calls=4
   calls: sub_1785d50, sub_1789be0, sub_1789c10, sub_1791360
   ref: SDK MW+Nintendo+NintendoWare_G3d-7_3_2-Release
*/
void SDK_MW_Nintendo_NintendoWare_G3d_7_3_2_Release(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785b90ULL || rel >= 0x1785c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785c30 size=144 callers=1 calls=1
   calls: sub_1785e10
*/
void sub_1785c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785c30ULL || rel >= 0x1785cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785cc0 size=144 callers=1 calls=2
   calls: sub_1785ef0, sub_1789ca0
*/
void sub_1785cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785cc0ULL || rel >= 0x1785d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785d50 size=192 callers=1 calls=3
   calls: g3d_index, g3d_vertex, sub_1786300
*/
void sub_1785d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785d50ULL || rel >= 0x1785e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785e10 size=224 callers=1 calls=3
   calls: g3d_index_2, g3d_vertex_2, sub_1786300
*/
void sub_1785e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785e10ULL || rel >= 0x1785ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785ef0 size=192 callers=1 calls=3
   calls: sub_1786410, sub_1786f50, sub_1787140
*/
void sub_1785ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785ef0ULL || rel >= 0x1785fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01785fb0 size=176 callers=0 calls=0
*/
void sub_1785fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1785fb0ULL || rel >= 0x1786060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786060 size=608 callers=0 calls=0
*/
void sub_1786060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786060ULL || rel >= 0x17862c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017862c0 size=32 callers=0 calls=0
*/
void sub_17862c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17862c0ULL || rel >= 0x17862e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017862e0 size=32 callers=0 calls=0
*/
void sub_17862e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17862e0ULL || rel >= 0x1786300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786300 size=272 callers=2 calls=3
   calls: sub_178e4c0, sub_178e500, sub_17913a0
*/
void sub_1786300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786300ULL || rel >= 0x1786410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786410 size=128 callers=1 calls=2
   calls: sub_178e4f0, sub_178e5b0
*/
void sub_1786410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786410ULL || rel >= 0x1786490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786490 size=240 callers=0 calls=0
*/
void sub_1786490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786490ULL || rel >= 0x1786580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786580 size=224 callers=0 calls=0
*/
void sub_1786580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786580ULL || rel >= 0x1786660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786660 size=208 callers=0 calls=0
*/
void sub_1786660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786660ULL || rel >= 0x1786730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786730 size=544 callers=0 calls=0
*/
void sub_1786730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786730ULL || rel >= 0x1786950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786950 size=544 callers=0 calls=0
*/
void sub_1786950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786950ULL || rel >= 0x1786b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786b70 size=544 callers=0 calls=0
*/
void sub_1786b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786b70ULL || rel >= 0x1786d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786d90 size=224 callers=1 calls=3
   calls: sub_1787a90, sub_1787ac0, sub_1791380
   ref: g3d_vertex
*/
void g3d_vertex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786d90ULL || rel >= 0x1786e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786e70 size=224 callers=1 calls=3
   calls: sub_1787a90, sub_1787ac0, sub_1791380
   ref: g3d_vertex
*/
void g3d_vertex_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786e70ULL || rel >= 0x1786f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786f50 size=128 callers=1 calls=2
   calls: sub_1787ab0, sub_1787bb0
*/
void sub_1786f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786f50ULL || rel >= 0x1786fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01786fd0 size=176 callers=1 calls=3
   calls: sub_1787a90, sub_1787ac0, sub_1791380
   ref: g3d_index
*/
void g3d_index(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1786fd0ULL || rel >= 0x1787080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787080 size=192 callers=1 calls=3
   calls: sub_1787a90, sub_1787ac0, sub_1791380
   ref: g3d_index
*/
void g3d_index_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787080ULL || rel >= 0x1787140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787140 size=128 callers=1 calls=2
   calls: sub_1787ab0, sub_1787bb0
*/
void sub_1787140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787140ULL || rel >= 0x17871c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017871c0 size=176 callers=0 calls=2
   calls: sub_1787c60, sub_1788170
*/
void sub_17871c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17871c0ULL || rel >= 0x1787270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787270 size=176 callers=0 calls=2
   calls: sub_1787c60, sub_1788170
*/
void sub_1787270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787270ULL || rel >= 0x1787320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787320 size=16 callers=28 calls=0
*/
void sub_1787320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787320ULL || rel >= 0x1787330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787330 size=16 callers=1 calls=0
*/
void sub_1787330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787330ULL || rel >= 0x1787340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787340 size=16 callers=3 calls=0
*/
void sub_1787340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787340ULL || rel >= 0x1787350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787350 size=16 callers=1 calls=0
*/
void sub_1787350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787350ULL || rel >= 0x1787360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787360 size=16 callers=16 calls=0
*/
void sub_1787360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787360ULL || rel >= 0x1787370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787370 size=64 callers=5 calls=0
*/
void sub_1787370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787370ULL || rel >= 0x17873b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017873b0 size=64 callers=6 calls=0
*/
void sub_17873b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17873b0ULL || rel >= 0x17873f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017873f0 size=48 callers=10 calls=0
*/
void sub_17873f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17873f0ULL || rel >= 0x1787420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787420 size=32 callers=1 calls=0
*/
void sub_1787420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787420ULL || rel >= 0x1787440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787440 size=80 callers=10 calls=0
*/
void sub_1787440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787440ULL || rel >= 0x1787490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787490 size=48 callers=14 calls=0
*/
void sub_1787490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787490ULL || rel >= 0x17874c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017874c0 size=48 callers=14 calls=0
*/
void sub_17874c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17874c0ULL || rel >= 0x17874f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017874f0 size=16 callers=10 calls=0
*/
void sub_17874f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17874f0ULL || rel >= 0x1787500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787500 size=64 callers=20 calls=0
*/
void sub_1787500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787500ULL || rel >= 0x1787540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787540 size=32 callers=31 calls=0
*/
void sub_1787540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787540ULL || rel >= 0x1787560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787560 size=16 callers=9 calls=0
*/
void sub_1787560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787560ULL || rel >= 0x1787570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787570 size=16 callers=7 calls=0
*/
void sub_1787570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787570ULL || rel >= 0x1787580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787580 size=16 callers=9 calls=0
*/
void sub_1787580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787580ULL || rel >= 0x1787590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787590 size=16 callers=4 calls=0
*/
void sub_1787590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787590ULL || rel >= 0x17875a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017875a0 size=32 callers=1 calls=0
*/
void sub_17875a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17875a0ULL || rel >= 0x17875c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017875c0 size=48 callers=1 calls=0
*/
void sub_17875c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17875c0ULL || rel >= 0x17875f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017875f0 size=16 callers=2 calls=0
*/
void sub_17875f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17875f0ULL || rel >= 0x1787600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787600 size=16 callers=1 calls=0
*/
void sub_1787600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787600ULL || rel >= 0x1787610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787610 size=48 callers=14 calls=0
*/
void sub_1787610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787610ULL || rel >= 0x1787640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787640 size=48 callers=8 calls=0
*/
void sub_1787640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787640ULL || rel >= 0x1787670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787670 size=32 callers=2 calls=0
*/
void sub_1787670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787670ULL || rel >= 0x1787690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787690 size=32 callers=2 calls=0
*/
void sub_1787690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787690ULL || rel >= 0x17876b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017876b0 size=16 callers=24 calls=0
*/
void sub_17876b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17876b0ULL || rel >= 0x17876c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017876c0 size=32 callers=22 calls=0
*/
void sub_17876c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17876c0ULL || rel >= 0x17876e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017876e0 size=48 callers=3 calls=0
*/
void sub_17876e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17876e0ULL || rel >= 0x1787710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787710 size=48 callers=1 calls=0
*/
void sub_1787710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787710ULL || rel >= 0x1787740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787740 size=16 callers=1 calls=0
   ref: SDK MW+Nintendo+NintendoSDK_gfx-7_3_2-Release
*/
void SDK_MW_Nintendo_NintendoSDK_gfx_7_3_2_Release(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787740ULL || rel >= 0x1787750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787750 size=48 callers=2 calls=0
*/
void sub_1787750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787750ULL || rel >= 0x1787780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787780 size=48 callers=2 calls=0
*/
void sub_1787780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787780ULL || rel >= 0x17877b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017877b0 size=16 callers=2 calls=0
*/
void sub_17877b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17877b0ULL || rel >= 0x17877c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017877c0 size=112 callers=2 calls=0
*/
void sub_17877c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17877c0ULL || rel >= 0x1787830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787830 size=192 callers=1 calls=0
*/
void sub_1787830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787830ULL || rel >= 0x17878f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017878f0 size=112 callers=1 calls=0
*/
void sub_17878f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17878f0ULL || rel >= 0x1787960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787960 size=16 callers=23 calls=0
*/
void sub_1787960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787960ULL || rel >= 0x1787970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787970 size=288 callers=0 calls=0
*/
void sub_1787970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787970ULL || rel >= 0x1787a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787a90 size=32 callers=19 calls=0
*/
void sub_1787a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787a90ULL || rel >= 0x1787ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787ab0 size=16 callers=13 calls=0
*/
void sub_1787ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787ab0ULL || rel >= 0x1787ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787ac0 size=240 callers=14 calls=0
*/
void sub_1787ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787ac0ULL || rel >= 0x1787bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787bb0 size=64 callers=13 calls=0
*/
void sub_1787bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787bb0ULL || rel >= 0x1787bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787bf0 size=32 callers=18 calls=0
*/
void sub_1787bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787bf0ULL || rel >= 0x1787c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787c10 size=16 callers=17 calls=0
*/
void sub_1787c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787c10ULL || rel >= 0x1787c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787c20 size=32 callers=10 calls=0
*/
void sub_1787c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787c20ULL || rel >= 0x1787c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787c40 size=32 callers=2 calls=0
*/
void sub_1787c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787c40ULL || rel >= 0x1787c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787c60 size=64 callers=16 calls=0
*/
void sub_1787c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787c60ULL || rel >= 0x1787ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787ca0 size=16 callers=2 calls=0
*/
void sub_1787ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787ca0ULL || rel >= 0x1787cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787cb0 size=16 callers=1 calls=0
*/
void sub_1787cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787cb0ULL || rel >= 0x1787cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787cc0 size=64 callers=1 calls=0
*/
void sub_1787cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787cc0ULL || rel >= 0x1787d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787d00 size=64 callers=1 calls=0
*/
void sub_1787d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787d00ULL || rel >= 0x1787d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787d40 size=64 callers=1 calls=0
*/
void sub_1787d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787d40ULL || rel >= 0x1787d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787d80 size=16 callers=0 calls=0
*/
void sub_1787d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787d80ULL || rel >= 0x1787d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787d90 size=176 callers=1 calls=0
*/
void sub_1787d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787d90ULL || rel >= 0x1787e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787e40 size=96 callers=0 calls=0
*/
void sub_1787e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787e40ULL || rel >= 0x1787ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787ea0 size=96 callers=1 calls=0
*/
void sub_1787ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787ea0ULL || rel >= 0x1787f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787f00 size=32 callers=1 calls=0
*/
void sub_1787f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787f00ULL || rel >= 0x1787f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787f20 size=32 callers=1 calls=0
*/
void sub_1787f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787f20ULL || rel >= 0x1787f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787f40 size=16 callers=1 calls=0
*/
void sub_1787f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787f40ULL || rel >= 0x1787f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787f50 size=16 callers=1 calls=0
*/
void sub_1787f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787f50ULL || rel >= 0x1787f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787f60 size=16 callers=2 calls=0
*/
void sub_1787f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787f60ULL || rel >= 0x1787f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787f70 size=96 callers=30 calls=0
*/
void sub_1787f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787f70ULL || rel >= 0x1787fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01787fd0 size=64 callers=29 calls=0
*/
void sub_1787fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1787fd0ULL || rel >= 0x1788010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788010 size=32 callers=1 calls=0
*/
void sub_1788010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788010ULL || rel >= 0x1788030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788030 size=80 callers=8 calls=1
   calls: sub_178d6b0
*/
void sub_1788030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788030ULL || rel >= 0x1788080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788080 size=112 callers=2 calls=1
   calls: sub_178d6b0
*/
void sub_1788080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788080ULL || rel >= 0x17880f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017880f0 size=128 callers=13 calls=3
   calls: sub_178d6b0, sub_178d710, sub_178d730
*/
void sub_17880f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17880f0ULL || rel >= 0x1788170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788170 size=160 callers=6 calls=3
   calls: sub_178d6b0, sub_178d710, sub_178d730
*/
void sub_1788170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788170ULL || rel >= 0x1788210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788210 size=256 callers=5 calls=0
*/
void sub_1788210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788210ULL || rel >= 0x1788310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788310 size=176 callers=18 calls=0
*/
void sub_1788310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788310ULL || rel >= 0x17883c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017883c0 size=224 callers=6 calls=0
*/
void sub_17883c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17883c0ULL || rel >= 0x17884a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017884a0 size=96 callers=5 calls=0
*/
void sub_17884a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17884a0ULL || rel >= 0x1788500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788500 size=96 callers=7 calls=1
   calls: sub_178d6d0
*/
void sub_1788500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788500ULL || rel >= 0x1788560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788560 size=176 callers=7 calls=0
*/
void sub_1788560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788560ULL || rel >= 0x1788610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788610 size=80 callers=20 calls=1
   calls: sub_178d730
*/
void sub_1788610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788610ULL || rel >= 0x1788660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788660 size=272 callers=4 calls=0
*/
void sub_1788660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788660ULL || rel >= 0x1788770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788770 size=128 callers=0 calls=0
*/
void sub_1788770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788770ULL || rel >= 0x17887f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017887f0 size=400 callers=7 calls=0
*/
void sub_17887f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17887f0ULL || rel >= 0x1788980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788980 size=480 callers=3 calls=5
   calls: sub_1787750, sub_1787780, sub_17877b0, sub_17877c0, sub_178da40
*/
void sub_1788980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788980ULL || rel >= 0x1788b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788b60 size=480 callers=1 calls=5
   calls: sub_1787750, sub_1787780, sub_17877b0, sub_17877c0, sub_178da40
*/
void sub_1788b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788b60ULL || rel >= 0x1788d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788d40 size=432 callers=7 calls=0
*/
void sub_1788d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788d40ULL || rel >= 0x1788ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788ef0 size=48 callers=2 calls=1
   calls: sub_1788f20
*/
void sub_1788ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788ef0ULL || rel >= 0x1788f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01788f20 size=528 callers=15 calls=0
*/
void sub_1788f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1788f20ULL || rel >= 0x1789130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789130 size=288 callers=2 calls=0
*/
void sub_1789130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789130ULL || rel >= 0x1789250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789250 size=32 callers=1 calls=0
*/
void sub_1789250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789250ULL || rel >= 0x1789270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789270 size=48 callers=49 calls=0
*/
void sub_1789270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789270ULL || rel >= 0x17892a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017892a0 size=80 callers=11 calls=0
*/
void sub_17892a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17892a0ULL || rel >= 0x17892f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017892f0 size=64 callers=5 calls=0
*/
void sub_17892f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17892f0ULL || rel >= 0x1789330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789330 size=80 callers=2 calls=0
*/
void sub_1789330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789330ULL || rel >= 0x1789380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789380 size=64 callers=2 calls=1
   calls: sub_178d730
*/
void sub_1789380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789380ULL || rel >= 0x17893c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017893c0 size=32 callers=2 calls=0
*/
void sub_17893c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17893c0ULL || rel >= 0x17893e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017893e0 size=208 callers=7 calls=0
*/
void sub_17893e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17893e0ULL || rel >= 0x17894b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017894b0 size=128 callers=5 calls=0
*/
void sub_17894b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17894b0ULL || rel >= 0x1789530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789530 size=96 callers=2 calls=1
   calls: sub_178d6c0
*/
void sub_1789530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789530ULL || rel >= 0x1789590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789590 size=128 callers=27 calls=1
   calls: sub_178d6c0
*/
void sub_1789590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789590ULL || rel >= 0x1789610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789610 size=128 callers=2 calls=1
   calls: sub_178d6c0
*/
void sub_1789610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789610ULL || rel >= 0x1789690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789690 size=112 callers=50 calls=2
   calls: sub_178d6c0, sub_178d730
*/
void sub_1789690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789690ULL || rel >= 0x1789700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789700 size=112 callers=9 calls=2
   calls: sub_178d6c0, sub_178d730
*/
void sub_1789700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789700ULL || rel >= 0x1789770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789770 size=240 callers=3 calls=0
*/
void sub_1789770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789770ULL || rel >= 0x1789860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789860 size=176 callers=3 calls=0
*/
void sub_1789860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789860ULL || rel >= 0x1789910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789910 size=32 callers=3 calls=0
*/
void sub_1789910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789910ULL || rel >= 0x1789930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789930 size=16 callers=1 calls=0
*/
void sub_1789930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789930ULL || rel >= 0x1789940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789940 size=288 callers=3 calls=0
*/
void sub_1789940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789940ULL || rel >= 0x1789a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789a60 size=96 callers=3 calls=0
*/
void sub_1789a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789a60ULL || rel >= 0x1789ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789ac0 size=16 callers=5 calls=0
*/
void sub_1789ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789ac0ULL || rel >= 0x1789ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789ad0 size=16 callers=5 calls=0
*/
void sub_1789ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789ad0ULL || rel >= 0x1789ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789ae0 size=80 callers=2 calls=1
   calls: sub_178d730
*/
void sub_1789ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789ae0ULL || rel >= 0x1789b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789b30 size=32 callers=3 calls=0
*/
void sub_1789b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789b30ULL || rel >= 0x1789b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789b50 size=32 callers=1 calls=0
*/
void sub_1789b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789b50ULL || rel >= 0x1789b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789b70 size=80 callers=6 calls=0
*/
void sub_1789b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789b70ULL || rel >= 0x1789bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789bc0 size=16 callers=10 calls=0
*/
void sub_1789bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789bc0ULL || rel >= 0x1789bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789bd0 size=16 callers=8 calls=0
*/
void sub_1789bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789bd0ULL || rel >= 0x1789be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789be0 size=32 callers=13 calls=0
*/
void sub_1789be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789be0ULL || rel >= 0x1789c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789c00 size=16 callers=17 calls=0
*/
void sub_1789c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789c00ULL || rel >= 0x1789c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789c10 size=144 callers=13 calls=1
   calls: sub_178da60
*/
void sub_1789c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789c10ULL || rel >= 0x1789ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789ca0 size=64 callers=18 calls=0
*/
void sub_1789ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789ca0ULL || rel >= 0x1789ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789ce0 size=32 callers=3 calls=0
*/
void sub_1789ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789ce0ULL || rel >= 0x1789d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789d00 size=16 callers=3 calls=0
*/
void sub_1789d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789d00ULL || rel >= 0x1789d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01789d10 size=14368 callers=3 calls=0
   ref: nvnQueueBuilderGetQueueMemorySize
   ref: nvnQueueInitialize
   ref: nvnMemoryPoolBuilderGetDevice
   ref: nvnTexturePoolFinalize
   ref: nvnTextureViewGetTarget
   ref: nvnTextureGetDepth
   ref: nvnTextureCompare
   ref: nvnSamplerBuilderSetWrapMode
*/
void nvnVertexAttribStateSetStreamIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1789d10ULL || rel >= 0x178d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d530 size=16 callers=1 calls=0
*/
void sub_178d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d530ULL || rel >= 0x178d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d540 size=112 callers=2 calls=0
*/
void sub_178d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d540ULL || rel >= 0x178d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d5b0 size=112 callers=2 calls=0
*/
void sub_178d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d5b0ULL || rel >= 0x178d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d620 size=16 callers=3 calls=0
*/
void sub_178d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d620ULL || rel >= 0x178d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d630 size=16 callers=1 calls=0
*/
void sub_178d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d630ULL || rel >= 0x178d640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d640 size=16 callers=6 calls=0
*/
void sub_178d640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d640ULL || rel >= 0x178d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d650 size=16 callers=2 calls=0
*/
void sub_178d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d650ULL || rel >= 0x178d660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d660 size=16 callers=2 calls=0
*/
void sub_178d660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d660ULL || rel >= 0x178d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d670 size=16 callers=4 calls=0
*/
void sub_178d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d670ULL || rel >= 0x178d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d680 size=16 callers=1 calls=0
*/
void sub_178d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d680ULL || rel >= 0x178d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d690 size=16 callers=1 calls=0
*/
void sub_178d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d690ULL || rel >= 0x178d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d6a0 size=16 callers=1 calls=0
*/
void sub_178d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d6a0ULL || rel >= 0x178d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d6b0 size=16 callers=4 calls=0
*/
void sub_178d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d6b0ULL || rel >= 0x178d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d6c0 size=16 callers=12 calls=0
*/
void sub_178d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d6c0ULL || rel >= 0x178d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d6d0 size=64 callers=1 calls=0
*/
void sub_178d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d6d0ULL || rel >= 0x178d710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d710 size=16 callers=2 calls=0
*/
void sub_178d710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d710ULL || rel >= 0x178d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d720 size=16 callers=1 calls=0
*/
void sub_178d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d720ULL || rel >= 0x178d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d730 size=16 callers=7 calls=0
*/
void sub_178d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d730ULL || rel >= 0x178d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d740 size=64 callers=4 calls=0
*/
void sub_178d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d740ULL || rel >= 0x178d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178d780 size=704 callers=1 calls=0
*/
void sub_178d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178d780ULL || rel >= 0x178da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178da40 size=32 callers=2 calls=0
*/
void sub_178da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178da40ULL || rel >= 0x178da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178da60 size=96 callers=1 calls=0
*/
void sub_178da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178da60ULL || rel >= 0x178dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178dac0 size=624 callers=3 calls=2
   calls: sub_1787830, sub_17878f0
*/
void sub_178dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178dac0ULL || rel >= 0x178dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178dd30 size=464 callers=1 calls=0
*/
void sub_178dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178dd30ULL || rel >= 0x178df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178df00 size=112 callers=8 calls=0
*/
void sub_178df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178df00ULL || rel >= 0x178df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178df70 size=32 callers=1 calls=0
*/
void sub_178df70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178df70ULL || rel >= 0x178df90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178df90 size=16 callers=1 calls=0
*/
void sub_178df90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178df90ULL || rel >= 0x178dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178dfa0 size=112 callers=1 calls=0
*/
void sub_178dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178dfa0ULL || rel >= 0x178e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e010 size=32 callers=2 calls=0
*/
void sub_178e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e010ULL || rel >= 0x178e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e030 size=32 callers=0 calls=0
*/
void sub_178e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e030ULL || rel >= 0x178e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e050 size=256 callers=1 calls=0
*/
void sub_178e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e050ULL || rel >= 0x178e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e150 size=320 callers=1 calls=0
*/
void sub_178e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e150ULL || rel >= 0x178e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e290 size=448 callers=5 calls=2
   calls: sub_1789c10, sub_178e4a0
*/
void sub_178e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e290ULL || rel >= 0x178e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e450 size=80 callers=5 calls=1
   calls: sub_1789ca0
*/
void sub_178e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e450ULL || rel >= 0x178e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e4a0 size=32 callers=21 calls=0
*/
void sub_178e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e4a0ULL || rel >= 0x178e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e4c0 size=48 callers=8 calls=0
*/
void sub_178e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e4c0ULL || rel >= 0x178e4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e4f0 size=16 callers=3 calls=0
*/
void sub_178e4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e4f0ULL || rel >= 0x178e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e500 size=176 callers=9 calls=1
   calls: sub_178dd30
*/
void sub_178e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e500ULL || rel >= 0x178e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e5b0 size=64 callers=41 calls=0
*/
void sub_178e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e5b0ULL || rel >= 0x178e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178e5f0 size=2896 callers=22 calls=9
   calls: sub_178d6c0, sub_178df00, sub_178e4a0, sub_17911f0, sub_17912c0, sub_17912d0, sub_1c0, sub_860, sub_ce0
*/
void sub_178e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178e5f0ULL || rel >= 0x178f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f140 size=160 callers=10 calls=1
   calls: sub_8c0
*/
void sub_178f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f140ULL || rel >= 0x178f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f1e0 size=1280 callers=57 calls=1
   calls: sub_178d6c0
*/
void sub_178f1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f1e0ULL || rel >= 0x178f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f6e0 size=16 callers=8 calls=0
*/
void sub_178f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f6e0ULL || rel >= 0x178f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f6f0 size=16 callers=7 calls=0
*/
void sub_178f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f6f0ULL || rel >= 0x178f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f700 size=464 callers=9 calls=3
   calls: sub_178d690, sub_178d6a0, sub_178d720
*/
void sub_178f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f700ULL || rel >= 0x178f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f8d0 size=16 callers=7 calls=0
*/
void sub_178f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f8d0ULL || rel >= 0x178f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f8e0 size=16 callers=5 calls=0
*/
void sub_178f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f8e0ULL || rel >= 0x178f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f8f0 size=16 callers=15 calls=0
*/
void sub_178f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f8f0ULL || rel >= 0x178f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f900 size=16 callers=14 calls=0
*/
void sub_178f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f900ULL || rel >= 0x178f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f910 size=16 callers=12 calls=0
*/
void sub_178f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f910ULL || rel >= 0x178f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f920 size=16 callers=7 calls=0
*/
void sub_178f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f920ULL || rel >= 0x178f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178f930 size=528 callers=11 calls=3
   calls: sub_178d660, sub_178d670, sub_178d680
*/
void sub_178f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178f930ULL || rel >= 0x178fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178fb40 size=16 callers=16 calls=0
*/
void sub_178fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178fb40ULL || rel >= 0x178fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178fb50 size=16 callers=137 calls=0
*/
void sub_178fb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178fb50ULL || rel >= 0x178fb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178fb60 size=16 callers=136 calls=0
*/
void sub_178fb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178fb60ULL || rel >= 0x178fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178fb70 size=432 callers=12 calls=3
   calls: sub_178d630, sub_178d640, sub_178d650
*/
void sub_178fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178fb70ULL || rel >= 0x178fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178fd20 size=16 callers=10 calls=0
*/
void sub_178fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178fd20ULL || rel >= 0x178fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178fd30 size=112 callers=7 calls=0
*/
void sub_178fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178fd30ULL || rel >= 0x178fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178fda0 size=16 callers=11 calls=0
*/
void sub_178fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178fda0ULL || rel >= 0x178fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178fdb0 size=16 callers=11 calls=0
*/
void sub_178fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178fdb0ULL || rel >= 0x178fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178fdc0 size=16 callers=10 calls=0
*/
void sub_178fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178fdc0ULL || rel >= 0x178fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178fdd0 size=16 callers=3 calls=0
*/
void sub_178fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178fdd0ULL || rel >= 0x178fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0178fde0 size=832 callers=10 calls=2
   calls: sub_178d5b0, sub_178f1e0
*/
void sub_178fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x178fde0ULL || rel >= 0x1790120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790120 size=16 callers=14 calls=0
*/
void sub_1790120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790120ULL || rel >= 0x1790130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790130 size=32 callers=9 calls=0
*/
void sub_1790130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790130ULL || rel >= 0x1790150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790150 size=16 callers=2 calls=0
*/
void sub_1790150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790150ULL || rel >= 0x1790160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790160 size=400 callers=1 calls=0
*/
void sub_1790160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790160ULL || rel >= 0x17902f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017902f0 size=16 callers=1 calls=0
*/
void sub_17902f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17902f0ULL || rel >= 0x1790300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790300 size=80 callers=1 calls=2
   calls: sub_178d740, sub_1790a50
*/
void sub_1790300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790300ULL || rel >= 0x1790350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790350 size=160 callers=1 calls=3
   calls: sub_178d740, sub_1790a50, sub_1790ab0
*/
void sub_1790350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790350ULL || rel >= 0x17903f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017903f0 size=32 callers=1 calls=0
*/
void sub_17903f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17903f0ULL || rel >= 0x1790410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790410 size=16 callers=1 calls=0
*/
void sub_1790410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790410ULL || rel >= 0x1790420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790420 size=544 callers=1 calls=6
   calls: sub_178d740, sub_1790a50, sub_1790ab0, sub_1790b60, sub_1790e20, sub_1791190
*/
void sub_1790420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790420ULL || rel >= 0x1790640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790640 size=160 callers=1 calls=2
   calls: sub_1790c30, sub_1790f00
*/
void sub_1790640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790640ULL || rel >= 0x17906e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017906e0 size=160 callers=1 calls=0
*/
void sub_17906e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17906e0ULL || rel >= 0x1790780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790780 size=160 callers=1 calls=0
*/
void sub_1790780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790780ULL || rel >= 0x1790820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01790820 size=128 callers=1 calls=0
*/
void sub_1790820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1790820ULL || rel >= 0x17908a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

