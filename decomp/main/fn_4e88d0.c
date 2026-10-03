/* main functions 004e88d0..005043d0 (30 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 004e88d0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_138(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e88d0ULL || rel >= 0x4e8950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8950 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_139(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8950ULL || rel >= 0x4e89d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e89d0 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e89d0ULL || rel >= 0x4e8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8a70 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_141(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8a70ULL || rel >= 0x4e8af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8af0 size=48 callers=0 calls=1
   calls: SiCore_Array_136
*/
void sub_4e8af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8af0ULL || rel >= 0x4e8b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8b20 size=16 callers=1 calls=0
*/
void sub_4e8b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8b20ULL || rel >= 0x4e8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8b30 size=304 callers=2 calls=1
   calls: SiCore_String_61
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_142(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8b30ULL || rel >= 0x4e8c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8c60 size=240 callers=0 calls=1
   calls: SiCore_Array_148
*/
void sub_4e8c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8c60ULL || rel >= 0x4e8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8d50 size=896 callers=0 calls=7
   calls: SiCore_Array_142, SiCore_Array_144, SiCore_Array_149, SiCore_Array_150, sub_4bc640, sub_4c34a0, sub_4e90d0
   ref: ../../../../Include\SiCore/SiCore_QSorter.h
*/
void SiCore_QSorter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8d50ULL || rel >= 0x4e90d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e90d0 size=832 callers=1 calls=0
*/
void sub_4e90d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e90d0ULL || rel >= 0x4e9410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e9410 size=816 callers=0 calls=5
   calls: SiCore_Array_144, SiCore_Array_148, sub_4bc640, sub_4bc690, sub_4c4700
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderCache/SiGfx_ShaderCache_BinaryPackage_Impl
*/
void SiGfx_ShaderCache_BinaryPackage_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e9410ULL || rel >= 0x4e9740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e9740 size=752 callers=0 calls=4
   calls: sub_4c5520, sub_4ed060, sub_4ed070, sub_57d030
   ref: SSKKShaderBinCache
*/
void SSKKShaderBinCache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e9740ULL || rel >= 0x4e9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e9a30 size=928 callers=0 calls=5
   calls: SiCore_Array_144, SiCore_Array_149, SiCore_Array_150, sub_4c5630, sub_57d030
   ref: SSKKShaderBinCache
*/
void SSKKShaderBinCache_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e9a30ULL || rel >= 0x4e9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e9dd0 size=656 callers=0 calls=6
   calls: SiCore_String_67, sub_4bc640, sub_4bc690, sub_4c3510, sub_596640, sub_596680
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e9dd0ULL || rel >= 0x4ea060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea060 size=144 callers=1 calls=0
*/
void sub_4ea060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea060ULL || rel >= 0x4ea0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea0f0 size=32 callers=0 calls=0
*/
void sub_4ea0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea0f0ULL || rel >= 0x4ea110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea110 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\ShaderCache/SiGfx_ShaderCache_BinaryPackage_Impl.h
*/
void SiGfx_ShaderCache_BinaryPackage_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea110ULL || rel >= 0x4ea190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea190 size=16 callers=0 calls=0
*/
void sub_4ea190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea190ULL || rel >= 0x4ea1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea1a0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_143(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea1a0ULL || rel >= 0x4ea200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea200 size=400 callers=23 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_144(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea200ULL || rel >= 0x4ea390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea390 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_145(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea390ULL || rel >= 0x4ea3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea3f0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_146(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea3f0ULL || rel >= 0x4ea480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea480 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_147(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea480ULL || rel >= 0x4ea4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea4e0 size=256 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_61(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea4e0ULL || rel >= 0x4ea5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea5e0 size=416 callers=3 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_148(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea5e0ULL || rel >= 0x4ea780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea780 size=560 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_149(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea780ULL || rel >= 0x4ea9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ea9b0 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ea9b0ULL || rel >= 0x4eab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eab50 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4eab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eab50ULL || rel >= 0x4eabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eabd0 size=32 callers=1 calls=0
*/
void sub_4eabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eabd0ULL || rel >= 0x4eabf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eabf0 size=32 callers=0 calls=0
*/
void sub_4eabf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eabf0ULL || rel >= 0x4eac10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eac10 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_4eac10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eac10ULL || rel >= 0x4eac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eac50 size=16 callers=1 calls=0
*/
void sub_4eac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eac50ULL || rel >= 0x4eac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eac60 size=400 callers=0 calls=2
   calls: sub_4bc640, sub_4bc690
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_62(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eac60ULL || rel >= 0x4eadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eadf0 size=96 callers=0 calls=0
*/
void sub_4eadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eadf0ULL || rel >= 0x4eae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eae50 size=32 callers=0 calls=0
*/
void sub_4eae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eae50ULL || rel >= 0x4eae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eae70 size=1280 callers=0 calls=9
   calls: SiCore_String_69, SiCore_String_70, sub_4bc640, sub_4bc690, sub_4c5630, sub_4cbae0, sub_4ed080, sub_4f1290, sub_4f3dc0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: mb_tex
*/
void mb_tex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eae70ULL || rel >= 0x4eb370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eb370 size=432 callers=0 calls=2
   calls: sub_4bc640, sub_4bc690
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_63(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eb370ULL || rel >= 0x4eb520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eb520 size=416 callers=0 calls=2
   calls: sub_4bc640, sub_4bc690
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eb520ULL || rel >= 0x4eb6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eb6c0 size=432 callers=0 calls=2
   calls: sub_4bc640, sub_4bc690
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_65(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eb6c0ULL || rel >= 0x4eb870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eb870 size=288 callers=0 calls=1
   calls: sub_57d030
*/
void sub_4eb870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eb870ULL || rel >= 0x4eb990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eb990 size=352 callers=0 calls=4
   calls: sub_4c8f80, sub_4efb10, sub_4efdd0, sub_4f0f90
*/
void sub_4eb990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eb990ULL || rel >= 0x4ebaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ebaf0 size=16 callers=0 calls=0
*/
void sub_4ebaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ebaf0ULL || rel >= 0x4ebb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ebb00 size=16 callers=0 calls=0
*/
void sub_4ebb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ebb00ULL || rel >= 0x4ebb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ebb10 size=16 callers=0 calls=0
*/
void sub_4ebb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ebb10ULL || rel >= 0x4ebb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ebb20 size=320 callers=0 calls=3
   calls: Unknown_3, sub_4c9b90, sub_57d030
   ref: Texture
   ref: SSKKArchive
*/
void SSKKArchive(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ebb20ULL || rel >= 0x4ebc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ebc60 size=3088 callers=0 calls=8
   calls: SiCore_Array_144, SiCore_Array_151, SiGfx_BinaryChunk_Texture, sub_4c8020, sub_4ed080, sub_4ed0c0, sub_4ed0f0, sub_4ed120
*/
void sub_4ebc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ebc60ULL || rel >= 0x4ec870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ec870 size=32 callers=0 calls=0
*/
void sub_4ec870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ec870ULL || rel >= 0x4ec890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ec890 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_TextureUtility_Impl.h
*/
void SiGfx_TextureUtility_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ec890ULL || rel >= 0x4ec910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ec910 size=16 callers=0 calls=0
*/
void sub_4ec910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ec910ULL || rel >= 0x4ec920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ec920 size=544 callers=6 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_151(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ec920ULL || rel >= 0x4ecb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ecb40 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4ecb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ecb40ULL || rel >= 0x4ecbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ecbc0 size=192 callers=2 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c4700
   ref: ShaderPackage
*/
void ShaderPackage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ecbc0ULL || rel >= 0x4ecc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ecc80 size=160 callers=4 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_66(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ecc80ULL || rel >= 0x4ecd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ecd20 size=544 callers=0 calls=1
   calls: sub_4c4700
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: shaderpkg
*/
void shaderpkg(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ecd20ULL || rel >= 0x4ecf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ecf40 size=160 callers=16 calls=0
*/
void sub_4ecf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ecf40ULL || rel >= 0x4ecfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ecfe0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4ecfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ecfe0ULL || rel >= 0x4ed060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed060 size=16 callers=2 calls=0
*/
void sub_4ed060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed060ULL || rel >= 0x4ed070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed070 size=16 callers=1 calls=0
*/
void sub_4ed070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed070ULL || rel >= 0x4ed080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed080 size=16 callers=3 calls=0
*/
void sub_4ed080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed080ULL || rel >= 0x4ed090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed090 size=48 callers=1 calls=0
*/
void sub_4ed090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed090ULL || rel >= 0x4ed0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed0c0 size=48 callers=30 calls=1
   calls: sub_4ed090
*/
void sub_4ed0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed0c0ULL || rel >= 0x4ed0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed0f0 size=48 callers=25 calls=0
*/
void sub_4ed0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed0f0ULL || rel >= 0x4ed120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed120 size=48 callers=25 calls=0
*/
void sub_4ed120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed120ULL || rel >= 0x4ed150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed150 size=48 callers=14 calls=0
*/
void sub_4ed150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed150ULL || rel >= 0x4ed180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed180 size=16 callers=1 calls=0
*/
void sub_4ed180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed180ULL || rel >= 0x4ed190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed190 size=16 callers=3 calls=0
*/
void sub_4ed190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed190ULL || rel >= 0x4ed1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed1a0 size=96 callers=4 calls=0
*/
void sub_4ed1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed1a0ULL || rel >= 0x4ed200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed200 size=256 callers=3 calls=0
*/
void sub_4ed200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed200ULL || rel >= 0x4ed300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed300 size=496 callers=2 calls=0
*/
void sub_4ed300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed300ULL || rel >= 0x4ed4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed4f0 size=320 callers=2 calls=0
*/
void sub_4ed4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed4f0ULL || rel >= 0x4ed630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed630 size=80 callers=1 calls=0
*/
void sub_4ed630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed630ULL || rel >= 0x4ed680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed680 size=80 callers=1 calls=0
*/
void sub_4ed680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed680ULL || rel >= 0x4ed6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed6d0 size=16 callers=1 calls=0
*/
void sub_4ed6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed6d0ULL || rel >= 0x4ed6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed6e0 size=64 callers=2 calls=0
*/
void sub_4ed6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed6e0ULL || rel >= 0x4ed720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed720 size=96 callers=6 calls=0
*/
void sub_4ed720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed720ULL || rel >= 0x4ed780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed780 size=208 callers=21 calls=0
*/
void sub_4ed780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed780ULL || rel >= 0x4ed850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ed850 size=1440 callers=10 calls=2
   calls: sub_594d30, sub_594e80
*/
void sub_4ed850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ed850ULL || rel >= 0x4eddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004eddf0 size=432 callers=2 calls=5
   calls: SiCore_String_11, sub_4c3410, sub_4c3450, sub_4c5860, sub_4edfa0
*/
void sub_4eddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4eddf0ULL || rel >= 0x4edfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004edfa0 size=128 callers=3 calls=1
   calls: sub_4ef880
*/
void sub_4edfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4edfa0ULL || rel >= 0x4ee020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ee020 size=240 callers=3 calls=3
   calls: sub_594550, sub_594580, sub_594590
*/
void sub_4ee020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ee020ULL || rel >= 0x4ee110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ee110 size=384 callers=1 calls=2
   calls: SiGfx_Utility_2, sub_4cbf40
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Utility.cpp
*/
void SiGfx_Utility(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ee110ULL || rel >= 0x4ee290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ee290 size=976 callers=1 calls=2
   calls: sub_4cbf40, sub_4ee660
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Utility.cpp
*/
void SiGfx_Utility_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ee290ULL || rel >= 0x4ee660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ee660 size=496 callers=7 calls=0
*/
void sub_4ee660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ee660ULL || rel >= 0x4ee850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ee850 size=16 callers=2 calls=0
*/
void sub_4ee850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ee850ULL || rel >= 0x4ee860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ee860 size=16 callers=1 calls=0
*/
void sub_4ee860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ee860ULL || rel >= 0x4ee870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ee870 size=4112 callers=1 calls=11
   calls: SiCore_LinkedList, SiCore_String_11, SiCore_String_8, sub_4bc640, sub_4bc690, sub_4c3510, sub_4c3560, sub_4c4700, sub_4c9090, sub_4e4400, sub_4edfa0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: .shadercache
   ref: _%08x_%08x
*/
void SiCore_String_67(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ee870ULL || rel >= 0x4ef880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ef880 size=240 callers=1 calls=3
   calls: SiCore_String_11, sub_4bc640, sub_4bc690
*/
void sub_4ef880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ef880ULL || rel >= 0x4ef970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ef970 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4ef970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ef970ULL || rel >= 0x4ef9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ef9f0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4ef9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ef9f0ULL || rel >= 0x4efa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004efa70 size=160 callers=1 calls=2
   calls: sub_4efb80, sub_57a3a0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/BinaryArchive/Texture/SiGfx_BinaryChunk_Texture.
*/
void SiGfx_BinaryChunk_Texture(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4efa70ULL || rel >= 0x4efb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004efb10 size=112 callers=1 calls=2
   calls: sub_4efb80, sub_57a3a0
*/
void sub_4efb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4efb10ULL || rel >= 0x4efb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004efb80 size=592 callers=2 calls=2
   calls: sub_4bc640, sub_4bc690
*/
void sub_4efb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4efb80ULL || rel >= 0x4efdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004efdd0 size=112 callers=1 calls=1
   calls: SiCore_String_68
*/
void sub_4efdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4efdd0ULL || rel >= 0x4efe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004efe40 size=880 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4efe40ULL || rel >= 0x4f01b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f01b0 size=112 callers=0 calls=2
   calls: SiCore_String_68, sub_57a440
*/
void sub_4f01b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f01b0ULL || rel >= 0x4f0220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f0220 size=928 callers=0 calls=4
   calls: SiIO_Utility, sub_582f70, sub_582ff0, sub_583240
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/BinaryArchive/Texture/SiGfx_BinaryChunk_Texture.
*/
void SiGfx_BinaryChunk_Texture_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f0220ULL || rel >= 0x4f05c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f05c0 size=2512 callers=0 calls=7
   calls: SiIO_Utility_2, sub_4bc640, sub_4bc690, sub_4c8020, sub_582f10, sub_583140, sub_5832c0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/BinaryArchive/Texture/SiGfx_BinaryChunk_Texture.
*/
void SiGfx_BinaryChunk_Texture_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f05c0ULL || rel >= 0x4f0f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f0f90 size=144 callers=1 calls=0
*/
void sub_4f0f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f0f90ULL || rel >= 0x4f1020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1020 size=32 callers=0 calls=0
*/
void sub_4f1020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1020ULL || rel >= 0x4f1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1040 size=128 callers=0 calls=0
   ref: ../../../../Include\SiIO/SiIO_BinaryArchive.h
*/
void SiIO_BinaryArchive(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1040ULL || rel >= 0x4f10c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f10c0 size=16 callers=0 calls=0
*/
void sub_4f10c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f10c0ULL || rel >= 0x4f10d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f10d0 size=16 callers=0 calls=0
*/
void sub_4f10d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f10d0ULL || rel >= 0x4f10e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f10e0 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_152(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f10e0ULL || rel >= 0x4f1180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1180 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_153(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1180ULL || rel >= 0x4f1210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1210 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4f1210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1210ULL || rel >= 0x4f1290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1290 size=304 callers=4 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_4f1290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1290ULL || rel >= 0x4f13c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f13c0 size=480 callers=5 calls=1
   calls: SiGfx_Image_7
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_69(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f13c0ULL || rel >= 0x4f15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f15a0 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_154(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f15a0ULL || rel >= 0x4f1640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1640 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_155(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1640ULL || rel >= 0x4f16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f16e0 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_156(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f16e0ULL || rel >= 0x4f1780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1780 size=16 callers=0 calls=0
*/
void sub_4f1780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1780ULL || rel >= 0x4f1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1790 size=48 callers=0 calls=1
   calls: SiCore_String_69
*/
void sub_4f1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1790ULL || rel >= 0x4f17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f17c0 size=48 callers=0 calls=1
   calls: SiCore_String_69
*/
void sub_4f17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f17c0ULL || rel >= 0x4f17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f17f0 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_4f17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f17f0ULL || rel >= 0x4f1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1830 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_4f1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1830ULL || rel >= 0x4f1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1870 size=16 callers=0 calls=0
*/
void sub_4f1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1870ULL || rel >= 0x4f1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1880 size=16 callers=0 calls=0
*/
void sub_4f1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1880ULL || rel >= 0x4f1890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1890 size=16 callers=0 calls=0
*/
void sub_4f1890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1890ULL || rel >= 0x4f18a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f18a0 size=16 callers=0 calls=0
*/
void sub_4f18a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f18a0ULL || rel >= 0x4f18b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f18b0 size=240 callers=1 calls=0
*/
void sub_4f18b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f18b0ULL || rel >= 0x4f19a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f19a0 size=816 callers=0 calls=6
   calls: SiCore_Array_160, sub_4ed0c0, sub_4ed0f0, sub_4ed120, sub_4ed150, sub_4ed1a0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/SiGfx_Image.cpp
*/
void SiGfx_Image(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f19a0ULL || rel >= 0x4f1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f1cd0 size=864 callers=0 calls=6
   calls: SiCore_Array_161, sub_4ed0c0, sub_4ed0f0, sub_4ed120, sub_4ed150, sub_4ed200
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/SiGfx_Image.cpp
*/
void SiGfx_Image_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f1cd0ULL || rel >= 0x4f2030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2030 size=928 callers=0 calls=6
   calls: SiCore_Array_161, sub_4ed0c0, sub_4ed0f0, sub_4ed120, sub_4ed150, sub_4ed200
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/SiGfx_Image.cpp
*/
void SiGfx_Image_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2030ULL || rel >= 0x4f23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f23d0 size=2080 callers=0 calls=6
   calls: SiCore_Array_161, sub_4ed0c0, sub_4ed0f0, sub_4ed120, sub_4ed150, sub_4ed1a0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/SiGfx_Image.cpp
*/
void SiGfx_Image_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f23d0ULL || rel >= 0x4f2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2bf0 size=928 callers=0 calls=6
   calls: SiCore_Array_161, sub_4ed0c0, sub_4ed0f0, sub_4ed120, sub_4ed150, sub_4ed1a0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/SiGfx_Image.cpp
*/
void SiGfx_Image_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2bf0ULL || rel >= 0x4f2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f2f90 size=928 callers=0 calls=6
   calls: SiCore_Array_162, sub_4ed0c0, sub_4ed0f0, sub_4ed120, sub_4ed150, sub_4ed300
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/SiGfx_Image.cpp
*/
void SiGfx_Image_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f2f90ULL || rel >= 0x4f3330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3330 size=432 callers=6 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/SiGfx_Image.cpp
*/
void SiGfx_Image_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3330ULL || rel >= 0x4f34e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f34e0 size=64 callers=0 calls=0
*/
void sub_4f34e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f34e0ULL || rel >= 0x4f3520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3520 size=192 callers=2 calls=0
*/
void sub_4f3520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3520ULL || rel >= 0x4f35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f35e0 size=96 callers=0 calls=0
*/
void sub_4f35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f35e0ULL || rel >= 0x4f3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3640 size=64 callers=0 calls=0
*/
void sub_4f3640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3640ULL || rel >= 0x4f3680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3680 size=128 callers=1 calls=1
   calls: SiGfx_Utility
*/
void sub_4f3680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3680ULL || rel >= 0x4f3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3700 size=1280 callers=0 calls=4
   calls: sub_4ed0c0, sub_4ed150, sub_4ed630, sub_4ed680
*/
void sub_4f3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3700ULL || rel >= 0x4f3c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3c00 size=240 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4cbf40
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3c00ULL || rel >= 0x4f3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3cf0 size=112 callers=0 calls=1
   calls: sub_4cbf40
*/
void sub_4f3cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3cf0ULL || rel >= 0x4f3d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3d60 size=96 callers=0 calls=0
*/
void sub_4f3d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3d60ULL || rel >= 0x4f3dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3dc0 size=16 callers=1 calls=0
*/
void sub_4f3dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3dc0ULL || rel >= 0x4f3dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f3dd0 size=1360 callers=0 calls=5
   calls: SiCore_Array_161, sub_4ed0c0, sub_4ed0f0, sub_4ed120, sub_4ed150
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/SiGfx_Image.cpp
*/
void SiGfx_Image_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f3dd0ULL || rel >= 0x4f4320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4320 size=112 callers=0 calls=0
*/
void sub_4f4320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4320ULL || rel >= 0x4f4390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4390 size=608 callers=1 calls=3
   calls: sub_4c9270, sub_4cbf40, sub_4f1290
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/SiGfx_Image.cpp
*/
void SiGfx_Image_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4390ULL || rel >= 0x4f45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f45f0 size=32 callers=0 calls=0
*/
void sub_4f45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f45f0ULL || rel >= 0x4f4610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4610 size=128 callers=0 calls=0
   ref: ../../../../Include\SiGfx/Image/SiGfx_Image.h
*/
void SiGfx_Image_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4610ULL || rel >= 0x4f4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4690 size=16 callers=0 calls=0
*/
void sub_4f4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4690ULL || rel >= 0x4f46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f46a0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_157(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f46a0ULL || rel >= 0x4f4730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4730 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_158(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4730ULL || rel >= 0x4f47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f47c0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_159(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f47c0ULL || rel >= 0x4f4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4850 size=736 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4850ULL || rel >= 0x4f4b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4b30 size=608 callers=5 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_161(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4b30ULL || rel >= 0x4f4d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4d90 size=560 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_162(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4d90ULL || rel >= 0x4f4fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f4fc0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4f4fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f4fc0ULL || rel >= 0x4f5040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5040 size=96 callers=1 calls=1
   calls: sub_4bf660
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/DDS/SiGfx_ImageLoader_DDS.cpp
*/
void SiGfx_ImageLoader_DDS(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5040ULL || rel >= 0x4f50a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f50a0 size=32 callers=0 calls=0
*/
void sub_4f50a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f50a0ULL || rel >= 0x4f50c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f50c0 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_4f50c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f50c0ULL || rel >= 0x4f5100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5100 size=432 callers=0 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4f52b0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_71(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5100ULL || rel >= 0x4f52b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f52b0 size=704 callers=1 calls=3
   calls: SiCore_String_11, sub_4bc640, sub_4bc690
*/
void sub_4f52b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f52b0ULL || rel >= 0x4f5570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5570 size=768 callers=0 calls=6
   calls: Header_Size_is_not_124, Invalid_format, SiCore_String_11, sub_4c4700, sub_4f5d90, sub_57d030
   ref: SiGfxImageLoaderDDS::Load --> Failed to read memory stream
   ref: SiGfxImageLoaderDDS::Load --> Failed to create memory stream
*/
void SiGfxImageLoaderDDS_Load_Failed_to_read_memory_stream(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5570ULL || rel >= 0x4f5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5870 size=624 callers=1 calls=2
   calls: SiCore_String_11, sub_4c4700
   ref: Header Size is not 124  : 
   ref: This is not valid DDS file : 
   ref: Failed to read DDS header : 
   ref: Failed to read DDS header DXT10 : 
*/
void Header_Size_is_not_124(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5870ULL || rel >= 0x4f5ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5ae0 size=688 callers=1 calls=4
   calls: SiCore_String_11, sub_4c4700, sub_4f66b0, sub_4f6890
   ref: Failed to create image : 
   ref: Invalid image type : 
   ref: Invalid format : 
*/
void Invalid_format(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5ae0ULL || rel >= 0x4f5d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5d90 size=64 callers=1 calls=0
*/
void sub_4f5d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5d90ULL || rel >= 0x4f5dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5dd0 size=432 callers=0 calls=3
   calls: sub_4ed0c0, sub_4ed0f0, sub_4ed120
*/
void sub_4f5dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5dd0ULL || rel >= 0x4f5f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f5f80 size=512 callers=0 calls=3
   calls: sub_4ed0c0, sub_4ed0f0, sub_4ed120
*/
void sub_4f5f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f5f80ULL || rel >= 0x4f6180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6180 size=496 callers=0 calls=3
   calls: sub_4ed0c0, sub_4ed0f0, sub_4ed120
*/
void sub_4f6180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6180ULL || rel >= 0x4f6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6370 size=528 callers=0 calls=3
   calls: sub_4ed0c0, sub_4ed0f0, sub_4ed120
*/
void sub_4f6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6370ULL || rel >= 0x4f6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6580 size=32 callers=0 calls=0
*/
void sub_4f6580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6580ULL || rel >= 0x4f65a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f65a0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\Image/DDS/SiGfx_ImageLoader_DDS.h
*/
void SiGfx_ImageLoader_DDS_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f65a0ULL || rel >= 0x4f6620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6620 size=16 callers=0 calls=0
*/
void sub_4f6620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6620ULL || rel >= 0x4f6630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6630 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4f6630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6630ULL || rel >= 0x4f66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f66b0 size=480 callers=1 calls=0
*/
void sub_4f66b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f66b0ULL || rel >= 0x4f6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6890 size=16 callers=1 calls=0
*/
void sub_4f6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6890ULL || rel >= 0x4f68a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f68a0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4f68a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f68a0ULL || rel >= 0x4f6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6920 size=128 callers=1 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_4f6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6920ULL || rel >= 0x4f69a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f69a0 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_163(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f69a0ULL || rel >= 0x4f6a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6a70 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_164(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6a70ULL || rel >= 0x4f6af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6af0 size=224 callers=0 calls=1
   calls: sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_165(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6af0ULL || rel >= 0x4f6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6bd0 size=128 callers=0 calls=1
   calls: sub_4bf7b0
*/
void sub_4f6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6bd0ULL || rel >= 0x4f6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6c50 size=16 callers=0 calls=0
*/
void sub_4f6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6c50ULL || rel >= 0x4f6c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6c60 size=16 callers=0 calls=0
*/
void sub_4f6c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6c60ULL || rel >= 0x4f6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6c70 size=16 callers=1 calls=0
*/
void sub_4f6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6c70ULL || rel >= 0x4f6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6c80 size=256 callers=1 calls=3
   calls: SiCore_Array_167, SiGfx_NX_Device_Impl, sub_4f71a0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Manager_Impl.cpp
*/
void SiGfx_NX_Manager_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6c80ULL || rel >= 0x4f6d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6d80 size=224 callers=1 calls=1
   calls: sub_4cbec0
*/
void sub_4f6d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6d80ULL || rel >= 0x4f6e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6e60 size=32 callers=0 calls=0
*/
void sub_4f6e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6e60ULL || rel >= 0x4f6e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6e80 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_Manager_Impl.h
*/
void SiGfx_NX_Manager_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6e80ULL || rel >= 0x4f6f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6f00 size=16 callers=0 calls=0
*/
void sub_4f6f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6f00ULL || rel >= 0x4f6f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6f10 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_166(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6f10ULL || rel >= 0x4f6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f6f70 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_167(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f6f70ULL || rel >= 0x4f7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7110 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4f7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7110ULL || rel >= 0x4f7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7190 size=16 callers=0 calls=0
*/
void sub_4f7190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7190ULL || rel >= 0x4f71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f71a0 size=1120 callers=1 calls=3
   calls: sub_4bc640, sub_4bf660, sub_596410
*/
void sub_4f71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f71a0ULL || rel >= 0x4f7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7600 size=352 callers=1 calls=3
   calls: sub_4f6d80, sub_4f7760, sub_596460
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_168(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7600ULL || rel >= 0x4f7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7760 size=176 callers=2 calls=2
   calls: SiCore_Array_170, sub_4f7960
*/
void sub_4f7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7760ULL || rel >= 0x4f7810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7810 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_169(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7810ULL || rel >= 0x4f7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7890 size=48 callers=0 calls=1
   calls: SiCore_Array_168
*/
void sub_4f7890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7890ULL || rel >= 0x4f78c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f78c0 size=160 callers=1 calls=2
   calls: sub_539270, sub_5393f0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f78c0ULL || rel >= 0x4f7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7960 size=448 callers=2 calls=0
*/
void sub_4f7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7960ULL || rel >= 0x4f7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7b20 size=432 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7b20ULL || rel >= 0x4f7cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7cd0 size=32 callers=0 calls=0
*/
void sub_4f7cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7cd0ULL || rel >= 0x4f7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7cf0 size=32 callers=0 calls=0
*/
void sub_4f7cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7cf0ULL || rel >= 0x4f7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7d10 size=16 callers=0 calls=0
*/
void sub_4f7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7d10ULL || rel >= 0x4f7d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7d20 size=16 callers=0 calls=0
*/
void sub_4f7d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7d20ULL || rel >= 0x4f7d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7d30 size=64 callers=0 calls=1
   calls: sub_552080
*/
void sub_4f7d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7d30ULL || rel >= 0x4f7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7d70 size=64 callers=0 calls=1
   calls: sub_552840
*/
void sub_4f7d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7d70ULL || rel >= 0x4f7db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f7db0 size=1264 callers=0 calls=10
   calls: SiGfx_NX_DescriptorHeap_2, SiGfx_NX_DescriptorHeap_4, SiGfx_NX_Device_Impl_3, SiGfx_NX_Device_Impl_4, SiGfx_NX_Device_Impl_5, nvnDeviceGetProcAddress, sub_4f88f0, sub_551300, sub_5518d0, sub_5520b0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f7db0ULL || rel >= 0x4f82a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f82a0 size=960 callers=2 calls=12
   calls: SiGfx_NX_Common, sub_4fe610, sub_536cb0, sub_538e50, sub_5544e0, sub_555340, sub_5588d0, sub_5593f0, sub_55c220, sub_55d5b0, sub_563700, sub_565560
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f82a0ULL || rel >= 0x4f8660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f8660 size=336 callers=2 calls=4
   calls: SiGfx_NX_CommandList_Impl_2, SiGfx_NX_CommandQueue_Impl_2, sub_539920, sub_54d9d0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f8660ULL || rel >= 0x4f87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f87b0 size=320 callers=1 calls=3
   calls: SiGfx_NX_Canvas_Impl, sub_4c5a90, sub_4fb6d0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
   ref: DefaultCanvas_%d
*/
void SiGfx_NX_Device_Impl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f87b0ULL || rel >= 0x4f88f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f88f0 size=352 callers=2 calls=4
   calls: sub_4fa590, sub_4fb090, sub_539650, sub_559d30
*/
void sub_4f88f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f88f0ULL || rel >= 0x4f8a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f8a50 size=16 callers=0 calls=0
*/
void sub_4f8a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f8a50ULL || rel >= 0x4f8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f8a60 size=16 callers=0 calls=0
*/
void sub_4f8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f8a60ULL || rel >= 0x4f8a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f8a70 size=16 callers=0 calls=0
*/
void sub_4f8a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f8a70ULL || rel >= 0x4f8a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f8a80 size=528 callers=0 calls=9
   calls: SiGfx_NX_Canvas_Impl_4, SiGfx_NX_Device_Impl_3, SiGfx_NX_Device_Impl_4, SiGfx_NX_Device_Impl_6, sub_4c5a90, sub_4f7760, sub_4f88f0, sub_4fb6d0, sub_551300
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
   ref: DefaultCanvas
*/
void DefaultCanvas(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f8a80ULL || rel >= 0x4f8c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f8c90 size=1520 callers=1 calls=2
   calls: SiCore_Array_172, sub_5528f0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f8c90ULL || rel >= 0x4f9280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9280 size=16 callers=0 calls=0
*/
void sub_4f9280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9280ULL || rel >= 0x4f9290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9290 size=16 callers=0 calls=0
*/
void sub_4f9290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9290ULL || rel >= 0x4f92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f92a0 size=480 callers=0 calls=7
   calls: SiCore_Array_170, sub_4cbec0, sub_4cddb0, sub_4f7960, sub_4f9480, sub_551910, sub_5520f0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f92a0ULL || rel >= 0x4f9480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9480 size=448 callers=1 calls=4
   calls: SiGfx_NX_MemoryHeap_Impl_6, sub_4cbf40, sub_4e7680, sub_539700
*/
void sub_4f9480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9480ULL || rel >= 0x4f9640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9640 size=96 callers=33 calls=0
*/
void sub_4f9640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9640ULL || rel >= 0x4f96a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f96a0 size=16 callers=0 calls=0
*/
void sub_4f96a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f96a0ULL || rel >= 0x4f96b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f96b0 size=16 callers=0 calls=0
*/
void sub_4f96b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f96b0ULL || rel >= 0x4f96c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f96c0 size=16 callers=0 calls=0
*/
void sub_4f96c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f96c0ULL || rel >= 0x4f96d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f96d0 size=16 callers=0 calls=0
*/
void sub_4f96d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f96d0ULL || rel >= 0x4f96e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f96e0 size=16 callers=0 calls=0
*/
void sub_4f96e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f96e0ULL || rel >= 0x4f96f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f96f0 size=16 callers=0 calls=0
*/
void sub_4f96f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f96f0ULL || rel >= 0x4f9700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9700 size=16 callers=0 calls=0
*/
void sub_4f9700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9700ULL || rel >= 0x4f9710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9710 size=16 callers=0 calls=0
*/
void sub_4f9710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9710ULL || rel >= 0x4f9720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9720 size=16 callers=0 calls=0
*/
void sub_4f9720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9720ULL || rel >= 0x4f9730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9730 size=16 callers=0 calls=0
*/
void sub_4f9730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9730ULL || rel >= 0x4f9740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9740 size=16 callers=0 calls=0
*/
void sub_4f9740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9740ULL || rel >= 0x4f9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9750 size=16 callers=0 calls=0
*/
void sub_4f9750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9750ULL || rel >= 0x4f9760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9760 size=16 callers=0 calls=0
*/
void sub_4f9760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9760ULL || rel >= 0x4f9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9770 size=16 callers=0 calls=0
*/
void sub_4f9770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9770ULL || rel >= 0x4f9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9780 size=192 callers=0 calls=2
   calls: sub_53b200, sub_53b680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9780ULL || rel >= 0x4f9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9840 size=160 callers=0 calls=2
   calls: SiGfx_NX_CommandList_Impl_2, sub_539920
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9840ULL || rel >= 0x4f98e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f98e0 size=160 callers=0 calls=2
   calls: sub_54f170, sub_54f420
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f98e0ULL || rel >= 0x4f9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9980 size=160 callers=0 calls=2
   calls: SiGfx_NX_CommandCache_Impl_3, sub_54d430
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9980ULL || rel >= 0x4f9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9a20 size=160 callers=0 calls=2
   calls: sub_553180, sub_553680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9a20ULL || rel >= 0x4f9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9ac0 size=160 callers=0 calls=2
   calls: sub_556cf0, sub_556fe0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9ac0ULL || rel >= 0x4f9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9b60 size=160 callers=0 calls=2
   calls: SiCore_Array_250, sub_54fa00
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9b60ULL || rel >= 0x4f9c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9c00 size=160 callers=0 calls=2
   calls: sub_54e790, sub_54ea20
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9c00ULL || rel >= 0x4f9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9ca0 size=160 callers=0 calls=2
   calls: sub_5550c0, sub_555160
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9ca0ULL || rel >= 0x4f9d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9d40 size=144 callers=0 calls=2
   calls: sub_5528f0, sub_552af0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9d40ULL || rel >= 0x4f9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9dd0 size=16 callers=0 calls=0
*/
void sub_4f9dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9dd0ULL || rel >= 0x4f9de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9de0 size=64 callers=0 calls=0
*/
void sub_4f9de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9de0ULL || rel >= 0x4f9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9e20 size=64 callers=0 calls=0
*/
void sub_4f9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9e20ULL || rel >= 0x4f9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9e60 size=16 callers=0 calls=0
*/
void sub_4f9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9e60ULL || rel >= 0x4f9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9e70 size=16 callers=0 calls=0
*/
void sub_4f9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9e70ULL || rel >= 0x4f9e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9e80 size=16 callers=0 calls=0
*/
void sub_4f9e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9e80ULL || rel >= 0x4f9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9e90 size=16 callers=0 calls=0
*/
void sub_4f9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9e90ULL || rel >= 0x4f9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9ea0 size=48 callers=0 calls=1
   calls: SiGfx_NX_VertexFormatPool
*/
void sub_4f9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9ea0ULL || rel >= 0x4f9ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9ed0 size=32 callers=0 calls=1
   calls: sub_534780
*/
void sub_4f9ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9ed0ULL || rel >= 0x4f9ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9ef0 size=32 callers=0 calls=1
   calls: sub_534900
*/
void sub_4f9ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9ef0ULL || rel >= 0x4f9f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9f10 size=16 callers=0 calls=0
*/
void sub_4f9f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9f10ULL || rel >= 0x4f9f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9f20 size=64 callers=0 calls=1
   calls: SiGfx_NX_TexturePool
*/
void sub_4f9f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9f20ULL || rel >= 0x4f9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9f60 size=32 callers=0 calls=1
   calls: sub_534780
*/
void sub_4f9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9f60ULL || rel >= 0x4f9f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9f80 size=32 callers=0 calls=1
   calls: sub_534900
*/
void sub_4f9f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9f80ULL || rel >= 0x4f9fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9fa0 size=64 callers=0 calls=1
   calls: SiGfx_NX_SamplerPool
*/
void sub_4f9fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9fa0ULL || rel >= 0x4f9fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004f9fe0 size=32 callers=0 calls=1
   calls: sub_534780
*/
void sub_4f9fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4f9fe0ULL || rel >= 0x4fa000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa000 size=32 callers=0 calls=1
   calls: sub_534900
*/
void sub_4fa000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa000ULL || rel >= 0x4fa020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa020 size=48 callers=0 calls=1
   calls: SiGfx_NX_FontPool
*/
void sub_4fa020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa020ULL || rel >= 0x4fa050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa050 size=32 callers=0 calls=1
   calls: sub_534780
*/
void sub_4fa050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa050ULL || rel >= 0x4fa070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa070 size=32 callers=0 calls=1
   calls: sub_534900
*/
void sub_4fa070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa070ULL || rel >= 0x4fa090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa090 size=16 callers=0 calls=0
*/
void sub_4fa090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa090ULL || rel >= 0x4fa0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa0a0 size=48 callers=0 calls=1
   calls: SiGfx_NX_BufferPool
*/
void sub_4fa0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa0a0ULL || rel >= 0x4fa0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa0d0 size=32 callers=0 calls=1
   calls: sub_534780
*/
void sub_4fa0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa0d0ULL || rel >= 0x4fa0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa0f0 size=32 callers=0 calls=1
   calls: sub_534900
*/
void sub_4fa0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa0f0ULL || rel >= 0x4fa110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa110 size=48 callers=0 calls=1
   calls: SiGfx_NX_CanvasPool
*/
void sub_4fa110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa110ULL || rel >= 0x4fa140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa140 size=32 callers=0 calls=1
   calls: sub_534780
*/
void sub_4fa140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa140ULL || rel >= 0x4fa160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa160 size=32 callers=0 calls=1
   calls: sub_534900
*/
void sub_4fa160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa160ULL || rel >= 0x4fa180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa180 size=144 callers=0 calls=1
   calls: sub_539160
*/
void sub_4fa180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa180ULL || rel >= 0x4fa210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa210 size=48 callers=0 calls=1
   calls: SiGfx_NX_QueryPool
*/
void sub_4fa210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa210ULL || rel >= 0x4fa240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa240 size=32 callers=0 calls=1
   calls: sub_534780
*/
void sub_4fa240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa240ULL || rel >= 0x4fa260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa260 size=32 callers=0 calls=1
   calls: sub_534900
*/
void sub_4fa260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa260ULL || rel >= 0x4fa280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa280 size=64 callers=0 calls=1
   calls: SiGfx_NX_ShaderPool
*/
void sub_4fa280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa280ULL || rel >= 0x4fa2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa2c0 size=32 callers=0 calls=1
   calls: sub_534780
*/
void sub_4fa2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa2c0ULL || rel >= 0x4fa2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa2e0 size=32 callers=0 calls=1
   calls: sub_534900
*/
void sub_4fa2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa2e0ULL || rel >= 0x4fa300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa300 size=48 callers=0 calls=1
   calls: SiGfx_NX_ShaderProgramPool
*/
void sub_4fa300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa300ULL || rel >= 0x4fa330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa330 size=32 callers=0 calls=1
   calls: sub_534780
*/
void sub_4fa330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa330ULL || rel >= 0x4fa350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa350 size=32 callers=0 calls=1
   calls: sub_534900
*/
void sub_4fa350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa350ULL || rel >= 0x4fa370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa370 size=32 callers=0 calls=0
*/
void sub_4fa370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa370ULL || rel >= 0x4fa390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa390 size=48 callers=0 calls=1
   calls: SiGfx_NX_SurfacePool
*/
void sub_4fa390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa390ULL || rel >= 0x4fa3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa3c0 size=32 callers=0 calls=1
   calls: sub_534780
*/
void sub_4fa3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa3c0ULL || rel >= 0x4fa3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa3e0 size=32 callers=0 calls=1
   calls: sub_534900
*/
void sub_4fa3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa3e0ULL || rel >= 0x4fa400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa400 size=48 callers=0 calls=1
   calls: SiGfx_NX_RenderTargetPool
*/
void sub_4fa400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa400ULL || rel >= 0x4fa430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa430 size=32 callers=0 calls=1
   calls: sub_534780
*/
void sub_4fa430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa430ULL || rel >= 0x4fa450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa450 size=32 callers=0 calls=1
   calls: sub_534900
*/
void sub_4fa450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa450ULL || rel >= 0x4fa470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa470 size=144 callers=0 calls=1
   calls: sub_4cbf40
*/
void sub_4fa470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa470ULL || rel >= 0x4fa500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa500 size=32 callers=0 calls=0
*/
void sub_4fa500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa500ULL || rel >= 0x4fa520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa520 size=16 callers=0 calls=0
*/
void sub_4fa520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa520ULL || rel >= 0x4fa530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa530 size=96 callers=0 calls=0
*/
void sub_4fa530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa530ULL || rel >= 0x4fa590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fa590 size=1152 callers=1 calls=1
   calls: sub_4ecf40
*/
void sub_4fa590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fa590ULL || rel >= 0x4faa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004faa10 size=96 callers=0 calls=0
*/
void sub_4faa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4faa10ULL || rel >= 0x4faa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004faa70 size=16 callers=0 calls=0
*/
void sub_4faa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4faa70ULL || rel >= 0x4faa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004faa80 size=16 callers=0 calls=0
*/
void sub_4faa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4faa80ULL || rel >= 0x4faa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004faa90 size=16 callers=0 calls=0
*/
void sub_4faa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4faa90ULL || rel >= 0x4faaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004faaa0 size=16 callers=0 calls=0
*/
void sub_4faaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4faaa0ULL || rel >= 0x4faab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004faab0 size=16 callers=0 calls=0
*/
void sub_4faab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4faab0ULL || rel >= 0x4faac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004faac0 size=496 callers=1 calls=5
   calls: SiCore_Array_172, SiGfx_NX_MemoryHeap_Impl_4, sub_5528f0, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4faac0ULL || rel >= 0x4facb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004facb0 size=496 callers=1 calls=5
   calls: SiCore_Array_172, SiGfx_NX_MemoryHeap_Impl_4, sub_5528f0, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4facb0ULL || rel >= 0x4faea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004faea0 size=496 callers=1 calls=5
   calls: SiCore_Array_172, SiGfx_NX_MemoryHeap_Impl_4, sub_5528f0, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp
*/
void SiGfx_NX_Device_Impl_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4faea0ULL || rel >= 0x4fb090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb090 size=320 callers=1 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl_5
*/
void sub_4fb090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb090ULL || rel >= 0x4fb1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb1d0 size=48 callers=1 calls=0
*/
void sub_4fb1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb1d0ULL || rel >= 0x4fb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb200 size=48 callers=2 calls=0
*/
void sub_4fb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb200ULL || rel >= 0x4fb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb230 size=48 callers=1 calls=0
*/
void sub_4fb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb230ULL || rel >= 0x4fb260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb260 size=48 callers=1 calls=0
*/
void sub_4fb260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb260ULL || rel >= 0x4fb290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb290 size=48 callers=4 calls=0
*/
void sub_4fb290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb290ULL || rel >= 0x4fb2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb2c0 size=48 callers=1 calls=0
*/
void sub_4fb2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb2c0ULL || rel >= 0x4fb2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb2f0 size=48 callers=1 calls=0
*/
void sub_4fb2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb2f0ULL || rel >= 0x4fb320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb320 size=64 callers=1 calls=1
   calls: sub_552090
*/
void sub_4fb320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb320ULL || rel >= 0x4fb360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb360 size=32 callers=1 calls=0
*/
void sub_4fb360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb360ULL || rel >= 0x4fb380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb380 size=32 callers=1 calls=0
*/
void sub_4fb380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb380ULL || rel >= 0x4fb3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb3a0 size=32 callers=0 calls=0
*/
void sub_4fb3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb3a0ULL || rel >= 0x4fb3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb3c0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_Device_Impl.h
*/
void SiGfx_NX_Device_Impl_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb3c0ULL || rel >= 0x4fb440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb440 size=16 callers=0 calls=0
*/
void sub_4fb440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb440ULL || rel >= 0x4fb450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb450 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_171(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb450ULL || rel >= 0x4fb4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb4b0 size=416 callers=17 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_172(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb4b0ULL || rel >= 0x4fb650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb650 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4fb650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb650ULL || rel >= 0x4fb6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb6d0 size=384 callers=3 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_4fb6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb6d0ULL || rel >= 0x4fb850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb850 size=336 callers=2 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_72(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb850ULL || rel >= 0x4fb9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fb9a0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_173(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fb9a0ULL || rel >= 0x4fba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fba20 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_174(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fba20ULL || rel >= 0x4fbaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fbaa0 size=16 callers=0 calls=0
*/
void sub_4fbaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fbaa0ULL || rel >= 0x4fbab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fbab0 size=48 callers=0 calls=1
   calls: SiCore_String_72
*/
void sub_4fbab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fbab0ULL || rel >= 0x4fbae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fbae0 size=48 callers=0 calls=1
   calls: SiCore_String_72
*/
void sub_4fbae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fbae0ULL || rel >= 0x4fbb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fbb10 size=16 callers=1 calls=0
*/
void sub_4fbb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fbb10ULL || rel >= 0x4fbb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fbb20 size=2480 callers=1 calls=8
   calls: SiCore_Array_177, SiCore_Array_178, SiGfx_NX_Canvas_Impl_2, SiGfx_NX_Canvas_Impl_3, SiGfx_NX_MemoryHeap_Impl_5, sub_5550c0, sub_555160, sub_562ee0
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp
*/
void SiGfx_NX_Canvas_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fbb20ULL || rel >= 0x4fc4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fc4d0 size=704 callers=3 calls=4
   calls: SiGfx_NX_Surface_Impl_2, sub_4ed190, sub_55c5b0, sub_55cd30
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp
*/
void SiGfx_NX_Canvas_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fc4d0ULL || rel >= 0x4fc790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fc790 size=272 callers=3 calls=2
   calls: sub_5556d0, sub_555b40
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp
*/
void SiGfx_NX_Canvas_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fc790ULL || rel >= 0x4fc8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fc8a0 size=512 callers=1 calls=4
   calls: SiGfx_NX_Canvas_Impl_2, SiGfx_NX_Canvas_Impl_3, sub_5550c0, sub_555160
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp
*/
void SiGfx_NX_Canvas_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fc8a0ULL || rel >= 0x4fcaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcaa0 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_4fcaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcaa0ULL || rel >= 0x4fcae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcae0 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_4fcae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcae0ULL || rel >= 0x4fcb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcb20 size=16 callers=0 calls=0
*/
void sub_4fcb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcb20ULL || rel >= 0x4fcb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcb30 size=16 callers=0 calls=0
*/
void sub_4fcb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcb30ULL || rel >= 0x4fcb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcb40 size=16 callers=0 calls=0
*/
void sub_4fcb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcb40ULL || rel >= 0x4fcb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcb50 size=16 callers=0 calls=0
*/
void sub_4fcb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcb50ULL || rel >= 0x4fcb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcb60 size=16 callers=0 calls=0
*/
void sub_4fcb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcb60ULL || rel >= 0x4fcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcb70 size=16 callers=0 calls=0
*/
void sub_4fcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcb70ULL || rel >= 0x4fcb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcb80 size=16 callers=0 calls=0
*/
void sub_4fcb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcb80ULL || rel >= 0x4fcb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcb90 size=16 callers=0 calls=0
*/
void sub_4fcb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcb90ULL || rel >= 0x4fcba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcba0 size=16 callers=0 calls=0
*/
void sub_4fcba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcba0ULL || rel >= 0x4fcbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcbb0 size=16 callers=0 calls=0
*/
void sub_4fcbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcbb0ULL || rel >= 0x4fcbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcbc0 size=16 callers=0 calls=0
*/
void sub_4fcbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcbc0ULL || rel >= 0x4fcbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcbd0 size=16 callers=0 calls=0
*/
void sub_4fcbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcbd0ULL || rel >= 0x4fcbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcbe0 size=16 callers=0 calls=0
*/
void sub_4fcbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcbe0ULL || rel >= 0x4fcbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcbf0 size=16 callers=0 calls=0
*/
void sub_4fcbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcbf0ULL || rel >= 0x4fcc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcc00 size=16 callers=0 calls=0
*/
void sub_4fcc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcc00ULL || rel >= 0x4fcc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcc10 size=16 callers=0 calls=0
*/
void sub_4fcc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcc10ULL || rel >= 0x4fcc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcc20 size=800 callers=0 calls=1
   calls: SiGfx_NX_MemoryHeap_Impl_6
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp
*/
void SiGfx_NX_Canvas_Impl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcc20ULL || rel >= 0x4fcf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcf40 size=16 callers=0 calls=0
*/
void sub_4fcf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcf40ULL || rel >= 0x4fcf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcf50 size=16 callers=0 calls=0
*/
void sub_4fcf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcf50ULL || rel >= 0x4fcf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fcf60 size=192 callers=0 calls=2
   calls: RemoveByIndexNonStable, sub_4cbec0
*/
void sub_4fcf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fcf60ULL || rel >= 0x4fd020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fd020 size=16 callers=0 calls=0
*/
void sub_4fd020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fd020ULL || rel >= 0x4fd030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fd030 size=64 callers=0 calls=0
*/
void sub_4fd030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fd030ULL || rel >= 0x4fd070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fd070 size=16 callers=0 calls=0
*/
void sub_4fd070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fd070ULL || rel >= 0x4fd080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fd080 size=3088 callers=0 calls=9
   calls: SiCore_Array_177, SiCore_Array_178, SiGfx_NX_Canvas_Impl_2, SiGfx_NX_Canvas_Impl_3, SiGfx_NX_MemoryHeap_Impl_5, SiGfx_NX_MemoryHeap_Impl_6, sub_5550c0, sub_555160, sub_562ee0
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp
*/
void SiGfx_NX_Canvas_Impl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fd080ULL || rel >= 0x4fdc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdc90 size=16 callers=0 calls=0
*/
void sub_4fdc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdc90ULL || rel >= 0x4fdca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdca0 size=16 callers=0 calls=0
*/
void sub_4fdca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdca0ULL || rel >= 0x4fdcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdcb0 size=16 callers=0 calls=0
*/
void sub_4fdcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdcb0ULL || rel >= 0x4fdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdcc0 size=16 callers=0 calls=0
*/
void sub_4fdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdcc0ULL || rel >= 0x4fdcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdcd0 size=16 callers=0 calls=0
*/
void sub_4fdcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdcd0ULL || rel >= 0x4fdce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdce0 size=64 callers=0 calls=0
*/
void sub_4fdce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdce0ULL || rel >= 0x4fdd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdd20 size=64 callers=0 calls=0
*/
void sub_4fdd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdd20ULL || rel >= 0x4fdd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdd60 size=64 callers=0 calls=0
*/
void sub_4fdd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdd60ULL || rel >= 0x4fdda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdda0 size=64 callers=0 calls=0
*/
void sub_4fdda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdda0ULL || rel >= 0x4fdde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdde0 size=64 callers=0 calls=0
*/
void sub_4fdde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdde0ULL || rel >= 0x4fde20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fde20 size=64 callers=0 calls=0
*/
void sub_4fde20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fde20ULL || rel >= 0x4fde60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fde60 size=64 callers=0 calls=0
*/
void sub_4fde60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fde60ULL || rel >= 0x4fdea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdea0 size=64 callers=0 calls=0
*/
void sub_4fdea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdea0ULL || rel >= 0x4fdee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdee0 size=64 callers=0 calls=0
*/
void sub_4fdee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdee0ULL || rel >= 0x4fdf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdf20 size=64 callers=0 calls=0
*/
void sub_4fdf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdf20ULL || rel >= 0x4fdf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdf60 size=64 callers=0 calls=0
*/
void sub_4fdf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdf60ULL || rel >= 0x4fdfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdfa0 size=64 callers=0 calls=0
*/
void sub_4fdfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdfa0ULL || rel >= 0x4fdfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fdfe0 size=48 callers=0 calls=0
*/
void sub_4fdfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fdfe0ULL || rel >= 0x4fe010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe010 size=32 callers=0 calls=0
*/
void sub_4fe010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe010ULL || rel >= 0x4fe030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe030 size=16 callers=0 calls=0
*/
void sub_4fe030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe030ULL || rel >= 0x4fe040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe040 size=16 callers=0 calls=0
*/
void sub_4fe040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe040ULL || rel >= 0x4fe050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe050 size=16 callers=0 calls=0
*/
void sub_4fe050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe050ULL || rel >= 0x4fe060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe060 size=16 callers=0 calls=0
*/
void sub_4fe060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe060ULL || rel >= 0x4fe070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe070 size=32 callers=0 calls=0
*/
void sub_4fe070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe070ULL || rel >= 0x4fe090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe090 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_Canvas_Impl.h
*/
void SiGfx_NX_Canvas_Impl_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe090ULL || rel >= 0x4fe110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe110 size=16 callers=0 calls=0
*/
void sub_4fe110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe110ULL || rel >= 0x4fe120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe120 size=16 callers=0 calls=0
*/
void sub_4fe120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe120ULL || rel >= 0x4fe130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe130 size=48 callers=0 calls=0
*/
void sub_4fe130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe130ULL || rel >= 0x4fe160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe160 size=48 callers=0 calls=0
*/
void sub_4fe160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe160ULL || rel >= 0x4fe190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe190 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_175(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe190ULL || rel >= 0x4fe1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe1f0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_176(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe1f0ULL || rel >= 0x4fe250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe250 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_177(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe250ULL || rel >= 0x4fe3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe3f0 size=416 callers=4 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_178(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe3f0ULL || rel >= 0x4fe590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe590 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4fe590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe590ULL || rel >= 0x4fe610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe610 size=64 callers=1 calls=1
   calls: sub_534000
*/
void sub_4fe610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe610ULL || rel >= 0x4fe650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe650 size=64 callers=0 calls=1
   calls: sub_534430
*/
void sub_4fe650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe650ULL || rel >= 0x4fe690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe690 size=64 callers=0 calls=2
   calls: sub_5341b0, sub_534430
*/
void sub_4fe690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe690ULL || rel >= 0x4fe6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe6d0 size=64 callers=0 calls=2
   calls: SiCore_Array_179, sub_534420
*/
void sub_4fe6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe6d0ULL || rel >= 0x4fe710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe710 size=560 callers=12 calls=1
   calls: SiCore_Array_180
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_179(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe710ULL || rel >= 0x4fe940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe940 size=16 callers=0 calls=0
*/
void sub_4fe940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe940ULL || rel >= 0x4fe950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe950 size=64 callers=0 calls=1
   calls: abcdefghijklmnopqrstuvwxyz
*/
void sub_4fe950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe950ULL || rel >= 0x4fe990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fe990 size=896 callers=1 calls=8
   calls: SiCore_String_11, SiGfx_NX_FontPool, sub_4bc640, sub_4bc690, sub_4c45c0, sub_4c8020, sub_4cbf40, sub_582d80
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: 0123456789
   ref: abcdefghijklmnopqrstuvwxyz
   ref: ABCDEFGHIJKLMNOPQRSTUVWXYZ
   ref: !"#$%&'()=-~^\|{}[]`@*:+?/<>,. 
*/
void abcdefghijklmnopqrstuvwxyz(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fe990ULL || rel >= 0x4fed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fed10 size=512 callers=2 calls=7
   calls: sub_4c5a90, sub_4fef10, sub_4ff090, sub_4ff510, sub_4ff6d0, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_FontPool.cpp
   ref: Font_%d
*/
void SiGfx_NX_FontPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fed10ULL || rel >= 0x4fef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004fef10 size=384 callers=28 calls=0
*/
void sub_4fef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4fef10ULL || rel >= 0x4ff090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff090 size=208 callers=22 calls=0
*/
void sub_4ff090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff090ULL || rel >= 0x4ff160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff160 size=32 callers=0 calls=0
*/
void sub_4ff160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff160ULL || rel >= 0x4ff180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff180 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_ResourcePool.h
*/
void SiGfx_ResourcePool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff180ULL || rel >= 0x4ff200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff200 size=16 callers=0 calls=0
*/
void sub_4ff200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff200ULL || rel >= 0x4ff210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff210 size=640 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff210ULL || rel >= 0x4ff490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff490 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4ff490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff490ULL || rel >= 0x4ff510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff510 size=160 callers=1 calls=5
   calls: SiCore_String_75, sub_4bc640, sub_4bc690, sub_4bf660, sub_596410
*/
void sub_4ff510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff510ULL || rel >= 0x4ff5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff5b0 size=176 callers=2 calls=3
   calls: SiCore_String_76, sub_4f9640, sub_596460
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_73(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff5b0ULL || rel >= 0x4ff660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff660 size=16 callers=0 calls=0
*/
void sub_4ff660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff660ULL || rel >= 0x4ff670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff670 size=48 callers=0 calls=1
   calls: SiCore_String_73
*/
void sub_4ff670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff670ULL || rel >= 0x4ff6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff6a0 size=48 callers=0 calls=1
   calls: SiCore_String_73
*/
void sub_4ff6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff6a0ULL || rel >= 0x4ff6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff6d0 size=48 callers=1 calls=1
   calls: sub_500530
*/
void sub_4ff6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff6d0ULL || rel >= 0x4ff700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff700 size=272 callers=1 calls=6
   calls: sub_4bc640, sub_4bc690, sub_4c3510, sub_4c4700, sub_4c9090, sub_5316f0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: %s_FontCache
*/
void SiCore_String_74(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff700ULL || rel >= 0x4ff810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff810 size=32 callers=0 calls=1
   calls: SiCore_String_74
*/
void sub_4ff810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff810ULL || rel >= 0x4ff830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff830 size=16 callers=0 calls=0
*/
void sub_4ff830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff830ULL || rel >= 0x4ff840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff840 size=16 callers=0 calls=0
*/
void sub_4ff840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff840ULL || rel >= 0x4ff850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff850 size=16 callers=0 calls=0
*/
void sub_4ff850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff850ULL || rel >= 0x4ff860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff860 size=16 callers=0 calls=0
*/
void sub_4ff860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff860ULL || rel >= 0x4ff870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff870 size=16 callers=0 calls=0
*/
void sub_4ff870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff870ULL || rel >= 0x4ff880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff880 size=16 callers=0 calls=0
*/
void sub_4ff880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff880ULL || rel >= 0x4ff890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff890 size=16 callers=0 calls=0
*/
void sub_4ff890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff890ULL || rel >= 0x4ff8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff8a0 size=16 callers=0 calls=0
*/
void sub_4ff8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff8a0ULL || rel >= 0x4ff8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff8b0 size=16 callers=0 calls=0
*/
void sub_4ff8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff8b0ULL || rel >= 0x4ff8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff8c0 size=16 callers=0 calls=0
*/
void sub_4ff8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff8c0ULL || rel >= 0x4ff8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff8d0 size=16 callers=0 calls=0
*/
void sub_4ff8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff8d0ULL || rel >= 0x4ff8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff8e0 size=16 callers=0 calls=0
*/
void sub_4ff8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff8e0ULL || rel >= 0x4ff8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff8f0 size=16 callers=0 calls=0
*/
void sub_4ff8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff8f0ULL || rel >= 0x4ff900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff900 size=16 callers=0 calls=0
*/
void sub_4ff900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff900ULL || rel >= 0x4ff910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff910 size=16 callers=0 calls=0
*/
void sub_4ff910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff910ULL || rel >= 0x4ff920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ff920 size=400 callers=0 calls=7
   calls: sub_4bc640, sub_4bc690, sub_4c9090, sub_500550, sub_5005c0, sub_5316f0, sub_5339d0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Font_Impl.cpp
   ref: %s_FontCache
*/
void SiGfx_NX_Font_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ff920ULL || rel >= 0x4ffab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffab0 size=64 callers=0 calls=0
*/
void sub_4ffab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffab0ULL || rel >= 0x4ffaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffaf0 size=16 callers=0 calls=0
*/
void sub_4ffaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffaf0ULL || rel >= 0x4ffb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffb00 size=128 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_4ffb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffb00ULL || rel >= 0x4ffb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffb80 size=48 callers=0 calls=1
   calls: sub_500890
*/
void sub_4ffb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffb80ULL || rel >= 0x4ffbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffbb0 size=32 callers=0 calls=0
*/
void sub_4ffbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffbb0ULL || rel >= 0x4ffbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffbd0 size=16 callers=1 calls=0
*/
void sub_4ffbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffbd0ULL || rel >= 0x4ffbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffbe0 size=16 callers=4 calls=0
*/
void sub_4ffbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffbe0ULL || rel >= 0x4ffbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffbf0 size=16 callers=0 calls=0
*/
void sub_4ffbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffbf0ULL || rel >= 0x4ffc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffc00 size=16 callers=0 calls=0
*/
void sub_4ffc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffc00ULL || rel >= 0x4ffc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffc10 size=48 callers=0 calls=1
   calls: sub_531710
*/
void sub_4ffc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffc10ULL || rel >= 0x4ffc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffc40 size=32 callers=0 calls=0
*/
void sub_4ffc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffc40ULL || rel >= 0x4ffc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffc60 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_Font_Impl.h
*/
void SiGfx_NX_Font_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffc60ULL || rel >= 0x4ffce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffce0 size=16 callers=0 calls=0
*/
void sub_4ffce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffce0ULL || rel >= 0x4ffcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffcf0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4ffcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffcf0ULL || rel >= 0x4ffd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffd70 size=352 callers=1 calls=5
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_4c4700, sub_4ffed0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_75(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffd70ULL || rel >= 0x4ffed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ffed0 size=320 callers=1 calls=1
   calls: sub_4bc640
*/
void sub_4ffed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ffed0ULL || rel >= 0x500010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500010 size=208 callers=2 calls=3
   calls: SiCore_Array_181, SiCore_Pool_3, sub_501ba0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_76(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500010ULL || rel >= 0x5000e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005000e0 size=544 callers=2 calls=1
   calls: sub_50ae50
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: ../../../../Include\SiCore/SiCore_Pool.h
*/
void SiCore_Pool_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5000e0ULL || rel >= 0x500300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500300 size=448 callers=2 calls=2
   calls: SiCore_Pool_3, sub_50ae50
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_181(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500300ULL || rel >= 0x5004c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005004c0 size=64 callers=0 calls=1
   calls: sub_501ba0
*/
void sub_5004c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5004c0ULL || rel >= 0x500500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500500 size=48 callers=0 calls=1
   calls: SiCore_String_76
*/
void sub_500500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500500ULL || rel >= 0x500530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500530 size=16 callers=1 calls=0
*/
void sub_500530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500530ULL || rel >= 0x500540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500540 size=16 callers=1 calls=0
*/
void sub_500540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500540ULL || rel >= 0x500550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500550 size=112 callers=1 calls=0
*/
void sub_500550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500550ULL || rel >= 0x5005c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005005c0 size=256 callers=1 calls=5
   calls: SiCore_Array_182, SiGfx_FreeType_Manager_2, SiGfx_FreeType_Manager_4, sub_4c8020, sub_5006c0
*/
void sub_5005c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5005c0ULL || rel >= 0x5006c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005006c0 size=336 callers=1 calls=2
   calls: sub_4ed6d0, sub_505020
*/
void sub_5006c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5006c0ULL || rel >= 0x500810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500810 size=128 callers=0 calls=2
   calls: SiGfx_FreeType_Manager_3, sub_4c4700
*/
void sub_500810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500810ULL || rel >= 0x500890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500890 size=416 callers=1 calls=5
   calls: sub_500a30, sub_501c60, sub_503870, sub_503a10, sub_531420
*/
void sub_500890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500890ULL || rel >= 0x500a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500a30 size=880 callers=1 calls=0
*/
void sub_500a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500a30ULL || rel >= 0x500da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500da0 size=64 callers=0 calls=1
   calls: sub_501ba0
*/
void sub_500da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500da0ULL || rel >= 0x500de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500de0 size=224 callers=0 calls=0
*/
void sub_500de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500de0ULL || rel >= 0x500ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00500ec0 size=560 callers=1 calls=1
   calls: SiCore_Array_188
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_182(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x500ec0ULL || rel >= 0x5010f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005010f0 size=32 callers=0 calls=0
*/
void sub_5010f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5010f0ULL || rel >= 0x501110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00501110 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_FreeType_Face.h
*/
void SiGfx_FreeType_Face(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x501110ULL || rel >= 0x501190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00501190 size=16 callers=0 calls=0
*/
void sub_501190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x501190ULL || rel >= 0x5011a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005011a0 size=64 callers=0 calls=1
   calls: sub_501ba0
*/
void sub_5011a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5011a0ULL || rel >= 0x5011e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005011e0 size=48 callers=0 calls=1
   calls: SiCore_Array_181
*/
void sub_5011e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5011e0ULL || rel >= 0x501210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00501210 size=624 callers=0 calls=3
   calls: SiCore_Array_187, SiCore_Array_188, sub_4bc640
   ref: ../../../../Include\SiCore/SiCore_Pool.h
*/
void SiCore_Pool_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x501210ULL || rel >= 0x501480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00501480 size=96 callers=0 calls=0
*/
void sub_501480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x501480ULL || rel >= 0x5014e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005014e0 size=96 callers=0 calls=0
*/
void sub_5014e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5014e0ULL || rel >= 0x501540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00501540 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_183(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x501540ULL || rel >= 0x5015c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005015c0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_184(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5015c0ULL || rel >= 0x501620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00501620 size=192 callers=0 calls=1
   calls: sub_50ae50
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_185(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x501620ULL || rel >= 0x5016e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005016e0 size=176 callers=0 calls=1
   calls: sub_50ae50
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_186(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5016e0ULL || rel >= 0x501790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00501790 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_187(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x501790ULL || rel >= 0x501930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00501930 size=624 callers=2 calls=2
   calls: sub_50ae10, sub_50ae50
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_188(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x501930ULL || rel >= 0x501ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00501ba0 size=64 callers=7 calls=1
   calls: sub_501ba0
*/
void sub_501ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x501ba0ULL || rel >= 0x501be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00501be0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_501be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x501be0ULL || rel >= 0x501c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00501c60 size=1616 callers=1 calls=0
*/
void sub_501c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x501c60ULL || rel >= 0x5022b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005022b0 size=16 callers=9 calls=0
*/
void sub_5022b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5022b0ULL || rel >= 0x5022c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005022c0 size=48 callers=6 calls=1
   calls: sub_5022f0
*/
void sub_5022c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5022c0ULL || rel >= 0x5022f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005022f0 size=288 callers=1 calls=0
*/
void sub_5022f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5022f0ULL || rel >= 0x502410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00502410 size=96 callers=30 calls=0
*/
void sub_502410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x502410ULL || rel >= 0x502470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00502470 size=96 callers=1 calls=0
*/
void sub_502470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x502470ULL || rel >= 0x5024d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005024d0 size=32 callers=89 calls=0
*/
void sub_5024d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5024d0ULL || rel >= 0x5024f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005024f0 size=80 callers=18 calls=0
*/
void sub_5024f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5024f0ULL || rel >= 0x502540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00502540 size=368 callers=6 calls=0
*/
void sub_502540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x502540ULL || rel >= 0x5026b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005026b0 size=32 callers=2 calls=0
*/
void sub_5026b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5026b0ULL || rel >= 0x5026d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005026d0 size=128 callers=1 calls=0
*/
void sub_5026d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5026d0ULL || rel >= 0x502750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00502750 size=128 callers=24 calls=0
*/
void sub_502750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x502750ULL || rel >= 0x5027d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005027d0 size=64 callers=1 calls=0
*/
void sub_5027d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5027d0ULL || rel >= 0x502810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00502810 size=16 callers=142 calls=0
*/
void sub_502810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x502810ULL || rel >= 0x502820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00502820 size=240 callers=0 calls=0
*/
void sub_502820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x502820ULL || rel >= 0x502910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00502910 size=288 callers=96 calls=0
*/
void sub_502910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x502910ULL || rel >= 0x502a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00502a30 size=1296 callers=3 calls=0
*/
void sub_502a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x502a30ULL || rel >= 0x502f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00502f40 size=384 callers=1 calls=0
*/
void sub_502f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x502f40ULL || rel >= 0x5030c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005030c0 size=272 callers=3 calls=0
*/
void sub_5030c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5030c0ULL || rel >= 0x5031d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005031d0 size=96 callers=1 calls=0
*/
void sub_5031d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5031d0ULL || rel >= 0x503230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503230 size=32 callers=1 calls=0
*/
void sub_503230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503230ULL || rel >= 0x503250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503250 size=32 callers=62 calls=0
*/
void sub_503250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503250ULL || rel >= 0x503270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503270 size=32 callers=2 calls=0
*/
void sub_503270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503270ULL || rel >= 0x503290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503290 size=96 callers=1 calls=0
*/
void sub_503290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503290ULL || rel >= 0x5032f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005032f0 size=32 callers=1 calls=0
*/
void sub_5032f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5032f0ULL || rel >= 0x503310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503310 size=128 callers=1 calls=0
*/
void sub_503310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503310ULL || rel >= 0x503390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503390 size=192 callers=1 calls=0
*/
void sub_503390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503390ULL || rel >= 0x503450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503450 size=448 callers=1 calls=1
   calls: sub_503610
*/
void sub_503450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503450ULL || rel >= 0x503610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503610 size=400 callers=4 calls=0
*/
void sub_503610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503610ULL || rel >= 0x5037a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005037a0 size=128 callers=2 calls=0
*/
void sub_5037a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5037a0ULL || rel >= 0x503820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503820 size=80 callers=13 calls=0
*/
void sub_503820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503820ULL || rel >= 0x503870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503870 size=416 callers=1 calls=0
*/
void sub_503870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503870ULL || rel >= 0x503a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503a10 size=64 callers=1 calls=0
*/
void sub_503a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503a10ULL || rel >= 0x503a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00503a50 size=2048 callers=2 calls=9
   calls: sub_503450, sub_504400, sub_504640, sub_5089e0, sub_508d40, sub_5094d0, sub_509f00, sub_50ac10, truetype_2
   ref: truetype
*/
void truetype(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x503a50ULL || rel >= 0x504250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00504250 size=112 callers=2 calls=1
   calls: truetype
*/
void sub_504250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x504250ULL || rel >= 0x5042c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005042c0 size=272 callers=6 calls=1
   calls: sub_504400
*/
void sub_5042c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5042c0ULL || rel >= 0x5043d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005043d0 size=48 callers=1 calls=0
*/
void sub_5043d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5043d0ULL || rel >= 0x504400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

