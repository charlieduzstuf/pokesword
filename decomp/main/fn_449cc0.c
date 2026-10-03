/* main functions 00449cc0..004a4760 (27 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00449cc0 size=288 callers=1 calls=5
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_6, Unknown_Error_Code, sub_417a30, sub_445dc0, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp
   ref: IGPUInputAttribute::CreateInputAttributepGPUInputAttribute->BuildInputAttribute() failed (0x%x: %s).
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: 
*/
void GPUInterfaceBuffer_cpp_d_PPFX_ERROR_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449cc0ULL || rel >= 0x449de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00449de0 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_449de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x449de0ULL || rel >= 0x44a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a050 size=112 callers=0 calls=0
*/
void sub_44a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a050ULL || rel >= 0x44a0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a0c0 size=16 callers=0 calls=0
*/
void sub_44a0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a0c0ULL || rel >= 0x44a0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a0d0 size=96 callers=0 calls=0
*/
void sub_44a0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a0d0ULL || rel >= 0x44a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a130 size=320 callers=1 calls=1
   calls: sub_417a30
   ref: IGPUBaseQuery::CreateDeviceQuery(): ISiGfxDevice::CreateQuery() failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceQuery.cpp(%d) : PPFX ERROR: 
   ref: IGPUBaseQuery::CreateDeviceQuery(): ISiGfxQuery::Create() failed.
*/
void GPUInterfaceQuery_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a130ULL || rel >= 0x44a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a270 size=80 callers=0 calls=0
*/
void sub_44a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a270ULL || rel >= 0x44a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a2c0 size=48 callers=0 calls=0
*/
void sub_44a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a2c0ULL || rel >= 0x44a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a2f0 size=192 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceQuery.cpp(%d) : PPFX ERROR: 
   ref: IGPUBaseQuery::Begin(): pSiGfxDrawContext->BeginQuery(GetSiGfxQuery()) failed.
*/
void GPUInterfaceQuery_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a2f0ULL || rel >= 0x44a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a3b0 size=192 callers=0 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceQuery.cpp(%d) : PPFX ERROR: 
   ref: IGPUBaseQuery::End(): pSiGfxDrawContext->EndQuery(GetSiGfxQuery()) failed.
*/
void GPUInterfaceQuery_cpp_d_PPFX_ERROR_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a3b0ULL || rel >= 0x44a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a470 size=208 callers=0 calls=0
*/
void sub_44a470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a470ULL || rel >= 0x44a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a540 size=112 callers=0 calls=1
   calls: sub_445de0
*/
void sub_44a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a540ULL || rel >= 0x44a5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a5b0 size=160 callers=0 calls=0
*/
void sub_44a5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a5b0ULL || rel >= 0x44a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a650 size=16 callers=0 calls=0
*/
void sub_44a650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a650ULL || rel >= 0x44a660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a660 size=336 callers=0 calls=1
   calls: sub_417a30
   ref: IGPUQueryOcclusion::UpdateInternalResult(): ISiGfxQuery::GetQueryData() failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceQuery.cpp(%d) : PPFX ERROR: 
   ref: IGPUQueryOcclusion::UpdateInternalResult(): ISiGfxQuery::CollectQueryData() failed.
*/
void GPUInterfaceQuery_cpp_d_PPFX_ERROR_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a660ULL || rel >= 0x44a7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a7b0 size=208 callers=0 calls=0
*/
void sub_44a7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a7b0ULL || rel >= 0x44a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a880 size=144 callers=1 calls=3
   calls: GPUInterfaceQuery_cpp_d_PPFX_ERROR, sub_445dc0, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceQuery.cpp
*/
void GPUInterfaceQuery(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a880ULL || rel >= 0x44a910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044a910 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_44a910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44a910ULL || rel >= 0x44ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ab80 size=528 callers=1 calls=3
   calls: TFXString_5, sub_4512d0, sub_4b9a60
*/
void sub_44ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ab80ULL || rel >= 0x44ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ad90 size=320 callers=1 calls=1
   calls: TFXString
*/
void sub_44ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ad90ULL || rel >= 0x44aed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044aed0 size=208 callers=1 calls=3
   calls: sub_44afa0, sub_4512d0, sub_4b9a60
*/
void sub_44aed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44aed0ULL || rel >= 0x44afa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044afa0 size=512 callers=2 calls=4
   calls: TFXString_5, sub_44ab80, sub_4512d0, sub_4b9a60
*/
void sub_44afa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44afa0ULL || rel >= 0x44b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b1a0 size=48 callers=0 calls=1
   calls: sub_44aed0
*/
void sub_44b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b1a0ULL || rel >= 0x44b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b1d0 size=432 callers=2 calls=2
   calls: sub_452790, sub_4527e0
*/
void sub_44b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b1d0ULL || rel >= 0x44b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b380 size=336 callers=1 calls=4
   calls: TFXString_2, sub_4512d0, sub_452790, sub_4527e0
*/
void sub_44b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b380ULL || rel >= 0x44b4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044b4d0 size=1792 callers=3 calls=13
   calls: GPUMemoryAllocator_9, TFXString_2, TFXString_7, TinyEffect_3, TinyEffect_cpp_d_PPFX_ERROR, allocated, allocated_2, allocated_3, sub_417a30, sub_4512d0, sub_4515c0, sub_4527e0
   ... +1 more
   ref: cgParameter name: %s[%d]%s.
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: 
   ref: am44_TransformMatrix
   ref: m44_ColorTransformMatrix
   ref:  elements referenced
   ref: CTinyEffect::CreateParameter(programIndex: %d, pProgram->m_strName: "%s"):
   ref: cgParameter name: %s%s.
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp
*/
void m44_ColorTransformMatrix(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44b4d0ULL || rel >= 0x44bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044bbd0 size=1168 callers=1 calls=9
   calls: GPUMemoryAllocator_11, TFXString, TFXString_2, sub_417a30, sub_44b1d0, sub_4515c0, sub_451880, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: 
   ref: ../src/GPU/GPUMemoryAllocator.h
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp
   ref: CTinyEffect::CreateGlobalParameter():
*/
void TinyEffect_cpp_d_PPFX_FX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44bbd0ULL || rel >= 0x44c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044c060 size=784 callers=1 calls=1
   calls: sub_417a30
   ref: CTinyEffect::CreateSiGfxProgramResources(): pSiGfxDevice->CreateDescriptorSet() failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX ERROR: 
   ref: CTinyEffect::CreateSiGfxProgramResources(): pSiGfxDevice->CreateRootSignature() failed.
*/
void TinyEffect_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44c060ULL || rel >= 0x44c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044c370 size=1456 callers=2 calls=7
   calls: TFXString, allocated, delimiters, sub_417a30, sub_4512d0, sub_4515c0, sub_4527e0
   ref: CTinyEffect::CreateProgram(): pSiGfxDevice->CreateShader() failed: "%s".
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX ERROR: 
   ref: CTinyEffect::CreateProgram(): pSiGfxShaderProgram->Create() failed.
*/
void TinyEffect_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44c370ULL || rel >= 0x44c920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044c920 size=688 callers=1 calls=9
   calls: GPUMemoryAllocator_10, TFXString, TFXString_2, TFXString_5, TinyEffect_cpp_d_PPFX_ERROR_2, sub_4512d0, sub_4515c0, sub_4527e0, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp
*/
void TinyEffect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44c920ULL || rel >= 0x44cbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044cbd0 size=4080 callers=1 calls=25
   calls: GPUMemoryAllocator_12, TFXString, TFXString_2, TFXString_3, TinyEffect, TinyEffect_cpp_d_PPFX_FX, allocated, allocated_2, allocated_3, delimiters, m44_ColorTransformMatrix, sub_417a30
   ... +13 more
   ref: m_apGlobalParameter[%d]->m_pData: 0x%0x
   ref: strVertexProgramFile: %s
   ref: m_apGlobalParameter[%d]->m_sizeOfElement: %d
   ref: glsl_mrg
   ref: glsl_bin
   ref: cgstrip
   ref: GlobalParameter:
   ref: pTechnique->m_strName: %s
*/
void glsl_mrg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44cbd0ULL || rel >= 0x44dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dbc0 size=384 callers=1 calls=8
   calls: TFXString_2, TFXString_5, glsl_mrg, sub_417a30, sub_44afa0, sub_4512d0, sub_4527e0, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX: 
   ref: .tfxo file
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp
   ref: CTinyEffect::CreateFromMemory(): Create effect from Memory
*/
void TinyEffect_cpp_d_PPFX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dbc0ULL || rel >= 0x44dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dd40 size=32 callers=0 calls=1
   calls: sub_44b1d0
*/
void sub_44dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dd40ULL || rel >= 0x44dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dd60 size=32 callers=0 calls=1
   calls: sub_44b380
*/
void sub_44dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dd60ULL || rel >= 0x44dd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dd80 size=16 callers=0 calls=0
*/
void sub_44dd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dd80ULL || rel >= 0x44dd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dd90 size=16 callers=0 calls=0
*/
void sub_44dd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dd90ULL || rel >= 0x44dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dda0 size=336 callers=0 calls=0
*/
void sub_44dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dda0ULL || rel >= 0x44def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044def0 size=224 callers=1 calls=0
*/
void sub_44def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44def0ULL || rel >= 0x44dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044dfd0 size=64 callers=0 calls=0
*/
void sub_44dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44dfd0ULL || rel >= 0x44e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e010 size=96 callers=0 calls=0
*/
void sub_44e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e010ULL || rel >= 0x44e070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e070 size=144 callers=0 calls=0
*/
void sub_44e070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e070ULL || rel >= 0x44e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e100 size=144 callers=0 calls=0
*/
void sub_44e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e100ULL || rel >= 0x44e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e190 size=144 callers=0 calls=0
*/
void sub_44e190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e190ULL || rel >= 0x44e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e220 size=144 callers=0 calls=0
*/
void sub_44e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e220ULL || rel >= 0x44e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e2b0 size=144 callers=0 calls=0
*/
void sub_44e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e2b0ULL || rel >= 0x44e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e340 size=144 callers=0 calls=0
*/
void sub_44e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e340ULL || rel >= 0x44e3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e3d0 size=144 callers=0 calls=0
*/
void sub_44e3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e3d0ULL || rel >= 0x44e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e460 size=160 callers=0 calls=0
*/
void sub_44e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e460ULL || rel >= 0x44e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e500 size=96 callers=0 calls=0
*/
void sub_44e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e500ULL || rel >= 0x44e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e560 size=64 callers=0 calls=0
*/
void sub_44e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e560ULL || rel >= 0x44e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e5a0 size=16 callers=0 calls=0
*/
void sub_44e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e5a0ULL || rel >= 0x44e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e5b0 size=64 callers=0 calls=0
*/
void sub_44e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e5b0ULL || rel >= 0x44e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e5f0 size=64 callers=0 calls=0
*/
void sub_44e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e5f0ULL || rel >= 0x44e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e630 size=288 callers=0 calls=1
   calls: sub_4527e0
*/
void sub_44e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e630ULL || rel >= 0x44e750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e750 size=288 callers=0 calls=1
   calls: sub_4527e0
*/
void sub_44e750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e750ULL || rel >= 0x44e870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e870 size=240 callers=0 calls=1
   calls: sub_4527e0
*/
void sub_44e870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e870ULL || rel >= 0x44e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044e960 size=240 callers=0 calls=1
   calls: sub_4527e0
*/
void sub_44e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44e960ULL || rel >= 0x44ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ea50 size=48 callers=0 calls=0
*/
void sub_44ea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ea50ULL || rel >= 0x44ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ea80 size=16 callers=0 calls=0
*/
void sub_44ea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ea80ULL || rel >= 0x44ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044ea90 size=48 callers=0 calls=1
   calls: float4x4
*/
void sub_44ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44ea90ULL || rel >= 0x44eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044eac0 size=1920 callers=1 calls=4
   calls: TinyEffect_cpp_d_PPFX_ERROR_2, m44_ColorTransformMatrix, sub_417a30, sub_447790
   ref:   fragmentprogram name: %s
   ref:   NULL texture.
   ref: float[%d]
   ref: float4
   ref: pProgramParameter->m_iResourceIndex: %d
   ref: invalid ETFXPARAMETERTYPE
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX ERROR: 
   ref: parameter %d/%d: %s.
*/
void float4x4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44eac0ULL || rel >= 0x44f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f240 size=16 callers=0 calls=0
*/
void sub_44f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f240ULL || rel >= 0x44f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f250 size=336 callers=0 calls=1
   calls: sub_417a30
   ref: CTinyEffect::ApplyVertexInputs(): apGPUVertexBuffers[%d] is currently mapped. Call Unmap() first.
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX ERROR: 
*/
void TinyEffect_cpp_d_PPFX_ERROR_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f250ULL || rel >= 0x44f3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f3a0 size=176 callers=1 calls=4
   calls: TinyEffect_cpp_d_PPFX, sub_44ad90, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp
*/
void TinyEffect_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f3a0ULL || rel >= 0x44f450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044f450 size=1568 callers=1 calls=0
*/
void sub_44f450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44f450ULL || rel >= 0x44fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fa70 size=32 callers=1 calls=0
*/
void sub_44fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fa70ULL || rel >= 0x44fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fa90 size=32 callers=1 calls=0
*/
void sub_44fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fa90ULL || rel >= 0x44fab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fab0 size=32 callers=1 calls=0
*/
void sub_44fab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fab0ULL || rel >= 0x44fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fad0 size=16 callers=1 calls=0
*/
void sub_44fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fad0ULL || rel >= 0x44fae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fae0 size=16 callers=1 calls=0
*/
void sub_44fae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fae0ULL || rel >= 0x44faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044faf0 size=16 callers=1 calls=0
*/
void sub_44faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44faf0ULL || rel >= 0x44fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fb00 size=16 callers=1 calls=0
*/
void sub_44fb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fb00ULL || rel >= 0x44fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fb10 size=16 callers=1 calls=0
*/
void sub_44fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fb10ULL || rel >= 0x44fb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fb20 size=16 callers=1 calls=0
*/
void sub_44fb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fb20ULL || rel >= 0x44fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fb30 size=192 callers=0 calls=2
   calls: sub_4512d0, sub_4b9a60
*/
void sub_44fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fb30ULL || rel >= 0x44fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fbf0 size=176 callers=0 calls=2
   calls: sub_4512d0, sub_4b9a60
*/
void sub_44fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fbf0ULL || rel >= 0x44fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0044fca0 size=2160 callers=1 calls=6
   calls: GPUMemoryAllocator_13, TFXString_2, TFXString_5, sub_4527e0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU/GPUMemoryAllocator.h
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp
*/
void TinyEffect_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x44fca0ULL || rel >= 0x450510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450510 size=352 callers=1 calls=1
   calls: sub_4b99a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450510ULL || rel >= 0x450670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450670 size=352 callers=1 calls=1
   calls: sub_4b99a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450670ULL || rel >= 0x4507d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004507d0 size=352 callers=1 calls=1
   calls: sub_4b99a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4507d0ULL || rel >= 0x450930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450930 size=352 callers=1 calls=1
   calls: sub_4b99a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450930ULL || rel >= 0x450a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450a90 size=352 callers=2 calls=1
   calls: sub_4b99a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450a90ULL || rel >= 0x450bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450bf0 size=704 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_450bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450bf0ULL || rel >= 0x450eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450eb0 size=128 callers=30 calls=1
   calls: sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: __s_null[0] == '\0'
*/
void TFXString(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450eb0ULL || rel >= 0x450f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00450f30 size=288 callers=172 calls=1
   calls: sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: __s_null[0] == '\0'
*/
void TFXString_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x450f30ULL || rel >= 0x451050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451050 size=400 callers=19 calls=2
   calls: sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: __s_null[0] == '\0'
*/
void TFXString_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451050ULL || rel >= 0x4511e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004511e0 size=240 callers=18 calls=1
   calls: sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: Construct
   ref: _allocated
   ref: __s_null[0] == '\0'
*/
void allocated(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4511e0ULL || rel >= 0x4512d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004512d0 size=80 callers=479 calls=1
   calls: sub_4b9a60
*/
void sub_4512d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4512d0ULL || rel >= 0x451320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451320 size=528 callers=10 calls=2
   calls: sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
*/
void TFXString_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451320ULL || rel >= 0x451530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451530 size=144 callers=75 calls=1
   calls: TFXString_4
*/
void sub_451530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451530ULL || rel >= 0x4515c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004515c0 size=112 callers=75 calls=1
   calls: TFXString_4
*/
void sub_4515c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4515c0ULL || rel >= 0x451630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451630 size=384 callers=72 calls=4
   calls: TFXString_3, allocated, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: Construct
   ref: _allocated
   ref: __s_null[0] == '\0'
*/
void allocated_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451630ULL || rel >= 0x4517b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004517b0 size=208 callers=21 calls=2
   calls: TFXString_4, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: __s_null[0] == '\0'
*/
void TFXString_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4517b0ULL || rel >= 0x451880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451880 size=128 callers=10 calls=1
   calls: TFXString_4
*/
void sub_451880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451880ULL || rel >= 0x451900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451900 size=1216 callers=15 calls=4
   calls: TFXString_2, TFXString_3, TFXString_6, sub_451f00
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: delimiters
   ref: commentLen < 256
*/
void delimiters(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451900ULL || rel >= 0x451dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451dc0 size=64 callers=1 calls=0
*/
void sub_451dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451dc0ULL || rel >= 0x451e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451e00 size=256 callers=6 calls=2
   calls: TFXString_4, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: __s_null[0] == '\0'
*/
void TFXString_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451e00ULL || rel >= 0x451f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00451f00 size=464 callers=1 calls=2
   calls: TFXString_4, TFXString_6
*/
void sub_451f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x451f00ULL || rel >= 0x4520d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004520d0 size=512 callers=6 calls=0
*/
void sub_4520d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4520d0ULL || rel >= 0x4522d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004522d0 size=112 callers=1 calls=2
   calls: TFXString_2, TFXString_3
*/
void sub_4522d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4522d0ULL || rel >= 0x452340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452340 size=192 callers=2 calls=2
   calls: TFXString_2, TFXString_3
*/
void sub_452340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452340ULL || rel >= 0x452400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452400 size=416 callers=1 calls=0
*/
void sub_452400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452400ULL || rel >= 0x4525a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004525a0 size=416 callers=34 calls=3
   calls: TFXString_3, TFXString_4, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: __s_null[0] == '\0'
*/
void TFXString_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4525a0ULL || rel >= 0x452740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452740 size=80 callers=6 calls=1
   calls: TFXString_3
*/
void sub_452740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452740ULL || rel >= 0x452790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452790 size=32 callers=4 calls=0
*/
void sub_452790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452790ULL || rel >= 0x4527b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004527b0 size=48 callers=1 calls=0
*/
void sub_4527b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4527b0ULL || rel >= 0x4527e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004527e0 size=32 callers=25 calls=0
*/
void sub_4527e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4527e0ULL || rel >= 0x452800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452800 size=32 callers=22 calls=0
*/
void sub_452800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452800ULL || rel >= 0x452820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452820 size=384 callers=113 calls=4
   calls: TFXString_3, allocated, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: Construct
   ref: _allocated
   ref: __s_null[0] == '\0'
*/
void allocated_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452820ULL || rel >= 0x4529a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004529a0 size=400 callers=6 calls=4
   calls: TFXString_3, allocated, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: Construct
   ref: _allocated
   ref: __s_null[0] == '\0'
*/
void allocated_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4529a0ULL || rel >= 0x452b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452b30 size=208 callers=7 calls=1
   calls: TFXString_4
*/
void sub_452b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452b30ULL || rel >= 0x452c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452c00 size=288 callers=6 calls=1
   calls: TFXString_6
*/
void sub_452c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452c00ULL || rel >= 0x452d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452d20 size=336 callers=2 calls=1
   calls: TFXString_6
   ref: C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TFXString.cpp
   ref: CutLeft
   ref: szDefSpace
*/
void szDefSpace(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452d20ULL || rel >= 0x452e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452e70 size=144 callers=0 calls=2
   calls: sub_410f90, sub_4bc640
*/
void sub_452e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452e70ULL || rel >= 0x452f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00452f00 size=432 callers=1 calls=0
*/
void sub_452f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x452f00ULL || rel >= 0x4530b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004530b0 size=288 callers=1 calls=4
   calls: GPUGlareDef_2, GPUGlareDef_4, sub_49eb30, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp
*/
void GPURenderGlare(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4530b0ULL || rel >= 0x4531d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004531d0 size=624 callers=0 calls=5
   calls: TFXString_2, TFXString_5, allocated_3, sub_4512d0, sub_4515c0
*/
void sub_4531d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4531d0ULL || rel >= 0x453440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00453440 size=96 callers=3 calls=0
*/
void sub_453440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x453440ULL || rel >= 0x4534a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004534a0 size=48 callers=1 calls=0
*/
void sub_4534a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4534a0ULL || rel >= 0x4534d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004534d0 size=16 callers=1 calls=0
*/
void sub_4534d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4534d0ULL || rel >= 0x4534e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004534e0 size=16 callers=1 calls=0
*/
void sub_4534e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4534e0ULL || rel >= 0x4534f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004534f0 size=80 callers=1 calls=0
*/
void sub_4534f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4534f0ULL || rel >= 0x453540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00453540 size=7584 callers=1 calls=18
   calls: GPUGlareDef_5, GPURenderTextureArray_cpp_d_PPFX, TFXString_7, Unknown_Error_Code, allocated_2, allocated_3, sub_417a30, sub_442bc0, sub_4512d0, sub_452f00, sub_46db60, sub_49a9c0
   ... +6 more
   ref: ::m_pAnamorphicFlareResult
   ref: ::m_pStarGeneration
   ref: ::m_pLightShaftGeneration
   ref: ::m_pGlareSource
   ref: ::m_pGlareResultChromaticAberration
   ref: CRenderGlare::CreateSystemObjects(): m_pLightShaftGeneration->Initialize() failed (0x%x: %s).
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: 
   ref: CRenderGlare::CreateSystemObjects(): m_pGhostGeneration->Initialize() failed (0x%x: %s).
*/
void GPURenderGlare_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x453540ULL || rel >= 0x4552e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004552e0 size=112 callers=1 calls=0
*/
void sub_4552e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4552e0ULL || rel >= 0x455350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455350 size=80 callers=1 calls=0
*/
void sub_455350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455350ULL || rel >= 0x4553a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004553a0 size=32 callers=1 calls=0
*/
void sub_4553a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4553a0ULL || rel >= 0x4553c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004553c0 size=32 callers=2 calls=0
*/
void sub_4553c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4553c0ULL || rel >= 0x4553e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004553e0 size=32 callers=2 calls=0
*/
void sub_4553e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4553e0ULL || rel >= 0x455400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455400 size=32 callers=2 calls=0
*/
void sub_455400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455400ULL || rel >= 0x455420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455420 size=32 callers=2 calls=0
*/
void sub_455420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455420ULL || rel >= 0x455440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455440 size=32 callers=2 calls=0
*/
void sub_455440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455440ULL || rel >= 0x455460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455460 size=32 callers=2 calls=0
*/
void sub_455460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455460ULL || rel >= 0x455480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455480 size=32 callers=2 calls=0
*/
void sub_455480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455480ULL || rel >= 0x4554a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004554a0 size=32 callers=2 calls=0
*/
void sub_4554a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4554a0ULL || rel >= 0x4554c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004554c0 size=48 callers=1 calls=0
*/
void sub_4554c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4554c0ULL || rel >= 0x4554f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004554f0 size=32 callers=3 calls=0
*/
void sub_4554f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4554f0ULL || rel >= 0x455510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455510 size=32 callers=1 calls=0
*/
void sub_455510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455510ULL || rel >= 0x455530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455530 size=48 callers=1 calls=0
*/
void sub_455530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455530ULL || rel >= 0x455560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455560 size=64 callers=2 calls=0
*/
void sub_455560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455560ULL || rel >= 0x4555a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004555a0 size=432 callers=1 calls=4
   calls: GPURenderGlare_cpp_d_PPFX_ERROR, Unknown_Error_Code, sub_417a30, sub_49ec80
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: 
   ref: CRenderGlare::Initialize(): ValidateInitParam() failed (0x%x: %s).
*/
void GPURenderGlare_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4555a0ULL || rel >= 0x455750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455750 size=128 callers=0 calls=5
   calls: sub_49ec80, sub_4a0a30, sub_4a15b0, sub_4a2b80, sub_4b9a60
*/
void sub_455750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455750ULL || rel >= 0x4557d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004557d0 size=128 callers=0 calls=6
   calls: sub_49ec80, sub_49ecd0, sub_4a0a30, sub_4a15b0, sub_4a2b80, sub_4b9a60
*/
void sub_4557d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4557d0ULL || rel >= 0x455850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455850 size=688 callers=1 calls=0
*/
void sub_455850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455850ULL || rel >= 0x455b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455b00 size=80 callers=0 calls=2
   calls: GPURenderGlare_cpp_d_PPFX_ERROR_3, sub_49ed90
*/
void sub_455b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455b00ULL || rel >= 0x455b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00455b50 size=1600 callers=1 calls=6
   calls: Unknown_Error_Code, sub_417a30, sub_446ae0, sub_461e00, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: 
   ref: CRenderGlare::CreateDeviceResources(): m_pGPUDevice->CreateTexture(&m_pGPUTextureTrimCircle) failed 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp
*/
void GPURenderGlare_cpp_d_PPFX_ERROR_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x455b50ULL || rel >= 0x456190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00456190 size=496 callers=0 calls=0
*/
void sub_456190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x456190ULL || rel >= 0x456380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00456380 size=64 callers=0 calls=2
   calls: sub_455850, sub_49f260
*/
void sub_456380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x456380ULL || rel >= 0x4563c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004563c0 size=2096 callers=0 calls=5
   calls: sub_46db60, sub_49f270, sub_49fc60, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4563c0ULL || rel >= 0x456bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00456bf0 size=832 callers=4 calls=2
   calls: sub_410f90, sub_411b00
*/
void sub_456bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x456bf0ULL || rel >= 0x456f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00456f30 size=384 callers=6 calls=2
   calls: sub_410f90, sub_411b00
*/
void sub_456f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x456f30ULL || rel >= 0x4570b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004570b0 size=704 callers=4 calls=2
   calls: sub_410f90, sub_411b00
*/
void sub_4570b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4570b0ULL || rel >= 0x457370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00457370 size=736 callers=4 calls=2
   calls: sub_410f90, sub_411b00
*/
void sub_457370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x457370ULL || rel >= 0x457650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00457650 size=272 callers=2 calls=4
   calls: sub_456bf0, sub_456f30, sub_4570b0, sub_457370
*/
void sub_457650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x457650ULL || rel >= 0x457760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00457760 size=1952 callers=2 calls=9
   calls: sub_440cf0, sub_440d50, sub_46db60, sub_471460, sub_478880, sub_47dfa0, sub_48e260, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x457760ULL || rel >= 0x457f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00457f00 size=848 callers=1 calls=9
   calls: GPUClassUtil_13, sub_4385e0, sub_440cf0, sub_46db60, sub_47dfa0, sub_490570, sub_49e3a0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x457f00ULL || rel >= 0x458250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00458250 size=464 callers=2 calls=3
   calls: sub_410f90, sub_411b00, sub_458420
*/
void sub_458250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x458250ULL || rel >= 0x458420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00458420 size=352 callers=6 calls=2
   calls: sub_410f90, sub_411b00
*/
void sub_458420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x458420ULL || rel >= 0x458580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00458580 size=416 callers=1 calls=3
   calls: sub_410f90, sub_411b00, sub_458420
*/
void sub_458580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x458580ULL || rel >= 0x458720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00458720 size=1792 callers=1 calls=9
   calls: GPUClassUtil_16, sub_458250, sub_46db60, sub_47dfa0, sub_493f30, sub_497b20, sub_49e3a0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x458720ULL || rel >= 0x458e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00458e20 size=1488 callers=2 calls=9
   calls: sub_440d50, sub_457650, sub_458250, sub_46db60, sub_471460, sub_47dfa0, sub_48d220, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x458e20ULL || rel >= 0x4593f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004593f0 size=832 callers=2 calls=9
   calls: GPUClassUtil_18, GPUGlareDef, sub_456bf0, sub_46db60, sub_48d220, sub_4a0530, sub_4a0680, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4593f0ULL || rel >= 0x459730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00459730 size=4336 callers=1 calls=12
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_410f90, sub_411b00, sub_4385e0, sub_440c40, sub_458420, sub_458580, sub_46db60, sub_48d550, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x459730ULL || rel >= 0x45a820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045a820 size=6592 callers=1 calls=10
   calls: sub_410f90, sub_411b00, sub_456f30, sub_4570b0, sub_458420, sub_46db60, sub_488d90, sub_489690, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45a820ULL || rel >= 0x45c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045c1e0 size=1696 callers=1 calls=13
   calls: GPUClassUtil_24, GetHandle_tex2D_aTexture_4, Unknown_Error_Code, sub_410f90, sub_411b00, sub_417a30, sub_457370, sub_458420, sub_46db60, sub_49cf50, sub_49e3a0, sub_4b99a0
   ... +1 more
   ref: CRenderGlare::GenerateGlare_Afterimage(): pTexUtil->DrawRectGPU_MadOffsetTn() failed (0x%x: %s).
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: 
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPURenderGlare_cpp_d_PPFX_ERROR_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45c1e0ULL || rel >= 0x45c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045c880 size=496 callers=1 calls=5
   calls: GPUClassUtil_21, sub_46db60, sub_48d220, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45c880ULL || rel >= 0x45ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045ca70 size=2272 callers=2 calls=9
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_2, sub_4385e0, sub_458420, sub_46db60, sub_48e4e0, sub_48e9a0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45ca70ULL || rel >= 0x45d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045d350 size=96 callers=1 calls=0
*/
void sub_45d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45d350ULL || rel >= 0x45d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045d3b0 size=5360 callers=1 calls=26
   calls: GPUClassUtil_24, Unknown_Error_Code, sub_410f90, sub_411b00, sub_417a30, sub_440d50, sub_456bf0, sub_456f30, sub_4570b0, sub_457370, sub_457650, sub_46db60
   ... +14 more
   ref: GenerateGlare_Composite(): pGlareResultChromaticAberrationBlur is NULL.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX ERROR: 
   ref: CRenderGlare::GenerateGlare_Composite(): pTexUtil->DrawLightGhostLuminance() failed (0x%x: %s).
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderGlare.cpp(%d) : PPFX WARNING: 
   ref: CRenderGlare::GenerateGlare_Composite(): pTexUtil->DrawRectGPU_MadLumGammaWithLensDirtTn() failed (0
   ref: CRenderGlare::GenerateGlare_Composite(): pTexUtil->DrawLightGhost() failed (0x%x: %s).
   ref: ../src/GPU\GPUClassUtil.h
   ref: CRenderGlare::GenerateGlare_Composite(): pTexUtil->DrawRectGPU_MadLumGammaTn() failed (0x%x: %s).
*/
void GPURenderGlare_cpp_d_PPFX_WARNING(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45d3b0ULL || rel >= 0x45e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045e8a0 size=96 callers=1 calls=0
*/
void sub_45e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45e8a0ULL || rel >= 0x45e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045e900 size=32 callers=1 calls=0
*/
void sub_45e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45e900ULL || rel >= 0x45e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045e920 size=16 callers=1 calls=0
*/
void sub_45e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45e920ULL || rel >= 0x45e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045e930 size=16 callers=1 calls=0
*/
void sub_45e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45e930ULL || rel >= 0x45e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045e940 size=64 callers=1 calls=0
*/
void sub_45e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45e940ULL || rel >= 0x45e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045e980 size=528 callers=1 calls=2
   calls: sub_49c8d0, sub_4a6160
*/
void sub_45e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45e980ULL || rel >= 0x45eb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045eb90 size=496 callers=1 calls=1
   calls: sub_49ad30
*/
void sub_45eb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45eb90ULL || rel >= 0x45ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045ed80 size=160 callers=1 calls=0
*/
void sub_45ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45ed80ULL || rel >= 0x45ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045ee20 size=96 callers=2 calls=0
*/
void sub_45ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45ee20ULL || rel >= 0x45ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045ee80 size=832 callers=1 calls=14
   calls: GPUClassUtil_14, GPUClassUtil_15, GPUClassUtil_17, GPUClassUtil_19, GPUClassUtil_20, GPURenderGlare_cpp_d_PPFX_ERROR_4, GPURenderGlare_cpp_d_PPFX_WARNING, sub_456f30, sub_45ed80, sub_46db60, sub_471410, sub_49e3a0
   ... +2 more
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45ee80ULL || rel >= 0x45f1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045f1c0 size=2592 callers=4 calls=9
   calls: GPUTextureUtil_cpp_d_PPFX_ERROR_3, GPUTextureUtil_cpp_d_PPFX_ERROR_8, sub_440c40, sub_440c60, sub_46db60, sub_471410, sub_478880, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45f1c0ULL || rel >= 0x45fbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045fbe0 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_45fbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45fbe0ULL || rel >= 0x45fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045fe50 size=48 callers=0 calls=0
   ref: ../src/GPU/miniz.c
*/
void miniz(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45fe50ULL || rel >= 0x45fe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045fe80 size=16 callers=0 calls=0
*/
void sub_45fe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45fe80ULL || rel >= 0x45fe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0045fe90 size=1184 callers=1 calls=1
   calls: sub_460330
*/
void sub_45fe90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x45fe90ULL || rel >= 0x460330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00460330 size=6320 callers=3 calls=0
*/
void sub_460330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x460330ULL || rel >= 0x461be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00461be0 size=384 callers=1 calls=2
   calls: sub_45fe90, sub_4b99a0
   ref: ../src/GPU/miniz.c
*/
void miniz_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x461be0ULL || rel >= 0x461d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00461d60 size=160 callers=4 calls=1
   calls: sub_417a30
   ref: FXDCT_GetDepthCastTypeFromDepthFormat(): eDepthFormat: 0x%x.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x461d60ULL || rel >= 0x461e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00461e00 size=288 callers=1 calls=0
*/
void sub_461e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x461e00ULL || rel >= 0x461f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00461f20 size=368 callers=1 calls=0
*/
void sub_461f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x461f20ULL || rel >= 0x462090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00462090 size=592 callers=3 calls=0
*/
void sub_462090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x462090ULL || rel >= 0x4622e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004622e0 size=80 callers=21 calls=0
*/
void sub_4622e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4622e0ULL || rel >= 0x462330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00462330 size=1472 callers=4 calls=4
   calls: sub_446a90, sub_446ae0, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp
*/
void GPUTextureUtil(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x462330ULL || rel >= 0x4628f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004628f0 size=512 callers=6 calls=0
*/
void sub_4628f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4628f0ULL || rel >= 0x462af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00462af0 size=320 callers=2 calls=0
*/
void sub_462af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x462af0ULL || rel >= 0x462c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00462c30 size=944 callers=4 calls=0
*/
void sub_462c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x462c30ULL || rel >= 0x462fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00462fe0 size=576 callers=436 calls=4
   calls: TFXString_2, sub_4512d0, sub_451530, sub_451880
   ref: _RGBALUM_RGBALUM
   ref: _ALPHA_RGB
   ref: _REINHARDRGBLUM_RGB
   ref: _RGBALUM_RGBFAST
   ref: _LOGRGBLUM_RGBFAST
   ref: _LOGRGBLUM_RGB
   ref: _REINHARDRGB_REINHARDRGB
   ref: _REINHARDRGB_RGB
*/
void REINHARDRGB_RGBFAST(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x462fe0ULL || rel >= 0x463220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00463220 size=288 callers=29 calls=3
   calls: TFXString_2, sub_4512d0, sub_451530
*/
void sub_463220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x463220ULL || rel >= 0x463340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00463340 size=448 callers=4 calls=4
   calls: REINHARDRGB_RGBFAST, TFXString_2, sub_4512d0, sub_451530
   ref: %s%d_%d
*/
void s_d__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x463340ULL || rel >= 0x463500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00463500 size=592 callers=104 calls=5
   calls: TFXString_2, allocated, sub_4512d0, sub_451530, sub_451880
   ref: _REINHARD_PREMAP
   ref: _LOGLUM
   ref: _REINHARDLUM
   ref: _ALPHALUM_PREMAP
   ref: _LINEAR
   ref: _LOG_PREMAP
   ref: _REINHARD_SENSITOMETRIC_PREMAP
   ref: _REINHARDLUM_PREMAP
*/
void SENSITOMETRIC_PREMAP(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x463500ULL || rel >= 0x463750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00463750 size=560 callers=2 calls=4
   calls: REINHARDRGB_RGBFAST, TFXString_2, allocated_3, sub_4512d0
   ref: _ARGB8
   ref: _RVALUE
   ref: _GVALUE
   ref: _RGBA8
   ref: _BVALUE
   ref: _AVALUE
   ref: _ABGR8
*/
void RVALUE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x463750ULL || rel >= 0x463980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00463980 size=240 callers=2 calls=4
   calls: RVALUE, TFXString_2, allocated_3, sub_4512d0
   ref: _USNORM
*/
void USNORM(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x463980ULL || rel >= 0x463a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00463a70 size=800 callers=1 calls=6
   calls: SENSITOMETRIC_PREMAP, TFXString_2, allocated, sub_4512d0, sub_451530, sub_451880
   ref: _VignetteSim
   ref: _PreMatrix
   ref: _Vignette
   ref: _Gamma
   ref: _Exposure
   ref: _Matrix
   ref: _Dither
*/
void _VignetteSim(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x463a70ULL || rel >= 0x463d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00463d90 size=576 callers=3 calls=8
   calls: TFXString, TFXString_2, TFXString_5, allocated_2, sub_4512d0, sub_451530, sub_4515c0, sub_452400
*/
void sub_463d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x463d90ULL || rel >= 0x463fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00463fd0 size=36880 callers=1 calls=20
   calls: GPUInterfaceEffect, REINHARDRGB_RGBFAST, SENSITOMETRIC_PREMAP, TFXString, TFXString_2, TFXString_7, USNORM, Unknown_Error_Code, _VignetteSim, allocated_2, miniz_2, s_d__d
   ... +8 more
   ref: tech_DepthOfField_CompositeBlurredLevelsFrontBlur_Tn
   ref: tech_DepthOfField_NormalizeBackgroundBlurFactor
   ref: tech_ScatterCoc_RadEclipse
   ref: tech_DilateScatteredColorT1_S37
   ref: tech_BokehBlurConditional_EclipseSeparateXY_S
   ref: tech_BokehBlurSmallAlpha_SeparateXY_S
   ref: tech_DepthFromDofFactor_USNORM_R
   ref: tech_Feedback
*/
void tech_MotionBlurMakeCameraVelocity_RGBA8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x463fd0ULL || rel >= 0x46cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046cfe0 size=224 callers=1 calls=1
   calls: sub_446620
*/
void sub_46cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46cfe0ULL || rel >= 0x46d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d0c0 size=240 callers=1 calls=1
   calls: sub_446620
*/
void sub_46d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d0c0ULL || rel >= 0x46d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d1b0 size=240 callers=1 calls=1
   calls: sub_446620
*/
void sub_46d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d1b0ULL || rel >= 0x46d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d2a0 size=256 callers=1 calls=1
   calls: sub_446620
*/
void sub_46d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d2a0ULL || rel >= 0x46d3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d3a0 size=272 callers=1 calls=1
   calls: sub_446620
*/
void sub_46d3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d3a0ULL || rel >= 0x46d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d4b0 size=304 callers=1 calls=1
   calls: sub_446620
*/
void sub_46d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d4b0ULL || rel >= 0x46d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d5e0 size=272 callers=1 calls=1
   calls: sub_446620
*/
void sub_46d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d5e0ULL || rel >= 0x46d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d6f0 size=240 callers=1 calls=1
   calls: sub_446620
*/
void sub_46d6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d6f0ULL || rel >= 0x46d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d7e0 size=432 callers=1 calls=3
   calls: Unknown_Error_Code, sub_417a30, tech_MotionBlurMakeCameraVelocity_RGBA8
   ref: ==== TEXSHADERSET::InitializeDevice() succeeded. ====
   ref: TEXSHADERSET::InitializeDevice(): CreateEffect() failed (0x%x: %s).
   ref: ==== TEXSHADERSET::InitializeDevice() ====
   ref: TEXSHADERSET::InitializeDevice(): m_pEffect->OnResetDevice() failed (0x%x: %s).
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d7e0ULL || rel >= 0x46d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046d990 size=464 callers=1 calls=1
   calls: sub_4b9a60
*/
void sub_46d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46d990ULL || rel >= 0x46db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046db60 size=256 callers=81 calls=1
   calls: sub_49eb30
*/
void sub_46db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46db60ULL || rel >= 0x46dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046dc60 size=1200 callers=0 calls=9
   calls: TFXString_2, TFXString_5, allocated_3, sub_4512d0, sub_4515c0, sub_49a9c0, sub_49ab20, sub_49f650, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp
   ref: ::m_pTextureMeasurement
   ref: ::m_pTexturePool
*/
void GPUTextureUtil_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46dc60ULL || rel >= 0x46e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046e110 size=176 callers=0 calls=4
   calls: sub_4708b0, sub_49ec80, sub_49f080, sub_4b9a60
*/
void sub_46e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46e110ULL || rel >= 0x46e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046e1c0 size=176 callers=0 calls=5
   calls: sub_4708b0, sub_49ec80, sub_49ecd0, sub_49f080, sub_4b9a60
*/
void sub_46e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46e1c0ULL || rel >= 0x46e270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046e270 size=224 callers=1 calls=2
   calls: Unknown_Error_Code, sub_417a30
   ref: CTextureUtil::InitializeDeviceSharedTexturePoolWithCheck(): m_pTexturePool->InitializeDevice() faile
   ref: CTextureUtil::InitializeDeviceSharedTexturePoolWithCheck(): m_pTexturePool->InitializeDevice() succe
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46e270ULL || rel >= 0x46e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046e350 size=16 callers=1 calls=0
*/
void sub_46e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46e350ULL || rel >= 0x46e360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046e360 size=992 callers=1 calls=5
   calls: allocated_3, sub_4512d0, sub_49a9c0, sub_49ab20, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp
   ref: ::m_pRenderTextureColorChart_ColorBarGraded
   ref: ::m_pRenderTextureColorChart_ColorBar
   ref: ::m_pRenderTextureColorChart_ColorBarLuminance
   ref: ::m_pRenderTextureColorChart_ColorBarGraded_Small
   ref: ::m_pRenderTextureColorChart_ColorBar_Small
*/
void GPUTextureUtil_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46e360ULL || rel >= 0x46e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046e740 size=832 callers=1 calls=5
   calls: allocated_3, sub_4512d0, sub_49a9c0, sub_49ab20, sub_4b99a0
   ref: ::m_pRenderTextureColorChart_ChromaticityDiagram
   ref: ::m_pRenderTextureColorChart_ChromaticityDiagramLegacyUV
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp
   ref: ::m_pRenderTextureColorChart_ChromaticityDiagramUV
   ref: ::m_pRenderTextureColorChart_ChromaticityDiagramLegacy
*/
void GPUTextureUtil_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46e740ULL || rel >= 0x46ea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046ea80 size=512 callers=0 calls=5
   calls: allocated_3, sub_4512d0, sub_49a9c0, sub_49ab20, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp
   ref: ::m_pRenderTextureColorChart_WaveformMonitor
   ref: ::m_pRenderTextureColorChart_WaveformSource
*/
void GPUTextureUtil_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46ea80ULL || rel >= 0x46ec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046ec80 size=336 callers=1 calls=2
   calls: GPUTextureUtil_3, GPUTextureUtil_4
*/
void sub_46ec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46ec80ULL || rel >= 0x46edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0046edd0 size=6208 callers=0 calls=14
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3, GPUTextureUtil, GPUTextureUtil_cpp_d_PPFX, GPUTextureUtil_cpp_d_PPFX_2, Unknown_Error_Code, sub_4116f0, sub_417a30, sub_446aa0, sub_446ae0, sub_470610, sub_49ed90
   ... +2 more
   ref: CTextureUtil::InitializeDevice(): m_pGPUDevice->CreateTexture(&m_pGPUTextureSpectrum) failed (0x%x: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp
   ref: CTextureUtil::InitializeDevice(): m_pGPUDevice->CreateTexture(&m_pGPUTextureFilmGrain) failed (0x%x:
   ref: CTextureUtil::InitializeDevice(): m_shaderSet.InitializeDevice() succeeded.
   ref: CTextureUtil::InitializeDevice(): m_pGPUDevice->CreateTexture(&m_pGPUTextureOne) failed (0x%x: %s).
   ref: ==== CTextureUtil::InitializeDevice() succeeded. ====
   ref: CTextureUtil::InitializeDevice(): m_pGPUDevice->CreateTexture(&m_pGPUTextureFullColorDitherMatrix) f
   ref: CTextureUtil::InitializeDevice(): m_shaderSet.InitializeDevice() failed (0x%x: %s).
*/
void GPUTextureUtil_cpp_d_PPFX_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x46edd0ULL || rel >= 0x470610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00470610 size=592 callers=7 calls=0
*/
void sub_470610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x470610ULL || rel >= 0x470860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00470860 size=32 callers=1 calls=0
*/
void sub_470860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x470860ULL || rel >= 0x470880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00470880 size=32 callers=1 calls=0
*/
void sub_470880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x470880ULL || rel >= 0x4708a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004708a0 size=16 callers=1 calls=0
*/
void sub_4708a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4708a0ULL || rel >= 0x4708b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004708b0 size=1424 callers=4 calls=2
   calls: sub_46d990, sub_4b9a60
*/
void sub_4708b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4708b0ULL || rel >= 0x470e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00470e40 size=48 callers=0 calls=1
   calls: sub_4708b0
*/
void sub_470e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x470e40ULL || rel >= 0x470e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00470e70 size=32 callers=0 calls=1
   calls: sub_49f260
*/
void sub_470e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x470e70ULL || rel >= 0x470e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00470e90 size=1408 callers=0 calls=2
   calls: sub_49f270, sub_4b9a60
*/
void sub_470e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x470e90ULL || rel >= 0x471410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00471410 size=80 callers=9 calls=0
*/
void sub_471410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x471410ULL || rel >= 0x471460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00471460 size=16 callers=3 calls=0
*/
void sub_471460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x471460ULL || rel >= 0x471470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00471470 size=1264 callers=6 calls=3
   calls: MATRIXT44_MatrixMultiply, sub_4100f0, sub_4155f0
*/
void sub_471470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x471470ULL || rel >= 0x471960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00471960 size=752 callers=1 calls=4
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3, GPUInterfaceEffect_cpp_d_PPFX_ERROR, sub_446620
*/
void sub_471960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x471960ULL || rel >= 0x471c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00471c50 size=784 callers=33 calls=5
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3, GPUInterfaceEffect_cpp_d_PPFX_ERROR, sub_446620, sub_471470
*/
void sub_471c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x471c50ULL || rel >= 0x471f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00471f60 size=752 callers=20 calls=5
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3, GPUInterfaceEffect_cpp_d_PPFX_ERROR, sub_46d0c0, sub_471470
*/
void sub_471f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x471f60ULL || rel >= 0x472250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00472250 size=832 callers=7 calls=5
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3, GPUInterfaceEffect_cpp_d_PPFX_ERROR, sub_46d1b0, sub_471470
*/
void sub_472250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x472250ULL || rel >= 0x472590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00472590 size=880 callers=3 calls=5
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3, GPUInterfaceEffect_cpp_d_PPFX_ERROR, sub_46d2a0, sub_471470
*/
void sub_472590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x472590ULL || rel >= 0x472900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00472900 size=976 callers=3 calls=5
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3, GPUInterfaceEffect_cpp_d_PPFX_ERROR, sub_46d3a0, sub_471470
*/
void sub_472900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x472900ULL || rel >= 0x472cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00472cd0 size=1152 callers=1 calls=5
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3, GPUInterfaceEffect_cpp_d_PPFX_ERROR, sub_46d4b0, sub_471470
*/
void sub_472cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x472cd0ULL || rel >= 0x473150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00473150 size=352 callers=0 calls=3
   calls: sub_471f60, sub_472250, sub_472590
*/
void sub_473150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x473150ULL || rel >= 0x4732b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004732b0 size=352 callers=1 calls=2
   calls: GPUInterfaceEffect_cpp_d_PPFX_ERROR, sub_46d6f0
*/
void sub_4732b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4732b0ULL || rel >= 0x473410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00473410 size=1200 callers=1 calls=4
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3, GPUInterfaceEffect_cpp_d_PPFX_ERROR, sub_446620
*/
void sub_473410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x473410ULL || rel >= 0x4738c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004738c0 size=16 callers=4 calls=0
*/
void sub_4738c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4738c0ULL || rel >= 0x4738d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004738d0 size=16 callers=1 calls=0
*/
void sub_4738d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4738d0ULL || rel >= 0x4738e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004738e0 size=624 callers=9 calls=0
*/
void sub_4738e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4738e0ULL || rel >= 0x473b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00473b50 size=576 callers=1 calls=1
   calls: sub_417a30
   ref: CTextureUtil::DrawRectGPU_TexCoordMadT1_Sn(): GetHandle_tech_TexCoordMadT1_Sn(%d) failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x473b50ULL || rel >= 0x473d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00473d90 size=576 callers=1 calls=1
   calls: sub_471c50
*/
void sub_473d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x473d90ULL || rel >= 0x473fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00473fd0 size=1440 callers=1 calls=1
   calls: sub_471c50
*/
void sub_473fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x473fd0ULL || rel >= 0x474570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00474570 size=1392 callers=1 calls=2
   calls: sub_471c50, sub_472900
*/
void sub_474570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x474570ULL || rel >= 0x474ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00474ae0 size=544 callers=2 calls=3
   calls: GPUClassUtil_24, sub_472590, sub_49cf50
*/
void sub_474ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x474ae0ULL || rel >= 0x474d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00474d00 size=368 callers=2 calls=3
   calls: GPUClassUtil_24, sub_473fd0, sub_49cf50
*/
void sub_474d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x474d00ULL || rel >= 0x474e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00474e70 size=736 callers=2 calls=3
   calls: GPUClassUtil_24, sub_474570, sub_49cf50
*/
void sub_474e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x474e70ULL || rel >= 0x475150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475150 size=464 callers=1 calls=3
   calls: GPUClassUtil_24, sub_471c50, sub_49cf50
*/
void sub_475150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475150ULL || rel >= 0x475320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475320 size=576 callers=1 calls=3
   calls: GPUClassUtil_24, sub_471c50, sub_49cf50
*/
void sub_475320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475320ULL || rel >= 0x475560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475560 size=1024 callers=1 calls=2
   calls: sub_417a30, sub_4738e0
   ref: CTextureUtil::DrawRectGPU_MadT1_Sn(): GetHandle_tech_MadT1_Sn(%d, %d) failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_ERROR_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475560ULL || rel >= 0x475960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475960 size=1056 callers=38 calls=4
   calls: sub_417a30, sub_442c50, sub_4738e0, sub_475d80
   ref: CTextureUtil::DrawRectGPU_MadT1_Sn(): GetHandle_tech_MadT1_Sn(%d, %d) failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_ERROR_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475960ULL || rel >= 0x475d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00475d80 size=1296 callers=9 calls=2
   calls: GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_442c50
*/
void sub_475d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x475d80ULL || rel >= 0x476290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476290 size=752 callers=8 calls=2
   calls: sub_417a30, sub_4738e0
   ref: CTextureUtil::DrawRectGPU_MadCocT2_Sn(): GetHandle_tech_MadCocT2_Sn(%d, %d) failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_ERROR_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476290ULL || rel >= 0x476580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476580 size=816 callers=1 calls=3
   calls: sub_417a30, sub_442c50, sub_4738e0
   ref: CTextureUtil::DrawRectGPU_MadT1_Sn(): GetHandle_tech_MadT1_Sn(%d, %d) failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_ERROR_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476580ULL || rel >= 0x4768b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004768b0 size=784 callers=3 calls=2
   calls: sub_442c50, sub_471c50
   ref: GetHandle_tex2D_aTexture
   ref: stage >= 0 && stage < 16
   ref: ../src/GPU/GPUTextureUtil.h
*/
void GetHandle_tex2D_aTexture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4768b0ULL || rel >= 0x476bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476bc0 size=896 callers=2 calls=1
   calls: sub_471c50
   ref: GetHandle_tex2D_aTexture
   ref: stage >= 0 && stage < 16
   ref: ../src/GPU/GPUTextureUtil.h
*/
void GetHandle_tex2D_aTexture_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476bc0ULL || rel >= 0x476f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00476f40 size=944 callers=1 calls=1
   calls: sub_471f60
   ref: GetHandle_tex2D_aTexture
   ref: stage >= 0 && stage < 16
   ref: ../src/GPU/GPUTextureUtil.h
*/
void GetHandle_tex2D_aTexture_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x476f40ULL || rel >= 0x4772f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004772f0 size=96 callers=1 calls=1
   calls: GetHandle_tex2D_aTexture_2
*/
void sub_4772f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4772f0ULL || rel >= 0x477350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477350 size=144 callers=1 calls=1
   calls: GetHandle_tex2D_aTexture_3
*/
void sub_477350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477350ULL || rel >= 0x4773e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004773e0 size=784 callers=1 calls=1
   calls: sub_471f60
*/
void sub_4773e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4773e0ULL || rel >= 0x4776f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004776f0 size=864 callers=1 calls=0
   ref: GetHandle_tex2D_aTexture
   ref: stage >= 0 && stage < 16
   ref: ../src/GPU/GPUTextureUtil.h
*/
void GetHandle_tex2D_aTexture_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4776f0ULL || rel >= 0x477a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477a50 size=816 callers=0 calls=2
   calls: GetHandle_tex2D_aTexture, sub_471c50
   ref: GetHandle_tex2D_aTexture
   ref: stage >= 0 && stage < 16
   ref: ../src/GPU/GPUTextureUtil.h
*/
void GetHandle_tex2D_aTexture_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477a50ULL || rel >= 0x477d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00477d80 size=832 callers=1 calls=1
   calls: sub_471c50
   ref: GetHandle_tex2D_aTexture
   ref: stage >= 0 && stage < 16
   ref: ../src/GPU/GPUTextureUtil.h
*/
void GetHandle_tex2D_aTexture_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x477d80ULL || rel >= 0x4780c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004780c0 size=736 callers=1 calls=2
   calls: sub_471c50, sub_471f60
*/
void sub_4780c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4780c0ULL || rel >= 0x4783a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004783a0 size=320 callers=1 calls=1
   calls: sub_473410
*/
void sub_4783a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4783a0ULL || rel >= 0x4784e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004784e0 size=496 callers=2 calls=0
*/
void sub_4784e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4784e0ULL || rel >= 0x4786d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004786d0 size=432 callers=2 calls=1
   calls: sub_4784e0
*/
void sub_4786d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4786d0ULL || rel >= 0x478880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478880 size=16 callers=3 calls=0
*/
void sub_478880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478880ULL || rel >= 0x478890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478890 size=1536 callers=1 calls=3
   calls: sub_471c50, sub_471f60, sub_4784e0
*/
void sub_478890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478890ULL || rel >= 0x478e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00478e90 size=2320 callers=1 calls=4
   calls: MATRIXT44_MatrixMultiply, sub_40f660, sub_4155f0, sub_471c50
*/
void sub_478e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x478e90ULL || rel >= 0x4797a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004797a0 size=1168 callers=1 calls=5
   calls: sub_440c40, sub_440c60, sub_440c80, sub_471c50, sub_471f60
*/
void sub_4797a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4797a0ULL || rel >= 0x479c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00479c30 size=1024 callers=1 calls=1
   calls: sub_471c50
*/
void sub_479c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x479c30ULL || rel >= 0x47a030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047a030 size=848 callers=2 calls=2
   calls: sub_471f60, sub_472250
*/
void sub_47a030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47a030ULL || rel >= 0x47a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047a380 size=1232 callers=1 calls=1
   calls: sub_471f60
*/
void sub_47a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47a380ULL || rel >= 0x47a850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047a850 size=528 callers=1 calls=1
   calls: sub_472250
*/
void sub_47a850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47a850ULL || rel >= 0x47aa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047aa60 size=400 callers=1 calls=1
   calls: sub_471c50
*/
void sub_47aa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47aa60ULL || rel >= 0x47abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047abf0 size=96 callers=1 calls=0
*/
void sub_47abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47abf0ULL || rel >= 0x47ac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047ac50 size=512 callers=1 calls=1
   calls: sub_471f60
   ref: GetHandle_tex2D_aTexture
   ref: stage >= 0 && stage < 16
   ref: ../src/GPU/GPUTextureUtil.h
*/
void GetHandle_tex2D_aTexture_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47ac50ULL || rel >= 0x47ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047ae50 size=496 callers=1 calls=1
   calls: sub_471f60
   ref: GetHandle_tex2D_aTexture
   ref: stage >= 0 && stage < 16
   ref: ../src/GPU/GPUTextureUtil.h
*/
void GetHandle_tex2D_aTexture_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47ae50ULL || rel >= 0x47b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047b040 size=608 callers=1 calls=2
   calls: sub_442c50, sub_471f60
   ref: GetHandle_tex2D_aTexture
   ref: stage >= 0 && stage < 16
   ref: ../src/GPU/GPUTextureUtil.h
*/
void GetHandle_tex2D_aTexture_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47b040ULL || rel >= 0x47b2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047b2a0 size=704 callers=1 calls=3
   calls: sub_417a30, sub_471c50, sub_4738e0
   ref: CTextureUtil::DrawRectGPU_DepthOfFieldLayerMask(): GetHandle_tech_DepthOfField_BackgroundLayerMaskT1
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_ERROR_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47b2a0ULL || rel >= 0x47b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047b560 size=896 callers=1 calls=2
   calls: sub_471c50, sub_4738e0
*/
void sub_47b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47b560ULL || rel >= 0x47b8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047b8e0 size=432 callers=1 calls=1
   calls: sub_412cd0
*/
void sub_47b8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47b8e0ULL || rel >= 0x47ba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047ba90 size=1152 callers=3 calls=1
   calls: sub_470610
*/
void sub_47ba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47ba90ULL || rel >= 0x47bf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047bf10 size=384 callers=4 calls=2
   calls: sub_462af0, sub_47ba90
*/
void sub_47bf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47bf10ULL || rel >= 0x47c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c090 size=608 callers=2 calls=2
   calls: sub_47bf10, sub_47c090
*/
void sub_47c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c090ULL || rel >= 0x47c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c2f0 size=576 callers=2 calls=1
   calls: sub_47c090
*/
void sub_47c2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c2f0ULL || rel >= 0x47c530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c530 size=928 callers=0 calls=0
*/
void sub_47c530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c530ULL || rel >= 0x47c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047c8d0 size=4240 callers=1 calls=4
   calls: MATRIXT44_MatrixMultiply, sub_417a30, sub_472900, sub_47ba90
   ref: CTextureUtil::DrawRectGPU_TonemapHDR(): 0x%04x, HDRTMAP_IsPremap(eTonemap: %d): %s,
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_ERROR_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47c8d0ULL || rel >= 0x47d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047d960 size=1600 callers=10 calls=7
   calls: GPUTextureUtil_cpp_d_PPFX_ERROR_4, GPUTextureUtil_cpp_d_PPFX_ERROR_6, sub_411df0, sub_442c50, sub_49cf50, sub_49da70, sub_49e3a0
*/
void sub_47d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47d960ULL || rel >= 0x47dfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047dfa0 size=96 callers=34 calls=1
   calls: sub_47d960
*/
void sub_47dfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47dfa0ULL || rel >= 0x47e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047e000 size=96 callers=2 calls=0
*/
void sub_47e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47e000ULL || rel >= 0x47e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0047e060 size=9136 callers=7 calls=16
   calls: GPUTextureUtil_cpp_d_PPFX_WARNING, MATRIXT44_MatrixMultiply, sub_410300, sub_410380, sub_410400, sub_410f90, sub_411190, sub_411b00, sub_417a30, sub_471f60, sub_4738e0, sub_47ba90
   ... +4 more
   ref: CTextureUtil::DrawRectGPU_OptoElectronicTransfer(): Output format sRGB can not be supported with bac
   ref: CTextureUtil::DrawRectGPU_OptoElectronicTransfer(): Backend color space PFXTBCSM_SCRGB can be used o
   ref: CTextureUtil::DrawRectGPU_OptoElectronicTransfer(): GetHandle_tech_OptoElectronicTransfer(%d, %d) fa
   ref: CTextureUtil::DrawRectGPU_OptoElectronicTransfer(): Output format sRGB can be used only with PFXEOTF
   ref: CTextureUtil::DrawRectGPU_OptoElectronicTransfer(): fCorrectForSystemGamma can be modified only with
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX WARNING: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_WARNING(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x47e060ULL || rel >= 0x480410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00480410 size=816 callers=2 calls=0
*/
void sub_480410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x480410ULL || rel >= 0x480740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00480740 size=608 callers=3 calls=2
   calls: GPUClassUtil_24, sub_49cf50
*/
void sub_480740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x480740ULL || rel >= 0x4809a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004809a0 size=1632 callers=0 calls=4
   calls: sub_411190, sub_411b00, sub_4155f0, sub_471c50
*/
void sub_4809a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4809a0ULL || rel >= 0x481000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481000 size=384 callers=4 calls=2
   calls: GPUClassUtil_24, sub_49cf50
*/
void sub_481000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481000ULL || rel >= 0x481180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481180 size=448 callers=1 calls=1
   calls: sub_471c50
*/
void sub_481180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481180ULL || rel >= 0x481340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481340 size=512 callers=1 calls=2
   calls: sub_471c50, sub_4738e0
*/
void sub_481340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481340ULL || rel >= 0x481540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481540 size=352 callers=2 calls=4
   calls: GPUClassUtil_24, sub_411df0, sub_481340, sub_49cf50
*/
void sub_481540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481540ULL || rel >= 0x4816a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004816a0 size=384 callers=1 calls=4
   calls: GPUClassUtil_24, sub_411df0, sub_473d90, sub_49cf50
*/
void sub_4816a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4816a0ULL || rel >= 0x481820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481820 size=928 callers=2 calls=6
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_415370, sub_471c50, sub_4738e0, sub_49cf50
*/
void sub_481820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481820ULL || rel >= 0x481bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481bc0 size=496 callers=2 calls=3
   calls: GPUClassUtil_24, sub_478890, sub_49cf50
*/
void sub_481bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481bc0ULL || rel >= 0x481db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00481db0 size=608 callers=1 calls=3
   calls: GPUClassUtil_24, sub_4773e0, sub_49cf50
*/
void sub_481db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x481db0ULL || rel >= 0x482010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482010 size=400 callers=2 calls=3
   calls: GPUClassUtil_24, sub_478e90, sub_49cf50
*/
void sub_482010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482010ULL || rel >= 0x4821a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004821a0 size=480 callers=1 calls=3
   calls: GPUClassUtil_24, sub_4797a0, sub_49cf50
*/
void sub_4821a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4821a0ULL || rel >= 0x482380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482380 size=48 callers=2 calls=0
*/
void sub_482380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482380ULL || rel >= 0x4823b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004823b0 size=1024 callers=1 calls=5
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_411c70, sub_43fc90, sub_49cf50
*/
void sub_4823b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4823b0ULL || rel >= 0x4827b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004827b0 size=1472 callers=2 calls=3
   calls: MATRIXT44_MatrixMultiply, sub_40f980, sub_40ffc0
*/
void sub_4827b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4827b0ULL || rel >= 0x482d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482d70 size=416 callers=1 calls=2
   calls: sub_411c70, sub_4827b0
*/
void sub_482d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482d70ULL || rel >= 0x482f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482f10 size=192 callers=1 calls=2
   calls: sub_4823b0, sub_4827b0
*/
void sub_482f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482f10ULL || rel >= 0x482fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00482fd0 size=3712 callers=3 calls=9
   calls: MATRIXT44_MatrixMultiply, sub_40f6e0, sub_40f8d0, sub_40f980, sub_40ffc0, sub_411c70, sub_4155f0, sub_4628f0, sub_499890
*/
void sub_482fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x482fd0ULL || rel >= 0x483e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00483e50 size=1904 callers=2 calls=5
   calls: sub_40f6e0, sub_411c70, sub_4628f0, sub_482fd0, sub_499890
*/
void sub_483e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x483e50ULL || rel >= 0x4845c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004845c0 size=2448 callers=1 calls=9
   calls: GPUClassUtil_24, MATRIXT44_MatrixMultiply, sub_40f8d0, sub_4155f0, sub_43fc90, sub_479c30, sub_482fd0, sub_499890, sub_49cf50
*/
void sub_4845c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4845c0ULL || rel >= 0x484f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00484f50 size=1728 callers=2 calls=10
   calls: GPUClassUtil_24, MATRIXT44_MatrixMultiply, sub_40f6e0, sub_40f980, sub_4155f0, sub_428030, sub_4628f0, sub_47a030, sub_49cf50, sub_49e3a0
*/
void sub_484f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x484f50ULL || rel >= 0x485610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00485610 size=5232 callers=1 calls=17
   calls: GPUClassUtil_24, MATRIXT44_MatrixMultiply, sub_40f6e0, sub_40f980, sub_4155f0, sub_428030, sub_4628f0, sub_47a030, sub_47a380, sub_47a850, sub_47aa60, sub_47d960
   ... +5 more
*/
void sub_485610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x485610ULL || rel >= 0x486a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00486a80 size=1584 callers=2 calls=5
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_413330, sub_413730, sub_49cf50
*/
void sub_486a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x486a80ULL || rel >= 0x4870b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004870b0 size=1472 callers=1 calls=5
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_4134d0, sub_413860, sub_49cf50
*/
void sub_4870b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4870b0ULL || rel >= 0x487670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00487670 size=3344 callers=1 calls=11
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3, MATRIXT44_MatrixMultiply, sub_40f660, sub_40f6e0, sub_40f980, sub_40f9b0, sub_40fd00, sub_40fde0, sub_4155f0, sub_4732b0
*/
void sub_487670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x487670ULL || rel >= 0x488380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488380 size=1216 callers=2 calls=2
   calls: sub_40f6e0, sub_410070
*/
void sub_488380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488380ULL || rel >= 0x488840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488840 size=32 callers=0 calls=0
*/
void sub_488840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488840ULL || rel >= 0x488860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488860 size=1328 callers=1 calls=5
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_487670, sub_488380, sub_49cf50
*/
void sub_488860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488860ULL || rel >= 0x488d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00488d90 size=2304 callers=1 calls=3
   calls: GPUClassUtil_24, sub_471c50, sub_49cf50
*/
void sub_488d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x488d90ULL || rel >= 0x489690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489690 size=1472 callers=1 calls=3
   calls: GPUClassUtil_24, sub_471c50, sub_49cf50
*/
void sub_489690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489690ULL || rel >= 0x489c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489c50 size=352 callers=1 calls=1
   calls: sub_471960
*/
void sub_489c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489c50ULL || rel >= 0x489db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00489db0 size=4048 callers=1 calls=4
   calls: GPUInterfaceBuffer_cpp_d_PPFX_ERROR_2, GPUInterfaceBuffer_cpp_d_PPFX_ERROR_3, GPUInterfaceEffect_cpp_d_PPFX_ERROR, sub_46d5e0
*/
void sub_489db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x489db0ULL || rel >= 0x48ad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ad80 size=1120 callers=2 calls=2
   calls: sub_417a30, sub_471c50
   ref: FXDCT_GetDepthCastTypeFromDepthFormat(): eDepthFormat: 0x%x.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_ERROR_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ad80ULL || rel >= 0x48b1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b1e0 size=160 callers=2 calls=1
   calls: GPUTextureUtil_cpp_d_PPFX_ERROR_9
*/
void sub_48b1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b1e0ULL || rel >= 0x48b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b280 size=704 callers=1 calls=1
   calls: GPUTextureUtil_cpp_d_PPFX_ERROR_9
*/
void sub_48b280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b280ULL || rel >= 0x48b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b540 size=416 callers=1 calls=2
   calls: sub_417a30, sub_471c50
   ref: FXDCT_GetDepthCastTypeFromDepthFormat(): eDepthFormat: 0x%x.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: 
*/
void GPUTextureUtil_cpp_d_PPFX_ERROR_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b540ULL || rel >= 0x48b6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b6e0 size=304 callers=1 calls=1
   calls: sub_471c50
*/
void sub_48b6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b6e0ULL || rel >= 0x48b810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048b810 size=512 callers=2 calls=4
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_7, sub_411df0, sub_49cf50
*/
void sub_48b810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48b810ULL || rel >= 0x48ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ba10 size=432 callers=1 calls=3
   calls: GPUClassUtil_24, sub_471c50, sub_49cf50
*/
void sub_48ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ba10ULL || rel >= 0x48bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048bbc0 size=1520 callers=1 calls=5
   calls: sub_4155f0, sub_471c50, sub_471f60, sub_472250, sub_472cd0
*/
void sub_48bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48bbc0ULL || rel >= 0x48c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048c1b0 size=2160 callers=1 calls=2
   calls: sub_4155f0, sub_471f60
*/
void sub_48c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48c1b0ULL || rel >= 0x48ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ca20 size=528 callers=1 calls=3
   calls: GPUClassUtil_24, sub_48c1b0, sub_49cf50
*/
void sub_48ca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ca20ULL || rel >= 0x48cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048cc30 size=1008 callers=1 calls=5
   calls: sub_474ae0, sub_474d00, sub_474e70, sub_48ca20, sub_49e3a0
*/
void sub_48cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48cc30ULL || rel >= 0x48d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d020 size=512 callers=2 calls=5
   calls: GPUClassUtil_24, sub_413160, sub_442c50, sub_47b560, sub_49cf50
*/
void sub_48d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d020ULL || rel >= 0x48d220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d220 size=816 callers=8 calls=3
   calls: GPUClassUtil_24, GetHandle_tex2D_aTexture_2, sub_49cf50
*/
void sub_48d220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d220ULL || rel >= 0x48d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d550 size=672 callers=1 calls=3
   calls: GPUClassUtil_24, GetHandle_tex2D_aTexture_6, sub_49cf50
*/
void sub_48d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d550ULL || rel >= 0x48d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048d7f0 size=736 callers=1 calls=2
   calls: sub_471f60, sub_49da70
*/
void sub_48d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48d7f0ULL || rel >= 0x48dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048dad0 size=896 callers=1 calls=3
   calls: sub_410f90, sub_411b00, sub_471f60
*/
void sub_48dad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48dad0ULL || rel >= 0x48de50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048de50 size=1040 callers=1 calls=3
   calls: sub_48dad0, sub_49cf50, sub_49da70
*/
void sub_48de50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48de50ULL || rel >= 0x48e260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048e260 size=640 callers=2 calls=3
   calls: GPUClassUtil_24, sub_4780c0, sub_49cf50
*/
void sub_48e260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48e260ULL || rel >= 0x48e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048e4e0 size=560 callers=1 calls=3
   calls: GPUClassUtil_24, sub_48e710, sub_49cf50
*/
void sub_48e4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48e4e0ULL || rel >= 0x48e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048e710 size=656 callers=1 calls=1
   calls: sub_472250
*/
void sub_48e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48e710ULL || rel >= 0x48e9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048e9a0 size=400 callers=1 calls=3
   calls: GPUClassUtil_24, sub_48eb30, sub_49cf50
*/
void sub_48e9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48e9a0ULL || rel >= 0x48eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048eb30 size=640 callers=1 calls=1
   calls: sub_471f60
*/
void sub_48eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48eb30ULL || rel >= 0x48edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048edb0 size=352 callers=2 calls=3
   calls: GPUClassUtil_24, sub_48ef10, sub_49cf50
*/
void sub_48edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48edb0ULL || rel >= 0x48ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048ef10 size=800 callers=1 calls=1
   calls: sub_471c50
*/
void sub_48ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48ef10ULL || rel >= 0x48f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f230 size=576 callers=1 calls=4
   calls: sub_48f470, sub_48f620, sub_48f900, sub_49ca70
*/
void sub_48f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f230ULL || rel >= 0x48f470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f470 size=432 callers=1 calls=3
   calls: GPUClassUtil_24, sub_471c50, sub_49cf50
*/
void sub_48f470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f470ULL || rel >= 0x48f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f620 size=736 callers=1 calls=3
   calls: GPUClassUtil_24, sub_471c50, sub_49cf50
*/
void sub_48f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f620ULL || rel >= 0x48f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048f900 size=576 callers=1 calls=3
   calls: GPUClassUtil_24, sub_471c50, sub_49cf50
*/
void sub_48f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48f900ULL || rel >= 0x48fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0048fb40 size=1248 callers=2 calls=5
   calls: GPUClassUtil_24, sub_47d960, sub_48d220, sub_490020, sub_49cf50
*/
void sub_48fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x48fb40ULL || rel >= 0x490020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490020 size=1360 callers=1 calls=1
   calls: sub_472250
*/
void sub_490020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490020ULL || rel >= 0x490570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490570 size=528 callers=1 calls=3
   calls: GPUClassUtil_24, sub_471f60, sub_49cf50
*/
void sub_490570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490570ULL || rel >= 0x490780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490780 size=1776 callers=2 calls=5
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_412270, sub_475d80, sub_49cf50
*/
void sub_490780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490780ULL || rel >= 0x490e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00490e70 size=1904 callers=3 calls=5
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, GPUTextureUtil_cpp_d_PPFX_ERROR_5, sub_475d80, sub_49cf50
*/
void sub_490e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x490e70ULL || rel >= 0x4915e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004915e0 size=96 callers=1 calls=1
   calls: sub_490e70
*/
void sub_4915e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4915e0ULL || rel >= 0x491640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491640 size=1392 callers=1 calls=4
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, GPUTextureUtil_cpp_d_PPFX_ERROR_5, sub_49cf50
*/
void sub_491640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491640ULL || rel >= 0x491bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00491bb0 size=1280 callers=1 calls=3
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, GPUTextureUtil_cpp_d_PPFX_ERROR_5
*/
void sub_491bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x491bb0ULL || rel >= 0x4920b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004920b0 size=496 callers=1 calls=1
   calls: sub_491bb0
*/
void sub_4920b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4920b0ULL || rel >= 0x4922a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004922a0 size=3632 callers=1 calls=4
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, GPUTextureUtil_cpp_d_PPFX_ERROR_5, sub_48d220
*/
void sub_4922a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4922a0ULL || rel >= 0x4930d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004930d0 size=976 callers=2 calls=4
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_4122b0, sub_49cf50
*/
void sub_4930d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4930d0ULL || rel >= 0x4934a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004934a0 size=784 callers=0 calls=4
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_412400, sub_49cf50
*/
void sub_4934a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4934a0ULL || rel >= 0x4937b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004937b0 size=528 callers=0 calls=4
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_412560, sub_49cf50
*/
void sub_4937b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4937b0ULL || rel >= 0x4939c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004939c0 size=544 callers=1 calls=4
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_412940, sub_49cf50
*/
void sub_4939c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4939c0ULL || rel >= 0x493be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493be0 size=576 callers=1 calls=3
   calls: sub_48d220, sub_490780, sub_4939c0
*/
void sub_493be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493be0ULL || rel >= 0x493e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493e20 size=272 callers=4 calls=1
   calls: sub_4930d0
*/
void sub_493e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493e20ULL || rel >= 0x493f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00493f30 size=832 callers=5 calls=5
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_412170, sub_4930d0, sub_49cf50
*/
void sub_493f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x493f30ULL || rel >= 0x494270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00494270 size=3536 callers=1 calls=5
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_413b10, sub_414af0, sub_49cf50
*/
void sub_494270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x494270ULL || rel >= 0x495040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00495040 size=4064 callers=1 calls=5
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_413c60, sub_414be0, sub_49cf50
*/
void sub_495040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x495040ULL || rel >= 0x496020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496020 size=2848 callers=1 calls=5
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_413ea0, sub_414db0, sub_49cf50
*/
void sub_496020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496020ULL || rel >= 0x496b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00496b40 size=4064 callers=6 calls=11
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_4121e0, sub_4141e0, sub_415030, sub_475d80, sub_486a80, sub_494270, sub_495040, sub_496020, sub_49cf50
*/
void sub_496b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x496b40ULL || rel >= 0x497b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00497b20 size=3296 callers=4 calls=6
   calls: GPUClassUtil_24, sub_4121e0, sub_4146f0, sub_475d80, sub_496b40, sub_49cf50
*/
void sub_497b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x497b20ULL || rel >= 0x498800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498800 size=688 callers=1 calls=1
   calls: sub_472590
*/
void sub_498800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498800ULL || rel >= 0x498ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00498ab0 size=1952 callers=1 calls=1
   calls: sub_498800
*/
void sub_498ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x498ab0ULL || rel >= 0x499250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499250 size=1600 callers=1 calls=3
   calls: sub_47d960, sub_48d220, sub_497b20
*/
void sub_499250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499250ULL || rel >= 0x499890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499890 size=736 callers=4 calls=0
*/
void sub_499890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499890ULL || rel >= 0x499b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499b70 size=656 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_499b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499b70ULL || rel >= 0x499e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499e00 size=256 callers=1 calls=2
   calls: sub_4512d0, sub_4b9a60
*/
void sub_499e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499e00ULL || rel >= 0x499f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499f00 size=48 callers=0 calls=1
   calls: sub_499e00
*/
void sub_499f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499f00ULL || rel >= 0x499f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499f30 size=16 callers=0 calls=0
*/
void sub_499f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499f30ULL || rel >= 0x499f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499f40 size=16 callers=0 calls=0
*/
void sub_499f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499f40ULL || rel >= 0x499f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499f50 size=16 callers=0 calls=0
*/
void sub_499f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499f50ULL || rel >= 0x499f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499f60 size=16 callers=0 calls=0
*/
void sub_499f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499f60ULL || rel >= 0x499f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499f70 size=32 callers=0 calls=0
*/
void sub_499f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499f70ULL || rel >= 0x499f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499f90 size=16 callers=0 calls=0
*/
void sub_499f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499f90ULL || rel >= 0x499fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499fa0 size=16 callers=0 calls=0
*/
void sub_499fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499fa0ULL || rel >= 0x499fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499fb0 size=16 callers=0 calls=0
*/
void sub_499fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499fb0ULL || rel >= 0x499fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00499fc0 size=144 callers=0 calls=2
   calls: TFXString_2, sub_4512d0
*/
void sub_499fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x499fc0ULL || rel >= 0x49a050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a050 size=16 callers=0 calls=0
*/
void sub_49a050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a050ULL || rel >= 0x49a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a060 size=16 callers=0 calls=0
*/
void sub_49a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a060ULL || rel >= 0x49a070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a070 size=32 callers=0 calls=0
*/
void sub_49a070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a070ULL || rel >= 0x49a090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a090 size=16 callers=0 calls=0
*/
void sub_49a090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a090ULL || rel >= 0x49a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a0a0 size=16 callers=0 calls=0
*/
void sub_49a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a0a0ULL || rel >= 0x49a0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a0b0 size=64 callers=0 calls=0
*/
void sub_49a0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a0b0ULL || rel >= 0x49a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a0f0 size=32 callers=0 calls=0
*/
void sub_49a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a0f0ULL || rel >= 0x49a110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a110 size=16 callers=0 calls=0
*/
void sub_49a110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a110ULL || rel >= 0x49a120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a120 size=32 callers=0 calls=0
*/
void sub_49a120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a120ULL || rel >= 0x49a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a140 size=16 callers=0 calls=0
*/
void sub_49a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a140ULL || rel >= 0x49a150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a150 size=16 callers=0 calls=0
*/
void sub_49a150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a150ULL || rel >= 0x49a160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a160 size=16 callers=0 calls=0
*/
void sub_49a160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a160ULL || rel >= 0x49a170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a170 size=16 callers=0 calls=0
*/
void sub_49a170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a170ULL || rel >= 0x49a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a180 size=16 callers=0 calls=0
*/
void sub_49a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a180ULL || rel >= 0x49a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a190 size=16 callers=0 calls=0
*/
void sub_49a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a190ULL || rel >= 0x49a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a1a0 size=16 callers=0 calls=0
*/
void sub_49a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a1a0ULL || rel >= 0x49a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a1b0 size=16 callers=0 calls=0
*/
void sub_49a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a1b0ULL || rel >= 0x49a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a1c0 size=16 callers=0 calls=0
*/
void sub_49a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a1c0ULL || rel >= 0x49a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a1d0 size=16 callers=0 calls=0
*/
void sub_49a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a1d0ULL || rel >= 0x49a1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a1e0 size=16 callers=0 calls=0
*/
void sub_49a1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a1e0ULL || rel >= 0x49a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a1f0 size=96 callers=0 calls=0
*/
void sub_49a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a1f0ULL || rel >= 0x49a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a250 size=16 callers=0 calls=0
*/
void sub_49a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a250ULL || rel >= 0x49a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a260 size=16 callers=0 calls=0
*/
void sub_49a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a260ULL || rel >= 0x49a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a270 size=16 callers=0 calls=0
*/
void sub_49a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a270ULL || rel >= 0x49a280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a280 size=64 callers=0 calls=1
   calls: sub_43fc00
*/
void sub_49a280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a280ULL || rel >= 0x49a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a2c0 size=64 callers=0 calls=1
   calls: sub_43fc30
*/
void sub_49a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a2c0ULL || rel >= 0x49a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a300 size=384 callers=1 calls=5
   calls: GPUInterfaceResource, TinyEffect_2, sub_4512d0, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceEffect.cpp
*/
void GPUInterfaceEffect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a300ULL || rel >= 0x49a480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a480 size=352 callers=11 calls=17
   calls: Unknown_Error_Code, sub_417a30, sub_43fca0, sub_43fcc0, sub_43fce0, sub_43fd00, sub_43fd20, sub_44f450, sub_44fa70, sub_44fa90, sub_44fab0, sub_44fad0
   ... +5 more
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceEffect.cpp(%d) : PPFX ERROR: 
   ref: IGPUEffect::SetupGraphicsPipelineState(): pTinyEffect->SetupRenderStateForSiGfx() failed (0x%x: %s).
*/
void GPUInterfaceEffect_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a480ULL || rel >= 0x49a5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a5e0 size=32 callers=0 calls=0
*/
void sub_49a5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a5e0ULL || rel >= 0x49a600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a600 size=32 callers=0 calls=0
*/
void sub_49a600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a600ULL || rel >= 0x49a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a620 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_49a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a620ULL || rel >= 0x49a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a890 size=304 callers=3 calls=1
   calls: sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp
*/
void GPURenderTexture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a890ULL || rel >= 0x49a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049a9c0 size=96 callers=60 calls=1
   calls: sub_49eb30
*/
void sub_49a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49a9c0ULL || rel >= 0x49aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049aa20 size=256 callers=0 calls=5
   calls: TFXString_2, TFXString_5, allocated_3, sub_4512d0, sub_4515c0
*/
void sub_49aa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49aa20ULL || rel >= 0x49ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ab20 size=528 callers=60 calls=3
   calls: sub_49ad30, sub_49ec80, sub_4b9a60
*/
void sub_49ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ab20ULL || rel >= 0x49ad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ad30 size=656 callers=41 calls=0
*/
void sub_49ad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ad30ULL || rel >= 0x49afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049afc0 size=16 callers=2 calls=0
*/
void sub_49afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49afc0ULL || rel >= 0x49afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049afd0 size=80 callers=0 calls=2
   calls: sub_49ec80, sub_4b9a60
*/
void sub_49afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49afd0ULL || rel >= 0x49b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049b020 size=96 callers=0 calls=3
   calls: sub_49ec80, sub_49ecd0, sub_4b9a60
*/
void sub_49b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49b020ULL || rel >= 0x49b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049b080 size=432 callers=0 calls=3
   calls: GPURenderTexture_2, sub_417a30, sub_49ed90
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp(%d) : PPFX: 
   ref: Instance name: %s
   ref: ==== CRenderTexture::InitializeDevice() ====
*/
void GPURenderTexture_cpp_d_PPFX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49b080ULL || rel >= 0x49b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049b230 size=2304 callers=1 calls=6
   calls: GPURenderTexture, GPURenderTexture_4, sub_446e20, sub_49ad30, sub_49ca70, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp
*/
void GPURenderTexture_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49b230ULL || rel >= 0x49bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049bb30 size=1408 callers=0 calls=4
   calls: sub_49ad30, sub_49ec80, sub_49ed90, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp
*/
void GPURenderTexture_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49bb30ULL || rel >= 0x49c0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c0b0 size=1376 callers=0 calls=3
   calls: sub_49e3a0, sub_49f080, sub_4b9a60
*/
void sub_49c0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c0b0ULL || rel >= 0x49c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c610 size=48 callers=0 calls=1
   calls: sub_49f260
*/
void sub_49c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c610ULL || rel >= 0x49c640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c640 size=288 callers=0 calls=2
   calls: sub_49f270, sub_4b9a60
*/
void sub_49c640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c640ULL || rel >= 0x49c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c760 size=368 callers=4 calls=3
   calls: GPURenderTexture, GPURenderTexture_5, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp
*/
void GPURenderTexture_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c760ULL || rel >= 0x49c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c8d0 size=16 callers=41 calls=0
*/
void sub_49c8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c8d0ULL || rel >= 0x49c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049c8e0 size=400 callers=1 calls=2
   calls: sub_446e20, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp
*/
void GPURenderTexture_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49c8e0ULL || rel >= 0x49ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ca70 size=1248 callers=3 calls=2
   calls: sub_49cfa0, sub_49e3a0
*/
void sub_49ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ca70ULL || rel >= 0x49cf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049cf50 size=80 callers=71 calls=0
*/
void sub_49cf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49cf50ULL || rel >= 0x49cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049cfa0 size=688 callers=16 calls=1
   calls: sub_447010
*/
void sub_49cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49cfa0ULL || rel >= 0x49d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d250 size=1408 callers=88 calls=7
   calls: GPURenderTexture_cpp_d_PPFX_ERROR, GPURenderTexture_cpp_d_PPFX_ERROR_2, sub_46db60, sub_4783a0, sub_49cfa0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d250ULL || rel >= 0x49d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049d7d0 size=672 callers=2 calls=1
   calls: sub_417a30
   ref: CRenderTexture::BeginTiling(): CRenderTexture::BeginTiling() has already been called.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp(%d) : PPFX ERROR: 
   ref: CRenderTexture::BeginTiling(): Any render target textures not found.
   ref: CRenderTexture::BeginTiling(): Current render texture(s) must have tiling informations.
*/
void GPURenderTexture_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49d7d0ULL || rel >= 0x49da70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049da70 size=1168 callers=14 calls=3
   calls: GPUClassUtil_24, GPURenderTexture_cpp_d_PPFX_ERROR, sub_49e3a0
*/
void sub_49da70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49da70ULL || rel >= 0x49df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049df00 size=384 callers=1 calls=0
*/
void sub_49df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49df00ULL || rel >= 0x49e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e080 size=528 callers=4 calls=1
   calls: sub_417a30
   ref: CRenderTexture::EndTiling(): CRenderTexture::BeginTiling() was never called.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp(%d) : PPFX ERROR: 
   ref: CRenderTexture::EndTiling(): Current render texture(s) must have tiling informations.
*/
void GPURenderTexture_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e080ULL || rel >= 0x49e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e290 size=272 callers=3 calls=2
   calls: GPURenderTexture_cpp_d_PPFX_ERROR_2, sub_49df00
*/
void sub_49e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e290ULL || rel >= 0x49e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e3a0 size=1264 callers=43 calls=3
   calls: GPURenderTexture_cpp_d_PPFX_ERROR_2, sub_49cfa0, sub_49e290
*/
void sub_49e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e3a0ULL || rel >= 0x49e890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049e890 size=640 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_49e890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49e890ULL || rel >= 0x49eb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eb10 size=16 callers=1 calls=0
*/
void sub_49eb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eb10ULL || rel >= 0x49eb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eb20 size=16 callers=1 calls=0
*/
void sub_49eb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eb20ULL || rel >= 0x49eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eb30 size=80 callers=8 calls=1
   calls: TFXString
*/
void sub_49eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eb30ULL || rel >= 0x49eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049eb80 size=176 callers=0 calls=5
   calls: TFXString_2, TFXString_5, allocated_3, sub_4512d0, sub_4515c0
*/
void sub_49eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49eb80ULL || rel >= 0x49ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ec30 size=80 callers=2 calls=0
*/
void sub_49ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ec30ULL || rel >= 0x49ec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ec80 size=80 callers=23 calls=0
*/
void sub_49ec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ec80ULL || rel >= 0x49ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ecd0 size=96 callers=8 calls=1
   calls: GPUResourceManage_cpp_d_PPFX_WARNING_2
*/
void sub_49ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ecd0ULL || rel >= 0x49ed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ed30 size=96 callers=0 calls=2
   calls: GPUResourceManage_cpp_d_PPFX_WARNING_2, sub_4512d0
*/
void sub_49ed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ed30ULL || rel >= 0x49ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ed90 size=48 callers=10 calls=1
   calls: GPUResourceManage_cpp_d_PPFX_WARNING
*/
void sub_49ed90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ed90ULL || rel >= 0x49edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049edc0 size=704 callers=1 calls=6
   calls: GPUMemoryAllocator_14, allocated_3, allocated_4, sub_417a30, sub_4512d0, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUResourceManage.cpp
   ref:  might not call UninitializeDevice().
   ref: CGPUResourceManage::RegisterStaticGPUDevice():
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUResourceManage.cpp(%d) : PPFX WARNING: 
   ref: " is already registered.
*/
void GPUResourceManage_cpp_d_PPFX_WARNING(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49edc0ULL || rel >= 0x49f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f080 size=48 callers=3 calls=1
   calls: GPUResourceManage_cpp_d_PPFX_WARNING_2
*/
void sub_49f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f080ULL || rel >= 0x49f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f0b0 size=432 callers=3 calls=5
   calls: allocated_3, allocated_4, sub_417a30, sub_4512d0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUResourceManage.cpp(%d) : PPFX WARNING: 
   ref: " is not registered.
   ref: WORN: "
*/
void GPUResourceManage_cpp_d_PPFX_WARNING_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f0b0ULL || rel >= 0x49f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f260 size=16 callers=8 calls=0
*/
void sub_49f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f260ULL || rel >= 0x49f270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f270 size=16 callers=8 calls=0
*/
void sub_49f270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f270ULL || rel >= 0x49f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f280 size=352 callers=1 calls=1
   calls: sub_4b99a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f280ULL || rel >= 0x49f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f3e0 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_49f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f3e0ULL || rel >= 0x49f650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f650 size=80 callers=2 calls=1
   calls: sub_49eb30
*/
void sub_49f650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f650ULL || rel >= 0x49f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f6a0 size=272 callers=0 calls=6
   calls: TFXString_2, TFXString_5, allocated_3, sub_4512d0, sub_4515c0, sub_4b9a60
*/
void sub_49f6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f6a0ULL || rel >= 0x49f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f7b0 size=64 callers=1 calls=0
*/
void sub_49f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f7b0ULL || rel >= 0x49f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049f7f0 size=1056 callers=4 calls=7
   calls: TFXString_7, sub_417a30, sub_4512d0, sub_49a9c0, sub_49ab20, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTexturePool.cpp
   ref: ../src/GPU/GPUMemoryAllocator.h
   ref: CRenderTexturePool::AllocateTextures(): Shared: %d, Generated: %d, %s
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTexturePool.cpp(%d) : PPFX: 
*/
void GPURenderTexturePool_cpp_d_PPFX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49f7f0ULL || rel >= 0x49fc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049fc10 size=80 callers=8 calls=1
   calls: GPURenderTexturePool_cpp_d_PPFX
*/
void sub_49fc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49fc10ULL || rel >= 0x49fc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049fc60 size=352 callers=9 calls=1
   calls: sub_4b9a60
*/
void sub_49fc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49fc60ULL || rel >= 0x49fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049fdc0 size=48 callers=4 calls=1
   calls: sub_49fc60
*/
void sub_49fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49fdc0ULL || rel >= 0x49fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049fdf0 size=224 callers=1 calls=1
   calls: sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTexturePool.cpp
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPURenderTexturePool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49fdf0ULL || rel >= 0x49fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049fed0 size=112 callers=1 calls=1
   calls: sub_49c8d0
*/
void sub_49fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49fed0ULL || rel >= 0x49ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ff40 size=144 callers=0 calls=2
   calls: sub_49ec80, sub_4b9a60
*/
void sub_49ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ff40ULL || rel >= 0x49ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0049ffd0 size=160 callers=0 calls=3
   calls: sub_49ec80, sub_49ecd0, sub_4b9a60
*/
void sub_49ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x49ffd0ULL || rel >= 0x4a0070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0070 size=144 callers=0 calls=1
   calls: sub_49ed90
*/
void sub_4a0070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0070ULL || rel >= 0x4a0100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0100 size=112 callers=0 calls=0
*/
void sub_4a0100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0100ULL || rel >= 0x4a0170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0170 size=32 callers=0 calls=1
   calls: sub_49f260
*/
void sub_4a0170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0170ULL || rel >= 0x4a0190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0190 size=304 callers=0 calls=2
   calls: sub_49f270, sub_4b9a60
*/
void sub_4a0190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0190ULL || rel >= 0x4a02c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a02c0 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_4a02c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a02c0ULL || rel >= 0x4a0530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0530 size=16 callers=2 calls=0
*/
void sub_4a0530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0530ULL || rel >= 0x4a0540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0540 size=320 callers=1 calls=2
   calls: sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUGlareDef.cpp
*/
void GPUGlareDef(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0540ULL || rel >= 0x4a0680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0680 size=96 callers=1 calls=1
   calls: sub_4b9a60
*/
void sub_4a0680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0680ULL || rel >= 0x4a06e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a06e0 size=848 callers=2 calls=2
   calls: sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUGlareDef.cpp
*/
void GPUGlareDef_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a06e0ULL || rel >= 0x4a0a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0a30 size=208 callers=2 calls=1
   calls: sub_4b9a60
*/
void sub_4a0a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0a30ULL || rel >= 0x4a0b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0b00 size=64 callers=1 calls=0
*/
void sub_4a0b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0b00ULL || rel >= 0x4a0b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0b40 size=112 callers=0 calls=1
   calls: sub_4b9a60
*/
void sub_4a0b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0b40ULL || rel >= 0x4a0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0bb0 size=320 callers=1 calls=2
   calls: sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUGlareDef.cpp
*/
void GPUGlareDef_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0bb0ULL || rel >= 0x4a0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0cf0 size=544 callers=2 calls=2
   calls: GPUGlareDef_3, sub_4b9a60
*/
void sub_4a0cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0cf0ULL || rel >= 0x4a0f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a0f10 size=256 callers=1 calls=1
   calls: sub_4a0cf0
   ref: UserDef
*/
void UserDef(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a0f10ULL || rel >= 0x4a1010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a1010 size=1440 callers=1 calls=3
   calls: GPUGlareDef_2, sub_4a0cf0, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUGlareDef.cpp
*/
void GPUGlareDef_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a1010ULL || rel >= 0x4a15b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a15b0 size=224 callers=2 calls=1
   calls: sub_4b9a60
*/
void sub_4a15b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a15b0ULL || rel >= 0x4a1690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a1690 size=5360 callers=1 calls=2
   calls: ppfxTypes_2, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUGlareDef.cpp
*/
void GPUGlareDef_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a1690ULL || rel >= 0x4a2b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a2b80 size=96 callers=3 calls=1
   calls: sub_4b9a60
*/
void sub_4a2b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a2b80ULL || rel >= 0x4a2be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a2be0 size=576 callers=4 calls=1
   calls: sub_4a2e20
   ref: i >= 0 && i < ELMS
   ref: ../include\PPFX/ppfxTypes.h
*/
void ppfxTypes_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a2be0ULL || rel >= 0x4a2e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a2e20 size=3744 callers=2 calls=1
   calls: sub_4a3cc0
*/
void sub_4a2e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a2e20ULL || rel >= 0x4a3cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3cc0 size=448 callers=1 calls=0
*/
void sub_4a3cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3cc0ULL || rel >= 0x4a3e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a3e80 size=2016 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
   ref: CrossFilter
   ref: Anamorphic
   ref: Vertical Streak
   ref: Vertical
   ref: Lens Flare
   ref: Spectral Sunny Cross
   ref: Sunny Cross Filter
   ref: Horizontal Streak
*/
void CrossFilter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a3e80ULL || rel >= 0x4a4660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a4660 size=64 callers=12 calls=1
   calls: sub_49eb30
*/
void sub_4a4660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a4660ULL || rel >= 0x4a46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a46a0 size=192 callers=0 calls=5
   calls: TFXString_2, TFXString_5, allocated_3, sub_4512d0, sub_4515c0
*/
void sub_4a46a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a46a0ULL || rel >= 0x4a4760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a4760 size=64 callers=0 calls=1
   calls: sub_49ec80
*/
void sub_4a4760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a4760ULL || rel >= 0x4a47a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

