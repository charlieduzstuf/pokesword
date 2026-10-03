/* main functions 00dffce0..00e224b0 (110 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00dffce0 size=16 callers=0 calls=0
*/
void sub_dffce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdffce0ULL || rel >= 0xdffcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dffcf0 size=16 callers=0 calls=0
*/
void sub_dffcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdffcf0ULL || rel >= 0xdffd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dffd00 size=320 callers=1 calls=3
   calls: seperator_mark_7, sub_1c0, sub_ce0
*/
void sub_dffd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdffd00ULL || rel >= 0xdffe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dffe40 size=320 callers=1 calls=3
   calls: seperator_mark_7, sub_1c0, sub_ce0
*/
void sub_dffe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdffe40ULL || rel >= 0xdfff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00dfff80 size=320 callers=1 calls=5
   calls: cannot_properly_align_memory_for_s_2, name, sub_154c170, sub_154cfd0, sub_154d550
*/
void sub_dfff80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfff80ULL || rel >= 0xe000c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e000c0 size=448 callers=1 calls=5
   calls: seperator_mark_9, sub_154ab20, sub_154dfa0, sub_1c0, unnamed_54
   ref: cannot properly align memory for '%s'
*/
void cannot_properly_align_memory_for_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe000c0ULL || rel >= 0xe00280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e00280 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e00280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe00280ULL || rel >= 0xe002c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e002c0 size=1760 callers=1 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: seperator_mark
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::HaxeVecto
*/
void seperator_mark_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe002c0ULL || rel >= 0xe009a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e009a0 size=240 callers=1 calls=1
   calls: typeinfo
*/
void sub_e009a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe009a0ULL || rel >= 0xe00a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e00a90 size=176 callers=20 calls=5
   calls: sub_154a9b0, sub_154ae60, sub_154bf00, sub_154bf60, typeinfo
*/
void sub_e00a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe00a90ULL || rel >= 0xe00b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e00b40 size=160 callers=6 calls=5
   calls: sub_154bf00, sub_154bf60, sub_154c170, sub_154c290, typeinfo
*/
void sub_e00b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe00b40ULL || rel >= 0xe00be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e00be0 size=432 callers=0 calls=6
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e00be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe00be0ULL || rel >= 0xe00d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e00d90 size=432 callers=0 calls=6
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e00d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe00d90ULL || rel >= 0xe00f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e00f40 size=192 callers=2 calls=6
   calls: sub_154bf00, sub_154bf40, sub_154bf60, sub_154c170, sub_154c290, typeinfo
*/
void sub_e00f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe00f40ULL || rel >= 0xe01000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e01000 size=560 callers=0 calls=12
   calls: sub_154ab00, sub_154ae60, sub_154af10, sub_154b750, sub_154b940, sub_154bc50, sub_154bf00, sub_154c3b0, sub_154cb00, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e01000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe01000ULL || rel >= 0xe01230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e01230 size=416 callers=0 calls=7
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0, unknown
*/
void sub_e01230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe01230ULL || rel >= 0xe013d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e013d0 size=224 callers=1 calls=5
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154c880, sub_154cfd0
*/
void sub_e013d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe013d0ULL || rel >= 0xe014b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e014b0 size=5824 callers=1 calls=6
   calls: sub_c70, sub_ce0, sub_df8de0, sub_df9460, sub_dfdbb0, typeinfo
*/
void sub_e014b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe014b0ULL || rel >= 0xe02b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e02b70 size=176 callers=0 calls=6
   calls: sub_154ab00, sub_154ae60, sub_154b750, sub_154bf00, sub_154c3b0, sub_154cb00
*/
void sub_e02b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe02b70ULL || rel >= 0xe02c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e02c20 size=448 callers=1 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b750, sub_154b940, sub_154c4f0, sub_154cb00, sub_dfadd0, sub_e03a70, sub_e04060, sub_e041a0, sub_e042e0
   ... +2 more
   ref: (unknown)
   ref: sol: attempt to index (set) nil value "%s" on userdata (bad (misspelled?) key name or does not exist
*/
void unknown_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe02c20ULL || rel >= 0xe02de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e02de0 size=384 callers=0 calls=6
   calls: sub_154ab20, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e02de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe02de0ULL || rel >= 0xe02f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e02f60 size=384 callers=0 calls=6
   calls: sub_154ab20, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e02f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe02f60ULL || rel >= 0xe030e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e030e0 size=16 callers=0 calls=0
*/
void sub_e030e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe030e0ULL || rel >= 0xe030f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e030f0 size=16 callers=0 calls=0
*/
void sub_e030f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe030f0ULL || rel >= 0xe03100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03100 size=16 callers=0 calls=0
*/
void sub_e03100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03100ULL || rel >= 0xe03110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03110 size=16 callers=0 calls=0
*/
void sub_e03110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03110ULL || rel >= 0xe03120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03120 size=16 callers=0 calls=0
*/
void sub_e03120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03120ULL || rel >= 0xe03130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03130 size=16 callers=0 calls=0
*/
void sub_e03130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03130ULL || rel >= 0xe03140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03140 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03140ULL || rel >= 0xe03190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03190 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03190ULL || rel >= 0xe031e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e031e0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e031e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe031e0ULL || rel >= 0xe03230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03230 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03230ULL || rel >= 0xe03280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03280 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03280ULL || rel >= 0xe032d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e032d0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e032d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe032d0ULL || rel >= 0xe03320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03320 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03320ULL || rel >= 0xe03370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03370 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03370ULL || rel >= 0xe033c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e033c0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e033c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe033c0ULL || rel >= 0xe03410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03410 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03410ULL || rel >= 0xe03460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03460 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03460ULL || rel >= 0xe034b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e034b0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e034b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe034b0ULL || rel >= 0xe03500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03500 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03500ULL || rel >= 0xe03550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03550 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03550ULL || rel >= 0xe035a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e035a0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e035a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe035a0ULL || rel >= 0xe035f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e035f0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e035f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe035f0ULL || rel >= 0xe03640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03640 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03640ULL || rel >= 0xe03690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03690 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03690ULL || rel >= 0xe036e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e036e0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e036e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe036e0ULL || rel >= 0xe03730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03730 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03730ULL || rel >= 0xe03780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03780 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03780ULL || rel >= 0xe037d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e037d0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e037d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe037d0ULL || rel >= 0xe03820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03820 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03820ULL || rel >= 0xe03870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03870 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03870ULL || rel >= 0xe038c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e038c0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e038c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe038c0ULL || rel >= 0xe03910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03910 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e03910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03910ULL || rel >= 0xe03960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03960 size=16 callers=0 calls=0
*/
void sub_e03960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03960ULL || rel >= 0xe03970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03970 size=208 callers=1 calls=2
   calls: sub_15498c0, sub_ce0
*/
void sub_e03970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03970ULL || rel >= 0xe03a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03a40 size=48 callers=0 calls=1
   calls: sub_e03970
*/
void sub_e03a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03a40ULL || rel >= 0xe03a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e03a70 size=1520 callers=1 calls=13
   calls: sub_15497e0, sub_15498c0, sub_154ae60, sub_154af10, sub_154b940, sub_154bc50, sub_65bf00, sub_c70, sub_ce0, sub_df8bc0, sub_df8de0, sub_df9260
   ... +1 more
*/
void sub_e03a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03a70ULL || rel >= 0xe04060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e04060 size=320 callers=4 calls=3
   calls: seperator_mark_10, sub_1c0, sub_ce0
*/
void sub_e04060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe04060ULL || rel >= 0xe041a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e041a0 size=320 callers=4 calls=3
   calls: seperator_mark_11, sub_1c0, sub_ce0
*/
void sub_e041a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe041a0ULL || rel >= 0xe042e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e042e0 size=320 callers=23 calls=3
   calls: seperator_mark_12, sub_1c0, sub_ce0
*/
void sub_e042e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe042e0ULL || rel >= 0xe04420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e04420 size=320 callers=2 calls=3
   calls: seperator_mark_12, sub_1c0, sub_ce0
*/
void sub_e04420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe04420ULL || rel >= 0xe04560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e04560 size=1808 callers=1 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: seperator_mark
   ref: std::string sol::detail::ctti_get_type_name() [T = field::content::HaxeVector3 *, seperator_mark = i
*/
void seperator_mark_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe04560ULL || rel >= 0xe04c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e04c70 size=1760 callers=1 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<field::content::Haxe
   ref: (anonymous namespace)
   ref: seperator_mark
*/
void seperator_mark_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe04c70ULL || rel >= 0xe05350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e05350 size=1808 callers=8 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: std::string sol::detail::ctti_get_type_name() [T = field::content::HaxeVector3, seperator_mark = int
   ref: (anonymous namespace)
   ref: seperator_mark
*/
void seperator_mark_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe05350ULL || rel >= 0xe05a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e05a60 size=192 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf20, sub_e05b20
   ref: class_cast
*/
void class_cast_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe05a60ULL || rel >= 0xe05b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e05b20 size=192 callers=33 calls=2
   calls: seperator_mark_12, sub_1c0
*/
void sub_e05b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe05b20ULL || rel >= 0xe05be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e05be0 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154b640, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe05be0ULL || rel >= 0xe05cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e05cb0 size=224 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, sub_154ab20, sub_154b640, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e05cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe05cb0ULL || rel >= 0xe05d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e05d90 size=592 callers=19 calls=5
   calls: seperator_mark_12, sub_154ab20, sub_154dfa0, sub_1c0, unnamed_54
   ref: aligned allocation of userdata block (pointer section) for '%s' failed
   ref: aligned allocation of userdata block (data section) for '%s' failed
*/
void aligned_allocation_of_userdata_block_data_section_for_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe05d90ULL || rel >= 0xe05fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e05fe0 size=480 callers=19 calls=10
   calls: name, seperator_mark_12, sub_154bf60, sub_154c170, sub_154ca50, sub_154cfd0, sub_154d550, sub_1c0, too_many_upvalues, typeinfo
*/
void sub_e05fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe05fe0ULL || rel >= 0xe061c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e061c0 size=112 callers=0 calls=3
   calls: class_check_7, sub_154af10, sub_154c260
*/
void sub_e061c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe061c0ULL || rel >= 0xe06230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e06230 size=176 callers=0 calls=2
   calls: seperator_mark_13, sub_1c0
   ref: sol: cannot call '__pairs/pairs' on type '%s': it is not recognized as a container
*/
void pairs_on_type_s_it_is_not_recognized_as_a_container_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe06230ULL || rel >= 0xe062e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e062e0 size=128 callers=0 calls=2
   calls: class_cast_23, sub_154c260
*/
void sub_e062e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe062e0ULL || rel >= 0xe06360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e06360 size=240 callers=2 calls=6
   calls: class_check_6, sub_1549da0, sub_154ab20, sub_154af10, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe06360ULL || rel >= 0xe06450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e06450 size=672 callers=1 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b320, sub_154bc50, sub_154bfe0, sub_154c4f0, sub_154c7a0, sub_154cb00, sub_e04060, sub_e041a0, sub_e042e0
   ... +2 more
   ref: value at this index does not properly reflect the desired type
   ref: class_check
   ref: value is not a valid userdata
*/
void class_check_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe06450ULL || rel >= 0xe066f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e066f0 size=320 callers=2 calls=3
   calls: seperator_mark_13, sub_1c0, sub_ce0
*/
void sub_e066f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe066f0ULL || rel >= 0xe06830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e06830 size=1824 callers=2 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::as_container_t<field::content::HaxeVector3>,
   ref: (anonymous namespace)
   ref: seperator_mark
*/
void seperator_mark_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe06830ULL || rel >= 0xe06f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e06f50 size=32 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e06f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe06f50ULL || rel >= 0xe06f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e06f70 size=672 callers=1 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b320, sub_154bc50, sub_154bfe0, sub_154c4f0, sub_154c7a0, sub_154cb00, sub_e04060, sub_e041a0, sub_e042e0
   ... +2 more
   ref: value at this index does not properly reflect the desired type
   ref: class_check
   ref: value is not a valid userdata
*/
void class_check_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe06f70ULL || rel >= 0xe07210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07210 size=224 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, sub_154ab20, sub_154b640, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e07210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07210ULL || rel >= 0xe072f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e072f0 size=176 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, class_cast_24, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e072f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe072f0ULL || rel >= 0xe073a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e073a0 size=240 callers=6 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe073a0ULL || rel >= 0xe07490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07490 size=224 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07490ULL || rel >= 0xe07570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07570 size=176 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, class_cast_24, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e07570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07570ULL || rel >= 0xe07620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07620 size=176 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, class_cast_24, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e07620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07620ULL || rel >= 0xe076d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e076d0 size=176 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, class_cast_24, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e076d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe076d0ULL || rel >= 0xe07780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07780 size=128 callers=0 calls=4
   calls: class_cast_26, sub_154ab20, sub_154bc50, sub_154bf20
*/
void sub_e07780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07780ULL || rel >= 0xe07800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07800 size=240 callers=2 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07800ULL || rel >= 0xe078f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e078f0 size=224 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe078f0ULL || rel >= 0xe079d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e079d0 size=128 callers=0 calls=4
   calls: class_cast_26, sub_154ab20, sub_154bc50, sub_154bf20
*/
void sub_e079d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe079d0ULL || rel >= 0xe07a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07a50 size=176 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, class_cast_24, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e07a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07a50ULL || rel >= 0xe07b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07b00 size=176 callers=0 calls=6
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, class_cast_24, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e07b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07b00ULL || rel >= 0xe07bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07bb0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e07bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07bb0ULL || rel >= 0xe07be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07be0 size=160 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07be0ULL || rel >= 0xe07c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07c80 size=208 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07c80ULL || rel >= 0xe07d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07d50 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e07d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07d50ULL || rel >= 0xe07d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07d80 size=160 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07d80ULL || rel >= 0xe07e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07e20 size=208 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07e20ULL || rel >= 0xe07ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07ef0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e07ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07ef0ULL || rel >= 0xe07f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07f20 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e07f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07f20ULL || rel >= 0xe07f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07f50 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e07f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07f50ULL || rel >= 0xe07f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e07f80 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154b640, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07f80ULL || rel >= 0xe08050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08050 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e08050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08050ULL || rel >= 0xe08080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08080 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154b640, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08080ULL || rel >= 0xe08150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08150 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e08150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08150ULL || rel >= 0xe08180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08180 size=192 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08180ULL || rel >= 0xe08240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08240 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e08240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08240ULL || rel >= 0xe08270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08270 size=192 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08270ULL || rel >= 0xe08330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08330 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e08330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08330ULL || rel >= 0xe08360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08360 size=224 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf20, sub_e05b20
   ref: class_cast
*/
void class_cast_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08360ULL || rel >= 0xe08440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08440 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e08440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08440ULL || rel >= 0xe08470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08470 size=224 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154bf20, sub_e05b20
   ref: class_cast
*/
void class_cast_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08470ULL || rel >= 0xe08550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08550 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e08550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08550ULL || rel >= 0xe08580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08580 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e08580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08580ULL || rel >= 0xe085b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e085b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e085b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe085b0ULL || rel >= 0xe085e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e085e0 size=272 callers=0 calls=7
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, sub_1549da0, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05b20, sub_e05fe0
   ref: class_cast
*/
void class_cast_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe085e0ULL || rel >= 0xe086f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e086f0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e086f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe086f0ULL || rel >= 0xe08720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08720 size=272 callers=0 calls=7
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, sub_1549da0, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05b20, sub_e05fe0
   ref: class_cast
*/
void class_cast_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08720ULL || rel >= 0xe08830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08830 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e08830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08830ULL || rel >= 0xe08870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e08870 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e08870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe08870ULL || rel >= 0xe088b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e088b0 size=2160 callers=0 calls=38
   calls: name, newindex_14, newindex_15, newindex_16, newindex_17, newindex_18, newindex_19, newindex_20, newindex_21, newindex_22, newindex_23, newindex_24
   ... +26 more
   ref: class_cast
   ref: class_check
*/
void class_check_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe088b0ULL || rel >= 0xe09120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e09120 size=400 callers=1 calls=11
   calls: sub_154aac0, sub_154ab20, sub_154ae60, sub_154bc50, sub_154bf00, sub_154c2e0, sub_154cd10, sub_ce0, sub_e0a790, sub_e0a8d0, sub_e0aa10
*/
void sub_e09120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe09120ULL || rel >= 0xe092b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e092b0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe092b0ULL || rel >= 0xe09440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e09440 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe09440ULL || rel >= 0xe095d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e095d0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe095d0ULL || rel >= 0xe09760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e09760 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe09760ULL || rel >= 0xe098f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e098f0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe098f0ULL || rel >= 0xe09a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e09a80 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe09a80ULL || rel >= 0xe09c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e09c10 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe09c10ULL || rel >= 0xe09da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e09da0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe09da0ULL || rel >= 0xe09f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e09f30 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe09f30ULL || rel >= 0xe0a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0a0c0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0a0c0ULL || rel >= 0xe0a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0a250 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0a250ULL || rel >= 0xe0a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0a3e0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0a3e0ULL || rel >= 0xe0a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0a570 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0a570ULL || rel >= 0xe0a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0a700 size=80 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e0a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0a700ULL || rel >= 0xe0a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0a750 size=16 callers=0 calls=0
*/
void sub_e0a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0a750ULL || rel >= 0xe0a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0a760 size=16 callers=0 calls=0
*/
void sub_e0a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0a760ULL || rel >= 0xe0a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0a770 size=16 callers=0 calls=0
*/
void sub_e0a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0a770ULL || rel >= 0xe0a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0a780 size=16 callers=0 calls=0
*/
void sub_e0a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0a780ULL || rel >= 0xe0a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0a790 size=320 callers=1 calls=3
   calls: seperator_mark_12, sub_1c0, sub_ce0
*/
void sub_e0a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0a790ULL || rel >= 0xe0a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0a8d0 size=320 callers=1 calls=3
   calls: seperator_mark_12, sub_1c0, sub_ce0
*/
void sub_e0a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0a8d0ULL || rel >= 0xe0aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0aa10 size=320 callers=1 calls=5
   calls: cannot_properly_align_memory_for_s_3, name, sub_154c170, sub_154cfd0, sub_154d550
*/
void sub_e0aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0aa10ULL || rel >= 0xe0ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0ab50 size=448 callers=1 calls=5
   calls: seperator_mark_14, sub_154ab20, sub_154dfa0, sub_1c0, unnamed_54
   ref: cannot properly align memory for '%s'
*/
void cannot_properly_align_memory_for_s_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0ab50ULL || rel >= 0xe0ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0ad10 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e0ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0ad10ULL || rel >= 0xe0ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0ad50 size=1760 callers=1 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: seperator_mark
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::HaxeVecto
*/
void seperator_mark_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0ad50ULL || rel >= 0xe0b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0b430 size=240 callers=1 calls=1
   calls: typeinfo
*/
void sub_e0b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0b430ULL || rel >= 0xe0b520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0b520 size=160 callers=6 calls=5
   calls: sub_154bf00, sub_154bf60, sub_154c170, sub_154c290, typeinfo
*/
void sub_e0b520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0b520ULL || rel >= 0xe0b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0b5c0 size=432 callers=0 calls=6
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e0b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0b5c0ULL || rel >= 0xe0b770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0b770 size=432 callers=0 calls=6
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e0b770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0b770ULL || rel >= 0xe0b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0b920 size=192 callers=2 calls=6
   calls: sub_154bf00, sub_154bf40, sub_154bf60, sub_154c170, sub_154c290, typeinfo
*/
void sub_e0b920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0b920ULL || rel >= 0xe0b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0b9e0 size=560 callers=0 calls=12
   calls: sub_154ab00, sub_154ae60, sub_154af10, sub_154b750, sub_154b940, sub_154bc50, sub_154bf00, sub_154c3b0, sub_154cb00, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e0b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0b9e0ULL || rel >= 0xe0bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0bc10 size=416 callers=0 calls=7
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0, unknown_2
*/
void sub_e0bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0bc10ULL || rel >= 0xe0bdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0bdb0 size=224 callers=1 calls=5
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154c880, sub_154cfd0
*/
void sub_e0bdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0bdb0ULL || rel >= 0xe0be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0be90 size=4896 callers=1 calls=7
   calls: sub_c70, sub_ce0, sub_df8de0, sub_df9460, sub_dfdbb0, sub_e0df40, typeinfo
*/
void sub_e0be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0be90ULL || rel >= 0xe0d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d1b0 size=176 callers=0 calls=6
   calls: sub_154ab00, sub_154ae60, sub_154b750, sub_154bf00, sub_154c3b0, sub_154cb00
*/
void sub_e0d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d1b0ULL || rel >= 0xe0d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d260 size=448 callers=1 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b750, sub_154b940, sub_154c4f0, sub_154cb00, sub_dfadd0, sub_e0e1c0, sub_e0e7b0, sub_e0e8f0, sub_e0ea30
   ... +2 more
   ref: (unknown)
   ref: sol: attempt to index (set) nil value "%s" on userdata (bad (misspelled?) key name or does not exist
*/
void unknown_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d260ULL || rel >= 0xe0d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d420 size=384 callers=0 calls=6
   calls: sub_154ab20, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e0d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d420ULL || rel >= 0xe0d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d5a0 size=384 callers=0 calls=6
   calls: sub_154ab20, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e0d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d5a0ULL || rel >= 0xe0d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d720 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d720ULL || rel >= 0xe0d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d770 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d770ULL || rel >= 0xe0d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d7c0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d7c0ULL || rel >= 0xe0d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d810 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d810ULL || rel >= 0xe0d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d860 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d860ULL || rel >= 0xe0d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d8b0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0d8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d8b0ULL || rel >= 0xe0d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d900 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d900ULL || rel >= 0xe0d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d950 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d950ULL || rel >= 0xe0d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d9a0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d9a0ULL || rel >= 0xe0d9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0d9f0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0d9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0d9f0ULL || rel >= 0xe0da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0da40 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0da40ULL || rel >= 0xe0da90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0da90 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0da90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0da90ULL || rel >= 0xe0dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0dae0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0dae0ULL || rel >= 0xe0db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0db30 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0db30ULL || rel >= 0xe0db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0db80 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0db80ULL || rel >= 0xe0dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0dbd0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0dbd0ULL || rel >= 0xe0dc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0dc20 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0dc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0dc20ULL || rel >= 0xe0dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0dc70 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0dc70ULL || rel >= 0xe0dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0dcc0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0dcc0ULL || rel >= 0xe0dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0dd10 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0dd10ULL || rel >= 0xe0dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0dd60 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0dd60ULL || rel >= 0xe0ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0ddb0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0ddb0ULL || rel >= 0xe0de00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0de00 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0de00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0de00ULL || rel >= 0xe0de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0de50 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0de50ULL || rel >= 0xe0dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0dea0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0dea0ULL || rel >= 0xe0def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0def0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e0def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0def0ULL || rel >= 0xe0df40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0df40 size=368 callers=1 calls=1
   calls: sub_dfdd10
*/
void sub_e0df40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0df40ULL || rel >= 0xe0e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0e0b0 size=16 callers=0 calls=0
*/
void sub_e0e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0e0b0ULL || rel >= 0xe0e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0e0c0 size=208 callers=1 calls=2
   calls: sub_15498c0, sub_ce0
*/
void sub_e0e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0e0c0ULL || rel >= 0xe0e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0e190 size=48 callers=0 calls=1
   calls: sub_e0e0c0
*/
void sub_e0e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0e190ULL || rel >= 0xe0e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0e1c0 size=1520 callers=1 calls=13
   calls: sub_15497e0, sub_15498c0, sub_154ae60, sub_154af10, sub_154b940, sub_154bc50, sub_65bf00, sub_c70, sub_ce0, sub_df8bc0, sub_df8de0, sub_df9260
   ... +1 more
*/
void sub_e0e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0e1c0ULL || rel >= 0xe0e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0e7b0 size=320 callers=4 calls=3
   calls: seperator_mark_15, sub_1c0, sub_ce0
*/
void sub_e0e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0e7b0ULL || rel >= 0xe0e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0e8f0 size=320 callers=4 calls=3
   calls: seperator_mark_16, sub_1c0, sub_ce0
*/
void sub_e0e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0e8f0ULL || rel >= 0xe0ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0ea30 size=320 callers=6 calls=3
   calls: seperator_mark_17, sub_1c0, sub_ce0
*/
void sub_e0ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0ea30ULL || rel >= 0xe0eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0eb70 size=320 callers=4 calls=3
   calls: seperator_mark_17, sub_1c0, sub_ce0
*/
void sub_e0eb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0eb70ULL || rel >= 0xe0ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0ecb0 size=1824 callers=1 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: seperator_mark
   ref: std::string sol::detail::ctti_get_type_name() [T = field::content::HaxeFieldFunc *, seperator_mark =
*/
void seperator_mark_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0ecb0ULL || rel >= 0xe0f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0f3d0 size=1760 callers=1 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: seperator_mark
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::detail::unique_usertype<field::content::Haxe
*/
void seperator_mark_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0f3d0ULL || rel >= 0xe0fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e0fab0 size=1808 callers=8 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: std::string sol::detail::ctti_get_type_name() [T = field::content::HaxeFieldFunc, seperator_mark = i
   ref: seperator_mark
*/
void seperator_mark_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0fab0ULL || rel >= 0xe101c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e101c0 size=160 callers=0 calls=5
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e101c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe101c0ULL || rel >= 0xe10260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10260 size=160 callers=0 calls=5
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e10260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10260ULL || rel >= 0xe10300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10300 size=160 callers=0 calls=5
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e10300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10300ULL || rel >= 0xe103a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e103a0 size=160 callers=0 calls=5
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, sub_154ab20, sub_154bc50, sub_e042e0, sub_e05fe0
*/
void sub_e103a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe103a0ULL || rel >= 0xe10440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10440 size=80 callers=0 calls=3
   calls: sub_154ab20, sub_154bc50, sub_154c260
*/
void sub_e10440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10440ULL || rel >= 0xe10490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10490 size=80 callers=0 calls=3
   calls: sub_154ab20, sub_154bc50, sub_154c260
*/
void sub_e10490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10490ULL || rel >= 0xe104e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e104e0 size=80 callers=0 calls=3
   calls: sub_154ab20, sub_154bc50, sub_154c260
*/
void sub_e104e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe104e0ULL || rel >= 0xe10530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10530 size=80 callers=0 calls=3
   calls: sub_154ab20, sub_154bc50, sub_154c260
*/
void sub_e10530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10530ULL || rel >= 0xe10580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10580 size=112 callers=0 calls=4
   calls: sub_154ab20, sub_154b940, sub_154bc50, sub_154c260
*/
void sub_e10580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10580ULL || rel >= 0xe105f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e105f0 size=112 callers=0 calls=4
   calls: sub_154ab20, sub_154b940, sub_154bc50, sub_154c260
*/
void sub_e105f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe105f0ULL || rel >= 0xe10660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10660 size=80 callers=0 calls=3
   calls: sub_154ab20, sub_154bc50, sub_154bf40
*/
void sub_e10660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10660ULL || rel >= 0xe106b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e106b0 size=80 callers=0 calls=3
   calls: sub_154ab20, sub_154bc50, sub_154bf40
*/
void sub_e106b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe106b0ULL || rel >= 0xe10700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10700 size=16 callers=0 calls=0
*/
void sub_e10700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10700ULL || rel >= 0xe10710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10710 size=144 callers=0 calls=6
   calls: sub_154ab20, sub_154b0c0, sub_154b640, sub_154b750, sub_154bc50, sub_154bf40
*/
void sub_e10710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10710ULL || rel >= 0xe107a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e107a0 size=16 callers=0 calls=0
*/
void sub_e107a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe107a0ULL || rel >= 0xe107b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e107b0 size=144 callers=0 calls=6
   calls: sub_154ab20, sub_154b0c0, sub_154b640, sub_154b750, sub_154bc50, sub_154bf40
*/
void sub_e107b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe107b0ULL || rel >= 0xe10840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10840 size=112 callers=0 calls=4
   calls: sub_154ab20, sub_154b640, sub_154bc50, sub_154bf20
*/
void sub_e10840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10840ULL || rel >= 0xe108b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e108b0 size=112 callers=0 calls=4
   calls: sub_154ab20, sub_154b640, sub_154bc50, sub_154bf20
*/
void sub_e108b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe108b0ULL || rel >= 0xe10920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10920 size=80 callers=0 calls=3
   calls: sub_154ab20, sub_154bc50, sub_154c260
*/
void sub_e10920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10920ULL || rel >= 0xe10970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10970 size=80 callers=0 calls=3
   calls: sub_154ab20, sub_154bc50, sub_154c260
*/
void sub_e10970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10970ULL || rel >= 0xe109c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e109c0 size=16 callers=0 calls=0
*/
void sub_e109c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe109c0ULL || rel >= 0xe109d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e109d0 size=144 callers=0 calls=6
   calls: sub_154ab20, sub_154b0c0, sub_154b640, sub_154b750, sub_154bc50, sub_154c260
*/
void sub_e109d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe109d0ULL || rel >= 0xe10a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10a60 size=16 callers=0 calls=0
*/
void sub_e10a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10a60ULL || rel >= 0xe10a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10a70 size=144 callers=0 calls=6
   calls: sub_154ab20, sub_154b0c0, sub_154b640, sub_154b750, sub_154bc50, sub_154c260
*/
void sub_e10a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10a70ULL || rel >= 0xe10b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10b00 size=80 callers=0 calls=3
   calls: sub_154ab20, sub_154bc50, sub_154c260
*/
void sub_e10b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10b00ULL || rel >= 0xe10b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10b50 size=80 callers=0 calls=3
   calls: sub_154ab20, sub_154bc50, sub_154c260
*/
void sub_e10b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10b50ULL || rel >= 0xe10ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10ba0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e10ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10ba0ULL || rel >= 0xe10bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10bd0 size=368 callers=0 calls=14
   calls: aligned_allocation_of_userdata_block_data_section_for_s_3, sub_15497e0, sub_15498c0, sub_154ab00, sub_154ab20, sub_154ae60, sub_154b480, sub_154bf00, sub_154c4f0, sub_154c880, sub_e0ea30, sub_e0eb70
   ... +2 more
   ref: sol: no matching function call takes this number of arguments and the specified types
*/
void sol_no_matching_function_call_takes_this_number_of_argum(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10bd0ULL || rel >= 0xe10d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10d40 size=560 callers=2 calls=5
   calls: seperator_mark_17, sub_154ab20, sub_154dfa0, sub_1c0, unnamed_54
   ref: aligned allocation of userdata block (pointer section) for '%s' failed
   ref: aligned allocation of userdata block (data section) for '%s' failed
*/
void aligned_allocation_of_userdata_block_data_section_for_s_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10d40ULL || rel >= 0xe10f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e10f70 size=480 callers=2 calls=10
   calls: name, seperator_mark_17, sub_154bf60, sub_154c170, sub_154ca50, sub_154cfd0, sub_154d550, sub_1c0, too_many_upvalues, typeinfo
*/
void sub_e10f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe10f70ULL || rel >= 0xe11150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e11150 size=112 callers=0 calls=3
   calls: class_check_10, sub_154af10, sub_154c260
*/
void sub_e11150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe11150ULL || rel >= 0xe111c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e111c0 size=176 callers=0 calls=2
   calls: seperator_mark_18, sub_1c0
   ref: sol: cannot call '__pairs/pairs' on type '%s': it is not recognized as a container
*/
void pairs_on_type_s_it_is_not_recognized_as_a_container_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe111c0ULL || rel >= 0xe11270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e11270 size=128 callers=0 calls=2
   calls: class_cast_40, sub_154c260
*/
void sub_e11270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe11270ULL || rel >= 0xe112f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e112f0 size=240 callers=2 calls=6
   calls: class_check_9, sub_1549da0, sub_154ab20, sub_154af10, sub_154bc50, sub_e11680
   ref: class_cast
*/
void class_cast_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe112f0ULL || rel >= 0xe113e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e113e0 size=672 callers=1 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b320, sub_154bc50, sub_154bfe0, sub_154c4f0, sub_154c7a0, sub_154cb00, sub_e0e7b0, sub_e0e8f0, sub_e0ea30
   ... +2 more
   ref: value at this index does not properly reflect the desired type
   ref: class_check
   ref: value is not a valid userdata
*/
void class_check_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe113e0ULL || rel >= 0xe11680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e11680 size=192 callers=3 calls=2
   calls: seperator_mark_17, sub_1c0
*/
void sub_e11680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe11680ULL || rel >= 0xe11740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e11740 size=320 callers=2 calls=3
   calls: seperator_mark_18, sub_1c0, sub_ce0
*/
void sub_e11740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe11740ULL || rel >= 0xe11880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e11880 size=1824 callers=2 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::as_container_t<field::content::HaxeFieldFunc
   ref: (anonymous namespace)
   ref: seperator_mark
*/
void seperator_mark_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe11880ULL || rel >= 0xe11fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e11fa0 size=32 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e11fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe11fa0ULL || rel >= 0xe11fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e11fc0 size=672 callers=1 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b320, sub_154bc50, sub_154bfe0, sub_154c4f0, sub_154c7a0, sub_154cb00, sub_e0e7b0, sub_e0e8f0, sub_e0ea30
   ... +2 more
   ref: value at this index does not properly reflect the desired type
   ref: class_check
   ref: value is not a valid userdata
*/
void class_check_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe11fc0ULL || rel >= 0xe12260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e12260 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e12260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe12260ULL || rel >= 0xe12290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e12290 size=368 callers=0 calls=14
   calls: aligned_allocation_of_userdata_block_data_section_for_s_3, sub_15497e0, sub_15498c0, sub_154ab00, sub_154ab20, sub_154ae60, sub_154b480, sub_154bf00, sub_154c4f0, sub_154c880, sub_e0ea30, sub_e0eb70
   ... +2 more
   ref: sol: no matching function call takes this number of arguments and the specified types
*/
void sol_no_matching_function_call_takes_this_number_of_argum_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe12290ULL || rel >= 0xe12400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e12400 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e12400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe12400ULL || rel >= 0xe12440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e12440 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e12440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe12440ULL || rel >= 0xe12480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e12480 size=2160 callers=0 calls=38
   calls: name, newindex_27, newindex_28, newindex_29, newindex_30, newindex_31, newindex_32, newindex_33, newindex_34, newindex_35, newindex_36, newindex_37
   ... +26 more
   ref: class_cast
   ref: class_check
*/
void class_check_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe12480ULL || rel >= 0xe12cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e12cf0 size=400 callers=1 calls=11
   calls: sub_154aac0, sub_154ab20, sub_154ae60, sub_154bc50, sub_154bf00, sub_154c2e0, sub_154cd10, sub_ce0, sub_e14360, sub_e144a0, sub_e145e0
*/
void sub_e12cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe12cf0ULL || rel >= 0xe12e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e12e80 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe12e80ULL || rel >= 0xe13010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e13010 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe13010ULL || rel >= 0xe131a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e131a0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe131a0ULL || rel >= 0xe13330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e13330 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe13330ULL || rel >= 0xe134c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e134c0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe134c0ULL || rel >= 0xe13650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e13650 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe13650ULL || rel >= 0xe137e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e137e0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe137e0ULL || rel >= 0xe13970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e13970 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe13970ULL || rel >= 0xe13b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e13b00 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe13b00ULL || rel >= 0xe13c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e13c90 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe13c90ULL || rel >= 0xe13e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e13e20 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe13e20ULL || rel >= 0xe13fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e13fb0 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe13fb0ULL || rel >= 0xe14140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e14140 size=400 callers=1 calls=1
   calls: typeinfo
   ref: __newindex
*/
void newindex_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe14140ULL || rel >= 0xe142d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e142d0 size=80 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e142d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe142d0ULL || rel >= 0xe14320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e14320 size=16 callers=0 calls=0
*/
void sub_e14320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe14320ULL || rel >= 0xe14330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e14330 size=16 callers=0 calls=0
*/
void sub_e14330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe14330ULL || rel >= 0xe14340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e14340 size=16 callers=0 calls=0
*/
void sub_e14340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe14340ULL || rel >= 0xe14350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e14350 size=16 callers=0 calls=0
*/
void sub_e14350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe14350ULL || rel >= 0xe14360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e14360 size=320 callers=1 calls=3
   calls: seperator_mark_17, sub_1c0, sub_ce0
*/
void sub_e14360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe14360ULL || rel >= 0xe144a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e144a0 size=320 callers=1 calls=3
   calls: seperator_mark_17, sub_1c0, sub_ce0
*/
void sub_e144a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe144a0ULL || rel >= 0xe145e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e145e0 size=320 callers=1 calls=5
   calls: cannot_properly_align_memory_for_s_4, name, sub_154c170, sub_154cfd0, sub_154d550
*/
void sub_e145e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe145e0ULL || rel >= 0xe14720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e14720 size=448 callers=1 calls=5
   calls: seperator_mark_19, sub_154ab20, sub_154dfa0, sub_1c0, unnamed_54
   ref: cannot properly align memory for '%s'
*/
void cannot_properly_align_memory_for_s_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe14720ULL || rel >= 0xe148e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e148e0 size=64 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e148e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe148e0ULL || rel >= 0xe14920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e14920 size=1760 callers=1 calls=3
   calls: sub_1c0, sub_c70, sub_ce0
   ref: {anonymous}
   ref: (anonymous namespace)
   ref: seperator_mark
   ref: std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::HaxeField
*/
void seperator_mark_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe14920ULL || rel >= 0xe15000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e15000 size=240 callers=1 calls=1
   calls: typeinfo
*/
void sub_e15000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe15000ULL || rel >= 0xe150f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e150f0 size=160 callers=6 calls=5
   calls: sub_154bf00, sub_154bf60, sub_154c170, sub_154c290, typeinfo
*/
void sub_e150f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe150f0ULL || rel >= 0xe15190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e15190 size=432 callers=0 calls=6
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e15190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe15190ULL || rel >= 0xe15340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e15340 size=432 callers=0 calls=6
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e15340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe15340ULL || rel >= 0xe154f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e154f0 size=192 callers=2 calls=6
   calls: sub_154bf00, sub_154bf40, sub_154bf60, sub_154c170, sub_154c290, typeinfo
*/
void sub_e154f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe154f0ULL || rel >= 0xe155b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e155b0 size=560 callers=0 calls=12
   calls: sub_154ab00, sub_154ae60, sub_154af10, sub_154b750, sub_154b940, sub_154bc50, sub_154bf00, sub_154c3b0, sub_154cb00, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e155b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe155b0ULL || rel >= 0xe157e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e157e0 size=416 callers=0 calls=7
   calls: sub_154af10, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0, unknown_3
*/
void sub_e157e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe157e0ULL || rel >= 0xe15980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e15980 size=224 callers=1 calls=5
   calls: sub_154a9b0, sub_154ab00, sub_154bf00, sub_154c880, sub_154cfd0
*/
void sub_e15980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe15980ULL || rel >= 0xe15a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e15a60 size=26736 callers=1 calls=7
   calls: sub_c70, sub_ce0, sub_df8de0, sub_df9460, sub_dfdbb0, sub_e204e0, typeinfo
*/
void sub_e15a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe15a60ULL || rel >= 0xe1c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1c2d0 size=176 callers=0 calls=6
   calls: sub_154ab00, sub_154ae60, sub_154b750, sub_154bf00, sub_154c3b0, sub_154cb00
*/
void sub_e1c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1c2d0ULL || rel >= 0xe1c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1c380 size=448 callers=1 calls=14
   calls: sub_154ab00, sub_154ab20, sub_154af10, sub_154b750, sub_154b940, sub_154c4f0, sub_154cb00, sub_deeb10, sub_defd50, sub_df05b0, sub_dfadd0, sub_e20f40
   ... +2 more
   ref: (unknown)
   ref: sol: attempt to index (set) nil value "%s" on userdata (bad (misspelled?) key name or does not exist
*/
void unknown_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1c380ULL || rel >= 0xe1c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1c540 size=384 callers=0 calls=6
   calls: sub_154ab20, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e1c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1c540ULL || rel >= 0xe1c6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1c6c0 size=384 callers=0 calls=6
   calls: sub_154ab20, sub_154b940, sub_154bc50, sub_c70, sub_ce0, sub_df8bc0
*/
void sub_e1c6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1c6c0ULL || rel >= 0xe1c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1c840 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1c840ULL || rel >= 0xe1c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1c890 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1c890ULL || rel >= 0xe1c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1c8e0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1c8e0ULL || rel >= 0xe1c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1c930 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1c930ULL || rel >= 0xe1c980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1c980 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1c980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1c980ULL || rel >= 0xe1c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1c9d0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1c9d0ULL || rel >= 0xe1ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ca20 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ca20ULL || rel >= 0xe1ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ca70 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ca70ULL || rel >= 0xe1cac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cac0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cac0ULL || rel >= 0xe1cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cb10 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cb10ULL || rel >= 0xe1cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cb60 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cb60ULL || rel >= 0xe1cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cbb0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cbb0ULL || rel >= 0xe1cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cc00 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cc00ULL || rel >= 0xe1cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cc50 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cc50ULL || rel >= 0xe1cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cca0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cca0ULL || rel >= 0xe1ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ccf0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ccf0ULL || rel >= 0xe1cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cd40 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cd40ULL || rel >= 0xe1cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cd90 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cd90ULL || rel >= 0xe1cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cde0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cde0ULL || rel >= 0xe1ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ce30 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ce30ULL || rel >= 0xe1ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ce80 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ce80ULL || rel >= 0xe1ced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ced0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ced0ULL || rel >= 0xe1cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cf20 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cf20ULL || rel >= 0xe1cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cf70 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cf70ULL || rel >= 0xe1cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1cfc0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1cfc0ULL || rel >= 0xe1d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d010 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d010ULL || rel >= 0xe1d060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d060 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d060ULL || rel >= 0xe1d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d0b0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d0b0ULL || rel >= 0xe1d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d100 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d100ULL || rel >= 0xe1d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d150 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d150ULL || rel >= 0xe1d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d1a0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d1a0ULL || rel >= 0xe1d1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d1f0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d1f0ULL || rel >= 0xe1d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d240 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d240ULL || rel >= 0xe1d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d290 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d290ULL || rel >= 0xe1d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d2e0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d2e0ULL || rel >= 0xe1d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d330 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d330ULL || rel >= 0xe1d380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d380 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d380ULL || rel >= 0xe1d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d3d0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d3d0ULL || rel >= 0xe1d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d420 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d420ULL || rel >= 0xe1d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d470 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d470ULL || rel >= 0xe1d4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d4c0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d4c0ULL || rel >= 0xe1d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d510 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d510ULL || rel >= 0xe1d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d560 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d560ULL || rel >= 0xe1d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d5b0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d5b0ULL || rel >= 0xe1d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d600 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d600ULL || rel >= 0xe1d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d650 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d650ULL || rel >= 0xe1d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d6a0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d6a0ULL || rel >= 0xe1d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d6f0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d6f0ULL || rel >= 0xe1d740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d740 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d740ULL || rel >= 0xe1d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d790 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d790ULL || rel >= 0xe1d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d7e0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d7e0ULL || rel >= 0xe1d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d830 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d830ULL || rel >= 0xe1d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d880 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d880ULL || rel >= 0xe1d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d8d0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d8d0ULL || rel >= 0xe1d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d920 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d920ULL || rel >= 0xe1d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d970 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d970ULL || rel >= 0xe1d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1d9c0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d9c0ULL || rel >= 0xe1da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1da10 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1da10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1da10ULL || rel >= 0xe1da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1da60 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1da60ULL || rel >= 0xe1dab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1dab0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1dab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1dab0ULL || rel >= 0xe1db00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1db00 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1db00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1db00ULL || rel >= 0xe1db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1db50 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1db50ULL || rel >= 0xe1dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1dba0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1dba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1dba0ULL || rel >= 0xe1dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1dbf0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1dbf0ULL || rel >= 0xe1dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1dc40 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1dc40ULL || rel >= 0xe1dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1dc90 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1dc90ULL || rel >= 0xe1dce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1dce0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1dce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1dce0ULL || rel >= 0xe1dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1dd30 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1dd30ULL || rel >= 0xe1dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1dd80 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1dd80ULL || rel >= 0xe1ddd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ddd0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ddd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ddd0ULL || rel >= 0xe1de20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1de20 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1de20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1de20ULL || rel >= 0xe1de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1de70 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1de70ULL || rel >= 0xe1dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1dec0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1dec0ULL || rel >= 0xe1df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1df10 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1df10ULL || rel >= 0xe1df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1df60 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1df60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1df60ULL || rel >= 0xe1dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1dfb0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1dfb0ULL || rel >= 0xe1e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e000 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e000ULL || rel >= 0xe1e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e050 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e050ULL || rel >= 0xe1e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e0a0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e0a0ULL || rel >= 0xe1e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e0f0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e0f0ULL || rel >= 0xe1e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e140 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e140ULL || rel >= 0xe1e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e190 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e190ULL || rel >= 0xe1e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e1e0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e1e0ULL || rel >= 0xe1e230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e230 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e230ULL || rel >= 0xe1e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e280 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e280ULL || rel >= 0xe1e2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e2d0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e2d0ULL || rel >= 0xe1e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e320 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e320ULL || rel >= 0xe1e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e370 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e370ULL || rel >= 0xe1e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e3c0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e3c0ULL || rel >= 0xe1e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e410 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e410ULL || rel >= 0xe1e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e460 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e460ULL || rel >= 0xe1e4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e4b0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e4b0ULL || rel >= 0xe1e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e500 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e500ULL || rel >= 0xe1e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e550 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e550ULL || rel >= 0xe1e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e5a0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e5a0ULL || rel >= 0xe1e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e5f0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e5f0ULL || rel >= 0xe1e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e640 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e640ULL || rel >= 0xe1e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e690 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e690ULL || rel >= 0xe1e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e6e0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e6e0ULL || rel >= 0xe1e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e730 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e730ULL || rel >= 0xe1e780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e780 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e780ULL || rel >= 0xe1e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e7d0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e7d0ULL || rel >= 0xe1e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e820 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e820ULL || rel >= 0xe1e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e870 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e870ULL || rel >= 0xe1e8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e8c0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e8c0ULL || rel >= 0xe1e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e910 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e910ULL || rel >= 0xe1e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e960 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e960ULL || rel >= 0xe1e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1e9b0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1e9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e9b0ULL || rel >= 0xe1ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ea00 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ea00ULL || rel >= 0xe1ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ea50 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ea50ULL || rel >= 0xe1eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1eaa0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1eaa0ULL || rel >= 0xe1eaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1eaf0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1eaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1eaf0ULL || rel >= 0xe1eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1eb40 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1eb40ULL || rel >= 0xe1eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1eb90 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1eb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1eb90ULL || rel >= 0xe1ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ebe0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ebe0ULL || rel >= 0xe1ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ec30 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ec30ULL || rel >= 0xe1ec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ec80 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ec80ULL || rel >= 0xe1ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ecd0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ecd0ULL || rel >= 0xe1ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ed20 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ed20ULL || rel >= 0xe1ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ed70 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ed70ULL || rel >= 0xe1edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1edc0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1edc0ULL || rel >= 0xe1ee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ee10 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ee10ULL || rel >= 0xe1ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ee60 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ee60ULL || rel >= 0xe1eeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1eeb0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1eeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1eeb0ULL || rel >= 0xe1ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ef00 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ef00ULL || rel >= 0xe1ef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ef50 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ef50ULL || rel >= 0xe1efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1efa0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1efa0ULL || rel >= 0xe1eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1eff0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1eff0ULL || rel >= 0xe1f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f040 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f040ULL || rel >= 0xe1f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f090 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f090ULL || rel >= 0xe1f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f0e0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f0e0ULL || rel >= 0xe1f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f130 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f130ULL || rel >= 0xe1f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f180 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f180ULL || rel >= 0xe1f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f1d0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f1d0ULL || rel >= 0xe1f220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f220 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f220ULL || rel >= 0xe1f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f270 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f270ULL || rel >= 0xe1f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f2c0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f2c0ULL || rel >= 0xe1f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f310 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f310ULL || rel >= 0xe1f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f360 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f360ULL || rel >= 0xe1f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f3b0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f3b0ULL || rel >= 0xe1f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f400 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f400ULL || rel >= 0xe1f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f450 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f450ULL || rel >= 0xe1f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f4a0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f4a0ULL || rel >= 0xe1f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f4f0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f4f0ULL || rel >= 0xe1f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f540 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f540ULL || rel >= 0xe1f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f590 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f590ULL || rel >= 0xe1f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f5e0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f5e0ULL || rel >= 0xe1f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f630 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f630ULL || rel >= 0xe1f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f680 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f680ULL || rel >= 0xe1f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f6d0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f6d0ULL || rel >= 0xe1f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f720 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f720ULL || rel >= 0xe1f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f770 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f770ULL || rel >= 0xe1f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f7c0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f7c0ULL || rel >= 0xe1f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f810 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f810ULL || rel >= 0xe1f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f860 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f860ULL || rel >= 0xe1f8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f8b0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f8b0ULL || rel >= 0xe1f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f900 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f900ULL || rel >= 0xe1f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f950 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f950ULL || rel >= 0xe1f9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f9a0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f9a0ULL || rel >= 0xe1f9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1f9f0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1f9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1f9f0ULL || rel >= 0xe1fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fa40 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fa40ULL || rel >= 0xe1fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fa90 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fa90ULL || rel >= 0xe1fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fae0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fae0ULL || rel >= 0xe1fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fb30 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fb30ULL || rel >= 0xe1fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fb80 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fb80ULL || rel >= 0xe1fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fbd0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fbd0ULL || rel >= 0xe1fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fc20 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fc20ULL || rel >= 0xe1fc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fc70 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fc70ULL || rel >= 0xe1fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fcc0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fcc0ULL || rel >= 0xe1fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fd10 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fd10ULL || rel >= 0xe1fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fd60 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fd60ULL || rel >= 0xe1fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fdb0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fdb0ULL || rel >= 0xe1fe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fe00 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fe00ULL || rel >= 0xe1fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fe50 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fe50ULL || rel >= 0xe1fea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fea0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fea0ULL || rel >= 0xe1fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1fef0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fef0ULL || rel >= 0xe1ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ff40 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ff40ULL || rel >= 0xe1ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ff90 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ff90ULL || rel >= 0xe1ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e1ffe0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e1ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1ffe0ULL || rel >= 0xe20030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20030 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e20030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20030ULL || rel >= 0xe20080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20080 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e20080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20080ULL || rel >= 0xe200d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e200d0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e200d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe200d0ULL || rel >= 0xe20120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20120 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e20120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20120ULL || rel >= 0xe20170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20170 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e20170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20170ULL || rel >= 0xe201c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e201c0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e201c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe201c0ULL || rel >= 0xe20210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20210 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e20210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20210ULL || rel >= 0xe20260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20260 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e20260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20260ULL || rel >= 0xe202b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e202b0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e202b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe202b0ULL || rel >= 0xe20300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20300 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e20300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20300ULL || rel >= 0xe20350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20350 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e20350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20350ULL || rel >= 0xe203a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e203a0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e203a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe203a0ULL || rel >= 0xe203f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e203f0 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e203f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe203f0ULL || rel >= 0xe20440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20440 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e20440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20440ULL || rel >= 0xe20490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20490 size=80 callers=0 calls=3
   calls: sub_154bf00, sub_154c170, sub_154c290
*/
void sub_e20490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20490ULL || rel >= 0xe204e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e204e0 size=2384 callers=1 calls=1
   calls: sub_dfdd10
*/
void sub_e204e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe204e0ULL || rel >= 0xe20e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20e30 size=16 callers=0 calls=0
*/
void sub_e20e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20e30ULL || rel >= 0xe20e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20e40 size=208 callers=1 calls=2
   calls: sub_15498c0, sub_ce0
*/
void sub_e20e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20e40ULL || rel >= 0xe20f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20f10 size=48 callers=0 calls=1
   calls: sub_e20e40
*/
void sub_e20f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20f10ULL || rel >= 0xe20f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e20f40 size=1520 callers=1 calls=13
   calls: sub_15497e0, sub_15498c0, sub_154ae60, sub_154af10, sub_154b940, sub_154bc50, sub_65bf00, sub_c70, sub_ce0, sub_df8bc0, sub_df8de0, sub_df9260
   ... +1 more
*/
void sub_e20f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe20f40ULL || rel >= 0xe21530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21530 size=320 callers=4 calls=3
   calls: seperator_mark_2, sub_1c0, sub_ce0
*/
void sub_e21530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21530ULL || rel >= 0xe21670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21670 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e21670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21670ULL || rel >= 0xe216a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e216a0 size=160 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe216a0ULL || rel >= 0xe21740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21740 size=208 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21740ULL || rel >= 0xe21810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21810 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e21810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21810ULL || rel >= 0xe21840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21840 size=160 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21840ULL || rel >= 0xe218e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e218e0 size=208 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_44(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe218e0ULL || rel >= 0xe219b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e219b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e219b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe219b0ULL || rel >= 0xe219e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e219e0 size=272 callers=0 calls=7
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90, sub_e042e0, sub_e05fe0
   ref: class_cast
*/
void class_cast_45(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe219e0ULL || rel >= 0xe21af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21af0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e21af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21af0ULL || rel >= 0xe21b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21b20 size=272 callers=0 calls=7
   calls: aligned_allocation_of_userdata_block_data_section_for_s_2, sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90, sub_e042e0, sub_e05fe0
   ref: class_cast
*/
void class_cast_46(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21b20ULL || rel >= 0xe21c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21c30 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e21c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21c30ULL || rel >= 0xe21c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21c60 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e21c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21c60ULL || rel >= 0xe21c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21c90 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e21c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21c90ULL || rel >= 0xe21cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21cc0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e21cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21cc0ULL || rel >= 0xe21cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21cf0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e21cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21cf0ULL || rel >= 0xe21d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21d20 size=160 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_47(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21d20ULL || rel >= 0xe21dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21dc0 size=208 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21dc0ULL || rel >= 0xe21e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21e90 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e21e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21e90ULL || rel >= 0xe21ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21ec0 size=160 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_49(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21ec0ULL || rel >= 0xe21f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e21f60 size=208 callers=0 calls=4
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_e05b20
   ref: class_cast
*/
void class_cast_50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21f60ULL || rel >= 0xe22030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22030 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22030ULL || rel >= 0xe22060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22060 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22060ULL || rel >= 0xe22090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e22090 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e22090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe22090ULL || rel >= 0xe220c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e220c0 size=224 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154b860, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_51(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe220c0ULL || rel >= 0xe221a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e221a0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e221a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe221a0ULL || rel >= 0xe221d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e221d0 size=224 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154b860, sub_154bc50, sub_defc90
   ref: class_cast
*/
void class_cast_52(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe221d0ULL || rel >= 0xe222b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e222b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e222b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe222b0ULL || rel >= 0xe222e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e222e0 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154c260, sub_defc90
   ref: class_cast
*/
void class_cast_53(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe222e0ULL || rel >= 0xe223b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e223b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e223b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe223b0ULL || rel >= 0xe223e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e223e0 size=208 callers=0 calls=5
   calls: sub_1549da0, sub_154ab20, sub_154bc50, sub_154c260, sub_defc90
   ref: class_cast
*/
void class_cast_54(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe223e0ULL || rel >= 0xe224b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00e224b0 size=48 callers=0 calls=1
   calls: sub_154bc50
*/
void sub_e224b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe224b0ULL || rel >= 0xe224e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

