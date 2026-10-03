/* main functions 00c047f0..00c160c0 (95 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00c047f0 size=112 callers=0 calls=0
*/
void sub_c047f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc047f0ULL || rel >= 0xc04860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04860 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c04860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04860ULL || rel >= 0xc048d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c048d0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c048d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc048d0ULL || rel >= 0xc04940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04940 size=112 callers=0 calls=0
*/
void sub_c04940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04940ULL || rel >= 0xc049b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c049b0 size=112 callers=0 calls=0
*/
void sub_c049b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc049b0ULL || rel >= 0xc04a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04a20 size=32 callers=0 calls=0
*/
void sub_c04a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04a20ULL || rel >= 0xc04a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04a40 size=16 callers=0 calls=0
*/
void sub_c04a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04a40ULL || rel >= 0xc04a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04a50 size=16 callers=0 calls=0
*/
void sub_c04a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04a50ULL || rel >= 0xc04a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04a60 size=16 callers=0 calls=0
*/
void sub_c04a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04a60ULL || rel >= 0xc04a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04a70 size=32 callers=0 calls=0
*/
void sub_c04a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04a70ULL || rel >= 0xc04a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04a90 size=528 callers=0 calls=1
   calls: sub_c04fa0
*/
void sub_c04a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04a90ULL || rel >= 0xc04ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04ca0 size=352 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c04ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04ca0ULL || rel >= 0xc04e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04e00 size=16 callers=0 calls=0
*/
void sub_c04e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04e00ULL || rel >= 0xc04e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04e10 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c04e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04e10ULL || rel >= 0xc04e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04e80 size=16 callers=0 calls=0
*/
void sub_c04e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04e80ULL || rel >= 0xc04e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04e90 size=16 callers=0 calls=0
*/
void sub_c04e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04e90ULL || rel >= 0xc04ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04ea0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c04ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04ea0ULL || rel >= 0xc04f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04f10 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c04f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04f10ULL || rel >= 0xc04f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04f80 size=16 callers=0 calls=0
*/
void sub_c04f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04f80ULL || rel >= 0xc04f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04f90 size=16 callers=0 calls=0
*/
void sub_c04f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04f90ULL || rel >= 0xc04fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c04fa0 size=320 callers=1 calls=4
   calls: sub_5dd790, sub_5e2930, sub_95afb0, sub_c050e0
*/
void sub_c04fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc04fa0ULL || rel >= 0xc050e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c050e0 size=1104 callers=1 calls=1
   calls: sub_be32b0
*/
void sub_c050e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc050e0ULL || rel >= 0xc05530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05530 size=48 callers=0 calls=0
*/
void sub_c05530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05530ULL || rel >= 0xc05560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05560 size=16 callers=0 calls=0
*/
void sub_c05560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05560ULL || rel >= 0xc05570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05570 size=16 callers=0 calls=0
*/
void sub_c05570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05570ULL || rel >= 0xc05580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05580 size=16 callers=0 calls=0
*/
void sub_c05580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05580ULL || rel >= 0xc05590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05590 size=16 callers=0 calls=0
*/
void sub_c05590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05590ULL || rel >= 0xc055a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c055a0 size=16 callers=0 calls=0
*/
void sub_c055a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc055a0ULL || rel >= 0xc055b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c055b0 size=16 callers=0 calls=0
*/
void sub_c055b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc055b0ULL || rel >= 0xc055c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c055c0 size=16 callers=0 calls=0
*/
void sub_c055c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc055c0ULL || rel >= 0xc055d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c055d0 size=224 callers=0 calls=4
   calls: sub_5c51b0, sub_bc2530, sub_bca8b0, sub_be30e0
*/
void sub_c055d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc055d0ULL || rel >= 0xc056b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c056b0 size=16 callers=0 calls=0
*/
void sub_c056b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc056b0ULL || rel >= 0xc056c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c056c0 size=16 callers=0 calls=0
*/
void sub_c056c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc056c0ULL || rel >= 0xc056d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c056d0 size=16 callers=0 calls=0
*/
void sub_c056d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc056d0ULL || rel >= 0xc056e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c056e0 size=224 callers=0 calls=3
   calls: sub_140b690, sub_140bc80, sub_140bca0
*/
void sub_c056e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc056e0ULL || rel >= 0xc057c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c057c0 size=208 callers=0 calls=0
*/
void sub_c057c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc057c0ULL || rel >= 0xc05890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05890 size=16 callers=0 calls=0
*/
void sub_c05890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05890ULL || rel >= 0xc058a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c058a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c058a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc058a0ULL || rel >= 0xc05910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05910 size=16 callers=0 calls=0
*/
void sub_c05910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05910ULL || rel >= 0xc05920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05920 size=16 callers=0 calls=0
*/
void sub_c05920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05920ULL || rel >= 0xc05930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05930 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c05930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05930ULL || rel >= 0xc059a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c059a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c059a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc059a0ULL || rel >= 0xc05a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05a10 size=16 callers=0 calls=0
*/
void sub_c05a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05a10ULL || rel >= 0xc05a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05a20 size=16 callers=0 calls=0
*/
void sub_c05a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05a20ULL || rel >= 0xc05a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05a30 size=272 callers=0 calls=3
   calls: sub_5f19d0, sub_bd74d0, sub_ed32d0
*/
void sub_c05a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05a30ULL || rel >= 0xc05b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05b40 size=16 callers=0 calls=0
*/
void sub_c05b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05b40ULL || rel >= 0xc05b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05b50 size=16 callers=0 calls=0
*/
void sub_c05b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05b50ULL || rel >= 0xc05b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05b60 size=16 callers=0 calls=0
*/
void sub_c05b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05b60ULL || rel >= 0xc05b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c05b70 size=1232 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_c05b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc05b70ULL || rel >= 0xc06040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06040 size=16 callers=0 calls=0
*/
void sub_c06040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06040ULL || rel >= 0xc06050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06050 size=16 callers=0 calls=0
*/
void sub_c06050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06050ULL || rel >= 0xc06060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06060 size=16 callers=0 calls=0
*/
void sub_c06060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06060ULL || rel >= 0xc06070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06070 size=32 callers=0 calls=0
*/
void sub_c06070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06070ULL || rel >= 0xc06090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06090 size=272 callers=0 calls=3
   calls: sub_bc2530, sub_bca8b0, sub_bea510
*/
void sub_c06090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06090ULL || rel >= 0xc061a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c061a0 size=16 callers=0 calls=0
*/
void sub_c061a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc061a0ULL || rel >= 0xc061b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c061b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c061b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc061b0ULL || rel >= 0xc06220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06220 size=16 callers=0 calls=0
*/
void sub_c06220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06220ULL || rel >= 0xc06230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06230 size=16 callers=0 calls=0
*/
void sub_c06230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06230ULL || rel >= 0xc06240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06240 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c06240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06240ULL || rel >= 0xc062b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c062b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c062b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc062b0ULL || rel >= 0xc06320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06320 size=16 callers=0 calls=0
*/
void sub_c06320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06320ULL || rel >= 0xc06330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06330 size=16 callers=0 calls=0
*/
void sub_c06330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06330ULL || rel >= 0xc06340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06340 size=272 callers=0 calls=4
   calls: sub_14ab0c0, sub_bc2530, sub_bca8b0, sub_bea510
*/
void sub_c06340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06340ULL || rel >= 0xc06450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06450 size=16 callers=0 calls=0
*/
void sub_c06450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06450ULL || rel >= 0xc06460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06460 size=16 callers=0 calls=0
*/
void sub_c06460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06460ULL || rel >= 0xc06470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06470 size=16 callers=0 calls=0
*/
void sub_c06470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06470ULL || rel >= 0xc06480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06480 size=32 callers=0 calls=0
*/
void sub_c06480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06480ULL || rel >= 0xc064a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c064a0 size=448 callers=0 calls=5
   calls: sub_bc2530, sub_bca8b0, sub_bde690, sub_be6ec0, sub_be7240
*/
void sub_c064a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc064a0ULL || rel >= 0xc06660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06660 size=16 callers=0 calls=0
*/
void sub_c06660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06660ULL || rel >= 0xc06670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06670 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c06670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06670ULL || rel >= 0xc066e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c066e0 size=16 callers=0 calls=0
*/
void sub_c066e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc066e0ULL || rel >= 0xc066f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c066f0 size=16 callers=0 calls=0
*/
void sub_c066f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc066f0ULL || rel >= 0xc06700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06700 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c06700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06700ULL || rel >= 0xc06770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06770 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c06770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06770ULL || rel >= 0xc067e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c067e0 size=16 callers=0 calls=0
*/
void sub_c067e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc067e0ULL || rel >= 0xc067f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c067f0 size=16 callers=0 calls=0
*/
void sub_c067f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc067f0ULL || rel >= 0xc06800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06800 size=320 callers=0 calls=5
   calls: sub_59b1f0, sub_59b200, sub_b44bb0, sub_bc2290, sub_bca8b0
*/
void sub_c06800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06800ULL || rel >= 0xc06940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06940 size=16 callers=0 calls=0
*/
void sub_c06940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06940ULL || rel >= 0xc06950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06950 size=16 callers=0 calls=0
*/
void sub_c06950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06950ULL || rel >= 0xc06960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06960 size=16 callers=0 calls=0
*/
void sub_c06960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06960ULL || rel >= 0xc06970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06970 size=192 callers=0 calls=2
   calls: sub_b477b0, sub_be7240
*/
void sub_c06970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06970ULL || rel >= 0xc06a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06a30 size=16 callers=0 calls=0
*/
void sub_c06a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06a30ULL || rel >= 0xc06a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06a40 size=16 callers=0 calls=0
*/
void sub_c06a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06a40ULL || rel >= 0xc06a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06a50 size=16 callers=0 calls=0
*/
void sub_c06a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06a50ULL || rel >= 0xc06a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06a60 size=32 callers=0 calls=0
*/
void sub_c06a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06a60ULL || rel >= 0xc06a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06a80 size=128 callers=0 calls=0
*/
void sub_c06a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06a80ULL || rel >= 0xc06b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06b00 size=16 callers=0 calls=0
*/
void sub_c06b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06b00ULL || rel >= 0xc06b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06b10 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c06b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06b10ULL || rel >= 0xc06b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06b80 size=16 callers=0 calls=0
*/
void sub_c06b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06b80ULL || rel >= 0xc06b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06b90 size=16 callers=0 calls=0
*/
void sub_c06b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06b90ULL || rel >= 0xc06ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06ba0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c06ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06ba0ULL || rel >= 0xc06c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06c10 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c06c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06c10ULL || rel >= 0xc06c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06c80 size=16 callers=0 calls=0
*/
void sub_c06c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06c80ULL || rel >= 0xc06c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06c90 size=16 callers=0 calls=0
*/
void sub_c06c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06c90ULL || rel >= 0xc06ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06ca0 size=368 callers=0 calls=8
   calls: sub_13f68d0, sub_619060, sub_68da60, sub_b46a10, sub_bc2290, sub_bca8b0, sub_be7240, sub_be7940
*/
void sub_c06ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06ca0ULL || rel >= 0xc06e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06e10 size=16 callers=0 calls=0
*/
void sub_c06e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06e10ULL || rel >= 0xc06e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06e20 size=16 callers=0 calls=0
*/
void sub_c06e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06e20ULL || rel >= 0xc06e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06e30 size=16 callers=0 calls=0
*/
void sub_c06e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06e30ULL || rel >= 0xc06e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06e40 size=112 callers=0 calls=3
   calls: sub_140b690, sub_140bcf0, sub_140bd40
*/
void sub_c06e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06e40ULL || rel >= 0xc06eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c06eb0 size=480 callers=0 calls=4
   calls: sub_bca8b0, sub_c17880, sub_c178a0, sub_c178b0
*/
void sub_c06eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc06eb0ULL || rel >= 0xc07090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07090 size=16 callers=0 calls=0
*/
void sub_c07090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07090ULL || rel >= 0xc070a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c070a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c070a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc070a0ULL || rel >= 0xc07110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07110 size=16 callers=0 calls=0
*/
void sub_c07110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07110ULL || rel >= 0xc07120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07120 size=16 callers=0 calls=0
*/
void sub_c07120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07120ULL || rel >= 0xc07130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07130 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c07130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07130ULL || rel >= 0xc071a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c071a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c071a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc071a0ULL || rel >= 0xc07210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07210 size=16 callers=0 calls=0
*/
void sub_c07210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07210ULL || rel >= 0xc07220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07220 size=16 callers=0 calls=0
*/
void sub_c07220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07220ULL || rel >= 0xc07230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07230 size=64 callers=0 calls=1
   calls: sub_140bcf0
*/
void sub_c07230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07230ULL || rel >= 0xc07270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07270 size=448 callers=0 calls=5
   calls: sub_bc2530, sub_bca8b0, sub_bde690, sub_be6ec0, sub_be7240
*/
void sub_c07270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07270ULL || rel >= 0xc07430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07430 size=16 callers=0 calls=0
*/
void sub_c07430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07430ULL || rel >= 0xc07440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07440 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c07440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07440ULL || rel >= 0xc074b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c074b0 size=16 callers=0 calls=0
*/
void sub_c074b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc074b0ULL || rel >= 0xc074c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c074c0 size=16 callers=0 calls=0
*/
void sub_c074c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc074c0ULL || rel >= 0xc074d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c074d0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c074d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc074d0ULL || rel >= 0xc07540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07540 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c07540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07540ULL || rel >= 0xc075b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c075b0 size=16 callers=0 calls=0
*/
void sub_c075b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc075b0ULL || rel >= 0xc075c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c075c0 size=16 callers=0 calls=0
*/
void sub_c075c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc075c0ULL || rel >= 0xc075d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c075d0 size=320 callers=0 calls=5
   calls: sub_59b090, sub_59b0c0, sub_b44bb0, sub_bc2290, sub_bca8b0
*/
void sub_c075d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc075d0ULL || rel >= 0xc07710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07710 size=16 callers=0 calls=0
*/
void sub_c07710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07710ULL || rel >= 0xc07720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07720 size=16 callers=0 calls=0
*/
void sub_c07720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07720ULL || rel >= 0xc07730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07730 size=16 callers=0 calls=0
*/
void sub_c07730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07730ULL || rel >= 0xc07740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07740 size=192 callers=0 calls=2
   calls: sub_b46f20, sub_be7240
*/
void sub_c07740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07740ULL || rel >= 0xc07800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07800 size=16 callers=0 calls=0
*/
void sub_c07800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07800ULL || rel >= 0xc07810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07810 size=16 callers=0 calls=0
*/
void sub_c07810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07810ULL || rel >= 0xc07820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07820 size=16 callers=0 calls=0
*/
void sub_c07820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07820ULL || rel >= 0xc07830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07830 size=80 callers=0 calls=2
   calls: sub_140b690, sub_140bd40
*/
void sub_c07830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07830ULL || rel >= 0xc07880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07880 size=128 callers=0 calls=0
*/
void sub_c07880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07880ULL || rel >= 0xc07900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07900 size=16 callers=0 calls=0
*/
void sub_c07900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07900ULL || rel >= 0xc07910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07910 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c07910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07910ULL || rel >= 0xc07980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07980 size=16 callers=0 calls=0
*/
void sub_c07980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07980ULL || rel >= 0xc07990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07990 size=16 callers=0 calls=0
*/
void sub_c07990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07990ULL || rel >= 0xc079a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c079a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c079a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc079a0ULL || rel >= 0xc07a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07a10 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c07a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07a10ULL || rel >= 0xc07a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07a80 size=16 callers=0 calls=0
*/
void sub_c07a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07a80ULL || rel >= 0xc07a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07a90 size=16 callers=0 calls=0
*/
void sub_c07a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07a90ULL || rel >= 0xc07aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07aa0 size=192 callers=0 calls=2
   calls: sub_bca8b0, sub_c178b0
*/
void sub_c07aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07aa0ULL || rel >= 0xc07b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07b60 size=16 callers=0 calls=0
*/
void sub_c07b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07b60ULL || rel >= 0xc07b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07b70 size=16 callers=0 calls=0
*/
void sub_c07b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07b70ULL || rel >= 0xc07b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07b80 size=16 callers=0 calls=0
*/
void sub_c07b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07b80ULL || rel >= 0xc07b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07b90 size=64 callers=0 calls=1
   calls: sub_140bcf0
*/
void sub_c07b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07b90ULL || rel >= 0xc07bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07bd0 size=448 callers=0 calls=5
   calls: sub_bc2530, sub_bca8b0, sub_bde690, sub_be6ec0, sub_be7240
*/
void sub_c07bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07bd0ULL || rel >= 0xc07d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07d90 size=16 callers=0 calls=0
*/
void sub_c07d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07d90ULL || rel >= 0xc07da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07da0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c07da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07da0ULL || rel >= 0xc07e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07e10 size=16 callers=0 calls=0
*/
void sub_c07e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07e10ULL || rel >= 0xc07e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07e20 size=16 callers=0 calls=0
*/
void sub_c07e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07e20ULL || rel >= 0xc07e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07e30 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c07e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07e30ULL || rel >= 0xc07ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07ea0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c07ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07ea0ULL || rel >= 0xc07f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07f10 size=16 callers=0 calls=0
*/
void sub_c07f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07f10ULL || rel >= 0xc07f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07f20 size=16 callers=0 calls=0
*/
void sub_c07f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07f20ULL || rel >= 0xc07f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c07f30 size=320 callers=0 calls=5
   calls: sub_59b170, sub_59b1a0, sub_b44bb0, sub_bc2290, sub_bca8b0
*/
void sub_c07f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07f30ULL || rel >= 0xc08070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08070 size=16 callers=0 calls=0
*/
void sub_c08070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08070ULL || rel >= 0xc08080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08080 size=16 callers=0 calls=0
*/
void sub_c08080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08080ULL || rel >= 0xc08090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08090 size=16 callers=0 calls=0
*/
void sub_c08090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08090ULL || rel >= 0xc080a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c080a0 size=192 callers=0 calls=2
   calls: sub_b47510, sub_be7240
*/
void sub_c080a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc080a0ULL || rel >= 0xc08160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08160 size=16 callers=0 calls=0
*/
void sub_c08160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08160ULL || rel >= 0xc08170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08170 size=16 callers=0 calls=0
*/
void sub_c08170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08170ULL || rel >= 0xc08180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08180 size=16 callers=0 calls=0
*/
void sub_c08180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08180ULL || rel >= 0xc08190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08190 size=64 callers=0 calls=1
   calls: sub_140bcf0
*/
void sub_c08190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08190ULL || rel >= 0xc081d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c081d0 size=448 callers=0 calls=5
   calls: sub_bc2530, sub_bca8b0, sub_bde690, sub_be6ec0, sub_be7240
*/
void sub_c081d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc081d0ULL || rel >= 0xc08390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08390 size=16 callers=0 calls=0
*/
void sub_c08390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08390ULL || rel >= 0xc083a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c083a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c083a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc083a0ULL || rel >= 0xc08410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08410 size=16 callers=0 calls=0
*/
void sub_c08410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08410ULL || rel >= 0xc08420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08420 size=16 callers=0 calls=0
*/
void sub_c08420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08420ULL || rel >= 0xc08430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08430 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c08430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08430ULL || rel >= 0xc084a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c084a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c084a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc084a0ULL || rel >= 0xc08510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08510 size=16 callers=0 calls=0
*/
void sub_c08510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08510ULL || rel >= 0xc08520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08520 size=16 callers=0 calls=0
*/
void sub_c08520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08520ULL || rel >= 0xc08530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08530 size=320 callers=0 calls=5
   calls: sub_59b100, sub_59b130, sub_b44bb0, sub_bc2290, sub_bca8b0
*/
void sub_c08530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08530ULL || rel >= 0xc08670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08670 size=16 callers=0 calls=0
*/
void sub_c08670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08670ULL || rel >= 0xc08680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08680 size=16 callers=0 calls=0
*/
void sub_c08680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08680ULL || rel >= 0xc08690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08690 size=16 callers=0 calls=0
*/
void sub_c08690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08690ULL || rel >= 0xc086a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c086a0 size=192 callers=0 calls=2
   calls: sub_b47270, sub_be7240
*/
void sub_c086a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc086a0ULL || rel >= 0xc08760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08760 size=16 callers=0 calls=0
*/
void sub_c08760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08760ULL || rel >= 0xc08770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08770 size=16 callers=0 calls=0
*/
void sub_c08770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08770ULL || rel >= 0xc08780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08780 size=16 callers=0 calls=0
*/
void sub_c08780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08780ULL || rel >= 0xc08790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c08790 size=64 callers=0 calls=1
   calls: sub_140bd70
*/
void sub_c08790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc08790ULL || rel >= 0xc087d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c087d0 size=3216 callers=0 calls=24
   calls: sub_598de0, sub_59a4f0, sub_59bee0, sub_5d99d0, sub_5dd790, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_5e6280, sub_76d0d0, sub_b44bb0, sub_b46720
   ... +12 more
   ref: /share/
   ref: bin/archive/demo/share/anime/%s.gfpak
   ref: bin/demo/res/%s
*/
void unnamed_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc087d0ULL || rel >= 0xc09460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09460 size=512 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c09460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09460ULL || rel >= 0xc09660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09660 size=16 callers=0 calls=0
*/
void sub_c09660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09660ULL || rel >= 0xc09670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09670 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c09670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09670ULL || rel >= 0xc096e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c096e0 size=16 callers=0 calls=0
*/
void sub_c096e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc096e0ULL || rel >= 0xc096f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c096f0 size=16 callers=0 calls=0
*/
void sub_c096f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc096f0ULL || rel >= 0xc09700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09700 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c09700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09700ULL || rel >= 0xc09770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09770 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c09770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09770ULL || rel >= 0xc097e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c097e0 size=16 callers=0 calls=0
*/
void sub_c097e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc097e0ULL || rel >= 0xc097f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c097f0 size=16 callers=0 calls=0
*/
void sub_c097f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc097f0ULL || rel >= 0xc09800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09800 size=16 callers=0 calls=0
*/
void sub_c09800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09800ULL || rel >= 0xc09810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09810 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c09810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09810ULL || rel >= 0xc09840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09840 size=16 callers=0 calls=0
*/
void sub_c09840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09840ULL || rel >= 0xc09850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09850 size=16 callers=0 calls=0
*/
void sub_c09850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09850ULL || rel >= 0xc09860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09860 size=16 callers=0 calls=0
*/
void sub_c09860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09860ULL || rel >= 0xc09870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09870 size=528 callers=0 calls=3
   calls: sub_59a4f0, sub_5cf8f0, sub_607750
*/
void sub_c09870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09870ULL || rel >= 0xc09a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09a80 size=16 callers=0 calls=0
*/
void sub_c09a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09a80ULL || rel >= 0xc09a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09a90 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c09a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09a90ULL || rel >= 0xc09ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09ac0 size=16 callers=0 calls=0
*/
void sub_c09ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09ac0ULL || rel >= 0xc09ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09ad0 size=16 callers=0 calls=0
*/
void sub_c09ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09ad0ULL || rel >= 0xc09ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09ae0 size=16 callers=0 calls=0
*/
void sub_c09ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09ae0ULL || rel >= 0xc09af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09af0 size=528 callers=0 calls=3
   calls: sub_59a4f0, sub_5cf8f0, sub_607750
*/
void sub_c09af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09af0ULL || rel >= 0xc09d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09d00 size=400 callers=0 calls=7
   calls: sub_59a4f0, sub_b46720, sub_bc2530, sub_bca8b0, sub_bcc370, sub_bcc4e0, sub_be7240
*/
void sub_c09d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09d00ULL || rel >= 0xc09e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09e90 size=16 callers=0 calls=0
*/
void sub_c09e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09e90ULL || rel >= 0xc09ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09ea0 size=16 callers=0 calls=0
*/
void sub_c09ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09ea0ULL || rel >= 0xc09eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09eb0 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c09eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09eb0ULL || rel >= 0xc09ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09ee0 size=16 callers=0 calls=0
*/
void sub_c09ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09ee0ULL || rel >= 0xc09ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09ef0 size=16 callers=0 calls=0
*/
void sub_c09ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09ef0ULL || rel >= 0xc09f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09f00 size=16 callers=0 calls=0
*/
void sub_c09f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09f00ULL || rel >= 0xc09f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c09f10 size=528 callers=0 calls=3
   calls: sub_59a4f0, sub_5cf8f0, sub_607750
*/
void sub_c09f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc09f10ULL || rel >= 0xc0a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a120 size=16 callers=0 calls=0
*/
void sub_c0a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a120ULL || rel >= 0xc0a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a130 size=16 callers=0 calls=0
*/
void sub_c0a130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a130ULL || rel >= 0xc0a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a140 size=32 callers=0 calls=0
*/
void sub_c0a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a140ULL || rel >= 0xc0a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a160 size=128 callers=0 calls=0
*/
void sub_c0a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a160ULL || rel >= 0xc0a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a1e0 size=16 callers=0 calls=0
*/
void sub_c0a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a1e0ULL || rel >= 0xc0a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a1f0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a1f0ULL || rel >= 0xc0a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a260 size=16 callers=0 calls=0
*/
void sub_c0a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a260ULL || rel >= 0xc0a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a270 size=16 callers=0 calls=0
*/
void sub_c0a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a270ULL || rel >= 0xc0a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a280 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a280ULL || rel >= 0xc0a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a2f0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a2f0ULL || rel >= 0xc0a360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a360 size=16 callers=0 calls=0
*/
void sub_c0a360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a360ULL || rel >= 0xc0a370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a370 size=16 callers=0 calls=0
*/
void sub_c0a370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a370ULL || rel >= 0xc0a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a380 size=320 callers=0 calls=4
   calls: sub_bc2530, sub_bca8b0, sub_bd8f70, sub_be98d0
*/
void sub_c0a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a380ULL || rel >= 0xc0a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a4c0 size=16 callers=0 calls=0
*/
void sub_c0a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a4c0ULL || rel >= 0xc0a4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a4d0 size=16 callers=0 calls=0
*/
void sub_c0a4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a4d0ULL || rel >= 0xc0a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a4e0 size=16 callers=0 calls=0
*/
void sub_c0a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a4e0ULL || rel >= 0xc0a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a4f0 size=64 callers=0 calls=1
   calls: sub_140b690
*/
void sub_c0a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a4f0ULL || rel >= 0xc0a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0a530 size=1424 callers=0 calls=1
   calls: sub_be32b0
*/
void sub_c0a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0a530ULL || rel >= 0xc0aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0aac0 size=16 callers=0 calls=0
*/
void sub_c0aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0aac0ULL || rel >= 0xc0aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0aad0 size=1088 callers=0 calls=9
   calls: sub_5f19d0, sub_b33760, sub_b33c60, sub_b3a8e0, sub_b46790, sub_b46e30, sub_b4c060, sub_bca8b0, sub_bd74d0
*/
void sub_c0aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0aad0ULL || rel >= 0xc0af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0af10 size=144 callers=0 calls=0
*/
void sub_c0af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0af10ULL || rel >= 0xc0afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0afa0 size=144 callers=0 calls=0
*/
void sub_c0afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0afa0ULL || rel >= 0xc0b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b030 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b030ULL || rel >= 0xc0b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b0e0 size=144 callers=0 calls=0
*/
void sub_c0b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b0e0ULL || rel >= 0xc0b170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b170 size=144 callers=0 calls=0
*/
void sub_c0b170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b170ULL || rel >= 0xc0b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b200 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b200ULL || rel >= 0xc0b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b2b0 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b2b0ULL || rel >= 0xc0b360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b360 size=144 callers=0 calls=0
*/
void sub_c0b360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b360ULL || rel >= 0xc0b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b3f0 size=144 callers=0 calls=0
*/
void sub_c0b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b3f0ULL || rel >= 0xc0b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b480 size=208 callers=0 calls=3
   calls: sub_b335e0, sub_b4c060, sub_bca8b0
*/
void sub_c0b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b480ULL || rel >= 0xc0b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b550 size=16 callers=0 calls=0
*/
void sub_c0b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b550ULL || rel >= 0xc0b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b560 size=16 callers=0 calls=0
*/
void sub_c0b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b560ULL || rel >= 0xc0b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b570 size=16 callers=0 calls=0
*/
void sub_c0b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b570ULL || rel >= 0xc0b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b580 size=336 callers=0 calls=2
   calls: sub_b3a8e0, sub_b46790
*/
void sub_c0b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b580ULL || rel >= 0xc0b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b6d0 size=16 callers=0 calls=0
*/
void sub_c0b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b6d0ULL || rel >= 0xc0b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b6e0 size=16 callers=0 calls=0
*/
void sub_c0b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b6e0ULL || rel >= 0xc0b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b6f0 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c0b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b6f0ULL || rel >= 0xc0b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b720 size=16 callers=0 calls=0
*/
void sub_c0b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b720ULL || rel >= 0xc0b730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b730 size=16 callers=0 calls=0
*/
void sub_c0b730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b730ULL || rel >= 0xc0b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b740 size=16 callers=0 calls=0
*/
void sub_c0b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b740ULL || rel >= 0xc0b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b750 size=80 callers=0 calls=1
   calls: sub_619060
*/
void sub_c0b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b750ULL || rel >= 0xc0b7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b7a0 size=16 callers=0 calls=0
*/
void sub_c0b7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b7a0ULL || rel >= 0xc0b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b7b0 size=16 callers=0 calls=0
*/
void sub_c0b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b7b0ULL || rel >= 0xc0b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b7c0 size=496 callers=0 calls=2
   calls: sub_b3a8e0, sub_b46790
*/
void sub_c0b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b7c0ULL || rel >= 0xc0b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b9b0 size=16 callers=0 calls=0
*/
void sub_c0b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b9b0ULL || rel >= 0xc0b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b9c0 size=16 callers=0 calls=0
*/
void sub_c0b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b9c0ULL || rel >= 0xc0b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0b9d0 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c0b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0b9d0ULL || rel >= 0xc0ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0ba00 size=16 callers=0 calls=0
*/
void sub_c0ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0ba00ULL || rel >= 0xc0ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0ba10 size=16 callers=0 calls=0
*/
void sub_c0ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0ba10ULL || rel >= 0xc0ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0ba20 size=16 callers=0 calls=0
*/
void sub_c0ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0ba20ULL || rel >= 0xc0ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0ba30 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_c0ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0ba30ULL || rel >= 0xc0ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0ba60 size=16 callers=0 calls=0
*/
void sub_c0ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0ba60ULL || rel >= 0xc0ba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0ba70 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c0ba70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0ba70ULL || rel >= 0xc0baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0baa0 size=16 callers=0 calls=0
*/
void sub_c0baa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0baa0ULL || rel >= 0xc0bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bab0 size=16 callers=0 calls=0
*/
void sub_c0bab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bab0ULL || rel >= 0xc0bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bac0 size=16 callers=0 calls=0
*/
void sub_c0bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bac0ULL || rel >= 0xc0bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bad0 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_c0bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bad0ULL || rel >= 0xc0bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bb00 size=16 callers=0 calls=0
*/
void sub_c0bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bb00ULL || rel >= 0xc0bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bb10 size=16 callers=0 calls=0
*/
void sub_c0bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bb10ULL || rel >= 0xc0bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bb20 size=496 callers=0 calls=2
   calls: sub_b3a8e0, sub_b46790
*/
void sub_c0bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bb20ULL || rel >= 0xc0bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bd10 size=16 callers=0 calls=0
*/
void sub_c0bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bd10ULL || rel >= 0xc0bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bd20 size=16 callers=0 calls=0
*/
void sub_c0bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bd20ULL || rel >= 0xc0bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bd30 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c0bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bd30ULL || rel >= 0xc0bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bd60 size=16 callers=0 calls=0
*/
void sub_c0bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bd60ULL || rel >= 0xc0bd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bd70 size=16 callers=0 calls=0
*/
void sub_c0bd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bd70ULL || rel >= 0xc0bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bd80 size=16 callers=0 calls=0
*/
void sub_c0bd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bd80ULL || rel >= 0xc0bd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bd90 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_c0bd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bd90ULL || rel >= 0xc0bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bdc0 size=16 callers=0 calls=0
*/
void sub_c0bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bdc0ULL || rel >= 0xc0bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bdd0 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c0bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bdd0ULL || rel >= 0xc0be00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0be00 size=16 callers=0 calls=0
*/
void sub_c0be00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0be00ULL || rel >= 0xc0be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0be10 size=16 callers=0 calls=0
*/
void sub_c0be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0be10ULL || rel >= 0xc0be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0be20 size=16 callers=0 calls=0
*/
void sub_c0be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0be20ULL || rel >= 0xc0be30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0be30 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_c0be30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0be30ULL || rel >= 0xc0be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0be60 size=16 callers=0 calls=0
*/
void sub_c0be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0be60ULL || rel >= 0xc0be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0be70 size=16 callers=0 calls=0
*/
void sub_c0be70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0be70ULL || rel >= 0xc0be80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0be80 size=288 callers=0 calls=2
   calls: sub_b3a8e0, sub_b46790
*/
void sub_c0be80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0be80ULL || rel >= 0xc0bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bfa0 size=16 callers=0 calls=0
*/
void sub_c0bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bfa0ULL || rel >= 0xc0bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bfb0 size=16 callers=0 calls=0
*/
void sub_c0bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bfb0ULL || rel >= 0xc0bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0bfc0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_c0bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0bfc0ULL || rel >= 0xc0c000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c000 size=32 callers=0 calls=0
*/
void sub_c0c000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c000ULL || rel >= 0xc0c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c020 size=16 callers=0 calls=0
*/
void sub_c0c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c020ULL || rel >= 0xc0c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c030 size=16 callers=0 calls=0
*/
void sub_c0c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c030ULL || rel >= 0xc0c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c040 size=16 callers=0 calls=0
*/
void sub_c0c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c040ULL || rel >= 0xc0c050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c050 size=16 callers=0 calls=0
*/
void sub_c0c050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c050ULL || rel >= 0xc0c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c060 size=16 callers=0 calls=0
*/
void sub_c0c060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c060ULL || rel >= 0xc0c070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c070 size=16 callers=0 calls=0
*/
void sub_c0c070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c070ULL || rel >= 0xc0c080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c080 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_c0c080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c080ULL || rel >= 0xc0c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c0b0 size=16 callers=0 calls=0
*/
void sub_c0c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c0b0ULL || rel >= 0xc0c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c0c0 size=16 callers=0 calls=0
*/
void sub_c0c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c0c0ULL || rel >= 0xc0c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c0d0 size=16 callers=0 calls=0
*/
void sub_c0c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c0d0ULL || rel >= 0xc0c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c0e0 size=16 callers=0 calls=0
*/
void sub_c0c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c0e0ULL || rel >= 0xc0c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c0f0 size=32 callers=0 calls=0
*/
void sub_c0c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c0f0ULL || rel >= 0xc0c110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c110 size=1360 callers=0 calls=1
   calls: sub_be32b0
*/
void sub_c0c110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c110ULL || rel >= 0xc0c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c660 size=16 callers=0 calls=0
*/
void sub_c0c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c660ULL || rel >= 0xc0c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c670 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c670ULL || rel >= 0xc0c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c6e0 size=16 callers=0 calls=0
*/
void sub_c0c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c6e0ULL || rel >= 0xc0c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c6f0 size=16 callers=0 calls=0
*/
void sub_c0c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c6f0ULL || rel >= 0xc0c700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c700 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0c700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c700ULL || rel >= 0xc0c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c770 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c770ULL || rel >= 0xc0c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c7e0 size=16 callers=0 calls=0
*/
void sub_c0c7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c7e0ULL || rel >= 0xc0c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c7f0 size=16 callers=0 calls=0
*/
void sub_c0c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c7f0ULL || rel >= 0xc0c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c800 size=16 callers=0 calls=0
*/
void sub_c0c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c800ULL || rel >= 0xc0c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c810 size=16 callers=0 calls=0
*/
void sub_c0c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c810ULL || rel >= 0xc0c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c820 size=16 callers=0 calls=0
*/
void sub_c0c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c820ULL || rel >= 0xc0c830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c830 size=16 callers=0 calls=0
*/
void sub_c0c830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c830ULL || rel >= 0xc0c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c840 size=16 callers=0 calls=0
*/
void sub_c0c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c840ULL || rel >= 0xc0c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c850 size=16 callers=0 calls=0
*/
void sub_c0c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c850ULL || rel >= 0xc0c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c860 size=16 callers=0 calls=0
*/
void sub_c0c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c860ULL || rel >= 0xc0c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c870 size=16 callers=0 calls=0
*/
void sub_c0c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c870ULL || rel >= 0xc0c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c880 size=208 callers=0 calls=5
   calls: sub_1137490, sub_11397d0, sub_bc2290, sub_bca8b0, sub_bf05e0
*/
void sub_c0c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c880ULL || rel >= 0xc0c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c950 size=16 callers=0 calls=0
*/
void sub_c0c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c950ULL || rel >= 0xc0c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c960 size=16 callers=0 calls=0
*/
void sub_c0c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c960ULL || rel >= 0xc0c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c970 size=16 callers=0 calls=0
*/
void sub_c0c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c970ULL || rel >= 0xc0c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c980 size=16 callers=0 calls=0
*/
void sub_c0c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c980ULL || rel >= 0xc0c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c990 size=16 callers=0 calls=0
*/
void sub_c0c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c990ULL || rel >= 0xc0c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c9a0 size=16 callers=0 calls=0
*/
void sub_c0c9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c9a0ULL || rel >= 0xc0c9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c9b0 size=16 callers=0 calls=0
*/
void sub_c0c9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c9b0ULL || rel >= 0xc0c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c9c0 size=16 callers=0 calls=0
*/
void sub_c0c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c9c0ULL || rel >= 0xc0c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c9d0 size=16 callers=0 calls=0
*/
void sub_c0c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c9d0ULL || rel >= 0xc0c9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c9e0 size=16 callers=0 calls=0
*/
void sub_c0c9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c9e0ULL || rel >= 0xc0c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0c9f0 size=16 callers=0 calls=0
*/
void sub_c0c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0c9f0ULL || rel >= 0xc0ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0ca00 size=240 callers=0 calls=2
   calls: sub_140b690, sub_140bd40
*/
void sub_c0ca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0ca00ULL || rel >= 0xc0caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0caf0 size=736 callers=0 calls=6
   calls: sub_b334c0, sub_b33500, sub_b4c060, sub_bc2290, sub_bca8b0, sub_c19590
*/
void sub_c0caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0caf0ULL || rel >= 0xc0cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0cdd0 size=2832 callers=0 calls=17
   calls: sub_5f19d0, sub_607750, sub_6194a0, sub_987040, sub_b33760, sub_b33c60, sub_b46e30, sub_b48550, sub_b4c060, sub_b8c930, sub_bc2290, sub_bc2530
   ... +5 more
*/
void sub_c0cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0cdd0ULL || rel >= 0xc0d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0d8e0 size=96 callers=0 calls=0
*/
void sub_c0d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0d8e0ULL || rel >= 0xc0d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0d940 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0d940ULL || rel >= 0xc0d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0d9f0 size=96 callers=0 calls=0
*/
void sub_c0d9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0d9f0ULL || rel >= 0xc0da50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0da50 size=96 callers=0 calls=0
*/
void sub_c0da50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0da50ULL || rel >= 0xc0dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0dab0 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0dab0ULL || rel >= 0xc0db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0db60 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0db60ULL || rel >= 0xc0dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0dc10 size=96 callers=0 calls=0
*/
void sub_c0dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0dc10ULL || rel >= 0xc0dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0dc70 size=96 callers=0 calls=0
*/
void sub_c0dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0dc70ULL || rel >= 0xc0dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0dcd0 size=368 callers=0 calls=2
   calls: sub_140b690, sub_140bd40
*/
void sub_c0dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0dcd0ULL || rel >= 0xc0de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0de40 size=688 callers=0 calls=6
   calls: sub_b334c0, sub_b33500, sub_b4c060, sub_bc2290, sub_bca8b0, sub_c19590
*/
void sub_c0de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0de40ULL || rel >= 0xc0e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0e0f0 size=4160 callers=0 calls=22
   calls: sub_12f2b90, sub_12f2c40, sub_59a4f0, sub_5f19d0, sub_607750, sub_6194a0, sub_987040, sub_b33760, sub_b33a30, sub_b33bf0, sub_b33c60, sub_b46e30
   ... +10 more
*/
void sub_c0e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0e0f0ULL || rel >= 0xc0f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f130 size=96 callers=0 calls=0
*/
void sub_c0f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f130ULL || rel >= 0xc0f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f190 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f190ULL || rel >= 0xc0f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f240 size=96 callers=0 calls=0
*/
void sub_c0f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f240ULL || rel >= 0xc0f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f2a0 size=96 callers=0 calls=0
*/
void sub_c0f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f2a0ULL || rel >= 0xc0f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f300 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f300ULL || rel >= 0xc0f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f3b0 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f3b0ULL || rel >= 0xc0f460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f460 size=96 callers=0 calls=0
*/
void sub_c0f460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f460ULL || rel >= 0xc0f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f4c0 size=96 callers=0 calls=0
*/
void sub_c0f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f4c0ULL || rel >= 0xc0f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f520 size=144 callers=0 calls=3
   calls: sub_140b690, sub_140bd40, sub_bfe6e0
*/
void sub_c0f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f520ULL || rel >= 0xc0f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f5b0 size=16 callers=0 calls=0
*/
void sub_c0f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f5b0ULL || rel >= 0xc0f5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f5c0 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0f5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f5c0ULL || rel >= 0xc0f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f670 size=80 callers=0 calls=0
*/
void sub_c0f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f670ULL || rel >= 0xc0f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f6c0 size=16 callers=0 calls=0
*/
void sub_c0f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f6c0ULL || rel >= 0xc0f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f6d0 size=16 callers=0 calls=0
*/
void sub_c0f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f6d0ULL || rel >= 0xc0f6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f6e0 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0f6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f6e0ULL || rel >= 0xc0f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f790 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c0f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f790ULL || rel >= 0xc0f840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f840 size=16 callers=0 calls=0
*/
void sub_c0f840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f840ULL || rel >= 0xc0f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f850 size=16 callers=0 calls=0
*/
void sub_c0f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f850ULL || rel >= 0xc0f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c0f860 size=2448 callers=0 calls=3
   calls: sub_140b690, sub_140bd40, sub_c101f0
   ref: sportball
   ref: netball
   ref: premierball
   ref: fastball
   ref: lureball
   ref: moonball
   ref: parallelball
   ref: loveball
*/
void netball(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0f860ULL || rel >= 0xc101f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c101f0 size=704 callers=26 calls=1
   calls: sub_c110b0
*/
void sub_c101f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc101f0ULL || rel >= 0xc104b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c104b0 size=960 callers=0 calls=6
   calls: sub_b334c0, sub_b334e0, sub_b4c060, sub_bc2290, sub_bca8b0, sub_c19590
*/
void sub_c104b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc104b0ULL || rel >= 0xc10870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c10870 size=1264 callers=0 calls=9
   calls: sub_607750, sub_6194a0, sub_b33760, sub_b33c60, sub_b48550, sub_b4c060, sub_bc2290, sub_bca8b0, sub_bd74d0
*/
void sub_c10870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc10870ULL || rel >= 0xc10d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c10d60 size=240 callers=0 calls=0
*/
void sub_c10d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc10d60ULL || rel >= 0xc10e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c10e50 size=16 callers=0 calls=0
*/
void sub_c10e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc10e50ULL || rel >= 0xc10e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c10e60 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c10e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc10e60ULL || rel >= 0xc10f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c10f10 size=16 callers=0 calls=0
*/
void sub_c10f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc10f10ULL || rel >= 0xc10f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c10f20 size=16 callers=0 calls=0
*/
void sub_c10f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc10f20ULL || rel >= 0xc10f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c10f30 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c10f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc10f30ULL || rel >= 0xc10fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c10fe0 size=176 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c10fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc10fe0ULL || rel >= 0xc11090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11090 size=16 callers=0 calls=0
*/
void sub_c11090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11090ULL || rel >= 0xc110a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c110a0 size=16 callers=0 calls=0
*/
void sub_c110a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc110a0ULL || rel >= 0xc110b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c110b0 size=272 callers=1 calls=0
*/
void sub_c110b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc110b0ULL || rel >= 0xc111c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c111c0 size=704 callers=0 calls=0
*/
void sub_c111c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc111c0ULL || rel >= 0xc11480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11480 size=128 callers=0 calls=2
   calls: sub_140b690, sub_140bcf0
*/
void sub_c11480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11480ULL || rel >= 0xc11500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11500 size=272 callers=0 calls=3
   calls: sub_bc2530, sub_bca8b0, sub_bea510
*/
void sub_c11500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11500ULL || rel >= 0xc11610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11610 size=16 callers=0 calls=0
*/
void sub_c11610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11610ULL || rel >= 0xc11620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11620 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c11620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11620ULL || rel >= 0xc11690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11690 size=16 callers=0 calls=0
*/
void sub_c11690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11690ULL || rel >= 0xc116a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c116a0 size=16 callers=0 calls=0
*/
void sub_c116a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc116a0ULL || rel >= 0xc116b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c116b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c116b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc116b0ULL || rel >= 0xc11720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11720 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c11720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11720ULL || rel >= 0xc11790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11790 size=16 callers=0 calls=0
*/
void sub_c11790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11790ULL || rel >= 0xc117a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c117a0 size=16 callers=0 calls=0
*/
void sub_c117a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc117a0ULL || rel >= 0xc117b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c117b0 size=512 callers=0 calls=4
   calls: sub_14ab0c0, sub_bc2530, sub_bca8b0, sub_bea510
*/
void sub_c117b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc117b0ULL || rel >= 0xc119b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c119b0 size=16 callers=0 calls=0
*/
void sub_c119b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc119b0ULL || rel >= 0xc119c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c119c0 size=16 callers=0 calls=0
*/
void sub_c119c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc119c0ULL || rel >= 0xc119d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c119d0 size=16 callers=0 calls=0
*/
void sub_c119d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc119d0ULL || rel >= 0xc119e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c119e0 size=352 callers=0 calls=2
   calls: sub_140b690, sub_140bc80
*/
void sub_c119e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc119e0ULL || rel >= 0xc11b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11b40 size=128 callers=0 calls=0
*/
void sub_c11b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11b40ULL || rel >= 0xc11bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11bc0 size=16 callers=0 calls=0
*/
void sub_c11bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11bc0ULL || rel >= 0xc11bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11bd0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c11bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11bd0ULL || rel >= 0xc11c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11c40 size=16 callers=0 calls=0
*/
void sub_c11c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11c40ULL || rel >= 0xc11c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11c50 size=16 callers=0 calls=0
*/
void sub_c11c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11c50ULL || rel >= 0xc11c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11c60 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c11c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11c60ULL || rel >= 0xc11cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11cd0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c11cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11cd0ULL || rel >= 0xc11d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11d40 size=16 callers=0 calls=0
*/
void sub_c11d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11d40ULL || rel >= 0xc11d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11d50 size=16 callers=0 calls=0
*/
void sub_c11d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11d50ULL || rel >= 0xc11d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11d60 size=512 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_c11d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11d60ULL || rel >= 0xc11f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11f60 size=16 callers=0 calls=0
*/
void sub_c11f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11f60ULL || rel >= 0xc11f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11f70 size=16 callers=0 calls=0
*/
void sub_c11f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11f70ULL || rel >= 0xc11f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11f80 size=16 callers=0 calls=0
*/
void sub_c11f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11f80ULL || rel >= 0xc11f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c11f90 size=176 callers=0 calls=3
   calls: sub_140b690, sub_140bc80, sub_140bd40
*/
void sub_c11f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc11f90ULL || rel >= 0xc12040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12040 size=208 callers=0 calls=0
*/
void sub_c12040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12040ULL || rel >= 0xc12110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12110 size=16 callers=0 calls=0
*/
void sub_c12110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12110ULL || rel >= 0xc12120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12120 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c12120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12120ULL || rel >= 0xc12190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12190 size=16 callers=0 calls=0
*/
void sub_c12190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12190ULL || rel >= 0xc121a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c121a0 size=16 callers=0 calls=0
*/
void sub_c121a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc121a0ULL || rel >= 0xc121b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c121b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c121b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc121b0ULL || rel >= 0xc12220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12220 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c12220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12220ULL || rel >= 0xc12290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12290 size=16 callers=0 calls=0
*/
void sub_c12290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12290ULL || rel >= 0xc122a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c122a0 size=16 callers=0 calls=0
*/
void sub_c122a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc122a0ULL || rel >= 0xc122b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c122b0 size=720 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_c122b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc122b0ULL || rel >= 0xc12580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12580 size=16 callers=0 calls=0
*/
void sub_c12580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12580ULL || rel >= 0xc12590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12590 size=16 callers=0 calls=0
*/
void sub_c12590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12590ULL || rel >= 0xc125a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c125a0 size=16 callers=0 calls=0
*/
void sub_c125a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc125a0ULL || rel >= 0xc125b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c125b0 size=624 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_c125b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc125b0ULL || rel >= 0xc12820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12820 size=16 callers=0 calls=0
*/
void sub_c12820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12820ULL || rel >= 0xc12830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12830 size=16 callers=0 calls=0
*/
void sub_c12830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12830ULL || rel >= 0xc12840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12840 size=16 callers=0 calls=0
*/
void sub_c12840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12840ULL || rel >= 0xc12850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12850 size=128 callers=0 calls=0
*/
void sub_c12850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12850ULL || rel >= 0xc128d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c128d0 size=16 callers=0 calls=0
*/
void sub_c128d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc128d0ULL || rel >= 0xc128e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c128e0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c128e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc128e0ULL || rel >= 0xc12950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12950 size=16 callers=0 calls=0
*/
void sub_c12950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12950ULL || rel >= 0xc12960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12960 size=16 callers=0 calls=0
*/
void sub_c12960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12960ULL || rel >= 0xc12970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12970 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c12970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12970ULL || rel >= 0xc129e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c129e0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c129e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc129e0ULL || rel >= 0xc12a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12a50 size=16 callers=0 calls=0
*/
void sub_c12a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12a50ULL || rel >= 0xc12a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12a60 size=16 callers=0 calls=0
*/
void sub_c12a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12a60ULL || rel >= 0xc12a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12a70 size=48 callers=0 calls=0
*/
void sub_c12a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12a70ULL || rel >= 0xc12aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12aa0 size=16 callers=0 calls=0
*/
void sub_c12aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12aa0ULL || rel >= 0xc12ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12ab0 size=16 callers=0 calls=0
*/
void sub_c12ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12ab0ULL || rel >= 0xc12ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12ac0 size=16 callers=0 calls=0
*/
void sub_c12ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12ac0ULL || rel >= 0xc12ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12ad0 size=144 callers=0 calls=2
   calls: sub_140b690, sub_140bd40
*/
void sub_c12ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12ad0ULL || rel >= 0xc12b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12b60 size=128 callers=0 calls=0
*/
void sub_c12b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12b60ULL || rel >= 0xc12be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12be0 size=16 callers=0 calls=0
*/
void sub_c12be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12be0ULL || rel >= 0xc12bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12bf0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c12bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12bf0ULL || rel >= 0xc12c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12c60 size=16 callers=0 calls=0
*/
void sub_c12c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12c60ULL || rel >= 0xc12c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12c70 size=16 callers=0 calls=0
*/
void sub_c12c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12c70ULL || rel >= 0xc12c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12c80 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c12c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12c80ULL || rel >= 0xc12cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12cf0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c12cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12cf0ULL || rel >= 0xc12d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12d60 size=16 callers=0 calls=0
*/
void sub_c12d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12d60ULL || rel >= 0xc12d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12d70 size=16 callers=0 calls=0
*/
void sub_c12d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12d70ULL || rel >= 0xc12d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12d80 size=96 callers=0 calls=0
*/
void sub_c12d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12d80ULL || rel >= 0xc12de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12de0 size=16 callers=0 calls=0
*/
void sub_c12de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12de0ULL || rel >= 0xc12df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12df0 size=16 callers=0 calls=0
*/
void sub_c12df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12df0ULL || rel >= 0xc12e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12e00 size=16 callers=0 calls=0
*/
void sub_c12e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12e00ULL || rel >= 0xc12e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12e10 size=96 callers=0 calls=3
   calls: sub_140b690, sub_140bd40, sub_140bd70
*/
void sub_c12e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12e10ULL || rel >= 0xc12e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c12e70 size=912 callers=0 calls=1
   calls: sub_c13640
*/
void sub_c12e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc12e70ULL || rel >= 0xc13200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c13200 size=672 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_c13200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc13200ULL || rel >= 0xc134a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c134a0 size=16 callers=0 calls=0
*/
void sub_c134a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc134a0ULL || rel >= 0xc134b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c134b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c134b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc134b0ULL || rel >= 0xc13520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c13520 size=16 callers=0 calls=0
*/
void sub_c13520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc13520ULL || rel >= 0xc13530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c13530 size=16 callers=0 calls=0
*/
void sub_c13530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc13530ULL || rel >= 0xc13540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c13540 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c13540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc13540ULL || rel >= 0xc135b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c135b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c135b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc135b0ULL || rel >= 0xc13620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c13620 size=16 callers=0 calls=0
*/
void sub_c13620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc13620ULL || rel >= 0xc13630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c13630 size=16 callers=0 calls=0
*/
void sub_c13630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc13630ULL || rel >= 0xc13640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c13640 size=320 callers=2 calls=4
   calls: sub_5e2930, sub_95afb0, sub_c13780, sub_c13bd0
*/
void sub_c13640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc13640ULL || rel >= 0xc13780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c13780 size=1104 callers=1 calls=1
   calls: sub_be32b0
*/
void sub_c13780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc13780ULL || rel >= 0xc13bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c13bd0 size=2192 callers=3 calls=7
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2500, sub_5e6970, sub_64cae0, sub_df90, sub_e840
*/
void sub_c13bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc13bd0ULL || rel >= 0xc14460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14460 size=48 callers=0 calls=0
*/
void sub_c14460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14460ULL || rel >= 0xc14490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14490 size=16 callers=0 calls=0
*/
void sub_c14490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14490ULL || rel >= 0xc144a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c144a0 size=16 callers=0 calls=0
*/
void sub_c144a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc144a0ULL || rel >= 0xc144b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c144b0 size=16 callers=0 calls=0
*/
void sub_c144b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc144b0ULL || rel >= 0xc144c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c144c0 size=16 callers=0 calls=0
*/
void sub_c144c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc144c0ULL || rel >= 0xc144d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c144d0 size=16 callers=0 calls=0
*/
void sub_c144d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc144d0ULL || rel >= 0xc144e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c144e0 size=16 callers=0 calls=0
*/
void sub_c144e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc144e0ULL || rel >= 0xc144f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c144f0 size=16 callers=0 calls=0
*/
void sub_c144f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc144f0ULL || rel >= 0xc14500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14500 size=576 callers=0 calls=3
   calls: sub_620d70, sub_64cb70, sub_bca8b0
*/
void sub_c14500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14500ULL || rel >= 0xc14740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14740 size=16 callers=0 calls=0
*/
void sub_c14740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14740ULL || rel >= 0xc14750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14750 size=16 callers=0 calls=0
*/
void sub_c14750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14750ULL || rel >= 0xc14760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14760 size=16 callers=0 calls=0
*/
void sub_c14760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14760ULL || rel >= 0xc14770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14770 size=80 callers=0 calls=2
   calls: sub_140b6b0, sub_140bd40
*/
void sub_c14770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14770ULL || rel >= 0xc147c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c147c0 size=1424 callers=0 calls=2
   calls: sub_be32b0, sub_ea7620
*/
void sub_c147c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc147c0ULL || rel >= 0xc14d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14d50 size=16 callers=0 calls=0
*/
void sub_c14d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14d50ULL || rel >= 0xc14d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14d60 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c14d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14d60ULL || rel >= 0xc14dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14dd0 size=16 callers=0 calls=0
*/
void sub_c14dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14dd0ULL || rel >= 0xc14de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14de0 size=16 callers=0 calls=0
*/
void sub_c14de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14de0ULL || rel >= 0xc14df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14df0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c14df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14df0ULL || rel >= 0xc14e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14e60 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_c14e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14e60ULL || rel >= 0xc14ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14ed0 size=16 callers=0 calls=0
*/
void sub_c14ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14ed0ULL || rel >= 0xc14ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14ee0 size=16 callers=0 calls=0
*/
void sub_c14ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14ee0ULL || rel >= 0xc14ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14ef0 size=32 callers=0 calls=0
*/
void sub_c14ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14ef0ULL || rel >= 0xc14f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14f10 size=16 callers=0 calls=0
*/
void sub_c14f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14f10ULL || rel >= 0xc14f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14f20 size=16 callers=0 calls=0
*/
void sub_c14f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14f20ULL || rel >= 0xc14f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14f30 size=16 callers=0 calls=0
*/
void sub_c14f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14f30ULL || rel >= 0xc14f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14f40 size=16 callers=0 calls=0
*/
void sub_c14f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14f40ULL || rel >= 0xc14f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14f50 size=16 callers=0 calls=0
*/
void sub_c14f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14f50ULL || rel >= 0xc14f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14f60 size=16 callers=0 calls=0
*/
void sub_c14f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14f60ULL || rel >= 0xc14f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14f70 size=16 callers=0 calls=0
*/
void sub_c14f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14f70ULL || rel >= 0xc14f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14f80 size=80 callers=0 calls=1
   calls: sub_ea8c70
*/
void sub_c14f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14f80ULL || rel >= 0xc14fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14fd0 size=16 callers=0 calls=0
*/
void sub_c14fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14fd0ULL || rel >= 0xc14fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14fe0 size=16 callers=0 calls=0
*/
void sub_c14fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14fe0ULL || rel >= 0xc14ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c14ff0 size=16 callers=0 calls=0
*/
void sub_c14ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc14ff0ULL || rel >= 0xc15000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c15000 size=80 callers=0 calls=1
   calls: sub_ea8c70
*/
void sub_c15000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc15000ULL || rel >= 0xc15050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c15050 size=16 callers=0 calls=0
*/
void sub_c15050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc15050ULL || rel >= 0xc15060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c15060 size=16 callers=0 calls=0
*/
void sub_c15060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc15060ULL || rel >= 0xc15070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c15070 size=16 callers=0 calls=0
*/
void sub_c15070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc15070ULL || rel >= 0xc15080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c15080 size=80 callers=0 calls=2
   calls: sub_ea77b0, sub_ea8c70
*/
void sub_c15080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc15080ULL || rel >= 0xc150d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c150d0 size=16 callers=0 calls=0
*/
void sub_c150d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc150d0ULL || rel >= 0xc150e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c150e0 size=16 callers=0 calls=0
*/
void sub_c150e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc150e0ULL || rel >= 0xc150f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c150f0 size=16 callers=0 calls=0
*/
void sub_c150f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc150f0ULL || rel >= 0xc15100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c15100 size=1440 callers=1 calls=8
   calls: sub_14b31a0, sub_5cf8e0, sub_5cf8f0, sub_5e2350, sub_65d700, sub_65f110, sub_c18a60, sub_e9fad0
*/
void sub_c15100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc15100ULL || rel >= 0xc156a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c156a0 size=2512 callers=0 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_5e2bc0, sub_65f110
*/
void sub_c156a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc156a0ULL || rel >= 0xc16070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c16070 size=16 callers=0 calls=0
*/
void sub_c16070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc16070ULL || rel >= 0xc16080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c16080 size=16 callers=0 calls=0
*/
void sub_c16080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc16080ULL || rel >= 0xc16090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c16090 size=16 callers=0 calls=0
*/
void sub_c16090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc16090ULL || rel >= 0xc160a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c160a0 size=16 callers=0 calls=0
*/
void sub_c160a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc160a0ULL || rel >= 0xc160b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c160b0 size=16 callers=0 calls=0
*/
void sub_c160b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc160b0ULL || rel >= 0xc160c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00c160c0 size=3360 callers=1 calls=3
   calls: sub_12a25b0, sub_c16de0, sub_c17080
*/
void sub_c160c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc160c0ULL || rel >= 0xc16de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

