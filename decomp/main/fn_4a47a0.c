/* main functions 004a47a0..004ce070 (28 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 004a47a0 size=64 callers=0 calls=2
   calls: sub_49ec80, sub_49ecd0
*/
void sub_4a47a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a47a0ULL || rel >= 0x4a47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a47e0 size=2752 callers=0 calls=10
   calls: TFXString_2, TFXString_7, Unknown_Error_Code, allocated_2, allocated_3, sub_417a30, sub_4512d0, sub_49a9c0, sub_49ed90, sub_4b99a0
   ref: CRenderTextureArray::InitializeDevice(): m_pGPUDevice->CreateTexture() failed (0x%x: %s).
   ref: CRenderTextureArray::InitializeDevice(): m_pGPUDevice->CreateDepthStencilSurface() failed (0x%x: %s)
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTextureArray.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTextureArray.cpp
   ref: CRenderTexture::m_apTextureDepthTexture[
*/
void GPURenderTextureArray_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a47e0ULL || rel >= 0x4a52a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a52a0 size=448 callers=0 calls=1
   calls: sub_4b9a60
*/
void sub_4a52a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a52a0ULL || rel >= 0x4a5460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5460 size=80 callers=0 calls=1
   calls: sub_49f260
*/
void sub_4a5460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5460ULL || rel >= 0x4a54b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a54b0 size=352 callers=0 calls=2
   calls: sub_49f270, sub_4b9a60
*/
void sub_4a54b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a54b0ULL || rel >= 0x4a5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5610 size=1792 callers=12 calls=11
   calls: TFXString_7, Unknown_Error_Code, allocated_2, allocated_3, sub_417a30, sub_4512d0, sub_49a9c0, sub_49ab20, sub_49ec30, sub_49ec80, sub_4b99a0
   ref: CRenderTextureArray::Initialize(): %s->Initialize() succeeded.
   ref: ::m_ppTexture[
   ref: Instance name: %s
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTextureArray.cpp(%d) : PPFX: 
   ref: ::m_ppTexGenMipMap[
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTextureArray.cpp(%d) : PPFX ERROR: 
   ref: ==== CRenderTextureArray::Initialize() ====
   ref: CRenderTextureArray::Initialize(): m_ppTexGenMipMap[%d]->Initialize() failed (0x%x: %s).
*/
void GPURenderTextureArray_cpp_d_PPFX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5610ULL || rel >= 0x4a5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5d10 size=576 callers=3 calls=1
   calls: sub_49ad30
*/
void sub_4a5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5d10ULL || rel >= 0x4a5f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5f50 size=160 callers=1 calls=1
   calls: sub_49afc0
*/
void sub_4a5f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5f50ULL || rel >= 0x4a5ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a5ff0 size=128 callers=18 calls=0
*/
void sub_4a5ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a5ff0ULL || rel >= 0x4a6070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a6070 size=240 callers=1 calls=1
   calls: sub_49da70
*/
void sub_4a6070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a6070ULL || rel >= 0x4a6160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a6160 size=1088 callers=9 calls=1
   calls: sub_49cfa0
*/
void sub_4a6160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a6160ULL || rel >= 0x4a65a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a65a0 size=1200 callers=1 calls=9
   calls: GetHandle_tex2D_aTexture, sub_440cb0, sub_440d50, sub_442c50, sub_46db60, sub_471410, sub_49da70, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a65a0ULL || rel >= 0x4a6a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a6a50 size=80 callers=2 calls=0
*/
void sub_4a6a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a6a50ULL || rel >= 0x4a6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a6aa0 size=832 callers=2 calls=9
   calls: GPUTextureUtil_cpp_d_PPFX_ERROR_4, Unknown_Error_Code, sub_417a30, sub_446620, sub_46db60, sub_471410, sub_49cf50, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPURenderTextureArray.cpp(%d) : PPFX ERROR: 
   ref: ../src/GPU\GPUClassUtil.h
   ref: CRenderTextureArray::CopyToSurface(): pSrcTexture->GetDevice() failed (0x%x: %s).
*/
void GPURenderTextureArray_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a6aa0ULL || rel >= 0x4a6de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a6de0 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_4a6de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a6de0ULL || rel >= 0x4a7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a7050 size=368 callers=1 calls=0
*/
void sub_4a7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a7050ULL || rel >= 0x4a71c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a71c0 size=464 callers=1 calls=1
   calls: sub_4a7050
*/
void sub_4a71c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a71c0ULL || rel >= 0x4a7390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a7390 size=672 callers=2 calls=0
*/
void sub_4a7390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a7390ULL || rel >= 0x4a7630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a7630 size=304 callers=1 calls=1
   calls: sub_49eb30
*/
void sub_4a7630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a7630ULL || rel >= 0x4a7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a7760 size=640 callers=0 calls=5
   calls: TFXString_2, TFXString_5, allocated_3, sub_4512d0, sub_4515c0
*/
void sub_4a7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a7760ULL || rel >= 0x4a79e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a79e0 size=992 callers=1 calls=3
   calls: sub_4a71c0, sub_4a7dc0, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp
*/
void GPUDepthOfField(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a79e0ULL || rel >= 0x4a7dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a7dc0 size=416 callers=2 calls=0
*/
void sub_4a7dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a7dc0ULL || rel >= 0x4a7f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004a7f60 size=8400 callers=1 calls=18
   calls: GPUDepthOfField, GPURenderTexturePool, GPURenderTexturePool_cpp_d_PPFX, TFXString_7, allocated_2, allocated_3, sub_442bc0, sub_4512d0, sub_4515c0, sub_46db60, sub_49a9c0, sub_49ab20
   ... +6 more
   ref: ].m_pResultMergedScatterBackground
   ref: ::m_pApertureFilterSharedLevelSourcePool
   ref: ::m_apScatterDilationBackTexture[
   ref: ].m_pResultLarge
   ref: ].m_pResultMaskedBackgroundSmall
   ref: ].m_pResultMaskedBackgroundLarge
   ref: ].m_apSourceMaskedBackground[
   ref: ::m_apScatterGradiantMaskTexture[
*/
void GPUDepthOfField_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4a7f60ULL || rel >= 0x4aa030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa030 size=160 callers=2 calls=1
   calls: sub_4385e0
*/
void sub_4aa030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa030ULL || rel >= 0x4aa0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa0d0 size=400 callers=1 calls=5
   calls: GPUDepthOfField_2, Unknown_Error_Code, sub_417a30, sub_49ec80, sub_4a7390
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: 
   ref: CDepthOfField::Initialize(): ValidateInitParam() failed (0x%x: %s).
*/
void GPUDepthOfField_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa0d0ULL || rel >= 0x4aa260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa260 size=48 callers=1 calls=0
*/
void sub_4aa260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa260ULL || rel >= 0x4aa290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa290 size=784 callers=1 calls=2
   calls: sub_49c8d0, sub_49fed0
*/
void sub_4aa290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa290ULL || rel >= 0x4aa5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa5a0 size=496 callers=1 calls=1
   calls: sub_49ad30
*/
void sub_4aa5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa5a0ULL || rel >= 0x4aa790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa790 size=64 callers=0 calls=1
   calls: sub_49ec80
*/
void sub_4aa790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa790ULL || rel >= 0x4aa7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa7d0 size=64 callers=0 calls=2
   calls: sub_49ec80, sub_49ecd0
*/
void sub_4aa7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa7d0ULL || rel >= 0x4aa810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa810 size=80 callers=0 calls=2
   calls: GPUDepthOfField_cpp_d_PPFX_ERROR_2, sub_49ed90
*/
void sub_4aa810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa810ULL || rel >= 0x4aa860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aa860 size=6592 callers=1 calls=10
   calls: GPUDepthOfField_cpp_d_PPFX_ERROR_3, GPUTextureUtil, Unknown_Error_Code, sub_40f610, sub_417a30, sub_446ae0, sub_461f20, sub_462090, sub_4b99a0, sub_4b9a60
   ref: CDepthOfField::CreateDeviceResources(): m_pGPUDevice->CreateTexture(&m_pGPUScatterEclipseTexture) fa
   ref: CDepthOfField::CreateDeviceResources(): m_pGPUDevice->CreateTexture(&m_aapGPUScatterBokehLutTexture[
   ref: CDepthOfField::CreateDeviceResources(): m_pGPUDevice->CreateTexture(&m_aapGPUScatterBokehLutMinTextu
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp
*/
void GPUDepthOfField_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aa860ULL || rel >= 0x4ac220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac220 size=384 callers=0 calls=0
*/
void sub_4ac220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac220ULL || rel >= 0x4ac3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac3a0 size=144 callers=0 calls=2
   calls: sub_49f260, sub_4a7390
*/
void sub_4ac3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac3a0ULL || rel >= 0x4ac430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ac430 size=4000 callers=0 calls=6
   calls: sub_46db60, sub_49f270, sub_49fc60, sub_49fdc0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ac430ULL || rel >= 0x4ad3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ad3d0 size=6720 callers=1 calls=11
   calls: MATRIXT44_MatrixMultiply, Unknown_Error_Code, sub_40fb30, sub_410070, sub_410130, sub_417a30, sub_446a90, sub_446ae0, sub_4aff50, sub_4b99a0, sub_4b9a60
   ref: CDepthOfField::CreateScatterBokehOpticsTexture(): m_pGPUDevice->CreateTexture(&pGPUScatterBokehOptic
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: 
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp
   ref: CDepthOfField::CreateScatterBokehOpticsTexture(): m_pGPUDevice->CreateTexture(&pGPUScatterBokehOptic
*/
void GPUDepthOfField_cpp_d_PPFX_ERROR_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ad3d0ULL || rel >= 0x4aee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aee10 size=192 callers=1 calls=0
*/
void sub_4aee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aee10ULL || rel >= 0x4aeed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aeed0 size=96 callers=1 calls=0
*/
void sub_4aeed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aeed0ULL || rel >= 0x4aef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aef30 size=240 callers=2 calls=3
   calls: sub_46db60, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aef30ULL || rel >= 0x4af020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004af020 size=1648 callers=2 calls=1
   calls: sub_4af690
*/
void sub_4af020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4af020ULL || rel >= 0x4af690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004af690 size=992 callers=1 calls=0
*/
void sub_4af690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4af690ULL || rel >= 0x4afa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afa70 size=32 callers=1 calls=0
*/
void sub_4afa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afa70ULL || rel >= 0x4afa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afa90 size=16 callers=2 calls=0
*/
void sub_4afa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afa90ULL || rel >= 0x4afaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afaa0 size=64 callers=1 calls=0
*/
void sub_4afaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afaa0ULL || rel >= 0x4afae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afae0 size=352 callers=2 calls=0
*/
void sub_4afae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afae0ULL || rel >= 0x4afc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afc40 size=320 callers=1 calls=1
   calls: sub_4af020
*/
void sub_4afc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afc40ULL || rel >= 0x4afd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004afd80 size=432 callers=1 calls=0
*/
void sub_4afd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4afd80ULL || rel >= 0x4aff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aff30 size=32 callers=1 calls=0
*/
void sub_4aff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aff30ULL || rel >= 0x4aff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004aff50 size=1792 callers=2 calls=0
*/
void sub_4aff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4aff50ULL || rel >= 0x4b0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0650 size=1888 callers=2 calls=9
   calls: GPUClassUtil_24, GPUClassUtil_29, GPUClassUtil_30, sub_46db60, sub_472250, sub_4738c0, sub_49cf50, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0650ULL || rel >= 0x4b0db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b0db0 size=848 callers=1 calls=5
   calls: sub_46db60, sub_4738c0, sub_4b4ab0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b0db0ULL || rel >= 0x4b1100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b1100 size=2208 callers=1 calls=8
   calls: MATRIXT44_MatrixMultiply, sub_4100f0, sub_415370, sub_462090, sub_46db60, sub_4738c0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b1100ULL || rel >= 0x4b19a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b19a0 size=4112 callers=4 calls=16
   calls: GPUClassUtil_28, sub_417a30, sub_442c50, sub_46db60, sub_475150, sub_47dfa0, sub_4915e0, sub_491640, sub_4920b0, sub_4922a0, sub_493be0, sub_493e20
   ... +4 more
   ref: SetApertureFilterLevelVisualize() does not work properly.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX WARNING: 
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUDepthOfField_cpp_d_PPFX_WARNING(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b19a0ULL || rel >= 0x4b29b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b29b0 size=2256 callers=1 calls=9
   calls: GPUClassUtil_24, GPUDepthOfField_cpp_d_PPFX_WARNING, sub_442c50, sub_46db60, sub_47b8e0, sub_47dfa0, sub_48d020, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b29b0ULL || rel >= 0x4b3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b3280 size=800 callers=1 calls=7
   calls: sub_46db60, sub_48d220, sub_490780, sub_490e70, sub_496b40, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b3280ULL || rel >= 0x4b35a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b35a0 size=80 callers=6 calls=0
*/
void sub_4b35a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b35a0ULL || rel >= 0x4b35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b35f0 size=3920 callers=1 calls=12
   calls: GPUClassUtil_24, GPUInterfaceEffect_cpp_d_PPFX_ERROR, MATRIXT44_MatrixMultiply, sub_4155f0, sub_46cfe0, sub_46db60, sub_4738c0, sub_4738d0, sub_49cf50, sub_4b4ab0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b35f0ULL || rel >= 0x4b4540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4540 size=912 callers=1 calls=4
   calls: sub_46db60, sub_47dfa0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4540ULL || rel >= 0x4b48d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b48d0 size=480 callers=1 calls=4
   calls: sub_46db60, sub_481820, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b48d0ULL || rel >= 0x4b4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4ab0 size=400 callers=3 calls=0
*/
void sub_4b4ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4ab0ULL || rel >= 0x4b4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4c40 size=464 callers=1 calls=5
   calls: GPUClassUtil_31, GPUClassUtil_32, GPUClassUtil_33, GPUClassUtil_34, GPUClassUtil_35
*/
void sub_4b4c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4c40ULL || rel >= 0x4b4e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4e10 size=480 callers=1 calls=5
   calls: sub_440c00, sub_46db60, sub_48b1e0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4e10ULL || rel >= 0x4b4ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b4ff0 size=2800 callers=1 calls=8
   calls: sub_46db60, sub_47dfa0, sub_4816a0, sub_48b810, sub_48ba10, sub_48d020, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b4ff0ULL || rel >= 0x4b5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5ae0 size=96 callers=2 calls=0
*/
void sub_4b5ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5ae0ULL || rel >= 0x4b5b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b5b40 size=2544 callers=1 calls=6
   calls: GPUClassUtil_24, GPUTextureUtil_cpp_d_PPFX_ERROR_4, sub_46db60, sub_47dfa0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b5b40ULL || rel >= 0x4b6530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b6530 size=2704 callers=1 calls=10
   calls: GPUClassUtil_24, GPUClassUtil_28, GPUClassUtil_38, GetHandle_tex2D_aTexture_7, GetHandle_tex2D_aTexture_8, GetHandle_tex2D_aTexture_9, sub_46db60, sub_49cf50, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b6530ULL || rel >= 0x4b6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b6fc0 size=752 callers=1 calls=11
   calls: GPUClassUtil_36, GPUClassUtil_37, GPUClassUtil_39, sub_417a30, sub_46db60, sub_471410, sub_47abf0, sub_4a7dc0, sub_4b4c40, sub_4b99a0, sub_4b9a60
   ref: CDepthOfField::ApplyDepthOfField(): ApplyDepthOfField_Composite() failed.
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: 
   ref: CDepthOfField::ApplyDepthOfField(): ApplyDepthOfField_ApertureFilterAllLevels() failed.
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUDepthOfField_cpp_d_PPFX_ERROR_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b6fc0ULL || rel >= 0x4b72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b72b0 size=16 callers=2 calls=0
*/
void sub_4b72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b72b0ULL || rel >= 0x4b72c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b72c0 size=16 callers=2 calls=0
*/
void sub_4b72c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b72c0ULL || rel >= 0x4b72d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b72d0 size=720 callers=0 calls=4
   calls: sub_1c0, sub_410f90, sub_415370, sub_4bc640
*/
void sub_4b72d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b72d0ULL || rel >= 0x4b75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b75a0 size=208 callers=1 calls=5
   calls: TFXString_2, TFXString_5, allocated_3, sub_4512d0, sub_4515c0
*/
void sub_4b75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b75a0ULL || rel >= 0x4b7670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7670 size=816 callers=1 calls=8
   calls: allocated_3, sub_4512d0, sub_46db60, sub_49a9c0, sub_49ab20, sub_49fc10, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureLuminance.cpp
   ref: ::m_pLuminanceTexture
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUTextureLuminance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7670ULL || rel >= 0x4b79a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b79a0 size=16 callers=2 calls=0
*/
void sub_4b79a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b79a0ULL || rel >= 0x4b79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b79b0 size=64 callers=0 calls=1
   calls: sub_49ec80
*/
void sub_4b79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b79b0ULL || rel >= 0x4b79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b79f0 size=64 callers=0 calls=2
   calls: sub_49ec80, sub_49ecd0
*/
void sub_4b79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b79f0ULL || rel >= 0x4b7a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7a30 size=144 callers=0 calls=1
   calls: sub_49ed90
*/
void sub_4b7a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7a30ULL || rel >= 0x4b7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7ac0 size=160 callers=0 calls=0
*/
void sub_4b7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7ac0ULL || rel >= 0x4b7b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7b60 size=48 callers=0 calls=1
   calls: sub_49f260
*/
void sub_4b7b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7b60ULL || rel >= 0x4b7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7b90 size=464 callers=0 calls=5
   calls: sub_46db60, sub_49f270, sub_49fc60, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7b90ULL || rel >= 0x4b7d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7d60 size=480 callers=1 calls=4
   calls: sub_46db60, sub_47dfa0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7d60ULL || rel >= 0x4b7f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b7f40 size=768 callers=1 calls=6
   calls: sub_46db60, sub_47dfa0, sub_48d7f0, sub_49e3a0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b7f40ULL || rel >= 0x4b8240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b8240 size=528 callers=1 calls=8
   calls: GPUClassUtil_41, GPUClassUtil_42, sub_440d50, sub_46db60, sub_471410, sub_49e3a0, sub_4b99a0, sub_4b9a60
   ref: ../src/GPU\GPUClassUtil.h
*/
void GPUClassUtil_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b8240ULL || rel >= 0x4b8450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b8450 size=640 callers=2 calls=0
*/
void sub_4b8450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b8450ULL || rel >= 0x4b86d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b86d0 size=64 callers=3 calls=1
   calls: sub_49eb30
*/
void sub_4b86d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b86d0ULL || rel >= 0x4b8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b8710 size=192 callers=0 calls=5
   calls: TFXString_2, TFXString_5, allocated_3, sub_4512d0, sub_4515c0
*/
void sub_4b8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b8710ULL || rel >= 0x4b87d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b87d0 size=96 callers=3 calls=2
   calls: GPUTextureLuminance_2, sub_49ec80
*/
void sub_4b87d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b87d0ULL || rel >= 0x4b8830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b8830 size=384 callers=1 calls=10
   calls: GPUTextureLuminance, allocated_3, sub_4512d0, sub_49a9c0, sub_49ab20, sub_49eb30, sub_49ec30, sub_49ec80, sub_4b75a0, sub_4b99a0
   ref: ::m_pTargetTexture
   ref: ::m_pQueryLuminance
   ref: C:/workspace/YEBIS_draft/src/GPU/GPUTextureLuminance.cpp
*/
void GPUTextureLuminance_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b8830ULL || rel >= 0x4b89b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b89b0 size=144 callers=3 calls=0
*/
void sub_4b89b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b89b0ULL || rel >= 0x4b8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b8a40 size=160 callers=3 calls=1
   calls: GPUClassUtil_43
*/
void sub_4b8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b8a40ULL || rel >= 0x4b8ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b8ae0 size=96 callers=1 calls=1
   calls: sub_462c30
*/
void sub_4b8ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b8ae0ULL || rel >= 0x4b8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b8b40 size=16 callers=1 calls=0
*/
void sub_4b8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b8b40ULL || rel >= 0x4b8b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b8b50 size=1520 callers=3 calls=2
   calls: sub_462c30, sub_4b8450
*/
void sub_4b8b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b8b50ULL || rel >= 0x4b9140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9140 size=176 callers=4 calls=1
   calls: sub_49ca70
*/
void sub_4b9140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9140ULL || rel >= 0x4b91f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b91f0 size=16 callers=2 calls=0
*/
void sub_4b91f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b91f0ULL || rel >= 0x4b9200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9200 size=16 callers=1 calls=0
*/
void sub_4b9200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9200ULL || rel >= 0x4b9210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9210 size=16 callers=1 calls=0
*/
void sub_4b9210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9210ULL || rel >= 0x4b9220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9220 size=64 callers=0 calls=1
   calls: sub_49ec80
*/
void sub_4b9220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9220ULL || rel >= 0x4b9260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9260 size=64 callers=0 calls=2
   calls: sub_49ec80, sub_49ecd0
*/
void sub_4b9260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9260ULL || rel >= 0x4b92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b92a0 size=224 callers=0 calls=1
   calls: sub_49ed90
*/
void sub_4b92a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b92a0ULL || rel >= 0x4b9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9380 size=64 callers=0 calls=0
*/
void sub_4b9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9380ULL || rel >= 0x4b93c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b93c0 size=80 callers=0 calls=1
   calls: sub_49f260
*/
void sub_4b93c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b93c0ULL || rel >= 0x4b9410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9410 size=208 callers=0 calls=2
   calls: sub_49f270, sub_4b9a60
*/
void sub_4b9410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9410ULL || rel >= 0x4b94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b94e0 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_4b94e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b94e0ULL || rel >= 0x4b9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9750 size=32 callers=0 calls=0
*/
void sub_4b9750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9750ULL || rel >= 0x4b9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9770 size=96 callers=0 calls=1
   calls: sub_4b9a60
*/
void sub_4b9770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9770ULL || rel >= 0x4b97d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b97d0 size=32 callers=2 calls=0
*/
void sub_4b97d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b97d0ULL || rel >= 0x4b97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b97f0 size=32 callers=0 calls=0
*/
void sub_4b97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b97f0ULL || rel >= 0x4b9810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9810 size=16 callers=0 calls=0
*/
void sub_4b9810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9810ULL || rel >= 0x4b9820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9820 size=16 callers=0 calls=0
*/
void sub_4b9820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9820ULL || rel >= 0x4b9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9830 size=16 callers=0 calls=0
*/
void sub_4b9830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9830ULL || rel >= 0x4b9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9840 size=16 callers=13 calls=0
*/
void sub_4b9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9840ULL || rel >= 0x4b9850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9850 size=16 callers=6 calls=0
*/
void sub_4b9850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9850ULL || rel >= 0x4b9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9860 size=144 callers=0 calls=2
   calls: sub_410f90, sub_4bc640
*/
void sub_4b9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9860ULL || rel >= 0x4b98f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b98f0 size=144 callers=1 calls=1
   calls: sub_417a30
   ref: C:/workspace/YEBIS_draft/src/ppfxMemoryAllocator.cpp(%d) : PPFX ERROR: 
   ref: SetMemoryAllocator(): Call when any pfx interface is not instantiated yet.
*/
void ppfxMemoryAllocator_cpp_d_PPFX_ERROR(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b98f0ULL || rel >= 0x4b9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9980 size=32 callers=1 calls=0
*/
void sub_4b9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9980ULL || rel >= 0x4b99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b99a0 size=48 callers=360 calls=0
*/
void sub_4b99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b99a0ULL || rel >= 0x4b99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b99d0 size=144 callers=0 calls=2
   calls: sub_417a30, sub_860
   ref: C:/workspace/YEBIS_draft/src/ppfxMemoryAllocator.cpp(%d) : PPFX ERROR: 
   ref: CPfxMemoryAllocator::AllocMemory(size: %d):
*/
void ppfxMemoryAllocator_cpp_d_PPFX_ERROR_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b99d0ULL || rel >= 0x4b9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9a60 size=32 callers=427 calls=0
*/
void sub_4b9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9a60ULL || rel >= 0x4b9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9a80 size=16 callers=0 calls=0
*/
void sub_4b9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9a80ULL || rel >= 0x4b9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9a90 size=16 callers=0 calls=0
*/
void sub_4b9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9a90ULL || rel >= 0x4b9aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9aa0 size=16 callers=0 calls=0
*/
void sub_4b9aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9aa0ULL || rel >= 0x4b9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9ab0 size=176 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_4b9ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9ab0ULL || rel >= 0x4b9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9b60 size=368 callers=2 calls=3
   calls: sub_417a30, sub_4b9840, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX: 
   ref: IPfxBaseRenderToTexture::~IPfxBaseRenderToTexture(): IPfxBaseRenderToTexture::Uninitialize() implici
   ref: ==== IPfxBaseRenderToTexture::~IPfxBaseRenderToTexture() succeeded. ====
   ref: C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX ERROR: 
   ref: ==== IPfxBaseRenderToTexture::~IPfxBaseRenderToTexture() ====
*/
void ppfxRenderToTexture_cpp_d_PPFX(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9b60ULL || rel >= 0x4b9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9cd0 size=48 callers=0 calls=1
   calls: ppfxRenderToTexture_cpp_d_PPFX
*/
void sub_4b9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9cd0ULL || rel >= 0x4b9d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004b9d00 size=800 callers=0 calls=9
   calls: Unknown_Error_Code, sub_417a30, sub_446eb0, sub_49a9c0, sub_49ab20, sub_49c8d0, sub_4b9840, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp
   ref: IPfxBaseRenderToTexture::Initialize(): pRenderTexture->InitializeDevice() failed (0x%x: %s).
   ref: IPfxBaseRenderToTexture::Initialize(): IPfxBaseRenderToTexture::Uninitialize() implicitly called whi
   ref: C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX: 
   ref: ==== IPfxBaseRenderToTexture::Initialize() ====
   ref: IPfxBaseRenderToTexture::Initialize(): pRenderTexture->Initialize() failed (0x%x: %s).
   ref: ==== IPfxBaseRenderToTexture::Initialize() succeeded. ====
   ref: C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX ERROR: 
*/
void IPfxBaseRenderToTexture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4b9d00ULL || rel >= 0x4ba020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba020 size=288 callers=2 calls=3
   calls: sub_417a30, sub_4b9840, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX: 
   ref: ==== IPfxBaseRenderToTexture::Initialize() ====
   ref: ==== IPfxBaseRenderToTexture::Initialize() succeeded. ====
*/
void ppfxRenderToTexture_cpp_d_PPFX_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba020ULL || rel >= 0x4ba140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba140 size=352 callers=0 calls=3
   calls: sub_417a30, sub_4b9840, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX: 
   ref: IPfxBaseRenderToTexture::Uninitialize(): Called while BeginPostEffectScene() and EndPostEffectScene(
   ref: C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX ERROR: 
   ref: ==== IPfxBaseRenderToTexture::Uninitialize() succeeded. ====
   ref: ==== IPfxBaseRenderToTexture::Uninitialize() ====
*/
void ppfxRenderToTexture_cpp_d_PPFX_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba140ULL || rel >= 0x4ba2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba2a0 size=48 callers=0 calls=1
   calls: ppfxRenderToTexture_cpp_d_PPFX
*/
void sub_4ba2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba2a0ULL || rel >= 0x4ba2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba2d0 size=96 callers=2 calls=2
   calls: sub_4b97d0, sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp
   ref: IPfxRenderToTexture::Instantiate()
*/
void ppfxRenderToTexture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba2d0ULL || rel >= 0x4ba330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba330 size=624 callers=0 calls=3
   calls: sub_1c0, sub_410f90, sub_4bc640
*/
void sub_4ba330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba330ULL || rel >= 0x4ba5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ba5a0 size=2432 callers=1 calls=3
   calls: ppfxLicense_2, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp
*/
void ppfxLicense(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ba5a0ULL || rel >= 0x4baf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004baf20 size=1136 callers=7 calls=2
   calls: sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp
*/
void ppfxLicense_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4baf20ULL || rel >= 0x4bb390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb390 size=320 callers=1 calls=1
   calls: sub_4b99a0
   ref: C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp
*/
void ppfxLicense_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb390ULL || rel >= 0x4bb4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb4d0 size=96 callers=1 calls=1
   calls: TFXString_2
*/
void sub_4bb4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb4d0ULL || rel >= 0x4bb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb530 size=80 callers=1 calls=1
   calls: sub_4512d0
*/
void sub_4bb530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb530ULL || rel >= 0x4bb580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb580 size=80 callers=0 calls=1
   calls: sub_4512d0
*/
void sub_4bb580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb580ULL || rel >= 0x4bb5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb5d0 size=16 callers=1 calls=0
*/
void sub_4bb5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb5d0ULL || rel >= 0x4bb5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb5e0 size=16 callers=1 calls=0
*/
void sub_4bb5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb5e0ULL || rel >= 0x4bb5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb5f0 size=240 callers=1 calls=5
   calls: TFXString, ppfxLicense_4, sub_4512d0, sub_4515c0, sub_4bb6e0
*/
void sub_4bb5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb5f0ULL || rel >= 0x4bb6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bb6e0 size=1888 callers=1 calls=8
   calls: GPUMemoryAllocator_16, TFXString_2, TFXString_3, sub_4512d0, sub_4515c0, sub_452800, sub_4bc0d0, sub_4bc2d0
*/
void sub_4bb6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bb6e0ULL || rel >= 0x4bbe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bbe40 size=656 callers=1 calls=7
   calls: TFXString, TFXString_5, ppfxLicense, sub_4512d0, sub_4527b0, sub_4b99a0, sub_4b9a60
   ref: C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp
*/
void ppfxLicense_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bbe40ULL || rel >= 0x4bc0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc0d0 size=512 callers=1 calls=4
   calls: GPUMemoryAllocator_15, TFXString_2, allocated, sub_4512d0
*/
void sub_4bc0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc0d0ULL || rel >= 0x4bc2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc2d0 size=96 callers=3 calls=2
   calls: sub_4512d0, sub_4bc2d0
*/
void sub_4bc2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc2d0ULL || rel >= 0x4bc330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc330 size=320 callers=1 calls=4
   calls: allocated, sub_452800, sub_4b99a0, sub_6a54a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc330ULL || rel >= 0x4bc470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc470 size=320 callers=9 calls=5
   calls: TFXString, allocated, sub_452800, sub_4b99a0, sub_6a54a0
   ref: ../src/GPU/GPUMemoryAllocator.h
*/
void GPUMemoryAllocator_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc470ULL || rel >= 0x4bc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc5b0 size=144 callers=0 calls=2
   calls: sub_410f90, sub_4bc640
*/
void sub_4bc5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc5b0ULL || rel >= 0x4bc640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc640 size=80 callers=588 calls=1
   calls: sub_4bf7b0
*/
void sub_4bc640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc640ULL || rel >= 0x4bc690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc690 size=48 callers=448 calls=1
   calls: sub_4bf7b0
*/
void sub_4bc690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc690ULL || rel >= 0x4bc6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc6c0 size=160 callers=0 calls=1
   calls: sub_4bf7b0
*/
void sub_4bc6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc6c0ULL || rel >= 0x4bc760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc760 size=16 callers=1 calls=0
*/
void sub_4bc760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc760ULL || rel >= 0x4bc770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc770 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4bc770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc770ULL || rel >= 0x4bc7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bc7f0 size=624 callers=0 calls=3
   calls: SiCore_Array_14, SiCore_Array_15, sub_4bc640
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiCore/Source/SiCore_FixedHeapAllocator2.cpp
*/
void SiCore_FixedHeapAllocator2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bc7f0ULL || rel >= 0x4bca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bca60 size=480 callers=2 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_4bca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bca60ULL || rel >= 0x4bcc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcc40 size=256 callers=2 calls=1
   calls: SiCore_Array_9
*/
void sub_4bcc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcc40ULL || rel >= 0x4bcd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcd40 size=96 callers=0 calls=0
*/
void sub_4bcd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcd40ULL || rel >= 0x4bcda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcda0 size=48 callers=0 calls=1
   calls: sub_4bcc40
*/
void sub_4bcda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcda0ULL || rel >= 0x4bcdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcdd0 size=464 callers=1 calls=2
   calls: SiCore_Array_7, SiCore_Array_8
*/
void sub_4bcdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcdd0ULL || rel >= 0x4bcfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bcfa0 size=320 callers=2 calls=1
   calls: sub_4bc640
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bcfa0ULL || rel >= 0x4bd0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd0e0 size=560 callers=2 calls=1
   calls: SiCore_Array_15
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd0e0ULL || rel >= 0x4bd310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd310 size=576 callers=0 calls=2
   calls: SiCore_Array_7, SiCore_Array_8
*/
void sub_4bd310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd310ULL || rel >= 0x4bd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd550 size=192 callers=2 calls=1
   calls: Unknown_File
*/
void sub_4bd550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd550ULL || rel >= 0x4bd610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd610 size=464 callers=1 calls=5
   calls: sub_4be580, sub_4c54a0, sub_4c5520, sub_860, sub_8c0
   ref: Unknown File
*/
void Unknown_File(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd610ULL || rel >= 0x4bd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd7e0 size=224 callers=0 calls=0
*/
void sub_4bd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd7e0ULL || rel >= 0x4bd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd8c0 size=16 callers=0 calls=0
*/
void sub_4bd8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd8c0ULL || rel >= 0x4bd8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd8d0 size=16 callers=0 calls=0
*/
void sub_4bd8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd8d0ULL || rel >= 0x4bd8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd8e0 size=32 callers=2 calls=0
*/
void sub_4bd8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd8e0ULL || rel >= 0x4bd900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bd900 size=1376 callers=0 calls=2
   calls: sub_4c87b0, sub_4c87f0
*/
void sub_4bd900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bd900ULL || rel >= 0x4bde60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bde60 size=1424 callers=0 calls=3
   calls: sub_4be3f0, sub_4c87b0, sub_4c87f0
*/
void sub_4bde60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bde60ULL || rel >= 0x4be3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be3f0 size=208 callers=3 calls=0
*/
void sub_4be3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be3f0ULL || rel >= 0x4be4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be4c0 size=128 callers=0 calls=2
   calls: sub_4c87b0, sub_4c87f0
*/
void sub_4be4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be4c0ULL || rel >= 0x4be540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be540 size=64 callers=0 calls=0
*/
void sub_4be540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be540ULL || rel >= 0x4be580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be580 size=320 callers=2 calls=1
   calls: sub_4be580
*/
void sub_4be580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be580ULL || rel >= 0x4be6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be6c0 size=16 callers=0 calls=0
*/
void sub_4be6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be6c0ULL || rel >= 0x4be6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be6d0 size=16 callers=0 calls=0
*/
void sub_4be6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be6d0ULL || rel >= 0x4be6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be6e0 size=16 callers=0 calls=0
*/
void sub_4be6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be6e0ULL || rel >= 0x4be6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be6f0 size=16 callers=0 calls=0
*/
void sub_4be6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be6f0ULL || rel >= 0x4be700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be700 size=32 callers=0 calls=0
*/
void sub_4be700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be700ULL || rel >= 0x4be720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be720 size=16 callers=0 calls=0
*/
void sub_4be720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be720ULL || rel >= 0x4be730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be730 size=16 callers=0 calls=0
*/
void sub_4be730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be730ULL || rel >= 0x4be740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be740 size=80 callers=0 calls=0
*/
void sub_4be740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be740ULL || rel >= 0x4be790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be790 size=16 callers=0 calls=0
*/
void sub_4be790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be790ULL || rel >= 0x4be7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be7a0 size=48 callers=0 calls=1
   calls: SiCore_Array_9
*/
void sub_4be7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be7a0ULL || rel >= 0x4be7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be7d0 size=512 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: ../../../../Include\SiCore/SiCore_Pool.h
*/
void SiCore_Pool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be7d0ULL || rel >= 0x4be9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be9d0 size=32 callers=0 calls=0
*/
void sub_4be9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be9d0ULL || rel >= 0x4be9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004be9f0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_FixedHeapAllocator2.h
*/
void SiCore_FixedHeapAllocator2_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4be9f0ULL || rel >= 0x4bea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bea70 size=16 callers=0 calls=0
*/
void sub_4bea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bea70ULL || rel >= 0x4bea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bea80 size=416 callers=3 calls=1
   calls: SiCore_Pool
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bea80ULL || rel >= 0x4bec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bec20 size=48 callers=0 calls=1
   calls: SiCore_Array_9
*/
void sub_4bec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bec20ULL || rel >= 0x4bec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bec50 size=624 callers=0 calls=3
   calls: SiCore_Array_14, SiCore_Array_15, sub_4bc640
   ref: ../../../../Include\SiCore/SiCore_Pool.h
*/
void SiCore_Pool_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bec50ULL || rel >= 0x4beec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004beec0 size=96 callers=0 calls=0
*/
void sub_4beec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4beec0ULL || rel >= 0x4bef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bef20 size=96 callers=0 calls=0
*/
void sub_4bef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bef20ULL || rel >= 0x4bef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bef80 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bef80ULL || rel >= 0x4bf000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf000 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf000ULL || rel >= 0x4bf060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf060 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf060ULL || rel >= 0x4bf100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf100 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf100ULL || rel >= 0x4bf190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf190 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf190ULL || rel >= 0x4bf330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf330 size=592 callers=3 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf330ULL || rel >= 0x4bf580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf580 size=96 callers=0 calls=0
*/
void sub_4bf580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf580ULL || rel >= 0x4bf5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf5e0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4bf5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf5e0ULL || rel >= 0x4bf660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf660 size=64 callers=74 calls=1
   calls: sub_4bc640
*/
void sub_4bf660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf660ULL || rel >= 0x4bf6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf6a0 size=16 callers=48 calls=0
*/
void sub_4bf6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf6a0ULL || rel >= 0x4bf6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf6b0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4bf6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf6b0ULL || rel >= 0x4bf730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf730 size=128 callers=5 calls=2
   calls: SiCore_Array_16, sub_1c0
*/
void sub_4bf730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf730ULL || rel >= 0x4bf7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf7b0 size=16 callers=99 calls=0
*/
void sub_4bf7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf7b0ULL || rel >= 0x4bf7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bf7c0 size=704 callers=1 calls=5
   calls: Unknown, sub_4bc640, sub_4bc690, sub_4bf660, sub_4c86a0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bf7c0ULL || rel >= 0x4bfa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfa80 size=688 callers=1 calls=3
   calls: SiCore_Map_5, SiCore_String_20, sub_4c86e0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_String_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfa80ULL || rel >= 0x4bfd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfd30 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfd30ULL || rel >= 0x4bfdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfdb0 size=96 callers=0 calls=1
   calls: SiCore_Map_5
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfdb0ULL || rel >= 0x4bfe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfe10 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfe10ULL || rel >= 0x4bfe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bfe90 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bfe90ULL || rel >= 0x4bff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bff10 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bff10ULL || rel >= 0x4bff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bff90 size=48 callers=0 calls=1
   calls: SiCore_String_4
*/
void sub_4bff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bff90ULL || rel >= 0x4bffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004bffc0 size=976 callers=1 calls=11
   calls: SiCore_String_22, SiCore_String_5, neutral, sub_4c3360, sub_4c5930, sub_4c87b0, sub_4c87f0, sub_4c8d40, sub_4c8db0, sub_4c9300, sub_4ca6a0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4bffc0ULL || rel >= 0x4c0390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0390 size=336 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0390ULL || rel >= 0x4c04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c04e0 size=528 callers=1 calls=1
   calls: SiCore_String_7
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c04e0ULL || rel >= 0x4c06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c06f0 size=208 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c06f0ULL || rel >= 0x4c07c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c07c0 size=16 callers=0 calls=0
*/
void sub_4c07c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c07c0ULL || rel >= 0x4c07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c07d0 size=16 callers=0 calls=0
*/
void sub_4c07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c07d0ULL || rel >= 0x4c07e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c07e0 size=16 callers=0 calls=0
*/
void sub_4c07e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c07e0ULL || rel >= 0x4c07f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c07f0 size=16 callers=0 calls=0
*/
void sub_4c07f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c07f0ULL || rel >= 0x4c0800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0800 size=16 callers=0 calls=0
*/
void sub_4c0800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0800ULL || rel >= 0x4c0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0810 size=16 callers=0 calls=0
*/
void sub_4c0810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0810ULL || rel >= 0x4c0820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0820 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0820ULL || rel >= 0x4c08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c08f0 size=16 callers=0 calls=0
*/
void sub_4c08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c08f0ULL || rel >= 0x4c0900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0900 size=16 callers=0 calls=0
*/
void sub_4c0900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0900ULL || rel >= 0x4c0910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0910 size=144 callers=1 calls=1
   calls: SiCore_Map_2
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0910ULL || rel >= 0x4c09a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c09a0 size=960 callers=1 calls=1
   calls: sub_4c5630
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c09a0ULL || rel >= 0x4c0d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0d60 size=256 callers=1 calls=2
   calls: SiCore_Map_3, sub_4c5630
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0d60ULL || rel >= 0x4c0e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c0e60 size=1680 callers=1 calls=1
   calls: SiCore_Map_5
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c0e60ULL || rel >= 0x4c14f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c14f0 size=160 callers=0 calls=1
   calls: sub_4c5630
*/
void sub_4c14f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c14f0ULL || rel >= 0x4c1590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1590 size=464 callers=0 calls=1
   calls: SiCore_Array_32
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1590ULL || rel >= 0x4c1760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1760 size=16 callers=0 calls=0
*/
void sub_4c1760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1760ULL || rel >= 0x4c1770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1770 size=16 callers=0 calls=0
*/
void sub_4c1770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1770ULL || rel >= 0x4c1780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1780 size=16 callers=0 calls=0
*/
void sub_4c1780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1780ULL || rel >= 0x4c1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1790 size=16 callers=0 calls=0
*/
void sub_4c1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1790ULL || rel >= 0x4c17a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c17a0 size=80 callers=0 calls=2
   calls: sub_4bc640, sub_4bc690
*/
void sub_4c17a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c17a0ULL || rel >= 0x4c17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c17f0 size=16 callers=0 calls=0
*/
void sub_4c17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c17f0ULL || rel >= 0x4c1800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1800 size=112 callers=0 calls=1
   calls: SiCore_Array_36
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiCore/Source/SiCore_Kernel_Impl.cpp
*/
void SiCore_Kernel_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1800ULL || rel >= 0x4c1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1870 size=16 callers=0 calls=0
*/
void sub_4c1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1870ULL || rel >= 0x4c1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1880 size=16 callers=0 calls=0
*/
void sub_4c1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1880ULL || rel >= 0x4c1890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1890 size=16 callers=0 calls=0
*/
void sub_4c1890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1890ULL || rel >= 0x4c18a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c18a0 size=272 callers=0 calls=4
   calls: SiCore_Array_33, sub_4c70f0, sub_4c87b0, sub_4c87f0
*/
void sub_4c18a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c18a0ULL || rel >= 0x4c19b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c19b0 size=272 callers=0 calls=2
   calls: sub_4c87b0, sub_4c87f0
*/
void sub_4c19b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c19b0ULL || rel >= 0x4c1ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1ac0 size=208 callers=0 calls=2
   calls: sub_4c87b0, sub_4c87f0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1ac0ULL || rel >= 0x4c1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1b90 size=128 callers=0 calls=1
   calls: sub_4c8f80
*/
void sub_4c1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1b90ULL || rel >= 0x4c1c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1c10 size=128 callers=0 calls=1
   calls: sub_4c8f80
*/
void sub_4c1c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1c10ULL || rel >= 0x4c1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1c90 size=80 callers=0 calls=0
*/
void sub_4c1c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1c90ULL || rel >= 0x4c1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1ce0 size=192 callers=0 calls=3
   calls: sub_4c51e0, sub_4c87b0, sub_4c87f0
*/
void sub_4c1ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1ce0ULL || rel >= 0x4c1da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1da0 size=208 callers=0 calls=3
   calls: SiCore_Array_34, sub_4c87b0, sub_4c87f0
*/
void sub_4c1da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1da0ULL || rel >= 0x4c1e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1e70 size=272 callers=0 calls=2
   calls: sub_4c87b0, sub_4c87f0
*/
void sub_4c1e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1e70ULL || rel >= 0x4c1f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c1f80 size=208 callers=0 calls=2
   calls: sub_4c87b0, sub_4c87f0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c1f80ULL || rel >= 0x4c2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2050 size=48 callers=0 calls=0
*/
void sub_4c2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2050ULL || rel >= 0x4c2080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2080 size=16 callers=0 calls=0
*/
void sub_4c2080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2080ULL || rel >= 0x4c2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2090 size=48 callers=0 calls=0
*/
void sub_4c2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2090ULL || rel >= 0x4c20c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c20c0 size=16 callers=0 calls=0
*/
void sub_4c20c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c20c0ULL || rel >= 0x4c20d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c20d0 size=304 callers=0 calls=1
   calls: SiCore_Array_35
*/
void sub_4c20d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c20d0ULL || rel >= 0x4c2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2200 size=16 callers=0 calls=0
*/
void sub_4c2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2200ULL || rel >= 0x4c2210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2210 size=176 callers=0 calls=0
*/
void sub_4c2210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2210ULL || rel >= 0x4c22c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c22c0 size=48 callers=0 calls=0
*/
void sub_4c22c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c22c0ULL || rel >= 0x4c22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c22f0 size=48 callers=0 calls=0
*/
void sub_4c22f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c22f0ULL || rel >= 0x4c2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2320 size=32 callers=0 calls=0
*/
void sub_4c2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2320ULL || rel >= 0x4c2340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2340 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiCore/Source/SiCore_Kernel_Impl.h
*/
void SiCore_Kernel_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2340ULL || rel >= 0x4c23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c23c0 size=16 callers=0 calls=0
*/
void sub_4c23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c23c0ULL || rel >= 0x4c23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c23d0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c23d0ULL || rel >= 0x4c2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2430 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2430ULL || rel >= 0x4c2490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2490 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2490ULL || rel >= 0x4c24f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c24f0 size=80 callers=0 calls=1
   calls: SiCore_Map_5
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c24f0ULL || rel >= 0x4c2540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2540 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2540ULL || rel >= 0x4c25a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c25a0 size=176 callers=6 calls=1
   calls: SiCore_Map_5
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c25a0ULL || rel >= 0x4c2650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2650 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2650ULL || rel >= 0x4c27f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c27f0 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c27f0ULL || rel >= 0x4c2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2990 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2990ULL || rel >= 0x4c2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2b30 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2b30ULL || rel >= 0x4c2cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2cd0 size=160 callers=0 calls=3
   calls: sub_1c0, sub_4bc640, sub_4c2d70
*/
void sub_4c2cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2cd0ULL || rel >= 0x4c2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2d70 size=64 callers=1 calls=1
   calls: sub_4bf660
*/
void sub_4c2d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2d70ULL || rel >= 0x4c2db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2db0 size=80 callers=0 calls=0
*/
void sub_4c2db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2db0ULL || rel >= 0x4c2e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2e00 size=80 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_4c2e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2e00ULL || rel >= 0x4c2e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2e50 size=16 callers=0 calls=0
*/
void sub_4c2e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2e50ULL || rel >= 0x4c2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2e60 size=16 callers=0 calls=0
*/
void sub_4c2e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2e60ULL || rel >= 0x4c2e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2e70 size=160 callers=0 calls=2
   calls: sub_4c3640, sub_4c39e0
*/
void sub_4c2e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2e70ULL || rel >= 0x4c2f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2f10 size=176 callers=0 calls=2
   calls: sub_4c3640, sub_4c39e0
*/
void sub_4c2f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2f10ULL || rel >= 0x4c2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c2fc0 size=144 callers=0 calls=1
   calls: sub_4c3640
*/
void sub_4c2fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c2fc0ULL || rel >= 0x4c3050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3050 size=48 callers=0 calls=1
   calls: sub_4c3640
*/
void sub_4c3050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3050ULL || rel >= 0x4c3080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3080 size=48 callers=0 calls=1
   calls: sub_4c3640
*/
void sub_4c3080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3080ULL || rel >= 0x4c30b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c30b0 size=48 callers=0 calls=1
   calls: sub_4c3640
*/
void sub_4c30b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c30b0ULL || rel >= 0x4c30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c30e0 size=32 callers=0 calls=1
   calls: sub_4c3640
*/
void sub_4c30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c30e0ULL || rel >= 0x4c3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3100 size=48 callers=0 calls=1
   calls: sub_4c3640
*/
void sub_4c3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3100ULL || rel >= 0x4c3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3130 size=32 callers=0 calls=1
   calls: sub_4c3640
*/
void sub_4c3130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3130ULL || rel >= 0x4c3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3150 size=48 callers=0 calls=1
   calls: sub_4c3640
*/
void sub_4c3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3150ULL || rel >= 0x4c3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3180 size=32 callers=0 calls=1
   calls: sub_4c3640
*/
void sub_4c3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3180ULL || rel >= 0x4c31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c31a0 size=48 callers=0 calls=1
   calls: sub_4c3640
*/
void sub_4c31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c31a0ULL || rel >= 0x4c31d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c31d0 size=80 callers=0 calls=0
*/
void sub_4c31d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c31d0ULL || rel >= 0x4c3220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3220 size=16 callers=0 calls=0
*/
void sub_4c3220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3220ULL || rel >= 0x4c3230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3230 size=32 callers=0 calls=0
*/
void sub_4c3230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3230ULL || rel >= 0x4c3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3250 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_HeapAllocator.h
*/
void SiCore_HeapAllocator(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3250ULL || rel >= 0x4c32d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c32d0 size=16 callers=0 calls=0
*/
void sub_4c32d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c32d0ULL || rel >= 0x4c32e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c32e0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4c32e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c32e0ULL || rel >= 0x4c3360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3360 size=176 callers=1 calls=0
*/
void sub_4c3360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3360ULL || rel >= 0x4c3410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3410 size=64 callers=5 calls=0
*/
void sub_4c3410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3410ULL || rel >= 0x4c3450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3450 size=80 callers=1 calls=0
*/
void sub_4c3450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3450ULL || rel >= 0x4c34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c34a0 size=112 callers=15 calls=1
   calls: sub_4c4290
*/
void sub_4c34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c34a0ULL || rel >= 0x4c3510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3510 size=80 callers=39 calls=0
*/
void sub_4c3510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3510ULL || rel >= 0x4c3560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3560 size=96 callers=1 calls=0
*/
void sub_4c3560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3560ULL || rel >= 0x4c35c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c35c0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4c35c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c35c0ULL || rel >= 0x4c3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3640 size=16 callers=12 calls=0
*/
void sub_4c3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3640ULL || rel >= 0x4c3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3650 size=240 callers=1 calls=4
   calls: Unknown_File_2, sub_4c86e0, sub_4c87b0, sub_4c87f0
*/
void sub_4c3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3650ULL || rel >= 0x4c3740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3740 size=528 callers=1 calls=3
   calls: sub_4c3e40, sub_4c54a0, sub_4c5520
   ref: Unknown File
*/
void Unknown_File_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3740ULL || rel >= 0x4c3950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3950 size=96 callers=0 calls=0
*/
void sub_4c3950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3950ULL || rel >= 0x4c39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c39b0 size=48 callers=0 calls=1
   calls: sub_4c3650
*/
void sub_4c39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c39b0ULL || rel >= 0x4c39e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c39e0 size=656 callers=2 calls=3
   calls: sub_4c87b0, sub_4c87f0, sub_860
*/
void sub_4c39e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c39e0ULL || rel >= 0x4c3c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3c70 size=304 callers=0 calls=3
   calls: sub_4c87b0, sub_4c87f0, sub_8c0
*/
void sub_4c3c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3c70ULL || rel >= 0x4c3da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3da0 size=80 callers=0 calls=2
   calls: sub_4c87b0, sub_4c87f0
*/
void sub_4c3da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3da0ULL || rel >= 0x4c3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3df0 size=80 callers=0 calls=2
   calls: sub_4c87b0, sub_4c87f0
*/
void sub_4c3df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3df0ULL || rel >= 0x4c3e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3e40 size=320 callers=2 calls=1
   calls: sub_4c3e40
*/
void sub_4c3e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3e40ULL || rel >= 0x4c3f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c3f80 size=192 callers=0 calls=3
   calls: sub_4bf730, sub_4c87b0, sub_4c87f0
*/
void sub_4c3f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c3f80ULL || rel >= 0x4c4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4040 size=16 callers=0 calls=0
*/
void sub_4c4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4040ULL || rel >= 0x4c4050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4050 size=16 callers=0 calls=0
*/
void sub_4c4050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4050ULL || rel >= 0x4c4060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4060 size=16 callers=0 calls=0
*/
void sub_4c4060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4060ULL || rel >= 0x4c4070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4070 size=16 callers=0 calls=0
*/
void sub_4c4070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4070ULL || rel >= 0x4c4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4080 size=16 callers=0 calls=0
*/
void sub_4c4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4080ULL || rel >= 0x4c4090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4090 size=16 callers=0 calls=0
*/
void sub_4c4090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4090ULL || rel >= 0x4c40a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c40a0 size=96 callers=0 calls=0
*/
void sub_4c40a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c40a0ULL || rel >= 0x4c4100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4100 size=400 callers=0 calls=3
   calls: sub_1c0, sub_4bc640, sub_4c86a0
*/
void sub_4c4100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4100ULL || rel >= 0x4c4290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4290 size=32 callers=14 calls=0
*/
void sub_4c4290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4290ULL || rel >= 0x4c42b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c42b0 size=752 callers=16 calls=1
   calls: SiCore_String_12
*/
void sub_4c42b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c42b0ULL || rel >= 0x4c45a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c45a0 size=32 callers=6 calls=0
*/
void sub_4c45a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c45a0ULL || rel >= 0x4c45c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c45c0 size=320 callers=13 calls=3
   calls: SiCore_String_11, sub_4bc640, sub_4bc690
*/
void sub_4c45c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c45c0ULL || rel >= 0x4c4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4700 size=752 callers=116 calls=1
   calls: SiCore_String_11
*/
void sub_4c4700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4700ULL || rel >= 0x4c49f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c49f0 size=592 callers=1 calls=5
   calls: sub_4bc640, sub_4bc690, sub_4bf7b0, sub_4c45c0, sub_4c4700
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiCore/Source/SiCore_String.cpp
*/
void SiCore_String_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c49f0ULL || rel >= 0x4c4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4c40 size=176 callers=1 calls=0
*/
void sub_4c4c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4c40ULL || rel >= 0x4c4cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4cf0 size=16 callers=1 calls=0
*/
void sub_4c4cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4cf0ULL || rel >= 0x4c4d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4d00 size=16 callers=2 calls=0
*/
void sub_4c4d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4d00ULL || rel >= 0x4c4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4d10 size=96 callers=3 calls=0
*/
void sub_4c4d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4d10ULL || rel >= 0x4c4d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4d70 size=16 callers=1 calls=0
*/
void sub_4c4d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4d70ULL || rel >= 0x4c4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4d80 size=16 callers=1 calls=0
*/
void sub_4c4d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4d80ULL || rel >= 0x4c4d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4d90 size=240 callers=3 calls=0
*/
void sub_4c4d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4d90ULL || rel >= 0x4c4e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4e80 size=224 callers=2 calls=0
*/
void sub_4c4e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4e80ULL || rel >= 0x4c4f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c4f60 size=528 callers=2 calls=1
   calls: SiCore_String_12
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c4f60ULL || rel >= 0x4c5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5170 size=112 callers=4 calls=0
*/
void sub_4c5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5170ULL || rel >= 0x4c51e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c51e0 size=160 callers=4 calls=0
*/
void sub_4c51e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c51e0ULL || rel >= 0x4c5280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5280 size=512 callers=0 calls=1
   calls: SiCore_String_11
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5280ULL || rel >= 0x4c5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5480 size=32 callers=4 calls=0
*/
void sub_4c5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5480ULL || rel >= 0x4c54a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c54a0 size=128 callers=6 calls=0
*/
void sub_4c54a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c54a0ULL || rel >= 0x4c5520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5520 size=272 callers=16 calls=0
*/
void sub_4c5520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5520ULL || rel >= 0x4c5630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5630 size=288 callers=24 calls=0
*/
void sub_4c5630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5630ULL || rel >= 0x4c5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5750 size=272 callers=1 calls=0
*/
void sub_4c5750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5750ULL || rel >= 0x4c5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5860 size=128 callers=5 calls=0
*/
void sub_4c5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5860ULL || rel >= 0x4c58e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c58e0 size=16 callers=1 calls=0
*/
void sub_4c58e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c58e0ULL || rel >= 0x4c58f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c58f0 size=48 callers=0 calls=0
*/
void sub_4c58f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c58f0ULL || rel >= 0x4c5920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5920 size=16 callers=0 calls=0
*/
void sub_4c5920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5920ULL || rel >= 0x4c5930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5930 size=272 callers=12 calls=0
*/
void sub_4c5930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5930ULL || rel >= 0x4c5a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5a40 size=80 callers=1 calls=0
*/
void sub_4c5a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5a40ULL || rel >= 0x4c5a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5a90 size=160 callers=16 calls=0
*/
void sub_4c5a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5a90ULL || rel >= 0x4c5b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5b30 size=32 callers=4 calls=1
   calls: sub_4c4700
*/
void sub_4c5b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5b30ULL || rel >= 0x4c5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5b50 size=32 callers=2 calls=1
   calls: sub_4c4700
*/
void sub_4c5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5b50ULL || rel >= 0x4c5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5b70 size=240 callers=4 calls=1
   calls: SiCore_String_11
*/
void sub_4c5b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5b70ULL || rel >= 0x4c5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5c60 size=240 callers=2 calls=1
   calls: SiCore_String_12
*/
void sub_4c5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5c60ULL || rel >= 0x4c5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5d50 size=352 callers=107 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5d50ULL || rel >= 0x4c5eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c5eb0 size=352 callers=17 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c5eb0ULL || rel >= 0x4c6010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6010 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4c6010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6010ULL || rel >= 0x4c6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6090 size=672 callers=2 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6090ULL || rel >= 0x4c6330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6330 size=592 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6330ULL || rel >= 0x4c6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6580 size=256 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6580ULL || rel >= 0x4c6680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6680 size=48 callers=0 calls=1
   calls: SiCore_String_14
*/
void sub_4c6680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6680ULL || rel >= 0x4c66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c66b0 size=16 callers=0 calls=0
*/
void sub_4c66b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c66b0ULL || rel >= 0x4c66c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c66c0 size=832 callers=0 calls=4
   calls: SiCore_String_19, sub_4bc640, sub_4bc690, sub_4c8020
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c66c0ULL || rel >= 0x4c6a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6a00 size=304 callers=0 calls=0
*/
void sub_4c6a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6a00ULL || rel >= 0x4c6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6b30 size=64 callers=0 calls=1
   calls: sub_4bf7b0
*/
void sub_4c6b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6b30ULL || rel >= 0x4c6b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6b70 size=496 callers=1 calls=4
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_4bf7b0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6b70ULL || rel >= 0x4c6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6d60 size=480 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6d60ULL || rel >= 0x4c6f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6f40 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6f40ULL || rel >= 0x4c6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6fc0 size=16 callers=0 calls=0
*/
void sub_4c6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6fc0ULL || rel >= 0x4c6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c6fd0 size=48 callers=0 calls=1
   calls: SiCore_String_17
*/
void sub_4c6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c6fd0ULL || rel >= 0x4c7000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7000 size=48 callers=0 calls=1
   calls: SiCore_String_17
*/
void sub_4c7000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7000ULL || rel >= 0x4c7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7030 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_4c7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7030ULL || rel >= 0x4c7070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7070 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_4c7070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7070ULL || rel >= 0x4c70b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c70b0 size=16 callers=0 calls=0
*/
void sub_4c70b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c70b0ULL || rel >= 0x4c70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c70c0 size=16 callers=0 calls=0
*/
void sub_4c70c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c70c0ULL || rel >= 0x4c70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c70d0 size=16 callers=0 calls=0
*/
void sub_4c70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c70d0ULL || rel >= 0x4c70e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c70e0 size=16 callers=0 calls=0
*/
void sub_4c70e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c70e0ULL || rel >= 0x4c70f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c70f0 size=16 callers=1 calls=0
*/
void sub_4c70f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c70f0ULL || rel >= 0x4c7100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7100 size=16 callers=0 calls=0
*/
void sub_4c7100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7100ULL || rel >= 0x4c7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7110 size=16 callers=0 calls=0
*/
void sub_4c7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7110ULL || rel >= 0x4c7120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7120 size=16 callers=0 calls=0
*/
void sub_4c7120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7120ULL || rel >= 0x4c7130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7130 size=16 callers=0 calls=0
*/
void sub_4c7130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7130ULL || rel >= 0x4c7140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7140 size=240 callers=0 calls=2
   calls: SiCore_Array_39, sub_4c7230
*/
void sub_4c7140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7140ULL || rel >= 0x4c7230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7230 size=128 callers=2 calls=2
   calls: sub_4c7230, sub_4c83b0
*/
void sub_4c7230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7230ULL || rel >= 0x4c72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c72b0 size=320 callers=0 calls=2
   calls: SiCore_Array_39, SiCore_String_13
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiCore/Source/SiCore_StringTable_Impl.cpp
*/
void SiCore_StringTable_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c72b0ULL || rel >= 0x4c73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c73f0 size=672 callers=0 calls=2
   calls: SiCore_Array_39, SiCore_String_13
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiCore/Source/SiCore_StringTable_Impl.cpp
*/
void SiCore_StringTable_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c73f0ULL || rel >= 0x4c7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7690 size=176 callers=0 calls=0
*/
void sub_4c7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7690ULL || rel >= 0x4c7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7740 size=320 callers=0 calls=0
*/
void sub_4c7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7740ULL || rel >= 0x4c7880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7880 size=80 callers=0 calls=1
   calls: sub_4bf7b0
*/
void sub_4c7880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7880ULL || rel >= 0x4c78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c78d0 size=288 callers=0 calls=0
*/
void sub_4c78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c78d0ULL || rel >= 0x4c79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c79f0 size=288 callers=0 calls=0
*/
void sub_4c79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c79f0ULL || rel >= 0x4c7b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7b10 size=16 callers=0 calls=0
*/
void sub_4c7b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7b10ULL || rel >= 0x4c7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7b20 size=32 callers=0 calls=0
*/
void sub_4c7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7b20ULL || rel >= 0x4c7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7b40 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiCore/Source/SiCore_StringTable_Impl.h
*/
void SiCore_StringTable_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7b40ULL || rel >= 0x4c7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7bc0 size=16 callers=0 calls=0
*/
void sub_4c7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7bc0ULL || rel >= 0x4c7bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7bd0 size=32 callers=0 calls=0
*/
void sub_4c7bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7bd0ULL || rel >= 0x4c7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7bf0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiCore/Source/SiCore_StringTable_Impl.h
*/
void SiCore_StringTable_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7bf0ULL || rel >= 0x4c7c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7c70 size=16 callers=0 calls=0
*/
void sub_4c7c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7c70ULL || rel >= 0x4c7c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7c80 size=240 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7c80ULL || rel >= 0x4c7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c7d70 size=688 callers=2 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c8020
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c7d70ULL || rel >= 0x4c8020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8020 size=400 callers=59 calls=1
   calls: SiCore_String_11
*/
void sub_4c8020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8020ULL || rel >= 0x4c81b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c81b0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c81b0ULL || rel >= 0x4c8210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8210 size=416 callers=6 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8210ULL || rel >= 0x4c83b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c83b0 size=624 callers=1 calls=0
*/
void sub_4c83b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c83b0ULL || rel >= 0x4c8620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8620 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4c8620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8620ULL || rel >= 0x4c86a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c86a0 size=64 callers=3 calls=0
*/
void sub_4c86a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c86a0ULL || rel >= 0x4c86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c86e0 size=48 callers=2 calls=0
*/
void sub_4c86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c86e0ULL || rel >= 0x4c8710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8710 size=80 callers=0 calls=0
*/
void sub_4c8710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8710ULL || rel >= 0x4c8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8760 size=32 callers=0 calls=0
*/
void sub_4c8760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8760ULL || rel >= 0x4c8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8780 size=32 callers=0 calls=0
*/
void sub_4c8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8780ULL || rel >= 0x4c87a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c87a0 size=16 callers=0 calls=0
*/
void sub_4c87a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c87a0ULL || rel >= 0x4c87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c87b0 size=64 callers=19 calls=0
*/
void sub_4c87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c87b0ULL || rel >= 0x4c87f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c87f0 size=64 callers=19 calls=0
*/
void sub_4c87f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c87f0ULL || rel >= 0x4c8830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8830 size=16 callers=0 calls=0
*/
void sub_4c8830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8830ULL || rel >= 0x4c8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8840 size=128 callers=0 calls=2
   calls: sub_1c0, sub_4bc640
*/
void sub_4c8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8840ULL || rel >= 0x4c88c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c88c0 size=288 callers=1 calls=4
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_4c5520
   ref: Unknown
*/
void Unknown(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c88c0ULL || rel >= 0x4c89e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c89e0 size=192 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c89e0ULL || rel >= 0x4c8aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8aa0 size=176 callers=0 calls=1
   calls: sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8aa0ULL || rel >= 0x4c8b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8b50 size=480 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8b50ULL || rel >= 0x4c8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8d30 size=16 callers=0 calls=0
*/
void sub_4c8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8d30ULL || rel >= 0x4c8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8d40 size=112 callers=1 calls=1
   calls: sub_4c54a0
*/
void sub_4c8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8d40ULL || rel >= 0x4c8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8db0 size=80 callers=1 calls=0
*/
void sub_4c8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8db0ULL || rel >= 0x4c8e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8e00 size=16 callers=0 calls=0
*/
void sub_4c8e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8e00ULL || rel >= 0x4c8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8e10 size=16 callers=0 calls=0
*/
void sub_4c8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8e10ULL || rel >= 0x4c8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8e20 size=16 callers=0 calls=0
*/
void sub_4c8e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8e20ULL || rel >= 0x4c8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8e30 size=16 callers=0 calls=0
*/
void sub_4c8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8e30ULL || rel >= 0x4c8e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8e40 size=32 callers=0 calls=0
*/
void sub_4c8e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8e40ULL || rel >= 0x4c8e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8e60 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiCore/Source/SiCore_SystemInfo_Impl.h
*/
void SiCore_SystemInfo_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8e60ULL || rel >= 0x4c8ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8ee0 size=16 callers=0 calls=0
*/
void sub_4c8ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8ee0ULL || rel >= 0x4c8ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8ef0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4c8ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8ef0ULL || rel >= 0x4c8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8f70 size=16 callers=1 calls=0
*/
void sub_4c8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8f70ULL || rel >= 0x4c8f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c8f80 size=272 callers=10 calls=0
*/
void sub_4c8f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c8f80ULL || rel >= 0x4c9090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9090 size=128 callers=9 calls=1
   calls: sub_4c9fe0
*/
void sub_4c9090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9090ULL || rel >= 0x4c9110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9110 size=352 callers=1 calls=0
*/
void sub_4c9110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9110ULL || rel >= 0x4c9270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9270 size=144 callers=1 calls=1
   calls: sub_4c9110
*/
void sub_4c9270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9270ULL || rel >= 0x4c9300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9300 size=128 callers=1 calls=1
   calls: sub_4bf7b0
*/
void sub_4c9300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9300ULL || rel >= 0x4c9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9380 size=16 callers=68 calls=0
*/
void sub_4c9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9380ULL || rel >= 0x4c9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9390 size=304 callers=5 calls=1
   calls: sub_4c4700
*/
void sub_4c9390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9390ULL || rel >= 0x4c94c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c94c0 size=16 callers=3 calls=0
*/
void sub_4c94c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c94c0ULL || rel >= 0x4c94d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c94d0 size=1232 callers=0 calls=5
   calls: SiCore_LinkedList, SiCore_String_11, sub_4bc640, sub_4bc690, sub_4bf7b0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c94d0ULL || rel >= 0x4c99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c99a0 size=400 callers=1 calls=0
*/
void sub_4c99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c99a0ULL || rel >= 0x4c9b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9b30 size=48 callers=2 calls=0
   ref: Unknown
*/
void Unknown_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9b30ULL || rel >= 0x4c9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9b60 size=48 callers=3 calls=0
   ref: Unknown
*/
void Unknown_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9b60ULL || rel >= 0x4c9b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9b90 size=16 callers=1 calls=0
*/
void sub_4c9b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9b90ULL || rel >= 0x4c9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9ba0 size=128 callers=2 calls=0
*/
void sub_4c9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9ba0ULL || rel >= 0x4c9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9c20 size=144 callers=4 calls=0
*/
void sub_4c9c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9c20ULL || rel >= 0x4c9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9cb0 size=48 callers=0 calls=0
   ref: Unknown
*/
void Unknown_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9cb0ULL || rel >= 0x4c9ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9ce0 size=464 callers=0 calls=1
   calls: sub_4c5630
   ref: DOUBLE
*/
void DOUBLE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9ce0ULL || rel >= 0x4c9eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9eb0 size=16 callers=1 calls=0
*/
void sub_4c9eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9eb0ULL || rel >= 0x4c9ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9ec0 size=32 callers=0 calls=0
*/
void sub_4c9ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9ec0ULL || rel >= 0x4c9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9ee0 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_4c9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9ee0ULL || rel >= 0x4c9f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9f20 size=32 callers=0 calls=0
*/
void sub_4c9f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9f20ULL || rel >= 0x4c9f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9f40 size=128 callers=0 calls=0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiCore/Source/SiCore_Utility.cpp
*/
void SiCore_Utility(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9f40ULL || rel >= 0x4c9fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9fc0 size=16 callers=0 calls=0
*/
void sub_4c9fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9fc0ULL || rel >= 0x4c9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9fd0 size=16 callers=0 calls=0
*/
void sub_4c9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9fd0ULL || rel >= 0x4c9fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004c9fe0 size=208 callers=1 calls=3
   calls: SiCore_String_11, sub_4bc640, sub_4bc690
*/
void sub_4c9fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4c9fe0ULL || rel >= 0x4ca0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca0b0 size=1184 callers=9 calls=3
   calls: SiCore_String_11, sub_4bc640, sub_4c99a0
   ref: ../../../../Include\SiCore/SiCore_LinkedList.h
*/
void SiCore_LinkedList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca0b0ULL || rel >= 0x4ca550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca550 size=192 callers=0 calls=4
   calls: sub_1c0, sub_4bc640, sub_4bf660, sub_4ca610
*/
void sub_4ca550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca550ULL || rel >= 0x4ca610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca610 size=16 callers=1 calls=0
*/
void sub_4ca610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca610ULL || rel >= 0x4ca620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca620 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4ca620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca620ULL || rel >= 0x4ca6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca6a0 size=256 callers=1 calls=0
*/
void sub_4ca6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca6a0ULL || rel >= 0x4ca7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca7a0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4ca7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca7a0ULL || rel >= 0x4ca820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ca820 size=1200 callers=2 calls=5
   calls: sub_4bc640, sub_4bc690, sub_4bf7b0, sub_4c4700, sub_4c9390
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: neutral
*/
void neutral(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ca820ULL || rel >= 0x4cacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cacd0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4cacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cacd0ULL || rel >= 0x4cad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cad50 size=96 callers=4 calls=4
   calls: SiCore_Array_21, sub_4bf730, sub_4c87b0, sub_4c87f0
*/
void sub_4cad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cad50ULL || rel >= 0x4cadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cadb0 size=64 callers=2 calls=4
   calls: SiCore_String_6, sub_4bf730, sub_4c87b0, sub_4c87f0
*/
void sub_4cadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cadb0ULL || rel >= 0x4cadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cadf0 size=176 callers=0 calls=3
   calls: sub_1c0, sub_4bc640, sub_4c86a0
*/
void sub_4cadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cadf0ULL || rel >= 0x4caea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004caea0 size=320 callers=14 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c34a0
*/
void sub_4caea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4caea0ULL || rel >= 0x4cafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cafe0 size=400 callers=1 calls=3
   calls: SiCore_Array_24, SiCore_Reflection, sub_4bf730
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cafe0ULL || rel >= 0x4cb170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb170 size=400 callers=1 calls=0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiCore/Source/SiCore_Reflection.cpp
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Reflection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb170ULL || rel >= 0x4cb300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb300 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb300ULL || rel >= 0x4cb380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb380 size=96 callers=0 calls=0
*/
void sub_4cb380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb380ULL || rel >= 0x4cb3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb3e0 size=48 callers=0 calls=1
   calls: SiCore_String_24
*/
void sub_4cb3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb3e0ULL || rel >= 0x4cb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb410 size=16 callers=14 calls=0
*/
void sub_4cb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb410ULL || rel >= 0x4cb420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb420 size=528 callers=9 calls=4
   calls: SiCore_Array_23, SiCore_Array_42, sub_4bf730, sub_4cb630
*/
void sub_4cb420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb420ULL || rel >= 0x4cb630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb630 size=320 callers=2 calls=1
   calls: sub_4cb630
*/
void sub_4cb630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb630ULL || rel >= 0x4cb770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb770 size=64 callers=9 calls=0
*/
void sub_4cb770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb770ULL || rel >= 0x4cb7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb7b0 size=80 callers=1 calls=0
*/
void sub_4cb7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb7b0ULL || rel >= 0x4cb800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb800 size=96 callers=0 calls=0
*/
void sub_4cb800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb800ULL || rel >= 0x4cb860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb860 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb860ULL || rel >= 0x4cb8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cb8c0 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cb8c0ULL || rel >= 0x4cba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cba60 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4cba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cba60ULL || rel >= 0x4cbae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbae0 size=208 callers=1 calls=2
   calls: sub_4c4290, sub_4c5750
*/
void sub_4cbae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbae0ULL || rel >= 0x4cbbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbbb0 size=16 callers=1 calls=0
*/
void sub_4cbbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbbb0ULL || rel >= 0x4cbbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbbc0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4cbbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbbc0ULL || rel >= 0x4cbc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbc40 size=112 callers=1 calls=0
*/
void sub_4cbc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbc40ULL || rel >= 0x4cbcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbcb0 size=144 callers=0 calls=2
   calls: sub_1c0, sub_4bc640
*/
void sub_4cbcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbcb0ULL || rel >= 0x4cbd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbd40 size=144 callers=1 calls=8
   calls: SiGfx_Kernel_Impl, sub_4cad50, sub_4cbec0, sub_57a2c0, sub_594470, sub_595810, sub_596640, sub_596680
*/
void sub_4cbd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbd40ULL || rel >= 0x4cbdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbdd0 size=80 callers=3 calls=8
   calls: SiCore_String_26, sub_4cadb0, sub_4cbec0, sub_57a300, sub_5944b0, sub_595880, sub_596640, sub_596680
*/
void sub_4cbdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbdd0ULL || rel >= 0x4cbe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbe20 size=160 callers=0 calls=3
   calls: sub_1c0, sub_4bc640, sub_596410
*/
void sub_4cbe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbe20ULL || rel >= 0x4cbec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbec0 size=128 callers=12 calls=2
   calls: sub_1c0, sub_4cbf50
*/
void sub_4cbec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbec0ULL || rel >= 0x4cbf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbf40 size=16 callers=58 calls=0
*/
void sub_4cbf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbf40ULL || rel >= 0x4cbf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cbf50 size=608 callers=1 calls=6
   calls: ShaderPackage, sub_4bc640, sub_4bc690, sub_4bf660, sub_4bf7b0, sub_596410
*/
void sub_4cbf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cbf50ULL || rel >= 0x4cc1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc1b0 size=672 callers=1 calls=3
   calls: SiCore_String_26, SiCore_String_66, sub_596460
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc1b0ULL || rel >= 0x4cc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc450 size=1040 callers=2 calls=3
   calls: SiGfx_ShaderGraph_Object, sub_4bf7b0, sub_57d030
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc450ULL || rel >= 0x4cc860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc860 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc860ULL || rel >= 0x4cc900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc900 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_44(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc900ULL || rel >= 0x4cc980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cc980 size=256 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cc980ULL || rel >= 0x4cca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cca80 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_45(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cca80ULL || rel >= 0x4ccb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccb00 size=48 callers=0 calls=1
   calls: SiCore_String_25
*/
void sub_4ccb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccb00ULL || rel >= 0x4ccb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ccb30 size=1664 callers=1 calls=22
   calls: SiCore_Array_65, SiGfxShaderGraphNodeType, shadercache, sub_4bf7b0, sub_4c5930, sub_4cd1b0, sub_4d0df0, sub_4d1150, sub_4d2ba0, sub_4d3100, sub_4d3180, sub_4d9a50
   ... +10 more
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Kernel_Impl.cpp
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiGfx_Kernel_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ccb30ULL || rel >= 0x4cd1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd1b0 size=240 callers=2 calls=2
   calls: neutral_2, sub_4bf7b0
*/
void sub_4cd1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd1b0ULL || rel >= 0x4cd2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd2a0 size=496 callers=1 calls=7
   calls: SiCore_LinkedList, SiCore_String_11, sub_4bc640, sub_4bc690, sub_4c45c0, sub_4c8020, sub_582eb0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: /../shadercache
*/
void shadercache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd2a0ULL || rel >= 0x4cd490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd490 size=1232 callers=1 calls=9
   calls: SiGfxShaderGraphDataTypePOD, SiGfxShaderGraphDataTypeStruct, SiGfxShaderGraphDataTypeVector, SiGfxShaderGraphNode, SiGfxShaderGraphObject, sub_4bf7b0, sub_4caea0, sub_4cb410, sub_4cb420
   ref: SiGfxShaderGraphDataType
   ref: SiGfxShaderGraphFunctionNodeType
   ref: SiGfxShaderGraphDataValue
   ref: SiGfxShaderGraphDataValuePOD
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_NodeType_Function.h
   ref: SiGfxShaderGraphDataTypeMatrix
   ref: SiGfxShaderGraphDataTypeArray
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Matrix.h
*/
void SiGfxShaderGraphNodeType(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd490ULL || rel >= 0x4cd960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cd960 size=1104 callers=1 calls=0
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_POD.h
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Object.h
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Struct.h
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_NodeType_Function.h
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Node.h
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Matrix.h
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_NodeType.h
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType.h
*/
void SiGfx_ShaderGraph_Object(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cd960ULL || rel >= 0x4cddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cddb0 size=80 callers=1 calls=1
   calls: sub_4e2430
*/
void sub_4cddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cddb0ULL || rel >= 0x4cde00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cde00 size=608 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cde00ULL || rel >= 0x4ce060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce060 size=16 callers=0 calls=0
*/
void sub_4ce060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce060ULL || rel >= 0x4ce070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce070 size=16 callers=0 calls=0
*/
void sub_4ce070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce070ULL || rel >= 0x4ce080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

