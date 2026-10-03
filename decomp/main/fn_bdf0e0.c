/* main functions 00bdf0e0..00bf0730 (93 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00bdf0e0 size=16 callers=0 calls=0
*/
void sub_bdf0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf0e0ULL || rel >= 0xbdf0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf0f0 size=16 callers=0 calls=0
*/
void sub_bdf0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf0f0ULL || rel >= 0xbdf100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf100 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdf100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf100ULL || rel >= 0xbdf170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf170 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdf170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf170ULL || rel >= 0xbdf1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf1e0 size=16 callers=0 calls=0
*/
void sub_bdf1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf1e0ULL || rel >= 0xbdf1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf1f0 size=16 callers=0 calls=0
*/
void sub_bdf1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf1f0ULL || rel >= 0xbdf200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf200 size=240 callers=4 calls=1
   calls: sub_bc8a00
*/
void sub_bdf200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf200ULL || rel >= 0xbdf2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf2f0 size=240 callers=0 calls=3
   calls: sub_bc2530, sub_bca8b0, sub_bdf200
*/
void sub_bdf2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf2f0ULL || rel >= 0xbdf3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf3e0 size=16 callers=0 calls=0
*/
void sub_bdf3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf3e0ULL || rel >= 0xbdf3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf3f0 size=16 callers=0 calls=0
*/
void sub_bdf3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf3f0ULL || rel >= 0xbdf400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf400 size=16 callers=0 calls=0
*/
void sub_bdf400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf400ULL || rel >= 0xbdf410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf410 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bdf410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf410ULL || rel >= 0xbdf530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf530 size=16 callers=0 calls=0
*/
void sub_bdf530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf530ULL || rel >= 0xbdf540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf540 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdf540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf540ULL || rel >= 0xbdf5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf5b0 size=64 callers=0 calls=1
   calls: sub_140b6b0
*/
void sub_bdf5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf5b0ULL || rel >= 0xbdf5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf5f0 size=128 callers=0 calls=0
*/
void sub_bdf5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf5f0ULL || rel >= 0xbdf670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf670 size=16 callers=0 calls=0
*/
void sub_bdf670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf670ULL || rel >= 0xbdf680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf680 size=16 callers=0 calls=0
*/
void sub_bdf680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf680ULL || rel >= 0xbdf690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf690 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdf690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf690ULL || rel >= 0xbdf700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf700 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdf700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf700ULL || rel >= 0xbdf770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf770 size=16 callers=0 calls=0
*/
void sub_bdf770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf770ULL || rel >= 0xbdf780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf780 size=16 callers=0 calls=0
*/
void sub_bdf780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf780ULL || rel >= 0xbdf790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf790 size=112 callers=0 calls=2
   calls: sub_bca8b0, sub_c181b0
*/
void sub_bdf790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf790ULL || rel >= 0xbdf800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf800 size=16 callers=0 calls=0
*/
void sub_bdf800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf800ULL || rel >= 0xbdf810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf810 size=16 callers=0 calls=0
*/
void sub_bdf810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf810ULL || rel >= 0xbdf820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf820 size=16 callers=0 calls=0
*/
void sub_bdf820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf820ULL || rel >= 0xbdf830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf830 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bdf830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf830ULL || rel >= 0xbdf940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf940 size=16 callers=0 calls=0
*/
void sub_bdf940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf940ULL || rel >= 0xbdf950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf950 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdf950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf950ULL || rel >= 0xbdf9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf9c0 size=16 callers=0 calls=0
*/
void sub_bdf9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf9c0ULL || rel >= 0xbdf9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdf9d0 size=304 callers=0 calls=0
*/
void sub_bdf9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf9d0ULL || rel >= 0xbdfb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfb00 size=16 callers=0 calls=0
*/
void sub_bdfb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfb00ULL || rel >= 0xbdfb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfb10 size=16 callers=0 calls=0
*/
void sub_bdfb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfb10ULL || rel >= 0xbdfb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfb20 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdfb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfb20ULL || rel >= 0xbdfb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfb90 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdfb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfb90ULL || rel >= 0xbdfc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfc00 size=16 callers=0 calls=0
*/
void sub_bdfc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfc00ULL || rel >= 0xbdfc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfc10 size=16 callers=0 calls=0
*/
void sub_bdfc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfc10ULL || rel >= 0xbdfc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfc20 size=96 callers=0 calls=1
   calls: sub_bca8b0
*/
void sub_bdfc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfc20ULL || rel >= 0xbdfc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfc80 size=16 callers=0 calls=0
*/
void sub_bdfc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfc80ULL || rel >= 0xbdfc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfc90 size=16 callers=0 calls=0
*/
void sub_bdfc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfc90ULL || rel >= 0xbdfca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfca0 size=16 callers=0 calls=0
*/
void sub_bdfca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfca0ULL || rel >= 0xbdfcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfcb0 size=144 callers=0 calls=3
   calls: sub_bca8b0, sub_ea3d10, sub_ea4760
*/
void sub_bdfcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfcb0ULL || rel >= 0xbdfd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfd40 size=16 callers=0 calls=0
*/
void sub_bdfd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfd40ULL || rel >= 0xbdfd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfd50 size=16 callers=0 calls=0
*/
void sub_bdfd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfd50ULL || rel >= 0xbdfd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfd60 size=16 callers=0 calls=0
*/
void sub_bdfd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfd60ULL || rel >= 0xbdfd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfd70 size=96 callers=0 calls=1
   calls: sub_bca8b0
*/
void sub_bdfd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfd70ULL || rel >= 0xbdfdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfdd0 size=16 callers=0 calls=0
*/
void sub_bdfdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfdd0ULL || rel >= 0xbdfde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfde0 size=16 callers=0 calls=0
*/
void sub_bdfde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfde0ULL || rel >= 0xbdfdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfdf0 size=16 callers=0 calls=0
*/
void sub_bdfdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfdf0ULL || rel >= 0xbdfe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdfe00 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_bdfe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdfe00ULL || rel >= 0xbdff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdff10 size=16 callers=0 calls=0
*/
void sub_bdff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdff10ULL || rel >= 0xbdff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdff20 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bdff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdff20ULL || rel >= 0xbdff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdff90 size=16 callers=0 calls=0
*/
void sub_bdff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdff90ULL || rel >= 0xbdffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bdffa0 size=304 callers=0 calls=0
*/
void sub_bdffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdffa0ULL || rel >= 0xbe00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be00d0 size=16 callers=0 calls=0
*/
void sub_be00d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe00d0ULL || rel >= 0xbe00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be00e0 size=16 callers=0 calls=0
*/
void sub_be00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe00e0ULL || rel >= 0xbe00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be00f0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe00f0ULL || rel >= 0xbe0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0160 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0160ULL || rel >= 0xbe01d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be01d0 size=16 callers=0 calls=0
*/
void sub_be01d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe01d0ULL || rel >= 0xbe01e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be01e0 size=16 callers=0 calls=0
*/
void sub_be01e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe01e0ULL || rel >= 0xbe01f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be01f0 size=96 callers=0 calls=1
   calls: sub_bca8b0
*/
void sub_be01f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe01f0ULL || rel >= 0xbe0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0250 size=16 callers=0 calls=0
*/
void sub_be0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0250ULL || rel >= 0xbe0260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0260 size=16 callers=0 calls=0
*/
void sub_be0260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0260ULL || rel >= 0xbe0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0270 size=16 callers=0 calls=0
*/
void sub_be0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0270ULL || rel >= 0xbe0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0280 size=144 callers=0 calls=3
   calls: sub_bca8b0, sub_ea3d10, sub_ea4760
*/
void sub_be0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0280ULL || rel >= 0xbe0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0310 size=16 callers=0 calls=0
*/
void sub_be0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0310ULL || rel >= 0xbe0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0320 size=16 callers=0 calls=0
*/
void sub_be0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0320ULL || rel >= 0xbe0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0330 size=16 callers=0 calls=0
*/
void sub_be0330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0330ULL || rel >= 0xbe0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0340 size=96 callers=0 calls=1
   calls: sub_bca8b0
*/
void sub_be0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0340ULL || rel >= 0xbe03a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be03a0 size=16 callers=0 calls=0
*/
void sub_be03a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe03a0ULL || rel >= 0xbe03b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be03b0 size=16 callers=0 calls=0
*/
void sub_be03b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe03b0ULL || rel >= 0xbe03c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be03c0 size=16 callers=0 calls=0
*/
void sub_be03c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe03c0ULL || rel >= 0xbe03d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be03d0 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be03d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe03d0ULL || rel >= 0xbe04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be04e0 size=16 callers=0 calls=0
*/
void sub_be04e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe04e0ULL || rel >= 0xbe04f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be04f0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be04f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe04f0ULL || rel >= 0xbe0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0560 size=16 callers=0 calls=0
*/
void sub_be0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0560ULL || rel >= 0xbe0570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0570 size=304 callers=0 calls=0
*/
void sub_be0570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0570ULL || rel >= 0xbe06a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be06a0 size=16 callers=0 calls=0
*/
void sub_be06a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe06a0ULL || rel >= 0xbe06b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be06b0 size=16 callers=0 calls=0
*/
void sub_be06b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe06b0ULL || rel >= 0xbe06c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be06c0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be06c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe06c0ULL || rel >= 0xbe0730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0730 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be0730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0730ULL || rel >= 0xbe07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be07a0 size=16 callers=0 calls=0
*/
void sub_be07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe07a0ULL || rel >= 0xbe07b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be07b0 size=16 callers=0 calls=0
*/
void sub_be07b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe07b0ULL || rel >= 0xbe07c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be07c0 size=96 callers=0 calls=1
   calls: sub_bca8b0
*/
void sub_be07c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe07c0ULL || rel >= 0xbe0820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0820 size=16 callers=0 calls=0
*/
void sub_be0820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0820ULL || rel >= 0xbe0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0830 size=16 callers=0 calls=0
*/
void sub_be0830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0830ULL || rel >= 0xbe0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0840 size=16 callers=0 calls=0
*/
void sub_be0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0840ULL || rel >= 0xbe0850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0850 size=192 callers=0 calls=3
   calls: sub_bca8b0, sub_ea3d10, sub_ea4740
*/
void sub_be0850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0850ULL || rel >= 0xbe0910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0910 size=16 callers=0 calls=0
*/
void sub_be0910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0910ULL || rel >= 0xbe0920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0920 size=16 callers=0 calls=0
*/
void sub_be0920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0920ULL || rel >= 0xbe0930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0930 size=16 callers=0 calls=0
*/
void sub_be0930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0930ULL || rel >= 0xbe0940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0940 size=96 callers=0 calls=1
   calls: sub_bca8b0
*/
void sub_be0940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0940ULL || rel >= 0xbe09a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be09a0 size=16 callers=0 calls=0
*/
void sub_be09a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe09a0ULL || rel >= 0xbe09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be09b0 size=16 callers=0 calls=0
*/
void sub_be09b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe09b0ULL || rel >= 0xbe09c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be09c0 size=16 callers=0 calls=0
*/
void sub_be09c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe09c0ULL || rel >= 0xbe09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be09d0 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe09d0ULL || rel >= 0xbe0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0ae0 size=16 callers=0 calls=0
*/
void sub_be0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0ae0ULL || rel >= 0xbe0af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0af0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be0af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0af0ULL || rel >= 0xbe0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0b60 size=16 callers=0 calls=0
*/
void sub_be0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0b60ULL || rel >= 0xbe0b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0b70 size=16 callers=0 calls=0
*/
void sub_be0b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0b70ULL || rel >= 0xbe0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0b80 size=16 callers=0 calls=0
*/
void sub_be0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0b80ULL || rel >= 0xbe0b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0b90 size=16 callers=0 calls=0
*/
void sub_be0b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0b90ULL || rel >= 0xbe0ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0ba0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be0ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0ba0ULL || rel >= 0xbe0c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0c10 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be0c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0c10ULL || rel >= 0xbe0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0c80 size=16 callers=0 calls=0
*/
void sub_be0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0c80ULL || rel >= 0xbe0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0c90 size=16 callers=0 calls=0
*/
void sub_be0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0c90ULL || rel >= 0xbe0ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0ca0 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be0ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0ca0ULL || rel >= 0xbe0db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0db0 size=16 callers=0 calls=0
*/
void sub_be0db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0db0ULL || rel >= 0xbe0dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0dc0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be0dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0dc0ULL || rel >= 0xbe0e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0e30 size=64 callers=0 calls=1
   calls: sub_140b690
*/
void sub_be0e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0e30ULL || rel >= 0xbe0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0e70 size=128 callers=0 calls=0
*/
void sub_be0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0e70ULL || rel >= 0xbe0ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0ef0 size=16 callers=0 calls=0
*/
void sub_be0ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0ef0ULL || rel >= 0xbe0f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0f00 size=16 callers=0 calls=0
*/
void sub_be0f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0f00ULL || rel >= 0xbe0f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0f10 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be0f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0f10ULL || rel >= 0xbe0f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0f80 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be0f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0f80ULL || rel >= 0xbe0ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be0ff0 size=16 callers=0 calls=0
*/
void sub_be0ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0ff0ULL || rel >= 0xbe1000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1000 size=16 callers=0 calls=0
*/
void sub_be1000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1000ULL || rel >= 0xbe1010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1010 size=16 callers=0 calls=0
*/
void sub_be1010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1010ULL || rel >= 0xbe1020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1020 size=16 callers=0 calls=0
*/
void sub_be1020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1020ULL || rel >= 0xbe1030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1030 size=352 callers=0 calls=1
   calls: sub_bca8b0
*/
void sub_be1030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1030ULL || rel >= 0xbe1190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1190 size=16 callers=0 calls=0
*/
void sub_be1190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1190ULL || rel >= 0xbe11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be11a0 size=16 callers=0 calls=0
*/
void sub_be11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe11a0ULL || rel >= 0xbe11b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be11b0 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be11b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe11b0ULL || rel >= 0xbe12c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be12c0 size=16 callers=0 calls=0
*/
void sub_be12c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe12c0ULL || rel >= 0xbe12d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be12d0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be12d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe12d0ULL || rel >= 0xbe1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1340 size=48 callers=0 calls=1
   calls: sub_140b690
*/
void sub_be1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1340ULL || rel >= 0xbe1370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1370 size=16 callers=0 calls=0
*/
void sub_be1370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1370ULL || rel >= 0xbe1380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1380 size=16 callers=0 calls=0
*/
void sub_be1380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1380ULL || rel >= 0xbe1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1390 size=16 callers=0 calls=0
*/
void sub_be1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1390ULL || rel >= 0xbe13a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be13a0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be13a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe13a0ULL || rel >= 0xbe1410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1410 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be1410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1410ULL || rel >= 0xbe1480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1480 size=16 callers=0 calls=0
*/
void sub_be1480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1480ULL || rel >= 0xbe1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1490 size=16 callers=0 calls=0
*/
void sub_be1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1490ULL || rel >= 0xbe14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be14a0 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe14a0ULL || rel >= 0xbe15b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be15b0 size=16 callers=0 calls=0
*/
void sub_be15b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe15b0ULL || rel >= 0xbe15c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be15c0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be15c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe15c0ULL || rel >= 0xbe1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1630 size=32 callers=0 calls=0
*/
void sub_be1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1630ULL || rel >= 0xbe1650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1650 size=208 callers=0 calls=0
*/
void sub_be1650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1650ULL || rel >= 0xbe1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1720 size=16 callers=0 calls=0
*/
void sub_be1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1720ULL || rel >= 0xbe1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1730 size=16 callers=0 calls=0
*/
void sub_be1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1730ULL || rel >= 0xbe1740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1740 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be1740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1740ULL || rel >= 0xbe17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be17b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe17b0ULL || rel >= 0xbe1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1820 size=16 callers=0 calls=0
*/
void sub_be1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1820ULL || rel >= 0xbe1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1830 size=16 callers=0 calls=0
*/
void sub_be1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1830ULL || rel >= 0xbe1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1840 size=16 callers=0 calls=0
*/
void sub_be1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1840ULL || rel >= 0xbe1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1850 size=16 callers=0 calls=0
*/
void sub_be1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1850ULL || rel >= 0xbe1860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1860 size=416 callers=0 calls=4
   calls: sub_be1a00, sub_e44e00, sub_e46d00, sub_e910e0
*/
void sub_be1860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1860ULL || rel >= 0xbe1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1a00 size=272 callers=1 calls=2
   calls: sub_96c590, sub_be1b10
*/
void sub_be1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1a00ULL || rel >= 0xbe1b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1b10 size=352 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_619060, sub_96ccf0
*/
void sub_be1b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1b10ULL || rel >= 0xbe1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1c70 size=16 callers=0 calls=0
*/
void sub_be1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1c70ULL || rel >= 0xbe1c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1c80 size=16 callers=0 calls=0
*/
void sub_be1c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1c80ULL || rel >= 0xbe1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1c90 size=16 callers=0 calls=0
*/
void sub_be1c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1c90ULL || rel >= 0xbe1ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1ca0 size=16 callers=0 calls=0
*/
void sub_be1ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1ca0ULL || rel >= 0xbe1cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1cb0 size=352 callers=0 calls=5
   calls: sub_be1e10, sub_c7a0b0, sub_e44e00, sub_e46d00, sub_e910e0
*/
void sub_be1cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1cb0ULL || rel >= 0xbe1e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1e10 size=256 callers=1 calls=2
   calls: sub_96c590, sub_be1f10
*/
void sub_be1e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1e10ULL || rel >= 0xbe1f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be1f10 size=352 callers=1 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_619060, sub_96ccf0
*/
void sub_be1f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe1f10ULL || rel >= 0xbe2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2070 size=16 callers=0 calls=0
*/
void sub_be2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2070ULL || rel >= 0xbe2080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2080 size=16 callers=0 calls=0
*/
void sub_be2080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2080ULL || rel >= 0xbe2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2090 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2090ULL || rel >= 0xbe21a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be21a0 size=320 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be21a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe21a0ULL || rel >= 0xbe22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be22e0 size=320 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe22e0ULL || rel >= 0xbe2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2420 size=288 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2420ULL || rel >= 0xbe2540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2540 size=256 callers=1 calls=3
   calls: sub_1c0, sub_5e6770, sub_be50b0
*/
void sub_be2540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2540ULL || rel >= 0xbe2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2640 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2640ULL || rel >= 0xbe2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2750 size=16 callers=0 calls=0
*/
void sub_be2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2750ULL || rel >= 0xbe2760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2760 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be2760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2760ULL || rel >= 0xbe27d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be27d0 size=64 callers=0 calls=1
   calls: sub_140b690
*/
void sub_be27d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe27d0ULL || rel >= 0xbe2810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2810 size=288 callers=0 calls=1
   calls: sub_be2a50
*/
void sub_be2810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2810ULL || rel >= 0xbe2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2930 size=16 callers=0 calls=0
*/
void sub_be2930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2930ULL || rel >= 0xbe2940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2940 size=16 callers=0 calls=0
*/
void sub_be2940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2940ULL || rel >= 0xbe2950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2950 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be2950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2950ULL || rel >= 0xbe29c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be29c0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be29c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe29c0ULL || rel >= 0xbe2a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2a30 size=16 callers=0 calls=0
*/
void sub_be2a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2a30ULL || rel >= 0xbe2a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2a40 size=16 callers=0 calls=0
*/
void sub_be2a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2a40ULL || rel >= 0xbe2a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2a50 size=1104 callers=2 calls=1
   calls: sub_be32b0
*/
void sub_be2a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2a50ULL || rel >= 0xbe2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2ea0 size=192 callers=0 calls=3
   calls: sub_bcaef0, sub_be2f70, sub_be30e0
*/
void sub_be2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2ea0ULL || rel >= 0xbe2f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2f60 size=16 callers=0 calls=0
*/
void sub_be2f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2f60ULL || rel >= 0xbe2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be2f70 size=368 callers=7 calls=1
   calls: sub_bc8a00
*/
void sub_be2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2f70ULL || rel >= 0xbe30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be30e0 size=368 callers=6 calls=1
   calls: sub_bc8a00
*/
void sub_be30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe30e0ULL || rel >= 0xbe3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3250 size=16 callers=0 calls=0
*/
void sub_be3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3250ULL || rel >= 0xbe3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3260 size=16 callers=0 calls=0
*/
void sub_be3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3260ULL || rel >= 0xbe3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3270 size=16 callers=0 calls=0
*/
void sub_be3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3270ULL || rel >= 0xbe3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3280 size=16 callers=0 calls=0
*/
void sub_be3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3280ULL || rel >= 0xbe3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3290 size=16 callers=0 calls=0
*/
void sub_be3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3290ULL || rel >= 0xbe32a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be32a0 size=16 callers=0 calls=0
*/
void sub_be32a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe32a0ULL || rel >= 0xbe32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be32b0 size=528 callers=25 calls=1
   calls: sub_be34c0
*/
void sub_be32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe32b0ULL || rel >= 0xbe34c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be34c0 size=304 callers=1 calls=0
*/
void sub_be34c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe34c0ULL || rel >= 0xbe35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be35f0 size=16 callers=0 calls=0
*/
void sub_be35f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe35f0ULL || rel >= 0xbe3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3600 size=16 callers=0 calls=0
*/
void sub_be3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3600ULL || rel >= 0xbe3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3610 size=784 callers=0 calls=3
   calls: sub_bcaef0, sub_be2f70, sub_be30e0
*/
void sub_be3610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3610ULL || rel >= 0xbe3920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3920 size=16 callers=0 calls=0
*/
void sub_be3920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3920ULL || rel >= 0xbe3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3930 size=16 callers=0 calls=0
*/
void sub_be3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3930ULL || rel >= 0xbe3940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3940 size=416 callers=0 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_be3940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3940ULL || rel >= 0xbe3ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3ae0 size=16 callers=0 calls=0
*/
void sub_be3ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3ae0ULL || rel >= 0xbe3af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3af0 size=16 callers=0 calls=0
*/
void sub_be3af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3af0ULL || rel >= 0xbe3b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3b00 size=16 callers=0 calls=0
*/
void sub_be3b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3b00ULL || rel >= 0xbe3b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3b10 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be3b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3b10ULL || rel >= 0xbe3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3c20 size=16 callers=0 calls=0
*/
void sub_be3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3c20ULL || rel >= 0xbe3c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3c30 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be3c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3c30ULL || rel >= 0xbe3ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3ca0 size=64 callers=0 calls=1
   calls: sub_140b690
*/
void sub_be3ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3ca0ULL || rel >= 0xbe3ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3ce0 size=288 callers=0 calls=1
   calls: sub_be3f20
*/
void sub_be3ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3ce0ULL || rel >= 0xbe3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3e00 size=16 callers=0 calls=0
*/
void sub_be3e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3e00ULL || rel >= 0xbe3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3e10 size=16 callers=0 calls=0
*/
void sub_be3e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3e10ULL || rel >= 0xbe3e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3e20 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be3e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3e20ULL || rel >= 0xbe3e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3e90 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be3e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3e90ULL || rel >= 0xbe3f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3f00 size=16 callers=0 calls=0
*/
void sub_be3f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3f00ULL || rel >= 0xbe3f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3f10 size=16 callers=0 calls=0
*/
void sub_be3f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3f10ULL || rel >= 0xbe3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be3f20 size=1104 callers=2 calls=1
   calls: sub_be32b0
*/
void sub_be3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe3f20ULL || rel >= 0xbe4370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4370 size=192 callers=0 calls=3
   calls: sub_bcaef0, sub_be2f70, sub_be30e0
*/
void sub_be4370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4370ULL || rel >= 0xbe4430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4430 size=16 callers=0 calls=0
*/
void sub_be4430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4430ULL || rel >= 0xbe4440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4440 size=16 callers=0 calls=0
*/
void sub_be4440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4440ULL || rel >= 0xbe4450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4450 size=16 callers=0 calls=0
*/
void sub_be4450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4450ULL || rel >= 0xbe4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4460 size=16 callers=0 calls=0
*/
void sub_be4460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4460ULL || rel >= 0xbe4470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4470 size=16 callers=0 calls=0
*/
void sub_be4470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4470ULL || rel >= 0xbe4480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4480 size=16 callers=0 calls=0
*/
void sub_be4480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4480ULL || rel >= 0xbe4490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4490 size=16 callers=0 calls=0
*/
void sub_be4490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4490ULL || rel >= 0xbe44a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be44a0 size=144 callers=0 calls=3
   calls: sub_bc2530, sub_bca8b0, sub_be4540
*/
void sub_be44a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe44a0ULL || rel >= 0xbe4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4530 size=16 callers=0 calls=0
*/
void sub_be4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4530ULL || rel >= 0xbe4540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4540 size=1440 callers=1 calls=5
   calls: sub_bc2530, sub_bca8b0, sub_bcaef0, sub_be2f70, sub_be30e0
*/
void sub_be4540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4540ULL || rel >= 0xbe4ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4ae0 size=16 callers=0 calls=0
*/
void sub_be4ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4ae0ULL || rel >= 0xbe4af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4af0 size=16 callers=0 calls=0
*/
void sub_be4af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4af0ULL || rel >= 0xbe4b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4b00 size=16 callers=0 calls=0
*/
void sub_be4b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4b00ULL || rel >= 0xbe4b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4b10 size=16 callers=0 calls=0
*/
void sub_be4b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4b10ULL || rel >= 0xbe4b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4b20 size=16 callers=0 calls=0
*/
void sub_be4b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4b20ULL || rel >= 0xbe4b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4b30 size=16 callers=0 calls=0
*/
void sub_be4b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4b30ULL || rel >= 0xbe4b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4b40 size=400 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be4b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4b40ULL || rel >= 0xbe4cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4cd0 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be4cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4cd0ULL || rel >= 0xbe4de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4de0 size=272 callers=1 calls=1
   calls: sub_be50b0
*/
void sub_be4de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4de0ULL || rel >= 0xbe4ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4ef0 size=16 callers=0 calls=0
*/
void sub_be4ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4ef0ULL || rel >= 0xbe4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4f00 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4f00ULL || rel >= 0xbe4f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4f70 size=16 callers=0 calls=0
*/
void sub_be4f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4f70ULL || rel >= 0xbe4f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4f80 size=16 callers=0 calls=0
*/
void sub_be4f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4f80ULL || rel >= 0xbe4f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4f90 size=16 callers=0 calls=0
*/
void sub_be4f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4f90ULL || rel >= 0xbe4fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4fa0 size=16 callers=0 calls=0
*/
void sub_be4fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4fa0ULL || rel >= 0xbe4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be4fb0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be4fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe4fb0ULL || rel >= 0xbe5020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be5020 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be5020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe5020ULL || rel >= 0xbe5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be5090 size=16 callers=0 calls=0
*/
void sub_be5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe5090ULL || rel >= 0xbe50a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be50a0 size=16 callers=0 calls=0
*/
void sub_be50a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe50a0ULL || rel >= 0xbe50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be50b0 size=928 callers=97 calls=4
   calls: sub_5d1b50, sub_5d7670, sub_5e2350, sub_be7bc0
*/
void sub_be50b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe50b0ULL || rel >= 0xbe5450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be5450 size=304 callers=0 calls=2
   calls: sub_e736c0, sub_e73870
*/
void sub_be5450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe5450ULL || rel >= 0xbe5580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be5580 size=32 callers=0 calls=0
*/
void sub_be5580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe5580ULL || rel >= 0xbe55a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be55a0 size=16 callers=2 calls=0
*/
void sub_be55a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe55a0ULL || rel >= 0xbe55b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be55b0 size=16 callers=2 calls=0
*/
void sub_be55b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe55b0ULL || rel >= 0xbe55c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be55c0 size=608 callers=0 calls=2
   calls: sub_bca8b0, sub_c180d0
*/
void sub_be55c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe55c0ULL || rel >= 0xbe5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be5820 size=3776 callers=0 calls=16
   calls: sub_13f68d0, sub_17c1a10, sub_5f19d0, sub_620d70, sub_68da30, sub_695420, sub_bc2290, sub_bc2530, sub_bca8b0, sub_bd74d0, sub_be30e0, sub_be66e0
   ... +4 more
*/
void sub_be5820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe5820ULL || rel >= 0xbe66e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be66e0 size=368 callers=1 calls=1
   calls: sub_bc8a00
*/
void sub_be66e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe66e0ULL || rel >= 0xbe6850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be6850 size=1280 callers=1 calls=4
   calls: sub_59b970, sub_607750, sub_65cdb0, sub_967240
*/
void sub_be6850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe6850ULL || rel >= 0xbe6d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be6d50 size=368 callers=1 calls=1
   calls: sub_bc8a00
*/
void sub_be6d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe6d50ULL || rel >= 0xbe6ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be6ec0 size=896 callers=15 calls=7
   calls: sub_bc2530, sub_bca8b0, sub_bcc370, sub_bcc4e0, sub_bdebd0, sub_bdecc0, sub_be8540
*/
void sub_be6ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe6ec0ULL || rel >= 0xbe7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be7240 size=1792 callers=27 calls=7
   calls: sub_607750, sub_bc2530, sub_bca8b0, sub_bcc4e0, sub_bdebd0, sub_bdecc0, sub_be8540
*/
void sub_be7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe7240ULL || rel >= 0xbe7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be7940 size=640 callers=17 calls=6
   calls: sub_607750, sub_b48550, sub_bc2530, sub_bca8b0, sub_bcc370, sub_be7240
*/
void sub_be7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe7940ULL || rel >= 0xbe7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be7bc0 size=464 callers=1 calls=1
   calls: sub_be7d90
*/
void sub_be7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe7bc0ULL || rel >= 0xbe7d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be7d90 size=176 callers=2 calls=2
   calls: sub_5e2350, sub_65d700
*/
void sub_be7d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe7d90ULL || rel >= 0xbe7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be7e40 size=128 callers=0 calls=1
   calls: sub_be8250
*/
void sub_be7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe7e40ULL || rel >= 0xbe7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be7ec0 size=128 callers=0 calls=1
   calls: sub_be8250
*/
void sub_be7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe7ec0ULL || rel >= 0xbe7f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be7f40 size=240 callers=0 calls=0
*/
void sub_be7f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe7f40ULL || rel >= 0xbe8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8030 size=128 callers=0 calls=1
   calls: sub_be8250
*/
void sub_be8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8030ULL || rel >= 0xbe80b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be80b0 size=128 callers=0 calls=1
   calls: sub_be8250
*/
void sub_be80b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe80b0ULL || rel >= 0xbe8130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8130 size=16 callers=0 calls=0
*/
void sub_be8130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8130ULL || rel >= 0xbe8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8140 size=16 callers=0 calls=0
*/
void sub_be8140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8140ULL || rel >= 0xbe8150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8150 size=128 callers=0 calls=1
   calls: sub_be8250
*/
void sub_be8150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8150ULL || rel >= 0xbe81d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be81d0 size=128 callers=0 calls=1
   calls: sub_be8250
*/
void sub_be81d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe81d0ULL || rel >= 0xbe8250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8250 size=304 callers=12 calls=0
*/
void sub_be8250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8250ULL || rel >= 0xbe8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8380 size=32 callers=0 calls=0
*/
void sub_be8380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8380ULL || rel >= 0xbe83a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be83a0 size=16 callers=0 calls=0
*/
void sub_be83a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe83a0ULL || rel >= 0xbe83b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be83b0 size=32 callers=0 calls=0
*/
void sub_be83b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe83b0ULL || rel >= 0xbe83d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be83d0 size=32 callers=0 calls=0
*/
void sub_be83d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe83d0ULL || rel >= 0xbe83f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be83f0 size=336 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bccf80
*/
void sub_be83f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe83f0ULL || rel >= 0xbe8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8540 size=240 callers=4 calls=1
   calls: sub_bc8a00
*/
void sub_be8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8540ULL || rel >= 0xbe8630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8630 size=64 callers=0 calls=1
   calls: sub_140bca0
*/
void sub_be8630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8630ULL || rel >= 0xbe8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8670 size=208 callers=0 calls=0
*/
void sub_be8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8670ULL || rel >= 0xbe8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8740 size=16 callers=0 calls=0
*/
void sub_be8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8740ULL || rel >= 0xbe8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8750 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8750ULL || rel >= 0xbe87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be87c0 size=16 callers=0 calls=0
*/
void sub_be87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe87c0ULL || rel >= 0xbe87d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be87d0 size=16 callers=0 calls=0
*/
void sub_be87d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe87d0ULL || rel >= 0xbe87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be87e0 size=16 callers=0 calls=0
*/
void sub_be87e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe87e0ULL || rel >= 0xbe87f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be87f0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be87f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe87f0ULL || rel >= 0xbe8860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8860 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be8860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8860ULL || rel >= 0xbe88d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be88d0 size=16 callers=0 calls=0
*/
void sub_be88d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe88d0ULL || rel >= 0xbe88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be88e0 size=16 callers=0 calls=0
*/
void sub_be88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe88e0ULL || rel >= 0xbe88f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be88f0 size=128 callers=0 calls=2
   calls: sub_bc2530, sub_bca8b0
*/
void sub_be88f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe88f0ULL || rel >= 0xbe8970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8970 size=16 callers=0 calls=0
*/
void sub_be8970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8970ULL || rel >= 0xbe8980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8980 size=16 callers=0 calls=0
*/
void sub_be8980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8980ULL || rel >= 0xbe8990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8990 size=16 callers=0 calls=0
*/
void sub_be8990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8990ULL || rel >= 0xbe89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be89a0 size=1296 callers=0 calls=3
   calls: sub_65d220, sub_bc2530, sub_bca8b0
*/
void sub_be89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe89a0ULL || rel >= 0xbe8eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8eb0 size=16 callers=0 calls=0
*/
void sub_be8eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8eb0ULL || rel >= 0xbe8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8ec0 size=16 callers=0 calls=0
*/
void sub_be8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8ec0ULL || rel >= 0xbe8ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8ed0 size=16 callers=0 calls=0
*/
void sub_be8ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8ed0ULL || rel >= 0xbe8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be8ee0 size=288 callers=0 calls=5
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_bca8b0, sub_c18450
*/
void sub_be8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe8ee0ULL || rel >= 0xbe9000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9000 size=1744 callers=0 calls=5
   calls: sub_1307dd0, sub_5cfaf0, sub_be32b0, sub_c4ac70, sub_d0c0
*/
void sub_be9000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9000ULL || rel >= 0xbe96d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be96d0 size=240 callers=1 calls=2
   calls: message_wait, sub_bca8b0
*/
void sub_be96d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe96d0ULL || rel >= 0xbe97c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be97c0 size=272 callers=4 calls=5
   calls: L_cursor_00_3, sub_14a91a0, sub_5cfad0, sub_bca8b0, sub_c18130
   ref: message_wait
*/
void message_wait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe97c0ULL || rel >= 0xbe98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be98d0 size=240 callers=1 calls=2
   calls: message_wait, sub_bca8b0
*/
void sub_be98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe98d0ULL || rel >= 0xbe99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be99c0 size=96 callers=0 calls=0
*/
void sub_be99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe99c0ULL || rel >= 0xbe9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9a20 size=96 callers=0 calls=0
*/
void sub_be9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9a20ULL || rel >= 0xbe9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9a80 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9a80ULL || rel >= 0xbe9af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9af0 size=96 callers=0 calls=0
*/
void sub_be9af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9af0ULL || rel >= 0xbe9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9b50 size=96 callers=0 calls=0
*/
void sub_be9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9b50ULL || rel >= 0xbe9bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9bb0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be9bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9bb0ULL || rel >= 0xbe9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9c20 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_be9c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9c20ULL || rel >= 0xbe9c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9c90 size=96 callers=0 calls=0
*/
void sub_be9c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9c90ULL || rel >= 0xbe9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9cf0 size=96 callers=0 calls=0
*/
void sub_be9cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9cf0ULL || rel >= 0xbe9d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9d50 size=16 callers=0 calls=0
*/
void sub_be9d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9d50ULL || rel >= 0xbe9d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9d60 size=16 callers=0 calls=0
*/
void sub_be9d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9d60ULL || rel >= 0xbe9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9d70 size=16 callers=0 calls=0
*/
void sub_be9d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9d70ULL || rel >= 0xbe9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9d80 size=16 callers=0 calls=0
*/
void sub_be9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9d80ULL || rel >= 0xbe9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9d90 size=208 callers=0 calls=2
   calls: sub_14a8b80, sub_bca8b0
*/
void sub_be9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9d90ULL || rel >= 0xbe9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9e60 size=16 callers=0 calls=0
*/
void sub_be9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9e60ULL || rel >= 0xbe9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9e70 size=16 callers=0 calls=0
*/
void sub_be9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9e70ULL || rel >= 0xbe9e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9e80 size=16 callers=0 calls=0
*/
void sub_be9e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9e80ULL || rel >= 0xbe9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9e90 size=192 callers=0 calls=4
   calls: sub_14a8be0, sub_14a9440, sub_14a9580, sub_bca8b0
*/
void sub_be9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9e90ULL || rel >= 0xbe9f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9f50 size=16 callers=0 calls=0
*/
void sub_be9f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9f50ULL || rel >= 0xbe9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9f60 size=16 callers=0 calls=0
*/
void sub_be9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9f60ULL || rel >= 0xbe9f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9f70 size=16 callers=0 calls=0
*/
void sub_be9f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9f70ULL || rel >= 0xbe9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00be9f80 size=144 callers=0 calls=2
   calls: sub_14a8fd0, sub_bca8b0
*/
void sub_be9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9f80ULL || rel >= 0xbea010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea010 size=16 callers=0 calls=0
*/
void sub_bea010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea010ULL || rel >= 0xbea020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea020 size=16 callers=0 calls=0
*/
void sub_bea020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea020ULL || rel >= 0xbea030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea030 size=16 callers=0 calls=0
*/
void sub_bea030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea030ULL || rel >= 0xbea040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea040 size=528 callers=0 calls=9
   calls: L_cursor_00_3, sub_14a8fd0, sub_14a92b0, sub_5cfad0, sub_bca8b0, sub_c18230, sub_c182b0, sub_ea3d10, sub_ea4760
   ref: message_wait
*/
void message_wait_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea040ULL || rel >= 0xbea250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea250 size=16 callers=0 calls=0
*/
void sub_bea250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea250ULL || rel >= 0xbea260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea260 size=16 callers=0 calls=0
*/
void sub_bea260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea260ULL || rel >= 0xbea270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea270 size=16 callers=0 calls=0
*/
void sub_bea270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea270ULL || rel >= 0xbea280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea280 size=176 callers=0 calls=3
   calls: sub_14a8fd0, sub_14a91c0, sub_bca8b0
*/
void sub_bea280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea280ULL || rel >= 0xbea330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea330 size=16 callers=0 calls=0
*/
void sub_bea330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea330ULL || rel >= 0xbea340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea340 size=16 callers=0 calls=0
*/
void sub_bea340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea340ULL || rel >= 0xbea350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea350 size=16 callers=0 calls=0
*/
void sub_bea350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea350ULL || rel >= 0xbea360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea360 size=48 callers=0 calls=0
*/
void sub_bea360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea360ULL || rel >= 0xbea390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea390 size=16 callers=0 calls=0
*/
void sub_bea390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea390ULL || rel >= 0xbea3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea3a0 size=16 callers=0 calls=0
*/
void sub_bea3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea3a0ULL || rel >= 0xbea3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea3b0 size=16 callers=0 calls=0
*/
void sub_bea3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea3b0ULL || rel >= 0xbea3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea3c0 size=64 callers=0 calls=1
   calls: sub_140bcf0
*/
void sub_bea3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea3c0ULL || rel >= 0xbea400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea400 size=272 callers=0 calls=3
   calls: sub_bc2530, sub_bca8b0, sub_bea510
*/
void sub_bea400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea400ULL || rel >= 0xbea510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea510 size=368 callers=8 calls=1
   calls: sub_bc8a00
*/
void sub_bea510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea510ULL || rel >= 0xbea680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea680 size=16 callers=0 calls=0
*/
void sub_bea680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea680ULL || rel >= 0xbea690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea690 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bea690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea690ULL || rel >= 0xbea700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea700 size=16 callers=0 calls=0
*/
void sub_bea700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea700ULL || rel >= 0xbea710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea710 size=16 callers=0 calls=0
*/
void sub_bea710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea710ULL || rel >= 0xbea720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea720 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bea720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea720ULL || rel >= 0xbea790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea790 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bea790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea790ULL || rel >= 0xbea800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea800 size=16 callers=0 calls=0
*/
void sub_bea800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea800ULL || rel >= 0xbea810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea810 size=16 callers=0 calls=0
*/
void sub_bea810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea810ULL || rel >= 0xbea820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea820 size=384 callers=0 calls=5
   calls: sub_14abe00, sub_67bdb0, sub_bc2530, sub_bca8b0, sub_bea510
*/
void sub_bea820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea820ULL || rel >= 0xbea9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea9a0 size=16 callers=0 calls=0
*/
void sub_bea9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea9a0ULL || rel >= 0xbea9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea9b0 size=16 callers=0 calls=0
*/
void sub_bea9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea9b0ULL || rel >= 0xbea9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea9c0 size=16 callers=0 calls=0
*/
void sub_bea9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea9c0ULL || rel >= 0xbea9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bea9d0 size=144 callers=0 calls=2
   calls: sub_140b690, sub_140bc80
*/
void sub_bea9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbea9d0ULL || rel >= 0xbeaa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beaa60 size=208 callers=0 calls=0
*/
void sub_beaa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeaa60ULL || rel >= 0xbeab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beab30 size=16 callers=0 calls=0
*/
void sub_beab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeab30ULL || rel >= 0xbeab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beab40 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_beab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeab40ULL || rel >= 0xbeabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beabb0 size=16 callers=0 calls=0
*/
void sub_beabb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeabb0ULL || rel >= 0xbeabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beabc0 size=16 callers=0 calls=0
*/
void sub_beabc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeabc0ULL || rel >= 0xbeabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beabd0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_beabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeabd0ULL || rel >= 0xbeac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beac40 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_beac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeac40ULL || rel >= 0xbeacb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beacb0 size=16 callers=0 calls=0
*/
void sub_beacb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeacb0ULL || rel >= 0xbeacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beacc0 size=16 callers=0 calls=0
*/
void sub_beacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeacc0ULL || rel >= 0xbeacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beacd0 size=416 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_beacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeacd0ULL || rel >= 0xbeae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beae70 size=16 callers=0 calls=0
*/
void sub_beae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeae70ULL || rel >= 0xbeae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beae80 size=16 callers=0 calls=0
*/
void sub_beae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeae80ULL || rel >= 0xbeae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beae90 size=16 callers=0 calls=0
*/
void sub_beae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeae90ULL || rel >= 0xbeaea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beaea0 size=688 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_beaea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeaea0ULL || rel >= 0xbeb150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beb150 size=16 callers=0 calls=0
*/
void sub_beb150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeb150ULL || rel >= 0xbeb160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beb160 size=16 callers=0 calls=0
*/
void sub_beb160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeb160ULL || rel >= 0xbeb170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beb170 size=16 callers=0 calls=0
*/
void sub_beb170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeb170ULL || rel >= 0xbeb180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beb180 size=208 callers=0 calls=3
   calls: sub_140b690, sub_140bd40, sub_140bd70
*/
void sub_beb180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeb180ULL || rel >= 0xbeb250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beb250 size=3040 callers=0 calls=11
   calls: sub_5dd790, sub_5e2930, sub_5e3870, sub_5e6280, sub_76d0d0, sub_95afb0, sub_96a5a0, sub_bca8b0, sub_be32b0, sub_c178a0, sub_c188d0
   ref: /share/
   ref: bin/archive/demo/share/model/%s.gfpak
*/
void unnamed_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeb250ULL || rel >= 0xbebe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bebe30 size=512 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_bebe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbebe30ULL || rel >= 0xbec030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec030 size=16 callers=0 calls=0
*/
void sub_bec030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec030ULL || rel >= 0xbec040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec040 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bec040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec040ULL || rel >= 0xbec0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec0b0 size=16 callers=0 calls=0
*/
void sub_bec0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec0b0ULL || rel >= 0xbec0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec0c0 size=16 callers=0 calls=0
*/
void sub_bec0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec0c0ULL || rel >= 0xbec0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec0d0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bec0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec0d0ULL || rel >= 0xbec140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec140 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bec140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec140ULL || rel >= 0xbec1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec1b0 size=16 callers=0 calls=0
*/
void sub_bec1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec1b0ULL || rel >= 0xbec1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec1c0 size=16 callers=0 calls=0
*/
void sub_bec1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec1c0ULL || rel >= 0xbec1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec1d0 size=48 callers=0 calls=0
*/
void sub_bec1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec1d0ULL || rel >= 0xbec200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec200 size=16 callers=0 calls=0
*/
void sub_bec200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec200ULL || rel >= 0xbec210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec210 size=16 callers=0 calls=0
*/
void sub_bec210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec210ULL || rel >= 0xbec220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec220 size=16 callers=0 calls=0
*/
void sub_bec220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec220ULL || rel >= 0xbec230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec230 size=1024 callers=0 calls=15
   calls: sub_5e2bc0, sub_5f19d0, sub_618ec0, sub_619060, sub_619300, sub_619490, sub_6194a0, sub_b8ae40, sub_bc2290, sub_bca8b0, sub_bd74d0, sub_c51540
   ... +3 more
*/
void sub_bec230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec230ULL || rel >= 0xbec630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec630 size=16 callers=0 calls=0
*/
void sub_bec630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec630ULL || rel >= 0xbec640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec640 size=16 callers=0 calls=0
*/
void sub_bec640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec640ULL || rel >= 0xbec650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec650 size=16 callers=0 calls=0
*/
void sub_bec650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec650ULL || rel >= 0xbec660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec660 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_bec660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec660ULL || rel >= 0xbec690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec690 size=16 callers=0 calls=0
*/
void sub_bec690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec690ULL || rel >= 0xbec6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec6a0 size=16 callers=0 calls=0
*/
void sub_bec6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec6a0ULL || rel >= 0xbec6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec6b0 size=16 callers=0 calls=0
*/
void sub_bec6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec6b0ULL || rel >= 0xbec6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec6c0 size=48 callers=0 calls=1
   calls: sub_619060
*/
void sub_bec6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec6c0ULL || rel >= 0xbec6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec6f0 size=16 callers=0 calls=0
*/
void sub_bec6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec6f0ULL || rel >= 0xbec700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec700 size=16 callers=0 calls=0
*/
void sub_bec700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec700ULL || rel >= 0xbec710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec710 size=16 callers=0 calls=0
*/
void sub_bec710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec710ULL || rel >= 0xbec720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec720 size=352 callers=0 calls=2
   calls: sub_967240, sub_c51740
*/
void sub_bec720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec720ULL || rel >= 0xbec880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec880 size=16 callers=0 calls=0
*/
void sub_bec880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec880ULL || rel >= 0xbec890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec890 size=16 callers=0 calls=0
*/
void sub_bec890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec890ULL || rel >= 0xbec8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec8a0 size=16 callers=0 calls=0
*/
void sub_bec8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec8a0ULL || rel >= 0xbec8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec8b0 size=80 callers=0 calls=2
   calls: sub_140b690, sub_140bd40
*/
void sub_bec8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec8b0ULL || rel >= 0xbec900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bec900 size=272 callers=0 calls=3
   calls: sub_bc2530, sub_bca8b0, sub_beca10
*/
void sub_bec900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec900ULL || rel >= 0xbeca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beca10 size=368 callers=1 calls=1
   calls: sub_bc8a00
*/
void sub_beca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeca10ULL || rel >= 0xbecb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00becb80 size=16 callers=0 calls=0
*/
void sub_becb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbecb80ULL || rel >= 0xbecb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00becb90 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_becb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbecb90ULL || rel >= 0xbecc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00becc00 size=16 callers=0 calls=0
*/
void sub_becc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbecc00ULL || rel >= 0xbecc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00becc10 size=16 callers=0 calls=0
*/
void sub_becc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbecc10ULL || rel >= 0xbecc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00becc20 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_becc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbecc20ULL || rel >= 0xbecc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00becc90 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_becc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbecc90ULL || rel >= 0xbecd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00becd00 size=16 callers=0 calls=0
*/
void sub_becd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbecd00ULL || rel >= 0xbecd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00becd10 size=16 callers=0 calls=0
*/
void sub_becd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbecd10ULL || rel >= 0xbecd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00becd20 size=208 callers=0 calls=3
   calls: sub_bca8b0, sub_c178b0, sub_c18050
*/
void sub_becd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbecd20ULL || rel >= 0xbecdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00becdf0 size=16 callers=0 calls=0
*/
void sub_becdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbecdf0ULL || rel >= 0xbece00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bece00 size=16 callers=0 calls=0
*/
void sub_bece00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbece00ULL || rel >= 0xbece10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bece10 size=16 callers=0 calls=0
*/
void sub_bece10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbece10ULL || rel >= 0xbece20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bece20 size=96 callers=0 calls=2
   calls: sub_140b690, sub_140bd70
*/
void sub_bece20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbece20ULL || rel >= 0xbece80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bece80 size=2176 callers=0 calls=9
   calls: sub_5d99d0, sub_5e2930, sub_631840, sub_95afb0, sub_9aca80, sub_9ad440, sub_bca8b0, sub_be32b0, sub_c18300
*/
void sub_bece80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbece80ULL || rel >= 0xbed700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bed700 size=416 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_bed700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbed700ULL || rel >= 0xbed8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bed8a0 size=16 callers=0 calls=0
*/
void sub_bed8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbed8a0ULL || rel >= 0xbed8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bed8b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bed8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbed8b0ULL || rel >= 0xbed920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bed920 size=16 callers=0 calls=0
*/
void sub_bed920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbed920ULL || rel >= 0xbed930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bed930 size=16 callers=0 calls=0
*/
void sub_bed930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbed930ULL || rel >= 0xbed940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bed940 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bed940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbed940ULL || rel >= 0xbed9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bed9b0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bed9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbed9b0ULL || rel >= 0xbeda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beda20 size=16 callers=0 calls=0
*/
void sub_beda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeda20ULL || rel >= 0xbeda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beda30 size=16 callers=0 calls=0
*/
void sub_beda30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeda30ULL || rel >= 0xbeda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beda40 size=48 callers=0 calls=0
*/
void sub_beda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeda40ULL || rel >= 0xbeda70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beda70 size=16 callers=0 calls=0
*/
void sub_beda70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeda70ULL || rel >= 0xbeda80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beda80 size=16 callers=0 calls=0
*/
void sub_beda80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeda80ULL || rel >= 0xbeda90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beda90 size=16 callers=0 calls=0
*/
void sub_beda90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeda90ULL || rel >= 0xbedaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bedaa0 size=112 callers=0 calls=4
   calls: nn_ldn_SetStationAcceptPolicy, sub_6323a0, sub_637e80, sub_bd74d0
*/
void sub_bedaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbedaa0ULL || rel >= 0xbedb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bedb10 size=16 callers=0 calls=0
*/
void sub_bedb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbedb10ULL || rel >= 0xbedb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bedb20 size=16 callers=0 calls=0
*/
void sub_bedb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbedb20ULL || rel >= 0xbedb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bedb30 size=16 callers=0 calls=0
*/
void sub_bedb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbedb30ULL || rel >= 0xbedb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bedb40 size=80 callers=0 calls=2
   calls: sub_140b690, sub_140bd70
*/
void sub_bedb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbedb40ULL || rel >= 0xbedb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bedb90 size=1616 callers=0 calls=4
   calls: sub_5e2930, sub_bca8b0, sub_be32b0, sub_c4a100
*/
void sub_bedb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbedb90ULL || rel >= 0xbee1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee1e0 size=384 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_bee1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee1e0ULL || rel >= 0xbee360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee360 size=16 callers=0 calls=0
*/
void sub_bee360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee360ULL || rel >= 0xbee370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee370 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bee370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee370ULL || rel >= 0xbee3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee3e0 size=16 callers=0 calls=0
*/
void sub_bee3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee3e0ULL || rel >= 0xbee3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee3f0 size=16 callers=0 calls=0
*/
void sub_bee3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee3f0ULL || rel >= 0xbee400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee400 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bee400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee400ULL || rel >= 0xbee470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee470 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bee470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee470ULL || rel >= 0xbee4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee4e0 size=16 callers=0 calls=0
*/
void sub_bee4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee4e0ULL || rel >= 0xbee4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee4f0 size=16 callers=0 calls=0
*/
void sub_bee4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee4f0ULL || rel >= 0xbee500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee500 size=48 callers=0 calls=0
*/
void sub_bee500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee500ULL || rel >= 0xbee530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee530 size=16 callers=0 calls=0
*/
void sub_bee530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee530ULL || rel >= 0xbee540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee540 size=16 callers=0 calls=0
*/
void sub_bee540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee540ULL || rel >= 0xbee550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee550 size=16 callers=0 calls=0
*/
void sub_bee550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee550ULL || rel >= 0xbee560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee560 size=672 callers=0 calls=9
   calls: sub_14abc90, sub_14ac3c0, sub_14ad840, sub_683640, sub_683670, sub_685230, sub_bca8b0, sub_bd74d0, sub_c48c70
*/
void sub_bee560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee560ULL || rel >= 0xbee800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee800 size=16 callers=0 calls=0
*/
void sub_bee800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee800ULL || rel >= 0xbee810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee810 size=16 callers=0 calls=0
*/
void sub_bee810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee810ULL || rel >= 0xbee820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee820 size=16 callers=0 calls=0
*/
void sub_bee820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee820ULL || rel >= 0xbee830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee830 size=16 callers=0 calls=0
*/
void sub_bee830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee830ULL || rel >= 0xbee840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee840 size=16 callers=0 calls=0
*/
void sub_bee840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee840ULL || rel >= 0xbee850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee850 size=16 callers=0 calls=0
*/
void sub_bee850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee850ULL || rel >= 0xbee860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee860 size=16 callers=0 calls=0
*/
void sub_bee860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee860ULL || rel >= 0xbee870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee870 size=16 callers=0 calls=0
*/
void sub_bee870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee870ULL || rel >= 0xbee880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee880 size=16 callers=0 calls=0
*/
void sub_bee880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee880ULL || rel >= 0xbee890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee890 size=16 callers=0 calls=0
*/
void sub_bee890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee890ULL || rel >= 0xbee8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee8a0 size=16 callers=0 calls=0
*/
void sub_bee8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee8a0ULL || rel >= 0xbee8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bee8b0 size=1168 callers=0 calls=1
   calls: sub_be32b0
*/
void sub_bee8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbee8b0ULL || rel >= 0xbeed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beed40 size=16 callers=0 calls=0
*/
void sub_beed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeed40ULL || rel >= 0xbeed50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beed50 size=96 callers=0 calls=0
*/
void sub_beed50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeed50ULL || rel >= 0xbeedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beedb0 size=16 callers=0 calls=0
*/
void sub_beedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeedb0ULL || rel >= 0xbeedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beedc0 size=16 callers=0 calls=0
*/
void sub_beedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeedc0ULL || rel >= 0xbeedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beedd0 size=16 callers=0 calls=0
*/
void sub_beedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeedd0ULL || rel >= 0xbeede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beede0 size=16 callers=0 calls=0
*/
void sub_beede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeede0ULL || rel >= 0xbeedf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beedf0 size=16 callers=0 calls=0
*/
void sub_beedf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeedf0ULL || rel >= 0xbeee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beee00 size=16 callers=0 calls=0
*/
void sub_beee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeee00ULL || rel >= 0xbeee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beee10 size=16 callers=0 calls=0
*/
void sub_beee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeee10ULL || rel >= 0xbeee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beee20 size=16 callers=0 calls=0
*/
void sub_beee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeee20ULL || rel >= 0xbeee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beee30 size=16 callers=0 calls=0
*/
void sub_beee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeee30ULL || rel >= 0xbeee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beee40 size=128 callers=0 calls=3
   calls: sub_140b690, sub_140bc80, sub_140bd40
*/
void sub_beee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeee40ULL || rel >= 0xbeeec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beeec0 size=304 callers=0 calls=0
*/
void sub_beeec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeeec0ULL || rel >= 0xbeeff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beeff0 size=16 callers=0 calls=0
*/
void sub_beeff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeeff0ULL || rel >= 0xbef000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef000 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bef000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef000ULL || rel >= 0xbef070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef070 size=16 callers=0 calls=0
*/
void sub_bef070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef070ULL || rel >= 0xbef080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef080 size=16 callers=0 calls=0
*/
void sub_bef080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef080ULL || rel >= 0xbef090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef090 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bef090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef090ULL || rel >= 0xbef100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef100 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bef100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef100ULL || rel >= 0xbef170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef170 size=16 callers=0 calls=0
*/
void sub_bef170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef170ULL || rel >= 0xbef180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef180 size=16 callers=0 calls=0
*/
void sub_bef180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef180ULL || rel >= 0xbef190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef190 size=400 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_bef190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef190ULL || rel >= 0xbef320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef320 size=16 callers=0 calls=0
*/
void sub_bef320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef320ULL || rel >= 0xbef330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef330 size=16 callers=0 calls=0
*/
void sub_bef330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef330ULL || rel >= 0xbef340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef340 size=16 callers=0 calls=0
*/
void sub_bef340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef340ULL || rel >= 0xbef350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef350 size=544 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_bef350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef350ULL || rel >= 0xbef570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef570 size=16 callers=0 calls=0
*/
void sub_bef570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef570ULL || rel >= 0xbef580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef580 size=16 callers=0 calls=0
*/
void sub_bef580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef580ULL || rel >= 0xbef590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef590 size=16 callers=0 calls=0
*/
void sub_bef590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef590ULL || rel >= 0xbef5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef5a0 size=368 callers=0 calls=4
   calls: sub_5f19d0, sub_bd74d0, sub_ed3290, sub_ed32d0
*/
void sub_bef5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef5a0ULL || rel >= 0xbef710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef710 size=16 callers=0 calls=0
*/
void sub_bef710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef710ULL || rel >= 0xbef720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef720 size=16 callers=0 calls=0
*/
void sub_bef720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef720ULL || rel >= 0xbef730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef730 size=16 callers=0 calls=0
*/
void sub_bef730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef730ULL || rel >= 0xbef740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef740 size=336 callers=0 calls=6
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bcf0, sub_140bd40, sub_d0c0
*/
void sub_bef740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef740ULL || rel >= 0xbef890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bef890 size=1312 callers=0 calls=1
   calls: sub_be32b0
*/
void sub_bef890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbef890ULL || rel >= 0xbefdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00befdb0 size=144 callers=0 calls=0
*/
void sub_befdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbefdb0ULL || rel >= 0xbefe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00befe40 size=144 callers=0 calls=0
*/
void sub_befe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbefe40ULL || rel >= 0xbefed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00befed0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_befed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbefed0ULL || rel >= 0xbeff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beff40 size=144 callers=0 calls=0
*/
void sub_beff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeff40ULL || rel >= 0xbeffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00beffd0 size=144 callers=0 calls=0
*/
void sub_beffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbeffd0ULL || rel >= 0xbf0060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0060 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf0060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0060ULL || rel >= 0xbf00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf00d0 size=112 callers=0 calls=1
   calls: sub_bc8a00
*/
void sub_bf00d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf00d0ULL || rel >= 0xbf0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0140 size=144 callers=0 calls=0
*/
void sub_bf0140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0140ULL || rel >= 0xbf01d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf01d0 size=144 callers=0 calls=0
*/
void sub_bf01d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf01d0ULL || rel >= 0xbf0260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0260 size=176 callers=0 calls=3
   calls: sub_bc2530, sub_bca8b0, sub_be2f70
*/
void sub_bf0260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0260ULL || rel >= 0xbf0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0310 size=16 callers=0 calls=0
*/
void sub_bf0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0310ULL || rel >= 0xbf0320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0320 size=16 callers=0 calls=0
*/
void sub_bf0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0320ULL || rel >= 0xbf0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0330 size=16 callers=0 calls=0
*/
void sub_bf0330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0330ULL || rel >= 0xbf0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0340 size=16 callers=0 calls=0
*/
void sub_bf0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0340ULL || rel >= 0xbf0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0350 size=16 callers=0 calls=0
*/
void sub_bf0350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0350ULL || rel >= 0xbf0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0360 size=16 callers=0 calls=0
*/
void sub_bf0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0360ULL || rel >= 0xbf0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0370 size=16 callers=0 calls=0
*/
void sub_bf0370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0370ULL || rel >= 0xbf0380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0380 size=592 callers=0 calls=10
   calls: camp_delicious_2, sub_110c890, sub_1134fa0, sub_11361a0, sub_116a750, sub_bc2530, sub_bca7e0, sub_bca8b0, sub_be2f70, sub_bf05e0
*/
void sub_bf0380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0380ULL || rel >= 0xbf05d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf05d0 size=16 callers=0 calls=0
*/
void sub_bf05d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf05d0ULL || rel >= 0xbf05e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf05e0 size=336 callers=52 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_bf0730
*/
void sub_bf05e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf05e0ULL || rel >= 0xbf0730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00bf0730 size=240 callers=22 calls=1
   calls: sub_bf0820
*/
void sub_bf0730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf0730ULL || rel >= 0xbf0820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

