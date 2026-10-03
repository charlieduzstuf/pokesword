/* main functions 00ed3290..00ef02e0 (117 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00ed3290 size=64 callers=96 calls=0
*/
void sub_ed3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3290ULL || rel >= 0xed32d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed32d0 size=32 callers=112 calls=0
*/
void sub_ed32d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed32d0ULL || rel >= 0xed32f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed32f0 size=16 callers=18 calls=0
*/
void sub_ed32f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed32f0ULL || rel >= 0xed3300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3300 size=128 callers=0 calls=3
   calls: sub_6829a0, sub_682dd0, u_ColorBuffer0
*/
void sub_ed3300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3300ULL || rel >= 0xed3380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3380 size=48 callers=1 calls=0
*/
void sub_ed3380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3380ULL || rel >= 0xed33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed33b0 size=32 callers=7 calls=0
*/
void sub_ed33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed33b0ULL || rel >= 0xed33d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed33d0 size=16 callers=1 calls=0
*/
void sub_ed33d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed33d0ULL || rel >= 0xed33e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed33e0 size=272 callers=0 calls=6
   calls: sub_63b210, sub_63d6d0, sub_63d820, sub_6829a0, sub_682dd0, sub_69a220
*/
void sub_ed33e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed33e0ULL || rel >= 0xed34f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed34f0 size=48 callers=15 calls=0
*/
void sub_ed34f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed34f0ULL || rel >= 0xed3520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3520 size=48 callers=2 calls=0
*/
void sub_ed3520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3520ULL || rel >= 0xed3550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3550 size=256 callers=4 calls=1
   calls: u_FalloffLut
*/
void sub_ed3550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3550ULL || rel >= 0xed3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3650 size=16 callers=6 calls=0
*/
void sub_ed3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3650ULL || rel >= 0xed3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3660 size=464 callers=0 calls=7
   calls: sub_63b210, sub_63d6d0, sub_63d820, sub_6829a0, sub_682dd0, sub_69a210, u_MaskBuffer
*/
void sub_ed3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3660ULL || rel >= 0xed3830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3830 size=16 callers=8 calls=0
*/
void sub_ed3830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3830ULL || rel >= 0xed3840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3840 size=224 callers=0 calls=6
   calls: sub_63b210, sub_63d820, sub_6829a0, sub_682dd0, sub_69a210, u_MaskBuffer
*/
void sub_ed3840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3840ULL || rel >= 0xed3920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3920 size=16 callers=14 calls=0
*/
void sub_ed3920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3920ULL || rel >= 0xed3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3930 size=16 callers=7 calls=0
*/
void sub_ed3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3930ULL || rel >= 0xed3940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3940 size=32 callers=6 calls=0
*/
void sub_ed3940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3940ULL || rel >= 0xed3960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3960 size=224 callers=1 calls=0
*/
void sub_ed3960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3960ULL || rel >= 0xed3a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3a40 size=160 callers=1 calls=1
   calls: sub_645e20
*/
void sub_ed3a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3a40ULL || rel >= 0xed3ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3ae0 size=16 callers=2 calls=0
*/
void sub_ed3ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3ae0ULL || rel >= 0xed3af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3af0 size=848 callers=1 calls=2
   calls: sub_645e20, u_Source1
*/
void sub_ed3af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3af0ULL || rel >= 0xed3e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3e40 size=16 callers=0 calls=0
*/
void sub_ed3e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3e40ULL || rel >= 0xed3e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3e50 size=16 callers=2 calls=0
*/
void sub_ed3e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3e50ULL || rel >= 0xed3e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3e60 size=80 callers=14 calls=0
*/
void sub_ed3e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3e60ULL || rel >= 0xed3eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3eb0 size=32 callers=2 calls=0
*/
void sub_ed3eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3eb0ULL || rel >= 0xed3ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3ed0 size=80 callers=0 calls=1
   calls: sub_6025d0
*/
void sub_ed3ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3ed0ULL || rel >= 0xed3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3f20 size=16 callers=0 calls=0
*/
void sub_ed3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3f20ULL || rel >= 0xed3f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed3f30 size=3552 callers=0 calls=19
   calls: sub_601140, sub_61e4c0, sub_620d60, sub_620d70, sub_621410, sub_621420, sub_6384d0, sub_643e60, sub_644110, sub_6445a0, sub_6469e0, sub_646a20
   ... +7 more
*/
void sub_ed3f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed3f30ULL || rel >= 0xed4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed4d10 size=112 callers=0 calls=0
*/
void sub_ed4d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed4d10ULL || rel >= 0xed4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed4d80 size=112 callers=0 calls=0
*/
void sub_ed4d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed4d80ULL || rel >= 0xed4df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed4df0 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_ed4df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed4df0ULL || rel >= 0xed4e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed4e60 size=112 callers=0 calls=0
*/
void sub_ed4e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed4e60ULL || rel >= 0xed4ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed4ed0 size=112 callers=0 calls=0
*/
void sub_ed4ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed4ed0ULL || rel >= 0xed4f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed4f40 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_ed4f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed4f40ULL || rel >= 0xed4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed4fb0 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_ed4fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed4fb0ULL || rel >= 0xed5020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed5020 size=112 callers=0 calls=0
*/
void sub_ed5020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed5020ULL || rel >= 0xed5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed5090 size=112 callers=0 calls=0
*/
void sub_ed5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed5090ULL || rel >= 0xed5100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed5100 size=624 callers=1 calls=1
   calls: u_Source1
*/
void sub_ed5100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed5100ULL || rel >= 0xed5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed5370 size=1744 callers=1 calls=23
   calls: DummyTex_2, FirstResolvePath, PfxEffectMaskCopyPath, ZPrePath, sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2070, sub_5d7670, sub_5e2350, sub_5fc550, sub_602710
   ... +11 more
*/
void sub_ed5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed5370ULL || rel >= 0xed5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed5a40 size=2208 callers=1 calls=6
   calls: DepthDiscardValue, sub_602710, sub_604440, sub_604740, sub_68bde0, sub_ed85d0
*/
void sub_ed5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed5a40ULL || rel >= 0xed62e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed62e0 size=240 callers=1 calls=2
   calls: sub_602710, sub_ed86b0
   ref: ZPrePath
*/
void ZPrePath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed62e0ULL || rel >= 0xed63d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed63d0 size=544 callers=1 calls=7
   calls: sub_5f32b0, sub_602710, sub_604740, sub_682dd0, sub_ed87e0, u_DepthBuffer, unnamed_7
*/
void sub_ed63d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed63d0ULL || rel >= 0xed65f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed65f0 size=576 callers=1 calls=3
   calls: sub_5f24b0, sub_602710, sub_ed89a0
*/
void sub_ed65f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed65f0ULL || rel >= 0xed6830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed6830 size=1488 callers=1 calls=12
   calls: sub_602710, sub_639f90, sub_63a930, sub_63a9a0, sub_6829a0, sub_682dd0, sub_699f50, sub_ed8aa0, sub_ed8b90, sub_ed8e10, sub_ed8f30, sub_ee7490
   ref: PfxEffectMaskCopyPath
   ref: PfxGlareMaskCopyPath
*/
void PfxEffectMaskCopyPath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed6830ULL || rel >= 0xed6e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed6e00 size=704 callers=1 calls=10
   calls: sub_602710, sub_611740, sub_639f90, sub_63a9a0, sub_63d6d0, sub_6829a0, sub_682dd0, sub_ed9050, sub_ee72b0, sub_ee7490
   ref: FirstResolvePath
*/
void FirstResolvePath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed6e00ULL || rel >= 0xed70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed70c0 size=576 callers=1 calls=9
   calls: mask_path, sub_5f32b0, sub_6829a0, sub_682dd0, sub_ed9170, sub_ee72b0, sub_ee7300, u_ColorBuffer0, u_DepthBuffer1
*/
void sub_ed70c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed70c0ULL || rel >= 0xed7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed7300 size=496 callers=1 calls=6
   calls: sub_6829a0, sub_682dd0, sub_ed9330, sub_ee7300, u_ColorBuffer0_2, u_ColorBuffer1
*/
void sub_ed7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed7300ULL || rel >= 0xed74f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed74f0 size=496 callers=1 calls=4
   calls: sub_602710, sub_ed95f0, sub_ed9880, sub_ee72b0
*/
void sub_ed74f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed74f0ULL || rel >= 0xed76e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed76e0 size=1056 callers=1 calls=10
   calls: blend_cubemap, sub_5e26a0, sub_5e2930, sub_5fc600, sub_611740, sub_645a00, sub_682dd0, sub_ea10, sub_ec20, u_Source1
   ref: DummyTex
   ref: texture/primitive_renderer_texture.bntx
*/
void DummyTex_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed76e0ULL || rel >= 0xed7b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed7b00 size=480 callers=0 calls=5
   calls: sub_5f8bc0, sub_5f8c40, sub_63bed0, sub_63d690, sub_eea350
*/
void sub_ed7b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed7b00ULL || rel >= 0xed7ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed7ce0 size=1184 callers=0 calls=3
   calls: sub_5e2bc0, sub_682dd0, sub_ed9480
*/
void sub_ed7ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed7ce0ULL || rel >= 0xed8180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8180 size=16 callers=0 calls=0
*/
void sub_ed8180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8180ULL || rel >= 0xed8190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8190 size=240 callers=0 calls=0
*/
void sub_ed8190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8190ULL || rel >= 0xed8280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8280 size=16 callers=0 calls=0
*/
void sub_ed8280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8280ULL || rel >= 0xed8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8290 size=16 callers=0 calls=0
*/
void sub_ed8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8290ULL || rel >= 0xed82a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed82a0 size=16 callers=0 calls=0
*/
void sub_ed82a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed82a0ULL || rel >= 0xed82b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed82b0 size=16 callers=0 calls=0
*/
void sub_ed82b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed82b0ULL || rel >= 0xed82c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed82c0 size=16 callers=0 calls=0
*/
void sub_ed82c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed82c0ULL || rel >= 0xed82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed82d0 size=16 callers=0 calls=0
*/
void sub_ed82d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed82d0ULL || rel >= 0xed82e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed82e0 size=752 callers=3 calls=0
*/
void sub_ed82e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed82e0ULL || rel >= 0xed85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed85d0 size=224 callers=1 calls=1
   calls: sub_68ae20
*/
void sub_ed85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed85d0ULL || rel >= 0xed86b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed86b0 size=304 callers=1 calls=1
   calls: sub_608fa0
*/
void sub_ed86b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed86b0ULL || rel >= 0xed87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed87e0 size=224 callers=1 calls=1
   calls: sub_6983b0
*/
void sub_ed87e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed87e0ULL || rel >= 0xed88c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed88c0 size=224 callers=1 calls=1
   calls: sub_6218f0
*/
void sub_ed88c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed88c0ULL || rel >= 0xed89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed89a0 size=256 callers=1 calls=2
   calls: sub_5cfad0, sub_643210
*/
void sub_ed89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed89a0ULL || rel >= 0xed8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8aa0 size=240 callers=1 calls=1
   calls: PfxRenderPath
*/
void sub_ed8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8aa0ULL || rel >= 0xed8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8b90 size=320 callers=1 calls=1
   calls: sub_68ac20
*/
void sub_ed8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8b90ULL || rel >= 0xed8cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8cd0 size=80 callers=0 calls=0
*/
void sub_ed8cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8cd0ULL || rel >= 0xed8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8d20 size=80 callers=0 calls=0
*/
void sub_ed8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8d20ULL || rel >= 0xed8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8d70 size=80 callers=0 calls=0
*/
void sub_ed8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8d70ULL || rel >= 0xed8dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8dc0 size=80 callers=0 calls=0
*/
void sub_ed8dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8dc0ULL || rel >= 0xed8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8e10 size=288 callers=3 calls=1
   calls: sub_608fa0
*/
void sub_ed8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8e10ULL || rel >= 0xed8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed8f30 size=288 callers=1 calls=1
   calls: sub_608fa0
*/
void sub_ed8f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed8f30ULL || rel >= 0xed9050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9050 size=288 callers=1 calls=1
   calls: sub_608fa0
*/
void sub_ed9050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9050ULL || rel >= 0xed9170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9170 size=224 callers=1 calls=1
   calls: sub_ee2320
*/
void sub_ed9170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9170ULL || rel >= 0xed9250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9250 size=224 callers=1 calls=1
   calls: DownsizedBufferPath
*/
void sub_ed9250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9250ULL || rel >= 0xed9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9330 size=224 callers=1 calls=1
   calls: sub_eeb420
*/
void sub_ed9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9330ULL || rel >= 0xed9410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9410 size=32 callers=0 calls=0
*/
void sub_ed9410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9410ULL || rel >= 0xed9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9430 size=16 callers=0 calls=0
*/
void sub_ed9430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9430ULL || rel >= 0xed9440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9440 size=32 callers=0 calls=0
*/
void sub_ed9440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9440ULL || rel >= 0xed9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9460 size=32 callers=0 calls=0
*/
void sub_ed9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9460ULL || rel >= 0xed9480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9480 size=368 callers=7 calls=0
*/
void sub_ed9480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9480ULL || rel >= 0xed95f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed95f0 size=384 callers=2 calls=3
   calls: sub_5cfad0, sub_608fa0, sub_ed9770
*/
void sub_ed95f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed95f0ULL || rel >= 0xed9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9770 size=272 callers=1 calls=2
   calls: sub_6091a0, sub_ed9dc0
*/
void sub_ed9770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9770ULL || rel >= 0xed9880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9880 size=192 callers=2 calls=0
*/
void sub_ed9880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9880ULL || rel >= 0xed9940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9940 size=320 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ed9940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9940ULL || rel >= 0xed9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9a80 size=16 callers=0 calls=0
*/
void sub_ed9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9a80ULL || rel >= 0xed9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9a90 size=112 callers=0 calls=1
   calls: sub_60ae90
*/
void sub_ed9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9a90ULL || rel >= 0xed9b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9b00 size=16 callers=0 calls=0
*/
void sub_ed9b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9b00ULL || rel >= 0xed9b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9b10 size=16 callers=0 calls=0
*/
void sub_ed9b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9b10ULL || rel >= 0xed9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9b20 size=240 callers=0 calls=1
   calls: sub_603900
*/
void sub_ed9b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9b20ULL || rel >= 0xed9c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9c10 size=240 callers=0 calls=1
   calls: sub_603900
*/
void sub_ed9c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9c10ULL || rel >= 0xed9d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9d00 size=16 callers=0 calls=0
*/
void sub_ed9d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9d00ULL || rel >= 0xed9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9d10 size=16 callers=0 calls=0
*/
void sub_ed9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9d10ULL || rel >= 0xed9d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9d20 size=80 callers=0 calls=0
*/
void sub_ed9d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9d20ULL || rel >= 0xed9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9d70 size=80 callers=0 calls=0
*/
void sub_ed9d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9d70ULL || rel >= 0xed9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9dc0 size=352 callers=1 calls=2
   calls: DefaultPath, sub_5cfad0
*/
void sub_ed9dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9dc0ULL || rel >= 0xed9f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9f20 size=112 callers=0 calls=0
*/
void sub_ed9f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9f20ULL || rel >= 0xed9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ed9f90 size=112 callers=0 calls=0
*/
void sub_ed9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9f90ULL || rel >= 0xeda000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda000 size=112 callers=0 calls=1
   calls: sub_603900
*/
void sub_eda000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda000ULL || rel >= 0xeda070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda070 size=112 callers=0 calls=3
   calls: sub_5f3730, sub_eda380, sub_eda590
*/
void sub_eda070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda070ULL || rel >= 0xeda0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda0e0 size=112 callers=0 calls=0
*/
void sub_eda0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda0e0ULL || rel >= 0xeda150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda150 size=112 callers=0 calls=0
*/
void sub_eda150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda150ULL || rel >= 0xeda1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda1c0 size=112 callers=0 calls=1
   calls: sub_603900
*/
void sub_eda1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda1c0ULL || rel >= 0xeda230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda230 size=112 callers=0 calls=1
   calls: sub_603900
*/
void sub_eda230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda230ULL || rel >= 0xeda2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda2a0 size=112 callers=0 calls=0
*/
void sub_eda2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda2a0ULL || rel >= 0xeda310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda310 size=112 callers=0 calls=0
*/
void sub_eda310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda310ULL || rel >= 0xeda380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda380 size=528 callers=1 calls=10
   calls: sub_17876b0, sub_17876c0, sub_1787f70, sub_1787fd0, sub_17887f0, sub_1789270, sub_5f7540, sub_5f8bc0, sub_5f8c40, sub_5ff2a0
*/
void sub_eda380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda380ULL || rel >= 0xeda590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda590 size=304 callers=1 calls=4
   calls: sub_1787f70, sub_1787fd0, sub_1789270, sub_5f7540
*/
void sub_eda590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda590ULL || rel >= 0xeda6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda6c0 size=256 callers=0 calls=7
   calls: sub_17876b0, sub_17876c0, sub_17887f0, sub_1789270, sub_5f8bc0, sub_5f8c40, sub_5ff2a0
*/
void sub_eda6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda6c0ULL || rel >= 0xeda7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda7c0 size=16 callers=0 calls=0
*/
void sub_eda7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda7c0ULL || rel >= 0xeda7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda7d0 size=16 callers=0 calls=0
*/
void sub_eda7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda7d0ULL || rel >= 0xeda7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda7e0 size=16 callers=0 calls=0
*/
void sub_eda7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda7e0ULL || rel >= 0xeda7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda7f0 size=16 callers=0 calls=0
*/
void sub_eda7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda7f0ULL || rel >= 0xeda800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda800 size=16 callers=0 calls=0
*/
void sub_eda800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda800ULL || rel >= 0xeda810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda810 size=16 callers=0 calls=0
*/
void sub_eda810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda810ULL || rel >= 0xeda820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda820 size=16 callers=0 calls=0
*/
void sub_eda820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda820ULL || rel >= 0xeda830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eda830 size=576 callers=3 calls=5
   calls: sub_5d99d0, sub_967240, sub_b44bb0, sub_edee20, sub_edf020
*/
void sub_eda830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda830ULL || rel >= 0xedaa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edaa70 size=544 callers=0 calls=6
   calls: sub_5d99d0, sub_967240, sub_edd450, sub_edd830, sub_eddc50, sub_edf020
*/
void sub_edaa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedaa70ULL || rel >= 0xedac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edac90 size=1040 callers=0 calls=4
   calls: sub_edd450, sub_edd5b0, sub_eded30, sub_ee06d0
*/
void sub_edac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedac90ULL || rel >= 0xedb0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edb0a0 size=16 callers=1 calls=0
*/
void sub_edb0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedb0a0ULL || rel >= 0xedb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edb0b0 size=1024 callers=1 calls=4
   calls: sub_edd830, sub_edd9d0, sub_edec40, sub_ee06d0
*/
void sub_edb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedb0b0ULL || rel >= 0xedb4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edb4b0 size=48 callers=1 calls=1
   calls: sub_edb0b0
*/
void sub_edb4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedb4b0ULL || rel >= 0xedb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edb4e0 size=1024 callers=1 calls=4
   calls: sub_eddc50, sub_edde60, sub_edeb50, sub_ee06d0
*/
void sub_edb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedb4e0ULL || rel >= 0xedb8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edb8e0 size=48 callers=1 calls=1
   calls: sub_edb4e0
*/
void sub_edb8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedb8e0ULL || rel >= 0xedb910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edb910 size=224 callers=0 calls=0
*/
void sub_edb910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedb910ULL || rel >= 0xedb9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edb9f0 size=224 callers=0 calls=0
*/
void sub_edb9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedb9f0ULL || rel >= 0xedbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edbad0 size=224 callers=0 calls=0
*/
void sub_edbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedbad0ULL || rel >= 0xedbbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edbbb0 size=272 callers=0 calls=0
*/
void sub_edbbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedbbb0ULL || rel >= 0xedbcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edbcc0 size=272 callers=0 calls=0
*/
void sub_edbcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedbcc0ULL || rel >= 0xedbdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edbdd0 size=784 callers=0 calls=1
   calls: sub_edc0e0
*/
void sub_edbdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedbdd0ULL || rel >= 0xedc0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edc0e0 size=752 callers=3 calls=1
   calls: sub_edf680
*/
void sub_edc0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedc0e0ULL || rel >= 0xedc3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edc3d0 size=752 callers=0 calls=1
   calls: sub_edc6c0
*/
void sub_edc3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedc3d0ULL || rel >= 0xedc6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edc6c0 size=752 callers=3 calls=1
   calls: sub_edfa50
*/
void sub_edc6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedc6c0ULL || rel >= 0xedc9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edc9b0 size=800 callers=0 calls=1
   calls: sub_edccd0
*/
void sub_edc9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedc9b0ULL || rel >= 0xedccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edccd0 size=736 callers=3 calls=1
   calls: sub_edfe20
*/
void sub_edccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedccd0ULL || rel >= 0xedcfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edcfb0 size=416 callers=0 calls=1
   calls: sub_edc0e0
*/
void sub_edcfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedcfb0ULL || rel >= 0xedd150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edd150 size=384 callers=0 calls=1
   calls: sub_edc6c0
*/
void sub_edd150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedd150ULL || rel >= 0xedd2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edd2d0 size=384 callers=0 calls=1
   calls: sub_edccd0
*/
void sub_edd2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedd2d0ULL || rel >= 0xedd450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edd450 size=352 callers=4 calls=0
*/
void sub_edd450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedd450ULL || rel >= 0xedd5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edd5b0 size=640 callers=1 calls=2
   calls: sub_ee01f0, sub_ee0300
*/
void sub_edd5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedd5b0ULL || rel >= 0xedd830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edd830 size=416 callers=4 calls=0
*/
void sub_edd830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedd830ULL || rel >= 0xedd9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edd9d0 size=640 callers=1 calls=2
   calls: sub_ee0890, sub_ee09a0
*/
void sub_edd9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedd9d0ULL || rel >= 0xeddc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eddc50 size=528 callers=4 calls=0
*/
void sub_eddc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeddc50ULL || rel >= 0xedde60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edde60 size=640 callers=1 calls=2
   calls: sub_ee0d70, sub_ee0e80
*/
void sub_edde60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedde60ULL || rel >= 0xede0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede0e0 size=144 callers=2 calls=2
   calls: sub_5db3d0, sub_eda830
*/
void sub_ede0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede0e0ULL || rel >= 0xede170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede170 size=16 callers=3 calls=0
*/
void sub_ede170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede170ULL || rel >= 0xede180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede180 size=16 callers=7 calls=0
*/
void sub_ede180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede180ULL || rel >= 0xede190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede190 size=16 callers=3 calls=0
*/
void sub_ede190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede190ULL || rel >= 0xede1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede1a0 size=16 callers=2 calls=0
*/
void sub_ede1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede1a0ULL || rel >= 0xede1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede1b0 size=16 callers=2 calls=0
*/
void sub_ede1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede1b0ULL || rel >= 0xede1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede1c0 size=16 callers=2 calls=0
*/
void sub_ede1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede1c0ULL || rel >= 0xede1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede1d0 size=16 callers=2 calls=0
*/
void sub_ede1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede1d0ULL || rel >= 0xede1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede1e0 size=16 callers=2 calls=0
*/
void sub_ede1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede1e0ULL || rel >= 0xede1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede1f0 size=16 callers=1 calls=0
*/
void sub_ede1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede1f0ULL || rel >= 0xede200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede200 size=16 callers=1 calls=0
*/
void sub_ede200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede200ULL || rel >= 0xede210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede210 size=16 callers=1 calls=0
*/
void sub_ede210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede210ULL || rel >= 0xede220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede220 size=16 callers=1 calls=0
*/
void sub_ede220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede220ULL || rel >= 0xede230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede230 size=16 callers=1 calls=0
*/
void sub_ede230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede230ULL || rel >= 0xede240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede240 size=16 callers=1 calls=0
*/
void sub_ede240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede240ULL || rel >= 0xede250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede250 size=144 callers=0 calls=3
   calls: sub_edd450, sub_edd830, sub_eddc50
*/
void sub_ede250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede250ULL || rel >= 0xede2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede2e0 size=144 callers=0 calls=3
   calls: sub_edd450, sub_edd830, sub_eddc50
*/
void sub_ede2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede2e0ULL || rel >= 0xede370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede370 size=176 callers=0 calls=1
   calls: sub_ede8e0
*/
void sub_ede370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede370ULL || rel >= 0xede420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede420 size=176 callers=0 calls=1
   calls: sub_ede8e0
*/
void sub_ede420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede420ULL || rel >= 0xede4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede4d0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_ede4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede4d0ULL || rel >= 0xede540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede540 size=176 callers=0 calls=1
   calls: sub_ede8e0
*/
void sub_ede540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede540ULL || rel >= 0xede5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede5f0 size=176 callers=0 calls=1
   calls: sub_ede8e0
*/
void sub_ede5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede5f0ULL || rel >= 0xede6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede6a0 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_ede6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede6a0ULL || rel >= 0xede710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede710 size=112 callers=0 calls=1
   calls: sub_607750
*/
void sub_ede710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede710ULL || rel >= 0xede780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede780 size=176 callers=0 calls=1
   calls: sub_ede8e0
*/
void sub_ede780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede780ULL || rel >= 0xede830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede830 size=176 callers=0 calls=1
   calls: sub_ede8e0
*/
void sub_ede830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede830ULL || rel >= 0xede8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ede8e0 size=576 callers=7 calls=2
   calls: sub_edec40, sub_eded30
*/
void sub_ede8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede8e0ULL || rel >= 0xedeb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edeb20 size=48 callers=0 calls=1
   calls: sub_ede8e0
*/
void sub_edeb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedeb20ULL || rel >= 0xedeb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edeb50 size=240 callers=1 calls=0
*/
void sub_edeb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedeb50ULL || rel >= 0xedec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edec40 size=240 callers=2 calls=0
*/
void sub_edec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedec40ULL || rel >= 0xeded30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eded30 size=240 callers=2 calls=0
*/
void sub_eded30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeded30ULL || rel >= 0xedee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edee20 size=512 callers=4 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_607750
*/
void sub_edee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedee20ULL || rel >= 0xedf020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edf020 size=288 callers=2 calls=2
   calls: sub_5db3d0, sub_eda830
*/
void sub_edf020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedf020ULL || rel >= 0xedf140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edf140 size=448 callers=0 calls=0
*/
void sub_edf140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedf140ULL || rel >= 0xedf300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edf300 size=448 callers=0 calls=0
*/
void sub_edf300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedf300ULL || rel >= 0xedf4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edf4c0 size=448 callers=0 calls=0
*/
void sub_edf4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedf4c0ULL || rel >= 0xedf680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edf680 size=272 callers=1 calls=0
*/
void sub_edf680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedf680ULL || rel >= 0xedf790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edf790 size=704 callers=0 calls=0
*/
void sub_edf790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedf790ULL || rel >= 0xedfa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edfa50 size=272 callers=1 calls=0
*/
void sub_edfa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedfa50ULL || rel >= 0xedfb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edfb60 size=704 callers=0 calls=0
*/
void sub_edfb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedfb60ULL || rel >= 0xedfe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edfe20 size=272 callers=1 calls=0
*/
void sub_edfe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedfe20ULL || rel >= 0xedff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00edff30 size=704 callers=0 calls=0
*/
void sub_edff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedff30ULL || rel >= 0xee01f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee01f0 size=272 callers=1 calls=0
*/
void sub_ee01f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee01f0ULL || rel >= 0xee0300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee0300 size=272 callers=1 calls=1
   calls: sub_65d700
*/
void sub_ee0300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee0300ULL || rel >= 0xee0410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee0410 size=704 callers=0 calls=0
*/
void sub_ee0410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee0410ULL || rel >= 0xee06d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee06d0 size=448 callers=3 calls=0
*/
void sub_ee06d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee06d0ULL || rel >= 0xee0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee0890 size=272 callers=1 calls=0
*/
void sub_ee0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee0890ULL || rel >= 0xee09a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee09a0 size=272 callers=1 calls=1
   calls: sub_65d700
*/
void sub_ee09a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee09a0ULL || rel >= 0xee0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee0ab0 size=704 callers=0 calls=0
*/
void sub_ee0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee0ab0ULL || rel >= 0xee0d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee0d70 size=272 callers=1 calls=0
*/
void sub_ee0d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee0d70ULL || rel >= 0xee0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee0e80 size=272 callers=1 calls=1
   calls: sub_65d700
*/
void sub_ee0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee0e80ULL || rel >= 0xee0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee0f90 size=704 callers=0 calls=0
*/
void sub_ee0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee0f90ULL || rel >= 0xee1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee1250 size=592 callers=1 calls=1
   calls: sub_5db1b0
*/
void sub_ee1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee1250ULL || rel >= 0xee14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee14a0 size=16 callers=0 calls=0
*/
void sub_ee14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee14a0ULL || rel >= 0xee14b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee14b0 size=16 callers=0 calls=0
*/
void sub_ee14b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee14b0ULL || rel >= 0xee14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee14c0 size=16 callers=0 calls=0
*/
void sub_ee14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee14c0ULL || rel >= 0xee14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee14d0 size=16 callers=0 calls=0
*/
void sub_ee14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee14d0ULL || rel >= 0xee14e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee14e0 size=160 callers=1 calls=0
*/
void sub_ee14e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee14e0ULL || rel >= 0xee1580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee1580 size=576 callers=6 calls=0
*/
void sub_ee1580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee1580ULL || rel >= 0xee17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee17c0 size=336 callers=4 calls=0
*/
void sub_ee17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee17c0ULL || rel >= 0xee1910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee1910 size=208 callers=4 calls=3
   calls: sub_59b060, sub_ed0960, sub_ee1910
*/
void sub_ee1910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee1910ULL || rel >= 0xee19e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee19e0 size=224 callers=4 calls=3
   calls: sub_59b060, sub_ed09c0, sub_ee19e0
*/
void sub_ee19e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee19e0ULL || rel >= 0xee1ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee1ac0 size=208 callers=4 calls=3
   calls: sub_59b060, sub_ed0a20, sub_ee1ac0
*/
void sub_ee1ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee1ac0ULL || rel >= 0xee1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee1b90 size=192 callers=4 calls=3
   calls: sub_59b060, sub_ed0a80, sub_ee1b90
*/
void sub_ee1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee1b90ULL || rel >= 0xee1c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee1c50 size=176 callers=4 calls=2
   calls: sub_59a5a0, sub_ee1c50
*/
void sub_ee1c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee1c50ULL || rel >= 0xee1d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee1d00 size=192 callers=4 calls=2
   calls: sub_59a5c0, sub_ee1d00
*/
void sub_ee1d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee1d00ULL || rel >= 0xee1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee1dc0 size=192 callers=4 calls=2
   calls: sub_59a650, sub_ee1dc0
*/
void sub_ee1dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee1dc0ULL || rel >= 0xee1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee1e80 size=272 callers=3 calls=3
   calls: sub_59a670, sub_59a6d0, sub_ee1e80
*/
void sub_ee1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee1e80ULL || rel >= 0xee1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee1f90 size=176 callers=3 calls=2
   calls: sub_59a6f0, sub_ee1f90
*/
void sub_ee1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee1f90ULL || rel >= 0xee2040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2040 size=304 callers=0 calls=0
*/
void sub_ee2040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2040ULL || rel >= 0xee2170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2170 size=16 callers=0 calls=0
*/
void sub_ee2170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2170ULL || rel >= 0xee2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2180 size=16 callers=0 calls=0
*/
void sub_ee2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2180ULL || rel >= 0xee2190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2190 size=16 callers=0 calls=0
*/
void sub_ee2190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2190ULL || rel >= 0xee21a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee21a0 size=16 callers=0 calls=0
*/
void sub_ee21a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee21a0ULL || rel >= 0xee21b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee21b0 size=16 callers=0 calls=0
*/
void sub_ee21b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee21b0ULL || rel >= 0xee21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee21c0 size=16 callers=0 calls=0
*/
void sub_ee21c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee21c0ULL || rel >= 0xee21d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee21d0 size=16 callers=0 calls=0
*/
void sub_ee21d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee21d0ULL || rel >= 0xee21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee21e0 size=16 callers=0 calls=0
*/
void sub_ee21e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee21e0ULL || rel >= 0xee21f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee21f0 size=304 callers=0 calls=0
*/
void sub_ee21f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee21f0ULL || rel >= 0xee2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2320 size=272 callers=2 calls=2
   calls: sub_5cfad0, sub_608fa0
*/
void sub_ee2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2320ULL || rel >= 0xee2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2430 size=112 callers=2 calls=1
   calls: sub_60e2c0
   ref: u_ColorBuffer0
*/
void u_ColorBuffer0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2430ULL || rel >= 0xee24a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee24a0 size=112 callers=1 calls=1
   calls: sub_60e2c0
   ref: u_DepthBuffer1
*/
void u_DepthBuffer1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee24a0ULL || rel >= 0xee2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2510 size=144 callers=2 calls=1
   calls: sub_60e2c0
   ref: u_MaskBuffer
*/
void u_MaskBuffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2510ULL || rel >= 0xee25a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee25a0 size=1648 callers=1 calls=16
   calls: sub_1787500, sub_5e20, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5f7110, sub_5f7120, sub_602710, sub_602930, sub_60ccb0, sub_60de70, sub_60e390
   ... +4 more
   ref: bin/graphics/mask_shader/mask_path.bnsh
*/
void mask_path(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee25a0ULL || rel >= 0xee2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2c10 size=336 callers=0 calls=6
   calls: sub_5cfad0, sub_5f7110, sub_5f7120, sub_5f7320, sub_609420, sub_60f390
   ref: maskRenderConstant
*/
void maskRenderConstant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2c10ULL || rel >= 0xee2d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2d60 size=96 callers=0 calls=0
*/
void sub_ee2d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2d60ULL || rel >= 0xee2dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2dc0 size=96 callers=0 calls=0
*/
void sub_ee2dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2dc0ULL || rel >= 0xee2e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2e20 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_ee2e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2e20ULL || rel >= 0xee2ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2ed0 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ee2ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2ed0ULL || rel >= 0xee2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee2fd0 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ee2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee2fd0ULL || rel >= 0xee30d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee30d0 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_ee30d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee30d0ULL || rel >= 0xee3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3180 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_ee3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3180ULL || rel >= 0xee3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3230 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ee3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3230ULL || rel >= 0xee3330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3330 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_ee3330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3330ULL || rel >= 0xee3430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3430 size=16 callers=0 calls=0
*/
void sub_ee3430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3430ULL || rel >= 0xee3440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3440 size=192 callers=0 calls=1
   calls: sub_68ca30
*/
void sub_ee3440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3440ULL || rel >= 0xee3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3500 size=432 callers=0 calls=1
   calls: sub_5cfad0
   ref: OnGameColor
*/
void OnGameColor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3500ULL || rel >= 0xee36b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee36b0 size=272 callers=1 calls=0
*/
void sub_ee36b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee36b0ULL || rel >= 0xee37c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee37c0 size=288 callers=1 calls=0
*/
void sub_ee37c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee37c0ULL || rel >= 0xee38e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee38e0 size=64 callers=0 calls=0
*/
void sub_ee38e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee38e0ULL || rel >= 0xee3920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3920 size=384 callers=2 calls=1
   calls: sub_6949d0
*/
void sub_ee3920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3920ULL || rel >= 0xee3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3aa0 size=272 callers=0 calls=3
   calls: sub_17bf3a0, sub_17bf8d0, sub_ee7830
*/
void sub_ee3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3aa0ULL || rel >= 0xee3bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3bb0 size=32 callers=1 calls=0
*/
void sub_ee3bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3bb0ULL || rel >= 0xee3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3bd0 size=80 callers=7 calls=0
*/
void sub_ee3bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3bd0ULL || rel >= 0xee3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3c20 size=32 callers=0 calls=0
*/
void sub_ee3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3c20ULL || rel >= 0xee3c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3c40 size=32 callers=5 calls=0
*/
void sub_ee3c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3c40ULL || rel >= 0xee3c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3c60 size=32 callers=0 calls=0
*/
void sub_ee3c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3c60ULL || rel >= 0xee3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3c80 size=32 callers=5 calls=0
*/
void sub_ee3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3c80ULL || rel >= 0xee3ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3ca0 size=224 callers=0 calls=1
   calls: sub_ee3d90
*/
void sub_ee3ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3ca0ULL || rel >= 0xee3d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3d80 size=16 callers=0 calls=0
*/
void sub_ee3d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3d80ULL || rel >= 0xee3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3d90 size=464 callers=1 calls=0
*/
void sub_ee3d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3d90ULL || rel >= 0xee3f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3f60 size=16 callers=0 calls=0
*/
void sub_ee3f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3f60ULL || rel >= 0xee3f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3f70 size=16 callers=0 calls=0
*/
void sub_ee3f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3f70ULL || rel >= 0xee3f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee3f80 size=192 callers=0 calls=4
   calls: sub_1787bf0, sub_1787c10, sub_1787c20, sub_17c02e0
*/
void sub_ee3f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee3f80ULL || rel >= 0xee4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee4040 size=32 callers=0 calls=0
*/
void sub_ee4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee4040ULL || rel >= 0xee4060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee4060 size=80 callers=2 calls=1
   calls: sub_5db8e0
*/
void sub_ee4060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee4060ULL || rel >= 0xee40b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee40b0 size=16 callers=0 calls=0
*/
void sub_ee40b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee40b0ULL || rel >= 0xee40c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee40c0 size=16 callers=0 calls=0
*/
void sub_ee40c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee40c0ULL || rel >= 0xee40d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee40d0 size=48 callers=0 calls=1
   calls: sub_5db450
*/
void sub_ee40d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee40d0ULL || rel >= 0xee4100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee4100 size=416 callers=0 calls=2
   calls: sub_618cb0, sub_967240
*/
void sub_ee4100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee4100ULL || rel >= 0xee42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee42a0 size=48 callers=0 calls=1
   calls: sub_5db450
*/
void sub_ee42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee42a0ULL || rel >= 0xee42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee42d0 size=272 callers=1 calls=1
   calls: sub_612ef0
*/
void sub_ee42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee42d0ULL || rel >= 0xee43e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee43e0 size=192 callers=0 calls=0
*/
void sub_ee43e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee43e0ULL || rel >= 0xee44a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee44a0 size=192 callers=0 calls=0
*/
void sub_ee44a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee44a0ULL || rel >= 0xee4560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee4560 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_ee4560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee4560ULL || rel >= 0xee45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee45d0 size=192 callers=0 calls=0
*/
void sub_ee45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee45d0ULL || rel >= 0xee4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee4690 size=192 callers=0 calls=0
*/
void sub_ee4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee4690ULL || rel >= 0xee4750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee4750 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_ee4750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee4750ULL || rel >= 0xee47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee47c0 size=112 callers=0 calls=1
   calls: sub_619640
*/
void sub_ee47c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee47c0ULL || rel >= 0xee4830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee4830 size=192 callers=0 calls=0
*/
void sub_ee4830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee4830ULL || rel >= 0xee48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee48f0 size=192 callers=0 calls=0
*/
void sub_ee48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee48f0ULL || rel >= 0xee49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee49b0 size=320 callers=15 calls=2
   calls: sub_e9fa00, sub_eea490
*/
void sub_ee49b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee49b0ULL || rel >= 0xee4af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee4af0 size=208 callers=1 calls=2
   calls: sub_e9fa00, sub_ee53e0
*/
void sub_ee4af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee4af0ULL || rel >= 0xee4bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee4bc0 size=304 callers=1 calls=2
   calls: sub_e9fa00, sub_ee5530
*/
void sub_ee4bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee4bc0ULL || rel >= 0xee4cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee4cf0 size=480 callers=7 calls=5
   calls: sub_ed27e0, sub_ed82e0, sub_ed9480, sub_ee4ed0, sub_ee79c0
*/
void sub_ee4cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee4cf0ULL || rel >= 0xee4ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee4ed0 size=560 callers=1 calls=6
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_5eca40, sub_e9fa00, sub_ed2eb0
*/
void sub_ee4ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee4ed0ULL || rel >= 0xee5100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5100 size=336 callers=3 calls=8
   calls: sub_b58470, sub_ed32f0, sub_ed33b0, sub_ed34f0, sub_ed9480, sub_ee4cf0, sub_ee5250, sub_ee79c0
*/
void sub_ee5100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5100ULL || rel >= 0xee5250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5250 size=400 callers=8 calls=0
*/
void sub_ee5250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5250ULL || rel >= 0xee53e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee53e0 size=336 callers=1 calls=1
   calls: sub_eea800
*/
void sub_ee53e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee53e0ULL || rel >= 0xee5530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5530 size=352 callers=1 calls=2
   calls: sub_602030, sub_ee5940
*/
void sub_ee5530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5530ULL || rel >= 0xee5690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5690 size=272 callers=0 calls=0
*/
void sub_ee5690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5690ULL || rel >= 0xee57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee57a0 size=16 callers=0 calls=0
*/
void sub_ee57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee57a0ULL || rel >= 0xee57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee57b0 size=16 callers=0 calls=0
*/
void sub_ee57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee57b0ULL || rel >= 0xee57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee57c0 size=16 callers=0 calls=0
*/
void sub_ee57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee57c0ULL || rel >= 0xee57d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee57d0 size=16 callers=0 calls=0
*/
void sub_ee57d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee57d0ULL || rel >= 0xee57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee57e0 size=16 callers=0 calls=0
*/
void sub_ee57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee57e0ULL || rel >= 0xee57f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee57f0 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_ee57f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee57f0ULL || rel >= 0xee5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5860 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_ee5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5860ULL || rel >= 0xee58d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee58d0 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_ee58d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee58d0ULL || rel >= 0xee5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5940 size=624 callers=1 calls=5
   calls: sub_602710, sub_604440, sub_604740, sub_ee72b0, sub_ee7300
*/
void sub_ee5940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5940ULL || rel >= 0xee5bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5bb0 size=96 callers=0 calls=0
*/
void sub_ee5bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5bb0ULL || rel >= 0xee5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5c10 size=96 callers=0 calls=0
*/
void sub_ee5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5c10ULL || rel >= 0xee5c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5c70 size=80 callers=4 calls=2
   calls: sub_617bc0, sub_618ec0
*/
void sub_ee5c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5c70ULL || rel >= 0xee5cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5cc0 size=400 callers=1 calls=2
   calls: sub_5cf9c0, sub_69bc70
*/
void sub_ee5cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5cc0ULL || rel >= 0xee5e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5e50 size=384 callers=1 calls=2
   calls: primitive_renderer_shader, sub_ee8660
*/
void sub_ee5e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5e50ULL || rel >= 0xee5fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee5fd0 size=160 callers=0 calls=1
   calls: sub_ee8660
*/
void sub_ee5fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee5fd0ULL || rel >= 0xee6070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee6070 size=160 callers=0 calls=1
   calls: sub_ee8660
*/
void sub_ee6070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee6070ULL || rel >= 0xee6110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee6110 size=160 callers=0 calls=1
   calls: sub_ee8660
*/
void sub_ee6110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee6110ULL || rel >= 0xee61b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee61b0 size=160 callers=0 calls=1
   calls: sub_ee8660
*/
void sub_ee61b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee61b0ULL || rel >= 0xee6250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee6250 size=16 callers=1 calls=0
*/
void sub_ee6250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee6250ULL || rel >= 0xee6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee6260 size=4176 callers=0 calls=16
   calls: sub_5cfad0, sub_5f24b0, sub_5fe6a0, sub_6032f0, sub_6323a0, sub_e9fa00, sub_ea0fd0, sub_ed1920, sub_ed2ed0, sub_ed2f40, sub_ed33b0, sub_ee49b0
   ... +4 more
*/
void sub_ee6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee6260ULL || rel >= 0xee72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee72b0 size=80 callers=9 calls=0
*/
void sub_ee72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee72b0ULL || rel >= 0xee7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7300 size=80 callers=4 calls=0
*/
void sub_ee7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7300ULL || rel >= 0xee7350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7350 size=80 callers=1 calls=0
*/
void sub_ee7350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7350ULL || rel >= 0xee73a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee73a0 size=80 callers=1 calls=0
*/
void sub_ee73a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee73a0ULL || rel >= 0xee73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee73f0 size=80 callers=1 calls=0
*/
void sub_ee73f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee73f0ULL || rel >= 0xee7440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7440 size=80 callers=1 calls=0
*/
void sub_ee7440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7440ULL || rel >= 0xee7490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7490 size=32 callers=3 calls=0
*/
void sub_ee7490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7490ULL || rel >= 0xee74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee74b0 size=208 callers=10 calls=2
   calls: sub_617bc0, sub_618ec0
*/
void sub_ee74b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee74b0ULL || rel >= 0xee7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7580 size=16 callers=4 calls=0
*/
void sub_ee7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7580ULL || rel >= 0xee7590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7590 size=304 callers=0 calls=1
   calls: sub_ed3650
*/
void sub_ee7590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7590ULL || rel >= 0xee76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee76c0 size=16 callers=8 calls=0
*/
void sub_ee76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee76c0ULL || rel >= 0xee76d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee76d0 size=240 callers=0 calls=1
   calls: sub_ed3830
*/
void sub_ee76d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee76d0ULL || rel >= 0xee77c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee77c0 size=112 callers=2 calls=0
*/
void sub_ee77c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee77c0ULL || rel >= 0xee7830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7830 size=96 callers=31 calls=0
*/
void sub_ee7830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7830ULL || rel >= 0xee7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7890 size=48 callers=3 calls=0
*/
void sub_ee7890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7890ULL || rel >= 0xee78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee78c0 size=48 callers=11 calls=0
*/
void sub_ee78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee78c0ULL || rel >= 0xee78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee78f0 size=48 callers=4 calls=0
*/
void sub_ee78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee78f0ULL || rel >= 0xee7920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7920 size=112 callers=8 calls=0
*/
void sub_ee7920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7920ULL || rel >= 0xee7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7990 size=48 callers=2 calls=0
*/
void sub_ee7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7990ULL || rel >= 0xee79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee79c0 size=16 callers=10 calls=0
*/
void sub_ee79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee79c0ULL || rel >= 0xee79d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee79d0 size=16 callers=6 calls=0
*/
void sub_ee79d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee79d0ULL || rel >= 0xee79e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee79e0 size=80 callers=1 calls=0
*/
void sub_ee79e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee79e0ULL || rel >= 0xee7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7a30 size=560 callers=1 calls=6
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d2070, sub_5eca40, sub_e9fa00, sub_ee9140
*/
void sub_ee7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7a30ULL || rel >= 0xee7c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7c60 size=320 callers=1 calls=1
   calls: sub_ee9bf0
*/
void sub_ee7c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7c60ULL || rel >= 0xee7da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7da0 size=336 callers=1 calls=1
   calls: sub_ee8a70
*/
void sub_ee7da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7da0ULL || rel >= 0xee7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee7ef0 size=1904 callers=1 calls=6
   calls: sub_5e26a0, sub_5e2930, sub_5f24b0, sub_5fe6a0, sub_9568b0, sub_d700
   ref: system_resource/shader/primitive_renderer_shader.bnsh
*/
void primitive_renderer_shader(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee7ef0ULL || rel >= 0xee8660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee8660 size=992 callers=10 calls=2
   calls: sub_5e2bc0, sub_ed9480
*/
void sub_ee8660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee8660ULL || rel >= 0xee8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee8a40 size=48 callers=0 calls=1
   calls: sub_ee8660
*/
void sub_ee8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee8a40ULL || rel >= 0xee8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee8a70 size=288 callers=1 calls=3
   calls: sub_602030, sub_ee8b90, sub_ee9920
*/
void sub_ee8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee8a70ULL || rel >= 0xee8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee8b90 size=336 callers=1 calls=1
   calls: FinalizeRenderPath
*/
void sub_ee8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee8b90ULL || rel >= 0xee8ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee8ce0 size=176 callers=0 calls=1
   calls: sub_ee9920
*/
void sub_ee8ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee8ce0ULL || rel >= 0xee8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee8d90 size=176 callers=0 calls=1
   calls: sub_ee9920
*/
void sub_ee8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee8d90ULL || rel >= 0xee8e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee8e40 size=176 callers=0 calls=1
   calls: sub_ee9920
*/
void sub_ee8e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee8e40ULL || rel >= 0xee8ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee8ef0 size=176 callers=0 calls=1
   calls: sub_ee9920
*/
void sub_ee8ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee8ef0ULL || rel >= 0xee8fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee8fa0 size=176 callers=0 calls=1
   calls: sub_ee9920
*/
void sub_ee8fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee8fa0ULL || rel >= 0xee9050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9050 size=176 callers=0 calls=1
   calls: sub_ee9920
*/
void sub_ee9050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9050ULL || rel >= 0xee9100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9100 size=64 callers=0 calls=1
   calls: sub_6025d0
*/
void sub_ee9100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9100ULL || rel >= 0xee9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9140 size=32 callers=1 calls=0
*/
void sub_ee9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9140ULL || rel >= 0xee9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9160 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_ee9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9160ULL || rel >= 0xee91d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee91d0 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_ee91d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee91d0ULL || rel >= 0xee9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9240 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_ee9240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9240ULL || rel >= 0xee92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee92b0 size=1360 callers=1 calls=14
   calls: sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2070, sub_5d76c0, sub_602710, sub_639f90, sub_63a9a0, sub_63d6d0, sub_6829a0, sub_682dd0, sub_ed95f0
   ... +2 more
   ref: FinalizeRenderPath
*/
void FinalizeRenderPath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee92b0ULL || rel >= 0xee9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9800 size=288 callers=0 calls=8
   calls: sub_5f8bc0, sub_5f8c40, sub_63a930, sub_63b210, sub_63bea0, sub_63bf00, sub_63c1c0, sub_63d690
*/
void sub_ee9800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9800ULL || rel >= 0xee9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9920 size=272 callers=15 calls=0
*/
void sub_ee9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9920ULL || rel >= 0xee9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9a30 size=48 callers=0 calls=1
   calls: sub_ee9920
*/
void sub_ee9a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9a30ULL || rel >= 0xee9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9a60 size=288 callers=1 calls=1
   calls: sub_608fa0
*/
void sub_ee9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9a60ULL || rel >= 0xee9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9b80 size=32 callers=0 calls=0
*/
void sub_ee9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9b80ULL || rel >= 0xee9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9ba0 size=16 callers=0 calls=0
*/
void sub_ee9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9ba0ULL || rel >= 0xee9bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9bb0 size=32 callers=0 calls=0
*/
void sub_ee9bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9bb0ULL || rel >= 0xee9bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9bd0 size=32 callers=0 calls=0
*/
void sub_ee9bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9bd0ULL || rel >= 0xee9bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9bf0 size=352 callers=1 calls=2
   calls: sub_602030, sub_ee9d50
*/
void sub_ee9bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9bf0ULL || rel >= 0xee9d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9d50 size=320 callers=1 calls=1
   calls: InitializeRenderPath1
*/
void sub_ee9d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9d50ULL || rel >= 0xee9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9e90 size=256 callers=0 calls=0
*/
void sub_ee9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9e90ULL || rel >= 0xee9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9f90 size=16 callers=0 calls=0
*/
void sub_ee9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9f90ULL || rel >= 0xee9fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9fa0 size=16 callers=0 calls=0
*/
void sub_ee9fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9fa0ULL || rel >= 0xee9fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9fb0 size=16 callers=0 calls=0
*/
void sub_ee9fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9fb0ULL || rel >= 0xee9fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9fc0 size=16 callers=0 calls=0
*/
void sub_ee9fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9fc0ULL || rel >= 0xee9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9fd0 size=16 callers=0 calls=0
*/
void sub_ee9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9fd0ULL || rel >= 0xee9fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ee9fe0 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_ee9fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee9fe0ULL || rel >= 0xeea050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eea050 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_eea050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeea050ULL || rel >= 0xeea0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eea0c0 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_eea0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeea0c0ULL || rel >= 0xeea130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eea130 size=544 callers=1 calls=2
   calls: sub_602710, sub_ed8e10
   ref: InitializeRenderPath0
   ref: InitializeRenderPath1
*/
void InitializeRenderPath1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeea130ULL || rel >= 0xeea350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eea350 size=320 callers=1 calls=9
   calls: sub_5f8bc0, sub_5f8c40, sub_63a930, sub_63b210, sub_63bea0, sub_63bee0, sub_63bf00, sub_63c1c0, sub_63d690
*/
void sub_eea350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeea350ULL || rel >= 0xeea490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eea490 size=544 callers=1 calls=4
   calls: sub_602030, sub_ee72b0, sub_ee7300, sub_eea6b0
*/
void sub_eea490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeea490ULL || rel >= 0xeea6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eea6b0 size=336 callers=2 calls=1
   calls: sub_eeaf10
*/
void sub_eea6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeea6b0ULL || rel >= 0xeea800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eea800 size=416 callers=1 calls=2
   calls: sub_602030, sub_eea6b0
*/
void sub_eea800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeea800ULL || rel >= 0xeea9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eea9a0 size=176 callers=0 calls=0
*/
void sub_eea9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeea9a0ULL || rel >= 0xeeaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeaa50 size=176 callers=0 calls=0
*/
void sub_eeaa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeaa50ULL || rel >= 0xeeab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeab00 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_eeab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeab00ULL || rel >= 0xeeab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeab70 size=176 callers=0 calls=0
*/
void sub_eeab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeab70ULL || rel >= 0xeeac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeac20 size=176 callers=0 calls=0
*/
void sub_eeac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeac20ULL || rel >= 0xeeacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeacd0 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_eeacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeacd0ULL || rel >= 0xeead40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eead40 size=112 callers=0 calls=1
   calls: sub_5f19d0
*/
void sub_eead40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeead40ULL || rel >= 0xeeadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeadb0 size=176 callers=0 calls=0
*/
void sub_eeadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeadb0ULL || rel >= 0xeeae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeae60 size=176 callers=0 calls=0
*/
void sub_eeae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeae60ULL || rel >= 0xeeaf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeaf10 size=704 callers=1 calls=3
   calls: sub_602710, sub_604440, sub_604740
*/
void sub_eeaf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeaf10ULL || rel >= 0xeeb1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeb1d0 size=224 callers=1 calls=0
*/
void sub_eeb1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeb1d0ULL || rel >= 0xeeb2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeb2b0 size=160 callers=13 calls=0
*/
void sub_eeb2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeb2b0ULL || rel >= 0xeeb350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeb350 size=192 callers=0 calls=0
*/
void sub_eeb350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeb350ULL || rel >= 0xeeb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeb410 size=16 callers=6 calls=0
*/
void sub_eeb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeb410ULL || rel >= 0xeeb420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeb420 size=272 callers=2 calls=2
   calls: sub_5cfad0, sub_608fa0
*/
void sub_eeb420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeb420ULL || rel >= 0xeeb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeb530 size=112 callers=1 calls=1
   calls: sub_60e2c0
   ref: u_ColorBuffer0
*/
void u_ColorBuffer0_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeb530ULL || rel >= 0xeeb5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeb5a0 size=1712 callers=1 calls=19
   calls: sub_1787500, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5f50, sub_5f7110, sub_5f7120, sub_602710, sub_602930, sub_60ccb0, sub_60de70, sub_60e2c0
   ... +7 more
   ref: u_ColorBuffer1
*/
void u_ColorBuffer1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeb5a0ULL || rel >= 0xeebc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eebc50 size=304 callers=0 calls=7
   calls: sub_5cfad0, sub_5f7110, sub_5f7120, sub_5f7320, sub_609420, sub_60f390, sub_691f10
   ref: blendRenderConstant
*/
void blendRenderConstant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeebc50ULL || rel >= 0xeebd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eebd80 size=96 callers=0 calls=0
*/
void sub_eebd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeebd80ULL || rel >= 0xeebde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eebde0 size=96 callers=0 calls=0
*/
void sub_eebde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeebde0ULL || rel >= 0xeebe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eebe40 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_eebe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeebe40ULL || rel >= 0xeebef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eebef0 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_eebef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeebef0ULL || rel >= 0xeebff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eebff0 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_eebff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeebff0ULL || rel >= 0xeec0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eec0f0 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_eec0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeec0f0ULL || rel >= 0xeec1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eec1a0 size=176 callers=0 calls=1
   calls: sub_5ffbb0
*/
void sub_eec1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeec1a0ULL || rel >= 0xeec250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eec250 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_eec250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeec250ULL || rel >= 0xeec350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eec350 size=256 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_eec350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeec350ULL || rel >= 0xeec450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eec450 size=16 callers=0 calls=0
*/
void sub_eec450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeec450ULL || rel >= 0xeec460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eec460 size=192 callers=0 calls=1
   calls: sub_68ca30
*/
void sub_eec460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeec460ULL || rel >= 0xeec520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eec520 size=848 callers=1 calls=4
   calls: sub_5e2bc0, sub_64a740, sub_64a890, sub_64a8d0
*/
void sub_eec520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeec520ULL || rel >= 0xeec870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eec870 size=848 callers=0 calls=6
   calls: sub_5cfad0, sub_61be70, sub_621410, sub_621420, sub_6829a0, sub_682dd0
*/
void sub_eec870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeec870ULL || rel >= 0xeecbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eecbc0 size=144 callers=1 calls=1
   calls: sub_eecc50
*/
void sub_eecbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeecbc0ULL || rel >= 0xeecc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eecc50 size=448 callers=1 calls=3
   calls: sub_c38350, sub_e9d130, sub_e9db40
*/
void sub_eecc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeecc50ULL || rel >= 0xeece10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eece10 size=96 callers=0 calls=0
*/
void sub_eece10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeece10ULL || rel >= 0xeece70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eece70 size=96 callers=0 calls=0
*/
void sub_eece70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeece70ULL || rel >= 0xeeced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeced0 size=96 callers=0 calls=0
*/
void sub_eeced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeced0ULL || rel >= 0xeecf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eecf30 size=96 callers=0 calls=0
*/
void sub_eecf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeecf30ULL || rel >= 0xeecf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eecf90 size=96 callers=0 calls=0
*/
void sub_eecf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeecf90ULL || rel >= 0xeecff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eecff0 size=96 callers=0 calls=0
*/
void sub_eecff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeecff0ULL || rel >= 0xeed050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed050 size=16 callers=0 calls=0
*/
void sub_eed050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed050ULL || rel >= 0xeed060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed060 size=16 callers=0 calls=0
*/
void sub_eed060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed060ULL || rel >= 0xeed070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed070 size=16 callers=0 calls=0
*/
void sub_eed070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed070ULL || rel >= 0xeed080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed080 size=240 callers=0 calls=1
   calls: sub_eed170
*/
void sub_eed080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed080ULL || rel >= 0xeed170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed170 size=416 callers=1 calls=3
   calls: sub_672c10, sub_c386f0, sub_eed470
*/
void sub_eed170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed170ULL || rel >= 0xeed310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed310 size=16 callers=0 calls=0
*/
void sub_eed310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed310ULL || rel >= 0xeed320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed320 size=16 callers=0 calls=0
*/
void sub_eed320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed320ULL || rel >= 0xeed330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed330 size=16 callers=0 calls=0
*/
void sub_eed330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed330ULL || rel >= 0xeed340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed340 size=304 callers=0 calls=0
*/
void sub_eed340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed340ULL || rel >= 0xeed470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed470 size=80 callers=1 calls=2
   calls: sub_e7b660, sub_eed4c0
*/
void sub_eed470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed470ULL || rel >= 0xeed4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed4c0 size=224 callers=1 calls=3
   calls: sub_7c2da0, sub_e7b5e0, sub_eee2b0
*/
void sub_eed4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed4c0ULL || rel >= 0xeed5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed5a0 size=368 callers=0 calls=6
   calls: sub_78f150, sub_78f240, sub_e7c0f0, sub_eed710, sub_eee3a0, sub_eee4d0
   ref: View_Top
*/
void View_Top_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed5a0ULL || rel >= 0xeed710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed710 size=400 callers=1 calls=3
   calls: sub_e7c160, sub_eee3a0, sub_eef840
*/
void sub_eed710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed710ULL || rel >= 0xeed8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed8a0 size=16 callers=0 calls=0
*/
void sub_eed8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed8a0ULL || rel >= 0xeed8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed8b0 size=16 callers=0 calls=0
*/
void sub_eed8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed8b0ULL || rel >= 0xeed8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed8c0 size=16 callers=0 calls=0
*/
void sub_eed8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed8c0ULL || rel >= 0xeed8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed8d0 size=224 callers=0 calls=2
   calls: sub_e7c160, sub_eee820
*/
void sub_eed8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed8d0ULL || rel >= 0xeed9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed9b0 size=16 callers=0 calls=0
*/
void sub_eed9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed9b0ULL || rel >= 0xeed9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eed9c0 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_eed9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeed9c0ULL || rel >= 0xeedb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eedb60 size=16 callers=0 calls=0
*/
void sub_eedb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeedb60ULL || rel >= 0xeedb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eedb70 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_eedb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeedb70ULL || rel >= 0xeedc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eedc20 size=16 callers=0 calls=0
*/
void sub_eedc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeedc20ULL || rel >= 0xeedc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eedc30 size=16 callers=0 calls=0
*/
void sub_eedc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeedc30ULL || rel >= 0xeedc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eedc40 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_eedc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeedc40ULL || rel >= 0xeedcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eedcf0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_eedcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeedcf0ULL || rel >= 0xeedda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eedda0 size=16 callers=0 calls=0
*/
void sub_eedda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeedda0ULL || rel >= 0xeeddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeddb0 size=16 callers=0 calls=0
*/
void sub_eeddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeddb0ULL || rel >= 0xeeddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeddc0 size=128 callers=0 calls=1
   calls: sub_3340
*/
void sub_eeddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeddc0ULL || rel >= 0xeede40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eede40 size=368 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_eede40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeede40ULL || rel >= 0xeedfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eedfb0 size=96 callers=0 calls=1
   calls: sub_eee1d0
*/
void sub_eedfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeedfb0ULL || rel >= 0xeee010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee010 size=16 callers=0 calls=0
*/
void sub_eee010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee010ULL || rel >= 0xeee020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee020 size=160 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_eee020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee020ULL || rel >= 0xeee0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee0c0 size=192 callers=0 calls=1
   calls: sub_7c2db0
*/
void sub_eee0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee0c0ULL || rel >= 0xeee180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee180 size=16 callers=0 calls=0
*/
void sub_eee180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee180ULL || rel >= 0xeee190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee190 size=16 callers=0 calls=0
*/
void sub_eee190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee190ULL || rel >= 0xeee1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee1a0 size=16 callers=0 calls=0
*/
void sub_eee1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee1a0ULL || rel >= 0xeee1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee1b0 size=32 callers=0 calls=0
*/
void sub_eee1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee1b0ULL || rel >= 0xeee1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee1d0 size=224 callers=1 calls=2
   calls: sub_65f1c0, sub_7c2d90
*/
void sub_eee1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee1d0ULL || rel >= 0xeee2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee2b0 size=240 callers=1 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_eee2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee2b0ULL || rel >= 0xeee3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee3a0 size=304 callers=3 calls=0
*/
void sub_eee3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee3a0ULL || rel >= 0xeee4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee4d0 size=288 callers=1 calls=2
   calls: sub_e809c0, sub_eee5f0
*/
void sub_eee4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee4d0ULL || rel >= 0xeee5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee5f0 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_eee5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee5f0ULL || rel >= 0xeee820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee820 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_eee820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee820ULL || rel >= 0xeee960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eee960 size=464 callers=0 calls=7
   calls: sub_c39c40, sub_d0c0, sub_e806b0, sub_e807f0, sub_eee3a0, sub_eeed10, sub_eef390
   ref: StateFirst
   ref: View_Top
*/
void StateFirst(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeee960ULL || rel >= 0xeeeb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeeb30 size=32 callers=0 calls=1
   calls: sub_eef740
*/
void sub_eeeb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeeb30ULL || rel >= 0xeeeb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeeb50 size=16 callers=0 calls=0
*/
void sub_eeeb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeeb50ULL || rel >= 0xeeeb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeeb60 size=16 callers=0 calls=0
*/
void sub_eeeb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeeb60ULL || rel >= 0xeeeb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeeb70 size=16 callers=0 calls=0
*/
void sub_eeeb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeeb70ULL || rel >= 0xeeeb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeeb80 size=16 callers=0 calls=0
*/
void sub_eeeb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeeb80ULL || rel >= 0xeeeb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeeb90 size=16 callers=0 calls=0
*/
void sub_eeeb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeeb90ULL || rel >= 0xeeeba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeeba0 size=16 callers=0 calls=0
*/
void sub_eeeba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeeba0ULL || rel >= 0xeeebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeebb0 size=16 callers=0 calls=0
*/
void sub_eeebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeebb0ULL || rel >= 0xeeebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeebc0 size=16 callers=0 calls=0
*/
void sub_eeebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeebc0ULL || rel >= 0xeeebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeebd0 size=16 callers=0 calls=0
*/
void sub_eeebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeebd0ULL || rel >= 0xeeebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeebe0 size=304 callers=0 calls=0
*/
void sub_eeebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeebe0ULL || rel >= 0xeeed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeed10 size=272 callers=1 calls=2
   calls: sub_5cfaf0, sub_eeee20
*/
void sub_eeed10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeed10ULL || rel >= 0xeeee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeee20 size=304 callers=1 calls=0
*/
void sub_eeee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeee20ULL || rel >= 0xeeef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eeef50 size=240 callers=0 calls=4
   calls: sub_5cfad0, sub_e7e890, sub_e7ea20, sub_e7eb40
*/
void sub_eeef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeeef50ULL || rel >= 0xeef040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef040 size=320 callers=0 calls=2
   calls: sub_14aad40, sub_e83e60
*/
void sub_eef040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef040ULL || rel >= 0xeef180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef180 size=512 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/fire/bin/fire_00_lyt.bin
   ref: bin/appli/fire/bin/fire_00_uikit.bin
*/
void fire_00_uikit(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef180ULL || rel >= 0xeef380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef380 size=16 callers=0 calls=0
*/
void sub_eef380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef380ULL || rel >= 0xeef390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef390 size=720 callers=1 calls=11
   calls: sub_13077f0, sub_13149a0, sub_1315b90, sub_14aad40, sub_14ac370, sub_67d450, sub_8f19b0, sub_e7eb10, sub_e7f7c0, sub_e83c60, sub_eb6230
*/
void sub_eef390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef390ULL || rel >= 0xeef660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef660 size=112 callers=0 calls=0
*/
void sub_eef660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef660ULL || rel >= 0xeef6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef6d0 size=112 callers=0 calls=0
*/
void sub_eef6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef6d0ULL || rel >= 0xeef740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef740 size=64 callers=1 calls=0
*/
void sub_eef740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef740ULL || rel >= 0xeef780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef780 size=16 callers=0 calls=0
*/
void sub_eef780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef780ULL || rel >= 0xeef790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef790 size=16 callers=0 calls=0
*/
void sub_eef790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef790ULL || rel >= 0xeef7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef7a0 size=16 callers=0 calls=0
*/
void sub_eef7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef7a0ULL || rel >= 0xeef7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef7b0 size=16 callers=0 calls=0
*/
void sub_eef7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef7b0ULL || rel >= 0xeef7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef7c0 size=16 callers=0 calls=0
*/
void sub_eef7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef7c0ULL || rel >= 0xeef7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef7d0 size=16 callers=0 calls=0
*/
void sub_eef7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef7d0ULL || rel >= 0xeef7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef7e0 size=16 callers=0 calls=0
*/
void sub_eef7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef7e0ULL || rel >= 0xeef7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef7f0 size=16 callers=0 calls=0
*/
void sub_eef7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef7f0ULL || rel >= 0xeef800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef800 size=16 callers=0 calls=0
*/
void sub_eef800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef800ULL || rel >= 0xeef810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef810 size=16 callers=0 calls=0
*/
void sub_eef810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef810ULL || rel >= 0xeef820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef820 size=16 callers=0 calls=0
*/
void sub_eef820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef820ULL || rel >= 0xeef830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef830 size=16 callers=0 calls=0
*/
void sub_eef830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef830ULL || rel >= 0xeef840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef840 size=64 callers=1 calls=1
   calls: sub_e7c210
*/
void sub_eef840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef840ULL || rel >= 0xeef880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef880 size=16 callers=0 calls=0
*/
void sub_eef880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef880ULL || rel >= 0xeef890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef890 size=16 callers=0 calls=0
*/
void sub_eef890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef890ULL || rel >= 0xeef8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef8a0 size=16 callers=0 calls=0
*/
void sub_eef8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef8a0ULL || rel >= 0xeef8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef8b0 size=16 callers=0 calls=0
*/
void sub_eef8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef8b0ULL || rel >= 0xeef8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef8c0 size=16 callers=0 calls=0
*/
void sub_eef8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef8c0ULL || rel >= 0xeef8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef8d0 size=16 callers=0 calls=0
*/
void sub_eef8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef8d0ULL || rel >= 0xeef8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef8e0 size=16 callers=0 calls=0
*/
void sub_eef8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef8e0ULL || rel >= 0xeef8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef8f0 size=16 callers=0 calls=0
*/
void sub_eef8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef8f0ULL || rel >= 0xeef900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef900 size=80 callers=7 calls=0
*/
void sub_eef900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef900ULL || rel >= 0xeef950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef950 size=128 callers=12 calls=1
   calls: sub_eefb80
*/
void sub_eef950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef950ULL || rel >= 0xeef9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eef9d0 size=64 callers=3 calls=0
*/
void sub_eef9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeef9d0ULL || rel >= 0xeefa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eefa10 size=80 callers=16 calls=0
*/
void sub_eefa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeefa10ULL || rel >= 0xeefa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eefa60 size=288 callers=44 calls=0
*/
void sub_eefa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeefa60ULL || rel >= 0xeefb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eefb80 size=32 callers=1 calls=0
*/
void sub_eefb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeefb80ULL || rel >= 0xeefba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eefba0 size=96 callers=5 calls=0
*/
void sub_eefba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeefba0ULL || rel >= 0xeefc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eefc00 size=736 callers=1 calls=1
   calls: sub_eef950
*/
void sub_eefc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeefc00ULL || rel >= 0xeefee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00eefee0 size=624 callers=1 calls=1
   calls: sub_eef950
*/
void sub_eefee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeefee0ULL || rel >= 0xef0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0150 size=32 callers=16 calls=0
*/
void sub_ef0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0150ULL || rel >= 0xef0170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef0170 size=304 callers=11 calls=0
*/
void sub_ef0170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0170ULL || rel >= 0xef02a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef02a0 size=32 callers=2 calls=0
*/
void sub_ef02a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef02a0ULL || rel >= 0xef02c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef02c0 size=32 callers=1 calls=0
*/
void sub_ef02c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef02c0ULL || rel >= 0xef02e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00ef02e0 size=32 callers=1 calls=0
*/
void sub_ef02e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef02e0ULL || rel >= 0xef0300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

