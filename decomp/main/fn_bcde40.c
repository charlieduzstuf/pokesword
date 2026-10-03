/* main functions 00bcde40..00bdef80 (92 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00bcde40 size=416 callers=1 calls=3
   calls: sub_1c0, sub_5e6770, sub_be50b0
*/
void sub_bcde40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcde40ULL || rel >= 0xbcdfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcdfe0 size=96 callers=0 calls=0
*/
void sub_bcdfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcdfe0ULL || rel >= 0xbce040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce040 size=96 callers=0 calls=0
*/
void sub_bce040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce040ULL || rel >= 0xbce0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce0a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bce0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce0a0ULL || rel >= 0xbce110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce110 size=192 callers=0 calls=4
   calls: sub_140b690, sub_140bcf0, sub_5cff50, sub_5e6770
*/
void sub_bce110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce110ULL || rel >= 0xbce1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce1d0 size=144 callers=0 calls=1
   calls: sub_bce4c0
*/
void sub_bce1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce1d0ULL || rel >= 0xbce260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce260 size=96 callers=0 calls=0
*/
void sub_bce260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce260ULL || rel >= 0xbce2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce2c0 size=96 callers=0 calls=0
*/
void sub_bce2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce2c0ULL || rel >= 0xbce320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce320 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bce320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce320ULL || rel >= 0xbce390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce390 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bce390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce390ULL || rel >= 0xbce400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce400 size=96 callers=0 calls=0
*/
void sub_bce400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce400ULL || rel >= 0xbce460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce460 size=96 callers=0 calls=0
*/
void sub_bce460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce460ULL || rel >= 0xbce4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce4c0 size=320 callers=1 calls=4
   calls: sub_bc2530, sub_bca8b0, sub_bcc370, sub_bcc4e0
*/
void sub_bce4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce4c0ULL || rel >= 0xbce600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce600 size=16 callers=0 calls=0
*/
void sub_bce600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce600ULL || rel >= 0xbce610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce610 size=16 callers=0 calls=0
*/
void sub_bce610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce610ULL || rel >= 0xbce620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce620 size=416 callers=0 calls=7
   calls: sub_59bee0, sub_5cfaf0, sub_61bfe0, sub_6829a0, sub_682dd0, sub_bc2290, sub_bca8b0
*/
void sub_bce620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce620ULL || rel >= 0xbce7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce7c0 size=16 callers=0 calls=0
*/
void sub_bce7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce7c0ULL || rel >= 0xbce7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce7d0 size=16 callers=0 calls=0
*/
void sub_bce7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce7d0ULL || rel >= 0xbce7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce7e0 size=416 callers=1 calls=3
   calls: sub_1c0, sub_5e6770, sub_be50b0
*/
void sub_bce7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce7e0ULL || rel >= 0xbce980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce980 size=96 callers=0 calls=0
*/
void sub_bce980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce980ULL || rel >= 0xbce9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bce9e0 size=96 callers=0 calls=0
*/
void sub_bce9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbce9e0ULL || rel >= 0xbcea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcea40 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcea40ULL || rel >= 0xbceab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bceab0 size=176 callers=0 calls=3
   calls: sub_140bcf0, sub_5cff50, sub_5e6770
*/
void sub_bceab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbceab0ULL || rel >= 0xbceb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bceb60 size=240 callers=0 calls=1
   calls: sub_bceeb0
*/
void sub_bceb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbceb60ULL || rel >= 0xbcec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcec50 size=96 callers=0 calls=0
*/
void sub_bcec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcec50ULL || rel >= 0xbcecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcecb0 size=96 callers=0 calls=0
*/
void sub_bcecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcecb0ULL || rel >= 0xbced10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bced10 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bced10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbced10ULL || rel >= 0xbced80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bced80 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bced80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbced80ULL || rel >= 0xbcedf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcedf0 size=96 callers=0 calls=0
*/
void sub_bcedf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcedf0ULL || rel >= 0xbcee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcee50 size=96 callers=0 calls=0
*/
void sub_bcee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcee50ULL || rel >= 0xbceeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bceeb0 size=320 callers=1 calls=4
   calls: sub_bc2530, sub_bca8b0, sub_bcc370, sub_bcc4e0
*/
void sub_bceeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbceeb0ULL || rel >= 0xbceff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bceff0 size=16 callers=0 calls=0
*/
void sub_bceff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbceff0ULL || rel >= 0xbcf000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf000 size=16 callers=0 calls=0
*/
void sub_bcf000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf000ULL || rel >= 0xbcf010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf010 size=1008 callers=0 calls=9
   calls: sub_59bee0, sub_5cfaf0, sub_5f19d0, sub_61bfe0, sub_6829a0, sub_682dd0, sub_bc2290, sub_bc7540, sub_bca8b0
*/
void sub_bcf010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf010ULL || rel >= 0xbcf400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf400 size=16 callers=0 calls=0
*/
void sub_bcf400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf400ULL || rel >= 0xbcf410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf410 size=16 callers=0 calls=0
*/
void sub_bcf410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf410ULL || rel >= 0xbcf420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf420 size=16 callers=0 calls=0
*/
void sub_bcf420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf420ULL || rel >= 0xbcf430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf430 size=16 callers=0 calls=0
*/
void sub_bcf430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf430ULL || rel >= 0xbcf440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf440 size=448 callers=0 calls=3
   calls: sub_5f19d0, sub_bc7540, sub_bca8b0
*/
void sub_bcf440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf440ULL || rel >= 0xbcf600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf600 size=16 callers=0 calls=0
*/
void sub_bcf600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf600ULL || rel >= 0xbcf610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf610 size=16 callers=0 calls=0
*/
void sub_bcf610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf610ULL || rel >= 0xbcf620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf620 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bcf620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf620ULL || rel >= 0xbcf740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf740 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bcf740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf740ULL || rel >= 0xbcf850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf850 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bcf850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf850ULL || rel >= 0xbcf960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcf960 size=480 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bcf960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcf960ULL || rel >= 0xbcfb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcfb40 size=32 callers=0 calls=0
*/
void sub_bcfb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcfb40ULL || rel >= 0xbcfb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcfb60 size=32 callers=0 calls=0
*/
void sub_bcfb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcfb60ULL || rel >= 0xbcfb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcfb80 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bcfb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcfb80ULL || rel >= 0xbcfca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcfca0 size=16 callers=0 calls=0
*/
void sub_bcfca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcfca0ULL || rel >= 0xbcfcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcfcb0 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bcfcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcfcb0ULL || rel >= 0xbcfd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcfd60 size=96 callers=0 calls=3
   calls: sub_140b690, sub_140bca0, sub_140bd40
*/
void sub_bcfd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcfd60ULL || rel >= 0xbcfdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bcfdc0 size=1600 callers=0 calls=2
   calls: sub_620d70, sub_bca8b0
*/
void sub_bcfdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcfdc0ULL || rel >= 0xbd0400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0400 size=16 callers=0 calls=0
*/
void sub_bd0400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0400ULL || rel >= 0xbd0410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0410 size=16 callers=0 calls=0
*/
void sub_bd0410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0410ULL || rel >= 0xbd0420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0420 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd0420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0420ULL || rel >= 0xbd04d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd04d0 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd04d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd04d0ULL || rel >= 0xbd0580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0580 size=16 callers=0 calls=0
*/
void sub_bd0580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0580ULL || rel >= 0xbd0590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0590 size=16 callers=0 calls=0
*/
void sub_bd0590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0590ULL || rel >= 0xbd05a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd05a0 size=464 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd05a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd05a0ULL || rel >= 0xbd0770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0770 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd0770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0770ULL || rel >= 0xbd0880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0880 size=352 callers=0 calls=0
*/
void sub_bd0880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0880ULL || rel >= 0xbd09e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd09e0 size=16 callers=0 calls=0
*/
void sub_bd09e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd09e0ULL || rel >= 0xbd09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd09f0 size=16 callers=0 calls=0
*/
void sub_bd09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd09f0ULL || rel >= 0xbd0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0a00 size=16 callers=0 calls=0
*/
void sub_bd0a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0a00ULL || rel >= 0xbd0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0a10 size=16 callers=0 calls=0
*/
void sub_bd0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0a10ULL || rel >= 0xbd0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0a20 size=16 callers=0 calls=0
*/
void sub_bd0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0a20ULL || rel >= 0xbd0a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0a30 size=384 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd0a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0a30ULL || rel >= 0xbd0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0bb0 size=384 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0bb0ULL || rel >= 0xbd0d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0d30 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd0d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0d30ULL || rel >= 0xbd0e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0e50 size=16 callers=0 calls=0
*/
void sub_bd0e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0e50ULL || rel >= 0xbd0e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0e60 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd0e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0e60ULL || rel >= 0xbd0ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0ed0 size=64 callers=0 calls=1
   calls: sub_140bc80
*/
void sub_bd0ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0ed0ULL || rel >= 0xbd0f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0f10 size=128 callers=0 calls=0
*/
void sub_bd0f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0f10ULL || rel >= 0xbd0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0f90 size=16 callers=0 calls=0
*/
void sub_bd0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0f90ULL || rel >= 0xbd0fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0fa0 size=16 callers=0 calls=0
*/
void sub_bd0fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0fa0ULL || rel >= 0xbd0fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd0fb0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd0fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0fb0ULL || rel >= 0xbd1020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1020 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd1020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1020ULL || rel >= 0xbd1090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1090 size=16 callers=0 calls=0
*/
void sub_bd1090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1090ULL || rel >= 0xbd10a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd10a0 size=16 callers=0 calls=0
*/
void sub_bd10a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd10a0ULL || rel >= 0xbd10b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd10b0 size=208 callers=0 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_bd10b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd10b0ULL || rel >= 0xbd1180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1180 size=16 callers=0 calls=0
*/
void sub_bd1180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1180ULL || rel >= 0xbd1190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1190 size=16 callers=0 calls=0
*/
void sub_bd1190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1190ULL || rel >= 0xbd11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd11a0 size=16 callers=0 calls=0
*/
void sub_bd11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd11a0ULL || rel >= 0xbd11b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd11b0 size=400 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd11b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd11b0ULL || rel >= 0xbd1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1340 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1340ULL || rel >= 0xbd1450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1450 size=16 callers=0 calls=0
*/
void sub_bd1450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1450ULL || rel >= 0xbd1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1460 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd1460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1460ULL || rel >= 0xbd14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd14d0 size=128 callers=0 calls=0
*/
void sub_bd14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd14d0ULL || rel >= 0xbd1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1550 size=16 callers=0 calls=0
*/
void sub_bd1550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1550ULL || rel >= 0xbd1560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1560 size=16 callers=0 calls=0
*/
void sub_bd1560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1560ULL || rel >= 0xbd1570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1570 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd1570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1570ULL || rel >= 0xbd15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd15e0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd15e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd15e0ULL || rel >= 0xbd1650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1650 size=16 callers=0 calls=0
*/
void sub_bd1650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1650ULL || rel >= 0xbd1660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1660 size=16 callers=0 calls=0
*/
void sub_bd1660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1660ULL || rel >= 0xbd1670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1670 size=176 callers=0 calls=4
   calls: sub_13f68d0, sub_68d9b0, sub_bc2290, sub_bca8b0
*/
void sub_bd1670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1670ULL || rel >= 0xbd1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1720 size=16 callers=0 calls=0
*/
void sub_bd1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1720ULL || rel >= 0xbd1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1730 size=16 callers=0 calls=0
*/
void sub_bd1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1730ULL || rel >= 0xbd1740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1740 size=16 callers=0 calls=0
*/
void sub_bd1740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1740ULL || rel >= 0xbd1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1750 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1750ULL || rel >= 0xbd1860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1860 size=16 callers=0 calls=0
*/
void sub_bd1860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1860ULL || rel >= 0xbd1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1870 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1870ULL || rel >= 0xbd18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd18e0 size=16 callers=0 calls=0
*/
void sub_bd18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd18e0ULL || rel >= 0xbd18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd18f0 size=208 callers=0 calls=0
*/
void sub_bd18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd18f0ULL || rel >= 0xbd19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd19c0 size=16 callers=0 calls=0
*/
void sub_bd19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd19c0ULL || rel >= 0xbd19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd19d0 size=16 callers=0 calls=0
*/
void sub_bd19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd19d0ULL || rel >= 0xbd19e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd19e0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd19e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd19e0ULL || rel >= 0xbd1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1a50 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1a50ULL || rel >= 0xbd1ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1ac0 size=16 callers=0 calls=0
*/
void sub_bd1ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1ac0ULL || rel >= 0xbd1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1ad0 size=16 callers=0 calls=0
*/
void sub_bd1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1ad0ULL || rel >= 0xbd1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1ae0 size=208 callers=0 calls=4
   calls: sub_13f68d0, sub_68d900, sub_bc2290, sub_bca8b0
*/
void sub_bd1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1ae0ULL || rel >= 0xbd1bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1bb0 size=16 callers=0 calls=0
*/
void sub_bd1bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1bb0ULL || rel >= 0xbd1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1bc0 size=16 callers=0 calls=0
*/
void sub_bd1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1bc0ULL || rel >= 0xbd1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1bd0 size=16 callers=0 calls=0
*/
void sub_bd1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1bd0ULL || rel >= 0xbd1be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1be0 size=16 callers=0 calls=0
*/
void sub_bd1be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1be0ULL || rel >= 0xbd1bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1bf0 size=16 callers=0 calls=0
*/
void sub_bd1bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1bf0ULL || rel >= 0xbd1c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1c00 size=400 callers=0 calls=4
   calls: sub_13f68d0, sub_68d910, sub_bc2290, sub_bca8b0
*/
void sub_bd1c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1c00ULL || rel >= 0xbd1d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1d90 size=16 callers=0 calls=0
*/
void sub_bd1d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1d90ULL || rel >= 0xbd1da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1da0 size=16 callers=0 calls=0
*/
void sub_bd1da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1da0ULL || rel >= 0xbd1db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1db0 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd1db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1db0ULL || rel >= 0xbd1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1ed0 size=16 callers=0 calls=0
*/
void sub_bd1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1ed0ULL || rel >= 0xbd1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1ee0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1ee0ULL || rel >= 0xbd1f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1f50 size=112 callers=0 calls=1
   calls: sub_140bc80
*/
void sub_bd1f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1f50ULL || rel >= 0xbd1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd1fc0 size=128 callers=0 calls=0
*/
void sub_bd1fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd1fc0ULL || rel >= 0xbd2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2040 size=16 callers=0 calls=0
*/
void sub_bd2040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2040ULL || rel >= 0xbd2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2050 size=16 callers=0 calls=0
*/
void sub_bd2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2050ULL || rel >= 0xbd2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2060 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2060ULL || rel >= 0xbd20d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd20d0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd20d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd20d0ULL || rel >= 0xbd2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2140 size=16 callers=0 calls=0
*/
void sub_bd2140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2140ULL || rel >= 0xbd2150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2150 size=16 callers=0 calls=0
*/
void sub_bd2150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2150ULL || rel >= 0xbd2160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2160 size=16 callers=0 calls=0
*/
void sub_bd2160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2160ULL || rel >= 0xbd2170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2170 size=16 callers=0 calls=0
*/
void sub_bd2170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2170ULL || rel >= 0xbd2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2180 size=768 callers=0 calls=6
   calls: sub_13f68d0, sub_68d900, sub_68d910, sub_bc2290, sub_bc2530, sub_bca8b0
*/
void sub_bd2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2180ULL || rel >= 0xbd2480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2480 size=16 callers=0 calls=0
*/
void sub_bd2480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2480ULL || rel >= 0xbd2490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2490 size=16 callers=0 calls=0
*/
void sub_bd2490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2490ULL || rel >= 0xbd24a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd24a0 size=400 callers=1 calls=2
   calls: sub_6835f0, sub_be50b0
*/
void sub_bd24a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd24a0ULL || rel >= 0xbd2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2630 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd2630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2630ULL || rel >= 0xbd2740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2740 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd2740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2740ULL || rel >= 0xbd2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2850 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2850ULL || rel >= 0xbd2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2960 size=320 callers=1 calls=2
   calls: sub_7910a0, sub_be50b0
*/
void sub_bd2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2960ULL || rel >= 0xbd2aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2aa0 size=320 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd2aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2aa0ULL || rel >= 0xbd2be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2be0 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd2be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2be0ULL || rel >= 0xbd2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2d00 size=320 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2d00ULL || rel >= 0xbd2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2e40 size=320 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2e40ULL || rel >= 0xbd2f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd2f80 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd2f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd2f80ULL || rel >= 0xbd3090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3090 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd3090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3090ULL || rel >= 0xbd31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd31a0 size=304 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd31a0ULL || rel >= 0xbd32d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd32d0 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd32d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd32d0ULL || rel >= 0xbd33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd33f0 size=16 callers=0 calls=0
*/
void sub_bd33f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd33f0ULL || rel >= 0xbd3400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3400 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd3400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3400ULL || rel >= 0xbd3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3470 size=144 callers=0 calls=2
   calls: sub_140b690, sub_140bca0
*/
void sub_bd3470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3470ULL || rel >= 0xbd3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3500 size=16 callers=0 calls=0
*/
void sub_bd3500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3500ULL || rel >= 0xbd3510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3510 size=16 callers=0 calls=0
*/
void sub_bd3510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3510ULL || rel >= 0xbd3520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3520 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd3520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3520ULL || rel >= 0xbd3590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3590 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd3590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3590ULL || rel >= 0xbd3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3600 size=16 callers=0 calls=0
*/
void sub_bd3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3600ULL || rel >= 0xbd3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3610 size=16 callers=0 calls=0
*/
void sub_bd3610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3610ULL || rel >= 0xbd3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3620 size=400 callers=1 calls=2
   calls: sub_65d700, sub_be50b0
*/
void sub_bd3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3620ULL || rel >= 0xbd37b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd37b0 size=144 callers=0 calls=0
*/
void sub_bd37b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd37b0ULL || rel >= 0xbd3840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3840 size=144 callers=0 calls=0
*/
void sub_bd3840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3840ULL || rel >= 0xbd38d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd38d0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd38d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd38d0ULL || rel >= 0xbd3940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3940 size=64 callers=0 calls=1
   calls: sub_140bcf0
*/
void sub_bd3940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3940ULL || rel >= 0xbd3980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3980 size=224 callers=0 calls=1
   calls: sub_be6ec0
*/
void sub_bd3980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3980ULL || rel >= 0xbd3a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3a60 size=144 callers=0 calls=0
*/
void sub_bd3a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3a60ULL || rel >= 0xbd3af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3af0 size=144 callers=0 calls=0
*/
void sub_bd3af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3af0ULL || rel >= 0xbd3b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3b80 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd3b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3b80ULL || rel >= 0xbd3bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3bf0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd3bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3bf0ULL || rel >= 0xbd3c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3c60 size=144 callers=0 calls=0
*/
void sub_bd3c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3c60ULL || rel >= 0xbd3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3cf0 size=144 callers=0 calls=0
*/
void sub_bd3cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3cf0ULL || rel >= 0xbd3d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3d80 size=16 callers=0 calls=0
*/
void sub_bd3d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3d80ULL || rel >= 0xbd3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3d90 size=16 callers=0 calls=0
*/
void sub_bd3d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3d90ULL || rel >= 0xbd3da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd3da0 size=864 callers=0 calls=6
   calls: sub_96ccf0, sub_b48550, sub_bd4100, sub_be7240, sub_be7940, sub_ee36b0
*/
void sub_bd3da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd3da0ULL || rel >= 0xbd4100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4100 size=672 callers=5 calls=1
   calls: sub_bd43a0
*/
void sub_bd4100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4100ULL || rel >= 0xbd43a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd43a0 size=272 callers=1 calls=0
*/
void sub_bd43a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd43a0ULL || rel >= 0xbd44b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd44b0 size=704 callers=0 calls=0
*/
void sub_bd44b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd44b0ULL || rel >= 0xbd4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4770 size=16 callers=0 calls=0
*/
void sub_bd4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4770ULL || rel >= 0xbd4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4780 size=16 callers=0 calls=0
*/
void sub_bd4780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4780ULL || rel >= 0xbd4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4790 size=16 callers=0 calls=0
*/
void sub_bd4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4790ULL || rel >= 0xbd47a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd47a0 size=16 callers=0 calls=0
*/
void sub_bd47a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd47a0ULL || rel >= 0xbd47b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd47b0 size=1136 callers=0 calls=6
   calls: sub_96ccf0, sub_b48550, sub_bd4100, sub_be7240, sub_be7940, sub_ee37c0
*/
void sub_bd47b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd47b0ULL || rel >= 0xbd4c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4c20 size=16 callers=0 calls=0
*/
void sub_bd4c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4c20ULL || rel >= 0xbd4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4c30 size=16 callers=0 calls=0
*/
void sub_bd4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4c30ULL || rel >= 0xbd4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4c40 size=400 callers=1 calls=2
   calls: sub_65d700, sub_be50b0
*/
void sub_bd4c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4c40ULL || rel >= 0xbd4dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4dd0 size=144 callers=0 calls=0
*/
void sub_bd4dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4dd0ULL || rel >= 0xbd4e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4e60 size=144 callers=0 calls=0
*/
void sub_bd4e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4e60ULL || rel >= 0xbd4ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4ef0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd4ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4ef0ULL || rel >= 0xbd4f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4f60 size=64 callers=0 calls=1
   calls: sub_140bcf0
*/
void sub_bd4f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4f60ULL || rel >= 0xbd4fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd4fa0 size=224 callers=0 calls=1
   calls: sub_be6ec0
*/
void sub_bd4fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd4fa0ULL || rel >= 0xbd5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5080 size=144 callers=0 calls=0
*/
void sub_bd5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5080ULL || rel >= 0xbd5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5110 size=144 callers=0 calls=0
*/
void sub_bd5110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5110ULL || rel >= 0xbd51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd51a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd51a0ULL || rel >= 0xbd5210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5210 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd5210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5210ULL || rel >= 0xbd5280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5280 size=144 callers=0 calls=0
*/
void sub_bd5280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5280ULL || rel >= 0xbd5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5310 size=144 callers=0 calls=0
*/
void sub_bd5310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5310ULL || rel >= 0xbd53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd53a0 size=16 callers=0 calls=0
*/
void sub_bd53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd53a0ULL || rel >= 0xbd53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd53b0 size=16 callers=0 calls=0
*/
void sub_bd53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd53b0ULL || rel >= 0xbd53c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd53c0 size=544 callers=0 calls=2
   calls: sub_bd55e0, sub_be7940
*/
void sub_bd53c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd53c0ULL || rel >= 0xbd55e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd55e0 size=688 callers=2 calls=1
   calls: sub_bd5890
*/
void sub_bd55e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd55e0ULL || rel >= 0xbd5890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5890 size=272 callers=1 calls=0
*/
void sub_bd5890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5890ULL || rel >= 0xbd59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd59a0 size=704 callers=0 calls=0
*/
void sub_bd59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd59a0ULL || rel >= 0xbd5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5c60 size=16 callers=0 calls=0
*/
void sub_bd5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5c60ULL || rel >= 0xbd5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5c70 size=16 callers=0 calls=0
*/
void sub_bd5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5c70ULL || rel >= 0xbd5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5c80 size=16 callers=0 calls=0
*/
void sub_bd5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5c80ULL || rel >= 0xbd5c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5c90 size=16 callers=0 calls=0
*/
void sub_bd5c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5c90ULL || rel >= 0xbd5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5ca0 size=656 callers=0 calls=2
   calls: sub_bd55e0, sub_be7940
*/
void sub_bd5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5ca0ULL || rel >= 0xbd5f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5f30 size=16 callers=0 calls=0
*/
void sub_bd5f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5f30ULL || rel >= 0xbd5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5f40 size=16 callers=0 calls=0
*/
void sub_bd5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5f40ULL || rel >= 0xbd5f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd5f50 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd5f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5f50ULL || rel >= 0xbd6060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6060 size=16 callers=0 calls=0
*/
void sub_bd6060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6060ULL || rel >= 0xbd6070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6070 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd6070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6070ULL || rel >= 0xbd60e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd60e0 size=64 callers=0 calls=1
   calls: sub_140bcf0
*/
void sub_bd60e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd60e0ULL || rel >= 0xbd6120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6120 size=144 callers=0 calls=1
   calls: sub_be6ec0
*/
void sub_bd6120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6120ULL || rel >= 0xbd61b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd61b0 size=16 callers=0 calls=0
*/
void sub_bd61b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd61b0ULL || rel >= 0xbd61c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd61c0 size=16 callers=0 calls=0
*/
void sub_bd61c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd61c0ULL || rel >= 0xbd61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd61d0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd61d0ULL || rel >= 0xbd6240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6240 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd6240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6240ULL || rel >= 0xbd62b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd62b0 size=16 callers=0 calls=0
*/
void sub_bd62b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd62b0ULL || rel >= 0xbd62c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd62c0 size=16 callers=0 calls=0
*/
void sub_bd62c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd62c0ULL || rel >= 0xbd62d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd62d0 size=16 callers=0 calls=0
*/
void sub_bd62d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd62d0ULL || rel >= 0xbd62e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd62e0 size=16 callers=0 calls=0
*/
void sub_bd62e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd62e0ULL || rel >= 0xbd62f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd62f0 size=576 callers=0 calls=1
   calls: sub_be7940
*/
void sub_bd62f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd62f0ULL || rel >= 0xbd6530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6530 size=16 callers=0 calls=0
*/
void sub_bd6530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6530ULL || rel >= 0xbd6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6540 size=16 callers=0 calls=0
*/
void sub_bd6540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6540ULL || rel >= 0xbd6550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6550 size=368 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd6550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6550ULL || rel >= 0xbd66c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd66c0 size=368 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd66c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd66c0ULL || rel >= 0xbd6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6830 size=304 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd6830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6830ULL || rel >= 0xbd6960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6960 size=320 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd6960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6960ULL || rel >= 0xbd6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6aa0 size=304 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6aa0ULL || rel >= 0xbd6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6bd0 size=304 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6bd0ULL || rel >= 0xbd6d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6d00 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd6d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6d00ULL || rel >= 0xbd6e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd6e20 size=528 callers=1 calls=2
   calls: sub_5fc550, sub_be50b0
*/
void sub_bd6e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd6e20ULL || rel >= 0xbd7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7030 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7030ULL || rel >= 0xbd7140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7140 size=16 callers=0 calls=0
*/
void sub_bd7140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7140ULL || rel >= 0xbd7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7150 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7150ULL || rel >= 0xbd71c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd71c0 size=80 callers=0 calls=2
   calls: sub_140b690, sub_140bd40
*/
void sub_bd71c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd71c0ULL || rel >= 0xbd7210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7210 size=208 callers=0 calls=0
*/
void sub_bd7210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7210ULL || rel >= 0xbd72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd72e0 size=16 callers=0 calls=0
*/
void sub_bd72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd72e0ULL || rel >= 0xbd72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd72f0 size=16 callers=0 calls=0
*/
void sub_bd72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd72f0ULL || rel >= 0xbd7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7300 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7300ULL || rel >= 0xbd7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7370 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7370ULL || rel >= 0xbd73e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd73e0 size=16 callers=0 calls=0
*/
void sub_bd73e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd73e0ULL || rel >= 0xbd73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd73f0 size=16 callers=0 calls=0
*/
void sub_bd73f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd73f0ULL || rel >= 0xbd7400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7400 size=192 callers=0 calls=2
   calls: sub_5f19d0, sub_bd74d0
*/
void sub_bd7400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7400ULL || rel >= 0xbd74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd74c0 size=16 callers=0 calls=0
*/
void sub_bd74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd74c0ULL || rel >= 0xbd74d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd74d0 size=448 callers=60 calls=3
   calls: sub_5f19d0, sub_bc7540, sub_bca8b0
*/
void sub_bd74d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd74d0ULL || rel >= 0xbd7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7690 size=16 callers=0 calls=0
*/
void sub_bd7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7690ULL || rel >= 0xbd76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd76a0 size=16 callers=0 calls=0
*/
void sub_bd76a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd76a0ULL || rel >= 0xbd76b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd76b0 size=192 callers=0 calls=3
   calls: sub_5f19d0, sub_bd74d0, sub_ed32f0
*/
void sub_bd76b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd76b0ULL || rel >= 0xbd7770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7770 size=16 callers=0 calls=0
*/
void sub_bd7770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7770ULL || rel >= 0xbd7780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7780 size=16 callers=0 calls=0
*/
void sub_bd7780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7780ULL || rel >= 0xbd7790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7790 size=16 callers=0 calls=0
*/
void sub_bd7790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7790ULL || rel >= 0xbd77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd77a0 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd77a0ULL || rel >= 0xbd78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd78c0 size=16 callers=0 calls=0
*/
void sub_bd78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd78c0ULL || rel >= 0xbd78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd78d0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd78d0ULL || rel >= 0xbd7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7940 size=144 callers=0 calls=2
   calls: sub_140b690, sub_140bd40
*/
void sub_bd7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7940ULL || rel >= 0xbd79d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd79d0 size=128 callers=0 calls=0
*/
void sub_bd79d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd79d0ULL || rel >= 0xbd7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7a50 size=16 callers=0 calls=0
*/
void sub_bd7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7a50ULL || rel >= 0xbd7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7a60 size=16 callers=0 calls=0
*/
void sub_bd7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7a60ULL || rel >= 0xbd7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7a70 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7a70ULL || rel >= 0xbd7ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7ae0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd7ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7ae0ULL || rel >= 0xbd7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7b50 size=16 callers=0 calls=0
*/
void sub_bd7b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7b50ULL || rel >= 0xbd7b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7b60 size=16 callers=0 calls=0
*/
void sub_bd7b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7b60ULL || rel >= 0xbd7b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7b70 size=16 callers=0 calls=0
*/
void sub_bd7b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7b70ULL || rel >= 0xbd7b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7b80 size=16 callers=0 calls=0
*/
void sub_bd7b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7b80ULL || rel >= 0xbd7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7b90 size=272 callers=0 calls=6
   calls: sub_5f19d0, sub_bd74d0, sub_ed29e0, sub_ed34f0, sub_ed3940, sub_ed3e60
*/
void sub_bd7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7b90ULL || rel >= 0xbd7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7ca0 size=16 callers=0 calls=0
*/
void sub_bd7ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7ca0ULL || rel >= 0xbd7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7cb0 size=16 callers=0 calls=0
*/
void sub_bd7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7cb0ULL || rel >= 0xbd7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7cc0 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7cc0ULL || rel >= 0xbd7de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7de0 size=16 callers=0 calls=0
*/
void sub_bd7de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7de0ULL || rel >= 0xbd7df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7df0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd7df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7df0ULL || rel >= 0xbd7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7e60 size=112 callers=0 calls=2
   calls: sub_140b690, sub_140bd40
*/
void sub_bd7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7e60ULL || rel >= 0xbd7ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd7ed0 size=416 callers=0 calls=1
   calls: sub_eeb410
*/
void sub_bd7ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd7ed0ULL || rel >= 0xbd8070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8070 size=16 callers=0 calls=0
*/
void sub_bd8070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8070ULL || rel >= 0xbd8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8080 size=16 callers=0 calls=0
*/
void sub_bd8080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8080ULL || rel >= 0xbd8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8090 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8090ULL || rel >= 0xbd8100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8100 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd8100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8100ULL || rel >= 0xbd8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8170 size=16 callers=0 calls=0
*/
void sub_bd8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8170ULL || rel >= 0xbd8180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8180 size=16 callers=0 calls=0
*/
void sub_bd8180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8180ULL || rel >= 0xbd8190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8190 size=64 callers=0 calls=0
*/
void sub_bd8190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8190ULL || rel >= 0xbd81d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd81d0 size=16 callers=0 calls=0
*/
void sub_bd81d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd81d0ULL || rel >= 0xbd81e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd81e0 size=16 callers=0 calls=0
*/
void sub_bd81e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd81e0ULL || rel >= 0xbd81f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd81f0 size=16 callers=0 calls=0
*/
void sub_bd81f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd81f0ULL || rel >= 0xbd8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8200 size=64 callers=0 calls=0
*/
void sub_bd8200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8200ULL || rel >= 0xbd8240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8240 size=16 callers=0 calls=0
*/
void sub_bd8240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8240ULL || rel >= 0xbd8250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8250 size=16 callers=0 calls=0
*/
void sub_bd8250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8250ULL || rel >= 0xbd8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8260 size=16 callers=0 calls=0
*/
void sub_bd8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8260ULL || rel >= 0xbd8270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8270 size=32 callers=0 calls=0
*/
void sub_bd8270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8270ULL || rel >= 0xbd8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8290 size=16 callers=0 calls=0
*/
void sub_bd8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8290ULL || rel >= 0xbd82a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd82a0 size=16 callers=0 calls=0
*/
void sub_bd82a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd82a0ULL || rel >= 0xbd82b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd82b0 size=16 callers=0 calls=0
*/
void sub_bd82b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd82b0ULL || rel >= 0xbd82c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd82c0 size=48 callers=0 calls=1
   calls: sub_eeb2b0
*/
void sub_bd82c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd82c0ULL || rel >= 0xbd82f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd82f0 size=16 callers=0 calls=0
*/
void sub_bd82f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd82f0ULL || rel >= 0xbd8300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8300 size=16 callers=0 calls=0
*/
void sub_bd8300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8300ULL || rel >= 0xbd8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8310 size=16 callers=0 calls=0
*/
void sub_bd8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8310ULL || rel >= 0xbd8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8320 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8320ULL || rel >= 0xbd8430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8430 size=16 callers=0 calls=0
*/
void sub_bd8430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8430ULL || rel >= 0xbd8440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8440 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd8440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8440ULL || rel >= 0xbd84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd84b0 size=80 callers=0 calls=2
   calls: sub_140b690, sub_140bd40
*/
void sub_bd84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd84b0ULL || rel >= 0xbd8500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8500 size=304 callers=0 calls=0
*/
void sub_bd8500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8500ULL || rel >= 0xbd8630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8630 size=16 callers=0 calls=0
*/
void sub_bd8630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8630ULL || rel >= 0xbd8640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8640 size=16 callers=0 calls=0
*/
void sub_bd8640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8640ULL || rel >= 0xbd8650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8650 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd8650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8650ULL || rel >= 0xbd86c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd86c0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd86c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd86c0ULL || rel >= 0xbd8730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8730 size=16 callers=0 calls=0
*/
void sub_bd8730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8730ULL || rel >= 0xbd8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8740 size=16 callers=0 calls=0
*/
void sub_bd8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8740ULL || rel >= 0xbd8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8750 size=224 callers=0 calls=3
   calls: sub_5f19d0, sub_bd74d0, sub_ed30c0
*/
void sub_bd8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8750ULL || rel >= 0xbd8830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8830 size=16 callers=0 calls=0
*/
void sub_bd8830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8830ULL || rel >= 0xbd8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8840 size=16 callers=0 calls=0
*/
void sub_bd8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8840ULL || rel >= 0xbd8850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8850 size=16 callers=0 calls=0
*/
void sub_bd8850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8850ULL || rel >= 0xbd8860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8860 size=192 callers=0 calls=2
   calls: sub_5f19d0, sub_bd74d0
*/
void sub_bd8860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8860ULL || rel >= 0xbd8920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8920 size=16 callers=0 calls=0
*/
void sub_bd8920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8920ULL || rel >= 0xbd8930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8930 size=16 callers=0 calls=0
*/
void sub_bd8930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8930ULL || rel >= 0xbd8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8940 size=16 callers=0 calls=0
*/
void sub_bd8940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8940ULL || rel >= 0xbd8950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8950 size=192 callers=0 calls=3
   calls: sub_5f19d0, sub_bd74d0, sub_ed30b0
*/
void sub_bd8950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8950ULL || rel >= 0xbd8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8a10 size=16 callers=0 calls=0
*/
void sub_bd8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8a10ULL || rel >= 0xbd8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8a20 size=16 callers=0 calls=0
*/
void sub_bd8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8a20ULL || rel >= 0xbd8a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8a30 size=16 callers=0 calls=0
*/
void sub_bd8a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8a30ULL || rel >= 0xbd8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8a40 size=304 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8a40ULL || rel >= 0xbd8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8b70 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd8b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8b70ULL || rel >= 0xbd8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8c80 size=16 callers=0 calls=0
*/
void sub_bd8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8c80ULL || rel >= 0xbd8c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8c90 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd8c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8c90ULL || rel >= 0xbd8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8d00 size=32 callers=0 calls=0
*/
void sub_bd8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8d00ULL || rel >= 0xbd8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8d20 size=128 callers=0 calls=0
*/
void sub_bd8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8d20ULL || rel >= 0xbd8da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8da0 size=16 callers=0 calls=0
*/
void sub_bd8da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8da0ULL || rel >= 0xbd8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8db0 size=16 callers=0 calls=0
*/
void sub_bd8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8db0ULL || rel >= 0xbd8dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8dc0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd8dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8dc0ULL || rel >= 0xbd8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8e30 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8e30ULL || rel >= 0xbd8ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8ea0 size=16 callers=0 calls=0
*/
void sub_bd8ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8ea0ULL || rel >= 0xbd8eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8eb0 size=16 callers=0 calls=0
*/
void sub_bd8eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8eb0ULL || rel >= 0xbd8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8ec0 size=160 callers=0 calls=4
   calls: sub_bc2530, sub_bca8b0, sub_bd8f70, sub_be96d0
*/
void sub_bd8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8ec0ULL || rel >= 0xbd8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8f60 size=16 callers=0 calls=0
*/
void sub_bd8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8f60ULL || rel >= 0xbd8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd8f70 size=368 callers=2 calls=1
   calls: sub_bc8a00
*/
void sub_bd8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd8f70ULL || rel >= 0xbd90e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd90e0 size=16 callers=0 calls=0
*/
void sub_bd90e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd90e0ULL || rel >= 0xbd90f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd90f0 size=16 callers=0 calls=0
*/
void sub_bd90f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd90f0ULL || rel >= 0xbd9100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9100 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd9100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9100ULL || rel >= 0xbd9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9210 size=304 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9210ULL || rel >= 0xbd9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9340 size=96 callers=0 calls=0
*/
void sub_bd9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9340ULL || rel >= 0xbd93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd93a0 size=96 callers=0 calls=0
*/
void sub_bd93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd93a0ULL || rel >= 0xbd9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9400 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9400ULL || rel >= 0xbd9470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9470 size=240 callers=0 calls=5
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_5cff50, sub_5e6770
*/
void sub_bd9470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9470ULL || rel >= 0xbd9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9560 size=224 callers=0 calls=1
   calls: sub_be6ec0
*/
void sub_bd9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9560ULL || rel >= 0xbd9640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9640 size=96 callers=0 calls=0
*/
void sub_bd9640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9640ULL || rel >= 0xbd96a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd96a0 size=96 callers=0 calls=0
*/
void sub_bd96a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd96a0ULL || rel >= 0xbd9700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9700 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd9700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9700ULL || rel >= 0xbd9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9770 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bd9770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9770ULL || rel >= 0xbd97e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd97e0 size=96 callers=0 calls=0
*/
void sub_bd97e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd97e0ULL || rel >= 0xbd9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9840 size=96 callers=0 calls=0
*/
void sub_bd9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9840ULL || rel >= 0xbd98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd98a0 size=16 callers=0 calls=0
*/
void sub_bd98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd98a0ULL || rel >= 0xbd98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd98b0 size=16 callers=0 calls=0
*/
void sub_bd98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd98b0ULL || rel >= 0xbd98c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd98c0 size=1248 callers=0 calls=8
   calls: sub_5cfaf0, sub_607750, sub_987040, sub_b8c9e0, sub_be7240, sub_c195a0, sub_ede170, sub_ede1e0
*/
void sub_bd98c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd98c0ULL || rel >= 0xbd9da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9da0 size=16 callers=0 calls=0
*/
void sub_bd9da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9da0ULL || rel >= 0xbd9db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9db0 size=16 callers=0 calls=0
*/
void sub_bd9db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9db0ULL || rel >= 0xbd9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9dc0 size=16 callers=0 calls=0
*/
void sub_bd9dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9dc0ULL || rel >= 0xbd9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9dd0 size=16 callers=0 calls=0
*/
void sub_bd9dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9dd0ULL || rel >= 0xbd9de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9de0 size=16 callers=0 calls=0
*/
void sub_bd9de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9de0ULL || rel >= 0xbd9df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9df0 size=16 callers=0 calls=0
*/
void sub_bd9df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9df0ULL || rel >= 0xbd9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9e00 size=304 callers=0 calls=0
*/
void sub_bd9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9e00ULL || rel >= 0xbd9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9f30 size=16 callers=0 calls=0
*/
void sub_bd9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9f30ULL || rel >= 0xbd9f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9f40 size=16 callers=0 calls=0
*/
void sub_bd9f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9f40ULL || rel >= 0xbd9f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9f50 size=16 callers=0 calls=0
*/
void sub_bd9f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9f50ULL || rel >= 0xbd9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bd9f60 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bd9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9f60ULL || rel >= 0xbda070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda070 size=96 callers=0 calls=0
*/
void sub_bda070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda070ULL || rel >= 0xbda0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda0d0 size=96 callers=0 calls=0
*/
void sub_bda0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda0d0ULL || rel >= 0xbda130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda130 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bda130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda130ULL || rel >= 0xbda1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda1a0 size=176 callers=0 calls=3
   calls: sub_140bcf0, sub_5cff50, sub_5e6770
*/
void sub_bda1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda1a0ULL || rel >= 0xbda250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda250 size=144 callers=0 calls=1
   calls: sub_be6ec0
*/
void sub_bda250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda250ULL || rel >= 0xbda2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda2e0 size=96 callers=0 calls=0
*/
void sub_bda2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda2e0ULL || rel >= 0xbda340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda340 size=96 callers=0 calls=0
*/
void sub_bda340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda340ULL || rel >= 0xbda3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda3a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bda3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda3a0ULL || rel >= 0xbda410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda410 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bda410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda410ULL || rel >= 0xbda480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda480 size=96 callers=0 calls=0
*/
void sub_bda480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda480ULL || rel >= 0xbda4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda4e0 size=96 callers=0 calls=0
*/
void sub_bda4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda4e0ULL || rel >= 0xbda540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda540 size=16 callers=0 calls=0
*/
void sub_bda540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda540ULL || rel >= 0xbda550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda550 size=16 callers=0 calls=0
*/
void sub_bda550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda550ULL || rel >= 0xbda560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda560 size=752 callers=0 calls=6
   calls: sub_5cfaf0, sub_607750, sub_987040, sub_b8c9e0, sub_be7240, sub_ede1a0
*/
void sub_bda560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda560ULL || rel >= 0xbda850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda850 size=16 callers=0 calls=0
*/
void sub_bda850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda850ULL || rel >= 0xbda860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda860 size=16 callers=0 calls=0
*/
void sub_bda860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda860ULL || rel >= 0xbda870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda870 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bda870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda870ULL || rel >= 0xbda990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda990 size=96 callers=0 calls=0
*/
void sub_bda990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda990ULL || rel >= 0xbda9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bda9f0 size=96 callers=0 calls=0
*/
void sub_bda9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbda9f0ULL || rel >= 0xbdaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdaa50 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdaa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdaa50ULL || rel >= 0xbdaac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdaac0 size=240 callers=0 calls=5
   calls: sub_140b690, sub_140bc80, sub_140bcf0, sub_5cff50, sub_5e6770
*/
void sub_bdaac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdaac0ULL || rel >= 0xbdabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdabb0 size=224 callers=0 calls=1
   calls: sub_be6ec0
*/
void sub_bdabb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdabb0ULL || rel >= 0xbdac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdac90 size=96 callers=0 calls=0
*/
void sub_bdac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdac90ULL || rel >= 0xbdacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdacf0 size=96 callers=0 calls=0
*/
void sub_bdacf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdacf0ULL || rel >= 0xbdad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdad50 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdad50ULL || rel >= 0xbdadc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdadc0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdadc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdadc0ULL || rel >= 0xbdae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdae30 size=96 callers=0 calls=0
*/
void sub_bdae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdae30ULL || rel >= 0xbdae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdae90 size=96 callers=0 calls=0
*/
void sub_bdae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdae90ULL || rel >= 0xbdaef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdaef0 size=16 callers=0 calls=0
*/
void sub_bdaef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdaef0ULL || rel >= 0xbdaf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdaf00 size=16 callers=0 calls=0
*/
void sub_bdaf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdaf00ULL || rel >= 0xbdaf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdaf10 size=1248 callers=0 calls=7
   calls: sub_5cfaf0, sub_607750, sub_987040, sub_b8c9e0, sub_be7240, sub_ede180, sub_ede1d0
*/
void sub_bdaf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdaf10ULL || rel >= 0xbdb3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb3f0 size=16 callers=0 calls=0
*/
void sub_bdb3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb3f0ULL || rel >= 0xbdb400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb400 size=16 callers=0 calls=0
*/
void sub_bdb400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb400ULL || rel >= 0xbdb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb410 size=16 callers=0 calls=0
*/
void sub_bdb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb410ULL || rel >= 0xbdb420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb420 size=16 callers=0 calls=0
*/
void sub_bdb420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb420ULL || rel >= 0xbdb430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb430 size=16 callers=0 calls=0
*/
void sub_bdb430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb430ULL || rel >= 0xbdb440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb440 size=16 callers=0 calls=0
*/
void sub_bdb440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb440ULL || rel >= 0xbdb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb450 size=128 callers=0 calls=0
*/
void sub_bdb450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb450ULL || rel >= 0xbdb4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb4d0 size=16 callers=0 calls=0
*/
void sub_bdb4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb4d0ULL || rel >= 0xbdb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb4e0 size=16 callers=0 calls=0
*/
void sub_bdb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb4e0ULL || rel >= 0xbdb4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb4f0 size=16 callers=0 calls=0
*/
void sub_bdb4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb4f0ULL || rel >= 0xbdb500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb500 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bdb500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb500ULL || rel >= 0xbdb610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb610 size=96 callers=0 calls=0
*/
void sub_bdb610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb610ULL || rel >= 0xbdb670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb670 size=96 callers=0 calls=0
*/
void sub_bdb670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb670ULL || rel >= 0xbdb6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb6d0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdb6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb6d0ULL || rel >= 0xbdb740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb740 size=176 callers=0 calls=3
   calls: sub_140bcf0, sub_5cff50, sub_5e6770
*/
void sub_bdb740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb740ULL || rel >= 0xbdb7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb7f0 size=144 callers=0 calls=1
   calls: sub_be6ec0
*/
void sub_bdb7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb7f0ULL || rel >= 0xbdb880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb880 size=96 callers=0 calls=0
*/
void sub_bdb880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb880ULL || rel >= 0xbdb8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb8e0 size=96 callers=0 calls=0
*/
void sub_bdb8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb8e0ULL || rel >= 0xbdb940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb940 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdb940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb940ULL || rel >= 0xbdb9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdb9b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdb9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdb9b0ULL || rel >= 0xbdba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdba20 size=96 callers=0 calls=0
*/
void sub_bdba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdba20ULL || rel >= 0xbdba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdba80 size=96 callers=0 calls=0
*/
void sub_bdba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdba80ULL || rel >= 0xbdbae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdbae0 size=16 callers=0 calls=0
*/
void sub_bdbae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdbae0ULL || rel >= 0xbdbaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdbaf0 size=16 callers=0 calls=0
*/
void sub_bdbaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdbaf0ULL || rel >= 0xbdbb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdbb00 size=752 callers=0 calls=6
   calls: sub_5cfaf0, sub_607750, sub_987040, sub_b8c9e0, sub_be7240, sub_ede1b0
*/
void sub_bdbb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdbb00ULL || rel >= 0xbdbdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdbdf0 size=16 callers=0 calls=0
*/
void sub_bdbdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdbdf0ULL || rel >= 0xbdbe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdbe00 size=16 callers=0 calls=0
*/
void sub_bdbe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdbe00ULL || rel >= 0xbdbe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdbe10 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bdbe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdbe10ULL || rel >= 0xbdbf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdbf20 size=96 callers=0 calls=0
*/
void sub_bdbf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdbf20ULL || rel >= 0xbdbf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdbf80 size=96 callers=0 calls=0
*/
void sub_bdbf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdbf80ULL || rel >= 0xbdbfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdbfe0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdbfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdbfe0ULL || rel >= 0xbdc050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc050 size=192 callers=0 calls=4
   calls: sub_140bcf0, sub_140bd40, sub_5cff50, sub_5e6770
*/
void sub_bdc050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc050ULL || rel >= 0xbdc110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc110 size=144 callers=0 calls=1
   calls: sub_be6ec0
*/
void sub_bdc110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc110ULL || rel >= 0xbdc1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc1a0 size=96 callers=0 calls=0
*/
void sub_bdc1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc1a0ULL || rel >= 0xbdc200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc200 size=96 callers=0 calls=0
*/
void sub_bdc200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc200ULL || rel >= 0xbdc260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc260 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdc260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc260ULL || rel >= 0xbdc2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc2d0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdc2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc2d0ULL || rel >= 0xbdc340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc340 size=96 callers=0 calls=0
*/
void sub_bdc340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc340ULL || rel >= 0xbdc3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc3a0 size=96 callers=0 calls=0
*/
void sub_bdc3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc3a0ULL || rel >= 0xbdc400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc400 size=16 callers=0 calls=0
*/
void sub_bdc400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc400ULL || rel >= 0xbdc410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc410 size=16 callers=0 calls=0
*/
void sub_bdc410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc410ULL || rel >= 0xbdc420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc420 size=848 callers=0 calls=6
   calls: sub_5cfaf0, sub_607750, sub_987040, sub_b8c9e0, sub_be7240, sub_ede190
*/
void sub_bdc420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc420ULL || rel >= 0xbdc770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc770 size=16 callers=0 calls=0
*/
void sub_bdc770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc770ULL || rel >= 0xbdc780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc780 size=16 callers=0 calls=0
*/
void sub_bdc780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc780ULL || rel >= 0xbdc790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc790 size=16 callers=0 calls=0
*/
void sub_bdc790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc790ULL || rel >= 0xbdc7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc7a0 size=16 callers=0 calls=0
*/
void sub_bdc7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc7a0ULL || rel >= 0xbdc7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc7b0 size=16 callers=0 calls=0
*/
void sub_bdc7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc7b0ULL || rel >= 0xbdc7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc7c0 size=16 callers=0 calls=0
*/
void sub_bdc7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc7c0ULL || rel >= 0xbdc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc7d0 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bdc7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc7d0ULL || rel >= 0xbdc8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc8e0 size=96 callers=0 calls=0
*/
void sub_bdc8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc8e0ULL || rel >= 0xbdc940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc940 size=96 callers=0 calls=0
*/
void sub_bdc940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc940ULL || rel >= 0xbdc9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdc9a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdc9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdc9a0ULL || rel >= 0xbdca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdca10 size=176 callers=0 calls=3
   calls: sub_140bcf0, sub_5cff50, sub_5e6770
*/
void sub_bdca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdca10ULL || rel >= 0xbdcac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdcac0 size=144 callers=0 calls=1
   calls: sub_be6ec0
*/
void sub_bdcac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdcac0ULL || rel >= 0xbdcb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdcb50 size=96 callers=0 calls=0
*/
void sub_bdcb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdcb50ULL || rel >= 0xbdcbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdcbb0 size=96 callers=0 calls=0
*/
void sub_bdcbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdcbb0ULL || rel >= 0xbdcc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdcc10 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdcc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdcc10ULL || rel >= 0xbdcc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdcc80 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdcc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdcc80ULL || rel >= 0xbdccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdccf0 size=96 callers=0 calls=0
*/
void sub_bdccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdccf0ULL || rel >= 0xbdcd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdcd50 size=96 callers=0 calls=0
*/
void sub_bdcd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdcd50ULL || rel >= 0xbdcdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdcdb0 size=16 callers=0 calls=0
*/
void sub_bdcdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdcdb0ULL || rel >= 0xbdcdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdcdc0 size=16 callers=0 calls=0
*/
void sub_bdcdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdcdc0ULL || rel >= 0xbdcdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdcdd0 size=752 callers=0 calls=6
   calls: sub_5cfaf0, sub_607750, sub_987040, sub_b8c9e0, sub_be7240, sub_ede1c0
*/
void sub_bdcdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdcdd0ULL || rel >= 0xbdd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd0c0 size=16 callers=0 calls=0
*/
void sub_bdd0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd0c0ULL || rel >= 0xbdd0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd0d0 size=16 callers=0 calls=0
*/
void sub_bdd0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd0d0ULL || rel >= 0xbdd0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd0e0 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bdd0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd0e0ULL || rel >= 0xbdd1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd1f0 size=16 callers=0 calls=0
*/
void sub_bdd1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd1f0ULL || rel >= 0xbdd200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd200 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdd200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd200ULL || rel >= 0xbdd270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd270 size=16 callers=0 calls=0
*/
void sub_bdd270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd270ULL || rel >= 0xbdd280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd280 size=480 callers=0 calls=3
   calls: sub_12f8340, sub_12f8350, sub_12f8360
*/
void sub_bdd280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd280ULL || rel >= 0xbdd460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd460 size=16 callers=0 calls=0
*/
void sub_bdd460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd460ULL || rel >= 0xbdd470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd470 size=16 callers=0 calls=0
*/
void sub_bdd470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd470ULL || rel >= 0xbdd480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd480 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdd480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd480ULL || rel >= 0xbdd4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd4f0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdd4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd4f0ULL || rel >= 0xbdd560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd560 size=16 callers=0 calls=0
*/
void sub_bdd560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd560ULL || rel >= 0xbdd570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd570 size=16 callers=0 calls=0
*/
void sub_bdd570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd570ULL || rel >= 0xbdd580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd580 size=128 callers=0 calls=1
   calls: sub_12f8370
*/
void sub_bdd580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd580ULL || rel >= 0xbdd600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd600 size=16 callers=0 calls=0
*/
void sub_bdd600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd600ULL || rel >= 0xbdd610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd610 size=16 callers=0 calls=0
*/
void sub_bdd610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd610ULL || rel >= 0xbdd620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd620 size=16 callers=0 calls=0
*/
void sub_bdd620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd620ULL || rel >= 0xbdd630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd630 size=304 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bdd630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd630ULL || rel >= 0xbdd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd760 size=16 callers=0 calls=0
*/
void sub_bdd760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd760ULL || rel >= 0xbdd770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd770 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdd770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd770ULL || rel >= 0xbdd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd7e0 size=80 callers=0 calls=2
   calls: sub_140bca0, sub_140bd40
*/
void sub_bdd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd7e0ULL || rel >= 0xbdd830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd830 size=208 callers=0 calls=0
*/
void sub_bdd830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd830ULL || rel >= 0xbdd900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd900 size=16 callers=0 calls=0
*/
void sub_bdd900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd900ULL || rel >= 0xbdd910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd910 size=16 callers=0 calls=0
*/
void sub_bdd910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd910ULL || rel >= 0xbdd920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd920 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdd920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd920ULL || rel >= 0xbdd990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdd990 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdd990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdd990ULL || rel >= 0xbdda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdda00 size=16 callers=0 calls=0
*/
void sub_bdda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdda00ULL || rel >= 0xbdda10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdda10 size=16 callers=0 calls=0
*/
void sub_bdda10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdda10ULL || rel >= 0xbdda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdda20 size=16 callers=0 calls=0
*/
void sub_bdda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdda20ULL || rel >= 0xbdda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdda30 size=16 callers=0 calls=0
*/
void sub_bdda30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdda30ULL || rel >= 0xbdda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdda40 size=688 callers=0 calls=6
   calls: sub_59bee0, sub_612ef0, sub_612f70, sub_bc2290, sub_bc2530, sub_bca8b0
   ref: EffCenter01
*/
void EffCenter01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdda40ULL || rel >= 0xbddcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bddcf0 size=16 callers=0 calls=0
*/
void sub_bddcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbddcf0ULL || rel >= 0xbddd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bddd00 size=16 callers=0 calls=0
*/
void sub_bddd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbddd00ULL || rel >= 0xbddd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bddd10 size=16 callers=0 calls=0
*/
void sub_bddd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbddd10ULL || rel >= 0xbddd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bddd20 size=16 callers=0 calls=0
*/
void sub_bddd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbddd20ULL || rel >= 0xbddd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bddd30 size=832 callers=0 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_bddd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbddd30ULL || rel >= 0xbde070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde070 size=16 callers=0 calls=0
*/
void sub_bde070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde070ULL || rel >= 0xbde080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde080 size=16 callers=0 calls=0
*/
void sub_bde080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde080ULL || rel >= 0xbde090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde090 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bde090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde090ULL || rel >= 0xbde1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde1a0 size=16 callers=0 calls=0
*/
void sub_bde1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde1a0ULL || rel >= 0xbde1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde1b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bde1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde1b0ULL || rel >= 0xbde220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde220 size=32 callers=0 calls=0
*/
void sub_bde220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde220ULL || rel >= 0xbde240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde240 size=816 callers=0 calls=13
   calls: sub_59bee0, sub_615bd0, sub_615c50, sub_6721f0, sub_b8b370, sub_bc2290, sub_bc2530, sub_bca7e0, sub_bca8b0, sub_bcaef0, sub_bcc4e0, sub_bde690
   ... +1 more
   ref: ob0046_00_xshadowfSkin_vis
   ref: ob0046_00_xshadowmSkin_vis
*/
void ob0046_00_xshadowmSkin_vis_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde240ULL || rel >= 0xbde570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde570 size=16 callers=0 calls=0
*/
void sub_bde570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde570ULL || rel >= 0xbde580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde580 size=16 callers=0 calls=0
*/
void sub_bde580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde580ULL || rel >= 0xbde590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde590 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bde590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde590ULL || rel >= 0xbde600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde600 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bde600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde600ULL || rel >= 0xbde670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde670 size=16 callers=0 calls=0
*/
void sub_bde670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde670ULL || rel >= 0xbde680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde680 size=16 callers=0 calls=0
*/
void sub_bde680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde680ULL || rel >= 0xbde690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde690 size=368 callers=6 calls=1
   calls: sub_bc8a00
*/
void sub_bde690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde690ULL || rel >= 0xbde800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bde800 size=976 callers=1 calls=9
   calls: sub_59a180, sub_5bee70, sub_5e2bc0, sub_b44bb0, sub_bca7e0, sub_bca8b0, sub_bcaef0, sub_bdebd0, sub_bdecc0
*/
void sub_bde800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbde800ULL || rel >= 0xbdebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdebd0 size=240 callers=8 calls=1
   calls: sub_bc8a00
*/
void sub_bdebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdebd0ULL || rel >= 0xbdecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdecc0 size=240 callers=8 calls=1
   calls: sub_bc8a00
*/
void sub_bdecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdecc0ULL || rel >= 0xbdedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdedb0 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bdedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdedb0ULL || rel >= 0xbdeec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdeec0 size=16 callers=0 calls=0
*/
void sub_bdeec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdeec0ULL || rel >= 0xbdeed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdeed0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdeed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdeed0ULL || rel >= 0xbdef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdef40 size=64 callers=0 calls=1
   calls: sub_140b690
*/
void sub_bdef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdef40ULL || rel >= 0xbdef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdef80 size=352 callers=0 calls=3
   calls: sub_bc2530, sub_bca8b0, sub_bdf200
*/
void sub_bdef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdef80ULL || rel >= 0xbdf0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

