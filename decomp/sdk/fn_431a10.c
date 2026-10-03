/* sdk functions 00431a10..00453018 (46 of 53). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00431a10 size=16 callers=0 calls=0
*/
void sub_431a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431a10ULL || rel >= 0x431a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431a20 size=16 callers=0 calls=0
*/
void sub_431a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431a20ULL || rel >= 0x431a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431a30 size=1104 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_417bd0
*/
void sub_431a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431a30ULL || rel >= 0x431e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431e80 size=1104 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_417bd0
*/
void sub_431e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431e80ULL || rel >= 0x4322d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004322d0 size=1104 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_417bd0
*/
void sub_4322d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4322d0ULL || rel >= 0x432720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432720 size=816 callers=4 calls=1
   calls: sub_40e550
*/
void sub_432720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432720ULL || rel >= 0x432a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432a50 size=176 callers=1 calls=0
*/
void sub_432a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432a50ULL || rel >= 0x432b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432b00 size=144 callers=1 calls=0
*/
void sub_432b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432b00ULL || rel >= 0x432b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432b90 size=512 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_41fcd0
*/
void sub_432b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432b90ULL || rel >= 0x432d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432d90 size=192 callers=1 calls=0
*/
void sub_432d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432d90ULL || rel >= 0x432e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432e50 size=240 callers=1 calls=0
*/
void sub_432e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432e50ULL || rel >= 0x432f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432f40 size=624 callers=1 calls=0
*/
void sub_432f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432f40ULL || rel >= 0x4331b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004331b0 size=1888 callers=3 calls=1
   calls: sub_433910
*/
void sub_4331b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4331b0ULL || rel >= 0x433910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433910 size=384 callers=2 calls=0
*/
void sub_433910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433910ULL || rel >= 0x433a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433a90 size=144 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_433a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433a90ULL || rel >= 0x433b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433b20 size=144 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_433b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433b20ULL || rel >= 0x433bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433bb0 size=160 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_433bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433bb0ULL || rel >= 0x433c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433c50 size=176 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_433c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433c50ULL || rel >= 0x433d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433d00 size=160 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_433d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433d00ULL || rel >= 0x433da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433da0 size=224 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_433da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433da0ULL || rel >= 0x433e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433e80 size=160 callers=1 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_433e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433e80ULL || rel >= 0x433f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433f20 size=80 callers=0 calls=0
*/
void sub_433f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433f20ULL || rel >= 0x433f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433f70 size=432 callers=0 calls=7
   calls: sub_42c730, sub_43ccb0, sub_43ccc0, sub_43cf30, sub_43db60, sub_43dc90, sub_43ddb0
*/
void sub_433f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433f70ULL || rel >= 0x434120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434120 size=528 callers=1 calls=0
*/
void sub_434120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434120ULL || rel >= 0x434330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434330 size=224 callers=0 calls=2
   calls: sub_43ccc0, sub_43ddb0
*/
void sub_434330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434330ULL || rel >= 0x434410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434410 size=224 callers=0 calls=3
   calls: sub_43ccb0, sub_43ccc0, sub_43cf30
*/
void sub_434410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434410ULL || rel >= 0x4344f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004344f0 size=256 callers=0 calls=1
   calls: sub_43ccc0
*/
void sub_4344f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4344f0ULL || rel >= 0x4345f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004345f0 size=304 callers=0 calls=0
*/
void sub_4345f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4345f0ULL || rel >= 0x434720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434720 size=272 callers=0 calls=0
*/
void sub_434720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434720ULL || rel >= 0x434830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434830 size=128 callers=0 calls=2
   calls: sub_43ccb0, sub_43cf30
*/
void sub_434830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434830ULL || rel >= 0x4348b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004348b0 size=224 callers=0 calls=3
   calls: sub_43ccc0, sub_43cf40, sub_43d580
*/
void sub_4348b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4348b0ULL || rel >= 0x434990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434990 size=496 callers=0 calls=5
   calls: sub_43ccb0, sub_43ccc0, sub_43cff0, sub_43d4b0, sub_43d580
*/
void sub_434990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434990ULL || rel >= 0x434b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434b80 size=688 callers=0 calls=4
   calls: sub_43ccb0, sub_43ccc0, sub_43d0c0, sub_43d580
*/
void sub_434b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434b80ULL || rel >= 0x434e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434e30 size=32 callers=0 calls=0
*/
void sub_434e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434e30ULL || rel >= 0x434e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434e50 size=608 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_6
*/
void sub_434e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434e50ULL || rel >= 0x4350b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004350b0 size=192 callers=0 calls=1
   calls: sub_43d2d0
*/
void sub_4350b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4350b0ULL || rel >= 0x435170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435170 size=208 callers=0 calls=1
   calls: sub_43d2d0
*/
void sub_435170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435170ULL || rel >= 0x435240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435240 size=304 callers=0 calls=0
*/
void sub_435240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435240ULL || rel >= 0x435370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435370 size=320 callers=0 calls=0
*/
void sub_435370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435370ULL || rel >= 0x4354b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004354b0 size=336 callers=0 calls=0
*/
void sub_4354b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4354b0ULL || rel >= 0x435600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435600 size=352 callers=0 calls=0
*/
void sub_435600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435600ULL || rel >= 0x435760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435760 size=352 callers=0 calls=0
*/
void sub_435760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435760ULL || rel >= 0x4358c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004358c0 size=368 callers=0 calls=0
*/
void sub_4358c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4358c0ULL || rel >= 0x435a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435a30 size=304 callers=0 calls=0
*/
void sub_435a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435a30ULL || rel >= 0x435b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435b60 size=336 callers=0 calls=0
*/
void sub_435b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435b60ULL || rel >= 0x435cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435cb0 size=224 callers=0 calls=0
*/
void sub_435cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435cb0ULL || rel >= 0x435d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435d90 size=192 callers=0 calls=0
*/
void sub_435d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435d90ULL || rel >= 0x435e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435e50 size=304 callers=0 calls=1
   calls: sub_43ccc0
*/
void sub_435e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435e50ULL || rel >= 0x435f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435f80 size=208 callers=0 calls=1
   calls: sub_43ccb0
*/
void sub_435f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435f80ULL || rel >= 0x436050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436050 size=656 callers=0 calls=3
   calls: sub_410db0, sub_410fd0, sub_43d780
*/
void sub_436050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436050ULL || rel >= 0x4362e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004362e0 size=656 callers=0 calls=3
   calls: sub_410db0, sub_410fd0, sub_43d780
*/
void sub_4362e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4362e0ULL || rel >= 0x436570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436570 size=32 callers=0 calls=0
*/
void sub_436570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436570ULL || rel >= 0x436590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436590 size=64 callers=0 calls=1
   calls: sub_40d560
*/
void sub_436590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436590ULL || rel >= 0x4365d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004365d0 size=64 callers=0 calls=0
   ref: NVN_THROUGH_OPENGL
*/
void NVN_THROUGH_OPENGL(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4365d0ULL || rel >= 0x436610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436610 size=16 callers=0 calls=0
*/
void sub_436610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436610ULL || rel >= 0x436620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436620 size=16 callers=0 calls=0
*/
void sub_436620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436620ULL || rel >= 0x436630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436630 size=16 callers=0 calls=0
*/
void sub_436630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436630ULL || rel >= 0x436640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436640 size=32 callers=0 calls=0
*/
void sub_436640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436640ULL || rel >= 0x436660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436660 size=80 callers=0 calls=0
*/
void sub_436660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436660ULL || rel >= 0x4366b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004366b0 size=80 callers=0 calls=0
*/
void sub_4366b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4366b0ULL || rel >= 0x436700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436700 size=16 callers=0 calls=0
*/
void sub_436700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436700ULL || rel >= 0x436710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436710 size=64 callers=0 calls=1
   calls: sub_43d670
*/
void sub_436710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436710ULL || rel >= 0x436750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436750 size=16 callers=0 calls=0
*/
void sub_436750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436750ULL || rel >= 0x436760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436760 size=16 callers=0 calls=0
*/
void sub_436760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436760ULL || rel >= 0x436770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436770 size=16 callers=0 calls=0
*/
void sub_436770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436770ULL || rel >= 0x436780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436780 size=16 callers=0 calls=0
*/
void sub_436780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436780ULL || rel >= 0x436790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436790 size=16 callers=0 calls=0
*/
void sub_436790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436790ULL || rel >= 0x4367a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004367a0 size=16 callers=0 calls=0
*/
void sub_4367a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4367a0ULL || rel >= 0x4367b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004367b0 size=48 callers=0 calls=0
*/
void sub_4367b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4367b0ULL || rel >= 0x4367e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004367e0 size=16 callers=0 calls=0
*/
void sub_4367e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4367e0ULL || rel >= 0x4367f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004367f0 size=176 callers=0 calls=0
*/
void sub_4367f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4367f0ULL || rel >= 0x4368a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004368a0 size=224 callers=0 calls=0
*/
void sub_4368a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4368a0ULL || rel >= 0x436980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436980 size=16 callers=0 calls=0
*/
void sub_436980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436980ULL || rel >= 0x436990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436990 size=128 callers=0 calls=0
*/
void sub_436990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436990ULL || rel >= 0x436a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436a10 size=16 callers=0 calls=0
*/
void sub_436a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436a10ULL || rel >= 0x436a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436a20 size=32 callers=0 calls=0
*/
void sub_436a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436a20ULL || rel >= 0x436a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436a40 size=48 callers=0 calls=0
*/
void sub_436a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436a40ULL || rel >= 0x436a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436a70 size=352 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_436a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436a70ULL || rel >= 0x436bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436bd0 size=368 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_436bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436bd0ULL || rel >= 0x436d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436d40 size=16 callers=0 calls=0
*/
void sub_436d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436d40ULL || rel >= 0x436d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436d50 size=32 callers=0 calls=0
*/
void sub_436d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436d50ULL || rel >= 0x436d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00436d70 size=1776 callers=0 calls=1
   calls: sub_429b40
*/
void sub_436d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x436d70ULL || rel >= 0x437460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437460 size=16 callers=0 calls=0
*/
void sub_437460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437460ULL || rel >= 0x437470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437470 size=16 callers=0 calls=0
*/
void sub_437470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437470ULL || rel >= 0x437480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437480 size=32 callers=0 calls=0
*/
void sub_437480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437480ULL || rel >= 0x4374a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004374a0 size=32 callers=0 calls=1
   calls: sub_43abb0
*/
void sub_4374a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4374a0ULL || rel >= 0x4374c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004374c0 size=16 callers=0 calls=0
*/
void sub_4374c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4374c0ULL || rel >= 0x4374d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004374d0 size=80 callers=0 calls=1
   calls: sub_410b50
*/
void sub_4374d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4374d0ULL || rel >= 0x437520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437520 size=16 callers=0 calls=0
*/
void sub_437520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437520ULL || rel >= 0x437530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437530 size=32 callers=0 calls=0
*/
void sub_437530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437530ULL || rel >= 0x437550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437550 size=112 callers=0 calls=0
*/
void sub_437550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437550ULL || rel >= 0x4375c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004375c0 size=96 callers=0 calls=0
*/
void sub_4375c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4375c0ULL || rel >= 0x437620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437620 size=160 callers=0 calls=0
*/
void sub_437620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437620ULL || rel >= 0x4376c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004376c0 size=64 callers=0 calls=0
*/
void sub_4376c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4376c0ULL || rel >= 0x437700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437700 size=96 callers=0 calls=0
*/
void sub_437700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437700ULL || rel >= 0x437760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437760 size=560 callers=0 calls=0
*/
void sub_437760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437760ULL || rel >= 0x437990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437990 size=16 callers=0 calls=0
*/
void sub_437990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437990ULL || rel >= 0x4379a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004379a0 size=16 callers=0 calls=0
*/
void sub_4379a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4379a0ULL || rel >= 0x4379b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004379b0 size=16 callers=0 calls=0
*/
void sub_4379b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4379b0ULL || rel >= 0x4379c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004379c0 size=48 callers=0 calls=0
*/
void sub_4379c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4379c0ULL || rel >= 0x4379f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004379f0 size=48 callers=0 calls=0
*/
void sub_4379f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4379f0ULL || rel >= 0x437a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437a20 size=48 callers=0 calls=0
*/
void sub_437a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437a20ULL || rel >= 0x437a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437a50 size=32 callers=0 calls=0
*/
void sub_437a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437a50ULL || rel >= 0x437a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437a70 size=80 callers=0 calls=0
*/
void sub_437a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437a70ULL || rel >= 0x437ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437ac0 size=16 callers=0 calls=0
*/
void sub_437ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437ac0ULL || rel >= 0x437ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437ad0 size=16 callers=0 calls=0
*/
void sub_437ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437ad0ULL || rel >= 0x437ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437ae0 size=32 callers=0 calls=0
*/
void sub_437ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437ae0ULL || rel >= 0x437b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437b00 size=464 callers=0 calls=11
   calls: sub_416dd0, sub_416de0, sub_416e20, sub_416e30, sub_416e40, sub_416e50, sub_416e60, sub_416ea0, sub_416eb0, sub_416ec0, sub_417690
*/
void sub_437b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437b00ULL || rel >= 0x437cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437cd0 size=368 callers=0 calls=0
*/
void sub_437cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437cd0ULL || rel >= 0x437e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437e40 size=16 callers=0 calls=0
*/
void sub_437e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437e40ULL || rel >= 0x437e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437e50 size=176 callers=0 calls=0
*/
void sub_437e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437e50ULL || rel >= 0x437f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00437f00 size=880 callers=0 calls=9
   calls: sub_400ae0, sub_4173b0, sub_4173c0, sub_4173e0, sub_417400, sub_417bd0, sub_43ccb0, sub_43ccc0, sub_442170
*/
void sub_437f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x437f00ULL || rel >= 0x438270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438270 size=160 callers=0 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_438270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438270ULL || rel >= 0x438310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438310 size=160 callers=0 calls=1
   calls: sub_4144b0
*/
void sub_438310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438310ULL || rel >= 0x4383b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004383b0 size=16 callers=0 calls=0
*/
void sub_4383b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4383b0ULL || rel >= 0x4383c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004383c0 size=32 callers=0 calls=0
*/
void sub_4383c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4383c0ULL || rel >= 0x4383e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004383e0 size=48 callers=0 calls=1
   calls: sub_414600
*/
void sub_4383e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4383e0ULL || rel >= 0x438410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438410 size=128 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_2, sub_4144b0
*/
void sub_438410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438410ULL || rel >= 0x438490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438490 size=32 callers=0 calls=0
*/
void sub_438490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438490ULL || rel >= 0x4384b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004384b0 size=160 callers=0 calls=0
*/
void sub_4384b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4384b0ULL || rel >= 0x438550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438550 size=80 callers=0 calls=1
   calls: BlendStateGetAdvancedMode
*/
void sub_438550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438550ULL || rel >= 0x4385a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004385a0 size=672 callers=0 calls=0
*/
void sub_4385a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4385a0ULL || rel >= 0x438840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438840 size=112 callers=0 calls=0
*/
void sub_438840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438840ULL || rel >= 0x4388b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004388b0 size=112 callers=0 calls=1
   calls: sub_43d0c0
*/
void sub_4388b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4388b0ULL || rel >= 0x438920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438920 size=432 callers=0 calls=2
   calls: sub_438c90, sub_4390b0
*/
void sub_438920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438920ULL || rel >= 0x438ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438ad0 size=16 callers=0 calls=0
*/
void sub_438ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438ad0ULL || rel >= 0x438ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438ae0 size=432 callers=0 calls=2
   calls: sub_438c90, sub_4390b0
*/
void sub_438ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438ae0ULL || rel >= 0x438c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438c90 size=1056 callers=4 calls=2
   calls: sub_414370, sub_414600
*/
void sub_438c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438c90ULL || rel >= 0x4390b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004390b0 size=1088 callers=4 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_7, CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_8
*/
void sub_4390b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4390b0ULL || rel >= 0x4394f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004394f0 size=224 callers=0 calls=3
   calls: sub_4395d0, sub_43cf50, sub_43cfb0
*/
void sub_4394f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4394f0ULL || rel >= 0x4395d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004395d0 size=1520 callers=2 calls=1
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5
*/
void sub_4395d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4395d0ULL || rel >= 0x439bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439bc0 size=192 callers=0 calls=1
   calls: sub_43cf50
*/
void sub_439bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439bc0ULL || rel >= 0x439c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439c80 size=16 callers=0 calls=0
*/
void sub_439c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439c80ULL || rel >= 0x439c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439c90 size=32 callers=0 calls=0
*/
void sub_439c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439c90ULL || rel >= 0x439cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439cb0 size=432 callers=0 calls=1
   calls: sub_43cf50
*/
void sub_439cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439cb0ULL || rel >= 0x439e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439e60 size=128 callers=0 calls=1
   calls: sub_43cf50
*/
void sub_439e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439e60ULL || rel >= 0x439ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439ee0 size=16 callers=0 calls=0
*/
void sub_439ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439ee0ULL || rel >= 0x439ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439ef0 size=16 callers=0 calls=0
*/
void sub_439ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439ef0ULL || rel >= 0x439f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439f00 size=48 callers=0 calls=0
*/
void sub_439f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439f00ULL || rel >= 0x439f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439f30 size=16 callers=0 calls=0
*/
void sub_439f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439f30ULL || rel >= 0x439f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439f40 size=48 callers=0 calls=2
   calls: sub_414bf0, sub_43cf90
*/
void sub_439f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439f40ULL || rel >= 0x439f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439f70 size=48 callers=0 calls=2
   calls: sub_4140b0, sub_43cf90
*/
void sub_439f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439f70ULL || rel >= 0x439fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439fa0 size=16 callers=0 calls=0
*/
void sub_439fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439fa0ULL || rel >= 0x439fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439fb0 size=80 callers=0 calls=0
*/
void sub_439fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439fb0ULL || rel >= 0x43a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a000 size=224 callers=0 calls=3
   calls: sub_43cf50, sub_43d7a0, sub_43d7d0
*/
void sub_43a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a000ULL || rel >= 0x43a0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a0e0 size=64 callers=0 calls=2
   calls: sub_43cf50, sub_43da30
*/
void sub_43a0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a0e0ULL || rel >= 0x43a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a120 size=32 callers=0 calls=0
*/
void sub_43a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a120ULL || rel >= 0x43a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a140 size=16 callers=0 calls=0
*/
void sub_43a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a140ULL || rel >= 0x43a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a150 size=16 callers=0 calls=0
*/
void sub_43a150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a150ULL || rel >= 0x43a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a160 size=48 callers=0 calls=1
   calls: sub_440520
*/
void sub_43a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a160ULL || rel >= 0x43a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a190 size=16 callers=0 calls=0
*/
void sub_43a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a190ULL || rel >= 0x43a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a1a0 size=16 callers=0 calls=0
*/
void sub_43a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a1a0ULL || rel >= 0x43a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a1b0 size=16 callers=0 calls=0
*/
void sub_43a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a1b0ULL || rel >= 0x43a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a1c0 size=64 callers=0 calls=1
   calls: sub_43d7a0
*/
void sub_43a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a1c0ULL || rel >= 0x43a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a200 size=432 callers=0 calls=3
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_43cf90, sub_43cfb0
*/
void sub_43a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a200ULL || rel >= 0x43a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a3b0 size=32 callers=0 calls=0
*/
void sub_43a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a3b0ULL || rel >= 0x43a3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a3d0 size=64 callers=0 calls=0
*/
void sub_43a3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a3d0ULL || rel >= 0x43a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a410 size=96 callers=0 calls=1
   calls: sub_43cf50
*/
void sub_43a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a410ULL || rel >= 0x43a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a470 size=64 callers=0 calls=2
   calls: sub_43cf50, sub_43d7a0
*/
void sub_43a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a470ULL || rel >= 0x43a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a4b0 size=176 callers=0 calls=0
   ref: DeviceGetProcAddress
   ref: DeviceInitialize
   ref: SetExternalDebuggerEnabledNVX
*/
void SetExternalDebuggerEnabledNVX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a4b0ULL || rel >= 0x43a560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a560 size=176 callers=0 calls=0
   ref: DeviceGetProcAddress
   ref: DeviceInitialize
   ref: SetExternalDebuggerEnabledNVX
*/
void SetExternalDebuggerEnabledNVX_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a560ULL || rel >= 0x43a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a610 size=16 callers=1 calls=0
*/
void sub_43a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a610ULL || rel >= 0x43a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a620 size=32 callers=0 calls=0
*/
void sub_43a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a620ULL || rel >= 0x43a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a640 size=64 callers=0 calls=2
   calls: BlendStateGetAdvancedMode, nvnTextureGetNvRmSurfaceNVX
*/
void sub_43a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a640ULL || rel >= 0x43a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a680 size=64 callers=0 calls=1
   calls: BlendStateGetAdvancedMode
*/
void sub_43a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a680ULL || rel >= 0x43a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a6c0 size=16 callers=0 calls=0
*/
void sub_43a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a6c0ULL || rel >= 0x43a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a6d0 size=16 callers=0 calls=0
*/
void sub_43a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a6d0ULL || rel >= 0x43a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a6e0 size=144 callers=1 calls=0
*/
void sub_43a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a6e0ULL || rel >= 0x43a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a770 size=768 callers=0 calls=14
   calls: sub_402500, sub_402520, sub_402570, sub_4025c0, sub_4025d0, sub_402610, sub_40e5f0, sub_40e600, sub_40e620, sub_40e6d0, sub_40e720, sub_40e8b0
   ... +2 more
*/
void sub_43a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a770ULL || rel >= 0x43aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043aa70 size=112 callers=0 calls=3
   calls: sub_4025c0, sub_40e8b0, sub_43ccc0
*/
void sub_43aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43aa70ULL || rel >= 0x43aae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043aae0 size=208 callers=0 calls=3
   calls: sub_402610, sub_4099b0, sub_43cfb0
*/
void sub_43aae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43aae0ULL || rel >= 0x43abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043abb0 size=304 callers=1 calls=1
   calls: sub_43ace0
*/
void sub_43abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43abb0ULL || rel >= 0x43ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ace0 size=272 callers=1 calls=0
*/
void sub_43ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ace0ULL || rel >= 0x43adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043adf0 size=16 callers=0 calls=0
*/
void sub_43adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43adf0ULL || rel >= 0x43ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ae00 size=16 callers=0 calls=0
*/
void sub_43ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ae00ULL || rel >= 0x43ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ae10 size=624 callers=0 calls=0
*/
void sub_43ae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ae10ULL || rel >= 0x43b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b080 size=304 callers=0 calls=0
*/
void sub_43b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b080ULL || rel >= 0x43b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b1b0 size=256 callers=0 calls=0
*/
void sub_43b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b1b0ULL || rel >= 0x43b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b2b0 size=640 callers=0 calls=0
*/
void sub_43b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b2b0ULL || rel >= 0x43b530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b530 size=256 callers=0 calls=0
*/
void sub_43b530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b530ULL || rel >= 0x43b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b630 size=352 callers=0 calls=0
*/
void sub_43b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b630ULL || rel >= 0x43b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b790 size=512 callers=0 calls=0
*/
void sub_43b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b790ULL || rel >= 0x43b990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b990 size=368 callers=0 calls=0
*/
void sub_43b990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b990ULL || rel >= 0x43bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bb00 size=544 callers=0 calls=0
*/
void sub_43bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bb00ULL || rel >= 0x43bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bd20 size=16 callers=0 calls=0
*/
void sub_43bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bd20ULL || rel >= 0x43bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bd30 size=16 callers=0 calls=0
*/
void sub_43bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bd30ULL || rel >= 0x43bd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bd40 size=16 callers=0 calls=0
*/
void sub_43bd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bd40ULL || rel >= 0x43bd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bd50 size=16 callers=0 calls=0
*/
void sub_43bd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bd50ULL || rel >= 0x43bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bd60 size=240 callers=0 calls=0
*/
void sub_43bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bd60ULL || rel >= 0x43be50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043be50 size=240 callers=0 calls=0
*/
void sub_43be50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43be50ULL || rel >= 0x43bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bf40 size=400 callers=0 calls=0
*/
void sub_43bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bf40ULL || rel >= 0x43c0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c0d0 size=240 callers=0 calls=0
*/
void sub_43c0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c0d0ULL || rel >= 0x43c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c1c0 size=288 callers=0 calls=0
*/
void sub_43c1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c1c0ULL || rel >= 0x43c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c2e0 size=320 callers=0 calls=0
*/
void sub_43c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c2e0ULL || rel >= 0x43c420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c420 size=16 callers=0 calls=0
*/
void sub_43c420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c420ULL || rel >= 0x43c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c430 size=16 callers=0 calls=0
*/
void sub_43c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c430ULL || rel >= 0x43c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c440 size=256 callers=0 calls=0
*/
void sub_43c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c440ULL || rel >= 0x43c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c540 size=304 callers=0 calls=0
*/
void sub_43c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c540ULL || rel >= 0x43c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c670 size=224 callers=0 calls=0
*/
void sub_43c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c670ULL || rel >= 0x43c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c750 size=432 callers=0 calls=0
*/
void sub_43c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c750ULL || rel >= 0x43c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c900 size=16 callers=0 calls=0
*/
void sub_43c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c900ULL || rel >= 0x43c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c910 size=16 callers=0 calls=0
*/
void sub_43c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c910ULL || rel >= 0x43c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c920 size=272 callers=0 calls=0
*/
void sub_43c920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c920ULL || rel >= 0x43ca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ca30 size=384 callers=0 calls=2
   calls: CommandBuffer_out_of_memory_callback_didn_t_add_enough_c_5, sub_43cfb0
*/
void sub_43ca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ca30ULL || rel >= 0x43cbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cbb0 size=16 callers=0 calls=0
*/
void sub_43cbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cbb0ULL || rel >= 0x43cbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cbc0 size=16 callers=0 calls=0
*/
void sub_43cbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cbc0ULL || rel >= 0x43cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cbd0 size=64 callers=0 calls=0
*/
void sub_43cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cbd0ULL || rel >= 0x43cc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cc10 size=80 callers=0 calls=0
*/
void sub_43cc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cc10ULL || rel >= 0x43cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cc60 size=16 callers=0 calls=0
*/
void sub_43cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cc60ULL || rel >= 0x43cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cc70 size=16 callers=0 calls=0
*/
void sub_43cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cc70ULL || rel >= 0x43cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cc80 size=16 callers=0 calls=0
*/
void sub_43cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cc80ULL || rel >= 0x43cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cc90 size=16 callers=0 calls=0
*/
void sub_43cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cc90ULL || rel >= 0x43cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cca0 size=16 callers=0 calls=0
*/
void sub_43cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cca0ULL || rel >= 0x43ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ccb0 size=16 callers=15 calls=0
*/
void sub_43ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ccb0ULL || rel >= 0x43ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ccc0 size=32 callers=20 calls=0
*/
void sub_43ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ccc0ULL || rel >= 0x43cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cce0 size=32 callers=1 calls=0
*/
void sub_43cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cce0ULL || rel >= 0x43cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cd00 size=32 callers=0 calls=0
*/
void sub_43cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cd00ULL || rel >= 0x43cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cd20 size=192 callers=2 calls=0
*/
void sub_43cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cd20ULL || rel >= 0x43cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cde0 size=80 callers=0 calls=0
*/
void sub_43cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cde0ULL || rel >= 0x43ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ce30 size=112 callers=1 calls=0
*/
void sub_43ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ce30ULL || rel >= 0x43cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cea0 size=112 callers=1 calls=0
*/
void sub_43cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cea0ULL || rel >= 0x43cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cf10 size=16 callers=3 calls=0
*/
void sub_43cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cf10ULL || rel >= 0x43cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cf20 size=16 callers=2 calls=0
*/
void sub_43cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cf20ULL || rel >= 0x43cf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cf30 size=16 callers=3 calls=0
*/
void sub_43cf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cf30ULL || rel >= 0x43cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cf40 size=16 callers=1 calls=0
*/
void sub_43cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cf40ULL || rel >= 0x43cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cf50 size=64 callers=9 calls=0
*/
void sub_43cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cf50ULL || rel >= 0x43cf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cf90 size=32 callers=3 calls=0
*/
void sub_43cf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cf90ULL || rel >= 0x43cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cfb0 size=64 callers=4 calls=0
*/
void sub_43cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cfb0ULL || rel >= 0x43cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cff0 size=208 callers=1 calls=0
*/
void sub_43cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cff0ULL || rel >= 0x43d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043d0c0 size=528 callers=2 calls=0
*/
void sub_43d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d0c0ULL || rel >= 0x43d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043d2d0 size=480 callers=4 calls=0
*/
void sub_43d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d2d0ULL || rel >= 0x43d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043d4b0 size=208 callers=1 calls=0
*/
void sub_43d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d4b0ULL || rel >= 0x43d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043d580 size=240 callers=3 calls=0
*/
void sub_43d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d580ULL || rel >= 0x43d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043d670 size=272 callers=1 calls=0
*/
void sub_43d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d670ULL || rel >= 0x43d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043d780 size=32 callers=2 calls=0
*/
void sub_43d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d780ULL || rel >= 0x43d7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043d7a0 size=48 callers=3 calls=0
*/
void sub_43d7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d7a0ULL || rel >= 0x43d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043d7d0 size=128 callers=1 calls=3
   calls: sub_43ccb0, sub_43ccc0, sub_43d850
*/
void sub_43d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d7d0ULL || rel >= 0x43d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043d850 size=480 callers=1 calls=1
   calls: sub_43db90
*/
void sub_43d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d850ULL || rel >= 0x43da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043da30 size=48 callers=1 calls=1
   calls: sub_43da60
*/
void sub_43da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43da30ULL || rel >= 0x43da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043da60 size=256 callers=1 calls=0
*/
void sub_43da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43da60ULL || rel >= 0x43db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043db60 size=48 callers=1 calls=0
*/
void sub_43db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43db60ULL || rel >= 0x43db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043db90 size=256 callers=2 calls=0
*/
void sub_43db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43db90ULL || rel >= 0x43dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043dc90 size=288 callers=1 calls=0
*/
void sub_43dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43dc90ULL || rel >= 0x43ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ddb0 size=112 callers=2 calls=1
   calls: sub_43db90
*/
void sub_43ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ddb0ULL || rel >= 0x43de20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043de20 size=240 callers=1 calls=0
*/
void sub_43de20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43de20ULL || rel >= 0x43df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043df10 size=496 callers=1 calls=2
   calls: sub_4408e0, sub_4410c0
*/
void sub_43df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43df10ULL || rel >= 0x43e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e100 size=976 callers=1 calls=3
   calls: sub_43e4d0, sub_440ca0, sub_4410c0
*/
void sub_43e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e100ULL || rel >= 0x43e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e4d0 size=384 callers=2 calls=2
   calls: sub_440a00, sub_4410b0
*/
void sub_43e4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e4d0ULL || rel >= 0x43e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e650 size=704 callers=1 calls=0
*/
void sub_43e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e650ULL || rel >= 0x43e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e910 size=672 callers=1 calls=2
   calls: sub_440e40, sub_4410c0
*/
void sub_43e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e910ULL || rel >= 0x43ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ebb0 size=368 callers=1 calls=0
*/
void sub_43ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ebb0ULL || rel >= 0x43ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ed20 size=656 callers=1 calls=0
*/
void sub_43ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ed20ULL || rel >= 0x43efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043efb0 size=304 callers=1 calls=0
*/
void sub_43efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43efb0ULL || rel >= 0x43f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043f0e0 size=544 callers=1 calls=2
   calls: sub_43ed20, sub_43efb0
*/
void sub_43f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43f0e0ULL || rel >= 0x43f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043f300 size=336 callers=1 calls=0
*/
void sub_43f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43f300ULL || rel >= 0x43f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043f450 size=352 callers=1 calls=0
*/
void sub_43f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43f450ULL || rel >= 0x43f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043f5b0 size=688 callers=1 calls=1
   calls: sub_43f450
*/
void sub_43f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43f5b0ULL || rel >= 0x43f860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043f860 size=1344 callers=1 calls=5
   calls: sub_43df10, sub_43e100, sub_43e910, sub_43f300, sub_4410e0
*/
void sub_43f860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43f860ULL || rel >= 0x43fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fda0 size=1024 callers=1 calls=5
   calls: sub_43de20, sub_43e650, sub_43ebb0, sub_43f0e0, sub_43f5b0
*/
void sub_43fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fda0ULL || rel >= 0x4401a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004401a0 size=640 callers=1 calls=3
   calls: sub_43f860, sub_43fda0, sub_440420
*/
void sub_4401a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4401a0ULL || rel >= 0x440420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440420 size=208 callers=2 calls=3
   calls: sub_4407c0, sub_4408a0, sub_4410e0
*/
void sub_440420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440420ULL || rel >= 0x4404f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004404f0 size=48 callers=0 calls=0
*/
void sub_4404f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4404f0ULL || rel >= 0x440520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440520 size=416 callers=1 calls=2
   calls: sub_4401a0, sub_440420
*/
void sub_440520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440520ULL || rel >= 0x4406c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004406c0 size=16 callers=0 calls=0
*/
void sub_4406c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4406c0ULL || rel >= 0x4406d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004406d0 size=16 callers=0 calls=0
*/
void sub_4406d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4406d0ULL || rel >= 0x4406e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004406e0 size=16 callers=0 calls=0
*/
void sub_4406e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4406e0ULL || rel >= 0x4406f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004406f0 size=16 callers=0 calls=0
*/
void sub_4406f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4406f0ULL || rel >= 0x440700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440700 size=16 callers=0 calls=0
*/
void sub_440700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440700ULL || rel >= 0x440710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440710 size=16 callers=0 calls=0
*/
void sub_440710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440710ULL || rel >= 0x440720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440720 size=16 callers=0 calls=0
*/
void sub_440720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440720ULL || rel >= 0x440730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440730 size=16 callers=0 calls=0
*/
void sub_440730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440730ULL || rel >= 0x440740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440740 size=16 callers=0 calls=0
*/
void sub_440740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440740ULL || rel >= 0x440750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440750 size=16 callers=0 calls=0
*/
void sub_440750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440750ULL || rel >= 0x440760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440760 size=16 callers=0 calls=0
*/
void sub_440760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440760ULL || rel >= 0x440770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440770 size=16 callers=0 calls=0
*/
void sub_440770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440770ULL || rel >= 0x440780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440780 size=16 callers=0 calls=0
*/
void sub_440780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440780ULL || rel >= 0x440790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440790 size=16 callers=0 calls=0
*/
void sub_440790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440790ULL || rel >= 0x4407a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004407a0 size=16 callers=0 calls=0
*/
void sub_4407a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4407a0ULL || rel >= 0x4407b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004407b0 size=16 callers=0 calls=0
*/
void sub_4407b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4407b0ULL || rel >= 0x4407c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004407c0 size=224 callers=1 calls=1
   calls: sub_4410e0
*/
void sub_4407c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4407c0ULL || rel >= 0x4408a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004408a0 size=64 callers=3 calls=2
   calls: sub_4408a0, sub_4410d0
*/
void sub_4408a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4408a0ULL || rel >= 0x4408e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004408e0 size=288 callers=1 calls=2
   calls: sub_4410c0, sub_4410e0
*/
void sub_4408e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4408e0ULL || rel >= 0x440a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440a00 size=672 callers=1 calls=0
*/
void sub_440a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440a00ULL || rel >= 0x440ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440ca0 size=416 callers=1 calls=2
   calls: sub_4410c0, sub_4410e0
*/
void sub_440ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440ca0ULL || rel >= 0x440e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440e40 size=416 callers=3 calls=2
   calls: sub_4410c0, sub_4410e0
*/
void sub_440e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440e40ULL || rel >= 0x440fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440fe0 size=112 callers=3 calls=0
*/
void sub_440fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440fe0ULL || rel >= 0x441050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441050 size=32 callers=6 calls=0
*/
void sub_441050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441050ULL || rel >= 0x441070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441070 size=16 callers=4 calls=0
*/
void sub_441070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441070ULL || rel >= 0x441080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441080 size=16 callers=1 calls=0
*/
void sub_441080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441080ULL || rel >= 0x441090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441090 size=16 callers=3 calls=0
*/
void sub_441090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441090ULL || rel >= 0x4410a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004410a0 size=16 callers=1 calls=0
*/
void sub_4410a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4410a0ULL || rel >= 0x4410b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004410b0 size=16 callers=1 calls=0
*/
void sub_4410b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4410b0ULL || rel >= 0x4410c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004410c0 size=16 callers=8 calls=0
*/
void sub_4410c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4410c0ULL || rel >= 0x4410d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004410d0 size=16 callers=1 calls=0
*/
void sub_4410d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4410d0ULL || rel >= 0x4410e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004410e0 size=16 callers=12 calls=0
*/
void sub_4410e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4410e0ULL || rel >= 0x4410f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004410f0 size=1024 callers=1 calls=1
   calls: sub_4414f0
*/
void sub_4410f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4410f0ULL || rel >= 0x4414f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004414f0 size=240 callers=2 calls=1
   calls: sub_441790
*/
void sub_4414f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4414f0ULL || rel >= 0x4415e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004415e0 size=432 callers=1 calls=0
*/
void sub_4415e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4415e0ULL || rel >= 0x441790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441790 size=80 callers=1 calls=0
*/
void sub_441790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441790ULL || rel >= 0x4417e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004417e0 size=640 callers=1 calls=3
   calls: sub_4410f0, sub_4415e0, sub_441a60
*/
void sub_4417e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4417e0ULL || rel >= 0x441a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441a60 size=160 callers=2 calls=0
*/
void sub_441a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441a60ULL || rel >= 0x441b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441b00 size=672 callers=1 calls=1
   calls: sub_441e30
*/
void sub_441b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441b00ULL || rel >= 0x441da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441da0 size=144 callers=1 calls=0
*/
void sub_441da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441da0ULL || rel >= 0x441e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441e30 size=752 callers=2 calls=0
*/
void sub_441e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441e30ULL || rel >= 0x442120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442120 size=80 callers=1 calls=0
*/
void sub_442120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442120ULL || rel >= 0x442170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442170 size=176 callers=2 calls=0
*/
void sub_442170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442170ULL || rel >= 0x442220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442220 size=576 callers=1 calls=0
*/
void sub_442220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442220ULL || rel >= 0x442460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442460 size=160 callers=0 calls=2
   calls: sub_40d560, sub_40d570
   ref: NVN_THROUGH_OPENGL
*/
void NVN_THROUGH_OPENGL_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442460ULL || rel >= 0x442500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442500 size=16 callers=0 calls=0
*/
void sub_442500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442500ULL || rel >= 0x442510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442510 size=48 callers=0 calls=1
   calls: sub_40d570
*/
void sub_442510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442510ULL || rel >= 0x442540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442540 size=128 callers=0 calls=0
*/
void sub_442540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442540ULL || rel >= 0x4425c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004425c0 size=32 callers=0 calls=0
*/
void sub_4425c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4425c0ULL || rel >= 0x4425e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004425e0 size=32 callers=0 calls=0
*/
void sub_4425e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4425e0ULL || rel >= 0x442600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442600 size=32 callers=0 calls=0
*/
void sub_442600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442600ULL || rel >= 0x442620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442620 size=16 callers=0 calls=0
   ref: SDK MW+Nintendo+NintendoSDK_NVN-7_3_2-Release
*/
void SDK_MW_Nintendo_NintendoSDK_NVN_7_3_2_Release(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442620ULL || rel >= 0x442630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442630 size=1592 callers=0 calls=0
*/
void sub_442630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442630ULL || rel >= 0x442c68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442c68 size=488 callers=0 calls=0
*/
void sub_442c68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442c68ULL || rel >= 0x442e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442e50 size=848 callers=0 calls=0
*/
void sub_442e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442e50ULL || rel >= 0x4431a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004431a0 size=1552 callers=0 calls=0
*/
void sub_4431a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4431a0ULL || rel >= 0x4437b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004437b0 size=488 callers=0 calls=0
*/
void sub_4437b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4437b0ULL || rel >= 0x443998ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443998 size=784 callers=0 calls=0
*/
void sub_443998(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443998ULL || rel >= 0x443ca8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443ca8 size=1592 callers=0 calls=0
*/
void sub_443ca8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443ca8ULL || rel >= 0x4442e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004442e0 size=488 callers=0 calls=0
*/
void sub_4442e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4442e0ULL || rel >= 0x4444c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004444c8 size=848 callers=0 calls=0
*/
void sub_4444c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4444c8ULL || rel >= 0x444818ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444818 size=1592 callers=0 calls=0
*/
void sub_444818(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444818ULL || rel >= 0x444e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444e50 size=488 callers=0 calls=0
*/
void sub_444e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444e50ULL || rel >= 0x445038ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445038 size=848 callers=0 calls=0
*/
void sub_445038(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445038ULL || rel >= 0x445388ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445388 size=1608 callers=0 calls=0
*/
void sub_445388(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445388ULL || rel >= 0x4459d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004459d0 size=488 callers=0 calls=0
*/
void sub_4459d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4459d0ULL || rel >= 0x445bb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445bb8 size=848 callers=0 calls=0
*/
void sub_445bb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445bb8ULL || rel >= 0x445f08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445f08 size=1608 callers=0 calls=0
*/
void sub_445f08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445f08ULL || rel >= 0x446550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446550 size=488 callers=0 calls=0
*/
void sub_446550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446550ULL || rel >= 0x446738ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446738 size=848 callers=0 calls=0
*/
void sub_446738(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446738ULL || rel >= 0x446a88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446a88 size=1552 callers=0 calls=0
*/
void sub_446a88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446a88ULL || rel >= 0x447098ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447098 size=488 callers=0 calls=0
*/
void sub_447098(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447098ULL || rel >= 0x447280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447280 size=784 callers=0 calls=0
*/
void sub_447280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447280ULL || rel >= 0x447590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447590 size=1552 callers=0 calls=0
*/
void sub_447590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447590ULL || rel >= 0x447ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447ba0 size=488 callers=0 calls=0
*/
void sub_447ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447ba0ULL || rel >= 0x447d88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447d88 size=784 callers=0 calls=0
*/
void sub_447d88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447d88ULL || rel >= 0x448098ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448098 size=1560 callers=0 calls=0
*/
void sub_448098(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448098ULL || rel >= 0x4486b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004486b0 size=488 callers=0 calls=0
*/
void sub_4486b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4486b0ULL || rel >= 0x448898ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448898 size=784 callers=0 calls=0
*/
void sub_448898(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448898ULL || rel >= 0x448ba8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448ba8 size=1560 callers=0 calls=0
*/
void sub_448ba8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448ba8ULL || rel >= 0x4491c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004491c0 size=488 callers=0 calls=0
*/
void sub_4491c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4491c0ULL || rel >= 0x4493a8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004493a8 size=784 callers=0 calls=0
*/
void sub_4493a8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4493a8ULL || rel >= 0x4496b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004496b8 size=1560 callers=0 calls=0
*/
void sub_4496b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4496b8ULL || rel >= 0x449cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449cd0 size=488 callers=0 calls=0
*/
void sub_449cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449cd0ULL || rel >= 0x449eb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449eb8 size=784 callers=0 calls=0
*/
void sub_449eb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449eb8ULL || rel >= 0x44a1c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a1c8 size=1560 callers=0 calls=0
*/
void sub_44a1c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a1c8ULL || rel >= 0x44a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a7e0 size=488 callers=0 calls=0
*/
void sub_44a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a7e0ULL || rel >= 0x44a9c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a9c8 size=784 callers=0 calls=0
*/
void sub_44a9c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a9c8ULL || rel >= 0x44acd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044acd8 size=1568 callers=0 calls=0
*/
void sub_44acd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44acd8ULL || rel >= 0x44b2f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b2f8 size=488 callers=0 calls=0
*/
void sub_44b2f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b2f8ULL || rel >= 0x44b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b4e0 size=816 callers=0 calls=0
*/
void sub_44b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b4e0ULL || rel >= 0x44b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b810 size=1576 callers=0 calls=0
*/
void sub_44b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b810ULL || rel >= 0x44be38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044be38 size=488 callers=0 calls=0
*/
void sub_44be38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44be38ULL || rel >= 0x44c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044c020 size=816 callers=0 calls=0
*/
void sub_44c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44c020ULL || rel >= 0x44c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044c350 size=2072 callers=0 calls=0
*/
void sub_44c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44c350ULL || rel >= 0x44cb68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044cb68 size=632 callers=0 calls=0
*/
void sub_44cb68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44cb68ULL || rel >= 0x44cde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044cde0 size=1064 callers=0 calls=0
*/
void sub_44cde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44cde0ULL || rel >= 0x44d208ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d208 size=48 callers=0 calls=0
*/
void sub_44d208(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d208ULL || rel >= 0x44d238ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d238 size=24 callers=0 calls=0
*/
void sub_44d238(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d238ULL || rel >= 0x44d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d250 size=56 callers=0 calls=1
   calls: sub_44d288
*/
void sub_44d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d250ULL || rel >= 0x44d288ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d288 size=16 callers=355 calls=0
*/
void sub_44d288(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d288ULL || rel >= 0x44d298ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d298 size=312 callers=0 calls=0
*/
void sub_44d298(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d298ULL || rel >= 0x44d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d3d0 size=48 callers=0 calls=0
*/
void sub_44d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d3d0ULL || rel >= 0x44d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d400 size=16 callers=0 calls=0
   ref: bad any cast
*/
void bad_any_cast(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d400ULL || rel >= 0x44d410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d410 size=16 callers=0 calls=0
   ref: bad any cast
*/
void bad_any_cast_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d410ULL || rel >= 0x44d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d420 size=40 callers=0 calls=0
*/
void sub_44d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d420ULL || rel >= 0x44d448ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d448 size=40 callers=0 calls=0
*/
void sub_44d448(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d448ULL || rel >= 0x44d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d470 size=680 callers=0 calls=0
   ref: 0001020304050607080910111213141516171819202122232425262728293031323334353637383940414243444546474849
*/
void f_000102030405060708091011121314151617181920212223242526(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d470ULL || rel >= 0x44d718ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044d718 size=1240 callers=0 calls=0
   ref: 0001020304050607080910111213141516171819202122232425262728293031323334353637383940414243444546474849
*/
void f_000102030405060708091011121314151617181920212223242526_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44d718ULL || rel >= 0x44dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dbf0 size=64 callers=0 calls=1
   calls: sub_49f1d8
*/
void sub_44dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dbf0ULL || rel >= 0x44dc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dc30 size=40 callers=0 calls=0
*/
void sub_44dc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dc30ULL || rel >= 0x44dc58ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dc58 size=16 callers=0 calls=0
*/
void sub_44dc58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dc58ULL || rel >= 0x44dc68ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dc68 size=32 callers=0 calls=1
   calls: sub_49f1d8
*/
void sub_44dc68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dc68ULL || rel >= 0x44dc88ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dc88 size=24 callers=0 calls=1
   calls: sub_44d288
*/
void sub_44dc88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dc88ULL || rel >= 0x44dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dca0 size=24 callers=0 calls=1
   calls: sub_44d288
*/
void sub_44dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dca0ULL || rel >= 0x44dcb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dcb8 size=24 callers=0 calls=1
   calls: sub_44d288
*/
void sub_44dcb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dcb8ULL || rel >= 0x44dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dcd0 size=72 callers=0 calls=1
   calls: sub_44d288
   ref: condition_variable::wait: mutex not locked
   ref: condition_variable wait failed
*/
void condition_variable_wait_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dcd0ULL || rel >= 0x44dd18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dd18 size=160 callers=0 calls=1
   calls: sub_44d288
   ref: condition_variable::timed wait: mutex not locked
   ref: condition_variable timed_wait failed
*/
void condition_variable_timed_wait_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dd18ULL || rel >= 0x44ddb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ddb8 size=136 callers=0 calls=0
*/
void sub_44ddb8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ddb8ULL || rel >= 0x44de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044de40 size=96 callers=0 calls=1
   calls: failed
*/
void sub_44de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44de40ULL || rel >= 0x44dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dea0 size=24 callers=0 calls=0
*/
void sub_44dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dea0ULL || rel >= 0x44deb8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044deb8 size=592 callers=2 calls=0
   ref: : _LIBCPP_ASSERT '
   ref: ' failed. 
*/
void failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44deb8ULL || rel >= 0x44e108ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e108 size=80 callers=0 calls=0
*/
void sub_44e108(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e108ULL || rel >= 0x44e158ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e158 size=24 callers=0 calls=0
*/
void sub_44e158(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e158ULL || rel >= 0x44e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e170 size=192 callers=0 calls=1
   calls: failed
*/
void sub_44e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e170ULL || rel >= 0x44e230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e230 size=152 callers=0 calls=0
*/
void sub_44e230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e230ULL || rel >= 0x44e2c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e2c8 size=80 callers=0 calls=0
*/
void sub_44e2c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e2c8ULL || rel >= 0x44e318ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e318 size=88 callers=0 calls=0
*/
void sub_44e318(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e318ULL || rel >= 0x44e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e370 size=48 callers=0 calls=0
   ref: __libcpp_debug_exception
*/
void libcpp_debug_exception(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e370ULL || rel >= 0x44e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e3a0 size=120 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e3a0ULL || rel >= 0x44e418ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e418 size=120 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44e418(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e418ULL || rel >= 0x44e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e490 size=56 callers=1 calls=1
   calls: sub_44e490
*/
void sub_44e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e490ULL || rel >= 0x44e4c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e4c8 size=88 callers=0 calls=0
*/
void sub_44e4c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e4c8ULL || rel >= 0x44e520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e520 size=8 callers=0 calls=0
*/
void sub_44e520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e520ULL || rel >= 0x44e528ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e528 size=16 callers=0 calls=0
*/
void sub_44e528(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e528ULL || rel >= 0x44e538ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e538 size=184 callers=0 calls=0
*/
void sub_44e538(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e538ULL || rel >= 0x44e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e5f0 size=256 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e5f0ULL || rel >= 0x44e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e6f0 size=432 callers=0 calls=2
   calls: sub_1c0, sub_44e8a0
*/
void sub_44e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e6f0ULL || rel >= 0x44e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e8a0 size=352 callers=3 calls=0
*/
void sub_44e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e8a0ULL || rel >= 0x44ea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ea00 size=168 callers=0 calls=0
*/
void sub_44ea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ea00ULL || rel >= 0x44eaa8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044eaa8 size=504 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44eaa8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44eaa8ULL || rel >= 0x44eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044eca0 size=392 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44eca0ULL || rel >= 0x44ee28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ee28 size=280 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44ee28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ee28ULL || rel >= 0x44ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ef40 size=320 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ef40ULL || rel >= 0x44f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f080 size=104 callers=0 calls=0
*/
void sub_44f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f080ULL || rel >= 0x44f0e8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f0e8 size=112 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44f0e8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f0e8ULL || rel >= 0x44f158ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f158 size=344 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44f158(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f158ULL || rel >= 0x44f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f2b0 size=656 callers=0 calls=2
   calls: sub_1c0, sub_44e8a0
*/
void sub_44f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f2b0ULL || rel >= 0x44f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f540 size=312 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f540ULL || rel >= 0x44f678ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f678 size=312 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44f678(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f678ULL || rel >= 0x44f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f7b0 size=328 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f7b0ULL || rel >= 0x44f8f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f8f8 size=328 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44f8f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f8f8ULL || rel >= 0x44fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fa40 size=384 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fa40ULL || rel >= 0x44fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fbc0 size=416 callers=0 calls=1
   calls: sub_1c0
*/
void sub_44fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fbc0ULL || rel >= 0x44fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fd60 size=168 callers=0 calls=2
   calls: sub_1c0, sub_44e8a0
*/
void sub_44fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fd60ULL || rel >= 0x44fe08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fe08 size=32 callers=0 calls=0
*/
void sub_44fe08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fe08ULL || rel >= 0x44fe28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fe28 size=8 callers=0 calls=0
*/
void sub_44fe28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fe28ULL || rel >= 0x44fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fe30 size=8 callers=0 calls=0
*/
void sub_44fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fe30ULL || rel >= 0x44fe38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fe38 size=24 callers=0 calls=0
*/
void sub_44fe38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fe38ULL || rel >= 0x44fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fe50 size=72 callers=0 calls=0
*/
void sub_44fe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fe50ULL || rel >= 0x44fe98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fe98 size=56 callers=0 calls=0
*/
void sub_44fe98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fe98ULL || rel >= 0x44fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fed0 size=40 callers=0 calls=0
*/
void sub_44fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fed0ULL || rel >= 0x44fef8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fef8 size=32 callers=0 calls=0
*/
void sub_44fef8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fef8ULL || rel >= 0x44ff18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ff18 size=56 callers=0 calls=0
*/
void sub_44ff18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ff18ULL || rel >= 0x44ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ff50 size=88 callers=0 calls=0
*/
void sub_44ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ff50ULL || rel >= 0x44ffa8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ffa8 size=24 callers=0 calls=0
*/
void sub_44ffa8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ffa8ULL || rel >= 0x44ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ffc0 size=16 callers=0 calls=0
   ref: future
*/
void future(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ffc0ULL || rel >= 0x44ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ffd0 size=464 callers=0 calls=0
   ref: The state of the promise has already been set.
   ref: The associated promise has been destructed prior to the associated state becoming ready.
   ref: The future has already been retrieved from the promise or packaged_task.
   ref: Operation not permitted on an object without an associated state.
   ref: unspecified future_errc value
*/
void unspecified_future_errc_value(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ffd0ULL || rel >= 0x4501a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004501a0 size=136 callers=0 calls=1
   calls: sub_1c0
*/
void sub_4501a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4501a0ULL || rel >= 0x450228ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450228 size=136 callers=0 calls=0
*/
void sub_450228(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450228ULL || rel >= 0x4502b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004502b0 size=8 callers=0 calls=0
*/
void sub_4502b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4502b0ULL || rel >= 0x4502b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004502b8 size=40 callers=0 calls=0
*/
void sub_4502b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4502b8ULL || rel >= 0x4502e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004502e0 size=24 callers=0 calls=0
*/
void sub_4502e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4502e0ULL || rel >= 0x4502f8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004502f8 size=408 callers=0 calls=1
   calls: sub_1c0
*/
void sub_4502f8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4502f8ULL || rel >= 0x450490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450490 size=416 callers=0 calls=1
   calls: sub_1c0
*/
void sub_450490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450490ULL || rel >= 0x450630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450630 size=424 callers=0 calls=1
   calls: sub_1c0
*/
void sub_450630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450630ULL || rel >= 0x4507d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004507d8 size=424 callers=0 calls=1
   calls: sub_1c0
*/
void sub_4507d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4507d8ULL || rel >= 0x450980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450980 size=64 callers=0 calls=0
*/
void sub_450980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450980ULL || rel >= 0x4509c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004509c0 size=248 callers=0 calls=0
*/
void sub_4509c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4509c0ULL || rel >= 0x450ab8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450ab8 size=152 callers=0 calls=0
   ref: unique_lock::unlock: not locked
*/
void unique_lock_unlock_not_locked(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450ab8ULL || rel >= 0x450b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450b50 size=184 callers=0 calls=0
*/
void sub_450b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450b50ULL || rel >= 0x450c08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450c08 size=192 callers=0 calls=1
   calls: sub_1c0
*/
void sub_450c08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450c08ULL || rel >= 0x450cc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450cc8 size=264 callers=0 calls=1
   calls: sub_1c0
*/
void sub_450cc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450cc8ULL || rel >= 0x450dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450dd0 size=16 callers=0 calls=0
*/
void sub_450dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450dd0ULL || rel >= 0x450de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450de0 size=88 callers=0 calls=0
*/
void sub_450de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450de0ULL || rel >= 0x450e38ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450e38 size=96 callers=0 calls=0
*/
void sub_450e38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450e38ULL || rel >= 0x450e98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450e98 size=472 callers=0 calls=2
   calls: sub_1c0, sub_44d288
*/
void sub_450e98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450e98ULL || rel >= 0x451070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451070 size=216 callers=0 calls=1
   calls: sub_1c0
*/
void sub_451070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451070ULL || rel >= 0x451148ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451148 size=216 callers=0 calls=1
   calls: sub_1c0
*/
void sub_451148(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451148ULL || rel >= 0x451220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451220 size=264 callers=0 calls=1
   calls: sub_1c0
*/
void sub_451220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451220ULL || rel >= 0x451328ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451328 size=216 callers=0 calls=1
   calls: sub_1c0
*/
void sub_451328(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451328ULL || rel >= 0x451400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451400 size=264 callers=0 calls=1
   calls: sub_1c0
*/
void sub_451400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451400ULL || rel >= 0x451508ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451508 size=16 callers=0 calls=0
*/
void sub_451508(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451508ULL || rel >= 0x451518ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451518 size=72 callers=0 calls=0
*/
void sub_451518(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451518ULL || rel >= 0x451560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451560 size=80 callers=0 calls=0
*/
void sub_451560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451560ULL || rel >= 0x4515b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004515b0 size=88 callers=0 calls=0
*/
void sub_4515b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4515b0ULL || rel >= 0x451608ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451608 size=40 callers=0 calls=0
*/
void sub_451608(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451608ULL || rel >= 0x451630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451630 size=1928 callers=0 calls=0
   ref: __next_prime overflow
*/
void next_prime_overflow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451630ULL || rel >= 0x451db8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451db8 size=192 callers=0 calls=2
   calls: sub_49f360, sub_49f390
*/
void sub_451db8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451db8ULL || rel >= 0x451e78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451e78 size=144 callers=0 calls=2
   calls: sub_49f360, sub_49f390
*/
void sub_451e78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451e78ULL || rel >= 0x451f08ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451f08 size=264 callers=0 calls=2
   calls: sub_49f338, sub_49f340
*/
void sub_451f08(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451f08ULL || rel >= 0x452010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452010 size=80 callers=0 calls=2
   calls: sub_49f338, sub_49f340
*/
void sub_452010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452010ULL || rel >= 0x452060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452060 size=16 callers=0 calls=0
*/
void sub_452060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452060ULL || rel >= 0x452070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452070 size=8 callers=0 calls=0
*/
void sub_452070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452070ULL || rel >= 0x452078ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452078 size=24 callers=0 calls=0
*/
void sub_452078(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452078ULL || rel >= 0x452090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452090 size=56 callers=0 calls=1
   calls: sub_49f338
*/
void sub_452090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452090ULL || rel >= 0x4520c8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004520c8 size=8 callers=0 calls=0
*/
void sub_4520c8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4520c8ULL || rel >= 0x4520d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004520d0 size=256 callers=0 calls=3
   calls: sub_44d288, sub_49f360, sub_49f390
*/
void sub_4520d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4520d0ULL || rel >= 0x4521d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004521d0 size=160 callers=0 calls=2
   calls: sub_49f360, sub_49f390
*/
void sub_4521d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4521d0ULL || rel >= 0x452270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452270 size=40 callers=0 calls=0
*/
void sub_452270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452270ULL || rel >= 0x452298ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452298 size=32 callers=0 calls=1
   calls: sub_44d288
*/
void sub_452298(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452298ULL || rel >= 0x4522b8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004522b8 size=32 callers=0 calls=0
*/
void sub_4522b8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4522b8ULL || rel >= 0x4522d8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004522d8 size=8 callers=0 calls=0
*/
void sub_4522d8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4522d8ULL || rel >= 0x4522e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004522e0 size=32 callers=0 calls=0
*/
void sub_4522e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4522e0ULL || rel >= 0x452300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452300 size=264 callers=0 calls=1
   calls: sub_1c0
   ref: ios_base::clear
*/
void ios_base_clear(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452300ULL || rel >= 0x452408ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452408 size=136 callers=0 calls=1
   calls: sub_44d288
*/
void sub_452408(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452408ULL || rel >= 0x452490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452490 size=8 callers=0 calls=0
*/
void sub_452490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452490ULL || rel >= 0x452498ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452498 size=40 callers=0 calls=0
*/
void sub_452498(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452498ULL || rel >= 0x4524c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004524c0 size=200 callers=0 calls=0
*/
void sub_4524c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4524c0ULL || rel >= 0x452588ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452588 size=88 callers=0 calls=0
*/
void sub_452588(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452588ULL || rel >= 0x4525e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004525e0 size=896 callers=0 calls=0
*/
void sub_4525e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4525e0ULL || rel >= 0x452960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452960 size=16 callers=0 calls=0
*/
void sub_452960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452960ULL || rel >= 0x452970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452970 size=144 callers=0 calls=0
*/
void sub_452970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452970ULL || rel >= 0x452a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452a00 size=80 callers=0 calls=0
*/
void sub_452a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452a00ULL || rel >= 0x452a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452a50 size=72 callers=0 calls=0
*/
void sub_452a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452a50ULL || rel >= 0x452a98ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452a98 size=136 callers=0 calls=0
*/
void sub_452a98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452a98ULL || rel >= 0x452b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452b20 size=296 callers=0 calls=0
*/
void sub_452b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452b20ULL || rel >= 0x452c48ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452c48 size=8 callers=0 calls=0
*/
void sub_452c48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452c48ULL || rel >= 0x452c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452c50 size=40 callers=0 calls=0
*/
void sub_452c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452c50ULL || rel >= 0x452c78ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452c78 size=200 callers=0 calls=0
*/
void sub_452c78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452c78ULL || rel >= 0x452d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452d40 size=80 callers=0 calls=0
*/
void sub_452d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452d40ULL || rel >= 0x452d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452d90 size=24 callers=0 calls=0
*/
void sub_452d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452d90ULL || rel >= 0x452da8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452da8 size=56 callers=0 calls=0
*/
void sub_452da8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452da8ULL || rel >= 0x452de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452de0 size=16 callers=0 calls=0
*/
void sub_452de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452de0ULL || rel >= 0x452df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452df0 size=16 callers=0 calls=0
*/
void sub_452df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452df0ULL || rel >= 0x452e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452e00 size=16 callers=0 calls=0
*/
void sub_452e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452e00ULL || rel >= 0x452e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452e10 size=16 callers=0 calls=0
*/
void sub_452e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452e10ULL || rel >= 0x452e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452e20 size=16 callers=0 calls=0
*/
void sub_452e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452e20ULL || rel >= 0x452e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452e30 size=32 callers=0 calls=0
*/
void sub_452e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452e30ULL || rel >= 0x452e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452e50 size=128 callers=0 calls=0
*/
void sub_452e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452e50ULL || rel >= 0x452ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452ed0 size=40 callers=0 calls=0
*/
void sub_452ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452ed0ULL || rel >= 0x452ef8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452ef8 size=32 callers=0 calls=0
*/
void sub_452ef8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452ef8ULL || rel >= 0x452f18ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452f18 size=16 callers=0 calls=0
*/
void sub_452f18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452f18ULL || rel >= 0x452f28ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452f28 size=56 callers=0 calls=0
*/
void sub_452f28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452f28ULL || rel >= 0x452f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452f60 size=48 callers=0 calls=0
*/
void sub_452f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452f60ULL || rel >= 0x452f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452f90 size=56 callers=0 calls=0
*/
void sub_452f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452f90ULL || rel >= 0x452fc8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452fc8 size=16 callers=0 calls=0
*/
void sub_452fc8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452fc8ULL || rel >= 0x452fd8ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452fd8 size=64 callers=0 calls=0
*/
void sub_452fd8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452fd8ULL || rel >= 0x453018ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00453018 size=88 callers=0 calls=0
*/
void sub_453018(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x453018ULL || rel >= 0x453070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

