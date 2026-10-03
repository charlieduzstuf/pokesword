/* main functions 009ae1c0..00a42b80 (76 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 009ae1c0 size=16 callers=0 calls=0
*/
void sub_9ae1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae1c0ULL || rel >= 0x9ae1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ae1d0 size=16 callers=0 calls=0
*/
void sub_9ae1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae1d0ULL || rel >= 0x9ae1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ae1e0 size=464 callers=0 calls=7
   calls: pattern__02d_gfbmdl, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96a5a0, sub_987fa0
*/
void sub_9ae1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae1e0ULL || rel >= 0x9ae3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ae3b0 size=16 callers=0 calls=0
*/
void sub_9ae3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae3b0ULL || rel >= 0x9ae3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ae3c0 size=16 callers=0 calls=0
*/
void sub_9ae3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae3c0ULL || rel >= 0x9ae3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ae3d0 size=16 callers=0 calls=0
*/
void sub_9ae3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae3d0ULL || rel >= 0x9ae3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ae3e0 size=240 callers=0 calls=0
*/
void sub_9ae3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae3e0ULL || rel >= 0x9ae4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ae4d0 size=80 callers=1 calls=1
   calls: sub_970060
*/
void sub_9ae4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae4d0ULL || rel >= 0x9ae520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ae520 size=128 callers=0 calls=2
   calls: sub_59a4f0, sub_9af780
*/
void sub_9ae520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae520ULL || rel >= 0x9ae5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ae5a0 size=576 callers=0 calls=0
*/
void sub_9ae5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae5a0ULL || rel >= 0x9ae7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ae7e0 size=656 callers=1 calls=4
   calls: sub_974630, sub_b334c0, sub_b334e0, sub_ea0fd0
*/
void sub_9ae7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ae7e0ULL || rel >= 0x9aea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aea70 size=192 callers=0 calls=1
   calls: sub_b335e0
*/
void sub_9aea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aea70ULL || rel >= 0x9aeb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aeb30 size=672 callers=1 calls=9
   calls: sub_5cfad0, sub_618d40, sub_6194a0, sub_969be0, sub_9aedd0, sub_9aefc0, sub_9af1f0, sub_b33760, sub_c51540
   ref: ba_drone_move
*/
void ba_drone_move(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aeb30ULL || rel >= 0x9aedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aedd0 size=496 callers=1 calls=3
   calls: sub_607750, sub_b33c60, sub_b46f20
*/
void sub_9aedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aedd0ULL || rel >= 0x9aefc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aefc0 size=560 callers=3 calls=2
   calls: sub_607750, sub_b33800
*/
void sub_9aefc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aefc0ULL || rel >= 0x9af1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009af1f0 size=224 callers=1 calls=1
   calls: sub_b33870
*/
void sub_9af1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9af1f0ULL || rel >= 0x9af2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009af2d0 size=352 callers=1 calls=4
   calls: sub_967240, sub_9746f0, sub_b33640, sub_c51740
*/
void sub_9af2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9af2d0ULL || rel >= 0x9af430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009af430 size=160 callers=1 calls=1
   calls: sub_b336a0
*/
void sub_9af430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9af430ULL || rel >= 0x9af4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009af4d0 size=512 callers=0 calls=3
   calls: sub_607750, sub_b33c60, sub_b46a10
*/
void sub_9af4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9af4d0ULL || rel >= 0x9af6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009af6d0 size=32 callers=0 calls=0
*/
void sub_9af6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9af6d0ULL || rel >= 0x9af6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009af6f0 size=144 callers=0 calls=3
   calls: sub_59a520, sub_974740, sub_9af780
*/
void sub_9af6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9af6f0ULL || rel >= 0x9af780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009af780 size=464 callers=3 calls=2
   calls: sub_607750, sub_b33a30
*/
void sub_9af780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9af780ULL || rel >= 0x9af950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009af950 size=848 callers=1 calls=6
   calls: sub_59a520, sub_607750, sub_9af780, sub_b33c60, sub_b46f20, sub_b96730
   ref: ba_drone_move
*/
void ba_drone_move_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9af950ULL || rel >= 0x9afca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009afca0 size=96 callers=0 calls=0
*/
void sub_9afca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9afca0ULL || rel >= 0x9afd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009afd00 size=96 callers=0 calls=0
*/
void sub_9afd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9afd00ULL || rel >= 0x9afd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009afd60 size=16 callers=0 calls=0
*/
void sub_9afd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9afd60ULL || rel >= 0x9afd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009afd70 size=240 callers=0 calls=0
*/
void sub_9afd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9afd70ULL || rel >= 0x9afe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009afe60 size=240 callers=0 calls=0
*/
void sub_9afe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9afe60ULL || rel >= 0x9aff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aff50 size=16 callers=0 calls=0
*/
void sub_9aff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aff50ULL || rel >= 0x9aff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aff60 size=16 callers=0 calls=0
*/
void sub_9aff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aff60ULL || rel >= 0x9aff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009aff70 size=240 callers=0 calls=0
*/
void sub_9aff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9aff70ULL || rel >= 0x9b0060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0060 size=240 callers=0 calls=0
*/
void sub_9b0060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0060ULL || rel >= 0x9b0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0150 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_9b0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0150ULL || rel >= 0x9b0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0280 size=16 callers=0 calls=0
*/
void sub_9b0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0280ULL || rel >= 0x9b0290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0290 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_9b0290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0290ULL || rel >= 0x9b02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b02d0 size=32 callers=0 calls=0
*/
void sub_9b02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b02d0ULL || rel >= 0x9b02f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b02f0 size=16 callers=0 calls=0
*/
void sub_9b02f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b02f0ULL || rel >= 0x9b0300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0300 size=16 callers=0 calls=0
*/
void sub_9b0300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0300ULL || rel >= 0x9b0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0310 size=64 callers=0 calls=1
   calls: sub_6191c0
*/
void sub_9b0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0310ULL || rel >= 0x9b0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0350 size=80 callers=1 calls=1
   calls: sub_970060
*/
void sub_9b0350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0350ULL || rel >= 0x9b03a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b03a0 size=304 callers=0 calls=1
   calls: sub_9b04d0
*/
void sub_9b03a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b03a0ULL || rel >= 0x9b04d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b04d0 size=272 callers=3 calls=4
   calls: sub_793a10, sub_793a60, sub_793de0, sub_9746f0
*/
void sub_9b04d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b04d0ULL || rel >= 0x9b05e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b05e0 size=16 callers=0 calls=0
*/
void sub_9b05e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b05e0ULL || rel >= 0x9b05f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b05f0 size=16 callers=0 calls=0
*/
void sub_9b05f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b05f0ULL || rel >= 0x9b0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0600 size=16 callers=0 calls=0
*/
void sub_9b0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0600ULL || rel >= 0x9b0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0610 size=16 callers=0 calls=0
*/
void sub_9b0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0610ULL || rel >= 0x9b0620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0620 size=16 callers=0 calls=0
*/
void sub_9b0620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0620ULL || rel >= 0x9b0630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0630 size=16 callers=0 calls=0
*/
void sub_9b0630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0630ULL || rel >= 0x9b0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0640 size=48 callers=0 calls=1
   calls: sub_9703c0
*/
void sub_9b0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0640ULL || rel >= 0x9b0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0670 size=608 callers=1 calls=3
   calls: sub_793ea0, sub_972c60, sub_972c70
*/
void sub_9b0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0670ULL || rel >= 0x9b08d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b08d0 size=304 callers=1 calls=1
   calls: sub_974630
*/
void sub_9b08d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b08d0ULL || rel >= 0x9b0a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0a00 size=64 callers=1 calls=1
   calls: sub_793a60
*/
void sub_9b0a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0a00ULL || rel >= 0x9b0a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0a40 size=64 callers=3 calls=2
   calls: sub_794040, sub_9b0670
*/
void sub_9b0a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0a40ULL || rel >= 0x9b0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0a80 size=16 callers=1 calls=0
*/
void sub_9b0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0a80ULL || rel >= 0x9b0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0a90 size=16 callers=2 calls=0
*/
void sub_9b0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0a90ULL || rel >= 0x9b0aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0aa0 size=16 callers=5 calls=0
*/
void sub_9b0aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0aa0ULL || rel >= 0x9b0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0ab0 size=16 callers=0 calls=0
*/
void sub_9b0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0ab0ULL || rel >= 0x9b0ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0ac0 size=16 callers=0 calls=0
*/
void sub_9b0ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0ac0ULL || rel >= 0x9b0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0ad0 size=16 callers=0 calls=0
*/
void sub_9b0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0ad0ULL || rel >= 0x9b0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0ae0 size=304 callers=0 calls=1
   calls: sub_967240
*/
void sub_9b0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0ae0ULL || rel >= 0x9b0c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0c10 size=912 callers=0 calls=6
   calls: ee090_finder00_cam, sub_7c56e0, sub_8a9060, sub_981b60, sub_98ab90, wait_camera_lens_distortion_data
*/
void sub_9b0c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0c10ULL || rel >= 0x9b0fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b0fa0 size=320 callers=1 calls=4
   calls: sub_763000, sub_7c5910, sub_8a9060, sub_9411c0
*/
void sub_9b0fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b0fa0ULL || rel >= 0x9b10e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b10e0 size=2016 callers=0 calls=23
   calls: Set_State_Battle_Wild, Set_State_Tension_normal, ee409, ee420, fileName_2, sub_7c56e0, sub_8a9060, sub_8ea710, sub_9411c0, sub_94a940, sub_94ba30, sub_9530b0
   ... +11 more
*/
void sub_9b10e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b10e0ULL || rel >= 0x9b18c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b18c0 size=832 callers=2 calls=6
   calls: sub_763000, sub_8ea710, sub_9411c0, sub_95ae30, sub_98ab90, sub_9b2290
   ref: bin/battle/waza/sequence/ee407.bseq
   ref: bin/battle/waza/sequence/ee400.bseq
   ref: bin/battle/waza/sequence/ee406.bseq
   ref: bin/battle/waza/sequence/ee408.bseq
   ref: bin/battle/waza/sequence/ee401.bseq
   ref: bin/battle/waza/sequence/ee402.bseq
   ref: bin/battle/waza/sequence/ee409.bseq
*/
void ee409(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b18c0ULL || rel >= 0x9b1c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b1c00 size=896 callers=4 calls=8
   calls: sub_763000, sub_7ca9e0, sub_8a9060, sub_8ea710, sub_9411c0, sub_95ae30, sub_98ab90, sub_9b2290
   ref: bin/battle/waza/sequence/ee405.bseq
   ref: bin/battle/waza/sequence/ee403.bseq
   ref: bin/battle/waza/sequence/ee404.bseq
   ref: bin/battle/waza/sequence/ee420.bseq
*/
void ee420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b1c00ULL || rel >= 0x9b1f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b1f80 size=352 callers=1 calls=9
   calls: Set_State_Battle_Wild, ee409, ee420, sub_94a940, sub_94ba30, sub_95abd0, sub_95b4b0, sub_95be10, sub_965150
*/
void sub_9b1f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b1f80ULL || rel >= 0x9b20e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b20e0 size=432 callers=1 calls=8
   calls: Set_State_Battle_Wild, ee420, sub_94a940, sub_94ba30, sub_95abd0, sub_95b4b0, sub_95be10, sub_965150
*/
void sub_9b20e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b20e0ULL || rel >= 0x9b2290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b2290 size=304 callers=24 calls=3
   calls: sub_5e6180, sub_9b9500, sub_d0c0
*/
void sub_9b2290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b2290ULL || rel >= 0x9b23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b23c0 size=32 callers=0 calls=0
*/
void sub_9b23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b23c0ULL || rel >= 0x9b23e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b23e0 size=48 callers=0 calls=0
*/
void sub_9b23e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b23e0ULL || rel >= 0x9b2410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b2410 size=112 callers=0 calls=1
   calls: sub_946a70
*/
void sub_9b2410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b2410ULL || rel >= 0x9b2480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b2480 size=544 callers=0 calls=3
   calls: sub_65f1c0, sub_9a7850, sub_9bca20
*/
void sub_9b2480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b2480ULL || rel >= 0x9b26a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b26a0 size=112 callers=0 calls=2
   calls: sub_8ea710, sub_98ab90
*/
void sub_9b26a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b26a0ULL || rel >= 0x9b2710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b2710 size=2288 callers=0 calls=9
   calls: sub_7c2d90, sub_946a70, sub_9530b0, sub_97fd20, sub_9a78c0, sub_9a78d0, sub_9bde40, to_ba02_megaappeal01, to_ba10_waitB01
*/
void sub_9b2710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b2710ULL || rel >= 0x9b3000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3000 size=432 callers=0 calls=6
   calls: sub_7c2db0, sub_8ea710, sub_954bd0, sub_98ab90, sub_9a78d0, sub_9bde50
*/
void sub_9b3000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3000ULL || rel >= 0x9b31b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b31b0 size=16 callers=0 calls=0
*/
void sub_9b31b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b31b0ULL || rel >= 0x9b31c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b31c0 size=80 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b31c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b31c0ULL || rel >= 0x9b3210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3210 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b3210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3210ULL || rel >= 0x9b3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3230 size=64 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3230ULL || rel >= 0x9b3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3270 size=64 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3270ULL || rel >= 0x9b32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b32b0 size=16 callers=0 calls=0
*/
void sub_9b32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b32b0ULL || rel >= 0x9b32c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b32c0 size=112 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b32c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b32c0ULL || rel >= 0x9b3330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3330 size=32 callers=0 calls=0
*/
void sub_9b3330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3330ULL || rel >= 0x9b3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3350 size=80 callers=0 calls=2
   calls: sub_8ec890, sub_98ab90
*/
void sub_9b3350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3350ULL || rel >= 0x9b33a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b33a0 size=64 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b33a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b33a0ULL || rel >= 0x9b33e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b33e0 size=32 callers=0 calls=0
*/
void sub_9b33e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b33e0ULL || rel >= 0x9b3400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3400 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b3400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3400ULL || rel >= 0x9b3420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3420 size=96 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b3420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3420ULL || rel >= 0x9b3480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3480 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b3480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3480ULL || rel >= 0x9b34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b34a0 size=64 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b34a0ULL || rel >= 0x9b34e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b34e0 size=32 callers=0 calls=0
*/
void sub_9b34e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b34e0ULL || rel >= 0x9b3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3500 size=32 callers=0 calls=0
*/
void sub_9b3500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3500ULL || rel >= 0x9b3520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3520 size=32 callers=0 calls=0
*/
void sub_9b3520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3520ULL || rel >= 0x9b3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3540 size=112 callers=0 calls=1
   calls: sub_9411c0
*/
void sub_9b3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3540ULL || rel >= 0x9b35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b35b0 size=32 callers=0 calls=0
*/
void sub_9b35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b35b0ULL || rel >= 0x9b35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b35d0 size=16 callers=0 calls=0
*/
void sub_9b35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b35d0ULL || rel >= 0x9b35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b35e0 size=16 callers=0 calls=0
*/
void sub_9b35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b35e0ULL || rel >= 0x9b35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b35f0 size=16 callers=0 calls=0
*/
void sub_9b35f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b35f0ULL || rel >= 0x9b3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3600 size=192 callers=0 calls=4
   calls: sub_763000, sub_8ea710, sub_9411c0, sub_98ab90
*/
void sub_9b3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3600ULL || rel >= 0x9b36c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b36c0 size=864 callers=0 calls=16
   calls: GroundAttributes, Set_State_Tension_normal, sub_948f20, sub_95abd0, sub_95ae30, sub_95be10, sub_97b480, sub_983f70, sub_984250, sub_9846c0, sub_984790, sub_9b2290
   ... +4 more
   ref: bin/battle/waza/sequence/ee630.bseq
*/
void ee630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b36c0ULL || rel >= 0x9b3a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3a20 size=48 callers=0 calls=0
*/
void sub_9b3a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3a20ULL || rel >= 0x9b3a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3a50 size=32 callers=0 calls=0
*/
void sub_9b3a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3a50ULL || rel >= 0x9b3a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3a70 size=64 callers=0 calls=0
*/
void sub_9b3a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3a70ULL || rel >= 0x9b3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3ab0 size=80 callers=0 calls=1
   calls: sub_98a530
*/
void sub_9b3ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3ab0ULL || rel >= 0x9b3b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3b00 size=48 callers=0 calls=0
*/
void sub_9b3b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3b00ULL || rel >= 0x9b3b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3b30 size=32 callers=0 calls=0
*/
void sub_9b3b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3b30ULL || rel >= 0x9b3b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3b50 size=64 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b3b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3b50ULL || rel >= 0x9b3b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3b90 size=64 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b3b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3b90ULL || rel >= 0x9b3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3bd0 size=48 callers=0 calls=0
*/
void sub_9b3bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3bd0ULL || rel >= 0x9b3c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3c00 size=32 callers=0 calls=0
*/
void sub_9b3c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3c00ULL || rel >= 0x9b3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3c20 size=64 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3c20ULL || rel >= 0x9b3c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3c60 size=64 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b3c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3c60ULL || rel >= 0x9b3ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3ca0 size=32 callers=0 calls=0
*/
void sub_9b3ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3ca0ULL || rel >= 0x9b3cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3cc0 size=48 callers=0 calls=0
*/
void sub_9b3cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3cc0ULL || rel >= 0x9b3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3cf0 size=416 callers=0 calls=3
   calls: sub_5cfad0, sub_97f190, sub_98a290
   ref: ba_order01
*/
void ba_order01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3cf0ULL || rel >= 0x9b3e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3e90 size=48 callers=0 calls=0
*/
void sub_9b3e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3e90ULL || rel >= 0x9b3ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3ec0 size=48 callers=0 calls=0
*/
void sub_9b3ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3ec0ULL || rel >= 0x9b3ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3ef0 size=48 callers=0 calls=0
*/
void sub_9b3ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3ef0ULL || rel >= 0x9b3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3f20 size=48 callers=0 calls=1
   calls: sub_98a390
*/
void sub_9b3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3f20ULL || rel >= 0x9b3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3f50 size=48 callers=0 calls=0
*/
void sub_9b3f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3f50ULL || rel >= 0x9b3f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3f80 size=48 callers=0 calls=0
*/
void sub_9b3f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3f80ULL || rel >= 0x9b3fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3fb0 size=32 callers=0 calls=0
*/
void sub_9b3fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3fb0ULL || rel >= 0x9b3fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b3fd0 size=144 callers=0 calls=0
*/
void sub_9b3fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b3fd0ULL || rel >= 0x9b4060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4060 size=160 callers=0 calls=2
   calls: sub_958180, sub_95a690
*/
void sub_9b4060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4060ULL || rel >= 0x9b4100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4100 size=64 callers=0 calls=2
   calls: sub_780ec0, sub_95abc0
*/
void sub_9b4100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4100ULL || rel >= 0x9b4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4140 size=160 callers=0 calls=1
   calls: sub_9411c0
*/
void sub_9b4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4140ULL || rel >= 0x9b41e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b41e0 size=32 callers=0 calls=0
*/
void sub_9b41e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b41e0ULL || rel >= 0x9b4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4200 size=384 callers=0 calls=10
   calls: fileName_2, sub_7c56e0, sub_8a9060, sub_8ea710, sub_958180, sub_95a690, sub_95abd0, sub_95abe0, sub_95abf0, sub_98ab90
*/
void sub_9b4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4200ULL || rel >= 0x9b4380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4380 size=560 callers=0 calls=1
   calls: sub_9411c0
*/
void sub_9b4380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4380ULL || rel >= 0x9b45b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b45b0 size=32 callers=0 calls=0
*/
void sub_9b45b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b45b0ULL || rel >= 0x9b45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b45d0 size=48 callers=0 calls=0
*/
void sub_9b45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b45d0ULL || rel >= 0x9b4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4600 size=32 callers=0 calls=0
*/
void sub_9b4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4600ULL || rel >= 0x9b4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4620 size=864 callers=0 calls=8
   calls: sub_763000, sub_8ea710, sub_9411c0, sub_95ae30, sub_981b70, sub_98ab90, sub_9b2290, sub_9b4980
   ref: bin/battle/waza/sequence/ee620.bseq
   ref: bin/battle/waza/sequence/eg_down_ball.bseq
   ref: bin/battle/waza/sequence/ee621.bseq
*/
void eg_down_ball(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4620ULL || rel >= 0x9b4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4980 size=304 callers=4 calls=3
   calls: sub_5e6180, sub_9b9580, sub_d0c0
*/
void sub_9b4980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4980ULL || rel >= 0x9b4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4ab0 size=320 callers=0 calls=8
   calls: sub_9530b0, sub_95abd0, sub_963470, sub_97e340, sub_97e740, sub_9be210, sub_9be390, sub_9be490
*/
void sub_9b4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4ab0ULL || rel >= 0x9b4bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4bf0 size=32 callers=0 calls=0
*/
void sub_9b4bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4bf0ULL || rel >= 0x9b4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4c10 size=32 callers=0 calls=0
*/
void sub_9b4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4c10ULL || rel >= 0x9b4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4c30 size=32 callers=0 calls=0
*/
void sub_9b4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4c30ULL || rel >= 0x9b4c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4c50 size=32 callers=0 calls=0
*/
void sub_9b4c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4c50ULL || rel >= 0x9b4c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4c70 size=672 callers=0 calls=9
   calls: fileName_2, sub_763000, sub_8ea710, sub_9411c0, sub_95ae30, sub_981b70, sub_98ab90, sub_9b2290, sub_9b4f10
   ref: bin/battle/waza/sequence/eg_down_switch.bseq
   ref: bin/battle/waza/sequence/ee610.bseq
*/
void eg_down_switch(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4c70ULL || rel >= 0x9b4f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b4f10 size=304 callers=2 calls=3
   calls: sub_5e6180, sub_9b9600, sub_d0c0
*/
void sub_9b4f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b4f10ULL || rel >= 0x9b5040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5040 size=272 callers=0 calls=7
   calls: Set_State_Tension_normal, sub_9530b0, sub_95abd0, sub_963470, sub_97e340, sub_97e740, sub_9be760
*/
void sub_9b5040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5040ULL || rel >= 0x9b5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5150 size=416 callers=0 calls=1
   calls: sub_97ef60
*/
void sub_9b5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5150ULL || rel >= 0x9b52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b52f0 size=144 callers=0 calls=2
   calls: sub_8ea710, sub_98ab90
*/
void sub_9b52f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b52f0ULL || rel >= 0x9b5380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5380 size=64 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b5380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5380ULL || rel >= 0x9b53c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b53c0 size=352 callers=0 calls=2
   calls: sub_9411c0, sub_97ef10
*/
void sub_9b53c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b53c0ULL || rel >= 0x9b5520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5520 size=112 callers=0 calls=2
   calls: sub_9530b0, sub_95abd0
*/
void sub_9b5520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5520ULL || rel >= 0x9b5590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5590 size=480 callers=0 calls=6
   calls: fileName_2, sub_9411c0, sub_95c030, sub_97ef10, sub_97efb0, sub_981b70
*/
void sub_9b5590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5590ULL || rel >= 0x9b5770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5770 size=160 callers=0 calls=2
   calls: sub_9530b0, sub_95abd0
*/
void sub_9b5770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5770ULL || rel >= 0x9b5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5810 size=496 callers=0 calls=3
   calls: fileName_2, sub_9411c0, sub_97ef10
*/
void sub_9b5810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5810ULL || rel >= 0x9b5a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5a00 size=400 callers=0 calls=3
   calls: fileName_2, sub_9530b0, sub_95abd0
*/
void sub_9b5a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5a00ULL || rel >= 0x9b5b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5b90 size=816 callers=0 calls=4
   calls: fileName_2, sub_7cb3f0, sub_8a9060, sub_9411c0
*/
void sub_9b5b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5b90ULL || rel >= 0x9b5ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5ec0 size=112 callers=0 calls=2
   calls: sub_9530b0, sub_95abd0
*/
void sub_9b5ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5ec0ULL || rel >= 0x9b5f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5f30 size=112 callers=0 calls=2
   calls: sub_8ead90, sub_98ab90
*/
void sub_9b5f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5f30ULL || rel >= 0x9b5fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5fa0 size=80 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b5fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5fa0ULL || rel >= 0x9b5ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b5ff0 size=80 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b5ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b5ff0ULL || rel >= 0x9b6040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6040 size=80 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b6040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6040ULL || rel >= 0x9b6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6090 size=80 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6090ULL || rel >= 0x9b60e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b60e0 size=80 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b60e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b60e0ULL || rel >= 0x9b6130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6130 size=80 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b6130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6130ULL || rel >= 0x9b6180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6180 size=64 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b6180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6180ULL || rel >= 0x9b61c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b61c0 size=288 callers=0 calls=6
   calls: fileName_2, sub_9411c0, sub_946a70, sub_95c030, sub_97ef10, sub_981b70
*/
void sub_9b61c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b61c0ULL || rel >= 0x9b62e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b62e0 size=288 callers=0 calls=6
   calls: fileName_2, sub_9411c0, sub_946a70, sub_95c030, sub_97ef10, sub_981b70
*/
void sub_9b62e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b62e0ULL || rel >= 0x9b6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6400 size=96 callers=0 calls=1
   calls: sub_95abd0
*/
void sub_9b6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6400ULL || rel >= 0x9b6460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6460 size=64 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_9b6460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6460ULL || rel >= 0x9b64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b64a0 size=64 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_9b64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b64a0ULL || rel >= 0x9b64e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b64e0 size=64 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_9b64e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b64e0ULL || rel >= 0x9b6520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6520 size=96 callers=0 calls=0
*/
void sub_9b6520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6520ULL || rel >= 0x9b6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6580 size=48 callers=0 calls=0
*/
void sub_9b6580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6580ULL || rel >= 0x9b65b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b65b0 size=96 callers=0 calls=0
*/
void sub_9b65b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b65b0ULL || rel >= 0x9b6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6610 size=48 callers=0 calls=0
*/
void sub_9b6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6610ULL || rel >= 0x9b6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6640 size=384 callers=0 calls=2
   calls: sub_9411c0, sub_97ef10
*/
void sub_9b6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6640ULL || rel >= 0x9b67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b67c0 size=32 callers=0 calls=0
*/
void sub_9b67c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b67c0ULL || rel >= 0x9b67e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b67e0 size=320 callers=2 calls=4
   calls: fileName_2, sub_8ea710, sub_95abd0, sub_98ab90
*/
void sub_9b67e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b67e0ULL || rel >= 0x9b6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6920 size=624 callers=0 calls=5
   calls: sub_7eef40, sub_9411c0, sub_95c030, sub_97ef10, sub_981b70
*/
void sub_9b6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6920ULL || rel >= 0x9b6b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6b90 size=32 callers=0 calls=0
*/
void sub_9b6b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6b90ULL || rel >= 0x9b6bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6bb0 size=432 callers=0 calls=4
   calls: sub_9411c0, sub_95c030, sub_97ef10, sub_981b70
*/
void sub_9b6bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6bb0ULL || rel >= 0x9b6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6d60 size=32 callers=0 calls=0
*/
void sub_9b6d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6d60ULL || rel >= 0x9b6d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b6d80 size=800 callers=0 calls=9
   calls: sub_142a660, sub_8ea710, sub_952940, sub_952f90, sub_9530b0, sub_97ef60, sub_97efb0, sub_98ab90, sub_993c90
*/
void sub_9b6d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b6d80ULL || rel >= 0x9b70a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b70a0 size=96 callers=0 calls=1
   calls: sub_9411c0
*/
void sub_9b70a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b70a0ULL || rel >= 0x9b7100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7100 size=688 callers=0 calls=4
   calls: sub_8ea710, sub_952940, sub_98ab90, sub_9b73b0
*/
void sub_9b7100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7100ULL || rel >= 0x9b73b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b73b0 size=272 callers=1 calls=0
*/
void sub_9b73b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b73b0ULL || rel >= 0x9b74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b74c0 size=32 callers=0 calls=0
*/
void sub_9b74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b74c0ULL || rel >= 0x9b74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b74e0 size=32 callers=0 calls=0
*/
void sub_9b74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b74e0ULL || rel >= 0x9b7500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7500 size=64 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b7500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7500ULL || rel >= 0x9b7540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7540 size=32 callers=0 calls=0
*/
void sub_9b7540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7540ULL || rel >= 0x9b7560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7560 size=32 callers=0 calls=0
*/
void sub_9b7560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7560ULL || rel >= 0x9b7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7580 size=32 callers=0 calls=0
*/
void sub_9b7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7580ULL || rel >= 0x9b75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b75a0 size=32 callers=0 calls=0
*/
void sub_9b75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b75a0ULL || rel >= 0x9b75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b75c0 size=32 callers=0 calls=0
*/
void sub_9b75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b75c0ULL || rel >= 0x9b75e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b75e0 size=128 callers=0 calls=2
   calls: sub_8ea710, sub_98ab90
*/
void sub_9b75e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b75e0ULL || rel >= 0x9b7660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7660 size=32 callers=0 calls=0
*/
void sub_9b7660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7660ULL || rel >= 0x9b7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7680 size=64 callers=0 calls=1
   calls: sub_98adb0
*/
void sub_9b7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7680ULL || rel >= 0x9b76c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b76c0 size=32 callers=0 calls=0
*/
void sub_9b76c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b76c0ULL || rel >= 0x9b76e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b76e0 size=32 callers=0 calls=0
*/
void sub_9b76e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b76e0ULL || rel >= 0x9b7700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7700 size=16 callers=0 calls=0
*/
void sub_9b7700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7700ULL || rel >= 0x9b7710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7710 size=32 callers=0 calls=0
*/
void sub_9b7710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7710ULL || rel >= 0x9b7730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7730 size=16 callers=0 calls=0
*/
void sub_9b7730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7730ULL || rel >= 0x9b7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7740 size=32 callers=0 calls=0
*/
void sub_9b7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7740ULL || rel >= 0x9b7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7760 size=32 callers=0 calls=0
*/
void sub_9b7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7760ULL || rel >= 0x9b7780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7780 size=32 callers=0 calls=0
*/
void sub_9b7780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7780ULL || rel >= 0x9b77a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b77a0 size=32 callers=0 calls=0
*/
void sub_9b77a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b77a0ULL || rel >= 0x9b77c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b77c0 size=32 callers=0 calls=0
*/
void sub_9b77c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b77c0ULL || rel >= 0x9b77e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b77e0 size=32 callers=0 calls=0
*/
void sub_9b77e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b77e0ULL || rel >= 0x9b7800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7800 size=32 callers=0 calls=0
*/
void sub_9b7800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7800ULL || rel >= 0x9b7820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7820 size=32 callers=0 calls=0
*/
void sub_9b7820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7820ULL || rel >= 0x9b7840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7840 size=32 callers=0 calls=0
*/
void sub_9b7840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7840ULL || rel >= 0x9b7860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7860 size=32 callers=0 calls=0
*/
void sub_9b7860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7860ULL || rel >= 0x9b7880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7880 size=112 callers=0 calls=1
   calls: sub_9411c0
*/
void sub_9b7880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7880ULL || rel >= 0x9b78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b78f0 size=32 callers=0 calls=0
*/
void sub_9b78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b78f0ULL || rel >= 0x9b7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7910 size=32 callers=0 calls=0
*/
void sub_9b7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7910ULL || rel >= 0x9b7930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7930 size=32 callers=0 calls=0
*/
void sub_9b7930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7930ULL || rel >= 0x9b7950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7950 size=32 callers=0 calls=0
*/
void sub_9b7950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7950ULL || rel >= 0x9b7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7970 size=32 callers=0 calls=0
*/
void sub_9b7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7970ULL || rel >= 0x9b7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7990 size=32 callers=0 calls=0
*/
void sub_9b7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7990ULL || rel >= 0x9b79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b79b0 size=16 callers=0 calls=0
*/
void sub_9b79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b79b0ULL || rel >= 0x9b79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b79c0 size=32 callers=0 calls=0
*/
void sub_9b79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b79c0ULL || rel >= 0x9b79e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b79e0 size=32 callers=0 calls=0
*/
void sub_9b79e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b79e0ULL || rel >= 0x9b7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7a00 size=32 callers=0 calls=0
*/
void sub_9b7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7a00ULL || rel >= 0x9b7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7a20 size=32 callers=0 calls=0
*/
void sub_9b7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7a20ULL || rel >= 0x9b7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7a40 size=32 callers=0 calls=0
*/
void sub_9b7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7a40ULL || rel >= 0x9b7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7a60 size=336 callers=0 calls=5
   calls: sub_76d0d0, sub_8ea710, sub_9411c0, sub_95ae30, sub_98ab90
   ref: bin/battle/waza/sequence/%s.bseq
*/
void unnamed_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7a60ULL || rel >= 0x9b7bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7bb0 size=32 callers=0 calls=0
*/
void sub_9b7bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7bb0ULL || rel >= 0x9b7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7bd0 size=32 callers=0 calls=0
*/
void sub_9b7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7bd0ULL || rel >= 0x9b7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7bf0 size=80 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7bf0ULL || rel >= 0x9b7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7c40 size=32 callers=0 calls=0
*/
void sub_9b7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7c40ULL || rel >= 0x9b7c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7c60 size=32 callers=0 calls=0
*/
void sub_9b7c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7c60ULL || rel >= 0x9b7c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7c80 size=32 callers=0 calls=0
*/
void sub_9b7c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7c80ULL || rel >= 0x9b7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7ca0 size=32 callers=0 calls=0
*/
void sub_9b7ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7ca0ULL || rel >= 0x9b7cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7cc0 size=208 callers=0 calls=4
   calls: sub_786b40, sub_8ea710, sub_9411c0, sub_98ab90
*/
void sub_9b7cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7cc0ULL || rel >= 0x9b7d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7d90 size=192 callers=0 calls=4
   calls: sub_786b40, sub_8ea710, sub_9411c0, sub_98ab90
*/
void sub_9b7d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7d90ULL || rel >= 0x9b7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b7e50 size=656 callers=0 calls=4
   calls: fileName_2, sub_952940, sub_9530b0, sub_95abd0
*/
void sub_9b7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b7e50ULL || rel >= 0x9b80e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b80e0 size=32 callers=0 calls=0
*/
void sub_9b80e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b80e0ULL || rel >= 0x9b8100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8100 size=128 callers=0 calls=3
   calls: sub_8eb100, sub_98ab90, sub_98adb0
*/
void sub_9b8100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8100ULL || rel >= 0x9b8180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8180 size=32 callers=0 calls=0
*/
void sub_9b8180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8180ULL || rel >= 0x9b81a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b81a0 size=32 callers=0 calls=0
*/
void sub_9b81a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b81a0ULL || rel >= 0x9b81c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b81c0 size=64 callers=0 calls=0
*/
void sub_9b81c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b81c0ULL || rel >= 0x9b8200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8200 size=48 callers=0 calls=0
*/
void sub_9b8200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8200ULL || rel >= 0x9b8230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8230 size=96 callers=0 calls=0
*/
void sub_9b8230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8230ULL || rel >= 0x9b8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8290 size=48 callers=0 calls=0
*/
void sub_9b8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8290ULL || rel >= 0x9b82c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b82c0 size=32 callers=0 calls=0
*/
void sub_9b82c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b82c0ULL || rel >= 0x9b82e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b82e0 size=288 callers=0 calls=1
   calls: sub_9530b0
*/
void sub_9b82e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b82e0ULL || rel >= 0x9b8400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8400 size=32 callers=0 calls=0
*/
void sub_9b8400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8400ULL || rel >= 0x9b8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8420 size=32 callers=0 calls=0
*/
void sub_9b8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8420ULL || rel >= 0x9b8440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8440 size=32 callers=0 calls=0
*/
void sub_9b8440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8440ULL || rel >= 0x9b8460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8460 size=96 callers=0 calls=3
   calls: sub_794330, sub_7caed0, sub_8a9060
*/
void sub_9b8460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8460ULL || rel >= 0x9b84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b84c0 size=16 callers=0 calls=0
*/
void sub_9b84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b84c0ULL || rel >= 0x9b84d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b84d0 size=16 callers=0 calls=0
*/
void sub_9b84d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b84d0ULL || rel >= 0x9b84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b84e0 size=48 callers=0 calls=0
*/
void sub_9b84e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b84e0ULL || rel >= 0x9b8510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8510 size=176 callers=0 calls=2
   calls: sub_5cfad0, sub_794330
*/
void sub_9b8510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8510ULL || rel >= 0x9b85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b85c0 size=48 callers=0 calls=1
   calls: sub_793a60
*/
void sub_9b85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b85c0ULL || rel >= 0x9b85f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b85f0 size=720 callers=0 calls=4
   calls: sub_763000, sub_9411c0, sub_97ef10, sub_983f60
*/
void sub_9b85f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b85f0ULL || rel >= 0x9b88c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b88c0 size=80 callers=0 calls=3
   calls: sub_9b67e0, sub_9be210, sub_9be440
*/
void sub_9b88c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b88c0ULL || rel >= 0x9b8910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8910 size=448 callers=0 calls=2
   calls: sub_9411c0, sub_97ef10
*/
void sub_9b8910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8910ULL || rel >= 0x9b8ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8ad0 size=80 callers=0 calls=3
   calls: Set_State_Tension_normal, sub_9b67e0, sub_9be710
*/
void sub_9b8ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8ad0ULL || rel >= 0x9b8b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8b20 size=256 callers=0 calls=7
   calls: sub_7fe320, sub_9411c0, sub_946a70, sub_95ae30, sub_9be210, sub_9be4e0, unnamed_15
*/
void sub_9b8b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8b20ULL || rel >= 0x9b8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8c20 size=16 callers=0 calls=0
*/
void sub_9b8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8c20ULL || rel >= 0x9b8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8c30 size=48 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8c30ULL || rel >= 0x9b8c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8c60 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b8c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8c60ULL || rel >= 0x9b8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8c80 size=144 callers=0 calls=4
   calls: sub_786b40, sub_8ea710, sub_9411c0, sub_98ab90
*/
void sub_9b8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8c80ULL || rel >= 0x9b8d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8d10 size=608 callers=0 calls=4
   calls: fileName_2, sub_952940, sub_9530b0, sub_95abd0
*/
void sub_9b8d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8d10ULL || rel >= 0x9b8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b8f70 size=256 callers=0 calls=6
   calls: sub_786b40, sub_8ea710, sub_9411c0, sub_95ae30, sub_98ab90, sub_9b9070
   ref: bin/battle/waza/sequence/d230.bseq
*/
void d230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b8f70ULL || rel >= 0x9b9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9070 size=304 callers=2 calls=3
   calls: sub_5e6180, sub_9b9680, sub_d0c0
*/
void sub_9b9070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9070ULL || rel >= 0x9b91a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b91a0 size=112 callers=0 calls=2
   calls: sub_9530b0, sub_95abd0
*/
void sub_9b91a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b91a0ULL || rel >= 0x9b9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9210 size=288 callers=0 calls=1
   calls: sub_9b97f0
*/
void sub_9b9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9210ULL || rel >= 0x9b9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9330 size=128 callers=0 calls=2
   calls: sub_9b9e40, sub_9bad40
*/
void sub_9b9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9330ULL || rel >= 0x9b93b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b93b0 size=48 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b93b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b93b0ULL || rel >= 0x9b93e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b93e0 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b93e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b93e0ULL || rel >= 0x9b9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9400 size=48 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9400ULL || rel >= 0x9b9430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9430 size=32 callers=0 calls=1
   calls: sub_98ab90
*/
void sub_9b9430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9430ULL || rel >= 0x9b9450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9450 size=64 callers=0 calls=2
   calls: sub_98a800, sub_98ab90
*/
void sub_9b9450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9450ULL || rel >= 0x9b9490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9490 size=80 callers=0 calls=3
   calls: sub_8ec340, sub_98a820, sub_98ab90
*/
void sub_9b9490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9490ULL || rel >= 0x9b94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b94e0 size=32 callers=0 calls=0
*/
void sub_9b94e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b94e0ULL || rel >= 0x9b9500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9500 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_9b9500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9500ULL || rel >= 0x9b9580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9580 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_9b9580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9580ULL || rel >= 0x9b9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9600 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_9b9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9600ULL || rel >= 0x9b9680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9680 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_9b9680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9680ULL || rel >= 0x9b9700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9700 size=240 callers=0 calls=0
*/
void sub_9b9700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9700ULL || rel >= 0x9b97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b97f0 size=1424 callers=1 calls=1
   calls: sub_97ef10
*/
void sub_9b97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b97f0ULL || rel >= 0x9b9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9d80 size=96 callers=0 calls=1
   calls: sub_9bb850
*/
void sub_9b9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9d80ULL || rel >= 0x9b9de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9de0 size=96 callers=0 calls=1
   calls: sub_9bb850
*/
void sub_9b9de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9de0ULL || rel >= 0x9b9e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9e40 size=176 callers=1 calls=6
   calls: sub_9b9ef0, sub_9ba400, sub_9ba560, sub_9ba7a0, sub_9ba9d0, sub_9baaf0
*/
void sub_9b9e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9e40ULL || rel >= 0x9b9ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009b9ef0 size=1296 callers=1 calls=7
   calls: es_g_064, sub_5dd790, sub_5e2930, sub_95c030, sub_96d3a0, sub_981b70, unnamed_17
*/
void sub_9b9ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9b9ef0ULL || rel >= 0x9ba400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ba400 size=352 callers=1 calls=0
*/
void sub_9ba400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ba400ULL || rel >= 0x9ba560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ba560 size=576 callers=1 calls=6
   calls: NexConnectStationJob_WaitForNatTraversalCompletedByRelay, sub_5e2bc0, sub_947d00, sub_961180, sub_98e1d0, sub_98e220
*/
void sub_9ba560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ba560ULL || rel >= 0x9ba7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ba7a0 size=560 callers=1 calls=1
   calls: sub_68d950
*/
void sub_9ba7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ba7a0ULL || rel >= 0x9ba9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009ba9d0 size=288 callers=1 calls=3
   calls: Play_Ba_sys_status_recover, sub_794330, sub_9bb4e0
*/
void sub_9ba9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9ba9d0ULL || rel >= 0x9baaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009baaf0 size=592 callers=1 calls=2
   calls: sub_5e2bc0, sub_98e3e0
*/
void sub_9baaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9baaf0ULL || rel >= 0x9bad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bad40 size=16 callers=1 calls=0
*/
void sub_9bad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bad40ULL || rel >= 0x9bad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bad50 size=336 callers=2 calls=0
   ref: bin/battle/waza/particle/es005/es005_g_paralysis.ptcl
   ref: bin/battle/waza/particle/es003/es003_fire.ptcl
   ref: bin/battle/waza/particle/es005/es005_paralysis.ptcl
   ref: bin/battle/waza/particle/es008/es008_up.ptcl
   ref: bin/battle/waza/particle/es001/es001_nemuri.ptcl
   ref: bin/battle/waza/particle/es008/es008_g_up.ptcl
   ref: bin/battle/waza/particle/es009/es009_g_down.ptcl
   ref: bin/battle/waza/particle/es003/es003_g_fire.ptcl
*/
void es_g_064(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bad50ULL || rel >= 0x9baea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009baea0 size=304 callers=1 calls=3
   calls: sub_5e6180, sub_c4aa00, sub_d0c0
*/
void sub_9baea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9baea0ULL || rel >= 0x9bafd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bafd0 size=304 callers=4 calls=3
   calls: sub_5e6180, sub_9bbb90, sub_d0c0
*/
void sub_9bafd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bafd0ULL || rel >= 0x9bb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bb100 size=304 callers=3 calls=3
   calls: sub_5e6180, sub_9bbc10, sub_d0c0
*/
void sub_9bb100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bb100ULL || rel >= 0x9bb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bb230 size=304 callers=1 calls=3
   calls: sub_5e6180, sub_9bbc90, sub_d0c0
*/
void sub_9bb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bb230ULL || rel >= 0x9bb360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bb360 size=384 callers=1 calls=0
   ref: NexConnectStationJob::WaitForNatTraversalCompletedByRelay
*/
void NexConnectStationJob_WaitForNatTraversalCompletedByRelay(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bb360ULL || rel >= 0x9bb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bb4e0 size=368 callers=5 calls=0
*/
void sub_9bb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bb4e0ULL || rel >= 0x9bb650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bb650 size=512 callers=1 calls=1
   calls: sub_1c0
   ref: Play_Ba_sys_status_melomelo
   ref: Play_Ba_sys_status_p_up
   ref: Play_Ba_sys_status_p_down
   ref: Play_Ba_sys_status_paralysis
   ref: Play_Ba_sys_status_recover
   ref: Play_Ba_sys_status_poison
   ref: Play_Ba_sys_status_confusion
*/
void Play_Ba_sys_status_recover(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bb650ULL || rel >= 0x9bb850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bb850 size=352 callers=9 calls=1
   calls: sub_5e2bc0
*/
void sub_9bb850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bb850ULL || rel >= 0x9bb9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bb9b0 size=400 callers=0 calls=5
   calls: es_g_064, sub_5e26a0, sub_5e2930, sub_5e3870, sub_96bb80
*/
void sub_9bb9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bb9b0ULL || rel >= 0x9bbb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bbb40 size=16 callers=0 calls=0
*/
void sub_9bbb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbb40ULL || rel >= 0x9bbb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bbb50 size=32 callers=0 calls=0
*/
void sub_9bbb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbb50ULL || rel >= 0x9bbb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bbb70 size=32 callers=0 calls=0
*/
void sub_9bbb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbb70ULL || rel >= 0x9bbb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bbb90 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_9bbb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbb90ULL || rel >= 0x9bbc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bbc10 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_9bbc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbc10ULL || rel >= 0x9bbc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bbc90 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_9bbc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbc90ULL || rel >= 0x9bbd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bbd10 size=48 callers=1 calls=0
*/
void sub_9bbd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbd10ULL || rel >= 0x9bbd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bbd40 size=224 callers=1 calls=2
   calls: sub_794310, sub_7c56e0
   ref: Audience_Tension
*/
void Audience_Tension(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbd40ULL || rel >= 0x9bbe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bbe20 size=176 callers=0 calls=2
   calls: sub_794310, sub_7c56e0
   ref: Audience_Tension
*/
void Audience_Tension_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbe20ULL || rel >= 0x9bbed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bbed0 size=272 callers=1 calls=7
   calls: Play_Audience_cheer_normal_rnd, Play_Audience_cheer_riser_long, Play_Audience_cheer_riser_long_2, Play_Audience_cheer_riser_long_3, Play_Audience_cheer_riser_rnd, sub_794310, sub_7c56e0
   ref: Audience_Tension
*/
void Audience_Tension_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbed0ULL || rel >= 0x9bbfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bbfe0 size=288 callers=1 calls=5
   calls: sub_5cfaf0, sub_794310, sub_794330, sub_7c56e0, sub_d0c0
   ref: Play_Audience_cheer_riser_long
   ref: Audience_Tension
*/
void Play_Audience_cheer_riser_long(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bbfe0ULL || rel >= 0x9bc100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bc100 size=288 callers=1 calls=5
   calls: sub_5cfaf0, sub_794310, sub_794330, sub_7c56e0, sub_d0c0
   ref: Play_Audience_cheer_riser_long
   ref: Audience_Tension
*/
void Play_Audience_cheer_riser_long_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bc100ULL || rel >= 0x9bc220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bc220 size=288 callers=1 calls=5
   calls: sub_5cfaf0, sub_794310, sub_794330, sub_7c56e0, sub_d0c0
   ref: Play_Audience_cheer_riser_long
   ref: Audience_Tension
*/
void Play_Audience_cheer_riser_long_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bc220ULL || rel >= 0x9bc340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bc340 size=288 callers=1 calls=5
   calls: sub_5cfaf0, sub_794310, sub_794330, sub_7c56e0, sub_d0c0
   ref: Play_Audience_cheer_riser_rnd
   ref: Audience_Tension
*/
void Play_Audience_cheer_riser_rnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bc340ULL || rel >= 0x9bc460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bc460 size=288 callers=1 calls=5
   calls: sub_5cfaf0, sub_794310, sub_794330, sub_7c56e0, sub_d0c0
   ref: Play_Audience_cheer_normal_rnd
   ref: Audience_Tension
*/
void Play_Audience_cheer_normal_rnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bc460ULL || rel >= 0x9bc580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bc580 size=48 callers=1 calls=0
*/
void sub_9bc580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bc580ULL || rel >= 0x9bc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bc5b0 size=288 callers=0 calls=5
   calls: sub_5cfaf0, sub_794310, sub_794330, sub_7c56e0, sub_d0c0
   ref: Play_Audience_cheer_negative_rnd
   ref: Audience_Tension
*/
void Play_Audience_cheer_negative_rnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bc5b0ULL || rel >= 0x9bc6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bc6d0 size=288 callers=0 calls=5
   calls: sub_5cfaf0, sub_794310, sub_794330, sub_7c56e0, sub_d0c0
   ref: Audience_Tension
   ref: Play_Audience_cheer_positive_rnd
*/
void Play_Audience_cheer_positive_rnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bc6d0ULL || rel >= 0x9bc7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bc7f0 size=288 callers=0 calls=5
   calls: sub_5cfaf0, sub_794310, sub_794330, sub_7c56e0, sub_d0c0
   ref: Play_Audience_cheer_positive_defeat
   ref: Audience_Tension
*/
void Play_Audience_cheer_positive_defeat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bc7f0ULL || rel >= 0x9bc910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bc910 size=16 callers=0 calls=0
*/
void sub_9bc910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bc910ULL || rel >= 0x9bc920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bc920 size=16 callers=0 calls=0
*/
void sub_9bc920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bc920ULL || rel >= 0x9bc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bc930 size=240 callers=0 calls=0
*/
void sub_9bc930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bc930ULL || rel >= 0x9bca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bca20 size=1472 callers=1 calls=0
*/
void sub_9bca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bca20ULL || rel >= 0x9bcfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bcfe0 size=384 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_9bcfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bcfe0ULL || rel >= 0x9bd160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bd160 size=48 callers=0 calls=1
   calls: sub_9bcfe0
*/
void sub_9bd160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bd160ULL || rel >= 0x9bd190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bd190 size=3248 callers=1 calls=23
   calls: sub_5dd790, sub_5e2930, sub_5e2bc0, sub_68d950, sub_7c2d90, sub_7c2db0, sub_7ef6a0, sub_947d00, sub_9568b0, sub_961180, sub_96a3a0, sub_96d3a0
   ... +11 more
   ref: bin/battle/waza/particle/es005/es005_g_paralysis.ptcl
   ref: bin/battle/waza/particle/es003/es003_fire.ptcl
   ref: bin/battle/waza/particle/es005/es005_paralysis.ptcl
   ref: bin/battle/waza/particle/es001/es001_nemuri.ptcl
   ref: bin/battle/waza/particle/es003/es003_g_fire.ptcl
   ref: bin/battle/waza/particle/es002/es002_g_poison.ptcl
   ref: bin/battle/waza/particle/es002/es002_poison.ptcl
   ref: bin/battle/waza/particle/es001/es001_g_nemuri.ptcl
*/
void es005_paralysis(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bd190ULL || rel >= 0x9bde40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bde40 size=16 callers=1 calls=0
*/
void sub_9bde40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bde40ULL || rel >= 0x9bde50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bde50 size=16 callers=1 calls=0
*/
void sub_9bde50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bde50ULL || rel >= 0x9bde60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bde60 size=304 callers=0 calls=5
   calls: sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_5e3870, sub_96bb80
*/
void sub_9bde60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bde60ULL || rel >= 0x9bdf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009bdf90 size=128 callers=0 calls=0
*/
void sub_9bdf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9bdf90ULL || rel >= 0x9be010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be010 size=272 callers=0 calls=0
*/
void sub_9be010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be010ULL || rel >= 0x9be120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be120 size=192 callers=0 calls=0
*/
void sub_9be120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be120ULL || rel >= 0x9be1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be1e0 size=32 callers=1 calls=0
*/
void sub_9be1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be1e0ULL || rel >= 0x9be200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be200 size=16 callers=1 calls=0
*/
void sub_9be200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be200ULL || rel >= 0x9be210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be210 size=224 callers=5 calls=3
   calls: sub_5cfaf0, sub_794330, sub_d0c0
*/
void sub_9be210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be210ULL || rel >= 0x9be2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be2f0 size=160 callers=5 calls=3
   calls: sub_5cfaf0, sub_794330, sub_d0c0
   ref: Set_State_Tension_normal
*/
void Set_State_Tension_normal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be2f0ULL || rel >= 0x9be390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be390 size=176 callers=1 calls=5
   calls: sub_7cb660, sub_7cb7a0, sub_7cb850, sub_803e40, sub_8a9070
*/
void sub_9be390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be390ULL || rel >= 0x9be440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be440 size=80 callers=1 calls=4
   calls: sub_7cb660, sub_7cb7a0, sub_7cb850, sub_8a9070
*/
void sub_9be440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be440ULL || rel >= 0x9be490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be490 size=80 callers=1 calls=4
   calls: sub_7cb660, sub_7cb7a0, sub_7cb850, sub_8a9070
*/
void sub_9be490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be490ULL || rel >= 0x9be4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be4e0 size=144 callers=2 calls=6
   calls: sub_7cb410, sub_7cb660, sub_7cb7a0, sub_7cb850, sub_8a9070, sub_9be570
*/
void sub_9be4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be4e0ULL || rel >= 0x9be570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be570 size=224 callers=1 calls=7
   calls: sub_7cac40, sub_7cb660, sub_7cb7a0, sub_7ef580, sub_7fc2e0, sub_7fc450, sub_8a9070
*/
void sub_9be570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be570ULL || rel >= 0x9be650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be650 size=192 callers=2 calls=6
   calls: sub_7cb410, sub_7cb660, sub_7cb7a0, sub_7cb850, sub_7fc2f0, sub_8a9070
*/
void sub_9be650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be650ULL || rel >= 0x9be710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be710 size=80 callers=1 calls=4
   calls: sub_7cb660, sub_7cb7a0, sub_7cb850, sub_8a9070
*/
void sub_9be710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be710ULL || rel >= 0x9be760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be760 size=144 callers=1 calls=4
   calls: sub_7cb660, sub_7cb7a0, sub_7cb850, sub_8a9070
*/
void sub_9be760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be760ULL || rel >= 0x9be7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be7f0 size=80 callers=2 calls=4
   calls: sub_7cb660, sub_7cb7a0, sub_7cb850, sub_8a9070
*/
void sub_9be7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be7f0ULL || rel >= 0x9be840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be840 size=16 callers=0 calls=0
*/
void sub_9be840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be840ULL || rel >= 0x9be850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be850 size=16 callers=0 calls=0
*/
void sub_9be850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be850ULL || rel >= 0x9be860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be860 size=240 callers=0 calls=0
*/
void sub_9be860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be860ULL || rel >= 0x9be950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009be950 size=239184 callers=1 calls=2
   calls: sub_9fd0e0, sub_a37ba0
*/
void sub_9be950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9be950ULL || rel >= 0x9f8fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f8fa0 size=224 callers=1 calls=2
   calls: sub_140bb00, sub_5e2bc0
*/
void sub_9f8fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f8fa0ULL || rel >= 0x9f9080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9080 size=192 callers=2 calls=2
   calls: sub_5dd790, sub_5e2930
*/
void sub_9f9080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9080ULL || rel >= 0x9f9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9140 size=32 callers=2 calls=0
*/
void sub_9f9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9140ULL || rel >= 0x9f9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9160 size=448 callers=2 calls=1
   calls: sub_140b5a0
*/
void sub_9f9160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9160ULL || rel >= 0x9f9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9320 size=16 callers=2 calls=0
*/
void sub_9f9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9320ULL || rel >= 0x9f9330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9330 size=16 callers=2 calls=0
*/
void sub_9f9330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9330ULL || rel >= 0x9f9340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9340 size=16 callers=2 calls=0
*/
void sub_9f9340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9340ULL || rel >= 0x9f9350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9350 size=16 callers=1 calls=0
*/
void sub_9f9350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9350ULL || rel >= 0x9f9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9360 size=32 callers=1 calls=0
*/
void sub_9f9360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9360ULL || rel >= 0x9f9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9380 size=32 callers=1 calls=0
*/
void sub_9f9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9380ULL || rel >= 0x9f93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f93a0 size=1856 callers=0 calls=9
   calls: ee700_bg_fog_02, sub_140b690, sub_140b6b0, sub_140bcf0, sub_140bd70, sub_95c520, sub_962460, sub_9624c0, sub_c1e8f0
*/
void sub_9f93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f93a0ULL || rel >= 0x9f9ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9ae0 size=768 callers=0 calls=10
   calls: sub_11061e0, sub_1106220, sub_1106320, sub_11063e0, sub_11065b0, sub_140b690, sub_59a500, sub_952670, sub_97dfd0, sub_981b70
   ref: spWazaNo
   ref: spMotType
   ref: timingArr
   ref: motTypeArray
*/
void motTypeArray(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9ae0ULL || rel >= 0x9f9de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9de0 size=272 callers=0 calls=1
   calls: sub_140b690
*/
void sub_9f9de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9de0ULL || rel >= 0x9f9ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009f9ef0 size=320 callers=0 calls=2
   calls: sub_140bd70, sub_c1e8f0
*/
void sub_9f9ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f9ef0ULL || rel >= 0x9fa030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fa030 size=3136 callers=0 calls=9
   calls: sub_11061e0, sub_11063e0, sub_11069b0, sub_140b690, sub_140bd70, sub_8c2c10, sub_946300, sub_961f10, sub_c1e8f0
   ref: %s%s.gfbcam
   ref: introCamData
   ref: ballCamData
   ref: introCamAnimData
   ref: gballThrowCam03
   ref: gballThrowCam01
   ref: ballCamAnimData
   ref: gballThrowCamPath
*/
void gballThrowCamPath(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fa030ULL || rel >= 0x9fac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fac70 size=2400 callers=0 calls=10
   calls: eb_03d_capture, sub_140b690, sub_140bd40, sub_140bd70, sub_952670, sub_96d3a0, sub_981b70, sub_c1ef00, unnamed_17, unnamed_18
*/
void sub_9fac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fac70ULL || rel >= 0x9fb5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fb5d0 size=320 callers=0 calls=4
   calls: ob0226_00_gfbmdl, ob0226_00_parallelball, sub_140b690, sub_c1ef00
*/
void sub_9fb5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fb5d0ULL || rel >= 0x9fb710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fb710 size=672 callers=0 calls=12
   calls: sub_11061e0, sub_11063e0, sub_1106bc0, sub_140b690, sub_140bd40, sub_955da0, sub_956260, sub_961f10, sub_965df0, sub_c1eef0, sub_c1ef00, sub_c46830
   ref: gballThrowEnd
   ref: bin/chara/data/ob/ob0304_00_gmonsterball/mdl/ob0304_00.gfbmdl
   ref: bin/battle/waza/model/anm/
   ref: bin/archive/chara/data/ob/mdl/ob0304_00_gmonsterball.gfpak
*/
void gballThrowEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fb710ULL || rel >= 0x9fb9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fb9b0 size=288 callers=0 calls=3
   calls: sub_140bd70, sub_965df0, sub_c1eef0
   ref: bin/battle/waza/model/anm/
*/
void unnamed_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fb9b0ULL || rel >= 0x9fbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fbad0 size=624 callers=0 calls=7
   calls: mask_d, pattern__02d, pattern__02d_2, pattern__02d_gfbmdl, sub_140b690, sub_140bd40, sub_c1ef00
*/
void sub_9fbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fbad0ULL || rel >= 0x9fbd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fbd40 size=592 callers=0 calls=7
   calls: sub_140b690, sub_140bcf0, sub_95afb0, sub_980370, sub_9fccc0, sub_c1eef0, sub_c1ef00
   ref: bin/pokemon/
*/
void unnamed_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fbd40ULL || rel >= 0x9fbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fbf90 size=960 callers=0 calls=6
   calls: sub_140b690, sub_140bcf0, sub_952670, sub_9526f0, sub_9fccc0, unnamed_19
*/
void sub_9fbf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fbf90ULL || rel >= 0x9fc350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fc350 size=560 callers=0 calls=9
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_961f10, sub_9804a0, sub_980b60, sub_9fccc0, sub_c1eef0, sub_c1ef00
   ref: bin/chara/data/
*/
void unnamed_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fc350ULL || rel >= 0x9fc580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fc580 size=656 callers=0 calls=5
   calls: sub_955da0, sub_956000, sub_9624c0, sub_c1ef00, unnamed_17
   ref: bin/battle/waza/particle/eg_land/eg_land_shout_wind01.ptcl
   ref: eg_cmn_land_smoke_g
   ref: bin/battle/waza/particle/eg_cmn/eg_cmn_land_smoke_g.ptcl
   ref: eg_land_shout_wind01
*/
void eg_land_shout_wind01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fc580ULL || rel >= 0x9fc810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fc810 size=592 callers=0 calls=3
   calls: sub_96a3a0, sub_c1ef00, unnamed_17
   ref: cmn_land_smoke_m
   ref: bin/battle/waza/particle/cmn/cmn_land_smoke_m.ptcl
   ref: bin/battle/waza/particle/cmn/cmn_land_smoke_s.ptcl
   ref: cmn_land_smoke_s
*/
void cmn_land_smoke_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fc810ULL || rel >= 0x9fca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fca60 size=608 callers=0 calls=8
   calls: sub_140b690, sub_140bd40, sub_947d00, sub_952670, sub_98af30, sub_98b320, sub_9fcdf0, sub_a38780
*/
void sub_9fca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fca60ULL || rel >= 0x9fccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fccc0 size=304 callers=24 calls=3
   calls: sub_5e6180, sub_a37f70, sub_d0c0
*/
void sub_9fccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fccc0ULL || rel >= 0x9fcdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fcdf0 size=752 callers=1 calls=2
   calls: sub_967ee0, sub_a37ff0
*/
void sub_9fcdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fcdf0ULL || rel >= 0x9fd0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 009fd0e0 size=239136 callers=1 calls=1
   calls: sub_a37ba0
*/
void sub_9fd0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9fd0e0ULL || rel >= 0xa37700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a37700 size=224 callers=0 calls=1
   calls: sub_95c520
*/
void sub_a37700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa37700ULL || rel >= 0xa377e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a377e0 size=192 callers=0 calls=0
*/
void sub_a377e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa377e0ULL || rel >= 0xa378a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a378a0 size=176 callers=0 calls=0
*/
void sub_a378a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa378a0ULL || rel >= 0xa37950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a37950 size=496 callers=1 calls=1
   calls: sub_5e2bc0
*/
void sub_a37950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa37950ULL || rel >= 0xa37b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a37b40 size=48 callers=0 calls=1
   calls: sub_a37950
*/
void sub_a37b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa37b40ULL || rel >= 0xa37b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a37b70 size=16 callers=0 calls=0
*/
void sub_a37b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa37b70ULL || rel >= 0xa37b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a37b80 size=16 callers=0 calls=0
*/
void sub_a37b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa37b80ULL || rel >= 0xa37b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a37b90 size=16 callers=0 calls=0
*/
void sub_a37b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa37b90ULL || rel >= 0xa37ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a37ba0 size=272 callers=772 calls=0
*/
void sub_a37ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa37ba0ULL || rel >= 0xa37cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a37cb0 size=704 callers=0 calls=0
*/
void sub_a37cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa37cb0ULL || rel >= 0xa37f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a37f70 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_a37f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa37f70ULL || rel >= 0xa37ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a37ff0 size=656 callers=1 calls=1
   calls: sub_a38580
*/
void sub_a37ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa37ff0ULL || rel >= 0xa38280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a38280 size=192 callers=0 calls=0
*/
void sub_a38280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa38280ULL || rel >= 0xa38340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a38340 size=192 callers=0 calls=0
*/
void sub_a38340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa38340ULL || rel >= 0xa38400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a38400 size=192 callers=0 calls=0
*/
void sub_a38400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa38400ULL || rel >= 0xa384c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a384c0 size=192 callers=0 calls=0
*/
void sub_a384c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa384c0ULL || rel >= 0xa38580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a38580 size=512 callers=1 calls=0
*/
void sub_a38580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa38580ULL || rel >= 0xa38780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a38780 size=336 callers=1 calls=0
*/
void sub_a38780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa38780ULL || rel >= 0xa388d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a388d0 size=480 callers=0 calls=0
*/
void sub_a388d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa388d0ULL || rel >= 0xa38ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a38ab0 size=928 callers=0 calls=8
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_9901f0, sub_9a71a0, sub_9a7240
*/
void sub_a38ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa38ab0ULL || rel >= 0xa38e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a38e50 size=1344 callers=0 calls=11
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_960610, sub_961cc0, sub_9901f0, sub_9a71a0, sub_9a7240
*/
void sub_a38e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa38e50ULL || rel >= 0xa39390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a39390 size=1264 callers=0 calls=11
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_9606c0, sub_960730, sub_9901f0, sub_9a71a0, sub_9a7240
*/
void sub_a39390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa39390ULL || rel >= 0xa39880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a39880 size=1584 callers=0 calls=16
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bcf0, sub_140bd40, sub_142a660, sub_612f70, sub_960610, sub_960620, sub_961f10, sub_971650, sub_972f70
   ... +4 more
*/
void sub_a39880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa39880ULL || rel >= 0xa39eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a39eb0 size=960 callers=0 calls=11
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_960610, sub_9619d0, sub_9901f0, sub_9a71a0, sub_9a7240
*/
void sub_a39eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa39eb0ULL || rel >= 0xa3a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3a270 size=640 callers=0 calls=5
   calls: sub_140b690, sub_142a660, sub_952670, sub_960610, sub_9908c0
*/
void sub_a3a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3a270ULL || rel >= 0xa3a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3a4f0 size=640 callers=0 calls=5
   calls: sub_140b690, sub_142a660, sub_952670, sub_960610, sub_9904a0
*/
void sub_a3a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3a4f0ULL || rel >= 0xa3a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3a770 size=656 callers=0 calls=6
   calls: sub_140b690, sub_142a660, sub_952670, sub_961fd0, sub_962230, sub_9904a0
*/
void sub_a3a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3a770ULL || rel >= 0xa3aa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3aa00 size=1056 callers=0 calls=5
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_a65060
*/
void sub_a3aa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3aa00ULL || rel >= 0xa3ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3ae20 size=560 callers=0 calls=8
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_952670, sub_960610, sub_9a71d0, sub_a65340
*/
void sub_a3ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3ae20ULL || rel >= 0xa3b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3b050 size=528 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_140bd70, sub_9a72c0, sub_c1f790
*/
void sub_a3b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3b050ULL || rel >= 0xa3b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3b260 size=656 callers=0 calls=10
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_140bd70, sub_952670, sub_960610, sub_9606c0, sub_960730, sub_9a7470, sub_c1f6d0
*/
void sub_a3b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3b260ULL || rel >= 0xa3b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3b4f0 size=352 callers=0 calls=5
   calls: sub_140bca0, sub_140bd40, sub_140bd70, sub_9a72c0, sub_c1f790
*/
void sub_a3b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3b4f0ULL || rel >= 0xa3b650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3b650 size=384 callers=0 calls=5
   calls: sub_140bca0, sub_140bd40, sub_140bd70, sub_9a7470, sub_c1f6d0
*/
void sub_a3b650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3b650ULL || rel >= 0xa3b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3b7d0 size=1920 callers=0 calls=14
   calls: sub_11061e0, sub_11063e0, sub_11069b0, sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_140bd70, sub_8c2c10, sub_946300, sub_961f10, sub_976120
   ... +2 more
   ref: introCamAnimData
   ref: gballThrowCam03
   ref: gballThrowCam01
   ref: ballCamAnimData
   ref: gballThrowCamPath
   ref: %s%s.gfbcama
   ref: gballThrowCam02
   ref: loseCamAnimData
*/
void gballThrowCamPath_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3b7d0ULL || rel >= 0xa3bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3bf50 size=2240 callers=0 calls=21
   calls: sub_11061e0, sub_11063e0, sub_11069b0, sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_140bd70, sub_612f70, sub_8c2c10, sub_946300, sub_960610
   ... +9 more
   ref: %s%s.gfbcam
   ref: introCamData
   ref: ballCamData
   ref: gballThrowCam03
   ref: gballThrowCam01
   ref: gballThrowCamPath
   ref: loseCamData
   ref: gballThrowCam02
*/
void gballThrowCamPath_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3bf50ULL || rel >= 0xa3c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3c810 size=384 callers=0 calls=6
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_140bd70, sub_9a72c0, sub_c1f790
*/
void sub_a3c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3c810ULL || rel >= 0xa3c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3c990 size=736 callers=0 calls=9
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_140bd70, sub_952670, sub_960610, sub_9619d0, sub_9a7470, sub_c1f6d0
*/
void sub_a3c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3c990ULL || rel >= 0xa3cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3cc70 size=352 callers=0 calls=5
   calls: sub_140bc80, sub_140bd40, sub_9a7220, sub_9a7230, sub_9a7240
*/
void sub_a3cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3cc70ULL || rel >= 0xa3cdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3cdd0 size=16 callers=0 calls=0
*/
void sub_a3cdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3cdd0ULL || rel >= 0xa3cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3cde0 size=16 callers=0 calls=0
*/
void sub_a3cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3cde0ULL || rel >= 0xa3cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3cdf0 size=1040 callers=0 calls=9
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_9526f0, sub_960610, sub_9606c0, sub_a654d0
*/
void sub_a3cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3cdf0ULL || rel >= 0xa3d200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3d200 size=640 callers=0 calls=7
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_952670, sub_9526f0, sub_9606c0, sub_961180
*/
void sub_a3d200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3d200ULL || rel >= 0xa3d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3d480 size=912 callers=0 calls=12
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_142a660, sub_612f70, sub_952670, sub_9526f0, sub_961f10, sub_971650, sub_976120, sub_a65660
*/
void sub_a3d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3d480ULL || rel >= 0xa3d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3d810 size=208 callers=0 calls=4
   calls: sub_140b690, sub_952670, sub_9526f0, sub_952940
*/
void sub_a3d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3d810ULL || rel >= 0xa3d8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3d8e0 size=208 callers=0 calls=2
   calls: sub_140b690, sub_952940
*/
void sub_a3d8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3d8e0ULL || rel >= 0xa3d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3d9b0 size=672 callers=0 calls=7
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_9526f0, sub_a654d0
*/
void sub_a3d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3d9b0ULL || rel >= 0xa3dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3dc50 size=1488 callers=0 calls=8
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_9526f0, sub_972af0, sub_a654d0
*/
void sub_a3dc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3dc50ULL || rel >= 0xa3e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3e220 size=720 callers=0 calls=9
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_9526f0, sub_960610, sub_9606c0, sub_a654d0
*/
void sub_a3e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3e220ULL || rel >= 0xa3e4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3e4f0 size=720 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_142a660, sub_952670, sub_9526f0, sub_961fd0, sub_a654d0
*/
void sub_a3e4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3e4f0ULL || rel >= 0xa3e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3e7c0 size=1104 callers=0 calls=11
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_9526f0, sub_960610, sub_9619d0, sub_962150, sub_a654d0
*/
void sub_a3e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3e7c0ULL || rel >= 0xa3ec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3ec10 size=16 callers=0 calls=0
*/
void sub_a3ec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3ec10ULL || rel >= 0xa3ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3ec20 size=1264 callers=0 calls=11
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_952670, sub_9526f0, sub_960610, sub_9606c0, sub_972c70, sub_977b70, sub_a654d0
*/
void sub_a3ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3ec20ULL || rel >= 0xa3f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3f110 size=272 callers=0 calls=4
   calls: sub_140b690, sub_140bd40, sub_952670, sub_9526f0
*/
void sub_a3f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3f110ULL || rel >= 0xa3f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3f220 size=1392 callers=0 calls=3
   calls: sub_140bd40, sub_952670, sub_9526f0
*/
void sub_a3f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3f220ULL || rel >= 0xa3f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3f790 size=704 callers=0 calls=1
   calls: sub_140bd40
*/
void sub_a3f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3f790ULL || rel >= 0xa3fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3fa50 size=256 callers=0 calls=5
   calls: sub_140b690, sub_140bd40, sub_952670, sub_9526f0, sub_97f120
*/
void sub_a3fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3fa50ULL || rel >= 0xa3fb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3fb50 size=592 callers=0 calls=9
   calls: sub_11061e0, sub_1106220, sub_1106320, sub_11063e0, sub_11065b0, sub_140b690, sub_952670, sub_9526f0, to_ba02_megaappeal01
   ref: spWazaNo
   ref: spMotType
   ref: motTypeArray
*/
void motTypeArray_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3fb50ULL || rel >= 0xa3fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3fda0 size=384 callers=0 calls=7
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_5cfad0, sub_952670, sub_9526f0, sub_97f190
*/
void sub_a3fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3fda0ULL || rel >= 0xa3ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a3ff20 size=384 callers=0 calls=7
   calls: sub_140b690, sub_140bcf0, sub_140bd40, sub_5cfad0, sub_952670, sub_9526f0, sub_97f390
*/
void sub_a3ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa3ff20ULL || rel >= 0xa400a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a400a0 size=384 callers=0 calls=6
   calls: sub_140b690, sub_140bcf0, sub_5cfad0, sub_952670, sub_9526f0, sub_97f590
*/
void sub_a400a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa400a0ULL || rel >= 0xa40220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a40220 size=16 callers=0 calls=0
*/
void sub_a40220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa40220ULL || rel >= 0xa40230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a40230 size=64 callers=0 calls=1
   calls: sub_140b690
*/
void sub_a40230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa40230ULL || rel >= 0xa40270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a40270 size=304 callers=0 calls=7
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_952670, sub_9526f0, sub_97d960, sub_981b70
*/
void sub_a40270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa40270ULL || rel >= 0xa403a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a403a0 size=736 callers=0 calls=8
   calls: sub_140b690, sub_140bc80, sub_142a660, sub_948f20, sub_952670, sub_9526f0, sub_977b70, sub_994350
*/
void sub_a403a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa403a0ULL || rel >= 0xa40680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a40680 size=448 callers=0 calls=7
   calls: sub_140b690, sub_5cfad0, sub_952670, sub_9526f0, sub_97f190, sub_97f590, sub_982a10
   ref: to_kw32_happyB01
   ref: app_state
   ref: to_kw32_happyA01
*/
void to_kw32_happyB01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa40680ULL || rel >= 0xa40840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a40840 size=16 callers=0 calls=0
*/
void sub_a40840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa40840ULL || rel >= 0xa40850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a40850 size=608 callers=0 calls=8
   calls: sub_140b690, sub_140bc80, sub_140bca0, sub_142a660, sub_952670, sub_9526f0, sub_981350, sub_a65c60
*/
void sub_a40850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa40850ULL || rel >= 0xa40ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a40ab0 size=16 callers=0 calls=0
*/
void sub_a40ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa40ab0ULL || rel >= 0xa40ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a40ac0 size=784 callers=0 calls=8
   calls: sub_140b690, sub_140bca0, sub_140bcf0, sub_140bd40, sub_952670, sub_9526f0, sub_972670, sub_974bd0
*/
void sub_a40ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa40ac0ULL || rel >= 0xa40dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a40dd0 size=512 callers=0 calls=5
   calls: sub_140b690, sub_142a660, sub_952670, sub_9526f0, sub_a65df0
*/
void sub_a40dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa40dd0ULL || rel >= 0xa40fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a40fd0 size=928 callers=0 calls=9
   calls: sub_140b690, sub_140bc80, sub_140bd40, sub_142a660, sub_952670, sub_9526f0, sub_960610, sub_9606c0, sub_a66000
*/
void sub_a40fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa40fd0ULL || rel >= 0xa41370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a41370 size=240 callers=0 calls=3
   calls: sub_140b690, sub_952670, sub_9526f0
*/
void sub_a41370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa41370ULL || rel >= 0xa41460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a41460 size=256 callers=0 calls=5
   calls: sub_140b690, sub_140bd40, sub_952670, sub_9526f0, sub_97f000
*/
void sub_a41460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa41460ULL || rel >= 0xa41560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a41560 size=16 callers=0 calls=0
*/
void sub_a41560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa41560ULL || rel >= 0xa41570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a41570 size=784 callers=0 calls=8
   calls: sub_140b690, sub_140bca0, sub_142a660, sub_952670, sub_9526f0, sub_9606c0, sub_960730, sub_993200
*/
void sub_a41570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa41570ULL || rel >= 0xa41880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a41880 size=16 callers=0 calls=0
*/
void sub_a41880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa41880ULL || rel >= 0xa41890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a41890 size=304 callers=0 calls=6
   calls: sub_140b690, sub_140bd40, sub_952670, sub_9526f0, sub_97f050, sub_981b70
*/
void sub_a41890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa41890ULL || rel >= 0xa419c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a419c0 size=640 callers=0 calls=5
   calls: sub_140b690, sub_142a660, sub_952670, sub_9526f0, sub_996bc0
*/
void sub_a419c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa419c0ULL || rel >= 0xa41c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a41c40 size=112 callers=0 calls=4
   calls: Stop_PM_G_Lowtone, sub_140b690, sub_140bd40, sub_952670
*/
void sub_a41c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa41c40ULL || rel >= 0xa41cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a41cb0 size=1248 callers=0 calls=14
   calls: sub_140b690, sub_140bca0, sub_140bd40, sub_142a660, sub_59a5c0, sub_952670, sub_9526f0, sub_960610, sub_9606c0, sub_97dfd0, sub_981540, sub_981b70
   ... +2 more
*/
void sub_a41cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa41cb0ULL || rel >= 0xa42190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42190 size=384 callers=0 calls=7
   calls: sub_140b690, sub_140bcf0, sub_952670, sub_9526f0, sub_97ffc0, sub_9fccc0, sub_c1f550
*/
void sub_a42190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42190ULL || rel >= 0xa42310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42310 size=192 callers=0 calls=4
   calls: ba_variation, sub_140b690, sub_952670, sub_9526f0
*/
void sub_a42310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42310ULL || rel >= 0xa423d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a423d0 size=224 callers=0 calls=4
   calls: sub_140b690, sub_952670, sub_9526f0, sub_980950
*/
void sub_a423d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa423d0ULL || rel >= 0xa424b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a424b0 size=384 callers=0 calls=7
   calls: sub_140b690, sub_140bcf0, sub_952670, sub_9526f0, sub_97ffc0, sub_9fccc0, sub_c1f550
*/
void sub_a424b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa424b0ULL || rel >= 0xa42630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42630 size=16 callers=0 calls=0
*/
void sub_a42630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42630ULL || rel >= 0xa42640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42640 size=16 callers=0 calls=0
*/
void sub_a42640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42640ULL || rel >= 0xa42650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42650 size=16 callers=0 calls=0
*/
void sub_a42650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42650ULL || rel >= 0xa42660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42660 size=16 callers=0 calls=0
*/
void sub_a42660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42660ULL || rel >= 0xa42670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42670 size=16 callers=0 calls=0
*/
void sub_a42670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42670ULL || rel >= 0xa42680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42680 size=16 callers=0 calls=0
*/
void sub_a42680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42680ULL || rel >= 0xa42690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42690 size=96 callers=0 calls=2
   calls: sub_140b690, sub_9533f0
*/
void sub_a42690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42690ULL || rel >= 0xa426f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a426f0 size=96 callers=0 calls=2
   calls: sub_140b690, sub_953170
*/
void sub_a426f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa426f0ULL || rel >= 0xa42750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42750 size=16 callers=0 calls=0
*/
void sub_a42750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42750ULL || rel >= 0xa42760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42760 size=16 callers=0 calls=0
*/
void sub_a42760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42760ULL || rel >= 0xa42770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42770 size=16 callers=0 calls=0
*/
void sub_a42770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42770ULL || rel >= 0xa42780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42780 size=16 callers=0 calls=0
*/
void sub_a42780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42780ULL || rel >= 0xa42790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42790 size=16 callers=0 calls=0
*/
void sub_a42790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42790ULL || rel >= 0xa427a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a427a0 size=16 callers=0 calls=0
*/
void sub_a427a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa427a0ULL || rel >= 0xa427b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a427b0 size=16 callers=0 calls=0
*/
void sub_a427b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa427b0ULL || rel >= 0xa427c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a427c0 size=16 callers=0 calls=0
*/
void sub_a427c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa427c0ULL || rel >= 0xa427d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a427d0 size=16 callers=0 calls=0
*/
void sub_a427d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa427d0ULL || rel >= 0xa427e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a427e0 size=16 callers=0 calls=0
*/
void sub_a427e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa427e0ULL || rel >= 0xa427f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a427f0 size=16 callers=0 calls=0
*/
void sub_a427f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa427f0ULL || rel >= 0xa42800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42800 size=16 callers=0 calls=0
*/
void sub_a42800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42800ULL || rel >= 0xa42810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42810 size=16 callers=0 calls=0
*/
void sub_a42810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42810ULL || rel >= 0xa42820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42820 size=16 callers=0 calls=0
*/
void sub_a42820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42820ULL || rel >= 0xa42830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42830 size=64 callers=0 calls=2
   calls: sub_140bd40, sub_9a7300
*/
void sub_a42830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42830ULL || rel >= 0xa42870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42870 size=64 callers=0 calls=1
   calls: sub_140bc80
*/
void sub_a42870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42870ULL || rel >= 0xa428b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a428b0 size=64 callers=0 calls=1
   calls: sub_140bca0
*/
void sub_a428b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa428b0ULL || rel >= 0xa428f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a428f0 size=64 callers=0 calls=2
   calls: sub_140bc80, sub_9a7680
*/
void sub_a428f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa428f0ULL || rel >= 0xa42930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42930 size=64 callers=0 calls=1
   calls: sub_140bd40
*/
void sub_a42930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42930ULL || rel >= 0xa42970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42970 size=16 callers=0 calls=0
*/
void sub_a42970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42970ULL || rel >= 0xa42980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42980 size=16 callers=0 calls=0
*/
void sub_a42980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42980ULL || rel >= 0xa42990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42990 size=16 callers=0 calls=0
*/
void sub_a42990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42990ULL || rel >= 0xa429a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a429a0 size=16 callers=0 calls=0
*/
void sub_a429a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa429a0ULL || rel >= 0xa429b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a429b0 size=16 callers=0 calls=0
*/
void sub_a429b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa429b0ULL || rel >= 0xa429c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a429c0 size=16 callers=0 calls=0
*/
void sub_a429c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa429c0ULL || rel >= 0xa429d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a429d0 size=16 callers=0 calls=0
*/
void sub_a429d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa429d0ULL || rel >= 0xa429e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a429e0 size=96 callers=0 calls=2
   calls: sub_140b690, sub_9533f0
*/
void sub_a429e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa429e0ULL || rel >= 0xa42a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42a40 size=96 callers=0 calls=2
   calls: sub_140b690, sub_953170
*/
void sub_a42a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42a40ULL || rel >= 0xa42aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42aa0 size=16 callers=0 calls=0
*/
void sub_a42aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42aa0ULL || rel >= 0xa42ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42ab0 size=16 callers=0 calls=0
*/
void sub_a42ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42ab0ULL || rel >= 0xa42ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42ac0 size=16 callers=0 calls=0
*/
void sub_a42ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42ac0ULL || rel >= 0xa42ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42ad0 size=16 callers=0 calls=0
*/
void sub_a42ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42ad0ULL || rel >= 0xa42ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42ae0 size=16 callers=0 calls=0
*/
void sub_a42ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42ae0ULL || rel >= 0xa42af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42af0 size=16 callers=0 calls=0
*/
void sub_a42af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42af0ULL || rel >= 0xa42b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42b00 size=16 callers=0 calls=0
*/
void sub_a42b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42b00ULL || rel >= 0xa42b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42b10 size=16 callers=0 calls=0
*/
void sub_a42b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42b10ULL || rel >= 0xa42b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42b20 size=16 callers=0 calls=0
*/
void sub_a42b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42b20ULL || rel >= 0xa42b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42b30 size=16 callers=0 calls=0
*/
void sub_a42b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42b30ULL || rel >= 0xa42b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42b40 size=16 callers=0 calls=0
*/
void sub_a42b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42b40ULL || rel >= 0xa42b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42b50 size=16 callers=0 calls=0
*/
void sub_a42b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42b50ULL || rel >= 0xa42b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42b60 size=16 callers=0 calls=0
*/
void sub_a42b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42b60ULL || rel >= 0xa42b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42b70 size=16 callers=0 calls=0
*/
void sub_a42b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42b70ULL || rel >= 0xa42b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00a42b80 size=64 callers=0 calls=2
   calls: sub_140bd40, sub_9a7300
*/
void sub_a42b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa42b80ULL || rel >= 0xa42bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

