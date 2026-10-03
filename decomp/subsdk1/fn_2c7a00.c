/* subsdk1 functions 002c7a00..002faaa0 (14 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 002c7a00 size=16 callers=0 calls=0
*/
void sub_2c7a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7a00ULL || rel >= 0x2c7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7a10 size=16 callers=0 calls=0
*/
void sub_2c7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7a10ULL || rel >= 0x2c7a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7a20 size=16 callers=0 calls=0
*/
void sub_2c7a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7a20ULL || rel >= 0x2c7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7a30 size=16 callers=0 calls=0
*/
void sub_2c7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7a30ULL || rel >= 0x2c7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7a40 size=16 callers=0 calls=0
*/
void sub_2c7a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7a40ULL || rel >= 0x2c7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7a50 size=16 callers=0 calls=0
*/
void sub_2c7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7a50ULL || rel >= 0x2c7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7a60 size=768 callers=2 calls=9
   calls: Too_many_arguments_to_macro_s, sub_2c7d60, sub_373db0, sub_373e30, sub_373e50, sub_373e60, sub_373e70, sub_373ef0, sub_373f20
*/
void sub_2c7a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7a60ULL || rel >= 0x2c7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7d60 size=240 callers=3 calls=3
   calls: sub_373e50, sub_373e70, sub_373ef0
*/
void sub_2c7d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7d60ULL || rel >= 0x2c7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7e50 size=80 callers=0 calls=0
*/
void sub_2c7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7e50ULL || rel >= 0x2c7ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7ea0 size=32 callers=0 calls=0
*/
void sub_2c7ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7ea0ULL || rel >= 0x2c7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7ec0 size=48 callers=0 calls=0
*/
void sub_2c7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7ec0ULL || rel >= 0x2c7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7ef0 size=176 callers=0 calls=0
*/
void sub_2c7ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7ef0ULL || rel >= 0x2c7fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7fa0 size=32 callers=0 calls=0
*/
void sub_2c7fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7fa0ULL || rel >= 0x2c7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7fc0 size=192 callers=1 calls=3
   calls: mem_CreatePool, sub_2eddf0, sub_33f60
   ref: Set input primitive to patches of size 4
*/
void Set_input_primitive_to_patches_of_size_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7fc0ULL || rel >= 0x2c8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8080 size=160 callers=1 calls=4
   calls: sub_2ed320, sub_340d0, sub_34110, sub_34210
*/
void sub_2c8080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8080ULL || rel >= 0x2c8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8120 size=16 callers=1 calls=0
*/
void sub_2c8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8120ULL || rel >= 0x2c8130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8130 size=224 callers=11 calls=4
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0
*/
void sub_2c8130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8130ULL || rel >= 0x2c8210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8210 size=48 callers=7 calls=0
*/
void sub_2c8210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8210ULL || rel >= 0x2c8240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8240 size=288 callers=3 calls=5
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0, sub_342b0
*/
void sub_2c8240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8240ULL || rel >= 0x2c8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8360 size=320 callers=30 calls=6
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0, sub_34310, sub_34370
*/
void sub_2c8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8360ULL || rel >= 0x2c84a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c84a0 size=304 callers=1 calls=5
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0, sub_34310
*/
void sub_2c84a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c84a0ULL || rel >= 0x2c85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c85d0 size=336 callers=2 calls=7
   calls: sub_2c8130, sub_2c8720, sub_2c8800, sub_33140, sub_33910, sub_339f0, sub_34520
*/
void sub_2c85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c85d0ULL || rel >= 0x2c8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8720 size=224 callers=25 calls=4
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0
*/
void sub_2c8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8720ULL || rel >= 0x2c8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8800 size=496 callers=6 calls=11
   calls: sub_2c8720, sub_2c9220, sub_2c98f0, sub_330f0, sub_33140, sub_33910, sub_33960, sub_339b0, sub_339f0, sub_33e60, sub_33e70
*/
void sub_2c8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8800ULL || rel >= 0x2c89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c89f0 size=336 callers=2 calls=7
   calls: sub_2c8130, sub_2c8720, sub_2c8800, sub_33140, sub_33910, sub_339f0, sub_343d0
*/
void sub_2c89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c89f0ULL || rel >= 0x2c8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8b40 size=224 callers=16 calls=4
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0
*/
void sub_2c8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8b40ULL || rel >= 0x2c8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8c20 size=304 callers=4 calls=6
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0, sub_34560, sub_34580
*/
void sub_2c8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8c20ULL || rel >= 0x2c8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8d50 size=176 callers=6 calls=5
   calls: sub_330f0, sub_33140, sub_333e0, sub_339b0, sub_339f0
*/
void sub_2c8d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8d50ULL || rel >= 0x2c8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8e00 size=352 callers=36 calls=5
   calls: sub_330f0, sub_33140, sub_33910, sub_339b0, sub_339f0
*/
void sub_2c8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8e00ULL || rel >= 0x2c8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c8f60 size=256 callers=7 calls=5
   calls: sub_330f0, sub_33140, sub_33910, sub_339b0, sub_339f0
*/
void sub_2c8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c8f60ULL || rel >= 0x2c9060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c9060 size=224 callers=3 calls=4
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0
*/
void sub_2c9060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c9060ULL || rel >= 0x2c9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c9140 size=224 callers=20 calls=4
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0
*/
void sub_2c9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c9140ULL || rel >= 0x2c9220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c9220 size=416 callers=25 calls=5
   calls: sub_330f0, sub_33140, sub_33910, sub_339b0, sub_339f0
*/
void sub_2c9220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c9220ULL || rel >= 0x2c93c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c93c0 size=32 callers=6 calls=0
*/
void sub_2c93c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c93c0ULL || rel >= 0x2c93e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c93e0 size=32 callers=2 calls=0
*/
void sub_2c93e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c93e0ULL || rel >= 0x2c9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c9400 size=224 callers=11 calls=4
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0
*/
void sub_2c9400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c9400ULL || rel >= 0x2c94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c94e0 size=416 callers=4 calls=5
   calls: sub_330f0, sub_33140, sub_33910, sub_339b0, sub_339f0
*/
void sub_2c94e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c94e0ULL || rel >= 0x2c9680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c9680 size=224 callers=4 calls=4
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0
*/
void sub_2c9680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c9680ULL || rel >= 0x2c9760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c9760 size=224 callers=1 calls=4
   calls: sub_330f0, sub_33140, sub_339b0, sub_339f0
*/
void sub_2c9760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c9760ULL || rel >= 0x2c9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c9840 size=176 callers=4 calls=8
   calls: d_fatal_error_C9999, sub_2c8720, sub_2c9140, sub_2c9400, sub_2c9680, sub_2c9760, sub_33140, sub_339f0
   ref: bad dag size %d in NewNaryDag
*/
void bad_dag_size_d_in_NewNaryDag(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c9840ULL || rel >= 0x2c98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c98f0 size=240 callers=9 calls=3
   calls: sub_33960, sub_339b0, sub_339f0
*/
void sub_2c98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c98f0ULL || rel >= 0x2c99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c99e0 size=160 callers=1 calls=4
   calls: sub_2c9220, sub_33140, sub_33910, sub_339f0
*/
void sub_2c99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c99e0ULL || rel >= 0x2c9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c9a80 size=16 callers=1 calls=0
*/
void sub_2c9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c9a80ULL || rel >= 0x2c9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c9a90 size=2544 callers=24 calls=36
   calls: address_of__s, bad_dag_size_d_in_NewNaryDag, sub_2c8130, sub_2c85d0, sub_2c8720, sub_2c8800, sub_2c89f0, sub_2c8c20, sub_2c8e00, sub_2c9140, sub_2c9220, sub_2c98f0
   ... +24 more
*/
void sub_2c9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c9a90ULL || rel >= 0x2ca480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ca480 size=400 callers=1 calls=12
   calls: mem_Alloc, sub_1630, sub_2060, sub_2eac60, sub_33f00, sub_33f20, sub_33f50, sub_33f70, sub_33fa0, sub_33fb0, sub_3608f0, sub_3670
   ref: $kill_%04d
*/
void kill__04d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ca480ULL || rel >= 0x2ca610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ca610 size=800 callers=2 calls=18
   calls: mem_Alloc, sub_2eac60, sub_33f00, sub_33f20, sub_33f40, sub_33f50, sub_33f70, sub_33f80, sub_33fa0, sub_33ff0, sub_34030, sub_34070
   ... +6 more
   ref: $tex-%04d
*/
void tex_04d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ca610ULL || rel >= 0x2ca930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ca930 size=240 callers=1 calls=7
   calls: mem_Alloc, sub_33f00, sub_33f20, sub_33f50, sub_33fa0, sub_3608f0, sub_367630
   ref: $allsamp
*/
void allsamp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ca930ULL || rel >= 0x2caa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002caa20 size=272 callers=6 calls=7
   calls: mem_Alloc, sub_2caf30, sub_33fb0, sub_33fd0, sub_36d550, sub_36d630, unhandled_type_category_d_in_CreateDag
*/
void sub_2caa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2caa20ULL || rel >= 0x2cab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cab30 size=1024 callers=7 calls=13
   calls: d_fatal_error_C9999, sub_2cd1a0, sub_33f20, sub_33f50, sub_33f60, sub_33f70, sub_33ff0, sub_34030, sub_34070, sub_34080, sub_34090, sub_36d630
   ... +1 more
   ref: unhandled type category %d in CreateDag
*/
void unhandled_type_category_d_in_CreateDag(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cab30ULL || rel >= 0x2caf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002caf30 size=464 callers=4 calls=12
   calls: mem_Alloc, sub_2caf30, sub_2edeb0, sub_33f10, sub_33f40, sub_33fb0, sub_33fd0, sub_34020, sub_34060, sub_36cd20, sub_36d050, sub_36d9a0
*/
void sub_2caf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2caf30ULL || rel >= 0x2cb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb100 size=96 callers=9 calls=1
   calls: sub_3608f0
   ref: %s-%04d
*/
void s_04d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb100ULL || rel >= 0x2cb160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb160 size=160 callers=2 calls=3
   calls: sub_2cb160, sub_36d050, sub_36d9a0
*/
void sub_2cb160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb160ULL || rel >= 0x2cb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb200 size=272 callers=2 calls=2
   calls: s_s_s_4, sub_33f10
   ref: %s%s%s
*/
void s_s_s_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb200ULL || rel >= 0x2cb310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb310 size=192 callers=3 calls=1
   calls: sub_33f10
*/
void sub_2cb310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb310ULL || rel >= 0x2cb3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb3d0 size=432 callers=5 calls=4
   calls: mem_Alloc, sub_2caa20, sub_3608f0, sub_36d510
   ref: %s$$ret
   ref: %s$$%d
*/
void unnamed_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb3d0ULL || rel >= 0x2cb580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb580 size=208 callers=35 calls=7
   calls: sub_2c8080, sub_340c0, sub_340f0, sub_34120, sub_34160, sub_341f0, sub_34280
*/
void sub_2cb580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb580ULL || rel >= 0x2cb650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb650 size=48 callers=5 calls=0
*/
void sub_2cb650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb650ULL || rel >= 0x2cb680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb680 size=320 callers=26 calls=6
   calls: sub_2c8720, sub_330f0, sub_33140, sub_33910, sub_339b0, sub_339f0
*/
void sub_2cb680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb680ULL || rel >= 0x2cb7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb7c0 size=432 callers=2 calls=10
   calls: mem_Alloc, sub_1630, sub_2c9a90, sub_2cd550, sub_2eac60, sub_3608f0, sub_3670, sub_36c570, sub_36e110, sub_36e230
   ref: __address_of_%s
*/
void address_of__s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb7c0ULL || rel >= 0x2cb970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb970 size=96 callers=3 calls=2
   calls: mem_Alloc, sub_2cd550
*/
void sub_2cb970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb970ULL || rel >= 0x2cb9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cb9d0 size=624 callers=4 calls=14
   calls: sub_1cd0, sub_2c8240, sub_2c8360, sub_2c8720, sub_2c9220, sub_330f0, sub_33140, sub_33910, sub_339b0, sub_339f0, sub_33ef0, sub_33f40
   ... +2 more
*/
void sub_2cb9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cb9d0ULL || rel >= 0x2cbc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cbc40 size=3744 callers=20 calls=41
   calls: address_of__s, sub_2ac460, sub_2c8720, sub_2c8800, sub_2c8c20, sub_2c8e00, sub_2c9140, sub_2c9220, sub_2c9a90, sub_2ccae0, sub_2ccec0, sub_2d00d0
   ... +29 more
   ref: :[C%d]
*/
void unnamed_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cbc40ULL || rel >= 0x2ccae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ccae0 size=992 callers=3 calls=18
   calls: sub_2c8360, sub_2c8e00, sub_2c9220, sub_2c9a90, sub_2cb680, sub_2cebc0, sub_2ee110, sub_33140, sub_338f0, sub_33960, sub_339b0, sub_339f0
   ... +6 more
*/
void sub_2ccae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ccae0ULL || rel >= 0x2ccec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ccec0 size=736 callers=2 calls=17
   calls: sub_2c9060, sub_2cebc0, sub_2ee110, sub_33140, sub_338f0, sub_33910, sub_33960, sub_339b0, sub_339f0, sub_33ef0, sub_33f10, sub_33fb0
   ... +5 more
*/
void sub_2ccec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ccec0ULL || rel >= 0x2cd1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cd1a0 size=400 callers=1 calls=8
   calls: sub_33f00, sub_33f20, sub_33f50, sub_33f70, sub_33f80, sub_33f90, sub_33fa0, sub_3608f0
*/
void sub_2cd1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cd1a0ULL || rel >= 0x2cd330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cd330 size=544 callers=1 calls=8
   calls: mem_Alloc, sub_2eac60, sub_33f40, sub_33f80, sub_33fb0, sub_3608f0, sub_3670, unhandled_type_category_d_in_CreateDag
   ref: $collapse_%d
   ref: %s[%d]
*/
void unnamed_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cd330ULL || rel >= 0x2cd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cd550 size=480 callers=12 calls=8
   calls: sub_2c9a90, sub_2caf30, sub_2d0250, sub_2edeb0, sub_33fb0, sub_33fd0, unhandled_type_category_d_in_CreateDag, unnamed_18
*/
void sub_2cd550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cd550ULL || rel >= 0x2cd730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cd730 size=448 callers=17 calls=7
   calls: mem_Alloc, sub_2cb310, sub_2cd550, sub_2cd730, sub_3373f0, sub_33f40, unnamed_19
*/
void sub_2cd730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cd730ULL || rel >= 0x2cd8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cd8f0 size=144 callers=2 calls=2
   calls: mem_Alloc, tex_04d
*/
void sub_2cd8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cd8f0ULL || rel >= 0x2cd980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cd980 size=96 callers=4 calls=2
   calls: allsamp, sub_2c9a90
*/
void sub_2cd980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cd980ULL || rel >= 0x2cd9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cd9e0 size=448 callers=2 calls=2
   calls: sub_2cd9e0, sub_33fb0
*/
void sub_2cd9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cd9e0ULL || rel >= 0x2cdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cdba0 size=208 callers=19 calls=6
   calls: sub_33fb0, sub_34230, sub_34250, sub_34270, sub_34290, unhandled_type_category_d_in_CreateDag
   ref: bb-controlflow
*/
void bb_controlflow_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cdba0ULL || rel >= 0x2cdc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cdc70 size=80 callers=3 calls=2
   calls: bb_controlflow_3, sub_2cb580
*/
void sub_2cdc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cdc70ULL || rel >= 0x2cdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cdcc0 size=80 callers=8 calls=1
   calls: unnamed_18
*/
void sub_2cdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cdcc0ULL || rel >= 0x2cdd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cdd10 size=720 callers=3 calls=15
   calls: mem_Alloc, sub_2c8240, sub_2c8360, sub_2c9220, sub_2cb310, sub_2cb680, sub_2cd550, sub_2cdd10, sub_3373f0, sub_339f0, sub_33f40, sub_34020
   ... +3 more
*/
void sub_2cdd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cdd10ULL || rel >= 0x2cdfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cdfe0 size=704 callers=4 calls=13
   calls: mem_Alloc, sub_2c8240, sub_2c8360, sub_2c9220, sub_2cb310, sub_2cb680, sub_2cd550, sub_2cdfe0, sub_3373f0, sub_339f0, sub_33f40, sub_36d4e0
   ... +1 more
*/
void sub_2cdfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cdfe0ULL || rel >= 0x2ce2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ce2a0 size=2336 callers=1 calls=19
   calls: sub_2c8360, sub_2c8e00, sub_2c9220, sub_2c98f0, sub_2c9a90, sub_2cb9d0, sub_2cdd10, sub_2cdfe0, sub_2cebc0, sub_330f0, sub_33140, sub_33960
   ... +7 more
*/
void sub_2ce2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ce2a0ULL || rel >= 0x2cebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cebc0 size=624 callers=7 calls=10
   calls: sub_2c8e00, sub_33140, sub_33910, sub_33960, sub_339f0, sub_33e80, sub_33ef0, sub_33f40, sub_33fd0, sub_340a0
*/
void sub_2cebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cebc0ULL || rel >= 0x2cee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cee30 size=16 callers=0 calls=0
*/
void sub_2cee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cee30ULL || rel >= 0x2cee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cee40 size=16 callers=0 calls=0
*/
void sub_2cee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cee40ULL || rel >= 0x2cee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cee50 size=112 callers=0 calls=2
   calls: sub_2cd730, sub_33f40
*/
void sub_2cee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cee50ULL || rel >= 0x2ceec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ceec0 size=448 callers=0 calls=13
   calls: s_s_s_4, sub_2caa20, sub_2cb160, sub_2cd730, sub_2cd9e0, sub_2cf080, sub_2cf0e0, sub_2eddf0, sub_2edeb0, sub_33f40, sub_3608f0, sub_3627b0
   ... +1 more
   ref: tmp$%s
*/
void tmp_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ceec0ULL || rel >= 0x2cf080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cf080 size=96 callers=2 calls=1
   calls: sub_2cf080
*/
void sub_2cf080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cf080ULL || rel >= 0x2cf0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cf0e0 size=176 callers=2 calls=3
   calls: sub_2c9a90, sub_2cf0e0, unnamed_18
*/
void sub_2cf0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cf0e0ULL || rel >= 0x2cf190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cf190 size=2448 callers=1 calls=38
   calls: NOPERSPECTIVE_3, Set_input_primitive_to_patches_of_size_4, bb_controlflow_3, sub_1cd0, sub_2880, sub_2a4ba0, sub_2c8e00, sub_2cb580, sub_2cfcc0, sub_2daad0, sub_2dacc0, sub_2ed1a0
   ... +26 more
   ref: invalid value '%d' for layout qualifier '%s'
   ref: (%s = %d) already used
*/
void s_d_already_used(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cf190ULL || rel >= 0x2cfb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cfb20 size=80 callers=0 calls=2
   calls: sub_2ac3d0, sub_36a2e0
*/
void sub_2cfb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cfb20ULL || rel >= 0x2cfb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cfb70 size=272 callers=0 calls=3
   calls: mem_Alloc, sub_36cd20, unnamed_17
*/
void sub_2cfb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cfb70ULL || rel >= 0x2cfc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cfc80 size=64 callers=0 calls=1
   calls: sub_2d39d0
*/
void sub_2cfc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cfc80ULL || rel >= 0x2cfcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cfcc0 size=816 callers=2 calls=19
   calls: bb_controlflow_3, mem_Alloc, sub_2ac440, sub_2c9a90, sub_2cd550, sub_330f0, sub_33140, sub_333e0, sub_33910, sub_33960, sub_339b0, sub_339f0
   ... +7 more
*/
void sub_2cfcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cfcc0ULL || rel >= 0x2cfff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002cfff0 size=48 callers=0 calls=0
*/
void sub_2cfff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2cfff0ULL || rel >= 0x2d0020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d0020 size=176 callers=0 calls=1
   calls: sub_2880
*/
void sub_2d0020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d0020ULL || rel >= 0x2d00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d00d0 size=384 callers=4 calls=4
   calls: sub_2d00d0, sub_2ed320, sub_3373f0, sub_35f6d0
*/
void sub_2d00d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d00d0ULL || rel >= 0x2d0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d0250 size=240 callers=2 calls=6
   calls: mem_Alloc, sub_2caf30, sub_33fb0, sub_33fd0, sub_3608f0, unhandled_type_category_d_in_CreateDag
*/
void sub_2d0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d0250ULL || rel >= 0x2d0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d0340 size=11200 callers=48 calls=64
   calls: assignment, bad_dag_size_d_in_NewNaryDag, bb_controlflow_3, d_fatal_error_C9999, kill__04d, mem_Alloc, sub_2c8130, sub_2c8360, sub_2c85d0, sub_2c8720, sub_2c89f0, sub_2c8b40
   ... +52 more
   ref: lvalue in %s too complex
   ref: array access
   ref: Unhandled expr op %s(%d) in CreateDag
   ref: $side_affect_call
   ref: too few parameters in function call
   ref: symbol not function "%s"
   ref: one program per compilation, program "%s" also defined
   ref: %sarray index out of bounds
*/
void too_many_parameters_in_function_call(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d0340ULL || rel >= 0x2d2f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d2f00 size=256 callers=2 calls=4
   calls: sub_2c8720, sub_33140, sub_33910, sub_339f0
*/
void sub_2d2f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d2f00ULL || rel >= 0x2d3000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d3000 size=1040 callers=2 calls=17
   calls: sub_2c8720, sub_2cb580, sub_2cb680, sub_2cd730, sub_2d34e0, sub_2dacc0, sub_2ee110, sub_33910, sub_33960, sub_339b0, sub_339f0, sub_33ef0
   ... +5 more
   ref: lvalue in %s too complex
   ref: assignment
*/
void assignment(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d3000ULL || rel >= 0x2d3410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d3410 size=208 callers=2 calls=2
   calls: sub_2cb580, sub_3373f0
*/
void sub_2d3410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d3410ULL || rel >= 0x2d34e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d34e0 size=992 callers=1 calls=9
   calls: sub_2c8e00, sub_2d2f00, sub_33140, sub_33910, sub_33960, sub_339b0, sub_339f0, sub_33fb0, unnamed_18
*/
void sub_2d34e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d34e0ULL || rel >= 0x2d38c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d38c0 size=64 callers=0 calls=0
*/
void sub_2d38c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d38c0ULL || rel >= 0x2d3900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d3900 size=208 callers=0 calls=5
   calls: TMP_d_2, sub_2ac3d0, sub_35fae0, sub_3627b0, sub_366eb0
*/
void sub_2d3900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d3900ULL || rel >= 0x2d39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d39d0 size=176 callers=2 calls=1
   calls: sub_2d39d0
*/
void sub_2d39d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d39d0ULL || rel >= 0x2d3a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d3a80 size=6912 callers=11 calls=52
   calls: bb_controlflow_3, d_fatal_error_C9999, mem_Alloc, sub_2880, sub_2c8360, sub_2c84a0, sub_2c8b40, sub_2c8e00, sub_2c9220, sub_2c94e0, sub_2c9680, sub_2c9a90
   ... +40 more
   ref: CreateDag -- break not in loop
   ref: break-%d
   ref: CreateDag -- bad stmt kind %d
   ref: %s(%d)
   ref: loop-%d
   ref: CreateDag -- continue not in loop
*/
void unnamed_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d3a80ULL || rel >= 0x2d5580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5580 size=144 callers=5 calls=5
   calls: sub_2cb580, sub_34110, sub_34180, sub_341f0, sub_369bf0
*/
void sub_2d5580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5580ULL || rel >= 0x2d5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5610 size=608 callers=2 calls=13
   calls: bb_controlflow_3, sub_2c8b40, sub_2c8e00, sub_2c9220, sub_2cb580, sub_2cb680, sub_33910, sub_33960, sub_34180, sub_341a0, sub_34530, too_many_parameters_in_function_call
   ... +1 more
*/
void sub_2d5610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5610ULL || rel >= 0x2d5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5870 size=160 callers=0 calls=1
   calls: sub_2d5910
*/
void sub_2d5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5870ULL || rel >= 0x2d5910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5910 size=128 callers=2 calls=1
   calls: sub_2d5910
*/
void sub_2d5910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5910ULL || rel >= 0x2d5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5990 size=432 callers=1 calls=14
   calls: bb_controlflow_3, mem_Alloc, sub_2c8b40, sub_2c8e00, sub_2c9220, sub_2cb580, sub_2cb680, sub_33910, sub_33960, sub_34180, sub_341a0, sub_34530
   ... +2 more
*/
void sub_2d5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5990ULL || rel >= 0x2d5b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5b40 size=208 callers=4 calls=3
   calls: sub_33e930, sub_369ec0, sub_36a750
*/
void sub_2d5b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5b40ULL || rel >= 0x2d5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5c10 size=208 callers=0 calls=0
*/
void sub_2d5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5c10ULL || rel >= 0x2d5ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5ce0 size=192 callers=0 calls=3
   calls: sub_35f9c0, sub_36d8e0, sub_36d9d0
*/
void sub_2d5ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5ce0ULL || rel >= 0x2d5da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5da0 size=304 callers=3 calls=3
   calls: mem_Alloc, sub_2ed1a0, sub_2ed320
*/
void sub_2d5da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5da0ULL || rel >= 0x2d5ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d5ed0 size=480 callers=1 calls=9
   calls: sub_2ac400, sub_2ac440, sub_2ac450, sub_2ac5e0, sub_2ac640, sub_2ac680, sub_2d6240, sub_360ed0, sub_36a750
*/
void sub_2d5ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d5ed0ULL || rel >= 0x2d60b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d60b0 size=304 callers=0 calls=5
   calls: sub_2acf90, sub_36d110, sub_36d480, sub_36d4b0, unnamed_21
*/
void sub_2d60b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d60b0ULL || rel >= 0x2d61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d61e0 size=96 callers=0 calls=2
   calls: sub_2ac400, sub_2d6240
*/
void sub_2d61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d61e0ULL || rel >= 0x2d6240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6240 size=272 callers=2 calls=6
   calls: sub_2ac400, sub_2ac680, sub_2ac6f0, sub_2ac7d0, sub_35fae0, sub_360ed0
*/
void sub_2d6240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6240ULL || rel >= 0x2d6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6350 size=160 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_2d6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6350ULL || rel >= 0x2d63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d63f0 size=176 callers=3 calls=2
   calls: mem_Alloc, sub_2f96e0
*/
void sub_2d63f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d63f0ULL || rel >= 0x2d64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d64a0 size=160 callers=3 calls=1
   calls: mem_Alloc
*/
void sub_2d64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d64a0ULL || rel >= 0x2d6540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6540 size=160 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_2d6540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6540ULL || rel >= 0x2d65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d65e0 size=224 callers=2 calls=2
   calls: parameter, sub_2d8090
   ref: enddebuginfo
   ref: debuginfo
   ref: endfile : "%s"
*/
void enddebuginfo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d65e0ULL || rel >= 0x2d66c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d66c0 size=1040 callers=4 calls=6
   calls: file_s, interfaceNV, parameter, sub_2d8090, sub_2d82f0, sub_354520
   ref: end%s : %s : %d
   ref: endblock : %d
   ref: uniform 
   ref: block : %d
   ref: end%s : %d
   ref: parameter
   ref: %s : %d
   ref: variable
*/
void parameter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d66c0ULL || rel >= 0x2d6ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6ad0 size=48 callers=1 calls=1
   calls: sub_2a4ba0
*/
void sub_2d6ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6ad0ULL || rel >= 0x2d6b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6b00 size=480 callers=2 calls=11
   calls: mem_AddCleanup, mem_Alloc, mem_CreatePool, sub_210, sub_220, sub_230, sub_240, sub_250, sub_2ed1a0, sub_2ed320, sub_2ed440
*/
void sub_2d6b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6b00ULL || rel >= 0x2d6ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6ce0 size=384 callers=1 calls=5
   calls: mem_AddCleanup, mem_Alloc, mem_CreatePool, sub_2ed1a0, sub_2ed320
*/
void sub_2d6ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6ce0ULL || rel >= 0x2d6e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6e60 size=384 callers=1 calls=4
   calls: mem_AddCleanup, mem_CreatePool, sub_2ed1a0, sub_2ed440
*/
void sub_2d6e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6e60ULL || rel >= 0x2d6fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d6fe0 size=432 callers=1 calls=2
   calls: sub_354190, sub_35f6d0
   ref: INCLUDED_FILE
   ref: SOURCE_FILE
   ref: #MSDB: (%s:%d:%d:
   ref: LINE_REFERENCE_FILE
*/
void LINE_REFERENCE_FILE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d6fe0ULL || rel >= 0x2d7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d7190 size=976 callers=1 calls=10
   calls: LINE_REFERENCE_FILE, STRUCT, SVT_TEXTURECUBEARRAY, mem_AddCleanup, mem_CreatePool, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_35f6d0, sub_36cd20
   ref: %sMSDB: (Scope %d STDLIB (
*/
void sMSDB_Scope_d_STDLIB(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d7190ULL || rel >= 0x2d7560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d7560 size=624 callers=4 calls=7
   calls: SVT_TEXTURECUBEARRAY, mem_AddCleanup, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_35f6d0, sub_360bb0
   ref: GLOBAL
   ref: STRUCT
   ref: %sMSDB: (Scope %d %s %s (
*/
void STRUCT(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d7560ULL || rel >= 0x2d77d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d77d0 size=2016 callers=3 calls=32
   calls: SAMPLERSTATE, sub_1e20, sub_1e30, sub_1e40, sub_2060, sub_2220, sub_2ac400, sub_2ac450, sub_2ac460, sub_2ac600, sub_2ac640, sub_2ac680
   ... +20 more
   ref: %sdebug 
   ref: profile does not support debug()
   ref: $debug-color-%d
   ref: $debug-set-%d
   ref:  : %d : 
   ref: $debug-%d
*/
void unnamed_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d77d0ULL || rel >= 0x2d7fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d7fb0 size=32 callers=0 calls=0
*/
void sub_2d7fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d7fb0ULL || rel >= 0x2d7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d7fd0 size=176 callers=3 calls=3
   calls: sub_1e30, sub_1e40, sub_2d7fd0
*/
void sub_2d7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d7fd0ULL || rel >= 0x2d8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8080 size=16 callers=0 calls=0
*/
void sub_2d8080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8080ULL || rel >= 0x2d8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8090 size=288 callers=10 calls=2
   calls: sub_35f560, sub_35f6d0
*/
void sub_2d8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8090ULL || rel >= 0x2d81b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d81b0 size=320 callers=5 calls=1
   calls: sub_2d8090
   ref: file : "%s"
   ref: endfile : "%s"
*/
void file_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d81b0ULL || rel >= 0x2d82f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d82f0 size=144 callers=5 calls=1
   calls: sub_35f560
*/
void sub_2d82f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d82f0ULL || rel >= 0x2d8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8380 size=2128 callers=2 calls=17
   calls: STRUCT, sub_2ed320, sub_2ed440, sub_354520, sub_35f6d0, sub_3608f0, sub_362aa0, sub_36d110, sub_36d4b0, sub_36d630, sub_36d6b0, sub_36d760
   ... +5 more
   ref: SVC_VECTOR
   ref: SVT_TEXTURECUBEARRAY
   ref: SVT_ATOMIC_UINT
   ref: %sMSDB: (%s %d
   ref: SVC_INTERFACE_CLASS
   ref: SVT_INT
   ref: SVT_INT16
   ref: SVT_INT64
*/
void SVT_TEXTURECUBEARRAY(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8380ULL || rel >= 0x2d8bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8bd0 size=448 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_2d8bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8bd0ULL || rel >= 0x2d8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8d90 size=272 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_2d8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8d90ULL || rel >= 0x2d8ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8ea0 size=80 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_2d8ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8ea0ULL || rel >= 0x2d8ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8ef0 size=80 callers=0 calls=1
   calls: d_fatal_error_C9999
   ref: loops not visited in FIFO order
*/
void loops_not_visited_in_FIFO_order(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8ef0ULL || rel >= 0x2d8f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d8f40 size=304 callers=0 calls=5
   calls: sub_2f75e0, sub_2fa200, sub_2fa4a0, sub_31da60, unexpected_expression_in_DUI_foreachId
*/
void sub_2d8f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d8f40ULL || rel >= 0x2d9070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d9070 size=1712 callers=8 calls=12
   calls: d_fatal_error_C9999, sub_2da880, sub_2f9210, sub_2f9880, sub_306070, sub_3188c0, sub_31b710, sub_31b820, sub_31d890, sub_31da60, sub_31dcb0, unexpected_expression_in_DUI_foreachId
   ref: unexpected expression in DUI_foreachId
*/
void unexpected_expression_in_DUI_foreachId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d9070ULL || rel >= 0x2d9720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d9720 size=192 callers=0 calls=1
   calls: sub_2ed320
*/
void sub_2d9720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d9720ULL || rel >= 0x2d97e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d97e0 size=128 callers=0 calls=1
   calls: unexpected_expression_in_DUI_foreachId
*/
void sub_2d97e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d97e0ULL || rel >= 0x2d9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d9860 size=128 callers=0 calls=3
   calls: sub_2fa200, sub_2fa5c0, unexpected_expression_in_DUI_foreachId
*/
void sub_2d9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d9860ULL || rel >= 0x2d98e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d98e0 size=304 callers=0 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_2d98e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d98e0ULL || rel >= 0x2d9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d9a10 size=288 callers=2 calls=2
   calls: mem_Alloc, sub_2ed320
*/
void sub_2d9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d9a10ULL || rel >= 0x2d9b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d9b30 size=336 callers=0 calls=6
   calls: sub_2d9a10, sub_2ed320, sub_2f75e0, sub_2fa200, sub_2fa4a0, unexpected_expression_in_DUI_foreachId
*/
void sub_2d9b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d9b30ULL || rel >= 0x2d9c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d9c80 size=208 callers=0 calls=2
   calls: mem_Alloc, sub_2ed320
*/
void sub_2d9c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d9c80ULL || rel >= 0x2d9d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d9d50 size=128 callers=0 calls=1
   calls: unexpected_expression_in_DUI_foreachId
*/
void sub_2d9d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d9d50ULL || rel >= 0x2d9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d9dd0 size=144 callers=0 calls=0
*/
void sub_2d9dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d9dd0ULL || rel >= 0x2d9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d9e60 size=352 callers=1 calls=2
   calls: mem_Alloc, sub_2ed1a0
*/
void sub_2d9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d9e60ULL || rel >= 0x2d9fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002d9fc0 size=1584 callers=2 calls=15
   calls: mem_Alloc, mem_CreatePool, sub_2a45a0, sub_2a4690, sub_2a4ba0, sub_2d9e60, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_2f6e10, sub_2f7060, sub_2f72e0
   ... +3 more
*/
void sub_2d9fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2d9fc0ULL || rel >= 0x2da5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002da5f0 size=240 callers=0 calls=5
   calls: sub_2da880, sub_2ed320, sub_2ed440, sub_306070, sub_31da60
*/
void sub_2da5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2da5f0ULL || rel >= 0x2da6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002da6e0 size=256 callers=0 calls=5
   calls: sub_2a42a0, sub_2da880, sub_2ed320, sub_2fa5c0, sub_31da60
*/
void sub_2da6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2da6e0ULL || rel >= 0x2da7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002da7e0 size=144 callers=0 calls=3
   calls: sub_2a45a0, sub_2a4910, sub_2ed320
*/
void sub_2da7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2da7e0ULL || rel >= 0x2da870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002da870 size=16 callers=0 calls=0
*/
void sub_2da870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2da870ULL || rel >= 0x2da880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002da880 size=592 callers=9 calls=5
   calls: sub_2da880, sub_306070, sub_31b710, sub_31b820, sub_31dcb0
*/
void sub_2da880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2da880ULL || rel >= 0x2daad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002daad0 size=16 callers=17 calls=0
*/
void sub_2daad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2daad0ULL || rel >= 0x2daae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002daae0 size=480 callers=3 calls=1
   calls: sub_35f6d0
   ref: (%d) : error C0000: 
   ref:  at token "%s"
   ref: reserved word
   ref: %s(%d) : error C0000: 
*/
void reserved_word(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2daae0ULL || rel >= 0x2dacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dacc0 size=128 callers=450 calls=1
   calls: d_error_C_04d
*/
void sub_2dacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dacc0ULL || rel >= 0x2dad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dad40 size=368 callers=4 calls=3
   calls: d_warning_C_04d, sub_35f560, sub_35f6d0
   ref: %s(%d) : error C%04d: 
   ref: (%d) : error C%04d: 
*/
void d_error_C_04d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dad40ULL || rel >= 0x2daeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002daeb0 size=80 callers=1 calls=0
*/
void sub_2daeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2daeb0ULL || rel >= 0x2daf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002daf00 size=336 callers=6 calls=2
   calls: sub_35f560, sub_35f6d0
   ref: %s(%d) : warning C%04d: 
   ref: (%d) : warning C%04d: 
*/
void d_warning_C_04d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2daf00ULL || rel >= 0x2db050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db050 size=352 callers=1 calls=3
   calls: d_warning_C_04d, sub_35f560, sub_35f6d0
   ref: %s(%d) : error C%04d: 
   ref: (%d) : error C%04d: 
*/
void d_error_C_04d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db050ULL || rel >= 0x2db1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db1b0 size=288 callers=15 calls=2
   calls: sub_35f560, sub_35f6d0
   ref: %s(%d) : error C%04d: 
   ref: (%d) : error C%04d: 
*/
void d_error_C_04d_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db1b0ULL || rel >= 0x2db2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db2d0 size=368 callers=77 calls=3
   calls: sub_35f430, sub_35f560, sub_35f6d0
   ref: (%d) : fatal error C9999: 
*/
void d_fatal_error_C9999(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db2d0ULL || rel >= 0x2db440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db440 size=144 callers=0 calls=1
   calls: sub_2dacc0
   ref: (%d) : fatal error C9008: out of memory - malloc failed
   ref: malloc failed in "%s"
*/
void malloc_failed_in_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db440ULL || rel >= 0x2db4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db4d0 size=16 callers=10 calls=0
*/
void sub_2db4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db4d0ULL || rel >= 0x2db4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db4e0 size=16 callers=14 calls=0
*/
void sub_2db4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db4e0ULL || rel >= 0x2db4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db4f0 size=128 callers=50 calls=1
   calls: d_warning_C_04d
*/
void sub_2db4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db4f0ULL || rel >= 0x2db570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db570 size=144 callers=5 calls=2
   calls: d_error_C_04d, d_warning_C_04d
*/
void sub_2db570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db570ULL || rel >= 0x2db600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db600 size=48 callers=0 calls=1
   calls: d_warning_C_04d
*/
void sub_2db600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db600ULL || rel >= 0x2db630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db630 size=224 callers=355 calls=2
   calls: d_error_C_04d, d_warning_C_04d
*/
void sub_2db630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db630ULL || rel >= 0x2db710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db710 size=480 callers=23 calls=3
   calls: d_error_C_04d_2, sub_35f560, sub_35f6d0
   ref: %s(%d) : warning C%04d: 
   ref: (%d) : warning C%04d: 
*/
void d_warning_C_04d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db710ULL || rel >= 0x2db8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db8f0 size=64 callers=7 calls=0
   ref: unmatched #%s
*/
void unmatched_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db8f0ULL || rel >= 0x2db930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002db930 size=560 callers=1 calls=1
   calls: sub_2c6e40
   ref: itexture1DArray=__itexture1DArray_VK
   ref: itexture2D=__itexture2D_VK
   ref: itexture2DMS=__itexture2DMS_VK
   ref: itexture1D=__itexture1D_VK
   ref: utextureCube=__utextureCube_VK
   ref: textureCube=__textureCube_VK
   ref: texture2DRect=__texture2DRect_VK
   ref: utexture3D=__utexture3D_VK
*/
void texture3D___texture3D_VK(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2db930ULL || rel >= 0x2dbb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dbb60 size=144 callers=1 calls=1
   calls: sub_2c6e40
   ref: gl_SubgroupID=(uint(gl_LocalInvocationIndex / 32))
   ref: gl_SubgroupLeMask=(uvec4(gl_ThreadLeMaskNV,0,0,0))
   ref: gl_SubgroupGeMask=(uvec4(gl_ThreadGeMaskNV,0,0,0))
   ref: gl_SubgroupEqMask=(uvec4(gl_ThreadEqMaskNV,0,0,0))
   ref: gl_SubgroupLtMask=(uvec4(gl_ThreadLtMaskNV,0,0,0))
   ref: gl_NumSubgroups=(uint((gl_WorkGroupSize.x*gl_WorkGroupSize.y*gl_WorkGroupSize.z + 31) / 32))
   ref: gl_SubgroupGtMask=(uvec4(gl_ThreadGtMaskNV,0,0,0))
*/
void f_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dbb60ULL || rel >= 0x2dbbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dbbf0 size=624 callers=1 calls=2
   calls: sub_2c6e40, sub_2dacc0
   ref: utexture2DMS=__utexture2DMS_GL
   ref: texture2D=__texture2D_GL
   ref: utextureBuffer=__utextureBuffer_GL
   ref: itextureBuffer=__itextureBuffer_GL
   ref: texture1D=__texture1D_GL
   ref: texture2DArray=__texture2DArray_GL
   ref: textureBuffer=__textureBuffer_GL
   ref: utexture2D=__utexture2D_GL
*/
void texture3D___texture3D_GL(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dbbf0ULL || rel >= 0x2dbe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dbe60 size=1536 callers=3 calls=7
   calls: sub_2b7e60, sub_2dacc0, sub_2db4f0, sub_2db630, sub_3608f0, sub_36b990, texture3D___texture3D_GL
   ref: OpenGL requires extension names to begin with 'GL_'
   ref: extension all : require
   ref: ARB_compatibility is not supported in GLSL version %d. Use compatibility profile.
   ref: %s does not allow %s
   ref: extension %s not supported in profile %s
   ref: extension %s not supported
   ref: OpenGL ES 310
   ref: extension all : enable
*/
void GL_ARB_shader_subroutine(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dbe60ULL || rel >= 0x2dc460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dc460 size=272 callers=1 calls=2
   calls: GL_ARB_shader_subroutine, sub_2dacc0
   ref: expected '#extension <name> : <action>'
*/
void expected_extension_name_action(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dc460ULL || rel >= 0x2dc570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dc570 size=768 callers=2 calls=2
   calls: sub_2c6e40, sub_3608f0
   ref: GL_core_profile
   ref: GL_es_profile
   ref: GL_compatibility_profile
*/
void GL_compatibility_profile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dc570ULL || rel >= 0x2dc870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dc870 size=80 callers=4 calls=0
*/
void sub_2dc870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dc870ULL || rel >= 0x2dc8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dc8c0 size=272 callers=3 calls=7
   calls: sub_2dc8c0, sub_340ca0, sub_36d050, sub_36d790, sub_36d8e0, sub_36d9a0, sub_36d9d0
*/
void sub_2dc8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dc8c0ULL || rel >= 0x2dc9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dc9d0 size=208 callers=6 calls=6
   calls: sub_2dc9d0, sub_340ca0, sub_36d050, sub_36d8e0, sub_36d9a0, sub_36d9d0
*/
void sub_2dc9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dc9d0ULL || rel >= 0x2dcaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dcaa0 size=32 callers=2 calls=0
*/
void sub_2dcaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dcaa0ULL || rel >= 0x2dcac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dcac0 size=656 callers=0 calls=13
   calls: d_fatal_error_C9999, sub_2acf90, sub_2dacc0, sub_2dc8c0, sub_337300, sub_35f390, sub_35f400, sub_35f430, sub_35f470, sub_35f6d0, sub_35fae0, sub_36c570
   ... +1 more
   ref: cannot determine type of interface variable. Need to inline function
   ref: badly formed member access
*/
void badly_formed_member_access(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dcac0ULL || rel >= 0x2dcd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dcd50 size=528 callers=0 calls=6
   calls: sub_2db630, sub_32bad0, sub_32bae0, sub_32bb00, sub_32bb10, sub_32bb20
   ref: cannot use non zero stream layout qualifier for passthrough geometry shaders
   ref: cannot use max_vertices layout qualifier for passthrough geometry shaders
   ref: passthrough geometry shaders
   ref: cannot use output primitive type qualifiers for passthrough geometry shaders
   ref: layout qualifier '%s', incompatible with '%s'
   ref: max_vertices should be declared for geometry shaders
   ref: layout qualifier 'invocations' should have value 1 for passthrough geometry shaders
*/
void passthrough_geometry_shaders(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dcd50ULL || rel >= 0x2dcf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dcf60 size=1488 callers=0 calls=5
   calls: Unknown_profile_option_s_ignored, sub_2b7cb0, sub_2b7e60, sub_2dacc0, sub_2db630
   ref: OES_geometry_shader
   ref: EXT_geometry_shader
   ref: Multiple output primitive types
   ref: Multiple input primitive types
   ref: No input primitive type
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: geometry shader
   ref: No output primitive type
*/
void OES_geometry_shader(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dcf60ULL || rel >= 0x2dd530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dd530 size=176 callers=0 calls=3
   calls: sub_2f77f0, sub_2f7880, sub_2f7950
*/
void sub_2dd530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dd530ULL || rel >= 0x2dd5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dd5e0 size=128 callers=0 calls=2
   calls: sub_2f6e10, sub_2fb680
*/
void sub_2dd5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dd5e0ULL || rel >= 0x2dd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dd660 size=592 callers=0 calls=8
   calls: TMP_d, atomicCompSwap, sub_2f72e0, sub_2f7fb0, sub_2f8290, sub_2fc060, sub_3177b0, sub_317880
*/
void sub_2dd660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dd660ULL || rel >= 0x2dd8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dd8b0 size=112 callers=0 calls=1
   calls: sub_2f7950
*/
void sub_2dd8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dd8b0ULL || rel >= 0x2dd920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dd920 size=704 callers=0 calls=10
   calls: atomicCompSwap, sub_2f77f0, sub_2f7880, sub_2f7950, sub_2f7fb0, sub_2fa960, sub_2fb460, sub_2fb680, sub_2fc060, sub_3177b0
*/
void sub_2dd920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dd920ULL || rel >= 0x2ddbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ddbe0 size=624 callers=0 calls=8
   calls: Unknown_profile_option_s_ignored, sub_2b7cb0, sub_2b7e60, sub_2dacc0, sub_2e0810, sub_3608f0, sub_369ec0, sub_36a070
   ref: Vertices=%d
   ref: emitVertexToStream requires point output with multiple streams
*/
void Vertices_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ddbe0ULL || rel >= 0x2dde50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dde50 size=448 callers=0 calls=1
   calls: sub_337300
*/
void sub_2dde50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dde50ULL || rel >= 0x2de010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de010 size=96 callers=0 calls=0
*/
void sub_2de010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de010ULL || rel >= 0x2de070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de070 size=464 callers=0 calls=6
   calls: Unknown_profile_option_s_ignored, sub_2b7e60, sub_2dacc0, sub_2db4f0, sub_2e8e40, sub_3608f0
   ref: Vertices=%d
   ref: Hardware limitation reached, can only emit %d vertices of this size
   ref: Hardware limitation reached, emitting only %d vertices
*/
void Vertices_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de070ULL || rel >= 0x2de240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de240 size=128 callers=0 calls=0
*/
void sub_2de240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de240ULL || rel >= 0x2de2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de2c0 size=48 callers=0 calls=0
*/
void sub_2de2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de2c0ULL || rel >= 0x2de2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de2f0 size=336 callers=0 calls=3
   calls: sub_2dacc0, sub_2ed320, sub_354520
   ref: barrier() in %s
*/
void barrier_in_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de2f0ULL || rel >= 0x2de440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de440 size=32 callers=0 calls=0
*/
void sub_2de440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de440ULL || rel >= 0x2de460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de460 size=32 callers=0 calls=0
*/
void sub_2de460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de460ULL || rel >= 0x2de480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de480 size=336 callers=1 calls=4
   calls: STREAM, sub_2ed320, sub_302e20, unnamed_22
   ref: STREAM
*/
void STREAM(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de480ULL || rel >= 0x2de5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de5d0 size=496 callers=9 calls=1
   calls: sub_3608f0
   ref: [%d]%n
   ref: %.*s%s
*/
void unnamed_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de5d0ULL || rel >= 0x2de7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de7c0 size=480 callers=2 calls=8
   calls: Invalid_semantic_s_in_emitVertex, sub_2dacc0, sub_2e9890, sub_2eac60, sub_357f10, sub_359610, sub_35d2c0, sub_36d830
   ref: No semantic for %s arg #%d
*/
void No_semantic_for_s_arg_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de7c0ULL || rel >= 0x2de9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002de9a0 size=528 callers=2 calls=4
   calls: Invalid_semantic_s_in_emitVertex, NOPERSPECTIVE_3, sub_2dacc0, sub_354e90
   ref: No semantic on field %s::%s in emitVertex
   ref: Invalid semantic '%s' in emitVertex
*/
void Invalid_semantic_s_in_emitVertex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2de9a0ULL || rel >= 0x2debb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002debb0 size=224 callers=7 calls=1
   calls: sub_2debb0
*/
void sub_2debb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2debb0ULL || rel >= 0x2dec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dec90 size=528 callers=2 calls=0
   ref: PATCH_32
   ref: PATCH_14
   ref: PATCH_18
   ref: PATCH_22
   ref: PATCH_2
   ref: PATCH_28
   ref: PATCH_8
   ref: PATCH_12
*/
void TRIANGLES_ADJACENCY(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dec90ULL || rel >= 0x2deea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002deea0 size=256 callers=1 calls=0
   ref: TRIANGLES_ADJACENCY
   ref: UNKNOWN
   ref: TRIANGLES
   ref: PATCH_%u
   ref: LINES_ADJACENCY
   ref: POINTS
*/
void TRIANGLES_ADJACENCY_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2deea0ULL || rel >= 0x2defa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002defa0 size=160 callers=1 calls=0
   ref: LINE_STRIP
   ref: UNKNOWN
   ref: TRIANGLE_STRIP
   ref: POINTS
*/
void TRIANGLE_STRIP(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2defa0ULL || rel >= 0x2df040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df040 size=32 callers=0 calls=0
   ref: gl_PrimitiveID=gl_PatchPrimitiveID
*/
void gl_PrimitiveID_gl_PatchPrimitiveID(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df040ULL || rel >= 0x2df060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df060 size=80 callers=0 calls=1
   calls: sub_2c6e40
   ref: gl_TessLevelInner=gl_TessLevelInnerIn
   ref: gl_PrimitiveID=gl_PatchPrimitiveID
   ref: gl_TessLevelOuter=gl_TessLevelOuterIn
*/
void gl_PrimitiveID_gl_PatchPrimitiveID_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df060ULL || rel >= 0x2df0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df0b0 size=64 callers=0 calls=1
   calls: sub_2c6e40
   ref: gl_TessLevelInner=gl_TessLevelInnerIn
   ref: gl_TessLevelOuter=gl_TessLevelOuterIn
*/
void gl_TessLevelOuter_gl_TessLevelOuterIn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df0b0ULL || rel >= 0x2df0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df0f0 size=16 callers=0 calls=0
*/
void sub_2df0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df0f0ULL || rel >= 0x2df100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df100 size=656 callers=0 calls=4
   calls: Unknown_profile_option_s_ignored, sub_2b7e60, sub_2dacc0, sub_2db630
   ref: Multiple output primitive types
   ref: EXT_tessellation_shader
   ref: OES_tessellation_shader
   ref: Multiple input primitive types
   ref: No input primitive type
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: tessellation control shader
   ref: No output primitive type
*/
void OES_tessellation_shader(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df100ULL || rel >= 0x2df390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df390 size=672 callers=0 calls=4
   calls: Unknown_profile_option_s_ignored, sub_2b7e60, sub_2dacc0, sub_2db630
   ref: EXT_tessellation_shader
   ref: OES_tessellation_shader
   ref: Multiple input primitive types
   ref: No input primitive type
   ref: conflicting tessellation mode %s
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: tessellation evaluation shader
*/
void OES_tessellation_shader_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df390ULL || rel >= 0x2df630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df630 size=880 callers=2 calls=6
   calls: NOPERSPECTIVE_3, output, sub_2debb0, sub_3608f0, sub_367ab0, unnamed_22
   ref: VERTEX[%d].%s
   ref: VERTEX[%d]
   ref: VERTEX
*/
void VERTEX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df630ULL || rel >= 0x2df9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002df9a0 size=1328 callers=0 calls=6
   calls: NOPERSPECTIVE_3, output, sub_2debb0, sub_3608f0, sub_367ab0, unnamed_22
   ref: %0.*sOUT%s
   ref: VERTEXOUT[%d]
   ref: VERTEXOUT
   ref: VERTEX[%d].%s
   ref: VERTEXOUT[%d].%s
   ref: VERTEX[%d]
   ref: VERTEX
*/
void VERTEXOUT(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2df9a0ULL || rel >= 0x2dfed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dfed0 size=160 callers=3 calls=1
   calls: sub_2dfed0
*/
void sub_2dfed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dfed0ULL || rel >= 0x2dff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002dff70 size=160 callers=3 calls=1
   calls: sub_2dff70
*/
void sub_2dff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2dff70ULL || rel >= 0x2e0010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0010 size=464 callers=3 calls=3
   calls: cannot_locate_suitable_resource_to_bind_variable_s_Possi, state, sub_2e8e40
*/
void sub_2e0010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0010ULL || rel >= 0x2e01e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e01e0 size=624 callers=2 calls=6
   calls: sub_2dacc0, sub_2debb0, sub_2dfed0, sub_2dff70, sub_2e0010, sub_2e0bf0
   ref: cannot locate suitable resource to bind variable "%s". Possibly large array.
*/
void cannot_locate_suitable_resource_to_bind_variable_s_Possi(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e01e0ULL || rel >= 0x2e0450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0450 size=192 callers=0 calls=3
   calls: sub_2dacc0, sub_2ed320, sub_354520
   ref: Multiple possible semantics on emitVertex arg #%d
*/
void Multiple_possible_semantics_on_emitVertex_arg_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0450ULL || rel >= 0x2e0510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0510 size=480 callers=0 calls=4
   calls: mem_Alloc, sub_2dacc0, sub_2f9880, sub_31b2a0
   ref: flatAtrib '%s' type mismatch with %s(%d)
*/
void flatAtrib_s_type_mismatch_with_s_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0510ULL || rel >= 0x2e06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e06f0 size=96 callers=0 calls=0
*/
void sub_2e06f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e06f0ULL || rel >= 0x2e0750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0750 size=192 callers=0 calls=2
   calls: atomicCompSwap, sub_2f7fb0
*/
void sub_2e0750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0750ULL || rel >= 0x2e0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0810 size=464 callers=9 calls=2
   calls: sub_2e0810, sub_369bf0
*/
void sub_2e0810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0810ULL || rel >= 0x2e09e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e09e0 size=336 callers=0 calls=1
   calls: sub_2e0810
*/
void sub_2e09e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e09e0ULL || rel >= 0x2e0b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0b30 size=192 callers=0 calls=2
   calls: sub_2dacc0, sub_337300
   ref: Stream number %d is invalid
*/
void Stream_number_d_is_invalid(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0b30ULL || rel >= 0x2e0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0bf0 size=400 callers=2 calls=1
   calls: sub_2e0bf0
*/
void sub_2e0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0bf0ULL || rel >= 0x2e0d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0d80 size=160 callers=17 calls=2
   calls: mem_Alloc, sub_2ed440
*/
void sub_2e0d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0d80ULL || rel >= 0x2e0e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0e20 size=64 callers=12 calls=0
*/
void sub_2e0e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0e20ULL || rel >= 0x2e0e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0e60 size=32 callers=26 calls=0
*/
void sub_2e0e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0e60ULL || rel >= 0x2e0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e0e80 size=544 callers=3 calls=8
   calls: Unknown_profile_option_s_ignored, mem_Alloc, mem_CreatePool, sub_13d0, sub_2600, sub_2b00e0, sub_2e10a0, sub_3980
   ref: cgc: unknown profile "%s".
   ref: arbvp1
*/
void arbvp1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e0e80ULL || rel >= 0x2e10a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e10a0 size=1776 callers=1 calls=1
   calls: sub_1390
*/
void sub_2e10a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e10a0ULL || rel >= 0x2e1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1790 size=32 callers=0 calls=1
   calls: sub_2a4ba0
*/
void sub_2e1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1790ULL || rel >= 0x2e17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e17b0 size=16 callers=0 calls=0
*/
void sub_2e17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e17b0ULL || rel >= 0x2e17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e17c0 size=176 callers=0 calls=0
*/
void sub_2e17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e17c0ULL || rel >= 0x2e1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1870 size=352 callers=0 calls=0
*/
void sub_2e1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1870ULL || rel >= 0x2e19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e19d0 size=176 callers=0 calls=0
*/
void sub_2e19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e19d0ULL || rel >= 0x2e1a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1a80 size=16 callers=0 calls=0
*/
void sub_2e1a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1a80ULL || rel >= 0x2e1a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1a90 size=16 callers=0 calls=0
*/
void sub_2e1a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1a90ULL || rel >= 0x2e1aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1aa0 size=16 callers=0 calls=0
*/
void sub_2e1aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1aa0ULL || rel >= 0x2e1ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1ab0 size=16 callers=0 calls=0
*/
void sub_2e1ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1ab0ULL || rel >= 0x2e1ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1ac0 size=176 callers=0 calls=0
*/
void sub_2e1ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1ac0ULL || rel >= 0x2e1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1b70 size=192 callers=0 calls=0
*/
void sub_2e1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1b70ULL || rel >= 0x2e1c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1c30 size=16 callers=0 calls=0
*/
void sub_2e1c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1c30ULL || rel >= 0x2e1c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1c40 size=16 callers=0 calls=0
*/
void sub_2e1c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1c40ULL || rel >= 0x2e1c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1c50 size=16 callers=0 calls=0
*/
void sub_2e1c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1c50ULL || rel >= 0x2e1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1c60 size=16 callers=0 calls=0
*/
void sub_2e1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1c60ULL || rel >= 0x2e1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1c70 size=16 callers=0 calls=0
*/
void sub_2e1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1c70ULL || rel >= 0x2e1c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1c80 size=16 callers=0 calls=0
*/
void sub_2e1c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1c80ULL || rel >= 0x2e1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1c90 size=16 callers=0 calls=0
*/
void sub_2e1c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1c90ULL || rel >= 0x2e1ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1ca0 size=16 callers=0 calls=0
*/
void sub_2e1ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1ca0ULL || rel >= 0x2e1cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1cb0 size=16 callers=0 calls=0
*/
void sub_2e1cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1cb0ULL || rel >= 0x2e1cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1cc0 size=272 callers=0 calls=1
   calls: sub_2ec320
*/
void sub_2e1cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1cc0ULL || rel >= 0x2e1dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1dd0 size=16 callers=0 calls=0
*/
void sub_2e1dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1dd0ULL || rel >= 0x2e1de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1de0 size=432 callers=0 calls=4
   calls: sub_2fd140, sub_306070, sub_31b710, sub_31b820
*/
void sub_2e1de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1de0ULL || rel >= 0x2e1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1f90 size=16 callers=0 calls=0
*/
void sub_2e1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1f90ULL || rel >= 0x2e1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1fa0 size=16 callers=0 calls=0
*/
void sub_2e1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1fa0ULL || rel >= 0x2e1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1fb0 size=32 callers=0 calls=0
*/
void sub_2e1fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1fb0ULL || rel >= 0x2e1fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1fd0 size=16 callers=0 calls=0
*/
void sub_2e1fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1fd0ULL || rel >= 0x2e1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1fe0 size=16 callers=0 calls=0
*/
void sub_2e1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1fe0ULL || rel >= 0x2e1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e1ff0 size=3952 callers=0 calls=4
   calls: d_fatal_error_C9999, operands_to_s_must_be_scalar_or_vector, sub_337390, sub_3373f0
   ref: dot product of differing types
   ref: bad argument list in FoldInternalFunciton
   ref: min of differing types
   ref: max of differing types
*/
void min_of_differing_types(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e1ff0ULL || rel >= 0x2e2f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e2f60 size=5776 callers=0 calls=8
   calls: d_fatal_error_C9999, only_applies_to_pointers, sub_2f9210, sub_2fbdc0, sub_3177b0, sub_317880, sub_3188c0, sub_31bef0
   ref: dot product of differing types
   ref: min of differing types
   ref: max of differing types
*/
void min_of_differing_types_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e2f60ULL || rel >= 0x2e45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e45f0 size=16 callers=0 calls=0
*/
void sub_2e45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e45f0ULL || rel >= 0x2e4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e4600 size=16 callers=0 calls=0
*/
void sub_2e4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e4600ULL || rel >= 0x2e4610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e4610 size=16 callers=0 calls=0
*/
void sub_2e4610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e4610ULL || rel >= 0x2e4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e4620 size=48 callers=0 calls=0
*/
void sub_2e4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e4620ULL || rel >= 0x2e4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e4650 size=64 callers=0 calls=1
   calls: sub_2dacc0
   ref: profile does not support function calls
*/
void profile_does_not_support_function_calls(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e4650ULL || rel >= 0x2e4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e4690 size=16 callers=0 calls=0
*/
void sub_2e4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e4690ULL || rel >= 0x2e46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e46a0 size=6000 callers=4 calls=16
   calls: NOPERSPECTIVE_3, d_fatal_error_C9999, multiple_bindings_to_output_semantic_s, sub_1e30, sub_1e40, sub_20c0, sub_2220, sub_2b3b90, sub_2dacc0, sub_2daeb0, sub_2db4f0, sub_2e8e40
   ... +4 more
   ref: semantics "%s" specified for "%s" is compiler internal, cannot be used
   ref: banked semantic must be applied to array
   ref: type %s not supported with semantic %s
   ref: output
   ref: %0.*s%d%s
   ref: variable "%s" type conflicts with semantics "%s"
   ref: variable "%s" domain conflicts with semantics "%s"
   ref: bad semantic modifier "%s" on "%s"
*/
void output(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e46a0ULL || rel >= 0x2e5e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e5e10 size=2176 callers=1 calls=14
   calls: ES_does_not_allow_greater_than_d_varying_variables, sub_1e20, sub_1e30, sub_1e40, sub_2b3b90, sub_2dacc0, sub_2e8e40, sub_2ea6a0, sub_2eabc0, sub_2ed320, sub_3545d0, sub_355470
   ... +2 more
   ref: state.
   ref: cannot locate suitable resource to bind variable "%s". Possibly large array.
*/
void state(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e5e10ULL || rel >= 0x2e6690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6690 size=16 callers=0 calls=0
*/
void sub_2e6690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6690ULL || rel >= 0x2e66a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e66a0 size=16 callers=0 calls=0
*/
void sub_2e66a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e66a0ULL || rel >= 0x2e66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e66b0 size=112 callers=0 calls=1
   calls: d_error_C_04d_3
   ref: missing code header function for program profile "%s"
*/
void missing_code_header_function_for_program_profile_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e66b0ULL || rel >= 0x2e6720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6720 size=864 callers=0 calls=8
   calls: sconst_s_d_2, sub_35f390, sub_35f400, sub_35f450, sub_35f470, sub_35f6d0, unnamed_23, unnamed_24
   ref: %svendor %s
   ref: %ssemantic 
   ref: %sprogram %s
   ref: %sversion %s
   ref: %sprofile %s
*/
void ssemantic_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6720ULL || rel >= 0x2e6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6a80 size=16 callers=0 calls=0
*/
void sub_2e6a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6a80ULL || rel >= 0x2e6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6a90 size=16 callers=0 calls=0
*/
void sub_2e6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6a90ULL || rel >= 0x2e6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6aa0 size=16 callers=0 calls=0
*/
void sub_2e6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6aa0ULL || rel >= 0x2e6ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6ab0 size=16 callers=0 calls=0
*/
void sub_2e6ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6ab0ULL || rel >= 0x2e6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6ac0 size=304 callers=0 calls=5
   calls: mem_Alloc, sub_2ed320, sub_2ed440, sub_2f6e10, sub_2f7410
*/
void sub_2e6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6ac0ULL || rel >= 0x2e6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6bf0 size=16 callers=0 calls=0
*/
void sub_2e6bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6bf0ULL || rel >= 0x2e6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6c00 size=16 callers=0 calls=0
*/
void sub_2e6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6c00ULL || rel >= 0x2e6c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6c10 size=16 callers=0 calls=0
*/
void sub_2e6c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6c10ULL || rel >= 0x2e6c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6c20 size=16 callers=0 calls=0
*/
void sub_2e6c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6c20ULL || rel >= 0x2e6c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6c30 size=64 callers=0 calls=1
   calls: d_fatal_error_C9999
   ref: No new code generator for profile %s
*/
void No_new_code_generator_for_profile_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6c30ULL || rel >= 0x2e6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6c70 size=16 callers=0 calls=0
*/
void sub_2e6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6c70ULL || rel >= 0x2e6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6c80 size=112 callers=0 calls=1
   calls: d_error_C_04d_3
   ref: missing code generator for program profile "%s"
*/
void missing_code_generator_for_program_profile_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6c80ULL || rel >= 0x2e6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6cf0 size=16 callers=0 calls=0
*/
void sub_2e6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6cf0ULL || rel >= 0x2e6d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6d00 size=16 callers=0 calls=0
*/
void sub_2e6d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6d00ULL || rel >= 0x2e6d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6d10 size=16 callers=0 calls=0
*/
void sub_2e6d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6d10ULL || rel >= 0x2e6d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6d20 size=112 callers=0 calls=2
   calls: sub_2a42a0, sub_2a49c0
   ref: BUFFER[%d]
*/
void BUFFER_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6d20ULL || rel >= 0x2e6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6d90 size=160 callers=0 calls=3
   calls: non_constant_expression_for_array_size, sub_2db630, sub_306070
   ref: samplers
   ref: profile doesn't support more than %d %s
*/
void samplers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6d90ULL || rel >= 0x2e6e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6e30 size=16 callers=0 calls=0
*/
void sub_2e6e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6e30ULL || rel >= 0x2e6e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6e40 size=16 callers=0 calls=0
*/
void sub_2e6e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6e40ULL || rel >= 0x2e6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6e50 size=32 callers=0 calls=0
*/
void sub_2e6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6e50ULL || rel >= 0x2e6e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6e70 size=16 callers=0 calls=0
*/
void sub_2e6e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6e70ULL || rel >= 0x2e6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6e80 size=16 callers=0 calls=0
*/
void sub_2e6e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6e80ULL || rel >= 0x2e6e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6e90 size=16 callers=0 calls=0
*/
void sub_2e6e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6e90ULL || rel >= 0x2e6ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6ea0 size=16 callers=0 calls=0
*/
void sub_2e6ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6ea0ULL || rel >= 0x2e6eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6eb0 size=16 callers=0 calls=0
*/
void sub_2e6eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6eb0ULL || rel >= 0x2e6ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6ec0 size=16 callers=0 calls=0
*/
void sub_2e6ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6ec0ULL || rel >= 0x2e6ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6ed0 size=16 callers=0 calls=0
*/
void sub_2e6ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6ed0ULL || rel >= 0x2e6ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6ee0 size=16 callers=0 calls=0
*/
void sub_2e6ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6ee0ULL || rel >= 0x2e6ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6ef0 size=16 callers=0 calls=0
*/
void sub_2e6ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6ef0ULL || rel >= 0x2e6f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6f00 size=16 callers=0 calls=0
*/
void sub_2e6f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6f00ULL || rel >= 0x2e6f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6f10 size=208 callers=0 calls=0
*/
void sub_2e6f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6f10ULL || rel >= 0x2e6fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6fe0 size=16 callers=0 calls=0
*/
void sub_2e6fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6fe0ULL || rel >= 0x2e6ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e6ff0 size=16 callers=0 calls=0
*/
void sub_2e6ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e6ff0ULL || rel >= 0x2e7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7000 size=208 callers=0 calls=1
   calls: sub_2dacc0
   ref: unknown layout specifier '%s = %d'
   ref: unknown layout specifier '%s'
*/
void unknown_layout_specifier_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7000ULL || rel >= 0x2e70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e70d0 size=16 callers=0 calls=0
*/
void sub_2e70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e70d0ULL || rel >= 0x2e70e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e70e0 size=48 callers=0 calls=0
*/
void sub_2e70e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e70e0ULL || rel >= 0x2e7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7110 size=48 callers=11 calls=0
*/
void sub_2e7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7110ULL || rel >= 0x2e7140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7140 size=192 callers=0 calls=0
   ref: Deprecated semantic 'BUFFER' on variable '%s'. Use uniform blocks instead.
   ref: uniform storage blocks not allowed
*/
void uniform_storage_blocks_not_allowed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7140ULL || rel >= 0x2e7200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7200 size=16 callers=0 calls=0
*/
void sub_2e7200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7200ULL || rel >= 0x2e7210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7210 size=32 callers=0 calls=0
*/
void sub_2e7210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7210ULL || rel >= 0x2e7230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7230 size=16 callers=0 calls=0
*/
void sub_2e7230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7230ULL || rel >= 0x2e7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7240 size=16 callers=0 calls=0
*/
void sub_2e7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7240ULL || rel >= 0x2e7250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7250 size=16 callers=0 calls=0
*/
void sub_2e7250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7250ULL || rel >= 0x2e7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7260 size=16 callers=0 calls=0
*/
void sub_2e7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7260ULL || rel >= 0x2e7270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7270 size=16 callers=0 calls=0
*/
void sub_2e7270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7270ULL || rel >= 0x2e7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7280 size=16 callers=0 calls=0
*/
void sub_2e7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7280ULL || rel >= 0x2e7290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7290 size=16 callers=0 calls=0
*/
void sub_2e7290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7290ULL || rel >= 0x2e72a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e72a0 size=16 callers=0 calls=0
*/
void sub_2e72a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e72a0ULL || rel >= 0x2e72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e72b0 size=16 callers=0 calls=0
*/
void sub_2e72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e72b0ULL || rel >= 0x2e72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e72c0 size=16 callers=0 calls=0
*/
void sub_2e72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e72c0ULL || rel >= 0x2e72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e72d0 size=16 callers=0 calls=0
*/
void sub_2e72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e72d0ULL || rel >= 0x2e72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e72e0 size=16 callers=0 calls=0
*/
void sub_2e72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e72e0ULL || rel >= 0x2e72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e72f0 size=16 callers=0 calls=0
*/
void sub_2e72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e72f0ULL || rel >= 0x2e7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7300 size=16 callers=0 calls=0
*/
void sub_2e7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7300ULL || rel >= 0x2e7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7310 size=2144 callers=0 calls=21
   calls: d_fatal_error_C9999, sub_2c8210, sub_2cdc70, sub_2daad0, sub_2dacc0, sub_2e9960, sub_2ed010, sub_330f0, sub_33140, sub_333e0, sub_33910, sub_33960
   ... +9 more
   ref: texture "%s" cannot be used as both texture%s and texture%s
   ref: Unkown builtin '%s' in CreateDagForBuiltin_HAL
   ref: bad number of args %d for builtin
   ref: sampler "%s" cannot be used as both sampler%s and sampler%s
*/
void bad_number_of_args_d_for_builtin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7310ULL || rel >= 0x2e7b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7b70 size=128 callers=0 calls=5
   calls: sub_2c8e00, sub_33910, sub_33960, sub_33e80, sub_340a0
*/
void sub_2e7b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7b70ULL || rel >= 0x2e7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7bf0 size=16 callers=0 calls=0
*/
void sub_2e7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7bf0ULL || rel >= 0x2e7c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7c00 size=16 callers=0 calls=0
*/
void sub_2e7c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7c00ULL || rel >= 0x2e7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7c10 size=16 callers=0 calls=0
*/
void sub_2e7c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7c10ULL || rel >= 0x2e7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7c20 size=144 callers=0 calls=1
   calls: d_fatal_error_C9999
   ref: bad builtin tex lookupstyle
*/
void bad_builtin_tex_lookupstyle(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7c20ULL || rel >= 0x2e7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e7cb0 size=3456 callers=1 calls=23
   calls: Sampler, Texture, bad_dag_size_d_in_NewNaryDag, d_fatal_error_C9999, sub_2c8210, sub_2c8360, sub_2c99e0, sub_2dacc0, sub_330f0, sub_33140, sub_338f0, sub_33910
   ... +11 more
   ref: bad builtin tex dimension
   ref: Texel offset argument is out of range
   ref: bad builtin tex rettype
   ref: texlod
*/
void texlod(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e7cb0ULL || rel >= 0x2e8a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8a30 size=320 callers=0 calls=1
   calls: sub_1e40
*/
void sub_2e8a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8a30ULL || rel >= 0x2e8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8b70 size=16 callers=0 calls=0
*/
void sub_2e8b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8b70ULL || rel >= 0x2e8b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8b80 size=16 callers=0 calls=0
*/
void sub_2e8b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8b80ULL || rel >= 0x2e8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8b90 size=16 callers=0 calls=0
*/
void sub_2e8b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8b90ULL || rel >= 0x2e8ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8ba0 size=16 callers=0 calls=0
*/
void sub_2e8ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8ba0ULL || rel >= 0x2e8bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8bb0 size=16 callers=0 calls=0
*/
void sub_2e8bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8bb0ULL || rel >= 0x2e8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8bc0 size=16 callers=0 calls=0
*/
void sub_2e8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8bc0ULL || rel >= 0x2e8bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8bd0 size=16 callers=0 calls=0
*/
void sub_2e8bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8bd0ULL || rel >= 0x2e8be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8be0 size=256 callers=6 calls=2
   calls: sub_1e40, sub_2e8be0
*/
void sub_2e8be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8be0ULL || rel >= 0x2e8ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8ce0 size=336 callers=1 calls=0
*/
void sub_2e8ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8ce0ULL || rel >= 0x2e8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8e30 size=16 callers=0 calls=0
*/
void sub_2e8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8e30ULL || rel >= 0x2e8e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e8e40 size=2560 callers=4 calls=1
   calls: mem_Alloc
*/
void sub_2e8e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e8e40ULL || rel >= 0x2e9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9840 size=80 callers=1 calls=0
*/
void sub_2e9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9840ULL || rel >= 0x2e9890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9890 size=208 callers=9 calls=1
   calls: sub_3608f0
*/
void sub_2e9890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9890ULL || rel >= 0x2e9960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9960 size=32 callers=1 calls=0
*/
void sub_2e9960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9960ULL || rel >= 0x2e9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9980 size=32 callers=1 calls=0
*/
void sub_2e9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9980ULL || rel >= 0x2e99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e99a0 size=32 callers=1 calls=0
*/
void sub_2e99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e99a0ULL || rel >= 0x2e99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e99c0 size=16 callers=0 calls=0
*/
void sub_2e99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e99c0ULL || rel >= 0x2e99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e99d0 size=352 callers=3 calls=0
*/
void sub_2e99d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e99d0ULL || rel >= 0x2e9b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9b30 size=528 callers=2 calls=1
   calls: sub_2dacc0
   ref: multiple bindings to output semantic "%s"
   ref: multiple bindings to output semantic "%s%d"
*/
void multiple_bindings_to_output_semantic_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9b30ULL || rel >= 0x2e9d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9d40 size=528 callers=3 calls=2
   calls: sub_20c0, sub_2e9d40
*/
void sub_2e9d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9d40ULL || rel >= 0x2e9f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002e9f50 size=304 callers=0 calls=0
   ref: Integer varying %s must be flat
*/
void Integer_varying_s_must_be_flat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2e9f50ULL || rel >= 0x2ea080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ea080 size=1568 callers=2 calls=4
   calls: sub_2db630, sub_2e99d0, sub_3608f0, varying
   ref: OpenGL/ES does not allow greater than %d varying variables
   ref: lmem%d
*/
void ES_does_not_allow_greater_than_d_varying_variables(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ea080ULL || rel >= 0x2ea6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ea6a0 size=112 callers=2 calls=1
   calls: sub_2ea6a0
*/
void sub_2ea6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ea6a0ULL || rel >= 0x2ea710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ea710 size=1200 callers=3 calls=8
   calls: NOPERSPECTIVE_3, sub_20c0, sub_2dacc0, sub_2db630, sub_2e99d0, sub_316a20, sub_36eff0, varying
   ref: type %s not supported for %s%s
   ref: uniform 
   ref: '%s' needs to be a multiple of the natural alignment of '%s', which is '%d'
   ref: offset
   ref: offset '%d' specified for '%s' overlaps with the previous member of the block
   ref: varying 
*/
void varying(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ea710ULL || rel >= 0x2eabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eabc0 size=160 callers=2 calls=1
   calls: sub_2eabc0
*/
void sub_2eabc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eabc0ULL || rel >= 0x2eac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eac60 size=96 callers=15 calls=0
*/
void sub_2eac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eac60ULL || rel >= 0x2eacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eacc0 size=96 callers=1 calls=0
*/
void sub_2eacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eacc0ULL || rel >= 0x2ead20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ead20 size=96 callers=2 calls=1
   calls: mem_Alloc
*/
void sub_2ead20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ead20ULL || rel >= 0x2ead80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ead80 size=144 callers=1 calls=2
   calls: sub_2db630, sub_2f72e0
   ref: gl_Layer
   ref: layout(viewport_relative)
   ref: %s requires %s be written to
*/
void gl_Layer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ead80ULL || rel >= 0x2eae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eae10 size=80 callers=0 calls=1
   calls: sub_2fa3e0
*/
void sub_2eae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eae10ULL || rel >= 0x2eae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eae60 size=1088 callers=1 calls=15
   calls: s_needs_to_be_a_uniform_global_or_parameter_to_main_s_ca, sub_2c8210, sub_2c8360, sub_2c8e00, sub_2c93c0, sub_2cd8f0, sub_2cd980, sub_330f0, sub_33140, sub_33910, sub_33960, sub_339b0
   ... +3 more
   ref: Sampler
*/
void Sampler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eae60ULL || rel >= 0x2eb2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eb2a0 size=240 callers=3 calls=3
   calls: sub_2dacc0, sub_33960, sub_339b0
   ref: %s needs to be a uniform (global or parameter to main). %s can not be static or const
   ref: %s needs to be a uniform (global or parameter to main), need to inline function or resolve condition
*/
void s_needs_to_be_a_uniform_global_or_parameter_to_main_s_ca(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eb2a0ULL || rel >= 0x2eb390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eb390 size=1472 callers=1 calls=18
   calls: s_needs_to_be_a_uniform_global_or_parameter_to_main_s_ca, sub_2c8120, sub_2c8210, sub_2c8360, sub_2c8e00, sub_2c93c0, sub_2cd8f0, sub_2cd980, sub_330f0, sub_33140, sub_33910, sub_33960
   ... +6 more
   ref: Texture
   ref: Sampler
*/
void Texture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eb390ULL || rel >= 0x2eb950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eb950 size=176 callers=2 calls=1
   calls: sub_2ed440
   ref: glstate_vp
   ref: glstate_fp
   ref: glstate
*/
void glstate_vp(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eb950ULL || rel >= 0x2eba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eba00 size=160 callers=0 calls=0
*/
void sub_2eba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eba00ULL || rel >= 0x2ebaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ebaa0 size=336 callers=0 calls=8
   calls: ARB_separate_shader_objects, sub_2ed320, sub_2ed440, sub_2f9880, sub_2fa3e0, sub_302f30, sub_306070, sub_31c1f0
*/
void sub_2ebaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ebaa0ULL || rel >= 0x2ebbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ebbf0 size=128 callers=0 calls=2
   calls: sub_2f4e70, sub_2f72e0
*/
void sub_2ebbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ebbf0ULL || rel >= 0x2ebc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ebc70 size=224 callers=0 calls=5
   calls: sub_2f75e0, sub_2f77f0, sub_2f7880, sub_2f8290, sub_302f30
*/
void sub_2ebc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ebc70ULL || rel >= 0x2ebd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ebd50 size=256 callers=0 calls=1
   calls: sub_35ca20
*/
void sub_2ebd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ebd50ULL || rel >= 0x2ebe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ebe50 size=1232 callers=0 calls=13
   calls: sub_2b8720, sub_2db630, sub_2f7c40, sub_2f9880, sub_2fa3e0, sub_2fa4a0, sub_3041b0, sub_306070, sub_310b80, sub_3188a0, sub_3188c0, sub_31b710
   ... +1 more
   ref: OES_shader_image_atomic
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: argument %d to %s needs to be a variable
*/
void OES_shader_image_atomic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ebe50ULL || rel >= 0x2ec320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ec320 size=176 callers=2 calls=5
   calls: sub_36d110, sub_36d4b0, sub_36d550, sub_36d630, sub_36d6b0
*/
void sub_2ec320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ec320ULL || rel >= 0x2ec3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ec3d0 size=1744 callers=4 calls=9
   calls: sub_1e20, sub_1e30, sub_35f390, sub_35f430, sub_35f440, sub_35f450, sub_35f6d0, unnamed_23, vout
   ref: , %d : %d : %d
   ref: %svar %s%dx%d %s
   ref:  : %d : %d
   ref:  : %d : %d
   ref: %s%s[%d]
   ref: %s[%d]
   ref: %svar sampler%s %s
   ref: %svar %s
*/
void unnamed_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ec3d0ULL || rel >= 0x2ecaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ecaa0 size=256 callers=3 calls=2
   calls: sub_1e20, sub_35f6d0
   ref: $vout.
   ref: $ppvout.
   ref: $ppvin.
*/
void vout(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ecaa0ULL || rel >= 0x2ecba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ecba0 size=336 callers=2 calls=4
   calls: sconst_s_d_2, sub_1e20, sub_1e30, sub_35f6d0
   ref: %sconst %s[%d] =
*/
void sconst_s_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ecba0ULL || rel >= 0x2eccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eccf0 size=800 callers=3 calls=7
   calls: sub_1ff0, sub_35f390, sub_35f400, sub_35f430, sub_35f450, sub_35f6d0, unnamed_24
   ref: %sdefault %s
   ref: %s%s[%d]
   ref: %s[%d]
*/
void unnamed_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eccf0ULL || rel >= 0x2ed010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed010 size=272 callers=2 calls=0
*/
void sub_2ed010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed010ULL || rel >= 0x2ed120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed120 size=16 callers=0 calls=0
*/
void sub_2ed120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed120ULL || rel >= 0x2ed130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed130 size=16 callers=0 calls=0
*/
void sub_2ed130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed130ULL || rel >= 0x2ed140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed140 size=16 callers=0 calls=0
*/
void sub_2ed140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed140ULL || rel >= 0x2ed150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed150 size=16 callers=0 calls=0
*/
void sub_2ed150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed150ULL || rel >= 0x2ed160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed160 size=16 callers=0 calls=0
*/
void sub_2ed160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed160ULL || rel >= 0x2ed170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed170 size=16 callers=0 calls=0
*/
void sub_2ed170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed170ULL || rel >= 0x2ed180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed180 size=16 callers=0 calls=0
*/
void sub_2ed180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed180ULL || rel >= 0x2ed190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed190 size=16 callers=0 calls=0
*/
void sub_2ed190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed190ULL || rel >= 0x2ed1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed1a0 size=384 callers=84 calls=2
   calls: mem_Alloc, mem_CreatePool
*/
void sub_2ed1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed1a0ULL || rel >= 0x2ed320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed320 size=288 callers=289 calls=0
*/
void sub_2ed320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed320ULL || rel >= 0x2ed440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed440 size=1456 callers=162 calls=2
   calls: sub_2a4dc0, sub_2ed320
*/
void sub_2ed440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed440ULL || rel >= 0x2ed9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ed9f0 size=288 callers=6 calls=0
*/
void sub_2ed9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ed9f0ULL || rel >= 0x2edb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edb10 size=96 callers=11 calls=1
   calls: sub_2a4f00
*/
void sub_2edb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edb10ULL || rel >= 0x2edb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edb70 size=96 callers=9 calls=0
*/
void sub_2edb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edb70ULL || rel >= 0x2edbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edbd0 size=208 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_2edbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edbd0ULL || rel >= 0x2edca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edca0 size=16 callers=0 calls=0
*/
void sub_2edca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edca0ULL || rel >= 0x2edcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edcb0 size=32 callers=0 calls=0
*/
void sub_2edcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edcb0ULL || rel >= 0x2edcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edcd0 size=64 callers=0 calls=0
*/
void sub_2edcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edcd0ULL || rel >= 0x2edd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edd10 size=16 callers=0 calls=0
*/
void sub_2edd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edd10ULL || rel >= 0x2edd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edd20 size=32 callers=0 calls=0
*/
void sub_2edd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edd20ULL || rel >= 0x2edd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edd40 size=64 callers=0 calls=0
*/
void sub_2edd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edd40ULL || rel >= 0x2edd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edd80 size=16 callers=0 calls=0
*/
void sub_2edd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edd80ULL || rel >= 0x2edd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edd90 size=32 callers=0 calls=0
*/
void sub_2edd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edd90ULL || rel >= 0x2eddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eddb0 size=16 callers=0 calls=0
*/
void sub_2eddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eddb0ULL || rel >= 0x2eddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eddc0 size=16 callers=0 calls=0
*/
void sub_2eddc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eddc0ULL || rel >= 0x2eddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eddd0 size=32 callers=0 calls=0
*/
void sub_2eddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eddd0ULL || rel >= 0x2eddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eddf0 size=192 callers=10 calls=1
   calls: mem_Alloc
*/
void sub_2eddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eddf0ULL || rel >= 0x2edeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002edeb0 size=608 callers=13 calls=2
   calls: mem_Alloc, sub_2edeb0
*/
void sub_2edeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2edeb0ULL || rel >= 0x2ee110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ee110 size=256 callers=18 calls=0
*/
void sub_2ee110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ee110ULL || rel >= 0x2ee210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ee210 size=128 callers=6 calls=0
*/
void sub_2ee210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ee210ULL || rel >= 0x2ee290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ee290 size=128 callers=2 calls=0
*/
void sub_2ee290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ee290ULL || rel >= 0x2ee310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ee310 size=16 callers=8 calls=0
*/
void sub_2ee310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ee310ULL || rel >= 0x2ee320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ee320 size=128 callers=2 calls=3
   calls: sub_306070, sub_317960, sub_31b710
*/
void sub_2ee320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ee320ULL || rel >= 0x2ee3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ee3a0 size=2528 callers=0 calls=22
   calls: TMP_d, atomicCompSwap, sub_2b8720, sub_2dacc0, sub_2db630, sub_2eed80, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_2f9c60, sub_2f9d00, sub_2fa200
   ... +10 more
   ref: non-lvalue actual parameter #%d cannot be out parameter ("%s")
   ref: incompatible type for parameter #%d ("%s")
   ref: const qualified actual parameter #%d cannot be out parameter ("%s")
   ref: OpenGL does not allow passing uniform into out or inout parameter
   ref: assignment to varying '%s'
   ref: qualified actual parameter #%d cannot be converted to less qualified parameter ("%s")
   ref: actual parameter #%d must be same type as formal out parameter ("%s")
   ref: %s qualified actual parameter #%d cannot be a "%s" qualified parameter ("%s")
*/
void writeonly(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ee3a0ULL || rel >= 0x2eed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eed80 size=400 callers=4 calls=9
   calls: atomicCompSwap, sub_2eed80, sub_2f7fb0, sub_2f9880, sub_2fc060, sub_2fcb90, sub_3177b0, sub_31b710, sub_31c0c0
*/
void sub_2eed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eed80ULL || rel >= 0x2eef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002eef10 size=304 callers=1 calls=3
   calls: sub_2b8230, sub_2f75e0, sub_31bef0
*/
void sub_2eef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2eef10ULL || rel >= 0x2ef040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ef040 size=176 callers=3 calls=1
   calls: sub_2f9880
*/
void sub_2ef040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ef040ULL || rel >= 0x2ef0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ef0f0 size=192 callers=1 calls=5
   calls: atomicCompSwap, sub_2ef040, sub_2f9880, sub_2fab10, sub_3177b0
*/
void sub_2ef0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ef0f0ULL || rel >= 0x2ef1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ef1b0 size=752 callers=2 calls=5
   calls: sub_2ef1b0, sub_2f7fb0, sub_2fade0, sub_2fbdc0, sub_306070
*/
void sub_2ef1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ef1b0ULL || rel >= 0x2ef4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ef4a0 size=384 callers=1 calls=7
   calls: sub_2f77f0, sub_2f7880, sub_2f9210, sub_2f9880, sub_306070, sub_3188c0, sub_31bef0
*/
void sub_2ef4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ef4a0ULL || rel >= 0x2ef620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ef620 size=128 callers=6 calls=0
*/
void sub_2ef620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ef620ULL || rel >= 0x2ef6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ef6a0 size=1296 callers=5 calls=10
   calls: sub_2b8230, sub_2dacc0, sub_2db4f0, sub_2db630, sub_2f00d0, sub_2f77f0, sub_2f7880, sub_2f7cf0, sub_2f9880, unpack_2uint
   ref: OpenGL ES
   ref: use of sequence to initialize a const variable
   ref: too much data in initialization
   ref: %s does not allow %s
   ref: OpenGL does not allow initializing non-aggregates with initializer lists
   ref: non constant expression in initialization
   ref: too little data in initialization
   ref: incompatible types in initialization
*/
void use_of_sequence_to_initialize_a_const_variable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ef6a0ULL || rel >= 0x2efbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002efbb0 size=784 callers=0 calls=7
   calls: sub_2dacc0, sub_2db4f0, sub_2db630, sub_2f7cf0, sub_2f9880, unpack_2uint, use_of_sequence_to_initialize_a_const_variable
   ref: too much data in initialization
   ref: invalid type in type constructor
   ref: too much data in type constructor
   ref: OpenGL does not allow initializing non-aggregates with initializer lists
   ref: incompatible types in initialization
   ref: Extra brace level in initializer being ignored
*/
void too_much_data_in_type_constructor_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2efbb0ULL || rel >= 0x2efec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002efec0 size=528 callers=0 calls=5
   calls: sub_2dacc0, sub_2f9880, sub_306070, unpack_2uint, use_of_sequence_to_initialize_a_const_variable
   ref: too much data in initialization
   ref: invalid type in type constructor
   ref: too much data in type constructor
   ref: incompatible types in initialization
*/
void too_much_data_in_type_constructor_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2efec0ULL || rel >= 0x2f00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f00d0 size=304 callers=2 calls=4
   calls: sub_2f9880, sub_355090, sub_36e810, unexpected_samplerkind_in_SamplerKind2SamplerTypes
*/
void sub_2f00d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f00d0ULL || rel >= 0x2f0200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f0200 size=12656 callers=19 calls=59
   calls: AMD_vertex_shader_viewport_index, TMP_d, VERTEX_2, atomicCompSwap, d_error_C_04d_3, stdlib_gl__variables_are_not_accessible, sub_2b8230, sub_2b8720, sub_2bb020, sub_2dacc0, sub_2db630, sub_2ed320
   ... +47 more
   ref: expression type incompatible with function return type
   ref: too little data in type constructor
   ref: type mismatch with default value for %s
   ref: Texel offset arguments to texture fetch builtins must be constant
   ref: Builtin block member %s not found in redeclaration of %s %s
   ref: OpenGL requires the selection first expression to be a scalar boolean
   ref: return type
   ref: cannot call a non-function
*/
void ARB_separate_shader_objects(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f0200ULL || rel >= 0x2f3370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f3370 size=672 callers=0 calls=9
   calls: sub_2dacc0, sub_2f5560, sub_2f77f0, sub_2f7880, sub_2f9880, sub_3175f0, sub_3188c0, sub_31bef0, unpack_2uint
   ref: invalid operands to "%s"
   ref: Boolean expression expected
   ref: operands to "%s" must be integral
   ref: operands to "%s" must be numeric
*/
void invalid_operands_to_s_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f3370ULL || rel >= 0x2f3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f3610 size=4432 callers=0 calls=27
   calls: atomicCompSwap, sub_2b8230, sub_2b8720, sub_2dacc0, sub_2db630, sub_2f5560, sub_2f5650, sub_2f77f0, sub_2f7880, sub_2f7fb0, sub_2f8290, sub_2f9210
   ... +15 more
   ref: EXT_gpu_shader4
   ref: invalid operands to "%s"
   ref: operands to "%s" must be integral
   ref: '%s' requires "#extension GL_%s : enable" before use
*/
void EXT_gpu_shader4_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f3610ULL || rel >= 0x2f4760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f4760 size=352 callers=9 calls=5
   calls: mem_AddCleanup, mem_Alloc, sub_2ed1a0, sub_2ed320, sub_2ed440
*/
void sub_2f4760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f4760ULL || rel >= 0x2f48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f48c0 size=16 callers=0 calls=0
*/
void sub_2f48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f48c0ULL || rel >= 0x2f48d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f48d0 size=176 callers=1 calls=3
   calls: mem_AddCleanup, sub_2ed1a0, sub_2edb70
*/
void sub_2f48d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f48d0ULL || rel >= 0x2f4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f4980 size=80 callers=8 calls=1
   calls: sub_2ed320
*/
void sub_2f4980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f4980ULL || rel >= 0x2f49d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f49d0 size=352 callers=1 calls=5
   calls: mem_AddCleanup, sub_2ed1a0, sub_2edb70, sub_2f6e10, sub_2f7410
*/
void sub_2f49d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f49d0ULL || rel >= 0x2f4b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f4b30 size=192 callers=0 calls=3
   calls: sub_2ed320, sub_2f4760, sub_2f9880
*/
void sub_2f4b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f4b30ULL || rel >= 0x2f4bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f4bf0 size=640 callers=1 calls=6
   calls: mem_AddCleanup, sub_2ed1a0, sub_2edb70, sub_2f4760, sub_2f7060, sub_2f7410
*/
void sub_2f4bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f4bf0ULL || rel >= 0x2f4e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f4e70 size=416 callers=6 calls=5
   calls: mem_AddCleanup, sub_2ed1a0, sub_2edb70, sub_2f7060, sub_2f7410
*/
void sub_2f4e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f4e70ULL || rel >= 0x2f5010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f5010 size=64 callers=1 calls=0
*/
void sub_2f5010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f5010ULL || rel >= 0x2f5050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f5050 size=336 callers=0 calls=3
   calls: sub_2b8720, sub_2dacc0, sub_2f9880
   ref: beginInvocationInterlock()
   ref: endInvocationInterlock()
   ref: Cannot have %s without a %s
   ref: %s not allowed within a control flow
*/
void endInvocationInterlock(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f5050ULL || rel >= 0x2f51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f51a0 size=272 callers=1 calls=3
   calls: sub_2ed320, sub_2f7060, sub_2f7410
*/
void sub_2f51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f51a0ULL || rel >= 0x2f52b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f52b0 size=224 callers=0 calls=2
   calls: sub_2db630, sub_306070
   ref: Invalid use of subroutine uniform "%s"
*/
void Invalid_use_of_subroutine_uniform_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f52b0ULL || rel >= 0x2f5390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f5390 size=176 callers=0 calls=3
   calls: sub_2b8230, sub_2f9880, sub_3188c0
*/
void sub_2f5390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f5390ULL || rel >= 0x2f5440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f5440 size=288 callers=0 calls=8
   calls: sub_2b8230, sub_2f77f0, sub_2f7880, sub_2f9210, sub_2f9880, sub_3188c0, sub_31b820, sub_31bef0
*/
void sub_2f5440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f5440ULL || rel >= 0x2f5560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f5560 size=240 callers=8 calls=4
   calls: atomicCompSwap, sub_2f8290, sub_302e20, sub_302f30
*/
void sub_2f5560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f5560ULL || rel >= 0x2f5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f5650 size=304 callers=4 calls=0
*/
void sub_2f5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f5650ULL || rel >= 0x2f5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f5780 size=3504 callers=2 calls=21
   calls: interfaceNV, mem_Alloc, mem_CreatePool, sub_2a4420, sub_2a47d0, sub_2a48c0, sub_2a4ba0, sub_2a5d30, sub_2b8720, sub_2dacc0, sub_2f6570, sub_2f65d0
   ... +9 more
   ref:     %s(%d) : 
   ref: unable to find compatible overloaded function "%s"
   ref: ambiguous overloaded function reference "%s"
   ref: <overloaded function>
*/
void unnamed_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f5780ULL || rel >= 0x2f6530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f6530 size=64 callers=0 calls=1
   calls: sub_2f9880
*/
void sub_2f6530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f6530ULL || rel >= 0x2f6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f6570 size=96 callers=2 calls=1
   calls: sub_2f6570
*/
void sub_2f6570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f6570ULL || rel >= 0x2f65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f65d0 size=272 callers=2 calls=5
   calls: sub_2f65d0, sub_2f9880, sub_2f9c60, sub_317960, sub_31b710
*/
void sub_2f65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f65d0ULL || rel >= 0x2f66e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f66e0 size=592 callers=2 calls=4
   calls: sub_2f6930, sub_306070, sub_317960, sub_31b710
*/
void sub_2f66e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f66e0ULL || rel >= 0x2f6930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f6930 size=592 callers=3 calls=3
   calls: sub_3188c0, sub_31b2a0, unpack_2uint
*/
void sub_2f6930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f6930ULL || rel >= 0x2f6b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f6b80 size=208 callers=0 calls=4
   calls: sub_2f9880, sub_2fbe60, sub_3188c0, sub_31bef0
*/
void sub_2f6b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f6b80ULL || rel >= 0x2f6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f6c50 size=448 callers=0 calls=9
   calls: only_applies_to_pointers, sub_2dacc0, sub_2f9880, sub_3189b0, sub_31b710, sub_31b820, sub_31bef0, sub_3608f0, unpack_2uint
   ref: invalid type in type constructor
   ref: too much data in type constructor
*/
void too_much_data_in_type_constructor_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f6c50ULL || rel >= 0x2f6e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f6e10 size=592 callers=79 calls=4
   calls: mem_Alloc, sub_2f6e10, sub_4c0cb0, sub_4c0cd0
*/
void sub_2f6e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f6e10ULL || rel >= 0x2f7060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f7060 size=640 callers=59 calls=4
   calls: mem_Alloc, sub_2f7060, sub_4c0cb0, sub_4c0cd0
*/
void sub_2f7060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f7060ULL || rel >= 0x2f72e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f72e0 size=304 callers=12 calls=1
   calls: sub_2f6e10
*/
void sub_2f72e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f72e0ULL || rel >= 0x2f7410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f7410 size=144 callers=28 calls=0
*/
void sub_2f7410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f7410ULL || rel >= 0x2f74a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f74a0 size=320 callers=3 calls=1
   calls: sub_2f7060
*/
void sub_2f74a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f74a0ULL || rel >= 0x2f75e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f75e0 size=528 callers=27 calls=4
   calls: mem_Alloc, sub_2a4f00, sub_2f75e0, sub_2f8020
*/
void sub_2f75e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f75e0ULL || rel >= 0x2f77f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f77f0 size=144 callers=64 calls=1
   calls: mem_Alloc
*/
void sub_2f77f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f77f0ULL || rel >= 0x2f7880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f7880 size=208 callers=47 calls=2
   calls: sub_2a4f00, sub_2f8020
*/
void sub_2f7880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f7880ULL || rel >= 0x2f7950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f7950 size=528 callers=7 calls=4
   calls: mem_Alloc, sub_2a4f00, sub_2f7950, sub_2f8020
*/
void sub_2f7950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f7950ULL || rel >= 0x2f7b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f7b60 size=96 callers=3 calls=1
   calls: sub_2f7b60
*/
void sub_2f7b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f7b60ULL || rel >= 0x2f7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f7bc0 size=128 callers=3 calls=1
   calls: sub_2f7bc0
*/
void sub_2f7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f7bc0ULL || rel >= 0x2f7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f7c40 size=176 callers=9 calls=1
   calls: sub_2f7c40
*/
void sub_2f7c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f7c40ULL || rel >= 0x2f7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f7cf0 size=704 callers=42 calls=4
   calls: atomicCompSwap, sub_2f7cf0, sub_4c0cb0, sub_4c0cd0
*/
void sub_2f7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f7cf0ULL || rel >= 0x2f7fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f7fb0 size=48 callers=1377 calls=0
*/
void sub_2f7fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f7fb0ULL || rel >= 0x2f7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f7fe0 size=64 callers=0 calls=0
*/
void sub_2f7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f7fe0ULL || rel >= 0x2f8020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f8020 size=240 callers=32 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_2f8020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f8020ULL || rel >= 0x2f8110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f8110 size=384 callers=5 calls=9
   calls: AMD_vertex_shader_viewport_index, ARB_separate_shader_objects, stdlib_gl__variables_are_not_accessible, sub_2db630, sub_2f8020, sub_302e20, sub_302f30, sub_307ee0, sub_3175f0
   ref: undefined variable "%s"
*/
void undefined_variable_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f8110ULL || rel >= 0x2f8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f8290 size=144 callers=212 calls=2
   calls: ARB_separate_shader_objects, sub_2f8020
*/
void sub_2f8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f8290ULL || rel >= 0x2f8320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f8320 size=640 callers=2 calls=8
   calls: ARB_separate_shader_objects, atomicCompSwap, only_applies_to_pointers, sub_2f8020, sub_2f8320, sub_316a20, sub_3177b0, sub_3188c0
*/
void sub_2f8320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f8320ULL || rel >= 0x2f85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f85a0 size=1920 callers=10688 calls=15
   calls: ARB_separate_shader_objects, atomicCompSwap, mem_Alloc, sub_2b8720, sub_2dacc0, sub_2db630, sub_2f7c40, sub_2f8020, sub_2f9880, sub_2fa200, sub_2fab10, sub_3136f0
   ... +3 more
   ref: beginInvocationInterlock()
   ref: Cannot have more than one %s
   ref: Footprint
   ref: atomicCompSwap
   ref: Levels
   ref: unable to find compatible overloaded function "%s"
   ref: %s not allowed outside main
   ref: Samples
*/
void atomicCompSwap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f85a0ULL || rel >= 0x2f8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f8d20 size=1264 callers=39 calls=18
   calls: AMD_vertex_shader_viewport_index, ARB_separate_shader_objects, atomicCompSwap, sub_2dacc0, sub_2db630, sub_2f8020, sub_2f9880, sub_2f9c60, sub_2fab10, sub_2fade0, sub_302e20, sub_307ee0
   ... +6 more
   ref: expression left of ."%s" is not a struct or array; use -> instead
   ref: expression left of ."%s" is not a struct
   ref: invalid character '%c' in swizzle "%s"
   ref: expression left of ."%s" is not a struct or array
   ref: "%s" is not member of struct "%s"
   ref: OpenGL does not allow swizzles on scalar expressions
   ref: -> only applies to pointers
*/
void only_applies_to_pointers(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f8d20ULL || rel >= 0x2f9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9210 size=80 callers=51 calls=1
   calls: sub_2f9210
*/
void sub_2f9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9210ULL || rel >= 0x2f9260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9260 size=64 callers=1 calls=1
   calls: sub_2f6e10
*/
void sub_2f9260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9260ULL || rel >= 0x2f92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f92a0 size=128 callers=0 calls=0
*/
void sub_2f92a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f92a0ULL || rel >= 0x2f9320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9320 size=400 callers=2 calls=2
   calls: sub_2f9210, sub_3188c0
*/
void sub_2f9320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9320ULL || rel >= 0x2f94b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f94b0 size=64 callers=2 calls=1
   calls: sub_2ed1a0
*/
void sub_2f94b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f94b0ULL || rel >= 0x2f94f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f94f0 size=384 callers=0 calls=2
   calls: sub_2f9210, sub_3188c0
*/
void sub_2f94f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f94f0ULL || rel >= 0x2f9670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9670 size=112 callers=1 calls=0
*/
void sub_2f9670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9670ULL || rel >= 0x2f96e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f96e0 size=208 callers=76 calls=1
   calls: mem_Alloc
*/
void sub_2f96e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f96e0ULL || rel >= 0x2f97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f97b0 size=208 callers=9 calls=2
   calls: sub_2f9880, sub_3188c0
*/
void sub_2f97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f97b0ULL || rel >= 0x2f9880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9880 size=256 callers=337 calls=1
   calls: sub_2f9880
*/
void sub_2f9880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9880ULL || rel >= 0x2f9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9980 size=368 callers=26 calls=8
   calls: ARB_separate_shader_objects, TMP_d, atomicCompSwap, sub_2f6e10, sub_2f8020, sub_2f9880, sub_2f9af0, sub_2f9c60
*/
void sub_2f9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9980ULL || rel >= 0x2f9af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9af0 size=336 callers=12 calls=1
   calls: sub_2f9af0
*/
void sub_2f9af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9af0ULL || rel >= 0x2f9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9c40 size=32 callers=0 calls=0
*/
void sub_2f9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9c40ULL || rel >= 0x2f9c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9c60 size=160 callers=14 calls=3
   calls: sub_2f9880, sub_31b710, sub_31c0c0
*/
void sub_2f9c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9c60ULL || rel >= 0x2f9d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9d00 size=112 callers=3 calls=1
   calls: sub_2f6e10
*/
void sub_2f9d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9d00ULL || rel >= 0x2f9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9d70 size=32 callers=0 calls=0
*/
void sub_2f9d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9d70ULL || rel >= 0x2f9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9d90 size=544 callers=0 calls=4
   calls: sub_2a4f00, sub_2f6e10, sub_2f8020, sub_2f9980
*/
void sub_2f9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9d90ULL || rel >= 0x2f9fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9fb0 size=64 callers=1 calls=1
   calls: sub_2ed320
*/
void sub_2f9fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9fb0ULL || rel >= 0x2f9ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002f9ff0 size=400 callers=6 calls=4
   calls: sub_2f9210, sub_2f9ff0, sub_3188c0, sub_31b2a0
*/
void sub_2f9ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2f9ff0ULL || rel >= 0x2fa180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa180 size=64 callers=3 calls=0
*/
void sub_2fa180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa180ULL || rel >= 0x2fa1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa1c0 size=64 callers=4 calls=1
   calls: sub_2fa200
*/
void sub_2fa1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa1c0ULL || rel >= 0x2fa200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa200 size=416 callers=11 calls=2
   calls: sub_2f9210, sub_2f9880
*/
void sub_2fa200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa200ULL || rel >= 0x2fa3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa3a0 size=64 callers=4 calls=1
   calls: sub_2fa200
*/
void sub_2fa3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa3a0ULL || rel >= 0x2fa3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa3e0 size=128 callers=7 calls=0
*/
void sub_2fa3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa3e0ULL || rel >= 0x2fa460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa460 size=64 callers=3 calls=0
*/
void sub_2fa460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa460ULL || rel >= 0x2fa4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa4a0 size=240 callers=8 calls=0
*/
void sub_2fa4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa4a0ULL || rel >= 0x2fa590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa590 size=48 callers=1 calls=0
*/
void sub_2fa590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa590ULL || rel >= 0x2fa5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa5c0 size=560 callers=11 calls=1
   calls: sub_2f7b60
*/
void sub_2fa5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa5c0ULL || rel >= 0x2fa7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa7f0 size=240 callers=1 calls=4
   calls: sub_2b85c0, sub_2f9880, sub_31b710, sub_31da60
*/
void sub_2fa7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa7f0ULL || rel >= 0x2fa8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa8e0 size=128 callers=2 calls=0
*/
void sub_2fa8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa8e0ULL || rel >= 0x2fa960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa960 size=48 callers=29 calls=0
*/
void sub_2fa960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa960ULL || rel >= 0x2fa990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fa990 size=272 callers=3 calls=3
   calls: ARB_separate_shader_objects, mem_Alloc, sub_2f8020
*/
void sub_2fa990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fa990ULL || rel >= 0x2faaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002faaa0 size=112 callers=1 calls=1
   calls: sub_2db630
   ref: OpenGL does not allow C-style casts
*/
void OpenGL_does_not_allow_C_style_casts(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2faaa0ULL || rel >= 0x2fab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

