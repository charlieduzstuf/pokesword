/* main functions 014ddfc0..014f5ef0 (178 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 014ddfc0 size=16 callers=0 calls=0
*/
void sub_14ddfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ddfc0ULL || rel >= 0x14ddfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ddfd0 size=16 callers=0 calls=0
*/
void sub_14ddfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ddfd0ULL || rel >= 0x14ddfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ddfe0 size=32 callers=0 calls=0
*/
void sub_14ddfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ddfe0ULL || rel >= 0x14de000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de000 size=256 callers=2 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_14de000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de000ULL || rel >= 0x14de100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de100 size=448 callers=1 calls=1
   calls: sub_ea03d0
*/
void sub_14de100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de100ULL || rel >= 0x14de2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de2c0 size=96 callers=0 calls=0
*/
void sub_14de2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de2c0ULL || rel >= 0x14de320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de320 size=96 callers=0 calls=0
*/
void sub_14de320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de320ULL || rel >= 0x14de380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de380 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_14de380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de380ULL || rel >= 0x14de3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de3f0 size=16 callers=0 calls=0
*/
void sub_14de3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de3f0ULL || rel >= 0x14de400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de400 size=544 callers=0 calls=4
   calls: sub_672c10, sub_7be520, sub_c3f270, sub_c3fab0
*/
void sub_14de400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de400ULL || rel >= 0x14de620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de620 size=32 callers=0 calls=0
*/
void sub_14de620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de620ULL || rel >= 0x14de640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de640 size=96 callers=0 calls=0
*/
void sub_14de640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de640ULL || rel >= 0x14de6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de6a0 size=96 callers=0 calls=0
*/
void sub_14de6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de6a0ULL || rel >= 0x14de700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de700 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_14de700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de700ULL || rel >= 0x14de770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de770 size=112 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_14de770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de770ULL || rel >= 0x14de7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de7e0 size=96 callers=0 calls=0
*/
void sub_14de7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de7e0ULL || rel >= 0x14de840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de840 size=96 callers=0 calls=0
*/
void sub_14de840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de840ULL || rel >= 0x14de8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de8a0 size=224 callers=1 calls=2
   calls: sub_14de980, sub_e7b660
*/
void sub_14de8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de8a0ULL || rel >= 0x14de980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014de980 size=224 callers=1 calls=3
   calls: sub_14dea60, sub_7c2da0, sub_e7b5e0
*/
void sub_14de980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14de980ULL || rel >= 0x14dea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dea60 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14dea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dea60ULL || rel >= 0x14deb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014deb50 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_14deb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14deb50ULL || rel >= 0x14debd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014debd0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14debd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14debd0ULL || rel >= 0x14ded40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ded40 size=96 callers=0 calls=1
   calls: sub_14def60
*/
void sub_14ded40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ded40ULL || rel >= 0x14deda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014deda0 size=16 callers=0 calls=0
*/
void sub_14deda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14deda0ULL || rel >= 0x14dedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dedb0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_14dedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dedb0ULL || rel >= 0x14dee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dee50 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_14dee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dee50ULL || rel >= 0x14def10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014def10 size=16 callers=0 calls=0
*/
void sub_14def10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14def10ULL || rel >= 0x14def20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014def20 size=16 callers=0 calls=0
*/
void sub_14def20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14def20ULL || rel >= 0x14def30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014def30 size=16 callers=0 calls=0
*/
void sub_14def30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14def30ULL || rel >= 0x14def40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014def40 size=32 callers=0 calls=0
*/
void sub_14def40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14def40ULL || rel >= 0x14def60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014def60 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_14def60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14def60ULL || rel >= 0x14df040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014df040 size=320 callers=2 calls=4
   calls: sub_14df180, sub_14e0cc0, sub_672c10, sub_e7c1f0
*/
void sub_14df040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14df040ULL || rel >= 0x14df180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014df180 size=416 callers=27 calls=1
   calls: sub_c39c40
*/
void sub_14df180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14df180ULL || rel >= 0x14df320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014df320 size=208 callers=1 calls=4
   calls: sub_14df180, sub_e7c1c0, sub_e7c1d0, sub_e7c1f0
*/
void sub_14df320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14df320ULL || rel >= 0x14df3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014df3f0 size=192 callers=1 calls=2
   calls: sub_14df180, sub_e9ddb0
*/
void sub_14df3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14df3f0ULL || rel >= 0x14df4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014df4b0 size=432 callers=1 calls=2
   calls: sub_14df180, sub_14e0b90
*/
void sub_14df4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14df4b0ULL || rel >= 0x14df660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014df660 size=352 callers=1 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e69010
*/
void sub_14df660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14df660ULL || rel >= 0x14df7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014df7c0 size=240 callers=0 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6d440
*/
void sub_14df7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14df7c0ULL || rel >= 0x14df8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014df8b0 size=240 callers=0 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6d490
*/
void sub_14df8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14df8b0ULL || rel >= 0x14df9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014df9a0 size=240 callers=0 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6d480
*/
void sub_14df9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14df9a0ULL || rel >= 0x14dfa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dfa90 size=240 callers=2 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6d4a0
*/
void sub_14dfa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dfa90ULL || rel >= 0x14dfb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dfb80 size=240 callers=2 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e678d0
*/
void sub_14dfb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dfb80ULL || rel >= 0x14dfc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dfc70 size=240 callers=1 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6e8b0
*/
void sub_14dfc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dfc70ULL || rel >= 0x14dfd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dfd60 size=240 callers=1 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6e8c0
*/
void sub_14dfd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dfd60ULL || rel >= 0x14dfe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dfe50 size=256 callers=3 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6e8d0
*/
void sub_14dfe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dfe50ULL || rel >= 0x14dff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014dff50 size=256 callers=1 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6da60
*/
void sub_14dff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14dff50ULL || rel >= 0x14e0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0050 size=256 callers=1 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6dab0
*/
void sub_14e0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0050ULL || rel >= 0x14e0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0150 size=256 callers=1 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6db00
*/
void sub_14e0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0150ULL || rel >= 0x14e0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0250 size=256 callers=1 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6db60
*/
void sub_14e0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0250ULL || rel >= 0x14e0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0350 size=256 callers=24 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6f190
*/
void sub_14e0350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0350ULL || rel >= 0x14e0450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0450 size=256 callers=20 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6f240
*/
void sub_14e0450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0450ULL || rel >= 0x14e0550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0550 size=256 callers=26 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6f260
*/
void sub_14e0550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0550ULL || rel >= 0x14e0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0650 size=256 callers=14 calls=3
   calls: sub_14df180, sub_14e0b90, sub_e6f300
*/
void sub_14e0650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0650ULL || rel >= 0x14e0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0750 size=240 callers=3 calls=2
   calls: sub_14e0450, sub_14e0550
*/
void sub_14e0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0750ULL || rel >= 0x14e0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0840 size=144 callers=2 calls=1
   calls: sub_14e0350
*/
void sub_14e0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0840ULL || rel >= 0x14e08d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e08d0 size=80 callers=4 calls=2
   calls: sub_14df180, sub_e6bed0
*/
void sub_14e08d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e08d0ULL || rel >= 0x14e0920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0920 size=112 callers=1 calls=2
   calls: sub_14df180, sub_e6c010
*/
void sub_14e0920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0920ULL || rel >= 0x14e0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0990 size=80 callers=1 calls=2
   calls: sub_14df180, sub_e6c0c0
*/
void sub_14e0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0990ULL || rel >= 0x14e09e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e09e0 size=80 callers=1 calls=2
   calls: sub_14df180, sub_e6c1b0
*/
void sub_14e09e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e09e0ULL || rel >= 0x14e0a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0a30 size=112 callers=2 calls=2
   calls: sub_14df180, sub_e6c260
*/
void sub_14e0a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0a30ULL || rel >= 0x14e0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0aa0 size=16 callers=0 calls=0
*/
void sub_14e0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0aa0ULL || rel >= 0x14e0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0ab0 size=112 callers=0 calls=0
*/
void sub_14e0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0ab0ULL || rel >= 0x14e0b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0b20 size=112 callers=0 calls=0
*/
void sub_14e0b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0b20ULL || rel >= 0x14e0b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0b90 size=304 callers=30 calls=0
*/
void sub_14e0b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0b90ULL || rel >= 0x14e0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0cc0 size=224 callers=1 calls=2
   calls: sub_14e0da0, sub_e7b660
*/
void sub_14e0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0cc0ULL || rel >= 0x14e0da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0da0 size=224 callers=1 calls=3
   calls: sub_14e0e80, sub_7c2da0, sub_e7b5e0
*/
void sub_14e0da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0da0ULL || rel >= 0x14e0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0e80 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14e0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0e80ULL || rel >= 0x14e0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0f70 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_14e0f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0f70ULL || rel >= 0x14e0ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e0ff0 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_14e0ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e0ff0ULL || rel >= 0x14e1160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1160 size=96 callers=0 calls=1
   calls: sub_14e1380
*/
void sub_14e1160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1160ULL || rel >= 0x14e11c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e11c0 size=16 callers=0 calls=0
*/
void sub_14e11c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e11c0ULL || rel >= 0x14e11d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e11d0 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_14e11d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e11d0ULL || rel >= 0x14e1270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1270 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_14e1270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1270ULL || rel >= 0x14e1330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1330 size=16 callers=0 calls=0
*/
void sub_14e1330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1330ULL || rel >= 0x14e1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1340 size=16 callers=0 calls=0
*/
void sub_14e1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1340ULL || rel >= 0x14e1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1350 size=16 callers=0 calls=0
*/
void sub_14e1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1350ULL || rel >= 0x14e1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1360 size=32 callers=0 calls=0
*/
void sub_14e1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1360ULL || rel >= 0x14e1380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1380 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_14e1380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1380ULL || rel >= 0x14e1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1460 size=128 callers=0 calls=0
*/
void sub_14e1460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1460ULL || rel >= 0x14e14e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e14e0 size=448 callers=1 calls=3
   calls: sub_672980, sub_c39c40, sub_e7c1f0
*/
void sub_14e14e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e14e0ULL || rel >= 0x14e16a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e16a0 size=400 callers=1 calls=4
   calls: sub_c39c40, sub_e7c1c0, sub_e7c1d0, sub_e7c1f0
*/
void sub_14e16a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e16a0ULL || rel >= 0x14e1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1830 size=16 callers=0 calls=0
*/
void sub_14e1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1830ULL || rel >= 0x14e1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1840 size=112 callers=0 calls=0
*/
void sub_14e1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1840ULL || rel >= 0x14e18b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e18b0 size=112 callers=0 calls=0
*/
void sub_14e18b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e18b0ULL || rel >= 0x14e1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1920 size=128 callers=0 calls=0
*/
void sub_14e1920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1920ULL || rel >= 0x14e19a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e19a0 size=96 callers=12 calls=1
   calls: sub_5e2350
*/
void sub_14e19a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e19a0ULL || rel >= 0x14e1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1a00 size=48 callers=776 calls=0
*/
void sub_14e1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1a00ULL || rel >= 0x14e1a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1a30 size=48 callers=275 calls=0
*/
void sub_14e1a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1a30ULL || rel >= 0x14e1a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1a60 size=80 callers=2 calls=0
*/
void sub_14e1a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1a60ULL || rel >= 0x14e1ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1ab0 size=144 callers=3 calls=1
   calls: sub_14e2020
*/
void sub_14e1ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1ab0ULL || rel >= 0x14e1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1b40 size=32 callers=44 calls=0
*/
void sub_14e1b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1b40ULL || rel >= 0x14e1b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1b60 size=16 callers=39 calls=0
*/
void sub_14e1b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1b60ULL || rel >= 0x14e1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1b70 size=48 callers=1 calls=0
*/
void sub_14e1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1b70ULL || rel >= 0x14e1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1ba0 size=192 callers=0 calls=0
*/
void sub_14e1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1ba0ULL || rel >= 0x14e1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1c60 size=16 callers=0 calls=0
*/
void sub_14e1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1c60ULL || rel >= 0x14e1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1c70 size=16 callers=0 calls=0
*/
void sub_14e1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1c70ULL || rel >= 0x14e1c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1c80 size=32 callers=0 calls=0
*/
void sub_14e1c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1c80ULL || rel >= 0x14e1ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1ca0 size=32 callers=0 calls=0
*/
void sub_14e1ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1ca0ULL || rel >= 0x14e1cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1cc0 size=32 callers=0 calls=0
*/
void sub_14e1cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1cc0ULL || rel >= 0x14e1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1ce0 size=16 callers=0 calls=0
*/
void sub_14e1ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1ce0ULL || rel >= 0x14e1cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1cf0 size=16 callers=0 calls=0
*/
void sub_14e1cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1cf0ULL || rel >= 0x14e1d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1d00 size=16 callers=0 calls=0
*/
void sub_14e1d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1d00ULL || rel >= 0x14e1d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1d10 size=16 callers=0 calls=0
*/
void sub_14e1d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1d10ULL || rel >= 0x14e1d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1d20 size=32 callers=0 calls=0
*/
void sub_14e1d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1d20ULL || rel >= 0x14e1d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1d40 size=16 callers=0 calls=0
*/
void sub_14e1d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1d40ULL || rel >= 0x14e1d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1d50 size=16 callers=0 calls=0
*/
void sub_14e1d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1d50ULL || rel >= 0x14e1d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1d60 size=16 callers=0 calls=0
*/
void sub_14e1d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1d60ULL || rel >= 0x14e1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1d70 size=192 callers=0 calls=0
*/
void sub_14e1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1d70ULL || rel >= 0x14e1e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1e30 size=16 callers=0 calls=0
*/
void sub_14e1e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1e30ULL || rel >= 0x14e1e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1e40 size=16 callers=0 calls=0
*/
void sub_14e1e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1e40ULL || rel >= 0x14e1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1e50 size=16 callers=0 calls=0
*/
void sub_14e1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1e50ULL || rel >= 0x14e1e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1e60 size=192 callers=0 calls=0
*/
void sub_14e1e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1e60ULL || rel >= 0x14e1f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1f20 size=16 callers=0 calls=0
*/
void sub_14e1f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1f20ULL || rel >= 0x14e1f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e1f30 size=240 callers=2 calls=0
*/
void sub_14e1f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e1f30ULL || rel >= 0x14e2020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2020 size=416 callers=4 calls=2
   calls: sub_14e1f30, sub_14e2020
*/
void sub_14e2020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2020ULL || rel >= 0x14e21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e21c0 size=416 callers=3 calls=2
   calls: sub_14e1f30, sub_14e21c0
*/
void sub_14e21c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e21c0ULL || rel >= 0x14e2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2360 size=176 callers=3 calls=2
   calls: sub_14e19a0, sub_5cfad0
*/
void sub_14e2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2360ULL || rel >= 0x14e2410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2410 size=16 callers=10 calls=0
*/
void sub_14e2410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2410ULL || rel >= 0x14e2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2420 size=176 callers=0 calls=0
*/
void sub_14e2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2420ULL || rel >= 0x14e24d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e24d0 size=288 callers=0 calls=2
   calls: sub_14e1a60, sub_14e1b60
*/
void sub_14e24d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e24d0ULL || rel >= 0x14e25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e25f0 size=400 callers=0 calls=0
*/
void sub_14e25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e25f0ULL || rel >= 0x14e2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2780 size=64 callers=0 calls=0
*/
void sub_14e2780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2780ULL || rel >= 0x14e27c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e27c0 size=304 callers=0 calls=0
*/
void sub_14e27c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e27c0ULL || rel >= 0x14e28f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e28f0 size=16 callers=0 calls=0
*/
void sub_14e28f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e28f0ULL || rel >= 0x14e2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2900 size=176 callers=0 calls=2
   calls: sub_14e1b60, sub_1502120
*/
void sub_14e2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2900ULL || rel >= 0x14e29b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e29b0 size=32 callers=0 calls=0
*/
void sub_14e29b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e29b0ULL || rel >= 0x14e29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e29d0 size=208 callers=0 calls=0
*/
void sub_14e29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e29d0ULL || rel >= 0x14e2aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2aa0 size=256 callers=0 calls=0
*/
void sub_14e2aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2aa0ULL || rel >= 0x14e2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2ba0 size=16 callers=0 calls=0
*/
void sub_14e2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2ba0ULL || rel >= 0x14e2bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2bb0 size=112 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14e2bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2bb0ULL || rel >= 0x14e2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2c20 size=16 callers=0 calls=0
*/
void sub_14e2c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2c20ULL || rel >= 0x14e2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2c30 size=16 callers=0 calls=0
*/
void sub_14e2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2c30ULL || rel >= 0x14e2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2c40 size=16 callers=0 calls=0
*/
void sub_14e2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2c40ULL || rel >= 0x14e2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2c50 size=16 callers=0 calls=0
*/
void sub_14e2c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2c50ULL || rel >= 0x14e2c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2c60 size=16 callers=0 calls=0
*/
void sub_14e2c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2c60ULL || rel >= 0x14e2c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2c70 size=16 callers=0 calls=0
*/
void sub_14e2c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2c70ULL || rel >= 0x14e2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2c80 size=112 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14e2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2c80ULL || rel >= 0x14e2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2cf0 size=112 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14e2cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2cf0ULL || rel >= 0x14e2d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2d60 size=16 callers=0 calls=0
*/
void sub_14e2d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2d60ULL || rel >= 0x14e2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2d70 size=16 callers=0 calls=0
*/
void sub_14e2d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2d70ULL || rel >= 0x14e2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2d80 size=80 callers=0 calls=1
   calls: sub_14e1b70
*/
void sub_14e2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2d80ULL || rel >= 0x14e2dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2dd0 size=192 callers=0 calls=0
*/
void sub_14e2dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2dd0ULL || rel >= 0x14e2e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2e90 size=112 callers=0 calls=1
   calls: sub_e86260
*/
void sub_14e2e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2e90ULL || rel >= 0x14e2f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2f00 size=16 callers=0 calls=0
*/
void sub_14e2f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2f00ULL || rel >= 0x14e2f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2f10 size=16 callers=0 calls=0
*/
void sub_14e2f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2f10ULL || rel >= 0x14e2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2f20 size=16 callers=0 calls=0
*/
void sub_14e2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2f20ULL || rel >= 0x14e2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2f30 size=16 callers=0 calls=0
*/
void sub_14e2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2f30ULL || rel >= 0x14e2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2f40 size=16 callers=0 calls=0
*/
void sub_14e2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2f40ULL || rel >= 0x14e2f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2f50 size=16 callers=0 calls=0
*/
void sub_14e2f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2f50ULL || rel >= 0x14e2f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2f60 size=16 callers=0 calls=0
*/
void sub_14e2f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2f60ULL || rel >= 0x14e2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e2f70 size=192 callers=0 calls=0
*/
void sub_14e2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e2f70ULL || rel >= 0x14e3030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e3030 size=192 callers=0 calls=0
*/
void sub_14e3030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e3030ULL || rel >= 0x14e30f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e30f0 size=112 callers=0 calls=1
   calls: sub_e86260
*/
void sub_14e30f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e30f0ULL || rel >= 0x14e3160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e3160 size=112 callers=0 calls=1
   calls: sub_e86260
*/
void sub_14e3160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e3160ULL || rel >= 0x14e31d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e31d0 size=192 callers=0 calls=0
*/
void sub_14e31d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e31d0ULL || rel >= 0x14e3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e3290 size=192 callers=0 calls=0
*/
void sub_14e3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e3290ULL || rel >= 0x14e3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e3350 size=800 callers=2 calls=3
   calls: sub_14e19a0, sub_5cfad0, sub_67b990
   ref: Play_UI_common_decide
*/
void Play_UI_common_decide_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e3350ULL || rel >= 0x14e3670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e3670 size=16 callers=55 calls=0
*/
void sub_14e3670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e3670ULL || rel >= 0x14e3680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e3680 size=480 callers=11 calls=1
   calls: sub_5cfad0
*/
void sub_14e3680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e3680ULL || rel >= 0x14e3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e3860 size=80 callers=7 calls=0
   ref: Play_UI_common_decide
*/
void Play_UI_common_decide_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e3860ULL || rel >= 0x14e38b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e38b0 size=304 callers=9 calls=0
   ref: Play_UI_common_decide
*/
void Play_UI_common_decide_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e38b0ULL || rel >= 0x14e39e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e39e0 size=160 callers=5 calls=3
   calls: sub_14e1b60, sub_14e3a80, sub_14e3e60
*/
void sub_14e39e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e39e0ULL || rel >= 0x14e3a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e3a80 size=992 callers=3 calls=0
*/
void sub_14e3a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e3a80ULL || rel >= 0x14e3e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e3e60 size=336 callers=3 calls=3
   calls: sub_14e5880, sub_14f40a0, sub_14f44f0
*/
void sub_14e3e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e3e60ULL || rel >= 0x14e3fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e3fb0 size=144 callers=1 calls=3
   calls: sub_14e1b60, sub_14e3a80, sub_14e3e60
*/
void sub_14e3fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e3fb0ULL || rel >= 0x14e4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4040 size=208 callers=6 calls=3
   calls: sub_14e1b60, sub_14e3a80, sub_14e3e60
*/
void sub_14e4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4040ULL || rel >= 0x14e4110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4110 size=16 callers=3 calls=0
*/
void sub_14e4110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4110ULL || rel >= 0x14e4120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4120 size=32 callers=4 calls=0
*/
void sub_14e4120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4120ULL || rel >= 0x14e4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4140 size=64 callers=1 calls=0
*/
void sub_14e4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4140ULL || rel >= 0x14e4180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4180 size=16 callers=3 calls=0
*/
void sub_14e4180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4180ULL || rel >= 0x14e4190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4190 size=16 callers=1 calls=0
*/
void sub_14e4190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4190ULL || rel >= 0x14e41a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e41a0 size=176 callers=0 calls=1
   calls: sub_14e1a30
   ref: color_select
   ref: color_unselect
*/
void color_unselect_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e41a0ULL || rel >= 0x14e4250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4250 size=784 callers=0 calls=6
   calls: sub_14e1a30, sub_14e1b60, sub_14e4720, sub_14e4a30, sub_14e4bc0, window_height_offset
*/
void sub_14e4250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4250ULL || rel >= 0x14e4560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4560 size=448 callers=1 calls=0
   ref: window_height_offset
   ref: window_width_offset
*/
void window_height_offset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4560ULL || rel >= 0x14e4720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4720 size=512 callers=1 calls=0
*/
void sub_14e4720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4720ULL || rel >= 0x14e4920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4920 size=272 callers=2 calls=0
*/
void sub_14e4920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4920ULL || rel >= 0x14e4a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4a30 size=400 callers=1 calls=1
   calls: sub_14f4ce0
*/
void sub_14e4a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4a30ULL || rel >= 0x14e4bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4bc0 size=368 callers=1 calls=0
*/
void sub_14e4bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4bc0ULL || rel >= 0x14e4d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e4d30 size=720 callers=1 calls=0
*/
void sub_14e4d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e4d30ULL || rel >= 0x14e5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5000 size=64 callers=0 calls=0
*/
void sub_14e5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5000ULL || rel >= 0x14e5040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5040 size=16 callers=0 calls=0
*/
void sub_14e5040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5040ULL || rel >= 0x14e5050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5050 size=800 callers=0 calls=4
   calls: sub_14f4860, sub_14f4cb0, sub_1502120, sub_5cfad0
*/
void sub_14e5050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5050ULL || rel >= 0x14e5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5370 size=848 callers=0 calls=1
   calls: sub_14e5880
*/
void sub_14e5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5370ULL || rel >= 0x14e56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e56c0 size=16 callers=0 calls=0
*/
void sub_14e56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e56c0ULL || rel >= 0x14e56d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e56d0 size=112 callers=0 calls=1
   calls: sub_93c750
*/
void sub_14e56d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e56d0ULL || rel >= 0x14e5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5740 size=16 callers=0 calls=0
*/
void sub_14e5740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5740ULL || rel >= 0x14e5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5750 size=16 callers=0 calls=0
*/
void sub_14e5750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5750ULL || rel >= 0x14e5760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5760 size=16 callers=0 calls=0
*/
void sub_14e5760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5760ULL || rel >= 0x14e5770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5770 size=16 callers=0 calls=0
*/
void sub_14e5770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5770ULL || rel >= 0x14e5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5780 size=112 callers=0 calls=1
   calls: sub_93c750
*/
void sub_14e5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5780ULL || rel >= 0x14e57f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e57f0 size=112 callers=0 calls=1
   calls: sub_93c750
*/
void sub_14e57f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e57f0ULL || rel >= 0x14e5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5860 size=16 callers=0 calls=0
*/
void sub_14e5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5860ULL || rel >= 0x14e5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5870 size=16 callers=0 calls=0
*/
void sub_14e5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5870ULL || rel >= 0x14e5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5880 size=256 callers=5 calls=0
*/
void sub_14e5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5880ULL || rel >= 0x14e5980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5980 size=16 callers=0 calls=0
*/
void sub_14e5980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5980ULL || rel >= 0x14e5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5990 size=192 callers=0 calls=0
*/
void sub_14e5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5990ULL || rel >= 0x14e5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5a50 size=16 callers=0 calls=0
*/
void sub_14e5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5a50ULL || rel >= 0x14e5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5a60 size=16 callers=0 calls=0
*/
void sub_14e5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5a60ULL || rel >= 0x14e5a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5a70 size=16 callers=0 calls=0
*/
void sub_14e5a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5a70ULL || rel >= 0x14e5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5a80 size=16 callers=0 calls=0
*/
void sub_14e5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5a80ULL || rel >= 0x14e5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5a90 size=16 callers=0 calls=0
*/
void sub_14e5a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5a90ULL || rel >= 0x14e5aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5aa0 size=16 callers=0 calls=0
*/
void sub_14e5aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5aa0ULL || rel >= 0x14e5ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5ab0 size=16 callers=0 calls=0
*/
void sub_14e5ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5ab0ULL || rel >= 0x14e5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5ac0 size=16 callers=0 calls=0
*/
void sub_14e5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5ac0ULL || rel >= 0x14e5ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5ad0 size=16 callers=0 calls=0
*/
void sub_14e5ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5ad0ULL || rel >= 0x14e5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5ae0 size=192 callers=0 calls=0
*/
void sub_14e5ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5ae0ULL || rel >= 0x14e5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5ba0 size=192 callers=0 calls=0
*/
void sub_14e5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5ba0ULL || rel >= 0x14e5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5c60 size=16 callers=0 calls=0
*/
void sub_14e5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5c60ULL || rel >= 0x14e5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5c70 size=16 callers=0 calls=0
*/
void sub_14e5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5c70ULL || rel >= 0x14e5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5c80 size=192 callers=0 calls=0
*/
void sub_14e5c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5c80ULL || rel >= 0x14e5d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5d40 size=192 callers=0 calls=0
*/
void sub_14e5d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5d40ULL || rel >= 0x14e5e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e5e00 size=880 callers=3 calls=3
   calls: sub_142a1c0, sub_14e19a0, sub_14e5880
   ref: Play_UI_common_select
*/
void Play_UI_common_select(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e5e00ULL || rel >= 0x14e6170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6170 size=64 callers=2 calls=0
*/
void sub_14e6170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6170ULL || rel >= 0x14e61b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e61b0 size=48 callers=2 calls=1
   calls: sub_14f40a0
*/
void sub_14e61b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e61b0ULL || rel >= 0x14e61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e61e0 size=208 callers=7 calls=1
   calls: sub_14f44f0
*/
void sub_14e61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e61e0ULL || rel >= 0x14e62b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e62b0 size=16 callers=8 calls=0
*/
void sub_14e62b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e62b0ULL || rel >= 0x14e62c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e62c0 size=496 callers=23 calls=1
   calls: sub_14f4510
*/
void sub_14e62c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e62c0ULL || rel >= 0x14e64b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e64b0 size=96 callers=2 calls=0
*/
void sub_14e64b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e64b0ULL || rel >= 0x14e6510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6510 size=48 callers=41 calls=0
*/
void sub_14e6510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6510ULL || rel >= 0x14e6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6540 size=16 callers=15 calls=0
*/
void sub_14e6540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6540ULL || rel >= 0x14e6550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6550 size=144 callers=73 calls=1
   calls: sub_14e8900
*/
void sub_14e6550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6550ULL || rel >= 0x14e65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e65e0 size=528 callers=2 calls=2
   calls: sub_14e9160, sub_14f4510
*/
void sub_14e65e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e65e0ULL || rel >= 0x14e67f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e67f0 size=240 callers=3 calls=2
   calls: sub_14e7470, sub_14e8b30
*/
void sub_14e67f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e67f0ULL || rel >= 0x14e68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e68e0 size=192 callers=14 calls=1
   calls: sub_14e8b30
*/
void sub_14e68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e68e0ULL || rel >= 0x14e69a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e69a0 size=288 callers=7 calls=4
   calls: sub_14e1b60, sub_14e8b30, sub_14e8c20, sub_14e8d60
*/
void sub_14e69a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e69a0ULL || rel >= 0x14e6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6ac0 size=256 callers=3 calls=3
   calls: sub_14e1b60, sub_14e8b30, sub_14e8e90
*/
void sub_14e6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6ac0ULL || rel >= 0x14e6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6bc0 size=400 callers=3 calls=1
   calls: sub_14e8fc0
*/
void sub_14e6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6bc0ULL || rel >= 0x14e6d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6d50 size=64 callers=115 calls=0
*/
void sub_14e6d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6d50ULL || rel >= 0x14e6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6d90 size=64 callers=85 calls=0
*/
void sub_14e6d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6d90ULL || rel >= 0x14e6dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6dd0 size=48 callers=11 calls=0
*/
void sub_14e6dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6dd0ULL || rel >= 0x14e6e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6e00 size=16 callers=0 calls=0
*/
void sub_14e6e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6e00ULL || rel >= 0x14e6e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6e10 size=288 callers=0 calls=3
   calls: sub_142a480, sub_14e7360, sub_14e8b30
*/
void sub_14e6e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6e10ULL || rel >= 0x14e6f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6f30 size=16 callers=0 calls=0
*/
void sub_14e6f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6f30ULL || rel >= 0x14e6f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e6f40 size=672 callers=0 calls=1
   calls: sub_14f4cb0
*/
void sub_14e6f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e6f40ULL || rel >= 0x14e71e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e71e0 size=352 callers=0 calls=4
   calls: sub_14e65e0, sub_14e9160, sub_14f4510, sub_14f4620
*/
void sub_14e71e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e71e0ULL || rel >= 0x14e7340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e7340 size=32 callers=0 calls=0
*/
void sub_14e7340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e7340ULL || rel >= 0x14e7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e7360 size=272 callers=3 calls=2
   calls: sub_14e8b30, sub_14e9340
*/
void sub_14e7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e7360ULL || rel >= 0x14e7470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e7470 size=272 callers=1 calls=2
   calls: sub_14e8b30, sub_14e94b0
*/
void sub_14e7470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e7470ULL || rel >= 0x14e7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e7580 size=576 callers=2 calls=4
   calls: sub_142a660, sub_14e9160, sub_14e9630, sub_14f4510
*/
void sub_14e7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e7580ULL || rel >= 0x14e77c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e77c0 size=464 callers=2 calls=2
   calls: sub_14e9160, sub_14f4510
*/
void sub_14e77c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e77c0ULL || rel >= 0x14e7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e7990 size=528 callers=1 calls=4
   calls: sub_142a660, sub_14e9160, sub_14e9c80, sub_14f4510
*/
void sub_14e7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e7990ULL || rel >= 0x14e7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e7ba0 size=272 callers=2 calls=5
   calls: sub_142a660, sub_14e1b60, sub_14e9160, sub_14e9630, sub_14f4510
*/
void sub_14e7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e7ba0ULL || rel >= 0x14e7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e7cb0 size=256 callers=2 calls=2
   calls: sub_14e9160, sub_14f4510
*/
void sub_14e7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e7cb0ULL || rel >= 0x14e7db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e7db0 size=608 callers=1 calls=6
   calls: sub_14e65e0, sub_14e8b30, sub_14f4cb0, sub_14f4ce0, sub_1502120, sub_5cfad0
*/
void sub_14e7db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e7db0ULL || rel >= 0x14e8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8010 size=32 callers=0 calls=1
   calls: sub_14e7db0
*/
void sub_14e8010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8010ULL || rel >= 0x14e8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8030 size=320 callers=0 calls=4
   calls: sub_14e1b60, sub_14e7990, sub_1502120, sub_5cfad0
*/
void sub_14e8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8030ULL || rel >= 0x14e8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8170 size=16 callers=0 calls=0
*/
void sub_14e8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8170ULL || rel >= 0x14e8180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8180 size=48 callers=0 calls=1
   calls: sub_14e1b60
*/
void sub_14e8180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8180ULL || rel >= 0x14e81b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e81b0 size=48 callers=0 calls=1
   calls: sub_14e1b60
*/
void sub_14e81b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e81b0ULL || rel >= 0x14e81e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e81e0 size=176 callers=0 calls=5
   calls: sub_14e1b60, sub_14e7580, sub_14e77c0, sub_1502120, sub_5cfad0
*/
void sub_14e81e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e81e0ULL || rel >= 0x14e8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8290 size=176 callers=0 calls=5
   calls: sub_14e1b60, sub_14e7580, sub_14e77c0, sub_1502120, sub_5cfad0
*/
void sub_14e8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8290ULL || rel >= 0x14e8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8340 size=144 callers=0 calls=3
   calls: sub_14e1b60, sub_14e7ba0, sub_14e7cb0
*/
void sub_14e8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8340ULL || rel >= 0x14e83d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e83d0 size=144 callers=0 calls=3
   calls: sub_14e1b60, sub_14e7ba0, sub_14e7cb0
*/
void sub_14e83d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e83d0ULL || rel >= 0x14e8460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8460 size=544 callers=0 calls=1
   calls: sub_14e5880
*/
void sub_14e8460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8460ULL || rel >= 0x14e8680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8680 size=16 callers=0 calls=0
*/
void sub_14e8680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8680ULL || rel >= 0x14e8690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8690 size=176 callers=0 calls=1
   calls: sub_e86260
*/
void sub_14e8690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8690ULL || rel >= 0x14e8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8740 size=16 callers=0 calls=0
*/
void sub_14e8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8740ULL || rel >= 0x14e8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8750 size=16 callers=0 calls=0
*/
void sub_14e8750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8750ULL || rel >= 0x14e8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8760 size=176 callers=0 calls=1
   calls: sub_e86260
*/
void sub_14e8760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8760ULL || rel >= 0x14e8810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8810 size=176 callers=0 calls=1
   calls: sub_e86260
*/
void sub_14e8810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8810ULL || rel >= 0x14e88c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e88c0 size=16 callers=0 calls=0
*/
void sub_14e88c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e88c0ULL || rel >= 0x14e88d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e88d0 size=16 callers=0 calls=0
*/
void sub_14e88d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e88d0ULL || rel >= 0x14e88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e88e0 size=16 callers=0 calls=0
*/
void sub_14e88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e88e0ULL || rel >= 0x14e88f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e88f0 size=16 callers=0 calls=0
*/
void sub_14e88f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e88f0ULL || rel >= 0x14e8900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8900 size=320 callers=4 calls=2
   calls: sub_14e8900, sub_14e8a40
*/
void sub_14e8900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8900ULL || rel >= 0x14e8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8a40 size=240 callers=9 calls=1
   calls: sub_e86260
*/
void sub_14e8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8a40ULL || rel >= 0x14e8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8b30 size=240 callers=13 calls=0
*/
void sub_14e8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8b30ULL || rel >= 0x14e8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8c20 size=320 callers=4 calls=2
   calls: sub_14e8a40, sub_14e8c20
*/
void sub_14e8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8c20ULL || rel >= 0x14e8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8d60 size=304 callers=4 calls=2
   calls: sub_14e8a40, sub_14e8d60
*/
void sub_14e8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8d60ULL || rel >= 0x14e8e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8e90 size=304 callers=4 calls=2
   calls: sub_14e8a40, sub_14e8e90
*/
void sub_14e8e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8e90ULL || rel >= 0x14e8fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e8fc0 size=416 callers=1 calls=1
   calls: sub_14e19a0
*/
void sub_14e8fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e8fc0ULL || rel >= 0x14e9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9160 size=480 callers=42 calls=2
   calls: sub_14e9160, sub_e86260
*/
void sub_14e9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9160ULL || rel >= 0x14e9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9340 size=368 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_14e9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9340ULL || rel >= 0x14e94b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e94b0 size=384 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_14e94b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e94b0ULL || rel >= 0x14e9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9630 size=384 callers=3 calls=1
   calls: sub_142a040
*/
void sub_14e9630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9630ULL || rel >= 0x14e97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e97b0 size=240 callers=0 calls=0
*/
void sub_14e97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e97b0ULL || rel >= 0x14e98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e98a0 size=16 callers=0 calls=0
*/
void sub_14e98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e98a0ULL || rel >= 0x14e98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e98b0 size=112 callers=0 calls=1
   calls: sub_142b300
*/
void sub_14e98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e98b0ULL || rel >= 0x14e9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9920 size=128 callers=0 calls=0
*/
void sub_14e9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9920ULL || rel >= 0x14e99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e99a0 size=240 callers=0 calls=0
*/
void sub_14e99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e99a0ULL || rel >= 0x14e9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9a90 size=16 callers=0 calls=0
*/
void sub_14e9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9a90ULL || rel >= 0x14e9aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9aa0 size=112 callers=0 calls=1
   calls: sub_142b300
*/
void sub_14e9aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9aa0ULL || rel >= 0x14e9b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9b10 size=112 callers=0 calls=1
   calls: sub_142b300
*/
void sub_14e9b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9b10ULL || rel >= 0x14e9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9b80 size=240 callers=0 calls=0
*/
void sub_14e9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9b80ULL || rel >= 0x14e9c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9c70 size=16 callers=0 calls=0
*/
void sub_14e9c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9c70ULL || rel >= 0x14e9c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9c80 size=384 callers=1 calls=1
   calls: sub_142a040
*/
void sub_14e9c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9c80ULL || rel >= 0x14e9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9e00 size=256 callers=0 calls=0
*/
void sub_14e9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9e00ULL || rel >= 0x14e9f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014e9f00 size=304 callers=0 calls=1
   calls: sub_5cfad0
   ref: button_icon_A_00^t
   ref: button_icon_B_00^t
   ref: button_icon_stick_00^t
   ref: button_icon_plus_00^t
   ref: button_icon_X_00^t
   ref: button_icon_R_00^t
   ref: button_icon_cap_00^t
   ref: button_icon_Y_00^t
*/
void button_icon_Y_00_t(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14e9f00ULL || rel >= 0x14ea030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ea030 size=1216 callers=2 calls=2
   calls: sub_14e19a0, sub_67b990
*/
void sub_14ea030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ea030ULL || rel >= 0x14ea4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ea4f0 size=384 callers=123 calls=2
   calls: sub_14ea670, sub_67be10
*/
void sub_14ea4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ea4f0ULL || rel >= 0x14ea670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ea670 size=816 callers=1 calls=1
   calls: sub_14eba10
*/
void sub_14ea670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ea670ULL || rel >= 0x14ea9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ea9a0 size=64 callers=187 calls=1
   calls: sub_67bfa0
*/
void sub_14ea9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ea9a0ULL || rel >= 0x14ea9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ea9e0 size=144 callers=4 calls=0
*/
void sub_14ea9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ea9e0ULL || rel >= 0x14eaa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eaa70 size=128 callers=3 calls=0
*/
void sub_14eaa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eaa70ULL || rel >= 0x14eaaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eaaf0 size=128 callers=9 calls=0
*/
void sub_14eaaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eaaf0ULL || rel >= 0x14eab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eab70 size=112 callers=0 calls=0
*/
void sub_14eab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eab70ULL || rel >= 0x14eabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eabe0 size=96 callers=0 calls=1
   calls: sub_14e1b60
*/
void sub_14eabe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eabe0ULL || rel >= 0x14eac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eac40 size=32 callers=0 calls=0
*/
void sub_14eac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eac40ULL || rel >= 0x14eac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eac60 size=16 callers=0 calls=0
*/
void sub_14eac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eac60ULL || rel >= 0x14eac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eac70 size=752 callers=0 calls=2
   calls: sub_14e1b60, sub_1502120
*/
void sub_14eac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eac70ULL || rel >= 0x14eaf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eaf60 size=592 callers=0 calls=0
*/
void sub_14eaf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eaf60ULL || rel >= 0x14eb1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb1b0 size=32 callers=1 calls=0
*/
void sub_14eb1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb1b0ULL || rel >= 0x14eb1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb1d0 size=240 callers=0 calls=1
   calls: sub_14eb900
*/
void sub_14eb1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb1d0ULL || rel >= 0x14eb2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb2c0 size=240 callers=0 calls=1
   calls: sub_14eb900
*/
void sub_14eb2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb2c0ULL || rel >= 0x14eb3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb3b0 size=112 callers=0 calls=1
   calls: sub_93c750
*/
void sub_14eb3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb3b0ULL || rel >= 0x14eb420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb420 size=16 callers=0 calls=0
*/
void sub_14eb420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb420ULL || rel >= 0x14eb430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb430 size=16 callers=0 calls=0
*/
void sub_14eb430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb430ULL || rel >= 0x14eb440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb440 size=240 callers=0 calls=1
   calls: sub_14eb900
*/
void sub_14eb440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb440ULL || rel >= 0x14eb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb530 size=240 callers=0 calls=1
   calls: sub_14eb900
*/
void sub_14eb530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb530ULL || rel >= 0x14eb620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb620 size=112 callers=0 calls=1
   calls: sub_93c750
*/
void sub_14eb620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb620ULL || rel >= 0x14eb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb690 size=112 callers=0 calls=1
   calls: sub_93c750
*/
void sub_14eb690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb690ULL || rel >= 0x14eb700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb700 size=256 callers=0 calls=1
   calls: sub_14eb900
*/
void sub_14eb700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb700ULL || rel >= 0x14eb800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb800 size=256 callers=0 calls=1
   calls: sub_14eb900
*/
void sub_14eb800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb800ULL || rel >= 0x14eb900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eb900 size=272 callers=6 calls=0
*/
void sub_14eb900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eb900ULL || rel >= 0x14eba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eba10 size=1808 callers=3 calls=3
   calls: sub_14eba10, sub_14ec120, sub_14ec2a0
*/
void sub_14eba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eba10ULL || rel >= 0x14ec120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ec120 size=384 callers=4 calls=0
*/
void sub_14ec120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ec120ULL || rel >= 0x14ec2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ec2a0 size=896 callers=2 calls=1
   calls: sub_14ec120
*/
void sub_14ec2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ec2a0ULL || rel >= 0x14ec620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ec620 size=176 callers=2 calls=2
   calls: sub_14e19a0, sub_5cfad0
*/
void sub_14ec620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ec620ULL || rel >= 0x14ec6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ec6d0 size=352 callers=0 calls=2
   calls: sub_14e1b60, sub_1502120
*/
void sub_14ec6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ec6d0ULL || rel >= 0x14ec830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ec830 size=16 callers=0 calls=0
*/
void sub_14ec830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ec830ULL || rel >= 0x14ec840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ec840 size=192 callers=0 calls=1
   calls: sub_14e1b60
*/
void sub_14ec840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ec840ULL || rel >= 0x14ec900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ec900 size=80 callers=0 calls=0
*/
void sub_14ec900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ec900ULL || rel >= 0x14ec950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ec950 size=352 callers=0 calls=0
*/
void sub_14ec950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ec950ULL || rel >= 0x14ecab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ecab0 size=16 callers=0 calls=0
*/
void sub_14ecab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ecab0ULL || rel >= 0x14ecac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ecac0 size=112 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14ecac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ecac0ULL || rel >= 0x14ecb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ecb30 size=16 callers=0 calls=0
*/
void sub_14ecb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ecb30ULL || rel >= 0x14ecb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ecb40 size=16 callers=0 calls=0
*/
void sub_14ecb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ecb40ULL || rel >= 0x14ecb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ecb50 size=112 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14ecb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ecb50ULL || rel >= 0x14ecbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ecbc0 size=112 callers=0 calls=1
   calls: sub_f0ce40
*/
void sub_14ecbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ecbc0ULL || rel >= 0x14ecc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ecc30 size=16 callers=0 calls=0
*/
void sub_14ecc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ecc30ULL || rel >= 0x14ecc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ecc40 size=16 callers=0 calls=0
*/
void sub_14ecc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ecc40ULL || rel >= 0x14ecc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ecc50 size=2368 callers=2 calls=4
   calls: sub_142a1c0, sub_14e19a0, sub_14f7720, sub_5cfad0
*/
void sub_14ecc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ecc50ULL || rel >= 0x14ed590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ed590 size=1120 callers=0 calls=0
*/
void sub_14ed590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ed590ULL || rel >= 0x14ed9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ed9f0 size=16 callers=0 calls=0
*/
void sub_14ed9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ed9f0ULL || rel >= 0x14eda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eda00 size=16 callers=0 calls=0
*/
void sub_14eda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eda00ULL || rel >= 0x14eda10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eda10 size=16 callers=0 calls=0
*/
void sub_14eda10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eda10ULL || rel >= 0x14eda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eda20 size=16 callers=0 calls=0
*/
void sub_14eda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eda20ULL || rel >= 0x14eda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eda30 size=16 callers=0 calls=0
*/
void sub_14eda30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eda30ULL || rel >= 0x14eda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eda40 size=16 callers=0 calls=0
*/
void sub_14eda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eda40ULL || rel >= 0x14eda50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eda50 size=16 callers=0 calls=0
*/
void sub_14eda50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eda50ULL || rel >= 0x14eda60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eda60 size=96 callers=1 calls=0
*/
void sub_14eda60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eda60ULL || rel >= 0x14edac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014edac0 size=544 callers=36 calls=13
   calls: ScrollStartY, sub_14e1a30, sub_14e7360, sub_14edf10, sub_14edfd0, sub_14ee1c0, sub_14ee2b0, sub_14ee480, sub_14f23a0, sub_14f5840, sub_14f5920, sub_14f5c40
   ... +1 more
*/
void sub_14edac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14edac0ULL || rel >= 0x14edce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014edce0 size=560 callers=1 calls=0
   ref: ScrollSpaceY
   ref: ScrollStartX
   ref: ScrollSpaceX
   ref: ScrollStartY
*/
void ScrollStartY(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14edce0ULL || rel >= 0x14edf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014edf10 size=192 callers=1 calls=5
   calls: sub_14e9160, sub_14f76f0, sub_14f7870, sub_14f7a20, sub_14f7a50
*/
void sub_14edf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14edf10ULL || rel >= 0x14edfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014edfd0 size=496 callers=1 calls=5
   calls: sub_14e1a30, sub_14e1b40, sub_14f2a00, sub_14f2c00, sub_14f7ab0
*/
void sub_14edfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14edfd0ULL || rel >= 0x14ee1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ee1c0 size=240 callers=1 calls=2
   calls: sub_14f5350, sub_14f5630
*/
void sub_14ee1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ee1c0ULL || rel >= 0x14ee2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ee2b0 size=464 callers=1 calls=1
   calls: sub_14f7cc0
*/
void sub_14ee2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ee2b0ULL || rel >= 0x14ee480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ee480 size=816 callers=11 calls=5
   calls: sub_14e9160, sub_14f5630, sub_14f5f10, sub_14f79b0, sub_e86130
*/
void sub_14ee480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ee480ULL || rel >= 0x14ee7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ee7b0 size=16 callers=1 calls=0
*/
void sub_14ee7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ee7b0ULL || rel >= 0x14ee7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ee7c0 size=16 callers=1 calls=0
*/
void sub_14ee7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ee7c0ULL || rel >= 0x14ee7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ee7d0 size=96 callers=1 calls=0
*/
void sub_14ee7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ee7d0ULL || rel >= 0x14ee830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ee830 size=208 callers=1 calls=1
   calls: sub_14e8b30
*/
void sub_14ee830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ee830ULL || rel >= 0x14ee900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ee900 size=304 callers=0 calls=4
   calls: sub_14e1b60, sub_14e8b30, sub_14f24e0, sub_14f2620
*/
void sub_14ee900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ee900ULL || rel >= 0x14eea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eea30 size=160 callers=14 calls=0
*/
void sub_14eea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eea30ULL || rel >= 0x14eead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eead0 size=256 callers=11 calls=5
   calls: sub_14ee480, sub_14f2750, sub_14f6350, sub_14f6390, sub_14f7d50
*/
void sub_14eead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eead0ULL || rel >= 0x14eebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eebd0 size=16 callers=21 calls=0
*/
void sub_14eebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eebd0ULL || rel >= 0x14eebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eebe0 size=16 callers=29 calls=0
*/
void sub_14eebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eebe0ULL || rel >= 0x14eebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eebf0 size=16 callers=3 calls=0
*/
void sub_14eebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eebf0ULL || rel >= 0x14eec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eec00 size=112 callers=0 calls=4
   calls: sub_14e2410, sub_14f2890, sub_14f5f10, sub_14f79b0
*/
void sub_14eec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eec00ULL || rel >= 0x14eec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eec70 size=16 callers=1 calls=0
*/
void sub_14eec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eec70ULL || rel >= 0x14eec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eec80 size=16 callers=0 calls=0
*/
void sub_14eec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eec80ULL || rel >= 0x14eec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eec90 size=416 callers=0 calls=6
   calls: sub_14e9160, sub_14f5f10, sub_14f6520, sub_14f79b0, sub_14f7e40, sub_1502120
*/
void sub_14eec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eec90ULL || rel >= 0x14eee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eee30 size=352 callers=0 calls=4
   calls: sub_142a480, sub_14e7360, sub_14e8b30, sub_14eef90
*/
void sub_14eee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eee30ULL || rel >= 0x14eef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014eef90 size=544 callers=1 calls=9
   calls: sub_14e1b60, sub_14efbc0, sub_14efd30, sub_14efe40, sub_14effe0, sub_14f58b0, sub_14f6790, sub_14f79b0, sub_14f7e50
*/
void sub_14eef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14eef90ULL || rel >= 0x14ef1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef1b0 size=48 callers=0 calls=0
*/
void sub_14ef1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef1b0ULL || rel >= 0x14ef1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef1e0 size=16 callers=0 calls=0
*/
void sub_14ef1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef1e0ULL || rel >= 0x14ef1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef1f0 size=896 callers=0 calls=5
   calls: sub_14ef570, sub_14f5930, sub_14f5a60, sub_14f5f30, sub_14f5ff0
*/
void sub_14ef1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef1f0ULL || rel >= 0x14ef570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef570 size=432 callers=8 calls=4
   calls: sub_14f5930, sub_14f5a60, sub_14f5f30, sub_14f5ff0
*/
void sub_14ef570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef570ULL || rel >= 0x14ef720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef720 size=176 callers=0 calls=3
   calls: sub_14e9160, sub_14f5f10, sub_14f79b0
*/
void sub_14ef720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef720ULL || rel >= 0x14ef7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef7d0 size=48 callers=0 calls=0
*/
void sub_14ef7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef7d0ULL || rel >= 0x14ef800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef800 size=80 callers=0 calls=1
   calls: sub_14f5fb0
*/
void sub_14ef800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef800ULL || rel >= 0x14ef850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef850 size=80 callers=0 calls=1
   calls: sub_14f5fb0
*/
void sub_14ef850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef850ULL || rel >= 0x14ef8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef8a0 size=16 callers=0 calls=0
*/
void sub_14ef8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef8a0ULL || rel >= 0x14ef8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef8b0 size=16 callers=0 calls=0
*/
void sub_14ef8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef8b0ULL || rel >= 0x14ef8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef8c0 size=128 callers=0 calls=2
   calls: sub_14e9160, sub_14f79b0
*/
void sub_14ef8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef8c0ULL || rel >= 0x14ef940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef940 size=128 callers=0 calls=2
   calls: sub_14e9160, sub_14f79b0
*/
void sub_14ef940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef940ULL || rel >= 0x14ef9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014ef9c0 size=288 callers=0 calls=4
   calls: sub_14e1a30, sub_14e9160, sub_14f7960, sub_14f79b0
*/
void sub_14ef9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14ef9c0ULL || rel >= 0x14efae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014efae0 size=16 callers=0 calls=0
*/
void sub_14efae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14efae0ULL || rel >= 0x14efaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014efaf0 size=192 callers=0 calls=4
   calls: sub_14e1a30, sub_14e9160, sub_14f7700, sub_14f79b0
*/
void sub_14efaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14efaf0ULL || rel >= 0x14efbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014efbb0 size=16 callers=0 calls=0
*/
void sub_14efbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14efbb0ULL || rel >= 0x14efbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014efbc0 size=368 callers=1 calls=5
   calls: sub_142a660, sub_14e1a30, sub_14e9160, sub_14f3500, sub_14f79b0
*/
void sub_14efbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14efbc0ULL || rel >= 0x14efd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014efd30 size=272 callers=1 calls=4
   calls: sub_14e1a30, sub_14e9160, sub_14f7700, sub_14f79b0
*/
void sub_14efd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14efd30ULL || rel >= 0x14efe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014efe40 size=416 callers=1 calls=2
   calls: sub_142a660, sub_14f3680
*/
void sub_14efe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14efe40ULL || rel >= 0x14effe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014effe0 size=384 callers=1 calls=10
   calls: sub_14e1a30, sub_14ee480, sub_14f56e0, sub_14f5840, sub_14f5920, sub_14f5a10, sub_14f5c40, sub_14f5f10, sub_14f7e40, sub_14f8040
*/
void sub_14effe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14effe0ULL || rel >= 0x14f0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f0160 size=544 callers=2 calls=10
   calls: sub_14ee480, sub_14f0380, sub_14f0640, sub_14f0840, sub_14f0cb0, sub_14f5930, sub_14f59d0, sub_14f5b70, sub_14f5f10, sub_1502120
*/
void sub_14f0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f0160ULL || rel >= 0x14f0380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f0380 size=384 callers=1 calls=11
   calls: sub_14e1a30, sub_14e1ab0, sub_14e1b60, sub_14e9160, sub_14f5630, sub_14f5c40, sub_14f5ea0, sub_14f5f10, sub_14f5fb0, sub_14f79b0, sub_14f7e50
*/
void sub_14f0380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f0380ULL || rel >= 0x14f0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f0500 size=320 callers=0 calls=8
   calls: sub_14e1a30, sub_14e1b60, sub_14e9160, sub_14ee480, sub_14f59d0, sub_14f5ef0, sub_14f79b0, sub_14f7e40
*/
void sub_14f0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f0500ULL || rel >= 0x14f0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f0640 size=400 callers=1 calls=8
   calls: sub_14e1ab0, sub_14e1b60, sub_14ee480, sub_14f5a10, sub_14f5c40, sub_14f5ef0, sub_14f7e50, sub_1502120
*/
void sub_14f0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f0640ULL || rel >= 0x14f07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f07d0 size=112 callers=0 calls=3
   calls: sub_14e1b60, sub_14ee480, sub_14f7e40
*/
void sub_14f07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f07d0ULL || rel >= 0x14f0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f0840 size=336 callers=1 calls=8
   calls: sub_14e1a30, sub_14e1ab0, sub_14e1b60, sub_14f5c40, sub_14f5ea0, sub_14f5f10, sub_14f5fb0, sub_14f7e50
*/
void sub_14f0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f0840ULL || rel >= 0x14f0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f0990 size=800 callers=0 calls=14
   calls: sub_14e1a30, sub_14e1b60, sub_14ee480, sub_14f5630, sub_14f5a10, sub_14f5c40, sub_14f5ea0, sub_14f5f10, sub_14f5fb0, sub_14f7e40, sub_14f7e50, sub_14f7f60
   ... +2 more
*/
void sub_14f0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f0990ULL || rel >= 0x14f0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f0cb0 size=624 callers=1 calls=14
   calls: sub_14e1b40, sub_14e9160, sub_14ee480, sub_14f5a10, sub_14f5b60, sub_14f5c60, sub_14f5e30, sub_14f5f10, sub_14f5fb0, sub_14f60c0, sub_14f6320, sub_14f79b0
   ... +2 more
*/
void sub_14f0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f0cb0ULL || rel >= 0x14f0f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f0f20 size=784 callers=2 calls=6
   calls: sub_142a660, sub_14e9160, sub_14f3200, sub_14f3380, sub_14f5f10, sub_14f79b0
*/
void sub_14f0f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f0f20ULL || rel >= 0x14f1230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1230 size=608 callers=2 calls=4
   calls: sub_14e1a30, sub_14e9160, sub_14f5f10, sub_14f79b0
*/
void sub_14f1230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1230ULL || rel >= 0x14f1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1490 size=512 callers=2 calls=4
   calls: sub_142a660, sub_14e9160, sub_14f3380, sub_14f79b0
*/
void sub_14f1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1490ULL || rel >= 0x14f1690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1690 size=432 callers=2 calls=3
   calls: sub_14e1a30, sub_14e9160, sub_14f79b0
*/
void sub_14f1690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1690ULL || rel >= 0x14f1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1840 size=16 callers=36 calls=0
*/
void sub_14f1840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1840ULL || rel >= 0x14f1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1850 size=16 callers=36 calls=0
*/
void sub_14f1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1850ULL || rel >= 0x14f1860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1860 size=16 callers=7 calls=0
*/
void sub_14f1860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1860ULL || rel >= 0x14f1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1870 size=96 callers=33 calls=0
*/
void sub_14f1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1870ULL || rel >= 0x14f18d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f18d0 size=128 callers=0 calls=2
   calls: sub_14f0160, sub_14f8040
*/
void sub_14f18d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f18d0ULL || rel >= 0x14f1950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1950 size=128 callers=0 calls=2
   calls: sub_14f0160, sub_14f8040
*/
void sub_14f1950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1950ULL || rel >= 0x14f19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f19d0 size=544 callers=1 calls=7
   calls: sub_14e1a30, sub_14e1b60, sub_14e9160, sub_14f5f10, sub_14f79b0, sub_1502120, sub_5cfad0
*/
void sub_14f19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f19d0ULL || rel >= 0x14f1bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1bf0 size=32 callers=0 calls=1
   calls: sub_14f19d0
*/
void sub_14f1bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1bf0ULL || rel >= 0x14f1c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1c10 size=48 callers=0 calls=1
   calls: sub_14e1b60
*/
void sub_14f1c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1c10ULL || rel >= 0x14f1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1c40 size=48 callers=0 calls=1
   calls: sub_14e1b60
*/
void sub_14f1c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1c40ULL || rel >= 0x14f1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1c70 size=160 callers=0 calls=5
   calls: sub_14e1b60, sub_14f0f20, sub_14f1230, sub_1502120, sub_5cfad0
*/
void sub_14f1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1c70ULL || rel >= 0x14f1d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1d10 size=160 callers=0 calls=5
   calls: sub_14e1b60, sub_14f0f20, sub_14f1230, sub_1502120, sub_5cfad0
*/
void sub_14f1d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1d10ULL || rel >= 0x14f1db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1db0 size=160 callers=0 calls=3
   calls: sub_14e1b60, sub_14f1490, sub_14f1690
*/
void sub_14f1db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1db0ULL || rel >= 0x14f1e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1e50 size=160 callers=0 calls=3
   calls: sub_14e1b60, sub_14f1490, sub_14f1690
*/
void sub_14f1e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1e50ULL || rel >= 0x14f1ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1ef0 size=16 callers=5 calls=0
*/
void sub_14f1ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1ef0ULL || rel >= 0x14f1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1f00 size=48 callers=15 calls=1
   calls: sub_14f79b0
*/
void sub_14f1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1f00ULL || rel >= 0x14f1f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1f30 size=176 callers=0 calls=1
   calls: sub_e86260
*/
void sub_14f1f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1f30ULL || rel >= 0x14f1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f1fe0 size=176 callers=0 calls=1
   calls: sub_e86260
*/
void sub_14f1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f1fe0ULL || rel >= 0x14f2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2090 size=176 callers=0 calls=1
   calls: sub_e86260
*/
void sub_14f2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2090ULL || rel >= 0x14f2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2140 size=192 callers=0 calls=0
*/
void sub_14f2140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2140ULL || rel >= 0x14f2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2200 size=176 callers=0 calls=0
*/
void sub_14f2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2200ULL || rel >= 0x14f22b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f22b0 size=48 callers=0 calls=0
*/
void sub_14f22b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f22b0ULL || rel >= 0x14f22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f22e0 size=16 callers=0 calls=0
*/
void sub_14f22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f22e0ULL || rel >= 0x14f22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f22f0 size=16 callers=0 calls=0
*/
void sub_14f22f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f22f0ULL || rel >= 0x14f2300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2300 size=16 callers=0 calls=0
*/
void sub_14f2300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2300ULL || rel >= 0x14f2310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2310 size=32 callers=0 calls=0
*/
void sub_14f2310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2310ULL || rel >= 0x14f2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2330 size=16 callers=0 calls=0
*/
void sub_14f2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2330ULL || rel >= 0x14f2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2340 size=16 callers=0 calls=0
*/
void sub_14f2340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2340ULL || rel >= 0x14f2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2350 size=16 callers=0 calls=0
*/
void sub_14f2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2350ULL || rel >= 0x14f2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2360 size=16 callers=0 calls=0
*/
void sub_14f2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2360ULL || rel >= 0x14f2370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2370 size=16 callers=0 calls=0
*/
void sub_14f2370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2370ULL || rel >= 0x14f2380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2380 size=16 callers=0 calls=0
*/
void sub_14f2380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2380ULL || rel >= 0x14f2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2390 size=16 callers=0 calls=0
*/
void sub_14f2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2390ULL || rel >= 0x14f23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f23a0 size=320 callers=4 calls=2
   calls: sub_14e8a40, sub_14f23a0
*/
void sub_14f23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f23a0ULL || rel >= 0x14f24e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f24e0 size=320 callers=4 calls=2
   calls: sub_14e8a40, sub_14f24e0
*/
void sub_14f24e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f24e0ULL || rel >= 0x14f2620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2620 size=304 callers=4 calls=2
   calls: sub_14e8a40, sub_14f2620
*/
void sub_14f2620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2620ULL || rel >= 0x14f2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2750 size=320 callers=4 calls=2
   calls: sub_14e8a40, sub_14f2750
*/
void sub_14f2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2750ULL || rel >= 0x14f2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2890 size=368 callers=4 calls=2
   calls: sub_14e8a40, sub_14f2890
*/
void sub_14f2890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2890ULL || rel >= 0x14f2a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2a00 size=512 callers=1 calls=0
*/
void sub_14f2a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2a00ULL || rel >= 0x14f2c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2c00 size=512 callers=5 calls=3
   calls: sub_14f2c00, sub_14f2e00, sub_e86260
*/
void sub_14f2c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2c00ULL || rel >= 0x14f2e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2e00 size=320 callers=1 calls=0
*/
void sub_14f2e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2e00ULL || rel >= 0x14f2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f2f40 size=464 callers=0 calls=0
*/
void sub_14f2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f2f40ULL || rel >= 0x14f3110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3110 size=48 callers=0 calls=0
*/
void sub_14f3110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3110ULL || rel >= 0x14f3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3140 size=16 callers=0 calls=0
*/
void sub_14f3140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3140ULL || rel >= 0x14f3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3150 size=32 callers=0 calls=0
*/
void sub_14f3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3150ULL || rel >= 0x14f3170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3170 size=32 callers=0 calls=0
*/
void sub_14f3170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3170ULL || rel >= 0x14f3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3190 size=32 callers=0 calls=0
*/
void sub_14f3190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3190ULL || rel >= 0x14f31b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f31b0 size=16 callers=0 calls=0
*/
void sub_14f31b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f31b0ULL || rel >= 0x14f31c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f31c0 size=32 callers=0 calls=0
*/
void sub_14f31c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f31c0ULL || rel >= 0x14f31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f31e0 size=32 callers=0 calls=0
*/
void sub_14f31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f31e0ULL || rel >= 0x14f3200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3200 size=384 callers=1 calls=1
   calls: sub_142a040
*/
void sub_14f3200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3200ULL || rel >= 0x14f3380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3380 size=384 callers=2 calls=1
   calls: sub_142a040
*/
void sub_14f3380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3380ULL || rel >= 0x14f3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3500 size=384 callers=1 calls=1
   calls: sub_142a040
*/
void sub_14f3500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3500ULL || rel >= 0x14f3680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3680 size=320 callers=1 calls=2
   calls: sub_142a040, sub_14f37c0
*/
void sub_14f3680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3680ULL || rel >= 0x14f37c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f37c0 size=192 callers=2 calls=4
   calls: sub_14e1a30, sub_14e9160, sub_14f5ef0, sub_14f79b0
*/
void sub_14f37c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f37c0ULL || rel >= 0x14f3880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3880 size=192 callers=0 calls=0
*/
void sub_14f3880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3880ULL || rel >= 0x14f3940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3940 size=768 callers=0 calls=6
   calls: sub_142a1b0, sub_14e1a30, sub_14e9160, sub_14f37c0, sub_14f6740, sub_14f79b0
*/
void sub_14f3940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3940ULL || rel >= 0x14f3c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3c40 size=192 callers=0 calls=0
*/
void sub_14f3c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3c40ULL || rel >= 0x14f3d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3d00 size=192 callers=0 calls=0
*/
void sub_14f3d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3d00ULL || rel >= 0x14f3dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3dc0 size=192 callers=0 calls=0
*/
void sub_14f3dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3dc0ULL || rel >= 0x14f3e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3e80 size=192 callers=0 calls=0
*/
void sub_14f3e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3e80ULL || rel >= 0x14f3f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f3f40 size=304 callers=0 calls=3
   calls: sub_14e8b30, sub_14f5f10, sub_14f79b0
*/
void sub_14f3f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f3f40ULL || rel >= 0x14f4070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4070 size=16 callers=0 calls=0
*/
void sub_14f4070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4070ULL || rel >= 0x14f4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4080 size=16 callers=0 calls=0
*/
void sub_14f4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4080ULL || rel >= 0x14f4090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4090 size=16 callers=0 calls=0
*/
void sub_14f4090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4090ULL || rel >= 0x14f40a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f40a0 size=816 callers=2 calls=0
*/
void sub_14f40a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f40a0ULL || rel >= 0x14f43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f43d0 size=288 callers=0 calls=1
   calls: sub_14f4d80
*/
void sub_14f43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f43d0ULL || rel >= 0x14f44f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f44f0 size=32 callers=2 calls=0
*/
void sub_14f44f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f44f0ULL || rel >= 0x14f4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4510 size=32 callers=14 calls=0
*/
void sub_14f4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4510ULL || rel >= 0x14f4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4530 size=176 callers=0 calls=0
*/
void sub_14f4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4530ULL || rel >= 0x14f45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f45e0 size=32 callers=0 calls=0
*/
void sub_14f45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f45e0ULL || rel >= 0x14f4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4600 size=32 callers=0 calls=0
*/
void sub_14f4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4600ULL || rel >= 0x14f4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4620 size=576 callers=1 calls=0
*/
void sub_14f4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4620ULL || rel >= 0x14f4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4860 size=48 callers=4 calls=1
   calls: sub_14f4890
*/
void sub_14f4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4860ULL || rel >= 0x14f4890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4890 size=1056 callers=3 calls=0
*/
void sub_14f4890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4890ULL || rel >= 0x14f4cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4cb0 size=48 callers=7 calls=1
   calls: sub_14f4890
*/
void sub_14f4cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4cb0ULL || rel >= 0x14f4ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4ce0 size=80 callers=2 calls=1
   calls: sub_14f4890
*/
void sub_14f4ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4ce0ULL || rel >= 0x14f4d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4d30 size=48 callers=0 calls=1
   calls: sub_14e5880
*/
void sub_14f4d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4d30ULL || rel >= 0x14f4d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4d60 size=16 callers=0 calls=0
*/
void sub_14f4d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4d60ULL || rel >= 0x14f4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4d70 size=16 callers=0 calls=0
*/
void sub_14f4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4d70ULL || rel >= 0x14f4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4d80 size=464 callers=1 calls=0
*/
void sub_14f4d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4d80ULL || rel >= 0x14f4f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4f50 size=48 callers=0 calls=0
*/
void sub_14f4f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4f50ULL || rel >= 0x14f4f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f4f80 size=128 callers=0 calls=0
*/
void sub_14f4f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f4f80ULL || rel >= 0x14f5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5000 size=80 callers=0 calls=0
*/
void sub_14f5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5000ULL || rel >= 0x14f5050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5050 size=16 callers=0 calls=0
*/
void sub_14f5050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5050ULL || rel >= 0x14f5060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5060 size=16 callers=0 calls=0
*/
void sub_14f5060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5060ULL || rel >= 0x14f5070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5070 size=16 callers=0 calls=0
*/
void sub_14f5070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5070ULL || rel >= 0x14f5080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5080 size=16 callers=0 calls=0
*/
void sub_14f5080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5080ULL || rel >= 0x14f5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5090 size=16 callers=0 calls=0
*/
void sub_14f5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5090ULL || rel >= 0x14f50a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f50a0 size=32 callers=0 calls=0
*/
void sub_14f50a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f50a0ULL || rel >= 0x14f50c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f50c0 size=80 callers=0 calls=0
*/
void sub_14f50c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f50c0ULL || rel >= 0x14f5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5110 size=80 callers=0 calls=0
*/
void sub_14f5110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5110ULL || rel >= 0x14f5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5160 size=16 callers=0 calls=0
*/
void sub_14f5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5160ULL || rel >= 0x14f5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5170 size=16 callers=0 calls=0
*/
void sub_14f5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5170ULL || rel >= 0x14f5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5180 size=80 callers=0 calls=0
*/
void sub_14f5180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5180ULL || rel >= 0x14f51d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f51d0 size=80 callers=0 calls=0
*/
void sub_14f51d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f51d0ULL || rel >= 0x14f5220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5220 size=304 callers=0 calls=0
*/
void sub_14f5220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5220ULL || rel >= 0x14f5350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5350 size=320 callers=2 calls=1
   calls: sub_14f5490
*/
void sub_14f5350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5350ULL || rel >= 0x14f5490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5490 size=416 callers=4 calls=0
*/
void sub_14f5490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5490ULL || rel >= 0x14f5630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5630 size=176 callers=4 calls=1
   calls: sub_14f5490
*/
void sub_14f5630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5630ULL || rel >= 0x14f56e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f56e0 size=352 callers=1 calls=1
   calls: sub_14f5490
*/
void sub_14f56e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f56e0ULL || rel >= 0x14f5840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5840 size=112 callers=2 calls=0
*/
void sub_14f5840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5840ULL || rel >= 0x14f58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f58b0 size=112 callers=2 calls=0
*/
void sub_14f58b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f58b0ULL || rel >= 0x14f5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5920 size=16 callers=2 calls=0
*/
void sub_14f5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5920ULL || rel >= 0x14f5930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5930 size=160 callers=6 calls=0
*/
void sub_14f5930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5930ULL || rel >= 0x14f59d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f59d0 size=64 callers=2 calls=0
*/
void sub_14f59d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f59d0ULL || rel >= 0x14f5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5a10 size=80 callers=5 calls=0
*/
void sub_14f5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5a10ULL || rel >= 0x14f5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5a60 size=256 callers=5 calls=0
*/
void sub_14f5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5a60ULL || rel >= 0x14f5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5b60 size=16 callers=2 calls=0
*/
void sub_14f5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5b60ULL || rel >= 0x14f5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5b70 size=208 callers=1 calls=0
*/
void sub_14f5b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5b70ULL || rel >= 0x14f5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5c40 size=32 callers=13 calls=0
*/
void sub_14f5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5c40ULL || rel >= 0x14f5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5c60 size=16 callers=2 calls=0
*/
void sub_14f5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5c60ULL || rel >= 0x14f5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5c70 size=448 callers=1 calls=0
*/
void sub_14f5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5c70ULL || rel >= 0x14f5e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5e30 size=112 callers=2 calls=0
*/
void sub_14f5e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5e30ULL || rel >= 0x14f5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5ea0 size=80 callers=3 calls=0
*/
void sub_14f5ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5ea0ULL || rel >= 0x14f5ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 014f5ef0 size=32 callers=5 calls=0
*/
void sub_14f5ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x14f5ef0ULL || rel >= 0x14f5f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

