/* subsdk1 functions 002fab10..00335790 (15 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 002fab10 size=448 callers=1324 calls=5
   calls: ARB_separate_shader_objects, mem_Alloc, sub_2f8020, sub_2f9880, sub_317880
*/
void sub_2fab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fab10ULL || rel >= 0x2facd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002facd0 size=272 callers=9 calls=3
   calls: ARB_separate_shader_objects, mem_Alloc, sub_2f8020
*/
void sub_2facd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2facd0ULL || rel >= 0x2fade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fade0 size=272 callers=797 calls=3
   calls: ARB_separate_shader_objects, mem_Alloc, sub_2f8020
*/
void sub_2fade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fade0ULL || rel >= 0x2faef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002faef0 size=272 callers=4 calls=3
   calls: sub_2a4f00, sub_2f8020, sub_2faef0
*/
void sub_2faef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2faef0ULL || rel >= 0x2fb000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fb000 size=1120 callers=12 calls=12
   calls: atomicCompSwap, sub_2f8020, sub_2f9880, sub_2f9980, sub_2f9c60, sub_2fab10, sub_2fade0, sub_3177b0, sub_317880, sub_317960, sub_3188c0, sub_31b710
*/
void sub_2fb000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fb000ULL || rel >= 0x2fb460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fb460 size=272 callers=147 calls=3
   calls: ARB_separate_shader_objects, mem_Alloc, sub_2f8020
*/
void sub_2fb460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fb460ULL || rel >= 0x2fb570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fb570 size=272 callers=1 calls=3
   calls: ARB_separate_shader_objects, mem_Alloc, sub_2f8020
*/
void sub_2fb570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fb570ULL || rel >= 0x2fb680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fb680 size=320 callers=7 calls=3
   calls: ARB_separate_shader_objects, mem_Alloc, sub_2f8020
*/
void sub_2fb680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fb680ULL || rel >= 0x2fb7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fb7c0 size=784 callers=1 calls=6
   calls: atomicCompSwap, sub_2f75e0, sub_2f7cf0, sub_2fab10, sub_2fade0, sub_31b710
*/
void sub_2fb7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fb7c0ULL || rel >= 0x2fbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fbad0 size=304 callers=0 calls=5
   calls: only_applies_to_pointers, sub_2f7cf0, sub_2f9880, sub_2f9980, sub_31b820
*/
void sub_2fbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fbad0ULL || rel >= 0x2fbc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fbc00 size=448 callers=11 calls=12
   calls: sub_2dacc0, sub_2db630, sub_2eef10, sub_2ef620, sub_2f7bc0, sub_2f9880, sub_2fab10, sub_317d30, sub_3188c0, sub_31b710, sub_31b820, sub_31c160
   ref: invalid initialization
   ref: too much data in type constructor
*/
void too_much_data_in_type_constructor_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fbc00ULL || rel >= 0x2fbdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fbdc0 size=160 callers=40 calls=3
   calls: mem_Alloc, sub_2f9210, sub_3188c0
*/
void sub_2fbdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fbdc0ULL || rel >= 0x2fbe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fbe60 size=256 callers=3 calls=2
   calls: sub_2f8020, sub_3188c0
*/
void sub_2fbe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fbe60ULL || rel >= 0x2fbf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fbf60 size=256 callers=9 calls=2
   calls: sub_2f8020, sub_3188c0
*/
void sub_2fbf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fbf60ULL || rel >= 0x2fc060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fc060 size=176 callers=123 calls=2
   calls: sub_2f8020, sub_3188c0
*/
void sub_2fc060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fc060ULL || rel >= 0x2fc110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fc110 size=288 callers=2 calls=2
   calls: sub_2f8020, sub_3188c0
*/
void sub_2fc110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fc110ULL || rel >= 0x2fc230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fc230 size=832 callers=2 calls=5
   calls: sub_2dacc0, sub_2f8020, sub_3177b0, sub_317880, sub_3188c0
   ref: invalid character '%c' in swizzle "%s"
   ref: swizzle mask element not present in operand "%s"
   ref: swizzle too long "%s"
*/
void swizzle_too_long_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fc230ULL || rel >= 0x2fc570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fc570 size=1568 callers=1 calls=5
   calls: sub_2dacc0, sub_2f8020, sub_3177b0, sub_317880, sub_3188c0
   ref: invalid character '%c' in swizzle "%s"
   ref: swizzle too long "%s"
*/
void swizzle_too_long_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fc570ULL || rel >= 0x2fcb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fcb90 size=416 callers=51 calls=4
   calls: ARB_separate_shader_objects, atomicCompSwap, sub_2f8020, sub_302f30
*/
void sub_2fcb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fcb90ULL || rel >= 0x2fcd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fcd30 size=320 callers=2 calls=4
   calls: ARB_separate_shader_objects, atomicCompSwap, sub_2f8020, sub_302f30
*/
void sub_2fcd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fcd30ULL || rel >= 0x2fce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fce70 size=336 callers=5 calls=3
   calls: mem_Alloc, sub_2a4f00, sub_2f8020
*/
void sub_2fce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fce70ULL || rel >= 0x2fcfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fcfc0 size=16 callers=2 calls=0
*/
void sub_2fcfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fcfc0ULL || rel >= 0x2fcfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fcfd0 size=192 callers=1 calls=1
   calls: sub_2f6e10
*/
void sub_2fcfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fcfd0ULL || rel >= 0x2fd090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd090 size=32 callers=0 calls=0
*/
void sub_2fd090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd090ULL || rel >= 0x2fd0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd0b0 size=32 callers=0 calls=0
*/
void sub_2fd0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd0b0ULL || rel >= 0x2fd0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd0d0 size=112 callers=6 calls=1
   calls: sub_2b8720
*/
void sub_2fd0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd0d0ULL || rel >= 0x2fd140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd140 size=64 callers=5 calls=1
   calls: sub_3188c0
*/
void sub_2fd140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd140ULL || rel >= 0x2fd180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd180 size=640 callers=1 calls=8
   calls: mem_CreatePool, sub_2ed1a0, sub_2ed440, sub_3175f0, sub_3177b0, sub_3183e0, sub_318520, sub_36e230
*/
void sub_2fd180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd180ULL || rel >= 0x2fd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd400 size=224 callers=1 calls=2
   calls: sub_2a4ba0, sub_2edb10
*/
void sub_2fd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd400ULL || rel >= 0x2fd4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd4e0 size=896 callers=2 calls=6
   calls: fn_s, sub_2f7060, sub_2fef50, sub_36c2d0, sub_36c7f0, sub_36c950
*/
void sub_2fd4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd4e0ULL || rel >= 0x2fd860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd860 size=96 callers=1 calls=1
   calls: sub_2f7060
*/
void sub_2fd860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd860ULL || rel >= 0x2fd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd8c0 size=208 callers=1 calls=4
   calls: mem_Alloc, sub_2ed1a0, sub_2ed320, sub_2ed440
*/
void sub_2fd8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd8c0ULL || rel >= 0x2fd990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fd990 size=272 callers=3 calls=3
   calls: sub_2ed320, sub_2fdaa0, sub_306070
*/
void sub_2fd990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fd990ULL || rel >= 0x2fdaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fdaa0 size=1504 callers=18 calls=14
   calls: fn_s, sub_2bb020, sub_2ed320, sub_2ed440, sub_2fd140, sub_2fdaa0, sub_2feba0, sub_3188c0, sub_36c2d0, sub_36c370, sub_36c7f0, sub_36c950
   ... +2 more
*/
void sub_2fdaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fdaa0ULL || rel >= 0x2fe080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fe080 size=2576 callers=14 calls=27
   calls: fn_s, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_2f4980, sub_2f7060, sub_2f9210, sub_2fd4e0, sub_2fd8c0, sub_2fd990, sub_2fdaa0, sub_2fea90
   ... +15 more
   ref: fn : %s
*/
void fn_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fe080ULL || rel >= 0x2fea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fea90 size=272 callers=2 calls=2
   calls: sub_2fd990, sub_36cf50
*/
void sub_2fea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fea90ULL || rel >= 0x2feba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002feba0 size=112 callers=3 calls=3
   calls: mem_Alloc, sub_2fdaa0, sub_2feba0
*/
void sub_2feba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2feba0ULL || rel >= 0x2fec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fec10 size=832 callers=5 calls=11
   calls: interface, s__d, sub_2ed320, sub_2ed440, sub_2fec10, sub_3027f0, sub_307ee0, sub_3184b0, sub_36d110, sub_36d550, sub_36da10
*/
void sub_2fec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fec10ULL || rel >= 0x2fef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002fef50 size=704 callers=10 calls=12
   calls: Can_t_convert_to_expr_s, sub_2ac450, sub_2fef50, sub_360ed0, sub_360f30, sub_360fa0, sub_361020, sub_3610b0, sub_361150, sub_3611b0, sub_361210, sub_361270
*/
void sub_2fef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2fef50ULL || rel >= 0x2ff210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 002ff210 size=4816 callers=96 calls=44
   calls: Can_t_convert_to_expr_s, Invalid_binary_operator, OpenGL_does_not_allow_selection_of_expressions_of_array, bogus_code_p, d_fatal_error_C9999, fn_s, sub_2ac440, sub_2dacc0, sub_2f9210, sub_2f9880, sub_2fd140, sub_2fdaa0
   ... +32 more
   ref: Can't convert to expr: %s
   ref: call to undefined function "%s"
*/
void Can_t_convert_to_expr_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x2ff210ULL || rel >= 0x3004e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003004e0 size=272 callers=4 calls=5
   calls: Can_t_convert_to_expr_s, sub_3004e0, sub_3224a0, sub_3604c0, sub_36d9a0
*/
void sub_3004e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3004e0ULL || rel >= 0x3005f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003005f0 size=176 callers=3 calls=3
   calls: Can_t_convert_to_expr_s, sub_3005f0, sub_3604c0
*/
void sub_3005f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3005f0ULL || rel >= 0x3006a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003006a0 size=304 callers=1 calls=1
   calls: fn_s
*/
void sub_3006a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3006a0ULL || rel >= 0x3007d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003007d0 size=448 callers=1 calls=4
   calls: sub_2ed320, sub_36cd20, sub_36e450, sub_36e900
*/
void sub_3007d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3007d0ULL || rel >= 0x300990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00300990 size=16 callers=0 calls=0
*/
void sub_300990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x300990ULL || rel >= 0x3009a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003009a0 size=112 callers=0 calls=1
   calls: sub_36e450
*/
void sub_3009a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3009a0ULL || rel >= 0x300a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00300a10 size=256 callers=1 calls=3
   calls: fn_s, mem_Alloc, sub_2f7410
*/
void sub_300a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x300a10ULL || rel >= 0x300b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00300b10 size=1872 callers=9 calls=11
   calls: bogus_code_p, interfaceNV, sub_2f7cf0, sub_2f9210, sub_301b60, sub_3188c0, sub_35f470, sub_35f6d0, sub_35f750, sub_35f810, sub_35f880
   ref: <bogus code %p>
*/
void bogus_code_p(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x300b10ULL || rel >= 0x301260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00301260 size=128 callers=1 calls=4
   calls: bogus_code_p, sub_35f390, sub_35f400, sub_35f430
*/
void sub_301260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x301260ULL || rel >= 0x3012e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003012e0 size=144 callers=0 calls=4
   calls: bogus_code_p, sub_35f6d0, sub_35f750, sub_35f880
*/
void sub_3012e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3012e0ULL || rel >= 0x301370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00301370 size=2032 callers=34 calls=13
   calls: bad_samplerkind_value, bad_samplerkind_value_2, bogus_code_p, interfaceNV, sub_3188c0, sub_31b710, sub_31b820, sub_35f390, sub_35f400, sub_35f430, sub_35f470, sub_35f6d0
   ... +1 more
   ref: %stexture%s
   ref: interfaceNV
   ref: uniform
   ref: <error>
   ref: <bogus type %p>
   ref: <invalid prim %x>
   ref: template 
   ref: %svec%d
*/
void interfaceNV(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x301370ULL || rel >= 0x301b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00301b60 size=96 callers=3 calls=1
   calls: sub_301b60
*/
void sub_301b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x301b60ULL || rel >= 0x301bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00301bc0 size=336 callers=2 calls=1
   calls: typedef_fn
   ref: <bogus scope %p>
*/
void bogus_scope_p(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x301bc0ULL || rel >= 0x301d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00301d10 size=1984 callers=5 calls=12
   calls: bogus_code_p, bogus_scope_p, interfaceNV, sub_2b8720, sub_35f390, sub_35f400, sub_35f430, sub_35f470, sub_35f6d0, sub_35f750, sub_35f810, typedef_fn
   ref: <bogus symbol %p>
   ref: const 
   ref: template<
   ref: <sym kind = %d>
   ref:  <!invalid annotation %p> 
   ref: {    // <stdlib>
   ref: typedef 
*/
void typedef_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x301d10ULL || rel >= 0x3024d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003024d0 size=16 callers=0 calls=0
*/
void sub_3024d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3024d0ULL || rel >= 0x3024e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003024e0 size=16 callers=0 calls=0
*/
void sub_3024e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3024e0ULL || rel >= 0x3024f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003024f0 size=336 callers=1 calls=3
   calls: mem_AddCleanup, mem_Alloc, mem_CreatePool
*/
void sub_3024f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3024f0ULL || rel >= 0x302640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302640 size=272 callers=0 calls=1
   calls: sub_2edb10
*/
void sub_302640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302640ULL || rel >= 0x302750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302750 size=160 callers=0 calls=0
*/
void sub_302750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302750ULL || rel >= 0x3027f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003027f0 size=112 callers=21 calls=2
   calls: sub_3024f0, sub_302860
*/
void sub_3027f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3027f0ULL || rel >= 0x302860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302860 size=304 callers=2 calls=1
   calls: sub_2d6540
*/
void sub_302860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302860ULL || rel >= 0x302990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302990 size=48 callers=0 calls=0
*/
void sub_302990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302990ULL || rel >= 0x3029c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003029c0 size=96 callers=18 calls=1
   calls: sub_302860
*/
void sub_3029c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3029c0ULL || rel >= 0x302a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302a20 size=64 callers=24 calls=0
*/
void sub_302a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302a20ULL || rel >= 0x302a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302a60 size=672 callers=109 calls=7
   calls: mem_Alloc, storage_class_conflicts_with_previous_declaration_of_s, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_3608f0, the_name_s_is_already_defined_at_s_d
   ref: _%s_%d
*/
void s__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302a60ULL || rel >= 0x302d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302d00 size=160 callers=1 calls=2
   calls: sub_2ed320, sub_2ed440
*/
void sub_302d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302d00ULL || rel >= 0x302da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302da0 size=128 callers=5 calls=2
   calls: sub_2ed1a0, sub_2ed440
*/
void sub_302da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302da0ULL || rel >= 0x302e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302e20 size=192 callers=61 calls=2
   calls: sub_2b3ae0, sub_2ed320
*/
void sub_302e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302e20ULL || rel >= 0x302ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302ee0 size=80 callers=2 calls=1
   calls: sub_2ed320
*/
void sub_302ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302ee0ULL || rel >= 0x302f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302f30 size=192 callers=62 calls=2
   calls: sub_2b3ae0, sub_2ed320
*/
void sub_302f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302f30ULL || rel >= 0x302ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00302ff0 size=96 callers=2 calls=1
   calls: sub_2ed320
*/
void sub_302ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x302ff0ULL || rel >= 0x303050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303050 size=32 callers=9 calls=1
   calls: sub_302f30
*/
void sub_303050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303050ULL || rel >= 0x303070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303070 size=96 callers=6 calls=1
   calls: sub_2ed320
*/
void sub_303070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303070ULL || rel >= 0x3030d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003030d0 size=544 callers=5 calls=6
   calls: sub_2edb70, sub_346f20, sub_346fb0, sub_346fd0, sub_347170, unnamed_26
*/
void sub_3030d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3030d0ULL || rel >= 0x3032f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003032f0 size=320 callers=1 calls=4
   calls: s__d, sub_2b3ae0, sub_2ed320, sub_3608f0
   ref: %.*s.%d
*/
void unnamed_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3032f0ULL || rel >= 0x303430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303430 size=144 callers=1 calls=1
   calls: sub_2db630
   ref: layout(%s = %d) exceeds maximum value
   ref: xfb_buffer
*/
void xfb_buffer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303430ULL || rel >= 0x3034c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003034c0 size=192 callers=1 calls=1
   calls: sub_2db630
   ref: layout(%s = %d) exceeds maximum value
   ref: layout qualifier '%s' conflicts with previous declaration
   ref: xfb_stride
*/
void xfb_stride(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3034c0ULL || rel >= 0x303580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303580 size=112 callers=0 calls=2
   calls: sub_2db630, sub_3186b0
   ref: invalid value '%d' for layout qualifier '%s'
   ref: xfb_offset
*/
void xfb_offset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303580ULL || rel >= 0x3035f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003035f0 size=2400 callers=6 calls=3
   calls: sub_2dacc0, sub_2db630, sub_3595e0
   ref: layout(%s = %d) exceeds maximum value
   ref: layout(xfb_buffer)
   ref: layout(num_views)
   ref: layout qualifier '%s' conflicts with previous declaration
   ref: EXT_shader_io_blocks or OES_shader_io_blocks
   ref: layout specifier '%s' conflicts with previous declaration
   ref: NV_command_list
   ref: OVR_multiview
*/
void EXT_bindless_texture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3035f0ULL || rel >= 0x303f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00303f50 size=224 callers=4 calls=5
   calls: mem_AddCleanup, mem_Alloc, sub_2ed1a0, sub_2ed320, sub_2ed440
*/
void sub_303f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x303f50ULL || rel >= 0x304030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00304030 size=128 callers=4 calls=1
   calls: mem_Alloc
*/
void sub_304030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x304030ULL || rel >= 0x3040b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003040b0 size=64 callers=12 calls=1
   calls: mem_Alloc
*/
void sub_3040b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3040b0ULL || rel >= 0x3040f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003040f0 size=192 callers=1 calls=2
   calls: sub_2f97b0, sub_302f30
*/
void sub_3040f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3040f0ULL || rel >= 0x3041b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003041b0 size=64 callers=8 calls=0
*/
void sub_3041b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3041b0ULL || rel >= 0x3041f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003041f0 size=656 callers=1 calls=1
   calls: sub_2db630
   ref: subroutine
   ref: %s doesn't allow use of reserved word %s
   ref: noperspective
   ref: GLSL ES
*/
void noperspective(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3041f0ULL || rel >= 0x304480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00304480 size=176 callers=2 calls=1
   calls: sub_302f30
   ref: stdlib "gl_" variables are not accessible
*/
void stdlib_gl__variables_are_not_accessible(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x304480ULL || rel >= 0x304530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00304530 size=4208 callers=9 calls=22
   calls: mem_AddCleanup, sub_2a4420, sub_2a47d0, sub_2a48c0, sub_2a5d30, sub_2b8720, sub_2dacc0, sub_2db570, sub_2db630, sub_2ed1a0, sub_2ed320, sub_2ed440
   ... +10 more
   ref: OES_viewport_array
   ref: ARB_shader_viewport_layer_array
   ref: gl_ViewportIndex
   ref: OpenGL/ES
   ref: ARB_fragment_layer_viewport
   ref: %s doesn't allow use of reserved word %s
   ref: OES_geometry_shader
   ref: gl_PointSize
*/
void AMD_vertex_shader_viewport_index(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x304530ULL || rel >= 0x3055a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003055a0 size=32 callers=1 calls=0
*/
void sub_3055a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3055a0ULL || rel >= 0x3055c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003055c0 size=880 callers=2 calls=5
   calls: sub_2dacc0, sub_2ee320, sub_31b2a0, sub_362310, sub_362390
   ref: overloaded function declaration "%s" with mismatched profile qualifiers
   ref: overloaded function declaration "%s" differs only in return type
   ref: overloaded function declaration "%s" differs only in parameter qualifiers
   ref: storage class conflicts with previous declaration of %s
*/
void storage_class_conflicts_with_previous_declaration_of_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3055c0ULL || rel >= 0x305930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305930 size=1088 callers=4 calls=4
   calls: sub_2f9ff0, sub_31b2a0, sub_354520, sub_359700
   ref: the name "%s" is already defined at %s(%d)
   ref: declaration of "%s" conflicts with previous declaration at %s(%d)
*/
void the_name_s_is_already_defined_at_s_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305930ULL || rel >= 0x305d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00305d70 size=768 callers=0 calls=11
   calls: mem_AddCleanup, sub_2a4d70, sub_2dacc0, sub_2db630, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_3188a0, sub_3608c0, sub_3608f0, unrecognized_profile_specifier_s_2
   ref: offset
   ref: COUNTER[%d]%d
   ref: (%s = %d, %s = %d) already used
   ref: binding needs to be specified for atomic counters
   ref: binding
*/
void binding(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x305d70ULL || rel >= 0x306070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00306070 size=64 callers=236 calls=1
   calls: sub_2ed320
*/
void sub_306070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x306070ULL || rel >= 0x3060b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003060b0 size=256 callers=0 calls=3
   calls: sub_3608c0, sub_3608f0, unrecognized_profile_specifier_s_2
   ref: ATTR%d
   ref: TEXUNIT[%d]
*/
void ATTR_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3060b0ULL || rel >= 0x3061b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003061b0 size=208 callers=0 calls=3
   calls: sub_3608c0, sub_3608f0, unrecognized_profile_specifier_s_2
   ref: ATTR%d
   ref: TEXUNIT_EXTERNAL[%d]
*/
void ATTR_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3061b0ULL || rel >= 0x306280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00306280 size=480 callers=0 calls=7
   calls: mem_AddCleanup, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_3608c0, sub_3608f0, unrecognized_profile_specifier_s_2
   ref: IMAGE[%d]
*/
void IMAGE_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x306280ULL || rel >= 0x306460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00306460 size=560 callers=4 calls=8
   calls: mem_AddCleanup, sub_2dacc0, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_3608c0, sub_3608f0, unrecognized_profile_specifier_s_2
   ref: (%s = %d) already used
   ref: location
*/
void location(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x306460ULL || rel >= 0x306690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00306690 size=512 callers=2 calls=2
   calls: sub_2ed320, sub_3595e0
   ref: (location = %d, component = %d) already used
*/
void location_d_component_d_already_used(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x306690ULL || rel >= 0x306890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00306890 size=800 callers=3 calls=6
   calls: cannot_fit_s_starting_from_component_d, location_d_component_d_already_used, sub_2db630, sub_3188c0, sub_31b820, sub_3595e0
   ref: cannot fit '%s' starting from component '%d'
*/
void cannot_fit_s_starting_from_component_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x306890ULL || rel >= 0x306bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00306bb0 size=1920 callers=2 calls=17
   calls: cannot_fit_s_starting_from_component_d, mem_AddCleanup, sub_2db630, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_3188c0, sub_31b710, sub_31b820, sub_3595e0, sub_359610, sub_359670
   ... +5 more
   ref: Expected same %s for (location = %d) -- first definition at %s(%d)
   ref: ATTR%d.%s
   ref: ATTR%d
   ref: VERTEXOUT[].ATTR
   ref: component
   ref: underlying base data type
   ref: 'dvec%d %s'can only be declared without a component
   ref: VERTEX[].ATTR
*/
void component(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x306bb0ULL || rel >= 0x307330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00307330 size=304 callers=1 calls=6
   calls: mem_AddCleanup, sub_2ed1a0, sub_2ed320, sub_3608c0, sub_3608f0, unrecognized_profile_specifier_s_2
   ref: (%s = %d) already used
*/
void s_d_already_used_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x307330ULL || rel >= 0x307460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00307460 size=240 callers=4 calls=6
   calls: mem_AddCleanup, sub_2ed1a0, sub_2ed320, sub_3608c0, sub_3608f0, unrecognized_profile_specifier_s_2
*/
void sub_307460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x307460ULL || rel >= 0x307550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00307550 size=224 callers=1 calls=4
   calls: location_2, sub_2dacc0, sub_2ed320, sub_2ed440
   ref: (%s = %d) already used
   ref: location
*/
void location_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x307550ULL || rel >= 0x307630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00307630 size=32 callers=1 calls=0
*/
void sub_307630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x307630ULL || rel >= 0x307650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00307650 size=2192 callers=11 calls=14
   calls: mem_Alloc, precision_specifier_with_invalid_type, sub_2a4d70, sub_2dacc0, sub_2db630, sub_2f96e0, sub_317960, sub_3188c0, sub_31b710, sub_31c0c0, sub_31c250, sub_3608c0
   ... +2 more
   ref: OpenGL ES
   ref: interfaceNV
   ref: OpenGL first class arrays require #version 120
   ref: GLSL/ES
   ref: layout row_major or column_major applied to '%s', expecting uniform buffer object member
   ref: %s does not allow %s
   ref: using the keyword 'subroutine'
   ref: OpenGL does not allow usage of keyword '%s'
*/
void interfaceNV_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x307650ULL || rel >= 0x307ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00307ee0 size=192 callers=69 calls=2
   calls: mem_Alloc, sub_2f96e0
*/
void sub_307ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x307ee0ULL || rel >= 0x307fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00307fa0 size=160 callers=8 calls=1
   calls: sub_2a4d70
*/
void sub_307fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x307fa0ULL || rel >= 0x308040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00308040 size=160 callers=2 calls=1
   calls: syntax_error_at_token_s
*/
void sub_308040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x308040ULL || rel >= 0x3080e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003080e0 size=240 callers=3 calls=1
   calls: sub_2dacc0
   ref: profile specifier "%s" not allowed on non-function "%s"
   ref: syntax error at token "%s"
*/
void syntax_error_at_token_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3080e0ULL || rel >= 0x3081d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003081d0 size=608 callers=2 calls=9
   calls: input_attachment_index, sub_2bb020, sub_2dacc0, sub_2f6e10, sub_2f7cf0, sub_2fade0, sub_302a20, sub_3030d0, sub_308430
   ref: function "%s" has no return statement
   ref: function "%s" has no statements
*/
void function_s_has_no_statements(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3081d0ULL || rel >= 0x308430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00308430 size=112 callers=2 calls=1
   calls: sub_308430
*/
void sub_308430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x308430ULL || rel >= 0x3084a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003084a0 size=144 callers=2 calls=3
   calls: mem_Alloc, sub_2f96e0, sub_3177b0
*/
void sub_3084a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3084a0ULL || rel >= 0x308530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00308530 size=672 callers=1 calls=2
   calls: sub_2dacc0, sub_302f30
   ref: no program defined
   ref: one program per compilation, program "%s" also defined
*/
void no_program_defined_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x308530ULL || rel >= 0x3087d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003087d0 size=608 callers=1 calls=6
   calls: mem_Alloc, s__d, sub_2f96e0, sub_3027f0, sub_3029c0, sub_303050
*/
void sub_3087d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3087d0ULL || rel >= 0x308a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00308a30 size=464 callers=3 calls=2
   calls: sub_2dacc0, sub_2db630
   ref: qualifier "%s" cannot apply to this type
   ref: uniform
   ref: %s: function %s not allowed
   ref: unsized array type not allowed "%s"
   ref: type parameters
   ref: OpenGL does not allow the 'attribute' qualifier on function return types
   ref: declaration in non global scope
*/
void uniform(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x308a30ULL || rel >= 0x308c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00308c00 size=1136 callers=3 calls=9
   calls: ES_requires_precision_specifier_on_this_s_type_there_is, s__d, sub_2d64a0, sub_2dacc0, sub_3027f0, sub_3029c0, sub_303f50, sub_31b2a0, sub_3608f0
   ref: function "%s" is already defined at %s(%d)
   ref: abstract parameters not allowed in function definition "%s"
   ref: fn : %s
   ref: "%s" is not a function
   ref: function %s does not match type of %s
*/
void fn_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x308c00ULL || rel >= 0x309070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00309070 size=592 callers=2 calls=6
   calls: sub_2dacc0, sub_2db4f0, sub_2db630, sub_3188c0, sub_359700, syntax_error_at_token_s_2
   ref: OpenGL/ES requires precision specifier on this %s type (there is no default precision)
   ref: "%s" semantics in forward declaration ignored
   ref: OpenGL requires main to take no parameters
   ref: in and out only apply to formal parameters "%s"
   ref: OpenGL requires main to return void
   ref: OpenGL does not allow profile specifiers on declarations
*/
void ES_requires_precision_specifier_on_this_s_type_there_is(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x309070ULL || rel >= 0x3092c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003092c0 size=128 callers=2 calls=1
   calls: sub_2dacc0
   ref: "%s::" is not a valid scoping prefix
*/
void s_is_not_a_valid_scoping_prefix(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3092c0ULL || rel >= 0x309340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00309340 size=256 callers=7 calls=1
   calls: noperspective
   ref: syntax error at token "%s"
*/
void syntax_error_at_token_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x309340ULL || rel >= 0x309440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00309440 size=112 callers=5 calls=2
   calls: mem_Alloc, sub_2b3ae0
*/
void sub_309440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x309440ULL || rel >= 0x3094b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003094b0 size=3120 callers=8 calls=35
   calls: ES_requires_precision_specifier_on_this_s_type_there_is, OES_texture_storage_multisample_2d_array, atomicCompSwap, input_attachment_index, mem_Alloc, qualifier_s_cannot_apply_to_this_type, s__d, sub_2b3ae0, sub_2bb020, sub_2d64a0, sub_2dacc0, sub_2db630
   ... +23 more
   ref: non-Ctor initialization of arrays
   ref: initialization of extern variable "%s"
   ref: OpenGL ES
   ref: initialization of non-variable "%s"
   ref: atomic counter '%s' should be declared in global scope
   ref: %s does not allow %s
   ref: OpenGL/ES does not allow identifier of length > 1024
   ref: invalid initialization
*/
void struct_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3094b0ULL || rel >= 0x30a0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a0e0 size=160 callers=10 calls=1
   calls: sub_302e20
*/
void sub_30a0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a0e0ULL || rel >= 0x30a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030a180 size=8384 callers=1 calls=37
   calls: AMD_vertex_shader_viewport_index, OES_texture_storage_multisample_2d_array_2, geometry_2, interfaceNV, noperspective_2, or_extension_GL__s_enable, sampler, sub_2b7e10, sub_2dacc0, sub_2db630, sub_2ed320, sub_302e20
   ... +25 more
   ref: qualifier "%s" cannot apply to this type
   ref: OpenGL requires array parameters of constant size
   ref: OpenGL does not allow global inout variables
   ref: OpenGL/ES requires precision specifier on this %s type (there is no default precision)
   ref: in and out can't be used on local variable "%s"
   ref: __internal modifier only for functions "%s"
   ref: OpenGL does not allow attributes of type %s
   ref: OpenGL does not allow declaring buffer variable '%s' in the global scope. Use buffer blocks instead
*/
void OES_texture_storage_multisample_2d_array(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30a180ULL || rel >= 0x30c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c240 size=304 callers=3 calls=3
   calls: sub_2f9880, sub_30c240, unpack_2uint
*/
void sub_30c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c240ULL || rel >= 0x30c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c370 size=208 callers=2 calls=3
   calls: noperspective_2, sub_2dacc0, sub_317d30
   ref: qualifier "%s" cannot apply to this type
*/
void qualifier_s_cannot_apply_to_this_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c370ULL || rel >= 0x30c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c440 size=304 callers=2 calls=3
   calls: sub_310b80, sub_359610, sub_3596a0
   ref: unsized array type not allowed "%s"
*/
void unsized_array_type_not_allowed_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c440ULL || rel >= 0x30c570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c570 size=128 callers=6 calls=2
   calls: sub_2f6e10, sub_2f7fb0
*/
void sub_30c570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c570ULL || rel >= 0x30c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030c5f0 size=14048 callers=2 calls=21
   calls: d_fatal_error_C9999, mem_Alloc, s__d, sub_2a4420, sub_2a45a0, sub_2f94b0, sub_2f96e0, sub_2fc060, sub_3027f0, sub_3029c0, sub_302e20, sub_302f30
   ... +9 more
   ref: 333333
   ref: uint16
   ref: float64
   ref: string
   ref: cfloat
   ref: InitSymbolTable -- Current scope dirty
   ref: float32
   ref: float16
*/
void atomic_uint(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30c5f0ULL || rel >= 0x30fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0030fcd0 size=2720 callers=19 calls=7
   calls: mem_Alloc, s__d, sub_2a45a0, sub_2f96e0, sub_3177b0, sub_317880, sub_3608f0
   ref: %c%svec%d
   ref: %svec%d
   ref: %s%dx%d
   ref: %smat%d
   ref: %smat%dx%d
*/
void svec_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x30fcd0ULL || rel >= 0x310770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310770 size=352 callers=47 calls=5
   calls: mem_Alloc, s__d, sub_2a45a0, sub_2f96e0, sub_3183e0
*/
void sub_310770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310770ULL || rel >= 0x3108d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003108d0 size=368 callers=25 calls=4
   calls: mem_Alloc, s__d, sub_2a45a0, sub_2f96e0
*/
void sub_3108d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3108d0ULL || rel >= 0x310a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310a40 size=320 callers=82 calls=5
   calls: mem_Alloc, s__d, sub_2a45a0, sub_2f96e0, sub_318520
*/
void sub_310a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310a40ULL || rel >= 0x310b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310b80 size=384 callers=5 calls=2
   calls: sub_2ed320, sub_31b820
*/
void sub_310b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310b80ULL || rel >= 0x310d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310d00 size=256 callers=29 calls=5
   calls: mem_Alloc, s__d, sub_2f96e0, sub_302e20, sub_3608f0
   ref: @TMP%d
*/
void TMP_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310d00ULL || rel >= 0x310e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00310e00 size=1040 callers=5 calls=8
   calls: OES_texture_storage_multisample_2d_array_2, qualifier_s_cannot_apply_to_this_type, sub_2dacc0, sub_2db630, sub_2f6e10, sub_317d30, sub_3188a0, syntax_error_at_token_s_2
   ref: OpenGL requires array parameters of constant size
   ref: OpenGL does not allow a parameter with the "%s" qualifier
   ref: varying
   ref: uniform
   ref: invariant
   ref: function type not allowed for parameter "%s"
   ref: OpenGL does not allow a parameter to be a buffer
   ref: __remap_nosize
*/
void invariant(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x310e00ULL || rel >= 0x311210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311210 size=1008 callers=4 calls=6
   calls: r11f_g11f_b10f, sub_2dacc0, sub_2db630, sub_302f30, sub_31c3a0, sub_3608f0
   ref: %s%s%s
   ref: OES_texture_cube_map_array
   ref: can't apply layout(size1x8) to float image
   ref: _bindless
   ref: EXT_texture_cube_map_array
   ref: uimage
   ref: ... or #extension GL_%s : enable
   ref: OES_texture_buffer
*/
void OES_texture_storage_multisample_2d_array_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311210ULL || rel >= 0x311600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311600 size=64 callers=1 calls=1
   calls: d_fatal_error_C9999
   ref: ReuseSymbolTable -- Current scope dirty
*/
void ReuseSymbolTable_Current_scope_dirty(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311600ULL || rel >= 0x311640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311640 size=64 callers=1 calls=1
   calls: sub_2db630
   ref: OpenGL does not allow Cg-style annotations
*/
void OpenGL_does_not_allow_Cg_style_annotations(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311640ULL || rel >= 0x311680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311680 size=16 callers=1 calls=0
*/
void sub_311680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311680ULL || rel >= 0x311690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311690 size=368 callers=0 calls=5
   calls: mem_Alloc, s__d, sub_2b8720, sub_2f96e0, sub_302f30
   ref: No variable named %s
*/
void No_variable_named_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311690ULL || rel >= 0x311800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311800 size=16 callers=1 calls=0
*/
void sub_311800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311800ULL || rel >= 0x311810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311810 size=64 callers=1 calls=0
*/
void sub_311810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311810ULL || rel >= 0x311850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311850 size=464 callers=1 calls=5
   calls: noperspective_2, sub_2dacc0, sub_2db4f0, sub_2db570, sub_2db630
   ref: domain specified twice
   ref: OpenGL does not allow '%s' after a type specifier
   ref: '%s' is deprecated, use '%s' instead
   ref: OpenGL does not allow '%s' after '%s'
   ref: in/out
   ref: domain declaration conflicts with previous declaration
*/
void unnamed_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311850ULL || rel >= 0x311a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311a20 size=400 callers=18 calls=0
   ref: coherent
   ref: extern
   ref: varying
   ref: uniform
   ref: invariant
   ref: bindable
   ref: attribute
   ref: smooth
*/
void noperspective_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311a20ULL || rel >= 0x311bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311bb0 size=704 callers=3 calls=5
   calls: sub_2dacc0, sub_302f30, sub_318230, sub_318310, sub_318630
   ref: '...' not supported
   ref: %s: function %s not allowed
   ref: void must be only parameter
   ref: (builtin) redefinition/overload
   ref: %s: typedefs of function types not allowed
*/
void overload(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311bb0ULL || rel >= 0x311e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311e70 size=272 callers=1 calls=1
   calls: sub_2dacc0
   ref: subroutineEXT
   ref: syntax error at token "%s"
   ref: %s is not a subroutine type
*/
void subroutineEXT(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311e70ULL || rel >= 0x311f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00311f80 size=752 callers=1 calls=1
   calls: sub_2dacc0
   ref: can't apply layout(%s) to image type "%s"
   ref: rgb10_a2ui
   ref: r11_g11_b10
   ref: r11f_g11f_b10f
   ref: rgb10_a2
*/
void r11f_g11f_b10f(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x311f80ULL || rel >= 0x312270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312270 size=32 callers=2 calls=0
*/
void sub_312270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312270ULL || rel >= 0x312290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312290 size=2240 callers=1 calls=10
   calls: OES_texture_storage_multisample_2d_array_2, sub_2b7e60, sub_2dacc0, sub_2db630, sub_317c50, sub_317d30, sub_3188a0, sub_31c3a0, sub_31c4b0, sub_359700
   ref: NV_geometry_shader_passthrough
   ref: layout(input_attachment_index)
   ref: layout qualifier '%s' only permitted on the (non-variable) '%s' interface qualifier
   ref: invalid value '%d' for layout qualifier '%s'
   ref: no value specified for layout qualifier '%s'
   ref: unknown layout specifier '%s = %d'
   ref: KHR_vulkan_glsl
   ref: EXT_conservative_depth
*/
void NV_stereo_view_rendering_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312290ULL || rel >= 0x312b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312b50 size=208 callers=1 calls=2
   calls: sub_2db630, sub_3176c0
   ref: NV_shader_buffer_load
   ref: pointers
   ref: %s requires "#extension GL_%s : enable" before use
*/
void NV_shader_buffer_load_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312b50ULL || rel >= 0x312c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312c20 size=240 callers=1 calls=3
   calls: mem_Alloc, sub_2db4f0, sub_2ed320
   ref: unrecognized profile specifier "%s"
*/
void unrecognized_profile_specifier_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312c20ULL || rel >= 0x312d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00312d10 size=1280 callers=1 calls=4
   calls: noperspective_2, sub_2dacc0, sub_2db4f0, sub_2db630
   ref: PERVERTEX
   ref: __taskNV
   ref: qualifier specified twice
   ref: varying
   ref: const and out qualifiers not allowed together
   ref: __perviewNV
   ref: invariant
   ref: __perprimitiveNV
*/
void EXT_gpu_shader5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x312d10ULL || rel >= 0x313210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313210 size=224 callers=4 calls=4
   calls: NOPERSPECTIVE_3, sub_2a42a0, sub_2db630, sub_2e9890
   ref: OpenGL does not allow Cg-style semantics
*/
void OpenGL_does_not_allow_Cg_style_semantics(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313210ULL || rel >= 0x3132f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003132f0 size=128 callers=1 calls=2
   calls: mem_Alloc, sub_2b3ae0
*/
void sub_3132f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3132f0ULL || rel >= 0x313370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313370 size=320 callers=1 calls=3
   calls: noperspective_2, sub_2dacc0, sub_2db630
   ref: storage class specified twice
   ref: storage class conflicts with previous specification
   ref: OpenGL does not allow '%s' after a type specifier
   ref: OpenGL does not allow '%s' after '%s'
*/
void storage_class_specified_twice(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313370ULL || rel >= 0x3134b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003134b0 size=32 callers=3 calls=0
*/
void sub_3134b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3134b0ULL || rel >= 0x3134d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003134d0 size=96 callers=1 calls=0
   ref: syntax valid only on multi-sample textures
*/
void syntax_valid_only_on_multi_sample_textures(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3134d0ULL || rel >= 0x313530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313530 size=208 callers=1 calls=2
   calls: sub_2dacc0, sub_2db630
   ref: subroutine
   ref: Keyword '%s' missing in '%s'
   ref: repeated type attribute
   ref: subroutine uniform declaration
*/
void subroutine(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313530ULL || rel >= 0x313600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313600 size=112 callers=2 calls=1
   calls: sub_313600
*/
void sub_313600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313600ULL || rel >= 0x313670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313670 size=128 callers=1 calls=2
   calls: sub_2dacc0, sub_313600
   ref: repeated type attribute
*/
void repeated_type_attribute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313670ULL || rel >= 0x3136f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003136f0 size=176 callers=2 calls=1
   calls: sub_3188c0
*/
void sub_3136f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3136f0ULL || rel >= 0x3137a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003137a0 size=704 callers=3 calls=6
   calls: noperspective_2, sub_2dacc0, sub_2db630, sub_3136f0, sub_3188c0, sub_31bef0
   ref: OpenGL ES
   ref: multiple precision specifiers
   ref: %s does not allow %s
   ref: double-precision types
   ref: OpenGL does not allow '%s' after a type specifier
   ref: OpenGL does not allow '%s' after '%s'
   ref: precision specifier with invalid type
*/
void precision_specifier_with_invalid_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3137a0ULL || rel >= 0x313a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313a60 size=80 callers=2 calls=3
   calls: sub_3027f0, sub_3029c0, sub_317480
*/
void sub_313a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313a60ULL || rel >= 0x313ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313ab0 size=496 callers=2 calls=2
   calls: sub_2db630, sub_2ed320
   ref: qualifier "%s" cannot apply to this type
   ref: OpenGL does not allow memory qualifiers on '%s' storage block
*/
void qualifier_s_cannot_apply_to_this_type_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313ab0ULL || rel >= 0x313ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313ca0 size=544 callers=2 calls=2
   calls: sub_2a4d70, sub_2ed320
*/
void sub_313ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313ca0ULL || rel >= 0x313ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00313ec0 size=768 callers=2 calls=10
   calls: sub_2db630, sub_2ed320, sub_3188a0, sub_31b710, sub_31b820, sub_3595e0, sub_359610, sub_359640, sub_359670, sub_359700
   ref: OpenGL/ES
   ref: %s does not allow %s
   ref: OpenGL does not allow input blocks in vertex shaders
   ref: input array declarations with size not equal to gl_MaxPatchVertices
   ref: OpenGL does not allow output blocks in fragment shaders
   ref: Storage block %s requires an instance for this profile 
   ref: ... or #extension GL_%s : enable
*/
void unnamed_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x313ec0ULL || rel >= 0x3141c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003141c0 size=1328 callers=2 calls=11
   calls: or_extension_GL__s_enable, qualifier_s_cannot_apply_to_this_type_2, s__d, sub_2a4d70, sub_2db630, sub_2ed320, sub_302f30, sub_31dda0, syntax_error_at_token_s, syntax_error_at_token_s_2, unnamed_28
   ref: the name "%s" is already defined at %s(%d)
   ref: OpenGL does not allow multi dimensional arrays on interface blocks
   ref: OpenGL block redeclarations cannot declare new members
*/
void the_name_s_is_already_defined_at_s_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3141c0ULL || rel >= 0x3146f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003146f0 size=832 callers=4 calls=5
   calls: sub_2db630, sub_359610, sub_3596a0, sub_359700, sub_3608f0
   ref: ... or #extension GL_%s : enable
   ref: input %s block must be redeclared with instance name gl_in[] 
   ref: OpenGL reserves names starting with 'gl_'
*/
void or_extension_GL__s_enable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3146f0ULL || rel >= 0x314a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00314a30 size=2352 callers=1 calls=15
   calls: PATCH_d, qualifier_s_cannot_apply_to_this_type_2, s__d, sub_2a4d70, sub_2dacc0, sub_2db630, sub_2ed320, sub_313ca0, sub_317d30, sub_3188a0, sub_31b710, sub_31b820
   ... +3 more
   ref: geometry
   ref: OpenGL/ES
   ref: %s does not allow %s
   ref: inputs
   ref: Storage Block '%s' without location qualifier should either have none or all members with location q
   ref: opaque types within interface blocks
   ref: OpenGL does not allow having both readonly and writeonly qualifiers on a variable
   ref: buffer block
*/
void xfb_buffer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x314a30ULL || rel >= 0x315360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315360 size=928 callers=2 calls=8
   calls: or_extension_GL__s_enable, sub_2db630, sub_2ed320, sub_302f30, sub_3608c0, syntax_error_at_token_s_2, unnamed_28, xfb_buffer_2
   ref: the name "%s" is already defined at %s(%d)
   ref: OpenGL ES
   ref: %s does not allow %s
   ref: location qualifier on builtins
   ref: OpenGL block redeclarations cannot declare new members
*/
void location_qualifier_on_builtins(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315360ULL || rel >= 0x315700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315700 size=96 callers=4 calls=2
   calls: mem_Alloc, sub_2b3ae0
*/
void sub_315700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315700ULL || rel >= 0x315760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315760 size=288 callers=1 calls=6
   calls: mem_Alloc, sub_2b3ae0, sub_2bb020, sub_2dacc0, sub_2f9880, sub_3188c0
   ref: non constant expression in layout value
*/
void non_constant_expression_in_layout_value(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315760ULL || rel >= 0x315880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315880 size=160 callers=1 calls=2
   calls: mem_Alloc, sub_2b3ae0
*/
void sub_315880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315880ULL || rel >= 0x315920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315920 size=144 callers=2 calls=1
   calls: sub_2db630
   ref: %s requires "#version %d" or later
   ref: ARB_shader_atomic_counters
   ref: ... or #extension GL_%s : enable
*/
void ARB_shader_atomic_counters(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315920ULL || rel >= 0x3159b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003159b0 size=144 callers=1 calls=1
   calls: sub_2db630
   ref: %s requires "#version %d" or later
   ref: ... or #extension GL_%s : enable
   ref: ARB_shading_language_420pack
*/
void ARB_shading_language_420pack(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3159b0ULL || rel >= 0x315a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315a40 size=144 callers=1 calls=1
   calls: sub_2db630
   ref: %s requires "#version %d" or later
   ref: ... or #extension GL_%s : enable
   ref: ARB_shading_language_420pack
*/
void ARB_shading_language_420pack_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315a40ULL || rel >= 0x315ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00315ad0 size=1520 callers=2 calls=11
   calls: input_attachment_index, mem_Alloc, s__d, sub_2db630, sub_2f96e0, sub_3027f0, sub_3029c0, sub_302a20, sub_302e20, sub_3184b0, sub_3608f0
   ref: ARB_uniform_buffer_object
   ref: ARB_gpu_shader5
   ref: OpenGL/ES does not allow identifier of length > 1024
   ref: %s blocks require #version %d or later
   ref: ... or #extension GL_%s : enable
   ref: %s blocks require #extension GL_%s : enable
   ref: ARB_shader_storage_buffer_object
   ref: NV_uniform_buffer_object
*/
void NV_uniform_buffer_object(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x315ad0ULL || rel >= 0x3160c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003160c0 size=1104 callers=2 calls=3
   calls: EXT_bindless_texture, sub_2dacc0, sub_36b990
   ref: buffer blocks
   ref: layout qualifier '%s', incompatible with '%s'
   ref: uniform blocks
   ref: unknown layout specifier '%s'
   ref: input/output layout qualifiers supported above GL version %d
*/
void output_layout_qualifiers_supported_above_GL_version_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3160c0ULL || rel >= 0x316510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316510 size=1296 callers=1 calls=5
   calls: mem_AddCleanup, sub_2a4d70, sub_2dacc0, sub_2db630, sub_2ed1a0
   ref: invalid value '%d' for layout qualifier '%s'
   ref: %s requires "#version %d" or later
   ref: layout(offset)
   ref: offset
   ref: ARB_shader_atomic_counters
   ref: a non-negative value
   ref: unsized array type not allowed on declaration
   ref: ... or #extension GL_%s : enable
*/
void ARB_shader_atomic_counters_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316510ULL || rel >= 0x316a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316a20 size=240 callers=2 calls=3
   calls: sub_2ed320, sub_302e20, sub_3188a0
*/
void sub_316a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316a20ULL || rel >= 0x316b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316b10 size=176 callers=1 calls=5
   calls: fn_s_2, function_s_has_no_statements, interfaceNV_2, sub_3177b0, sub_318230
*/
void sub_316b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316b10ULL || rel >= 0x316bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316bc0 size=80 callers=3 calls=0
*/
void sub_316bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316bc0ULL || rel >= 0x316c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316c10 size=96 callers=4 calls=1
   calls: sub_2b8720
*/
void sub_316c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316c10ULL || rel >= 0x316c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316c70 size=144 callers=1 calls=1
   calls: sub_359640
*/
void sub_316c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316c70ULL || rel >= 0x316d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316d00 size=496 callers=2 calls=3
   calls: sampler, sub_2db630, sub_3188a0
   ref: OpenGL requires %s variables to be explicitly declared as uniform
   ref: sampler
*/
void sampler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316d00ULL || rel >= 0x316ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00316ef0 size=432 callers=3 calls=5
   calls: sub_2ed320, sub_359610, sub_3596a0, sub_3608f0, unrecognized_profile_specifier_s_2
   ref: PATCH%d.%s
   ref: *.ATTR%d%s
   ref: *.ATTR%d
   ref: VERTEXOUT[].*
   ref: *.ATTR%d.%s
   ref: PATCH%d
   ref: VERTEX[].*
*/
void PATCH_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x316ef0ULL || rel >= 0x3170a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003170a0 size=208 callers=7 calls=2
   calls: sub_2bb020, sub_2dacc0
   ref: non constant expression for array size
*/
void non_constant_expression_for_array_size(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3170a0ULL || rel >= 0x317170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317170 size=320 callers=7 calls=2
   calls: sub_2f9320, sub_317170
*/
void sub_317170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317170ULL || rel >= 0x3172b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003172b0 size=464 callers=0 calls=0
*/
void sub_3172b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3172b0ULL || rel >= 0x317480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317480 size=64 callers=3 calls=1
   calls: sub_2ed1a0
*/
void sub_317480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317480ULL || rel >= 0x3174c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003174c0 size=304 callers=1 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_3174c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3174c0ULL || rel >= 0x3175f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003175f0 size=208 callers=10 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_3175f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3175f0ULL || rel >= 0x3176c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003176c0 size=224 callers=5 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_3176c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3176c0ULL || rel >= 0x3177a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003177a0 size=16 callers=2 calls=0
*/
void sub_3177a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3177a0ULL || rel >= 0x3177b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003177b0 size=208 callers=210 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_3177b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3177b0ULL || rel >= 0x317880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317880 size=224 callers=66 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_317880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317880ULL || rel >= 0x317960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317960 size=80 callers=7 calls=1
   calls: sub_317880
*/
void sub_317960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317960ULL || rel >= 0x3179b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003179b0 size=336 callers=4 calls=1
   calls: sub_354520
   ref: VERTEX[].*
*/
void VERTEX_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3179b0ULL || rel >= 0x317b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317b00 size=336 callers=6 calls=1
   calls: sub_354520
   ref: VERTEXOUT[].*
*/
void VERTEXOUT_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317b00ULL || rel >= 0x317c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317c50 size=224 callers=11 calls=1
   calls: sub_2b8720
*/
void sub_317c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317c50ULL || rel >= 0x317d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317d30 size=304 callers=35 calls=1
   calls: sub_2b8720
*/
void sub_317d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317d30ULL || rel >= 0x317e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00317e60 size=752 callers=3 calls=7
   calls: VERTEXOUT_2, VERTEX_2, binding_2, sub_2b8230, sub_2bb020, sub_2dacc0, sub_2db630
   ref: non integral expression for array size
   ref: invalid value %d (array size %d) for layout specifier '%s'
   ref: OpenGL does not allow multi dimensional arrays
   ref: size of dimension cannot be less than 1
   ref: non constant expression for array size
   ref: cannot build aggregates with AttribArray
   ref: cannot build aggregates with AttribArrayOut
   ref: binding
*/
void binding_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x317e60ULL || rel >= 0x318150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318150 size=224 callers=2 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_318150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318150ULL || rel >= 0x318230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318230 size=224 callers=5 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_318230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318230ULL || rel >= 0x318310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318310 size=208 callers=2 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_318310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318310ULL || rel >= 0x3183e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003183e0 size=208 callers=13 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_3183e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3183e0ULL || rel >= 0x3184b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003184b0 size=112 callers=6 calls=2
   calls: mem_Alloc, sub_2f96e0
*/
void sub_3184b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3184b0ULL || rel >= 0x318520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318520 size=208 callers=9 calls=3
   calls: mem_Alloc, sub_2ed320, sub_2ed440
*/
void sub_318520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318520ULL || rel >= 0x3185f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003185f0 size=64 callers=2 calls=1
   calls: mem_Alloc
*/
void sub_3185f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3185f0ULL || rel >= 0x318630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318630 size=128 callers=5 calls=3
   calls: mem_Alloc, sub_3175f0, sub_318630
*/
void sub_318630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318630ULL || rel >= 0x3186b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003186b0 size=496 callers=3 calls=2
   calls: sub_306070, sub_3186b0
*/
void sub_3186b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3186b0ULL || rel >= 0x3188a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003188a0 size=32 callers=157 calls=0
*/
void sub_3188a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3188a0ULL || rel >= 0x3188c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003188c0 size=48 callers=227 calls=0
*/
void sub_3188c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3188c0ULL || rel >= 0x3188f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003188f0 size=64 callers=12 calls=0
*/
void sub_3188f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3188f0ULL || rel >= 0x318930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318930 size=128 callers=1 calls=0
*/
void sub_318930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318930ULL || rel >= 0x3189b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003189b0 size=208 callers=1 calls=0
*/
void sub_3189b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3189b0ULL || rel >= 0x318a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318a80 size=352 callers=5 calls=0
*/
void sub_318a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318a80ULL || rel >= 0x318be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00318be0 size=9920 callers=44 calls=27
   calls: TMP_d, atomicCompSwap, d_fatal_error_C9999, interfaceNV, only_applies_to_pointers, sub_2b8720, sub_2db630, sub_2f7fb0, sub_2f8290, sub_2f9210, sub_2f9980, sub_2fab10
   ... +15 more
   ref: implicit cast from "%s" to "%s"
   ref: OpenGL does not allow matrix casts without #version 120 or later
   ref: unpack_2uint
   ref: implicit narrowing of type from "%s" to "%s"
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: ... or #extension GL_%s : enable
   ref: unexpected toBase (%d) in IsBaseCastValid
   ref: unexpected toBase (%d) in IsPerformanceDemotion
*/
void unpack_2uint(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x318be0ULL || rel >= 0x31b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b2a0 size=1136 callers=55 calls=1
   calls: sub_31b2a0
*/
void sub_31b2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b2a0ULL || rel >= 0x31b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b710 size=160 callers=135 calls=0
*/
void sub_31b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b710ULL || rel >= 0x31b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b7b0 size=112 callers=11 calls=2
   calls: sub_31b2a0, sub_31b7b0
*/
void sub_31b7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b7b0ULL || rel >= 0x31b820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b820 size=96 callers=148 calls=0
*/
void sub_31b820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b820ULL || rel >= 0x31b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b880 size=352 callers=7 calls=1
   calls: sub_2ef620
*/
void sub_31b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b880ULL || rel >= 0x31b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031b9e0 size=464 callers=4 calls=3
   calls: sub_2ef620, sub_31b2a0, sub_31b7b0
*/
void sub_31b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31b9e0ULL || rel >= 0x31bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031bbb0 size=368 callers=3 calls=4
   calls: sub_31b2a0, sub_31b7b0, sub_31b9e0, sub_31bbb0
*/
void sub_31bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31bbb0ULL || rel >= 0x31bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031bd20 size=144 callers=2 calls=3
   calls: sub_31b2a0, sub_31b7b0, sub_31b9e0
*/
void sub_31bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31bd20ULL || rel >= 0x31bdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031bdb0 size=144 callers=1 calls=2
   calls: sub_2dacc0, sub_302f30
   ref: qualifier "%s" cannot apply to this type
   ref: signed
*/
void signed_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31bdb0ULL || rel >= 0x31be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031be40 size=176 callers=0 calls=1
   calls: sub_2dacc0
   ref: qualifier "%s" cannot apply to this type
   ref: unsigned
*/
void unsigned_fn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31be40ULL || rel >= 0x31bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031bef0 size=144 callers=50 calls=1
   calls: sub_31bef0
*/
void sub_31bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31bef0ULL || rel >= 0x31bf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031bf80 size=144 callers=1 calls=2
   calls: sub_2dacc0, sub_302f30
   ref: qualifier "%s" cannot apply to this type
   ref: unsigned
*/
void unsigned_fn_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31bf80ULL || rel >= 0x31c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c010 size=176 callers=0 calls=1
   calls: sub_2dacc0
   ref: qualifier "%s" cannot apply to this type
   ref: unsigned
*/
void unsigned_fn_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c010ULL || rel >= 0x31c0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c0c0 size=160 callers=6 calls=0
*/
void sub_31c0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c0c0ULL || rel >= 0x31c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c160 size=144 callers=1 calls=0
*/
void sub_31c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c160ULL || rel >= 0x31c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c1f0 size=96 callers=2 calls=1
   calls: sub_31c1f0
*/
void sub_31c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c1f0ULL || rel >= 0x31c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c250 size=336 callers=4 calls=0
*/
void sub_31c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c250ULL || rel >= 0x31c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c3a0 size=272 callers=5 calls=0
*/
void sub_31c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c3a0ULL || rel >= 0x31c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c4b0 size=48 callers=2 calls=0
*/
void sub_31c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c4b0ULL || rel >= 0x31c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c4e0 size=176 callers=2 calls=2
   calls: mem_Alloc, sub_31c250
*/
void sub_31c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c4e0ULL || rel >= 0x31c590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c590 size=128 callers=3 calls=0
   ref: OpenGL ES
   ref: %s does not allow %s
   ref: lowp/mediump precision qualifier on atomic_uint
   ref: precision specifier with invalid type
*/
void mediump_precision_qualifier_on_atomic_uint(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c590ULL || rel >= 0x31c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c610 size=560 callers=3 calls=5
   calls: mem_Alloc, sub_306070, sub_317d30, sub_31c250, sub_31c3a0
   ref: OpenGL ES
   ref: %s does not allow %s
   ref: lowp/mediump precision qualifier on atomic_uint
   ref: precision specifier with invalid type
*/
void mediump_precision_qualifier_on_atomic_uint_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c610ULL || rel >= 0x31c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031c840 size=2336 callers=4 calls=9
   calls: VERTEXOUT_2, VERTEX_2, sub_2dacc0, sub_2f96e0, sub_302e20, sub_303f50, sub_31b2a0, sub_3608f0, sub_362390
   ref: struct "%s" previously defined at %s(%d)
   ref: interface cannot have data members
   ref: function "%s" of interface "%s" not implemented
   ref: %s : %s
   ref: cannot build aggregates with AttribArray
   ref: interface
   ref: cannot build aggregates with AttribArrayOut
   ref: interface cannot have function members with definitions
*/
void interface(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31c840ULL || rel >= 0x31d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031d160 size=1840 callers=3 calls=20
   calls: interfaceNV, mem_Alloc, s__d, sub_2dacc0, sub_2db570, sub_2db630, sub_2f96e0, sub_302da0, sub_302e20, sub_302ee0, sub_302f30, sub_302ff0
   ... +8 more
   ref: the name "%s" is already defined at %s(%d)
   ref: OpenGL ES
   ref: GLSL 1.20 does not allow nested structs
   ref: %s does not allow %s
   ref: struct "%s" interface specification "%s" is not an interface
   ref: tag "%s" is not a struct
   ref: use of connectors such as '%s' is deprecated
   ref: redefinition of template %s, previous definition at %s(%d)
*/
void O_blocks(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31d160ULL || rel >= 0x31d890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031d890 size=464 callers=5 calls=2
   calls: sub_306070, sub_31d890
*/
void sub_31d890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31d890ULL || rel >= 0x31da60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031da60 size=592 callers=14 calls=3
   calls: sub_2bb020, sub_306070, sub_31da60
*/
void sub_31da60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31da60ULL || rel >= 0x31dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031dcb0 size=144 callers=5 calls=1
   calls: sub_2bb020
*/
void sub_31dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31dcb0ULL || rel >= 0x31dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031dd40 size=96 callers=3 calls=1
   calls: sub_317d30
*/
void sub_31dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31dd40ULL || rel >= 0x31dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031dda0 size=240 callers=3 calls=0
*/
void sub_31dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31dda0ULL || rel >= 0x31de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031de90 size=304 callers=2 calls=1
   calls: mem_Alloc
*/
void sub_31de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31de90ULL || rel >= 0x31dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031dfc0 size=224 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_31dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31dfc0ULL || rel >= 0x31e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e0a0 size=32 callers=0 calls=0
*/
void sub_31e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e0a0ULL || rel >= 0x31e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e0c0 size=464 callers=0 calls=3
   calls: mem_Alloc, sub_31b2a0, sub_31bbb0
*/
void sub_31e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e0c0ULL || rel >= 0x31e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e290 size=304 callers=1 calls=2
   calls: sub_3608f0, unnamed_29
   ref: %0.*s[*]%s
*/
void f_0_s_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e290ULL || rel >= 0x31e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031e3c0 size=1904 callers=3 calls=12
   calls: f_0_s_s, mem_Alloc, non_constant_expression_for_array_size, sub_306070, sub_31bbb0, sub_31eb30, sub_35f390, sub_35f400, sub_35f430, sub_35f6d0, sub_3608f0, unnamed_29
   ref: %s[%d]
*/
void unnamed_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31e3c0ULL || rel >= 0x31eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031eb30 size=240 callers=2 calls=4
   calls: sub_35f390, sub_35f400, sub_35f430, sub_35f6d0
*/
void sub_31eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31eb30ULL || rel >= 0x31ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ec20 size=240 callers=1 calls=2
   calls: sub_2f9880, unnamed_30
*/
void sub_31ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ec20ULL || rel >= 0x31ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ed10 size=640 callers=6 calls=7
   calls: sub_2ed320, sub_3188c0, sub_35f390, sub_35f400, sub_35f430, sub_35f6d0, unnamed_30
   ref: %s[%d]
*/
void unnamed_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ed10ULL || rel >= 0x31ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ef90 size=240 callers=0 calls=2
   calls: sub_2f9880, sub_31ec20
*/
void sub_31ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ef90ULL || rel >= 0x31f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f080 size=752 callers=0 calls=8
   calls: sub_2f77f0, sub_2f7880, sub_2f9880, sub_2fce70, sub_31b2a0, sub_31bd20, sub_31f370, unnamed_30
*/
void sub_31f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f080ULL || rel >= 0x31f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f370 size=224 callers=2 calls=1
   calls: sub_31f370
*/
void sub_31f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f370ULL || rel >= 0x31f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f450 size=1136 callers=3 calls=11
   calls: non_constant_expression_for_array_size, sub_303070, sub_317880, sub_31b2a0, sub_31de90, sub_31f450, sub_35f390, sub_35f400, sub_35f430, sub_35f6d0, sub_3608f0
*/
void sub_31f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f450ULL || rel >= 0x31f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031f8c0 size=432 callers=3 calls=12
   calls: mem_AddCleanup, mem_Alloc, mem_CreatePool, sub_2a4ba0, sub_2eddf0, sub_2ee210, sub_2ee290, sub_2f49d0, sub_2f7410, sub_2f74a0, sub_31f450, sub_370900
*/
void sub_31f8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31f8c0ULL || rel >= 0x31fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fa70 size=16 callers=0 calls=0
*/
void sub_31fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fa70ULL || rel >= 0x31fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fa80 size=16 callers=0 calls=0
*/
void sub_31fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fa80ULL || rel >= 0x31fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fa90 size=16 callers=0 calls=0
*/
void sub_31fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fa90ULL || rel >= 0x31faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031faa0 size=32 callers=0 calls=0
*/
void sub_31faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31faa0ULL || rel >= 0x31fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fac0 size=48 callers=0 calls=1
   calls: sub_2ee310
*/
void sub_31fac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fac0ULL || rel >= 0x31faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031faf0 size=48 callers=0 calls=1
   calls: sub_2ee310
*/
void sub_31faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31faf0ULL || rel >= 0x31fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fb20 size=784 callers=0 calls=8
   calls: sub_2edeb0, sub_2ee110, sub_2f9880, sub_2fcfc0, sub_306070, sub_31b2a0, sub_31d890, sub_31fe30
*/
void sub_31fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fb20ULL || rel >= 0x31fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031fe30 size=416 callers=2 calls=2
   calls: sub_306070, sub_31fe30
*/
void sub_31fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31fe30ULL || rel >= 0x31ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0031ffd0 size=320 callers=1 calls=1
   calls: sub_2ed320
*/
void sub_31ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x31ffd0ULL || rel >= 0x320110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00320110 size=656 callers=1 calls=7
   calls: mem_CreatePool, sub_2a4ba0, sub_2aee00, sub_2f48d0, sub_2f6e10, sub_2f7410, sub_31f8c0
*/
void sub_320110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x320110ULL || rel >= 0x3203a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003203a0 size=160 callers=0 calls=2
   calls: sub_2f4980, sub_2f6e10
*/
void sub_3203a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3203a0ULL || rel >= 0x320440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00320440 size=3024 callers=0 calls=33
   calls: ARB_separate_shader_objects, TMP_d, atomicCompSwap, only_applies_to_pointers, s__d, sub_2b8720, sub_2ed1a0, sub_2ed320, sub_2f4760, sub_2f4980, sub_2f6e10, sub_2f7060
   ... +21 more
   ref: $this%d
*/
void this_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x320440ULL || rel >= 0x321010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321010 size=1360 callers=0 calls=10
   calls: TMP_d, atomicCompSwap, sub_2f77f0, sub_2f7880, sub_2f7cf0, sub_2f7fb0, sub_2f8290, sub_2fb460, sub_2fc060, sub_3177b0
*/
void sub_321010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321010ULL || rel >= 0x321560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321560 size=400 callers=2 calls=1
   calls: sub_321560
*/
void sub_321560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321560ULL || rel >= 0x3216f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003216f0 size=80 callers=0 calls=1
   calls: sub_2f9880
*/
void sub_3216f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3216f0ULL || rel >= 0x321740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321740 size=256 callers=0 calls=4
   calls: mem_Alloc, sub_2ed440, sub_2f6e10, sub_2f9880
*/
void sub_321740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321740ULL || rel >= 0x321840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321840 size=1856 callers=2 calls=29
   calls: d_error_C_04d_3, mem_Alloc, only_applies_to_pointers, s__d, sub_2b8720, sub_2ed320, sub_2ed440, sub_2f77f0, sub_2f7880, sub_2f7fb0, sub_2f8290, sub_2f9880
   ... +17 more
   ref: @%s-%04d
   ref: Name "%s" shouldn't be defined, but is!
*/
void s_04d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321840ULL || rel >= 0x321f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00321f80 size=384 callers=0 calls=9
   calls: atomicCompSwap, s_04d_2, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_30a0e0, sub_317d30, sub_31b710, sub_31b820
*/
void sub_321f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x321f80ULL || rel >= 0x322100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322100 size=400 callers=0 calls=11
   calls: atomicCompSwap, s_04d_2, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_3041b0, sub_30a0e0, sub_316c10, sub_317d30, sub_31b710, sub_31b820
*/
void sub_322100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322100ULL || rel >= 0x322290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322290 size=128 callers=0 calls=2
   calls: sub_2f77f0, sub_2f7880
*/
void sub_322290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322290ULL || rel >= 0x322310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322310 size=80 callers=0 calls=1
   calls: sub_30a0e0
*/
void sub_322310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322310ULL || rel >= 0x322360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322360 size=176 callers=2 calls=1
   calls: sub_322360
*/
void sub_322360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322360ULL || rel >= 0x322410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322410 size=144 callers=1 calls=2
   calls: mem_AddCleanup, sub_2ed1a0
*/
void sub_322410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322410ULL || rel >= 0x3224a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003224a0 size=32 callers=3 calls=1
   calls: sub_2ed320
*/
void sub_3224a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3224a0ULL || rel >= 0x3224c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003224c0 size=32 callers=1 calls=1
   calls: sub_2ed320
*/
void sub_3224c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3224c0ULL || rel >= 0x3224e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003224e0 size=288 callers=1 calls=5
   calls: sub_2a4ba0, sub_2ed1a0, sub_2edb10, sub_2f72e0, sub_35c320
*/
void sub_3224e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3224e0ULL || rel >= 0x322600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322600 size=496 callers=0 calls=7
   calls: multiple_outputs_associated_with_semantic_s_2, sub_2edb70, sub_2f77f0, sub_2f7880, sub_2f7950, sub_2f7fb0, sub_3188c0
*/
void sub_322600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322600ULL || rel >= 0x3227f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003227f0 size=1824 callers=1 calls=20
   calls: VERTEXOUT_5, VERTEXOUT_s, s__d, sub_2220, sub_2db630, sub_2eac60, sub_2ead20, sub_2ed320, sub_2ed440, sub_2ed9f0, sub_302e20, sub_306070
   ... +8 more
   ref: geometry shaders require #extension GL_EXT_geometry_shader4
   ref: OpenGL ES
   ref: geometry
   ref: inputs
   ref: OpenGL requires geometry input array size to match input primitive size
   ref: %s-out
   ref: tessellation control
   ref: outputs
*/
void geometry(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3227f0ULL || rel >= 0x322f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00322f10 size=464 callers=0 calls=5
   calls: sub_2dacc0, sub_2ed320, sub_2fa5c0, sub_302e20, sub_3608f0
   ref: tessellation control output write to '%s' must be indexed by gl_InvocationID
   ref: %s-out
*/
void s_out(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x322f10ULL || rel >= 0x3230e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003230e0 size=992 callers=1 calls=4
   calls: sub_2db630, sub_2f7410, sub_306070, sub_327360
   ref: OpenGL does not allow multi dimensional arrays
*/
void OpenGL_does_not_allow_multi_dimensional_arrays(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3230e0ULL || rel >= 0x3234c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003234c0 size=256 callers=1 calls=7
   calls: sub_2e7110, sub_2eac60, sub_2ed440, sub_306070, sub_3188c0, sub_3608f0, sub_367630
   ref: _storage_len_%d
   ref: SBO_STORAGE_LEN[%d]
*/
void storage_len__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3234c0ULL || rel >= 0x3235c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003235c0 size=384 callers=1 calls=8
   calls: sub_2e7110, sub_2eac60, sub_2ed440, sub_306070, sub_3188c0, sub_3608f0, sub_367630, sub_367940
   ref: _storage_len_%d
   ref: SBO_STORAGE_LEN[%d]
*/
void storage_len__d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3235c0ULL || rel >= 0x323740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323740 size=256 callers=2 calls=7
   calls: sub_2e7110, sub_2eac60, sub_2ed440, sub_306070, sub_3188c0, sub_3608f0, sub_367630
   ref: $ssboDesc_[%d][%d]
   ref: BUFFER[%d][%d]
*/
void BUFFER_d_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323740ULL || rel >= 0x323840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323840 size=384 callers=2 calls=7
   calls: sub_2e7110, sub_2eac60, sub_2ed440, sub_3188c0, sub_3608f0, sub_367630, sub_367940
   ref: $ssboDesc_[%d][%d]
   ref: BUFFER[%d][%d]
*/
void BUFFER_d_d_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323840ULL || rel >= 0x3239c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003239c0 size=304 callers=1 calls=6
   calls: only_applies_to_pointers, sub_2fa960, sub_2fab10, sub_2fc060, sub_3177b0, sub_317880
*/
void sub_3239c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3239c0ULL || rel >= 0x323af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323af0 size=512 callers=0 calls=11
   calls: TMP_d, atomicCompSwap, sub_2f7fb0, sub_2f8290, sub_2fc060, sub_306070, sub_3177b0, sub_317880, sub_31b710, sub_31b820, sub_3239c0
*/
void sub_323af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323af0ULL || rel >= 0x323cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323cf0 size=160 callers=0 calls=4
   calls: sub_2f8290, sub_306070, sub_31b710, sub_31b820
*/
void sub_323cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323cf0ULL || rel >= 0x323d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323d90 size=352 callers=1 calls=11
   calls: BUFFER_d_d, BUFFER_d_d_2, s__d, sub_306070, sub_307ee0, sub_3177b0, sub_317880, sub_3188f0, sub_31b710, sub_31b820, sub_3608f0
   ref: $ssboDesc_[%d][%d]
*/
void ssboDesc__d_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323d90ULL || rel >= 0x323ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323ef0 size=64 callers=1 calls=0
*/
void sub_323ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323ef0ULL || rel >= 0x323f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00323f30 size=224 callers=0 calls=2
   calls: ssboDesc__d_d, sub_2ed320
*/
void sub_323f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x323f30ULL || rel >= 0x324010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00324010 size=976 callers=1 calls=10
   calls: mem_CreatePool, sub_2a4ba0, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_2f6e10, sub_2f72e0, sub_2f7410, sub_306070, sub_317880
*/
void sub_324010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x324010ULL || rel >= 0x3243e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003243e0 size=3168 callers=0 calls=25
   calls: BUFFER_d_d, BUFFER_d_d_2, atomicCompSwap, only_applies_to_pointers, s__d, storage_len__d, storage_len__d_2, sub_2db630, sub_2e9890, sub_2ed1a0, sub_2ed320, sub_2ed440
   ... +13 more
   ref: @ssboStorageLenArray_%d
   ref: @ssboDesc_%d_%d
   ref: OpenGL does not allow multidimensional unsized arrays (%s)
   ref: OpenGL does not allow using the .length() method on implicitly sized/unsized arrays
   ref: BINDLESS_SBUFFER
   ref: @ssboStorageLen_%d
   ref: OpenGL does not allow unsized arrays as return values
   ref: OpenGL requires constant indexes for unsized array access(%s)
*/
void BINDLESS_SBUFFER(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3243e0ULL || rel >= 0x325040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325040 size=208 callers=0 calls=3
   calls: sub_2f77f0, sub_2f7880, sub_306070
*/
void sub_325040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325040ULL || rel >= 0x325110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325110 size=432 callers=0 calls=8
   calls: only_applies_to_pointers, sub_2db630, sub_2f77f0, sub_2f7880, sub_2fcb90, sub_3598f0, undefined_variable_s, xfb_stride_2
   ref: gl_FragDepth
   ref: %s does not allow writing to %s
   ref: early_fragment_tests
*/
void early_fragment_tests(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325110ULL || rel >= 0x3252c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003252c0 size=176 callers=0 calls=3
   calls: sub_2ed320, sub_2fc060, sub_3177b0
*/
void sub_3252c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3252c0ULL || rel >= 0x325370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325370 size=176 callers=0 calls=3
   calls: sub_2ed320, sub_2fc060, sub_3177b0
*/
void sub_325370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325370ULL || rel >= 0x325420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325420 size=272 callers=2 calls=6
   calls: sub_2a4ba0, sub_2d9fc0, sub_2ed1a0, sub_2f4e70, sub_2f6e10, sub_2f74a0
*/
void sub_325420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325420ULL || rel >= 0x325530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325530 size=144 callers=0 calls=1
   calls: sub_2f6e10
*/
void sub_325530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325530ULL || rel >= 0x3255c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003255c0 size=144 callers=0 calls=3
   calls: sub_2ed320, sub_2f77f0, sub_2f7880
*/
void sub_3255c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3255c0ULL || rel >= 0x325650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325650 size=240 callers=1 calls=3
   calls: sub_2ed320, sub_2f7410, sub_325420
*/
void sub_325650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325650ULL || rel >= 0x325740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325740 size=2096 callers=1 calls=5
   calls: VERTEXOUT_2, VERTEXOUT_4, sub_2ed320, sub_3040b0, sub_3263b0
   ref: VERTEXOUT
*/
void VERTEXOUT_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325740ULL || rel >= 0x325f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00325f70 size=1088 callers=3 calls=6
   calls: NOPERSPECTIVE_3, VERTEXOUT_2, VERTEXOUT_4, sub_302f30, sub_31b820, sub_3608f0
   ref: VERTEXOUT.
*/
void VERTEXOUT_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x325f70ULL || rel >= 0x3263b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003263b0 size=192 callers=4 calls=5
   calls: mem_AddCleanup, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_3040b0
*/
void sub_3263b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3263b0ULL || rel >= 0x326470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00326470 size=528 callers=1 calls=9
   calls: OpenGL_does_not_allow_multi_dimensional_arrays, VERTEXOUT_3, geometry, sub_2f4e70, sub_2f72e0, sub_2f74a0, sub_3224e0, sub_359640, sub_35af60
*/
void sub_326470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x326470ULL || rel >= 0x326680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00326680 size=16 callers=0 calls=0
*/
void sub_326680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x326680ULL || rel >= 0x326690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00326690 size=320 callers=0 calls=6
   calls: mem_AddCleanup, sub_2ed1a0, sub_2ed440, sub_2fb680, sub_326c10, sub_326e80
*/
void sub_326690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x326690ULL || rel >= 0x3267d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003267d0 size=192 callers=0 calls=3
   calls: sub_2dacc0, sub_2ed320, sub_2ed440
   ref: multiple outputs associated with semantic "%s"
*/
void multiple_outputs_associated_with_semantic_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3267d0ULL || rel >= 0x326890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00326890 size=896 callers=2 calls=11
   calls: mem_AddCleanup, multiple_outputs_associated_with_semantic_s_2, sub_2dacc0, sub_2ed1a0, sub_2ed320, sub_2ed440, sub_2f8320, sub_2fa960, sub_2fb680, sub_302f30, sub_35c820
   ref: value of symbol "%s" is implicitly used but is not available
   ref: multiple outputs associated with semantic "%s"
*/
void multiple_outputs_associated_with_semantic_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x326890ULL || rel >= 0x326c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00326c10 size=624 callers=3 calls=5
   calls: NOPERSPECTIVE_3, sub_2ed320, sub_3188c0, sub_326c10, sub_354e90
*/
void sub_326c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x326c10ULL || rel >= 0x326e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00326e80 size=784 callers=3 calls=9
   calls: NOPERSPECTIVE_3, atomicCompSwap, only_applies_to_pointers, sub_2f9980, sub_2fb680, sub_2fc060, sub_3177b0, sub_326e80, sub_354e90
*/
void sub_326e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x326e80ULL || rel >= 0x327190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327190 size=16 callers=0 calls=0
*/
void sub_327190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327190ULL || rel >= 0x3271a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003271a0 size=16 callers=0 calls=0
*/
void sub_3271a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3271a0ULL || rel >= 0x3271b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003271b0 size=16 callers=0 calls=0
*/
void sub_3271b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3271b0ULL || rel >= 0x3271c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003271c0 size=224 callers=2 calls=2
   calls: VERTEXOUT_5, sub_3608f0
   ref: VERTEXOUT
*/
void VERTEXOUT_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3271c0ULL || rel >= 0x3272a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003272a0 size=176 callers=2 calls=2
   calls: VERTEXOUT_s, sub_3608f0
   ref: VERTEXOUT.%s
*/
void VERTEXOUT_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3272a0ULL || rel >= 0x327350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327350 size=16 callers=0 calls=0
*/
void sub_327350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327350ULL || rel >= 0x327360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327360 size=480 callers=4 calls=2
   calls: sub_31b820, sub_327360
*/
void sub_327360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327360ULL || rel >= 0x327540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327540 size=240 callers=2 calls=5
   calls: atomicCompSwap, non_constant_expression_for_array_size, sub_2fc060, sub_3177b0, sub_327540
*/
void sub_327540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327540ULL || rel >= 0x327630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327630 size=48 callers=0 calls=0
*/
void sub_327630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327630ULL || rel >= 0x327660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327660 size=224 callers=0 calls=3
   calls: sub_2ed320, sub_2ed440, sub_2f6e10
*/
void sub_327660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327660ULL || rel >= 0x327740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327740 size=80 callers=8 calls=0
*/
void sub_327740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327740ULL || rel >= 0x327790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327790 size=640 callers=1 calls=5
   calls: sub_306070, sub_3188c0, sub_31b710, sub_31b820, sub_327790
*/
void sub_327790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327790ULL || rel >= 0x327a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327a10 size=240 callers=0 calls=2
   calls: sub_2ed1a0, sub_2ed440
*/
void sub_327a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327a10ULL || rel >= 0x327b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327b00 size=160 callers=0 calls=2
   calls: sub_2ed320, sub_2ed9f0
*/
void sub_327b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327b00ULL || rel >= 0x327ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327ba0 size=224 callers=0 calls=2
   calls: sub_2fc060, sub_3188c0
*/
void sub_327ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327ba0ULL || rel >= 0x327c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327c80 size=16 callers=0 calls=0
*/
void sub_327c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327c80ULL || rel >= 0x327c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327c90 size=192 callers=0 calls=2
   calls: ARB_explicit_uniform_location, s_d_already_used_2
   ref: layout qualifier '%s', incompatible with '%s'
*/
void layout_qualifier_s_incompatible_with_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327c90ULL || rel >= 0x327d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327d50 size=272 callers=1 calls=2
   calls: sub_2dacc0, sub_2db630
   ref: invalid value '%d' for layout qualifier '%s'
   ref: a non-negative integer
   ref: layout(index)
   ref: ... or #version %d
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: ARB_explicit_uniform_location
   ref: layout qualifier '%s', requires '%s'
*/
void ARB_explicit_uniform_location(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327d50ULL || rel >= 0x327e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327e60 size=160 callers=0 calls=1
   calls: sub_2dacc0
   ref: unknown layout specifier '%s'
*/
void unknown_layout_specifier_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327e60ULL || rel >= 0x327f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00327f00 size=496 callers=4 calls=3
   calls: sub_2dacc0, sub_2db630, sub_306070
   ref: invalid value '%d' for layout qualifier '%s'
   ref: a non-negative integer
   ref: invalid value %d (array size %d) for layout specifier '%s'
   ref: ... or #version %d
   ref: layout(location)
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: layout qualifier '%s', incompatible with '%s'
   ref: ARB_explicit_uniform_location
*/
void ARB_explicit_uniform_location_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x327f00ULL || rel >= 0x3280f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003280f0 size=624 callers=2 calls=1
   calls: sub_2db630
   ref: EXT_separate_shader_objects
   ref: ARB_explicit_attrib_location
   ref: ARB_separate_shader_objects
   ref: ... or #version %d
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: ... or #extension GL_%s : enable
   ref: ARB_enhanced_layouts
   ref: NV_explicit_attrib_location
*/
void NV_explicit_attrib_location(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3280f0ULL || rel >= 0x328360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328360 size=384 callers=4 calls=3
   calls: sub_2dacc0, sub_2db630, sub_306070
   ref: invalid value '%d' for layout qualifier '%s'
   ref: a non-negative integer
   ref: invalid value %d (array size %d) for layout specifier '%s'
   ref: ... or #version %d
   ref: layout(location)
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: ARB_explicit_uniform_location
   ref: layout qualifier '%s', requires '%s'
*/
void ARB_explicit_uniform_location_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328360ULL || rel >= 0x3284e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003284e0 size=352 callers=0 calls=1
   calls: conflicting_row_major_or_column_major_layouts_explicitly
*/
void sub_3284e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3284e0ULL || rel >= 0x328640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328640 size=560 callers=2 calls=5
   calls: sub_2db4f0, sub_307fa0, sub_317960, sub_31b710, sub_31b820
   ref: conflicting row_major or column_major layouts explicitly set
*/
void conflicting_row_major_or_column_major_layouts_explicitly(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328640ULL || rel >= 0x328870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328870 size=272 callers=0 calls=1
   calls: sub_2db630
   ref: layout(offset)
   ref: ... or #version %d
   ref: offset
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: std140 or std430
   ref: ARB_enhanced_layouts
   ref: layout qualifier '%s', requires '%s'
*/
void ARB_enhanced_layouts(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328870ULL || rel >= 0x328980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328980 size=560 callers=0 calls=1
   calls: sub_2db630
   ref: invalid value '%d' for layout qualifier '%s'
   ref: %s requires "#version %d" or later
   ref: a non-negative value
   ref: ... or #extension GL_%s : enable
   ref: layout qualifier 'binding'
   ref: duplicate layout specifier '%s'
   ref: ARB_shading_language_420pack
   ref: binding
*/
void ARB_shading_language_420pack_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328980ULL || rel >= 0x328bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328bb0 size=288 callers=0 calls=2
   calls: ARB_shader_atomic_counters, sub_2db630
   ref: layout specifier '%s = %d' exceeds maximum value
   ref: to be a multiple of 4
   ref: layout(offset)
   ref: offset
   ref: layout(binding)
   ref: binding
   ref: layout qualifier '%s', requires '%s'
*/
void binding_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328bb0ULL || rel >= 0x328cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328cd0 size=272 callers=0 calls=3
   calls: ARB_shading_language_420pack_2, sub_2dacc0, sub_306070
   ref: invalid value '%d' for layout qualifier '%s'
   ref: invalid value %d (array size %d) for layout specifier '%s'
   ref: layout(binding)
   ref: binding
*/
void binding_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328cd0ULL || rel >= 0x328de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328de0 size=336 callers=0 calls=4
   calls: ARB_shading_language_420pack, sub_2dacc0, sub_306070, sub_3188a0
   ref: invalid value '%d' for layout qualifier '%s'
   ref: invalid value %d (array size %d) for layout specifier '%s'
   ref: layout(binding)
   ref: binding
*/
void binding_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328de0ULL || rel >= 0x328f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00328f30 size=224 callers=3 calls=1
   calls: sub_307fa0
*/
void sub_328f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x328f30ULL || rel >= 0x329010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00329010 size=800 callers=1 calls=6
   calls: component, sub_306070, sub_3188a0, sub_3608c0, sub_3608f0, unrecognized_profile_specifier_s_2
   ref: component
   ref: layout qualifier '%s', incompatible with '%s'
   ref: SRC%dCOL%d
   ref: SRC%dCOL
   ref: layout qualifier '%s', requires '%s'
   ref: location
*/
void component_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x329010ULL || rel >= 0x329330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00329330 size=304 callers=3 calls=1
   calls: component
   ref: component
   ref: layout qualifier '%s', requires '%s'
   ref: location
*/
void component_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x329330ULL || rel >= 0x329460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00329460 size=416 callers=5 calls=5
   calls: sub_2db630, sub_306070, sub_317c50, sub_317d30, sub_3188a0
   ref: commandBindableNV
   ref: binding
   ref: layout qualifier '%s', requires '%s'
*/
void commandBindableNV(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x329460ULL || rel >= 0x329600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00329600 size=1808 callers=4 calls=13
   calls: ARB_enhanced_layouts_4, binding_6, conflicting_row_major_or_column_major_layouts_explicitly, layout_qualifier_s_incompatible_with_s_2, offset, sub_2dacc0, sub_2db630, sub_306070, sub_307fa0, sub_313ca0, sub_3188a0, sub_329d10
   ... +1 more
   ref: __pervertexnv
   ref: unknown layout specifier '%s = %d'
   ref: __perviewnv
   ref: __perprimitivenv
   ref: __tasknv
   ref: layout qualifier '%s', incompatible with '%s'
   ref: set' and 'binding
   ref: uniform blocks
*/
void input_attachment_index(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x329600ULL || rel >= 0x329d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00329d10 size=464 callers=1 calls=2
   calls: sub_306070, sub_3188a0
*/
void sub_329d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x329d10ULL || rel >= 0x329ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00329ee0 size=384 callers=1 calls=3
   calls: sub_2db630, sub_306070, sub_3188a0
   ref: layout qualifier '%s', incompatible with '%s'
   ref: uniform blocks
*/
void uniform_blocks(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x329ee0ULL || rel >= 0x32a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a060 size=224 callers=1 calls=2
   calls: sub_306070, sub_3188a0
   ref: layout qualifier '%s', incompatible with '%s'
*/
void layout_qualifier_s_incompatible_with_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a060ULL || rel >= 0x32a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a140 size=368 callers=1 calls=4
   calls: sub_306070, sub_317c50, sub_317d30, sub_3188a0
   ref: layout qualifier '%s', incompatible with '%s'
   ref: binding
*/
void binding_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a140ULL || rel >= 0x32a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a2b0 size=256 callers=1 calls=2
   calls: sub_306070, sub_3188a0
   ref: offset
   ref: layout qualifier '%s', incompatible with '%s'
*/
void offset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a2b0ULL || rel >= 0x32a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a3b0 size=256 callers=3 calls=4
   calls: sub_2dacc0, sub_3595e0, sub_359610, sub_3596a0
   ref: viewport_relative
   ref: layout qualifier '%s', incompatible with '%s'
*/
void viewport_relative(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a3b0ULL || rel >= 0x32a4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a4b0 size=752 callers=0 calls=6
   calls: sub_2db630, sub_306070, sub_359610, sub_359640, sub_359670, xfb_stride
   ref: ... or #version %d
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: layout qualifier '%s', incompatible with '%s'
   ref: xfb_buffer
   ref: ARB_enhanced_layouts
   ref: layout(%s = %d) conflicts with layout(%s = %d)
*/
void ARB_enhanced_layouts_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a4b0ULL || rel >= 0x32a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a7a0 size=176 callers=0 calls=0
   ref: component
   ref: layout qualifier '%s', incompatible with '%s'
*/
void component_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a7a0ULL || rel >= 0x32a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a850 size=256 callers=0 calls=1
   calls: sub_2db630
   ref: OpenGL ES
   ref: %s does not allow %s
   ref: component
   ref: a value between 0 and 3
   ref: ... or #version %d
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: ARB_enhanced_layouts
   ref: layout(component)
*/
void ARB_enhanced_layouts_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a850ULL || rel >= 0x32a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032a950 size=272 callers=1 calls=1
   calls: sub_2db630
   ref: ... or #version %d
   ref: being a power of two
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: layout(align)
   ref: std140 or std430
   ref: ARB_enhanced_layouts
   ref: layout qualifier '%s', requires '%s'
*/
void ARB_enhanced_layouts_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32a950ULL || rel >= 0x32aa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032aa60 size=320 callers=5 calls=4
   calls: sub_306070, sub_317c50, sub_317d30, sub_3188a0
*/
void sub_32aa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32aa60ULL || rel >= 0x32aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032aba0 size=320 callers=0 calls=4
   calls: sub_306070, sub_317c50, sub_317d30, sub_3188a0
   ref: layout qualifier '%s', incompatible with '%s'
*/
void layout_qualifier_s_incompatible_with_s_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32aba0ULL || rel >= 0x32ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ace0 size=272 callers=0 calls=2
   calls: sub_2b7e60, sub_2dacc0
   ref: NV_stereo_secondary_view_offset=%d
   ref: layout qualifier '%s', incompatible with '%s'
*/
void NV_stereo_secondary_view_offset_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ace0ULL || rel >= 0x32adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032adf0 size=16 callers=0 calls=0
*/
void sub_32adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32adf0ULL || rel >= 0x32ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ae00 size=624 callers=0 calls=12
   calls: ARB_explicit_uniform_location_2, ARB_explicit_uniform_location_3, NV_explicit_attrib_location, location, sub_306070, sub_307460, sub_3188a0, sub_3595e0, sub_359700, sub_3608c0, sub_3608f0, unrecognized_profile_specifier_s_2
   ref: a non-negative integer
   ref: ATTR%d
   ref: layout(location)
   ref: layout qualifier '%s', incompatible with '%s'
   ref: layout qualifier '%s', requires '%s'
   ref: location
*/
void location_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ae00ULL || rel >= 0x32b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b070 size=16 callers=0 calls=0
*/
void sub_32b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b070ULL || rel >= 0x32b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b080 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: Depth Layout
   ref: vertex shaders
*/
void vertex_shaders(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b080ULL || rel >= 0x32b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b0c0 size=96 callers=0 calls=4
   calls: commandBindableNV, component_3, sub_328f30, sub_32aa60
*/
void sub_32b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b0c0ULL || rel >= 0x32b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b120 size=112 callers=0 calls=1
   calls: viewport_relative
*/
void sub_32b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b120ULL || rel >= 0x32b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b190 size=64 callers=0 calls=0
   ref: passthrough
   ref: OpenGL does not allow using '%s' in %s
   ref: vertex shaders
*/
void passthrough(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b190ULL || rel >= 0x32b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b1d0 size=16 callers=0 calls=0
*/
void sub_32b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b1d0ULL || rel >= 0x32b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b1e0 size=16 callers=0 calls=0
*/
void sub_32b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b1e0ULL || rel >= 0x32b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b1f0 size=16 callers=0 calls=0
*/
void sub_32b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b1f0ULL || rel >= 0x32b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b200 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: Coverage Layout Property
   ref: vertex shaders
*/
void vertex_shaders_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b200ULL || rel >= 0x32b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b240 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: Patch Layout Property
   ref: vertex shaders
*/
void vertex_shaders_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b240ULL || rel >= 0x32b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b280 size=64 callers=0 calls=0
   ref: Stream Layout Property
   ref: OpenGL does not allow using '%s' in %s
   ref: vertex shaders
*/
void vertex_shaders_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b280ULL || rel >= 0x32b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b2c0 size=16 callers=0 calls=0
*/
void sub_32b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b2c0ULL || rel >= 0x32b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b2d0 size=32 callers=0 calls=0
*/
void sub_32b2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b2d0ULL || rel >= 0x32b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b2f0 size=16 callers=0 calls=0
*/
void sub_32b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b2f0ULL || rel >= 0x32b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b300 size=688 callers=0 calls=8
   calls: NV_explicit_attrib_location, sub_306070, sub_3188a0, sub_3595e0, sub_359700, sub_3608c0, sub_3608f0, unrecognized_profile_specifier_s_2
   ref: ATTR%d
   ref: layout(location)
   ref: layout qualifier '%s', incompatible with '%s'
   ref: location
*/
void location_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b300ULL || rel >= 0x32b5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b5b0 size=192 callers=0 calls=0
   ref: layout(index)
   ref: layout qualifier '%s', incompatible with '%s'
*/
void layout_index(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b5b0ULL || rel >= 0x32b670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b670 size=224 callers=0 calls=0
   ref: can't apply layout %s to non-depth variable '%s'
*/
void can_t_apply_layout_s_to_non_depth_variable_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b670ULL || rel >= 0x32b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b750 size=96 callers=0 calls=3
   calls: commandBindableNV, component_2, sub_32aa60
*/
void sub_32b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b750ULL || rel >= 0x32b7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b7b0 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: Viewport Relative
   ref: fragment shaders
*/
void fragment_shaders(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b7b0ULL || rel >= 0x32b7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b7f0 size=64 callers=0 calls=0
   ref: passthrough
   ref: OpenGL does not allow using '%s' in %s
   ref: fragment shaders
*/
void passthrough_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b7f0ULL || rel >= 0x32b830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b830 size=16 callers=0 calls=0
*/
void sub_32b830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b830ULL || rel >= 0x32b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b840 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: XFB Layout Property
   ref: fragment shaders
*/
void fragment_shaders_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b840ULL || rel >= 0x32b880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b880 size=16 callers=0 calls=0
*/
void sub_32b880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b880ULL || rel >= 0x32b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b890 size=192 callers=0 calls=2
   calls: sub_2db630, sub_359700
   ref: NV_sample_mask_override_coverage
   ref: unknown layout specifier '%s'
*/
void NV_sample_mask_override_coverage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b890ULL || rel >= 0x32b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b950 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: Patch Layout Property
   ref: fragment shaders
*/
void fragment_shaders_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b950ULL || rel >= 0x32b990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b990 size=64 callers=0 calls=0
   ref: Stream Layout Property
   ref: OpenGL does not allow using '%s' in %s
   ref: fragment shaders
*/
void fragment_shaders_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b990ULL || rel >= 0x32b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032b9d0 size=64 callers=0 calls=0
   ref: Secondary View Offset
   ref: OpenGL does not allow using '%s' in %s
   ref: fragment shaders
*/
void fragment_shaders_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32b9d0ULL || rel >= 0x32ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ba10 size=80 callers=0 calls=1
   calls: sub_359750
*/
void sub_32ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ba10ULL || rel >= 0x32ba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ba60 size=112 callers=3 calls=0
*/
void sub_32ba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ba60ULL || rel >= 0x32bad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bad0 size=16 callers=1 calls=0
*/
void sub_32bad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bad0ULL || rel >= 0x32bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bae0 size=32 callers=2 calls=0
*/
void sub_32bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bae0ULL || rel >= 0x32bb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bb00 size=16 callers=1 calls=0
*/
void sub_32bb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bb00ULL || rel >= 0x32bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bb10 size=16 callers=1 calls=0
*/
void sub_32bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bb10ULL || rel >= 0x32bb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bb20 size=16 callers=1 calls=0
*/
void sub_32bb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bb20ULL || rel >= 0x32bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bb30 size=224 callers=8 calls=0
   ref: layout qualifier '%s', incompatible with '%s'
*/
void layout_qualifier_s_incompatible_with_s_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bb30ULL || rel >= 0x32bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032bc10 size=1600 callers=0 calls=6
   calls: EXT_bindless_texture, Unknown_profile_option_s_ignored, layout_qualifier_s_incompatible_with_s_4, sub_2b7e60, sub_2dacc0, sub_2db630
   ref: PATCH_32
   ref: invalid value '%d' for layout qualifier '%s'
   ref: LINE_OUT
   ref: Vertices=%d
   ref: OpenGL/ES
   ref: Invocations=%d
   ref: unknown layout specifier '%s = %d'
   ref: %s does not allow %s
*/
void NV_gpu_shader5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32bc10ULL || rel >= 0x32c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c250 size=16 callers=0 calls=0
*/
void sub_32c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c250ULL || rel >= 0x32c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c260 size=16 callers=0 calls=0
*/
void sub_32c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c260ULL || rel >= 0x32c270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c270 size=16 callers=0 calls=0
*/
void sub_32c270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c270ULL || rel >= 0x32c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c280 size=16 callers=0 calls=0
*/
void sub_32c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c280ULL || rel >= 0x32c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c290 size=112 callers=0 calls=1
   calls: viewport_relative
*/
void sub_32c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c290ULL || rel >= 0x32c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c300 size=640 callers=0 calls=2
   calls: sub_2dacc0, sub_306070
   ref: NV_geometry_shader_passthrough
   ref: passthrough
   ref: layout(passthrough)
   ref: '%s' requires "#extension GL_%s : enable" before use
   ref: layout qualifier '%s', incompatible with '%s'
*/
void NV_geometry_shader_passthrough(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c300ULL || rel >= 0x32c580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c580 size=96 callers=0 calls=4
   calls: commandBindableNV, component_3, sub_328f30, sub_32aa60
*/
void sub_32c580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c580ULL || rel >= 0x32c5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c5e0 size=512 callers=0 calls=8
   calls: ARB_explicit_uniform_location_2, ARB_explicit_uniform_location_3, location, sub_306070, sub_307460, sub_3188a0, sub_3595e0, sub_359700
   ref: a non-negative integer
   ref: layout(location)
   ref: layout qualifier '%s', incompatible with '%s'
   ref: layout qualifier '%s', requires '%s'
   ref: location
*/
void location_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c5e0ULL || rel >= 0x32c7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032c7e0 size=608 callers=0 calls=6
   calls: sub_2ed1a0, sub_2ed320, sub_3608c0, sub_3608f0, unnamed_22, unrecognized_profile_specifier_s_2
   ref: a non-negative integer
   ref: STREAM%d
   ref: STREAM
   ref: stream
   ref: STREAM%d.%s
   ref: layout(stream=%d) conflicts with layout(stream=%d)
   ref: layout qualifier '%s', requires '%s'
*/
void stream(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32c7e0ULL || rel >= 0x32ca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ca40 size=16 callers=0 calls=0
*/
void sub_32ca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ca40ULL || rel >= 0x32ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ca50 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: Depth Layout Property
   ref: geometry shaders
*/
void geometry_shaders(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ca50ULL || rel >= 0x32ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ca90 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: Patch Layout Property
   ref: geometry shaders
*/
void geometry_shaders_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ca90ULL || rel >= 0x32cad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cad0 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: Coverage
   ref: geometry shaders
*/
void Coverage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cad0ULL || rel >= 0x32cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cb10 size=16 callers=0 calls=0
*/
void sub_32cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cb10ULL || rel >= 0x32cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cb20 size=112 callers=0 calls=1
   calls: viewport_relative
*/
void sub_32cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cb20ULL || rel >= 0x32cb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cb90 size=64 callers=0 calls=0
   ref: passthrough
   ref: OpenGL does not allow using '%s' in %s
   ref: tessellation shaders
*/
void passthrough_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cb90ULL || rel >= 0x32cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cbd0 size=16 callers=0 calls=0
*/
void sub_32cbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cbd0ULL || rel >= 0x32cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cbe0 size=16 callers=0 calls=0
*/
void sub_32cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cbe0ULL || rel >= 0x32cbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cbf0 size=16 callers=0 calls=0
*/
void sub_32cbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cbf0ULL || rel >= 0x32cc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cc00 size=128 callers=0 calls=0
   ref: buffer blocks
   ref: layout qualifier '%s', incompatible with '%s'
*/
void buffer_blocks(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cc00ULL || rel >= 0x32cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cc80 size=96 callers=0 calls=4
   calls: commandBindableNV, component_3, sub_328f30, sub_32aa60
*/
void sub_32cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cc80ULL || rel >= 0x32cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cce0 size=528 callers=0 calls=8
   calls: ARB_explicit_uniform_location_2, ARB_explicit_uniform_location_3, location, sub_306070, sub_307460, sub_3188a0, sub_3595e0, sub_359700
   ref: a non-negative integer
   ref: layout(location)
   ref: layout qualifier '%s', incompatible with '%s'
   ref: layout qualifier '%s', requires '%s'
   ref: location
*/
void location_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cce0ULL || rel >= 0x32cef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cef0 size=16 callers=0 calls=0
*/
void sub_32cef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cef0ULL || rel >= 0x32cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032cf00 size=272 callers=0 calls=5
   calls: sub_2db630, sub_306070, sub_3188a0, sub_359640, sub_359670
   ref: OpenGL does not allow using '%s' in %s
   ref: patch in
   ref: tessellation control shaders
   ref: patch out
   ref: tessellation evaluation shaders
*/
void tessellation_evaluation_shaders(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32cf00ULL || rel >= 0x32d010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d010 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: tessellation shaders
   ref: Stream
*/
void Stream(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d010ULL || rel >= 0x32d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d050 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: tessellation shaders
   ref: Depth Layout Property
*/
void tessellation_shaders(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d050ULL || rel >= 0x32d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d090 size=64 callers=0 calls=0
   ref: OpenGL does not allow using '%s' in %s
   ref: Coverage
   ref: tessellation shaders
*/
void Coverage_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d090ULL || rel >= 0x32d0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d0d0 size=16 callers=0 calls=0
*/
void sub_32d0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d0d0ULL || rel >= 0x32d0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d0e0 size=1648 callers=0 calls=9
   calls: EXT_bindless_texture, Unknown_profile_option_s_ignored, sub_2b7e10, sub_2b7e60, sub_2dacc0, sub_2db630, sub_359640, sub_359670, sub_3608f0
   ref: layout qualifier '%s' only permitted on the (non-variable) '%s' interface qualifier
   ref: Profile option '%s' value (%d) too large; clamped to %d
   ref: SPACE_FRODD
   ref: OpenGL/ES
   ref: SPACE_EQUAL
   ref: unknown layout specifier '%s = %d'
   ref: OutputPatchSize
   ref: POINT_MODE
*/
void OutputPatchSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d0e0ULL || rel >= 0x32d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d750 size=96 callers=1 calls=0
*/
void sub_32d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d750ULL || rel >= 0x32d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d7b0 size=64 callers=0 calls=0
   ref: compute shaders
   ref: OpenGL does not allow using '%s' in %s
   ref: Viewport Relative Property
*/
void compute_shaders(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d7b0ULL || rel >= 0x32d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d7f0 size=64 callers=0 calls=0
   ref: passthrough
   ref: compute shaders
   ref: OpenGL does not allow using '%s' in %s
*/
void passthrough_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d7f0ULL || rel >= 0x32d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d830 size=16 callers=0 calls=0
*/
void sub_32d830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d830ULL || rel >= 0x32d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d840 size=64 callers=0 calls=0
   ref: Component Layout Property
   ref: compute shaders
   ref: OpenGL does not allow using '%s' in %s
*/
void compute_shaders_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d840ULL || rel >= 0x32d880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d880 size=64 callers=0 calls=0
   ref: compute shaders
   ref: OpenGL does not allow using '%s' in %s
   ref: XFB Layout Property
*/
void compute_shaders_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d880ULL || rel >= 0x32d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d8c0 size=16 callers=0 calls=0
*/
void sub_32d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d8c0ULL || rel >= 0x32d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032d8d0 size=304 callers=0 calls=6
   calls: ARB_explicit_uniform_location_2, ARB_explicit_uniform_location_3, location, sub_306070, sub_307460, sub_3188a0
   ref: a non-negative integer
   ref: layout qualifier '%s', incompatible with '%s'
   ref: layout qualifier '%s', requires '%s'
   ref: location
*/
void location_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32d8d0ULL || rel >= 0x32da00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032da00 size=16 callers=0 calls=0
*/
void sub_32da00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32da00ULL || rel >= 0x32da10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032da10 size=64 callers=0 calls=0
   ref: compute shaders
   ref: OpenGL does not allow using '%s' in %s
   ref: Patch Layout Property
*/
void compute_shaders_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32da10ULL || rel >= 0x32da50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032da50 size=64 callers=0 calls=0
   ref: Stream Layout Property
   ref: compute shaders
   ref: OpenGL does not allow using '%s' in %s
*/
void compute_shaders_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32da50ULL || rel >= 0x32da90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032da90 size=64 callers=0 calls=0
   ref: compute shaders
   ref: OpenGL does not allow using '%s' in %s
   ref: Depth Layout Property
*/
void compute_shaders_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32da90ULL || rel >= 0x32dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032dad0 size=80 callers=0 calls=2
   calls: commandBindableNV, sub_32aa60
*/
void sub_32dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32dad0ULL || rel >= 0x32db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032db20 size=64 callers=0 calls=0
   ref: compute shaders
   ref: OpenGL does not allow using '%s' in %s
   ref: Coverage
*/
void Coverage_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32db20ULL || rel >= 0x32db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032db60 size=64 callers=0 calls=0
   ref: Secondary View Offset
   ref: compute shaders
   ref: OpenGL does not allow using '%s' in %s
*/
void compute_shaders_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32db60ULL || rel >= 0x32dba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032dba0 size=1744 callers=0 calls=7
   calls: s__d, sub_2dacc0, sub_2db630, sub_2fc060, sub_307ee0, sub_307fa0, sub_3177b0
   ref: layout(%s = %d) exceeds maximum value
   ref: layout_size_z
   ref: a non-negative integer
   ref: layout specifier '%s' conflicts with previous declaration
   ref: layout_size_x
   ref: ARB_compute_variable_group_size
   ref: gl_MaxComputeWorkGroupSize
   ref: layout_size_y
*/
void gl_MaxComputeWorkGroupSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32dba0ULL || rel >= 0x32e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e270 size=32 callers=5 calls=0
*/
void sub_32e270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e270ULL || rel >= 0x32e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e290 size=464 callers=0 calls=11
   calls: TMP_d, atomicCompSwap, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_2f9980, sub_2f9c60, sub_2f9d00, sub_2fc060, sub_3177b0, sub_3188c0
*/
void sub_32e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e290ULL || rel >= 0x32e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e460 size=32 callers=3 calls=0
*/
void sub_32e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e460ULL || rel >= 0x32e480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e480 size=192 callers=0 calls=3
   calls: atomicCompSwap, sub_2f7fb0, sub_2f9d00
*/
void sub_32e480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e480ULL || rel >= 0x32e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e540 size=256 callers=0 calls=6
   calls: sub_2f77f0, sub_2f7880, sub_2f9880, sub_2fcb90, sub_2fd0d0, sub_31b710
*/
void sub_32e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e540ULL || rel >= 0x32e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e640 size=560 callers=0 calls=8
   calls: sub_2f75e0, sub_2f77f0, sub_2f7880, sub_2f9880, sub_2faef0, sub_2fcb90, sub_2fd0d0, sub_31b710
*/
void sub_32e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e640ULL || rel >= 0x32e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032e870 size=448 callers=0 calls=9
   calls: TMP_d, atomicCompSwap, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_2f9af0, sub_2fb460, sub_2fc060, sub_3177b0
*/
void sub_32e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32e870ULL || rel >= 0x32ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ea30 size=960 callers=0 calls=8
   calls: TMP_d, atomicCompSwap, sub_2f77f0, sub_2f7880, sub_2f8290, sub_2f9880, sub_2f9af0, sub_3188c0
*/
void sub_32ea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ea30ULL || rel >= 0x32edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032edf0 size=240 callers=0 calls=1
   calls: sub_2f9880
*/
void sub_32edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32edf0ULL || rel >= 0x32eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032eee0 size=336 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2f9880, sub_2f9980, sub_2fb460, sub_31b820
*/
void sub_32eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32eee0ULL || rel >= 0x32f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032f030 size=448 callers=0 calls=8
   calls: TMP_d, atomicCompSwap, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_2fa180, sub_2fa4a0, sub_306070
*/
void sub_32f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32f030ULL || rel >= 0x32f1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032f1f0 size=80 callers=2 calls=1
   calls: sub_2ed320
*/
void sub_32f1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32f1f0ULL || rel >= 0x32f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032f240 size=1296 callers=0 calls=7
   calls: sub_2f6e10, sub_2f7060, sub_2f77f0, sub_2f7880, sub_2f7cf0, sub_2f7fb0, sub_36a9f0
*/
void sub_32f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32f240ULL || rel >= 0x32f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032f750 size=544 callers=0 calls=5
   calls: sub_2b8720, sub_2f9880, sub_2fcb90, sub_306070, sub_31b820
*/
void sub_32f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32f750ULL || rel >= 0x32f970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032f970 size=608 callers=3 calls=6
   calls: mem_CreatePool, sub_2a4ba0, sub_2ed320, sub_2f6e10, sub_2f7060, sub_2f7cf0
*/
void sub_32f970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32f970ULL || rel >= 0x32fbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fbd0 size=160 callers=0 calls=4
   calls: sub_2f9880, sub_2fd0d0, sub_31b710, sub_31b820
*/
void sub_32fbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fbd0ULL || rel >= 0x32fc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fc70 size=512 callers=0 calls=10
   calls: atomicCompSwap, sub_2f7fb0, sub_2f9880, sub_2f9980, sub_2fa960, sub_2fab10, sub_2fade0, sub_2fb460, sub_31b710, sub_32fe70
*/
void sub_32fc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fc70ULL || rel >= 0x32fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032fe70 size=160 callers=2 calls=5
   calls: atomicCompSwap, sub_2b85c0, sub_2fa7f0, sub_2fc060, sub_3177b0
*/
void sub_32fe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32fe70ULL || rel >= 0x32ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0032ff10 size=864 callers=0 calls=13
   calls: TMP_d, atomicCompSwap, sub_2b8650, sub_2f77f0, sub_2f7880, sub_2f7cf0, sub_2f7fb0, sub_2f8290, sub_2f9880, sub_2f9af0, sub_2fa180, sub_2fb460
   ... +1 more
*/
void sub_32ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x32ff10ULL || rel >= 0x330270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330270 size=64 callers=0 calls=1
   calls: sub_2f7fb0
*/
void sub_330270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330270ULL || rel >= 0x3302b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003302b0 size=608 callers=15 calls=3
   calls: sub_306070, sub_31dcb0, sub_3302b0
*/
void sub_3302b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3302b0ULL || rel >= 0x330510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330510 size=1040 callers=0 calls=10
   calls: mem_Alloc, sub_2ed320, sub_2ed440, sub_2f97b0, sub_2f9880, sub_306070, sub_30a0e0, sub_31b2a0, sub_31b820, sub_330920
*/
void sub_330510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330510ULL || rel >= 0x330920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330920 size=608 callers=7 calls=6
   calls: mem_Alloc, sub_2ed320, sub_2f97b0, sub_2f9880, sub_31b2a0, sub_330920
*/
void sub_330920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330920ULL || rel >= 0x330b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330b80 size=176 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_330b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330b80ULL || rel >= 0x330c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330c30 size=80 callers=0 calls=2
   calls: sub_2a45a0, sub_2a4910
*/
void sub_330c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330c30ULL || rel >= 0x330c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330c80 size=16 callers=0 calls=0
*/
void sub_330c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330c80ULL || rel >= 0x330c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330c90 size=16 callers=0 calls=0
*/
void sub_330c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330c90ULL || rel >= 0x330ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00330ca0 size=2896 callers=8 calls=12
   calls: sub_2a42a0, sub_2a4360, sub_2f7b60, sub_2f97b0, sub_2f9880, sub_2fa4a0, sub_306070, sub_31b710, sub_31dcb0, sub_3302b0, sub_330920, sub_330ca0
*/
void sub_330ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x330ca0ULL || rel >= 0x3317f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003317f0 size=160 callers=3 calls=3
   calls: sub_2ed320, sub_330ca0, sub_3317f0
*/
void sub_3317f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3317f0ULL || rel >= 0x331890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331890 size=128 callers=0 calls=2
   calls: sub_306070, sub_3317f0
*/
void sub_331890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331890ULL || rel >= 0x331910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331910 size=368 callers=1 calls=5
   calls: mem_Alloc, sub_2a44b0, sub_2a47d0, sub_2a4f00, sub_2ed320
*/
void sub_331910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331910ULL || rel >= 0x331a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331a80 size=176 callers=0 calls=4
   calls: sub_2f75e0, sub_2fa4a0, sub_3317f0, sub_331910
*/
void sub_331a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331a80ULL || rel >= 0x331b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331b30 size=240 callers=0 calls=2
   calls: sub_2a45a0, sub_2ed320
*/
void sub_331b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331b30ULL || rel >= 0x331c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331c20 size=384 callers=0 calls=6
   calls: sub_2a42a0, sub_2a4360, sub_2ed320, sub_2fa4a0, sub_3224c0, sub_330ca0
*/
void sub_331c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331c20ULL || rel >= 0x331da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331da0 size=304 callers=0 calls=3
   calls: sub_2f9af0, sub_2fa180, sub_332e90
*/
void sub_331da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331da0ULL || rel >= 0x331ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331ed0 size=112 callers=0 calls=0
*/
void sub_331ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331ed0ULL || rel >= 0x331f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00331f40 size=2160 callers=2 calls=21
   calls: mem_Alloc, mem_CreatePool, sub_2a42a0, sub_2a4360, sub_2a44b0, sub_2a45a0, sub_2a47d0, sub_2a4ba0, sub_2a4f00, sub_2ed1a0, sub_2ed320, sub_2ed440
   ... +9 more
*/
void sub_331f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x331f40ULL || rel >= 0x3327b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003327b0 size=1760 callers=4 calls=10
   calls: sub_2a4420, sub_2a4960, sub_2db4f0, sub_2ed320, sub_306070, sub_3188f0, sub_31b820, sub_3302b0, sub_3608f0, unnamed_31
   ref: "%s" might be used before being initialized
   ref: "%s.%s" might be used before being initialized
   ref: %s[%d]
*/
void unnamed_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3327b0ULL || rel >= 0x332e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332e90 size=240 callers=2 calls=3
   calls: sub_2ed320, sub_330ca0, sub_332e90
*/
void sub_332e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332e90ULL || rel >= 0x332f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332f80 size=80 callers=0 calls=1
   calls: sub_2a4f00
*/
void sub_332f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332f80ULL || rel >= 0x332fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332fd0 size=16 callers=0 calls=0
*/
void sub_332fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332fd0ULL || rel >= 0x332fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00332fe0 size=544 callers=2 calls=6
   calls: sub_306070, sub_3188a0, sub_3188f0, sub_31b820, sub_3302b0, sub_332fe0
*/
void sub_332fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x332fe0ULL || rel >= 0x333200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333200 size=160 callers=3 calls=5
   calls: sub_333200, sub_36d050, sub_36d910, sub_36d940, sub_36d9a0
*/
void sub_333200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333200ULL || rel >= 0x3332a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003332a0 size=32 callers=0 calls=0
*/
void sub_3332a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3332a0ULL || rel >= 0x3332c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003332c0 size=160 callers=1 calls=1
   calls: sub_366750
*/
void sub_3332c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3332c0ULL || rel >= 0x333360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333360 size=160 callers=1 calls=0
*/
void sub_333360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333360ULL || rel >= 0x333400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333400 size=560 callers=2 calls=8
   calls: sub_2ac3d0, sub_2ac440, sub_2ac470, sub_333630, sub_360f30, sub_366750, sub_366840, sub_366eb0
*/
void sub_333400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333400ULL || rel >= 0x333630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333630 size=752 callers=4 calls=8
   calls: TMP_d_2, sub_2ac440, sub_2ac470, sub_333630, sub_360f30, sub_366840, sub_366eb0, sub_36e230
*/
void sub_333630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333630ULL || rel >= 0x333920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333920 size=400 callers=1 calls=7
   calls: mem_CreatePool, sub_2a4ba0, sub_338bf0, sub_33d6c0, sub_33e930, sub_369ec0, sub_36a750
*/
void sub_333920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333920ULL || rel >= 0x333ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333ab0 size=80 callers=0 calls=1
   calls: mem_Alloc
*/
void sub_333ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333ab0ULL || rel >= 0x333b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00333b00 size=3008 callers=0 calls=19
   calls: mem_Alloc, mem_CreatePool, negative_loop_iteration_count, sub_2a4ba0, sub_2eddf0, sub_2ee310, sub_3353a0, sub_335820, sub_337300, sub_337390, sub_35fb80, sub_361950
   ... +7 more
*/
void sub_333b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x333b00ULL || rel >= 0x3346c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003346c0 size=224 callers=1 calls=4
   calls: sub_2ac3b0, sub_2ed320, sub_369ec0, sub_36eea0
*/
void sub_3346c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3346c0ULL || rel >= 0x3347a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003347a0 size=208 callers=0 calls=2
   calls: sub_337300, sub_3373f0
*/
void sub_3347a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3347a0ULL || rel >= 0x334870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334870 size=128 callers=0 calls=1
   calls: sub_36d120
*/
void sub_334870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334870ULL || rel >= 0x3348f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003348f0 size=992 callers=1 calls=13
   calls: mem_CreatePool, sub_2a4ba0, sub_2d5b40, sub_2eddf0, sub_2ee210, sub_2ee310, sub_3346c0, sub_336080, sub_338bf0, sub_33d6c0, sub_33e930, sub_343b60
   ... +1 more
*/
void sub_3348f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3348f0ULL || rel >= 0x334cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334cd0 size=80 callers=0 calls=1
   calls: sub_362aa0
*/
void sub_334cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334cd0ULL || rel >= 0x334d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334d20 size=80 callers=0 calls=1
   calls: sub_2ee110
*/
void sub_334d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334d20ULL || rel >= 0x334d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334d70 size=80 callers=0 calls=1
   calls: sub_2ee110
*/
void sub_334d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334d70ULL || rel >= 0x334dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00334dc0 size=1504 callers=1 calls=12
   calls: d_fatal_error_C9999, invalid_discard_statement_encountered_in_DupStmt, sub_2ac3d0, sub_2ac7d0, sub_2db4f0, sub_333400, sub_360f30, sub_3684c0, sub_3686e0, sub_369bf0, sub_369ec0, sub_36a750
   ref: negative loop iteration count
   ref: not unrolling loop that executes %d times since maximum loop unroll count is %d
*/
void negative_loop_iteration_count(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x334dc0ULL || rel >= 0x3353a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003353a0 size=528 callers=11 calls=4
   calls: sub_2edeb0, sub_2ee110, sub_3353a0, sub_361950
*/
void sub_3353a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3353a0ULL || rel >= 0x3355b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003355b0 size=480 callers=0 calls=10
   calls: sub_2dc8c0, sub_333200, sub_3353a0, sub_337300, sub_35ca20, sub_3627b0, sub_369bf0, sub_36d910, sub_36d940, sub_36da10
*/
void sub_3355b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3355b0ULL || rel >= 0x335790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00335790 size=32 callers=0 calls=0
*/
void sub_335790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x335790ULL || rel >= 0x3357b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

