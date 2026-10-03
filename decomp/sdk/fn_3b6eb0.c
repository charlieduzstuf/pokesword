/* sdk functions 003b6eb0..003cf0e0 (41 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 003b6eb0 size=96 callers=0 calls=0
*/
void sub_3b6eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b6eb0ULL || rel >= 0x3b6f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b6f10 size=368 callers=0 calls=0
*/
void sub_3b6f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b6f10ULL || rel >= 0x3b7080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7080 size=208 callers=0 calls=0
*/
void sub_3b7080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7080ULL || rel >= 0x3b7150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7150 size=80 callers=0 calls=0
*/
void sub_3b7150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7150ULL || rel >= 0x3b71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b71a0 size=16 callers=0 calls=0
*/
void sub_3b71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b71a0ULL || rel >= 0x3b71b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b71b0 size=144 callers=0 calls=0
*/
void sub_3b71b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b71b0ULL || rel >= 0x3b7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7240 size=112 callers=0 calls=0
*/
void sub_3b7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7240ULL || rel >= 0x3b72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b72b0 size=112 callers=0 calls=0
*/
void sub_3b72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b72b0ULL || rel >= 0x3b7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7320 size=448 callers=0 calls=0
*/
void sub_3b7320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7320ULL || rel >= 0x3b74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b74e0 size=16 callers=0 calls=0
*/
void sub_3b74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b74e0ULL || rel >= 0x3b74f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b74f0 size=16 callers=0 calls=0
*/
void sub_3b74f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b74f0ULL || rel >= 0x3b7500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7500 size=16 callers=0 calls=0
*/
void sub_3b7500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7500ULL || rel >= 0x3b7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7510 size=16 callers=0 calls=0
*/
void sub_3b7510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7510ULL || rel >= 0x3b7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7520 size=16 callers=0 calls=0
*/
void sub_3b7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7520ULL || rel >= 0x3b7530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7530 size=16 callers=0 calls=0
*/
void sub_3b7530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7530ULL || rel >= 0x3b7540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7540 size=16 callers=0 calls=0
*/
void sub_3b7540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7540ULL || rel >= 0x3b7550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7550 size=16 callers=0 calls=0
*/
void sub_3b7550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7550ULL || rel >= 0x3b7560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7560 size=16 callers=0 calls=0
*/
void sub_3b7560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7560ULL || rel >= 0x3b7570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7570 size=16 callers=0 calls=0
*/
void sub_3b7570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7570ULL || rel >= 0x3b7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7580 size=112 callers=1 calls=0
*/
void sub_3b7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7580ULL || rel >= 0x3b75f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b75f0 size=272 callers=0 calls=0
*/
void sub_3b75f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b75f0ULL || rel >= 0x3b7700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7700 size=16 callers=0 calls=0
*/
void sub_3b7700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7700ULL || rel >= 0x3b7710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7710 size=320 callers=0 calls=0
*/
void sub_3b7710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7710ULL || rel >= 0x3b7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7850 size=16 callers=0 calls=0
*/
void sub_3b7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7850ULL || rel >= 0x3b7860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7860 size=96 callers=0 calls=0
*/
void sub_3b7860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7860ULL || rel >= 0x3b78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b78c0 size=96 callers=0 calls=0
*/
void sub_3b78c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b78c0ULL || rel >= 0x3b7920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7920 size=80 callers=0 calls=0
*/
void sub_3b7920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7920ULL || rel >= 0x3b7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7970 size=16 callers=0 calls=0
*/
void sub_3b7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7970ULL || rel >= 0x3b7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7980 size=16 callers=0 calls=0
*/
void sub_3b7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7980ULL || rel >= 0x3b7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7990 size=16 callers=0 calls=0
*/
void sub_3b7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7990ULL || rel >= 0x3b79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b79a0 size=720 callers=0 calls=0
*/
void sub_3b79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b79a0ULL || rel >= 0x3b7c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7c70 size=16 callers=0 calls=0
*/
void sub_3b7c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7c70ULL || rel >= 0x3b7c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7c80 size=16 callers=0 calls=0
*/
void sub_3b7c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7c80ULL || rel >= 0x3b7c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7c90 size=16 callers=0 calls=0
*/
void sub_3b7c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7c90ULL || rel >= 0x3b7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7ca0 size=16 callers=0 calls=0
*/
void sub_3b7ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7ca0ULL || rel >= 0x3b7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7cb0 size=16 callers=0 calls=0
*/
void sub_3b7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7cb0ULL || rel >= 0x3b7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7cc0 size=16 callers=0 calls=0
*/
void sub_3b7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7cc0ULL || rel >= 0x3b7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7cd0 size=48 callers=0 calls=0
*/
void sub_3b7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7cd0ULL || rel >= 0x3b7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7d00 size=208 callers=1 calls=0
*/
void sub_3b7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7d00ULL || rel >= 0x3b7dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7dd0 size=240 callers=0 calls=0
*/
void sub_3b7dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7dd0ULL || rel >= 0x3b7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7ec0 size=16 callers=0 calls=0
*/
void sub_3b7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7ec0ULL || rel >= 0x3b7ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7ed0 size=160 callers=0 calls=0
*/
void sub_3b7ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7ed0ULL || rel >= 0x3b7f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b7f70 size=368 callers=0 calls=0
*/
void sub_3b7f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b7f70ULL || rel >= 0x3b80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b80e0 size=16 callers=0 calls=0
*/
void sub_3b80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b80e0ULL || rel >= 0x3b80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b80f0 size=176 callers=0 calls=0
*/
void sub_3b80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b80f0ULL || rel >= 0x3b81a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b81a0 size=16 callers=0 calls=0
*/
void sub_3b81a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b81a0ULL || rel >= 0x3b81b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b81b0 size=112 callers=0 calls=0
*/
void sub_3b81b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b81b0ULL || rel >= 0x3b8220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8220 size=112 callers=0 calls=0
*/
void sub_3b8220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8220ULL || rel >= 0x3b8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8290 size=16 callers=0 calls=0
*/
void sub_3b8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8290ULL || rel >= 0x3b82a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b82a0 size=144 callers=0 calls=0
*/
void sub_3b82a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b82a0ULL || rel >= 0x3b8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8330 size=16 callers=0 calls=0
*/
void sub_3b8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8330ULL || rel >= 0x3b8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8340 size=176 callers=0 calls=0
*/
void sub_3b8340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8340ULL || rel >= 0x3b83f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b83f0 size=16 callers=0 calls=0
*/
void sub_3b83f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b83f0ULL || rel >= 0x3b8400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8400 size=16 callers=0 calls=0
*/
void sub_3b8400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8400ULL || rel >= 0x3b8410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8410 size=80 callers=0 calls=0
*/
void sub_3b8410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8410ULL || rel >= 0x3b8460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8460 size=16 callers=0 calls=0
*/
void sub_3b8460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8460ULL || rel >= 0x3b8470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8470 size=80 callers=0 calls=0
*/
void sub_3b8470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8470ULL || rel >= 0x3b84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b84c0 size=16 callers=0 calls=0
*/
void sub_3b84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b84c0ULL || rel >= 0x3b84d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b84d0 size=16 callers=0 calls=0
*/
void sub_3b84d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b84d0ULL || rel >= 0x3b84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b84e0 size=112 callers=0 calls=0
*/
void sub_3b84e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b84e0ULL || rel >= 0x3b8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8550 size=112 callers=0 calls=0
*/
void sub_3b8550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8550ULL || rel >= 0x3b85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b85c0 size=96 callers=0 calls=0
*/
void sub_3b85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b85c0ULL || rel >= 0x3b8620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8620 size=96 callers=0 calls=0
*/
void sub_3b8620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8620ULL || rel >= 0x3b8680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8680 size=576 callers=0 calls=0
*/
void sub_3b8680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8680ULL || rel >= 0x3b88c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b88c0 size=736 callers=0 calls=0
*/
void sub_3b88c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b88c0ULL || rel >= 0x3b8ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8ba0 size=16 callers=0 calls=0
*/
void sub_3b8ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8ba0ULL || rel >= 0x3b8bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8bb0 size=16 callers=0 calls=0
*/
void sub_3b8bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8bb0ULL || rel >= 0x3b8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8bc0 size=16 callers=0 calls=0
*/
void sub_3b8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8bc0ULL || rel >= 0x3b8bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8bd0 size=16 callers=0 calls=0
*/
void sub_3b8bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8bd0ULL || rel >= 0x3b8be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8be0 size=352 callers=0 calls=0
*/
void sub_3b8be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8be0ULL || rel >= 0x3b8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8d40 size=272 callers=0 calls=0
*/
void sub_3b8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8d40ULL || rel >= 0x3b8e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8e50 size=352 callers=0 calls=0
*/
void sub_3b8e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8e50ULL || rel >= 0x3b8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b8fb0 size=96 callers=0 calls=0
*/
void sub_3b8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b8fb0ULL || rel >= 0x3b9010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9010 size=176 callers=0 calls=0
*/
void sub_3b9010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9010ULL || rel >= 0x3b90c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b90c0 size=80 callers=0 calls=0
*/
void sub_3b90c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b90c0ULL || rel >= 0x3b9110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9110 size=16 callers=0 calls=0
*/
void sub_3b9110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9110ULL || rel >= 0x3b9120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9120 size=208 callers=0 calls=0
*/
void sub_3b9120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9120ULL || rel >= 0x3b91f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b91f0 size=16 callers=0 calls=0
*/
void sub_3b91f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b91f0ULL || rel >= 0x3b9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9200 size=80 callers=0 calls=0
*/
void sub_3b9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9200ULL || rel >= 0x3b9250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9250 size=80 callers=0 calls=0
*/
void sub_3b9250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9250ULL || rel >= 0x3b92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b92a0 size=16 callers=0 calls=0
*/
void sub_3b92a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b92a0ULL || rel >= 0x3b92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b92b0 size=240 callers=0 calls=0
*/
void sub_3b92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b92b0ULL || rel >= 0x3b93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b93a0 size=400 callers=0 calls=0
*/
void sub_3b93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b93a0ULL || rel >= 0x3b9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9530 size=16 callers=0 calls=0
*/
void sub_3b9530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9530ULL || rel >= 0x3b9540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9540 size=208 callers=0 calls=0
*/
void sub_3b9540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9540ULL || rel >= 0x3b9610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9610 size=208 callers=0 calls=0
*/
void sub_3b9610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9610ULL || rel >= 0x3b96e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b96e0 size=176 callers=0 calls=0
*/
void sub_3b96e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b96e0ULL || rel >= 0x3b9790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9790 size=112 callers=0 calls=0
*/
void sub_3b9790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9790ULL || rel >= 0x3b9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9800 size=128 callers=0 calls=0
*/
void sub_3b9800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9800ULL || rel >= 0x3b9880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9880 size=400 callers=0 calls=1
   calls: sub_3b7d00
   ref: /dev/nvdisp-ctrl
   ref: /dev/nvdisp-disp%d
*/
void nvdisp_disp_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9880ULL || rel >= 0x3b9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9a10 size=144 callers=0 calls=1
   calls: sub_3b9e00
*/
void sub_3b9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9a10ULL || rel >= 0x3b9aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9aa0 size=16 callers=0 calls=0
*/
void sub_3b9aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9aa0ULL || rel >= 0x3b9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9ab0 size=16 callers=0 calls=0
*/
void sub_3b9ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9ab0ULL || rel >= 0x3b9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9ac0 size=16 callers=0 calls=0
*/
void sub_3b9ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9ac0ULL || rel >= 0x3b9ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9ad0 size=16 callers=0 calls=0
*/
void sub_3b9ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9ad0ULL || rel >= 0x3b9ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9ae0 size=64 callers=0 calls=0
*/
void sub_3b9ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9ae0ULL || rel >= 0x3b9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9b20 size=16 callers=0 calls=0
*/
void sub_3b9b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9b20ULL || rel >= 0x3b9b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9b30 size=16 callers=0 calls=0
*/
void sub_3b9b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9b30ULL || rel >= 0x3b9b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9b40 size=320 callers=0 calls=0
*/
void sub_3b9b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9b40ULL || rel >= 0x3b9c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9c80 size=128 callers=0 calls=0
*/
void sub_3b9c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9c80ULL || rel >= 0x3b9d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9d00 size=128 callers=0 calls=0
*/
void sub_3b9d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9d00ULL || rel >= 0x3b9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9d80 size=128 callers=0 calls=0
*/
void sub_3b9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9d80ULL || rel >= 0x3b9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9e00 size=112 callers=1 calls=0
*/
void sub_3b9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9e00ULL || rel >= 0x3b9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9e70 size=208 callers=0 calls=0
   ref: /dev/nvdcutil-%s%d
*/
void nvdcutil_s_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9e70ULL || rel >= 0x3b9f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9f40 size=64 callers=0 calls=0
*/
void sub_3b9f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9f40ULL || rel >= 0x3b9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9f80 size=96 callers=0 calls=0
*/
void sub_3b9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9f80ULL || rel >= 0x3b9fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b9fe0 size=96 callers=0 calls=0
*/
void sub_3b9fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b9fe0ULL || rel >= 0x3ba040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba040 size=96 callers=0 calls=0
*/
void sub_3ba040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba040ULL || rel >= 0x3ba0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba0a0 size=144 callers=0 calls=0
*/
void sub_3ba0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba0a0ULL || rel >= 0x3ba130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba130 size=256 callers=0 calls=0
*/
void sub_3ba130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba130ULL || rel >= 0x3ba230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba230 size=272 callers=0 calls=0
*/
void sub_3ba230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba230ULL || rel >= 0x3ba340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba340 size=416 callers=0 calls=0
*/
void sub_3ba340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba340ULL || rel >= 0x3ba4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba4e0 size=96 callers=0 calls=0
*/
void sub_3ba4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba4e0ULL || rel >= 0x3ba540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba540 size=80 callers=0 calls=0
*/
void sub_3ba540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba540ULL || rel >= 0x3ba590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba590 size=272 callers=0 calls=0
   ref: /dev/nvhdcp_up-ctrl
*/
void nvhdcp_up_ctrl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba590ULL || rel >= 0x3ba6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba6a0 size=128 callers=0 calls=2
   calls: sub_3bac00, sub_3bac50
*/
void sub_3ba6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba6a0ULL || rel >= 0x3ba720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba720 size=112 callers=0 calls=0
*/
void sub_3ba720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba720ULL || rel >= 0x3ba790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba790 size=272 callers=0 calls=0
*/
void sub_3ba790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba790ULL || rel >= 0x3ba8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba8a0 size=96 callers=0 calls=0
*/
void sub_3ba8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba8a0ULL || rel >= 0x3ba900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba900 size=80 callers=0 calls=1
   calls: sub_3baa30
*/
void sub_3ba900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba900ULL || rel >= 0x3ba950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba950 size=112 callers=0 calls=0
*/
void sub_3ba950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba950ULL || rel >= 0x3ba9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ba9c0 size=112 callers=0 calls=0
*/
void sub_3ba9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ba9c0ULL || rel >= 0x3baa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003baa30 size=352 callers=1 calls=0
*/
void sub_3baa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3baa30ULL || rel >= 0x3bab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bab90 size=112 callers=0 calls=0
*/
void sub_3bab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bab90ULL || rel >= 0x3bac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bac00 size=80 callers=1 calls=0
*/
void sub_3bac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bac00ULL || rel >= 0x3bac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bac50 size=112 callers=1 calls=0
*/
void sub_3bac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bac50ULL || rel >= 0x3bacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bacc0 size=32 callers=0 calls=0
*/
void sub_3bacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bacc0ULL || rel >= 0x3bace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bace0 size=1072 callers=0 calls=1
   calls: sub_3bbfb0
   ref: nvmemp
*/
void nvmemp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bace0ULL || rel >= 0x3bb110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb110 size=16 callers=0 calls=0
*/
void sub_3bb110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb110ULL || rel >= 0x3bb120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb120 size=16 callers=0 calls=0
*/
void sub_3bb120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb120ULL || rel >= 0x3bb130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb130 size=16 callers=0 calls=0
*/
void sub_3bb130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb130ULL || rel >= 0x3bb140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb140 size=32 callers=0 calls=1
   calls: sub_3bb160
*/
void sub_3bb140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb140ULL || rel >= 0x3bb160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb160 size=672 callers=2 calls=1
   calls: sub_3bbfb0
*/
void sub_3bb160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb160ULL || rel >= 0x3bb400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb400 size=256 callers=0 calls=1
   calls: sub_3bbfb0
*/
void sub_3bb400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb400ULL || rel >= 0x3bb500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb500 size=288 callers=0 calls=2
   calls: sub_3bb160, sub_3bbfb0
*/
void sub_3bb500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb500ULL || rel >= 0x3bb620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb620 size=624 callers=0 calls=1
   calls: sub_3bbfb0
   ref: %02d - %s - %s
   ref: %02d - %s
*/
void f_02d_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb620ULL || rel >= 0x3bb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb890 size=16 callers=0 calls=0
*/
void sub_3bb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb890ULL || rel >= 0x3bb8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb8a0 size=64 callers=0 calls=0
*/
void sub_3bb8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb8a0ULL || rel >= 0x3bb8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb8e0 size=16 callers=0 calls=0
*/
void sub_3bb8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb8e0ULL || rel >= 0x3bb8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb8f0 size=16 callers=0 calls=0
*/
void sub_3bb8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb8f0ULL || rel >= 0x3bb900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb900 size=96 callers=0 calls=1
   calls: sub_3bba50
*/
void sub_3bb900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb900ULL || rel >= 0x3bb960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb960 size=32 callers=0 calls=1
   calls: sub_3bbe30
*/
void sub_3bb960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb960ULL || rel >= 0x3bb980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb980 size=16 callers=0 calls=0
*/
void sub_3bb980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb980ULL || rel >= 0x3bb990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb990 size=16 callers=0 calls=0
*/
void sub_3bb990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb990ULL || rel >= 0x3bb9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bb9a0 size=176 callers=0 calls=0
*/
void sub_3bb9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bb9a0ULL || rel >= 0x3bba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bba50 size=480 callers=1 calls=1
   calls: sub_3bbc30
*/
void sub_3bba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bba50ULL || rel >= 0x3bbc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bbc30 size=512 callers=2 calls=0
*/
void sub_3bbc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bbc30ULL || rel >= 0x3bbe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bbe30 size=384 callers=1 calls=1
   calls: sub_3bbc30
*/
void sub_3bbe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bbe30ULL || rel >= 0x3bbfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bbfb0 size=304 callers=5 calls=0
*/
void sub_3bbfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bbfb0ULL || rel >= 0x3bc0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc0e0 size=48 callers=0 calls=0
*/
void sub_3bc0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc0e0ULL || rel >= 0x3bc110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc110 size=16 callers=0 calls=0
*/
void sub_3bc110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc110ULL || rel >= 0x3bc120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc120 size=16 callers=0 calls=0
*/
void sub_3bc120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc120ULL || rel >= 0x3bc130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc130 size=16 callers=0 calls=0
*/
void sub_3bc130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc130ULL || rel >= 0x3bc140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc140 size=192 callers=0 calls=0
*/
void sub_3bc140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc140ULL || rel >= 0x3bc200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc200 size=240 callers=0 calls=0
*/
void sub_3bc200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc200ULL || rel >= 0x3bc2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc2f0 size=240 callers=0 calls=0
*/
void sub_3bc2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc2f0ULL || rel >= 0x3bc3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc3e0 size=192 callers=0 calls=0
*/
void sub_3bc3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc3e0ULL || rel >= 0x3bc4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc4a0 size=16 callers=0 calls=0
*/
void sub_3bc4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc4a0ULL || rel >= 0x3bc4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc4b0 size=16 callers=0 calls=0
*/
void sub_3bc4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc4b0ULL || rel >= 0x3bc4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc4c0 size=16 callers=0 calls=0
*/
void sub_3bc4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc4c0ULL || rel >= 0x3bc4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc4d0 size=16 callers=0 calls=0
*/
void sub_3bc4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc4d0ULL || rel >= 0x3bc4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc4e0 size=16 callers=0 calls=0
*/
void sub_3bc4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc4e0ULL || rel >= 0x3bc4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc4f0 size=16 callers=0 calls=0
*/
void sub_3bc4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc4f0ULL || rel >= 0x3bc500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc500 size=16 callers=0 calls=0
*/
void sub_3bc500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc500ULL || rel >= 0x3bc510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc510 size=16 callers=0 calls=0
*/
void sub_3bc510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc510ULL || rel >= 0x3bc520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc520 size=16 callers=0 calls=0
*/
void sub_3bc520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc520ULL || rel >= 0x3bc530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc530 size=48 callers=0 calls=1
   calls: sub_3c3ec0
*/
void sub_3bc530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc530ULL || rel >= 0x3bc560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc560 size=48 callers=0 calls=1
   calls: sub_3c3ec0
*/
void sub_3bc560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc560ULL || rel >= 0x3bc590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc590 size=16 callers=0 calls=0
*/
void sub_3bc590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc590ULL || rel >= 0x3bc5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc5a0 size=16 callers=0 calls=0
*/
void sub_3bc5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc5a0ULL || rel >= 0x3bc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc5b0 size=16 callers=0 calls=0
*/
void sub_3bc5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc5b0ULL || rel >= 0x3bc5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc5c0 size=160 callers=0 calls=5
   calls: sub_3c3740, sub_3c3b80, sub_3c3ff0, sub_3c4790, sub_3c47b0
*/
void sub_3bc5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc5c0ULL || rel >= 0x3bc660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc660 size=16 callers=0 calls=0
*/
void sub_3bc660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc660ULL || rel >= 0x3bc670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc670 size=16 callers=0 calls=0
*/
void sub_3bc670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc670ULL || rel >= 0x3bc680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc680 size=16 callers=0 calls=0
*/
void sub_3bc680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc680ULL || rel >= 0x3bc690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc690 size=16 callers=0 calls=0
*/
void sub_3bc690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc690ULL || rel >= 0x3bc6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc6a0 size=16 callers=0 calls=0
*/
void sub_3bc6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc6a0ULL || rel >= 0x3bc6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc6b0 size=16 callers=0 calls=0
*/
void sub_3bc6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc6b0ULL || rel >= 0x3bc6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc6c0 size=16 callers=0 calls=0
*/
void sub_3bc6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc6c0ULL || rel >= 0x3bc6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc6d0 size=16 callers=0 calls=0
*/
void sub_3bc6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc6d0ULL || rel >= 0x3bc6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc6e0 size=16 callers=0 calls=0
*/
void sub_3bc6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc6e0ULL || rel >= 0x3bc6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc6f0 size=192 callers=0 calls=3
   calls: nvn_no_vsync_capability_2, sub_3c4570, tegra_config
*/
void sub_3bc6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc6f0ULL || rel >= 0x3bc7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc7b0 size=96 callers=0 calls=2
   calls: nvn_no_vsync_capability_2, tegra_config
*/
void sub_3bc7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc7b0ULL || rel >= 0x3bc810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bc810 size=1056 callers=4 calls=2
   calls: sub_3c42b0, sub_3c42f0
   ref: host:/tegra_config.txt
*/
void tegra_config(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bc810ULL || rel >= 0x3bcc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcc30 size=96 callers=0 calls=2
   calls: sub_3c4780, tegra_config
*/
void sub_3bcc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcc30ULL || rel >= 0x3bcc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcc90 size=144 callers=0 calls=2
   calls: sub_3c4780, tegra_config
*/
void sub_3bcc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcc90ULL || rel >= 0x3bcd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcd20 size=32 callers=0 calls=0
*/
void sub_3bcd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcd20ULL || rel >= 0x3bcd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcd40 size=64 callers=0 calls=0
*/
void sub_3bcd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcd40ULL || rel >= 0x3bcd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcd80 size=64 callers=0 calls=0
*/
void sub_3bcd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcd80ULL || rel >= 0x3bcdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bcdc0 size=80 callers=0 calls=1
   calls: sub_3bce10
*/
void sub_3bcdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bcdc0ULL || rel >= 0x3bce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bce10 size=1552 callers=9 calls=0
*/
void sub_3bce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bce10ULL || rel >= 0x3bd420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd420 size=112 callers=0 calls=1
   calls: sub_3bce10
*/
void sub_3bd420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd420ULL || rel >= 0x3bd490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd490 size=160 callers=0 calls=1
   calls: sub_3bce10
*/
void sub_3bd490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd490ULL || rel >= 0x3bd530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd530 size=384 callers=0 calls=2
   calls: sub_3bce10, sub_3bd6b0
*/
void sub_3bd530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd530ULL || rel >= 0x3bd6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd6b0 size=576 callers=4 calls=1
   calls: sub_3bce10
*/
void sub_3bd6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd6b0ULL || rel >= 0x3bd8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bd8f0 size=288 callers=0 calls=2
   calls: sub_3bce10, sub_3bd6b0
*/
void sub_3bd8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bd8f0ULL || rel >= 0x3bda10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bda10 size=240 callers=0 calls=2
   calls: sub_3bce10, sub_3bd6b0
*/
void sub_3bda10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bda10ULL || rel >= 0x3bdb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdb00 size=128 callers=0 calls=0
*/
void sub_3bdb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdb00ULL || rel >= 0x3bdb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdb80 size=128 callers=0 calls=0
*/
void sub_3bdb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdb80ULL || rel >= 0x3bdc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdc00 size=144 callers=0 calls=0
*/
void sub_3bdc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdc00ULL || rel >= 0x3bdc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdc90 size=384 callers=0 calls=0
*/
void sub_3bdc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdc90ULL || rel >= 0x3bde10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bde10 size=32 callers=0 calls=0
*/
void sub_3bde10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bde10ULL || rel >= 0x3bde30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bde30 size=128 callers=0 calls=0
*/
void sub_3bde30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bde30ULL || rel >= 0x3bdeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdeb0 size=16 callers=0 calls=0
*/
void sub_3bdeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdeb0ULL || rel >= 0x3bdec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdec0 size=304 callers=0 calls=0
*/
void sub_3bdec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdec0ULL || rel >= 0x3bdff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003bdff0 size=16 callers=0 calls=0
*/
void sub_3bdff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3bdff0ULL || rel >= 0x3be000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be000 size=16 callers=0 calls=0
*/
void sub_3be000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be000ULL || rel >= 0x3be010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be010 size=560 callers=0 calls=0
*/
void sub_3be010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be010ULL || rel >= 0x3be240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be240 size=160 callers=0 calls=0
*/
void sub_3be240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be240ULL || rel >= 0x3be2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be2e0 size=80 callers=0 calls=0
*/
void sub_3be2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be2e0ULL || rel >= 0x3be330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be330 size=384 callers=0 calls=0
*/
void sub_3be330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be330ULL || rel >= 0x3be4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be4b0 size=160 callers=0 calls=0
*/
void sub_3be4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be4b0ULL || rel >= 0x3be550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be550 size=112 callers=0 calls=0
*/
void sub_3be550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be550ULL || rel >= 0x3be5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be5c0 size=32 callers=0 calls=0
*/
void sub_3be5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be5c0ULL || rel >= 0x3be5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be5e0 size=16 callers=0 calls=0
*/
void sub_3be5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be5e0ULL || rel >= 0x3be5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be5f0 size=64 callers=0 calls=0
*/
void sub_3be5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be5f0ULL || rel >= 0x3be630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be630 size=752 callers=8 calls=0
*/
void sub_3be630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be630ULL || rel >= 0x3be920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003be920 size=6880 callers=3 calls=1
   calls: sub_3c25c0
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/dlmalloc.c
*/
void dlmalloc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3be920ULL || rel >= 0x3c0400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0400 size=2288 callers=2 calls=3
   calls: dlmalloc_3, sub_3c0cf0, sub_3c2620
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/dlmalloc.c
*/
void dlmalloc_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0400ULL || rel >= 0x3c0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0cf0 size=560 callers=1 calls=2
   calls: dlmalloc_3, sub_3c2620
*/
void sub_3c0cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0cf0ULL || rel >= 0x3c0f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c0f20 size=1200 callers=4 calls=1
   calls: sub_3c2620
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/dlmalloc.c
*/
void dlmalloc_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c0f20ULL || rel >= 0x3c13d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c13d0 size=272 callers=1 calls=3
   calls: dlmalloc, dlmalloc_2, dlmalloc_4
*/
void sub_3c13d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c13d0ULL || rel >= 0x3c14e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c14e0 size=1296 callers=1 calls=1
   calls: dlmalloc_5
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/dlmalloc.c
*/
void dlmalloc_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c14e0ULL || rel >= 0x3c19f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c19f0 size=528 callers=1 calls=2
   calls: dlmalloc, dlmalloc_5
*/
void sub_3c19f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c19f0ULL || rel >= 0x3c1c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1c00 size=288 callers=3 calls=0
*/
void sub_3c1c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1c00ULL || rel >= 0x3c1d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c1d20 size=2160 callers=3 calls=1
   calls: sub_3c2620
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/dlmalloc.c
*/
void dlmalloc_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c1d20ULL || rel >= 0x3c2590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2590 size=16 callers=1 calls=0
*/
void sub_3c2590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2590ULL || rel >= 0x3c25a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c25a0 size=16 callers=1 calls=0
*/
void sub_3c25a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c25a0ULL || rel >= 0x3c25b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c25b0 size=16 callers=1 calls=0
*/
void sub_3c25b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c25b0ULL || rel >= 0x3c25c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c25c0 size=96 callers=2 calls=0
*/
void sub_3c25c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c25c0ULL || rel >= 0x3c2620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2620 size=48 callers=4 calls=0
*/
void sub_3c2620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2620ULL || rel >= 0x3c2650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2650 size=256 callers=0 calls=3
   calls: dlmalloc, sub_3be630, sub_3c1c00
*/
void sub_3c2650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2650ULL || rel >= 0x3c2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2750 size=128 callers=0 calls=1
   calls: sub_3be630
*/
void sub_3c2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2750ULL || rel >= 0x3c27d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c27d0 size=256 callers=0 calls=3
   calls: sub_3be630, sub_3c13d0, sub_3c1c00
*/
void sub_3c27d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c27d0ULL || rel >= 0x3c28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c28d0 size=256 callers=0 calls=3
   calls: sub_3be630, sub_3c19f0, sub_3c1c00
*/
void sub_3c28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c28d0ULL || rel >= 0x3c29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c29d0 size=64 callers=0 calls=1
   calls: dlmalloc_2
*/
void sub_3c29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c29d0ULL || rel >= 0x3c2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2a10 size=144 callers=0 calls=1
   calls: sub_3be630
*/
void sub_3c2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2a10ULL || rel >= 0x3c2aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2aa0 size=96 callers=0 calls=0
*/
void sub_3c2aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2aa0ULL || rel >= 0x3c2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2b00 size=96 callers=0 calls=0
*/
void sub_3c2b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2b00ULL || rel >= 0x3c2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2b60 size=32 callers=0 calls=0
*/
void sub_3c2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2b60ULL || rel >= 0x3c2b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2b80 size=256 callers=0 calls=0
*/
void sub_3c2b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2b80ULL || rel >= 0x3c2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2c80 size=400 callers=0 calls=0
*/
void sub_3c2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2c80ULL || rel >= 0x3c2e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2e10 size=32 callers=0 calls=0
*/
void sub_3c2e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2e10ULL || rel >= 0x3c2e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2e30 size=112 callers=0 calls=0
*/
void sub_3c2e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2e30ULL || rel >= 0x3c2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2ea0 size=128 callers=0 calls=0
*/
void sub_3c2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2ea0ULL || rel >= 0x3c2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2f20 size=96 callers=0 calls=0
*/
void sub_3c2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2f20ULL || rel >= 0x3c2f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c2f80 size=144 callers=0 calls=0
*/
void sub_3c2f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c2f80ULL || rel >= 0x3c3010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3010 size=96 callers=0 calls=0
*/
void sub_3c3010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3010ULL || rel >= 0x3c3070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3070 size=144 callers=0 calls=0
*/
void sub_3c3070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3070ULL || rel >= 0x3c3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3100 size=160 callers=0 calls=0
*/
void sub_3c3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3100ULL || rel >= 0x3c31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c31a0 size=144 callers=0 calls=0
*/
void sub_3c31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c31a0ULL || rel >= 0x3c3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3230 size=48 callers=0 calls=0
*/
void sub_3c3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3230ULL || rel >= 0x3c3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3260 size=176 callers=0 calls=0
*/
void sub_3c3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3260ULL || rel >= 0x3c3310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3310 size=112 callers=0 calls=0
*/
void sub_3c3310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3310ULL || rel >= 0x3c3380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3380 size=48 callers=0 calls=0
*/
void sub_3c3380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3380ULL || rel >= 0x3c33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c33b0 size=80 callers=0 calls=0
*/
void sub_3c33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c33b0ULL || rel >= 0x3c3400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3400 size=48 callers=0 calls=0
*/
void sub_3c3400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3400ULL || rel >= 0x3c3430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3430 size=32 callers=0 calls=0
*/
void sub_3c3430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3430ULL || rel >= 0x3c3450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3450 size=32 callers=0 calls=0
*/
void sub_3c3450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3450ULL || rel >= 0x3c3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3470 size=32 callers=0 calls=0
*/
void sub_3c3470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3470ULL || rel >= 0x3c3490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3490 size=32 callers=0 calls=0
*/
void sub_3c3490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3490ULL || rel >= 0x3c34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c34b0 size=96 callers=0 calls=0
*/
void sub_3c34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c34b0ULL || rel >= 0x3c3510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3510 size=16 callers=0 calls=0
*/
void sub_3c3510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3510ULL || rel >= 0x3c3520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3520 size=48 callers=0 calls=0
*/
void sub_3c3520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3520ULL || rel >= 0x3c3550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3550 size=16 callers=0 calls=0
*/
void sub_3c3550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3550ULL || rel >= 0x3c3560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3560 size=48 callers=0 calls=0
*/
void sub_3c3560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3560ULL || rel >= 0x3c3590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3590 size=96 callers=0 calls=0
*/
void sub_3c3590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3590ULL || rel >= 0x3c35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c35f0 size=16 callers=0 calls=0
*/
void sub_3c35f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c35f0ULL || rel >= 0x3c3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3600 size=16 callers=0 calls=0
*/
void sub_3c3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3600ULL || rel >= 0x3c3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3610 size=48 callers=0 calls=0
*/
void sub_3c3610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3610ULL || rel >= 0x3c3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3640 size=16 callers=0 calls=0
*/
void sub_3c3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3640ULL || rel >= 0x3c3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3650 size=16 callers=0 calls=0
*/
void sub_3c3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3650ULL || rel >= 0x3c3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3660 size=16 callers=0 calls=0
*/
void sub_3c3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3660ULL || rel >= 0x3c3670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3670 size=48 callers=0 calls=0
*/
void sub_3c3670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3670ULL || rel >= 0x3c36a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c36a0 size=48 callers=0 calls=0
*/
void sub_3c36a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c36a0ULL || rel >= 0x3c36d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c36d0 size=16 callers=0 calls=0
*/
void sub_3c36d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c36d0ULL || rel >= 0x3c36e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c36e0 size=16 callers=0 calls=0
*/
void sub_3c36e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c36e0ULL || rel >= 0x3c36f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c36f0 size=16 callers=0 calls=0
*/
void sub_3c36f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c36f0ULL || rel >= 0x3c3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3700 size=16 callers=0 calls=0
*/
void sub_3c3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3700ULL || rel >= 0x3c3710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3710 size=16 callers=0 calls=0
*/
void sub_3c3710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3710ULL || rel >= 0x3c3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3720 size=16 callers=0 calls=0
*/
void sub_3c3720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3720ULL || rel >= 0x3c3730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3730 size=16 callers=0 calls=0
*/
void sub_3c3730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3730ULL || rel >= 0x3c3740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3740 size=1088 callers=1 calls=0
*/
void sub_3c3740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3740ULL || rel >= 0x3c3b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3b80 size=256 callers=1 calls=0
*/
void sub_3c3b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3b80ULL || rel >= 0x3c3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3c80 size=224 callers=0 calls=0
*/
void sub_3c3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3c80ULL || rel >= 0x3c3d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3d60 size=128 callers=0 calls=0
*/
void sub_3c3d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3d60ULL || rel >= 0x3c3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3de0 size=48 callers=0 calls=0
*/
void sub_3c3de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3de0ULL || rel >= 0x3c3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3e10 size=176 callers=0 calls=0
*/
void sub_3c3e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3e10ULL || rel >= 0x3c3ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3ec0 size=128 callers=2 calls=0
*/
void sub_3c3ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3ec0ULL || rel >= 0x3c3f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3f40 size=160 callers=0 calls=0
*/
void sub_3c3f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3f40ULL || rel >= 0x3c3fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3fe0 size=16 callers=0 calls=0
*/
void sub_3c3fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3fe0ULL || rel >= 0x3c3ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c3ff0 size=96 callers=1 calls=0
*/
void sub_3c3ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c3ff0ULL || rel >= 0x3c4050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4050 size=64 callers=0 calls=0
*/
void sub_3c4050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4050ULL || rel >= 0x3c4090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4090 size=64 callers=0 calls=0
*/
void sub_3c4090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4090ULL || rel >= 0x3c40d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c40d0 size=32 callers=0 calls=0
*/
void sub_3c40d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c40d0ULL || rel >= 0x3c40f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c40f0 size=64 callers=0 calls=0
*/
void sub_3c40f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c40f0ULL || rel >= 0x3c4130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4130 size=128 callers=0 calls=3
   calls: sub_3c2590, sub_3c25a0, sub_3c25b0
*/
void sub_3c4130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4130ULL || rel >= 0x3c41b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c41b0 size=128 callers=0 calls=0
*/
void sub_3c41b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c41b0ULL || rel >= 0x3c4230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4230 size=16 callers=0 calls=0
*/
void sub_3c4230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4230ULL || rel >= 0x3c4240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4240 size=16 callers=0 calls=0
*/
void sub_3c4240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4240ULL || rel >= 0x3c4250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4250 size=16 callers=0 calls=0
*/
void sub_3c4250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4250ULL || rel >= 0x3c4260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4260 size=16 callers=0 calls=0
*/
void sub_3c4260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4260ULL || rel >= 0x3c4270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4270 size=16 callers=0 calls=0
*/
void sub_3c4270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4270ULL || rel >= 0x3c4280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4280 size=16 callers=0 calls=0
*/
void sub_3c4280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4280ULL || rel >= 0x3c4290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4290 size=32 callers=0 calls=0
*/
void sub_3c4290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4290ULL || rel >= 0x3c42b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c42b0 size=32 callers=1 calls=0
*/
void sub_3c42b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c42b0ULL || rel >= 0x3c42d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c42d0 size=32 callers=0 calls=0
*/
void sub_3c42d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c42d0ULL || rel >= 0x3c42f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c42f0 size=32 callers=1 calls=0
*/
void sub_3c42f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c42f0ULL || rel >= 0x3c4310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4310 size=16 callers=0 calls=0
*/
void sub_3c4310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4310ULL || rel >= 0x3c4320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4320 size=32 callers=0 calls=0
*/
void sub_3c4320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4320ULL || rel >= 0x3c4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4340 size=32 callers=0 calls=0
*/
void sub_3c4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4340ULL || rel >= 0x3c4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4360 size=32 callers=0 calls=0
*/
void sub_3c4360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4360ULL || rel >= 0x3c4380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4380 size=32 callers=0 calls=0
*/
void sub_3c4380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4380ULL || rel >= 0x3c43a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c43a0 size=16 callers=0 calls=0
*/
void sub_3c43a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c43a0ULL || rel >= 0x3c43b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c43b0 size=32 callers=0 calls=0
*/
void sub_3c43b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c43b0ULL || rel >= 0x3c43d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c43d0 size=32 callers=0 calls=0
*/
void sub_3c43d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c43d0ULL || rel >= 0x3c43f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c43f0 size=32 callers=0 calls=0
*/
void sub_3c43f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c43f0ULL || rel >= 0x3c4410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4410 size=32 callers=0 calls=0
*/
void sub_3c4410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4410ULL || rel >= 0x3c4430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4430 size=16 callers=0 calls=0
*/
void sub_3c4430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4430ULL || rel >= 0x3c4440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4440 size=32 callers=0 calls=0
*/
void sub_3c4440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4440ULL || rel >= 0x3c4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4460 size=32 callers=0 calls=0
*/
void sub_3c4460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4460ULL || rel >= 0x3c4480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4480 size=32 callers=0 calls=0
*/
void sub_3c4480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4480ULL || rel >= 0x3c44a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c44a0 size=32 callers=0 calls=0
*/
void sub_3c44a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c44a0ULL || rel >= 0x3c44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c44c0 size=16 callers=0 calls=0
*/
void sub_3c44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c44c0ULL || rel >= 0x3c44d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c44d0 size=48 callers=0 calls=0
*/
void sub_3c44d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c44d0ULL || rel >= 0x3c4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4500 size=48 callers=0 calls=0
*/
void sub_3c4500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4500ULL || rel >= 0x3c4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4530 size=32 callers=0 calls=0
*/
void sub_3c4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4530ULL || rel >= 0x3c4550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4550 size=32 callers=0 calls=0
*/
void sub_3c4550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4550ULL || rel >= 0x3c4570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4570 size=16 callers=1 calls=0
*/
void sub_3c4570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4570ULL || rel >= 0x3c4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4580 size=288 callers=2 calls=0
   ref: /dev/nvhost-ctrl
   ref: nvn_no_vsync_capability
*/
void nvn_no_vsync_capability_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4580ULL || rel >= 0x3c46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c46a0 size=224 callers=0 calls=0
   ref: /dev/nverpt-ctrl
*/
void nverpt_ctrl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c46a0ULL || rel >= 0x3c4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4780 size=16 callers=2 calls=0
*/
void sub_3c4780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4780ULL || rel >= 0x3c4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4790 size=16 callers=1 calls=0
*/
void sub_3c4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4790ULL || rel >= 0x3c47a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c47a0 size=16 callers=0 calls=0
*/
void sub_3c47a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c47a0ULL || rel >= 0x3c47b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c47b0 size=16 callers=1 calls=0
*/
void sub_3c47b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c47b0ULL || rel >= 0x3c47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c47c0 size=16 callers=0 calls=0
*/
void sub_3c47c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c47c0ULL || rel >= 0x3c47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c47d0 size=16 callers=0 calls=0
*/
void sub_3c47d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c47d0ULL || rel >= 0x3c47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c47e0 size=16 callers=0 calls=0
*/
void sub_3c47e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c47e0ULL || rel >= 0x3c47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c47f0 size=16 callers=0 calls=0
*/
void sub_3c47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c47f0ULL || rel >= 0x3c4800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4800 size=16 callers=0 calls=0
*/
void sub_3c4800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4800ULL || rel >= 0x3c4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4810 size=16 callers=0 calls=0
*/
void sub_3c4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4810ULL || rel >= 0x3c4820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4820 size=16 callers=0 calls=0
   ref: (unknown process)
*/
void unknown_process(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4820ULL || rel >= 0x3c4830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4830 size=16 callers=0 calls=0
*/
void sub_3c4830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4830ULL || rel >= 0x3c4840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4840 size=16 callers=0 calls=0
*/
void sub_3c4840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4840ULL || rel >= 0x3c4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4850 size=16 callers=0 calls=0
*/
void sub_3c4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4850ULL || rel >= 0x3c4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4860 size=16 callers=0 calls=0
*/
void sub_3c4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4860ULL || rel >= 0x3c4870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4870 size=16 callers=0 calls=0
*/
void sub_3c4870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4870ULL || rel >= 0x3c4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4880 size=16 callers=0 calls=0
*/
void sub_3c4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4880ULL || rel >= 0x3c4890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4890 size=16 callers=0 calls=0
*/
void sub_3c4890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4890ULL || rel >= 0x3c48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c48a0 size=16 callers=0 calls=0
*/
void sub_3c48a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c48a0ULL || rel >= 0x3c48b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c48b0 size=16 callers=0 calls=0
*/
void sub_3c48b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c48b0ULL || rel >= 0x3c48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c48c0 size=16 callers=0 calls=0
*/
void sub_3c48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c48c0ULL || rel >= 0x3c48d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c48d0 size=16 callers=0 calls=0
*/
void sub_3c48d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c48d0ULL || rel >= 0x3c48e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c48e0 size=16 callers=0 calls=0
*/
void sub_3c48e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c48e0ULL || rel >= 0x3c48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c48f0 size=16 callers=0 calls=0
*/
void sub_3c48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c48f0ULL || rel >= 0x3c4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4900 size=16 callers=0 calls=0
*/
void sub_3c4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4900ULL || rel >= 0x3c4910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4910 size=16 callers=0 calls=0
*/
void sub_3c4910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4910ULL || rel >= 0x3c4920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4920 size=16 callers=0 calls=0
*/
void sub_3c4920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4920ULL || rel >= 0x3c4930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4930 size=16 callers=0 calls=0
*/
void sub_3c4930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4930ULL || rel >= 0x3c4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4940 size=80 callers=0 calls=0
*/
void sub_3c4940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4940ULL || rel >= 0x3c4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4990 size=96 callers=0 calls=0
*/
void sub_3c4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4990ULL || rel >= 0x3c49f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c49f0 size=192 callers=0 calls=0
*/
void sub_3c49f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c49f0ULL || rel >= 0x3c4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4ab0 size=192 callers=0 calls=0
*/
void sub_3c4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4ab0ULL || rel >= 0x3c4b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4b70 size=80 callers=0 calls=0
*/
void sub_3c4b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4b70ULL || rel >= 0x3c4bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4bc0 size=176 callers=0 calls=0
*/
void sub_3c4bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4bc0ULL || rel >= 0x3c4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4c70 size=192 callers=0 calls=0
*/
void sub_3c4c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4c70ULL || rel >= 0x3c4d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4d30 size=272 callers=0 calls=0
   ref: nv::SetGraphicsAllocator must be called before using the graphics subsystem.
   ref: NN_ABORT
   ref: All function pointers passed to nv::SetGraphicsAllocator must be valid.
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos.cpp
   ref: SetGraphicsAllocator
   ref: nv::SetGraphicsAllocator must not be called more than once.
*/
void SetGraphicsAllocator(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4d30ULL || rel >= 0x3c4e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4e40 size=32 callers=0 calls=0
*/
void sub_3c4e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4e40ULL || rel >= 0x3c4e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4e60 size=32 callers=0 calls=0
*/
void sub_3c4e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4e60ULL || rel >= 0x3c4e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4e80 size=32 callers=0 calls=0
*/
void sub_3c4e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4e80ULL || rel >= 0x3c4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4ea0 size=32 callers=0 calls=0
*/
void sub_3c4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4ea0ULL || rel >= 0x3c4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4ec0 size=96 callers=0 calls=0
   ref: nv::SetGraphicsServiceName must be called before nv::InitializeGraphics.
   ref: NN_ABORT
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos.cpp
   ref: SetGraphicsServiceName
*/
void SetGraphicsServiceName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4ec0ULL || rel >= 0x3c4f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4f20 size=192 callers=0 calls=0
   ref: nv::InitializeGraphics must not be called more than once.
   ref: NN_ABORT
   ref: InitializeGraphics
   ref: nv::InitializeGraphics requires valid pointer and size.
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos.cpp
   ref: nv::InitializeGraphics requires at least 32KB transfer memory.
*/
void InitializeGraphics(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4f20ULL || rel >= 0x3c4fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c4fe0 size=96 callers=0 calls=0
*/
void sub_3c4fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c4fe0ULL || rel >= 0x3c5040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5040 size=208 callers=0 calls=0
   ref: nv::InitializeGraphicsDevtools requires valid pointer and size.
   ref: NN_ABORT
   ref: nv::InitializeGraphicsDevtools must not be called more than once.
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos.cpp
   ref: nv::InitializeGraphics must be called before nv::InitializeGraphicsDevtools
   ref: InitializeGraphicsDevtools
*/
void InitializeGraphicsDevtools(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5040ULL || rel >= 0x3c5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5110 size=96 callers=0 calls=1
   calls: NvOsDrvGetStatus
*/
void sub_3c5110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5110ULL || rel >= 0x3c5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5170 size=16 callers=0 calls=0
*/
void sub_3c5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5170ULL || rel >= 0x3c5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5180 size=128 callers=1 calls=0
   ref: NN_ABORT
   ref: Use of nv::InitializeGraphics is required.
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos.cpp
   ref: InitCheck
*/
void InitCheck(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5180ULL || rel >= 0x3c5200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5200 size=48 callers=0 calls=0
   ref: NN_ABORT
   ref: ERROR: SetGraphicsAllocator must be called prior to Alloc
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos.cpp
   ref: AbortAlloc
*/
void AbortAlloc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5200ULL || rel >= 0x3c5230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5230 size=48 callers=0 calls=0
   ref: NN_ABORT
   ref: AbortAllocAlign
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos.cpp
   ref: ERROR: SetGraphicsAllocator must be called prior to AllocAlign
*/
void AbortAllocAlign(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5230ULL || rel >= 0x3c5260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5260 size=48 callers=0 calls=0
   ref: ERROR: SetGraphicsAllocator must be called prior to Realloc
   ref: NN_ABORT
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos.cpp
   ref: AbortRealloc
*/
void AbortRealloc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5260ULL || rel >= 0x3c5290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5290 size=48 callers=0 calls=0
   ref: NN_ABORT
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos.cpp
   ref: AbortFree
   ref: ERROR: SetGraphicsAllocator must be called prior to Free
*/
void AbortFree(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5290ULL || rel >= 0x3c52c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c52c0 size=64 callers=0 calls=0
*/
void sub_3c52c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c52c0ULL || rel >= 0x3c5300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5300 size=16 callers=0 calls=0
*/
void sub_3c5300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5300ULL || rel >= 0x3c5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5310 size=208 callers=1 calls=0
   ref: CreateNvDrvByHipc
   ref: result.IsSuccess()
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_drv_DriverImplByHipc.cpp
*/
void CreateNvDrvByHipc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5310ULL || rel >= 0x3c53e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c53e0 size=336 callers=1 calls=0
   ref: nn::Result::IsSuccess()
   ref: p.CloneSession<NvDrvAllocator::Policy>(&ret, 1)
   ref: Failed: %s
   ref: CloneNvDrvForRealtime
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_drv_DriverImplByHipc.cpp
*/
void CloneNvDrvForRealtime(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c53e0ULL || rel >= 0x3c5530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5530 size=16 callers=0 calls=0
*/
void sub_3c5530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5530ULL || rel >= 0x3c5540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5540 size=192 callers=0 calls=0
*/
void sub_3c5540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5540ULL || rel >= 0x3c5600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5600 size=16 callers=0 calls=0
*/
void sub_3c5600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5600ULL || rel >= 0x3c5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5610 size=16 callers=0 calls=0
*/
void sub_3c5610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5610ULL || rel >= 0x3c5620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5620 size=48 callers=0 calls=1
   calls: ProcessImpl
*/
void sub_3c5620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5620ULL || rel >= 0x3c5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5650 size=160 callers=0 calls=1
   calls: CachePointerBufferSize
*/
void sub_3c5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5650ULL || rel >= 0x3c56f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c56f0 size=96 callers=0 calls=1
   calls: ProcessImpl_2
*/
void sub_3c56f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c56f0ULL || rel >= 0x3c5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5750 size=112 callers=0 calls=1
   calls: ProcessImpl_3
*/
void sub_3c5750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5750ULL || rel >= 0x3c57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c57c0 size=128 callers=0 calls=1
   calls: ProcessImpl_4
*/
void sub_3c57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c57c0ULL || rel >= 0x3c5840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5840 size=128 callers=0 calls=1
   calls: ProcessImpl_5
*/
void sub_3c5840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5840ULL || rel >= 0x3c58c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c58c0 size=32 callers=0 calls=1
   calls: ProcessImpl_6
*/
void sub_3c58c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c58c0ULL || rel >= 0x3c58e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c58e0 size=96 callers=0 calls=1
   calls: ProcessImpl_7
*/
void sub_3c58e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c58e0ULL || rel >= 0x3c5940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5940 size=96 callers=0 calls=1
   calls: ProcessImpl_8
*/
void sub_3c5940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5940ULL || rel >= 0x3c59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c59a0 size=32 callers=0 calls=1
   calls: ProcessImpl_9
*/
void sub_3c59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c59a0ULL || rel >= 0x3c59c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c59c0 size=96 callers=0 calls=1
   calls: ProcessImpl_10
*/
void sub_3c59c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c59c0ULL || rel >= 0x3c5a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5a20 size=160 callers=0 calls=1
   calls: CachePointerBufferSize_2
*/
void sub_3c5a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5a20ULL || rel >= 0x3c5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5ac0 size=160 callers=0 calls=1
   calls: CachePointerBufferSize_3
*/
void sub_3c5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5ac0ULL || rel >= 0x3c5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5b60 size=80 callers=0 calls=1
   calls: ProcessImpl_11
*/
void sub_3c5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5b60ULL || rel >= 0x3c5bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5bb0 size=16 callers=0 calls=0
*/
void sub_3c5bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5bb0ULL || rel >= 0x3c5bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5bc0 size=16 callers=0 calls=0
*/
void sub_3c5bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5bc0ULL || rel >= 0x3c5bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5bd0 size=576 callers=1 calls=2
   calls: WriteBufferDataImpl, sub_3c65f0
   ref: ProcessImpl
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void ProcessImpl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5bd0ULL || rel >= 0x3c5e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c5e10 size=2016 callers=4 calls=0
   ref: WriteBufferDataImpl
   ref: NN_ABORT
   ref: [SF-CMIF-Unexpected]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void WriteBufferDataImpl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c5e10ULL || rel >= 0x3c65f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c65f0 size=512 callers=14 calls=0
*/
void sub_3c65f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c65f0ULL || rel >= 0x3c67f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c67f0 size=768 callers=1 calls=2
   calls: WriteBufferDataImpl, sub_3c65f0
   ref: nn::Result::IsSuccess()
   ref: Failed: %s
   ref: QueryPointerBufferSize(&pointerBufferSize, m_ClientHandle)
   ref: ProcessImpl
   ref: CachePointerBufferSize
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void CachePointerBufferSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c67f0ULL || rel >= 0x3c6af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6af0 size=448 callers=1 calls=1
   calls: sub_3c65f0
   ref: ProcessImpl
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void ProcessImpl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6af0ULL || rel >= 0x3c6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6cb0 size=592 callers=1 calls=1
   calls: sub_3c65f0
   ref: ProcessImpl
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void ProcessImpl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6cb0ULL || rel >= 0x3c6f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c6f00 size=560 callers=1 calls=2
   calls: GetOutNativeHandles, sub_3c65f0
   ref: ProcessImpl
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void ProcessImpl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c6f00ULL || rel >= 0x3c7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7130 size=320 callers=1 calls=0
   ref: [SF-CMIF-Unexpected:InvalidResponse]
   ref: GetOutNativeHandles
   ref: NN_ABORT
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void GetOutNativeHandles(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7130ULL || rel >= 0x3c7270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7270 size=544 callers=1 calls=1
   calls: sub_3c65f0
   ref: ProcessImpl
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void ProcessImpl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7270ULL || rel >= 0x3c7490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7490 size=432 callers=1 calls=1
   calls: sub_3c65f0
   ref: ProcessImpl
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void ProcessImpl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7490ULL || rel >= 0x3c7640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7640 size=448 callers=1 calls=1
   calls: sub_3c65f0
   ref: ProcessImpl
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void ProcessImpl_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7640ULL || rel >= 0x3c7800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7800 size=464 callers=1 calls=1
   calls: sub_3c65f0
   ref: ProcessImpl
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void ProcessImpl_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7800ULL || rel >= 0x3c79d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c79d0 size=368 callers=1 calls=1
   calls: sub_3c65f0
   ref: ProcessImpl
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void ProcessImpl_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c79d0ULL || rel >= 0x3c7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7b40 size=528 callers=1 calls=1
   calls: sub_3c65f0
   ref: ProcessImpl
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void ProcessImpl_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7b40ULL || rel >= 0x3c7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c7d50 size=784 callers=1 calls=2
   calls: WriteBufferDataImpl, sub_3c65f0
   ref: nn::Result::IsSuccess()
   ref: Failed: %s
   ref: QueryPointerBufferSize(&pointerBufferSize, m_ClientHandle)
   ref: ProcessImpl
   ref: CachePointerBufferSize
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void CachePointerBufferSize_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c7d50ULL || rel >= 0x3c8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8060 size=784 callers=1 calls=2
   calls: WriteBufferDataImpl, sub_3c65f0
   ref: nn::Result::IsSuccess()
   ref: Failed: %s
   ref: QueryPointerBufferSize(&pointerBufferSize, m_ClientHandle)
   ref: ProcessImpl
   ref: CachePointerBufferSize
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void CachePointerBufferSize_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8060ULL || rel >= 0x3c8370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8370 size=416 callers=1 calls=1
   calls: sub_3c65f0
   ref: ProcessImpl
   ref: reader.GetMessageByteSize() <= messageBufferSize
   ref: [SF-Internal]
   ref: C:/dvs/git/dirty/git-master_hos/3rdparty/hos-ddk-minimal/ddk/Programs/Chris/Include\nn/sf/hipc/clien
*/
void ProcessImpl_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8370ULL || rel >= 0x3c8510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8510 size=80 callers=0 calls=0
*/
void sub_3c8510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8510ULL || rel >= 0x3c8560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8560 size=96 callers=0 calls=1
   calls: sub_1c0
*/
void sub_3c8560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8560ULL || rel >= 0x3c85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c85c0 size=560 callers=0 calls=2
   calls: CloneNvDrvForRealtime, CreateNvDrvByHipc
   ref: Fatal error: process %s: Out of firmware memory
   ref: NN_ABORT
   ref: Unknown
   ref: NV_MEMORY_PROFILER
   ref: NvOsDrvInitialize
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos_drv.cpp
*/
void NV_MEMORY_PROFILER(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c85c0ULL || rel >= 0x3c87f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c87f0 size=256 callers=0 calls=0
   ref: Fatal error: process %s: Out of firmware memory
   ref: NN_ABORT
   ref: Unknown
   ref: NvOsDrvInitializeDevtools
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos_drv.cpp
*/
void NvOsDrvInitializeDevtools(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c87f0ULL || rel >= 0x3c88f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c88f0 size=192 callers=0 calls=1
   calls: InitCheck
   ref: Fatal error: process %s: Out of firmware memory
   ref: NN_ABORT
   ref: Unknown
   ref: NvOsDrvOpen
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos_drv.cpp
*/
void NvOsDrvOpen(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c88f0ULL || rel >= 0x3c89b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c89b0 size=144 callers=0 calls=0
   ref: Fatal error: process %s: Out of firmware memory
   ref: NN_ABORT
   ref: Unknown
   ref: NvOsDrvClose
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos_drv.cpp
*/
void NvOsDrvClose(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c89b0ULL || rel >= 0x3c8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8a40 size=368 callers=0 calls=0
   ref: Fatal error: process %s: Out of firmware memory
   ref: NN_ABORT
   ref: Unknown
   ref: NvOsDrvIoctl
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos_drv.cpp
*/
void NvOsDrvIoctl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8a40ULL || rel >= 0x3c8bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8bb0 size=384 callers=0 calls=0
   ref: NvOsDrvIoctl2
   ref: Fatal error: process %s: Out of firmware memory
   ref: NN_ABORT
   ref: Unknown
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos_drv.cpp
*/
void NvOsDrvIoctl2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8bb0ULL || rel >= 0x3c8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8d30 size=384 callers=0 calls=0
   ref: Fatal error: process %s: Out of firmware memory
   ref: NN_ABORT
   ref: Unknown
   ref: NvOsDrvIoctl3
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos_drv.cpp
*/
void NvOsDrvIoctl3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8d30ULL || rel >= 0x3c8eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8eb0 size=176 callers=0 calls=0
   ref: Fatal error: process %s: Out of firmware memory
   ref: NN_ABORT
   ref: Unknown
   ref: NvOsDrvMapSharedMem
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos_drv.cpp
*/
void NvOsDrvMapSharedMem(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8eb0ULL || rel >= 0x3c8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8f60 size=144 callers=1 calls=0
   ref: Fatal error: process %s: Out of firmware memory
   ref: NN_ABORT
   ref: Unknown
   ref: NvOsDrvGetStatus
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos_drv.cpp
*/
void NvOsDrvGetStatus(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8f60ULL || rel >= 0x3c8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c8ff0 size=32 callers=0 calls=0
*/
void sub_3c8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c8ff0ULL || rel >= 0x3c9010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9010 size=192 callers=0 calls=0
   ref: Fatal error: process %s: Out of firmware memory
   ref: NN_ABORT
   ref: Unknown
   ref: NvOsDrvQueryEvent
   ref: C:/dvs/git/dirty/git-master_hos/core-hos/utils/nvos/hos/nvos_hos_drv.cpp
*/
void NvOsDrvQueryEvent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9010ULL || rel >= 0x3c90d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c90d0 size=32 callers=0 calls=0
*/
void sub_3c90d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c90d0ULL || rel >= 0x3c90f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c90f0 size=176 callers=0 calls=0
*/
void sub_3c90f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c90f0ULL || rel >= 0x3c91a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c91a0 size=336 callers=0 calls=0
*/
void sub_3c91a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c91a0ULL || rel >= 0x3c92f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c92f0 size=112 callers=0 calls=0
*/
void sub_3c92f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c92f0ULL || rel >= 0x3c9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9360 size=16 callers=0 calls=0
*/
void sub_3c9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9360ULL || rel >= 0x3c9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9370 size=16 callers=1 calls=0
*/
void sub_3c9370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9370ULL || rel >= 0x3c9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9380 size=800 callers=1 calls=0
*/
void sub_3c9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9380ULL || rel >= 0x3c96a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c96a0 size=1152 callers=1 calls=1
   calls: sub_3c9380
*/
void sub_3c96a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c96a0ULL || rel >= 0x3c9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9b20 size=80 callers=7 calls=0
*/
void sub_3c9b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9b20ULL || rel >= 0x3c9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9b70 size=352 callers=0 calls=2
   calls: sub_3ceca0, sub_3cecb0
*/
void sub_3c9b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9b70ULL || rel >= 0x3c9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9cd0 size=672 callers=0 calls=2
   calls: sub_3ceca0, sub_3cecb0
*/
void sub_3c9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9cd0ULL || rel >= 0x3c9f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003c9f70 size=224 callers=0 calls=2
   calls: sub_3ceca0, sub_3cecb0
*/
void sub_3c9f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3c9f70ULL || rel >= 0x3ca050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca050 size=32 callers=0 calls=0
*/
void sub_3ca050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca050ULL || rel >= 0x3ca070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca070 size=64 callers=0 calls=0
*/
void sub_3ca070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca070ULL || rel >= 0x3ca0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca0b0 size=64 callers=0 calls=0
*/
void sub_3ca0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca0b0ULL || rel >= 0x3ca0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca0f0 size=80 callers=0 calls=0
*/
void sub_3ca0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca0f0ULL || rel >= 0x3ca140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca140 size=80 callers=0 calls=0
*/
void sub_3ca140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca140ULL || rel >= 0x3ca190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca190 size=80 callers=0 calls=0
*/
void sub_3ca190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca190ULL || rel >= 0x3ca1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca1e0 size=48 callers=0 calls=0
*/
void sub_3ca1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca1e0ULL || rel >= 0x3ca210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca210 size=48 callers=0 calls=0
*/
void sub_3ca210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca210ULL || rel >= 0x3ca240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca240 size=48 callers=0 calls=0
*/
void sub_3ca240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca240ULL || rel >= 0x3ca270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca270 size=48 callers=0 calls=0
*/
void sub_3ca270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca270ULL || rel >= 0x3ca2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca2a0 size=48 callers=0 calls=0
*/
void sub_3ca2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca2a0ULL || rel >= 0x3ca2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca2d0 size=48 callers=0 calls=0
*/
void sub_3ca2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca2d0ULL || rel >= 0x3ca300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca300 size=112 callers=0 calls=0
*/
void sub_3ca300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca300ULL || rel >= 0x3ca370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca370 size=112 callers=0 calls=0
*/
void sub_3ca370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca370ULL || rel >= 0x3ca3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca3e0 size=80 callers=0 calls=0
*/
void sub_3ca3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca3e0ULL || rel >= 0x3ca430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca430 size=400 callers=0 calls=0
*/
void sub_3ca430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca430ULL || rel >= 0x3ca5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ca5c0 size=2512 callers=0 calls=0
*/
void sub_3ca5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ca5c0ULL || rel >= 0x3caf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003caf90 size=672 callers=0 calls=0
*/
void sub_3caf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3caf90ULL || rel >= 0x3cb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cb230 size=2192 callers=0 calls=0
*/
void sub_3cb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cb230ULL || rel >= 0x3cbac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbac0 size=16 callers=0 calls=0
*/
void sub_3cbac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbac0ULL || rel >= 0x3cbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbad0 size=112 callers=0 calls=0
*/
void sub_3cbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbad0ULL || rel >= 0x3cbb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbb40 size=352 callers=0 calls=0
   ref: consumer-decompression
   ref: producer-compbits-conversion
   ref: NV_DECOMPRESSION
   ref: cde-client
   ref: client
   ref: consumer-compbits-conversion
   ref: cde-lazy
   ref: disabled
*/
void NV_DECOMPRESSION(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbb40ULL || rel >= 0x3cbca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbca0 size=32 callers=0 calls=0
*/
void sub_3cbca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbca0ULL || rel >= 0x3cbcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbcc0 size=128 callers=0 calls=0
*/
void sub_3cbcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbcc0ULL || rel >= 0x3cbd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbd40 size=16 callers=0 calls=0
*/
void sub_3cbd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbd40ULL || rel >= 0x3cbd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbd50 size=144 callers=0 calls=0
*/
void sub_3cbd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbd50ULL || rel >= 0x3cbde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbde0 size=256 callers=0 calls=0
*/
void sub_3cbde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbde0ULL || rel >= 0x3cbee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbee0 size=272 callers=0 calls=0
*/
void sub_3cbee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbee0ULL || rel >= 0x3cbff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cbff0 size=16 callers=0 calls=0
*/
void sub_3cbff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cbff0ULL || rel >= 0x3cc000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc000 size=848 callers=1 calls=1
   calls: sub_3cc4d0
   ref: NV_COMPRESSION
   ref: enabled
   ref: disabled
*/
void NV_COMPRESSION(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc000ULL || rel >= 0x3cc350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc350 size=384 callers=0 calls=2
   calls: NV_COMPRESSION, sub_3ceca0
*/
void sub_3cc350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc350ULL || rel >= 0x3cc4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc4d0 size=592 callers=1 calls=0
*/
void sub_3cc4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc4d0ULL || rel >= 0x3cc720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc720 size=224 callers=0 calls=0
   ref: %s%dx%dx%s
*/
void s_dx_dx_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc720ULL || rel >= 0x3cc800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc800 size=304 callers=0 calls=0
*/
void sub_3cc800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc800ULL || rel >= 0x3cc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cc930 size=1216 callers=0 calls=1
   calls: sub_3ceca0
   ref:         "CdeHorizontalCompbitsOffset": %u,
   ref: Interlaced
   ref:         "Kind": "%s",
   ref: Generic_16Bx2
   ref: Progressive
   ref:         "Pitch": %u,
   ref:         "Size": %llu,
   ref:         "Height": %u,
*/
void Generic_16Bx2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cc930ULL || rel >= 0x3ccdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ccdf0 size=1376 callers=0 calls=11
   calls: sub_3cd8c0, sub_3cd9b0, sub_3cd9c0, sub_3cda00, sub_3cda20, sub_3cdae0, sub_3cdc20, sub_3cdd60, sub_3cddf0, sub_3cde80, sub_3cde90
   ref: Height
   ref: CdeScatterBufferOffset
   ref: Offset
   ref: Interlaced
   ref: CdeHorizontalCompbitsOffset
   ref: inflate
   ref: Layout
   ref: Generic_16Bx2
*/
void SecondFieldOffset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ccdf0ULL || rel >= 0x3cd350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd350 size=224 callers=0 calls=0
*/
void sub_3cd350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd350ULL || rel >= 0x3cd430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd430 size=1168 callers=0 calls=3
   calls: sub_3d1490, sub_3d14c0, sub_3d1fb0
*/
void sub_3cd430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd430ULL || rel >= 0x3cd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd8c0 size=240 callers=1 calls=2
   calls: sub_3cdee0, sub_3ce1d0
*/
void sub_3cd8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd8c0ULL || rel >= 0x3cd9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd9b0 size=16 callers=1 calls=0
*/
void sub_3cd9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd9b0ULL || rel >= 0x3cd9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cd9c0 size=64 callers=2 calls=0
*/
void sub_3cd9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cd9c0ULL || rel >= 0x3cda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cda00 size=32 callers=1 calls=0
*/
void sub_3cda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cda00ULL || rel >= 0x3cda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cda20 size=192 callers=4 calls=0
*/
void sub_3cda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cda20ULL || rel >= 0x3cdae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cdae0 size=320 callers=9 calls=0
*/
void sub_3cdae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cdae0ULL || rel >= 0x3cdc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cdc20 size=320 callers=1 calls=0
*/
void sub_3cdc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cdc20ULL || rel >= 0x3cdd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cdd60 size=144 callers=1 calls=0
*/
void sub_3cdd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cdd60ULL || rel >= 0x3cddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cddf0 size=144 callers=1 calls=0
*/
void sub_3cddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cddf0ULL || rel >= 0x3cde80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cde80 size=16 callers=1 calls=0
*/
void sub_3cde80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cde80ULL || rel >= 0x3cde90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cde90 size=80 callers=1 calls=0
*/
void sub_3cde90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cde90ULL || rel >= 0x3cdee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cdee0 size=752 callers=1 calls=1
   calls: sub_3ce3e0
*/
void sub_3cdee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cdee0ULL || rel >= 0x3ce1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ce1d0 size=528 callers=1 calls=1
   calls: sub_3ce3e0
*/
void sub_3ce1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ce1d0ULL || rel >= 0x3ce3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ce3e0 size=2128 callers=2 calls=0
*/
void sub_3ce3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ce3e0ULL || rel >= 0x3cec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cec30 size=16 callers=0 calls=0
*/
void sub_3cec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cec30ULL || rel >= 0x3cec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cec40 size=96 callers=0 calls=0
*/
void sub_3cec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cec40ULL || rel >= 0x3ceca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ceca0 size=16 callers=5 calls=0
*/
void sub_3ceca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ceca0ULL || rel >= 0x3cecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cecb0 size=16 callers=3 calls=0
*/
void sub_3cecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cecb0ULL || rel >= 0x3cecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cecc0 size=16 callers=0 calls=0
*/
void sub_3cecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cecc0ULL || rel >= 0x3cecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cecd0 size=128 callers=0 calls=0
   ref: /dev/nvmap
*/
void nvmap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cecd0ULL || rel >= 0x3ced50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ced50 size=368 callers=2 calls=1
   calls: sub_3c9370
   ref: /dev/nvmap
*/
void nvmap_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ced50ULL || rel >= 0x3ceec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ceec0 size=64 callers=0 calls=0
*/
void sub_3ceec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ceec0ULL || rel >= 0x3cef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cef00 size=272 callers=0 calls=1
   calls: sub_3c9b20
   ref: /dev/nvmap
*/
void nvmap_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cef00ULL || rel >= 0x3cf010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf010 size=16 callers=0 calls=0
*/
void sub_3cf010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf010ULL || rel >= 0x3cf020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf020 size=192 callers=0 calls=0
   ref: /dev/nvmap
*/
void nvmap_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf020ULL || rel >= 0x3cf0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003cf0e0 size=160 callers=0 calls=0
   ref: /dev/nvmap
*/
void nvmap_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3cf0e0ULL || rel >= 0x3cf180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

