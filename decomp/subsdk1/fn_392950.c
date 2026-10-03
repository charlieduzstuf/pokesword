/* subsdk1 functions 00392950..003b1930 (18 of 23). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00392950 size=528 callers=1 calls=5
   calls: EndStreamPrimitive, d_warning_C_04d_2, sub_2a4d70, sub_382790, sub_388200
   ref: SPIR-V: Unexpected end of SPIR-V module
   ref: SPIR-V: Invalid %s
   ref: opcode - expecting OpLabel or OpFunctionEnd
*/
void SPIR_V_Invalid_s_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392950ULL || rel >= 0x392b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00392b60 size=1408 callers=1 calls=24
   calls: GL_ARB_shader_subroutine, KHR_shader_subgroup_vote, SPIR_V_Invalid_s, SPIR_V_Invalid_s_2, TMP__d, bindless, constant, d_warning_C_04d_2, execution_mode, execution_model, gl_LocalInvocationIndex_2, gl_PerVertex
   ... +12 more
   ref: SPIR-V: Invalid %s
   ref: opcode
   ref: memory model
*/
void opcode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x392b60ULL || rel >= 0x3930e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003930e0 size=208 callers=1 calls=2
   calls: opcode, sub_2ed1a0
*/
void sub_3930e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3930e0ULL || rel >= 0x3931b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003931b0 size=208 callers=0 calls=1
   calls: d_warning_C_04d_2
   ref: SPIR-V: Invalid entry point %s
   ref: SPIR-V: Invalid spec constant ID provided in specialization info
*/
void SPIR_V_Invalid_entry_point_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3931b0ULL || rel >= 0x393280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393280 size=384 callers=2 calls=7
   calls: interpolateAtCentroid, mem_Alloc, mem_CreatePool, sub_230, sub_240, sub_250, sub_2a4d70
*/
void sub_393280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393280ULL || rel >= 0x393400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393400 size=48 callers=1 calls=1
   calls: sub_2a4ba0
*/
void sub_393400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393400ULL || rel >= 0x393430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393430 size=128 callers=1243 calls=2
   calls: sub_3934b0, sub_393560
*/
void sub_393430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393430ULL || rel >= 0x3934b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003934b0 size=176 callers=4 calls=0
*/
void sub_3934b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3934b0ULL || rel >= 0x393560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393560 size=400 callers=3 calls=0
*/
void sub_393560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393560ULL || rel >= 0x3936f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003936f0 size=80 callers=1436 calls=1
   calls: sub_3934b0
*/
void sub_3936f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3936f0ULL || rel >= 0x393740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393740 size=80 callers=100 calls=1
   calls: sub_393560
*/
void sub_393740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393740ULL || rel >= 0x393790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393790 size=352 callers=8 calls=9
   calls: s__d, sub_2f94b0, sub_3027f0, sub_307ee0, sub_3934b0, sub_3938f0, sub_393930, sub_393950, sub_393960
*/
void sub_393790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393790ULL || rel >= 0x3938f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003938f0 size=64 callers=1 calls=1
   calls: sub_318630
*/
void sub_3938f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3938f0ULL || rel >= 0x393930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393930 size=32 callers=1 calls=0
*/
void sub_393930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393930ULL || rel >= 0x393950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393950 size=16 callers=1 calls=0
*/
void sub_393950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393950ULL || rel >= 0x393960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393960 size=16 callers=1 calls=0
*/
void sub_393960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393960ULL || rel >= 0x393970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393970 size=368 callers=0 calls=4
   calls: sub_2ed1a0, sub_2ed320, sub_393f30, sub_393f40
*/
void sub_393970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393970ULL || rel >= 0x393ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393ae0 size=176 callers=1 calls=2
   calls: sub_393b90, sub_393bb0
*/
void sub_393ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393ae0ULL || rel >= 0x393b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393b90 size=32 callers=1 calls=0
*/
void sub_393b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393b90ULL || rel >= 0x393bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393bb0 size=32 callers=1 calls=0
*/
void sub_393bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393bb0ULL || rel >= 0x393bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393bd0 size=112 callers=1 calls=8
   calls: sub_393c40, sub_393c90, sub_393cf0, sub_393d50, sub_393db0, sub_393e10, sub_393e70, sub_393ed0
*/
void sub_393bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393bd0ULL || rel >= 0x393c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393c40 size=80 callers=1 calls=1
   calls: sub_393790
*/
void sub_393c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393c40ULL || rel >= 0x393c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393c90 size=96 callers=1 calls=2
   calls: sub_393790, sub_44f5a0
*/
void sub_393c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393c90ULL || rel >= 0x393cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393cf0 size=96 callers=1 calls=2
   calls: sub_393790, sub_44f5a0
*/
void sub_393cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393cf0ULL || rel >= 0x393d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393d50 size=96 callers=1 calls=2
   calls: sub_393790, sub_44f5a0
*/
void sub_393d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393d50ULL || rel >= 0x393db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393db0 size=96 callers=1 calls=2
   calls: sub_393790, sub_44f5a0
*/
void sub_393db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393db0ULL || rel >= 0x393e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393e10 size=96 callers=1 calls=2
   calls: sub_393790, sub_44f5a0
*/
void sub_393e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393e10ULL || rel >= 0x393e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393e70 size=96 callers=1 calls=2
   calls: sub_393790, sub_44f5a0
*/
void sub_393e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393e70ULL || rel >= 0x393ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393ed0 size=96 callers=1 calls=2
   calls: sub_393790, sub_44f5a0
*/
void sub_393ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393ed0ULL || rel >= 0x393f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393f30 size=16 callers=2 calls=0
*/
void sub_393f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393f30ULL || rel >= 0x393f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393f40 size=16 callers=3 calls=0
*/
void sub_393f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393f40ULL || rel >= 0x393f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00393f50 size=224 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_393f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x393f50ULL || rel >= 0x394030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394030 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426910
*/
void sub_394030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394030ULL || rel >= 0x3940b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003940b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_426a20
*/
void sub_3940b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3940b0ULL || rel >= 0x394110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394110 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_426b10
*/
void sub_394110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394110ULL || rel >= 0x394180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394180 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426910
*/
void sub_394180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394180ULL || rel >= 0x394200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394200 size=96 callers=0 calls=2
   calls: sub_393430, sub_426a20
*/
void sub_394200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394200ULL || rel >= 0x394260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394260 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_426b10
*/
void sub_394260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394260ULL || rel >= 0x3942d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003942d0 size=320 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
   ref: /@0@1@2@
*/
void f_0_1_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3942d0ULL || rel >= 0x394410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394410 size=368 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_394410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394410ULL || rel >= 0x394580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394580 size=336 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_394580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394580ULL || rel >= 0x3946d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003946d0 size=384 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3946d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3946d0ULL || rel >= 0x394850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394850 size=240 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_394850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394850ULL || rel >= 0x394940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394940 size=96 callers=0 calls=2
   calls: sub_393430, sub_426be0
*/
void sub_394940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394940ULL || rel >= 0x3949a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003949a0 size=240 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3949a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3949a0ULL || rel >= 0x394a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394a90 size=144 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_394a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394a90ULL || rel >= 0x394b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394b20 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_394b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394b20ULL || rel >= 0x394bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394bc0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426ca0
*/
void sub_394bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394bc0ULL || rel >= 0x394c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394c40 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426ca0
*/
void sub_394c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394c40ULL || rel >= 0x394cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394cc0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426d60
*/
void sub_394cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394cc0ULL || rel >= 0x394d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394d40 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426eb0
*/
void sub_394d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394d40ULL || rel >= 0x394dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394dc0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_427080
*/
void sub_394dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394dc0ULL || rel >= 0x394e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394e40 size=96 callers=0 calls=2
   calls: sub_393430, sub_4272d0
*/
void sub_394e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394e40ULL || rel >= 0x394ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394ea0 size=96 callers=0 calls=2
   calls: sub_393430, sub_427390
*/
void sub_394ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394ea0ULL || rel >= 0x394f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394f00 size=96 callers=0 calls=2
   calls: sub_393430, sub_4274d0
*/
void sub_394f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394f00ULL || rel >= 0x394f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394f60 size=96 callers=0 calls=2
   calls: sub_393430, sub_427690
*/
void sub_394f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394f60ULL || rel >= 0x394fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00394fc0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4278d0
*/
void sub_394fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x394fc0ULL || rel >= 0x395030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395030 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_427970
*/
void sub_395030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395030ULL || rel >= 0x395080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395080 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_395080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395080ULL || rel >= 0x3950f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003950f0 size=224 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3950f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3950f0ULL || rel >= 0x3951d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003951d0 size=208 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3951d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3951d0ULL || rel >= 0x3952a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003952a0 size=256 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3952a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3952a0ULL || rel >= 0x3953a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003953a0 size=240 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3953a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3953a0ULL || rel >= 0x395490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395490 size=224 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_395490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395490ULL || rel >= 0x395570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395570 size=1776 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_395570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395570ULL || rel >= 0x395c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00395c60 size=1760 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_393740, sub_426860
*/
void sub_395c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x395c60ULL || rel >= 0x396340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396340 size=1904 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_393740, sub_426860
*/
void sub_396340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396340ULL || rel >= 0x396ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396ab0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_427a70
*/
void sub_396ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396ab0ULL || rel >= 0x396b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396b00 size=96 callers=0 calls=2
   calls: sub_393430, sub_426be0
*/
void sub_396b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396b00ULL || rel >= 0x396b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396b60 size=96 callers=0 calls=2
   calls: sub_393430, sub_427b10
*/
void sub_396b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396b60ULL || rel >= 0x396bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396bc0 size=96 callers=0 calls=2
   calls: sub_393430, sub_427c50
*/
void sub_396bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396bc0ULL || rel >= 0x396c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396c20 size=96 callers=0 calls=2
   calls: sub_393430, sub_427e10
*/
void sub_396c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396c20ULL || rel >= 0x396c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396c80 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428050
*/
void sub_396c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396c80ULL || rel >= 0x396cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396cf0 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428110
*/
void sub_396cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396cf0ULL || rel >= 0x396d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396d60 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428250
*/
void sub_396d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396d60ULL || rel >= 0x396dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396dd0 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428410
*/
void sub_396dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396dd0ULL || rel >= 0x396e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396e40 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428650
*/
void sub_396e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396e40ULL || rel >= 0x396eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396eb0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4286f0
*/
void sub_396eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396eb0ULL || rel >= 0x396f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00396f30 size=400 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_396f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x396f30ULL || rel >= 0x3970c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003970c0 size=416 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3970c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3970c0ULL || rel >= 0x397260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397260 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_428790
*/
void sub_397260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397260ULL || rel >= 0x3972b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003972b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4287d0
*/
void sub_3972b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3972b0ULL || rel >= 0x397310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397310 size=240 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_397310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397310ULL || rel >= 0x397400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397400 size=320 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_397400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397400ULL || rel >= 0x397540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397540 size=400 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_397540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397540ULL || rel >= 0x3976d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003976d0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_428790
*/
void sub_3976d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3976d0ULL || rel >= 0x397720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397720 size=96 callers=0 calls=2
   calls: sub_393430, sub_4287d0
*/
void sub_397720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397720ULL || rel >= 0x397780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397780 size=240 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_397780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397780ULL || rel >= 0x397870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397870 size=320 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_397870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397870ULL || rel >= 0x3979b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003979b0 size=400 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3979b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3979b0ULL || rel >= 0x397b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397b40 size=272 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_397b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397b40ULL || rel >= 0x397c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397c50 size=272 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_397c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397c50ULL || rel >= 0x397d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397d60 size=192 callers=0 calls=4
   calls: sub_2fade0, sub_2fb460, sub_3936f0, sub_426860
*/
void sub_397d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397d60ULL || rel >= 0x397e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397e20 size=368 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_397e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397e20ULL || rel >= 0x397f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00397f90 size=352 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_397f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x397f90ULL || rel >= 0x3980f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003980f0 size=1328 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_3980f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3980f0ULL || rel >= 0x398620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398620 size=1696 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_398620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398620ULL || rel >= 0x398cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00398cc0 size=1696 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_398cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x398cc0ULL || rel >= 0x399360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399360 size=1728 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_399360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399360ULL || rel >= 0x399a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00399a20 size=1696 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_399a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x399a20ULL || rel >= 0x39a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a0c0 size=400 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a0c0ULL || rel >= 0x39a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a250 size=416 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a250ULL || rel >= 0x39a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a3f0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_428830
*/
void sub_39a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a3f0ULL || rel >= 0x39a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a440 size=256 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_39a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a440ULL || rel >= 0x39a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a540 size=432 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_39a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a540ULL || rel >= 0x39a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a6f0 size=592 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_39a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a6f0ULL || rel >= 0x39a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039a940 size=752 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_39a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39a940ULL || rel >= 0x39ac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ac30 size=336 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39ac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ac30ULL || rel >= 0x39ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ad80 size=256 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_39ad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ad80ULL || rel >= 0x39ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ae80 size=1680 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_393430, sub_426860
*/
void sub_39ae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ae80ULL || rel >= 0x39b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039b510 size=2944 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_39b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39b510ULL || rel >= 0x39c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039c090 size=3184 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_39c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39c090ULL || rel >= 0x39cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039cd00 size=576 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39cd00ULL || rel >= 0x39cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039cf40 size=784 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39cf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39cf40ULL || rel >= 0x39d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d250 size=976 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d250ULL || rel >= 0x39d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d620 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4288b0
*/
void sub_39d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d620ULL || rel >= 0x39d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d690 size=192 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_39d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d690ULL || rel >= 0x39d750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d750 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_428960
*/
void sub_39d750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d750ULL || rel >= 0x39d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d7d0 size=352 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d7d0ULL || rel >= 0x39d930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d930 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426ca0
*/
void sub_39d930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d930ULL || rel >= 0x39d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039d9b0 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428050
*/
void sub_39d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39d9b0ULL || rel >= 0x39da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039da20 size=240 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39da20ULL || rel >= 0x39db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039db10 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426ca0
*/
void sub_39db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39db10ULL || rel >= 0x39db90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039db90 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_39db90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39db90ULL || rel >= 0x39dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039dc00 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426ca0
*/
void sub_39dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39dc00ULL || rel >= 0x39dc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039dc80 size=192 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_39dc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39dc80ULL || rel >= 0x39dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039dd40 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_427a70
*/
void sub_39dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39dd40ULL || rel >= 0x39dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039dd90 size=96 callers=0 calls=2
   calls: sub_393430, sub_426be0
*/
void sub_39dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39dd90ULL || rel >= 0x39ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ddf0 size=96 callers=0 calls=2
   calls: sub_393430, sub_427b10
*/
void sub_39ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ddf0ULL || rel >= 0x39de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039de50 size=96 callers=0 calls=2
   calls: sub_393430, sub_427c50
*/
void sub_39de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39de50ULL || rel >= 0x39deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039deb0 size=96 callers=0 calls=2
   calls: sub_393430, sub_427e10
*/
void sub_39deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39deb0ULL || rel >= 0x39df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039df10 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428050
*/
void sub_39df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39df10ULL || rel >= 0x39df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039df80 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428110
*/
void sub_39df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39df80ULL || rel >= 0x39dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039dff0 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428250
*/
void sub_39dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39dff0ULL || rel >= 0x39e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e060 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428410
*/
void sub_39e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e060ULL || rel >= 0x39e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e0d0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_427a70
*/
void sub_39e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e0d0ULL || rel >= 0x39e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e120 size=96 callers=0 calls=2
   calls: sub_393430, sub_426be0
*/
void sub_39e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e120ULL || rel >= 0x39e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e180 size=96 callers=0 calls=2
   calls: sub_393430, sub_427b10
*/
void sub_39e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e180ULL || rel >= 0x39e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e1e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_427c50
*/
void sub_39e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e1e0ULL || rel >= 0x39e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e240 size=96 callers=0 calls=2
   calls: sub_393430, sub_427e10
*/
void sub_39e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e240ULL || rel >= 0x39e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e2a0 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428050
*/
void sub_39e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e2a0ULL || rel >= 0x39e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e310 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428110
*/
void sub_39e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e310ULL || rel >= 0x39e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e380 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428250
*/
void sub_39e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e380ULL || rel >= 0x39e3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e3f0 size=112 callers=0 calls=3
   calls: sub_3936f0, sub_393740, sub_428410
*/
void sub_39e3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e3f0ULL || rel >= 0x39e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e460 size=384 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_39e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e460ULL || rel >= 0x39e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e5e0 size=384 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_39e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e5e0ULL || rel >= 0x39e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e760 size=528 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_39e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e760ULL || rel >= 0x39e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039e970 size=368 callers=0 calls=4
   calls: atomicCompSwap, sub_393430, sub_3936f0, sub_426860
*/
void sub_39e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39e970ULL || rel >= 0x39eae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039eae0 size=672 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39eae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39eae0ULL || rel >= 0x39ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ed80 size=944 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ed80ULL || rel >= 0x39f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f130 size=1216 callers=0 calls=5
   calls: atomicCompSwap, sub_2f7fb0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f130ULL || rel >= 0x39f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f5f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_426be0
*/
void sub_39f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f5f0ULL || rel >= 0x39f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f650 size=96 callers=0 calls=2
   calls: sub_393430, sub_427b10
*/
void sub_39f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f650ULL || rel >= 0x39f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f6b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_427c50
*/
void sub_39f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f6b0ULL || rel >= 0x39f710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f710 size=96 callers=0 calls=2
   calls: sub_393430, sub_427e10
*/
void sub_39f710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f710ULL || rel >= 0x39f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f770 size=192 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_39f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f770ULL || rel >= 0x39f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f830 size=224 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f830ULL || rel >= 0x39f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f910 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_427a70
*/
void sub_39f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f910ULL || rel >= 0x39f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039f960 size=192 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_39f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39f960ULL || rel >= 0x39fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fa20 size=96 callers=0 calls=2
   calls: sub_393430, sub_4272d0
*/
void sub_39fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fa20ULL || rel >= 0x39fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fa80 size=96 callers=0 calls=2
   calls: sub_393430, sub_427390
*/
void sub_39fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fa80ULL || rel >= 0x39fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fae0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4274d0
*/
void sub_39fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fae0ULL || rel >= 0x39fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fb40 size=96 callers=0 calls=2
   calls: sub_393430, sub_427690
*/
void sub_39fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fb40ULL || rel >= 0x39fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fba0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426ca0
*/
void sub_39fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fba0ULL || rel >= 0x39fc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fc20 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426d60
*/
void sub_39fc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fc20ULL || rel >= 0x39fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fca0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426eb0
*/
void sub_39fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fca0ULL || rel >= 0x39fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fd20 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_427080
*/
void sub_39fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fd20ULL || rel >= 0x39fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039fda0 size=352 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_39fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39fda0ULL || rel >= 0x39ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0039ff00 size=368 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_39ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x39ff00ULL || rel >= 0x3a0070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0070 size=432 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3a0070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0070ULL || rel >= 0x3a0220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0220 size=96 callers=0 calls=2
   calls: sub_393430, sub_428a00
*/
void sub_3a0220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0220ULL || rel >= 0x3a0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0280 size=208 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3a0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0280ULL || rel >= 0x3a0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0350 size=528 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a0350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0350ULL || rel >= 0x3a0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0560 size=1424 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0560ULL || rel >= 0x3a0af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0af0 size=144 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3a0af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0af0ULL || rel >= 0x3a0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0b80 size=400 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_393740, sub_426860
*/
void sub_3a0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0b80ULL || rel >= 0x3a0d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0d10 size=544 callers=0 calls=5
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3a0d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0d10ULL || rel >= 0x3a0f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a0f30 size=1456 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a0f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a0f30ULL || rel >= 0x3a14e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a14e0 size=640 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_2fb460, sub_393430, sub_3936f0, sub_426860
*/
void sub_3a14e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a14e0ULL || rel >= 0x3a1760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1760 size=608 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3a1760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1760ULL || rel >= 0x3a19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a19c0 size=320 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3a19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a19c0ULL || rel >= 0x3a1b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1b00 size=352 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3a1b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1b00ULL || rel >= 0x3a1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1c60 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_426b10
*/
void sub_3a1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1c60ULL || rel >= 0x3a1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1cd0 size=80 callers=0 calls=2
   calls: sub_393430, sub_428a60
*/
void sub_3a1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1cd0ULL || rel >= 0x3a1d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1d20 size=160 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3a1d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1d20ULL || rel >= 0x3a1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1dc0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428a70
*/
void sub_3a1dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1dc0ULL || rel >= 0x3a1e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1e20 size=96 callers=0 calls=2
   calls: sub_393430, sub_428b30
*/
void sub_3a1e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1e20ULL || rel >= 0x3a1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1e80 size=96 callers=0 calls=2
   calls: sub_393430, sub_428c70
*/
void sub_3a1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1e80ULL || rel >= 0x3a1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1ee0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428e30
*/
void sub_3a1ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1ee0ULL || rel >= 0x3a1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1f40 size=96 callers=0 calls=2
   calls: sub_393430, sub_428a70
*/
void sub_3a1f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1f40ULL || rel >= 0x3a1fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a1fa0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428b30
*/
void sub_3a1fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a1fa0ULL || rel >= 0x3a2000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2000 size=96 callers=0 calls=2
   calls: sub_393430, sub_428c70
*/
void sub_3a2000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2000ULL || rel >= 0x3a2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2060 size=96 callers=0 calls=2
   calls: sub_393430, sub_428e30
*/
void sub_3a2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2060ULL || rel >= 0x3a20c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a20c0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428a70
*/
void sub_3a20c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a20c0ULL || rel >= 0x3a2120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2120 size=96 callers=0 calls=2
   calls: sub_393430, sub_428b30
*/
void sub_3a2120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2120ULL || rel >= 0x3a2180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2180 size=96 callers=0 calls=2
   calls: sub_393430, sub_428c70
*/
void sub_3a2180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2180ULL || rel >= 0x3a21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a21e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428e30
*/
void sub_3a21e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a21e0ULL || rel >= 0x3a2240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2240 size=96 callers=0 calls=2
   calls: sub_393430, sub_428a70
*/
void sub_3a2240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2240ULL || rel >= 0x3a22a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a22a0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428b30
*/
void sub_3a22a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a22a0ULL || rel >= 0x3a2300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2300 size=96 callers=0 calls=2
   calls: sub_393430, sub_428c70
*/
void sub_3a2300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2300ULL || rel >= 0x3a2360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2360 size=96 callers=0 calls=2
   calls: sub_393430, sub_428e30
*/
void sub_3a2360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2360ULL || rel >= 0x3a23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a23c0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428a70
*/
void sub_3a23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a23c0ULL || rel >= 0x3a2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2420 size=96 callers=0 calls=2
   calls: sub_393430, sub_428b30
*/
void sub_3a2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2420ULL || rel >= 0x3a2480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2480 size=96 callers=0 calls=2
   calls: sub_393430, sub_428c70
*/
void sub_3a2480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2480ULL || rel >= 0x3a24e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a24e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428e30
*/
void sub_3a24e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a24e0ULL || rel >= 0x3a2540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2540 size=96 callers=0 calls=2
   calls: sub_393430, sub_428a70
*/
void sub_3a2540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2540ULL || rel >= 0x3a25a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a25a0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428b30
*/
void sub_3a25a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a25a0ULL || rel >= 0x3a2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2600 size=96 callers=0 calls=2
   calls: sub_393430, sub_428c70
*/
void sub_3a2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2600ULL || rel >= 0x3a2660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2660 size=96 callers=0 calls=2
   calls: sub_393430, sub_428e30
*/
void sub_3a2660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2660ULL || rel >= 0x3a26c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a26c0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428a70
*/
void sub_3a26c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a26c0ULL || rel >= 0x3a2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2720 size=96 callers=0 calls=2
   calls: sub_393430, sub_428b30
*/
void sub_3a2720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2720ULL || rel >= 0x3a2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2780 size=96 callers=0 calls=2
   calls: sub_393430, sub_428c70
*/
void sub_3a2780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2780ULL || rel >= 0x3a27e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a27e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_428e30
*/
void sub_3a27e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a27e0ULL || rel >= 0x3a2840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2840 size=320 callers=0 calls=6
   calls: atomicCompSwap, sub_2fade0, sub_2fb460, sub_393430, sub_3936f0, sub_426860
*/
void sub_3a2840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2840ULL || rel >= 0x3a2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2980 size=1616 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3a2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2980ULL || rel >= 0x3a2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a2fd0 size=432 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3a2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a2fd0ULL || rel >= 0x3a3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3180 size=784 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3180ULL || rel >= 0x3a3490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3490 size=736 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a3490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3490ULL || rel >= 0x3a3770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3770 size=784 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a3770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3770ULL || rel >= 0x3a3a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a3a80 size=1648 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_2fb460, sub_393430, sub_426860
*/
void sub_3a3a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a3a80ULL || rel >= 0x3a40f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a40f0 size=336 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3a40f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a40f0ULL || rel >= 0x3a4240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4240 size=576 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3a4240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4240ULL || rel >= 0x3a4480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4480 size=784 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3a4480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4480ULL || rel >= 0x3a4790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4790 size=992 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3a4790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4790ULL || rel >= 0x3a4b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4b70 size=272 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3a4b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4b70ULL || rel >= 0x3a4c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4c80 size=304 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
   ref: /@0@1@
*/
void f_0_1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4c80ULL || rel >= 0x3a4db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4db0 size=320 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3a4db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4db0ULL || rel >= 0x3a4ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a4ef0 size=352 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
   ref: /@0@1@
*/
void f_0_1_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a4ef0ULL || rel >= 0x3a5050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5050 size=192 callers=0 calls=4
   calls: atomicCompSwap, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a5050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5050ULL || rel >= 0x3a5110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5110 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_426ca0
*/
void sub_3a5110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5110ULL || rel >= 0x3a5190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5190 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_4279f0
*/
void sub_3a5190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5190ULL || rel >= 0x3a5200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5200 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_427970
*/
void sub_3a5200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5200ULL || rel >= 0x3a5250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5250 size=336 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a5250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5250ULL || rel >= 0x3a53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a53a0 size=288 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a53a0ULL || rel >= 0x3a54c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a54c0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429070
*/
void sub_3a54c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a54c0ULL || rel >= 0x3a5510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5510 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429070
*/
void sub_3a5510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5510ULL || rel >= 0x3a5560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5560 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429070
*/
void sub_3a5560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5560ULL || rel >= 0x3a55b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a55b0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429070
*/
void sub_3a55b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a55b0ULL || rel >= 0x3a5600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5600 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4290f0
*/
void sub_3a5600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5600ULL || rel >= 0x3a5650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5650 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4291c0
*/
void sub_3a5650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5650ULL || rel >= 0x3a56a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a56a0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4290f0
*/
void sub_3a56a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a56a0ULL || rel >= 0x3a56f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a56f0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4291c0
*/
void sub_3a56f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a56f0ULL || rel >= 0x3a5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5740 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4290f0
*/
void sub_3a5740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5740ULL || rel >= 0x3a5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5790 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4291c0
*/
void sub_3a5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5790ULL || rel >= 0x3a57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a57e0 size=1488 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a57e0ULL || rel >= 0x3a5db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a5db0 size=1232 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a5db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a5db0ULL || rel >= 0x3a6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6280 size=1312 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6280ULL || rel >= 0x3a67a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a67a0 size=1072 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a67a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a67a0ULL || rel >= 0x3a6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6bd0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_4290f0
*/
void sub_3a6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6bd0ULL || rel >= 0x3a6c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6c20 size=240 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_3936f0, sub_426860
*/
void sub_3a6c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6c20ULL || rel >= 0x3a6d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a6d10 size=944 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a6d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a6d10ULL || rel >= 0x3a70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a70c0 size=880 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a70c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a70c0ULL || rel >= 0x3a7430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7430 size=864 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a7430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7430ULL || rel >= 0x3a7790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7790 size=736 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3a7790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7790ULL || rel >= 0x3a7a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7a70 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429070
*/
void sub_3a7a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7a70ULL || rel >= 0x3a7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7ac0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429070
*/
void sub_3a7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7ac0ULL || rel >= 0x3a7b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7b10 size=96 callers=0 calls=2
   calls: sub_393430, sub_429290
*/
void sub_3a7b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7b10ULL || rel >= 0x3a7b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7b70 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_4292f0
*/
void sub_3a7b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7b70ULL || rel >= 0x3a7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7bf0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_429440
*/
void sub_3a7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7bf0ULL || rel >= 0x3a7c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7c70 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4295a0
*/
void sub_3a7c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7c70ULL || rel >= 0x3a7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7d00 size=96 callers=0 calls=2
   calls: sub_393430, sub_429720
*/
void sub_3a7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7d00ULL || rel >= 0x3a7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7d60 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_4298d0
*/
void sub_3a7d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7d60ULL || rel >= 0x3a7de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7de0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429a60
*/
void sub_3a7de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7de0ULL || rel >= 0x3a7e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7e30 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_429bd0
*/
void sub_3a7e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7e30ULL || rel >= 0x3a7eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7eb0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_429d90
*/
void sub_3a7eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7eb0ULL || rel >= 0x3a7f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7f30 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_429f30
*/
void sub_3a7f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7f30ULL || rel >= 0x3a7fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a7fa0 size=96 callers=0 calls=2
   calls: sub_393430, sub_42a0c0
*/
void sub_3a7fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a7fa0ULL || rel >= 0x3a8000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8000 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42a280
*/
void sub_3a8000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8000ULL || rel >= 0x3a8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8090 size=96 callers=0 calls=2
   calls: sub_393430, sub_429720
*/
void sub_3a8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8090ULL || rel >= 0x3a80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a80f0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_4298d0
*/
void sub_3a80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a80f0ULL || rel >= 0x3a8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8170 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429a60
*/
void sub_3a8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8170ULL || rel >= 0x3a81c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a81c0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_429bd0
*/
void sub_3a81c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a81c0ULL || rel >= 0x3a8240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8240 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_429d90
*/
void sub_3a8240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8240ULL || rel >= 0x3a82c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a82c0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_429f30
*/
void sub_3a82c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a82c0ULL || rel >= 0x3a8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8330 size=96 callers=0 calls=2
   calls: sub_393430, sub_42a0c0
*/
void sub_3a8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8330ULL || rel >= 0x3a8390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8390 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42a430
*/
void sub_3a8390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8390ULL || rel >= 0x3a8410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8410 size=96 callers=0 calls=2
   calls: sub_393430, sub_42a5b0
*/
void sub_3a8410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8410ULL || rel >= 0x3a8470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8470 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42a790
*/
void sub_3a8470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8470ULL || rel >= 0x3a84f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a84f0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42a950
*/
void sub_3a84f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a84f0ULL || rel >= 0x3a8570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8570 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42aae0
*/
void sub_3a8570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8570ULL || rel >= 0x3a85f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a85f0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42acd0
*/
void sub_3a85f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a85f0ULL || rel >= 0x3a8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8670 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42aea0
*/
void sub_3a8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8670ULL || rel >= 0x3a8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8700 size=96 callers=0 calls=2
   calls: sub_393430, sub_42b050
*/
void sub_3a8700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8700ULL || rel >= 0x3a8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8760 size=96 callers=0 calls=2
   calls: sub_393430, sub_42b300
*/
void sub_3a8760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8760ULL || rel >= 0x3a87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a87c0 size=96 callers=0 calls=2
   calls: sub_393430, sub_42b4b0
*/
void sub_3a87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a87c0ULL || rel >= 0x3a8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8820 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42b640
*/
void sub_3a8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8820ULL || rel >= 0x3a88a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a88a0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42b7d0
*/
void sub_3a88a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a88a0ULL || rel >= 0x3a8920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8920 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42b950
*/
void sub_3a8920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8920ULL || rel >= 0x3a89a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a89a0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42bb10
*/
void sub_3a89a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a89a0ULL || rel >= 0x3a8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8a20 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42bcc0
*/
void sub_3a8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8a20ULL || rel >= 0x3a8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8aa0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42be60
*/
void sub_3a8aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8aa0ULL || rel >= 0x3a8b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8b20 size=96 callers=0 calls=2
   calls: sub_393430, sub_42bff0
*/
void sub_3a8b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8b20ULL || rel >= 0x3a8b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8b80 size=96 callers=0 calls=2
   calls: sub_393430, sub_42c1d0
*/
void sub_3a8b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8b80ULL || rel >= 0x3a8be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8be0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42c390
*/
void sub_3a8be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8be0ULL || rel >= 0x3a8c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8c60 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42c550
*/
void sub_3a8c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8c60ULL || rel >= 0x3a8ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8ce0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42c740
*/
void sub_3a8ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8ce0ULL || rel >= 0x3a8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8d60 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42c920
*/
void sub_3a8d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8d60ULL || rel >= 0x3a8de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8de0 size=96 callers=0 calls=2
   calls: sub_393430, sub_42a5b0
*/
void sub_3a8de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8de0ULL || rel >= 0x3a8e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8e40 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42a790
*/
void sub_3a8e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8e40ULL || rel >= 0x3a8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8ec0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42aae0
*/
void sub_3a8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8ec0ULL || rel >= 0x3a8f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8f40 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42acd0
*/
void sub_3a8f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8f40ULL || rel >= 0x3a8fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a8fc0 size=96 callers=0 calls=2
   calls: sub_393430, sub_42caf0
*/
void sub_3a8fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a8fc0ULL || rel >= 0x3a9020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9020 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42cce0
*/
void sub_3a9020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9020ULL || rel >= 0x3a90a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a90a0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42ce90
*/
void sub_3a90a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a90a0ULL || rel >= 0x3a9120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9120 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42d050
*/
void sub_3a9120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9120ULL || rel >= 0x3a91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a91b0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_42d230
*/
void sub_3a91b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a91b0ULL || rel >= 0x3a9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9200 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42b7d0
*/
void sub_3a9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9200ULL || rel >= 0x3a9280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9280 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42d3b0
*/
void sub_3a9280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9280ULL || rel >= 0x3a9310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9310 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42be60
*/
void sub_3a9310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9310ULL || rel >= 0x3a9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9390 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42d520
*/
void sub_3a9390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9390ULL || rel >= 0x3a9420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9420 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42d6a0
*/
void sub_3a9420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9420ULL || rel >= 0x3a94a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a94a0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42d840
*/
void sub_3a94a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a94a0ULL || rel >= 0x3a9520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9520 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42d9f0
*/
void sub_3a9520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9520ULL || rel >= 0x3a95b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a95b0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42db90
*/
void sub_3a95b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a95b0ULL || rel >= 0x3a9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9630 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42dd50
*/
void sub_3a9630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9630ULL || rel >= 0x3a96c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a96c0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42df00
*/
void sub_3a96c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a96c0ULL || rel >= 0x3a9740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9740 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42e0d0
*/
void sub_3a9740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9740ULL || rel >= 0x3a97d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a97d0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42e5c0
*/
void sub_3a97d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a97d0ULL || rel >= 0x3a9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9860 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42eaa0
*/
void sub_3a9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9860ULL || rel >= 0x3a98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a98f0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42efb0
*/
void sub_3a98f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a98f0ULL || rel >= 0x3a9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9980 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42f4a0
*/
void sub_3a9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9980ULL || rel >= 0x3a9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9a10 size=400 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3a9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9a10ULL || rel >= 0x3a9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9ba0 size=400 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3a9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9ba0ULL || rel >= 0x3a9d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9d30 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42f9c0
*/
void sub_3a9d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9d30ULL || rel >= 0x3a9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9dc0 size=448 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3a9dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9dc0ULL || rel >= 0x3a9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003a9f80 size=464 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3a9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3a9f80ULL || rel >= 0x3aa150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aa150 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42fb20
*/
void sub_3aa150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aa150ULL || rel >= 0x3aa1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aa1e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_42fcb0
*/
void sub_3aa1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aa1e0ULL || rel >= 0x3aa240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aa240 size=96 callers=0 calls=2
   calls: sub_393430, sub_42fe60
*/
void sub_3aa240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aa240ULL || rel >= 0x3aa2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aa2a0 size=560 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3aa2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aa2a0ULL || rel >= 0x3aa4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aa4d0 size=512 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3aa4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aa4d0ULL || rel >= 0x3aa6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aa6d0 size=544 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3aa6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aa6d0ULL || rel >= 0x3aa8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aa8f0 size=480 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3aa8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aa8f0ULL || rel >= 0x3aaad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aaad0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430010
*/
void sub_3aaad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aaad0ULL || rel >= 0x3aab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aab50 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430200
*/
void sub_3aab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aab50ULL || rel >= 0x3aabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aabe0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4303d0
*/
void sub_3aabe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aabe0ULL || rel >= 0x3aac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aac70 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430580
*/
void sub_3aac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aac70ULL || rel >= 0x3aacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aacf0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4306f0
*/
void sub_3aacf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aacf0ULL || rel >= 0x3aad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aad70 size=608 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3aad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aad70ULL || rel >= 0x3aafd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aafd0 size=528 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3aafd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aafd0ULL || rel >= 0x3ab1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab1e0 size=496 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3ab1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab1e0ULL || rel >= 0x3ab3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab3d0 size=96 callers=0 calls=2
   calls: sub_393430, sub_430860
*/
void sub_3ab3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab3d0ULL || rel >= 0x3ab430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab430 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430a80
*/
void sub_3ab430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab430ULL || rel >= 0x3ab4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab4c0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430c60
*/
void sub_3ab4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab4c0ULL || rel >= 0x3ab550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab550 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430e00
*/
void sub_3ab550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab550ULL || rel >= 0x3ab5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab5e0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430fa0
*/
void sub_3ab5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab5e0ULL || rel >= 0x3ab670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab670 size=96 callers=0 calls=2
   calls: sub_393430, sub_431190
*/
void sub_3ab670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab670ULL || rel >= 0x3ab6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab6d0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_431370
*/
void sub_3ab6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab6d0ULL || rel >= 0x3ab760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab760 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_431570
*/
void sub_3ab760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab760ULL || rel >= 0x3ab7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab7e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_431770
*/
void sub_3ab7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab7e0ULL || rel >= 0x3ab840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab840 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_431980
*/
void sub_3ab840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab840ULL || rel >= 0x3ab8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab8d0 size=96 callers=0 calls=2
   calls: sub_393430, sub_431ba0
*/
void sub_3ab8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab8d0ULL || rel >= 0x3ab930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab930 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_431de0
*/
void sub_3ab930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab930ULL || rel >= 0x3ab9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ab9c0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_432010
*/
void sub_3ab9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ab9c0ULL || rel >= 0x3aba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aba40 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_432270
*/
void sub_3aba40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aba40ULL || rel >= 0x3abad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003abad0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4324c0
*/
void sub_3abad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abad0ULL || rel >= 0x3abb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003abb30 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4326b0
*/
void sub_3abb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abb30ULL || rel >= 0x3abbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003abbb0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4328c0
*/
void sub_3abbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abbb0ULL || rel >= 0x3abc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003abc10 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_432b10
*/
void sub_3abc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abc10ULL || rel >= 0x3abca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003abca0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_432d40
*/
void sub_3abca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abca0ULL || rel >= 0x3abd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003abd30 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_432ed0
*/
void sub_3abd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abd30ULL || rel >= 0x3abdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003abdc0 size=96 callers=0 calls=2
   calls: sub_393430, sub_433090
*/
void sub_3abdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abdc0ULL || rel >= 0x3abe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003abe20 size=96 callers=0 calls=2
   calls: sub_393430, sub_433250
*/
void sub_3abe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abe20ULL || rel >= 0x3abe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003abe80 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_433430
*/
void sub_3abe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abe80ULL || rel >= 0x3abf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003abf00 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_433640
*/
void sub_3abf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abf00ULL || rel >= 0x3abf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003abf90 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_433830
*/
void sub_3abf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3abf90ULL || rel >= 0x3ac020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac020 size=96 callers=0 calls=2
   calls: sub_393430, sub_433a00
*/
void sub_3ac020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac020ULL || rel >= 0x3ac080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac080 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_433c40
*/
void sub_3ac080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac080ULL || rel >= 0x3ac110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac110 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_433e40
*/
void sub_3ac110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac110ULL || rel >= 0x3ac1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac1a0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_434060
*/
void sub_3ac1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac1a0ULL || rel >= 0x3ac230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac230 size=96 callers=0 calls=2
   calls: sub_393430, sub_434290
*/
void sub_3ac230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac230ULL || rel >= 0x3ac290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac290 size=96 callers=0 calls=2
   calls: sub_393430, sub_4344d0
*/
void sub_3ac290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac290ULL || rel >= 0x3ac2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac2f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_434710
*/
void sub_3ac2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac2f0ULL || rel >= 0x3ac350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac350 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_434980
*/
void sub_3ac350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac350ULL || rel >= 0x3ac3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac3e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_434be0
*/
void sub_3ac3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac3e0ULL || rel >= 0x3ac460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac460 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_434e70
*/
void sub_3ac460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac460ULL || rel >= 0x3ac4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac4f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4350f0
*/
void sub_3ac4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac4f0ULL || rel >= 0x3ac550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac550 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_435370
*/
void sub_3ac550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac550ULL || rel >= 0x3ac5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac5e0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_435510
*/
void sub_3ac5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac5e0ULL || rel >= 0x3ac670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac670 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_435690
*/
void sub_3ac670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac670ULL || rel >= 0x3ac6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac6f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4357f0
*/
void sub_3ac6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac6f0ULL || rel >= 0x3ac750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac750 size=96 callers=0 calls=2
   calls: sub_393430, sub_4359e0
*/
void sub_3ac750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac750ULL || rel >= 0x3ac7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac7b0 size=96 callers=0 calls=2
   calls: sub_393430, sub_435b70
*/
void sub_3ac7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac7b0ULL || rel >= 0x3ac810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac810 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_435d40
*/
void sub_3ac810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac810ULL || rel >= 0x3ac8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac8a0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_435ef0
*/
void sub_3ac8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac8a0ULL || rel >= 0x3ac910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac910 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_436080
*/
void sub_3ac910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac910ULL || rel >= 0x3ac9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ac9a0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_436250
*/
void sub_3ac9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ac9a0ULL || rel >= 0x3aca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aca30 size=96 callers=0 calls=2
   calls: sub_393430, sub_436400
*/
void sub_3aca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aca30ULL || rel >= 0x3aca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aca90 size=96 callers=0 calls=2
   calls: sub_393430, sub_436620
*/
void sub_3aca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aca90ULL || rel >= 0x3acaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003acaf0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_436820
*/
void sub_3acaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3acaf0ULL || rel >= 0x3acb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003acb80 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_436a00
*/
void sub_3acb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3acb80ULL || rel >= 0x3acc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003acc10 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_436c10
*/
void sub_3acc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3acc10ULL || rel >= 0x3acc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003acc90 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_436e00
*/
void sub_3acc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3acc90ULL || rel >= 0x3acd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003acd20 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_437020
*/
void sub_3acd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3acd20ULL || rel >= 0x3acda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003acda0 size=96 callers=0 calls=2
   calls: sub_393430, sub_437220
*/
void sub_3acda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3acda0ULL || rel >= 0x3ace00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ace00 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_437440
*/
void sub_3ace00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ace00ULL || rel >= 0x3ace90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ace90 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_437680
*/
void sub_3ace90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ace90ULL || rel >= 0x3acee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003acee0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4378a0
*/
void sub_3acee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3acee0ULL || rel >= 0x3acf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003acf70 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_437ae0
*/
void sub_3acf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3acf70ULL || rel >= 0x3acfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003acfe0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_437d10
*/
void sub_3acfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3acfe0ULL || rel >= 0x3ad070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad070 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_437f60
*/
void sub_3ad070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad070ULL || rel >= 0x3ad100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad100 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_4381d0
*/
void sub_3ad100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad100ULL || rel >= 0x3ad180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad180 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_4383b0
*/
void sub_3ad180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad180ULL || rel >= 0x3ad200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad200 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4385a0
*/
void sub_3ad200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad200ULL || rel >= 0x3ad290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad290 size=96 callers=0 calls=2
   calls: sub_393430, sub_429290
*/
void sub_3ad290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad290ULL || rel >= 0x3ad2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad2f0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_4292f0
*/
void sub_3ad2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad2f0ULL || rel >= 0x3ad370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad370 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_429440
*/
void sub_3ad370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad370ULL || rel >= 0x3ad3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad3f0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4295a0
*/
void sub_3ad3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad3f0ULL || rel >= 0x3ad480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad480 size=96 callers=0 calls=2
   calls: sub_393430, sub_429720
*/
void sub_3ad480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad480ULL || rel >= 0x3ad4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad4e0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_4298d0
*/
void sub_3ad4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad4e0ULL || rel >= 0x3ad560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad560 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429a60
*/
void sub_3ad560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad560ULL || rel >= 0x3ad5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad5b0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_429bd0
*/
void sub_3ad5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad5b0ULL || rel >= 0x3ad630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad630 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_429d90
*/
void sub_3ad630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad630ULL || rel >= 0x3ad6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad6b0 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_429f30
*/
void sub_3ad6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad6b0ULL || rel >= 0x3ad720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad720 size=96 callers=0 calls=2
   calls: sub_393430, sub_42a0c0
*/
void sub_3ad720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad720ULL || rel >= 0x3ad780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad780 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42a280
*/
void sub_3ad780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad780ULL || rel >= 0x3ad810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad810 size=96 callers=0 calls=2
   calls: sub_393430, sub_429720
*/
void sub_3ad810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad810ULL || rel >= 0x3ad870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad870 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_4298d0
*/
void sub_3ad870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad870ULL || rel >= 0x3ad8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad8f0 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_429a60
*/
void sub_3ad8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad8f0ULL || rel >= 0x3ad940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad940 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_429bd0
*/
void sub_3ad940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad940ULL || rel >= 0x3ad9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ad9c0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_429d90
*/
void sub_3ad9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ad9c0ULL || rel >= 0x3ada40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ada40 size=112 callers=0 calls=2
   calls: sub_3936f0, sub_429f30
*/
void sub_3ada40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ada40ULL || rel >= 0x3adab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003adab0 size=96 callers=0 calls=2
   calls: sub_393430, sub_42a0c0
*/
void sub_3adab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3adab0ULL || rel >= 0x3adb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003adb10 size=512 callers=0 calls=7
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3adb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3adb10ULL || rel >= 0x3add10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003add10 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42a430
*/
void sub_3add10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3add10ULL || rel >= 0x3add90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003add90 size=96 callers=0 calls=2
   calls: sub_393430, sub_42a5b0
*/
void sub_3add90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3add90ULL || rel >= 0x3addf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003addf0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42a790
*/
void sub_3addf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3addf0ULL || rel >= 0x3ade70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ade70 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42a950
*/
void sub_3ade70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ade70ULL || rel >= 0x3adef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003adef0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42aae0
*/
void sub_3adef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3adef0ULL || rel >= 0x3adf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003adf70 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42acd0
*/
void sub_3adf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3adf70ULL || rel >= 0x3adff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003adff0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42aea0
*/
void sub_3adff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3adff0ULL || rel >= 0x3ae080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae080 size=96 callers=0 calls=2
   calls: sub_393430, sub_42b050
*/
void sub_3ae080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae080ULL || rel >= 0x3ae0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae0e0 size=96 callers=0 calls=2
   calls: sub_393430, sub_42b300
*/
void sub_3ae0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae0e0ULL || rel >= 0x3ae140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae140 size=96 callers=0 calls=2
   calls: sub_393430, sub_42b4b0
*/
void sub_3ae140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae140ULL || rel >= 0x3ae1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae1a0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42b640
*/
void sub_3ae1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae1a0ULL || rel >= 0x3ae220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae220 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42b7d0
*/
void sub_3ae220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae220ULL || rel >= 0x3ae2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae2a0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42b950
*/
void sub_3ae2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae2a0ULL || rel >= 0x3ae320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae320 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42bb10
*/
void sub_3ae320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae320ULL || rel >= 0x3ae3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae3a0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42bcc0
*/
void sub_3ae3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae3a0ULL || rel >= 0x3ae420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae420 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42be60
*/
void sub_3ae420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae420ULL || rel >= 0x3ae4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae4a0 size=96 callers=0 calls=2
   calls: sub_393430, sub_42bff0
*/
void sub_3ae4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae4a0ULL || rel >= 0x3ae500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae500 size=96 callers=0 calls=2
   calls: sub_393430, sub_42c1d0
*/
void sub_3ae500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae500ULL || rel >= 0x3ae560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae560 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42c390
*/
void sub_3ae560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae560ULL || rel >= 0x3ae5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae5e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42c550
*/
void sub_3ae5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae5e0ULL || rel >= 0x3ae660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae660 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42c740
*/
void sub_3ae660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae660ULL || rel >= 0x3ae6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae6e0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42c920
*/
void sub_3ae6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae6e0ULL || rel >= 0x3ae760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae760 size=96 callers=0 calls=2
   calls: sub_393430, sub_42a5b0
*/
void sub_3ae760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae760ULL || rel >= 0x3ae7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae7c0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42a790
*/
void sub_3ae7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae7c0ULL || rel >= 0x3ae840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae840 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42aae0
*/
void sub_3ae840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae840ULL || rel >= 0x3ae8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae8c0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42acd0
*/
void sub_3ae8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae8c0ULL || rel >= 0x3ae940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae940 size=96 callers=0 calls=2
   calls: sub_393430, sub_42caf0
*/
void sub_3ae940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae940ULL || rel >= 0x3ae9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003ae9a0 size=528 callers=0 calls=6
   calls: atomicCompSwap, sub_2f7fb0, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3ae9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3ae9a0ULL || rel >= 0x3aebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aebb0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42cce0
*/
void sub_3aebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aebb0ULL || rel >= 0x3aec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aec30 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42ce90
*/
void sub_3aec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aec30ULL || rel >= 0x3aecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aecb0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42d050
*/
void sub_3aecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aecb0ULL || rel >= 0x3aed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aed40 size=80 callers=0 calls=2
   calls: sub_3936f0, sub_42d230
*/
void sub_3aed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aed40ULL || rel >= 0x3aed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aed90 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42b7d0
*/
void sub_3aed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aed90ULL || rel >= 0x3aee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aee10 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42d3b0
*/
void sub_3aee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aee10ULL || rel >= 0x3aeea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aeea0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42be60
*/
void sub_3aeea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aeea0ULL || rel >= 0x3aef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aef20 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42d520
*/
void sub_3aef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aef20ULL || rel >= 0x3aefb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aefb0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42d6a0
*/
void sub_3aefb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aefb0ULL || rel >= 0x3af030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af030 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42d840
*/
void sub_3af030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af030ULL || rel >= 0x3af0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af0b0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42d9f0
*/
void sub_3af0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af0b0ULL || rel >= 0x3af140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af140 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42db90
*/
void sub_3af140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af140ULL || rel >= 0x3af1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af1c0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42dd50
*/
void sub_3af1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af1c0ULL || rel >= 0x3af250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af250 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_42df00
*/
void sub_3af250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af250ULL || rel >= 0x3af2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af2d0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42e0d0
*/
void sub_3af2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af2d0ULL || rel >= 0x3af360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af360 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42e5c0
*/
void sub_3af360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af360ULL || rel >= 0x3af3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af3f0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42eaa0
*/
void sub_3af3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af3f0ULL || rel >= 0x3af480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af480 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42efb0
*/
void sub_3af480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af480ULL || rel >= 0x3af510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af510 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42f4a0
*/
void sub_3af510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af510ULL || rel >= 0x3af5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af5a0 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_4381d0
*/
void sub_3af5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af5a0ULL || rel >= 0x3af620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af620 size=128 callers=0 calls=2
   calls: sub_3936f0, sub_4383b0
*/
void sub_3af620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af620ULL || rel >= 0x3af6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af6a0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4385a0
*/
void sub_3af6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af6a0ULL || rel >= 0x3af730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af730 size=400 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3af730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af730ULL || rel >= 0x3af8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003af8c0 size=400 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3af8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3af8c0ULL || rel >= 0x3afa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003afa50 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42f9c0
*/
void sub_3afa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3afa50ULL || rel >= 0x3afae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003afae0 size=448 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3afae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3afae0ULL || rel >= 0x3afca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003afca0 size=464 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3afca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3afca0ULL || rel >= 0x3afe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003afe70 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_42fb20
*/
void sub_3afe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3afe70ULL || rel >= 0x3aff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aff00 size=96 callers=0 calls=2
   calls: sub_393430, sub_42fcb0
*/
void sub_3aff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aff00ULL || rel >= 0x3aff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003aff60 size=96 callers=0 calls=2
   calls: sub_393430, sub_42fe60
*/
void sub_3aff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3aff60ULL || rel >= 0x3affc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003affc0 size=560 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3affc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3affc0ULL || rel >= 0x3b01f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b01f0 size=512 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3b01f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b01f0ULL || rel >= 0x3b03f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b03f0 size=544 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3b03f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b03f0ULL || rel >= 0x3b0610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b0610 size=480 callers=0 calls=6
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_3936f0, sub_426860
*/
void sub_3b0610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b0610ULL || rel >= 0x3b07f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b07f0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430010
*/
void sub_3b07f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b07f0ULL || rel >= 0x3b0870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b0870 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430200
*/
void sub_3b0870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b0870ULL || rel >= 0x3b0900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b0900 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4303d0
*/
void sub_3b0900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b0900ULL || rel >= 0x3b0990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b0990 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430580
*/
void sub_3b0990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b0990ULL || rel >= 0x3b0a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b0a10 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4306f0
*/
void sub_3b0a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b0a10ULL || rel >= 0x3b0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b0a90 size=608 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3b0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b0a90ULL || rel >= 0x3b0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b0cf0 size=528 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3b0cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b0cf0ULL || rel >= 0x3b0f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b0f00 size=496 callers=0 calls=5
   calls: atomicCompSwap, sub_2fab10, sub_2fade0, sub_393430, sub_426860
*/
void sub_3b0f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b0f00ULL || rel >= 0x3b10f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b10f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_430860
*/
void sub_3b10f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b10f0ULL || rel >= 0x3b1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1150 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430a80
*/
void sub_3b1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1150ULL || rel >= 0x3b11e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b11e0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430c60
*/
void sub_3b11e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b11e0ULL || rel >= 0x3b1270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1270 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430e00
*/
void sub_3b1270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1270ULL || rel >= 0x3b1300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1300 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_430fa0
*/
void sub_3b1300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1300ULL || rel >= 0x3b1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1390 size=96 callers=0 calls=2
   calls: sub_393430, sub_431190
*/
void sub_3b1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1390ULL || rel >= 0x3b13f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b13f0 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_431370
*/
void sub_3b13f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b13f0ULL || rel >= 0x3b1480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1480 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_431570
*/
void sub_3b1480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1480ULL || rel >= 0x3b1500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1500 size=96 callers=0 calls=2
   calls: sub_393430, sub_431770
*/
void sub_3b1500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1500ULL || rel >= 0x3b1560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1560 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_431980
*/
void sub_3b1560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1560ULL || rel >= 0x3b15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b15f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_431ba0
*/
void sub_3b15f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b15f0ULL || rel >= 0x3b1650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1650 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_431de0
*/
void sub_3b1650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1650ULL || rel >= 0x3b16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b16e0 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_432010
*/
void sub_3b16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b16e0ULL || rel >= 0x3b1760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1760 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_432270
*/
void sub_3b1760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1760ULL || rel >= 0x3b17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b17f0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4324c0
*/
void sub_3b17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b17f0ULL || rel >= 0x3b1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1850 size=128 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_4326b0
*/
void sub_3b1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1850ULL || rel >= 0x3b18d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b18d0 size=96 callers=0 calls=2
   calls: sub_393430, sub_4328c0
*/
void sub_3b18d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b18d0ULL || rel >= 0x3b1930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003b1930 size=144 callers=0 calls=3
   calls: sub_393430, sub_3936f0, sub_432b10
*/
void sub_3b1930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3b1930ULL || rel >= 0x3b19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

