/* subsdk1 functions 002a1e40..002c79f0 (13 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 002a1e40 size=256 callers=2 calls=0
*/
void sub_2a1e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1e40ULL || rel >= 0x2a1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a1f40 size=976 callers=1 calls=0
*/
void sub_2a1f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a1f40ULL || rel >= 0x2a2310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a2310 size=4656 callers=1 calls=15
   calls: expected, sub_1630, sub_2a3540, sub_2a35d0, sub_2a3fa0, sub_302f30, sub_35f390, sub_35f400, sub_35f430, sub_35f470, sub_35f750, sub_3608f0
   ... +3 more
   ref: unexpected '{' in binding
   ref: %s(%d) 
   ref: memory exhausted
   ref: Too many child bindings
   ref: no known type named %s
   ref: varIndex on non-array binding
   ref: error near token %s (%d)
   ref: syntax error
*/
void fields(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a2310ULL || rel >= 0x2a3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a3540 size=144 callers=2 calls=1
   calls: sub_2a3540
*/
void sub_2a3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a3540ULL || rel >= 0x2a35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a35d0 size=464 callers=3 calls=4
   calls: sub_2880, sub_2a3fa0, sub_2a4180, sub_367e40
*/
void sub_2a35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a35d0ULL || rel >= 0x2a37a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a37a0 size=960 callers=2 calls=0
   ref: expected
   ref: , expecting %s
   ref:  or %s
   ref: syntax error, un
*/
void expected(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a37a0ULL || rel >= 0x2a3b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a3b60 size=960 callers=2 calls=0
   ref: expected
   ref: , expecting %s
   ref:  or %s
   ref: syntax error, un
*/
void expected_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a3b60ULL || rel >= 0x2a3f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a3f20 size=128 callers=1 calls=2
   calls: fields, shader_d
*/
void sub_2a3f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a3f20ULL || rel >= 0x2a3fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a3fa0 size=480 callers=4 calls=2
   calls: sub_1630, sub_2a3fa0
*/
void sub_2a3fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a3fa0ULL || rel >= 0x2a4180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4180 size=288 callers=2 calls=2
   calls: sub_1630, sub_2a4180
*/
void sub_2a4180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4180ULL || rel >= 0x2a42a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a42a0 size=192 callers=18 calls=0
*/
void sub_2a42a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a42a0ULL || rel >= 0x2a4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4360 size=192 callers=6 calls=0
*/
void sub_2a4360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4360ULL || rel >= 0x2a4420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4420 size=144 callers=13 calls=0
*/
void sub_2a4420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4420ULL || rel >= 0x2a44b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a44b0 size=240 callers=4 calls=0
*/
void sub_2a44b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a44b0ULL || rel >= 0x2a45a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a45a0 size=240 callers=66 calls=0
*/
void sub_2a45a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a45a0ULL || rel >= 0x2a4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4690 size=320 callers=2 calls=0
*/
void sub_2a4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4690ULL || rel >= 0x2a47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a47d0 size=240 callers=11 calls=0
*/
void sub_2a47d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a47d0ULL || rel >= 0x2a48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a48c0 size=80 callers=2 calls=0
*/
void sub_2a48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a48c0ULL || rel >= 0x2a4910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4910 size=80 callers=4 calls=0
*/
void sub_2a4910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4910ULL || rel >= 0x2a4960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4960 size=96 callers=2 calls=0
*/
void sub_2a4960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4960ULL || rel >= 0x2a49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a49c0 size=176 callers=3 calls=0
*/
void sub_2a49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a49c0ULL || rel >= 0x2a4a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4a70 size=32 callers=43 calls=0
*/
void sub_2a4a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4a70ULL || rel >= 0x2a4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4a90 size=48 callers=17 calls=0
*/
void sub_2a4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4a90ULL || rel >= 0x2a4ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4ac0 size=208 callers=45 calls=1
   calls: sub_4c0cb0
   ref: mem_CreatePool
*/
void mem_CreatePool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4ac0ULL || rel >= 0x2a4b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4b90 size=16 callers=1 calls=0
*/
void sub_2a4b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4b90ULL || rel >= 0x2a4ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4ba0 size=112 callers=60 calls=1
   calls: sub_4c0cd0
*/
void sub_2a4ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4ba0ULL || rel >= 0x2a4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4c10 size=352 callers=719 calls=1
   calls: sub_4c0cb0
   ref: mem_Alloc
*/
void mem_Alloc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4c10ULL || rel >= 0x2a4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4d70 size=80 callers=41 calls=1
   calls: mem_Alloc
*/
void sub_2a4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4d70ULL || rel >= 0x2a4dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4dc0 size=320 callers=19 calls=2
   calls: mem_Alloc, sub_4c0cc0
*/
void sub_2a4dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4dc0ULL || rel >= 0x2a4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4f00 size=176 callers=19 calls=0
*/
void sub_2a4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4f00ULL || rel >= 0x2a4fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a4fb0 size=128 callers=42 calls=1
   calls: mem_Alloc
   ref: mem_AddCleanup
*/
void mem_AddCleanup(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a4fb0ULL || rel >= 0x2a5030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5030 size=16 callers=0 calls=0
*/
void sub_2a5030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5030ULL || rel >= 0x2a5040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5040 size=16 callers=0 calls=0
*/
void sub_2a5040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5040ULL || rel >= 0x2a5050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5050 size=304 callers=2 calls=1
   calls: sub_3177b0
*/
void sub_2a5050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5050ULL || rel >= 0x2a5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5180 size=112 callers=2 calls=2
   calls: mem_CreatePool, sub_2600
*/
void sub_2a5180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5180ULL || rel >= 0x2a51f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a51f0 size=48 callers=2 calls=1
   calls: sub_2a4ba0
*/
void sub_2a51f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a51f0ULL || rel >= 0x2a5220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5220 size=272 callers=3 calls=1
   calls: mem_Alloc
*/
void sub_2a5220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5220ULL || rel >= 0x2a5330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5330 size=128 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_2a5330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5330ULL || rel >= 0x2a53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a53b0 size=112 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_2a53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a53b0ULL || rel >= 0x2a5420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5420 size=112 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_2a5420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5420ULL || rel >= 0x2a5490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5490 size=208 callers=1 calls=3
   calls: d_fatal_error_C9999, mem_Alloc, sub_2bb020
   ref: variably indexed states not handled
*/
void variably_indexed_states_not_handled(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5490ULL || rel >= 0x2a5560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5560 size=80 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_2a5560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5560ULL || rel >= 0x2a55b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a55b0 size=112 callers=1 calls=2
   calls: mem_Alloc, sub_3183e0
*/
void sub_2a55b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a55b0ULL || rel >= 0x2a5620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5620 size=1232 callers=2 calls=6
   calls: mem_Alloc, mem_CreatePool, sub_2600, sub_2a4b90, sub_2a4ba0, sub_2ed1a0
*/
void sub_2a5620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5620ULL || rel >= 0x2a5af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5af0 size=16 callers=9 calls=0
*/
void sub_2a5af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5af0ULL || rel >= 0x2a5b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5b00 size=208 callers=6 calls=1
   calls: d_fatal_error_C9999
   ref: unexpected toBase (%d) in IsBaseCastValid
*/
void unexpected_toBase_d_in_IsBaseCastValid(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5b00ULL || rel >= 0x2a5bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5bd0 size=144 callers=5 calls=1
   calls: d_fatal_error_C9999
   ref: unexpected toBase (%d) in IsPerformanceDemotion
*/
void unexpected_toBase_d_in_IsPerformanceDemotion(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5bd0ULL || rel >= 0x2a5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5c60 size=80 callers=5 calls=0
*/
void sub_2a5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5c60ULL || rel >= 0x2a5cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5cb0 size=128 callers=5 calls=1
   calls: mem_Alloc
*/
void sub_2a5cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5cb0ULL || rel >= 0x2a5d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5d30 size=128 callers=4 calls=0
*/
void sub_2a5d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5d30ULL || rel >= 0x2a5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5db0 size=192 callers=0 calls=2
   calls: sub_2dacc0, sub_2f7cf0
   ref: "break" not in loop
   ref: "continue" not in loop
*/
void break_not_in_loop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5db0ULL || rel >= 0x2a5e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a5e70 size=400 callers=1 calls=3
   calls: d_error_C_04d_3, semantics_not_allowed_on_functions_other_than_the_entry, sub_2f7410
   ref: symbol not function "%s"
*/
void symbol_not_function_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a5e70ULL || rel >= 0x2a6000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6000 size=608 callers=4 calls=3
   calls: sub_2dacc0, sub_2f6e10, sub_2f7cf0
   ref: semantics not allowed on functions other than the entry function
   ref: only uniform parameters to the entry function can have default values: "%s"
*/
void semantics_not_allowed_on_functions_other_than_the_entry(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6000ULL || rel >= 0x2a6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6260 size=176 callers=2 calls=2
   calls: sub_369ec0, sub_36a750
*/
void sub_2a6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6260ULL || rel >= 0x2a6310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6310 size=96 callers=0 calls=0
*/
void sub_2a6310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6310ULL || rel >= 0x2a6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6370 size=16 callers=0 calls=0
*/
void sub_2a6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6370ULL || rel >= 0x2a6380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6380 size=336 callers=0 calls=6
   calls: sub_2dacc0, sub_337300, sub_36d110, sub_36d3e0, sub_36d630, sub_36d7d0
   ref: cannot index a non-array value
   ref: %sarray index out of bounds
*/
void sarray_index_out_of_bounds(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6380ULL || rel >= 0x2a64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a64d0 size=80 callers=0 calls=0
*/
void sub_2a64d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a64d0ULL || rel >= 0x2a6520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6520 size=368 callers=1 calls=4
   calls: sub_2dacc0, sub_2db4f0, sub_3595e0, sub_369ec0
   ref: must write to gl_Position
*/
void must_write_to_gl_Position(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6520ULL || rel >= 0x2a6690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6690 size=96 callers=0 calls=1
   calls: sub_354520
*/
void sub_2a6690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6690ULL || rel >= 0x2a66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a66f0 size=224 callers=1 calls=3
   calls: sub_1e20, sub_2db4f0, sub_36a540
   ref: no value written to required member "%s"
*/
void no_value_written_to_required_member_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a66f0ULL || rel >= 0x2a67d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a67d0 size=496 callers=9 calls=2
   calls: bad_kind_to_CheckConnectorUsage, d_fatal_error_C9999
   ref: bad kind to CheckConnectorUsage()
*/
void bad_kind_to_CheckConnectorUsage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a67d0ULL || rel >= 0x2a69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a69c0 size=192 callers=0 calls=1
   calls: sub_2db630
   ref: readonly
   ref: OpenGL does not allow writing to %s variable '%s'
*/
void readonly(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a69c0ULL || rel >= 0x2a6a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6a80 size=320 callers=0 calls=2
   calls: sub_2dacc0, sub_35ca20
   ref: variable/member "%s" has semantic "%s" which is not visible in this profile
*/
void member_s_has_semantic_s_which_is_not_visible_in_this_pro(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6a80ULL || rel >= 0x2a6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a6bc0 size=4320 callers=9 calls=31
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, column_major, d_error_C_04d_3, d_fatal_error_C9999, mem_Alloc, sub_2ac7d0, sub_2dacc0, sub_2db630, sub_35f390, sub_35f400, sub_35f430, sub_35f6d0
   ... +19 more
   ref: non-lvalue actual parameter #%d cannot be out parameter ("%s")
   ref: unexpected expression with function type
   ref: cannot call a non-function
   ref: incompatible type for parameter #%d ("%s")
   ref:     %s(%d) : 
   ref: const qualified actual parameter #%d cannot be out parameter ("%s")
   ref: OpenGL does not allow passing uniform into out or inout parameter
   ref: too few parameters in function call
*/
void unexpected_expression_with_function_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a6bc0ULL || rel >= 0x2a7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7ca0 size=752 callers=0 calls=15
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, sub_2dacc0, sub_35fae0, sub_3604c0, sub_366de0, sub_36cd20, sub_36d110, sub_36d3e0, sub_36d400, sub_36d480, sub_36d4b0, sub_36d630
   ... +3 more
   ref: invalid operands to "%s"
   ref: Boolean expression expected
   ref: operands to "%s" must be integral
   ref: operands to "%s" must be numeric
   ref: length of vector operands to "%s" cannot exceed 4
*/
void invalid_operands_to_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7ca0ULL || rel >= 0x2a7f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a7f90 size=656 callers=0 calls=16
   calls: sub_2dacc0, sub_35fae0, sub_35fc50, sub_3604c0, sub_3619b0, sub_362520, sub_366de0, sub_36cd20, sub_36d110, sub_36d3e0, sub_36d400, sub_36d4b0
   ... +4 more
   ref: invalid operands to "%s"
   ref: increment/decrement of non-lvalue
   ref: dimensions of matrix operands to "%s" cannot exceed 4
   ref: operands to "%s" must be numeric
   ref: length of vector operands to "%s" cannot exceed 4
*/
void decrement_of_non_lvalue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a7f90ULL || rel >= 0x2a8220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a8220 size=1472 callers=0 calls=19
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, invalid_operands_to_s_2, sub_2dacc0, sub_2db630, sub_35fae0, sub_3604c0, sub_3619b0, sub_3662a0, sub_366de0, sub_36cd20, sub_36d110, sub_36d3e0
   ... +7 more
   ref: EXT_gpu_shader4
   ref: invalid operands to "%s"
   ref: operands to "%s" must be integral
   ref: operands to "%s" must be numeric
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: length of vector operands to "%s" cannot exceed 4
*/
void EXT_gpu_shader4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a8220ULL || rel >= 0x2a87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a87e0 size=448 callers=1 calls=9
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, can_t_find_s_function_in_stdlib, sub_2dacc0, sub_3662a0, sub_36d110, sub_36d400, sub_36d630, sub_36d6b0, sub_36e230
   ref: invalid operands to "%s"
   ref: operands to "%s" must be numeric
*/
void invalid_operands_to_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a87e0ULL || rel >= 0x2a89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a89a0 size=624 callers=0 calls=12
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, sub_2dacc0, sub_35fae0, sub_3604c0, sub_3619b0, sub_366de0, sub_36cd20, sub_36d3e0, sub_36d4b0, sub_36d630, sub_36d9a0, sub_36e230
   ref: operands to "%s" must be Boolean
   ref: invalid operands to "%s"
   ref: length of vector operands to "%s" cannot exceed 4
*/
void invalid_operands_to_s_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a89a0ULL || rel >= 0x2a8c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a8c10 size=1856 callers=0 calls=27
   calls: Invalid_binary_operator, OpenGL_does_not_allow_matrix_casts_without_version_120_o, TMP_d_2, sub_2ac440, sub_2ac450, sub_2ac460, sub_2dacc0, sub_35fae0, sub_3604c0, sub_3619b0, sub_365b90, sub_365c40
   ... +15 more
   ref: invalid operands to "%s"
   ref: operands to "%s" must be numeric
   ref: length of vector operands to "%s" cannot exceed 4
*/
void invalid_operands_to_s_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a8c10ULL || rel >= 0x2a9350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9350 size=1056 callers=1 calls=12
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, sub_2dacc0, sub_3661e0, sub_36d110, sub_36d3e0, sub_36d400, sub_36d4b0, sub_36d510, sub_36d550, sub_36d630, sub_36da30, sub_36e230
   ref: invalid first operand to "? :"
   ref: expected vector third operand to "? :"
   ref: expected vector second and third operands to "? :"
   ref: expected scalar third operand to "? :"
   ref: vector operands to "%s" must be of equal length
   ref: incompatible second and third operands to "? :"
   ref: expected scalar first operand to "? :"
   ref: invalid second and third operands to "? :"
*/
void invalid_first_operand_to(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9350ULL || rel >= 0x2a9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a9770 size=624 callers=5 calls=6
   calls: d_fatal_error_C9999, sub_2dacc0, sub_2db4f0, sub_36d550, sub_36da10, too_much_data_in_initialization
   ref: texture objects may not have initializers
   ref: unexpected type category in CheckInitializer()
   ref: too much data in initialization
   ref: non constant expression in initialization
   ref: too little data in initialization
   ref: sampler objects may not have initializers
*/
void too_much_data_in_initialization(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a9770ULL || rel >= 0x2a99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002a99e0 size=3104 callers=0 calls=29
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, TMP_d_2, operands_to_s_must_be_scalar_or_vector, sub_2ac460, sub_2ac760, sub_2ac7d0, sub_2dacc0, sub_2db4f0, sub_35fae0, sub_3608f0, sub_362aa0, sub_365320
   ... +17 more
   ref: too little data in type constructor
   ref: too much data in initialization
   ref: invalid type in type constructor
   ref: invalid initialization
   ref: too much data in type constructor
   ref: expression in vector constructor must be vector or scalar
   ref: too little data in initialization
   ref: length of constructed vectors cannot exceed 4
*/
void too_much_data_in_type_constructor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2a99e0ULL || rel >= 0x2aa600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aa600 size=176 callers=9 calls=3
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, sub_2dacc0, sub_36d3e0
   ref: cast not allowed
*/
void cast_not_allowed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aa600ULL || rel >= 0x2aa6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aa6b0 size=640 callers=0 calls=14
   calls: expected_matrix_operand_to_s, operands_to_s_must_be_scalar_or_vector, sub_2dacc0, sub_2db630, sub_35fae0, sub_3604c0, sub_36cd20, sub_36d050, sub_36d390, sub_36d3e0, sub_36d4b0, sub_36d630
   ... +2 more
   ref: expression left of ."%s" is not a struct or array
   ref: "%s" is not member of struct "%s"
   ref: OpenGL does not allow swizzles on scalar expressions
*/
void s_is_not_member_of_struct_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aa6b0ULL || rel >= 0x2aa930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aa930 size=480 callers=0 calls=14
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, sub_2dacc0, sub_35fae0, sub_3604c0, sub_3619b0, sub_36cd20, sub_36d050, sub_36d110, sub_36d3e0, sub_36d480, sub_36d4b0, sub_36d9a0
   ... +2 more
   ref: operands to "%s" must be integral
   ref: cannot index a non-array value
*/
void cannot_index_a_non_array_value(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aa930ULL || rel >= 0x2aab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aab10 size=720 callers=1 calls=14
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, sub_2dacc0, sub_35fae0, sub_3604c0, sub_3619b0, sub_362520, sub_362b30, sub_366de0, sub_36cd20, sub_36d110, sub_36d3e0, sub_36d4b0
   ... +2 more
   ref: assignment to non-lvalue
   ref: invalid initialization
   ref: assignment of incompatible types
   ref: assignment to const variable
*/
void invalid_initialization(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aab10ULL || rel >= 0x2aade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aade0 size=912 callers=0 calls=6
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, incompatible_types_in_initialization, sub_2dacc0, sub_369bf0, sub_36d3e0, unexpected_expression_with_function_type
   ref: undefined variable "%s"
   ref: cast not allowed
*/
void cast_not_allowed_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aade0ULL || rel >= 0x2ab170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab170 size=272 callers=1 calls=3
   calls: d_error_C_04d_3, sub_369ec0, sub_36a750
   ref: symbol not function "%s"
*/
void symbol_not_function_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab170ULL || rel >= 0x2ab280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab280 size=144 callers=1 calls=3
   calls: sub_369ec0, sub_36a750, symbol_not_function_s_2
*/
void sub_2ab280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab280ULL || rel >= 0x2ab310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab310 size=384 callers=0 calls=6
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, length_of_vector_expressions_cannot_exceed_4, sub_2ac450, sub_2dacc0, sub_36d3e0, sub_36d510
   ref: expression type incompatible with function return type
   ref: void function cannot return a value
*/
void void_function_cannot_return_a_value(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab310ULL || rel >= 0x2ab490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab490 size=528 callers=0 calls=6
   calls: mem_Alloc, sub_36d050, sub_36d9a0, sub_36d9d0, sub_36da30, unexpected_expression_with_function_type
*/
void sub_2ab490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab490ULL || rel >= 0x2ab6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab6a0 size=256 callers=1 calls=2
   calls: d_error_C_04d_3, sub_369ec0
   ref: symbol not function "%s"
*/
void symbol_not_function_s_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab6a0ULL || rel >= 0x2ab7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab7a0 size=32 callers=0 calls=0
*/
void sub_2ab7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab7a0ULL || rel >= 0x2ab7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab7c0 size=304 callers=0 calls=6
   calls: sub_2dacc0, sub_35ca20, sub_36d290, sub_36d790, sub_36d830, sub_36d8e0
   ref: no size for unsized array
*/
void no_size_for_unsized_array(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab7c0ULL || rel >= 0x2ab8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab8f0 size=32 callers=6 calls=0
*/
void sub_2ab8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab8f0ULL || rel >= 0x2ab910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ab910 size=672 callers=0 calls=10
   calls: semantics_not_allowed_on_functions_other_than_the_entry, sub_2dacc0, sub_2ed320, sub_2f4980, sub_306070, sub_3188a0, sub_35f390, sub_35f400, sub_35f430, typedef_fn
   ref: function "%s" not supported in this profile
   ref: call to undefined function "%s"
   ref: recursive call to function "%s"
*/
void recursive_call_to_function_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ab910ULL || rel >= 0x2abbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002abbb0 size=976 callers=0 calls=5
   calls: sub_2b8720, sub_2db630, sub_2f77f0, sub_2f7880, sub_2f7cf0
   ref: beginInvocationInterlockNV()/endInvocationInterlockNV()
   ref: barrier()
   ref: beginInvocationInterlockARB()/endInvocationInterlockARB()
   ref: OpenGL does not allow %s calls after return statement
*/
void endInvocationInterlockNV(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2abbb0ULL || rel >= 0x2abf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002abf80 size=496 callers=3 calls=8
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, incompatible_types_in_initialization, sub_2dacc0, sub_2db4f0, sub_36d050, sub_36d3e0, sub_36d4b0, sub_36d9a0
   ref: incompatible types in initialization
   ref: Extra brace level in initializer being ignored
*/
void incompatible_types_in_initialization(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2abf80ULL || rel >= 0x2ac170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac170 size=224 callers=1 calls=0
*/
void sub_2ac170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac170ULL || rel >= 0x2ac250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac250 size=336 callers=3 calls=6
   calls: mem_Alloc, sub_2880, sub_35f390, sub_35f400, sub_35f430, sub_35f560
*/
void sub_2ac250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac250ULL || rel >= 0x2ac3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac3a0 size=16 callers=0 calls=0
*/
void sub_2ac3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac3a0ULL || rel >= 0x2ac3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac3b0 size=32 callers=1 calls=0
*/
void sub_2ac3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac3b0ULL || rel >= 0x2ac3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac3d0 size=48 callers=22 calls=0
*/
void sub_2ac3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac3d0ULL || rel >= 0x2ac400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac400 size=64 callers=19 calls=0
*/
void sub_2ac400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac400ULL || rel >= 0x2ac440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac440 size=16 callers=30 calls=0
*/
void sub_2ac440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac440ULL || rel >= 0x2ac450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac450 size=16 callers=9 calls=0
*/
void sub_2ac450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac450ULL || rel >= 0x2ac460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac460 size=16 callers=9 calls=0
*/
void sub_2ac460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac460ULL || rel >= 0x2ac470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac470 size=16 callers=7 calls=0
*/
void sub_2ac470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac470ULL || rel >= 0x2ac480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac480 size=144 callers=1 calls=1
   calls: sub_35fc50
*/
void sub_2ac480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac480ULL || rel >= 0x2ac510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac510 size=208 callers=2 calls=2
   calls: sub_35fc50, sub_35fe00
*/
void sub_2ac510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac510ULL || rel >= 0x2ac5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac5e0 size=32 callers=1 calls=0
*/
void sub_2ac5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac5e0ULL || rel >= 0x2ac600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac600 size=64 callers=1 calls=1
   calls: sub_360420
*/
void sub_2ac600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac600ULL || rel >= 0x2ac640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac640 size=64 callers=2 calls=1
   calls: sub_360580
*/
void sub_2ac640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac640ULL || rel >= 0x2ac680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac680 size=112 callers=3 calls=2
   calls: sub_360580, sub_36e230
*/
void sub_2ac680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac680ULL || rel >= 0x2ac6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac6f0 size=112 callers=2 calls=2
   calls: sub_360640, sub_36e230
*/
void sub_2ac6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac6f0ULL || rel >= 0x2ac760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac760 size=112 callers=3 calls=1
   calls: sub_3604c0
*/
void sub_2ac760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac760ULL || rel >= 0x2ac7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac7d0 size=32 callers=50 calls=0
*/
void sub_2ac7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac7d0ULL || rel >= 0x2ac7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac7f0 size=16 callers=0 calls=0
*/
void sub_2ac7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac7f0ULL || rel >= 0x2ac800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ac800 size=720 callers=0 calls=10
   calls: d_fatal_error_C9999, sub_35fc50, sub_35fd70, sub_35fe00, sub_35fed0, sub_360290, sub_360390, sub_36d110, sub_36d4b0, sub_36d630
   ref: bad kind to ConvertNamedConstantsExpr()
   ref: Non scalar or vector type in ConvertNamedConstantsExpr()
   ref: Unknown scalar type in ConvertNamedConstantsExpr()
   ref: Unknown vector type in ConvertNamedConstantsExpr()
*/
void bad_kind_to_ConvertNamedConstantsExpr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ac800ULL || rel >= 0x2acad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002acad0 size=32 callers=0 calls=0
*/
void sub_2acad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2acad0ULL || rel >= 0x2acaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002acaf0 size=272 callers=8 calls=7
   calls: TMP_d_2, sub_2acaf0, sub_35fae0, sub_362780, sub_365b90, sub_365c40, sub_369bf0
*/
void sub_2acaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2acaf0ULL || rel >= 0x2acc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002acc00 size=624 callers=0 calls=13
   calls: TMP_d_2, sub_2ac480, sub_2acaf0, sub_35fae0, sub_35fe00, sub_3604c0, sub_362780, sub_365b90, sub_365c40, sub_369bf0, sub_36d110, sub_36d400
   ... +1 more
*/
void sub_2acc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2acc00ULL || rel >= 0x2ace70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ace70 size=288 callers=0 calls=6
   calls: Invalid_binary_operator, sub_2acaf0, sub_362780, sub_365b90, sub_365c40, sub_369bf0
*/
void sub_2ace70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ace70ULL || rel >= 0x2acf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002acf90 size=128 callers=17 calls=0
*/
void sub_2acf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2acf90ULL || rel >= 0x2ad010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ad010 size=288 callers=0 calls=2
   calls: invalid_discard_statement_encountered_in_DupStmt, sub_36a6b0
*/
void sub_2ad010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ad010ULL || rel >= 0x2ad130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ad130 size=320 callers=2 calls=3
   calls: sub_369ec0, sub_36a100, sub_36a750
*/
void sub_2ad130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ad130ULL || rel >= 0x2ad270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ad270 size=1008 callers=0 calls=9
   calls: OpenGL_does_not_allow_selection_of_expressions_of_array, matrix_op_on_non_matrix, sub_35fc50, sub_3604c0, sub_366d00, sub_369bf0, sub_36d6b0, too_much_data_in_type_constructor_6, unexpected_tri_op_s_in_FlattenCommasExpr
*/
void sub_2ad270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ad270ULL || rel >= 0x2ad660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ad660 size=512 callers=5 calls=7
   calls: Invalid_binary_operator, d_fatal_error_C9999, sub_35fc50, sub_366530, sub_366d00, sub_369bf0, sub_36d6b0
   ref: matrix op on non-matrix
*/
void matrix_op_on_non_matrix(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ad660ULL || rel >= 0x2ad860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ad860 size=112 callers=0 calls=1
   calls: sub_36a4b0
*/
void sub_2ad860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ad860ULL || rel >= 0x2ad8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ad8d0 size=800 callers=0 calls=8
   calls: sub_2dacc0, sub_337300, sub_35fae0, sub_3608f0, sub_362300, sub_36cd20, sub_36d110, sub_36d6b0
   ref: profile requires index expression to be compile-time constant
   ref: profile requires matrices to be simple variables
*/
void profile_requires_matrices_to_be_simple_variables(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ad8d0ULL || rel >= 0x2adbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002adbf0 size=96 callers=0 calls=1
   calls: sub_36a4b0
*/
void sub_2adbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2adbf0ULL || rel >= 0x2adc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002adc50 size=464 callers=0 calls=10
   calls: sub_2ade20, sub_2adf60, sub_36d050, sub_36d120, sub_36d4b0, sub_36d6b0, sub_36d8e0, sub_36d9a0, sub_36d9d0, sub_36da10
*/
void sub_2adc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2adc50ULL || rel >= 0x2ade20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ade20 size=320 callers=2 calls=3
   calls: sub_2b1be0, sub_365df0, sub_369bf0
*/
void sub_2ade20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ade20ULL || rel >= 0x2adf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002adf60 size=352 callers=2 calls=5
   calls: sub_2b1be0, sub_35fc50, sub_366d00, sub_369bf0, sub_36d8e0
*/
void sub_2adf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2adf60ULL || rel >= 0x2ae0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae0c0 size=192 callers=2 calls=2
   calls: sub_369ec0, sub_36a750
*/
void sub_2ae0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae0c0ULL || rel >= 0x2ae180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae180 size=400 callers=0 calls=7
   calls: TMP_d_2, invalid_first_operand_to, sub_35f9c0, sub_35fae0, sub_365b90, sub_365c40, sub_369bf0
*/
void sub_2ae180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae180ULL || rel >= 0x2ae310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae310 size=352 callers=0 calls=4
   calls: invalid_discard_statement_encountered_in_DupStmt, sub_2b22e0, sub_36a4b0, sub_36a750
*/
void sub_2ae310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae310ULL || rel >= 0x2ae470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae470 size=272 callers=0 calls=4
   calls: sub_2acaf0, sub_362780, sub_365b90, sub_369bf0
*/
void sub_2ae470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae470ULL || rel >= 0x2ae580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae580 size=128 callers=0 calls=1
   calls: sub_35ca20
*/
void sub_2ae580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae580ULL || rel >= 0x2ae600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae600 size=48 callers=0 calls=0
*/
void sub_2ae600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae600ULL || rel >= 0x2ae630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae630 size=704 callers=0 calls=5
   calls: expected_matrix_operand_to_s, operands_to_s_must_be_scalar_or_vector, sub_3373f0, sub_36d630, sub_36d6b0
   ref: _m%d%d
*/
void m_d_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae630ULL || rel >= 0x2ae8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae8f0 size=256 callers=0 calls=3
   calls: sub_2db630, sub_35fc50, sub_36d050
   ref: OpenGL requires '()' after a length operator
*/
void OpenGL_requires_after_a_length_operator(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae8f0ULL || rel >= 0x2ae9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ae9f0 size=512 callers=3 calls=10
   calls: NOPERSPECTIVE_3, f_333333, sub_354520, sub_354e90, sub_35fc50, sub_3604c0, sub_365df0, sub_366d00, sub_36d760, sub_36d9a0
   ref: 333333
*/
void f_333333(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ae9f0ULL || rel >= 0x2aebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aebf0 size=160 callers=0 calls=1
   calls: f_333333
*/
void sub_2aebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aebf0ULL || rel >= 0x2aec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aec90 size=368 callers=2 calls=8
   calls: sub_2ad130, sub_333920, sub_338bf0, sub_33d6c0, sub_340ab0, sub_343b60, sub_369ec0, sub_36a750
*/
void sub_2aec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aec90ULL || rel >= 0x2aee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aee00 size=224 callers=2 calls=6
   calls: sub_2bb020, sub_2c3970, sub_2f7060, sub_31f8c0, sub_32f970, sub_331f40
*/
void sub_2aee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aee00ULL || rel >= 0x2aeee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002aeee0 size=512 callers=1 calls=7
   calls: mem_AddCleanup, sub_2db570, sub_2ed1a0, sub_3027f0, sub_3029c0, sub_36c2d0, sub_36c7f0
   ref: profile '%s' is deprecated
*/
void profile_s_is_deprecated(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2aeee0ULL || rel >= 0x2af0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af0e0 size=224 callers=1 calls=5
   calls: fn_s, sub_2fd860, sub_2fea90, sub_300a10, sub_369ec0
*/
void sub_2af0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af0e0ULL || rel >= 0x2af1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af1c0 size=400 callers=1 calls=4
   calls: sub_2b8720, sub_2f9880, sub_3188c0, sub_31b820
*/
void sub_2af1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af1c0ULL || rel >= 0x2af350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af350 size=272 callers=0 calls=5
   calls: sub_36d050, sub_36d430, sub_36d560, sub_36d630, sub_36de90
*/
void sub_2af350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af350ULL || rel >= 0x2af460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af460 size=192 callers=1 calls=2
   calls: sub_2ed320, sub_369ec0
*/
void sub_2af460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af460ULL || rel >= 0x2af520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002af520 size=2192 callers=1 calls=35
   calls: matrix_deconstruction_not_supported, must_write_to_gl_Position, sub_2a6260, sub_2ab280, sub_2ab8f0, sub_2af0e0, sub_2af460, sub_2c3970, sub_2d5b40, sub_2d9fc0, sub_2daad0, sub_2dcaa0
   ... +23 more
*/
void sub_2af520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2af520ULL || rel >= 0x2afdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002afdb0 size=160 callers=0 calls=5
   calls: sub_3627b0, sub_36d550, sub_36d8e0, sub_36d9d0, unexpected_expr_kind_in_IsExprEqual
*/
void sub_2afdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2afdb0ULL || rel >= 0x2afe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002afe50 size=656 callers=4 calls=11
   calls: d_error_C_04d_3, no_value_written_to_required_member_s, sub_2d5b40, sub_2d5ed0, sub_333360, sub_338bf0, sub_33d6c0, sub_340ab0, sub_343b60, sub_369ec0, sub_36a750
   ref: matrix deconstruction not supported
*/
void matrix_deconstruction_not_supported(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2afe50ULL || rel >= 0x2b00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b00e0 size=112 callers=1 calls=0
*/
void sub_2b00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b00e0ULL || rel >= 0x2b0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0150 size=48 callers=0 calls=1
   calls: d_error_C_04d
*/
void sub_2b0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0150ULL || rel >= 0x2b0180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0180 size=688 callers=1 calls=1
   calls: sub_2e8ce0
*/
void sub_2b0180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0180ULL || rel >= 0x2b0430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0430 size=16 callers=0 calls=0
*/
void sub_2b0430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0430ULL || rel >= 0x2b0440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0440 size=224 callers=1 calls=3
   calls: sub_2ed320, sub_302e20, sub_359700
   ref: If gl_FragCoord is redeclared in any fragment shader , it must be redeclared in all the fragment sha
*/
void If_gl_FragCoord_is_redeclared_in_any_fragment_shader_it(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0440ULL || rel >= 0x2b0520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0520 size=2592 callers=0 calls=59
   calls: If_gl_FragCoord_is_redeclared_in_any_fragment_shader_it, d_fatal_error_C9999, enddebuginfo, fn_s, gl_Layer, illegal_parameter_to_main_s, no_error_detected_since_previous_error_token, no_program_defined_2, profile_s_is_deprecated, sMSDB_Scope_d_STDLIB, s_d_already_used, sub_2600
   ... +47 more
   ref: no program defined
   ref: symbol "%s" matches CgFX symbol "%s" expected a function symbol
   ref: Old code generator no longer supported for this profile
   ref: multiple functions not supported
*/
void no_program_defined(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0520ULL || rel >= 0x2b0f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b0f40 size=3232 callers=24 calls=10
   calls: TMP_d_2, d_fatal_error_C9999, sub_2acaf0, sub_35fae0, sub_360ed0, sub_362780, sub_3627b0, sub_365c40, sub_369bf0, unexpected_tri_op_s_in_FlattenCommasExpr
   ref: unexpected tri op (%s) in FlattenCommasExpr
*/
void unexpected_tri_op_s_in_FlattenCommasExpr(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b0f40ULL || rel >= 0x2b1be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1be0 size=736 callers=2 calls=16
   calls: sub_2ade20, sub_2adf60, sub_3604c0, sub_360580, sub_360640, sub_360ed0, sub_36d110, sub_36d4b0, sub_36d4f0, sub_36d500, sub_36d550, sub_36d630
   ... +4 more
*/
void sub_2b1be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1be0ULL || rel >= 0x2b1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b1ec0 size=1056 callers=0 calls=8
   calls: TMP_d_2, sub_35fae0, sub_35fd70, sub_360ed0, sub_360f30, sub_366eb0, sub_369bf0, sub_36d4b0
*/
void sub_2b1ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b1ec0ULL || rel >= 0x2b22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b22e0 size=336 callers=4 calls=3
   calls: invalid_discard_statement_encountered_in_DupStmt, sub_2b22e0, sub_360f30
*/
void sub_2b22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b22e0ULL || rel >= 0x2b2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b2430 size=96 callers=0 calls=1
   calls: sub_368620
*/
void sub_2b2430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b2430ULL || rel >= 0x2b2490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b2490 size=352 callers=0 calls=5
   calls: sub_1e30, sub_2ed320, sub_35fc50, sub_3604c0, sub_36de90
*/
void sub_2b2490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b2490ULL || rel >= 0x2b25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b25f0 size=240 callers=0 calls=3
   calls: sub_2af1c0, sub_2b8720, sub_2ed320
*/
void sub_2b25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b25f0ULL || rel >= 0x2b26e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b26e0 size=160 callers=0 calls=3
   calls: can_t_find_s_function_in_stdlib, sub_337300, sub_36d630
   ref: __getVectorIndex
*/
void getVectorIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b26e0ULL || rel >= 0x2b2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b2780 size=208 callers=0 calls=3
   calls: can_t_find_s_function_in_stdlib, sub_337300, sub_36d630
   ref: __setVectorIndex
*/
void setVectorIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b2780ULL || rel >= 0x2b2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b2850 size=3712 callers=5 calls=19
   calls: d_fatal_error_C9999, iflocal, sub_343b50, sub_35fae0, sub_35fd70, sub_360420, sub_3604c0, sub_360580, sub_360640, sub_3608f0, sub_360ed0, sub_362300
   ... +7 more
   ref: $iflocal
   ref: unexpected assignemnt op in FlattenIfStatementsStmt
*/
void iflocal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b2850ULL || rel >= 0x2b36d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b36d0 size=48 callers=0 calls=0
*/
void sub_2b36d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b36d0ULL || rel >= 0x2b3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3700 size=96 callers=0 calls=0
*/
void sub_2b3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3700ULL || rel >= 0x2b3760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3760 size=112 callers=0 calls=1
   calls: sub_35ca20
*/
void sub_2b3760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3760ULL || rel >= 0x2b37d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b37d0 size=64 callers=0 calls=0
*/
void sub_2b37d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b37d0ULL || rel >= 0x2b3810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3810 size=448 callers=0 calls=8
   calls: sub_2f9880, sub_2fa5c0, sub_306070, sub_316bc0, sub_317c50, sub_3188a0, sub_3188c0, sub_31bef0
*/
void sub_2b3810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3810ULL || rel >= 0x2b39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b39d0 size=272 callers=1 calls=2
   calls: sub_1200, sub_1250
   ref: <undefined>
   ref: <*** end fixed atoms ***>
   ref: ~!@%^&*()-+=|,.<>/?;:[]{}#
*/
void unnamed_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b39d0ULL || rel >= 0x2b3ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3ae0 size=176 callers=23 calls=0
*/
void sub_2b3ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3ae0ULL || rel >= 0x2b3b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3b90 size=176 callers=4 calls=0
*/
void sub_2b3b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3b90ULL || rel >= 0x2b3c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3c40 size=64 callers=3 calls=0
   ref: ~!a%^&*()-+=6,.<>/?;:[]{}#~!a%^&*()-+=6,.<>/?;:[]{}#~!a%^&*()-+=6,.<>/?;:[]{}#~!a%^&*()-+=6,.<>/?;:[
*/
void unnamed_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3c40ULL || rel >= 0x2b3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3c80 size=144 callers=9 calls=3
   calls: sub_2880, sub_35f400, sub_35f430
*/
void sub_2b3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3c80ULL || rel >= 0x2b3d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b3d10 size=2160 callers=5 calls=41
   calls: MaxInstInBasicBlock, ReuseSymbolTable_Current_scope_dirty, TRIANGLE_OUT, atomic_uint, d_fatal_error_C9999, gp5tep, mem_AddCleanup, mem_Alloc, quiet, sub_1200, sub_1250, sub_2600
   ... +29 more
   ref: cgc: local atom table initialization failed.
   ref: command line args: %s
   ref: bad arguments
   ref: An error occurred
   ref: cgc: symbol table initialization failed.
   ref: cgc: scanner initialization failed.
   ref: __CGC__=%d
   ref: cgc: cpp initialization failed.
*/
void bad_arguments(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b3d10ULL || rel >= 0x2b4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4580 size=576 callers=11 calls=17
   calls: sub_1290, sub_2a4a70, sub_2a4a90, sub_2a4ba0, sub_2a51f0, sub_2b3c80, sub_2b4580, sub_2c3c10, sub_2d6ad0, sub_2db4d0, sub_2db4e0, sub_302a20
   ... +5 more
*/
void sub_2b4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4580ULL || rel >= 0x2b47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b47c0 size=1056 callers=2 calls=0
   ref: -vulkan
   ref: -nostrict
   ref: -nonsignalnans
   ref: -error
   ref: -oglsl
   ref: -debuglast
   ref: -glslWonly
   ref: -debug
*/
void quiet(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b47c0ULL || rel >= 0x2b4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b4be0 size=4720 callers=4 calls=12
   calls: count, mem_Alloc, sub_210, sub_220, sub_2a4dc0, sub_2b7e60, sub_2c6e40, sub_2c75a0, sub_351920, sub_35f6d0, sub_4c0cb0, sub_4c0cc0
   ref: -maxunrollcount
   ref: -nocode
   ref: -nowarn=
   ref: -vulkan
   ref: -nostrict
   ref: -nonsignalnans
   ref: -relaxErrors=
   ref: -error
*/
void MaxInstInBasicBlock(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b4be0ULL || rel >= 0x2b5e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b5e50 size=16 callers=5 calls=0
*/
void sub_2b5e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b5e50ULL || rel >= 0x2b5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b5e60 size=16 callers=4 calls=0
*/
void sub_2b5e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b5e60ULL || rel >= 0x2b5e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b5e70 size=32 callers=3 calls=0
*/
void sub_2b5e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b5e70ULL || rel >= 0x2b5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b5e90 size=32 callers=4 calls=0
*/
void sub_2b5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b5e90ULL || rel >= 0x2b5eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b5eb0 size=176 callers=1 calls=3
   calls: shader_d, sub_2a4a70, sub_2a4a90
*/
void sub_2b5eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b5eb0ULL || rel >= 0x2b5f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b5f60 size=768 callers=1 calls=20
   calls: GL_compatibility_profile, arbvp1, continue_fn, d_fatal_error_C9999, f_32, mediump_precision_qualifier_on_atomic_uint, mem_CreatePool, sub_2a4a70, sub_2a4a90, sub_2a4ba0, sub_2c6e40, sub_2db4d0
   ... +8 more
   ref: InitHAL failed
   ref: __VERSION__=%d
*/
void VERSION___d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b5f60ULL || rel >= 0x2b6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b6260 size=416 callers=2 calls=13
   calls: MaxInstInBasicBlock, VERSION___d, d_fatal_error_C9999, shader_d, sub_2a4a70, sub_2a4a90, sub_2a4ba0, sub_2b3c80, sub_2c3c70, sub_2c7650, sub_2db4d0, sub_2db4e0
   ... +1 more
   ref: Error reading from string
   ref: Bad options
*/
void Bad_options(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b6260ULL || rel >= 0x2b6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b6400 size=352 callers=1 calls=14
   calls: GL_compatibility_profile, arbvp1, d_fatal_error_C9999, line_d, sub_2880, sub_2a4a70, sub_2a4a90, sub_2c6e40, sub_2db4d0, sub_2db4e0, sub_35f390, sub_35f430
   ... +2 more
   ref: InitHAL failed
   ref: __VERSION__=%d
*/
void VERSION___d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b6400ULL || rel >= 0x2b6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b6560 size=320 callers=1 calls=12
   calls: MaxInstInBasicBlock, VERSION___d_2, d_fatal_error_C9999, shader_d, sub_2a4a70, sub_2a4a90, sub_2b3c80, sub_2c3c70, sub_2c7650, sub_2db4d0, sub_2db4e0, sub_35f390
   ref: Error reading from string
   ref: Bad options
*/
void Bad_options_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b6560ULL || rel >= 0x2b66a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b66a0 size=624 callers=1 calls=19
   calls: d_error_C_04d_3, mem_Alloc, sub_2a4a70, sub_2a4a90, sub_2a4ba0, sub_2a4dc0, sub_2a5180, sub_2a51f0, sub_2b3c80, sub_2b4580, sub_2c3d90, sub_2db4d0
   ... +7 more
*/
void sub_2b66a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b66a0ULL || rel >= 0x2b6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b6910 size=1792 callers=2 calls=23
   calls: MaxInstInBasicBlock, arbvp1, d_fatal_error_C9999, mem_Alloc, mem_CreatePool, sub_12a0, sub_2a4a70, sub_2a4a90, sub_2a4ba0, sub_2a4d70, sub_2a4dc0, sub_2a4f00
   ... +11 more
   ref: InitHAL failed
   ref: Bad options
*/
void Bad_options_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b6910ULL || rel >= 0x2b7010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7010 size=576 callers=2 calls=9
   calls: Bad_options_3, mem_Alloc, mem_CreatePool, sub_2600, sub_2a4a70, sub_2a4a90, sub_2a4ba0, sub_2b3c80, sub_35f390
*/
void sub_2b7010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7010ULL || rel >= 0x2b7250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7250 size=16 callers=3 calls=0
*/
void sub_2b7250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7250ULL || rel >= 0x2b7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7260 size=528 callers=1 calls=11
   calls: Bad_options_3, mem_Alloc, mem_CreatePool, sub_2600, sub_2a3f20, sub_2a4a70, sub_2a4a90, sub_2a4ba0, sub_2b3c80, sub_35f390, sub_35f6d0
   ref: , %d warnings
   ref: , %d errors.
   ref: %d lines
*/
void d_lines(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7260ULL || rel >= 0x2b7470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7470 size=16 callers=25 calls=0
*/
void sub_2b7470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7470ULL || rel >= 0x2b7480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7480 size=128 callers=4 calls=1
   calls: sub_3608f0
*/
void sub_2b7480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7480ULL || rel >= 0x2b7500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7500 size=112 callers=2 calls=0
*/
void sub_2b7500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7500ULL || rel >= 0x2b7570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7570 size=1856 callers=1 calls=14
   calls: d_error_C_04d_3, declaration_of_s_conflicts_with_previous_declaration_at, mem_Alloc, sub_2a45a0, sub_2a4a70, sub_2a4a90, sub_2ac250, sub_2b3c80, sub_2b7cb0, sub_2d6e60, sub_2dacc0, sub_2db4d0
   ... +2 more
   ref: internal corruption, aborting
   ref: incompatible options for link
   ref: layout specifier '%s' conflicts between shader objects
   ref: Incompatible option setting %s
*/
void incompatible_options_for_link(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7570ULL || rel >= 0x2b7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7cb0 size=352 callers=4 calls=2
   calls: mem_Alloc, sub_2a4dc0
*/
void sub_2b7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7cb0ULL || rel >= 0x2b7e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7e10 size=80 callers=2 calls=0
*/
void sub_2b7e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7e10ULL || rel >= 0x2b7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b7e60 size=544 callers=22 calls=1
   calls: sub_3608f0
*/
void sub_2b7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b7e60ULL || rel >= 0x2b8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b8080 size=16 callers=0 calls=0
*/
void sub_2b8080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b8080ULL || rel >= 0x2b8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b8090 size=416 callers=1 calls=1
   calls: sub_35f6d0
   ref: count=
   ref: cgc: missing %s option after "-%s"
   ref: cgc: unknown %s option "%s"after "-%s"
   ref: cgc: invalid number for "-%s count="
*/
void count(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b8090ULL || rel >= 0x2b8230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b8230 size=800 callers=17 calls=3
   calls: sub_2b8230, sub_2baca0, sub_354520
*/
void sub_2b8230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b8230ULL || rel >= 0x2b8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b8550 size=112 callers=2 calls=1
   calls: sub_2b8550
*/
void sub_2b8550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b8550ULL || rel >= 0x2b85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b85c0 size=144 callers=4 calls=1
   calls: sub_2b85c0
*/
void sub_2b85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b85c0ULL || rel >= 0x2b8650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b8650 size=208 callers=1 calls=2
   calls: sub_2f9210, sub_3188c0
*/
void sub_2b8650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b8650ULL || rel >= 0x2b8720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b8720 size=64 callers=42 calls=0
*/
void sub_2b8720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b8720ULL || rel >= 0x2b8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b8760 size=144 callers=2 calls=1
   calls: sub_302f30
*/
void sub_2b8760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b8760ULL || rel >= 0x2b87f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002b87f0 size=8640 callers=4 calls=31
   calls: ARB_separate_shader_objects, atomicCompSwap, d_error_C_04d_3, normalize, sub_2b8550, sub_2b85c0, sub_2baca0, sub_2baef0, sub_2f7060, sub_2f75e0, sub_2f77f0, sub_2f7880
   ... +19 more
   ref: normalize
   ref: internal error
*/
void normalize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2b87f0ULL || rel >= 0x2ba9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ba9b0 size=272 callers=0 calls=0
*/
void sub_2ba9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ba9b0ULL || rel >= 0x2baac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002baac0 size=480 callers=0 calls=5
   calls: atomicCompSwap, sub_2f9880, sub_2fa960, sub_2fc060, sub_3177b0
*/
void sub_2baac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2baac0ULL || rel >= 0x2baca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002baca0 size=544 callers=2 calls=1
   calls: sub_2f9210
*/
void sub_2baca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2baca0ULL || rel >= 0x2baec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002baec0 size=48 callers=0 calls=0
*/
void sub_2baec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2baec0ULL || rel >= 0x2baef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002baef0 size=304 callers=2 calls=3
   calls: sub_2baef0, sub_2f9210, sub_3188c0
*/
void sub_2baef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2baef0ULL || rel >= 0x2bb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb020 size=48 callers=19 calls=0
*/
void sub_2bb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb020ULL || rel >= 0x2bb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb050 size=176 callers=0 calls=3
   calls: sub_2f9880, sub_2fc060, sub_3177b0
*/
void sub_2bb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb050ULL || rel >= 0x2bb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb100 size=32 callers=1 calls=0
*/
void sub_2bb100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb100ULL || rel >= 0x2bb120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb120 size=960 callers=1 calls=10
   calls: sub_2bbb80, sub_2ed1a0, sub_2f7060, sub_2f7410, sub_306070, sub_317d30, sub_359610, sub_359640, sub_359670, sub_359700
*/
void sub_2bb120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb120ULL || rel >= 0x2bb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb4e0 size=304 callers=0 calls=5
   calls: s__d__s, sub_2bbb80, sub_2bbed0, sub_2ed320, sub_2fa5c0
*/
void sub_2bb4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb4e0ULL || rel >= 0x2bb610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb610 size=944 callers=0 calls=8
   calls: atomicCompSwap, sub_2f9210, sub_2fab10, sub_2fbe60, sub_2fc060, sub_2fcb90, sub_3177b0, sub_3188c0
*/
void sub_2bb610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb610ULL || rel >= 0x2bb9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bb9c0 size=448 callers=0 calls=3
   calls: sub_2f9210, sub_2fbdc0, sub_3188c0
*/
void sub_2bb9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bb9c0ULL || rel >= 0x2bbb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bbb80 size=560 callers=4 calls=4
   calls: sub_2bbb80, sub_3188c0, sub_31b710, sub_31b820
*/
void sub_2bbb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bbb80ULL || rel >= 0x2bbdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bbdb0 size=288 callers=0 calls=8
   calls: sub_2b8230, sub_2ed440, sub_2ed9f0, sub_2f9880, sub_2fa5c0, sub_3188a0, sub_31b710, sub_31b820
*/
void sub_2bbdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bbdb0ULL || rel >= 0x2bbed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bbed0 size=256 callers=2 calls=4
   calls: sub_2b8230, sub_2f9880, sub_31b710, sub_31b820
*/
void sub_2bbed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bbed0ULL || rel >= 0x2bbfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bbfd0 size=608 callers=1 calls=10
   calls: s__d, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_2f9880, sub_306070, sub_307ee0, sub_3598f0, sub_3608f0, xfb_stride_2
   ref: _%s_%d_%s
   ref: _%s_%s_%d_%s
*/
void s__d__s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bbfd0ULL || rel >= 0x2bc230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc230 size=32 callers=0 calls=0
*/
void sub_2bc230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc230ULL || rel >= 0x2bc250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc250 size=32 callers=0 calls=0
*/
void sub_2bc250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc250ULL || rel >= 0x2bc270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc270 size=48 callers=0 calls=0
*/
void sub_2bc270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc270ULL || rel >= 0x2bc2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc2a0 size=48 callers=0 calls=0
*/
void sub_2bc2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc2a0ULL || rel >= 0x2bc2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc2d0 size=32 callers=0 calls=0
*/
void sub_2bc2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc2d0ULL || rel >= 0x2bc2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc2f0 size=32 callers=0 calls=0
*/
void sub_2bc2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc2f0ULL || rel >= 0x2bc310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc310 size=16 callers=0 calls=0
*/
void sub_2bc310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc310ULL || rel >= 0x2bc320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc320 size=32 callers=0 calls=0
*/
void sub_2bc320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc320ULL || rel >= 0x2bc340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc340 size=32 callers=0 calls=0
*/
void sub_2bc340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc340ULL || rel >= 0x2bc360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc360 size=32 callers=0 calls=0
*/
void sub_2bc360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc360ULL || rel >= 0x2bc380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc380 size=32 callers=0 calls=0
*/
void sub_2bc380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc380ULL || rel >= 0x2bc3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc3a0 size=32 callers=0 calls=0
*/
void sub_2bc3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc3a0ULL || rel >= 0x2bc3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc3c0 size=32 callers=0 calls=0
*/
void sub_2bc3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc3c0ULL || rel >= 0x2bc3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc3e0 size=32 callers=0 calls=0
*/
void sub_2bc3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc3e0ULL || rel >= 0x2bc400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc400 size=32 callers=0 calls=0
*/
void sub_2bc400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc400ULL || rel >= 0x2bc420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc420 size=32 callers=0 calls=0
*/
void sub_2bc420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc420ULL || rel >= 0x2bc440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc440 size=32 callers=0 calls=0
*/
void sub_2bc440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc440ULL || rel >= 0x2bc460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc460 size=32 callers=0 calls=0
*/
void sub_2bc460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc460ULL || rel >= 0x2bc480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc480 size=32 callers=0 calls=0
*/
void sub_2bc480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc480ULL || rel >= 0x2bc4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc4a0 size=32 callers=0 calls=0
*/
void sub_2bc4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc4a0ULL || rel >= 0x2bc4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc4c0 size=48 callers=0 calls=0
*/
void sub_2bc4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc4c0ULL || rel >= 0x2bc4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc4f0 size=48 callers=0 calls=0
*/
void sub_2bc4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc4f0ULL || rel >= 0x2bc520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc520 size=32 callers=0 calls=0
*/
void sub_2bc520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc520ULL || rel >= 0x2bc540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc540 size=32 callers=0 calls=0
*/
void sub_2bc540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc540ULL || rel >= 0x2bc560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc560 size=32 callers=0 calls=0
*/
void sub_2bc560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc560ULL || rel >= 0x2bc580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc580 size=32 callers=0 calls=0
*/
void sub_2bc580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc580ULL || rel >= 0x2bc5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc5a0 size=32 callers=0 calls=0
*/
void sub_2bc5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc5a0ULL || rel >= 0x2bc5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc5c0 size=32 callers=0 calls=0
*/
void sub_2bc5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc5c0ULL || rel >= 0x2bc5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc5e0 size=32 callers=0 calls=0
*/
void sub_2bc5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc5e0ULL || rel >= 0x2bc600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc600 size=32 callers=0 calls=0
*/
void sub_2bc600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc600ULL || rel >= 0x2bc620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc620 size=32 callers=0 calls=0
*/
void sub_2bc620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc620ULL || rel >= 0x2bc640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc640 size=16 callers=0 calls=0
*/
void sub_2bc640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc640ULL || rel >= 0x2bc650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc650 size=16 callers=0 calls=0
*/
void sub_2bc650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc650ULL || rel >= 0x2bc660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc660 size=16 callers=0 calls=0
*/
void sub_2bc660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc660ULL || rel >= 0x2bc670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc670 size=16 callers=0 calls=0
*/
void sub_2bc670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc670ULL || rel >= 0x2bc680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc680 size=16 callers=0 calls=0
*/
void sub_2bc680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc680ULL || rel >= 0x2bc690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc690 size=112 callers=0 calls=0
*/
void sub_2bc690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc690ULL || rel >= 0x2bc700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc700 size=64 callers=0 calls=1
   calls: sub_2bc760
*/
void sub_2bc700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc700ULL || rel >= 0x2bc740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc740 size=32 callers=0 calls=0
*/
void sub_2bc740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc740ULL || rel >= 0x2bc760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc760 size=176 callers=11 calls=0
*/
void sub_2bc760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc760ULL || rel >= 0x2bc810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc810 size=16 callers=0 calls=0
*/
void sub_2bc810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc810ULL || rel >= 0x2bc820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc820 size=16 callers=0 calls=0
*/
void sub_2bc820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc820ULL || rel >= 0x2bc830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc830 size=16 callers=0 calls=0
*/
void sub_2bc830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc830ULL || rel >= 0x2bc840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc840 size=16 callers=0 calls=0
*/
void sub_2bc840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc840ULL || rel >= 0x2bc850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc850 size=16 callers=0 calls=0
*/
void sub_2bc850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc850ULL || rel >= 0x2bc860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc860 size=16 callers=0 calls=0
*/
void sub_2bc860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc860ULL || rel >= 0x2bc870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc870 size=32 callers=0 calls=0
*/
void sub_2bc870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc870ULL || rel >= 0x2bc890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc890 size=16 callers=0 calls=0
*/
void sub_2bc890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc890ULL || rel >= 0x2bc8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc8a0 size=32 callers=0 calls=0
*/
void sub_2bc8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc8a0ULL || rel >= 0x2bc8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc8c0 size=32 callers=0 calls=0
*/
void sub_2bc8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc8c0ULL || rel >= 0x2bc8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc8e0 size=32 callers=0 calls=0
*/
void sub_2bc8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc8e0ULL || rel >= 0x2bc900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc900 size=48 callers=0 calls=0
*/
void sub_2bc900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc900ULL || rel >= 0x2bc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc930 size=48 callers=0 calls=0
*/
void sub_2bc930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc930ULL || rel >= 0x2bc960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc960 size=32 callers=0 calls=0
*/
void sub_2bc960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc960ULL || rel >= 0x2bc980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc980 size=32 callers=0 calls=0
*/
void sub_2bc980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc980ULL || rel >= 0x2bc9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc9a0 size=32 callers=0 calls=0
*/
void sub_2bc9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc9a0ULL || rel >= 0x2bc9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc9c0 size=32 callers=0 calls=0
*/
void sub_2bc9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc9c0ULL || rel >= 0x2bc9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bc9e0 size=32 callers=0 calls=0
*/
void sub_2bc9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bc9e0ULL || rel >= 0x2bca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bca00 size=32 callers=0 calls=0
*/
void sub_2bca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bca00ULL || rel >= 0x2bca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bca20 size=16 callers=0 calls=0
*/
void sub_2bca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bca20ULL || rel >= 0x2bca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bca30 size=16 callers=0 calls=0
*/
void sub_2bca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bca30ULL || rel >= 0x2bca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bca40 size=16 callers=0 calls=0
*/
void sub_2bca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bca40ULL || rel >= 0x2bca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bca50 size=16 callers=0 calls=0
*/
void sub_2bca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bca50ULL || rel >= 0x2bca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bca60 size=96 callers=0 calls=0
*/
void sub_2bca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bca60ULL || rel >= 0x2bcac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcac0 size=64 callers=0 calls=1
   calls: sub_2bc760
*/
void sub_2bcac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcac0ULL || rel >= 0x2bcb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcb00 size=16 callers=0 calls=0
*/
void sub_2bcb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcb00ULL || rel >= 0x2bcb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcb10 size=16 callers=0 calls=0
*/
void sub_2bcb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcb10ULL || rel >= 0x2bcb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcb20 size=16 callers=0 calls=0
*/
void sub_2bcb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcb20ULL || rel >= 0x2bcb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcb30 size=16 callers=0 calls=0
*/
void sub_2bcb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcb30ULL || rel >= 0x2bcb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcb40 size=16 callers=0 calls=0
*/
void sub_2bcb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcb40ULL || rel >= 0x2bcb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcb50 size=16 callers=0 calls=0
*/
void sub_2bcb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcb50ULL || rel >= 0x2bcb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcb60 size=32 callers=0 calls=0
*/
void sub_2bcb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcb60ULL || rel >= 0x2bcb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcb80 size=32 callers=0 calls=0
*/
void sub_2bcb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcb80ULL || rel >= 0x2bcba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcba0 size=32 callers=0 calls=0
*/
void sub_2bcba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcba0ULL || rel >= 0x2bcbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcbc0 size=32 callers=0 calls=0
*/
void sub_2bcbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcbc0ULL || rel >= 0x2bcbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcbe0 size=32 callers=0 calls=0
*/
void sub_2bcbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcbe0ULL || rel >= 0x2bcc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcc00 size=48 callers=0 calls=0
*/
void sub_2bcc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcc00ULL || rel >= 0x2bcc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcc30 size=48 callers=0 calls=0
*/
void sub_2bcc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcc30ULL || rel >= 0x2bcc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcc60 size=32 callers=0 calls=0
*/
void sub_2bcc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcc60ULL || rel >= 0x2bcc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcc80 size=32 callers=0 calls=0
*/
void sub_2bcc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcc80ULL || rel >= 0x2bcca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcca0 size=16 callers=0 calls=0
*/
void sub_2bcca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcca0ULL || rel >= 0x2bccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bccb0 size=16 callers=0 calls=0
*/
void sub_2bccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bccb0ULL || rel >= 0x2bccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bccc0 size=16 callers=0 calls=0
*/
void sub_2bccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bccc0ULL || rel >= 0x2bccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bccd0 size=16 callers=0 calls=0
*/
void sub_2bccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bccd0ULL || rel >= 0x2bcce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcce0 size=16 callers=0 calls=0
*/
void sub_2bcce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcce0ULL || rel >= 0x2bccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bccf0 size=16 callers=0 calls=0
*/
void sub_2bccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bccf0ULL || rel >= 0x2bcd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcd00 size=32 callers=0 calls=0
*/
void sub_2bcd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcd00ULL || rel >= 0x2bcd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcd20 size=16 callers=0 calls=0
*/
void sub_2bcd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcd20ULL || rel >= 0x2bcd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcd30 size=32 callers=0 calls=0
*/
void sub_2bcd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcd30ULL || rel >= 0x2bcd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcd50 size=32 callers=0 calls=0
*/
void sub_2bcd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcd50ULL || rel >= 0x2bcd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcd70 size=32 callers=0 calls=0
*/
void sub_2bcd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcd70ULL || rel >= 0x2bcd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcd90 size=48 callers=0 calls=0
*/
void sub_2bcd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcd90ULL || rel >= 0x2bcdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcdc0 size=48 callers=0 calls=0
*/
void sub_2bcdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcdc0ULL || rel >= 0x2bcdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcdf0 size=32 callers=0 calls=0
*/
void sub_2bcdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcdf0ULL || rel >= 0x2bce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bce10 size=32 callers=0 calls=0
*/
void sub_2bce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bce10ULL || rel >= 0x2bce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bce30 size=16 callers=0 calls=0
*/
void sub_2bce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bce30ULL || rel >= 0x2bce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bce40 size=16 callers=0 calls=0
*/
void sub_2bce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bce40ULL || rel >= 0x2bce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bce50 size=16 callers=0 calls=0
*/
void sub_2bce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bce50ULL || rel >= 0x2bce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bce60 size=16 callers=0 calls=0
*/
void sub_2bce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bce60ULL || rel >= 0x2bce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bce70 size=16 callers=0 calls=0
*/
void sub_2bce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bce70ULL || rel >= 0x2bce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bce80 size=16 callers=0 calls=0
*/
void sub_2bce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bce80ULL || rel >= 0x2bce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bce90 size=32 callers=0 calls=0
*/
void sub_2bce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bce90ULL || rel >= 0x2bceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bceb0 size=32 callers=0 calls=0
*/
void sub_2bceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bceb0ULL || rel >= 0x2bced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bced0 size=32 callers=0 calls=0
*/
void sub_2bced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bced0ULL || rel >= 0x2bcef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcef0 size=48 callers=0 calls=0
*/
void sub_2bcef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcef0ULL || rel >= 0x2bcf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcf20 size=48 callers=0 calls=0
*/
void sub_2bcf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcf20ULL || rel >= 0x2bcf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcf50 size=16 callers=0 calls=0
*/
void sub_2bcf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcf50ULL || rel >= 0x2bcf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcf60 size=16 callers=0 calls=0
*/
void sub_2bcf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcf60ULL || rel >= 0x2bcf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcf70 size=16 callers=0 calls=0
*/
void sub_2bcf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcf70ULL || rel >= 0x2bcf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcf80 size=16 callers=0 calls=0
*/
void sub_2bcf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcf80ULL || rel >= 0x2bcf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcf90 size=16 callers=0 calls=0
*/
void sub_2bcf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcf90ULL || rel >= 0x2bcfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcfa0 size=16 callers=0 calls=0
*/
void sub_2bcfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcfa0ULL || rel >= 0x2bcfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcfb0 size=16 callers=0 calls=0
*/
void sub_2bcfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcfb0ULL || rel >= 0x2bcfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcfc0 size=32 callers=0 calls=0
*/
void sub_2bcfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcfc0ULL || rel >= 0x2bcfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bcfe0 size=32 callers=0 calls=0
*/
void sub_2bcfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bcfe0ULL || rel >= 0x2bd000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd000 size=32 callers=0 calls=0
*/
void sub_2bd000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd000ULL || rel >= 0x2bd020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd020 size=48 callers=0 calls=0
*/
void sub_2bd020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd020ULL || rel >= 0x2bd050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd050 size=48 callers=0 calls=0
*/
void sub_2bd050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd050ULL || rel >= 0x2bd080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd080 size=16 callers=0 calls=0
*/
void sub_2bd080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd080ULL || rel >= 0x2bd090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd090 size=16 callers=0 calls=0
*/
void sub_2bd090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd090ULL || rel >= 0x2bd0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd0a0 size=16 callers=0 calls=0
*/
void sub_2bd0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd0a0ULL || rel >= 0x2bd0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd0b0 size=16 callers=0 calls=0
*/
void sub_2bd0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd0b0ULL || rel >= 0x2bd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd0c0 size=16 callers=0 calls=0
*/
void sub_2bd0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd0c0ULL || rel >= 0x2bd0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd0d0 size=16 callers=0 calls=0
*/
void sub_2bd0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd0d0ULL || rel >= 0x2bd0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd0e0 size=16 callers=0 calls=0
*/
void sub_2bd0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd0e0ULL || rel >= 0x2bd0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd0f0 size=32 callers=0 calls=0
*/
void sub_2bd0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd0f0ULL || rel >= 0x2bd110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd110 size=32 callers=0 calls=0
*/
void sub_2bd110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd110ULL || rel >= 0x2bd130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd130 size=32 callers=0 calls=0
*/
void sub_2bd130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd130ULL || rel >= 0x2bd150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd150 size=48 callers=0 calls=0
*/
void sub_2bd150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd150ULL || rel >= 0x2bd180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd180 size=48 callers=0 calls=0
*/
void sub_2bd180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd180ULL || rel >= 0x2bd1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd1b0 size=32 callers=0 calls=0
*/
void sub_2bd1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd1b0ULL || rel >= 0x2bd1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd1d0 size=32 callers=0 calls=0
*/
void sub_2bd1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd1d0ULL || rel >= 0x2bd1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd1f0 size=32 callers=0 calls=0
*/
void sub_2bd1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd1f0ULL || rel >= 0x2bd210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd210 size=32 callers=0 calls=0
*/
void sub_2bd210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd210ULL || rel >= 0x2bd230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd230 size=32 callers=0 calls=0
*/
void sub_2bd230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd230ULL || rel >= 0x2bd250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd250 size=32 callers=0 calls=0
*/
void sub_2bd250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd250ULL || rel >= 0x2bd270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd270 size=32 callers=0 calls=0
*/
void sub_2bd270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd270ULL || rel >= 0x2bd290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd290 size=32 callers=0 calls=0
*/
void sub_2bd290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd290ULL || rel >= 0x2bd2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd2b0 size=32 callers=0 calls=0
*/
void sub_2bd2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd2b0ULL || rel >= 0x2bd2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd2d0 size=32 callers=0 calls=0
*/
void sub_2bd2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd2d0ULL || rel >= 0x2bd2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd2f0 size=32 callers=0 calls=0
*/
void sub_2bd2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd2f0ULL || rel >= 0x2bd310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd310 size=16 callers=0 calls=0
*/
void sub_2bd310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd310ULL || rel >= 0x2bd320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd320 size=16 callers=0 calls=0
*/
void sub_2bd320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd320ULL || rel >= 0x2bd330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd330 size=112 callers=0 calls=0
*/
void sub_2bd330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd330ULL || rel >= 0x2bd3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd3a0 size=64 callers=0 calls=1
   calls: sub_2bc760
*/
void sub_2bd3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd3a0ULL || rel >= 0x2bd3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd3e0 size=16 callers=0 calls=0
*/
void sub_2bd3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd3e0ULL || rel >= 0x2bd3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd3f0 size=16 callers=0 calls=0
*/
void sub_2bd3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd3f0ULL || rel >= 0x2bd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd400 size=16 callers=0 calls=0
*/
void sub_2bd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd400ULL || rel >= 0x2bd410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd410 size=16 callers=0 calls=0
*/
void sub_2bd410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd410ULL || rel >= 0x2bd420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd420 size=32 callers=0 calls=0
*/
void sub_2bd420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd420ULL || rel >= 0x2bd440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd440 size=32 callers=0 calls=0
*/
void sub_2bd440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd440ULL || rel >= 0x2bd460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd460 size=32 callers=0 calls=0
*/
void sub_2bd460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd460ULL || rel >= 0x2bd480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd480 size=48 callers=0 calls=0
*/
void sub_2bd480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd480ULL || rel >= 0x2bd4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd4b0 size=48 callers=0 calls=0
*/
void sub_2bd4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd4b0ULL || rel >= 0x2bd4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd4e0 size=32 callers=0 calls=0
*/
void sub_2bd4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd4e0ULL || rel >= 0x2bd500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd500 size=32 callers=0 calls=0
*/
void sub_2bd500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd500ULL || rel >= 0x2bd520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd520 size=32 callers=0 calls=0
*/
void sub_2bd520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd520ULL || rel >= 0x2bd540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd540 size=32 callers=0 calls=0
*/
void sub_2bd540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd540ULL || rel >= 0x2bd560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd560 size=32 callers=0 calls=0
*/
void sub_2bd560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd560ULL || rel >= 0x2bd580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd580 size=16 callers=0 calls=0
*/
void sub_2bd580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd580ULL || rel >= 0x2bd590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd590 size=96 callers=0 calls=0
*/
void sub_2bd590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd590ULL || rel >= 0x2bd5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd5f0 size=64 callers=0 calls=1
   calls: sub_2bc760
*/
void sub_2bd5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd5f0ULL || rel >= 0x2bd630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd630 size=16 callers=0 calls=0
*/
void sub_2bd630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd630ULL || rel >= 0x2bd640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd640 size=16 callers=0 calls=0
*/
void sub_2bd640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd640ULL || rel >= 0x2bd650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd650 size=16 callers=0 calls=0
*/
void sub_2bd650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd650ULL || rel >= 0x2bd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd660 size=16 callers=0 calls=0
*/
void sub_2bd660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd660ULL || rel >= 0x2bd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd670 size=32 callers=0 calls=0
*/
void sub_2bd670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd670ULL || rel >= 0x2bd690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd690 size=32 callers=0 calls=0
*/
void sub_2bd690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd690ULL || rel >= 0x2bd6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd6b0 size=32 callers=0 calls=0
*/
void sub_2bd6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd6b0ULL || rel >= 0x2bd6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd6d0 size=48 callers=0 calls=0
*/
void sub_2bd6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd6d0ULL || rel >= 0x2bd700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd700 size=32 callers=0 calls=0
*/
void sub_2bd700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd700ULL || rel >= 0x2bd720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd720 size=32 callers=0 calls=0
*/
void sub_2bd720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd720ULL || rel >= 0x2bd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd740 size=32 callers=0 calls=0
*/
void sub_2bd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd740ULL || rel >= 0x2bd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd760 size=32 callers=0 calls=0
*/
void sub_2bd760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd760ULL || rel >= 0x2bd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd780 size=32 callers=0 calls=0
*/
void sub_2bd780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd780ULL || rel >= 0x2bd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd7a0 size=32 callers=0 calls=0
*/
void sub_2bd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd7a0ULL || rel >= 0x2bd7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd7c0 size=16 callers=0 calls=0
*/
void sub_2bd7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd7c0ULL || rel >= 0x2bd7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd7d0 size=96 callers=0 calls=0
*/
void sub_2bd7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd7d0ULL || rel >= 0x2bd830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd830 size=48 callers=0 calls=1
   calls: sub_2bc760
*/
void sub_2bd830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd830ULL || rel >= 0x2bd860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd860 size=16 callers=0 calls=0
*/
void sub_2bd860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd860ULL || rel >= 0x2bd870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd870 size=16 callers=0 calls=0
*/
void sub_2bd870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd870ULL || rel >= 0x2bd880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd880 size=128 callers=0 calls=0
*/
void sub_2bd880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd880ULL || rel >= 0x2bd900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd900 size=96 callers=0 calls=0
*/
void sub_2bd900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd900ULL || rel >= 0x2bd960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd960 size=96 callers=0 calls=0
*/
void sub_2bd960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd960ULL || rel >= 0x2bd9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bd9c0 size=96 callers=0 calls=0
*/
void sub_2bd9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bd9c0ULL || rel >= 0x2bda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bda20 size=128 callers=0 calls=0
*/
void sub_2bda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bda20ULL || rel >= 0x2bdaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdaa0 size=112 callers=0 calls=0
*/
void sub_2bdaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdaa0ULL || rel >= 0x2bdb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdb10 size=64 callers=0 calls=1
   calls: sub_2bc760
*/
void sub_2bdb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdb10ULL || rel >= 0x2bdb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdb50 size=64 callers=0 calls=1
   calls: sub_2bc760
*/
void sub_2bdb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdb50ULL || rel >= 0x2bdb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdb90 size=64 callers=0 calls=1
   calls: sub_2bc760
*/
void sub_2bdb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdb90ULL || rel >= 0x2bdbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdbd0 size=64 callers=0 calls=1
   calls: sub_2bc760
*/
void sub_2bdbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdbd0ULL || rel >= 0x2bdc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdc10 size=80 callers=0 calls=1
   calls: sub_2bc760
*/
void sub_2bdc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdc10ULL || rel >= 0x2bdc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdc60 size=48 callers=0 calls=1
   calls: sub_2bc760
*/
void sub_2bdc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdc60ULL || rel >= 0x2bdc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdc90 size=16 callers=0 calls=0
*/
void sub_2bdc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdc90ULL || rel >= 0x2bdca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdca0 size=32 callers=0 calls=0
*/
void sub_2bdca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdca0ULL || rel >= 0x2bdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdcc0 size=32 callers=0 calls=0
*/
void sub_2bdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdcc0ULL || rel >= 0x2bdce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdce0 size=32 callers=0 calls=0
*/
void sub_2bdce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdce0ULL || rel >= 0x2bdd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdd00 size=48 callers=0 calls=0
*/
void sub_2bdd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdd00ULL || rel >= 0x2bdd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdd30 size=32 callers=0 calls=0
*/
void sub_2bdd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdd30ULL || rel >= 0x2bdd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdd50 size=32 callers=0 calls=0
*/
void sub_2bdd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdd50ULL || rel >= 0x2bdd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdd70 size=32 callers=0 calls=0
*/
void sub_2bdd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdd70ULL || rel >= 0x2bdd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bdd90 size=32 callers=0 calls=0
*/
void sub_2bdd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bdd90ULL || rel >= 0x2bddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bddb0 size=32 callers=0 calls=0
*/
void sub_2bddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bddb0ULL || rel >= 0x2bddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bddd0 size=32 callers=0 calls=0
*/
void sub_2bddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bddd0ULL || rel >= 0x2bddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bddf0 size=16 callers=0 calls=0
*/
void sub_2bddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bddf0ULL || rel >= 0x2bde00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bde00 size=3072 callers=1 calls=18
   calls: declaration_of_s_conflicts_with_previous_declaration_at_2, function_s_is_already_defined_at_s_d, mem_Alloc, mem_CreatePool, s__d, sub_2a4ba0, sub_2dacc0, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_2edbd0, sub_2f6e10
   ... +6 more
   ref: declaration of "%s" conflicts with previous declaration at %s(%d)
*/
void declaration_of_s_conflicts_with_previous_declaration_at(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bde00ULL || rel >= 0x2bea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bea00 size=1824 callers=3 calls=13
   calls: s__d, sub_2bfa20, sub_2bfb90, sub_2bfd50, sub_2dacc0, sub_2ed320, sub_2ed440, sub_302da0, sub_302e20, sub_302ee0, sub_307ee0, sub_3184b0
   ... +1 more
   ref: declaration of "%s" conflicts with previous declaration at %s(%d)
*/
void declaration_of_s_conflicts_with_previous_declaration_at_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bea00ULL || rel >= 0x2bf120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bf120 size=2304 callers=3 calls=12
   calls: mem_Alloc, storage_class_conflicts_with_previous_declaration_of_s, sub_2bfb90, sub_2c0170, sub_2c0480, sub_2dacc0, sub_2ed440, sub_2f6e10, sub_302e20, sub_303f50, sub_3608f0, the_name_s_is_already_defined_at_s_d
   ref: function "%s" is already defined at %s(%d)
*/
void function_s_is_already_defined_at_s_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bf120ULL || rel >= 0x2bfa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bfa20 size=368 callers=7 calls=6
   calls: sub_2bfa20, sub_2bfdf0, sub_2bff10, sub_2ed320, sub_2ed440, sub_2ed9f0
*/
void sub_2bfa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bfa20ULL || rel >= 0x2bfb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bfb90 size=448 callers=4 calls=5
   calls: function_s_is_already_defined_at_s_d, sub_2ed440, sub_3029c0, sub_302a20, sub_302d00
*/
void sub_2bfb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bfb90ULL || rel >= 0x2bfd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bfd50 size=160 callers=4 calls=2
   calls: sub_2bfd50, sub_2c0170
*/
void sub_2bfd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bfd50ULL || rel >= 0x2bfdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bfdf0 size=288 callers=2 calls=1
   calls: sub_2bff10
*/
void sub_2bfdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bfdf0ULL || rel >= 0x2bff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002bff10 size=432 callers=4 calls=5
   calls: sub_2bfa20, sub_2bfdf0, sub_2bff10, sub_2ed320, sub_2f6e10
*/
void sub_2bff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2bff10ULL || rel >= 0x2c00c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c00c0 size=32 callers=0 calls=0
*/
void sub_2c00c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c00c0ULL || rel >= 0x2c00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c00e0 size=144 callers=0 calls=2
   calls: sub_2bfa20, sub_2bff10
*/
void sub_2c00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c00e0ULL || rel >= 0x2c0170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0170 size=784 callers=10 calls=13
   calls: declaration_of_s_conflicts_with_previous_declaration_at_2, sub_2bfd50, sub_2c0170, sub_2ed320, sub_2ed440, sub_302ff0, sub_3174c0, sub_3176c0, sub_317880, sub_318230, sub_318310, sub_3183e0
   ... +1 more
*/
void sub_2c0170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0170ULL || rel >= 0x2c0480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0480 size=224 callers=5 calls=2
   calls: sub_2c0480, sub_2ed320
*/
void sub_2c0480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0480ULL || rel >= 0x2c0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0560 size=512 callers=0 calls=4
   calls: mem_Alloc, sub_2c0170, sub_2c0480, sub_2ed320
*/
void sub_2c0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0560ULL || rel >= 0x2c0760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0760 size=224 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_2c0760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0760ULL || rel >= 0x2c0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0840 size=320 callers=5 calls=1
   calls: sub_2a4f00
*/
void sub_2c0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0840ULL || rel >= 0x2c0980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0980 size=160 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_2c0980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0980ULL || rel >= 0x2c0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0a20 size=64 callers=0 calls=1
   calls: sub_2a4f00
*/
void sub_2c0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0a20ULL || rel >= 0x2c0a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0a60 size=256 callers=0 calls=0
*/
void sub_2c0a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0a60ULL || rel >= 0x2c0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c0b60 size=1280 callers=4 calls=9
   calls: sub_2c0840, sub_2c0b60, sub_2c1600, sub_2c21c0, sub_2f9880, sub_31b710, sub_31b820, sub_31da60, unnamed_13
*/
void sub_2c0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c0b60ULL || rel >= 0x2c1060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1060 size=1056 callers=5 calls=7
   calls: sub_2c0b60, sub_306070, sub_31b820, sub_31da60, sub_3608f0, sub_360c40, unnamed_13
   ref: %s[%d]
*/
void unnamed_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1060ULL || rel >= 0x2c1480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1480 size=384 callers=1 calls=5
   calls: sub_2c0b60, sub_2c1600, sub_2f9880, unnamed_13, unnamed_14
*/
void sub_2c1480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1480ULL || rel >= 0x2c1600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1600 size=576 callers=6 calls=4
   calls: sub_2c1600, sub_2f9880, sub_31b710, sub_31b820
*/
void sub_2c1600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1600ULL || rel >= 0x2c1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1840 size=464 callers=16 calls=3
   calls: sub_30a0e0, sub_3608f0, unnamed_14
   ref: %s[%d]
*/
void unnamed_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1840ULL || rel >= 0x2c1a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1a10 size=928 callers=1 calls=7
   calls: sub_2f9880, sub_2f9ff0, sub_31b2a0, sub_31b710, sub_31b820, sub_31da60, unnamed_14
*/
void sub_2c1a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1a10ULL || rel >= 0x2c1db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c1db0 size=608 callers=0 calls=4
   calls: sub_2c0840, sub_2f75e0, sub_2f9ff0, sub_2fa4a0
*/
void sub_2c1db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c1db0ULL || rel >= 0x2c2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c2010 size=96 callers=0 calls=1
   calls: sub_2c1480
*/
void sub_2c2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c2010ULL || rel >= 0x2c2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c2070 size=336 callers=1 calls=3
   calls: sub_2f6e10, sub_2f9880, sub_31b820
*/
void sub_2c2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c2070ULL || rel >= 0x2c21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c21c0 size=416 callers=1 calls=3
   calls: normalize, only_applies_to_pointers, sub_2f6e10
*/
void sub_2c21c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c21c0ULL || rel >= 0x2c2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c2360 size=976 callers=0 calls=14
   calls: normalize, sub_2c1600, sub_2c1a10, sub_2c2070, sub_2f6e10, sub_2f9880, sub_2fa5c0, sub_31b2a0, sub_31b710, sub_31b820, sub_31da60, sub_3224a0
   ... +2 more
*/
void sub_2c2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c2360ULL || rel >= 0x2c2730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c2730 size=624 callers=1 calls=3
   calls: sub_2f9880, sub_3608f0, unnamed_14
   ref: %s[%d]
*/
void unnamed_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c2730ULL || rel >= 0x2c29a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c29a0 size=800 callers=3 calls=5
   calls: sub_2c0760, sub_2fbdc0, sub_3177b0, sub_317880, sub_3188c0
*/
void sub_2c29a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c29a0ULL || rel >= 0x2c2cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c2cc0 size=1328 callers=0 calls=13
   calls: sub_2c1600, sub_2c29a0, sub_2c31f0, sub_2f9880, sub_2fa1c0, sub_2fa3a0, sub_316bc0, sub_31b710, sub_31b820, sub_31da60, unnamed_13, unnamed_14
   ... +1 more
*/
void sub_2c2cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c2cc0ULL || rel >= 0x2c31f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c31f0 size=944 callers=1 calls=9
   calls: mem_Alloc, sub_2c29a0, sub_2f7060, sub_2fa1c0, sub_2fa3a0, sub_31b710, sub_31b820, sub_31da60, unnamed_14
*/
void sub_2c31f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c31f0ULL || rel >= 0x2c35a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c35a0 size=256 callers=0 calls=2
   calls: sub_2fa1c0, sub_2fa3a0
*/
void sub_2c35a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c35a0ULL || rel >= 0x2c36a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c36a0 size=720 callers=4 calls=7
   calls: sub_1ff0, sub_2a5050, sub_2c29a0, sub_2fbe60, sub_317880, sub_3608f0, unnamed_16
   ref: %s[%d]
*/
void unnamed_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c36a0ULL || rel >= 0x2c3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3970 size=272 callers=3 calls=5
   calls: mem_Alloc, mem_CreatePool, sub_2a4ba0, sub_370900, unnamed_16
*/
void sub_2c3970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3970ULL || rel >= 0x2c3a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3a80 size=16 callers=0 calls=0
*/
void sub_2c3a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3a80ULL || rel >= 0x2c3a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3a90 size=16 callers=0 calls=0
*/
void sub_2c3a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3a90ULL || rel >= 0x2c3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3aa0 size=16 callers=0 calls=0
*/
void sub_2c3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3aa0ULL || rel >= 0x2c3ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3ab0 size=16 callers=0 calls=0
*/
void sub_2c3ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3ab0ULL || rel >= 0x2c3ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3ac0 size=16 callers=0 calls=0
*/
void sub_2c3ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3ac0ULL || rel >= 0x2c3ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3ad0 size=160 callers=2 calls=2
   calls: mem_Alloc, mem_CreatePool
*/
void sub_2c3ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3ad0ULL || rel >= 0x2c3b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3b70 size=96 callers=0 calls=0
*/
void sub_2c3b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3b70ULL || rel >= 0x2c3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3bd0 size=16 callers=0 calls=0
*/
void sub_2c3bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3bd0ULL || rel >= 0x2c3be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3be0 size=48 callers=0 calls=0
*/
void sub_2c3be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3be0ULL || rel >= 0x2c3c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3c10 size=96 callers=1 calls=3
   calls: sub_2a4ba0, sub_2c3c70, unmatched_s
*/
void sub_2c3c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3c10ULL || rel >= 0x2c3c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3c70 size=288 callers=3 calls=1
   calls: sub_35f400
*/
void sub_2c3c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3c70ULL || rel >= 0x2c3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3d90 size=80 callers=1 calls=1
   calls: unmatched_s
*/
void sub_2c3d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3d90ULL || rel >= 0x2c3de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c3de0 size=1232 callers=5 calls=4
   calls: Syntax_error_in_s, Too_many_arguments_to_macro_s, sub_2dacc0, sub_302f30
   ref: Syntax error in #%s
*/
void Syntax_error_in_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c3de0ULL || rel >= 0x2c42b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c42b0 size=2464 callers=84 calls=13
   calls: EOF_inside_comment, Too_many_arguments_to_macro_s, mem_Alloc, shader_d, sub_2dacc0, sub_302f30, sub_35f390, sub_35f400, sub_35f430, sub_35f470, sub_35f750, sub_35f810
   ... +1 more
   ref: Unexpected EOF in macro "%s" argument list
   ref: Not enough arguments to macro %s
   ref: Too many arguments to macro %s
*/
void Too_many_arguments_to_macro_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c42b0ULL || rel >= 0x2c4c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c4c50 size=304 callers=1 calls=5
   calls: s__d, sub_302e20, sub_302f30, sub_307ee0, sub_3608f0
*/
void sub_2c4c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c4c50ULL || rel >= 0x2c4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c4d80 size=6048 callers=2 calls=34
   calls: EOF_inside_comment, Syntax_error_in_s_2, d_fatal_error_C9999, expected_extension_name_action, ifndef, mem_Alloc, number_of_arguments, s__d, s_cannot_follow_else, stdin, store_required_start, sub_2c4c50
   ... +22 more
   ref: invalid profile "%s"
   ref: OpenGL does not allow #include directives
   ref: define
   ref: GLSL/ES
   ref: invalid token "%s" in version line
   ref: compute shaders supported %s version %d and above
   ref: #extension directive must occur before any non-preprocessor token
   ref: unsupported version %d
*/
void include(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c4d80ULL || rel >= 0x2c6520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6520 size=1024 callers=4 calls=3
   calls: Syntax_error_in_s_2, sub_2dacc0, unmatched_s
   ref: #endif should not have arguments
   ref: #else must not have arguments
   ref: %s cannot follow #else
*/
void s_cannot_follow_else(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6520ULL || rel >= 0x2c6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6920 size=256 callers=2 calls=3
   calls: Syntax_error_in_s, s_cannot_follow_else, sub_2dacc0
   ref: Syntax error in #%s
*/
void Syntax_error_in_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6920ULL || rel >= 0x2c6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6a20 size=416 callers=2 calls=3
   calls: s_cannot_follow_else, sub_2dacc0, sub_302f30
   ref: ifndef
   ref: Syntax error in #%s
*/
void ifndef(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6a20ULL || rel >= 0x2c6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6bc0 size=640 callers=1 calls=5
   calls: Too_many_arguments_to_macro_s, sub_2c7a60, sub_2d6b00, sub_2db630, sub_3608f0
   ref: line number
   ref: source-string number
   ref: number of arguments
   ref: #line %s invalid
*/
void number_of_arguments(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6bc0ULL || rel >= 0x2c6e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6e40 size=352 callers=91 calls=8
   calls: s__d, sub_302e20, sub_307ee0, sub_35f390, sub_35f400, sub_35f470, sub_35f750, sub_3608f0
*/
void sub_2c6e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6e40ULL || rel >= 0x2c6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6fa0 size=16 callers=0 calls=0
*/
void sub_2c6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6fa0ULL || rel >= 0x2c6fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6fb0 size=16 callers=0 calls=0
*/
void sub_2c6fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6fb0ULL || rel >= 0x2c6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6fc0 size=16 callers=0 calls=0
*/
void sub_2c6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6fc0ULL || rel >= 0x2c6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6fd0 size=16 callers=0 calls=0
*/
void sub_2c6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6fd0ULL || rel >= 0x2c6fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c6fe0 size=960 callers=0 calls=5
   calls: EOL_inside_preprocessor_string, shader_d, sub_2db630, sub_35f430, sub_4c0cb0
   ref: OpenGL ES doesn't support '%s' macro operator
*/
void OpenGL_ES_doesn_t_support_s_macro_operator(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c6fe0ULL || rel >= 0x2c73a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c73a0 size=64 callers=0 calls=0
*/
void sub_2c73a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c73a0ULL || rel >= 0x2c73e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c73e0 size=176 callers=0 calls=1
   calls: sub_35f400
*/
void sub_2c73e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c73e0ULL || rel >= 0x2c7490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7490 size=272 callers=2 calls=1
   calls: sub_2dacc0
   ref: EOF inside comment
*/
void EOF_inside_comment(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7490ULL || rel >= 0x2c75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c75a0 size=176 callers=1 calls=2
   calls: mem_Alloc, sub_2a4dc0
*/
void sub_2c75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c75a0ULL || rel >= 0x2c7650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7650 size=48 callers=3 calls=1
   calls: sub_3027f0
*/
void sub_2c7650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7650ULL || rel >= 0x2c7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7680 size=16 callers=0 calls=0
*/
void sub_2c7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7680ULL || rel >= 0x2c7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7690 size=608 callers=7 calls=3
   calls: Too_many_arguments_to_macro_s, include, sub_2c7690
*/
void sub_2c7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7690ULL || rel >= 0x2c78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c78f0 size=16 callers=0 calls=0
*/
void sub_2c78f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c78f0ULL || rel >= 0x2c7900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7900 size=16 callers=0 calls=0
*/
void sub_2c7900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7900ULL || rel >= 0x2c7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7910 size=16 callers=0 calls=0
*/
void sub_2c7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7910ULL || rel >= 0x2c7920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7920 size=16 callers=0 calls=0
*/
void sub_2c7920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7920ULL || rel >= 0x2c7930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7930 size=16 callers=0 calls=0
*/
void sub_2c7930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7930ULL || rel >= 0x2c7940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7940 size=32 callers=0 calls=0
*/
void sub_2c7940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7940ULL || rel >= 0x2c7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7960 size=16 callers=0 calls=0
*/
void sub_2c7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7960ULL || rel >= 0x2c7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7970 size=16 callers=0 calls=0
*/
void sub_2c7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7970ULL || rel >= 0x2c7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7980 size=16 callers=0 calls=0
*/
void sub_2c7980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7980ULL || rel >= 0x2c7990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c7990 size=16 callers=0 calls=0
*/
void sub_2c7990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c7990ULL || rel >= 0x2c79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c79a0 size=16 callers=0 calls=0
*/
void sub_2c79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c79a0ULL || rel >= 0x2c79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c79b0 size=16 callers=0 calls=0
*/
void sub_2c79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c79b0ULL || rel >= 0x2c79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c79c0 size=16 callers=0 calls=0
*/
void sub_2c79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c79c0ULL || rel >= 0x2c79d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c79d0 size=16 callers=0 calls=0
*/
void sub_2c79d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c79d0ULL || rel >= 0x2c79e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c79e0 size=16 callers=0 calls=0
*/
void sub_2c79e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c79e0ULL || rel >= 0x2c79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002c79f0 size=16 callers=0 calls=0
*/
void sub_2c79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2c79f0ULL || rel >= 0x2c7a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

