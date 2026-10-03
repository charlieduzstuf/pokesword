/* main functions 00554b80..005655a0 (33 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00554b80 size=16 callers=1 calls=0
*/
void sub_554b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554b80ULL || rel >= 0x554b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554b90 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_554b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554b90ULL || rel >= 0x554bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554bd0 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_554bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554bd0ULL || rel >= 0x554c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554c10 size=16 callers=0 calls=0
*/
void sub_554c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554c10ULL || rel >= 0x554c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554c20 size=16 callers=0 calls=0
*/
void sub_554c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554c20ULL || rel >= 0x554c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554c30 size=16 callers=0 calls=0
*/
void sub_554c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554c30ULL || rel >= 0x554c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554c40 size=16 callers=0 calls=0
*/
void sub_554c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554c40ULL || rel >= 0x554c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554c50 size=16 callers=0 calls=0
*/
void sub_554c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554c50ULL || rel >= 0x554c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554c60 size=16 callers=0 calls=0
*/
void sub_554c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554c60ULL || rel >= 0x554c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554c70 size=16 callers=0 calls=0
*/
void sub_554c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554c70ULL || rel >= 0x554c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554c80 size=16 callers=0 calls=0
*/
void sub_554c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554c80ULL || rel >= 0x554c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554c90 size=16 callers=0 calls=0
*/
void sub_554c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554c90ULL || rel >= 0x554ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554ca0 size=16 callers=0 calls=0
*/
void sub_554ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554ca0ULL || rel >= 0x554cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554cb0 size=16 callers=0 calls=0
*/
void sub_554cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554cb0ULL || rel >= 0x554cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554cc0 size=16 callers=0 calls=0
*/
void sub_554cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554cc0ULL || rel >= 0x554cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554cd0 size=16 callers=0 calls=0
*/
void sub_554cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554cd0ULL || rel >= 0x554ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554ce0 size=16 callers=0 calls=0
*/
void sub_554ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554ce0ULL || rel >= 0x554cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554cf0 size=16 callers=0 calls=0
*/
void sub_554cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554cf0ULL || rel >= 0x554d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554d00 size=496 callers=0 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl_5
*/
void sub_554d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554d00ULL || rel >= 0x554ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554ef0 size=128 callers=0 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl_6
*/
void sub_554ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554ef0ULL || rel >= 0x554f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554f70 size=16 callers=0 calls=0
*/
void sub_554f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554f70ULL || rel >= 0x554f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554f80 size=16 callers=0 calls=0
*/
void sub_554f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554f80ULL || rel >= 0x554f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554f90 size=32 callers=0 calls=0
*/
void sub_554f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554f90ULL || rel >= 0x554fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00554fb0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_Query_Impl.h
*/
void SiGfx_NX_Query_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x554fb0ULL || rel >= 0x555030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555030 size=16 callers=0 calls=0
*/
void sub_555030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555030ULL || rel >= 0x555040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555040 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_555040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555040ULL || rel >= 0x5550c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005550c0 size=64 callers=4 calls=1
   calls: sub_4bf660
*/
void sub_5550c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5550c0ULL || rel >= 0x555100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555100 size=32 callers=0 calls=0
*/
void sub_555100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555100ULL || rel >= 0x555120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555120 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_555120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555120ULL || rel >= 0x555160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555160 size=16 callers=4 calls=0
*/
void sub_555160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555160ULL || rel >= 0x555170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555170 size=16 callers=0 calls=0
*/
void sub_555170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555170ULL || rel >= 0x555180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555180 size=16 callers=0 calls=0
*/
void sub_555180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555180ULL || rel >= 0x555190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555190 size=16 callers=0 calls=0
*/
void sub_555190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555190ULL || rel >= 0x5551a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005551a0 size=32 callers=0 calls=0
*/
void sub_5551a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5551a0ULL || rel >= 0x5551c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005551c0 size=32 callers=0 calls=0
*/
void sub_5551c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5551c0ULL || rel >= 0x5551e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005551e0 size=16 callers=0 calls=0
*/
void sub_5551e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5551e0ULL || rel >= 0x5551f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005551f0 size=16 callers=0 calls=0
*/
void sub_5551f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5551f0ULL || rel >= 0x555200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555200 size=16 callers=0 calls=0
*/
void sub_555200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555200ULL || rel >= 0x555210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555210 size=32 callers=0 calls=0
*/
void sub_555210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555210ULL || rel >= 0x555230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555230 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_RenderPassState_Impl.h
*/
void SiGfx_NX_RenderPassState_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555230ULL || rel >= 0x5552b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005552b0 size=16 callers=0 calls=0
*/
void sub_5552b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5552b0ULL || rel >= 0x5552c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005552c0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5552c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5552c0ULL || rel >= 0x555340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555340 size=64 callers=1 calls=1
   calls: sub_534000
*/
void sub_555340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555340ULL || rel >= 0x555380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555380 size=64 callers=0 calls=1
   calls: sub_534430
*/
void sub_555380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555380ULL || rel >= 0x5553c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005553c0 size=64 callers=0 calls=2
   calls: sub_5341b0, sub_534430
*/
void sub_5553c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5553c0ULL || rel >= 0x555400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555400 size=64 callers=0 calls=2
   calls: SiCore_Array_179, sub_534420
*/
void sub_555400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555400ULL || rel >= 0x555440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555440 size=16 callers=0 calls=0
*/
void sub_555440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555440ULL || rel >= 0x555450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555450 size=512 callers=1 calls=7
   calls: sub_4c5a90, sub_4fef10, sub_4ff090, sub_5556d0, sub_555b40, sub_596640, sub_596680
   ref: RenderTarget_%d
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_RenderTargetPool.cpp
*/
void SiGfx_NX_RenderTargetPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555450ULL || rel >= 0x555650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555650 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_555650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555650ULL || rel >= 0x5556d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005556d0 size=496 callers=2 calls=3
   calls: sub_4bc640, sub_4bc690, sub_538d70
*/
void sub_5556d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5556d0ULL || rel >= 0x5558c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005558c0 size=160 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5558c0ULL || rel >= 0x555960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555960 size=160 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_89(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555960ULL || rel >= 0x555a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555a00 size=160 callers=0 calls=2
   calls: sub_4f9640, sub_538dc0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555a00ULL || rel >= 0x555aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555aa0 size=160 callers=0 calls=2
   calls: sub_4f9640, sub_538dc0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_91(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555aa0ULL || rel >= 0x555b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555b40 size=16 callers=2 calls=0
*/
void sub_555b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555b40ULL || rel >= 0x555b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555b50 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_555b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555b50ULL || rel >= 0x555b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555b90 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_555b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555b90ULL || rel >= 0x555bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555bd0 size=16 callers=0 calls=0
*/
void sub_555bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555bd0ULL || rel >= 0x555be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555be0 size=16 callers=0 calls=0
*/
void sub_555be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555be0ULL || rel >= 0x555bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555bf0 size=16 callers=0 calls=0
*/
void sub_555bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555bf0ULL || rel >= 0x555c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555c00 size=16 callers=0 calls=0
*/
void sub_555c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555c00ULL || rel >= 0x555c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555c10 size=16 callers=0 calls=0
*/
void sub_555c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555c10ULL || rel >= 0x555c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555c20 size=16 callers=0 calls=0
*/
void sub_555c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555c20ULL || rel >= 0x555c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555c30 size=16 callers=0 calls=0
*/
void sub_555c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555c30ULL || rel >= 0x555c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555c40 size=16 callers=0 calls=0
*/
void sub_555c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555c40ULL || rel >= 0x555c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555c50 size=16 callers=0 calls=0
*/
void sub_555c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555c50ULL || rel >= 0x555c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555c60 size=16 callers=0 calls=0
*/
void sub_555c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555c60ULL || rel >= 0x555c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555c70 size=16 callers=0 calls=0
*/
void sub_555c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555c70ULL || rel >= 0x555c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555c80 size=16 callers=0 calls=0
*/
void sub_555c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555c80ULL || rel >= 0x555c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555c90 size=16 callers=0 calls=0
*/
void sub_555c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555c90ULL || rel >= 0x555ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555ca0 size=16 callers=0 calls=0
*/
void sub_555ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555ca0ULL || rel >= 0x555cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555cb0 size=16 callers=0 calls=0
*/
void sub_555cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555cb0ULL || rel >= 0x555cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555cc0 size=64 callers=0 calls=0
*/
void sub_555cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555cc0ULL || rel >= 0x555d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555d00 size=144 callers=0 calls=0
*/
void sub_555d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555d00ULL || rel >= 0x555d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555d90 size=144 callers=0 calls=0
*/
void sub_555d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555d90ULL || rel >= 0x555e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555e20 size=176 callers=0 calls=0
*/
void sub_555e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555e20ULL || rel >= 0x555ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555ed0 size=112 callers=0 calls=0
*/
void sub_555ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555ed0ULL || rel >= 0x555f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555f40 size=112 callers=0 calls=0
*/
void sub_555f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555f40ULL || rel >= 0x555fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00555fb0 size=160 callers=0 calls=0
*/
void sub_555fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x555fb0ULL || rel >= 0x556050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556050 size=112 callers=0 calls=3
   calls: sub_5560c0, sub_5564a0, sub_556730
*/
void sub_556050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556050ULL || rel >= 0x5560c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005560c0 size=992 callers=1 calls=1
   calls: sub_4ed190
*/
void sub_5560c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5560c0ULL || rel >= 0x5564a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005564a0 size=656 callers=1 calls=0
*/
void sub_5564a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5564a0ULL || rel >= 0x556730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556730 size=272 callers=1 calls=0
*/
void sub_556730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556730ULL || rel >= 0x556840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556840 size=240 callers=0 calls=0
*/
void sub_556840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556840ULL || rel >= 0x556930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556930 size=16 callers=0 calls=0
*/
void sub_556930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556930ULL || rel >= 0x556940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556940 size=16 callers=0 calls=0
*/
void sub_556940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556940ULL || rel >= 0x556950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556950 size=16 callers=0 calls=0
*/
void sub_556950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556950ULL || rel >= 0x556960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556960 size=16 callers=0 calls=0
*/
void sub_556960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556960ULL || rel >= 0x556970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556970 size=16 callers=0 calls=0
*/
void sub_556970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556970ULL || rel >= 0x556980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556980 size=16 callers=0 calls=0
*/
void sub_556980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556980ULL || rel >= 0x556990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556990 size=16 callers=0 calls=0
*/
void sub_556990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556990ULL || rel >= 0x5569a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005569a0 size=16 callers=0 calls=0
*/
void sub_5569a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5569a0ULL || rel >= 0x5569b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005569b0 size=16 callers=0 calls=0
*/
void sub_5569b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5569b0ULL || rel >= 0x5569c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005569c0 size=160 callers=0 calls=0
*/
void sub_5569c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5569c0ULL || rel >= 0x556a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556a60 size=160 callers=0 calls=0
*/
void sub_556a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556a60ULL || rel >= 0x556b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556b00 size=32 callers=0 calls=0
*/
void sub_556b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556b00ULL || rel >= 0x556b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556b20 size=256 callers=0 calls=2
   calls: sub_4cbec0, sub_4ce9d0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_RenderTarget_Impl.h
*/
void SiGfx_NX_RenderTarget_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556b20ULL || rel >= 0x556c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556c20 size=16 callers=0 calls=0
*/
void sub_556c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556c20ULL || rel >= 0x556c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556c30 size=16 callers=0 calls=0
*/
void sub_556c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556c30ULL || rel >= 0x556c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556c40 size=16 callers=0 calls=0
*/
void sub_556c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556c40ULL || rel >= 0x556c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556c50 size=16 callers=0 calls=0
*/
void sub_556c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556c50ULL || rel >= 0x556c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556c60 size=16 callers=0 calls=0
*/
void sub_556c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556c60ULL || rel >= 0x556c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556c70 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_556c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556c70ULL || rel >= 0x556cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556cf0 size=192 callers=1 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_556cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556cf0ULL || rel >= 0x556db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556db0 size=272 callers=1 calls=1
   calls: SiGfx_NX_RootSignature_Impl_5
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_255(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556db0ULL || rel >= 0x556ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556ec0 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_256(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556ec0ULL || rel >= 0x556f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556f90 size=32 callers=0 calls=0
*/
void sub_556f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556f90ULL || rel >= 0x556fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556fb0 size=48 callers=0 calls=1
   calls: SiCore_Array_255
*/
void sub_556fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556fb0ULL || rel >= 0x556fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556fe0 size=16 callers=1 calls=0
*/
void sub_556fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556fe0ULL || rel >= 0x556ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00556ff0 size=16 callers=0 calls=0
*/
void sub_556ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x556ff0ULL || rel >= 0x557000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557000 size=16 callers=0 calls=0
*/
void sub_557000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557000ULL || rel >= 0x557010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557010 size=16 callers=0 calls=0
*/
void sub_557010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557010ULL || rel >= 0x557020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557020 size=256 callers=0 calls=1
   calls: SiGfx_NX_RootSignature_Impl_5
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_257(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557020ULL || rel >= 0x557120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557120 size=784 callers=0 calls=0
*/
void sub_557120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557120ULL || rel >= 0x557430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557430 size=176 callers=0 calls=1
   calls: SiCore_Array_262
*/
void sub_557430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557430ULL || rel >= 0x5574e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005574e0 size=16 callers=0 calls=0
*/
void sub_5574e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5574e0ULL || rel >= 0x5574f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005574f0 size=368 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_RootSignature_Impl.h
*/
void SiGfx_NX_RootSignature_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5574f0ULL || rel >= 0x557660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557660 size=384 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_RootSignature_Impl.h
*/
void SiGfx_NX_RootSignature_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557660ULL || rel >= 0x5577e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005577e0 size=544 callers=0 calls=2
   calls: SiCore_Array_260, sub_4bc640
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_RootSignature_Impl.cpp
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_RootSignature_Impl.h
*/
void SiGfx_NX_RootSignature_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5577e0ULL || rel >= 0x557a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557a00 size=160 callers=0 calls=0
*/
void sub_557a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557a00ULL || rel >= 0x557aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557aa0 size=176 callers=0 calls=1
   calls: SiCore_Array_263
*/
void sub_557aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557aa0ULL || rel >= 0x557b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557b50 size=16 callers=0 calls=0
*/
void sub_557b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557b50ULL || rel >= 0x557b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557b60 size=128 callers=0 calls=0
*/
void sub_557b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557b60ULL || rel >= 0x557be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557be0 size=112 callers=0 calls=0
*/
void sub_557be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557be0ULL || rel >= 0x557c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557c50 size=16 callers=0 calls=0
*/
void sub_557c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557c50ULL || rel >= 0x557c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557c60 size=32 callers=0 calls=0
*/
void sub_557c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557c60ULL || rel >= 0x557c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557c80 size=32 callers=0 calls=0
*/
void sub_557c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557c80ULL || rel >= 0x557ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557ca0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_RootSignature_Impl.h
*/
void SiGfx_NX_RootSignature_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557ca0ULL || rel >= 0x557d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557d20 size=16 callers=0 calls=0
*/
void sub_557d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557d20ULL || rel >= 0x557d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557d30 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_258(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557d30ULL || rel >= 0x557dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557dd0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_259(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557dd0ULL || rel >= 0x557e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00557e60 size=640 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x557e60ULL || rel >= 0x5580e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005580e0 size=64 callers=0 calls=1
   calls: SiGfx_NX_RootSignature_Impl_5
*/
void sub_5580e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5580e0ULL || rel >= 0x558120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558120 size=192 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_261(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558120ULL || rel >= 0x5581e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005581e0 size=384 callers=6 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_RootSignature_Impl.h
*/
void SiGfx_NX_RootSignature_Impl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5581e0ULL || rel >= 0x558360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558360 size=464 callers=1 calls=1
   calls: SiGfx_NX_RootSignature_Impl_5
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_262(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558360ULL || rel >= 0x558530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558530 size=800 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_263(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558530ULL || rel >= 0x558850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558850 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_558850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558850ULL || rel >= 0x5588d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005588d0 size=64 callers=1 calls=1
   calls: sub_534000
*/
void sub_5588d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5588d0ULL || rel >= 0x558910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558910 size=64 callers=0 calls=1
   calls: sub_534430
*/
void sub_558910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558910ULL || rel >= 0x558950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558950 size=64 callers=0 calls=2
   calls: sub_5341b0, sub_534430
*/
void sub_558950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558950ULL || rel >= 0x558990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558990 size=64 callers=0 calls=2
   calls: SiCore_Array_179, sub_534420
*/
void sub_558990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558990ULL || rel >= 0x5589d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005589d0 size=16 callers=0 calls=0
*/
void sub_5589d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5589d0ULL || rel >= 0x5589e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005589e0 size=512 callers=1 calls=7
   calls: sub_4c5a90, sub_4fef10, sub_4ff090, sub_558c60, sub_558e90, sub_596640, sub_596680
   ref: Sampler_%d
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_SamplerPool.cpp
*/
void SiGfx_NX_SamplerPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5589e0ULL || rel >= 0x558be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558be0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_558be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558be0ULL || rel >= 0x558c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558c60 size=224 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_558c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558c60ULL || rel >= 0x558d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558d40 size=224 callers=2 calls=2
   calls: sub_4f9640, sub_4fb2f0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_92(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558d40ULL || rel >= 0x558e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558e20 size=16 callers=0 calls=0
*/
void sub_558e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558e20ULL || rel >= 0x558e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558e30 size=48 callers=0 calls=1
   calls: SiCore_String_92
*/
void sub_558e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558e30ULL || rel >= 0x558e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558e60 size=48 callers=0 calls=1
   calls: SiCore_String_92
*/
void sub_558e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558e60ULL || rel >= 0x558e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00558e90 size=544 callers=1 calls=4
   calls: sub_4fb260, sub_562f40, sub_5630b0, sub_5631a0
*/
void sub_558e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x558e90ULL || rel >= 0x5590b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005590b0 size=112 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_5590b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5590b0ULL || rel >= 0x559120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559120 size=112 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_559120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559120ULL || rel >= 0x559190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559190 size=16 callers=0 calls=0
*/
void sub_559190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559190ULL || rel >= 0x5591a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005591a0 size=16 callers=0 calls=0
*/
void sub_5591a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5591a0ULL || rel >= 0x5591b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005591b0 size=16 callers=0 calls=0
*/
void sub_5591b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5591b0ULL || rel >= 0x5591c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005591c0 size=16 callers=0 calls=0
*/
void sub_5591c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5591c0ULL || rel >= 0x5591d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005591d0 size=16 callers=0 calls=0
*/
void sub_5591d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5591d0ULL || rel >= 0x5591e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005591e0 size=16 callers=0 calls=0
*/
void sub_5591e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5591e0ULL || rel >= 0x5591f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005591f0 size=16 callers=0 calls=0
*/
void sub_5591f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5591f0ULL || rel >= 0x559200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559200 size=16 callers=0 calls=0
*/
void sub_559200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559200ULL || rel >= 0x559210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559210 size=16 callers=0 calls=0
*/
void sub_559210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559210ULL || rel >= 0x559220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559220 size=16 callers=0 calls=0
*/
void sub_559220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559220ULL || rel >= 0x559230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559230 size=16 callers=0 calls=0
*/
void sub_559230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559230ULL || rel >= 0x559240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559240 size=16 callers=0 calls=0
*/
void sub_559240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559240ULL || rel >= 0x559250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559250 size=16 callers=0 calls=0
*/
void sub_559250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559250ULL || rel >= 0x559260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559260 size=16 callers=0 calls=0
*/
void sub_559260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559260ULL || rel >= 0x559270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559270 size=16 callers=0 calls=0
*/
void sub_559270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559270ULL || rel >= 0x559280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559280 size=16 callers=0 calls=0
*/
void sub_559280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559280ULL || rel >= 0x559290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559290 size=16 callers=0 calls=0
*/
void sub_559290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559290ULL || rel >= 0x5592a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005592a0 size=32 callers=0 calls=0
*/
void sub_5592a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5592a0ULL || rel >= 0x5592c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005592c0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_Sampler_Impl.h
*/
void SiGfx_NX_Sampler_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5592c0ULL || rel >= 0x559340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559340 size=16 callers=0 calls=0
*/
void sub_559340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559340ULL || rel >= 0x559350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559350 size=16 callers=0 calls=0
*/
void sub_559350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559350ULL || rel >= 0x559360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559360 size=16 callers=0 calls=0
*/
void sub_559360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559360ULL || rel >= 0x559370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559370 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_559370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559370ULL || rel >= 0x5593f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005593f0 size=64 callers=1 calls=1
   calls: sub_534000
*/
void sub_5593f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5593f0ULL || rel >= 0x559430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559430 size=64 callers=0 calls=1
   calls: sub_534430
*/
void sub_559430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559430ULL || rel >= 0x559470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559470 size=64 callers=0 calls=2
   calls: sub_5341b0, sub_534430
*/
void sub_559470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559470ULL || rel >= 0x5594b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005594b0 size=64 callers=0 calls=2
   calls: SiCore_Array_179, sub_534420
*/
void sub_5594b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5594b0ULL || rel >= 0x5594f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005594f0 size=16 callers=0 calls=0
*/
void sub_5594f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5594f0ULL || rel >= 0x559500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559500 size=512 callers=1 calls=7
   calls: sub_4c5a90, sub_4fef10, sub_4ff090, sub_55ade0, sub_55b100, sub_596640, sub_596680
   ref: Shader_%d
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_ShaderPool.cpp
*/
void SiGfx_NX_ShaderPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559500ULL || rel >= 0x559700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559700 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_559700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559700ULL || rel >= 0x559780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559780 size=80 callers=1 calls=2
   calls: sub_4c4700, sub_535080
   ref: SiGfx_NX_Common
*/
void SiGfx_NX_Common(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559780ULL || rel >= 0x5597d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005597d0 size=80 callers=0 calls=1
   calls: sub_535330
*/
void sub_5597d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5597d0ULL || rel >= 0x559820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559820 size=96 callers=0 calls=2
   calls: SiCore_String_79, sub_535330
*/
void sub_559820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559820ULL || rel >= 0x559880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559880 size=32 callers=0 calls=1
   calls: sub_535310
*/
void sub_559880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559880ULL || rel >= 0x5598a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005598a0 size=16 callers=0 calls=0
*/
void sub_5598a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5598a0ULL || rel >= 0x5598b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005598b0 size=528 callers=1 calls=7
   calls: sub_4c5a90, sub_4fef10, sub_4ff090, sub_559dc0, sub_55a0f0, sub_596640, sub_596680
   ref: ShaderProgram_%d
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_ShaderProgramPool.cpp
*/
void SiGfx_NX_ShaderProgramPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5598b0ULL || rel >= 0x559ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559ac0 size=160 callers=0 calls=3
   calls: sub_4c5a90, sub_4fef10, sub_55a0f0
   ref: ShaderProgram_%d
*/
void ShaderProgram__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559ac0ULL || rel >= 0x559b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559b60 size=144 callers=0 calls=2
   calls: SiGfx_NX_Special, sub_4cbf40
*/
void sub_559b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559b60ULL || rel >= 0x559bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559bf0 size=320 callers=1 calls=2
   calls: SiGfx_ShaderEffect_Impl_3, sub_4cbf40
   ref: SiGfx_NX_Special
   ref: SiGfx::NXSpecialShaderEffect::CSCopyResource
   ref: CSCopyBuffer
*/
void SiGfx_NX_Special(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559bf0ULL || rel >= 0x559d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559d30 size=16 callers=1 calls=0
*/
void sub_559d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559d30ULL || rel >= 0x559d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559d40 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_559d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559d40ULL || rel >= 0x559dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559dc0 size=176 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_559dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559dc0ULL || rel >= 0x559e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559e70 size=160 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_93(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559e70ULL || rel >= 0x559f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559f10 size=160 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_94(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559f10ULL || rel >= 0x559fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00559fb0 size=160 callers=0 calls=2
   calls: sub_4bf6a0, sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_95(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x559fb0ULL || rel >= 0x55a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a050 size=160 callers=0 calls=2
   calls: sub_4bf6a0, sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_96(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a050ULL || rel >= 0x55a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a0f0 size=16 callers=2 calls=0
*/
void sub_55a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a0f0ULL || rel >= 0x55a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a100 size=112 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_55a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a100ULL || rel >= 0x55a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a170 size=112 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_55a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a170ULL || rel >= 0x55a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a1e0 size=16 callers=0 calls=0
*/
void sub_55a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a1e0ULL || rel >= 0x55a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a1f0 size=16 callers=0 calls=0
*/
void sub_55a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a1f0ULL || rel >= 0x55a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a200 size=16 callers=0 calls=0
*/
void sub_55a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a200ULL || rel >= 0x55a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a210 size=16 callers=0 calls=0
*/
void sub_55a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a210ULL || rel >= 0x55a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a220 size=16 callers=0 calls=0
*/
void sub_55a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a220ULL || rel >= 0x55a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a230 size=16 callers=0 calls=0
*/
void sub_55a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a230ULL || rel >= 0x55a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a240 size=16 callers=0 calls=0
*/
void sub_55a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a240ULL || rel >= 0x55a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a250 size=16 callers=0 calls=0
*/
void sub_55a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a250ULL || rel >= 0x55a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a260 size=16 callers=0 calls=0
*/
void sub_55a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a260ULL || rel >= 0x55a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a270 size=16 callers=0 calls=0
*/
void sub_55a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a270ULL || rel >= 0x55a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a280 size=16 callers=0 calls=0
*/
void sub_55a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a280ULL || rel >= 0x55a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a290 size=16 callers=0 calls=0
*/
void sub_55a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a290ULL || rel >= 0x55a2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a2a0 size=16 callers=0 calls=0
*/
void sub_55a2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a2a0ULL || rel >= 0x55a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a2b0 size=16 callers=0 calls=0
*/
void sub_55a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a2b0ULL || rel >= 0x55a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a2c0 size=16 callers=0 calls=0
*/
void sub_55a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a2c0ULL || rel >= 0x55a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a2d0 size=16 callers=0 calls=0
*/
void sub_55a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a2d0ULL || rel >= 0x55a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a2e0 size=1136 callers=1 calls=2
   calls: sub_55abb0, sub_55ac60
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_ShaderProgram_Impl.cpp
*/
void SiGfx_NX_ShaderProgram_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a2e0ULL || rel >= 0x55a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a750 size=16 callers=0 calls=0
*/
void sub_55a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a750ULL || rel >= 0x55a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a760 size=48 callers=0 calls=1
   calls: SiGfx_NX_ShaderProgram_Impl
*/
void sub_55a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a760ULL || rel >= 0x55a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a790 size=16 callers=0 calls=0
*/
void sub_55a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a790ULL || rel >= 0x55a7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a7a0 size=288 callers=0 calls=0
*/
void sub_55a7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a7a0ULL || rel >= 0x55a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a8c0 size=16 callers=0 calls=0
*/
void sub_55a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a8c0ULL || rel >= 0x55a8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a8d0 size=16 callers=0 calls=0
*/
void sub_55a8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a8d0ULL || rel >= 0x55a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a8e0 size=16 callers=0 calls=0
*/
void sub_55a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a8e0ULL || rel >= 0x55a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a8f0 size=16 callers=0 calls=0
*/
void sub_55a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a8f0ULL || rel >= 0x55a900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a900 size=16 callers=0 calls=0
*/
void sub_55a900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a900ULL || rel >= 0x55a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a910 size=16 callers=0 calls=0
*/
void sub_55a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a910ULL || rel >= 0x55a920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a920 size=16 callers=0 calls=0
*/
void sub_55a920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a920ULL || rel >= 0x55a930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a930 size=16 callers=0 calls=0
*/
void sub_55a930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a930ULL || rel >= 0x55a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a940 size=16 callers=0 calls=0
*/
void sub_55a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a940ULL || rel >= 0x55a950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a950 size=16 callers=0 calls=0
*/
void sub_55a950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a950ULL || rel >= 0x55a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a960 size=16 callers=0 calls=0
*/
void sub_55a960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a960ULL || rel >= 0x55a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a970 size=16 callers=0 calls=0
*/
void sub_55a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a970ULL || rel >= 0x55a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a980 size=16 callers=0 calls=0
*/
void sub_55a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a980ULL || rel >= 0x55a990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a990 size=16 callers=0 calls=0
*/
void sub_55a990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a990ULL || rel >= 0x55a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a9a0 size=16 callers=0 calls=0
*/
void sub_55a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a9a0ULL || rel >= 0x55a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a9b0 size=16 callers=0 calls=0
*/
void sub_55a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a9b0ULL || rel >= 0x55a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a9c0 size=32 callers=0 calls=0
*/
void sub_55a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a9c0ULL || rel >= 0x55a9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055a9e0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_ShaderProgram_Impl.h
*/
void SiGfx_NX_ShaderProgram_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55a9e0ULL || rel >= 0x55aa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055aa60 size=16 callers=0 calls=0
*/
void sub_55aa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55aa60ULL || rel >= 0x55aa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055aa70 size=160 callers=0 calls=0
*/
void sub_55aa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55aa70ULL || rel >= 0x55ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ab10 size=16 callers=0 calls=0
*/
void sub_55ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ab10ULL || rel >= 0x55ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ab20 size=16 callers=0 calls=0
*/
void sub_55ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ab20ULL || rel >= 0x55ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ab30 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_55ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ab30ULL || rel >= 0x55abb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055abb0 size=80 callers=1 calls=1
   calls: sub_4bf660
*/
void sub_55abb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55abb0ULL || rel >= 0x55ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ac00 size=32 callers=0 calls=0
*/
void sub_55ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ac00ULL || rel >= 0x55ac20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ac20 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_55ac20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ac20ULL || rel >= 0x55ac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ac60 size=16 callers=1 calls=0
*/
void sub_55ac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ac60ULL || rel >= 0x55ac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ac70 size=16 callers=0 calls=0
*/
void sub_55ac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ac70ULL || rel >= 0x55ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ac80 size=16 callers=0 calls=0
*/
void sub_55ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ac80ULL || rel >= 0x55ac90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ac90 size=32 callers=0 calls=0
*/
void sub_55ac90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ac90ULL || rel >= 0x55acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055acb0 size=32 callers=0 calls=0
*/
void sub_55acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55acb0ULL || rel >= 0x55acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055acd0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_ShaderInput_Impl.h
*/
void SiGfx_NX_ShaderInput_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55acd0ULL || rel >= 0x55ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ad50 size=16 callers=0 calls=0
*/
void sub_55ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ad50ULL || rel >= 0x55ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ad60 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_55ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ad60ULL || rel >= 0x55ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ade0 size=160 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_538d70
*/
void sub_55ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ade0ULL || rel >= 0x55ae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ae80 size=160 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_97(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ae80ULL || rel >= 0x55af20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055af20 size=160 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55af20ULL || rel >= 0x55afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055afc0 size=160 callers=0 calls=2
   calls: sub_4f9640, sub_538dc0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_99(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55afc0ULL || rel >= 0x55b060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b060 size=160 callers=0 calls=2
   calls: sub_4f9640, sub_538dc0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b060ULL || rel >= 0x55b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b100 size=16 callers=1 calls=0
*/
void sub_55b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b100ULL || rel >= 0x55b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b110 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_55b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b110ULL || rel >= 0x55b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b150 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_55b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b150ULL || rel >= 0x55b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b190 size=16 callers=0 calls=0
*/
void sub_55b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b190ULL || rel >= 0x55b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b1a0 size=16 callers=0 calls=0
*/
void sub_55b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b1a0ULL || rel >= 0x55b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b1b0 size=16 callers=0 calls=0
*/
void sub_55b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b1b0ULL || rel >= 0x55b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b1c0 size=16 callers=0 calls=0
*/
void sub_55b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b1c0ULL || rel >= 0x55b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b1d0 size=16 callers=0 calls=0
*/
void sub_55b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b1d0ULL || rel >= 0x55b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b1e0 size=16 callers=0 calls=0
*/
void sub_55b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b1e0ULL || rel >= 0x55b1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b1f0 size=16 callers=0 calls=0
*/
void sub_55b1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b1f0ULL || rel >= 0x55b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b200 size=16 callers=0 calls=0
*/
void sub_55b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b200ULL || rel >= 0x55b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b210 size=16 callers=0 calls=0
*/
void sub_55b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b210ULL || rel >= 0x55b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b220 size=16 callers=0 calls=0
*/
void sub_55b220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b220ULL || rel >= 0x55b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b230 size=16 callers=0 calls=0
*/
void sub_55b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b230ULL || rel >= 0x55b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b240 size=16 callers=0 calls=0
*/
void sub_55b240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b240ULL || rel >= 0x55b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b250 size=16 callers=0 calls=0
*/
void sub_55b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b250ULL || rel >= 0x55b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b260 size=16 callers=0 calls=0
*/
void sub_55b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b260ULL || rel >= 0x55b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b270 size=16 callers=0 calls=0
*/
void sub_55b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b270ULL || rel >= 0x55b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b280 size=592 callers=0 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl_5
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Shader_Impl.cpp
*/
void SiGfx_NX_Shader_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b280ULL || rel >= 0x55b4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b4d0 size=128 callers=0 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl_6
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Shader_Impl.cpp
*/
void SiGfx_NX_Shader_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b4d0ULL || rel >= 0x55b550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b550 size=16 callers=0 calls=0
*/
void sub_55b550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b550ULL || rel >= 0x55b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b560 size=16 callers=0 calls=0
*/
void sub_55b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b560ULL || rel >= 0x55b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b570 size=16 callers=0 calls=0
*/
void sub_55b570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b570ULL || rel >= 0x55b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b580 size=32 callers=0 calls=0
*/
void sub_55b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b580ULL || rel >= 0x55b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b5a0 size=256 callers=0 calls=2
   calls: sub_4cbec0, sub_4ce9d0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_Shader_Impl.h
*/
void SiGfx_NX_Shader_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b5a0ULL || rel >= 0x55b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b6a0 size=16 callers=0 calls=0
*/
void sub_55b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b6a0ULL || rel >= 0x55b6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b6b0 size=16 callers=0 calls=0
*/
void sub_55b6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b6b0ULL || rel >= 0x55b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b6c0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_55b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b6c0ULL || rel >= 0x55b740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055b740 size=736 callers=1 calls=1
   calls: sub_55bc90
*/
void sub_55b740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55b740ULL || rel >= 0x55ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ba20 size=16 callers=1 calls=0
*/
void sub_55ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ba20ULL || rel >= 0x55ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ba30 size=608 callers=2 calls=1
   calls: sub_55bc90
*/
void sub_55ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ba30ULL || rel >= 0x55bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055bc90 size=1296 callers=2 calls=0
*/
void sub_55bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55bc90ULL || rel >= 0x55c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c1a0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_55c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c1a0ULL || rel >= 0x55c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c220 size=64 callers=1 calls=1
   calls: sub_534000
*/
void sub_55c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c220ULL || rel >= 0x55c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c260 size=64 callers=0 calls=1
   calls: sub_534430
*/
void sub_55c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c260ULL || rel >= 0x55c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c2a0 size=64 callers=0 calls=2
   calls: sub_5341b0, sub_534430
*/
void sub_55c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c2a0ULL || rel >= 0x55c2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c2e0 size=64 callers=0 calls=2
   calls: SiCore_Array_179, sub_534420
*/
void sub_55c2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c2e0ULL || rel >= 0x55c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c320 size=16 callers=0 calls=0
*/
void sub_55c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c320ULL || rel >= 0x55c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c330 size=512 callers=1 calls=7
   calls: sub_4c5a90, sub_4fef10, sub_4ff090, sub_55c5b0, sub_55c990, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_SurfacePool.cpp
   ref: Surface_%d
*/
void SiGfx_NX_SurfacePool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c330ULL || rel >= 0x55c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c530 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_55c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c530ULL || rel >= 0x55c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c5b0 size=176 callers=3 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_55c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c5b0ULL || rel >= 0x55c660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c660 size=208 callers=1 calls=4
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_4cbf40
*/
void sub_55c660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c660ULL || rel >= 0x55c730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c730 size=144 callers=0 calls=2
   calls: SiGfx_NX_Surface_Impl, sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_101(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c730ULL || rel >= 0x55c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c7c0 size=144 callers=0 calls=2
   calls: SiGfx_NX_Surface_Impl, sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_102(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c7c0ULL || rel >= 0x55c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c850 size=160 callers=0 calls=3
   calls: SiGfx_NX_Surface_Impl, sub_4bf6a0, sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_103(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c850ULL || rel >= 0x55c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c8f0 size=160 callers=0 calls=3
   calls: SiGfx_NX_Surface_Impl, sub_4bf6a0, sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_104(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c8f0ULL || rel >= 0x55c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c990 size=16 callers=1 calls=0
*/
void sub_55c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c990ULL || rel >= 0x55c9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055c9a0 size=256 callers=5 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl_6
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Surface_Impl.cpp
*/
void SiGfx_NX_Surface_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55c9a0ULL || rel >= 0x55caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055caa0 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_55caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55caa0ULL || rel >= 0x55cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cae0 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_55cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cae0ULL || rel >= 0x55cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cb20 size=16 callers=0 calls=0
*/
void sub_55cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cb20ULL || rel >= 0x55cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cb30 size=16 callers=0 calls=0
*/
void sub_55cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cb30ULL || rel >= 0x55cb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cb40 size=16 callers=0 calls=0
*/
void sub_55cb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cb40ULL || rel >= 0x55cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cb50 size=16 callers=0 calls=0
*/
void sub_55cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cb50ULL || rel >= 0x55cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cb60 size=192 callers=4 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_105(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cb60ULL || rel >= 0x55cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cc20 size=16 callers=0 calls=0
*/
void sub_55cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cc20ULL || rel >= 0x55cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cc30 size=16 callers=0 calls=0
*/
void sub_55cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cc30ULL || rel >= 0x55cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cc40 size=16 callers=0 calls=0
*/
void sub_55cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cc40ULL || rel >= 0x55cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cc50 size=16 callers=0 calls=0
*/
void sub_55cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cc50ULL || rel >= 0x55cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cc60 size=16 callers=0 calls=0
*/
void sub_55cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cc60ULL || rel >= 0x55cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cc70 size=16 callers=0 calls=0
*/
void sub_55cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cc70ULL || rel >= 0x55cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cc80 size=16 callers=0 calls=0
*/
void sub_55cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cc80ULL || rel >= 0x55cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cc90 size=16 callers=0 calls=0
*/
void sub_55cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cc90ULL || rel >= 0x55cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cca0 size=16 callers=0 calls=0
*/
void sub_55cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cca0ULL || rel >= 0x55ccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ccb0 size=16 callers=0 calls=0
*/
void sub_55ccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ccb0ULL || rel >= 0x55ccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ccc0 size=16 callers=0 calls=0
*/
void sub_55ccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ccc0ULL || rel >= 0x55ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ccd0 size=16 callers=0 calls=0
*/
void sub_55ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ccd0ULL || rel >= 0x55cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cce0 size=16 callers=0 calls=0
*/
void sub_55cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cce0ULL || rel >= 0x55ccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ccf0 size=16 callers=0 calls=0
*/
void sub_55ccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ccf0ULL || rel >= 0x55cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cd00 size=16 callers=0 calls=0
*/
void sub_55cd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cd00ULL || rel >= 0x55cd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cd10 size=16 callers=0 calls=0
*/
void sub_55cd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cd10ULL || rel >= 0x55cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cd20 size=16 callers=0 calls=0
*/
void sub_55cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cd20ULL || rel >= 0x55cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cd30 size=64 callers=1 calls=1
   calls: sub_55cd70
*/
void sub_55cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cd30ULL || rel >= 0x55cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cd70 size=608 callers=4 calls=6
   calls: sub_4ed0c0, sub_4ed0f0, sub_4ed120, sub_4ed180, sub_4ed6e0, sub_562f10
*/
void sub_55cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cd70ULL || rel >= 0x55cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055cfd0 size=816 callers=1 calls=4
   calls: SiGfx_NX_MemoryHeap_Impl_5, sub_55cd70, sub_562ee0, sub_5635f0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Surface_Impl.cpp
*/
void SiGfx_NX_Surface_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55cfd0ULL || rel >= 0x55d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d300 size=176 callers=14 calls=2
   calls: SiGfx_NX_Surface_Impl, sub_55cd70
*/
void sub_55d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d300ULL || rel >= 0x55d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d3b0 size=16 callers=2 calls=0
*/
void sub_55d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d3b0ULL || rel >= 0x55d3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d3c0 size=32 callers=0 calls=0
*/
void sub_55d3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d3c0ULL || rel >= 0x55d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d3e0 size=32 callers=0 calls=0
*/
void sub_55d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d3e0ULL || rel >= 0x55d400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d400 size=32 callers=0 calls=0
*/
void sub_55d400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d400ULL || rel >= 0x55d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d420 size=64 callers=0 calls=1
   calls: sub_55cd70
*/
void sub_55d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d420ULL || rel >= 0x55d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d460 size=32 callers=0 calls=0
*/
void sub_55d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d460ULL || rel >= 0x55d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d480 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_Surface_Impl.h
*/
void SiGfx_NX_Surface_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d480ULL || rel >= 0x55d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d500 size=16 callers=0 calls=0
*/
void sub_55d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d500ULL || rel >= 0x55d510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d510 size=16 callers=0 calls=0
*/
void sub_55d510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d510ULL || rel >= 0x55d520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d520 size=16 callers=0 calls=0
*/
void sub_55d520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d520ULL || rel >= 0x55d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d530 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_55d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d530ULL || rel >= 0x55d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d5b0 size=64 callers=1 calls=1
   calls: sub_534000
*/
void sub_55d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d5b0ULL || rel >= 0x55d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d5f0 size=64 callers=0 calls=1
   calls: sub_534430
*/
void sub_55d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d5f0ULL || rel >= 0x55d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d630 size=64 callers=0 calls=2
   calls: sub_5341b0, sub_534430
*/
void sub_55d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d630ULL || rel >= 0x55d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d670 size=64 callers=0 calls=2
   calls: SiCore_Array_179, sub_534420
*/
void sub_55d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d670ULL || rel >= 0x55d6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d6b0 size=16 callers=0 calls=0
*/
void sub_55d6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d6b0ULL || rel >= 0x55d6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d6c0 size=512 callers=9 calls=7
   calls: sub_4c5a90, sub_4fef10, sub_4ff090, sub_55e7c0, sub_55f1c0, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_TexturePool.cpp
   ref: Texture_%d
*/
void SiGfx_NX_TexturePool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d6c0ULL || rel >= 0x55d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d8c0 size=64 callers=0 calls=1
   calls: PerlinNoiseTexture
*/
void sub_55d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d8c0ULL || rel >= 0x55d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055d900 size=3648 callers=1 calls=4
   calls: SiGfx_Image_9, SiGfx_NX_TexturePool, sub_4bc640, sub_4bc690
   ref: GreyTexture
   ref: PerlinNoiseTexture
   ref: BlackTextureArray
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: WhiteTexture
   ref: WhiteCubeTexture
   ref: BlackTexture
   ref: BlackCubeTexture
*/
void PerlinNoiseTexture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55d900ULL || rel >= 0x55e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055e740 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_55e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55e740ULL || rel >= 0x55e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055e7c0 size=864 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_538d70
*/
void sub_55e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55e7c0ULL || rel >= 0x55eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055eb20 size=944 callers=3 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_106(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55eb20ULL || rel >= 0x55eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055eed0 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_264(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55eed0ULL || rel >= 0x55ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ef70 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_265(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ef70ULL || rel >= 0x55f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f040 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_266(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f040ULL || rel >= 0x55f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f110 size=16 callers=0 calls=0
*/
void sub_55f110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f110ULL || rel >= 0x55f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f120 size=16 callers=0 calls=0
*/
void sub_55f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f120ULL || rel >= 0x55f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f130 size=48 callers=0 calls=1
   calls: SiCore_String_106
*/
void sub_55f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f130ULL || rel >= 0x55f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f160 size=48 callers=0 calls=1
   calls: SiCore_String_106
*/
void sub_55f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f160ULL || rel >= 0x55f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f190 size=48 callers=0 calls=1
   calls: SiCore_String_106
*/
void sub_55f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f190ULL || rel >= 0x55f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f1c0 size=32 callers=1 calls=0
*/
void sub_55f1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f1c0ULL || rel >= 0x55f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f1e0 size=112 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_55f1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f1e0ULL || rel >= 0x55f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f250 size=112 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_55f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f250ULL || rel >= 0x55f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f2c0 size=16 callers=0 calls=0
*/
void sub_55f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f2c0ULL || rel >= 0x55f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f2d0 size=16 callers=0 calls=0
*/
void sub_55f2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f2d0ULL || rel >= 0x55f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f2e0 size=16 callers=0 calls=0
*/
void sub_55f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f2e0ULL || rel >= 0x55f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f2f0 size=16 callers=0 calls=0
*/
void sub_55f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f2f0ULL || rel >= 0x55f300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f300 size=16 callers=0 calls=0
*/
void sub_55f300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f300ULL || rel >= 0x55f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f310 size=16 callers=0 calls=0
*/
void sub_55f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f310ULL || rel >= 0x55f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f320 size=16 callers=0 calls=0
*/
void sub_55f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f320ULL || rel >= 0x55f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f330 size=16 callers=0 calls=0
*/
void sub_55f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f330ULL || rel >= 0x55f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f340 size=16 callers=0 calls=0
*/
void sub_55f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f340ULL || rel >= 0x55f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f350 size=16 callers=0 calls=0
*/
void sub_55f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f350ULL || rel >= 0x55f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f360 size=16 callers=0 calls=0
*/
void sub_55f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f360ULL || rel >= 0x55f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f370 size=16 callers=0 calls=0
*/
void sub_55f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f370ULL || rel >= 0x55f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f380 size=16 callers=0 calls=0
*/
void sub_55f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f380ULL || rel >= 0x55f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f390 size=16 callers=0 calls=0
*/
void sub_55f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f390ULL || rel >= 0x55f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f3a0 size=16 callers=0 calls=0
*/
void sub_55f3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f3a0ULL || rel >= 0x55f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f3b0 size=16 callers=0 calls=0
*/
void sub_55f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f3b0ULL || rel >= 0x55f3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f3c0 size=16 callers=0 calls=0
*/
void sub_55f3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f3c0ULL || rel >= 0x55f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055f3d0 size=3072 callers=0 calls=16
   calls: SiCore_Array_120, SiCore_Array_178, SiCore_Array_267, SiCore_Array_271, SiCore_String_107, SiGfx_NX_MemoryHeap_Impl_5, sub_4c8020, sub_4ed0f0, sub_4ed120, sub_4ed1a0, sub_4ed200, sub_4ed300
   ... +4 more
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Texture_Impl.cpp
*/
void SiGfx_NX_Texture_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55f3d0ULL || rel >= 0x55ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0055ffd0 size=480 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c8020
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_107(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x55ffd0ULL || rel >= 0x5601b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005601b0 size=784 callers=2 calls=9
   calls: SiCore_Array_272, SiCore_Array_273, SiCore_String_105, SiCore_String_117, sub_55d300, sub_561730, sub_561970, sub_561aa0, sub_565c10
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_267(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5601b0ULL || rel >= 0x5604c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005604c0 size=2384 callers=0 calls=7
   calls: SiCore_Array_151, SiCore_String_69, sub_4bc640, sub_4c45c0, sub_4ed080, sub_4f1290, sub_4f3680
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_108(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5604c0ULL || rel >= 0x560e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00560e10 size=560 callers=0 calls=2
   calls: SiGfx_NX_MemoryHeap_Impl_6, sub_4fb290
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Texture_Impl.cpp
*/
void SiGfx_NX_Texture_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x560e10ULL || rel >= 0x561040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561040 size=64 callers=0 calls=0
*/
void sub_561040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561040ULL || rel >= 0x561080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561080 size=64 callers=0 calls=0
*/
void sub_561080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561080ULL || rel >= 0x5610c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005610c0 size=96 callers=0 calls=0
*/
void sub_5610c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5610c0ULL || rel >= 0x561120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561120 size=112 callers=0 calls=0
*/
void sub_561120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561120ULL || rel >= 0x561190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561190 size=64 callers=0 calls=0
*/
void sub_561190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561190ULL || rel >= 0x5611d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005611d0 size=1120 callers=0 calls=6
   calls: RemoveByIndex, SiCore_Array_120, SiCore_Array_271, sub_4fb230, sub_4fb2c0, sub_4fb360
*/
void sub_5611d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5611d0ULL || rel >= 0x561630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561630 size=128 callers=0 calls=0
*/
void sub_561630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561630ULL || rel >= 0x5616b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005616b0 size=128 callers=0 calls=0
*/
void sub_5616b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5616b0ULL || rel >= 0x561730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561730 size=576 callers=1 calls=3
   calls: SiCore_Array_272, SiCore_String_105, sub_55d300
*/
void sub_561730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561730ULL || rel >= 0x561970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561970 size=304 callers=1 calls=3
   calls: SiCore_Array_272, SiCore_String_105, sub_55d300
*/
void sub_561970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561970ULL || rel >= 0x561aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561aa0 size=736 callers=1 calls=3
   calls: SiCore_Array_272, SiCore_String_105, sub_55d300
*/
void sub_561aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561aa0ULL || rel >= 0x561d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561d80 size=16 callers=0 calls=0
*/
void sub_561d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561d80ULL || rel >= 0x561d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561d90 size=16 callers=0 calls=0
*/
void sub_561d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561d90ULL || rel >= 0x561da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561da0 size=16 callers=0 calls=0
*/
void sub_561da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561da0ULL || rel >= 0x561db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561db0 size=16 callers=0 calls=0
*/
void sub_561db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561db0ULL || rel >= 0x561dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561dc0 size=80 callers=0 calls=0
*/
void sub_561dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561dc0ULL || rel >= 0x561e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561e10 size=64 callers=1 calls=0
*/
void sub_561e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561e10ULL || rel >= 0x561e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561e50 size=160 callers=1 calls=0
*/
void sub_561e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561e50ULL || rel >= 0x561ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00561ef0 size=1040 callers=0 calls=7
   calls: SiCore_Array_178, SiCore_Array_267, sub_4ed0f0, sub_4ed120, sub_4ed6e0, sub_4fb380, sub_562f10
*/
void sub_561ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x561ef0ULL || rel >= 0x562300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562300 size=16 callers=0 calls=0
*/
void sub_562300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562300ULL || rel >= 0x562310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562310 size=16 callers=0 calls=0
*/
void sub_562310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562310ULL || rel >= 0x562320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562320 size=16 callers=0 calls=0
*/
void sub_562320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562320ULL || rel >= 0x562330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562330 size=16 callers=0 calls=0
*/
void sub_562330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562330ULL || rel >= 0x562340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562340 size=32 callers=0 calls=0
*/
void sub_562340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562340ULL || rel >= 0x562360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562360 size=16 callers=0 calls=0
*/
void sub_562360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562360ULL || rel >= 0x562370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562370 size=80 callers=0 calls=0
*/
void sub_562370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562370ULL || rel >= 0x5623c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005623c0 size=32 callers=0 calls=0
*/
void sub_5623c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5623c0ULL || rel >= 0x5623e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005623e0 size=256 callers=0 calls=2
   calls: sub_4cbec0, sub_4ce9d0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_Texture_Impl.h
*/
void SiGfx_NX_Texture_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5623e0ULL || rel >= 0x5624e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005624e0 size=16 callers=0 calls=0
*/
void sub_5624e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5624e0ULL || rel >= 0x5624f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005624f0 size=32 callers=0 calls=0
*/
void sub_5624f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5624f0ULL || rel >= 0x562510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562510 size=16 callers=0 calls=0
*/
void sub_562510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562510ULL || rel >= 0x562520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562520 size=16 callers=0 calls=0
*/
void sub_562520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562520ULL || rel >= 0x562530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562530 size=32 callers=0 calls=0
*/
void sub_562530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562530ULL || rel >= 0x562550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562550 size=16 callers=0 calls=0
*/
void sub_562550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562550ULL || rel >= 0x562560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562560 size=192 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_268(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562560ULL || rel >= 0x562620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562620 size=192 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_269(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562620ULL || rel >= 0x5626e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005626e0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5626e0ULL || rel >= 0x562770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562770 size=464 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_271(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562770ULL || rel >= 0x562940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562940 size=576 callers=4 calls=2
   calls: sub_4c8020, sub_55c660
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_272(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562940ULL || rel >= 0x562b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562b80 size=608 callers=1 calls=2
   calls: sub_4c8020, sub_5656f0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_273(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562b80ULL || rel >= 0x562de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562de0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_562de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562de0ULL || rel >= 0x562e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562e60 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_562e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562e60ULL || rel >= 0x562ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562ee0 size=48 callers=10 calls=0
*/
void sub_562ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562ee0ULL || rel >= 0x562f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562f10 size=48 callers=8 calls=0
*/
void sub_562f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562f10ULL || rel >= 0x562f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00562f40 size=368 callers=1 calls=0
*/
void sub_562f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x562f40ULL || rel >= 0x5630b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005630b0 size=48 callers=3 calls=0
*/
void sub_5630b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5630b0ULL || rel >= 0x5630e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005630e0 size=112 callers=8 calls=0
*/
void sub_5630e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5630e0ULL || rel >= 0x563150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563150 size=16 callers=4 calls=0
*/
void sub_563150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563150ULL || rel >= 0x563160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563160 size=48 callers=2 calls=0
*/
void sub_563160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563160ULL || rel >= 0x563190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563190 size=16 callers=2 calls=0
*/
void sub_563190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563190ULL || rel >= 0x5631a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005631a0 size=48 callers=1 calls=0
*/
void sub_5631a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5631a0ULL || rel >= 0x5631d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005631d0 size=32 callers=2 calls=0
*/
void sub_5631d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5631d0ULL || rel >= 0x5631f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005631f0 size=48 callers=4 calls=0
*/
void sub_5631f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5631f0ULL || rel >= 0x563220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563220 size=48 callers=12 calls=0
*/
void sub_563220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563220ULL || rel >= 0x563250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563250 size=32 callers=2 calls=0
*/
void sub_563250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563250ULL || rel >= 0x563270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563270 size=896 callers=1 calls=3
   calls: sub_4ed0c0, sub_4ed120, sub_562ee0
*/
void sub_563270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563270ULL || rel >= 0x5635f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005635f0 size=16 callers=1 calls=0
*/
void sub_5635f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5635f0ULL || rel >= 0x563600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563600 size=32 callers=1 calls=0
*/
void sub_563600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563600ULL || rel >= 0x563620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563620 size=96 callers=6 calls=0
*/
void sub_563620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563620ULL || rel >= 0x563680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563680 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_563680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563680ULL || rel >= 0x563700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563700 size=64 callers=1 calls=1
   calls: sub_534000
*/
void sub_563700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563700ULL || rel >= 0x563740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563740 size=64 callers=0 calls=1
   calls: sub_534430
*/
void sub_563740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563740ULL || rel >= 0x563780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563780 size=64 callers=0 calls=2
   calls: sub_5341b0, sub_534430
*/
void sub_563780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563780ULL || rel >= 0x5637c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005637c0 size=64 callers=0 calls=2
   calls: SiCore_Array_179, sub_534420
*/
void sub_5637c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5637c0ULL || rel >= 0x563800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563800 size=16 callers=0 calls=0
*/
void sub_563800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563800ULL || rel >= 0x563810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563810 size=512 callers=1 calls=7
   calls: sub_4c5a90, sub_4fef10, sub_4ff090, sub_564560, sub_564950, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp
   ref: VertexFormat_%d
*/
void SiGfx_NX_VertexFormatPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563810ULL || rel >= 0x563a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563a10 size=48 callers=0 calls=1
   calls: VERTEXFORMAT_POS_TEX3D
*/
void sub_563a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563a10ULL || rel >= 0x563a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00563a40 size=2704 callers=1 calls=3
   calls: sub_4fef10, sub_564560, sub_564950
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp
   ref: VERTEXFORMAT_POS_COLOR
   ref: VERTEXFORMAT_POS
   ref: VERTEXFORMAT_POS_BLEND_NORMAL_COLOR_TEX_TAN
   ref: VERTEXFORMAT_POS_NORMAL_COLOR_MULTITEX2
   ref: VERTEXFORMAT_POS_NORMAL_COLOR_TEX
   ref: VERTEXFORMAT_POS_NORMAL_TEX
   ref: VERTEXFORMAT_POS_COLOR_TEX
*/
void VERTEXFORMAT_POS_TEX3D(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x563a40ULL || rel >= 0x5644d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005644d0 size=16 callers=0 calls=0
*/
void sub_5644d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5644d0ULL || rel >= 0x5644e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005644e0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5644e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5644e0ULL || rel >= 0x564560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564560 size=352 callers=18 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_564560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564560ULL || rel >= 0x5646c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005646c0 size=160 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_109(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5646c0ULL || rel >= 0x564760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564760 size=160 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564760ULL || rel >= 0x564800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564800 size=160 callers=0 calls=2
   calls: sub_4bf6a0, sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_111(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564800ULL || rel >= 0x5648a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005648a0 size=176 callers=0 calls=2
   calls: sub_4bf6a0, sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_112(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5648a0ULL || rel >= 0x564950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564950 size=16 callers=17 calls=0
*/
void sub_564950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564950ULL || rel >= 0x564960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564960 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_564960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564960ULL || rel >= 0x5649a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005649a0 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_5649a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5649a0ULL || rel >= 0x5649e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005649e0 size=16 callers=0 calls=0
*/
void sub_5649e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5649e0ULL || rel >= 0x5649f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005649f0 size=16 callers=0 calls=0
*/
void sub_5649f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5649f0ULL || rel >= 0x564a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564a00 size=16 callers=0 calls=0
*/
void sub_564a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564a00ULL || rel >= 0x564a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564a10 size=16 callers=0 calls=0
*/
void sub_564a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564a10ULL || rel >= 0x564a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564a20 size=16 callers=0 calls=0
*/
void sub_564a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564a20ULL || rel >= 0x564a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564a30 size=16 callers=0 calls=0
*/
void sub_564a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564a30ULL || rel >= 0x564a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564a40 size=16 callers=0 calls=0
*/
void sub_564a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564a40ULL || rel >= 0x564a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564a50 size=16 callers=0 calls=0
*/
void sub_564a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564a50ULL || rel >= 0x564a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564a60 size=16 callers=0 calls=0
*/
void sub_564a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564a60ULL || rel >= 0x564a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564a70 size=16 callers=0 calls=0
*/
void sub_564a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564a70ULL || rel >= 0x564a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564a80 size=16 callers=0 calls=0
*/
void sub_564a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564a80ULL || rel >= 0x564a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564a90 size=16 callers=0 calls=0
*/
void sub_564a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564a90ULL || rel >= 0x564aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564aa0 size=16 callers=0 calls=0
*/
void sub_564aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564aa0ULL || rel >= 0x564ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564ab0 size=16 callers=0 calls=0
*/
void sub_564ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564ab0ULL || rel >= 0x564ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564ac0 size=528 callers=0 calls=3
   calls: sub_4c3410, sub_4ed0c0, sub_564cd0
*/
void sub_564ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564ac0ULL || rel >= 0x564cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564cd0 size=336 callers=2 calls=1
   calls: sub_4ed0c0
*/
void sub_564cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564cd0ULL || rel >= 0x564e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564e20 size=48 callers=0 calls=0
*/
void sub_564e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564e20ULL || rel >= 0x564e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564e50 size=144 callers=0 calls=0
*/
void sub_564e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564e50ULL || rel >= 0x564ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00564ee0 size=464 callers=0 calls=3
   calls: sub_4c3410, sub_4ed0c0, sub_564cd0
*/
void sub_564ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x564ee0ULL || rel >= 0x5650b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005650b0 size=16 callers=0 calls=0
*/
void sub_5650b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5650b0ULL || rel >= 0x5650c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005650c0 size=16 callers=0 calls=0
*/
void sub_5650c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5650c0ULL || rel >= 0x5650d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005650d0 size=16 callers=0 calls=0
*/
void sub_5650d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5650d0ULL || rel >= 0x5650e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005650e0 size=64 callers=0 calls=0
*/
void sub_5650e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5650e0ULL || rel >= 0x565120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565120 size=16 callers=0 calls=0
*/
void sub_565120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565120ULL || rel >= 0x565130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565130 size=32 callers=0 calls=0
*/
void sub_565130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565130ULL || rel >= 0x565150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565150 size=16 callers=0 calls=0
*/
void sub_565150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565150ULL || rel >= 0x565160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565160 size=32 callers=0 calls=0
*/
void sub_565160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565160ULL || rel >= 0x565180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565180 size=16 callers=0 calls=0
*/
void sub_565180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565180ULL || rel >= 0x565190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565190 size=48 callers=0 calls=0
*/
void sub_565190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565190ULL || rel >= 0x5651c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005651c0 size=544 callers=0 calls=0
*/
void sub_5651c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5651c0ULL || rel >= 0x5653e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005653e0 size=16 callers=0 calls=0
*/
void sub_5653e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5653e0ULL || rel >= 0x5653f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005653f0 size=16 callers=0 calls=0
*/
void sub_5653f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5653f0ULL || rel >= 0x565400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565400 size=16 callers=0 calls=0
*/
void sub_565400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565400ULL || rel >= 0x565410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565410 size=16 callers=0 calls=0
*/
void sub_565410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565410ULL || rel >= 0x565420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565420 size=16 callers=0 calls=0
*/
void sub_565420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565420ULL || rel >= 0x565430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565430 size=32 callers=0 calls=0
*/
void sub_565430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565430ULL || rel >= 0x565450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565450 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_VertexFormat_Impl.h
*/
void SiGfx_NX_VertexFormat_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565450ULL || rel >= 0x5654d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005654d0 size=16 callers=0 calls=0
*/
void sub_5654d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5654d0ULL || rel >= 0x5654e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005654e0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5654e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5654e0ULL || rel >= 0x565560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565560 size=64 callers=1 calls=1
   calls: sub_534000
*/
void sub_565560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565560ULL || rel >= 0x5655a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005655a0 size=64 callers=0 calls=1
   calls: sub_534430
*/
void sub_5655a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5655a0ULL || rel >= 0x5655e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

