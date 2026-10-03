/* main functions 017b0e00..017df8f0 (203 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 017b0e00 size=16 callers=0 calls=0
*/
void sub_17b0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0e00ULL || rel >= 0x17b0e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0e10 size=80 callers=0 calls=0
*/
void sub_17b0e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0e10ULL || rel >= 0x17b0e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0e60 size=320 callers=0 calls=2
   calls: sub_179a190, sub_17b4a10
*/
void sub_17b0e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0e60ULL || rel >= 0x17b0fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0fa0 size=16 callers=0 calls=0
*/
void sub_17b0fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0fa0ULL || rel >= 0x17b0fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0fb0 size=16 callers=0 calls=0
*/
void sub_17b0fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0fb0ULL || rel >= 0x17b0fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0fc0 size=48 callers=0 calls=0
*/
void sub_17b0fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0fc0ULL || rel >= 0x17b0ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b0ff0 size=48 callers=0 calls=0
*/
void sub_17b0ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b0ff0ULL || rel >= 0x17b1020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b1020 size=992 callers=0 calls=1
   calls: sub_17aa9f0
*/
void sub_17b1020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b1020ULL || rel >= 0x17b1400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b1400 size=1520 callers=0 calls=16
   calls: sub_179a340, sub_179a9b0, sub_17a6560, sub_17a7450, sub_17a8770, sub_17a9850, sub_17aa9f0, sub_17aac70, sub_17ab140, sub_17ab570, sub_17ac720, sub_17ac750
   ... +4 more
*/
void sub_17b1400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b1400ULL || rel >= 0x17b19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b19f0 size=384 callers=1 calls=4
   calls: sub_1791410, sub_1791420, sub_1791460, sub_1791470
*/
void sub_17b19f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b19f0ULL || rel >= 0x17b1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b1b70 size=832 callers=1 calls=6
   calls: sub_17aa9f0, sub_17aac70, sub_17b1ec0, sub_17b2390, sub_17b25e0, sub_17b9db0
*/
void sub_17b1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b1b70ULL || rel >= 0x17b1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b1eb0 size=16 callers=0 calls=0
*/
void sub_17b1eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b1eb0ULL || rel >= 0x17b1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b1ec0 size=800 callers=2 calls=1
   calls: sub_17b9db0
*/
void sub_17b1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b1ec0ULL || rel >= 0x17b21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b21e0 size=432 callers=1 calls=1
   calls: sub_17b9db0
*/
void sub_17b21e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b21e0ULL || rel >= 0x17b2390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2390 size=592 callers=1 calls=1
   calls: sub_17b9db0
*/
void sub_17b2390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2390ULL || rel >= 0x17b25e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b25e0 size=432 callers=1 calls=7
   calls: sub_179a350, sub_17a7450, sub_17ab140, sub_17ac6a0, sub_17b1ec0, sub_17b21e0, sub_17b9db0
*/
void sub_17b25e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b25e0ULL || rel >= 0x17b2790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2790 size=320 callers=1 calls=7
   calls: sub_1788310, sub_1789690, sub_179a5a0, sub_179ba80, sub_17a9ba0, sub_17a9da0, sub_17ac6a0
*/
void sub_17b2790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2790ULL || rel >= 0x17b28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b28d0 size=592 callers=0 calls=17
   calls: sub_17880f0, sub_1788610, sub_1789690, sub_1791430, sub_1791460, sub_1791490, sub_17914b0, sub_179a530, sub_179a5a0, sub_179a8c0, sub_17a9a00, sub_17a9e70
   ... +5 more
*/
void sub_17b28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b28d0ULL || rel >= 0x17b2b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2b20 size=176 callers=0 calls=0
*/
void sub_17b2b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2b20ULL || rel >= 0x17b2bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2bd0 size=48 callers=0 calls=1
   calls: sub_17913f0
*/
void sub_17b2bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2bd0ULL || rel >= 0x17b2c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2c00 size=16 callers=1 calls=0
*/
void sub_17b2c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2c00ULL || rel >= 0x17b2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2c10 size=16 callers=0 calls=0
*/
void sub_17b2c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2c10ULL || rel >= 0x17b2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2c20 size=32 callers=1 calls=0
*/
void sub_17b2c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2c20ULL || rel >= 0x17b2c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2c40 size=192 callers=0 calls=4
   calls: Signature_check_failed_c_c_c_c_must_be_c_c_c_c, sub_177baf0, sub_179cd10, sub_179cd30
*/
void sub_17b2c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2c40ULL || rel >= 0x17b2d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2d00 size=16 callers=0 calls=0
*/
void sub_17b2d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2d00ULL || rel >= 0x17b2d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2d10 size=256 callers=0 calls=0
*/
void sub_17b2d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2d10ULL || rel >= 0x17b2e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2e10 size=208 callers=0 calls=2
   calls: sub_17b9970, sub_17b99d0
*/
void sub_17b2e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2e10ULL || rel >= 0x17b2ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2ee0 size=96 callers=0 calls=0
*/
void sub_17b2ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2ee0ULL || rel >= 0x17b2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2f40 size=16 callers=0 calls=0
*/
void sub_17b2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2f40ULL || rel >= 0x17b2f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2f50 size=16 callers=0 calls=0
*/
void sub_17b2f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2f50ULL || rel >= 0x17b2f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2f60 size=16 callers=0 calls=0
*/
void sub_17b2f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2f60ULL || rel >= 0x17b2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2f70 size=32 callers=0 calls=0
*/
void sub_17b2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2f70ULL || rel >= 0x17b2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2f90 size=32 callers=0 calls=0
*/
void sub_17b2f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2f90ULL || rel >= 0x17b2fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2fb0 size=16 callers=0 calls=0
*/
void sub_17b2fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2fb0ULL || rel >= 0x17b2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2fc0 size=48 callers=0 calls=1
   calls: sub_17a9e80
*/
void sub_17b2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2fc0ULL || rel >= 0x17b2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b2ff0 size=48 callers=1 calls=1
   calls: sub_17a9e90
*/
void sub_17b2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b2ff0ULL || rel >= 0x17b3020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3020 size=608 callers=0 calls=2
   calls: sub_17894b0, sub_17ac2c0
*/
void sub_17b3020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3020ULL || rel >= 0x17b3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3280 size=176 callers=0 calls=0
*/
void sub_17b3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3280ULL || rel >= 0x17b3330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3330 size=16 callers=4 calls=0
*/
void sub_17b3330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3330ULL || rel >= 0x17b3340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3340 size=144 callers=3 calls=2
   calls: sub_179cd30, sub_17b3dd0
*/
void sub_17b3340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3340ULL || rel >= 0x17b33d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b33d0 size=384 callers=2 calls=3
   calls: sub_179cd10, sub_17b3ab0, sub_17b3ad0
*/
void sub_17b33d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b33d0ULL || rel >= 0x17b3550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3550 size=208 callers=4 calls=0
*/
void sub_17b3550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3550ULL || rel >= 0x17b3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3620 size=32 callers=1 calls=0
*/
void sub_17b3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3620ULL || rel >= 0x17b3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3640 size=1136 callers=0 calls=10
   calls: aVertexIndex, sub_1787370, sub_178e290, sub_178e5f0, sub_178f1e0, sub_178fda0, sub_179cd10, sub_17b9920, sub_17b9950, sub_17b9a50
   ref: uTexture%d
   ref: uConstantBufferForVertexShader
   ref: uConstantBufferForPixelShader
   ref: uConstantBufferForGeometryShader
*/
void uConstantBufferForVertexShader(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3640ULL || rel >= 0x17b3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3ab0 size=32 callers=2 calls=0
*/
void sub_17b3ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3ab0ULL || rel >= 0x17b3ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3ad0 size=32 callers=2 calls=0
*/
void sub_17b3ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3ad0ULL || rel >= 0x17b3af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3af0 size=80 callers=3 calls=0
*/
void sub_17b3af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3af0ULL || rel >= 0x17b3b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3b40 size=656 callers=1 calls=8
   calls: sub_1787540, sub_1787560, sub_1787570, sub_178f1e0, sub_178fd30, sub_178fdc0, sub_178fde0, sub_179ccf0
   ref: aTexCoord
   ref: aPositionVg
   ref: aVertexIndex
   ref: aPosition
*/
void aVertexIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3b40ULL || rel >= 0x17b3dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3dd0 size=416 callers=2 calls=8
   calls: sub_178e450, sub_178f140, sub_178fdb0, sub_178fdd0, sub_1790120, sub_179cd30, sub_17b9920, sub_17b9950
*/
void sub_17b3dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3dd0ULL || rel >= 0x17b3f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3f70 size=128 callers=1 calls=1
   calls: sub_1788500
*/
void sub_17b3f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3f70ULL || rel >= 0x17b3ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b3ff0 size=16 callers=12 calls=0
*/
void sub_17b3ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b3ff0ULL || rel >= 0x17b4000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b4000 size=368 callers=0 calls=1
   calls: sub_1797780
*/
void sub_17b4000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b4000ULL || rel >= 0x17b4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b4170 size=1392 callers=1 calls=4
   calls: sub_1796bd0, sub_17aa9f0, sub_17aac70, sub_17b7a70
*/
void sub_17b4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b4170ULL || rel >= 0x17b46e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b46e0 size=160 callers=1 calls=1
   calls: sub_17b4170
*/
void sub_17b46e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b46e0ULL || rel >= 0x17b4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b4780 size=112 callers=0 calls=0
*/
void sub_17b4780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b4780ULL || rel >= 0x17b47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b47f0 size=256 callers=0 calls=1
   calls: sub_1796bd0
   ref: ScreenDecideIndex
*/
void ScreenDecideIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b47f0ULL || rel >= 0x17b48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b48f0 size=224 callers=0 calls=3
   calls: sub_1796bd0, sub_179f3b0, sub_17aa9f0
*/
void sub_17b48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b48f0ULL || rel >= 0x17b49d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b49d0 size=16 callers=0 calls=0
*/
void sub_17b49d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b49d0ULL || rel >= 0x17b49e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b49e0 size=16 callers=0 calls=0
*/
void sub_17b49e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b49e0ULL || rel >= 0x17b49f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b49f0 size=32 callers=6 calls=0
*/
void sub_17b49f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b49f0ULL || rel >= 0x17b4a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b4a10 size=64 callers=1 calls=0
*/
void sub_17b4a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b4a10ULL || rel >= 0x17b4a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b4a50 size=32 callers=4 calls=0
*/
void sub_17b4a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b4a50ULL || rel >= 0x17b4a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b4a70 size=16 callers=2 calls=0
*/
void sub_17b4a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b4a70ULL || rel >= 0x17b4a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b4a80 size=16 callers=1 calls=0
*/
void sub_17b4a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b4a80ULL || rel >= 0x17b4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b4a90 size=32 callers=4 calls=0
*/
void sub_17b4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b4a90ULL || rel >= 0x17b4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b4ab0 size=32 callers=4 calls=0
*/
void sub_17b4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b4ab0ULL || rel >= 0x17b4ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b4ad0 size=3296 callers=1 calls=4
   calls: sub_179a2d0, sub_179cd10, sub_17a4490, sub_17aa4f0
*/
void sub_17b4ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b4ad0ULL || rel >= 0x17b57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b57b0 size=496 callers=0 calls=2
   calls: sub_17797d0, sub_17b98c0
*/
void sub_17b57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b57b0ULL || rel >= 0x17b59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b59a0 size=224 callers=0 calls=0
*/
void sub_17b59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b59a0ULL || rel >= 0x17b5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5a80 size=240 callers=0 calls=0
*/
void sub_17b5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5a80ULL || rel >= 0x17b5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5b70 size=32 callers=4 calls=0
*/
void sub_17b5b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5b70ULL || rel >= 0x17b5b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5b90 size=32 callers=0 calls=0
*/
void sub_17b5b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5b90ULL || rel >= 0x17b5bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5bb0 size=64 callers=0 calls=1
   calls: sub_17a9e80
*/
void sub_17b5bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5bb0ULL || rel >= 0x17b5bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5bf0 size=192 callers=0 calls=3
   calls: sub_179cd30, sub_17a67c0, sub_17aad00
*/
void sub_17b5bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5bf0ULL || rel >= 0x17b5cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5cb0 size=16 callers=0 calls=0
*/
void sub_17b5cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5cb0ULL || rel >= 0x17b5cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5cc0 size=80 callers=0 calls=0
*/
void sub_17b5cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5cc0ULL || rel >= 0x17b5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5d10 size=32 callers=0 calls=0
*/
void sub_17b5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5d10ULL || rel >= 0x17b5d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5d30 size=144 callers=0 calls=0
*/
void sub_17b5d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5d30ULL || rel >= 0x17b5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5dc0 size=48 callers=0 calls=0
*/
void sub_17b5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5dc0ULL || rel >= 0x17b5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5df0 size=96 callers=0 calls=0
*/
void sub_17b5df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5df0ULL || rel >= 0x17b5e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b5e50 size=768 callers=14 calls=8
   calls: sub_17792b0, sub_1782330, sub_1782380, sub_1782420, sub_1783ac0, sub_1783b10, sub_1783bb0, sub_17ab140
*/
void sub_17b5e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b5e50ULL || rel >= 0x17b6150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b6150 size=512 callers=1 calls=0
*/
void sub_17b6150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b6150ULL || rel >= 0x17b6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b6350 size=704 callers=1 calls=6
   calls: sub_17798a0, sub_17ab140, sub_17ab4d0, sub_17acae0, sub_17b6150, sub_17b9b40
*/
void sub_17b6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b6350ULL || rel >= 0x17b6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b6610 size=512 callers=0 calls=17
   calls: sub_17796b0, sub_17796c0, sub_1779890, sub_1782330, sub_1782380, sub_1782bd0, sub_1782c60, sub_1783ac0, sub_1783b10, sub_1784370, sub_1784400, sub_17a6560
   ... +5 more
*/
void sub_17b6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b6610ULL || rel >= 0x17b6810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b6810 size=896 callers=1 calls=2
   calls: sub_17b7ae0, sub_17b7dc0
*/
void sub_17b6810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b6810ULL || rel >= 0x17b6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b6b90 size=864 callers=1 calls=2
   calls: sub_17b7ae0, sub_17b8020
*/
void sub_17b6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b6b90ULL || rel >= 0x17b6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b6ef0 size=16 callers=0 calls=0
*/
void sub_17b6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b6ef0ULL || rel >= 0x17b6f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b6f00 size=160 callers=0 calls=4
   calls: sub_1788310, sub_179a780, sub_179ba80, sub_17a9da0
*/
void sub_17b6f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b6f00ULL || rel >= 0x17b6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b6fa0 size=16 callers=0 calls=0
*/
void sub_17b6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b6fa0ULL || rel >= 0x17b6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b6fb0 size=464 callers=0 calls=5
   calls: sub_17796d0, sub_1779720, sub_17797c0, sub_179cd10, sub_179cd30
*/
void sub_17b6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b6fb0ULL || rel >= 0x17b7180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7180 size=128 callers=0 calls=3
   calls: sub_1779710, sub_17797a0, sub_179cd30
*/
void sub_17b7180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7180ULL || rel >= 0x17b7200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7200 size=208 callers=0 calls=0
*/
void sub_17b7200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7200ULL || rel >= 0x17b72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b72d0 size=192 callers=0 calls=0
*/
void sub_17b72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b72d0ULL || rel >= 0x17b7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7390 size=192 callers=0 calls=0
*/
void sub_17b7390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7390ULL || rel >= 0x17b7450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7450 size=192 callers=0 calls=0
*/
void sub_17b7450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7450ULL || rel >= 0x17b7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7510 size=16 callers=11 calls=0
*/
void sub_17b7510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7510ULL || rel >= 0x17b7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7520 size=448 callers=5 calls=0
*/
void sub_17b7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7520ULL || rel >= 0x17b76e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b76e0 size=160 callers=4 calls=0
*/
void sub_17b76e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b76e0ULL || rel >= 0x17b7780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7780 size=16 callers=0 calls=0
*/
void sub_17b7780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7780ULL || rel >= 0x17b7790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7790 size=368 callers=0 calls=1
   calls: sub_17792b0
*/
void sub_17b7790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7790ULL || rel >= 0x17b7900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7900 size=368 callers=0 calls=1
   calls: sub_17792b0
*/
void sub_17b7900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7900ULL || rel >= 0x17b7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7a70 size=64 callers=3 calls=0
*/
void sub_17b7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7a70ULL || rel >= 0x17b7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7ab0 size=48 callers=1 calls=0
*/
void sub_17b7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7ab0ULL || rel >= 0x17b7ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7ae0 size=560 callers=2 calls=1
   calls: sub_17b9190
*/
void sub_17b7ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7ae0ULL || rel >= 0x17b7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7d10 size=176 callers=0 calls=0
*/
void sub_17b7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7d10ULL || rel >= 0x17b7dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b7dc0 size=608 callers=1 calls=0
*/
void sub_17b7dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b7dc0ULL || rel >= 0x17b8020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8020 size=560 callers=1 calls=0
*/
void sub_17b8020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8020ULL || rel >= 0x17b8250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8250 size=16 callers=4 calls=0
*/
void sub_17b8250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8250ULL || rel >= 0x17b8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8260 size=176 callers=3 calls=1
   calls: sub_179cd30
*/
void sub_17b8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8260ULL || rel >= 0x17b8310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8310 size=272 callers=1 calls=1
   calls: sub_179cd10
*/
void sub_17b8310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8310ULL || rel >= 0x17b8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8420 size=288 callers=0 calls=1
   calls: sub_179cd10
*/
void sub_17b8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8420ULL || rel >= 0x17b8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8540 size=320 callers=0 calls=3
   calls: sub_1790130, sub_1790df0, sub_179cd10
*/
void sub_17b8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8540ULL || rel >= 0x17b8680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8680 size=80 callers=0 calls=0
*/
void sub_17b8680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8680ULL || rel >= 0x17b86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b86d0 size=160 callers=2 calls=0
*/
void sub_17b86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b86d0ULL || rel >= 0x17b8770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8770 size=144 callers=2 calls=0
*/
void sub_17b8770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8770ULL || rel >= 0x17b8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8800 size=80 callers=2 calls=0
*/
void sub_17b8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8800ULL || rel >= 0x17b8850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8850 size=176 callers=0 calls=0
*/
void sub_17b8850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8850ULL || rel >= 0x17b8900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8900 size=16 callers=0 calls=0
*/
void sub_17b8900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8900ULL || rel >= 0x17b8910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8910 size=96 callers=0 calls=2
   calls: sub_1790c30, sub_1790de0
*/
void sub_17b8910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8910ULL || rel >= 0x17b8970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8970 size=32 callers=0 calls=0
*/
void sub_17b8970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8970ULL || rel >= 0x17b8990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8990 size=16 callers=0 calls=0
*/
void sub_17b8990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8990ULL || rel >= 0x17b89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b89a0 size=80 callers=0 calls=0
*/
void sub_17b89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b89a0ULL || rel >= 0x17b89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b89f0 size=16 callers=0 calls=0
*/
void sub_17b89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b89f0ULL || rel >= 0x17b8a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8a00 size=16 callers=0 calls=0
*/
void sub_17b8a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8a00ULL || rel >= 0x17b8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8a10 size=384 callers=9 calls=6
   calls: sub_1787580, sub_1787590, sub_17875a0, sub_1787670, sub_1790160, sub_1790e20
*/
void sub_17b8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8a10ULL || rel >= 0x17b8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8b90 size=128 callers=0 calls=2
   calls: sub_17902f0, sub_1790f00
*/
void sub_17b8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8b90ULL || rel >= 0x17b8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8c10 size=64 callers=1 calls=1
   calls: sub_17b9f60
*/
void sub_17b8c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8c10ULL || rel >= 0x17b8c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8c50 size=48 callers=0 calls=1
   calls: sub_179cd30
*/
void sub_17b8c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8c50ULL || rel >= 0x17b8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8c80 size=240 callers=0 calls=0
*/
void sub_17b8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8c80ULL || rel >= 0x17b8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8d70 size=64 callers=0 calls=1
   calls: sub_1790150
*/
void sub_17b8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8d70ULL || rel >= 0x17b8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8db0 size=80 callers=0 calls=2
   calls: sub_1790150, sub_1790e10
*/
void sub_17b8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8db0ULL || rel >= 0x17b8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8e00 size=16 callers=0 calls=0
*/
void sub_17b8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8e00ULL || rel >= 0x17b8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8e10 size=16 callers=0 calls=0
*/
void sub_17b8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8e10ULL || rel >= 0x17b8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8e20 size=16 callers=0 calls=0
*/
void sub_17b8e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8e20ULL || rel >= 0x17b8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8e30 size=16 callers=0 calls=0
*/
void sub_17b8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8e30ULL || rel >= 0x17b8e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8e40 size=16 callers=0 calls=0
*/
void sub_17b8e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8e40ULL || rel >= 0x17b8e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8e50 size=176 callers=0 calls=0
*/
void sub_17b8e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8e50ULL || rel >= 0x17b8f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8f00 size=32 callers=0 calls=0
*/
void sub_17b8f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8f00ULL || rel >= 0x17b8f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8f20 size=16 callers=0 calls=0
*/
void sub_17b8f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8f20ULL || rel >= 0x17b8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8f30 size=16 callers=0 calls=0
*/
void sub_17b8f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8f30ULL || rel >= 0x17b8f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8f40 size=16 callers=0 calls=0
*/
void sub_17b8f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8f40ULL || rel >= 0x17b8f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8f50 size=16 callers=0 calls=0
*/
void sub_17b8f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8f50ULL || rel >= 0x17b8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8f60 size=16 callers=0 calls=0
*/
void sub_17b8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8f60ULL || rel >= 0x17b8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b8f70 size=208 callers=0 calls=3
   calls: sub_1787640, sub_1790b60, sub_1790ca0
*/
void sub_17b8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b8f70ULL || rel >= 0x17b9040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9040 size=16 callers=2 calls=0
*/
void sub_17b9040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9040ULL || rel >= 0x17b9050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9050 size=176 callers=9 calls=0
*/
void sub_17b9050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9050ULL || rel >= 0x17b9100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9100 size=64 callers=2 calls=0
*/
void sub_17b9100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9100ULL || rel >= 0x17b9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9140 size=80 callers=3 calls=0
*/
void sub_17b9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9140ULL || rel >= 0x17b9190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9190 size=400 callers=17 calls=0
*/
void sub_17b9190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9190ULL || rel >= 0x17b9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9320 size=176 callers=8 calls=1
   calls: sub_17b93d0
*/
void sub_17b9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9320ULL || rel >= 0x17b93d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b93d0 size=1264 callers=1 calls=0
*/
void sub_17b93d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b93d0ULL || rel >= 0x17b98c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b98c0 size=96 callers=19 calls=2
   calls: sub_1787320, sub_1787960
*/
void sub_17b98c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b98c0ULL || rel >= 0x17b9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9920 size=48 callers=2 calls=0
*/
void sub_17b9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9920ULL || rel >= 0x17b9950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9950 size=32 callers=2 calls=0
*/
void sub_17b9950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9950ULL || rel >= 0x17b9970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9970 size=96 callers=1 calls=0
*/
void sub_17b9970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9970ULL || rel >= 0x17b99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b99d0 size=128 callers=1 calls=0
*/
void sub_17b99d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b99d0ULL || rel >= 0x17b9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9a50 size=240 callers=1 calls=1
   calls: sub_178e5f0
*/
void sub_17b9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9a50ULL || rel >= 0x17b9b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9b40 size=64 callers=6 calls=0
*/
void sub_17b9b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9b40ULL || rel >= 0x17b9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9b80 size=112 callers=2 calls=0
*/
void sub_17b9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9b80ULL || rel >= 0x17b9bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9bf0 size=160 callers=1 calls=1
   calls: sub_17baf30
*/
void sub_17b9bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9bf0ULL || rel >= 0x17b9c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9c90 size=128 callers=1 calls=0
*/
void sub_17b9c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9c90ULL || rel >= 0x17b9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9d10 size=160 callers=1 calls=0
*/
void sub_17b9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9d10ULL || rel >= 0x17b9db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9db0 size=48 callers=27 calls=0
*/
void sub_17b9db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9db0ULL || rel >= 0x17b9de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9de0 size=288 callers=6 calls=1
   calls: sub_179a990
*/
void sub_17b9de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9de0ULL || rel >= 0x17b9f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9f00 size=96 callers=7 calls=2
   calls: sub_179a8c0, sub_17b3f70
*/
void sub_17b9f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9f00ULL || rel >= 0x17b9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9f60 size=80 callers=2 calls=1
   calls: sub_179cd10
*/
void sub_17b9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9f60ULL || rel >= 0x17b9fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017b9fb0 size=224 callers=1 calls=8
   calls: sub_17913c0, sub_1791430, sub_1791490, sub_17914a0, sub_17914b0, sub_17914f0, sub_1791510, sub_1791520
*/
void sub_17b9fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17b9fb0ULL || rel >= 0x17ba090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ba090 size=16 callers=0 calls=0
*/
void sub_17ba090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ba090ULL || rel >= 0x17ba0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ba0a0 size=48 callers=0 calls=1
   calls: sub_17913f0
*/
void sub_17ba0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ba0a0ULL || rel >= 0x17ba0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ba0d0 size=2704 callers=1 calls=2
   calls: sub_1791420, sub_1791480
*/
void sub_17ba0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ba0d0ULL || rel >= 0x17bab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bab60 size=128 callers=0 calls=4
   calls: sub_1791490, sub_17914d0, sub_17914e0, sub_17ba0d0
*/
void sub_17bab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bab60ULL || rel >= 0x17babe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017babe0 size=432 callers=0 calls=1
   calls: sub_1791410
*/
void sub_17babe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17babe0ULL || rel >= 0x17bad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bad90 size=416 callers=0 calls=1
   calls: sub_1791410
*/
void sub_17bad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bad90ULL || rel >= 0x17baf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017baf30 size=32 callers=1 calls=0
*/
void sub_17baf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17baf30ULL || rel >= 0x17baf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017baf50 size=96 callers=1 calls=2
   calls: sub_1790f10, sub_1799fb0
*/
void sub_17baf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17baf50ULL || rel >= 0x17bafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bafb0 size=688 callers=1 calls=12
   calls: sub_1787420, sub_1787440, sub_1787610, sub_1787690, sub_178f6e0, sub_178f700, sub_1790130, sub_1790df0, sub_1790f10, sub_1790f40, sub_179cd10, sub_17b8a10
*/
void sub_17bafb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bafb0ULL || rel >= 0x17bb260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bb260 size=64 callers=0 calls=1
   calls: sub_1790f30
*/
void sub_17bb260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bb260ULL || rel >= 0x17bb2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bb2a0 size=64 callers=0 calls=2
   calls: sub_1790f30, sub_179a050
*/
void sub_17bb2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bb2a0ULL || rel >= 0x17bb2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bb2e0 size=176 callers=1 calls=1
   calls: sub_17bafb0
*/
void sub_17bb2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bb2e0ULL || rel >= 0x17bb390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bb390 size=64 callers=0 calls=1
   calls: sub_17bb3d0
*/
void sub_17bb390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bb390ULL || rel >= 0x17bb3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bb3d0 size=208 callers=1 calls=4
   calls: sub_178f6f0, sub_178f8d0, sub_1791000, sub_179cd30
*/
void sub_17bb3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bb3d0ULL || rel >= 0x17bb4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bb4a0 size=16 callers=0 calls=0
*/
void sub_17bb4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bb4a0ULL || rel >= 0x17bb4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bb4b0 size=256 callers=0 calls=4
   calls: sub_1789250, sub_179a780, sub_179a900, sub_17bb5b0
*/
void sub_17bb4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bb4b0ULL || rel >= 0x17bb5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bb5b0 size=304 callers=1 calls=4
   calls: sub_1787580, sub_1787590, sub_1788ef0, sub_179a900
*/
void sub_17bb5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bb5b0ULL || rel >= 0x17bb6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bb6e0 size=176 callers=0 calls=0
*/
void sub_17bb6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bb6e0ULL || rel >= 0x17bb790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bb790 size=1424 callers=1 calls=10
   calls: sub_179a0f0, sub_179a130, sub_179a250, sub_179a2d0, sub_179cd10, sub_17a4490, sub_17a5b20, sub_17aa4f0, sub_17b98c0, sub_17bbd20
*/
void sub_17bb790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bb790ULL || rel >= 0x17bbd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bbd20 size=208 callers=1 calls=0
*/
void sub_17bbd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bbd20ULL || rel >= 0x17bbdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bbdf0 size=32 callers=0 calls=0
*/
void sub_17bbdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bbdf0ULL || rel >= 0x17bbe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bbe10 size=64 callers=0 calls=1
   calls: sub_17a9e80
*/
void sub_17bbe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bbe10ULL || rel >= 0x17bbe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bbe50 size=288 callers=0 calls=3
   calls: sub_179cd30, sub_17a67c0, sub_17aad00
*/
void sub_17bbe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bbe50ULL || rel >= 0x17bbf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bbf70 size=16 callers=0 calls=0
*/
void sub_17bbf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bbf70ULL || rel >= 0x17bbf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bbf80 size=16 callers=0 calls=0
*/
void sub_17bbf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bbf80ULL || rel >= 0x17bbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bbf90 size=48 callers=0 calls=0
*/
void sub_17bbf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bbf90ULL || rel >= 0x17bbfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bbfc0 size=48 callers=0 calls=0
*/
void sub_17bbfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bbfc0ULL || rel >= 0x17bbff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bbff0 size=16 callers=0 calls=0
*/
void sub_17bbff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bbff0ULL || rel >= 0x17bc000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bc000 size=128 callers=0 calls=0
*/
void sub_17bc000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bc000ULL || rel >= 0x17bc080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bc080 size=256 callers=0 calls=0
*/
void sub_17bc080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bc080ULL || rel >= 0x17bc180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bc180 size=16 callers=0 calls=0
*/
void sub_17bc180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bc180ULL || rel >= 0x17bc190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bc190 size=752 callers=0 calls=11
   calls: sub_17a6560, sub_17a7450, sub_17a8770, sub_17a9850, sub_17ab570, sub_17ac9d0, sub_17acae0, sub_17acbc0, sub_17bc480, sub_17bc850, sub_17bcb90
*/
void sub_17bc190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bc190ULL || rel >= 0x17bc480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bc480 size=976 callers=1 calls=8
   calls: sub_17a7450, sub_17ab140, sub_17ac720, sub_17ac750, sub_17bd080, sub_17bd6a0, sub_17bdb40, sub_17be010
*/
void sub_17bc480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bc480ULL || rel >= 0x17bc850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bc850 size=832 callers=1 calls=7
   calls: sub_17a7450, sub_17ab140, sub_17ac720, sub_17ac750, sub_17be010, sub_17be110, sub_17be540
*/
void sub_17bc850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bc850ULL || rel >= 0x17bcb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bcb90 size=192 callers=1 calls=3
   calls: sub_17ab140, sub_17bea00, sub_17bee30
*/
void sub_17bcb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bcb90ULL || rel >= 0x17bcc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bcc50 size=16 callers=0 calls=0
*/
void sub_17bcc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bcc50ULL || rel >= 0x17bcc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bcc60 size=672 callers=0 calls=13
   calls: sub_17880f0, sub_1789690, sub_179a530, sub_179a5a0, sub_179a8a0, sub_179a8c0, sub_17a9ba0, sub_17a9c20, sub_17a9ca0, sub_17a9da0, sub_17a9e70, sub_17ace20
   ... +1 more
*/
void sub_17bcc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bcc60ULL || rel >= 0x17bcf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bcf00 size=336 callers=0 calls=10
   calls: sub_1788310, sub_179a530, sub_179a5a0, sub_179a8a0, sub_179a8c0, sub_179ba80, sub_17a9a00, sub_17a9e70, sub_17ace20, uTexture3
*/
void sub_17bcf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bcf00ULL || rel >= 0x17bd050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bd050 size=48 callers=0 calls=0
*/
void sub_17bd050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bd050ULL || rel >= 0x17bd080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bd080 size=1568 callers=1 calls=4
   calls: sub_179a310, sub_17a7450, sub_17ac720, sub_17ac750
*/
void sub_17bd080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bd080ULL || rel >= 0x17bd6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bd6a0 size=1184 callers=1 calls=4
   calls: sub_179a310, sub_17a7450, sub_17ac720, sub_17ac750
*/
void sub_17bd6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bd6a0ULL || rel >= 0x17bdb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bdb40 size=1232 callers=1 calls=4
   calls: sub_179a310, sub_17a7450, sub_17ac720, sub_17ac750
*/
void sub_17bdb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bdb40ULL || rel >= 0x17be010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017be010 size=256 callers=2 calls=2
   calls: sub_179a340, sub_17a7450
*/
void sub_17be010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17be010ULL || rel >= 0x17be110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017be110 size=1072 callers=1 calls=4
   calls: sub_179a310, sub_17a7450, sub_17ac720, sub_17ac750
*/
void sub_17be110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17be110ULL || rel >= 0x17be540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017be540 size=1216 callers=1 calls=4
   calls: sub_179a310, sub_17a7450, sub_17ac720, sub_17ac750
*/
void sub_17be540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17be540ULL || rel >= 0x17bea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bea00 size=1072 callers=1 calls=4
   calls: sub_179a310, sub_17a7450, sub_17ac720, sub_17ac750
*/
void sub_17bea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bea00ULL || rel >= 0x17bee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bee30 size=1216 callers=1 calls=4
   calls: sub_179a310, sub_17a7450, sub_17ac720, sub_17ac750
*/
void sub_17bee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bee30ULL || rel >= 0x17bf2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bf2f0 size=176 callers=0 calls=0
*/
void sub_17bf2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bf2f0ULL || rel >= 0x17bf3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bf3a0 size=1328 callers=1 calls=0
*/
void sub_17bf3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bf3a0ULL || rel >= 0x17bf8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017bf8d0 size=2560 callers=1 calls=0
*/
void sub_17bf8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17bf8d0ULL || rel >= 0x17c02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c02d0 size=16 callers=0 calls=0
*/
void sub_17c02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c02d0ULL || rel >= 0x17c02e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c02e0 size=208 callers=1 calls=1
   calls: sub_1789690
*/
void sub_17c02e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c02e0ULL || rel >= 0x17c03b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c03b0 size=432 callers=1 calls=1
   calls: sub_1789690
*/
void sub_17c03b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c03b0ULL || rel >= 0x17c0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c0560 size=176 callers=1 calls=0
*/
void sub_17c0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c0560ULL || rel >= 0x17c0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c0610 size=416 callers=2 calls=0
*/
void sub_17c0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c0610ULL || rel >= 0x17c07b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c07b0 size=128 callers=1 calls=0
*/
void sub_17c07b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c07b0ULL || rel >= 0x17c0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c0830 size=672 callers=1 calls=3
   calls: ShaderBinary_Bind_Error, sub_17c0ad0, sub_17ccc10
   ref: The EmitterSet is not found in this resource. EmitterSet Id : %d. ResourceId : %d
   ref: EmitterResource Setup Failed.
   ref: The Resource is not found in VfxSystem. ResourceId : %d.
*/
void EmitterResource_Setup_Failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c0830ULL || rel >= 0x17c0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c0ad0 size=480 callers=1 calls=2
   calls: Emitter_Initialize_Failed, sub_17d25f0
*/
void sub_17c0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c0ad0ULL || rel >= 0x17c0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c0cb0 size=624 callers=3 calls=8
   calls: There_is_no_available_Emitter_instance, sub_17c8450, sub_17c97d0, sub_17c9ae0, sub_17ccc00, sub_17ccc10, sub_17de500, sub_17de510
   ref: CustomShader Callback is not established. CustomShaderID : %d
   ref: Emitter Initialize Failed.
   ref: CustomAction Callback is not established. CustomActionID : %d
*/
void Emitter_Initialize_Failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c0cb0ULL || rel >= 0x17c0f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c0f20 size=224 callers=3 calls=2
   calls: sub_17c97d0, sub_17de510
*/
void sub_17c0f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c0f20ULL || rel >= 0x17c1000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1000 size=128 callers=3 calls=1
   calls: sub_17c0f20
*/
void sub_17c1000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1000ULL || rel >= 0x17c1080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1080 size=112 callers=1 calls=1
   calls: sub_17c10f0
*/
void sub_17c1080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1080ULL || rel >= 0x17c10f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c10f0 size=640 callers=3 calls=5
   calls: sub_17c0f20, sub_17c1370, sub_17c18d0, sub_17c97d0, sub_17de510
*/
void sub_17c10f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c10f0ULL || rel >= 0x17c1370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1370 size=560 callers=2 calls=9
   calls: sub_17c1c60, sub_17c4ec0, sub_17c4fc0, sub_17c54d0, sub_17c68f0, sub_17c9940, sub_17c99c0, sub_17c9a50, sub_17df8a0
*/
void sub_17c1370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1370ULL || rel >= 0x17c15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c15a0 size=368 callers=3 calls=2
   calls: sub_17df650, sub_17df7a0
*/
void sub_17c15a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c15a0ULL || rel >= 0x17c1710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1710 size=448 callers=2 calls=1
   calls: sub_17c15a0
*/
void sub_17c1710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1710ULL || rel >= 0x17c18d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c18d0 size=272 callers=2 calls=0
*/
void sub_17c18d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c18d0ULL || rel >= 0x17c19e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c19e0 size=16 callers=0 calls=0
*/
void sub_17c19e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c19e0ULL || rel >= 0x17c19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c19f0 size=16 callers=4 calls=0
*/
void sub_17c19f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c19f0ULL || rel >= 0x17c1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1a00 size=16 callers=4 calls=0
*/
void sub_17c1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1a00ULL || rel >= 0x17c1a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1a10 size=320 callers=7 calls=0
*/
void sub_17c1a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1a10ULL || rel >= 0x17c1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1b50 size=32 callers=2 calls=0
*/
void sub_17c1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1b50ULL || rel >= 0x17c1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1b70 size=32 callers=4 calls=0
*/
void sub_17c1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1b70ULL || rel >= 0x17c1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1b90 size=16 callers=1 calls=0
*/
void sub_17c1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1b90ULL || rel >= 0x17c1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1ba0 size=48 callers=24 calls=0
*/
void sub_17c1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1ba0ULL || rel >= 0x17c1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1bd0 size=96 callers=2 calls=0
*/
void sub_17c1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1bd0ULL || rel >= 0x17c1c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1c30 size=48 callers=1 calls=0
*/
void sub_17c1c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1c30ULL || rel >= 0x17c1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1c60 size=400 callers=3 calls=2
   calls: sub_17d7710, sub_17dcf00
*/
void sub_17c1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1c60ULL || rel >= 0x17c1df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1df0 size=384 callers=1 calls=4
   calls: sub_178f6e0, sub_178f8f0, sub_178fb50, sub_178fda0
*/
void sub_17c1df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1df0ULL || rel >= 0x17c1f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1f70 size=32 callers=1 calls=0
*/
void sub_17c1f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1f70ULL || rel >= 0x17c1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1f90 size=16 callers=1 calls=0
*/
void sub_17c1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1f90ULL || rel >= 0x17c1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c1fa0 size=256 callers=1 calls=0
*/
void sub_17c1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c1fa0ULL || rel >= 0x17c20a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c20a0 size=2768 callers=1 calls=7
   calls: sub_1787540, sub_1787560, sub_1787570, sub_178f1e0, sub_178fd30, sub_178fdc0, sub_178fde0
   ref: sysTexCoordAttr
   ref: sysVertexColor0Attr
   ref: sysEmitterPluginAttr0
   ref: sysEmtMat0Attr
   ref: sysScaleAttr
   ref: sysTangentAttr
   ref: sysEmitterPluginAttr3
   ref: sysLocalVecAttr
*/
void sysEmitterPluginAttr4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c20a0ULL || rel >= 0x17c2b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c2b70 size=48 callers=1 calls=1
   calls: sub_1790120
*/
void sub_17c2b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c2b70ULL || rel >= 0x17c2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c2ba0 size=304 callers=2 calls=4
   calls: sub_17ccc10, sub_17d4b40, sub_17d5ad0, sysEmitterPluginAttr4
   ref: ShaderBinary Bind Error.
*/
void ShaderBinary_Bind_Error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c2ba0ULL || rel >= 0x17c2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c2cd0 size=4576 callers=1 calls=6
   calls: sub_1787bf0, sub_1787c10, sub_1787c20, sub_17c3eb0, sub_17d49e0, sub_17e89c0
*/
void sub_17c2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c2cd0ULL || rel >= 0x17c3eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c3eb0 size=1152 callers=1 calls=0
*/
void sub_17c3eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c3eb0ULL || rel >= 0x17c4330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c4330 size=1360 callers=2 calls=0
*/
void sub_17c4330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c4330ULL || rel >= 0x17c4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c4880 size=96 callers=1 calls=1
   calls: sub_17e89c0
*/
void sub_17c4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c4880ULL || rel >= 0x17c48e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c48e0 size=16 callers=1 calls=0
*/
void sub_17c48e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c48e0ULL || rel >= 0x17c48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c48f0 size=672 callers=4 calls=0
*/
void sub_17c48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c48f0ULL || rel >= 0x17c4b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c4b90 size=816 callers=2 calls=2
   calls: sub_17c8440, sub_17c98c0
*/
void sub_17c4b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c4b90ULL || rel >= 0x17c4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c4ec0 size=256 callers=2 calls=0
*/
void sub_17c4ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c4ec0ULL || rel >= 0x17c4fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c4fc0 size=1296 callers=4 calls=1
   calls: sub_17c48f0
*/
void sub_17c4fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c4fc0ULL || rel >= 0x17c54d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c54d0 size=2320 callers=1 calls=10
   calls: sub_17c4b90, sub_17c4fc0, sub_17c5de0, sub_17c68f0, sub_17c8440, sub_17c9940, sub_17c9af0, sub_17cc980, sub_17d76e0, sub_17dced0
*/
void sub_17c54d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c54d0ULL || rel >= 0x17c5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c5de0 size=2832 callers=1 calls=3
   calls: sub_17c48f0, sub_17c4b90, sub_17ce920
*/
void sub_17c5de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c5de0ULL || rel >= 0x17c68f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c68f0 size=832 callers=3 calls=0
*/
void sub_17c68f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c68f0ULL || rel >= 0x17c6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c6c30 size=960 callers=1 calls=4
   calls: sub_17cee80, sub_17cf350, sub_17cfb80, sub_17d03b0
*/
void sub_17c6c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c6c30ULL || rel >= 0x17c6ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c6ff0 size=1088 callers=0 calls=3
   calls: sub_17c6c30, sub_17c7430, sub_17ccc00
*/
void sub_17c6ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c6ff0ULL || rel >= 0x17c7430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c7430 size=4112 callers=1 calls=1
   calls: Emitter_Initialize_Failed
*/
void sub_17c7430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c7430ULL || rel >= 0x17c8440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c8440 size=16 callers=5 calls=0
*/
void sub_17c8440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c8440ULL || rel >= 0x17c8450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c8450 size=592 callers=1 calls=4
   calls: sub_17c0560, sub_17c86a0, sub_17d25f0, sub_17d28d0
*/
void sub_17c8450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c8450ULL || rel >= 0x17c86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c86a0 size=2864 callers=1 calls=10
   calls: sub_1787320, sub_1787960, sub_17c0610, sub_17c9270, sub_17c9490, sub_17c9f80, sub_17ccbd0, sub_17ccc00, sub_17ccc40, unnamed_90
*/
void sub_17c86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c86a0ULL || rel >= 0x17c91d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c91d0 size=48 callers=1 calls=0
*/
void sub_17c91d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c91d0ULL || rel >= 0x17c9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9200 size=80 callers=3 calls=1
   calls: unnamed_90
*/
void sub_17c9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9200ULL || rel >= 0x17c9250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9250 size=32 callers=3 calls=0
*/
void sub_17c9250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9250ULL || rel >= 0x17c9270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9270 size=544 callers=1 calls=0
*/
void sub_17c9270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9270ULL || rel >= 0x17c9490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9490 size=832 callers=1 calls=0
*/
void sub_17c9490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9490ULL || rel >= 0x17c97d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c97d0 size=240 callers=5 calls=5
   calls: sub_17c0610, sub_17c07b0, sub_17c9f80, sub_17ccc40, sub_17e8e80
*/
void sub_17c97d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c97d0ULL || rel >= 0x17c98c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c98c0 size=128 callers=1 calls=0
*/
void sub_17c98c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c98c0ULL || rel >= 0x17c9940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9940 size=128 callers=3 calls=0
*/
void sub_17c9940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9940ULL || rel >= 0x17c99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c99c0 size=144 callers=1 calls=0
*/
void sub_17c99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c99c0ULL || rel >= 0x17c9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9a50 size=144 callers=1 calls=0
*/
void sub_17c9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9a50ULL || rel >= 0x17c9ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9ae0 size=16 callers=1 calls=0
*/
void sub_17c9ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9ae0ULL || rel >= 0x17c9af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9af0 size=128 callers=1 calls=0
*/
void sub_17c9af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9af0ULL || rel >= 0x17c9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9b70 size=416 callers=1 calls=8
   calls: sub_1787320, sub_1787360, sub_1787960, sub_1787ac0, sub_1787bf0, sub_1787c60, sub_1789bc0, sub_1789c10
*/
void sub_17c9b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9b70ULL || rel >= 0x17c9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9d10 size=112 callers=1 calls=1
   calls: sub_1787bb0
*/
void sub_17c9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9d10ULL || rel >= 0x17c9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9d80 size=512 callers=3 calls=2
   calls: sub_17ccc00, sub_17ccc10
   ref: Current GpuBuffer Allocation : %d/%d.
   ref: GpuBuffer management domain is lacking. 
   ref: GpuBuffer Allocation Failed. Allocated size : %d Byte.
*/
void unnamed_90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9d80ULL || rel >= 0x17c9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017c9f80 size=208 callers=8 calls=0
*/
void sub_17c9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17c9f80ULL || rel >= 0x17ca050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ca050 size=208 callers=1 calls=0
*/
void sub_17ca050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ca050ULL || rel >= 0x17ca120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ca120 size=64 callers=0 calls=1
   calls: sub_1789c00
*/
void sub_17ca120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ca120ULL || rel >= 0x17ca160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ca160 size=80 callers=0 calls=2
   calls: sub_1787ab0, sub_1789c00
*/
void sub_17ca160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ca160ULL || rel >= 0x17ca1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ca1b0 size=64 callers=0 calls=0
*/
void sub_17ca1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ca1b0ULL || rel >= 0x17ca1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ca1f0 size=480 callers=1 calls=0
*/
void sub_17ca1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ca1f0ULL || rel >= 0x17ca3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ca3d0 size=768 callers=0 calls=0
*/
void sub_17ca3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ca3d0ULL || rel >= 0x17ca6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ca6d0 size=736 callers=1 calls=0
*/
void sub_17ca6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ca6d0ULL || rel >= 0x17ca9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ca9b0 size=1360 callers=0 calls=1
   calls: sub_17cc7d0
*/
void sub_17ca9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ca9b0ULL || rel >= 0x17caf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017caf00 size=1216 callers=0 calls=0
*/
void sub_17caf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17caf00ULL || rel >= 0x17cb3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cb3c0 size=1200 callers=0 calls=0
*/
void sub_17cb3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cb3c0ULL || rel >= 0x17cb870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cb870 size=1472 callers=0 calls=1
   calls: sub_17cc7d0
*/
void sub_17cb870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cb870ULL || rel >= 0x17cbe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cbe30 size=144 callers=0 calls=1
   calls: sub_17ca1f0
*/
void sub_17cbe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cbe30ULL || rel >= 0x17cbec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cbec0 size=144 callers=0 calls=1
   calls: sub_17ca6d0
*/
void sub_17cbec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cbec0ULL || rel >= 0x17cbf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cbf50 size=432 callers=0 calls=0
*/
void sub_17cbf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cbf50ULL || rel >= 0x17cc100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cc100 size=544 callers=0 calls=0
*/
void sub_17cc100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cc100ULL || rel >= 0x17cc320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cc320 size=144 callers=0 calls=0
*/
void sub_17cc320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cc320ULL || rel >= 0x17cc3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cc3b0 size=304 callers=0 calls=0
*/
void sub_17cc3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cc3b0ULL || rel >= 0x17cc4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cc4e0 size=320 callers=0 calls=0
*/
void sub_17cc4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cc4e0ULL || rel >= 0x17cc620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cc620 size=432 callers=0 calls=0
*/
void sub_17cc620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cc620ULL || rel >= 0x17cc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cc7d0 size=432 callers=2 calls=0
*/
void sub_17cc7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cc7d0ULL || rel >= 0x17cc980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cc980 size=320 callers=1 calls=0
*/
void sub_17cc980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cc980ULL || rel >= 0x17ccac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccac0 size=16 callers=0 calls=0
*/
void sub_17ccac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccac0ULL || rel >= 0x17ccad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccad0 size=16 callers=2 calls=0
*/
void sub_17ccad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccad0ULL || rel >= 0x17ccae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccae0 size=48 callers=9 calls=0
*/
void sub_17ccae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccae0ULL || rel >= 0x17ccb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccb10 size=16 callers=6 calls=0
*/
void sub_17ccb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccb10ULL || rel >= 0x17ccb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccb20 size=96 callers=3 calls=0
*/
void sub_17ccb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccb20ULL || rel >= 0x17ccb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccb80 size=32 callers=3 calls=0
*/
void sub_17ccb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccb80ULL || rel >= 0x17ccba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccba0 size=16 callers=4 calls=0
*/
void sub_17ccba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccba0ULL || rel >= 0x17ccbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccbb0 size=16 callers=2 calls=0
*/
void sub_17ccbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccbb0ULL || rel >= 0x17ccbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccbc0 size=16 callers=2 calls=0
*/
void sub_17ccbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccbc0ULL || rel >= 0x17ccbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccbd0 size=48 callers=2 calls=0
*/
void sub_17ccbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccbd0ULL || rel >= 0x17ccc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccc00 size=16 callers=18 calls=0
*/
void sub_17ccc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccc00ULL || rel >= 0x17ccc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccc10 size=48 callers=26 calls=0
*/
void sub_17ccc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccc10ULL || rel >= 0x17ccc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccc40 size=128 callers=7 calls=0
*/
void sub_17ccc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccc40ULL || rel >= 0x17cccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cccc0 size=144 callers=1 calls=0
*/
void sub_17cccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cccc0ULL || rel >= 0x17ccd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccd50 size=176 callers=1 calls=0
*/
void sub_17ccd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccd50ULL || rel >= 0x17cce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cce00 size=144 callers=1 calls=0
*/
void sub_17cce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cce00ULL || rel >= 0x17cce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cce90 size=32 callers=1 calls=0
*/
void sub_17cce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cce90ULL || rel >= 0x17cceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cceb0 size=48 callers=26 calls=0
*/
void sub_17cceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cceb0ULL || rel >= 0x17ccee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccee0 size=224 callers=4 calls=0
*/
void sub_17ccee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccee0ULL || rel >= 0x17ccfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ccfc0 size=544 callers=2 calls=0
*/
void sub_17ccfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ccfc0ULL || rel >= 0x17cd1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cd1e0 size=80 callers=0 calls=0
*/
void sub_17cd1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cd1e0ULL || rel >= 0x17cd230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cd230 size=432 callers=7 calls=0
*/
void sub_17cd230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cd230ULL || rel >= 0x17cd3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cd3e0 size=368 callers=9 calls=0
*/
void sub_17cd3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cd3e0ULL || rel >= 0x17cd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cd550 size=1296 callers=1 calls=1
   calls: sub_17cd230
*/
void sub_17cd550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cd550ULL || rel >= 0x17cda60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cda60 size=1088 callers=1 calls=1
   calls: sub_17cd230
*/
void sub_17cda60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cda60ULL || rel >= 0x17cdea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cdea0 size=832 callers=1 calls=0
*/
void sub_17cdea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cdea0ULL || rel >= 0x17ce1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ce1e0 size=1168 callers=1 calls=1
   calls: sub_17cd230
*/
void sub_17ce1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ce1e0ULL || rel >= 0x17ce670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ce670 size=688 callers=1 calls=1
   calls: sub_17cd230
*/
void sub_17ce670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ce670ULL || rel >= 0x17ce920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017ce920 size=1376 callers=1 calls=8
   calls: sub_17cd230, sub_17cd550, sub_17cda60, sub_17cdea0, sub_17ce1e0, sub_17ce670, sub_17d0990, sub_17d1a00
*/
void sub_17ce920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17ce920ULL || rel >= 0x17cee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cee80 size=1232 callers=10 calls=1
   calls: sub_17cd3e0
*/
void sub_17cee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cee80ULL || rel >= 0x17cf350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cf350 size=1120 callers=2 calls=1
   calls: sub_17cd3e0
*/
void sub_17cf350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cf350ULL || rel >= 0x17cf7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cf7b0 size=976 callers=4 calls=1
   calls: sub_17cd3e0
*/
void sub_17cf7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cf7b0ULL || rel >= 0x17cfb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cfb80 size=1120 callers=2 calls=1
   calls: sub_17cd3e0
*/
void sub_17cfb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cfb80ULL || rel >= 0x17cffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017cffe0 size=976 callers=4 calls=1
   calls: sub_17cd3e0
*/
void sub_17cffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17cffe0ULL || rel >= 0x17d03b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d03b0 size=464 callers=3 calls=0
*/
void sub_17d03b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d03b0ULL || rel >= 0x17d0580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d0580 size=1040 callers=2 calls=0
*/
void sub_17d0580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d0580ULL || rel >= 0x17d0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d0990 size=1504 callers=1 calls=3
   calls: sub_17d0f70, sub_17d1220, sub_17d14b0
*/
void sub_17d0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d0990ULL || rel >= 0x17d0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d0f70 size=688 callers=18 calls=0
*/
void sub_17d0f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d0f70ULL || rel >= 0x17d1220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d1220 size=656 callers=12 calls=0
*/
void sub_17d1220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d1220ULL || rel >= 0x17d14b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d14b0 size=1280 callers=3 calls=0
*/
void sub_17d14b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d14b0ULL || rel >= 0x17d19b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d19b0 size=32 callers=0 calls=0
*/
void sub_17d19b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d19b0ULL || rel >= 0x17d19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d19d0 size=48 callers=0 calls=2
   calls: sub_1790b50, sub_1790c90
*/
void sub_17d19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d19d0ULL || rel >= 0x17d1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d1a00 size=1248 callers=1 calls=1
   calls: sub_17d1ee0
*/
void sub_17d1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d1a00ULL || rel >= 0x17d1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d1ee0 size=800 callers=1 calls=0
*/
void sub_17d1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d1ee0ULL || rel >= 0x17d2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2200 size=48 callers=1 calls=0
*/
void sub_17d2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2200ULL || rel >= 0x17d2230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2230 size=640 callers=0 calls=10
   calls: sub_1787360, sub_1787610, sub_1787640, sub_1789bc0, sub_1789bd0, sub_1789c10, sub_1790a50, sub_1790b60, sub_1790ca0, sub_17ccb20
*/
void sub_17d2230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2230ULL || rel >= 0x17d24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d24b0 size=96 callers=1 calls=4
   calls: sub_1789ca0, sub_1790c30, sub_1790de0, sub_17ccb80
*/
void sub_17d24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d24b0ULL || rel >= 0x17d2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2510 size=16 callers=1 calls=0
*/
void sub_17d2510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2510ULL || rel >= 0x17d2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2520 size=16 callers=1 calls=0
*/
void sub_17d2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2520ULL || rel >= 0x17d2530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2530 size=32 callers=0 calls=0
*/
void sub_17d2530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2530ULL || rel >= 0x17d2550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2550 size=64 callers=0 calls=0
*/
void sub_17d2550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2550ULL || rel >= 0x17d2590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2590 size=96 callers=0 calls=3
   calls: sub_1789be0, sub_1790b10, sub_1790c70
*/
void sub_17d2590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2590ULL || rel >= 0x17d25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d25f0 size=16 callers=2 calls=0
*/
void sub_17d25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d25f0ULL || rel >= 0x17d2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2600 size=144 callers=1 calls=0
*/
void sub_17d2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2600ULL || rel >= 0x17d2690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2690 size=512 callers=1 calls=1
   calls: sub_17ccb20
*/
void sub_17d2690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2690ULL || rel >= 0x17d2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2890 size=64 callers=1 calls=1
   calls: sub_17ccb80
*/
void sub_17d2890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2890ULL || rel >= 0x17d28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d28d0 size=80 callers=1 calls=0
*/
void sub_17d28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d28d0ULL || rel >= 0x17d2920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2920 size=496 callers=0 calls=9
   calls: sub_1787440, sub_1787490, sub_17874c0, sub_1787500, sub_178f700, sub_178f8e0, sub_178f910, sub_178f930, sub_178fb70
*/
void sub_17d2920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2920ULL || rel >= 0x17d2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2b10 size=64 callers=0 calls=2
   calls: sub_178fb40, sub_178fd20
*/
void sub_17d2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2b10ULL || rel >= 0x17d2b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2b50 size=656 callers=1 calls=6
   calls: sub_1787a90, sub_1789be0, sub_17ccae0, sub_17cceb0, sub_17d57a0, sub_17d5c10
   ref: Alignment Unmatched Error!!! Please check your binary file.
   ref: Data    API:%d
   ref: Runtime API:%d
   ref: Binary Tag Error.
   ref: Data    Version:%d
   ref:                Gap:%d
   ref: Runtime Version:%d
   ref: Binary Version Error!!! Please check your binary file.
*/
void Gap_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2b50ULL || rel >= 0x17d2de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d2de0 size=1360 callers=0 calls=15
   calls: Faild_to_initialize_primitive_Index_d, sub_1787320, sub_1787570, sub_1787960, sub_1787bf0, sub_1787c10, sub_1787c20, sub_1787c60, sub_178fd30, sub_17d36f0, sub_17d3b30, sub_17d3cd0
   ... +3 more
*/
void sub_17d2de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d2de0ULL || rel >= 0x17d3330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d3330 size=96 callers=0 calls=3
   calls: Heap_is_not_set_in_the_argument_of_the_resource_destruct, sub_1787ab0, sub_1789c00
*/
void sub_17d3330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d3330ULL || rel >= 0x17d3390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d3390 size=752 callers=5 calls=11
   calls: sub_1785cc0, sub_1789ca0, sub_178e450, sub_1790c30, sub_1790de0, sub_17c1f90, sub_17c2b70, sub_17ccc10, sub_17d59f0, sub_17d5e10, sub_17e8c90
   ref: Heap is not set in the argument of the resource destruction method.
*/
void Heap_is_not_set_in_the_argument_of_the_resource_destruct(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d3390ULL || rel >= 0x17d3680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d3680 size=112 callers=0 calls=3
   calls: Heap_is_not_set_in_the_argument_of_the_resource_destruct, sub_1787ab0, sub_1789c00
*/
void sub_17d3680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d3680ULL || rel >= 0x17d36f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d36f0 size=416 callers=1 calls=5
   calls: sub_17873b0, sub_1787640, sub_1789c10, sub_1790b60, sub_1790ca0
*/
void sub_17d36f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d36f0ULL || rel >= 0x17d3890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d3890 size=672 callers=1 calls=10
   calls: sub_1787320, sub_1787960, sub_1787bf0, sub_1787c10, sub_1787c20, sub_1787c60, sub_17ccc10, sub_17d4f60, sub_17d5010, sub_17e8b60
   ref: Faild to initialize primitive: Index %d 
*/
void Faild_to_initialize_primitive_Index_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d3890ULL || rel >= 0x17d3b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d3b30 size=416 callers=1 calls=4
   calls: SDK_MW_Nintendo_NintendoWare_G3d_7_3_2_Release, s_fmdb_A_format_of__u1_is_different_from__uo_of_the_part, sub_1785b50, sub_1785c30
*/
void sub_17d3b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d3b30ULL || rel >= 0x17d3cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d3cd0 size=352 callers=1 calls=3
   calls: sub_1787370, sub_178e290, sub_17d57c0
*/
void sub_17d3cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d3cd0ULL || rel >= 0x17d3e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d3e30 size=400 callers=1 calls=1
   calls: sub_17d4520
*/
void sub_17d3e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d3e30ULL || rel >= 0x17d3fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d3fc0 size=80 callers=0 calls=0
*/
void sub_17d3fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d3fc0ULL || rel >= 0x17d4010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4010 size=304 callers=1 calls=5
   calls: Appointed_Primitive_is_not_found_from_Resident_Resource, The_Texture_which_was_not_found_is_s, sub_17c1f70, sub_17c1fa0, sub_17c2cd0
*/
void sub_17d4010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4010ULL || rel >= 0x17d4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4140 size=32 callers=0 calls=0
*/
void sub_17d4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4140ULL || rel >= 0x17d4160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4160 size=352 callers=1 calls=1
   calls: The_Texture_which_was_not_found_is_s
*/
void sub_17d4160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4160ULL || rel >= 0x17d42c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d42c0 size=464 callers=7 calls=2
   calls: The_Texture_which_was_not_found_is_s, sub_17cceb0
   ref: The Texture which was not found is %s.
   ref: Appointed Texture is not found from Resident Resource.
*/
void The_Texture_which_was_not_found_is_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d42c0ULL || rel >= 0x17d4490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4490 size=144 callers=1 calls=0
*/
void sub_17d4490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4490ULL || rel >= 0x17d4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4520 size=1088 callers=1 calls=2
   calls: sub_17c1df0, sub_17c4330
*/
void sub_17d4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4520ULL || rel >= 0x17d4960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4960 size=128 callers=3 calls=2
   calls: Appointed_Primitive_is_not_found_from_Resident_Resource, sub_17cceb0
   ref: Appointed Primitive is not found from Resident Resource.
*/
void Appointed_Primitive_is_not_found_from_Resident_Resource(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4960ULL || rel >= 0x17d49e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d49e0 size=352 callers=3 calls=0
*/
void sub_17d49e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d49e0ULL || rel >= 0x17d4b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4b40 size=80 callers=1 calls=0
*/
void sub_17d4b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4b40ULL || rel >= 0x17d4b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4b90 size=128 callers=0 calls=0
*/
void sub_17d4b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4b90ULL || rel >= 0x17d4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4c10 size=16 callers=0 calls=0
*/
void sub_17d4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4c10ULL || rel >= 0x17d4c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4c20 size=16 callers=0 calls=0
*/
void sub_17d4c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4c20ULL || rel >= 0x17d4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4c30 size=16 callers=0 calls=0
*/
void sub_17d4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4c30ULL || rel >= 0x17d4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4c40 size=16 callers=0 calls=0
*/
void sub_17d4c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4c40ULL || rel >= 0x17d4c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4c50 size=16 callers=0 calls=0
*/
void sub_17d4c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4c50ULL || rel >= 0x17d4c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4c60 size=16 callers=0 calls=0
*/
void sub_17d4c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4c60ULL || rel >= 0x17d4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4c70 size=16 callers=0 calls=0
*/
void sub_17d4c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4c70ULL || rel >= 0x17d4c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4c80 size=16 callers=0 calls=0
*/
void sub_17d4c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4c80ULL || rel >= 0x17d4c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4c90 size=16 callers=0 calls=0
*/
void sub_17d4c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4c90ULL || rel >= 0x17d4ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4ca0 size=16 callers=0 calls=0
*/
void sub_17d4ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4ca0ULL || rel >= 0x17d4cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4cb0 size=16 callers=0 calls=0
*/
void sub_17d4cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4cb0ULL || rel >= 0x17d4cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4cc0 size=16 callers=0 calls=0
*/
void sub_17d4cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4cc0ULL || rel >= 0x17d4cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4cd0 size=144 callers=0 calls=0
*/
void sub_17d4cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4cd0ULL || rel >= 0x17d4d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4d60 size=144 callers=0 calls=0
*/
void sub_17d4d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4d60ULL || rel >= 0x17d4df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4df0 size=16 callers=0 calls=0
*/
void sub_17d4df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4df0ULL || rel >= 0x17d4e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4e00 size=16 callers=0 calls=0
*/
void sub_17d4e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4e00ULL || rel >= 0x17d4e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4e10 size=32 callers=0 calls=0
*/
void sub_17d4e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4e10ULL || rel >= 0x17d4e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4e30 size=32 callers=0 calls=0
*/
void sub_17d4e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4e30ULL || rel >= 0x17d4e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4e50 size=16 callers=0 calls=0
*/
void sub_17d4e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4e50ULL || rel >= 0x17d4e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4e60 size=16 callers=0 calls=0
*/
void sub_17d4e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4e60ULL || rel >= 0x17d4e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4e70 size=16 callers=0 calls=0
*/
void sub_17d4e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4e70ULL || rel >= 0x17d4e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4e80 size=16 callers=0 calls=0
*/
void sub_17d4e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4e80ULL || rel >= 0x17d4e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4e90 size=16 callers=0 calls=0
*/
void sub_17d4e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4e90ULL || rel >= 0x17d4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4ea0 size=16 callers=0 calls=0
*/
void sub_17d4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4ea0ULL || rel >= 0x17d4eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4eb0 size=16 callers=0 calls=0
*/
void sub_17d4eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4eb0ULL || rel >= 0x17d4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4ec0 size=80 callers=0 calls=0
*/
void sub_17d4ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4ec0ULL || rel >= 0x17d4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4f10 size=80 callers=0 calls=0
*/
void sub_17d4f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4f10ULL || rel >= 0x17d4f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d4f60 size=176 callers=1 calls=0
*/
void sub_17d4f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d4f60ULL || rel >= 0x17d5010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d5010 size=144 callers=1 calls=1
   calls: sub_17d50a0
*/
void sub_17d5010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d5010ULL || rel >= 0x17d50a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d50a0 size=880 callers=1 calls=0
*/
void sub_17d50a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d50a0ULL || rel >= 0x17d5410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d5410 size=592 callers=2 calls=3
   calls: sub_1787c60, sub_17ccc10, sub_17d5660
   ref: %s.fmdb : A format of _u1 is different from _uo of the particle shape.
*/
void s_fmdb_A_format_of__u1_is_different_from__uo_of_the_part(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d5410ULL || rel >= 0x17d5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d5660 size=320 callers=5 calls=0
*/
void sub_17d5660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d5660ULL || rel >= 0x17d57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d57a0 size=32 callers=1 calls=0
*/
void sub_17d57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d57a0ULL || rel >= 0x17d57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d57c0 size=560 callers=1 calls=5
   calls: sub_178e5f0, sub_17d60b0, sub_17d60c0, sysEmitterFieldUniformBlock_2, sysFrameBufferTexture
*/
void sub_17d57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d57c0ULL || rel >= 0x17d59f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d59f0 size=224 callers=1 calls=2
   calls: sub_178f140, sub_17d6050
*/
void sub_17d59f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d59f0ULL || rel >= 0x17d5ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d5ad0 size=320 callers=3 calls=5
   calls: sub_178e5f0, sub_17d60b0, sub_17d60c0, sysEmitterFieldUniformBlock_2, sysFrameBufferTexture
*/
void sub_17d5ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d5ad0ULL || rel >= 0x17d5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d5c10 size=16 callers=1 calls=0
*/
void sub_17d5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d5c10ULL || rel >= 0x17d5c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d5c20 size=496 callers=0 calls=2
   calls: sub_178e5f0, sysEmitterFieldUniformBlock
*/
void sub_17d5c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d5c20ULL || rel >= 0x17d5e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d5e10 size=192 callers=1 calls=1
   calls: sub_178f140
*/
void sub_17d5e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d5e10ULL || rel >= 0x17d5ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d5ed0 size=384 callers=1 calls=1
   calls: sub_178f1e0
   ref: sysPosDeltaBuff
   ref: sysEmtMat0Buff
   ref: sysEmitterDynamicUniformBlock
   ref: sysScaleBuff
   ref: sysEmitterFieldUniformBlock
   ref: sysCurlNoiseTextureArray
   ref: sysEmitterStaticUniformBlock
   ref: sysEmtMat1Buff
*/
void sysEmitterFieldUniformBlock(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d5ed0ULL || rel >= 0x17d6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6050 size=96 callers=1 calls=0
*/
void sub_17d6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6050ULL || rel >= 0x17d60b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d60b0 size=16 callers=4 calls=0
*/
void sub_17d60b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d60b0ULL || rel >= 0x17d60c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d60c0 size=48 callers=2 calls=0
*/
void sub_17d60c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d60c0ULL || rel >= 0x17d60f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d60f0 size=704 callers=2 calls=1
   calls: sub_17e84d0
   ref: sysCustomShaderTextureSampler1
   ref: sysCustomShaderCubeSampler2
   ref: sysCustomShaderCubeArraySampler1
   ref: sysCustomShaderTextureArraySampler0
   ref: sysCustomShaderTextureArraySampler3
   ref: sysCustomShaderShadowSampler3
   ref: sysCustomShaderShadowArraySampler2
   ref: sysCustomShaderShadowSampler2
*/
void sysFrameBufferTexture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d60f0ULL || rel >= 0x17d63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d63b0 size=800 callers=2 calls=1
   calls: sub_17e8b00
   ref: sysCustomShaderReservedUniformBlockParam
   ref: sysCustomShaderUniformBlock0
   ref: sysEmitterPluginUniformBlock
   ref: sysEmitterDynamicUniformBlock
   ref: sysCustomShaderUniformBlock2
   ref: sysEmitterFieldUniformBlock
   ref: sysEmitterStaticUniformBlock
   ref: sysCustomShaderUniformBlock3
*/
void sysEmitterFieldUniformBlock_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d63b0ULL || rel >= 0x17d66d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d66d0 size=656 callers=0 calls=5
   calls: sub_17c9200, sub_17c9250, sub_17ccc00, sub_17ccc10, sub_17d88a0
   ref: [Stripe] Memory Allocate Error!! : %d
*/
void Stripe_Memory_Allocate_Error_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d66d0ULL || rel >= 0x17d6960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6960 size=160 callers=0 calls=1
   calls: There_is_no_available_Stripe_instance
*/
void sub_17d6960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6960ULL || rel >= 0x17d6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6a00 size=272 callers=0 calls=2
   calls: sub_17cf7b0, sub_17cffe0
*/
void sub_17d6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6a00ULL || rel >= 0x17d6b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6b10 size=112 callers=0 calls=0
   ref: Vertex buffer for stripe has not allocated
   ref: Stripe instance is not used
   ref: Stripe instance is null
   ref: EmitterPluginUserData is empty
*/
void Stripe_instance_is_null(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6b10ULL || rel >= 0x17d6b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6b80 size=80 callers=0 calls=0
*/
void sub_17d6b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6b80ULL || rel >= 0x17d6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6bd0 size=48 callers=0 calls=0
*/
void sub_17d6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6bd0ULL || rel >= 0x17d6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6c00 size=80 callers=0 calls=1
   calls: sub_17d84a0
*/
void sub_17d6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6c00ULL || rel >= 0x17d6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6c50 size=224 callers=0 calls=1
   calls: sub_17ccc40
*/
void sub_17d6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6c50ULL || rel >= 0x17d6d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6d30 size=16 callers=0 calls=0
*/
void sub_17d6d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6d30ULL || rel >= 0x17d6d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6d40 size=80 callers=0 calls=0
*/
void sub_17d6d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6d40ULL || rel >= 0x17d6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6d90 size=80 callers=0 calls=0
*/
void sub_17d6d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6d90ULL || rel >= 0x17d6de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6de0 size=368 callers=1 calls=1
   calls: sub_17ccae0
   ref: StripeSystem is already initialized.
   ref: [Stripe] Memory Allocate Error!! : %d
*/
void StripeSystem_is_already_initialized(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6de0ULL || rel >= 0x17d6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6f50 size=80 callers=1 calls=0
*/
void sub_17d6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6f50ULL || rel >= 0x17d6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d6fa0 size=560 callers=1 calls=2
   calls: sub_17ccc00, sub_17ccc10
   ref: Buffer for stripe history is not enough
   ref: There is no available Stripe instance.
*/
void There_is_no_available_Stripe_instance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d6fa0ULL || rel >= 0x17d71d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d71d0 size=624 callers=2 calls=1
   calls: sub_17d7440
*/
void sub_17d71d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d71d0ULL || rel >= 0x17d7440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d7440 size=672 callers=1 calls=1
   calls: sub_17ccee0
*/
void sub_17d7440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d7440ULL || rel >= 0x17d76e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d76e0 size=48 callers=1 calls=0
*/
void sub_17d76e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d76e0ULL || rel >= 0x17d7710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d7710 size=48 callers=1 calls=0
*/
void sub_17d7710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d7710ULL || rel >= 0x17d7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d7740 size=2576 callers=0 calls=8
   calls: sub_17ccfc0, sub_17cee80, sub_17cf7b0, sub_17cffe0, sub_17d03b0, sub_17d71d0, sub_17e8ec0, sub_17e8ed0
*/
void sub_17d7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d7740ULL || rel >= 0x17d8150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d8150 size=848 callers=0 calls=3
   calls: sub_17ccc40, sub_17d71d0, sub_17e8ec0
*/
void sub_17d8150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d8150ULL || rel >= 0x17d84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d84a0 size=352 callers=1 calls=4
   calls: sub_1788610, sub_17d8600, sub_17d89f0, sub_17e8ee0
*/
void sub_17d84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d84a0ULL || rel >= 0x17d8600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d8600 size=672 callers=2 calls=5
   calls: sub_1788030, sub_1789690, sub_17ccc00, sub_17e84c0, unnamed_91
*/
void sub_17d8600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d8600ULL || rel >= 0x17d88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d88a0 size=336 callers=2 calls=0
*/
void sub_17d88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d88a0ULL || rel >= 0x17d89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d89f0 size=240 callers=3 calls=7
   calls: sub_1788210, sub_1788310, sub_17883c0, sub_17884a0, sub_1788500, sub_17d8ae0, sub_17d8cf0
*/
void sub_17d89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d89f0ULL || rel >= 0x17d8ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d8ae0 size=528 callers=2 calls=1
   calls: sub_1789590
*/
void sub_17d8ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d8ae0ULL || rel >= 0x17d8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d8cf0 size=352 callers=2 calls=1
   calls: sub_1789690
*/
void sub_17d8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d8cf0ULL || rel >= 0x17d8e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d8e50 size=1008 callers=1 calls=8
   calls: sub_1788010, sub_1788500, sub_1789270, sub_17892a0, sub_1789590, sub_1789690, sub_1789700, sub_17d2520
*/
void sub_17d8e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d8e50ULL || rel >= 0x17d9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d9240 size=304 callers=0 calls=3
   calls: sub_1788500, sub_17ccc00, sub_17d9370
*/
void sub_17d9240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d9240ULL || rel >= 0x17d9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d9370 size=1280 callers=2 calls=10
   calls: sub_1788080, sub_1788210, sub_1788310, sub_17883c0, sub_17884a0, sub_1788610, sub_17d8ae0, sub_17d8cf0, sub_17d9870, sub_17dfcd0
*/
void sub_17d9370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d9370ULL || rel >= 0x17d9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d9870 size=368 callers=1 calls=2
   calls: Particle_sort_has_failed_More_buffer_size_is_needed, sub_1788080
*/
void sub_17d9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d9870ULL || rel >= 0x17d99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d99e0 size=624 callers=0 calls=3
   calls: sub_17c9200, sub_17c9250, sub_17d88a0
*/
void sub_17d99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d99e0ULL || rel >= 0x17d9c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d9c50 size=160 callers=0 calls=1
   calls: There_is_no_available_Stripe_instance_2
*/
void sub_17d9c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d9c50ULL || rel >= 0x17d9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d9cf0 size=272 callers=0 calls=2
   calls: sub_17cf7b0, sub_17cffe0
*/
void sub_17d9cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d9cf0ULL || rel >= 0x17d9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d9e00 size=112 callers=0 calls=0
   ref: Vertex buffer for stripe has not allocated
   ref: SuperStripe instance is not used
   ref: SuperStripe instance is null
   ref: EmitterPluginUserData is empty
*/
void SuperStripe_instance_is_null(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d9e00ULL || rel >= 0x17d9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d9e70 size=80 callers=0 calls=0
*/
void sub_17d9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d9e70ULL || rel >= 0x17d9ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d9ec0 size=48 callers=0 calls=0
*/
void sub_17d9ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d9ec0ULL || rel >= 0x17d9ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d9ef0 size=80 callers=0 calls=1
   calls: sub_17dcf30
*/
void sub_17d9ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d9ef0ULL || rel >= 0x17d9f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017d9f40 size=240 callers=0 calls=1
   calls: sub_17ccc40
*/
void sub_17d9f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17d9f40ULL || rel >= 0x17da030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017da030 size=80 callers=0 calls=0
*/
void sub_17da030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17da030ULL || rel >= 0x17da080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017da080 size=80 callers=0 calls=0
*/
void sub_17da080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17da080ULL || rel >= 0x17da0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017da0d0 size=368 callers=1 calls=1
   calls: sub_17ccae0
   ref: SuperStripeSystem is already initialized.
   ref: [SuperStripe] Memory Allocate Error!! : %d
*/
void SuperStripeSystem_is_already_initialized(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17da0d0ULL || rel >= 0x17da240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017da240 size=80 callers=1 calls=0
*/
void sub_17da240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17da240ULL || rel >= 0x17da290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017da290 size=576 callers=1 calls=2
   calls: sub_17ccc00, sub_17ccc10
   ref: Buffer for stripe history is not enough
   ref: There is no available Stripe instance.
*/
void There_is_no_available_Stripe_instance_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17da290ULL || rel >= 0x17da4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017da4d0 size=432 callers=0 calls=7
   calls: sub_17cf7b0, sub_17cffe0, sub_17da680, sub_17dc1e0, sub_17dc530, sub_17e8ec0, sub_17e8ed0
*/
void sub_17da4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17da4d0ULL || rel >= 0x17da680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017da680 size=7008 callers=1 calls=5
   calls: sub_17ccfc0, sub_17cee80, sub_17cf350, sub_17cfb80, sub_17d03b0
*/
void sub_17da680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17da680ULL || rel >= 0x17dc1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dc1e0 size=848 callers=2 calls=0
*/
void sub_17dc1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dc1e0ULL || rel >= 0x17dc530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dc530 size=1232 callers=2 calls=1
   calls: sub_17dccb0
*/
void sub_17dc530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dc530ULL || rel >= 0x17dca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dca00 size=688 callers=0 calls=4
   calls: sub_17ccc40, sub_17dc1e0, sub_17dc530, sub_17e8ec0
*/
void sub_17dca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dca00ULL || rel >= 0x17dccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dccb0 size=544 callers=1 calls=1
   calls: sub_17ccee0
*/
void sub_17dccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dccb0ULL || rel >= 0x17dced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dced0 size=48 callers=1 calls=0
*/
void sub_17dced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dced0ULL || rel >= 0x17dcf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dcf00 size=48 callers=1 calls=0
*/
void sub_17dcf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dcf00ULL || rel >= 0x17dcf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dcf30 size=352 callers=1 calls=4
   calls: sub_1788610, sub_17d89f0, sub_17dd090, sub_17e8ee0
*/
void sub_17dcf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dcf30ULL || rel >= 0x17dd090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dd090 size=640 callers=2 calls=5
   calls: sub_1788030, sub_1789690, sub_17ccc00, sub_17e84c0, unnamed_91
*/
void sub_17dd090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dd090ULL || rel >= 0x17dd310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dd310 size=336 callers=1 calls=2
   calls: sub_1787a90, sub_1789be0
   ref: SDK MW+Nintendo+NintendoWare_Vfx-7_3_2-Release
*/
void SDK_MW_Nintendo_NintendoWare_Vfx_7_3_2_Release(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dd310ULL || rel >= 0x17dd460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dd460 size=3104 callers=0 calls=32
   calls: ConnectedStripe_Memory_Allocate_Error_d, StripeSystem_is_already_initialized, SuperStripeSystem_is_already_initialized, Texture_Sampler_Table_Already_Created, sub_1787320, sub_1787360, sub_1787960, sub_1787a90, sub_1787bf0, sub_1787c10, sub_1787c20, sub_1787c60
   ... +20 more
   ref: System Static     WorkSize : %d 
   ref:   ParticleSort    WorkSize : %d 
   ref: Stripe            WorkSize : %d 
   ref:   EmitterConstBuf WorkSize : %d 
   ref:   EmitterCalc     WorkSize : %d 
   ref: System Static     AlcCount : %d 
   ref:   Resource        WorkSize : %d 
   ref:   DelayFree       WorkSize : %d 
*/
void TempBuffer_WorkSize_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dd460ULL || rel >= 0x17de080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de080 size=576 callers=1 calls=19
   calls: Heap_is_not_set_in_the_argument_of_the_resource_destruct, sub_1787ab0, sub_1789c00, sub_17c1000, sub_17c48e0, sub_17c9d10, sub_17ccad0, sub_17ccbb0, sub_17ccbc0, sub_17ccc10, sub_17ccd50, sub_17d24b0
   ... +7 more
   ref: vfx system deleted the registered binary. resource id : %d.
*/
void vfx_system_deleted_the_registered_binary_resource_id_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de080ULL || rel >= 0x17de2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de2c0 size=48 callers=0 calls=1
   calls: vfx_system_deleted_the_registered_binary_resource_id_d
*/
void sub_17de2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de2c0ULL || rel >= 0x17de2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de2f0 size=128 callers=1 calls=1
   calls: Heap_is_not_set_in_the_argument_of_the_resource_destruct
   ref: The Resource to be cleared does not exist. ResourceId : %d.
*/
void The_Resource_to_be_cleared_does_not_exist_ResourceId_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de2f0ULL || rel >= 0x17de370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de370 size=256 callers=1 calls=3
   calls: Gap_d, Heap_is_not_set_in_the_argument_of_the_resource_destruct, sub_17ccc10
   ref: vfx system deleted the registered binary. resource id : %d.
*/
void vfx_system_deleted_the_registered_binary_resource_id_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de370ULL || rel >= 0x17de470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de470 size=144 callers=1 calls=1
   calls: sub_17ccc10
   ref: There is no available Emitter instance.
*/
void There_is_no_available_Emitter_instance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de470ULL || rel >= 0x17de500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de500 size=16 callers=1 calls=0
*/
void sub_17de500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de500ULL || rel >= 0x17de510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de510 size=48 callers=5 calls=1
   calls: sub_17c91d0
*/
void sub_17de510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de510ULL || rel >= 0x17de540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de540 size=576 callers=0 calls=3
   calls: EmitterResource_Setup_Failed, sub_17c1000, sub_17ccc10
   ref: There is no available EmitterSet instance.
   ref: There is no available Emitter instance.
*/
void There_is_no_available_Emitter_instance_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de540ULL || rel >= 0x17de780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de780 size=32 callers=1 calls=0
*/
void sub_17de780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de780ULL || rel >= 0x17de7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de7a0 size=144 callers=0 calls=0
   ref: EmitterSet has been already deleted.
*/
void EmitterSet_has_been_already_deleted(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de7a0ULL || rel >= 0x17de830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de830 size=352 callers=1 calls=1
   calls: sub_17ccc10
   ref: EmitterSet has been already deleted.
*/
void EmitterSet_has_been_already_deleted_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de830ULL || rel >= 0x17de990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017de990 size=464 callers=1 calls=1
   calls: sub_17ccae0
   ref: EmitterSet Remove Failed.
*/
void EmitterSet_Remove_Failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17de990ULL || rel >= 0x17deb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017deb60 size=816 callers=1 calls=4
   calls: EmitterSet_Remove_Failed, sub_17c1000, sub_17ca050, sub_17cce00
*/
void sub_17deb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17deb60ULL || rel >= 0x17dee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017dee90 size=592 callers=1 calls=2
   calls: sub_17c10f0, sub_17ccc10
   ref: Invalid EmitterSet has been detected. Invalidates handle.
*/
void Invalid_EmitterSet_has_been_detected_Invalidates_handle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17dee90ULL || rel >= 0x17df0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017df0e0 size=112 callers=0 calls=1
   calls: Invalid_EmitterSet_has_been_detected_Invalidates_handle
*/
void sub_17df0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df0e0ULL || rel >= 0x17df150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017df150 size=176 callers=1 calls=2
   calls: sub_17e84c0, unnamed_91
*/
void sub_17df150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df150ULL || rel >= 0x17df200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017df200 size=672 callers=0 calls=1
   calls: sub_17c1710
*/
void sub_17df200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df200ULL || rel >= 0x17df4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017df4a0 size=432 callers=0 calls=2
   calls: sub_17c1710, sub_17dfea0
*/
void sub_17df4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df4a0ULL || rel >= 0x17df650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017df650 size=192 callers=1 calls=1
   calls: sub_17d8e50
*/
void sub_17df650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df650ULL || rel >= 0x17df710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017df710 size=96 callers=1 calls=1
   calls: sub_17e82f0
*/
void sub_17df710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df710ULL || rel >= 0x17df770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017df770 size=32 callers=1 calls=0
*/
void sub_17df770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df770ULL || rel >= 0x17df790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017df790 size=16 callers=0 calls=0
*/
void sub_17df790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df790ULL || rel >= 0x17df7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017df7a0 size=256 callers=1 calls=0
*/
void sub_17df7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df7a0ULL || rel >= 0x17df8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017df8a0 size=80 callers=1 calls=0
*/
void sub_17df8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df8a0ULL || rel >= 0x17df8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017df8f0 size=992 callers=2 calls=5
   calls: sub_17ccc10, sub_17e0cb0, sub_17e1db0, sub_17e2eb0, sub_17e40e0
   ref: Particle sort has failed. More buffer size is needed. 
*/
void Particle_sort_has_failed_More_buffer_size_is_needed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17df8f0ULL || rel >= 0x17dfcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

