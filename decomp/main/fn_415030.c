/* main functions 00415030..00449890 (26 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00415030 size=832 callers=9 calls=0
*/
void sub_415030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415030ULL || rel >= 0x415370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415370 size=272 callers=4 calls=0
*/
void sub_415370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415370ULL || rel >= 0x415480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415480 size=192 callers=0 calls=1
   calls: SiCore_Array
   ref: C:/workspace/sisdk/3.0/SDK/Core/Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415480ULL || rel >= 0x415540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415540 size=176 callers=0 calls=1
   calls: SiCore_Array
   ref: C:/workspace/sisdk/3.0/SDK/Core/Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415540ULL || rel >= 0x4155f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004155f0 size=1552 callers=31 calls=0
*/
void sub_4155f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4155f0ULL || rel >= 0x415c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415c00 size=832 callers=89 calls=0
   ref: ../include\PPFX/ppfxTypes.h
   ref: MATRIXT44_MatrixMultiply
*/
void MATRIXT44_MatrixMultiply(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415c00ULL || rel >= 0x415f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00415f40 size=6448 callers=0 calls=2
   calls: sub_1c0, sub_4bc640
*/
void sub_415f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x415f40ULL || rel >= 0x417870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417870 size=448 callers=2 calls=6
   calls: GPUPostEffect_cpp_d_PPFX, Unknown_Error_Code, sub_417a30, sub_419550, sub_4b9840, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX: 
   ref: IPfxBaseContext::~IPfxBaseContext(): s_pSinglePostEffect->Uninitialize() failed (0x%x: %s).
   ref: IPfxBaseContext::~IPfxBaseContext(): s_pSinglePostEffect->Uninitialize() succeeded.
   ref: C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: 
   ref: ==== IPfxBaseContext::~IPfxBaseContext() succeeded. ====
   ref: ==== IPfxBaseContext::~IPfxBaseContext() ====
*/
void ppfx_cpp_d_PPFX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417870ULL || rel >= 0x417a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417a30 size=208 callers=858 calls=0
*/
void sub_417a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417a30ULL || rel >= 0x417b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417b00 size=48 callers=0 calls=1
   calls: ppfx_cpp_d_PPFX
*/
void sub_417b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417b00ULL || rel >= 0x417b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00417b30 size=1328 callers=1 calls=19
   calls: GPUPostEffect_cpp_d_PPFX_2, GPUPostEffect_cpp_d_PPFX_FN_11, Unknown_Error_Code, ppfxRenderToTexture, ppfxRenderToTexture_cpp_d_PPFX_2, sub_417a30, sub_4190f0, sub_41af70, sub_426070, sub_429da0, sub_429e60, sub_429e80
   ... +7 more
   ref: C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX: 
   ref: GPU total Resource used: %d bytes (%.2f KB / %.2f MB)
   ref: IPfxBaseContext::Initialize(): s_pSinglePostEffect->Initialize() failed (0x%x: %s).
   ref: C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/ppfx.cpp
   ref: ==== IPfxBaseContext::Initialize() ====
   ref: ==== IPfxBaseContext::Initialize() succeeded. ====
   ref: PPFX: 
*/
void f_2f_MB(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x417b30ULL || rel >= 0x418060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418060 size=112 callers=0 calls=2
   calls: sub_4190d0, sub_4b9850
*/
void sub_418060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418060ULL || rel >= 0x4180d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004180d0 size=528 callers=1 calls=6
   calls: GPUPostEffect_cpp_d_PPFX, Unknown_Error_Code, sub_417a30, sub_419550, sub_4b9840, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX: 
   ref: IPfxBaseContext::Uninitialize(): s_pSinglePostEffect->Uninitialize() succeeded.
   ref: C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: 
   ref: IPfxBaseContext::Uninitialize(): s_pSinglePostEffect->Uninitialize() failed (0x%x: %s).
   ref: ==== IPfxBaseContext::Uninitialize() succeeded. ====
   ref: PPFX: 
   ref: ==== IPfxBaseContext::Uninitialize() ====
*/
void ppfx_cpp_d_PPFX_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4180d0ULL || rel >= 0x4182e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004182e0 size=16 callers=1 calls=0
*/
void sub_4182e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4182e0ULL || rel >= 0x4182f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004182f0 size=16 callers=2 calls=0
*/
void sub_4182f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4182f0ULL || rel >= 0x418300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418300 size=16 callers=2 calls=0
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

/* 00418310 size=16 callers=1 calls=0
*/
void sub_418310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418310ULL || rel >= 0x418320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418320 size=16 callers=1 calls=0
*/
void sub_418320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418320ULL || rel >= 0x418330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418330 size=16 callers=1 calls=0
*/
void sub_418330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418330ULL || rel >= 0x418340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418340 size=16 callers=1 calls=0
*/
void sub_418340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418340ULL || rel >= 0x418350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418350 size=16 callers=1 calls=0
*/
void sub_418350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418350ULL || rel >= 0x418360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418360 size=16 callers=1 calls=0
*/
void sub_418360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418360ULL || rel >= 0x418370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418370 size=16 callers=1 calls=0
*/
void sub_418370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418370ULL || rel >= 0x418380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418380 size=16 callers=1 calls=0
*/
void sub_418380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418380ULL || rel >= 0x418390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418390 size=16 callers=1 calls=0
*/
void sub_418390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418390ULL || rel >= 0x4183a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004183a0 size=16 callers=1 calls=0
*/
void sub_4183a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4183a0ULL || rel >= 0x4183b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004183b0 size=16 callers=1 calls=0
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

/* 004183c0 size=16 callers=1 calls=0
*/
void sub_4183c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4183c0ULL || rel >= 0x4183d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004183d0 size=16 callers=1 calls=0
*/
void sub_4183d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4183d0ULL || rel >= 0x4183e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004183e0 size=16 callers=1 calls=0
*/
void sub_4183e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4183e0ULL || rel >= 0x4183f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004183f0 size=16 callers=1 calls=0
*/
void sub_4183f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4183f0ULL || rel >= 0x418400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418400 size=16 callers=1 calls=0
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

/* 00418410 size=16 callers=1 calls=0
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

/* 00418420 size=16 callers=1 calls=0
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

/* 00418430 size=16 callers=1 calls=0
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

/* 00418440 size=16 callers=1 calls=0
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

/* 00418450 size=16 callers=1 calls=0
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

/* 00418460 size=16 callers=1 calls=0
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

/* 00418470 size=16 callers=2 calls=0
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

/* 00418480 size=16 callers=1 calls=0
*/
void sub_418480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418480ULL || rel >= 0x418490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418490 size=32 callers=1 calls=0
*/
void sub_418490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418490ULL || rel >= 0x4184b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004184b0 size=16 callers=2 calls=0
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

/* 004184c0 size=16 callers=1 calls=0
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

/* 004184d0 size=16 callers=1 calls=0
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

/* 004184e0 size=16 callers=1 calls=0
*/
void sub_4184e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4184e0ULL || rel >= 0x4184f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004184f0 size=16 callers=1 calls=0
*/
void sub_4184f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4184f0ULL || rel >= 0x418500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418500 size=48 callers=1 calls=0
*/
void sub_418500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418500ULL || rel >= 0x418530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418530 size=32 callers=1 calls=0
*/
void sub_418530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418530ULL || rel >= 0x418550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418550 size=16 callers=1 calls=0
*/
void sub_418550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418550ULL || rel >= 0x418560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418560 size=32 callers=1 calls=0
*/
void sub_418560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418560ULL || rel >= 0x418580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418580 size=16 callers=1 calls=0
*/
void sub_418580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418580ULL || rel >= 0x418590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418590 size=16 callers=1 calls=0
*/
void sub_418590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418590ULL || rel >= 0x4185a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004185a0 size=16 callers=1 calls=0
*/
void sub_4185a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4185a0ULL || rel >= 0x4185b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004185b0 size=16 callers=1 calls=0
*/
void sub_4185b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4185b0ULL || rel >= 0x4185c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004185c0 size=16 callers=1 calls=0
*/
void sub_4185c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4185c0ULL || rel >= 0x4185d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004185d0 size=16 callers=1 calls=0
*/
void sub_4185d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4185d0ULL || rel >= 0x4185e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004185e0 size=48 callers=1 calls=1
   calls: sub_4b9850
*/
void sub_4185e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4185e0ULL || rel >= 0x418610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418610 size=48 callers=1 calls=1
   calls: sub_4b9850
*/
void sub_418610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418610ULL || rel >= 0x418640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418640 size=96 callers=1 calls=1
   calls: sub_4b9850
*/
void sub_418640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418640ULL || rel >= 0x4186a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004186a0 size=64 callers=1 calls=1
   calls: sub_4b9850
*/
void sub_4186a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4186a0ULL || rel >= 0x4186e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004186e0 size=16 callers=1 calls=0
*/
void sub_4186e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4186e0ULL || rel >= 0x4186f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004186f0 size=16 callers=1 calls=0
*/
void sub_4186f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4186f0ULL || rel >= 0x418700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418700 size=16 callers=1 calls=0
*/
void sub_418700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418700ULL || rel >= 0x418710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418710 size=16 callers=1 calls=0
*/
void sub_418710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418710ULL || rel >= 0x418720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418720 size=16 callers=1 calls=0
*/
void sub_418720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418720ULL || rel >= 0x418730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418730 size=64 callers=1 calls=1
   calls: sub_4b9850
*/
void sub_418730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418730ULL || rel >= 0x418770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418770 size=16 callers=1 calls=0
*/
void sub_418770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418770ULL || rel >= 0x418780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418780 size=16 callers=4 calls=0
*/
void sub_418780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418780ULL || rel >= 0x418790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418790 size=16 callers=2 calls=0
*/
void sub_418790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418790ULL || rel >= 0x4187a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004187a0 size=16 callers=2 calls=0
*/
void sub_4187a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4187a0ULL || rel >= 0x4187b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004187b0 size=16 callers=2 calls=0
*/
void sub_4187b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4187b0ULL || rel >= 0x4187c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004187c0 size=16 callers=1 calls=0
*/
void sub_4187c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4187c0ULL || rel >= 0x4187d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004187d0 size=16 callers=2 calls=0
*/
void sub_4187d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4187d0ULL || rel >= 0x4187e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004187e0 size=16 callers=1 calls=0
*/
void sub_4187e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4187e0ULL || rel >= 0x4187f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004187f0 size=16 callers=1 calls=0
*/
void sub_4187f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4187f0ULL || rel >= 0x418800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418800 size=16 callers=1 calls=0
*/
void sub_418800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418800ULL || rel >= 0x418810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418810 size=16 callers=1 calls=0
*/
void sub_418810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418810ULL || rel >= 0x418820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418820 size=16 callers=1 calls=0
*/
void sub_418820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418820ULL || rel >= 0x418830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418830 size=16 callers=1 calls=0
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

/* 00418840 size=672 callers=0 calls=14
   calls: TFXString_2, TFXString_3, ppfxLicense_3, sub_417a30, sub_4190e0, sub_4512d0, sub_4515c0, sub_4520d0, sub_4b9a60, sub_4bb4d0, sub_4bb530, sub_4bb5d0
   ... +2 more
   ref: License text is not set.
   ref: License is not valid.
   ref: Unexpected License Error.
   ref: C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: 
   ref: License is expired.
   ref: YEBIS_PROMOTION2016MAY_
   ref: UX11ioIamWgDk2jhDkcBZldEPs60Pp0n
   ref: a6bV*8x
*/
void YEBIS_PROMOTION2016MAY(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418840ULL || rel >= 0x418ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418ae0 size=48 callers=0 calls=1
   calls: ppfx_cpp_d_PPFX
*/
void sub_418ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418ae0ULL || rel >= 0x418b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418b10 size=96 callers=1 calls=2
   calls: sub_4b97d0, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/ppfx.cpp
   ref: IPfxContext::Instantiate()
*/
void ppfx(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418b10ULL || rel >= 0x418b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418b70 size=16 callers=1 calls=0
*/
void sub_418b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418b70ULL || rel >= 0x418b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418b80 size=16 callers=1 calls=0
*/
void sub_418b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418b80ULL || rel >= 0x418b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418b90 size=32 callers=1 calls=0
*/
void sub_418b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418b90ULL || rel >= 0x418bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418bb0 size=32 callers=4 calls=0
*/
void sub_418bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418bb0ULL || rel >= 0x418bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418bd0 size=128 callers=1 calls=1
   calls: sub_562f10
*/
void sub_418bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418bd0ULL || rel >= 0x418c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418c50 size=96 callers=1 calls=1
   calls: sub_562f10
*/
void sub_418c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418c50ULL || rel >= 0x418cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418cb0 size=144 callers=1 calls=1
   calls: sub_562f10
*/
void sub_418cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418cb0ULL || rel >= 0x418d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418d40 size=112 callers=1 calls=1
   calls: sub_562f10
*/
void sub_418d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418d40ULL || rel >= 0x418db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418db0 size=112 callers=1 calls=1
   calls: sub_562f10
*/
void sub_418db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418db0ULL || rel >= 0x418e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418e20 size=16 callers=25 calls=0
*/
void sub_418e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418e20ULL || rel >= 0x418e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418e30 size=16 callers=3 calls=0
*/
void sub_418e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418e30ULL || rel >= 0x418e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418e40 size=16 callers=13 calls=0
*/
void sub_418e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418e40ULL || rel >= 0x418e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418e50 size=16 callers=38 calls=0
*/
void sub_418e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418e50ULL || rel >= 0x418e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00418e60 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_418e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x418e60ULL || rel >= 0x4190d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004190d0 size=16 callers=1 calls=0
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

/* 004190e0 size=16 callers=1 calls=0
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

/* 004190f0 size=1120 callers=1 calls=1
   calls: sub_4bf660
*/
void sub_4190f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4190f0ULL || rel >= 0x419550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419550 size=320 callers=2 calls=7
   calls: GPUPostEffect_cpp_d_PPFX, sub_43c3a0, sub_43c3f0, sub_43c440, sub_43c490, sub_4b9a60, sub_4bf6a0
*/
void sub_419550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419550ULL || rel >= 0x419690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00419690 size=6336 callers=6 calls=18
   calls: sub_417a30, sub_43c3a0, sub_43c3f0, sub_43c440, sub_43c490, sub_43c4e0, sub_43e2b0, sub_46db60, sub_4708b0, sub_49e3a0, sub_49eb10, sub_49eb20
   ... +6 more
   ref: ==== CPostEffect::Uninitialize() ====
   ref: CPostEffect::Uninitialize(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene(
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: ==== CPostEffect::Uninitialize() succeeded. ====
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: 
   ref: CPostEffect::~CPostEffect(): SiGfxDeinit succeeded.
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x419690ULL || rel >= 0x41af50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041af50 size=32 callers=0 calls=0
*/
void sub_41af50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41af50ULL || rel >= 0x41af70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041af70 size=64 callers=2 calls=0
*/
void sub_41af70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41af70ULL || rel >= 0x41afb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0041afb0 size=31280 callers=1 calls=62
   calls: GPUDepthOfField_cpp_d_PPFX_ERROR, GPUInterfaceDevice_cpp_d_PPFX_ERROR_6, GPUMemoryAllocator, GPUMemoryAllocator_6, GPUPostEffect_cpp_d_PPFX, GPUPostEffect_cpp_d_PPFX_3, GPUPostEffect_cpp_d_PPFX_ERROR, GPUPostEffect_cpp_d_PPFX_ERROR_5, GPUPostEffect_cpp_d_PPFX_ERROR_6, GPUPostEffect_cpp_d_PPFX_FN, GPUPostEffect_cpp_d_PPFX_FN_10, GPUPostEffect_cpp_d_PPFX_FN_11
   ... +50 more
   ref: CPostEffect::m_pAmbientOcclusion_Result_Reduced2
   ref: CPostEffect::Initialize(): m_pMotionBlurReducedWork->InitializeDevice() succeeded.
   ref: CPostEffect::Initialize(): m_pGPUDevice->Reset() failed.
   ref: CPostEffect::m_pRenderGlare
   ref: CPostEffect::m_pAmbientOcclusion_Result_Reduced3
   ref: CPostEffect::Initialize(): m_pEffectColorAlphaDestinationWork->InitializeDevice() succeeded.
   ref: Frame: %d, View: %d, SetAutoExposureMeteringLuminanceRange(iEffectViewIndex: %d, fMinLuminance: %f, 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
*/
void GPUPostEffect_cpp_d_PPFX_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x41afb0ULL || rel >= 0x4229e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004229e0 size=1920 callers=1 calls=10
   calls: ShaderPackage, SiCore_String_66, sub_417a30, sub_4b99a0, sub_4b9a60, sub_4bc760, sub_4bca60, sub_4cbd40, sub_4cbdd0, sub_4cbf40
   ref: CPostEffect::CreateInternalResource_SiGfx(): ISiGfxDevice::CreateCommandList() succeeded.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp
   ref: CPostEffect::CreateInternalResource_SiGfx(): m_nvnMemoryPoolStorageAllocator.InitHeap()==false
   ref: ../src/GPU/GPUMemoryAllocator.h
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::CreateInternalResource_SiGfx(): SiGfxGetKernel()->CreateDevice() succeeded.
   ref: CPostEffect::CreateInternalResource_SiGfx(): ISiGfxDrawContext::CreateDrawContext() succeeded.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: 
*/
void GPUPostEffect_cpp_d_PPFX_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4229e0ULL || rel >= 0x423160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423160 size=800 callers=2 calls=2
   calls: sub_4b99a0, sub_6a54a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423160ULL || rel >= 0x423480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423480 size=112 callers=1 calls=0
*/
void sub_423480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423480ULL || rel >= 0x4234f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004234f0 size=320 callers=1 calls=1
   calls: sub_417a30
   ref: CPostEffect::SetActiveView(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
   ref: Frame: %d, View: %d, SetActiveView(iEffectViewIndex: %d);
*/
void GPUPostEffect_cpp_d_PPFX_FN(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4234f0ULL || rel >= 0x423630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423630 size=48 callers=0 calls=0
*/
void sub_423630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423630ULL || rel >= 0x423660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423660 size=144 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetLensDistortionEnable(): Initialize() with PFXINIT_LENSDISTORTION flag for lens disto
*/
void GPUPostEffect_cpp_d_PPFX_WARNING(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423660ULL || rel >= 0x4236f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004236f0 size=144 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetGaussianBlurEnable(): Initialize() with PFXINIT_GAUSSIANBLUR flag for feedback.
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4236f0ULL || rel >= 0x423780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423780 size=48 callers=0 calls=0
*/
void sub_423780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423780ULL || rel >= 0x4237b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004237b0 size=160 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetAntialiasEnable(): Initialize() with PFXINIT_ANTIALIAS flag for post-process antiali
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4237b0ULL || rel >= 0x423850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423850 size=256 callers=1 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetAntialiasType(): invalid argument.
   ref: CPostEffect::SetAntialiasType(): Initialize with PFX_INITPARAM::m_uiAntialiasFlags |= PFXAA_SMAA.
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423850ULL || rel >= 0x423950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423950 size=64 callers=0 calls=0
*/
void sub_423950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423950ULL || rel >= 0x423990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423990 size=192 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetLightShaftEnable(): Initialize() with PFXINIT_LIGHTSHAFT flag for light shafts.
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423990ULL || rel >= 0x423a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423a50 size=144 callers=0 calls=0
*/
void sub_423a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423a50ULL || rel >= 0x423ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423ae0 size=112 callers=0 calls=0
*/
void sub_423ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423ae0ULL || rel >= 0x423b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423b50 size=48 callers=0 calls=0
*/
void sub_423b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423b50ULL || rel >= 0x423b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423b80 size=16 callers=0 calls=0
*/
void sub_423b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423b80ULL || rel >= 0x423b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423b90 size=16 callers=0 calls=0
*/
void sub_423b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423b90ULL || rel >= 0x423ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423ba0 size=192 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetLightGhostEnable()
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423ba0ULL || rel >= 0x423c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423c60 size=112 callers=0 calls=0
*/
void sub_423c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423c60ULL || rel >= 0x423cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423cd0 size=48 callers=0 calls=0
*/
void sub_423cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423cd0ULL || rel >= 0x423d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423d00 size=160 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetMotionBlurEnable(): Initialize() with PFXINIT_MOTIONBLUR flag for motion blur.
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423d00ULL || rel >= 0x423da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423da0 size=16 callers=0 calls=0
*/
void sub_423da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423da0ULL || rel >= 0x423db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423db0 size=112 callers=0 calls=0
*/
void sub_423db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423db0ULL || rel >= 0x423e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423e20 size=144 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetFeedbackEnable(): Initialize() with PFXINIT_FEEDBACK flag for feedback.
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423e20ULL || rel >= 0x423eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423eb0 size=32 callers=0 calls=0
*/
void sub_423eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423eb0ULL || rel >= 0x423ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423ed0 size=16 callers=0 calls=0
*/
void sub_423ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423ed0ULL || rel >= 0x423ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423ee0 size=272 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetGlareModulatorSource(): Initialize() with PFXINIT_GLAREMODULATOR flag for glare modu
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::SetGlareModulatorSource(): Argument eGlareModulatorSource is invalid.
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423ee0ULL || rel >= 0x423ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00423ff0 size=272 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetEffectMaskColorSource(): Argument eEffectMaskColorSource is invalid.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::SetEffectMaskColorSource(): Initialize() with PFXINIT_EFFECTMASK flag for effect mask.
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x423ff0ULL || rel >= 0x424100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424100 size=320 callers=1 calls=2
   calls: GPUPostEffect_cpp_d_PPFX_FN_13, sub_417a30
   ref: CPostEffect::SetRenderSceneLuminanceScale(): SceneLuminanceScale mest be greater than zero.
   ref: Frame: %d, View: %d, SetDeltaTime(fElapsedTimeInSeconds: %f);
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
   ref: Frame: %d, View: %d, SetRenderSceneLuminanceScale(fSceneLuminanceScale: %f);
*/
void GPUPostEffect_cpp_d_PPFX_FN_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424100ULL || rel >= 0x424240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424240 size=384 callers=1 calls=1
   calls: sub_417a30
   ref: CPostEffect::SetRenderSceneViewportScale(): Not supported. Both of fOffsetX and fOffsetY must be zer
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::SetRenderSceneViewportScale(): Cannot be called between BeginPostEffectScene() and EndP
*/
void GPUPostEffect_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424240ULL || rel >= 0x4243c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004243c0 size=208 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::SetGlareParameters(): GlareRemapFactor must be greater than 0.0.
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4243c0ULL || rel >= 0x424490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424490 size=16 callers=0 calls=0
*/
void sub_424490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424490ULL || rel >= 0x4244a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004244a0 size=464 callers=1 calls=1
   calls: sub_417a30
   ref: Frame: %d, View: %d, SetTonemapExposure(fExposure: %f);
   ref: Frame: %d, View: %d, SetTonemapBackend(fGamma: %f, fDitherOffsetScale: %f);
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
   ref: Frame: %d, View: %d, SetTonemapFunction(eTonemap: %d, fMappingFactor: %f);
*/
void GPUPostEffect_cpp_d_PPFX_FN_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4244a0ULL || rel >= 0x424670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424670 size=128 callers=0 calls=1
   calls: sub_417a30
   ref: Frame: %d, View: %d, SetDeltaTime(fElapsedTimeInSeconds: %f);
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
*/
void GPUPostEffect_cpp_d_PPFX_FN_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424670ULL || rel >= 0x4246f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004246f0 size=80 callers=0 calls=0
*/
void sub_4246f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4246f0ULL || rel >= 0x424740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424740 size=368 callers=0 calls=1
   calls: sub_417a30
   ref: Frame: %d, View: %d, SetAutoExposureEnable(iEffectViewIndex: %d, bAutoExposureEnable: %s);
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
*/
void GPUPostEffect_cpp_d_PPFX_FN_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424740ULL || rel >= 0x4248b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004248b0 size=624 callers=1 calls=1
   calls: sub_417a30
   ref: Frame: %d, View: %d, SetAutoExposureAdjustment(iEffectViewIndex: %d, fAdaptationSensitivity: %f, fAd
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
*/
void GPUPostEffect_cpp_d_PPFX_FN_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4248b0ULL || rel >= 0x424b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424b20 size=368 callers=0 calls=1
   calls: sub_417a30
   ref: Frame: %d, View: %d, SetAutoExposureRange(iEffectViewIndex: %d, fMinExposure: %f, fMaxExposure: %f);
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
*/
void GPUPostEffect_cpp_d_PPFX_FN_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424b20ULL || rel >= 0x424c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424c90 size=336 callers=0 calls=1
   calls: sub_417a30
   ref: Frame: %d, View: %d, SetAutoExposureMiddleGray(iEffectViewIndex: %d, fMiddleGray: %f, fInfluencedByG
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
*/
void GPUPostEffect_cpp_d_PPFX_FN_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424c90ULL || rel >= 0x424de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424de0 size=352 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
   ref: Frame: %d, View: %d, SetAutoExposureMiddleGray(iEffectViewIndex: %d, eDelayMode: %d, fDelayTime: %f)
*/
void GPUPostEffect_cpp_d_PPFX_FN_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424de0ULL || rel >= 0x424f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00424f40 size=560 callers=1 calls=1
   calls: sub_417a30
   ref: Frame: %d, View: %d, SetAutoExposureMeteringArea(iEffectViewIndex: %d, fWidth: %f, fHeight: %f, fOff
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
*/
void GPUPostEffect_cpp_d_PPFX_FN_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x424f40ULL || rel >= 0x425170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425170 size=208 callers=0 calls=0
*/
void sub_425170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425170ULL || rel >= 0x425240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425240 size=416 callers=1 calls=1
   calls: sub_417a30
   ref: CPostEffect::SetMultisampleMode(): Cannot set multisample mode to PFXMSM_MULTISAMPLE.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::SetMultisampleMode(): Cannot set multisample mode to PFXMSM_SINGLESAMPLE.
   ref: CPostEffect::SetMultisampleMode(): Cannot be called between BeginPostEffectScene() and EndPostEffect
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425240ULL || rel >= 0x4253e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004253e0 size=48 callers=0 calls=0
*/
void sub_4253e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4253e0ULL || rel >= 0x425410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425410 size=416 callers=1 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::SetDepthFactorSource(): Initialize() with PFXINIT_DEPTHFACTORSOURCETEXTURE flag for use
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425410ULL || rel >= 0x4255b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004255b0 size=416 callers=6 calls=0
*/
void sub_4255b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4255b0ULL || rel >= 0x425750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425750 size=1280 callers=3 calls=14
   calls: GPUPostEffect_cpp_d_PPFX_ERROR_7, sub_417a30, sub_428220, sub_42a0f0, sub_4534f0, sub_4554c0, sub_4554f0, sub_45d350, sub_46db60, sub_470880, sub_4afae0, sub_4b5ae0
   ... +2 more
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: SetVignetteByOptics() requires proper SetDepthOfFieldParameters() and SetRenderScenePerspective() se
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425750ULL || rel >= 0x425c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425c50 size=384 callers=4 calls=1
   calls: sub_417a30
   ref: CPostEffect::BeginCommandList_SiGfx(): Failed pSiGfxDrawContext->BeginCommandList(m_pCurrentUsedSiGf
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::BeginCommandList_SiGfx(): m_pCurrentNVNcommandBuffer==NULL. Please call SetCurrentComma
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425c50ULL || rel >= 0x425dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00425dd0 size=672 callers=2 calls=4
   calls: GPUPostEffect_cpp_d_PPFX_ERROR_5, GPUPostEffect_cpp_d_PPFX_ERROR_6, sub_417a30, sub_4b9140
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
   ref: Frame: %d, View: %d, InitializeAutoExposure(iEffectViewIndex: %d, fSceneLuminance: %f, fCurrentAutoE
*/
void GPUPostEffect_cpp_d_PPFX_FN_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x425dd0ULL || rel >= 0x426070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426070 size=416 callers=2 calls=3
   calls: GPUPostEffect_cpp_d_PPFX_ERROR_5, GPUPostEffect_cpp_d_PPFX_ERROR_6, sub_4b9140
*/
void sub_426070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426070ULL || rel >= 0x426210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426210 size=1264 callers=4 calls=4
   calls: sub_417a30, sub_43dc00, sub_43dc70, sub_43fc30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::EndCommandList_SiGfx(): Failed pSiGfxDrawContext->BeginCommandList(pTempCommandList).
   ref: CPostEffect::ExecuteLazyDrawCommand(): Failed GPUSiGfxLazyDrawCommand::Execute().
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426210ULL || rel >= 0x426700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426700 size=848 callers=1 calls=10
   calls: GPUPostEffect_cpp_d_PPFX_ERROR_5, Unknown_Error_Code, sub_417a30, sub_426a50, sub_46db60, sub_49e3a0, sub_4a5ff0, sub_4a6070, sub_4b99a0, sub_4b9a60
   ref: CPostEffect::BeginPostEffectScene(): m_pRenderBuffer->SetRenderTarget() failed (0x%x: %s).
   ref: Frame: %d, View: %d, BeginPostEffectScene(uiClearFlags: %08x, pClearColor: %p, fClearDepth: %f, uiCl
   ref: CPostEffect::BeginPostEffectScene(): At least SetEffectSource() must be called if Initialize() was c
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX_FN_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426700ULL || rel >= 0x426a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00426a50 size=2960 callers=4 calls=5
   calls: sub_45eb90, sub_49ad30, sub_4a5d10, sub_4a6160, sub_4aa5a0
*/
void sub_426a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x426a50ULL || rel >= 0x4275e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004275e0 size=256 callers=1 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
   ref: Frame: %d, View: %d, SetRenderScenePerspective(fNear: %f, fFar: %f, fVerticalFov: %f);
*/
void GPUPostEffect_cpp_d_PPFX_FN_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4275e0ULL || rel >= 0x4276e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004276e0 size=128 callers=0 calls=0
*/
void sub_4276e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4276e0ULL || rel >= 0x427760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427760 size=128 callers=0 calls=0
*/
void sub_427760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427760ULL || rel >= 0x4277e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004277e0 size=224 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetVignetteByOpticsImageCircle(): Initialize() with PFXINIT_OPTICALVIGNETTING flag for 
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4277e0ULL || rel >= 0x4278c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004278c0 size=64 callers=0 calls=0
*/
void sub_4278c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4278c0ULL || rel >= 0x427900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427900 size=352 callers=0 calls=0
*/
void sub_427900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427900ULL || rel >= 0x427a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427a60 size=32 callers=0 calls=0
*/
void sub_427a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427a60ULL || rel >= 0x427a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427a80 size=48 callers=0 calls=0
*/
void sub_427a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427a80ULL || rel >= 0x427ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427ab0 size=16 callers=0 calls=0
*/
void sub_427ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427ab0ULL || rel >= 0x427ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427ac0 size=16 callers=0 calls=0
*/
void sub_427ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427ac0ULL || rel >= 0x427ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427ad0 size=320 callers=1 calls=1
   calls: sub_4622e0
*/
void sub_427ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427ad0ULL || rel >= 0x427c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00427c10 size=1056 callers=4 calls=9
   calls: GPUFMT_A8R8G8B8_SRGB, TFXString_2, TFXString_7, allocated_2, allocated_3, sub_4512d0, sub_49a9c0, sub_4b99a0, sub_6a54a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp
   ref: CRenderTexture::m_mapDeviceTextureRenderTexture[
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUPostEffect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x427c10ULL || rel >= 0x428030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428030 size=176 callers=6 calls=0
*/
void sub_428030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428030ULL || rel >= 0x4280e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004280e0 size=320 callers=1 calls=2
   calls: sub_4afa70, sub_4afa90
*/
void sub_4280e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4280e0ULL || rel >= 0x428220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428220 size=2720 callers=9 calls=11
   calls: sub_427ad0, sub_429f20, sub_42a590, sub_42b8a0, sub_42b9f0, sub_4622e0, sub_4aa260, sub_4afaa0, sub_4afc40, sub_4afd80, sub_4aff30
*/
void sub_428220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428220ULL || rel >= 0x428cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428cc0 size=512 callers=17 calls=1
   calls: sub_428220
*/
void sub_428cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428cc0ULL || rel >= 0x428ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428ec0 size=64 callers=0 calls=0
*/
void sub_428ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428ec0ULL || rel >= 0x428f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00428f00 size=704 callers=2 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::GetEffectiveFeedbackEnable(): The feedback result will be clamped because the feedback 
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x428f00ULL || rel >= 0x4291c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004291c0 size=672 callers=1 calls=7
   calls: sub_428220, sub_428cc0, sub_4552e0, sub_455350, sub_4553a0, sub_45e900, sub_4786d0
*/
void sub_4291c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4291c0ULL || rel >= 0x429460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429460 size=848 callers=1 calls=4
   calls: sub_428220, sub_428cc0, sub_4534d0, sub_4534e0
*/
void sub_429460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429460ULL || rel >= 0x4297b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004297b0 size=496 callers=1 calls=5
   calls: sub_40f8d0, sub_46db60, sub_488380, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4297b0ULL || rel >= 0x4299a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004299a0 size=688 callers=3 calls=2
   calls: sub_410400, sub_410f90
*/
void sub_4299a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4299a0ULL || rel >= 0x429c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429c50 size=336 callers=2 calls=1
   calls: MATRIXT44_MatrixMultiply
*/
void sub_429c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429c50ULL || rel >= 0x429da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429da0 size=32 callers=1 calls=0
*/
void sub_429da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429da0ULL || rel >= 0x429dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429dc0 size=160 callers=0 calls=1
   calls: sub_417a30
   ref: Frame: %d, View: %d, %f GetAutoExposureAdjustedApi(iEffectViewIndex: %d);
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
*/
void GPUPostEffect_cpp_d_PPFX_FN_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429dc0ULL || rel >= 0x429e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429e60 size=32 callers=1 calls=0
*/
void sub_429e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429e60ULL || rel >= 0x429e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429e80 size=80 callers=1 calls=0
*/
void sub_429e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429e80ULL || rel >= 0x429ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429ed0 size=80 callers=1 calls=0
*/
void sub_429ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429ed0ULL || rel >= 0x429f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00429f20 size=464 callers=1 calls=2
   calls: sub_4385e0, sub_4aa030
*/
void sub_429f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x429f20ULL || rel >= 0x42a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042a0f0 size=1184 callers=1 calls=0
*/
void sub_42a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42a0f0ULL || rel >= 0x42a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042a590 size=592 callers=2 calls=0
*/
void sub_42a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42a590ULL || rel >= 0x42a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042a7e0 size=4288 callers=1 calls=20
   calls: GPUClassUtil, sub_40f8d0, sub_411190, sub_417a30, sub_4291c0, sub_429460, sub_4299a0, sub_42a590, sub_45e8a0, sub_45e920, sub_45e930, sub_45e940
   ... +8 more
   ref: CPostEffect::UpdateParameters_Base(): If SetEffectSource() is called, depth texture cannot be used a
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::GetMaxMotionBlurCameraRecurrences():
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42a7e0ULL || rel >= 0x42b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042b8a0 size=336 callers=1 calls=0
*/
void sub_42b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42b8a0ULL || rel >= 0x42b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042b9f0 size=496 callers=1 calls=2
   calls: sub_4af020, sub_4afa90
*/
void sub_42b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42b9f0ULL || rel >= 0x42bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042bbe0 size=560 callers=1 calls=4
   calls: sub_46db60, sub_47dfa0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42bbe0ULL || rel >= 0x42be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042be10 size=1264 callers=2 calls=8
   calls: GPUTextureUtil_cpp_d_PPFX_ERROR, sub_40f8d0, sub_428cc0, sub_4622e0, sub_46db60, sub_484f50, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42be10ULL || rel >= 0x42c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042c300 size=2208 callers=1 calls=13
   calls: GPUTextureUtil_cpp_d_PPFX_ERROR, MATRIXT44_MatrixMultiply, Unknown_Error_Code, sub_40f660, sub_40f8d0, sub_417a30, sub_428cc0, sub_4622e0, sub_46db60, sub_48bbc0, sub_49da70, sub_4b99a0
   ... +1 more
   ref: CPostEffect::ApplyEffects_GenerateNormalAndLinearDepth(): pTexUtil->DrawRectGPU_GenerateNormalAndLin
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42c300ULL || rel >= 0x42cba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042cba0 size=240 callers=1 calls=3
   calls: GPUClassUtil_4, sub_49e3a0, sub_4a5ff0
*/
void sub_42cba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42cba0ULL || rel >= 0x42cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042cc90 size=2048 callers=3 calls=13
   calls: GPUClassUtil_27, sub_428cc0, sub_440c00, sub_46db60, sub_471410, sub_48b1e0, sub_48b280, sub_49cf50, sub_49da70, sub_49e3a0, sub_4a5ff0, sub_4b99a0
   ... +1 more
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42cc90ULL || rel >= 0x42d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042d490 size=2800 callers=1 calls=18
   calls: GPUClassUtil_23, sub_429c50, sub_42df80, sub_434570, sub_46db60, sub_48de50, sub_49da70, sub_49e3a0, sub_4b79a0, sub_4b89b0, sub_4b8a40, sub_4b8ae0
   ... +6 more
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42d490ULL || rel >= 0x42df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042df80 size=1504 callers=5 calls=4
   calls: MATRIXT44_MatrixMultiply, sub_4155f0, sub_429c50, sub_434570
*/
void sub_42df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42df80ULL || rel >= 0x42e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042e560 size=2832 callers=2 calls=15
   calls: GPUClassUtil_27, GPUTextureUtil_cpp_d_PPFX_ERROR_10, sub_428220, sub_428cc0, sub_46db60, sub_4786d0, sub_48b6e0, sub_49da70, sub_4b79a0, sub_4b89b0, sub_4b8a40, sub_4b8b50
   ... +3 more
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42e560ULL || rel >= 0x42f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042f070 size=688 callers=2 calls=9
   calls: GPUClassUtil_6, GPUDepthOfField_cpp_d_PPFX_ERROR_4, Unknown_Error_Code, sub_417a30, sub_46db60, sub_470610, sub_4aeed0, sub_4b99a0, sub_4b9a60
   ref: CPostEffect::ApplyEffects_DepthOfField(): m_pDepthOfField->ApplyDepthOfField() failed (0x%x: %s).
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42f070ULL || rel >= 0x42f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042f320 size=544 callers=2 calls=3
   calls: sub_410070, sub_410f90, sub_411b00
*/
void sub_42f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42f320ULL || rel >= 0x42f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0042f540 size=3344 callers=6 calls=7
   calls: GPUTextureUtil_cpp_d_PPFX_ERROR_4, GPUTextureUtil_cpp_d_PPFX_WARNING, sub_417a30, sub_46db60, sub_482380, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::GetEffectiveTonemapBackendColorSpaceMode(): PFXTBCSM_SCRGB is available only with PFXEO
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x42f540ULL || rel >= 0x430250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430250 size=1120 callers=4 calls=1
   calls: GPUPostEffect_cpp_d_PPFX_ERROR_10
*/
void sub_430250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430250ULL || rel >= 0x4306b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004306b0 size=864 callers=1 calls=1
   calls: sub_430250
*/
void sub_4306b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4306b0ULL || rel >= 0x430a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00430a10 size=4400 callers=3 calls=24
   calls: GPUClassUtil_24, GPUClassUtil_7, GPUTextureUtil_cpp_d_PPFX_WARNING, MATRIXT44_MatrixMultiply, sub_4155f0, sub_417a30, sub_42df80, sub_42f320, sub_4306b0, sub_46db60, sub_47dfa0, sub_47e000
   ... +12 more
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::GetEffectiveTonemapBackendColorSpaceMode(): PFXTBCSM_SCRGB is available only with PFXEO
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x430a10ULL || rel >= 0x431b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00431b40 size=1392 callers=1 calls=7
   calls: MATRIXT44_MatrixMultiply, sub_46db60, sub_46ec80, sub_480740, sub_481000, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x431b40ULL || rel >= 0x4320b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004320b0 size=1216 callers=1 calls=6
   calls: sub_40f8d0, sub_4622e0, sub_46db60, sub_48cc30, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4320b0ULL || rel >= 0x432570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432570 size=1840 callers=1 calls=7
   calls: GPUTextureUtil_cpp_d_PPFX_ERROR, sub_428cc0, sub_46db60, sub_47dfa0, sub_48fb40, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432570ULL || rel >= 0x432ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00432ca0 size=1488 callers=2 calls=7
   calls: sub_46db60, sub_497b20, sub_499250, sub_49e3a0, sub_4a5ff0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x432ca0ULL || rel >= 0x433270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433270 size=480 callers=1 calls=1
   calls: GPUClassUtil_10
*/
void sub_433270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433270ULL || rel >= 0x433450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433450 size=2224 callers=2 calls=15
   calls: GPUClassUtil_3, GPUTextureUtil_cpp_d_PPFX_ERROR, sub_40f8d0, sub_417a30, sub_428cc0, sub_4622e0, sub_46db60, sub_482f10, sub_4845c0, sub_484f50, sub_485610, sub_49e3a0
   ... +3 more
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::GetMaxMotionBlurCameraRecurrences():
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433450ULL || rel >= 0x433d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00433d00 size=768 callers=1 calls=7
   calls: GPUClassUtil_23, GPUPostEffect_cpp_d_PPFX_ERROR_11, GPUPostEffect_cpp_d_PPFX_WARNING_13, sub_426a50, sub_42df80, sub_49ad30, sub_49da70
*/
void sub_433d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x433d00ULL || rel >= 0x434000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434000 size=1392 callers=1 calls=10
   calls: GPUClassUtil_23, GPUPostEffect_cpp_d_PPFX_ERROR_11, sub_426a50, sub_42df80, sub_46db60, sub_4821a0, sub_49ad30, sub_49da70, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434000ULL || rel >= 0x434570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00434570 size=384 callers=8 calls=2
   calls: sub_410f90, sub_411b00
*/
void sub_434570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x434570ULL || rel >= 0x4346f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004346f0 size=240 callers=1 calls=4
   calls: GPUPostEffect_cpp_d_PPFX_ERROR_13, GPUPostEffect_cpp_d_PPFX_ERROR_6, Unknown_Error_Code, sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
   ref: CPostEffect::EndPostEffectScene(): EndPostEffectScene_Process() failed (0x%x: %s).
   ref: Frame: %d, View: %d, EndPostEffectScene(uiEffectFlags: %08x, nManualMultisamples: %d);
*/
void GPUPostEffect_cpp_d_PPFX_FN_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4346f0ULL || rel >= 0x4347e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004347e0 size=2464 callers=1 calls=12
   calls: GPUPostEffect_cpp_d_PPFX_ERROR_14, GPUPostEffect_cpp_d_PPFX_WARNING_11, GPUPostEffect_cpp_d_PPFX_WARNING_14, Unknown_Error_Code, sub_417a30, sub_434570, sub_438510, sub_46db60, sub_498ab0, sub_49e3a0, sub_4b99a0, sub_4b9a60
   ref: CPostEffect::EndPostEffectScene_Process(): EndPostEffectScene() called without BeginPostEffectScene(
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::EndPostEffectScene_Process(): EndPostEffectScene_InternalProcess() failed (0x%x: %s).
   ref: ../src/GPU\GPUClassUtil.h
   ref: CPostEffect::EndPostEffectScene_Process(): EndPostEffectScene_PostProcess() failed (0x%x: %s).
   ref: CPostEffect::EndPostEffectScene_Process(): EndPostEffectScene_PreProcess() failed (0x%x: %s).
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4347e0ULL || rel >= 0x435180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435180 size=3408 callers=1 calls=13
   calls: GPUClassUtil_25, Unknown_Error_Code, sub_417a30, sub_440d50, sub_46db60, sub_470610, sub_471410, sub_49e290, sub_49e3a0, sub_4a5ff0, sub_4b72c0, sub_4b99a0
   ... +1 more
   ref: CPostEffectEndPostEffectScene_PreProcess: CRenderTexture::ResolveCurrentDepthStencilTexture() failed
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435180ULL || rel >= 0x435ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00435ed0 size=9792 callers=2 calls=65
   calls: GPUClassUtil_10, GPUClassUtil_11, GPUClassUtil_2, GPUClassUtil_22, GPUClassUtil_23, GPUClassUtil_3, GPUClassUtil_4, GPUClassUtil_5, GPUClassUtil_6, GPUClassUtil_8, GPUClassUtil_9, GPUPostEffect_cpp_d_PPFX_ERROR_11
   ... +53 more
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::EndPostEffectScene_InternalProcess(): pTexUtil->HeatShimmerParticles() failed (0x%x: %s
   ref: CPostEffect::GetEffectiveFeedbackEnable(): The feedback result will be clamped because the feedback 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::EndPostEffectScene_InternalProcess(): m_pRenderGlare->GenerateGlare() failed (0x%x: %s)
   ref: CPostEffect::EndPostEffectScene_InternalProcess(): m_pRenderGlare->TonemapToSurface() failed (0x%x: 
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x435ed0ULL || rel >= 0x438510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00438510 size=208 callers=1 calls=2
   calls: sub_43fc30, sub_49e3a0
*/
void sub_438510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x438510ULL || rel >= 0x4385e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004385e0 size=240 callers=9 calls=0
*/
void sub_4385e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4385e0ULL || rel >= 0x4386d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004386d0 size=3936 callers=1 calls=11
   calls: GPURenderTextureArray_cpp_d_PPFX_ERROR_2, sub_417a30, sub_418e20, sub_418e30, sub_418e40, sub_418e50, sub_46db60, sub_4a6a50, sub_4b35a0, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: Debug code: CPostEffect::DrawDebugBuffers().
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4386d0ULL || rel >= 0x439630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439630 size=432 callers=0 calls=4
   calls: GPUPostEffect_cpp_d_PPFX_ERROR_3, GPUPostEffect_cpp_d_PPFX_FN_12, GPUPostEffect_cpp_d_PPFX_FN_15, sub_417a30
   ref: Frame: %d, View: %d, ApplyEffects(uiEffectFlags: %08x);
   ref: CPostEffect::ApplyEffects(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene(
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: 
   ref: CPostEffect::ApplyEffects(): At least SetEffectSource() must be called if initialized with PFXINIT_R
*/
void GPUPostEffect_cpp_d_PPFX_FN_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439630ULL || rel >= 0x4397e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004397e0 size=512 callers=1 calls=3
   calls: sub_446e60, sub_4b99a0, sub_6a54a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4397e0ULL || rel >= 0x4399e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004399e0 size=560 callers=1 calls=3
   calls: sub_417a30, sub_4b9a60, sub_6f9720
   ref: CPostEffect::UnregisterDeviceSurface(): The resource is currently bound for SetTonemapDestination().
   ref: CPostEffect::UnregisterDeviceSurface(): Cannot be called between BeginPostEffectScene() and EndPostE
   ref: CPostEffect::UnregisterDeviceSurface(): Unable to replace the resource.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4399e0ULL || rel >= 0x439c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00439c10 size=1232 callers=1 calls=3
   calls: sub_417a30, sub_4b9a60, sub_6f9720
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::UnregisterDeviceTexture(): The resource is currently bound for SetDepthOfFieldDepthRema
   ref: CPostEffect::UnregisterDeviceTexture(): The resource is currently bound for SetDepthFactorSource().
   ref: CPostEffect::UnregisterDeviceTexture(): Specified resources gpuTexture and gpuNewTexture are the sam
   ref: CPostEffect::UnregisterDeviceTexture(): Cannot be called between BeginPostEffectScene() and EndPostE
   ref: CPostEffect::UnregisterDeviceTexture(): The resource is currently bound for SetEffectSource().
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::UnregisterDeviceTexture(): The resource is currently bound for SetGlareModulatorSource(
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x439c10ULL || rel >= 0x43a0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a0e0 size=32 callers=0 calls=0
*/
void sub_43a0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a0e0ULL || rel >= 0x43a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a100 size=384 callers=0 calls=2
   calls: GPUPostEffect, sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetGlareModulatorSource(): Initialize() with PFXINIT_GLAREMODULATOR flag for glare modu
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::SetGlareModulatorSource(): Argument eGlareModulatorSource is invalid.
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a100ULL || rel >= 0x43a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a280 size=384 callers=0 calls=2
   calls: GPUPostEffect, sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: 
   ref: CPostEffect::SetEffectMaskColorSource(): Argument eEffectMaskColorSource is invalid.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::SetEffectMaskColorSource(): Initialize() with PFXINIT_EFFECTMASK flag for effect mask.
*/
void GPUPostEffect_cpp_d_PPFX_WARNING_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a280ULL || rel >= 0x43a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a400 size=96 callers=0 calls=2
   calls: MATRIXT44_MatrixMultiply, sub_4102a0
*/
void sub_43a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a400ULL || rel >= 0x43a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a460 size=208 callers=0 calls=1
   calls: MATRIXT44_MatrixMultiply
*/
void sub_43a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a460ULL || rel >= 0x43a530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a530 size=128 callers=0 calls=1
   calls: MATRIXT44_MatrixMultiply
*/
void sub_43a530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a530ULL || rel >= 0x43a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a5b0 size=96 callers=0 calls=2
   calls: MATRIXT44_MatrixMultiply, sub_40fb30
*/
void sub_43a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a5b0ULL || rel >= 0x43a610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a610 size=96 callers=0 calls=2
   calls: MATRIXT44_MatrixMultiply, sub_4102a0
*/
void sub_43a610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a610ULL || rel >= 0x43a670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a670 size=112 callers=0 calls=2
   calls: MATRIXT44_MatrixMultiply, sub_410130
*/
void sub_43a670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a670ULL || rel >= 0x43a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a6e0 size=128 callers=0 calls=1
   calls: MATRIXT44_MatrixMultiply
*/
void sub_43a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a6e0ULL || rel >= 0x43a760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a760 size=128 callers=0 calls=1
   calls: MATRIXT44_MatrixMultiply
*/
void sub_43a760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a760ULL || rel >= 0x43a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a7e0 size=96 callers=0 calls=2
   calls: MATRIXT44_MatrixMultiply, sub_410200
*/
void sub_43a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a7e0ULL || rel >= 0x43a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a840 size=304 callers=0 calls=2
   calls: MATRIXT44_MatrixMultiply, sub_410130
*/
void sub_43a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a840ULL || rel >= 0x43a970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043a970 size=928 callers=2 calls=4
   calls: MATRIXT44_MatrixMultiply, sub_411b00, sub_4155f0, sub_43c690
*/
void sub_43a970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43a970ULL || rel >= 0x43ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043ad10 size=544 callers=0 calls=5
   calls: MATRIXT44_MatrixMultiply, sub_410f90, sub_4299a0, sub_43a970, sub_43c690
*/
void sub_43ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43ad10ULL || rel >= 0x43af30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043af30 size=544 callers=0 calls=5
   calls: MATRIXT44_MatrixMultiply, sub_410f90, sub_4299a0, sub_43a970, sub_43c690
*/
void sub_43af30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43af30ULL || rel >= 0x43b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b150 size=320 callers=0 calls=2
   calls: GPUPostEffect, GPUPostEffect_cpp_d_PPFX_ERROR_4
*/
void sub_43b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b150ULL || rel >= 0x43b290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b290 size=224 callers=0 calls=3
   calls: sub_417a30, sub_418e20, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
   ref: CPostEffect::DefaultRegisterTextureHandleCallback_Nvn : reserved numIndices is empty.
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b290ULL || rel >= 0x43b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b370 size=128 callers=0 calls=2
   calls: sub_418e20, sub_4b99a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b370ULL || rel >= 0x43b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b3f0 size=272 callers=0 calls=3
   calls: sub_417a30, sub_418e20, sub_4b9a60
   ref: CPostEffect::DefaultRegisterSamplerHandleCallback_Nvn : reserved numIndices is empty.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b3f0ULL || rel >= 0x43b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b500 size=128 callers=0 calls=2
   calls: sub_418e20, sub_4b99a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b500ULL || rel >= 0x43b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b580 size=16 callers=2 calls=0
*/
void sub_43b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b580ULL || rel >= 0x43b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b590 size=912 callers=4 calls=3
   calls: sub_4b99a0, sub_4cbf40, sub_6a54a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUPostEffect_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b590ULL || rel >= 0x43b920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b920 size=144 callers=0 calls=1
   calls: sub_417a30
   ref: CPostEffect::SetResourceMemoryAllocate_Nvn() : (iMemoryPoolStorageBufferSizeInBytes < 0)&&(pMemoryPo
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: 
*/
void GPUPostEffect_cpp_d_PPFX_ERROR_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b920ULL || rel >= 0x43b9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b9b0 size=16 callers=2 calls=0
*/
void sub_43b9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b9b0ULL || rel >= 0x43b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b9c0 size=16 callers=1 calls=0
*/
void sub_43b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b9c0ULL || rel >= 0x43b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043b9d0 size=384 callers=0 calls=4
   calls: GPUInterfaceDevice_2, GPUPostEffect_cpp_d_PPFX_ERROR_15, sub_4b9a60, sub_6f9720
*/
void sub_43b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43b9d0ULL || rel >= 0x43bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bb50 size=656 callers=0 calls=7
   calls: GPUPostEffect_cpp_d_PPFX_WARNING_16, sub_44def0, sub_46db60, sub_4b99a0, sub_4b9a60, sub_4cbf40, sub_6f9720
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUPostEffect_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bb50ULL || rel >= 0x43bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bde0 size=224 callers=0 calls=2
   calls: GPUMemoryAllocator, GPUMemoryAllocator_2
*/
void sub_43bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bde0ULL || rel >= 0x43bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bec0 size=208 callers=0 calls=2
   calls: GPUPostEffect, GPUPostEffect_2
*/
void sub_43bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bec0ULL || rel >= 0x43bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043bf90 size=144 callers=0 calls=1
   calls: GPUPostEffect_2
*/
void sub_43bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43bf90ULL || rel >= 0x43c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c020 size=112 callers=0 calls=1
   calls: GPUPostEffect_2
*/
void sub_43c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c020ULL || rel >= 0x43c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c090 size=112 callers=0 calls=1
   calls: GPUPostEffect_2
*/
void sub_43c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c090ULL || rel >= 0x43c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c100 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_43c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c100ULL || rel >= 0x43c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c140 size=32 callers=0 calls=0
*/
void sub_43c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c140ULL || rel >= 0x43c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c160 size=128 callers=0 calls=0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c160ULL || rel >= 0x43c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c1e0 size=16 callers=0 calls=0
*/
void sub_43c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c1e0ULL || rel >= 0x43c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c1f0 size=16 callers=0 calls=0
*/
void sub_43c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c1f0ULL || rel >= 0x43c200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c200 size=16 callers=0 calls=0
*/
void sub_43c200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c200ULL || rel >= 0x43c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c210 size=32 callers=0 calls=0
*/
void sub_43c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c210ULL || rel >= 0x43c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c230 size=160 callers=0 calls=1
   calls: sub_4b99a0
*/
void sub_43c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c230ULL || rel >= 0x43c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c2d0 size=32 callers=0 calls=0
*/
void sub_43c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c2d0ULL || rel >= 0x43c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c2f0 size=16 callers=0 calls=0
*/
void sub_43c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c2f0ULL || rel >= 0x43c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c300 size=16 callers=0 calls=0
*/
void sub_43c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c300ULL || rel >= 0x43c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c310 size=16 callers=0 calls=0
*/
void sub_43c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c310ULL || rel >= 0x43c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c320 size=16 callers=0 calls=0
*/
void sub_43c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c320ULL || rel >= 0x43c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c330 size=16 callers=0 calls=0
*/
void sub_43c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c330ULL || rel >= 0x43c340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c340 size=16 callers=0 calls=0
*/
void sub_43c340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c340ULL || rel >= 0x43c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c350 size=16 callers=0 calls=0
*/
void sub_43c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c350ULL || rel >= 0x43c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c360 size=16 callers=0 calls=0
*/
void sub_43c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c360ULL || rel >= 0x43c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c370 size=16 callers=0 calls=0
*/
void sub_43c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c370ULL || rel >= 0x43c380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c380 size=16 callers=0 calls=0
*/
void sub_43c380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c380ULL || rel >= 0x43c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c390 size=16 callers=0 calls=0
*/
void sub_43c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c390ULL || rel >= 0x43c3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c3a0 size=80 callers=4 calls=1
   calls: sub_43c3a0
*/
void sub_43c3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c3a0ULL || rel >= 0x43c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c3f0 size=80 callers=4 calls=1
   calls: sub_43c3f0
*/
void sub_43c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c3f0ULL || rel >= 0x43c440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c440 size=80 callers=5 calls=1
   calls: sub_43c440
*/
void sub_43c440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c440ULL || rel >= 0x43c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c490 size=80 callers=5 calls=1
   calls: sub_43c490
*/
void sub_43c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c490ULL || rel >= 0x43c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c4e0 size=80 callers=4 calls=1
   calls: sub_43c4e0
*/
void sub_43c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c4e0ULL || rel >= 0x43c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c530 size=352 callers=2 calls=1
   calls: sub_4b99a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c530ULL || rel >= 0x43c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043c690 size=1104 callers=3 calls=5
   calls: ppfxTypes, sub_410070, sub_411b00, sub_4155f0, sub_43cd40
*/
void sub_43c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43c690ULL || rel >= 0x43cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cae0 size=608 callers=1 calls=2
   calls: sub_410f90, sub_411b00
   ref: i >= 0 && i < ELMS
   ref: ../include\PPFX/ppfxTypes.h
*/
void ppfxTypes(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cae0ULL || rel >= 0x43cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043cd40 size=1520 callers=2 calls=0
*/
void sub_43cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43cd40ULL || rel >= 0x43d330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043d330 size=2256 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_43d330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43d330ULL || rel >= 0x43dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043dc00 size=112 callers=3 calls=0
*/
void sub_43dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43dc00ULL || rel >= 0x43dc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043dc70 size=144 callers=3 calls=0
*/
void sub_43dc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43dc70ULL || rel >= 0x43dd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043dd00 size=1136 callers=1 calls=1
   calls: sub_445dc0
*/
void sub_43dd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43dd00ULL || rel >= 0x43e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e170 size=320 callers=1 calls=4
   calls: sub_417a30, sub_43e2b0, sub_43e410, sub_4b9a60
   ref: IGPUDevice::~IGPUDevice(): uiGPUAllocatedMemorySizeInBytes: %d
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e170ULL || rel >= 0x43e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e2b0 size=352 callers=3 calls=0
*/
void sub_43e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e2b0ULL || rel >= 0x43e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e410 size=448 callers=1 calls=1
   calls: GPUInterfaceDevice_2
*/
void sub_43e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e410ULL || rel >= 0x43e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e5d0 size=48 callers=0 calls=1
   calls: GPUInterfaceDevice_cpp_d_PPFX
*/
void sub_43e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e5d0ULL || rel >= 0x43e600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e600 size=32 callers=3 calls=0
*/
void sub_43e600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e600ULL || rel >= 0x43e620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e620 size=32 callers=5 calls=0
*/
void sub_43e620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e620ULL || rel >= 0x43e640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e640 size=320 callers=1 calls=0
*/
void sub_43e640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e640ULL || rel >= 0x43e780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043e780 size=2304 callers=3 calls=6
   calls: SiCore_Array_6, sub_43e640, sub_4431c0, sub_4b99a0, sub_4bc640, sub_4cbf40
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUInterfaceDevice(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43e780ULL || rel >= 0x43f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043f080 size=384 callers=3 calls=1
   calls: sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp
*/
void GPUInterfaceDevice_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43f080ULL || rel >= 0x43f200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043f200 size=1136 callers=2 calls=6
   calls: GPUFMT_A8R8G8B8_SRGB, GPUInterfaceSurface, GPUUSAGE_RENDERTARGET, Unknown_Error_Code, sub_417a30, sub_446e40
   ref: IGPUDevice::InitializeDeviceBuffers(): m_pGPUSurface_BackBuffer = IGPUSurface::CreateSurface_SiGfxDe
   ref: %s %s:
   ref: IGPUDevice::InitializeDeviceBuffers(): SetDepthStencilSurface() failed (0x%x: %s).
   ref: IGPUDevice::InitializeDeviceBuffers(): GetSiGfxDeviceBackBuffer() failed (0x%x: %s).
   ref: IGPUDevice::InitializeDeviceBuffers(): SetRenderTarget() failed (0x%x: %s).
   ref: PPFX: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43f200ULL || rel >= 0x43f670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043f670 size=720 callers=1 calls=0
*/
void sub_43f670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43f670ULL || rel >= 0x43f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043f940 size=336 callers=16 calls=1
   calls: sub_417a30
   ref: IGPUDevice::InitializeDevice_CreateDeviceStates_SamplerStateMode(): pSiGfxDevice->CreateSampler() fa
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43f940ULL || rel >= 0x43fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fa90 size=48 callers=0 calls=0
*/
void sub_43fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fa90ULL || rel >= 0x43fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fac0 size=320 callers=1 calls=2
   calls: GPUInterfaceDevice_cpp_d_PPFX_ERROR_2, sub_43f670
*/
void sub_43fac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fac0ULL || rel >= 0x43fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fc00 size=48 callers=1 calls=0
*/
void sub_43fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fc00ULL || rel >= 0x43fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fc30 size=96 callers=3 calls=0
*/
void sub_43fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fc30ULL || rel >= 0x43fc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fc90 size=16 callers=2 calls=0
*/
void sub_43fc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fc90ULL || rel >= 0x43fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fca0 size=32 callers=1 calls=0
*/
void sub_43fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fca0ULL || rel >= 0x43fcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fcc0 size=32 callers=1 calls=0
*/
void sub_43fcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fcc0ULL || rel >= 0x43fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fce0 size=32 callers=1 calls=0
*/
void sub_43fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fce0ULL || rel >= 0x43fd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fd00 size=32 callers=1 calls=0
*/
void sub_43fd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fd00ULL || rel >= 0x43fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fd20 size=176 callers=1 calls=0
*/
void sub_43fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fd20ULL || rel >= 0x43fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0043fdd0 size=720 callers=1 calls=4
   calls: GPUInterfaceDevice_cpp_d_PPFX_ERROR, Unknown_Error_Code, sub_417a30, sub_43fac0
   ref: IGPUDevice::InitializeDevice(): InitializeDeviceBuffers() failed (0x%x: %s).
   ref: ==== IGPUDevice::InitializeDevice() ====
   ref: IGPUDevice::InitializeDevice(): InitializeDeviceBuffers() succeeded.
   ref: ==== IGPUDevice::InitializeDevice() succeeded. ====
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x43fdd0ULL || rel >= 0x4400a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004400a0 size=32 callers=0 calls=0
*/
void sub_4400a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4400a0ULL || rel >= 0x4400c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004400c0 size=16 callers=0 calls=0
*/
void sub_4400c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4400c0ULL || rel >= 0x4400d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004400d0 size=96 callers=0 calls=3
   calls: GPUInterfaceDevice_2, GPUInterfaceDevice_cpp_d_PPFX_ERROR, sub_43e2b0
*/
void sub_4400d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4400d0ULL || rel >= 0x440130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440130 size=256 callers=0 calls=0
*/
void sub_440130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440130ULL || rel >= 0x440230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440230 size=128 callers=0 calls=0
*/
void sub_440230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440230ULL || rel >= 0x4402b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004402b0 size=112 callers=0 calls=0
*/
void sub_4402b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4402b0ULL || rel >= 0x440320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440320 size=96 callers=0 calls=0
*/
void sub_440320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440320ULL || rel >= 0x440380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440380 size=80 callers=0 calls=0
*/
void sub_440380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440380ULL || rel >= 0x4403d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004403d0 size=80 callers=0 calls=0
*/
void sub_4403d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4403d0ULL || rel >= 0x440420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440420 size=64 callers=0 calls=0
*/
void sub_440420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440420ULL || rel >= 0x440460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440460 size=96 callers=0 calls=0
*/
void sub_440460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440460ULL || rel >= 0x4404c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004404c0 size=96 callers=0 calls=0
*/
void sub_4404c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4404c0ULL || rel >= 0x440520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440520 size=128 callers=0 calls=0
*/
void sub_440520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440520ULL || rel >= 0x4405a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004405a0 size=160 callers=0 calls=0
*/
void sub_4405a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4405a0ULL || rel >= 0x440640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440640 size=176 callers=0 calls=0
*/
void sub_440640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440640ULL || rel >= 0x4406f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004406f0 size=160 callers=0 calls=0
*/
void sub_4406f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4406f0ULL || rel >= 0x440790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440790 size=656 callers=0 calls=0
*/
void sub_440790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440790ULL || rel >= 0x440a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440a20 size=112 callers=0 calls=0
*/
void sub_440a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440a20ULL || rel >= 0x440a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440a90 size=16 callers=0 calls=0
*/
void sub_440a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440a90ULL || rel >= 0x440aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440aa0 size=160 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX WARNING: 
   ref: IGPUDevice::ApplyRenderState_DepthTestEnable() is not supported.
*/
void GPUInterfaceDevice_cpp_d_PPFX_WARNING(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440aa0ULL || rel >= 0x440b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440b40 size=16 callers=0 calls=0
*/
void sub_440b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440b40ULL || rel >= 0x440b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440b50 size=160 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX WARNING: 
   ref: IGPUDevice::ApplyRenderState_DepthFunc() is not supported.
*/
void GPUInterfaceDevice_cpp_d_PPFX_WARNING_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440b50ULL || rel >= 0x440bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440bf0 size=16 callers=0 calls=0
*/
void sub_440bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440bf0ULL || rel >= 0x440c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440c00 size=16 callers=4 calls=0
*/
void sub_440c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440c00ULL || rel >= 0x440c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440c10 size=16 callers=0 calls=0
*/
void sub_440c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440c10ULL || rel >= 0x440c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440c20 size=16 callers=0 calls=0
*/
void sub_440c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440c20ULL || rel >= 0x440c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440c30 size=16 callers=0 calls=0
*/
void sub_440c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440c30ULL || rel >= 0x440c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440c40 size=16 callers=5 calls=0
*/
void sub_440c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440c40ULL || rel >= 0x440c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440c50 size=16 callers=0 calls=0
*/
void sub_440c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440c50ULL || rel >= 0x440c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440c60 size=16 callers=2 calls=0
*/
void sub_440c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440c60ULL || rel >= 0x440c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440c70 size=16 callers=0 calls=0
*/
void sub_440c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440c70ULL || rel >= 0x440c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440c80 size=16 callers=1 calls=0
*/
void sub_440c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440c80ULL || rel >= 0x440c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440c90 size=16 callers=0 calls=0
*/
void sub_440c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440c90ULL || rel >= 0x440ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440ca0 size=16 callers=0 calls=0
*/
void sub_440ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440ca0ULL || rel >= 0x440cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440cb0 size=16 callers=1 calls=0
*/
void sub_440cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440cb0ULL || rel >= 0x440cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440cc0 size=16 callers=0 calls=0
*/
void sub_440cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440cc0ULL || rel >= 0x440cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440cd0 size=16 callers=0 calls=0
*/
void sub_440cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440cd0ULL || rel >= 0x440ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440ce0 size=16 callers=0 calls=0
*/
void sub_440ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440ce0ULL || rel >= 0x440cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440cf0 size=16 callers=3 calls=0
*/
void sub_440cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440cf0ULL || rel >= 0x440d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440d00 size=16 callers=0 calls=0
*/
void sub_440d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440d00ULL || rel >= 0x440d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440d10 size=16 callers=0 calls=0
*/
void sub_440d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440d10ULL || rel >= 0x440d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440d20 size=16 callers=0 calls=0
*/
void sub_440d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440d20ULL || rel >= 0x440d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440d30 size=16 callers=0 calls=0
*/
void sub_440d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440d30ULL || rel >= 0x440d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440d40 size=16 callers=0 calls=0
*/
void sub_440d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440d40ULL || rel >= 0x440d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440d50 size=16 callers=8 calls=0
*/
void sub_440d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440d50ULL || rel >= 0x440d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440d60 size=32 callers=0 calls=0
*/
void sub_440d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440d60ULL || rel >= 0x440d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440d80 size=16 callers=0 calls=0
*/
void sub_440d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440d80ULL || rel >= 0x440d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440d90 size=320 callers=0 calls=0
*/
void sub_440d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440d90ULL || rel >= 0x440ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440ed0 size=48 callers=0 calls=0
*/
void sub_440ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440ed0ULL || rel >= 0x440f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440f00 size=16 callers=0 calls=0
*/
void sub_440f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440f00ULL || rel >= 0x440f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440f10 size=48 callers=0 calls=0
*/
void sub_440f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440f10ULL || rel >= 0x440f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440f40 size=32 callers=0 calls=0
*/
void sub_440f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440f40ULL || rel >= 0x440f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440f60 size=64 callers=0 calls=0
*/
void sub_440f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440f60ULL || rel >= 0x440fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440fa0 size=48 callers=0 calls=0
*/
void sub_440fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440fa0ULL || rel >= 0x440fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440fd0 size=32 callers=0 calls=0
*/
void sub_440fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440fd0ULL || rel >= 0x440ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00440ff0 size=48 callers=0 calls=0
*/
void sub_440ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x440ff0ULL || rel >= 0x441020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441020 size=32 callers=0 calls=0
*/
void sub_441020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441020ULL || rel >= 0x441040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441040 size=16 callers=0 calls=0
*/
void sub_441040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441040ULL || rel >= 0x441050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441050 size=400 callers=0 calls=2
   calls: GPUInterfaceDevice, sub_417a30
   ref: IGPUDevice::DrawVertices(): SetupSiGfxDrawContext() failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_ERROR_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441050ULL || rel >= 0x4411e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004411e0 size=496 callers=0 calls=2
   calls: GPUInterfaceDevice, sub_417a30
   ref: IGPUDevice::DrawIndices(): Index buffer is not set yet.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: IGPUDevice::DrawIndices(): SetupSiGfxDrawContext() failed.
*/
void GPUInterfaceDevice_cpp_d_PPFX_ERROR_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4411e0ULL || rel >= 0x4413d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004413d0 size=512 callers=0 calls=2
   calls: GPUInterfaceDevice, sub_417a30
   ref: IGPUDevice::DrawIndicesInstanced(): Index buffer is not set yet.
   ref: IGPUDevice::DrawIndicesInstanced(): SetupSiGfxDrawContext() failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_ERROR_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4413d0ULL || rel >= 0x4415d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004415d0 size=480 callers=0 calls=5
   calls: GPUFMT_A8R8G8B8_SRGB, GPUUSAGE_RENDERTARGET, SiCore_String_3, sub_417a30, sub_446e40
   ref: ==== IGPUDevice::CreateTexture() ====
   ref: IGPUDevice::CreateTexture(): IGPUTexture::CreateTexture() failed.
   ref: %s %s:
   ref: PPFX: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4415d0ULL || rel >= 0x4417b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004417b0 size=464 callers=0 calls=4
   calls: GPUFMT_A8R8G8B8_SRGB, GPUUSAGE_RENDERTARGET, sub_417a30, sub_4486a0
   ref: IGPUDevice::CreateVolumeTexture(): IGPUTexture::CreateVolumeTexture() failed.
   ref: ==== IGPUDevice::CreateVolumeTexture() ====
   ref: %s %s:
   ref: PPFX: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4417b0ULL || rel >= 0x441980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441980 size=464 callers=0 calls=5
   calls: GPUFMT_A8R8G8B8_SRGB, GPUInterfaceTexture_cpp_d_PPFX_WARNING_2, GPUUSAGE_RENDERTARGET, sub_417a30, sub_446e40
   ref: ==== IGPUDevice::CreateTexture() ====
   ref: %s %s:
   ref: IGPUDevice::CreateTexture(): IGPUTexture::CreateTexture_GPUDEVICETEXTURE() failed.
   ref: PPFX: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441980ULL || rel >= 0x441b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441b50 size=464 callers=0 calls=4
   calls: GPUFMT_A8R8G8B8_SRGB, GPUInterfaceTexture_cpp_d_PPFX_WARNING_3, GPUUSAGE_RENDERTARGET, sub_417a30
   ref: ==== IGPUDevice::CreateVolumeTexture() ====
   ref: IGPUDevice::CreateVolumeTexture(): IGPUTexture::CreateVolumeTexture_GPUDEVICETEXTURE() failed.
   ref: %s %s:
   ref: PPFX: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441b50ULL || rel >= 0x441d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441d20 size=560 callers=0 calls=5
   calls: GPUFMT_A8R8G8B8_SRGB, GPUUSAGE_RENDERTARGET, SiCore_String, sub_417a30, sub_446e40
   ref: %s %s:
   ref: ==== IGPUDevice::CreateRenderTarget() ====
   ref: PPFX: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441d20ULL || rel >= 0x441f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00441f50 size=496 callers=0 calls=5
   calls: GPUFMT_A8R8G8B8_SRGB, GPUUSAGE_RENDERTARGET, SiCore_String, sub_417a30, sub_446e40
   ref: %s %s:
   ref: IGPUDevice::CreateDepthStencilSurface(): IGPUSurface::CreateSurface() failed.
   ref: ==== IGPUDevice::CreateDepthStencilSurface() ====
   ref: PPFX: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x441f50ULL || rel >= 0x442140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442140 size=480 callers=0 calls=5
   calls: GPUFMT_A8R8G8B8_SRGB, GPUUSAGE_RENDERTARGET, SiCore_String, sub_417a30, sub_446e40
   ref: %s %s:
   ref: IGPUDevice::CreateSurface(): IGPUSurface::CreateSurface() failed.
   ref: ==== IGPUDevice::CreateSurface() ====
   ref: PPFX: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442140ULL || rel >= 0x442320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442320 size=464 callers=0 calls=5
   calls: GPUFMT_A8R8G8B8_SRGB, GPUUSAGE_RENDERTARGET, sub_417a30, sub_445af0, sub_446e40
   ref: %s %s:
   ref: ==== IGPUDevice::CreateSurface() ====
   ref: PPFX: 
   ref: IGPUDevice::CreateSurface(): IGPUSurface::CreateSurface_GPUDEVICESURFACE() failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442320ULL || rel >= 0x4424f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004424f0 size=208 callers=0 calls=2
   calls: GPUInterfaceQuery, sub_417a30
   ref: IGPUDevice::CreateQueryOcclusion(): IGPUQueryOcclusion::CreateQueryOcclusion() failed.
   ref: ==== IGPUDevice::CreateQueryOcclusion() ====
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4424f0ULL || rel >= 0x4425c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004425c0 size=432 callers=0 calls=4
   calls: GPUIBFMT_UNKNOWN, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_4, GPUUSAGE_RENDERTARGET, sub_417a30
   ref: %s %s:
   ref: ==== IGPUDevice::CreateVertexBuffer() ====
   ref: PPFX: 
   ref: IGPUDevice::CreateVertexBuffer(): IGPUVertexBuffer::CreateVertexBuffer() failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4425c0ULL || rel >= 0x442770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442770 size=448 callers=0 calls=4
   calls: GPUIBFMT_UNKNOWN, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_5, GPUUSAGE_RENDERTARGET, sub_417a30
   ref: %s %s:
   ref: ==== IGPUDevice::CreateIndexBuffer() ====
   ref: PPFX: 
   ref: IGPUDevice::CreateIndexBuffer(): IGPUIndexBuffer::CreateIndexBuffer() failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442770ULL || rel >= 0x442930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442930 size=240 callers=0 calls=2
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_7, sub_417a30
   ref: IGPUDevice::CreateInputAttribute(): IGPUInputAttribute::CreateInputAttribute() failed.
   ref: ==== IGPUDevice::CreateInputAttribute() ====
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442930ULL || rel >= 0x442a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442a20 size=16 callers=0 calls=0
*/
void sub_442a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442a20ULL || rel >= 0x442a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442a30 size=96 callers=0 calls=1
   calls: sub_447010
*/
void sub_442a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442a30ULL || rel >= 0x442a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442a90 size=224 callers=0 calls=1
   calls: sub_446b10
*/
void sub_442a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442a90ULL || rel >= 0x442b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442b70 size=80 callers=0 calls=0
*/
void sub_442b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442b70ULL || rel >= 0x442bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442bc0 size=144 callers=5 calls=0
*/
void sub_442bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442bc0ULL || rel >= 0x442c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442c50 size=16 callers=13 calls=0
*/
void sub_442c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442c50ULL || rel >= 0x442c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442c60 size=384 callers=1 calls=4
   calls: GPUInterfaceDevice_cpp_d_PPFX_2, sub_417a30, sub_43dd00, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp
   ref: IGPUDevice::CreateDevice(): eClipVolumeNearPlaneMode is invalid.
   ref: IGPUDevice::CreateDevice(): m_eViewportOriginMode is invalid.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceDevice_cpp_d_PPFX_ERROR_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442c60ULL || rel >= 0x442de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442de0 size=48 callers=0 calls=0
*/
void sub_442de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442de0ULL || rel >= 0x442e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442e10 size=32 callers=0 calls=0
*/
void sub_442e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442e10ULL || rel >= 0x442e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442e30 size=160 callers=0 calls=0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442e30ULL || rel >= 0x442ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442ed0 size=144 callers=0 calls=0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442ed0ULL || rel >= 0x442f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00442f60 size=608 callers=3 calls=0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x442f60ULL || rel >= 0x4431c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004431c0 size=272 callers=1 calls=0
*/
void sub_4431c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4431c0ULL || rel >= 0x4432d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004432d0 size=672 callers=0 calls=2
   calls: sub_4b99a0, sub_4b9a60
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4432d0ULL || rel >= 0x443570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443570 size=640 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_443570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443570ULL || rel >= 0x4437f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004437f0 size=256 callers=1 calls=1
   calls: sub_4b9a60
*/
void sub_4437f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4437f0ULL || rel >= 0x4438f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004438f0 size=48 callers=0 calls=1
   calls: sub_4437f0
*/
void sub_4438f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4438f0ULL || rel >= 0x443920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443920 size=320 callers=1 calls=4
   calls: GPUInterfaceSurface_cpp_d_PPFX_ERROR_2, sub_417a30, sub_443a60, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp
   ref: IGPUSurface::CreateSiGfxRenderTarget(): ISiGfxDevice::CreateRenderTarget() failed.
*/
void GPUInterfaceSurface_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443920ULL || rel >= 0x443a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443a60 size=288 callers=1 calls=1
   calls: sub_4b9a60
*/
void sub_443a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443a60ULL || rel >= 0x443b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443b80 size=240 callers=1 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: 
   ref: IGPUSurface::SetSiGfxRenderTarget(): ISiGfxDevice::CreateRenderPassState() failed.
*/
void GPUInterfaceSurface_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443b80ULL || rel >= 0x443c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443c70 size=96 callers=0 calls=0
*/
void sub_443c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443c70ULL || rel >= 0x443cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443cd0 size=80 callers=0 calls=0
*/
void sub_443cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443cd0ULL || rel >= 0x443d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443d20 size=384 callers=0 calls=1
   calls: sub_4b9a60
*/
void sub_443d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443d20ULL || rel >= 0x443ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00443ea0 size=1296 callers=1 calls=1
   calls: sub_417a30
   ref: IGPUSurface::AttachSiGfxRenderTargetFromOtherSurface(): ISiGfxRenderTerget creation failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceSurface_cpp_d_PPFX_ERROR_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x443ea0ULL || rel >= 0x4443b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004443b0 size=880 callers=2 calls=1
   calls: sub_417a30
   ref: IGPUSurface::DetachFromSiGfxRenderTarget(): ISiGfxRenderTarget recreation failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceSurface_cpp_d_PPFX_ERROR_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4443b0ULL || rel >= 0x444720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444720 size=640 callers=0 calls=3
   calls: GPUInterfaceSurface_cpp_d_PPFX_ERROR_3, sub_417a30, sub_4b99a0
   ref: IGPUSurface::AttachToOtherSurfaceFramebuffer(): Surface width is not match. (framebuffer: %d != surf
   ref: IGPUSurface::AttachToOtherSurfaceFramebuffer(): Surface multisample quality is not match. (framebuff
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: 
   ref: IGPUSurface::AttachToOtherSurfaceFramebuffer(): Surface multisample type is not match. (framebuffer:
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUInterfaceSurface_cpp_d_PPFX_ERROR_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444720ULL || rel >= 0x4449a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004449a0 size=544 callers=0 calls=2
   calls: GPUInterfaceSurface_cpp_d_PPFX_ERROR_4, sub_4b9a60
*/
void sub_4449a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4449a0ULL || rel >= 0x444bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444bc0 size=960 callers=1 calls=4
   calls: Unknown_Error_Code, sub_417a30, sub_445f80, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: 
   ref: IGPUSurface::RegisterSiGfxTexture(): ISiGfxRenderPass creation failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp
   ref: IGPUSurface::RegisterSiGfxTexture(): ISiGfxRenderTarget creation failed.
   ref: IGPUSurface::RegisterSiGfxTexture(): AttachFramebuffer() failed (0x%x: %s).
*/
void GPUInterfaceSurface_cpp_d_PPFX_ERROR_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444bc0ULL || rel >= 0x444f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00444f80 size=176 callers=0 calls=1
   calls: sub_445f80
*/
void sub_444f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x444f80ULL || rel >= 0x445030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445030 size=832 callers=2 calls=3
   calls: sub_445f10, sub_445f80, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp
*/
void GPUInterfaceSurface(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445030ULL || rel >= 0x445370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445370 size=688 callers=1 calls=6
   calls: GPUInterfaceSurface_cpp_d_PPFX_ERROR, Unknown_Error_Code, sub_417a30, sub_445f10, sub_445f80, sub_4b99a0
   ref: IGPUSurface::CreateOwnSiGfxRenderTarget(): AttachFramebuffer() failed (0x%x: %s).
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp
   ref: IGPUSurface::CreateSurface_SIGFX_TEXTURE_ATTACHED_SURFACE(): IGPUSurface::CreateOwnSiGfxRenderTarget
*/
void GPUInterfaceSurface_cpp_d_PPFX_ERROR_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445370ULL || rel >= 0x445620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445620 size=288 callers=0 calls=3
   calls: sub_445f10, sub_445f80, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp
*/
void GPUInterfaceSurface_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445620ULL || rel >= 0x445740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445740 size=944 callers=3 calls=6
   calls: GPUInterfaceSurface_cpp_d_PPFX_ERROR_6, sub_417a30, sub_445f10, sub_4b99a0, sub_4bc640, sub_4bc690
   ref: IGPUSurface::CreateSurface(): ISiGfxTexture::Create() failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp
   ref: IGPUSurface::CreateSurface(): ISiGfxDevice::CreateTexture() failed.
   ref: IGPUSurface::CreateSurface(): CreateSurface() failed.
   ref: C:/workspace/sisdk/3.0/SDK/Core/Include\SiCore/SiCore_String.inl
*/
void SiCore_String(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445740ULL || rel >= 0x445af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445af0 size=16 callers=1 calls=0
*/
void sub_445af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445af0ULL || rel >= 0x445b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445b00 size=32 callers=0 calls=1
   calls: sub_445fd0
*/
void sub_445b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445b00ULL || rel >= 0x445b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445b20 size=16 callers=0 calls=0
*/
void sub_445b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445b20ULL || rel >= 0x445b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445b30 size=16 callers=0 calls=0
*/
void sub_445b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445b30ULL || rel >= 0x445b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445b40 size=16 callers=0 calls=0
*/
void sub_445b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445b40ULL || rel >= 0x445b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445b50 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_445b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445b50ULL || rel >= 0x445dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445dc0 size=32 callers=4 calls=0
*/
void sub_445dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445dc0ULL || rel >= 0x445de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445de0 size=16 callers=2 calls=0
*/
void sub_445de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445de0ULL || rel >= 0x445df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445df0 size=16 callers=0 calls=0
*/
void sub_445df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445df0ULL || rel >= 0x445e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445e00 size=32 callers=0 calls=0
*/
void sub_445e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445e00ULL || rel >= 0x445e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445e20 size=96 callers=0 calls=1
   calls: sub_4b9a60
*/
void sub_445e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445e20ULL || rel >= 0x445e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445e80 size=144 callers=0 calls=2
   calls: sub_410f90, sub_4bc640
*/
void sub_445e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445e80ULL || rel >= 0x445f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445f10 size=80 callers=7 calls=1
   calls: GPUInterfaceResource
*/
void sub_445f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445f10ULL || rel >= 0x445f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445f60 size=16 callers=2 calls=0
*/
void sub_445f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445f60ULL || rel >= 0x445f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445f70 size=16 callers=0 calls=0
*/
void sub_445f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445f70ULL || rel >= 0x445f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445f80 size=64 callers=7 calls=0
*/
void sub_445f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445f80ULL || rel >= 0x445fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445fc0 size=16 callers=0 calls=0
*/
void sub_445fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445fc0ULL || rel >= 0x445fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00445fd0 size=96 callers=1 calls=0
*/
void sub_445fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x445fd0ULL || rel >= 0x446030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446030 size=48 callers=0 calls=0
*/
void sub_446030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446030ULL || rel >= 0x446060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446060 size=64 callers=0 calls=0
*/
void sub_446060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446060ULL || rel >= 0x4460a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004460a0 size=32 callers=0 calls=0
*/
void sub_4460a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4460a0ULL || rel >= 0x4460c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004460c0 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_4460c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4460c0ULL || rel >= 0x446330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446330 size=272 callers=4 calls=3
   calls: GPUMemoryAllocator_8, sub_445dc0, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceResource.cpp
*/
void GPUInterfaceResource(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446330ULL || rel >= 0x446440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446440 size=240 callers=0 calls=1
   calls: sub_4b9a60
*/
void sub_446440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446440ULL || rel >= 0x446530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446530 size=240 callers=0 calls=2
   calls: sub_445de0, sub_4b9a60
*/
void sub_446530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446530ULL || rel >= 0x446620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446620 size=64 callers=12 calls=0
*/
void sub_446620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446620ULL || rel >= 0x446660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446660 size=16 callers=0 calls=0
*/
void sub_446660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446660ULL || rel >= 0x446670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446670 size=16 callers=0 calls=0
*/
void sub_446670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446670ULL || rel >= 0x446680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446680 size=64 callers=0 calls=0
*/
void sub_446680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446680ULL || rel >= 0x4466c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004466c0 size=352 callers=1 calls=1
   calls: sub_4b99a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4466c0ULL || rel >= 0x446820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446820 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_446820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446820ULL || rel >= 0x446a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446a90 size=16 callers=19 calls=0
*/
void sub_446a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446a90ULL || rel >= 0x446aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446aa0 size=64 callers=1 calls=0
*/
void sub_446aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446aa0ULL || rel >= 0x446ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446ae0 size=48 callers=18 calls=0
*/
void sub_446ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446ae0ULL || rel >= 0x446b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446b10 size=16 callers=1 calls=0
*/
void sub_446b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446b10ULL || rel >= 0x446b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446b20 size=288 callers=16 calls=0
   ref: GPUFMT_A16B16G16R16F
   ref: GPUFMT_A8R8G8B8_SRGB
   ref: 0x%08x
   ref: GPUFMT_A32B32G32R32F
   ref: GPUFMT_UNKNOWN
   ref: GPUFMT_A8
   ref: GPUFMT_A8R8G8B8
   ref: GPUFMT_R32F
*/
void GPUFMT_A8R8G8B8_SRGB(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446b20ULL || rel >= 0x446c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446c40 size=288 callers=13 calls=0
   ref: GPUUSAGE_DEPTHSTENCIL
   ref: GPUUSAGE_RENDERTARGET
*/
void GPUUSAGE_RENDERTARGET(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446c40ULL || rel >= 0x446d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446d60 size=144 callers=3 calls=0
   ref: GPUIBFMT_UINT16
   ref: GPUIBFMT_UINT32
   ref: GPUIBFMT_UNKNOWN
*/
void GPUIBFMT_UNKNOWN(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446d60ULL || rel >= 0x446df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446df0 size=48 callers=110 calls=0
   ref: Unknown Error Code
*/
void Unknown_Error_Code(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446df0ULL || rel >= 0x446e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446e20 size=32 callers=3 calls=0
*/
void sub_446e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446e20ULL || rel >= 0x446e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446e40 size=32 callers=9 calls=0
*/
void sub_446e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446e40ULL || rel >= 0x446e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446e60 size=80 callers=2 calls=0
*/
void sub_446e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446e60ULL || rel >= 0x446eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00446eb0 size=352 callers=2 calls=0
*/
void sub_446eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x446eb0ULL || rel >= 0x447010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447010 size=32 callers=4 calls=0
*/
void sub_447010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447010ULL || rel >= 0x447030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447030 size=32 callers=1 calls=0
*/
void sub_447030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447030ULL || rel >= 0x447050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447050 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_447050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447050ULL || rel >= 0x4472c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004472c0 size=64 callers=0 calls=0
*/
void sub_4472c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4472c0ULL || rel >= 0x447300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447300 size=16 callers=0 calls=0
*/
void sub_447300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447300ULL || rel >= 0x447310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447310 size=16 callers=0 calls=0
*/
void sub_447310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447310ULL || rel >= 0x447320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447320 size=800 callers=0 calls=3
   calls: sub_446ae0, sub_4bc640, sub_4bc690
   ref: C:/workspace/sisdk/3.0/SDK/Core/Include\SiCore/SiCore_String.inl
*/
void SiCore_String_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447320ULL || rel >= 0x447640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447640 size=16 callers=0 calls=0
*/
void sub_447640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447640ULL || rel >= 0x447650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447650 size=16 callers=0 calls=0
*/
void sub_447650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447650ULL || rel >= 0x447660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447660 size=32 callers=0 calls=0
*/
void sub_447660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447660ULL || rel >= 0x447680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447680 size=16 callers=0 calls=0
*/
void sub_447680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447680ULL || rel >= 0x447690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447690 size=48 callers=0 calls=0
*/
void sub_447690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447690ULL || rel >= 0x4476c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004476c0 size=16 callers=0 calls=0
*/
void sub_4476c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4476c0ULL || rel >= 0x4476d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004476d0 size=48 callers=0 calls=0
*/
void sub_4476d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4476d0ULL || rel >= 0x447700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447700 size=16 callers=0 calls=0
*/
void sub_447700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447700ULL || rel >= 0x447710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447710 size=128 callers=0 calls=0
*/
void sub_447710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447710ULL || rel >= 0x447790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447790 size=16 callers=2 calls=0
*/
void sub_447790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447790ULL || rel >= 0x4477a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004477a0 size=464 callers=2 calls=1
   calls: sub_445f80
*/
void sub_4477a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4477a0ULL || rel >= 0x447970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447970 size=160 callers=0 calls=3
   calls: sub_43e620, sub_446a90, sub_446ae0
*/
void sub_447970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447970ULL || rel >= 0x447a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447a10 size=176 callers=0 calls=4
   calls: sub_43e620, sub_445f60, sub_446a90, sub_446ae0
*/
void sub_447a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447a10ULL || rel >= 0x447ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447ac0 size=192 callers=0 calls=2
   calls: GPUInterfaceSurface_cpp_d_PPFX_ERROR_7, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp
*/
void GPUInterfaceTexture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447ac0ULL || rel >= 0x447b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447b80 size=368 callers=0 calls=2
   calls: sub_417a30, sub_4b9a60
   ref: IGPUTexture::ReleaseLevelSurfacesAttachToTexture(): m_apGPUSurfaceMipmap[%d]->GetRefCount() referenc
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX WARNING: 
*/
void GPUInterfaceTexture_cpp_d_PPFX_WARNING(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447b80ULL || rel >= 0x447cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447cf0 size=64 callers=0 calls=0
*/
void sub_447cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447cf0ULL || rel >= 0x447d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447d30 size=64 callers=0 calls=0
*/
void sub_447d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447d30ULL || rel >= 0x447d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447d70 size=16 callers=0 calls=0
*/
void sub_447d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447d70ULL || rel >= 0x447d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447d80 size=16 callers=0 calls=0
*/
void sub_447d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447d80ULL || rel >= 0x447d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447d90 size=16 callers=0 calls=0
*/
void sub_447d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447d90ULL || rel >= 0x447da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00447da0 size=1056 callers=1 calls=7
   calls: sub_417a30, sub_43e600, sub_445f10, sub_4477a0, sub_4b99a0, sub_4bc640, sub_4bc690
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp
   ref: IGPUTexture::CreateTexture(): ISiGfxDevice::CreateTexture() failed.
   ref: IGPUTexture::CreateTexture(): ISiGfxTexture::Create() failed.
   ref: C:/workspace/sisdk/3.0/SDK/Core/Include\SiCore/SiCore_String.inl
*/
void SiCore_String_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x447da0ULL || rel >= 0x4481c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004481c0 size=496 callers=1 calls=5
   calls: GPUFMT_A8R8G8B8_SRGB, sub_417a30, sub_445f10, sub_4477a0, sub_4b99a0
   ref: Specified uiHeight(%d) doesn't match the resouce height(%d)
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp
   ref: Specified eFormat(%s) doesn't match the resouce format(%s)
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX WARNING: 
   ref: Specified uiWidth(%d) doesn't match the resouce width(%d)
*/
void GPUInterfaceTexture_cpp_d_PPFX_WARNING_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4481c0ULL || rel >= 0x4483b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004483b0 size=384 callers=1 calls=1
   calls: sub_445f80
*/
void sub_4483b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4483b0ULL || rel >= 0x448530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448530 size=160 callers=0 calls=3
   calls: sub_43e620, sub_446a90, sub_446ae0
*/
void sub_448530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448530ULL || rel >= 0x4485d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004485d0 size=176 callers=0 calls=4
   calls: sub_43e620, sub_445f60, sub_446a90, sub_446ae0
*/
void sub_4485d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4485d0ULL || rel >= 0x448680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448680 size=16 callers=0 calls=0
*/
void sub_448680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448680ULL || rel >= 0x448690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448690 size=16 callers=0 calls=0
*/
void sub_448690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448690ULL || rel >= 0x4486a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004486a0 size=16 callers=1 calls=0
*/
void sub_4486a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4486a0ULL || rel >= 0x4486b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004486b0 size=592 callers=1 calls=6
   calls: GPUFMT_A8R8G8B8_SRGB, sub_417a30, sub_445f10, sub_446a90, sub_4483b0, sub_4b99a0
   ref: Specified uiHeight(%d) doesn't match the resouce height(%d)
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp
   ref: Specified eFormat(%s) doesn't match the resouce format(%s)
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX WARNING: 
   ref: Specified uiWidth(%d) doesn't match the resouce width(%d)
*/
void GPUInterfaceTexture_cpp_d_PPFX_WARNING_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4486b0ULL || rel >= 0x448900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448900 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_448900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448900ULL || rel >= 0x448b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448b70 size=192 callers=3 calls=2
   calls: sub_43e620, sub_4b9a60
*/
void sub_448b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448b70ULL || rel >= 0x448c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448c30 size=48 callers=0 calls=1
   calls: sub_448b70
*/
void sub_448c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448c30ULL || rel >= 0x448c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00448c60 size=1360 callers=2 calls=4
   calls: sub_417a30, sub_43e600, sub_4b99a0, sub_563620
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: 
   ref: error : m_pSiGfxMemoryHeap->Create()
   ref: IGPUBuffer::BuildBuffer(): ISiGfxVertexBuffer::Create() failed.
   ref: IGPUBuffer::BuildBuffer(): ISiGfxIndexBuffer::Create() failed.
   ref: IGPUBuffer::Unmap(): Buffer is not mapped.
*/
void GPUInterfaceBuffer_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x448c60ULL || rel >= 0x4491b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004491b0 size=464 callers=12 calls=1
   calls: sub_417a30
   ref: IGPUBuffer::Map(): Buffer is already mapped.
   ref: IGPUBuffer::Map(): GPUUSAGE_DYNAMIC must be set at initialize for Map() with GPUMAPA_FLAG_DISCARD.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4491b0ULL || rel >= 0x449380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449380 size=160 callers=12 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: 
   ref: IGPUBuffer::Unmap(): Buffer is not mapped.
*/
void GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449380ULL || rel >= 0x449420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449420 size=48 callers=0 calls=1
   calls: sub_448b70
*/
void sub_449420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449420ULL || rel >= 0x449450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449450 size=384 callers=1 calls=5
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR, GPUInterfaceResource, Unknown_Error_Code, sub_417a30, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp
   ref: IGPUVertexBuffer::CreateVertexBufferpGPUVertexBuffer->BuildVertexBuffer(Size: %d, nBuffers: %d, Usag
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceBuffer_cpp_d_PPFX_ERROR_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449450ULL || rel >= 0x4495d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004495d0 size=48 callers=0 calls=1
   calls: sub_448b70
*/
void sub_4495d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4495d0ULL || rel >= 0x449600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449600 size=400 callers=1 calls=6
   calls: GPUIBFMT_UNKNOWN, GPUInterfaceBuffer_cpp_d_PPFX_ERROR, GPUInterfaceResource, Unknown_Error_Code, sub_417a30, sub_4b99a0
   ref: IGPUIndexBuffer::CreateIndexBufferpGPUIndexBuffer->BuildIndexBuffer(Size: %d, nBuffers: %d, %s, Usag
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceBuffer_cpp_d_PPFX_ERROR_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449600ULL || rel >= 0x449790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449790 size=208 callers=1 calls=1
   calls: sub_4b9a60
*/
void sub_449790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449790ULL || rel >= 0x449860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449860 size=48 callers=0 calls=1
   calls: sub_449790
*/
void sub_449860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449860ULL || rel >= 0x449890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449890 size=1072 callers=1 calls=4
   calls: sub_417a30, sub_447030, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp
   ref: IGPUInputAttribute::BuildInputAttribute(): pSiGfxDevice->CreateVertexFormat() failed.
   ref: IGPUInputAttribute::BuildInputAttribute(): pSiGfxVertexFormat->BeginCreate() failed.
   ref: IGPUInputAttribute::BuildInputAttribute(): pSiGfxVertexFormat->EndCreate() failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceBuffer_cpp_d_PPFX_ERROR_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449890ULL || rel >= 0x449cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

