/* subsdk1 functions 003357b0..0035fc50 (16 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 003357b0 size=112 callers=0 calls=3
   calls: sub_2edeb0, sub_2ee110, sub_3353a0
*/
void sub_3357b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3357b0ULL || rel >= 0x335820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335820 size=144 callers=5 calls=2
   calls: sub_335820, sub_361950
*/
void sub_335820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335820ULL || rel >= 0x3358b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003358b0 size=144 callers=0 calls=3
   calls: OpenGL_does_not_allow_selection_of_expressions_of_array, sub_2ac7d0, sub_362830
*/
void sub_3358b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3358b0ULL || rel >= 0x335940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335940 size=48 callers=0 calls=0
*/
void sub_335940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335940ULL || rel >= 0x335970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335970 size=672 callers=0 calls=11
   calls: d_fatal_error_C9999, sub_2ac7d0, sub_360640, sub_360ed0, sub_3627b0, sub_362800, sub_366eb0, sub_367f50, sub_369bf0, sub_36a4b0, sub_36d510
   ref: lDupWriteToReadOutput: Invalid argument in function call
*/
void lDupWriteToReadOutput_Invalid_argument_in_function_call(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335970ULL || rel >= 0x335c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335c10 size=48 callers=0 calls=0
*/
void sub_335c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335c10ULL || rel >= 0x335c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335c40 size=32 callers=0 calls=0
*/
void sub_335c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335c40ULL || rel >= 0x335c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335c60 size=336 callers=1 calls=3
   calls: sub_369ec0, sub_36a750, sub_36eea0
*/
void sub_335c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335c60ULL || rel >= 0x335db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335db0 size=16 callers=0 calls=0
*/
void sub_335db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335db0ULL || rel >= 0x335dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335dc0 size=128 callers=0 calls=1
   calls: TMP_d_2
*/
void sub_335dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335dc0ULL || rel >= 0x335e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335e40 size=208 callers=0 calls=8
   calls: sub_2ac3d0, sub_2ac7d0, sub_35ca20, sub_362520, sub_366eb0, sub_3688b0, sub_36d4b0, sub_36d630
*/
void sub_335e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335e40ULL || rel >= 0x335f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335f10 size=368 callers=1 calls=5
   calls: sub_2ac3d0, sub_335c60, sub_33e930, sub_369ec0, sub_36a750
*/
void sub_335f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335f10ULL || rel >= 0x336080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336080 size=64 callers=2 calls=1
   calls: sub_36a750
*/
void sub_336080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336080ULL || rel >= 0x3360c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003360c0 size=304 callers=0 calls=3
   calls: sub_3627b0, sub_369bf0, sub_36a4b0
*/
void sub_3360c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3360c0ULL || rel >= 0x3361f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003361f0 size=480 callers=1 calls=11
   calls: mem_CreatePool, sub_2a4ba0, sub_2ac3d0, sub_2eddf0, sub_2ee210, sub_2ee310, sub_33d6c0, sub_33e930, sub_343b60, sub_369ec0, sub_36a950
*/
void sub_3361f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3361f0ULL || rel >= 0x3363d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003363d0 size=128 callers=0 calls=3
   calls: TMP_d_2, sub_2edeb0, sub_2ee110
*/
void sub_3363d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3363d0ULL || rel >= 0x336450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336450 size=400 callers=0 calls=9
   calls: sub_2ac3d0, sub_2ae0c0, sub_2ee110, sub_336a70, sub_35fae0, sub_366eb0, sub_36d050, sub_36d630, sub_36d9a0
*/
void sub_336450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336450ULL || rel >= 0x3365e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003365e0 size=320 callers=1 calls=3
   calls: s_is_not_accessible_in_this_profile, sub_369ec0, sub_36d6b0
*/
void sub_3365e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3365e0ULL || rel >= 0x336720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336720 size=144 callers=0 calls=2
   calls: s_is_not_accessible_in_this_profile, sub_337300
*/
void sub_336720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336720ULL || rel >= 0x3367b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003367b0 size=704 callers=0 calls=3
   calls: sub_2dc9d0, sub_2edeb0, sub_337300
*/
void sub_3367b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3367b0ULL || rel >= 0x336a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336a70 size=560 callers=3 calls=6
   calls: sub_2ac460, sub_2ac7d0, sub_336a70, sub_365df0, sub_366d00, sub_366eb0
*/
void sub_336a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336a70ULL || rel >= 0x336ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336ca0 size=432 callers=3 calls=7
   calls: sub_2dacc0, sub_2eac60, sub_354520, sub_36d110, sub_36df60, unrecognized_profile_specifier_s_2, variable_s_has_an_undefined_struct_type
   ref: %s is not accessible in this profile
*/
void s_is_not_accessible_in_this_profile(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336ca0ULL || rel >= 0x336e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00336e50 size=1200 callers=4 calls=17
   calls: sub_2dacc0, sub_354520, sub_355300, sub_367630, sub_367940, sub_36d050, sub_36d110, sub_36d4b0, sub_36d550, sub_36d630, sub_36d6b0, sub_36d910
   ... +5 more
   ref: variable "%s" has an undefined struct type
*/
void variable_s_has_an_undefined_struct_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x336e50ULL || rel >= 0x337300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337300 size=32 callers=30 calls=0
*/
void sub_337300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337300ULL || rel >= 0x337320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337320 size=112 callers=2 calls=1
   calls: sub_337320
*/
void sub_337320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337320ULL || rel >= 0x337390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337390 size=96 callers=22 calls=1
   calls: sub_360290
*/
void sub_337390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337390ULL || rel >= 0x3373f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003373f0 size=32 callers=19 calls=0
*/
void sub_3373f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3373f0ULL || rel >= 0x337410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00337410 size=5872 callers=4 calls=17
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, sub_2ac7d0, sub_2dacc0, sub_337320, sub_338b00, sub_338da0, sub_360290, sub_361a80, sub_362700, sub_365860, sub_365c40, sub_366530
   ... +5 more
   ref: %sarray index out of bounds
*/
void sarray_index_out_of_bounds_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x337410ULL || rel >= 0x338b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338b00 size=240 callers=2 calls=0
*/
void sub_338b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338b00ULL || rel >= 0x338bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338bf0 size=32 callers=5 calls=0
*/
void sub_338bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338bf0ULL || rel >= 0x338c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338c10 size=400 callers=0 calls=2
   calls: sub_333400, sub_36a4b0
*/
void sub_338c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338c10ULL || rel >= 0x338da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00338da0 size=832 callers=1 calls=7
   calls: Invalid_binary_operator, can_t_find_s_function_in_stdlib, sub_2ac7d0, sub_35fe00, sub_360290, sub_36d110, sub_36d630
*/
void sub_338da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x338da0ULL || rel >= 0x3390e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003390e0 size=32 callers=0 calls=0
*/
void sub_3390e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3390e0ULL || rel >= 0x339100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339100 size=32 callers=0 calls=0
*/
void sub_339100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339100ULL || rel >= 0x339120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339120 size=48 callers=0 calls=0
*/
void sub_339120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339120ULL || rel >= 0x339150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339150 size=48 callers=0 calls=0
*/
void sub_339150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339150ULL || rel >= 0x339180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339180 size=32 callers=0 calls=0
*/
void sub_339180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339180ULL || rel >= 0x3391a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003391a0 size=32 callers=0 calls=0
*/
void sub_3391a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3391a0ULL || rel >= 0x3391c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003391c0 size=16 callers=0 calls=0
*/
void sub_3391c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3391c0ULL || rel >= 0x3391d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003391d0 size=32 callers=0 calls=0
*/
void sub_3391d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3391d0ULL || rel >= 0x3391f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003391f0 size=32 callers=0 calls=0
*/
void sub_3391f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3391f0ULL || rel >= 0x339210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339210 size=16 callers=0 calls=0
*/
void sub_339210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339210ULL || rel >= 0x339220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339220 size=16 callers=0 calls=0
*/
void sub_339220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339220ULL || rel >= 0x339230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339230 size=32 callers=0 calls=0
*/
void sub_339230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339230ULL || rel >= 0x339250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339250 size=32 callers=0 calls=0
*/
void sub_339250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339250ULL || rel >= 0x339270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339270 size=32 callers=0 calls=0
*/
void sub_339270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339270ULL || rel >= 0x339290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339290 size=32 callers=0 calls=0
*/
void sub_339290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339290ULL || rel >= 0x3392b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003392b0 size=16 callers=0 calls=0
*/
void sub_3392b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3392b0ULL || rel >= 0x3392c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003392c0 size=16 callers=0 calls=0
*/
void sub_3392c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3392c0ULL || rel >= 0x3392d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003392d0 size=32 callers=0 calls=0
*/
void sub_3392d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3392d0ULL || rel >= 0x3392f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003392f0 size=32 callers=0 calls=0
*/
void sub_3392f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3392f0ULL || rel >= 0x339310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339310 size=32 callers=0 calls=0
*/
void sub_339310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339310ULL || rel >= 0x339330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339330 size=48 callers=0 calls=0
*/
void sub_339330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339330ULL || rel >= 0x339360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339360 size=48 callers=0 calls=0
*/
void sub_339360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339360ULL || rel >= 0x339390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339390 size=32 callers=0 calls=0
*/
void sub_339390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339390ULL || rel >= 0x3393b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003393b0 size=32 callers=0 calls=0
*/
void sub_3393b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3393b0ULL || rel >= 0x3393d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003393d0 size=32 callers=0 calls=0
*/
void sub_3393d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3393d0ULL || rel >= 0x3393f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003393f0 size=16 callers=0 calls=0
*/
void sub_3393f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3393f0ULL || rel >= 0x339400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339400 size=16 callers=0 calls=0
*/
void sub_339400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339400ULL || rel >= 0x339410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339410 size=32 callers=0 calls=0
*/
void sub_339410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339410ULL || rel >= 0x339430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339430 size=32 callers=0 calls=0
*/
void sub_339430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339430ULL || rel >= 0x339450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339450 size=32 callers=0 calls=0
*/
void sub_339450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339450ULL || rel >= 0x339470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339470 size=32 callers=0 calls=0
*/
void sub_339470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339470ULL || rel >= 0x339490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339490 size=32 callers=0 calls=0
*/
void sub_339490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339490ULL || rel >= 0x3394b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003394b0 size=112 callers=0 calls=0
*/
void sub_3394b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3394b0ULL || rel >= 0x339520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339520 size=176 callers=0 calls=0
*/
void sub_339520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339520ULL || rel >= 0x3395d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003395d0 size=32 callers=0 calls=0
*/
void sub_3395d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3395d0ULL || rel >= 0x3395f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003395f0 size=16 callers=0 calls=0
*/
void sub_3395f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3395f0ULL || rel >= 0x339600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339600 size=16 callers=0 calls=0
*/
void sub_339600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339600ULL || rel >= 0x339610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339610 size=16 callers=0 calls=0
*/
void sub_339610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339610ULL || rel >= 0x339620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339620 size=16 callers=0 calls=0
*/
void sub_339620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339620ULL || rel >= 0x339630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339630 size=16 callers=0 calls=0
*/
void sub_339630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339630ULL || rel >= 0x339640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339640 size=16 callers=0 calls=0
*/
void sub_339640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339640ULL || rel >= 0x339650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339650 size=16 callers=0 calls=0
*/
void sub_339650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339650ULL || rel >= 0x339660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339660 size=64 callers=0 calls=1
   calls: sub_2a5af0
*/
void sub_339660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339660ULL || rel >= 0x3396a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003396a0 size=80 callers=0 calls=1
   calls: sub_2a5af0
*/
void sub_3396a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3396a0ULL || rel >= 0x3396f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003396f0 size=80 callers=0 calls=1
   calls: sub_2a5af0
*/
void sub_3396f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3396f0ULL || rel >= 0x339740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339740 size=80 callers=0 calls=1
   calls: sub_2a5af0
*/
void sub_339740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339740ULL || rel >= 0x339790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339790 size=96 callers=0 calls=1
   calls: sub_2a5af0
*/
void sub_339790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339790ULL || rel >= 0x3397f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003397f0 size=32 callers=0 calls=0
*/
void sub_3397f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3397f0ULL || rel >= 0x339810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339810 size=32 callers=0 calls=0
*/
void sub_339810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339810ULL || rel >= 0x339830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339830 size=32 callers=0 calls=0
*/
void sub_339830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339830ULL || rel >= 0x339850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339850 size=32 callers=0 calls=0
*/
void sub_339850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339850ULL || rel >= 0x339870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339870 size=32 callers=0 calls=0
*/
void sub_339870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339870ULL || rel >= 0x339890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339890 size=32 callers=0 calls=0
*/
void sub_339890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339890ULL || rel >= 0x3398b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003398b0 size=80 callers=0 calls=0
*/
void sub_3398b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3398b0ULL || rel >= 0x339900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339900 size=176 callers=0 calls=0
*/
void sub_339900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339900ULL || rel >= 0x3399b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003399b0 size=16 callers=0 calls=0
*/
void sub_3399b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3399b0ULL || rel >= 0x3399c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003399c0 size=16 callers=0 calls=0
*/
void sub_3399c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3399c0ULL || rel >= 0x3399d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003399d0 size=16 callers=0 calls=0
*/
void sub_3399d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3399d0ULL || rel >= 0x3399e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003399e0 size=16 callers=0 calls=0
*/
void sub_3399e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3399e0ULL || rel >= 0x3399f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003399f0 size=16 callers=0 calls=0
*/
void sub_3399f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3399f0ULL || rel >= 0x339a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339a00 size=16 callers=0 calls=0
*/
void sub_339a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339a00ULL || rel >= 0x339a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339a10 size=16 callers=0 calls=0
*/
void sub_339a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339a10ULL || rel >= 0x339a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339a20 size=64 callers=0 calls=1
   calls: sub_2a5af0
*/
void sub_339a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339a20ULL || rel >= 0x339a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339a60 size=32 callers=0 calls=0
*/
void sub_339a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339a60ULL || rel >= 0x339a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339a80 size=64 callers=0 calls=1
   calls: sub_2a5af0
*/
void sub_339a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339a80ULL || rel >= 0x339ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339ac0 size=64 callers=0 calls=1
   calls: sub_2a5af0
*/
void sub_339ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339ac0ULL || rel >= 0x339b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339b00 size=112 callers=0 calls=0
*/
void sub_339b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339b00ULL || rel >= 0x339b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339b70 size=96 callers=0 calls=0
*/
void sub_339b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339b70ULL || rel >= 0x339bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339bd0 size=96 callers=0 calls=0
*/
void sub_339bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339bd0ULL || rel >= 0x339c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339c30 size=96 callers=0 calls=0
*/
void sub_339c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339c30ULL || rel >= 0x339c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339c90 size=112 callers=0 calls=0
*/
void sub_339c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339c90ULL || rel >= 0x339d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339d00 size=80 callers=0 calls=0
*/
void sub_339d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339d00ULL || rel >= 0x339d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339d50 size=112 callers=0 calls=0
*/
void sub_339d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339d50ULL || rel >= 0x339dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339dc0 size=80 callers=0 calls=0
*/
void sub_339dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339dc0ULL || rel >= 0x339e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339e10 size=176 callers=0 calls=0
*/
void sub_339e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339e10ULL || rel >= 0x339ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339ec0 size=176 callers=0 calls=0
*/
void sub_339ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339ec0ULL || rel >= 0x339f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00339f70 size=176 callers=0 calls=0
*/
void sub_339f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x339f70ULL || rel >= 0x33a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a020 size=176 callers=0 calls=0
*/
void sub_33a020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a020ULL || rel >= 0x33a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a0d0 size=208 callers=0 calls=0
*/
void sub_33a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a0d0ULL || rel >= 0x33a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a1a0 size=176 callers=0 calls=0
*/
void sub_33a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a1a0ULL || rel >= 0x33a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a250 size=176 callers=0 calls=0
*/
void sub_33a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a250ULL || rel >= 0x33a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a300 size=176 callers=0 calls=0
*/
void sub_33a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a300ULL || rel >= 0x33a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a3b0 size=16 callers=0 calls=0
*/
void sub_33a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a3b0ULL || rel >= 0x33a3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a3c0 size=32 callers=0 calls=0
*/
void sub_33a3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a3c0ULL || rel >= 0x33a3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a3e0 size=32 callers=0 calls=0
*/
void sub_33a3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a3e0ULL || rel >= 0x33a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a400 size=32 callers=0 calls=0
*/
void sub_33a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a400ULL || rel >= 0x33a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a420 size=48 callers=0 calls=0
*/
void sub_33a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a420ULL || rel >= 0x33a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a450 size=16 callers=0 calls=0
*/
void sub_33a450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a450ULL || rel >= 0x33a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a460 size=16 callers=0 calls=0
*/
void sub_33a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a460ULL || rel >= 0x33a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a470 size=16 callers=0 calls=0
*/
void sub_33a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a470ULL || rel >= 0x33a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a480 size=16 callers=0 calls=0
*/
void sub_33a480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a480ULL || rel >= 0x33a490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a490 size=16 callers=0 calls=0
*/
void sub_33a490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a490ULL || rel >= 0x33a4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a4a0 size=32 callers=0 calls=0
*/
void sub_33a4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a4a0ULL || rel >= 0x33a4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a4c0 size=32 callers=0 calls=0
*/
void sub_33a4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a4c0ULL || rel >= 0x33a4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a4e0 size=32 callers=0 calls=0
*/
void sub_33a4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a4e0ULL || rel >= 0x33a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a500 size=48 callers=0 calls=0
*/
void sub_33a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a500ULL || rel >= 0x33a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a530 size=48 callers=0 calls=0
*/
void sub_33a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a530ULL || rel >= 0x33a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a560 size=16 callers=0 calls=0
*/
void sub_33a560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a560ULL || rel >= 0x33a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a570 size=32 callers=0 calls=0
*/
void sub_33a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a570ULL || rel >= 0x33a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a590 size=32 callers=0 calls=0
*/
void sub_33a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a590ULL || rel >= 0x33a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a5b0 size=32 callers=0 calls=0
*/
void sub_33a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a5b0ULL || rel >= 0x33a5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a5d0 size=32 callers=0 calls=0
*/
void sub_33a5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a5d0ULL || rel >= 0x33a5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a5f0 size=16 callers=0 calls=0
*/
void sub_33a5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a5f0ULL || rel >= 0x33a600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a600 size=16 callers=0 calls=0
*/
void sub_33a600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a600ULL || rel >= 0x33a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a610 size=16 callers=0 calls=0
*/
void sub_33a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a610ULL || rel >= 0x33a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a620 size=16 callers=0 calls=0
*/
void sub_33a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a620ULL || rel >= 0x33a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a630 size=16 callers=0 calls=0
*/
void sub_33a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a630ULL || rel >= 0x33a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a640 size=16 callers=0 calls=0
*/
void sub_33a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a640ULL || rel >= 0x33a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a650 size=16 callers=0 calls=0
*/
void sub_33a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a650ULL || rel >= 0x33a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a660 size=16 callers=0 calls=0
*/
void sub_33a660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a660ULL || rel >= 0x33a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a670 size=32 callers=0 calls=0
*/
void sub_33a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a670ULL || rel >= 0x33a690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a690 size=32 callers=0 calls=0
*/
void sub_33a690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a690ULL || rel >= 0x33a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a6b0 size=32 callers=0 calls=0
*/
void sub_33a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a6b0ULL || rel >= 0x33a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a6d0 size=32 callers=0 calls=0
*/
void sub_33a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a6d0ULL || rel >= 0x33a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a6f0 size=32 callers=0 calls=0
*/
void sub_33a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a6f0ULL || rel >= 0x33a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a710 size=48 callers=0 calls=0
*/
void sub_33a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a710ULL || rel >= 0x33a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a740 size=48 callers=0 calls=0
*/
void sub_33a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a740ULL || rel >= 0x33a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a770 size=32 callers=0 calls=0
*/
void sub_33a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a770ULL || rel >= 0x33a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a790 size=32 callers=0 calls=0
*/
void sub_33a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a790ULL || rel >= 0x33a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a7b0 size=16 callers=0 calls=0
*/
void sub_33a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a7b0ULL || rel >= 0x33a7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a7c0 size=16 callers=0 calls=0
*/
void sub_33a7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a7c0ULL || rel >= 0x33a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a7d0 size=32 callers=0 calls=0
*/
void sub_33a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a7d0ULL || rel >= 0x33a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a7f0 size=16 callers=0 calls=0
*/
void sub_33a7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a7f0ULL || rel >= 0x33a800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a800 size=32 callers=0 calls=0
*/
void sub_33a800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a800ULL || rel >= 0x33a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a820 size=32 callers=0 calls=0
*/
void sub_33a820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a820ULL || rel >= 0x33a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a840 size=32 callers=0 calls=0
*/
void sub_33a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a840ULL || rel >= 0x33a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a860 size=48 callers=0 calls=0
*/
void sub_33a860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a860ULL || rel >= 0x33a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a890 size=48 callers=0 calls=0
*/
void sub_33a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a890ULL || rel >= 0x33a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a8c0 size=32 callers=0 calls=0
*/
void sub_33a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a8c0ULL || rel >= 0x33a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a8e0 size=32 callers=0 calls=0
*/
void sub_33a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a8e0ULL || rel >= 0x33a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a900 size=16 callers=0 calls=0
*/
void sub_33a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a900ULL || rel >= 0x33a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a910 size=16 callers=0 calls=0
*/
void sub_33a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a910ULL || rel >= 0x33a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a920 size=32 callers=0 calls=0
*/
void sub_33a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a920ULL || rel >= 0x33a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a940 size=32 callers=0 calls=0
*/
void sub_33a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a940ULL || rel >= 0x33a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a960 size=32 callers=0 calls=0
*/
void sub_33a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a960ULL || rel >= 0x33a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a980 size=32 callers=0 calls=0
*/
void sub_33a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a980ULL || rel >= 0x33a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a9a0 size=32 callers=0 calls=0
*/
void sub_33a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a9a0ULL || rel >= 0x33a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a9c0 size=48 callers=0 calls=0
*/
void sub_33a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a9c0ULL || rel >= 0x33a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033a9f0 size=48 callers=0 calls=0
*/
void sub_33a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33a9f0ULL || rel >= 0x33aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aa20 size=32 callers=0 calls=0
*/
void sub_33aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aa20ULL || rel >= 0x33aa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aa40 size=32 callers=0 calls=0
*/
void sub_33aa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aa40ULL || rel >= 0x33aa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aa60 size=16 callers=0 calls=0
*/
void sub_33aa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aa60ULL || rel >= 0x33aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aa70 size=16 callers=0 calls=0
*/
void sub_33aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aa70ULL || rel >= 0x33aa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aa80 size=32 callers=0 calls=0
*/
void sub_33aa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aa80ULL || rel >= 0x33aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aaa0 size=16 callers=0 calls=0
*/
void sub_33aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aaa0ULL || rel >= 0x33aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aab0 size=32 callers=0 calls=0
*/
void sub_33aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aab0ULL || rel >= 0x33aad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aad0 size=32 callers=0 calls=0
*/
void sub_33aad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aad0ULL || rel >= 0x33aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aaf0 size=32 callers=0 calls=0
*/
void sub_33aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aaf0ULL || rel >= 0x33ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ab10 size=48 callers=0 calls=0
*/
void sub_33ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ab10ULL || rel >= 0x33ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ab40 size=48 callers=0 calls=0
*/
void sub_33ab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ab40ULL || rel >= 0x33ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ab70 size=32 callers=0 calls=0
*/
void sub_33ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ab70ULL || rel >= 0x33ab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ab90 size=32 callers=0 calls=0
*/
void sub_33ab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ab90ULL || rel >= 0x33abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033abb0 size=16 callers=0 calls=0
*/
void sub_33abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33abb0ULL || rel >= 0x33abc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033abc0 size=16 callers=0 calls=0
*/
void sub_33abc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33abc0ULL || rel >= 0x33abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033abd0 size=16 callers=0 calls=0
*/
void sub_33abd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33abd0ULL || rel >= 0x33abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033abe0 size=16 callers=0 calls=0
*/
void sub_33abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33abe0ULL || rel >= 0x33abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033abf0 size=32 callers=0 calls=0
*/
void sub_33abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33abf0ULL || rel >= 0x33ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ac10 size=32 callers=0 calls=0
*/
void sub_33ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ac10ULL || rel >= 0x33ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ac30 size=32 callers=0 calls=0
*/
void sub_33ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ac30ULL || rel >= 0x33ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ac50 size=48 callers=0 calls=0
*/
void sub_33ac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ac50ULL || rel >= 0x33ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ac80 size=48 callers=0 calls=0
*/
void sub_33ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ac80ULL || rel >= 0x33acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033acb0 size=32 callers=0 calls=0
*/
void sub_33acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33acb0ULL || rel >= 0x33acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033acd0 size=32 callers=0 calls=0
*/
void sub_33acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33acd0ULL || rel >= 0x33acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033acf0 size=32 callers=0 calls=0
*/
void sub_33acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33acf0ULL || rel >= 0x33ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ad10 size=32 callers=0 calls=0
*/
void sub_33ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ad10ULL || rel >= 0x33ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ad30 size=32 callers=0 calls=0
*/
void sub_33ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ad30ULL || rel >= 0x33ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ad50 size=32 callers=0 calls=0
*/
void sub_33ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ad50ULL || rel >= 0x33ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ad70 size=32 callers=0 calls=0
*/
void sub_33ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ad70ULL || rel >= 0x33ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ad90 size=32 callers=0 calls=0
*/
void sub_33ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ad90ULL || rel >= 0x33adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033adb0 size=32 callers=0 calls=0
*/
void sub_33adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33adb0ULL || rel >= 0x33add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033add0 size=32 callers=0 calls=0
*/
void sub_33add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33add0ULL || rel >= 0x33adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033adf0 size=32 callers=0 calls=0
*/
void sub_33adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33adf0ULL || rel >= 0x33ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ae10 size=16 callers=0 calls=0
*/
void sub_33ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ae10ULL || rel >= 0x33ae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ae20 size=16 callers=0 calls=0
*/
void sub_33ae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ae20ULL || rel >= 0x33ae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ae30 size=32 callers=0 calls=0
*/
void sub_33ae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ae30ULL || rel >= 0x33ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ae50 size=32 callers=0 calls=0
*/
void sub_33ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ae50ULL || rel >= 0x33ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ae70 size=32 callers=0 calls=0
*/
void sub_33ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ae70ULL || rel >= 0x33ae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ae90 size=48 callers=0 calls=0
*/
void sub_33ae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ae90ULL || rel >= 0x33aec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aec0 size=48 callers=0 calls=0
*/
void sub_33aec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aec0ULL || rel >= 0x33aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aef0 size=32 callers=0 calls=0
*/
void sub_33aef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aef0ULL || rel >= 0x33af10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033af10 size=32 callers=0 calls=0
*/
void sub_33af10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33af10ULL || rel >= 0x33af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033af30 size=32 callers=0 calls=0
*/
void sub_33af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33af30ULL || rel >= 0x33af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033af50 size=32 callers=0 calls=0
*/
void sub_33af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33af50ULL || rel >= 0x33af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033af70 size=32 callers=0 calls=0
*/
void sub_33af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33af70ULL || rel >= 0x33af90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033af90 size=32 callers=0 calls=0
*/
void sub_33af90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33af90ULL || rel >= 0x33afb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033afb0 size=32 callers=0 calls=0
*/
void sub_33afb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33afb0ULL || rel >= 0x33afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033afd0 size=32 callers=0 calls=0
*/
void sub_33afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33afd0ULL || rel >= 0x33aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033aff0 size=32 callers=0 calls=0
*/
void sub_33aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33aff0ULL || rel >= 0x33b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b010 size=32 callers=0 calls=0
*/
void sub_33b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b010ULL || rel >= 0x33b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b030 size=32 callers=0 calls=0
*/
void sub_33b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b030ULL || rel >= 0x33b050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b050 size=224 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_33b050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b050ULL || rel >= 0x33b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b130 size=160 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_33b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b130ULL || rel >= 0x33b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b1d0 size=64 callers=0 calls=1
   calls: sub_2a4f00
*/
void sub_33b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b1d0ULL || rel >= 0x33b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b210 size=400 callers=1 calls=0
*/
void sub_33b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b210ULL || rel >= 0x33b3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b3a0 size=1152 callers=5 calls=7
   calls: operands_to_s_must_be_scalar_or_vector, sarray_index_out_of_bounds_2, sub_2ac7d0, sub_33b210, sub_33b3a0, sub_33bd60, sub_36d630
*/
void sub_33b3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b3a0ULL || rel >= 0x33b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033b820 size=912 callers=4 calls=9
   calls: sub_33b3a0, sub_3608f0, sub_360c40, sub_362aa0, sub_36d050, sub_36d630, sub_36d6b0, sub_36d9a0, unnamed_32
   ref: %s[%d]
*/
void unnamed_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33b820ULL || rel >= 0x33bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033bbb0 size=432 callers=2 calls=4
   calls: sub_33b3a0, sub_33bd60, unnamed_32, unnamed_33
*/
void sub_33bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33bbb0ULL || rel >= 0x33bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033bd60 size=272 callers=6 calls=1
   calls: sub_33bd60
*/
void sub_33bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33bd60ULL || rel >= 0x33be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033be70 size=464 callers=13 calls=5
   calls: sub_2acf90, sub_337300, sub_3608f0, sub_36dfd0, unnamed_33
   ref: %s[%d]
*/
void unnamed_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33be70ULL || rel >= 0x33c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c040 size=592 callers=1 calls=4
   calls: sub_33c290, sub_36da30, unexpected_expr_kind_in_IsExprEqual, unnamed_33
*/
void sub_33c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c040ULL || rel >= 0x33c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c290 size=192 callers=4 calls=4
   calls: sub_362aa0, sub_36d4b0, sub_36d630, sub_36d6b0
*/
void sub_33c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c290ULL || rel >= 0x33c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c350 size=784 callers=0 calls=4
   calls: sub_33bbb0, sub_367f50, sub_36d510, unexpected_expr_kind_in_IsExprEqual
*/
void sub_33c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c350ULL || rel >= 0x33c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c660 size=608 callers=1 calls=4
   calls: operands_to_s_must_be_scalar_or_vector, sarray_index_out_of_bounds_2, sub_2ac7d0, sub_36d630
*/
void sub_33c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c660ULL || rel >= 0x33c8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033c8c0 size=768 callers=0 calls=9
   calls: OpenGL_does_not_allow_matrix_casts_without_version_120_o, sarray_index_out_of_bounds_2, sub_33bd60, sub_33c040, sub_33c290, sub_33c660, sub_360b30, sub_36da30, unnamed_33
*/
void sub_33c8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33c8c0ULL || rel >= 0x33cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cbc0 size=480 callers=1 calls=4
   calls: sub_2acf90, sub_3608f0, sub_36da10, unnamed_33
   ref: %s[%d]
*/
void unnamed_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cbc0ULL || rel >= 0x33cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033cda0 size=720 callers=2 calls=2
   calls: sub_337390, sub_33b050
*/
void sub_33cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33cda0ULL || rel >= 0x33d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d070 size=912 callers=0 calls=14
   calls: sub_33bd60, sub_33c290, sub_33cda0, sub_359610, sub_362440, sub_362620, sub_3627b0, sub_36d830, sub_36d910, sub_36d940, sub_36dfd0, unnamed_32
   ... +2 more
*/
void sub_33d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d070ULL || rel >= 0x33d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d400 size=704 callers=4 calls=6
   calls: sub_1ff0, sub_33cda0, sub_35fe00, sub_360290, sub_3608f0, unnamed_35
   ref: %s[%d]
*/
void unnamed_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d400ULL || rel >= 0x33d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d6c0 size=304 callers=8 calls=6
   calls: mem_Alloc, mem_CreatePool, sub_2a4ba0, sub_345230, sub_369ec0, unnamed_35
*/
void sub_33d6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d6c0ULL || rel >= 0x33d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d7f0 size=16 callers=0 calls=0
*/
void sub_33d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d7f0ULL || rel >= 0x33d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d800 size=16 callers=0 calls=0
*/
void sub_33d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d800ULL || rel >= 0x33d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d810 size=16 callers=0 calls=0
*/
void sub_33d810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d810ULL || rel >= 0x33d820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d820 size=16 callers=0 calls=0
*/
void sub_33d820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d820ULL || rel >= 0x33d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d830 size=432 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_33d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d830ULL || rel >= 0x33d9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033d9e0 size=272 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_33d9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33d9e0ULL || rel >= 0x33daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033daf0 size=80 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_33daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33daf0ULL || rel >= 0x33db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033db40 size=80 callers=0 calls=1
   calls: d_fatal_error_C9999
   ref: loops not visited in FIFO order
*/
void loops_not_visited_in_FIFO_order_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33db40ULL || rel >= 0x33db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033db90 size=432 callers=0 calls=6
   calls: sub_362520, sub_3627b0, sub_362aa0, sub_367f50, sub_36d510, unexpected_expression_in_DUI_foreachId_2
*/
void sub_33db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33db90ULL || rel >= 0x33dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033dd40 size=1136 callers=7 calls=8
   calls: d_fatal_error_C9999, sub_2acf90, sub_2dc9d0, sub_33f110, sub_362aa0, sub_36d630, sub_36d970, unexpected_expression_in_DUI_foreachId_2
   ref: unexpected expression in DUI_foreachId
*/
void unexpected_expression_in_DUI_foreachId_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33dd40ULL || rel >= 0x33e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e1b0 size=144 callers=0 calls=0
*/
void sub_33e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e1b0ULL || rel >= 0x33e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e240 size=128 callers=0 calls=2
   calls: sub_362520, unexpected_expression_in_DUI_foreachId_2
*/
void sub_33e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e240ULL || rel >= 0x33e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e2c0 size=208 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_33e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e2c0ULL || rel >= 0x33e390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e390 size=272 callers=3 calls=1
   calls: mem_Alloc
*/
void sub_33e390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e390ULL || rel >= 0x33e4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e4a0 size=528 callers=0 calls=7
   calls: sub_33e390, sub_362520, sub_3627b0, sub_367f50, sub_36cd20, sub_36d510, unexpected_expression_in_DUI_foreachId_2
*/
void sub_33e4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e4a0ULL || rel >= 0x33e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e6b0 size=208 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_33e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e6b0ULL || rel >= 0x33e780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e780 size=144 callers=0 calls=0
*/
void sub_33e780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e780ULL || rel >= 0x33e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e810 size=288 callers=1 calls=1
   calls: mem_Alloc
*/
void sub_33e810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e810ULL || rel >= 0x33e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033e930 size=1408 callers=5 calls=11
   calls: mem_Alloc, mem_CreatePool, sub_2a45a0, sub_2a4690, sub_2a4ba0, sub_33e810, sub_345230, sub_368330, sub_369ec0, sub_36a070, sub_36ebf0
*/
void sub_33e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33e930ULL || rel >= 0x33eeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033eeb0 size=48 callers=0 calls=0
*/
void sub_33eeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33eeb0ULL || rel >= 0x33eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033eee0 size=144 callers=0 calls=2
   calls: sub_33f110, sub_362aa0
*/
void sub_33eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33eee0ULL || rel >= 0x33ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ef70 size=256 callers=0 calls=4
   calls: sub_2a42a0, sub_33f110, sub_362aa0, sub_36dee0
*/
void sub_33ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ef70ULL || rel >= 0x33f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f070 size=144 callers=0 calls=3
   calls: sub_2a45a0, sub_2a4910, sub_36dee0
*/
void sub_33f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f070ULL || rel >= 0x33f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f100 size=16 callers=0 calls=0
*/
void sub_33f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f100ULL || rel >= 0x33f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f110 size=240 callers=7 calls=4
   calls: sub_33f110, sub_36d550, sub_36d630, sub_36d6b0
*/
void sub_33f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f110ULL || rel >= 0x33f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f200 size=304 callers=2 calls=1
   calls: mem_Alloc
*/
void sub_33f200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f200ULL || rel >= 0x33f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f330 size=224 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_33f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f330ULL || rel >= 0x33f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f410 size=32 callers=0 calls=0
*/
void sub_33f410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f410ULL || rel >= 0x33f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f430 size=496 callers=0 calls=3
   calls: mem_Alloc, sub_362da0, sub_36da30
*/
void sub_33f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f430ULL || rel >= 0x33f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f620 size=304 callers=1 calls=2
   calls: sub_3608f0, unnamed_36
   ref: %0.*s[*]%s
*/
void f_0_s_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f620ULL || rel >= 0x33f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033f750 size=1648 callers=4 calls=13
   calls: f_0_s_s_2, mem_Alloc, sub_33fdc0, sub_35f390, sub_35f400, sub_35f430, sub_35f6d0, sub_3608f0, sub_362da0, sub_36d050, sub_36d8e0, sub_36d9a0
   ... +1 more
   ref: %s[%d]
*/
void unnamed_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33f750ULL || rel >= 0x33fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033fdc0 size=240 callers=2 calls=4
   calls: sub_35f390, sub_35f400, sub_35f430, sub_35f6d0
*/
void sub_33fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33fdc0ULL || rel >= 0x33feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033feb0 size=224 callers=2 calls=6
   calls: sub_36d050, sub_36d9a0, sub_36d9d0, sub_36da10, unnamed_36, unnamed_37
*/
void sub_33feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33feb0ULL || rel >= 0x33ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0033ff90 size=560 callers=5 calls=7
   calls: sub_2acf90, sub_337300, sub_35f390, sub_35f400, sub_35f430, sub_35f6d0, unnamed_37
   ref: %s[%d]
*/
void unnamed_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x33ff90ULL || rel >= 0x3401c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003401c0 size=288 callers=0 calls=2
   calls: sub_33feb0, sub_3627b0
*/
void sub_3401c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3401c0ULL || rel >= 0x3402e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003402e0 size=752 callers=0 calls=10
   calls: d_fatal_error_C9999, invalid_initialization, sub_2dacc0, sub_3405d0, sub_3627b0, sub_362cf0, sub_36d050, sub_36da30, unexpected_expression_with_function_type, unnamed_37
   ref: unable to generate code, no legal types for program.
   ref: assignment among incompatible concrete types
*/
void assignment_among_incompatible_concrete_types(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3402e0ULL || rel >= 0x3405d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003405d0 size=160 callers=2 calls=3
   calls: sub_3405d0, sub_36d050, sub_36d8e0
*/
void sub_3405d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3405d0ULL || rel >= 0x340670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340670 size=1088 callers=3 calls=13
   calls: sub_2fdaa0, sub_303070, sub_33f200, sub_340670, sub_35f390, sub_35f400, sub_35f430, sub_35f6d0, sub_3608f0, sub_36d120, sub_36d290, sub_36da30
   ... +1 more
*/
void sub_340670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340670ULL || rel >= 0x340ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340ab0 size=480 callers=4 calls=11
   calls: mem_AddCleanup, mem_Alloc, mem_CreatePool, sub_2a4ba0, sub_2eddf0, sub_2ee210, sub_2ee290, sub_340670, sub_345230, sub_36a100, symbol_not_function_s_3
*/
void sub_340ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340ab0ULL || rel >= 0x340c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340c90 size=16 callers=0 calls=0
*/
void sub_340c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340c90ULL || rel >= 0x340ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340ca0 size=64 callers=4 calls=1
   calls: sub_2ee110
*/
void sub_340ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340ca0ULL || rel >= 0x340ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340ce0 size=16 callers=0 calls=0
*/
void sub_340ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340ce0ULL || rel >= 0x340cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340cf0 size=16 callers=0 calls=0
*/
void sub_340cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340cf0ULL || rel >= 0x340d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340d00 size=400 callers=0 calls=7
   calls: sub_2dc9d0, sub_2edeb0, sub_2ee110, sub_340e90, sub_36d050, sub_36d9a0, sub_36dce0
*/
void sub_340d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340d00ULL || rel >= 0x340e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340e90 size=112 callers=2 calls=2
   calls: sub_340e90, sub_36d9a0
*/
void sub_340e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340e90ULL || rel >= 0x340f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340f00 size=112 callers=1 calls=1
   calls: sub_340f70
*/
void sub_340f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340f00ULL || rel >= 0x340f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00340f70 size=352 callers=2 calls=10
   calls: OpenGL_does_not_allow_s_calls_after_return_statement, TMP_d_2, sub_2ac3d0, sub_2ac440, sub_2ac450, sub_341520, sub_361150, sub_366eb0, sub_36d510, sub_36d9a0
*/
void sub_340f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x340f70ULL || rel >= 0x3410d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003410d0 size=80 callers=1 calls=0
*/
void sub_3410d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3410d0ULL || rel >= 0x341120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341120 size=32 callers=0 calls=0
*/
void sub_341120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341120ULL || rel >= 0x341140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341140 size=704 callers=2 calls=7
   calls: mem_CreatePool, sub_2a4ba0, sub_2aec90, sub_2ed320, sub_340ab0, sub_369ec0, sub_36a750
*/
void sub_341140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341140ULL || rel >= 0x341400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341400 size=160 callers=0 calls=4
   calls: sub_2ac3d0, sub_2ad130, sub_36a4b0, sub_36a750
*/
void sub_341400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341400ULL || rel >= 0x3414a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003414a0 size=128 callers=0 calls=2
   calls: sub_2dacc0, sub_36d9d0
   ref: cannot determine type of interface variable. Need to inline function
*/
void cannot_determine_type_of_interface_variable_Need_to_inli(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3414a0ULL || rel >= 0x341520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341520 size=368 callers=5 calls=5
   calls: TMP_d_2, sub_2ac440, sub_341520, sub_361150, sub_366eb0
*/
void sub_341520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341520ULL || rel >= 0x341690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341690 size=928 callers=8 calls=9
   calls: OpenGL_does_not_allow_s_calls_after_return_statement, TMP_d_2, sub_2ac440, sub_2ac450, sub_2db630, sub_3332c0, sub_360f30, sub_366eb0, sub_36e230
   ref: OpenGL does not allow %s calls after return statement
*/
void OpenGL_does_not_allow_s_calls_after_return_statement(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341690ULL || rel >= 0x341a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00341a30 size=2688 callers=0 calls=38
   calls: OpenGL_does_not_allow_s_calls_after_return_statement, TMP_d_2, invalid_discard_statement_encountered_in_DupStmt, mem_Alloc, s_04d_3, sub_2a5c60, sub_2a5cb0, sub_2ac3d0, sub_2ac400, sub_2ac440, sub_2ac450, sub_2ac7d0
   ... +26 more
   ref: Begin inline function
   ref: $this%d
   ref: End inline function
*/
void this_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x341a30ULL || rel >= 0x3424b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003424b0 size=80 callers=0 calls=1
   calls: sub_36dfd0
*/
void sub_3424b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3424b0ULL || rel >= 0x342500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342500 size=896 callers=2 calls=12
   calls: d_error_C_04d_3, d_fatal_error_C9999, mem_Alloc, sub_2ac7d0, sub_3410d0, sub_35fae0, sub_3608f0, sub_362300, sub_362440, sub_362620, sub_365df0, sub_36cd20
   ref: Name "%s"-%04d shouldn't be defined, but is!
   ref: Bad scope in ConvertLocalReferences()
   ref: _%s-%04d
*/
void s_04d_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342500ULL || rel >= 0x342880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342880 size=16 callers=0 calls=0
*/
void sub_342880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342880ULL || rel >= 0x342890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342890 size=208 callers=16 calls=3
   calls: sub_342890, sub_36d550, sub_36df80
*/
void sub_342890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342890ULL || rel >= 0x342960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342960 size=192 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_342960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342960ULL || rel >= 0x342a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342a20 size=96 callers=0 calls=2
   calls: sub_2a45a0, sub_2a4910
*/
void sub_342a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342a20ULL || rel >= 0x342a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342a80 size=272 callers=0 calls=3
   calls: sub_35f9c0, sub_360b30, sub_3627b0
*/
void sub_342a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342a80ULL || rel >= 0x342b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342b90 size=64 callers=0 calls=0
*/
void sub_342b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342b90ULL || rel >= 0x342bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342bd0 size=96 callers=2 calls=1
   calls: sub_342bd0
*/
void sub_342bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342bd0ULL || rel >= 0x342c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00342c30 size=1776 callers=7 calls=12
   calls: sub_2a42a0, sub_2a4360, sub_2acf90, sub_342890, sub_342bd0, sub_342c30, sub_343320, sub_367f50, sub_36d6b0, sub_36d9a0, sub_36dee0, sub_36df80
*/
void sub_342c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x342c30ULL || rel >= 0x343320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343320 size=528 callers=7 calls=4
   calls: mem_Alloc, sub_2acf90, sub_343320, sub_36da30
*/
void sub_343320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343320ULL || rel >= 0x343530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343530 size=144 callers=3 calls=2
   calls: sub_342c30, sub_343530
*/
void sub_343530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343530ULL || rel >= 0x3435c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003435c0 size=576 callers=0 calls=9
   calls: mem_Alloc, sub_2a44b0, sub_2a47d0, sub_2a4f00, sub_343530, sub_3627b0, sub_367f50, sub_36cd20, sub_36d510
*/
void sub_3435c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3435c0ULL || rel >= 0x343800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343800 size=608 callers=0 calls=6
   calls: sub_2a42a0, sub_2a4360, sub_2a45a0, sub_342c30, sub_367f50, sub_36cd20
*/
void sub_343800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343800ULL || rel >= 0x343a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343a60 size=240 callers=0 calls=3
   calls: sub_344ef0, sub_35f8a0, sub_3627b0
*/
void sub_343a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343a60ULL || rel >= 0x343b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343b50 size=16 callers=1 calls=0
*/
void sub_343b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343b50ULL || rel >= 0x343b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00343b60 size=2576 callers=8 calls=20
   calls: mem_Alloc, mem_CreatePool, sub_2a42a0, sub_2a4360, sub_2a44b0, sub_2a45a0, sub_2a47d0, sub_2a4ba0, sub_2a4f00, sub_2ed1a0, sub_345050, sub_345c40
   ... +8 more
*/
void sub_343b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x343b60ULL || rel >= 0x344570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00344570 size=816 callers=0 calls=5
   calls: mem_Alloc, sub_2acf90, sub_343320, sub_36da30, sub_36dfd0
*/
void sub_344570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x344570ULL || rel >= 0x3448a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003448a0 size=16 callers=0 calls=0
*/
void sub_3448a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3448a0ULL || rel >= 0x3448b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003448b0 size=208 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_3448b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3448b0ULL || rel >= 0x344980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00344980 size=1392 callers=4 calls=10
   calls: sub_2a4420, sub_2a4960, sub_2db4f0, sub_342890, sub_3608f0, sub_36d050, sub_36d630, sub_36d9a0, sub_36df80, unnamed_38
   ref: "%s" might be used before being initialized
   ref: "%s.%s" might be used before being initialized
   ref: %s[%d]
*/
void unnamed_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x344980ULL || rel >= 0x344ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00344ef0 size=240 callers=2 calls=2
   calls: sub_342c30, sub_344ef0
*/
void sub_344ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x344ef0ULL || rel >= 0x344fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00344fe0 size=96 callers=0 calls=1
   calls: sub_2a4f00
*/
void sub_344fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x344fe0ULL || rel >= 0x345040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00345040 size=16 callers=0 calls=0
*/
void sub_345040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x345040ULL || rel >= 0x345050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00345050 size=352 callers=2 calls=5
   calls: sub_342890, sub_345050, sub_3451b0, sub_36d050, sub_36df80
*/
void sub_345050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x345050ULL || rel >= 0x3451b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003451b0 size=128 callers=1 calls=5
   calls: sub_342890, sub_36d050, sub_36d630, sub_36da10, sub_36df60
*/
void sub_3451b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3451b0ULL || rel >= 0x345230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00345230 size=64 callers=4 calls=1
   calls: sub_345270
*/
void sub_345230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x345230ULL || rel >= 0x345270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00345270 size=2512 callers=13 calls=5
   calls: sub_345270, sub_3466c0, sub_3469b0, sub_346b20, sub_346bd0
*/
void sub_345270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x345270ULL || rel >= 0x345c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00345c40 size=128 callers=4 calls=1
   calls: sub_345cc0
*/
void sub_345c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x345c40ULL || rel >= 0x345cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00345cc0 size=2560 callers=13 calls=4
   calls: sub_345cc0, sub_3469b0, sub_346b20, sub_346c50
*/
void sub_345cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x345cc0ULL || rel >= 0x3466c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003466c0 size=752 callers=21 calls=2
   calls: sub_3466c0, sub_346b20
*/
void sub_3466c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3466c0ULL || rel >= 0x3469b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003469b0 size=368 callers=20 calls=2
   calls: sub_3469b0, sub_346b20
*/
void sub_3469b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3469b0ULL || rel >= 0x346b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346b20 size=176 callers=22 calls=1
   calls: sub_346b20
*/
void sub_346b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346b20ULL || rel >= 0x346bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346bd0 size=128 callers=4 calls=1
   calls: sub_346bd0
*/
void sub_346bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346bd0ULL || rel >= 0x346c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346c50 size=672 callers=13 calls=2
   calls: sub_346b20, sub_346c50
*/
void sub_346c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346c50ULL || rel >= 0x346ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346ef0 size=16 callers=0 calls=0
*/
void sub_346ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346ef0ULL || rel >= 0x346f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346f00 size=32 callers=0 calls=0
*/
void sub_346f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346f00ULL || rel >= 0x346f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346f20 size=144 callers=4 calls=1
   calls: mem_CreatePool
*/
void sub_346f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346f20ULL || rel >= 0x346fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346fb0 size=32 callers=4 calls=0
*/
void sub_346fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346fb0ULL || rel >= 0x346fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00346fd0 size=176 callers=61 calls=1
   calls: mem_Alloc
*/
void sub_346fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x346fd0ULL || rel >= 0x347080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347080 size=16 callers=3 calls=0
*/
void sub_347080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347080ULL || rel >= 0x347090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347090 size=224 callers=83 calls=0
*/
void sub_347090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347090ULL || rel >= 0x347170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00347170 size=80 callers=5 calls=0
*/
void sub_347170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x347170ULL || rel >= 0x3471c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003471c0 size=48 callers=1 calls=0
*/
void sub_3471c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3471c0ULL || rel >= 0x3471f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003471f0 size=11680 callers=1 calls=101
   calls: AMD_vertex_shader_viewport_index, ARB_shader_atomic_counters_2, EXT_bindless_texture, EXT_gpu_shader5, NV_shader_buffer_load_5, NV_stereo_view_rendering_11, NV_uniform_buffer_object, O_blocks, OpenGL_does_not_allow_C_style_casts, OpenGL_does_not_allow_Cg_style_annotations, OpenGL_does_not_allow_Cg_style_semantics, TEXUNIT
   ... +89 more
   ref: return
   ref: memory exhausted
   ref: discard
   ref: continue
   ref: syntax error
   ref: %s[%d]
*/
void continue_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3471f0ULL || rel >= 0x349f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00349f90 size=368 callers=0 calls=4
   calls: OpenGL_does_not_allow_selection_of_expressions_of_array, sub_35fc50, sub_360d60, sub_366d00
*/
void sub_349f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x349f90ULL || rel >= 0x34a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a100 size=64 callers=2 calls=1
   calls: sub_369ec0
*/
void sub_34a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a100ULL || rel >= 0x34a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a140 size=80 callers=1 calls=0
*/
void sub_34a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a140ULL || rel >= 0x34a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a190 size=192 callers=0 calls=2
   calls: sub_2f6e10, too_many_wildcards_in_pattern_matching
*/
void sub_34a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a190ULL || rel >= 0x34a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a250 size=512 callers=2 calls=4
   calls: d_fatal_error_C9999, sub_2f9210, sub_3188c0, too_many_wildcards_in_pattern_matching
   ref: too many wildcards in pattern matching
*/
void too_many_wildcards_in_pattern_matching(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a250ULL || rel >= 0x34a450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a450 size=160 callers=0 calls=2
   calls: d_fatal_error_C9999, sub_2e9980
   ref: no wildcard %s in pattern matching
*/
void no_wildcard_s_in_pattern_matching(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a450ULL || rel >= 0x34a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a4f0 size=592 callers=1 calls=7
   calls: sub_2ed320, sub_2f6e10, sub_2f7060, sub_2f7410, sub_32e270, sub_32e460, sub_34af00
*/
void sub_34a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a4f0ULL || rel >= 0x34a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a740 size=624 callers=0 calls=8
   calls: atomicCompSwap, sub_2f77f0, sub_2f7880, sub_2f9880, sub_2fc060, sub_3177b0, sub_34b0a0, sub_34b370
*/
void sub_34a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a740ULL || rel >= 0x34a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034a9b0 size=96 callers=0 calls=1
   calls: sub_2f9670
*/
void sub_34a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34a9b0ULL || rel >= 0x34aa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034aa10 size=512 callers=0 calls=10
   calls: atomicCompSwap, sub_2f77f0, sub_2f7880, sub_2f9880, sub_2fa960, sub_2fab10, sub_2fc060, sub_3177b0, sub_317880, sub_3188c0
*/
void sub_34aa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34aa10ULL || rel >= 0x34ac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ac10 size=752 callers=0 calls=15
   calls: sub_2d5da0, sub_2ed440, sub_2f77f0, sub_2f7880, sub_306070, sub_3177b0, sub_317880, sub_3188a0, sub_3188c0, sub_3188f0, sub_31b710, sub_31b820
   ... +3 more
*/
void sub_34ac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ac10ULL || rel >= 0x34af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034af00 size=416 callers=2 calls=4
   calls: sub_2d5da0, sub_2ed440, sub_306070, sub_34c680
*/
void sub_34af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34af00ULL || rel >= 0x34b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b0a0 size=720 callers=7 calls=4
   calls: sub_2e7110, sub_3188c0, sub_34b0a0, sub_34b370
*/
void sub_34b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b0a0ULL || rel >= 0x34b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b370 size=608 callers=7 calls=5
   calls: sub_2e7110, sub_3188c0, sub_31b820, sub_34b0a0, sub_34b370
*/
void sub_34b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b370ULL || rel >= 0x34b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b5d0 size=2240 callers=4 calls=16
   calls: NV_gpu_shader5_2, atomicCompSwap, only_applies_to_pointers, sub_2db630, sub_2f7fb0, sub_2f9880, sub_2f9980, sub_2fab10, sub_2fc060, sub_2fcb90, sub_3177b0, sub_3188c0
   ... +4 more
   ref: pointer stores
   ref: %s requires "#extension GL_%s : enable" before use
   ref: NV_gpu_shader5
*/
void NV_gpu_shader5_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b5d0ULL || rel >= 0x34be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034be90 size=1248 callers=2 calls=16
   calls: atomicCompSwap, load, only_applies_to_pointers, sub_2f7fb0, sub_2f9880, sub_2f9980, sub_2fa960, sub_2fab10, sub_2fade0, sub_2fc060, sub_2fcb90, sub_3177b0
   ... +4 more
   ref: __load_
*/
void load(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34be90ULL || rel >= 0x34c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c370 size=784 callers=5 calls=7
   calls: atomicCompSwap, sub_2f9880, sub_2fc060, sub_3177b0, sub_34b0a0, sub_34b370, sub_34c370
*/
void sub_34c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c370ULL || rel >= 0x34c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c680 size=464 callers=3 calls=10
   calls: sub_3177b0, sub_317880, sub_3188a0, sub_3188c0, sub_3188f0, sub_31b710, sub_31b820, sub_34c680, sub_34c850, sub_34c9f0
*/
void sub_34c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c680ULL || rel >= 0x34c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c850 size=416 callers=4 calls=4
   calls: sub_2ed440, sub_3188c0, sub_31bef0, sub_34c850
*/
void sub_34c850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c850ULL || rel >= 0x34c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c9f0 size=432 callers=2 calls=10
   calls: sub_3177b0, sub_317880, sub_3185f0, sub_3188a0, sub_3188c0, sub_3188f0, sub_31b710, sub_31b820, sub_31bef0, sub_34c9f0
*/
void sub_34c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c9f0ULL || rel >= 0x34cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034cba0 size=10880 callers=1 calls=23
   calls: Too_many_arguments_to_macro_s, Unknown_profile_option_s_ignored, d_fatal_error_C9999, mem_Alloc, option, option_2, s__d, sub_2a4dc0, sub_2b3ae0, sub_2b7e60, sub_2dacc0, sub_2db4f0
   ... +11 more
   ref: fastimul
   ref: GeometryProgram_MaxVerticesOut
   ref: '%s' is not a recognized stdlib function
   ref: %s=-%u
   ref: GeometryProgram_NumStreams
   ref: store_required_end
   ref: profilepragma
   ref: fastprecision
*/
void store_required_start(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34cba0ULL || rel >= 0x34f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f620 size=96 callers=2 calls=1
   calls: Too_many_arguments_to_macro_s
*/
void sub_34f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f620ULL || rel >= 0x34f680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f680 size=208 callers=1 calls=3
   calls: Too_many_arguments_to_macro_s, sub_2b3ae0, sub_2db4f0
   ref: unrecognized #pragma %s %s
   ref: option
*/
void option(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f680ULL || rel >= 0x34f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f750 size=256 callers=1 calls=3
   calls: Too_many_arguments_to_macro_s, sub_2b3ae0, sub_2db4f0
   ref: unrecognized #pragma %s %s
   ref: option
*/
void option_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f750ULL || rel >= 0x34f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f850 size=240 callers=2 calls=0
   ref: unrecognized #pragma %s %s
   ref: incorrect use of pragma %s
*/
void unrecognized_pragma_s_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f850ULL || rel >= 0x34f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f940 size=272 callers=6 calls=1
   calls: sub_34f620
*/
void sub_34f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f940ULL || rel >= 0x34fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fa50 size=1312 callers=11 calls=14
   calls: bad_base_value, bad_samplerkind_value_2, column_major, sub_35f390, sub_35f400, sub_35f430, sub_35f470, sub_35f6d0, sub_35f750, sub_36d110, sub_36d550, sub_36d630
   ... +2 more
   ref: %s%s%s
   ref: %stexture%s
   ref:  /*%p* /
   ref: <<NULL-TYPE>>
   ref: uniform
   ref: %svec%d
   ref: %s%dx%d
   ref: %smat%d
*/
void column_major(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fa50ULL || rel >= 0x34ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ff70 size=4288 callers=17 calls=6
   calls: SAMPLERSTATE, bad_base_value, sub_35f6d0, sub_35f750, sub_36d110, unhandled_expression_type_in_lExprPrecedence
   ref: { %ldl
   ref: <<NULL-Expression>>
   ref: , %luul
   ref: %s %s 
   ref: <!BINOP=%d>
   ref: (%s [%d][%d]) 
   ref: , %ldl
   ref: (%s [%d]) 
*/
void SAMPLERSTATE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ff70ULL || rel >= 0x351030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351030 size=240 callers=2 calls=1
   calls: sub_351030
*/
void sub_351030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351030ULL || rel >= 0x351120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351120 size=1312 callers=2 calls=4
   calls: sub_1cd0, sub_1ff0, sub_351030, varIndex
   ref: UNUSED 
   ref: uniform 
   ref: const 
   ref: patch 
   ref: /* NULL binding * /
   ref:  varIndex
   ref: sampler%s %d
   ref: varying 
*/
void varIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351120ULL || rel >= 0x351640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351640 size=240 callers=1 calls=2
   calls: varIndex, x_02x
*/
void sub_351640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351640ULL || rel >= 0x351730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351730 size=496 callers=2 calls=0
   ref: \x%02x
*/
void x_02x(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351730ULL || rel >= 0x351920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351920 size=80 callers=1 calls=1
   calls: sub_351640
*/
void sub_351920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351920ULL || rel >= 0x351970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351970 size=320 callers=16 calls=1
   calls: d_fatal_error_C9999
   ref: unhandled expression type in lExprPrecedence
*/
void unhandled_expression_type_in_lExprPrecedence(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351970ULL || rel >= 0x351ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351ab0 size=112 callers=3 calls=0
*/
void sub_351ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351ab0ULL || rel >= 0x351b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351b20 size=16 callers=0 calls=0
*/
void sub_351b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351b20ULL || rel >= 0x351b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351b30 size=16 callers=0 calls=0
*/
void sub_351b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351b30ULL || rel >= 0x351b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351b40 size=464 callers=3 calls=8
   calls: sub_210, sub_220, sub_2d6350, sub_2d6b00, sub_35f6d0, sub_3608f0, sub_393280, sub_4c0cb0
   ref: <stdin>
*/
void stdin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351b40ULL || rel >= 0x351d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351d10 size=16 callers=0 calls=0
*/
void sub_351d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351d10ULL || rel >= 0x351d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351d20 size=416 callers=0 calls=3
   calls: sub_220, sub_260, sub_4c0cd0
*/
void sub_351d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351d20ULL || rel >= 0x351ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351ec0 size=80 callers=0 calls=0
*/
void sub_351ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351ec0ULL || rel >= 0x351f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351f10 size=48 callers=0 calls=1
   calls: sub_220
*/
void sub_351f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351f10ULL || rel >= 0x351f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351f40 size=512 callers=7 calls=6
   calls: sub_2d6ce0, sub_302f30, sub_35f430, sub_3608f0, sub_393280, sub_4c0cb0
   ref: _shader%d
*/
void shader_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351f40ULL || rel >= 0x352140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352140 size=336 callers=2 calls=2
   calls: sub_352140, sub_4c0cd0
*/
void sub_352140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352140ULL || rel >= 0x352290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352290 size=64 callers=0 calls=0
*/
void sub_352290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352290ULL || rel >= 0x3522d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003522d0 size=16 callers=0 calls=0
*/
void sub_3522d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3522d0ULL || rel >= 0x3522e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003522e0 size=80 callers=2 calls=0
*/
void sub_3522e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3522e0ULL || rel >= 0x352330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352330 size=3376 callers=2 calls=8
   calls: c_in_string_constant, sub_2dacc0, sub_2f96e0, sub_35f390, sub_35f400, sub_35f430, sub_35f750, sub_3608f0
   ref: error in hex constant
   ref: EOF inside comment
   ref: invalid digit '%c' in octal constant
   ref: integer constant overflow
   ref: EOF/EOL inside preprocessor string
   ref: hex constant overflow
   ref: invalid character literal
*/
void EOL_inside_preprocessor_string(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352330ULL || rel >= 0x353060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353060 size=832 callers=0 calls=2
   calls: sub_2dacc0, sub_2db630
   ref: integer constant overflow
   ref: invalid char '%c' in integer constant suffix
*/
void integer_constant_overflow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353060ULL || rel >= 0x3533a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003533a0 size=1792 callers=0 calls=7
   calls: sub_2a5af0, sub_2dacc0, sub_2db630, sub_35f400, sub_35f430, sub_35f440, sub_35f750
   ref: error in floating point exponent
   ref: floating point constant overflow
   ref: floating point constant must have exponent when no decimal point is present
   ref: OpenGL does not allow type suffix '%s' on constant literals in versions below 120
*/
void floating_point_constant_overflow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3533a0ULL || rel >= 0x353aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353aa0 size=368 callers=2 calls=1
   calls: sub_2db4f0
   ref: Unknown escape "\%c" in string constant
*/
void c_in_string_constant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353aa0ULL || rel >= 0x353c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353c10 size=208 callers=1 calls=5
   calls: sub_35f390, sub_35f400, sub_35f430, sub_35f750, sub_3608f0
*/
void sub_353c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353c10ULL || rel >= 0x353ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353ce0 size=1200 callers=1 calls=14
   calls: Too_many_arguments_to_macro_s, include, mem_Alloc, sub_2b3ae0, sub_2c7690, sub_2f96e0, sub_302f30, sub_35f390, sub_35f400, sub_35f430, sub_35f440, sub_35f750
   ... +2 more
*/
void sub_353ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353ce0ULL || rel >= 0x354190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354190 size=256 callers=2 calls=1
   calls: sub_35f750
*/
void sub_354190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354190ULL || rel >= 0x354290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354290 size=80 callers=0 calls=1
   calls: sub_35f750
*/
void sub_354290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354290ULL || rel >= 0x3542e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003542e0 size=416 callers=1 calls=4
   calls: sub_2c7690, sub_354190, sub_35f6d0, sub_35f750
   ref: #line %d
*/
void line_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3542e0ULL || rel >= 0x354480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354480 size=160 callers=0 calls=3
   calls: sub_2f77f0, sub_2f7880, sub_2f7cf0
*/
void sub_354480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354480ULL || rel >= 0x354520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354520 size=176 callers=21 calls=0
*/
void sub_354520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354520ULL || rel >= 0x3545d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003545d0 size=96 callers=1 calls=0
*/
void sub_3545d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3545d0ULL || rel >= 0x354630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354630 size=2144 callers=18 calls=1
   calls: sub_3608f0
   ref: NOPERSPECTIVE
   ref: %0.*s.%s
   ref: CENTROID
*/
void NOPERSPECTIVE_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354630ULL || rel >= 0x354e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354e90 size=512 callers=5 calls=2
   calls: sub_2e9840, sub_3608f0
*/
void sub_354e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354e90ULL || rel >= 0x355090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355090 size=48 callers=2 calls=0
*/
void sub_355090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355090ULL || rel >= 0x3550c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003550c0 size=48 callers=7 calls=1
   calls: d_fatal_error_C9999
   ref: unexpected samplerkind in SamplerKind2SamplerTypes
*/
void unexpected_samplerkind_in_SamplerKind2SamplerTypes(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3550c0ULL || rel >= 0x3550f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003550f0 size=256 callers=3 calls=0
   ref: %.*s%s%s%s
*/
void s_s_s_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3550f0ULL || rel >= 0x3551f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003551f0 size=272 callers=1 calls=0
   ref: %.*s[%d]%s
   ref: %.*s%d%s
*/
void s_d_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3551f0ULL || rel >= 0x355300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355300 size=368 callers=3 calls=0
*/
void sub_355300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355300ULL || rel >= 0x355470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355470 size=32 callers=2 calls=0
*/
void sub_355470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355470ULL || rel >= 0x355490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355490 size=288 callers=2 calls=0
   ref: SBO_BUFFER[-1]
   ref: SBO_BUFFER[%d]
   ref: BUFFER[%d]
   ref: BUFFER[-1]
   ref: BUFFER[%d][%d]
   ref: BUFFER[-1][0]
*/
void BUFFER_1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355490ULL || rel >= 0x3555b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003555b0 size=688 callers=1 calls=9
   calls: atomicCompSwap, s__d, sub_2f8290, sub_2fc060, sub_302f30, sub_307ee0, sub_3177b0, sub_3188a0, sub_3608f0
   ref: __yuv_img_%d_%d
*/
void yuv_img__d__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3555b0ULL || rel >= 0x355860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355860 size=9088 callers=5 calls=39
   calls: BUFFER_1, NOPERSPECTIVE_3, VERTEXOUT_2, VERTEXOUT_6, VERTEX_2, s_d_s_2, s_s_s_s, sub_1ff0, sub_21b0, sub_2a5050, sub_2bb020, sub_2dacc0
   ... +27 more
   ref: input binding for unsized array is not an array
   ref: SBO_BUFFER[-1]
   ref: ATTR%d
   ref: uniform
   ref: VERTEXOUT
   ref: SBO_BUFFER[%d]
   ref: %d.%d[%d]
   ref: BUFFER[%d]
*/
void VERTEXOUT_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355860ULL || rel >= 0x357be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357be0 size=416 callers=2 calls=3
   calls: sub_317d30, sub_3188c0, sub_31c250
*/
void sub_357be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357be0ULL || rel >= 0x357d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357d80 size=304 callers=2 calls=1
   calls: sub_357d80
*/
void sub_357d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357d80ULL || rel >= 0x357eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357eb0 size=96 callers=2 calls=1
   calls: sub_357eb0
*/
void sub_357eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357eb0ULL || rel >= 0x357f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357f10 size=224 callers=1 calls=2
   calls: VERTEXOUT_6, sub_2fec10
*/
void sub_357f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357f10ULL || rel >= 0x357ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357ff0 size=400 callers=1 calls=5
   calls: sub_2a42a0, sub_2a4420, sub_2db630, sub_3188c0, sub_31b820
   ref: layout(%s = %d) exceeds maximum value
   ref: xfb_offset
   ref: xfb_buffer
   ref: (%s = %d, %s = %d) already used
*/
void xfb_offset_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357ff0ULL || rel >= 0x358180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358180 size=2448 callers=11 calls=20
   calls: NOPERSPECTIVE_3, VERTEXOUT_6, samplepositions, sub_2dacc0, sub_2db630, sub_2eac60, sub_2ed320, sub_2ed440, sub_303070, sub_306070, sub_317880, sub_3188a0
   ... +8 more
   ref: invalid value '%d' for layout qualifier '%s'
   ref: input binding for unsized array is not an array
   ref: uniform
   ref: input binding for interface object is not a struct type
   ref: xfb_stride
   ref: no buffers available for bindable %s %s
   ref: input binding type "%s" does not implement interface "%s"
   ref: %s is not accessible in this profile
*/
void xfb_stride_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358180ULL || rel >= 0x358b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358b10 size=832 callers=2 calls=14
   calls: OpenGL_does_not_allow_Cg_style_semantics, atomicCompSwap, sub_2f77f0, sub_2f7880, sub_2f7fb0, sub_2f8290, sub_302f30, sub_307ee0, sub_3177b0, sub_317880, sub_3608f0, sub_3674a0
   ... +2 more
   ref: SAMPLEID
   ref: _samplepositions
   ref: _sampleid
   ref: state.multisample.positions[]
*/
void samplepositions(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358b10ULL || rel >= 0x358e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358e50 size=608 callers=2 calls=3
   calls: samplepositions, sub_306070, sub_358e50
*/
void sub_358e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358e50ULL || rel >= 0x3590b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003590b0 size=608 callers=2 calls=2
   calls: sub_2ed440, sub_2ed9f0
*/
void sub_3590b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3590b0ULL || rel >= 0x359310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359310 size=448 callers=2 calls=8
   calls: sub_2bb020, sub_2f77f0, sub_2f7880, sub_2f7cf0, sub_306070, sub_3188a0, sub_35dc50, use_of_sequence_to_initialize_a_const_variable
*/
void sub_359310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359310ULL || rel >= 0x3594d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003594d0 size=224 callers=0 calls=0
*/
void sub_3594d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3594d0ULL || rel >= 0x3595b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003595b0 size=48 callers=5 calls=0
*/
void sub_3595b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3595b0ULL || rel >= 0x3595e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003595e0 size=48 callers=19 calls=0
*/
void sub_3595e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3595e0ULL || rel >= 0x359610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359610 size=48 callers=24 calls=0
*/
void sub_359610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359610ULL || rel >= 0x359640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359640 size=48 callers=12 calls=0
*/
void sub_359640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359640ULL || rel >= 0x359670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359670 size=48 callers=10 calls=0
*/
void sub_359670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359670ULL || rel >= 0x3596a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003596a0 size=96 callers=11 calls=0
*/
void sub_3596a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3596a0ULL || rel >= 0x359700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359700 size=48 callers=36 calls=0
*/
void sub_359700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359700ULL || rel >= 0x359730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359730 size=16 callers=1 calls=0
*/
void sub_359730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359730ULL || rel >= 0x359740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359740 size=16 callers=1 calls=0
*/
void sub_359740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359740ULL || rel >= 0x359750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359750 size=144 callers=5 calls=0
*/
void sub_359750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359750ULL || rel >= 0x3597e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003597e0 size=272 callers=1 calls=0
   ref: geometry
   ref: INVALID
   ref: compute
   ref: fragment
   ref: tessellation control
   ref: tessellation evaluation
   ref: vertex
*/
void geometry_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3597e0ULL || rel >= 0x3598f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003598f0 size=304 callers=4 calls=1
   calls: sub_306070
*/
void sub_3598f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3598f0ULL || rel >= 0x359a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359a20 size=1840 callers=7 calls=13
   calls: d_fatal_error_C9999, sub_2e7110, sub_2eacc0, sub_2ed320, sub_2ed440, sub_3188c0, sub_31b710, sub_31b820, sub_3608f0, sub_367e40, sub_367e90, unexpected_samplerkind_in_SamplerKind2SamplerTypes
   ... +1 more
   ref: unexpected type kind %x in AddBindingTypes
*/
void unexpected_type_kind_x_in_AddBindingTypes(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359a20ULL || rel >= 0x35a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a150 size=2960 callers=1 calls=17
   calls: sub_2a4ba0, sub_2b8760, sub_2dacc0, sub_2db630, sub_2ed1a0, sub_2ed320, sub_2edb10, sub_2f72e0, sub_2f7410, sub_306070, sub_317d30, sub_3188a0
   ... +5 more
   ref: parameters with uniform domain cannot be out parameters "%s"
   ref: program "%s" must return a struct or have a varying output semantic
   ref: illegal parameter to main "%s"
   ref: program "%s" returns void but has an output semantic
   ref: OpenGL does not allow greater than %d atomic uint uniforms
   ref: OpenGL does not allow greater than %d image uniforms
*/
void illegal_parameter_to_main_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a150ULL || rel >= 0x35ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ace0 size=496 callers=0 calls=6
   calls: sub_2b8760, sub_2db630, sub_2ed320, sub_302f30, sub_3598f0, xfb_stride_2
   ref: Use of '%s' conflicts with '%s'
*/
void Use_of_s_conflicts_with_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ace0ULL || rel >= 0x35aed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035aed0 size=144 callers=0 calls=0
*/
void sub_35aed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35aed0ULL || rel >= 0x35af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035af60 size=96 callers=4 calls=1
   calls: sub_2220
*/
void sub_35af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35af60ULL || rel >= 0x35afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035afc0 size=320 callers=3 calls=1
   calls: sub_35afc0
*/
void sub_35afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35afc0ULL || rel >= 0x35b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b100 size=256 callers=1 calls=1
   calls: sub_2220
*/
void sub_35b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b100ULL || rel >= 0x35b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b200 size=48 callers=0 calls=0
*/
void sub_35b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b200ULL || rel >= 0x35b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b230 size=64 callers=0 calls=0
*/
void sub_35b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b230ULL || rel >= 0x35b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b270 size=1488 callers=1 calls=23
   calls: location_8, multiple_inheritance_not_supported, sub_2220, sub_2ab8f0, sub_2ac3d0, sub_2daad0, sub_340f00, sub_35afc0, sub_35b100, sub_35b910, sub_35bb00, sub_35bd50
   ... +11 more
*/
void sub_35b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b270ULL || rel >= 0x35b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b840 size=208 callers=0 calls=0
*/
void sub_35b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b840ULL || rel >= 0x35b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b910 size=496 callers=4 calls=7
   calls: sub_2ac7d0, sub_35b910, sub_35e710, sub_35e7f0, sub_35fc50, sub_365df0, sub_366d00
*/
void sub_35b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b910ULL || rel >= 0x35bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bb00 size=224 callers=2 calls=1
   calls: sub_367940
*/
void sub_35bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bb00ULL || rel >= 0x35bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bbe0 size=368 callers=0 calls=8
   calls: invalid_discard_statement_encountered_in_DupStmt, sub_2ac3d0, sub_2ac400, sub_2ae0c0, sub_35b910, sub_35ca20, sub_35fae0, sub_366eb0
*/
void sub_35bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bbe0ULL || rel >= 0x35bd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bd50 size=128 callers=4 calls=1
   calls: sub_35bd50
*/
void sub_35bd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bd50ULL || rel >= 0x35bdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bdd0 size=592 callers=1 calls=5
   calls: sub_2220, sub_35eba0, sub_369ec0, sub_36a100, sub_36a750
*/
void sub_35bdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bdd0ULL || rel >= 0x35c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c020 size=16 callers=0 calls=0
*/
void sub_35c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c020ULL || rel >= 0x35c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c030 size=112 callers=0 calls=1
   calls: sub_35c630
*/
void sub_35c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c030ULL || rel >= 0x35c0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c0a0 size=128 callers=0 calls=1
   calls: sub_35ec50
*/
void sub_35c0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c0a0ULL || rel >= 0x35c120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c120 size=352 callers=0 calls=1
   calls: sub_35efe0
*/
void sub_35c120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c120ULL || rel >= 0x35c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c280 size=32 callers=1 calls=0
*/
void sub_35c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c280ULL || rel >= 0x35c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c2a0 size=128 callers=0 calls=2
   calls: sub_337300, sub_35ca20
*/
void sub_35c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c2a0ULL || rel >= 0x35c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c320 size=688 callers=2 calls=7
   calls: sub_2220, sub_2ed320, sub_2f6e10, sub_2f7060, sub_2f7410, sub_35c630, sub_35eba0
*/
void sub_35c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c320ULL || rel >= 0x35c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c5d0 size=96 callers=0 calls=0
*/
void sub_35c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c5d0ULL || rel >= 0x35c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c630 size=96 callers=3 calls=1
   calls: sub_35c630
*/
void sub_35c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c630ULL || rel >= 0x35c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c690 size=240 callers=0 calls=2
   calls: sub_2ed320, sub_35f080
*/
void sub_35c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c690ULL || rel >= 0x35c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c780 size=32 callers=1 calls=0
*/
void sub_35c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c780ULL || rel >= 0x35c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c7a0 size=128 callers=0 calls=1
   calls: sub_35c820
*/
void sub_35c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c7a0ULL || rel >= 0x35c820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c820 size=512 callers=5 calls=5
   calls: sub_2ed320, sub_2f9880, sub_3188c0, sub_35c820, sub_367ab0
*/
void sub_35c820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c820ULL || rel >= 0x35ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ca20 size=432 callers=17 calls=4
   calls: sub_2acf90, sub_337300, sub_35ca20, sub_367ab0
*/
void sub_35ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ca20ULL || rel >= 0x35cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035cbd0 size=112 callers=2 calls=1
   calls: sub_35cbd0
*/
void sub_35cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35cbd0ULL || rel >= 0x35cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035cc40 size=320 callers=2 calls=2
   calls: sub_35cc40, sub_367ab0
*/
void sub_35cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35cc40ULL || rel >= 0x35cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035cd80 size=64 callers=1 calls=1
   calls: sub_35cc40
*/
void sub_35cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35cd80ULL || rel >= 0x35cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035cdc0 size=304 callers=2 calls=2
   calls: sub_35cdc0, sub_367ab0
*/
void sub_35cdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35cdc0ULL || rel >= 0x35cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035cef0 size=400 callers=1 calls=3
   calls: sub_2220, sub_35cdc0, sub_369ec0
*/
void sub_35cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35cef0ULL || rel >= 0x35d080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d080 size=160 callers=0 calls=3
   calls: sub_35ca20, sub_3627b0, sub_367ab0
*/
void sub_35d080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d080ULL || rel >= 0x35d120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d120 size=48 callers=0 calls=0
*/
void sub_35d120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d120ULL || rel >= 0x35d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d150 size=112 callers=0 calls=2
   calls: sub_337300, sub_35ca20
*/
void sub_35d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d150ULL || rel >= 0x35d1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d1c0 size=256 callers=0 calls=1
   calls: sub_367ab0
*/
void sub_35d1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d1c0ULL || rel >= 0x35d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d2c0 size=176 callers=3 calls=2
   calls: sub_35d2c0, sub_367ab0
*/
void sub_35d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d2c0ULL || rel >= 0x35d370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d370 size=64 callers=1 calls=1
   calls: sub_35d2c0
*/
void sub_35d370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d370ULL || rel >= 0x35d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d3b0 size=16 callers=0 calls=0
*/
void sub_35d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d3b0ULL || rel >= 0x35d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d3c0 size=192 callers=1 calls=2
   calls: sub_2220, sub_2ed1a0
*/
void sub_35d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d3c0ULL || rel >= 0x35d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d480 size=32 callers=0 calls=0
*/
void sub_35d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d480ULL || rel >= 0x35d4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d4a0 size=64 callers=0 calls=0
*/
void sub_35d4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d4a0ULL || rel >= 0x35d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d4e0 size=176 callers=0 calls=1
   calls: sub_2ed320
*/
void sub_35d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d4e0ULL || rel >= 0x35d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d590 size=912 callers=3 calls=7
   calls: sub_2db630, sub_306070, sub_3186b0, sub_3188a0, xfb_buffer, xfb_buffer_3, xfb_offset_2
   ref: unsized arrays
   ref: layout qualifier '%s', incompatible with '%s'
   ref: xfb_buffer
*/
void xfb_buffer_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d590ULL || rel >= 0x35d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d920 size=816 callers=1 calls=4
   calls: sub_2ed440, sub_306070, sub_31b820, sub_35d920
*/
void sub_35d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d920ULL || rel >= 0x35dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035dc50 size=1024 callers=2 calls=8
   calls: sub_1ff0, sub_21b0, sub_2f75e0, sub_2f7cf0, sub_2f9210, sub_3188c0, sub_35e130, sub_367ab0
*/
void sub_35dc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35dc50ULL || rel >= 0x35e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e050 size=224 callers=0 calls=3
   calls: sub_2dacc0, sub_2db4f0, sub_3188c0
   ref: non constant expression in initialization
   ref: Comma operator in constant initializer -- perhaps you want {} instead of ()
*/
void non_constant_expression_in_initialization(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e050ULL || rel >= 0x35e130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e130 size=544 callers=2 calls=4
   calls: sub_21b0, sub_3188c0, sub_35e130, sub_367ab0
*/
void sub_35e130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e130ULL || rel >= 0x35e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e350 size=80 callers=0 calls=1
   calls: sub_35dc50
*/
void sub_35e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e350ULL || rel >= 0x35e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e3a0 size=656 callers=2 calls=4
   calls: location_8, sub_2dacc0, sub_2ed1a0, sub_2ed320
   ref: invalid value '%d' for layout qualifier '%s'
   ref: (%s = %d) already used
   ref: location
*/
void location_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e3a0ULL || rel >= 0x35e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e630 size=176 callers=2 calls=1
   calls: sub_35e630
*/
void sub_35e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e630ULL || rel >= 0x35e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e6e0 size=48 callers=0 calls=0
*/
void sub_35e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e6e0ULL || rel >= 0x35e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e710 size=224 callers=2 calls=6
   calls: sub_2fdaa0, sub_303070, sub_35ca20, sub_36d290, sub_36d9d0, sub_36e1d0
*/
void sub_35e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e710ULL || rel >= 0x35e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e7f0 size=944 callers=1 calls=19
   calls: NOPERSPECTIVE_3, sub_1cd0, sub_1e20, sub_1e30, sub_2ac400, sub_2cb650, sub_35fae0, sub_35fc50, sub_3608f0, sub_365df0, sub_366840, sub_366eb0
   ... +7 more
*/
void sub_35e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e7f0ULL || rel >= 0x35eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035eba0 size=176 callers=3 calls=1
   calls: sub_35eba0
*/
void sub_35eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35eba0ULL || rel >= 0x35ec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ec50 size=912 callers=4 calls=5
   calls: sub_2acf90, sub_2ed320, sub_337300, sub_35ec50, sub_367ab0
*/
void sub_35ec50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ec50ULL || rel >= 0x35efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035efe0 size=160 callers=3 calls=1
   calls: sub_35efe0
*/
void sub_35efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35efe0ULL || rel >= 0x35f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f080 size=784 callers=6 calls=4
   calls: sub_2fa5c0, sub_3188c0, sub_35f080, sub_367ab0
*/
void sub_35f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f080ULL || rel >= 0x35f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f390 size=112 callers=103 calls=2
   calls: sub_4c0cb0, sub_4c0cd0
*/
void sub_35f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f390ULL || rel >= 0x35f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f400 size=48 callers=82 calls=1
   calls: sub_4c0cd0
*/
void sub_35f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f400ULL || rel >= 0x35f430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f430 size=16 callers=114 calls=0
*/
void sub_35f430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f430ULL || rel >= 0x35f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f440 size=16 callers=9 calls=0
*/
void sub_35f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f440ULL || rel >= 0x35f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f450 size=32 callers=18 calls=0
*/
void sub_35f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f450ULL || rel >= 0x35f470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f470 size=240 callers=27 calls=1
   calls: sub_4c0cc0
*/
void sub_35f470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f470ULL || rel >= 0x35f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f560 size=368 callers=13 calls=1
   calls: sub_4c0cc0
*/
void sub_35f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f560ULL || rel >= 0x35f6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f6d0 size=128 callers=410 calls=1
   calls: sub_35f560
*/
void sub_35f6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f6d0ULL || rel >= 0x35f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f750 size=192 callers=48 calls=1
   calls: sub_4c0cc0
*/
void sub_35f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f750ULL || rel >= 0x35f810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f810 size=64 callers=9 calls=0
*/
void sub_35f810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f810ULL || rel >= 0x35f850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f850 size=48 callers=8 calls=0
*/
void sub_35f850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f850ULL || rel >= 0x35f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f880 size=32 callers=2 calls=0
*/
void sub_35f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f880ULL || rel >= 0x35f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f8a0 size=288 callers=4 calls=2
   calls: sub_35f8a0, sub_36d510
*/
void sub_35f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f8a0ULL || rel >= 0x35f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f9c0 size=288 callers=6 calls=2
   calls: sub_35f9c0, sub_36d510
*/
void sub_35f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f9c0ULL || rel >= 0x35fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fae0 size=160 callers=64 calls=1
   calls: mem_Alloc
*/
void sub_35fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fae0ULL || rel >= 0x35fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fb80 size=208 callers=2 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_35fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fb80ULL || rel >= 0x35fc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fc50 size=144 callers=22 calls=2
   calls: mem_Alloc, sub_36e230
*/
void sub_35fc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fc50ULL || rel >= 0x35fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

