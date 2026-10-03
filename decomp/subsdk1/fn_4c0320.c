/* subsdk1 functions 004c0320..004cf530 (23 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 004c0320 size=192 callers=1 calls=2
   calls: sub_2b0, sub_4c41c0
*/
void sub_4c0320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0320ULL || rel >= 0x4c03e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c03e0 size=208 callers=1 calls=2
   calls: sub_2b0, sub_4c4260
*/
void sub_4c03e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c03e0ULL || rel >= 0x4c04b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c04b0 size=208 callers=1 calls=2
   calls: sub_2b0, sub_4c4110
*/
void sub_4c04b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c04b0ULL || rel >= 0x4c0580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0580 size=192 callers=1 calls=2
   calls: sub_2b0, sub_4c4320
*/
void sub_4c0580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0580ULL || rel >= 0x4c0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0640 size=144 callers=1 calls=2
   calls: sub_2c0, sub_4923e0
*/
void sub_4c0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0640ULL || rel >= 0x4c06d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c06d0 size=272 callers=1 calls=2
   calls: sub_2b0, sub_4040
*/
void sub_4c06d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c06d0ULL || rel >= 0x4c07e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c07e0 size=896 callers=1 calls=10
   calls: sub_2c0, sub_4afdb0, sub_4bff20, sub_4bffd0, sub_4c0320, sub_4c03e0, sub_4c04b0, sub_4c0580, sub_4c06d0, sub_4c1de0
*/
void sub_4c07e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c07e0ULL || rel >= 0x4c0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0b60 size=80 callers=1 calls=1
   calls: sub_2b0
*/
void sub_4c0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0b60ULL || rel >= 0x4c0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0bb0 size=32 callers=1 calls=0
*/
void sub_4c0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0bb0ULL || rel >= 0x4c0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0bd0 size=32 callers=1 calls=0
*/
void sub_4c0bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0bd0ULL || rel >= 0x4c0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0bf0 size=128 callers=1 calls=0
*/
void sub_4c0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0bf0ULL || rel >= 0x4c0c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0c70 size=16 callers=0 calls=0
*/
void sub_4c0c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0c70ULL || rel >= 0x4c0c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0c80 size=16 callers=0 calls=0
*/
void sub_4c0c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0c80ULL || rel >= 0x4c0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0c90 size=16 callers=0 calls=0
*/
void sub_4c0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0c90ULL || rel >= 0x4c0ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0ca0 size=16 callers=0 calls=0
*/
void sub_4c0ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0ca0ULL || rel >= 0x4c0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0cb0 size=16 callers=27 calls=0
*/
void sub_4c0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0cb0ULL || rel >= 0x4c0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0cc0 size=16 callers=6 calls=0
*/
void sub_4c0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0cc0ULL || rel >= 0x4c0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0cd0 size=16 callers=23 calls=0
*/
void sub_4c0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0cd0ULL || rel >= 0x4c0ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0ce0 size=16 callers=21 calls=0
*/
void sub_4c0ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0ce0ULL || rel >= 0x4c0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0cf0 size=16 callers=23 calls=0
*/
void sub_4c0cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0cf0ULL || rel >= 0x4c0d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0d00 size=16 callers=6 calls=0
*/
void sub_4c0d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0d00ULL || rel >= 0x4c0d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0d10 size=96 callers=1 calls=3
   calls: NV_shader_atomic_float64_3, bad_arguments, sub_2c0
*/
void sub_4c0d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0d10ULL || rel >= 0x4c0d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0d70 size=400 callers=1 calls=1
   calls: sub_270
*/
void sub_4c0d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0d70ULL || rel >= 0x4c0f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0f00 size=144 callers=1 calls=2
   calls: sub_270, sub_478a60
*/
void sub_4c0f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0f00ULL || rel >= 0x4c0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0f90 size=144 callers=2 calls=3
   calls: sub_2c0, sub_478fe0, sub_4790e0
*/
void sub_4c0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0f90ULL || rel >= 0x4c1020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1020 size=768 callers=1 calls=4
   calls: sub_2b0, sub_2c0, sub_479220, sub_479290
*/
void sub_4c1020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1020ULL || rel >= 0x4c1320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1320 size=1632 callers=1 calls=17
   calls: Bad_options, Bad_options_2, NV_shader_atomic_float64_3, bad_arguments, sub_2b0, sub_2b4580, sub_2b5e70, sub_2b5e90, sub_2b66a0, sub_2b7010, sub_2b7250, sub_2c0
   ... +5 more
*/
void sub_4c1320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1320ULL || rel >= 0x4c1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1980 size=464 callers=1 calls=2
   calls: sub_2b0, sub_2c0
*/
void sub_4c1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1980ULL || rel >= 0x4c1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1b50 size=288 callers=1 calls=7
   calls: ilog__u__u, sub_482590, sub_484520, sub_4c1c70, sub_4c2a10, sub_4c2b80, sub_4c3d70
*/
void sub_4c1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1b50ULL || rel >= 0x4c1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1c70 size=368 callers=1 calls=1
   calls: sub_4c0cf0
*/
void sub_4c1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1c70ULL || rel >= 0x4c1de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1de0 size=1360 callers=1 calls=23
   calls: sub_270, sub_2c0, sub_492580, sub_4925b0, sub_4ae960, sub_4aeb00, sub_4aff00, sub_4b00e0, sub_4b0410, sub_4b1e70, sub_4b2130, sub_4b21d0
   ... +11 more
*/
void sub_4c1de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1de0ULL || rel >= 0x4c2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2330 size=1616 callers=0 calls=1
   calls: sub_4b4c90
*/
void sub_4c2330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2330ULL || rel >= 0x4c2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2980 size=16 callers=1 calls=0
*/
void sub_4c2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2980ULL || rel >= 0x4c2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2990 size=16 callers=1 calls=0
*/
void sub_4c2990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2990ULL || rel >= 0x4c29a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c29a0 size=64 callers=1 calls=2
   calls: sub_2b4580, sub_4913d0
*/
void sub_4c29a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c29a0ULL || rel >= 0x4c29e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c29e0 size=16 callers=0 calls=0
*/
void sub_4c29e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c29e0ULL || rel >= 0x4c29f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c29f0 size=16 callers=0 calls=0
*/
void sub_4c29f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c29f0ULL || rel >= 0x4c2a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2a00 size=16 callers=0 calls=0
*/
void sub_4c2a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2a00ULL || rel >= 0x4c2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2a10 size=368 callers=2 calls=1
   calls: sub_4c0cf0
*/
void sub_4c2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2a10ULL || rel >= 0x4c2b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2b80 size=16 callers=1 calls=0
*/
void sub_4c2b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2b80ULL || rel >= 0x4c2b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2b90 size=2160 callers=1 calls=1
   calls: sub_4c0ce0
   ref: Sampler binding %d is assigned to multiple samplers.
   ref: r11_g11_b10
   ref: BUFFER[%d][%d]
   ref: _bindless
   ref: Separate sampler binding %d is assigned to multiple samplers.
   ref: Separate texture binding %d is assigned to multiple samplers.
   ref: Image binding %d is assigned to multiple images.
   ref: rgb10_a2
*/
void r11_g11_b10_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2b90ULL || rel >= 0x4c3400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3400 size=1424 callers=1 calls=3
   calls: contiguous_2, sub_4c2a10, sub_4c3b90
   ref: Uniform
   ref: %sBUFFER[%d]
   ref: separate texture
   ref: Can not find %s free bindings for all active UBO%s to fit in the total %d UBO binding slots.
   ref: %s block binding %d is assigned to multiple blocks.
   ref: %s block array starting at binding %d overlaps bindings assigned to other blocks.
   ref: separate sampler
   ref: sampler
*/
void contiguous(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3400ULL || rel >= 0x4c3990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3990 size=512 callers=4 calls=1
   calls: sub_4c3c20
   ref: BUFFER[%d][%d]
   ref: contiguous 
   ref:  arrays
   ref: Can not find %sfree bindings for all active %s%s to fit in the total %d %s binding slots.
*/
void contiguous_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3990ULL || rel >= 0x4c3b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3b90 size=144 callers=2 calls=1
   calls: sub_4c3b90
*/
void sub_4c3b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3b90ULL || rel >= 0x4c3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3c20 size=336 callers=1 calls=0
*/
void sub_4c3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3c20ULL || rel >= 0x4c3d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3d70 size=304 callers=1 calls=0
*/
void sub_4c3d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3d70ULL || rel >= 0x4c3ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3ea0 size=480 callers=1 calls=0
*/
void sub_4c3ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3ea0ULL || rel >= 0x4c4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4080 size=144 callers=1 calls=0
*/
void sub_4c4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4080ULL || rel >= 0x4c4110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4110 size=176 callers=1 calls=0
*/
void sub_4c4110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4110ULL || rel >= 0x4c41c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c41c0 size=160 callers=1 calls=0
*/
void sub_4c41c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c41c0ULL || rel >= 0x4c4260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4260 size=192 callers=1 calls=0
*/
void sub_4c4260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4260ULL || rel >= 0x4c4320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4320 size=160 callers=1 calls=0
*/
void sub_4c4320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4320ULL || rel >= 0x4c43c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c43c0 size=1216 callers=1 calls=0
*/
void sub_4c43c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c43c0ULL || rel >= 0x4c4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4880 size=528 callers=1 calls=0
*/
void sub_4c4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4880ULL || rel >= 0x4c4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4a90 size=32 callers=2 calls=0
*/
void sub_4c4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4a90ULL || rel >= 0x4c4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4ab0 size=48 callers=1 calls=0
*/
void sub_4c4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4ab0ULL || rel >= 0x4c4ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4ae0 size=16 callers=3 calls=0
*/
void sub_4c4ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4ae0ULL || rel >= 0x4c4af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4af0 size=96 callers=1 calls=0
*/
void sub_4c4af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4af0ULL || rel >= 0x4c4b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4b50 size=1872 callers=7 calls=0
*/
void sub_4c4b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4b50ULL || rel >= 0x4c52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c52a0 size=256 callers=1 calls=1
   calls: sub_2d0
*/
void sub_4c52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c52a0ULL || rel >= 0x4c53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c53a0 size=16 callers=16 calls=0
*/
void sub_4c53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c53a0ULL || rel >= 0x4c53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c53b0 size=16 callers=4 calls=0
*/
void sub_4c53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c53b0ULL || rel >= 0x4c53c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c53c0 size=1168 callers=1 calls=3
   calls: sub_270, sub_2d0, sub_48e5a0
   ref: Error allocating memory for debug data.
*/
void Error_allocating_memory_for_debug_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c53c0ULL || rel >= 0x4c5850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5850 size=576 callers=1 calls=2
   calls: sub_270, sub_2d0
   ref: Error allocating memory
*/
void Error_allocating_memory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5850ULL || rel >= 0x4c5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5a90 size=7472 callers=2 calls=4
   calls: sub_270, sub_2c0, sub_2d0, sub_4c4b50
   ref: Unable to allocate internal memoryfor shader reflection data section
   ref: Error allocating internal memory for program reflection information.
   ref: Error allocating internal memory for string pool.
*/
void Error_allocating_internal_memory_for_string_pool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5a90ULL || rel >= 0x4c77c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c77c0 size=176 callers=1 calls=2
   calls: Error_allocating_internal_memory_for_string_pool, sub_270
*/
void sub_4c77c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c77c0ULL || rel >= 0x4c7870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7870 size=576 callers=1 calls=4
   calls: sub_2c0, sub_2d0, sub_4c7ab0, sub_4ce250
   ref: Error storing GPU machine code
*/
void Error_storing_GPU_machine_code(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7870ULL || rel >= 0x4c7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7ab0 size=1120 callers=1 calls=2
   calls: sub_270, sub_4c9bb0
*/
void sub_4c7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7ab0ULL || rel >= 0x4c7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7f10 size=736 callers=0 calls=5
   calls: prioritizeConsecutiveTextureInstructions, sub_270, sub_2b5e50, sub_2c0, sub_2d0
   ref: Too many pragmas specified in the shader.
   ref: Specifying the "optlevel default" pragma will disable G2 debugging information. G1 debugging informa
*/
void Too_many_pragmas_specified_in_the_shader(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7f10ULL || rel >= 0x4c81f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c81f0 size=928 callers=2 calls=0
   ref: no_spill
   ref: unroll
   ref: default_spill
   ref: spillcontrol
   ref: hoistDiscards
   ref: default
   ref: coverageToColorTarget
   ref: optlevel
*/
void prioritizeConsecutiveTextureInstructions(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c81f0ULL || rel >= 0x4c8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8590 size=1040 callers=0 calls=9
   calls: sub_270, sub_2b5eb0, sub_2c0, sub_2d0, sub_2e0, sub_510, sub_530, sub_5a0, sub_600
   ref: Could not find include file %s
   ref: Maximum number of #include files reached. Maximum is %d
   ref: Empty include paths found and are not allowed.
   ref: Error reading from include file
*/
void Could_not_find_include_file_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8590ULL || rel >= 0x4c89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c89a0 size=464 callers=1 calls=2
   calls: sub_2d0, sub_4c4a90
   ref: Invalid option for debug level.
   ref: GLSLC_OPTLEVEL_DEFAULT will disable G2 debugging. G1 debug information will be produced.
*/
void Invalid_option_for_debug_level(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c89a0ULL || rel >= 0x4c8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8b70 size=752 callers=1 calls=5
   calls: sub_2d0, sub_4c0d70, sub_4c1020, sub_4c1320, sub_4c52a0
   ref: Geometry
   ref: Tessellation evaluation
   ref: Error compiling shaders.
   ref: Tessellation control
   ref: Vertex
   ref: Compute
   ref: Fragment
   ref: %s shader compilation failed.
*/
void Geometry(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8b70ULL || rel >= 0x4c8e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8e60 size=2464 callers=1 calls=14
   calls: Geometry, sub_270, sub_2c0, sub_2d0, sub_478f70, sub_4793d0, sub_4c0bb0, sub_4c0bd0, sub_4c0bf0, sub_4c0f00, sub_4c0f90, sub_4c1980
   ... +2 more
   ref: Link failed
   ref: -D__GLSLC_VER_MINOR=20
   ref: Input SPIR-V module is not valid.
   ref: -D__GLSLC_VER_BUILD=65
   ref: -D__GLSLC_VER_REVISION=0
   ref: Invalid option for uninitialized variable warning level.
   ref: -warnuninit
   ref: Could not allocate internal memory for XFB varying data.
*/
void binding_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8e60ULL || rel >= 0x4c9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9800 size=672 callers=1 calls=2
   calls: sub_270, sub_2d0
   ref: Error allocating internal memory
*/
void Error_allocating_internal_memory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9800ULL || rel >= 0x4c9aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9aa0 size=80 callers=4 calls=0
*/
void sub_4c9aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9aa0ULL || rel >= 0x4c9af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9af0 size=112 callers=1 calls=2
   calls: sub_4ce1d0, sub_4ce210
*/
void sub_4c9af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9af0ULL || rel >= 0x4c9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9b60 size=80 callers=1 calls=1
   calls: sub_4ce1d0
*/
void sub_4c9b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9b60ULL || rel >= 0x4c9bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9bb0 size=288 callers=2 calls=1
   calls: sub_4c9bb0
*/
void sub_4c9bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9bb0ULL || rel >= 0x4c9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9cd0 size=496 callers=1 calls=1
   calls: sub_270
*/
void sub_4c9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9cd0ULL || rel >= 0x4c9ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9ec0 size=320 callers=1 calls=1
   calls: sub_270
*/
void sub_4c9ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9ec0ULL || rel >= 0x4ca000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca000 size=560 callers=1 calls=2
   calls: sub_270, sub_4c53a0
   ref: Error allocating internal memory.
   ref: #include "%s"
*/
void include_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca000ULL || rel >= 0x4ca230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca230 size=256 callers=0 calls=2
   calls: Can_t_have_duplicate_stages_in_the_input_GLSL_source_str, Maximum_number_of_include_paths_is_d
*/
void sub_4ca230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca230ULL || rel >= 0x4ca330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca330 size=944 callers=2 calls=8
   calls: Invalid_option_for_debug_level, sub_270, sub_2c0, sub_4c2980, sub_4c53a0, sub_4c9af0, sub_4cc8b0, sub_620
   ref: Internal override not supported in this build.
   ref: Maximum number of #include paths is %d
   ref: Assembly output (using option "outputAssembly" is not supported with multi-threaded compilations (us
   ref: There are more input programs than available program stages (only %d program stages available)
   ref: Invalid option value for spillControl.
*/
void Maximum_number_of_include_paths_is_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca330ULL || rel >= 0x4ca6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca6e0 size=624 callers=2 calls=5
   calls: Error_allocating_internal_memory_for_string_pool, binding_7, include_s, sub_2c0, sub_4c53a0
   ref: Can't have duplicate stages in the input GLSL source strings.
*/
void Can_t_have_duplicate_stages_in_the_input_GLSL_source_str(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca6e0ULL || rel >= 0x4ca950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca950 size=800 callers=0 calls=4
   calls: Shader_uses_scratch_memory, sub_270, sub_2c0, sub_4c53a0
   ref: Compile object data incomplete, can not compile specialized code.
   ref: Failed to compile from intermediate form.
*/
void Failed_to_compile_from_intermediate_form(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca950ULL || rel >= 0x4cac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cac70 size=6720 callers=3 calls=22
   calls: Error_allocating_internal_memory, Error_allocating_memory, Error_allocating_memory_for_debug_data, Error_storing_GPU_machine_code, sub_270, sub_2c0, sub_478080, sub_4bfdf0, sub_4bfe00, sub_4bfed0, sub_4c0640, sub_4c07e0
   ... +10 more
   ref: Warning: Potentially failed to specialize a uniform array from UBO %s.
   ref: Error specializing uniform %s.
   ref: Error compiling machine code.
   ref: Unnamed uniform used in specialization entry.
   ref: Warning: Performance statistics is not supported with shader subroutines.  No performance statistics
   ref: Error allocating internal memory.
   ref: Passing in more than "1" for the number of elements is only valid for arrays.  %d passed in for sing
   ref: Uniform array %s has %d uniforms, but %d specified
*/
void Shader_uses_scratch_memory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cac70ULL || rel >= 0x4cc6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc6b0 size=320 callers=0 calls=5
   calls: sub_270, sub_2c0, sub_4c4ab0, sub_620, sub_630
*/
void sub_4cc6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc6b0ULL || rel >= 0x4cc7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc7f0 size=192 callers=0 calls=1
   calls: sub_4cc8b0
*/
void sub_4cc7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc7f0ULL || rel >= 0x4cc8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc8b0 size=624 callers=2 calls=5
   calls: sub_2c0, sub_4c0f90, sub_4c29a0, sub_4c9b60, sub_630
*/
void sub_4cc8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc8b0ULL || rel >= 0x4ccb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccb20 size=288 callers=0 calls=3
   calls: Can_t_have_duplicate_stages_in_the_input_GLSL_source_str, Maximum_number_of_include_paths_is_d, Shader_uses_scratch_memory
*/
void sub_4ccb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccb20ULL || rel >= 0x4ccc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccc40 size=48 callers=0 calls=0
*/
void sub_4ccc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccc40ULL || rel >= 0x4ccc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccc70 size=176 callers=0 calls=0
*/
void sub_4ccc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccc70ULL || rel >= 0x4ccd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccd20 size=32 callers=0 calls=0
*/
void sub_4ccd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccd20ULL || rel >= 0x4ccd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccd40 size=32 callers=0 calls=0
*/
void sub_4ccd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccd40ULL || rel >= 0x4ccd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccd60 size=32 callers=0 calls=0
*/
void sub_4ccd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccd60ULL || rel >= 0x4ccd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccd80 size=32 callers=0 calls=0
*/
void sub_4ccd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccd80ULL || rel >= 0x4ccda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccda0 size=16 callers=0 calls=0
*/
void sub_4ccda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccda0ULL || rel >= 0x4ccdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccdb0 size=416 callers=0 calls=5
   calls: sub_270, sub_2c0, sub_2e0, sub_560, sub_600
   ref: %s/%08x%08x.glslcoutput
*/
void f_08x_08x_glslcoutput(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccdb0ULL || rel >= 0x4ccf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccf50 size=608 callers=0 calls=6
   calls: Shader_uses_scratch_memory, sub_270, sub_2c0, sub_4c53a0, sub_4ce1d0, sub_4ce210
   ref: Failed to compile all specialization entries from intermediate form.
*/
void Failed_to_compile_all_specialization_entries_from_interm(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccf50ULL || rel >= 0x4cd1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd1b0 size=176 callers=0 calls=1
   calls: sub_2c0
*/
void sub_4cd1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd1b0ULL || rel >= 0x4cd260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd260 size=592 callers=0 calls=1
   calls: sub_4cd4b0
*/
void sub_4cd260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd260ULL || rel >= 0x4cd4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd4b0 size=448 callers=2 calls=1
   calls: sub_270
*/
void sub_4cd4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd4b0ULL || rel >= 0x4cd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd670 size=80 callers=0 calls=0
*/
void sub_4cd670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd670ULL || rel >= 0x4cd6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd6c0 size=64 callers=0 calls=0
*/
void sub_4cd6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd6c0ULL || rel >= 0x4cd700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd700 size=240 callers=1 calls=0
*/
void sub_4cd700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd700ULL || rel >= 0x4cd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd7f0 size=16 callers=0 calls=0
*/
void sub_4cd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd7f0ULL || rel >= 0x4cd800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd800 size=16 callers=0 calls=0
*/
void sub_4cd800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd800ULL || rel >= 0x4cd810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd810 size=16 callers=0 calls=0
*/
void sub_4cd810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd810ULL || rel >= 0x4cd820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd820 size=16 callers=0 calls=0
*/
void sub_4cd820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd820ULL || rel >= 0x4cd830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd830 size=16 callers=0 calls=0
*/
void sub_4cd830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd830ULL || rel >= 0x4cd840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd840 size=16 callers=0 calls=0
*/
void sub_4cd840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd840ULL || rel >= 0x4cd850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd850 size=16 callers=0 calls=0
*/
void sub_4cd850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd850ULL || rel >= 0x4cd860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd860 size=16 callers=0 calls=0
*/
void sub_4cd860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd860ULL || rel >= 0x4cd870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd870 size=16 callers=0 calls=0
*/
void sub_4cd870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd870ULL || rel >= 0x4cd880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd880 size=16 callers=0 calls=0
*/
void sub_4cd880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd880ULL || rel >= 0x4cd890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd890 size=16 callers=0 calls=0
*/
void sub_4cd890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd890ULL || rel >= 0x4cd8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd8a0 size=16 callers=0 calls=0
*/
void sub_4cd8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd8a0ULL || rel >= 0x4cd8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd8b0 size=16 callers=0 calls=0
*/
void sub_4cd8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd8b0ULL || rel >= 0x4cd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd8c0 size=16 callers=0 calls=0
*/
void sub_4cd8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd8c0ULL || rel >= 0x4cd8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd8d0 size=16 callers=0 calls=0
*/
void sub_4cd8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd8d0ULL || rel >= 0x4cd8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd8e0 size=16 callers=0 calls=0
*/
void sub_4cd8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd8e0ULL || rel >= 0x4cd8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd8f0 size=16 callers=0 calls=0
*/
void sub_4cd8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd8f0ULL || rel >= 0x4cd900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd900 size=16 callers=0 calls=0
*/
void sub_4cd900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd900ULL || rel >= 0x4cd910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd910 size=16 callers=0 calls=0
*/
void sub_4cd910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd910ULL || rel >= 0x4cd920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd920 size=16 callers=0 calls=0
*/
void sub_4cd920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd920ULL || rel >= 0x4cd930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd930 size=16 callers=0 calls=0
*/
void sub_4cd930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd930ULL || rel >= 0x4cd940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd940 size=16 callers=0 calls=0
*/
void sub_4cd940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd940ULL || rel >= 0x4cd950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd950 size=16 callers=0 calls=0
*/
void sub_4cd950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd950ULL || rel >= 0x4cd960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd960 size=16 callers=0 calls=0
*/
void sub_4cd960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd960ULL || rel >= 0x4cd970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd970 size=16 callers=0 calls=0
*/
void sub_4cd970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd970ULL || rel >= 0x4cd980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd980 size=16 callers=0 calls=0
*/
void sub_4cd980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd980ULL || rel >= 0x4cd990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd990 size=16 callers=0 calls=0
*/
void sub_4cd990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd990ULL || rel >= 0x4cd9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd9a0 size=16 callers=0 calls=0
*/
void sub_4cd9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd9a0ULL || rel >= 0x4cd9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd9b0 size=16 callers=0 calls=0
*/
void sub_4cd9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd9b0ULL || rel >= 0x4cd9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd9c0 size=16 callers=0 calls=0
*/
void sub_4cd9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd9c0ULL || rel >= 0x4cd9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd9d0 size=16 callers=0 calls=0
*/
void sub_4cd9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd9d0ULL || rel >= 0x4cd9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd9e0 size=32 callers=0 calls=0
*/
void sub_4cd9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd9e0ULL || rel >= 0x4cda00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cda00 size=32 callers=0 calls=0
*/
void sub_4cda00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cda00ULL || rel >= 0x4cda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cda20 size=32 callers=0 calls=0
*/
void sub_4cda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cda20ULL || rel >= 0x4cda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cda40 size=16 callers=0 calls=0
*/
void sub_4cda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cda40ULL || rel >= 0x4cda50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cda50 size=16 callers=0 calls=0
*/
void sub_4cda50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cda50ULL || rel >= 0x4cda60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cda60 size=16 callers=0 calls=0
*/
void sub_4cda60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cda60ULL || rel >= 0x4cda70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cda70 size=16 callers=0 calls=0
*/
void sub_4cda70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cda70ULL || rel >= 0x4cda80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cda80 size=16 callers=0 calls=0
*/
void sub_4cda80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cda80ULL || rel >= 0x4cda90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cda90 size=16 callers=0 calls=0
*/
void sub_4cda90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cda90ULL || rel >= 0x4cdaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdaa0 size=16 callers=0 calls=0
*/
void sub_4cdaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdaa0ULL || rel >= 0x4cdab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdab0 size=16 callers=0 calls=0
*/
void sub_4cdab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdab0ULL || rel >= 0x4cdac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdac0 size=16 callers=0 calls=0
*/
void sub_4cdac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdac0ULL || rel >= 0x4cdad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdad0 size=16 callers=0 calls=0
*/
void sub_4cdad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdad0ULL || rel >= 0x4cdae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdae0 size=16 callers=0 calls=0
*/
void sub_4cdae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdae0ULL || rel >= 0x4cdaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdaf0 size=16 callers=0 calls=0
*/
void sub_4cdaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdaf0ULL || rel >= 0x4cdb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdb00 size=16 callers=0 calls=0
*/
void sub_4cdb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdb00ULL || rel >= 0x4cdb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdb10 size=16 callers=0 calls=0
*/
void sub_4cdb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdb10ULL || rel >= 0x4cdb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdb20 size=16 callers=0 calls=0
*/
void sub_4cdb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdb20ULL || rel >= 0x4cdb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdb30 size=16 callers=0 calls=0
*/
void sub_4cdb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdb30ULL || rel >= 0x4cdb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdb40 size=16 callers=0 calls=0
*/
void sub_4cdb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdb40ULL || rel >= 0x4cdb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdb50 size=16 callers=0 calls=0
*/
void sub_4cdb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdb50ULL || rel >= 0x4cdb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdb60 size=16 callers=0 calls=0
*/
void sub_4cdb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdb60ULL || rel >= 0x4cdb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdb70 size=16 callers=0 calls=0
*/
void sub_4cdb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdb70ULL || rel >= 0x4cdb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdb80 size=16 callers=0 calls=0
*/
void sub_4cdb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdb80ULL || rel >= 0x4cdb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdb90 size=16 callers=0 calls=0
*/
void sub_4cdb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdb90ULL || rel >= 0x4cdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdba0 size=16 callers=0 calls=0
*/
void sub_4cdba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdba0ULL || rel >= 0x4cdbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdbb0 size=16 callers=0 calls=0
*/
void sub_4cdbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdbb0ULL || rel >= 0x4cdbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdbc0 size=16 callers=0 calls=0
*/
void sub_4cdbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdbc0ULL || rel >= 0x4cdbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdbd0 size=16 callers=0 calls=0
*/
void sub_4cdbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdbd0ULL || rel >= 0x4cdbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdbe0 size=16 callers=0 calls=0
*/
void sub_4cdbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdbe0ULL || rel >= 0x4cdbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdbf0 size=16 callers=0 calls=0
*/
void sub_4cdbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdbf0ULL || rel >= 0x4cdc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdc00 size=16 callers=0 calls=0
*/
void sub_4cdc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdc00ULL || rel >= 0x4cdc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdc10 size=16 callers=0 calls=0
*/
void sub_4cdc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdc10ULL || rel >= 0x4cdc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdc20 size=16 callers=0 calls=0
*/
void sub_4cdc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdc20ULL || rel >= 0x4cdc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdc30 size=16 callers=0 calls=0
*/
void sub_4cdc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdc30ULL || rel >= 0x4cdc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdc40 size=16 callers=0 calls=0
*/
void sub_4cdc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdc40ULL || rel >= 0x4cdc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdc50 size=16 callers=0 calls=0
*/
void sub_4cdc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdc50ULL || rel >= 0x4cdc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdc60 size=16 callers=0 calls=0
*/
void sub_4cdc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdc60ULL || rel >= 0x4cdc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdc70 size=16 callers=0 calls=0
*/
void sub_4cdc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdc70ULL || rel >= 0x4cdc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdc80 size=16 callers=0 calls=0
*/
void sub_4cdc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdc80ULL || rel >= 0x4cdc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdc90 size=16 callers=0 calls=0
*/
void sub_4cdc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdc90ULL || rel >= 0x4cdca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdca0 size=16 callers=0 calls=0
*/
void sub_4cdca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdca0ULL || rel >= 0x4cdcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdcb0 size=16 callers=0 calls=0
*/
void sub_4cdcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdcb0ULL || rel >= 0x4cdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdcc0 size=16 callers=0 calls=0
*/
void sub_4cdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdcc0ULL || rel >= 0x4cdcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdcd0 size=16 callers=0 calls=0
*/
void sub_4cdcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdcd0ULL || rel >= 0x4cdce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdce0 size=16 callers=0 calls=0
*/
void sub_4cdce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdce0ULL || rel >= 0x4cdcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdcf0 size=16 callers=0 calls=0
*/
void sub_4cdcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdcf0ULL || rel >= 0x4cdd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdd00 size=16 callers=0 calls=0
*/
void sub_4cdd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdd00ULL || rel >= 0x4cdd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdd10 size=16 callers=0 calls=0
*/
void sub_4cdd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdd10ULL || rel >= 0x4cdd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdd20 size=16 callers=0 calls=0
*/
void sub_4cdd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdd20ULL || rel >= 0x4cdd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdd30 size=16 callers=0 calls=0
*/
void sub_4cdd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdd30ULL || rel >= 0x4cdd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdd40 size=16 callers=0 calls=0
*/
void sub_4cdd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdd40ULL || rel >= 0x4cdd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdd50 size=16 callers=0 calls=0
*/
void sub_4cdd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdd50ULL || rel >= 0x4cdd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdd60 size=16 callers=0 calls=0
*/
void sub_4cdd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdd60ULL || rel >= 0x4cdd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdd70 size=16 callers=0 calls=0
*/
void sub_4cdd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdd70ULL || rel >= 0x4cdd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdd80 size=16 callers=0 calls=0
*/
void sub_4cdd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdd80ULL || rel >= 0x4cdd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdd90 size=16 callers=0 calls=0
*/
void sub_4cdd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdd90ULL || rel >= 0x4cdda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdda0 size=16 callers=0 calls=0
*/
void sub_4cdda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdda0ULL || rel >= 0x4cddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cddb0 size=16 callers=0 calls=0
*/
void sub_4cddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cddb0ULL || rel >= 0x4cddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cddc0 size=16 callers=0 calls=0
*/
void sub_4cddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cddc0ULL || rel >= 0x4cddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cddd0 size=16 callers=0 calls=0
*/
void sub_4cddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cddd0ULL || rel >= 0x4cdde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdde0 size=16 callers=0 calls=0
*/
void sub_4cdde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdde0ULL || rel >= 0x4cddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cddf0 size=16 callers=0 calls=0
*/
void sub_4cddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cddf0ULL || rel >= 0x4cde00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cde00 size=16 callers=0 calls=0
*/
void sub_4cde00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cde00ULL || rel >= 0x4cde10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cde10 size=16 callers=0 calls=0
*/
void sub_4cde10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cde10ULL || rel >= 0x4cde20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cde20 size=16 callers=0 calls=0
*/
void sub_4cde20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cde20ULL || rel >= 0x4cde30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cde30 size=16 callers=0 calls=0
*/
void sub_4cde30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cde30ULL || rel >= 0x4cde40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cde40 size=16 callers=0 calls=0
*/
void sub_4cde40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cde40ULL || rel >= 0x4cde50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cde50 size=16 callers=0 calls=0
*/
void sub_4cde50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cde50ULL || rel >= 0x4cde60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cde60 size=16 callers=0 calls=0
*/
void sub_4cde60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cde60ULL || rel >= 0x4cde70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cde70 size=16 callers=0 calls=0
*/
void sub_4cde70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cde70ULL || rel >= 0x4cde80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cde80 size=16 callers=0 calls=0
*/
void sub_4cde80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cde80ULL || rel >= 0x4cde90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cde90 size=16 callers=0 calls=0
*/
void sub_4cde90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cde90ULL || rel >= 0x4cdea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdea0 size=16 callers=0 calls=0
*/
void sub_4cdea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdea0ULL || rel >= 0x4cdeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdeb0 size=16 callers=0 calls=0
*/
void sub_4cdeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdeb0ULL || rel >= 0x4cdec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdec0 size=16 callers=0 calls=0
*/
void sub_4cdec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdec0ULL || rel >= 0x4cded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cded0 size=16 callers=0 calls=0
*/
void sub_4cded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cded0ULL || rel >= 0x4cdee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdee0 size=16 callers=0 calls=0
*/
void sub_4cdee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdee0ULL || rel >= 0x4cdef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdef0 size=16 callers=0 calls=0
*/
void sub_4cdef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdef0ULL || rel >= 0x4cdf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdf00 size=16 callers=0 calls=0
*/
void sub_4cdf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdf00ULL || rel >= 0x4cdf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdf10 size=16 callers=0 calls=0
*/
void sub_4cdf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdf10ULL || rel >= 0x4cdf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdf20 size=16 callers=0 calls=0
*/
void sub_4cdf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdf20ULL || rel >= 0x4cdf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdf30 size=16 callers=0 calls=0
*/
void sub_4cdf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdf30ULL || rel >= 0x4cdf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdf40 size=16 callers=0 calls=0
*/
void sub_4cdf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdf40ULL || rel >= 0x4cdf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdf50 size=16 callers=0 calls=0
*/
void sub_4cdf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdf50ULL || rel >= 0x4cdf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdf60 size=16 callers=0 calls=0
*/
void sub_4cdf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdf60ULL || rel >= 0x4cdf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdf70 size=16 callers=0 calls=0
*/
void sub_4cdf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdf70ULL || rel >= 0x4cdf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdf80 size=16 callers=0 calls=0
*/
void sub_4cdf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdf80ULL || rel >= 0x4cdf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdf90 size=16 callers=0 calls=0
*/
void sub_4cdf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdf90ULL || rel >= 0x4cdfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdfa0 size=16 callers=0 calls=0
*/
void sub_4cdfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdfa0ULL || rel >= 0x4cdfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdfb0 size=16 callers=0 calls=0
*/
void sub_4cdfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdfb0ULL || rel >= 0x4cdfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdfc0 size=16 callers=0 calls=0
*/
void sub_4cdfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdfc0ULL || rel >= 0x4cdfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdfd0 size=16 callers=0 calls=0
*/
void sub_4cdfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdfd0ULL || rel >= 0x4cdfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdfe0 size=16 callers=0 calls=0
*/
void sub_4cdfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdfe0ULL || rel >= 0x4cdff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cdff0 size=16 callers=0 calls=0
*/
void sub_4cdff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cdff0ULL || rel >= 0x4ce000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce000 size=16 callers=0 calls=0
*/
void sub_4ce000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce000ULL || rel >= 0x4ce010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce010 size=16 callers=0 calls=0
*/
void sub_4ce010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce010ULL || rel >= 0x4ce020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce020 size=16 callers=0 calls=0
*/
void sub_4ce020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce020ULL || rel >= 0x4ce030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce030 size=16 callers=0 calls=0
*/
void sub_4ce030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce030ULL || rel >= 0x4ce040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce040 size=16 callers=0 calls=0
*/
void sub_4ce040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce040ULL || rel >= 0x4ce050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce050 size=16 callers=0 calls=0
*/
void sub_4ce050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce050ULL || rel >= 0x4ce060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce060 size=16 callers=0 calls=0
*/
void sub_4ce060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce060ULL || rel >= 0x4ce070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce070 size=32 callers=0 calls=0
*/
void sub_4ce070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce070ULL || rel >= 0x4ce090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce090 size=48 callers=0 calls=0
*/
void sub_4ce090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce090ULL || rel >= 0x4ce0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce0c0 size=16 callers=0 calls=0
*/
void sub_4ce0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce0c0ULL || rel >= 0x4ce0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce0d0 size=16 callers=0 calls=0
*/
void sub_4ce0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce0d0ULL || rel >= 0x4ce0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce0e0 size=16 callers=0 calls=0
*/
void sub_4ce0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce0e0ULL || rel >= 0x4ce0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce0f0 size=16 callers=0 calls=0
*/
void sub_4ce0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce0f0ULL || rel >= 0x4ce100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce100 size=16 callers=0 calls=0
*/
void sub_4ce100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce100ULL || rel >= 0x4ce110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce110 size=16 callers=0 calls=0
*/
void sub_4ce110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce110ULL || rel >= 0x4ce120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce120 size=16 callers=0 calls=0
*/
void sub_4ce120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce120ULL || rel >= 0x4ce130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce130 size=16 callers=0 calls=0
*/
void sub_4ce130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce130ULL || rel >= 0x4ce140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce140 size=16 callers=0 calls=0
*/
void sub_4ce140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce140ULL || rel >= 0x4ce150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce150 size=16 callers=0 calls=0
*/
void sub_4ce150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce150ULL || rel >= 0x4ce160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce160 size=16 callers=0 calls=0
*/
void sub_4ce160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce160ULL || rel >= 0x4ce170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce170 size=16 callers=0 calls=0
*/
void sub_4ce170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce170ULL || rel >= 0x4ce180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce180 size=16 callers=0 calls=0
*/
void sub_4ce180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce180ULL || rel >= 0x4ce190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce190 size=16 callers=0 calls=0
*/
void sub_4ce190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce190ULL || rel >= 0x4ce1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce1a0 size=16 callers=0 calls=0
*/
void sub_4ce1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce1a0ULL || rel >= 0x4ce1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce1b0 size=16 callers=0 calls=0
*/
void sub_4ce1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce1b0ULL || rel >= 0x4ce1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce1c0 size=16 callers=0 calls=0
*/
void sub_4ce1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce1c0ULL || rel >= 0x4ce1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce1d0 size=64 callers=9 calls=0
*/
void sub_4ce1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce1d0ULL || rel >= 0x4ce210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce210 size=32 callers=9 calls=0
*/
void sub_4ce210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce210ULL || rel >= 0x4ce230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce230 size=32 callers=6 calls=0
*/
void sub_4ce230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce230ULL || rel >= 0x4ce250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce250 size=2864 callers=1 calls=8
   calls: sub_270, sub_2c0, sub_483f40, sub_48e5a0, sub_4c43c0, sub_4ced80, sub_4cf030, sub_4cf320
*/
void sub_4ce250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce250ULL || rel >= 0x4ced80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ced80 size=688 callers=1 calls=1
   calls: sub_270
*/
void sub_4ced80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ced80ULL || rel >= 0x4cf030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf030 size=752 callers=1 calls=2
   calls: prioritizeConsecutiveTextureInstructions, sub_270
*/
void sub_4cf030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf030ULL || rel >= 0x4cf320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf320 size=528 callers=1 calls=1
   calls: sub_4cf530
*/
void sub_4cf320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf320ULL || rel >= 0x4cf530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf530 size=1792 callers=1 calls=0
*/
void sub_4cf530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf530ULL || rel >= 0x4cfc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

