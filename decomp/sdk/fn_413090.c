/* sdk functions 00413090..00431890 (45 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00413090 size=16 callers=0 calls=0
*/
void sub_413090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413090ULL || rel >= 0x4130a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004130a0 size=16 callers=0 calls=0
*/
void sub_4130a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4130a0ULL || rel >= 0x4130b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004130b0 size=16 callers=0 calls=0
*/
void sub_4130b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4130b0ULL || rel >= 0x4130c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004130c0 size=16 callers=0 calls=0
*/
void sub_4130c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4130c0ULL || rel >= 0x4130d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004130d0 size=16 callers=0 calls=0
*/
void sub_4130d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4130d0ULL || rel >= 0x4130e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004130e0 size=16 callers=0 calls=0
*/
void sub_4130e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4130e0ULL || rel >= 0x4130f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004130f0 size=32 callers=0 calls=1
   calls: sub_410af0
*/
void sub_4130f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4130f0ULL || rel >= 0x413110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413110 size=16 callers=0 calls=0
*/
void sub_413110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413110ULL || rel >= 0x413120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413120 size=1296 callers=0 calls=20
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_2, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_3, sub_4026d0, sub_402740, sub_402750, sub_40bbd0, sub_4106e0, sub_410910, sub_410ac0, sub_412d10, sub_413630, sub_4137a0
   ... +8 more
*/
void sub_413120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413120ULL || rel >= 0x413630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413630 size=368 callers=3 calls=6
   calls: sub_402730, sub_40bc00, sub_40e8b0, sub_410c70, sub_416430, sub_441050
*/
void sub_413630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413630ULL || rel >= 0x4137a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004137a0 size=224 callers=2 calls=7
   calls: sub_40e5f0, sub_40e600, sub_40e620, sub_40e6d0, sub_40e720, sub_440fe0, sub_441050
*/
void sub_4137a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4137a0ULL || rel >= 0x413880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413880 size=224 callers=2 calls=3
   calls: sub_402a50, sub_40be70, sub_414d70
*/
void sub_413880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413880ULL || rel >= 0x413960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413960 size=368 callers=0 calls=4
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_2, sub_402a50, sub_4104f0, sub_413ce0
*/
void sub_413960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413960ULL || rel >= 0x413ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413ad0 size=336 callers=1 calls=0
*/
void sub_413ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413ad0ULL || rel >= 0x413c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413c20 size=192 callers=2 calls=4
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_4144b0, sub_430900, sub_433c50
*/
void sub_413c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413c20ULL || rel >= 0x413ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413ce0 size=720 callers=6 calls=9
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_2, sub_402a50, sub_40bc40, sub_40cef0, sub_4104f0, sub_413880, sub_413c20, sub_4144b0, sub_42c6f0
*/
void sub_413ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413ce0ULL || rel >= 0x413fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00413fb0 size=96 callers=1 calls=0
*/
void sub_413fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x413fb0ULL || rel >= 0x414010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414010 size=160 callers=0 calls=6
   calls: sub_413630, sub_413ce0, sub_4163d0, sub_416430, sub_4167c0, sub_4167d0
*/
void sub_414010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414010ULL || rel >= 0x4140b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004140b0 size=112 callers=1 calls=5
   calls: sub_413ce0, sub_4163d0, sub_416430, sub_4167c0, sub_4167d0
*/
void sub_4140b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4140b0ULL || rel >= 0x414120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414120 size=96 callers=2 calls=1
   calls: sub_414180
*/
void sub_414120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414120ULL || rel >= 0x414180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414180 size=304 callers=1 calls=0
*/
void sub_414180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414180ULL || rel >= 0x4142b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004142b0 size=176 callers=1 calls=6
   calls: sub_413630, sub_413ce0, sub_4163d0, sub_416430, sub_4167c0, sub_4167d0
*/
void sub_4142b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4142b0ULL || rel >= 0x414360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414360 size=16 callers=0 calls=0
*/
void sub_414360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414360ULL || rel >= 0x414370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414370 size=16 callers=6 calls=0
*/
void sub_414370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414370ULL || rel >= 0x414380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414380 size=304 callers=3 calls=3
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_2, sub_4104f0, sub_4144b0
*/
void sub_414380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414380ULL || rel >= 0x4144b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004144b0 size=336 callers=12 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_4144b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4144b0ULL || rel >= 0x414600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414600 size=688 callers=2 calls=17
   calls: sub_414380, sub_4167c0, sub_416b70, sub_4264f0, sub_426780, sub_428310, sub_428330, sub_428350, sub_428370, sub_428390, sub_4283b0, sub_4284c0
   ... +5 more
*/
void sub_414600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414600ULL || rel >= 0x4148b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004148b0 size=720 callers=1 calls=17
   calls: sub_414380, sub_4167c0, sub_416b70, sub_4264f0, sub_426780, sub_428310, sub_428330, sub_428350, sub_428370, sub_428390, sub_4283b0, sub_4284c0
   ... +5 more
*/
void sub_4148b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4148b0ULL || rel >= 0x414b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414b80 size=112 callers=0 calls=2
   calls: sub_414380, sub_4148b0
*/
void sub_414b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414b80ULL || rel >= 0x414bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414bf0 size=16 callers=1 calls=0
*/
void sub_414bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414bf0ULL || rel >= 0x414c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414c00 size=32 callers=0 calls=0
*/
void sub_414c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414c00ULL || rel >= 0x414c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414c20 size=64 callers=0 calls=0
*/
void sub_414c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414c20ULL || rel >= 0x414c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414c60 size=16 callers=0 calls=0
*/
void sub_414c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414c60ULL || rel >= 0x414c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414c70 size=16 callers=0 calls=0
*/
void sub_414c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414c70ULL || rel >= 0x414c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414c80 size=16 callers=0 calls=0
*/
void sub_414c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414c80ULL || rel >= 0x414c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414c90 size=32 callers=0 calls=0
*/
void sub_414c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414c90ULL || rel >= 0x414cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414cb0 size=64 callers=0 calls=1
   calls: sub_40bc00
*/
void sub_414cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414cb0ULL || rel >= 0x414cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414cf0 size=64 callers=0 calls=1
   calls: sub_402a50
*/
void sub_414cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414cf0ULL || rel >= 0x414d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414d30 size=16 callers=0 calls=0
*/
void sub_414d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414d30ULL || rel >= 0x414d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414d40 size=16 callers=0 calls=0
*/
void sub_414d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414d40ULL || rel >= 0x414d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414d50 size=16 callers=0 calls=0
*/
void sub_414d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414d50ULL || rel >= 0x414d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414d60 size=16 callers=0 calls=0
*/
void sub_414d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414d60ULL || rel >= 0x414d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414d70 size=224 callers=3 calls=1
   calls: sub_414d70
*/
void sub_414d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414d70ULL || rel >= 0x414e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414e50 size=16 callers=0 calls=0
*/
void sub_414e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414e50ULL || rel >= 0x414e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414e60 size=64 callers=0 calls=0
*/
void sub_414e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414e60ULL || rel >= 0x414ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414ea0 size=16 callers=0 calls=0
*/
void sub_414ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414ea0ULL || rel >= 0x414eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414eb0 size=16 callers=0 calls=0
*/
void sub_414eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414eb0ULL || rel >= 0x414ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414ec0 size=16 callers=0 calls=0
*/
void sub_414ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414ec0ULL || rel >= 0x414ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414ed0 size=16 callers=0 calls=0
*/
void sub_414ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414ed0ULL || rel >= 0x414ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414ee0 size=16 callers=0 calls=0
*/
void sub_414ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414ee0ULL || rel >= 0x414ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414ef0 size=48 callers=0 calls=0
*/
void sub_414ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414ef0ULL || rel >= 0x414f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414f20 size=48 callers=0 calls=0
*/
void sub_414f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414f20ULL || rel >= 0x414f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414f50 size=48 callers=0 calls=0
*/
void sub_414f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414f50ULL || rel >= 0x414f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414f80 size=16 callers=0 calls=0
*/
void sub_414f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414f80ULL || rel >= 0x414f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414f90 size=16 callers=0 calls=0
*/
void sub_414f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414f90ULL || rel >= 0x414fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414fa0 size=16 callers=0 calls=0
*/
void sub_414fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414fa0ULL || rel >= 0x414fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414fb0 size=16 callers=0 calls=0
*/
void sub_414fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414fb0ULL || rel >= 0x414fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414fc0 size=32 callers=0 calls=0
*/
void sub_414fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414fc0ULL || rel >= 0x414fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00414fe0 size=32 callers=0 calls=0
*/
void sub_414fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x414fe0ULL || rel >= 0x415000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415000 size=32 callers=0 calls=0
*/
void sub_415000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415000ULL || rel >= 0x415020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415020 size=16 callers=0 calls=0
*/
void sub_415020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415020ULL || rel >= 0x415030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415030 size=32 callers=0 calls=0
*/
void sub_415030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415030ULL || rel >= 0x415050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415050 size=48 callers=0 calls=0
*/
void sub_415050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415050ULL || rel >= 0x415080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415080 size=48 callers=0 calls=0
*/
void sub_415080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415080ULL || rel >= 0x4150b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004150b0 size=48 callers=0 calls=0
*/
void sub_4150b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4150b0ULL || rel >= 0x4150e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004150e0 size=16 callers=0 calls=0
*/
void sub_4150e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4150e0ULL || rel >= 0x4150f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004150f0 size=16 callers=0 calls=0
*/
void sub_4150f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4150f0ULL || rel >= 0x415100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415100 size=16 callers=0 calls=0
*/
void sub_415100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415100ULL || rel >= 0x415110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415110 size=64 callers=0 calls=0
*/
void sub_415110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415110ULL || rel >= 0x415150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415150 size=16 callers=0 calls=0
*/
void sub_415150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415150ULL || rel >= 0x415160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415160 size=32 callers=0 calls=0
*/
void sub_415160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415160ULL || rel >= 0x415180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415180 size=32 callers=0 calls=0
*/
void sub_415180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415180ULL || rel >= 0x4151a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004151a0 size=32 callers=0 calls=0
*/
void sub_4151a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4151a0ULL || rel >= 0x4151c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004151c0 size=16 callers=0 calls=0
*/
void sub_4151c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4151c0ULL || rel >= 0x4151d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004151d0 size=32 callers=0 calls=0
*/
void sub_4151d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4151d0ULL || rel >= 0x4151f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004151f0 size=48 callers=0 calls=0
*/
void sub_4151f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4151f0ULL || rel >= 0x415220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415220 size=48 callers=0 calls=0
*/
void sub_415220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415220ULL || rel >= 0x415250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415250 size=48 callers=0 calls=0
*/
void sub_415250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415250ULL || rel >= 0x415280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415280 size=16 callers=0 calls=0
*/
void sub_415280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415280ULL || rel >= 0x415290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415290 size=16 callers=0 calls=0
*/
void sub_415290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415290ULL || rel >= 0x4152a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004152a0 size=544 callers=0 calls=1
   calls: sub_432720
*/
void sub_4152a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4152a0ULL || rel >= 0x4154c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004154c0 size=192 callers=0 calls=1
   calls: sub_432720
*/
void sub_4154c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4154c0ULL || rel >= 0x415580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415580 size=16 callers=0 calls=0
*/
void sub_415580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415580ULL || rel >= 0x415590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415590 size=208 callers=0 calls=1
   calls: sub_432720
*/
void sub_415590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415590ULL || rel >= 0x415660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415660 size=16 callers=0 calls=0
*/
void sub_415660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415660ULL || rel >= 0x415670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415670 size=16 callers=0 calls=0
*/
void sub_415670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415670ULL || rel >= 0x415680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415680 size=16 callers=0 calls=0
*/
void sub_415680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415680ULL || rel >= 0x415690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415690 size=272 callers=0 calls=0
*/
void sub_415690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415690ULL || rel >= 0x4157a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004157a0 size=16 callers=0 calls=0
*/
void sub_4157a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4157a0ULL || rel >= 0x4157b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004157b0 size=32 callers=0 calls=0
*/
void sub_4157b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4157b0ULL || rel >= 0x4157d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004157d0 size=32 callers=0 calls=0
*/
void sub_4157d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4157d0ULL || rel >= 0x4157f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004157f0 size=64 callers=0 calls=0
*/
void sub_4157f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4157f0ULL || rel >= 0x415830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415830 size=48 callers=0 calls=0
*/
void sub_415830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415830ULL || rel >= 0x415860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415860 size=32 callers=0 calls=0
*/
void sub_415860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415860ULL || rel >= 0x415880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415880 size=32 callers=0 calls=0
*/
void sub_415880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415880ULL || rel >= 0x4158a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004158a0 size=32 callers=0 calls=0
*/
void sub_4158a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4158a0ULL || rel >= 0x4158c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004158c0 size=32 callers=0 calls=0
*/
void sub_4158c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4158c0ULL || rel >= 0x4158e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004158e0 size=16 callers=0 calls=0
*/
void sub_4158e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4158e0ULL || rel >= 0x4158f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004158f0 size=64 callers=0 calls=0
*/
void sub_4158f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4158f0ULL || rel >= 0x415930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415930 size=32 callers=0 calls=0
*/
void sub_415930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415930ULL || rel >= 0x415950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415950 size=16 callers=0 calls=0
*/
void sub_415950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415950ULL || rel >= 0x415960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415960 size=16 callers=0 calls=0
*/
void sub_415960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415960ULL || rel >= 0x415970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415970 size=16 callers=0 calls=0
*/
void sub_415970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415970ULL || rel >= 0x415980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415980 size=16 callers=0 calls=0
*/
void sub_415980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415980ULL || rel >= 0x415990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415990 size=16 callers=0 calls=0
*/
void sub_415990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415990ULL || rel >= 0x4159a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004159a0 size=80 callers=0 calls=0
*/
void sub_4159a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4159a0ULL || rel >= 0x4159f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004159f0 size=64 callers=0 calls=0
*/
void sub_4159f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4159f0ULL || rel >= 0x415a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415a30 size=16 callers=0 calls=0
*/
void sub_415a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415a30ULL || rel >= 0x415a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415a40 size=64 callers=0 calls=0
*/
void sub_415a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415a40ULL || rel >= 0x415a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415a80 size=32 callers=0 calls=0
*/
void sub_415a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415a80ULL || rel >= 0x415aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415aa0 size=32 callers=0 calls=0
*/
void sub_415aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415aa0ULL || rel >= 0x415ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415ac0 size=16 callers=0 calls=0
*/
void sub_415ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415ac0ULL || rel >= 0x415ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415ad0 size=16 callers=0 calls=0
*/
void sub_415ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415ad0ULL || rel >= 0x415ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415ae0 size=16 callers=0 calls=0
*/
void sub_415ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415ae0ULL || rel >= 0x415af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415af0 size=16 callers=0 calls=0
*/
void sub_415af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415af0ULL || rel >= 0x415b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415b00 size=32 callers=0 calls=0
*/
void sub_415b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415b00ULL || rel >= 0x415b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415b20 size=32 callers=0 calls=0
*/
void sub_415b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415b20ULL || rel >= 0x415b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415b40 size=32 callers=0 calls=0
*/
void sub_415b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415b40ULL || rel >= 0x415b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415b60 size=16 callers=0 calls=0
*/
void sub_415b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415b60ULL || rel >= 0x415b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415b70 size=16 callers=0 calls=0
*/
void sub_415b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415b70ULL || rel >= 0x415b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415b80 size=16 callers=0 calls=0
*/
void sub_415b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415b80ULL || rel >= 0x415b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415b90 size=16 callers=0 calls=0
*/
void sub_415b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415b90ULL || rel >= 0x415ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415ba0 size=16 callers=0 calls=0
*/
void sub_415ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415ba0ULL || rel >= 0x415bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415bb0 size=16 callers=0 calls=0
*/
void sub_415bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415bb0ULL || rel >= 0x415bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415bc0 size=32 callers=0 calls=0
*/
void sub_415bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415bc0ULL || rel >= 0x415be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415be0 size=32 callers=0 calls=0
*/
void sub_415be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415be0ULL || rel >= 0x415c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415c00 size=32 callers=0 calls=0
*/
void sub_415c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415c00ULL || rel >= 0x415c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415c20 size=32 callers=0 calls=0
*/
void sub_415c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415c20ULL || rel >= 0x415c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415c40 size=32 callers=0 calls=0
*/
void sub_415c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415c40ULL || rel >= 0x415c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415c60 size=64 callers=0 calls=0
*/
void sub_415c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415c60ULL || rel >= 0x415ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415ca0 size=80 callers=0 calls=0
*/
void sub_415ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415ca0ULL || rel >= 0x415cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415cf0 size=16 callers=0 calls=0
*/
void sub_415cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415cf0ULL || rel >= 0x415d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415d00 size=16 callers=0 calls=0
*/
void sub_415d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415d00ULL || rel >= 0x415d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415d10 size=16 callers=0 calls=0
*/
void sub_415d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415d10ULL || rel >= 0x415d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415d20 size=16 callers=0 calls=0
*/
void sub_415d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415d20ULL || rel >= 0x415d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415d30 size=32 callers=0 calls=0
*/
void sub_415d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415d30ULL || rel >= 0x415d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415d50 size=80 callers=0 calls=0
*/
void sub_415d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415d50ULL || rel >= 0x415da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415da0 size=16 callers=0 calls=0
*/
void sub_415da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415da0ULL || rel >= 0x415db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415db0 size=32 callers=0 calls=0
*/
void sub_415db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415db0ULL || rel >= 0x415dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415dd0 size=32 callers=0 calls=0
*/
void sub_415dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415dd0ULL || rel >= 0x415df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415df0 size=32 callers=0 calls=0
*/
void sub_415df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415df0ULL || rel >= 0x415e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415e10 size=32 callers=0 calls=0
*/
void sub_415e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415e10ULL || rel >= 0x415e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415e30 size=16 callers=0 calls=0
*/
void sub_415e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415e30ULL || rel >= 0x415e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415e40 size=16 callers=0 calls=0
*/
void sub_415e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415e40ULL || rel >= 0x415e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415e50 size=16 callers=0 calls=0
*/
void sub_415e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415e50ULL || rel >= 0x415e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415e60 size=16 callers=0 calls=0
*/
void sub_415e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415e60ULL || rel >= 0x415e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415e70 size=32 callers=0 calls=0
*/
void sub_415e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415e70ULL || rel >= 0x415e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415e90 size=32 callers=0 calls=0
*/
void sub_415e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415e90ULL || rel >= 0x415eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415eb0 size=32 callers=0 calls=0
*/
void sub_415eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415eb0ULL || rel >= 0x415ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415ed0 size=32 callers=0 calls=0
*/
void sub_415ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415ed0ULL || rel >= 0x415ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415ef0 size=32 callers=0 calls=0
*/
void sub_415ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415ef0ULL || rel >= 0x415f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415f10 size=16 callers=0 calls=0
*/
void sub_415f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415f10ULL || rel >= 0x415f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415f20 size=16 callers=0 calls=0
*/
void sub_415f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415f20ULL || rel >= 0x415f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415f30 size=16 callers=0 calls=0
*/
void sub_415f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415f30ULL || rel >= 0x415f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415f40 size=16 callers=0 calls=0
*/
void sub_415f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415f40ULL || rel >= 0x415f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415f50 size=32 callers=0 calls=0
*/
void sub_415f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415f50ULL || rel >= 0x415f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415f70 size=16 callers=0 calls=0
*/
void sub_415f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415f70ULL || rel >= 0x415f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415f80 size=32 callers=0 calls=0
*/
void sub_415f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415f80ULL || rel >= 0x415fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415fa0 size=16 callers=0 calls=0
*/
void sub_415fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415fa0ULL || rel >= 0x415fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415fb0 size=32 callers=0 calls=0
*/
void sub_415fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415fb0ULL || rel >= 0x415fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415fd0 size=16 callers=0 calls=0
*/
void sub_415fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415fd0ULL || rel >= 0x415fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415fe0 size=32 callers=0 calls=0
*/
void sub_415fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415fe0ULL || rel >= 0x416000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416000 size=16 callers=0 calls=0
*/
void sub_416000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416000ULL || rel >= 0x416010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416010 size=32 callers=0 calls=0
*/
void sub_416010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416010ULL || rel >= 0x416030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416030 size=16 callers=0 calls=0
*/
void sub_416030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416030ULL || rel >= 0x416040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416040 size=112 callers=0 calls=0
*/
void sub_416040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416040ULL || rel >= 0x4160b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004160b0 size=32 callers=0 calls=0
*/
void sub_4160b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4160b0ULL || rel >= 0x4160d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004160d0 size=16 callers=0 calls=0
*/
void sub_4160d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4160d0ULL || rel >= 0x4160e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004160e0 size=720 callers=0 calls=0
*/
void sub_4160e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4160e0ULL || rel >= 0x4163b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004163b0 size=32 callers=3 calls=0
*/
void sub_4163b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4163b0ULL || rel >= 0x4163d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004163d0 size=32 callers=20 calls=0
*/
void sub_4163d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4163d0ULL || rel >= 0x4163f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004163f0 size=64 callers=1 calls=0
*/
void sub_4163f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4163f0ULL || rel >= 0x416430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416430 size=64 callers=20 calls=0
*/
void sub_416430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416430ULL || rel >= 0x416470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416470 size=112 callers=0 calls=1
   calls: sub_4196f0
*/
void sub_416470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416470ULL || rel >= 0x4164e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004164e0 size=144 callers=0 calls=0
*/
void sub_4164e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4164e0ULL || rel >= 0x416570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416570 size=48 callers=0 calls=0
*/
void sub_416570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416570ULL || rel >= 0x4165a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004165a0 size=112 callers=0 calls=0
*/
void sub_4165a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4165a0ULL || rel >= 0x416610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416610 size=224 callers=0 calls=0
*/
void sub_416610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416610ULL || rel >= 0x4166f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004166f0 size=208 callers=3 calls=3
   calls: sub_410960, sub_410a60, sub_433bb0
*/
void sub_4166f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4166f0ULL || rel >= 0x4167c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004167c0 size=16 callers=6 calls=0
*/
void sub_4167c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4167c0ULL || rel >= 0x4167d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004167d0 size=16 callers=7 calls=0
*/
void sub_4167d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4167d0ULL || rel >= 0x4167e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004167e0 size=640 callers=1 calls=2
   calls: sub_410230, sub_414120
*/
void sub_4167e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4167e0ULL || rel >= 0x416a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416a60 size=32 callers=1 calls=0
*/
void sub_416a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416a60ULL || rel >= 0x416a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416a80 size=240 callers=1 calls=2
   calls: sub_433a90, sub_433b20
*/
void sub_416a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416a80ULL || rel >= 0x416b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416b70 size=16 callers=3 calls=0
*/
void sub_416b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416b70ULL || rel >= 0x416b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416b80 size=224 callers=0 calls=1
   calls: sub_40d560
*/
void sub_416b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416b80ULL || rel >= 0x416c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416c60 size=368 callers=0 calls=1
   calls: sub_40d560
*/
void sub_416c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416c60ULL || rel >= 0x416dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416dd0 size=16 callers=1 calls=0
*/
void sub_416dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416dd0ULL || rel >= 0x416de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416de0 size=64 callers=1 calls=0
*/
void sub_416de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416de0ULL || rel >= 0x416e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416e20 size=16 callers=1 calls=0
*/
void sub_416e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416e20ULL || rel >= 0x416e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416e30 size=16 callers=1 calls=0
*/
void sub_416e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416e30ULL || rel >= 0x416e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416e40 size=16 callers=1 calls=0
*/
void sub_416e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416e40ULL || rel >= 0x416e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416e50 size=16 callers=1 calls=0
*/
void sub_416e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416e50ULL || rel >= 0x416e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416e60 size=16 callers=1 calls=0
*/
void sub_416e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416e60ULL || rel >= 0x416e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416e70 size=16 callers=0 calls=0
*/
void sub_416e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416e70ULL || rel >= 0x416e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416e80 size=16 callers=0 calls=0
*/
void sub_416e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416e80ULL || rel >= 0x416e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416e90 size=16 callers=0 calls=0
*/
void sub_416e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416e90ULL || rel >= 0x416ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416ea0 size=16 callers=1 calls=0
*/
void sub_416ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416ea0ULL || rel >= 0x416eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416eb0 size=16 callers=1 calls=0
*/
void sub_416eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416eb0ULL || rel >= 0x416ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416ec0 size=16 callers=1 calls=0
*/
void sub_416ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416ec0ULL || rel >= 0x416ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416ed0 size=16 callers=0 calls=0
*/
void sub_416ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416ed0ULL || rel >= 0x416ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416ee0 size=16 callers=0 calls=0
*/
void sub_416ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416ee0ULL || rel >= 0x416ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416ef0 size=16 callers=0 calls=0
*/
void sub_416ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416ef0ULL || rel >= 0x416f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416f00 size=16 callers=0 calls=0
*/
void sub_416f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416f00ULL || rel >= 0x416f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416f10 size=16 callers=0 calls=0
*/
void sub_416f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416f10ULL || rel >= 0x416f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416f20 size=16 callers=0 calls=0
*/
void sub_416f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416f20ULL || rel >= 0x416f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416f30 size=16 callers=0 calls=0
*/
void sub_416f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416f30ULL || rel >= 0x416f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416f40 size=16 callers=0 calls=0
*/
void sub_416f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416f40ULL || rel >= 0x416f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416f50 size=16 callers=0 calls=0
*/
void sub_416f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416f50ULL || rel >= 0x416f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416f60 size=16 callers=0 calls=0
*/
void sub_416f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416f60ULL || rel >= 0x416f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416f70 size=16 callers=0 calls=0
*/
void sub_416f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416f70ULL || rel >= 0x416f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416f80 size=16 callers=0 calls=0
*/
void sub_416f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416f80ULL || rel >= 0x416f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416f90 size=16 callers=0 calls=0
*/
void sub_416f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416f90ULL || rel >= 0x416fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416fa0 size=16 callers=0 calls=0
*/
void sub_416fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416fa0ULL || rel >= 0x416fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416fb0 size=48 callers=0 calls=0
*/
void sub_416fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416fb0ULL || rel >= 0x416fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416fe0 size=16 callers=0 calls=0
*/
void sub_416fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416fe0ULL || rel >= 0x416ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00416ff0 size=16 callers=0 calls=0
*/
void sub_416ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x416ff0ULL || rel >= 0x417000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417000 size=80 callers=0 calls=0
*/
void sub_417000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417000ULL || rel >= 0x417050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417050 size=16 callers=0 calls=0
*/
void sub_417050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417050ULL || rel >= 0x417060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417060 size=16 callers=0 calls=0
*/
void sub_417060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417060ULL || rel >= 0x417070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417070 size=16 callers=0 calls=0
*/
void sub_417070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417070ULL || rel >= 0x417080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417080 size=336 callers=0 calls=1
   calls: sub_410060
*/
void sub_417080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417080ULL || rel >= 0x4171d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004171d0 size=256 callers=0 calls=1
   calls: sub_410060
*/
void sub_4171d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4171d0ULL || rel >= 0x4172d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004172d0 size=16 callers=0 calls=0
*/
void sub_4172d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4172d0ULL || rel >= 0x4172e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004172e0 size=16 callers=0 calls=0
*/
void sub_4172e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4172e0ULL || rel >= 0x4172f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004172f0 size=96 callers=0 calls=0
*/
void sub_4172f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4172f0ULL || rel >= 0x417350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417350 size=96 callers=0 calls=0
*/
void sub_417350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417350ULL || rel >= 0x4173b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004173b0 size=16 callers=2 calls=0
*/
void sub_4173b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4173b0ULL || rel >= 0x4173c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004173c0 size=32 callers=2 calls=0
*/
void sub_4173c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4173c0ULL || rel >= 0x4173e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004173e0 size=32 callers=2 calls=0
*/
void sub_4173e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4173e0ULL || rel >= 0x417400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417400 size=32 callers=1 calls=0
*/
void sub_417400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417400ULL || rel >= 0x417420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417420 size=32 callers=0 calls=0
*/
void sub_417420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417420ULL || rel >= 0x417440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417440 size=32 callers=0 calls=0
*/
void sub_417440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417440ULL || rel >= 0x417460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417460 size=32 callers=0 calls=0
*/
void sub_417460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417460ULL || rel >= 0x417480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417480 size=32 callers=0 calls=0
*/
void sub_417480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417480ULL || rel >= 0x4174a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004174a0 size=32 callers=0 calls=0
*/
void sub_4174a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4174a0ULL || rel >= 0x4174c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004174c0 size=48 callers=0 calls=0
*/
void sub_4174c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4174c0ULL || rel >= 0x4174f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004174f0 size=32 callers=0 calls=0
*/
void sub_4174f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4174f0ULL || rel >= 0x417510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417510 size=32 callers=0 calls=0
*/
void sub_417510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417510ULL || rel >= 0x417530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417530 size=32 callers=1 calls=0
*/
void sub_417530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417530ULL || rel >= 0x417550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417550 size=320 callers=0 calls=0
*/
void sub_417550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417550ULL || rel >= 0x417690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417690 size=848 callers=3 calls=5
   calls: sub_400cd0, sub_400d70, sub_4011b0, sub_40e540, sub_410060
*/
void sub_417690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417690ULL || rel >= 0x4179e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004179e0 size=496 callers=3 calls=3
   calls: sub_40c070, sub_4417e0, sub_441a60
*/
void sub_4179e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4179e0ULL || rel >= 0x417bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417bd0 size=832 callers=21 calls=2
   calls: sub_400cd0, sub_4012b0
*/
void sub_417bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417bd0ULL || rel >= 0x417f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417f10 size=112 callers=0 calls=1
   calls: sub_417690
*/
void sub_417f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417f10ULL || rel >= 0x417f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417f80 size=896 callers=0 calls=3
   calls: sub_40d560, sub_40e540, sub_417690
*/
void sub_417f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417f80ULL || rel >= 0x418300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418300 size=16 callers=0 calls=0
*/
void sub_418300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418300ULL || rel >= 0x418310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418310 size=80 callers=0 calls=1
   calls: sub_4179e0
*/
void sub_418310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418310ULL || rel >= 0x418360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418360 size=80 callers=0 calls=1
   calls: sub_4179e0
*/
void sub_418360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418360ULL || rel >= 0x4183b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004183b0 size=16 callers=0 calls=0
*/
void sub_4183b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4183b0ULL || rel >= 0x4183c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004183c0 size=64 callers=0 calls=1
   calls: sub_417bd0
*/
void sub_4183c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4183c0ULL || rel >= 0x418400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418400 size=16 callers=0 calls=0
*/
void sub_418400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418400ULL || rel >= 0x418410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418410 size=16 callers=0 calls=0
*/
void sub_418410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418410ULL || rel >= 0x418420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418420 size=16 callers=0 calls=0
*/
void sub_418420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418420ULL || rel >= 0x418430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418430 size=16 callers=0 calls=0
*/
void sub_418430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418430ULL || rel >= 0x418440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418440 size=16 callers=0 calls=0
*/
void sub_418440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418440ULL || rel >= 0x418450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418450 size=16 callers=0 calls=0
*/
void sub_418450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418450ULL || rel >= 0x418460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418460 size=16 callers=0 calls=0
*/
void sub_418460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418460ULL || rel >= 0x418470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418470 size=16 callers=0 calls=0
*/
void sub_418470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418470ULL || rel >= 0x418480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418480 size=48 callers=0 calls=0
*/
void sub_418480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418480ULL || rel >= 0x4184b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004184b0 size=16 callers=0 calls=0
*/
void sub_4184b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4184b0ULL || rel >= 0x4184c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004184c0 size=16 callers=0 calls=0
*/
void sub_4184c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4184c0ULL || rel >= 0x4184d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004184d0 size=16 callers=0 calls=0
*/
void sub_4184d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4184d0ULL || rel >= 0x4184e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004184e0 size=32 callers=0 calls=0
*/
void sub_4184e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4184e0ULL || rel >= 0x418500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418500 size=16 callers=0 calls=0
*/
void sub_418500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418500ULL || rel >= 0x418510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418510 size=400 callers=0 calls=1
   calls: sub_4331b0
*/
void sub_418510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418510ULL || rel >= 0x4186a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004186a0 size=400 callers=0 calls=1
   calls: sub_4331b0
*/
void sub_4186a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4186a0ULL || rel >= 0x418830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418830 size=16 callers=0 calls=0
*/
void sub_418830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418830ULL || rel >= 0x418840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418840 size=16 callers=0 calls=0
*/
void sub_418840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418840ULL || rel >= 0x418850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418850 size=16 callers=0 calls=0
*/
void sub_418850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418850ULL || rel >= 0x418860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418860 size=160 callers=0 calls=2
   calls: sub_400cd0, sub_400f00
*/
void sub_418860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418860ULL || rel >= 0x418900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418900 size=144 callers=0 calls=2
   calls: sub_400cd0, sub_400f00
*/
void sub_418900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418900ULL || rel >= 0x418990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418990 size=528 callers=0 calls=2
   calls: sub_401ca0, sub_417bd0
*/
void sub_418990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418990ULL || rel >= 0x418ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418ba0 size=16 callers=0 calls=0
*/
void sub_418ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418ba0ULL || rel >= 0x418bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418bb0 size=528 callers=0 calls=2
   calls: sub_401440, sub_417bd0
*/
void sub_418bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418bb0ULL || rel >= 0x418dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418dc0 size=16 callers=0 calls=0
*/
void sub_418dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418dc0ULL || rel >= 0x418dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418dd0 size=112 callers=0 calls=0
*/
void sub_418dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418dd0ULL || rel >= 0x418e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418e40 size=112 callers=0 calls=0
*/
void sub_418e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418e40ULL || rel >= 0x418eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418eb0 size=16 callers=0 calls=0
*/
void sub_418eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418eb0ULL || rel >= 0x418ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418ec0 size=16 callers=0 calls=0
*/
void sub_418ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418ec0ULL || rel >= 0x418ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418ed0 size=16 callers=0 calls=0
*/
void sub_418ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418ed0ULL || rel >= 0x418ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418ee0 size=304 callers=0 calls=0
*/
void sub_418ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418ee0ULL || rel >= 0x419010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419010 size=16 callers=0 calls=0
*/
void sub_419010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419010ULL || rel >= 0x419020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419020 size=96 callers=0 calls=0
*/
void sub_419020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419020ULL || rel >= 0x419080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419080 size=16 callers=0 calls=0
*/
void sub_419080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419080ULL || rel >= 0x419090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419090 size=16 callers=0 calls=0
*/
void sub_419090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419090ULL || rel >= 0x4190a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004190a0 size=16 callers=0 calls=0
*/
void sub_4190a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4190a0ULL || rel >= 0x4190b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004190b0 size=16 callers=0 calls=0
*/
void sub_4190b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4190b0ULL || rel >= 0x4190c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004190c0 size=16 callers=0 calls=0
*/
void sub_4190c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4190c0ULL || rel >= 0x4190d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004190d0 size=16 callers=0 calls=0
*/
void sub_4190d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4190d0ULL || rel >= 0x4190e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004190e0 size=16 callers=0 calls=0
*/
void sub_4190e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4190e0ULL || rel >= 0x4190f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004190f0 size=16 callers=0 calls=0
*/
void sub_4190f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4190f0ULL || rel >= 0x419100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419100 size=32 callers=0 calls=0
*/
void sub_419100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419100ULL || rel >= 0x419120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419120 size=16 callers=0 calls=0
*/
void sub_419120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419120ULL || rel >= 0x419130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419130 size=16 callers=0 calls=0
*/
void sub_419130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419130ULL || rel >= 0x419140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419140 size=16 callers=0 calls=0
*/
void sub_419140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419140ULL || rel >= 0x419150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419150 size=16 callers=0 calls=0
*/
void sub_419150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419150ULL || rel >= 0x419160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419160 size=384 callers=1 calls=1
   calls: sub_417bd0
*/
void sub_419160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419160ULL || rel >= 0x4192e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004192e0 size=560 callers=0 calls=2
   calls: sub_4163b0, sub_419160
*/
void sub_4192e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4192e0ULL || rel >= 0x419510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419510 size=80 callers=0 calls=0
*/
void sub_419510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419510ULL || rel >= 0x419560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419560 size=16 callers=0 calls=0
*/
void sub_419560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419560ULL || rel >= 0x419570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419570 size=128 callers=0 calls=1
   calls: sub_4163f0
*/
void sub_419570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419570ULL || rel >= 0x4195f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004195f0 size=16 callers=0 calls=0
*/
void sub_4195f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4195f0ULL || rel >= 0x419600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419600 size=16 callers=0 calls=0
*/
void sub_419600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419600ULL || rel >= 0x419610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419610 size=112 callers=0 calls=0
*/
void sub_419610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419610ULL || rel >= 0x419680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419680 size=48 callers=0 calls=0
*/
void sub_419680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419680ULL || rel >= 0x4196b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004196b0 size=16 callers=0 calls=0
*/
void sub_4196b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4196b0ULL || rel >= 0x4196c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004196c0 size=48 callers=0 calls=0
*/
void sub_4196c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4196c0ULL || rel >= 0x4196f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004196f0 size=160 callers=1 calls=0
*/
void sub_4196f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4196f0ULL || rel >= 0x419790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419790 size=560 callers=1 calls=1
   calls: sub_4167e0
*/
void sub_419790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419790ULL || rel >= 0x4199c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004199c0 size=112 callers=0 calls=4
   calls: sub_4163d0, sub_416430, sub_416b70, sub_419790
*/
void sub_4199c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4199c0ULL || rel >= 0x419a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419a30 size=224 callers=0 calls=4
   calls: sub_413ce0, sub_4166f0, sub_417bd0, sub_431070
*/
void sub_419a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419a30ULL || rel >= 0x419b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419b10 size=880 callers=0 calls=4
   calls: sub_40e8b0, sub_40ea90, sub_417bd0, sub_442170
*/
void sub_419b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419b10ULL || rel >= 0x419e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419e80 size=32 callers=2 calls=0
*/
void sub_419e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419e80ULL || rel >= 0x419ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419ea0 size=144 callers=0 calls=0
*/
void sub_419ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419ea0ULL || rel >= 0x419f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419f30 size=32 callers=0 calls=0
*/
void sub_419f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419f30ULL || rel >= 0x419f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419f50 size=304 callers=3 calls=2
   calls: sub_40edd0, sub_40f6d0
*/
void sub_419f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419f50ULL || rel >= 0x41a080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a080 size=64 callers=0 calls=0
*/
void sub_41a080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a080ULL || rel >= 0x41a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a0c0 size=352 callers=0 calls=0
*/
void sub_41a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a0c0ULL || rel >= 0x41a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a220 size=224 callers=0 calls=1
   calls: sub_419f50
*/
void sub_41a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a220ULL || rel >= 0x41a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a300 size=16 callers=0 calls=0
*/
void sub_41a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a300ULL || rel >= 0x41a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a310 size=192 callers=1 calls=2
   calls: sub_40f090, sub_40f6d0
*/
void sub_41a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a310ULL || rel >= 0x41a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a3d0 size=48 callers=0 calls=1
   calls: sub_41a310
*/
void sub_41a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a3d0ULL || rel >= 0x41a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a400 size=48 callers=0 calls=0
*/
void sub_41a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a400ULL || rel >= 0x41a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a430 size=288 callers=0 calls=2
   calls: sub_40e540, sub_40f6d0
*/
void sub_41a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a430ULL || rel >= 0x41a550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a550 size=176 callers=0 calls=0
*/
void sub_41a550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a550ULL || rel >= 0x41a600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a600 size=160 callers=0 calls=0
*/
void sub_41a600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a600ULL || rel >= 0x41a6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a6a0 size=416 callers=0 calls=0
*/
void sub_41a6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a6a0ULL || rel >= 0x41a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a840 size=16 callers=0 calls=0
*/
void sub_41a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a840ULL || rel >= 0x41a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a850 size=240 callers=1 calls=2
   calls: sub_40f090, sub_43ccc0
*/
void sub_41a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a850ULL || rel >= 0x41a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a940 size=48 callers=0 calls=1
   calls: sub_41a850
*/
void sub_41a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a940ULL || rel >= 0x41a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041a970 size=400 callers=0 calls=3
   calls: sub_40f420, sub_40f450, sub_43ccb0
*/
void sub_41a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41a970ULL || rel >= 0x41ab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ab00 size=16 callers=0 calls=0
*/
void sub_41ab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ab00ULL || rel >= 0x41ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ab10 size=16 callers=0 calls=0
*/
void sub_41ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ab10ULL || rel >= 0x41ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ab20 size=16 callers=0 calls=0
*/
void sub_41ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ab20ULL || rel >= 0x41ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ab30 size=16 callers=0 calls=0
*/
void sub_41ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ab30ULL || rel >= 0x41ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ab40 size=16 callers=0 calls=0
*/
void sub_41ab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ab40ULL || rel >= 0x41ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ab50 size=16 callers=0 calls=0
*/
void sub_41ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ab50ULL || rel >= 0x41ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ab60 size=16 callers=0 calls=0
*/
void sub_41ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ab60ULL || rel >= 0x41ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ab70 size=16 callers=0 calls=0
*/
void sub_41ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ab70ULL || rel >= 0x41ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ab80 size=16 callers=0 calls=0
*/
void sub_41ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ab80ULL || rel >= 0x41ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ab90 size=16 callers=0 calls=0
*/
void sub_41ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ab90ULL || rel >= 0x41aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041aba0 size=16 callers=0 calls=0
*/
void sub_41aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41aba0ULL || rel >= 0x41abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041abb0 size=16 callers=0 calls=0
*/
void sub_41abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41abb0ULL || rel >= 0x41abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041abc0 size=16 callers=0 calls=0
*/
void sub_41abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41abc0ULL || rel >= 0x41abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041abd0 size=16 callers=0 calls=0
*/
void sub_41abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41abd0ULL || rel >= 0x41abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041abe0 size=144 callers=0 calls=1
   calls: sub_43ccc0
*/
void sub_41abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41abe0ULL || rel >= 0x41ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ac70 size=16 callers=0 calls=0
*/
void sub_41ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ac70ULL || rel >= 0x41ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ac80 size=352 callers=2 calls=0
*/
void sub_41ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ac80ULL || rel >= 0x41ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041ade0 size=17760 callers=1 calls=4
   calls: sub_41ac80, sub_41f340, sub_420170, sub_4208a0
*/
void sub_41ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41ade0ULL || rel >= 0x41f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f340 size=656 callers=1 calls=0
*/
void sub_41f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f340ULL || rel >= 0x41f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041f5d0 size=1792 callers=0 calls=0
*/
void sub_41f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41f5d0ULL || rel >= 0x41fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041fcd0 size=272 callers=1 calls=4
   calls: sub_41ade0, sub_41fde0, sub_441080, sub_4410a0
*/
void sub_41fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41fcd0ULL || rel >= 0x41fde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041fde0 size=912 callers=1 calls=1
   calls: sub_421000
*/
void sub_41fde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41fde0ULL || rel >= 0x420170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420170 size=1840 callers=1 calls=0
*/
void sub_420170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420170ULL || rel >= 0x4208a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004208a0 size=1632 callers=1 calls=1
   calls: sub_420f00
*/
void sub_4208a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4208a0ULL || rel >= 0x420f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00420f00 size=256 callers=2 calls=0
*/
void sub_420f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x420f00ULL || rel >= 0x421000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421000 size=752 callers=1 calls=0
*/
void sub_421000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421000ULL || rel >= 0x4212f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004212f0 size=112 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_432a50
*/
void sub_4212f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4212f0ULL || rel >= 0x421360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421360 size=112 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_432d90
*/
void sub_421360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421360ULL || rel >= 0x4213d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004213d0 size=112 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_432b00
*/
void sub_4213d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4213d0ULL || rel >= 0x421440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421440 size=112 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_432e50
*/
void sub_421440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421440ULL || rel >= 0x4214b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004214b0 size=128 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_432f40
*/
void sub_4214b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4214b0ULL || rel >= 0x421530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421530 size=560 callers=0 calls=4
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_421760, sub_4218e0, sub_42f8f0
*/
void sub_421530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421530ULL || rel >= 0x421760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421760 size=384 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_421760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421760ULL || rel >= 0x4218e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004218e0 size=384 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_4218e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4218e0ULL || rel >= 0x421a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421a60 size=192 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_421a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421a60ULL || rel >= 0x421b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421b20 size=240 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_421b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421b20ULL || rel >= 0x421c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421c10 size=304 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_421d40
*/
void sub_421c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421c10ULL || rel >= 0x421d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421d40 size=384 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_421d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421d40ULL || rel >= 0x421ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00421ec0 size=368 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_421d40
*/
void sub_421ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x421ec0ULL || rel >= 0x422030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422030 size=240 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_422120
*/
void sub_422030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422030ULL || rel >= 0x422120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422120 size=384 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_422120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422120ULL || rel >= 0x4222a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004222a0 size=496 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_422120
*/
void sub_4222a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4222a0ULL || rel >= 0x422490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422490 size=256 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_422590
*/
void sub_422490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422490ULL || rel >= 0x422590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422590 size=384 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_422590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422590ULL || rel >= 0x422710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422710 size=256 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_422810
*/
void sub_422710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422710ULL || rel >= 0x422810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422810 size=384 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_422810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422810ULL || rel >= 0x422990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422990 size=592 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_422810
*/
void sub_422990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422990ULL || rel >= 0x422be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422be0 size=256 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_422ce0
*/
void sub_422be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422be0ULL || rel >= 0x422ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422ce0 size=384 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_422ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422ce0ULL || rel >= 0x422e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00422e60 size=592 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_422ce0
*/
void sub_422e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x422e60ULL || rel >= 0x4230b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004230b0 size=592 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_422590
*/
void sub_4230b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4230b0ULL || rel >= 0x423300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423300 size=256 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_423400
*/
void sub_423300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423300ULL || rel >= 0x423400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423400 size=384 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_423400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423400ULL || rel >= 0x423580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423580 size=592 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_423400
*/
void sub_423580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423580ULL || rel >= 0x4237d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004237d0 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4237d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4237d0ULL || rel >= 0x423850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423850 size=144 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_423850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423850ULL || rel >= 0x4238e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004238e0 size=304 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4238e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4238e0ULL || rel >= 0x423a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423a10 size=176 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_423a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423a10ULL || rel >= 0x423ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423ac0 size=224 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_423ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423ac0ULL || rel >= 0x423ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423ba0 size=480 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_423ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423ba0ULL || rel >= 0x423d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423d80 size=528 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_423d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423d80ULL || rel >= 0x423f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423f90 size=240 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_424080
*/
void sub_423f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423f90ULL || rel >= 0x424080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424080 size=896 callers=2 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_424080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424080ULL || rel >= 0x424400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424400 size=352 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_424080
*/
void sub_424400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424400ULL || rel >= 0x424560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424560 size=160 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_424560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424560ULL || rel >= 0x424600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424600 size=160 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_424600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424600ULL || rel >= 0x4246a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004246a0 size=160 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4246a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4246a0ULL || rel >= 0x424740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424740 size=160 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_424740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424740ULL || rel >= 0x4247e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004247e0 size=144 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4247e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4247e0ULL || rel >= 0x424870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424870 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_424870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424870ULL || rel >= 0x4248f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004248f0 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4248f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4248f0ULL || rel >= 0x424970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424970 size=160 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_424970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424970ULL || rel >= 0x424a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424a10 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_424a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424a10ULL || rel >= 0x424a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424a90 size=112 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_424a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424a90ULL || rel >= 0x424b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424b00 size=208 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_424b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424b00ULL || rel >= 0x424bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424bd0 size=208 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_424bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424bd0ULL || rel >= 0x424ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424ca0 size=208 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_424ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424ca0ULL || rel >= 0x424d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424d70 size=496 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_40c070
*/
void sub_424d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424d70ULL || rel >= 0x424f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424f60 size=448 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_424f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424f60ULL || rel >= 0x425120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425120 size=64 callers=0 calls=1
   calls: sub_424f60
*/
void sub_425120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425120ULL || rel >= 0x425160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425160 size=288 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_425160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425160ULL || rel >= 0x425280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425280 size=48 callers=0 calls=1
   calls: sub_425160
*/
void sub_425280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425280ULL || rel >= 0x4252b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004252b0 size=224 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4252b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4252b0ULL || rel >= 0x425390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425390 size=160 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_425390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425390ULL || rel >= 0x425430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425430 size=336 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_425430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425430ULL || rel >= 0x425580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425580 size=48 callers=0 calls=1
   calls: sub_425430
*/
void sub_425580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425580ULL || rel >= 0x4255b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004255b0 size=112 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4255b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4255b0ULL || rel >= 0x425620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425620 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_425620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425620ULL || rel >= 0x4256a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004256a0 size=144 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4256a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4256a0ULL || rel >= 0x425730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425730 size=224 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_425730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425730ULL || rel >= 0x425810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425810 size=208 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_425810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425810ULL || rel >= 0x4258e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004258e0 size=112 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4258e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4258e0ULL || rel >= 0x425950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425950 size=240 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_425950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425950ULL || rel >= 0x425a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425a40 size=304 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_425a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425a40ULL || rel >= 0x425b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425b70 size=960 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_425b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425b70ULL || rel >= 0x425f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425f30 size=720 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_425f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425f30ULL || rel >= 0x426200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426200 size=112 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_426200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426200ULL || rel >= 0x426270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426270 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_426270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426270ULL || rel >= 0x4262f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004262f0 size=208 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4262f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4262f0ULL || rel >= 0x4263c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004263c0 size=304 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_40e540
*/
void sub_4263c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4263c0ULL || rel >= 0x4264f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004264f0 size=208 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4264f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4264f0ULL || rel >= 0x4265c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004265c0 size=64 callers=0 calls=1
   calls: sub_426600
*/
void sub_4265c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4265c0ULL || rel >= 0x426600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426600 size=384 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_426600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426600ULL || rel >= 0x426780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426780 size=192 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_426780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426780ULL || rel >= 0x426840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426840 size=64 callers=0 calls=1
   calls: sub_426880
*/
void sub_426840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426840ULL || rel >= 0x426880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426880 size=384 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_426880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426880ULL || rel >= 0x426a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426a00 size=144 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_426a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426a00ULL || rel >= 0x426a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426a90 size=176 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_426a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426a90ULL || rel >= 0x426b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426b40 size=224 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_426b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426b40ULL || rel >= 0x426c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426c20 size=176 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_426c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426c20ULL || rel >= 0x426cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426cd0 size=176 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_426cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426cd0ULL || rel >= 0x426d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426d80 size=352 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_426d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426d80ULL || rel >= 0x426ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426ee0 size=592 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_426ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426ee0ULL || rel >= 0x427130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427130 size=368 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_427130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427130ULL || rel >= 0x4272a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004272a0 size=96 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4272a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4272a0ULL || rel >= 0x427300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427300 size=224 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_427300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427300ULL || rel >= 0x4273e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004273e0 size=112 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4273e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4273e0ULL || rel >= 0x427450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427450 size=112 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_427450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427450ULL || rel >= 0x4274c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004274c0 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4274c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4274c0ULL || rel >= 0x427540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427540 size=144 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_427540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427540ULL || rel >= 0x4275d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004275d0 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4275d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4275d0ULL || rel >= 0x427650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427650 size=144 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_427650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427650ULL || rel >= 0x4276e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004276e0 size=320 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4276e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4276e0ULL || rel >= 0x427820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427820 size=320 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_427820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427820ULL || rel >= 0x427960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427960 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_427960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427960ULL || rel >= 0x4279e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004279e0 size=192 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4279e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4279e0ULL || rel >= 0x427aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427aa0 size=144 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_427aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427aa0ULL || rel >= 0x427b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427b30 size=1088 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_427b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427b30ULL || rel >= 0x427f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427f70 size=96 callers=0 calls=1
   calls: sub_427fd0
*/
void sub_427f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427f70ULL || rel >= 0x427fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427fd0 size=384 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_427fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427fd0ULL || rel >= 0x428150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428150 size=64 callers=0 calls=1
   calls: sub_428190
*/
void sub_428150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428150ULL || rel >= 0x428190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428190 size=384 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_428190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428190ULL || rel >= 0x428310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428310 size=32 callers=2 calls=0
*/
void sub_428310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428310ULL || rel >= 0x428330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428330 size=32 callers=2 calls=0
*/
void sub_428330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428330ULL || rel >= 0x428350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428350 size=32 callers=2 calls=0
*/
void sub_428350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428350ULL || rel >= 0x428370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428370 size=32 callers=2 calls=0
*/
void sub_428370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428370ULL || rel >= 0x428390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428390 size=32 callers=2 calls=0
*/
void sub_428390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428390ULL || rel >= 0x4283b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004283b0 size=272 callers=2 calls=0
*/
void sub_4283b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4283b0ULL || rel >= 0x4284c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004284c0 size=64 callers=2 calls=0
*/
void sub_4284c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4284c0ULL || rel >= 0x428500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428500 size=960 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_428500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428500ULL || rel >= 0x4288c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004288c0 size=1488 callers=0 calls=4
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6, sub_4144b0, sub_43cd20
*/
void sub_4288c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4288c0ULL || rel >= 0x428e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428e90 size=1408 callers=0 calls=4
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6, sub_4144b0, sub_43cd20
*/
void sub_428e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428e90ULL || rel >= 0x429410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429410 size=848 callers=3 calls=3
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_428500, sub_42f970
*/
void sub_429410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429410ULL || rel >= 0x429760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429760 size=544 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_429760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429760ULL || rel >= 0x429980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429980 size=448 callers=1 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_4108c0
*/
void sub_429980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429980ULL || rel >= 0x429b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429b40 size=48 callers=1 calls=0
*/
void sub_429b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429b40ULL || rel >= 0x429b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429b70 size=7040 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_429b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429b70ULL || rel >= 0x42b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042b6f0 size=1712 callers=1 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_429760
*/
void sub_42b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42b6f0ULL || rel >= 0x42bda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042bda0 size=2320 callers=1 calls=3
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_429b70, sub_42b6f0
*/
void sub_42bda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42bda0ULL || rel >= 0x42c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042c6b0 size=64 callers=1 calls=1
   calls: sub_40ff20
*/
void sub_42c6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42c6b0ULL || rel >= 0x42c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042c6f0 size=64 callers=1 calls=0
*/
void sub_42c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42c6f0ULL || rel >= 0x42c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042c730 size=64 callers=2 calls=2
   calls: sub_40db60, sub_43cf10
*/
void sub_42c730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42c730ULL || rel >= 0x42c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042c770 size=128 callers=1 calls=4
   calls: sub_40da40, sub_40db60, sub_43cf10, sub_43cf20
*/
void sub_42c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42c770ULL || rel >= 0x42c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042c7f0 size=576 callers=0 calls=3
   calls: sub_40ff20, sub_40ff80, sub_42ca30
*/
void sub_42c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42c7f0ULL || rel >= 0x42ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042ca30 size=6640 callers=2 calls=0
*/
void sub_42ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42ca30ULL || rel >= 0x42e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042e420 size=336 callers=0 calls=3
   calls: sub_40ff20, sub_40ff80, sub_42ca30
*/
void sub_42e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42e420ULL || rel >= 0x42e570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042e570 size=112 callers=0 calls=2
   calls: sub_40ff20, sub_40ffd0
*/
void sub_42e570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42e570ULL || rel >= 0x42e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042e5e0 size=624 callers=0 calls=0
*/
void sub_42e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42e5e0ULL || rel >= 0x42e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042e850 size=3568 callers=2 calls=0
*/
void sub_42e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42e850ULL || rel >= 0x42f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042f640 size=336 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_42f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42f640ULL || rel >= 0x42f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042f790 size=352 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_42f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42f790ULL || rel >= 0x42f8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042f8f0 size=128 callers=1 calls=0
*/
void sub_42f8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42f8f0ULL || rel >= 0x42f970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042f970 size=192 callers=1 calls=0
*/
void sub_42f970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42f970ULL || rel >= 0x42fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042fa30 size=320 callers=10 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_42fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42fa30ULL || rel >= 0x42fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042fb70 size=1072 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_42fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42fb70ULL || rel >= 0x42ffa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042ffa0 size=256 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_42ffa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42ffa0ULL || rel >= 0x4300a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004300a0 size=1904 callers=0 calls=4
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_40c070, sub_4179e0, sub_417bd0
*/
void sub_4300a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4300a0ULL || rel >= 0x430810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430810 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_430810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430810ULL || rel >= 0x430890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430890 size=112 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_430890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430890ULL || rel >= 0x430900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430900 size=912 callers=1 calls=3
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6, sub_433c50
*/
void sub_430900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430900ULL || rel >= 0x430c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430c90 size=448 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_430c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430c90ULL || rel >= 0x430e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430e50 size=160 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_430e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430e50ULL || rel >= 0x430ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430ef0 size=128 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_430ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430ef0ULL || rel >= 0x430f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430f70 size=112 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_430f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430f70ULL || rel >= 0x430fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430fe0 size=144 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_430fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430fe0ULL || rel >= 0x431070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431070 size=176 callers=1 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_431120
*/
void sub_431070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431070ULL || rel >= 0x431120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431120 size=272 callers=2 calls=0
*/
void sub_431120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431120ULL || rel >= 0x431230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431230 size=656 callers=2 calls=4
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_4166f0, sub_416a60, sub_416a80
*/
void sub_431230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431230ULL || rel >= 0x4314c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004314c0 size=976 callers=0 calls=8
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_4173b0, sub_4173c0, sub_4173e0, sub_417530, sub_417bd0, sub_431890, sub_4331b0
*/
void sub_4314c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4314c0ULL || rel >= 0x431890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431890 size=384 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_431890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431890ULL || rel >= 0x431a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

