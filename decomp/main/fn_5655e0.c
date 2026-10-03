/* main functions 005655e0..00582b40 (34 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 005655e0 size=64 callers=0 calls=2
   calls: sub_5341b0, sub_534430
*/
void sub_5655e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5655e0ULL || rel >= 0x565620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565620 size=64 callers=0 calls=2
   calls: SiCore_Array_179, sub_534420
*/
void sub_565620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565620ULL || rel >= 0x565660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565660 size=16 callers=0 calls=0
*/
void sub_565660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565660ULL || rel >= 0x565670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565670 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_565670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565670ULL || rel >= 0x5656f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005656f0 size=144 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_538d70
*/
void sub_5656f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5656f0ULL || rel >= 0x565780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565780 size=144 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_113(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565780ULL || rel >= 0x565810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565810 size=144 callers=0 calls=1
   calls: sub_4f9640
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_114(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565810ULL || rel >= 0x5658a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005658a0 size=144 callers=0 calls=2
   calls: sub_4f9640, sub_538dc0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_115(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5658a0ULL || rel >= 0x565930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565930 size=144 callers=0 calls=2
   calls: sub_4f9640, sub_538dc0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_116(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565930ULL || rel >= 0x5659c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005659c0 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_5659c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5659c0ULL || rel >= 0x565a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565a00 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_565a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565a00ULL || rel >= 0x565a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565a40 size=16 callers=0 calls=0
*/
void sub_565a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565a40ULL || rel >= 0x565a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565a50 size=16 callers=0 calls=0
*/
void sub_565a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565a50ULL || rel >= 0x565a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565a60 size=16 callers=0 calls=0
*/
void sub_565a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565a60ULL || rel >= 0x565a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565a70 size=16 callers=0 calls=0
*/
void sub_565a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565a70ULL || rel >= 0x565a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565a80 size=16 callers=0 calls=0
*/
void sub_565a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565a80ULL || rel >= 0x565a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565a90 size=16 callers=0 calls=0
*/
void sub_565a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565a90ULL || rel >= 0x565aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565aa0 size=16 callers=0 calls=0
*/
void sub_565aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565aa0ULL || rel >= 0x565ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565ab0 size=192 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_117(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565ab0ULL || rel >= 0x565b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565b70 size=16 callers=0 calls=0
*/
void sub_565b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565b70ULL || rel >= 0x565b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565b80 size=16 callers=0 calls=0
*/
void sub_565b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565b80ULL || rel >= 0x565b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565b90 size=16 callers=0 calls=0
*/
void sub_565b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565b90ULL || rel >= 0x565ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565ba0 size=16 callers=0 calls=0
*/
void sub_565ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565ba0ULL || rel >= 0x565bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565bb0 size=16 callers=0 calls=0
*/
void sub_565bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565bb0ULL || rel >= 0x565bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565bc0 size=16 callers=0 calls=0
*/
void sub_565bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565bc0ULL || rel >= 0x565bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565bd0 size=16 callers=0 calls=0
*/
void sub_565bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565bd0ULL || rel >= 0x565be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565be0 size=16 callers=0 calls=0
*/
void sub_565be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565be0ULL || rel >= 0x565bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565bf0 size=16 callers=0 calls=0
*/
void sub_565bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565bf0ULL || rel >= 0x565c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565c00 size=16 callers=0 calls=0
*/
void sub_565c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565c00ULL || rel >= 0x565c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565c10 size=112 callers=2 calls=1
   calls: sub_565c80
*/
void sub_565c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565c10ULL || rel >= 0x565c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565c80 size=544 callers=1 calls=2
   calls: sub_4ed0c0, sub_4ed0f0
*/
void sub_565c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565c80ULL || rel >= 0x565ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565ea0 size=16 callers=0 calls=0
*/
void sub_565ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565ea0ULL || rel >= 0x565eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565eb0 size=16 callers=0 calls=0
*/
void sub_565eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565eb0ULL || rel >= 0x565ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565ec0 size=32 callers=0 calls=0
*/
void sub_565ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565ec0ULL || rel >= 0x565ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565ee0 size=256 callers=0 calls=2
   calls: sub_4cbec0, sub_4ce9d0
   ref: ../../../../Libsrc/SiGfx/Source\NX/SiGfx_NX_Volume_Impl.h
*/
void SiGfx_NX_Volume_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565ee0ULL || rel >= 0x565fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565fe0 size=16 callers=0 calls=0
*/
void sub_565fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565fe0ULL || rel >= 0x565ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00565ff0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_565ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x565ff0ULL || rel >= 0x566070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00566070 size=224 callers=1 calls=2
   calls: sub_4bc640, sub_4bc690
*/
void sub_566070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x566070ULL || rel >= 0x566150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00566150 size=256 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x566150ULL || rel >= 0x566250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00566250 size=896 callers=1 calls=2
   calls: sub_4bc640, sub_4bc690
*/
void sub_566250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x566250ULL || rel >= 0x5665d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005665d0 size=1072 callers=1 calls=1
   calls: SiCore_Array_274
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_119(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5665d0ULL || rel >= 0x566a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00566a00 size=304 callers=1 calls=1
   calls: SiCore_String_118
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_274(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x566a00ULL || rel >= 0x566b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00566b30 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_275(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x566b30ULL || rel >= 0x566bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00566bb0 size=272 callers=1 calls=4
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_596410
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x566bb0ULL || rel >= 0x566cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00566cc0 size=592 callers=1 calls=5
   calls: SiCore_Array_276, SiCore_Map_13, sub_56e820, sub_596640, sub_596680
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x566cc0ULL || rel >= 0x566f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00566f10 size=1680 callers=4 calls=1
   calls: SiCore_Map_16
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x566f10ULL || rel >= 0x5675a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005675a0 size=304 callers=1 calls=1
   calls: SiCore_String_119
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_276(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5675a0ULL || rel >= 0x5676d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005676d0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_277(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5676d0ULL || rel >= 0x567750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00567750 size=128 callers=1 calls=3
   calls: sub_4c8020, sub_5677d0, sub_570d00
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x567750ULL || rel >= 0x5677d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005677d0 size=944 callers=1 calls=6
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_567b80, sub_570d10, sub_596410
*/
void sub_5677d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5677d0ULL || rel >= 0x567b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00567b80 size=304 callers=1 calls=2
   calls: sub_4bc640, sub_4bc690
*/
void sub_567b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x567b80ULL || rel >= 0x567cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00567cb0 size=1584 callers=1 calls=5
   calls: SiCore_String_122, SiCore_String_124, SiGfx_ShaderEffectPackage_Impl_4, sub_4bf6a0, sub_596460
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x567cb0ULL || rel >= 0x5682e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005682e0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_278(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5682e0ULL || rel >= 0x568360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00568360 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_279(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x568360ULL || rel >= 0x5683e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005683e0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5683e0ULL || rel >= 0x568460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00568460 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_281(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x568460ULL || rel >= 0x5684e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005684e0 size=48 callers=0 calls=1
   calls: SiCore_String_120
*/
void sub_5684e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5684e0ULL || rel >= 0x568510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00568510 size=64 callers=0 calls=1
   calls: sub_4c4700
*/
void sub_568510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x568510ULL || rel >= 0x568550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00568550 size=16 callers=0 calls=0
*/
void sub_568550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x568550ULL || rel >= 0x568560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00568560 size=16 callers=0 calls=0
*/
void sub_568560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x568560ULL || rel >= 0x568570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00568570 size=384 callers=0 calls=7
   calls: SiCore_String_134, SiGfx_ShaderEffectPackage_Impl_4, sub_4bc640, sub_4bc690, sub_4c8020, sub_578bc0, sub_582d80
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_121(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x568570ULL || rel >= 0x5686f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005686f0 size=1824 callers=2 calls=1
   calls: SiCore_Array_283
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5686f0ULL || rel >= 0x568e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00568e10 size=80 callers=0 calls=0
*/
void sub_568e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x568e10ULL || rel >= 0x568e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00568e60 size=1088 callers=0 calls=4
   calls: SiCore_Array_298, SiCore_Array_299, SiCore_Array_300, sub_5692a0
*/
void sub_568e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x568e60ULL || rel >= 0x5692a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005692a0 size=320 callers=2 calls=1
   calls: sub_5692a0
*/
void sub_5692a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5692a0ULL || rel >= 0x5693e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005693e0 size=128 callers=0 calls=0
*/
void sub_5693e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5693e0ULL || rel >= 0x569460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00569460 size=192 callers=0 calls=1
   calls: SiCore_Array_298
*/
void sub_569460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x569460ULL || rel >= 0x569520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00569520 size=96 callers=0 calls=3
   calls: SiCore_Array_286, SiCore_String_123, sub_4c8020
*/
void sub_569520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x569520ULL || rel >= 0x569580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00569580 size=16 callers=0 calls=0
*/
void sub_569580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x569580ULL || rel >= 0x569590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00569590 size=16 callers=0 calls=0
*/
void sub_569590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x569590ULL || rel >= 0x5695a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005695a0 size=528 callers=0 calls=6
   calls: SiGfxShaderEffectPackage, sub_4c4700, sub_569c40, sub_569dd0, sub_57d030, sub_582f70
*/
void sub_5695a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5695a0ULL || rel >= 0x5697b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005697b0 size=1168 callers=1 calls=2
   calls: sub_4c5520, sub_582f70
   ref: SiGfxShaderEffectPackage
*/
void SiGfxShaderEffectPackage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5697b0ULL || rel >= 0x569c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00569c40 size=400 callers=1 calls=1
   calls: sub_582f70
*/
void sub_569c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x569c40ULL || rel >= 0x569dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00569dd0 size=368 callers=1 calls=2
   calls: sub_569f40, sub_582f70
*/
void sub_569dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x569dd0ULL || rel >= 0x569f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00569f40 size=1040 callers=1 calls=3
   calls: sub_56a350, sub_56a4f0, sub_582f70
*/
void sub_569f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x569f40ULL || rel >= 0x56a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056a350 size=416 callers=1 calls=1
   calls: sub_582f70
*/
void sub_56a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56a350ULL || rel >= 0x56a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056a4f0 size=640 callers=1 calls=1
   calls: sub_582f70
*/
void sub_56a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56a4f0ULL || rel >= 0x56a770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056a770 size=496 callers=0 calls=9
   calls: SiCore_Array_298, SiGfxShaderEffectPackage_2, SiGfx_ShaderEffectPackage_Impl_5, SiGfx_ShaderEffectPackage_Impl_6, SiGfx_ShaderEffectPackage_Impl_7, SiGfx_ShaderEffectPackage_Impl_8, sub_4c4700, sub_57d030, sub_582f10
*/
void sub_56a770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56a770ULL || rel >= 0x56a960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056a960 size=1200 callers=1 calls=3
   calls: sub_4c5630, sub_4cbc40, sub_582f10
   ref: SiGfxShaderEffectPackage
*/
void SiGfxShaderEffectPackage_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56a960ULL || rel >= 0x56ae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ae10 size=496 callers=1 calls=3
   calls: SiCore_Array_300, sub_574710, sub_582f10
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ae10ULL || rel >= 0x56b000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056b000 size=560 callers=1 calls=3
   calls: SiCore_Array_299, sub_56fd60, sub_582f10
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56b000ULL || rel >= 0x56b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056b230 size=1648 callers=1 calls=2
   calls: SiCore_Array_301, sub_582f10
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56b230ULL || rel >= 0x56b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056b8a0 size=432 callers=1 calls=3
   calls: SiCore_Array_298, SiGfx_ShaderEffectPackage_Impl, SiGfx_ShaderEffectPackage_Impl_9
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56b8a0ULL || rel >= 0x56ba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ba50 size=112 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_282(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ba50ULL || rel >= 0x56bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056bac0 size=304 callers=1 calls=1
   calls: SiGfx_ShaderEffectPackage_Impl_2
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_283(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56bac0ULL || rel >= 0x56bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056bbf0 size=848 callers=1 calls=6
   calls: SiCore_Array_302, SiGfx_ShaderEffectPackage_Impl_10, sub_4bc640, sub_4bc690, sub_566250, sub_582f10
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56bbf0ULL || rel >= 0x56bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056bf40 size=1344 callers=1 calls=6
   calls: SiCore_Array_144, SiCore_Array_303, sub_566070, sub_56c480, sub_56c610, sub_582f10
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56bf40ULL || rel >= 0x56c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056c480 size=400 callers=1 calls=0
*/
void sub_56c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56c480ULL || rel >= 0x56c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056c610 size=592 callers=1 calls=1
   calls: sub_582f10
*/
void sub_56c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56c610ULL || rel >= 0x56c860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056c860 size=16 callers=0 calls=0
*/
void sub_56c860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56c860ULL || rel >= 0x56c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056c870 size=16 callers=0 calls=0
*/
void sub_56c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56c870ULL || rel >= 0x56c880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056c880 size=224 callers=0 calls=1
   calls: sub_4c34a0
*/
void sub_56c880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56c880ULL || rel >= 0x56c960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056c960 size=192 callers=0 calls=2
   calls: SiCore_Array_304, SiGfx_ShaderEffectPackage_Impl_11
*/
void sub_56c960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56c960ULL || rel >= 0x56ca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ca20 size=1040 callers=1 calls=4
   calls: SiCore_Array_305, SiCore_Array_306, SiCore_Array_307, sub_4bc640
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ca20ULL || rel >= 0x56ce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ce30 size=16 callers=0 calls=0
*/
void sub_56ce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ce30ULL || rel >= 0x56ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ce40 size=16 callers=0 calls=0
*/
void sub_56ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ce40ULL || rel >= 0x56ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ce50 size=16 callers=0 calls=0
*/
void sub_56ce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ce50ULL || rel >= 0x56ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ce60 size=480 callers=6 calls=2
   calls: sub_596640, sub_596680
*/
void sub_56ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ce60ULL || rel >= 0x56d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056d040 size=192 callers=0 calls=0
*/
void sub_56d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d040ULL || rel >= 0x56d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056d100 size=416 callers=1 calls=0
*/
void sub_56d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d100ULL || rel >= 0x56d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056d2a0 size=16 callers=0 calls=0
*/
void sub_56d2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d2a0ULL || rel >= 0x56d2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056d2b0 size=16 callers=0 calls=0
*/
void sub_56d2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d2b0ULL || rel >= 0x56d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056d2c0 size=96 callers=0 calls=0
*/
void sub_56d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d2c0ULL || rel >= 0x56d320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056d320 size=784 callers=0 calls=6
   calls: SiCore_Map_13, sub_4cbf40, sub_56d630, sub_56e820, sub_596640, sub_596680
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp
*/
void SiGfx_ShaderEffectPackage_Impl_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d320ULL || rel >= 0x56d630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056d630 size=624 callers=1 calls=0
*/
void sub_56d630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d630ULL || rel >= 0x56d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056d8a0 size=32 callers=0 calls=0
*/
void sub_56d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d8a0ULL || rel >= 0x56d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056d8c0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\ShaderEffect/SiGfx_ShaderEffectPackage_Impl.h
*/
void SiGfx_ShaderEffectPackage_Impl_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d8c0ULL || rel >= 0x56d940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056d940 size=16 callers=0 calls=0
*/
void sub_56d940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d940ULL || rel >= 0x56d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056d950 size=464 callers=1 calls=6
   calls: SiCore_Map_16, sub_4bf6a0, sub_56e820, sub_596460, sub_596640, sub_596680
   ref: ../../../../Libsrc/SiGfx/Source\ShaderEffect/SiGfx_ShaderEffect_Impl.h
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiGfx_ShaderEffect_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56d950ULL || rel >= 0x56db20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056db20 size=48 callers=0 calls=1
   calls: SiGfx_ShaderEffect_Impl
*/
void sub_56db20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56db20ULL || rel >= 0x56db50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056db50 size=32 callers=0 calls=0
*/
void sub_56db50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56db50ULL || rel >= 0x56db70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056db70 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\ShaderEffect/SiGfx_ShaderEffect_Impl.h
*/
void SiGfx_ShaderEffect_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56db70ULL || rel >= 0x56dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056dbf0 size=16 callers=0 calls=0
*/
void sub_56dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56dbf0ULL || rel >= 0x56dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056dc00 size=96 callers=0 calls=1
   calls: SiCore_Map_16
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56dc00ULL || rel >= 0x56dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056dc60 size=80 callers=0 calls=1
   calls: SiCore_Map_16
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56dc60ULL || rel >= 0x56dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056dcb0 size=176 callers=6 calls=1
   calls: SiCore_Map_16
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56dcb0ULL || rel >= 0x56dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056dd60 size=128 callers=0 calls=1
   calls: SiCore_String_122
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_284(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56dd60ULL || rel >= 0x56dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056dde0 size=96 callers=0 calls=2
   calls: SiCore_String_122, sub_ce0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_285(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56dde0ULL || rel >= 0x56de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056de40 size=304 callers=6 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_122(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56de40ULL || rel >= 0x56df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056df70 size=464 callers=1 calls=3
   calls: SiCore_Array_287, SiCore_String_122, sub_4c8020
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_286(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56df70ULL || rel >= 0x56e140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056e140 size=576 callers=3 calls=2
   calls: SiCore_String_44, sub_4c8020
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_123(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56e140ULL || rel >= 0x56e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056e380 size=352 callers=2 calls=3
   calls: SiCore_String_122, sub_4c8020, sub_56e4e0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_287(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56e380ULL || rel >= 0x56e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056e4e0 size=208 callers=1 calls=2
   calls: sub_4bc640, sub_4bc690
*/
void sub_56e4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56e4e0ULL || rel >= 0x56e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056e5b0 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_288(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56e5b0ULL || rel >= 0x56e680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056e680 size=192 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_289(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56e680ULL || rel >= 0x56e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056e740 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56e740ULL || rel >= 0x56e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056e7c0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_291(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56e7c0ULL || rel >= 0x56e820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056e820 size=352 callers=5 calls=0
*/
void sub_56e820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56e820ULL || rel >= 0x56e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056e980 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_292(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56e980ULL || rel >= 0x56e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056e9e0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_293(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56e9e0ULL || rel >= 0x56ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ea40 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_294(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ea40ULL || rel >= 0x56eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056eaa0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_295(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56eaa0ULL || rel >= 0x56eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056eb00 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_296(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56eb00ULL || rel >= 0x56eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056eb60 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_297(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56eb60ULL || rel >= 0x56ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ebc0 size=416 callers=7 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_298(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ebc0ULL || rel >= 0x56ed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ed60 size=416 callers=5 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_299(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ed60ULL || rel >= 0x56ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ef00 size=416 callers=6 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ef00ULL || rel >= 0x56f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056f0a0 size=416 callers=6 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_301(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56f0a0ULL || rel >= 0x56f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056f240 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_302(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56f240ULL || rel >= 0x56f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056f3e0 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_303(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56f3e0ULL || rel >= 0x56f580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056f580 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_304(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56f580ULL || rel >= 0x56f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056f720 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_305(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56f720ULL || rel >= 0x56f8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056f8c0 size=640 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_306(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56f8c0ULL || rel >= 0x56fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056fb40 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_307(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56fb40ULL || rel >= 0x56fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056fce0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_56fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56fce0ULL || rel >= 0x56fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056fd60 size=240 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_56fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56fd60ULL || rel >= 0x56fe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056fe50 size=400 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectDefinition_Impl.c
*/
void SiGfx_ShaderEffectDefinition_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56fe50ULL || rel >= 0x56ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0056ffe0 size=48 callers=0 calls=1
   calls: SiGfx_ShaderEffectDefinition_Impl
*/
void sub_56ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x56ffe0ULL || rel >= 0x570010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570010 size=16 callers=0 calls=0
*/
void sub_570010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570010ULL || rel >= 0x570020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570020 size=16 callers=0 calls=0
*/
void sub_570020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570020ULL || rel >= 0x570030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570030 size=16 callers=0 calls=0
*/
void sub_570030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570030ULL || rel >= 0x570040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570040 size=16 callers=0 calls=0
*/
void sub_570040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570040ULL || rel >= 0x570050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570050 size=16 callers=0 calls=0
*/
void sub_570050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570050ULL || rel >= 0x570060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570060 size=16 callers=0 calls=0
*/
void sub_570060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570060ULL || rel >= 0x570070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570070 size=224 callers=0 calls=1
   calls: sub_4c34a0
*/
void sub_570070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570070ULL || rel >= 0x570150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570150 size=128 callers=0 calls=0
*/
void sub_570150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570150ULL || rel >= 0x5701d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005701d0 size=80 callers=0 calls=0
*/
void sub_5701d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5701d0ULL || rel >= 0x570220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570220 size=400 callers=0 calls=2
   calls: sub_5709e0, sub_582f70
*/
void sub_570220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570220ULL || rel >= 0x5703b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005703b0 size=384 callers=0 calls=2
   calls: SiGfx_ShaderEffectDefinition_Impl_3, sub_582f10
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectDefinition_Impl.c
*/
void SiGfx_ShaderEffectDefinition_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5703b0ULL || rel >= 0x570530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570530 size=336 callers=1 calls=2
   calls: SiGfx_ShaderEffectTechnique_Impl_3, sub_570820
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectDefinition_Impl.c
*/
void SiGfx_ShaderEffectDefinition_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570530ULL || rel >= 0x570680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570680 size=80 callers=0 calls=0
*/
void sub_570680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570680ULL || rel >= 0x5706d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005706d0 size=16 callers=0 calls=0
*/
void sub_5706d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5706d0ULL || rel >= 0x5706e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005706e0 size=16 callers=0 calls=0
*/
void sub_5706e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5706e0ULL || rel >= 0x5706f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005706f0 size=32 callers=0 calls=0
*/
void sub_5706f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5706f0ULL || rel >= 0x570710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570710 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\ShaderEffect/SiGfx_ShaderEffectDefinition_Impl.h
*/
void SiGfx_ShaderEffectDefinition_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570710ULL || rel >= 0x570790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570790 size=16 callers=0 calls=0
*/
void sub_570790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570790ULL || rel >= 0x5707a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005707a0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5707a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5707a0ULL || rel >= 0x570820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570820 size=112 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_570820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570820ULL || rel >= 0x570890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570890 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectTechnique_Impl.cp
*/
void SiGfx_ShaderEffectTechnique_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570890ULL || rel >= 0x570920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570920 size=160 callers=0 calls=1
   calls: sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectTechnique_Impl.cp
*/
void SiGfx_ShaderEffectTechnique_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570920ULL || rel >= 0x5709c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005709c0 size=16 callers=0 calls=0
*/
void sub_5709c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5709c0ULL || rel >= 0x5709d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005709d0 size=16 callers=0 calls=0
*/
void sub_5709d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5709d0ULL || rel >= 0x5709e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005709e0 size=192 callers=1 calls=1
   calls: sub_582f70
*/
void sub_5709e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5709e0ULL || rel >= 0x570aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570aa0 size=224 callers=1 calls=1
   calls: sub_582f10
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectTechnique_Impl.cp
*/
void SiGfx_ShaderEffectTechnique_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570aa0ULL || rel >= 0x570b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570b80 size=32 callers=0 calls=0
*/
void sub_570b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570b80ULL || rel >= 0x570ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570ba0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\ShaderEffect/SiGfx_ShaderEffectTechnique_Impl.h
*/
void SiGfx_ShaderEffectTechnique_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570ba0ULL || rel >= 0x570c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570c20 size=16 callers=0 calls=0
*/
void sub_570c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570c20ULL || rel >= 0x570c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570c30 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_570c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570c30ULL || rel >= 0x570cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570cb0 size=80 callers=1 calls=1
   calls: sub_570d10
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectVariationList_Imp
*/
void SiGfx_ShaderEffectVariationList_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570cb0ULL || rel >= 0x570d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570d00 size=16 callers=1 calls=0
*/
void sub_570d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570d00ULL || rel >= 0x570d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570d10 size=304 callers=2 calls=4
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_596410
*/
void sub_570d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570d10ULL || rel >= 0x570e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00570e40 size=592 callers=2 calls=2
   calls: SiGfx_ShaderEffectVariationList_Impl_2, sub_596460
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_124(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x570e40ULL || rel >= 0x571090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00571090 size=320 callers=1 calls=2
   calls: sub_596640, sub_596680
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectVariationList_Imp
*/
void SiGfx_ShaderEffectVariationList_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571090ULL || rel >= 0x5711d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005711d0 size=96 callers=0 calls=0
*/
void sub_5711d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5711d0ULL || rel >= 0x571230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00571230 size=256 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_125(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571230ULL || rel >= 0x571330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00571330 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_308(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571330ULL || rel >= 0x5713b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005713b0 size=96 callers=0 calls=0
*/
void sub_5713b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5713b0ULL || rel >= 0x571410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00571410 size=48 callers=0 calls=1
   calls: SiCore_String_124
*/
void sub_571410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571410ULL || rel >= 0x571440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00571440 size=560 callers=0 calls=4
   calls: sub_4c3510, sub_571670, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectVariationList_Imp
*/
void SiGfx_ShaderEffectVariationList_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571440ULL || rel >= 0x571670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00571670 size=864 callers=2 calls=4
   calls: SiCore_Array_144, SiCore_String_44, sub_4bc640, sub_4c8020
*/
void sub_571670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571670ULL || rel >= 0x5719d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005719d0 size=560 callers=0 calls=4
   calls: sub_4c3510, sub_571670, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectVariationList_Imp
*/
void SiGfx_ShaderEffectVariationList_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5719d0ULL || rel >= 0x571c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00571c00 size=432 callers=0 calls=5
   calls: sub_4bc640, sub_4bc690, sub_4c4700, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectVariationList_Imp
*/
void SiGfx_ShaderEffectVariationList_Impl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571c00ULL || rel >= 0x571db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00571db0 size=32 callers=0 calls=0
*/
void sub_571db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571db0ULL || rel >= 0x571dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00571dd0 size=32 callers=0 calls=0
*/
void sub_571dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571dd0ULL || rel >= 0x571df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00571df0 size=1856 callers=0 calls=6
   calls: SiCore_Array_310, SiCore_String_128, sub_4c8020, sub_572530, sub_596640, sub_596680
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_126(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x571df0ULL || rel >= 0x572530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00572530 size=128 callers=2 calls=2
   calls: sub_572530, sub_573b30
*/
void sub_572530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x572530ULL || rel >= 0x5725b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005725b0 size=16 callers=0 calls=0
*/
void sub_5725b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5725b0ULL || rel >= 0x5725c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005725c0 size=16 callers=0 calls=0
*/
void sub_5725c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5725c0ULL || rel >= 0x5725d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005725d0 size=624 callers=0 calls=2
   calls: sub_572840, sub_582f70
*/
void sub_5725d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5725d0ULL || rel >= 0x572840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00572840 size=448 callers=1 calls=1
   calls: sub_582f70
*/
void sub_572840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x572840ULL || rel >= 0x572a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00572a00 size=576 callers=0 calls=5
   calls: SiCore_Array_310, SiCore_String_128, SiGfx_ShaderEffectVariationList_Impl_6, sub_572c40, sub_582f10
*/
void sub_572a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x572a00ULL || rel >= 0x572c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00572c40 size=304 callers=1 calls=1
   calls: sub_582f10
*/
void sub_572c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x572c40ULL || rel >= 0x572d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00572d70 size=1264 callers=1 calls=4
   calls: SiCore_Array_144, SiCore_String_44, sub_4bc640, sub_582f10
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectVariationList_Imp
*/
void SiGfx_ShaderEffectVariationList_Impl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x572d70ULL || rel >= 0x573260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573260 size=16 callers=0 calls=0
*/
void sub_573260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573260ULL || rel >= 0x573270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573270 size=224 callers=0 calls=0
*/
void sub_573270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573270ULL || rel >= 0x573350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573350 size=16 callers=0 calls=0
*/
void sub_573350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573350ULL || rel >= 0x573360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573360 size=16 callers=0 calls=0
*/
void sub_573360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573360ULL || rel >= 0x573370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573370 size=240 callers=0 calls=3
   calls: SiCore_String_129, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectVariationList_Imp
*/
void SiGfx_ShaderEffectVariationList_Impl_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573370ULL || rel >= 0x573460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573460 size=16 callers=0 calls=0
*/
void sub_573460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573460ULL || rel >= 0x573470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573470 size=16 callers=0 calls=0
*/
void sub_573470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573470ULL || rel >= 0x573480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573480 size=592 callers=0 calls=3
   calls: SiCore_Array_311, sub_596640, sub_596680
*/
void sub_573480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573480ULL || rel >= 0x5736d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005736d0 size=32 callers=0 calls=0
*/
void sub_5736d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5736d0ULL || rel >= 0x5736f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005736f0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\ShaderEffect/SiGfx_ShaderEffectVariationList_Impl.h
*/
void SiGfx_ShaderEffectVariationList_Impl_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5736f0ULL || rel >= 0x573770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573770 size=16 callers=0 calls=0
*/
void sub_573770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573770ULL || rel >= 0x573780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573780 size=96 callers=0 calls=0
*/
void sub_573780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573780ULL || rel >= 0x5737e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005737e0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_309(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5737e0ULL || rel >= 0x573840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573840 size=240 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_127(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573840ULL || rel >= 0x573930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573930 size=96 callers=0 calls=0
*/
void sub_573930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573930ULL || rel >= 0x573990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573990 size=416 callers=3 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573990ULL || rel >= 0x573b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00573b30 size=1376 callers=1 calls=0
*/
void sub_573b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x573b30ULL || rel >= 0x574090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574090 size=688 callers=2 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c8020
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574090ULL || rel >= 0x574340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574340 size=432 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_129(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574340ULL || rel >= 0x5744f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005744f0 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_311(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5744f0ULL || rel >= 0x574690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574690 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_574690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574690ULL || rel >= 0x574710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574710 size=320 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_574710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574710ULL || rel >= 0x574850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574850 size=464 callers=1 calls=1
   calls: SiCore_String_131
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574850ULL || rel >= 0x574a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574a20 size=368 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_131(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574a20ULL || rel >= 0x574b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574b90 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_312(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574b90ULL || rel >= 0x574c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574c30 size=48 callers=0 calls=1
   calls: SiCore_String_130
*/
void sub_574c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574c30ULL || rel >= 0x574c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574c60 size=16 callers=0 calls=0
*/
void sub_574c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574c60ULL || rel >= 0x574c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574c70 size=16 callers=0 calls=0
*/
void sub_574c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574c70ULL || rel >= 0x574c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574c80 size=16 callers=0 calls=0
*/
void sub_574c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574c80ULL || rel >= 0x574c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00574c90 size=1456 callers=0 calls=11
   calls: SiCore_LinkedList, SiCore_String_11, SiCore_String_44, sub_4bc640, sub_4bc690, sub_4c4290, sub_4c4700, sub_4c5860, sub_4c8020, sub_4c9ba0, sub_575240
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_132(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x574c90ULL || rel >= 0x575240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00575240 size=272 callers=1 calls=3
   calls: SiCore_String_11, sub_4bc640, sub_4bc690
*/
void sub_575240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575240ULL || rel >= 0x575350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00575350 size=32 callers=0 calls=0
*/
void sub_575350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575350ULL || rel >= 0x575370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00575370 size=16 callers=0 calls=0
*/
void sub_575370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575370ULL || rel >= 0x575380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00575380 size=16 callers=0 calls=0
*/
void sub_575380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575380ULL || rel >= 0x575390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00575390 size=352 callers=0 calls=4
   calls: sub_4c4290, sub_4c5860, sub_4c8020, sub_4c9ba0
*/
void sub_575390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575390ULL || rel >= 0x5754f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005754f0 size=32 callers=0 calls=0
*/
void sub_5754f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5754f0ULL || rel >= 0x575510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00575510 size=912 callers=0 calls=1
   calls: sub_582f70
*/
void sub_575510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575510ULL || rel >= 0x5758a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005758a0 size=1040 callers=0 calls=2
   calls: SiCore_Array_314, sub_582f10
*/
void sub_5758a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5758a0ULL || rel >= 0x575cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00575cb0 size=32 callers=0 calls=0
*/
void sub_575cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575cb0ULL || rel >= 0x575cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00575cd0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\ShaderEffect/SiGfx_ShaderEffectVariation_Impl.h
*/
void SiGfx_ShaderEffectVariation_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575cd0ULL || rel >= 0x575d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00575d50 size=16 callers=0 calls=0
*/
void sub_575d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575d50ULL || rel >= 0x575d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00575d60 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_313(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575d60ULL || rel >= 0x575df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00575df0 size=672 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_314(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x575df0ULL || rel >= 0x576090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576090 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_576090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576090ULL || rel >= 0x576110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576110 size=224 callers=13 calls=3
   calls: SiCore_Array_315, sub_4bf660, sub_4cbf40
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffect_Impl.cpp
*/
void SiGfx_ShaderEffect_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576110ULL || rel >= 0x5761f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005761f0 size=656 callers=1 calls=4
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_596410
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_315(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5761f0ULL || rel >= 0x576480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576480 size=304 callers=1 calls=2
   calls: sub_5765b0, sub_596460
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_133(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576480ULL || rel >= 0x5765b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005765b0 size=160 callers=1 calls=3
   calls: SiCore_Array_318, SiGfx_ShaderEffect_Impl_4, sub_4cbf40
*/
void sub_5765b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5765b0ULL || rel >= 0x576650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576650 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_316(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576650ULL || rel >= 0x5766d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005766d0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_317(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5766d0ULL || rel >= 0x576750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576750 size=48 callers=0 calls=1
   calls: SiCore_String_133
*/
void sub_576750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576750ULL || rel >= 0x576780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576780 size=608 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_318(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576780ULL || rel >= 0x5769e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005769e0 size=432 callers=1 calls=4
   calls: SiCore_Map_13, sub_56e820, sub_596640, sub_596680
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffect_Impl.cpp
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiGfx_ShaderEffect_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5769e0ULL || rel >= 0x576b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576b90 size=16 callers=0 calls=0
*/
void sub_576b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576b90ULL || rel >= 0x576ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576ba0 size=16 callers=0 calls=0
*/
void sub_576ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576ba0ULL || rel >= 0x576bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576bb0 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_576bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576bb0ULL || rel >= 0x576bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576bf0 size=16 callers=0 calls=0
*/
void sub_576bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576bf0ULL || rel >= 0x576c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576c00 size=16 callers=0 calls=0
*/
void sub_576c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576c00ULL || rel >= 0x576c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576c10 size=16 callers=0 calls=0
*/
void sub_576c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576c10ULL || rel >= 0x576c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576c20 size=16 callers=0 calls=0
*/
void sub_576c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576c20ULL || rel >= 0x576c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00576c30 size=2480 callers=0 calls=16
   calls: SiCore_Array_321, SiCore_Map_17, sub_4bc640, sub_4bc690, sub_4c3410, sub_4c3510, sub_4cbf40, sub_5775e0, sub_577730, sub_577990, sub_578100, sub_5785d0
   ... +4 more
   ref: ((SI_INT_T)m_itemCount+iDirection)<=(SI_INT_T)m_reservedCount
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ShiftData
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffect_Impl.cpp
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void ShiftData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x576c30ULL || rel >= 0x5775e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005775e0 size=336 callers=2 calls=0
*/
void sub_5775e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5775e0ULL || rel >= 0x577730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00577730 size=608 callers=1 calls=2
   calls: SiCore_Array_144, sub_4bc640
*/
void sub_577730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x577730ULL || rel >= 0x577990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00577990 size=848 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_577990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x577990ULL || rel >= 0x577ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00577ce0 size=1056 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Map.h
*/
void SiCore_Map_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x577ce0ULL || rel >= 0x578100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578100 size=1232 callers=1 calls=0
*/
void sub_578100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578100ULL || rel >= 0x5785d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005785d0 size=704 callers=2 calls=1
   calls: sub_56ce60
*/
void sub_5785d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5785d0ULL || rel >= 0x578890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578890 size=240 callers=0 calls=3
   calls: sub_5775e0, sub_596640, sub_596680
*/
void sub_578890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578890ULL || rel >= 0x578980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578980 size=176 callers=0 calls=1
   calls: sub_5785d0
*/
void sub_578980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578980ULL || rel >= 0x578a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578a30 size=160 callers=0 calls=1
   calls: sub_4cbf40
*/
void sub_578a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578a30ULL || rel >= 0x578ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578ad0 size=16 callers=0 calls=0
*/
void sub_578ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578ad0ULL || rel >= 0x578ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578ae0 size=16 callers=0 calls=0
*/
void sub_578ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578ae0ULL || rel >= 0x578af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578af0 size=16 callers=0 calls=0
*/
void sub_578af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578af0ULL || rel >= 0x578b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578b00 size=16 callers=0 calls=0
*/
void sub_578b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578b00ULL || rel >= 0x578b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578b10 size=176 callers=1 calls=2
   calls: SiCore_Array_318, sub_4c45c0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_134(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578b10ULL || rel >= 0x578bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578bc0 size=32 callers=1 calls=0
*/
void sub_578bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578bc0ULL || rel >= 0x578be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578be0 size=80 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_578be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578be0ULL || rel >= 0x578c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00578c30 size=1520 callers=0 calls=2
   calls: sub_596640, sub_596680
   ref: iIndex<m_itemCount
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: RemoveByIndex
*/
void RemoveByIndex_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x578c30ULL || rel >= 0x579220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00579220 size=32 callers=0 calls=0
*/
void sub_579220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x579220ULL || rel >= 0x579240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00579240 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\ShaderEffect/SiGfx_ShaderEffect_Impl.h
*/
void SiGfx_ShaderEffect_Impl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x579240ULL || rel >= 0x5792c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005792c0 size=16 callers=0 calls=0
*/
void sub_5792c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5792c0ULL || rel >= 0x5792d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005792d0 size=32 callers=0 calls=0
*/
void sub_5792d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5792d0ULL || rel >= 0x5792f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005792f0 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_5792f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5792f0ULL || rel >= 0x579330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00579330 size=32 callers=0 calls=0
*/
void sub_579330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x579330ULL || rel >= 0x579350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00579350 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source\ShaderEffect/SiGfx_ShaderEffect_Impl.h
*/
void SiGfx_ShaderEffect_Impl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x579350ULL || rel >= 0x5793d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005793d0 size=16 callers=0 calls=0
*/
void sub_5793d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5793d0ULL || rel >= 0x5793e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005793e0 size=16 callers=0 calls=0
*/
void sub_5793e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5793e0ULL || rel >= 0x5793f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005793f0 size=1200 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_135(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5793f0ULL || rel >= 0x5798a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005798a0 size=48 callers=0 calls=1
   calls: SiCore_String_135
*/
void sub_5798a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5798a0ULL || rel >= 0x5798d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005798d0 size=32 callers=0 calls=0
*/
void sub_5798d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5798d0ULL || rel >= 0x5798f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005798f0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiGfx/ShaderCache/SiGfx_ShaderCache.h
*/
void SiGfx_ShaderCache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5798f0ULL || rel >= 0x579970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00579970 size=16 callers=0 calls=0
*/
void sub_579970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x579970ULL || rel >= 0x579980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00579980 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_319(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x579980ULL || rel >= 0x5799e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005799e0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5799e0ULL || rel >= 0x579a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00579a40 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_321(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x579a40ULL || rel >= 0x579be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00579be0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_579be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x579be0ULL || rel >= 0x579c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00579c60 size=1200 callers=2 calls=5
   calls: sub_4bc640, sub_4bc690, sub_4bf7b0, sub_4c4700, sub_4c9390
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: neutral
*/
void neutral_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x579c60ULL || rel >= 0x57a110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a110 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_57a110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a110ULL || rel >= 0x57a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a190 size=304 callers=0 calls=2
   calls: sub_1c0, sub_4bc640
*/
void sub_57a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a190ULL || rel >= 0x57a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a2c0 size=64 callers=1 calls=2
   calls: sub_4cad50, sub_57cfb0
*/
void sub_57a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a2c0ULL || rel >= 0x57a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a300 size=32 callers=1 calls=2
   calls: sub_57cfb0, sub_57d4e0
*/
void sub_57a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a300ULL || rel >= 0x57a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a320 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_57a320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a320ULL || rel >= 0x57a3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a3a0 size=160 callers=2 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_57a3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a3a0ULL || rel >= 0x57a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a440 size=208 callers=1 calls=0
*/
void sub_57a440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a440ULL || rel >= 0x57a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a510 size=96 callers=0 calls=0
*/
void sub_57a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a510ULL || rel >= 0x57a570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a570 size=16 callers=0 calls=0
*/
void sub_57a570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a570ULL || rel >= 0x57a580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a580 size=192 callers=0 calls=1
   calls: sub_4c9090
   ref: SiIOBinaryArchive::ChunkHandler::ValidateChunkHeader --> <%s> chunk version mismatch : File = ( %d, 
*/
void SiIOBinaryArchive_ChunkHandler_ValidateChunkHeader_s_chu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a580ULL || rel >= 0x57a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a640 size=16 callers=0 calls=0
*/
void sub_57a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a640ULL || rel >= 0x57a650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a650 size=416 callers=1 calls=4
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_4c5520
   ref: SSKKArchive
*/
void SSKKArchive_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a650ULL || rel >= 0x57a7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057a7f0 size=560 callers=1 calls=1
   calls: sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_BinaryArchive_Impl.cpp
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiIO_BinaryArchive_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57a7f0ULL || rel >= 0x57aa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057aa20 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_322(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57aa20ULL || rel >= 0x57aac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057aac0 size=48 callers=0 calls=1
   calls: SiIO_BinaryArchive_Impl
*/
void sub_57aac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57aac0ULL || rel >= 0x57aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057aaf0 size=256 callers=0 calls=3
   calls: sub_4c4700, sub_4c9090, sub_57d030
   ref: SiIOBinaryArchive::Open --> Failed to create MemoryMapped file %s
   ref: SiIOBinaryArchive::Open --> Failed to open file %s
   ref: SiIOBinaryArchive::Open --> Failed to open file as BinaryArchive %s
*/
void SiIOBinaryArchive_Open_Failed_to_open_file_s(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57aaf0ULL || rel >= 0x57abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057abf0 size=512 callers=0 calls=3
   calls: Unknown_3, sub_4c4290, sub_4c5630
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_BinaryArchive_Impl.cpp
*/
void SiIO_BinaryArchive_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57abf0ULL || rel >= 0x57adf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057adf0 size=336 callers=0 calls=3
   calls: Unknown_3, sub_4c4290, sub_4c5630
*/
void sub_57adf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57adf0ULL || rel >= 0x57af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057af40 size=128 callers=0 calls=0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_BinaryArchive_Impl.cpp
*/
void SiIO_BinaryArchive_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57af40ULL || rel >= 0x57afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057afc0 size=16 callers=0 calls=0
*/
void sub_57afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57afc0ULL || rel >= 0x57afd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057afd0 size=16 callers=0 calls=0
*/
void sub_57afd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57afd0ULL || rel >= 0x57afe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057afe0 size=48 callers=0 calls=0
*/
void sub_57afe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57afe0ULL || rel >= 0x57b010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b010 size=48 callers=0 calls=0
*/
void sub_57b010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b010ULL || rel >= 0x57b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b040 size=48 callers=0 calls=0
*/
void sub_57b040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b040ULL || rel >= 0x57b070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b070 size=288 callers=0 calls=1
   calls: sub_4c8f80
*/
void sub_57b070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b070ULL || rel >= 0x57b190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b190 size=400 callers=0 calls=1
   calls: sub_4c8f80
*/
void sub_57b190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b190ULL || rel >= 0x57b320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b320 size=272 callers=0 calls=4
   calls: SiIO_MemoryStream_Impl, sub_580550, sub_580870, sub_582b50
*/
void sub_57b320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b320ULL || rel >= 0x57b430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b430 size=16 callers=0 calls=0
*/
void sub_57b430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b430ULL || rel >= 0x57b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b440 size=48 callers=0 calls=0
*/
void sub_57b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b440ULL || rel >= 0x57b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b470 size=128 callers=0 calls=1
   calls: sub_4c5520
*/
void sub_57b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b470ULL || rel >= 0x57b4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b4f0 size=16 callers=0 calls=0
*/
void sub_57b4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b4f0ULL || rel >= 0x57b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b500 size=96 callers=0 calls=0
*/
void sub_57b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b500ULL || rel >= 0x57b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b560 size=160 callers=0 calls=2
   calls: sub_4c9090, sub_57d030
   ref: SiIOBinaryArchive::Save --> Failed to open file
*/
void SiIOBinaryArchive_Save_Failed_to_open_file(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b560ULL || rel >= 0x57b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b600 size=464 callers=0 calls=6
   calls: SiIOBinaryArchive_WriteChunkHandler_Failed_to_write_chun, sub_4c9090, sub_57b7d0, sub_57bb60, sub_57c090, sub_582f70
   ref: SiIOBinaryArchive::Save --> Failed to save chunk
*/
void SiIOBinaryArchive_Save_Failed_to_save_chunk(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b600ULL || rel >= 0x57b7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b7d0 size=496 callers=2 calls=0
*/
void sub_57b7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b7d0ULL || rel >= 0x57b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057b9c0 size=416 callers=4 calls=4
   calls: SiIOBinaryArchive_WriteChunkHandler_Failed_to_write_chun, sub_4c9090, sub_57bd30, sub_582f70
   ref: SiIOBinaryArchive::WriteChunkHandler --> Failed to write chunk header
*/
void SiIOBinaryArchive_WriteChunkHandler_Failed_to_write_chun(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57b9c0ULL || rel >= 0x57bb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057bb60 size=464 callers=1 calls=0
*/
void sub_57bb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57bb60ULL || rel >= 0x57bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057bd30 size=448 callers=1 calls=0
*/
void sub_57bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57bd30ULL || rel >= 0x57bef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057bef0 size=16 callers=0 calls=0
*/
void sub_57bef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57bef0ULL || rel >= 0x57bf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057bf00 size=48 callers=0 calls=1
   calls: sub_4c5630
*/
void sub_57bf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57bf00ULL || rel >= 0x57bf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057bf30 size=16 callers=0 calls=0
*/
void sub_57bf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57bf30ULL || rel >= 0x57bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057bf40 size=16 callers=0 calls=0
*/
void sub_57bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57bf40ULL || rel >= 0x57bf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057bf50 size=16 callers=0 calls=0
*/
void sub_57bf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57bf50ULL || rel >= 0x57bf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057bf60 size=16 callers=0 calls=0
*/
void sub_57bf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57bf60ULL || rel >= 0x57bf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057bf70 size=16 callers=0 calls=0
*/
void sub_57bf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57bf70ULL || rel >= 0x57bf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057bf80 size=48 callers=0 calls=0
*/
void sub_57bf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57bf80ULL || rel >= 0x57bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057bfb0 size=224 callers=0 calls=1
   calls: sub_4c8f80
*/
void sub_57bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57bfb0ULL || rel >= 0x57c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c090 size=304 callers=2 calls=3
   calls: SiCore_Array_324, sub_4c8f80, sub_57c090
*/
void sub_57c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c090ULL || rel >= 0x57c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c1c0 size=1024 callers=0 calls=5
   calls: SiCore_Array_325, SiCore_Array_326, sub_4bc640, sub_4bc690, sub_57d030
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_136(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c1c0ULL || rel >= 0x57c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c5c0 size=16 callers=0 calls=0
*/
void sub_57c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c5c0ULL || rel >= 0x57c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c5d0 size=32 callers=0 calls=0
*/
void sub_57c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c5d0ULL || rel >= 0x57c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c5f0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiIO/Source/SiIO_BinaryArchive_Impl.h
*/
void SiIO_BinaryArchive_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c5f0ULL || rel >= 0x57c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c670 size=16 callers=0 calls=0
*/
void sub_57c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c670ULL || rel >= 0x57c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c680 size=32 callers=0 calls=0
*/
void sub_57c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c680ULL || rel >= 0x57c6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c6a0 size=16 callers=0 calls=0
*/
void sub_57c6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c6a0ULL || rel >= 0x57c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c6b0 size=32 callers=0 calls=0
*/
void sub_57c6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c6b0ULL || rel >= 0x57c6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c6d0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiIO/SiIO_BinaryArchive.h
*/
void SiIO_BinaryArchive_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c6d0ULL || rel >= 0x57c750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c750 size=16 callers=0 calls=0
*/
void sub_57c750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c750ULL || rel >= 0x57c760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c760 size=96 callers=0 calls=0
*/
void sub_57c760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c760ULL || rel >= 0x57c7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c7c0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_323(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c7c0ULL || rel >= 0x57c850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057c850 size=656 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_324(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57c850ULL || rel >= 0x57cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057cae0 size=544 callers=4 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_325(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57cae0ULL || rel >= 0x57cd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057cd00 size=560 callers=4 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_326(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57cd00ULL || rel >= 0x57cf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057cf30 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_57cf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57cf30ULL || rel >= 0x57cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057cfb0 size=128 callers=10 calls=2
   calls: sub_1c0, sub_57d040
*/
void sub_57cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57cfb0ULL || rel >= 0x57d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d030 size=16 callers=28 calls=0
*/
void sub_57d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d030ULL || rel >= 0x57d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d040 size=256 callers=1 calls=3
   calls: sub_4bc640, sub_4bf660, sub_4bf7b0
*/
void sub_57d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d040ULL || rel >= 0x57d140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d140 size=112 callers=0 calls=0
*/
void sub_57d140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d140ULL || rel >= 0x57d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d1b0 size=96 callers=0 calls=0
*/
void sub_57d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d1b0ULL || rel >= 0x57d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d210 size=144 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_57d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d210ULL || rel >= 0x57d2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d2a0 size=336 callers=0 calls=6
   calls: sub_4bf7b0, sub_4c5930, sub_57d3f0, sub_57de20, sub_583760, sub_583970
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Kernel_Impl.cpp
*/
void SiIO_Kernel_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d2a0ULL || rel >= 0x57d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d3f0 size=240 callers=1 calls=2
   calls: neutral_3, sub_4bf7b0
*/
void sub_57d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d3f0ULL || rel >= 0x57d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d4e0 size=176 callers=1 calls=1
   calls: sub_4bf7b0
*/
void sub_57d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d4e0ULL || rel >= 0x57d590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d590 size=80 callers=0 calls=0
*/
void sub_57d590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d590ULL || rel >= 0x57d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d5e0 size=16 callers=0 calls=0
*/
void sub_57d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d5e0ULL || rel >= 0x57d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d5f0 size=16 callers=0 calls=0
*/
void sub_57d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d5f0ULL || rel >= 0x57d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d600 size=112 callers=0 calls=1
   calls: sub_580550
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Kernel_Impl.cpp
*/
void SiIO_Kernel_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d600ULL || rel >= 0x57d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d670 size=192 callers=0 calls=1
   calls: sub_588110
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Kernel_Impl.cpp
*/
void SiIO_Kernel_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d670ULL || rel >= 0x57d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d730 size=48 callers=0 calls=0
*/
void sub_57d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d730ULL || rel >= 0x57d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d760 size=112 callers=0 calls=1
   calls: sub_58b8d0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Kernel_Impl.cpp
*/
void SiIO_Kernel_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d760ULL || rel >= 0x57d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d7d0 size=112 callers=0 calls=1
   calls: SSKKArchive_2
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Kernel_Impl.cpp
*/
void SiIO_Kernel_Impl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d7d0ULL || rel >= 0x57d840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d840 size=16 callers=8 calls=0
*/
void sub_57d840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d840ULL || rel >= 0x57d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d850 size=16 callers=0 calls=0
*/
void sub_57d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d850ULL || rel >= 0x57d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d860 size=16 callers=0 calls=0
*/
void sub_57d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d860ULL || rel >= 0x57d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d870 size=80 callers=0 calls=1
   calls: SiIO_VFSManager_Impl
*/
void sub_57d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d870ULL || rel >= 0x57d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d8c0 size=144 callers=0 calls=1
   calls: sub_57de20
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Kernel_Impl.cpp
*/
void SiIO_Kernel_Impl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d8c0ULL || rel >= 0x57d950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d950 size=32 callers=0 calls=0
*/
void sub_57d950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d950ULL || rel >= 0x57d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d970 size=48 callers=0 calls=0
*/
void sub_57d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d970ULL || rel >= 0x57d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057d9a0 size=304 callers=0 calls=2
   calls: sub_4bc640, sub_4bc690
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Kernel_Impl.cpp
*/
void SiIO_Kernel_Impl_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57d9a0ULL || rel >= 0x57dad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057dad0 size=320 callers=0 calls=1
   calls: sub_4c8f80
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_Kernel_Impl.cpp
*/
void SiIO_Kernel_Impl_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57dad0ULL || rel >= 0x57dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057dc10 size=128 callers=0 calls=2
   calls: sub_4c8020, sub_4c8f80
*/
void sub_57dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57dc10ULL || rel >= 0x57dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057dc90 size=32 callers=0 calls=0
*/
void sub_57dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57dc90ULL || rel >= 0x57dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057dcb0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiIO/Source/SiIO_Kernel_Impl.h
*/
void SiIO_Kernel_Impl_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57dcb0ULL || rel >= 0x57dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057dd30 size=16 callers=0 calls=0
*/
void sub_57dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57dd30ULL || rel >= 0x57dd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057dd40 size=96 callers=0 calls=0
*/
void sub_57dd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57dd40ULL || rel >= 0x57dda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057dda0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_57dda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57dda0ULL || rel >= 0x57de20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057de20 size=32 callers=2 calls=0
*/
void sub_57de20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57de20ULL || rel >= 0x57de40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057de40 size=32 callers=0 calls=0
*/
void sub_57de40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57de40ULL || rel >= 0x57de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057de60 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_57de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57de60ULL || rel >= 0x57dea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057dea0 size=32 callers=0 calls=0
*/
void sub_57dea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57dea0ULL || rel >= 0x57dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057dec0 size=80 callers=0 calls=1
   calls: sub_58be50
*/
void sub_57dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57dec0ULL || rel >= 0x57df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057df10 size=64 callers=0 calls=1
   calls: sub_591690
*/
void sub_57df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57df10ULL || rel >= 0x57df50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057df50 size=32 callers=0 calls=0
*/
void sub_57df50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57df50ULL || rel >= 0x57df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057df70 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiIO/Source/SiIO_Codec_ZLib_Impl.h
*/
void SiIO_Codec_ZLib_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57df70ULL || rel >= 0x57dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057dff0 size=16 callers=0 calls=0
*/
void sub_57dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57dff0ULL || rel >= 0x57e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057e000 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_57e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57e000ULL || rel >= 0x57e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057e080 size=80 callers=0 calls=1
   calls: SiCore_Array_327
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_CSVDocument_Impl.cpp
*/
void SiIO_CSVDocument_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57e080ULL || rel >= 0x57e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057e0d0 size=1312 callers=1 calls=2
   calls: sub_4bc640, sub_4bf660
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_327(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57e0d0ULL || rel >= 0x57e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057e5f0 size=496 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_328(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57e5f0ULL || rel >= 0x57e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057e7e0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_329(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57e7e0ULL || rel >= 0x57e860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057e860 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57e860ULL || rel >= 0x57e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057e8e0 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_331(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57e8e0ULL || rel >= 0x57e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057e9b0 size=48 callers=0 calls=1
   calls: SiCore_Array_328
*/
void sub_57e9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57e9b0ULL || rel >= 0x57e9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057e9e0 size=112 callers=0 calls=1
   calls: sub_57d030
*/
void sub_57e9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57e9e0ULL || rel >= 0x57ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057ea50 size=256 callers=0 calls=5
   calls: SiCore_String_138, sub_4bc640, sub_4bc690, sub_57eb50, sub_583340
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_137(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57ea50ULL || rel >= 0x57eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057eb50 size=640 callers=1 calls=5
   calls: SiCore_Array_144, SiCore_Array_335, SiCore_String_11, sub_4c4700, sub_4c4d70
*/
void sub_57eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57eb50ULL || rel >= 0x57edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057edd0 size=1936 callers=1 calls=7
   calls: SiCore_Array_336, SiCore_String_11, SiCore_String_123, SiCore_String_44, sub_4bc640, sub_4bc690, sub_4c8020
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_138(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57edd0ULL || rel >= 0x57f560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057f560 size=112 callers=0 calls=1
   calls: sub_57d030
*/
void sub_57f560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57f560ULL || rel >= 0x57f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057f5d0 size=960 callers=0 calls=7
   calls: SiCore_Array_144, SiCore_String_11, sub_4bc640, sub_4bc690, sub_4c4700, sub_4c4d80, sub_4c51e0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_139(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57f5d0ULL || rel >= 0x57f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057f990 size=16 callers=0 calls=0
*/
void sub_57f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57f990ULL || rel >= 0x57f9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057f9a0 size=32 callers=0 calls=0
*/
void sub_57f9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57f9a0ULL || rel >= 0x57f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057f9c0 size=32 callers=0 calls=0
*/
void sub_57f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57f9c0ULL || rel >= 0x57f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057f9e0 size=64 callers=0 calls=1
   calls: sub_4c58e0
*/
void sub_57f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57f9e0ULL || rel >= 0x57fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057fa20 size=48 callers=0 calls=0
*/
void sub_57fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57fa20ULL || rel >= 0x57fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057fa50 size=48 callers=0 calls=0
*/
void sub_57fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57fa50ULL || rel >= 0x57fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057fa80 size=176 callers=0 calls=1
   calls: SiCore_Array_336
*/
void sub_57fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57fa80ULL || rel >= 0x57fb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057fb30 size=192 callers=0 calls=1
   calls: SiCore_String_44
*/
void sub_57fb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57fb30ULL || rel >= 0x57fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057fbf0 size=368 callers=0 calls=3
   calls: SiCore_Array_336, SiCore_String_44, sub_4c4700
*/
void sub_57fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57fbf0ULL || rel >= 0x57fd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057fd60 size=112 callers=0 calls=1
   calls: sub_4c5a40
*/
void sub_57fd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57fd60ULL || rel >= 0x57fdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057fdd0 size=112 callers=0 calls=1
   calls: sub_4c5a90
*/
void sub_57fdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57fdd0ULL || rel >= 0x57fe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057fe40 size=112 callers=0 calls=1
   calls: sub_4c5a90
*/
void sub_57fe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57fe40ULL || rel >= 0x57feb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057feb0 size=32 callers=0 calls=0
*/
void sub_57feb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57feb0ULL || rel >= 0x57fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057fed0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiIO/Source/SiIO_CSVDocument_Impl.h
*/
void SiIO_CSVDocument_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57fed0ULL || rel >= 0x57ff50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057ff50 size=16 callers=0 calls=0
*/
void sub_57ff50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57ff50ULL || rel >= 0x57ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057ff60 size=16 callers=0 calls=0
*/
void sub_57ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57ff60ULL || rel >= 0x57ff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057ff70 size=16 callers=0 calls=0
*/
void sub_57ff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57ff70ULL || rel >= 0x57ff80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0057ff80 size=192 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_332(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x57ff80ULL || rel >= 0x580040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580040 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_333(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580040ULL || rel >= 0x5800a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005800a0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_334(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5800a0ULL || rel >= 0x580100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580100 size=400 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_335(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580100ULL || rel >= 0x580290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580290 size=576 callers=4 calls=2
   calls: SiCore_String_123, sub_4bc640
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_336(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580290ULL || rel >= 0x5804d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005804d0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_5804d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5804d0ULL || rel >= 0x580550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580550 size=80 callers=4 calls=1
   calls: sub_4bf660
*/
void sub_580550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580550ULL || rel >= 0x5805a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005805a0 size=112 callers=2 calls=0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_MemoryStream_Impl.cpp
*/
void SiIO_MemoryStream_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5805a0ULL || rel >= 0x580610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580610 size=128 callers=0 calls=1
   calls: sub_4bf6a0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_MemoryStream_Impl.cpp
*/
void SiIO_MemoryStream_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580610ULL || rel >= 0x580690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580690 size=176 callers=0 calls=0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_MemoryStream_Impl.cpp
*/
void SiIO_MemoryStream_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580690ULL || rel >= 0x580740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580740 size=16 callers=0 calls=0
*/
void sub_580740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580740ULL || rel >= 0x580750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580750 size=16 callers=0 calls=0
*/
void sub_580750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580750ULL || rel >= 0x580760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580760 size=96 callers=0 calls=0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_MemoryStream_Impl.cpp
*/
void SiIO_MemoryStream_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580760ULL || rel >= 0x5807c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005807c0 size=16 callers=0 calls=0
*/
void sub_5807c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5807c0ULL || rel >= 0x5807d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005807d0 size=32 callers=0 calls=0
*/
void sub_5807d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5807d0ULL || rel >= 0x5807f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005807f0 size=16 callers=0 calls=0
*/
void sub_5807f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5807f0ULL || rel >= 0x580800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580800 size=16 callers=0 calls=0
*/
void sub_580800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580800ULL || rel >= 0x580810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580810 size=16 callers=0 calls=0
*/
void sub_580810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580810ULL || rel >= 0x580820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580820 size=16 callers=0 calls=0
*/
void sub_580820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580820ULL || rel >= 0x580830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580830 size=16 callers=0 calls=0
*/
void sub_580830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580830ULL || rel >= 0x580840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580840 size=16 callers=0 calls=0
*/
void sub_580840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580840ULL || rel >= 0x580850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580850 size=16 callers=0 calls=0
*/
void sub_580850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580850ULL || rel >= 0x580860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580860 size=16 callers=0 calls=0
*/
void sub_580860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580860ULL || rel >= 0x580870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580870 size=112 callers=1 calls=0
*/
void sub_580870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580870ULL || rel >= 0x5808e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005808e0 size=112 callers=0 calls=0
*/
void sub_5808e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5808e0ULL || rel >= 0x580950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580950 size=48 callers=0 calls=0
*/
void sub_580950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580950ULL || rel >= 0x580980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580980 size=240 callers=0 calls=0
*/
void sub_580980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580980ULL || rel >= 0x580a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580a70 size=48 callers=0 calls=0
*/
void sub_580a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580a70ULL || rel >= 0x580aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580aa0 size=48 callers=0 calls=0
*/
void sub_580aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580aa0ULL || rel >= 0x580ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580ad0 size=80 callers=0 calls=0
*/
void sub_580ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580ad0ULL || rel >= 0x580b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580b20 size=16 callers=0 calls=0
*/
void sub_580b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580b20ULL || rel >= 0x580b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580b30 size=48 callers=0 calls=0
*/
void sub_580b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580b30ULL || rel >= 0x580b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580b60 size=64 callers=0 calls=0
*/
void sub_580b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580b60ULL || rel >= 0x580ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580ba0 size=112 callers=0 calls=0
*/
void sub_580ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580ba0ULL || rel >= 0x580c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580c10 size=32 callers=0 calls=0
*/
void sub_580c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580c10ULL || rel >= 0x580c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580c30 size=48 callers=0 calls=0
*/
void sub_580c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580c30ULL || rel >= 0x580c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580c60 size=64 callers=0 calls=0
*/
void sub_580c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580c60ULL || rel >= 0x580ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580ca0 size=112 callers=0 calls=0
*/
void sub_580ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580ca0ULL || rel >= 0x580d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580d10 size=64 callers=0 calls=0
*/
void sub_580d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580d10ULL || rel >= 0x580d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580d50 size=112 callers=0 calls=0
*/
void sub_580d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580d50ULL || rel >= 0x580dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580dc0 size=320 callers=0 calls=2
   calls: SiCore_String_11, sub_4c4700
*/
void sub_580dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580dc0ULL || rel >= 0x580f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00580f00 size=352 callers=0 calls=2
   calls: SiCore_String_12, sub_4c42b0
*/
void sub_580f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x580f00ULL || rel >= 0x581060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581060 size=368 callers=0 calls=2
   calls: SiCore_String_11, sub_4c4700
*/
void sub_581060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581060ULL || rel >= 0x5811d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005811d0 size=320 callers=0 calls=2
   calls: SiCore_String_12, sub_4c42b0
*/
void sub_5811d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5811d0ULL || rel >= 0x581310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581310 size=336 callers=0 calls=2
   calls: SiCore_String_11, sub_4c4700
*/
void sub_581310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581310ULL || rel >= 0x581460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581460 size=416 callers=0 calls=4
   calls: SiCore_String_12, SiCore_String_9, sub_4bf7b0, sub_4c42b0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_MemoryStream_Impl.cpp
*/
void SiIO_MemoryStream_Impl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581460ULL || rel >= 0x581600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581600 size=272 callers=0 calls=2
   calls: sub_4c4700, sub_4c5b50
*/
void sub_581600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581600ULL || rel >= 0x581710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581710 size=272 callers=0 calls=2
   calls: sub_4c42b0, sub_4c5c60
*/
void sub_581710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581710ULL || rel >= 0x581820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581820 size=192 callers=0 calls=0
*/
void sub_581820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581820ULL || rel >= 0x5818e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005818e0 size=240 callers=0 calls=0
*/
void sub_5818e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5818e0ULL || rel >= 0x5819d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005819d0 size=96 callers=0 calls=0
*/
void sub_5819d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5819d0ULL || rel >= 0x581a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581a30 size=80 callers=0 calls=0
*/
void sub_581a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581a30ULL || rel >= 0x581a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581a80 size=112 callers=0 calls=0
*/
void sub_581a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581a80ULL || rel >= 0x581af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581af0 size=16 callers=0 calls=0
*/
void sub_581af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581af0ULL || rel >= 0x581b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581b00 size=112 callers=0 calls=0
*/
void sub_581b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581b00ULL || rel >= 0x581b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581b70 size=112 callers=0 calls=0
*/
void sub_581b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581b70ULL || rel >= 0x581be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581be0 size=144 callers=0 calls=0
*/
void sub_581be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581be0ULL || rel >= 0x581c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581c70 size=80 callers=0 calls=0
*/
void sub_581c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581c70ULL || rel >= 0x581cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581cc0 size=112 callers=0 calls=0
*/
void sub_581cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581cc0ULL || rel >= 0x581d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581d30 size=112 callers=0 calls=0
*/
void sub_581d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581d30ULL || rel >= 0x581da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581da0 size=144 callers=0 calls=0
*/
void sub_581da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581da0ULL || rel >= 0x581e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581e30 size=128 callers=0 calls=0
*/
void sub_581e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581e30ULL || rel >= 0x581eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581eb0 size=160 callers=0 calls=0
*/
void sub_581eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581eb0ULL || rel >= 0x581f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00581f50 size=192 callers=0 calls=1
   calls: sub_4c4290
*/
void sub_581f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x581f50ULL || rel >= 0x582010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582010 size=192 callers=0 calls=1
   calls: sub_4c45a0
*/
void sub_582010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582010ULL || rel >= 0x5820d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005820d0 size=192 callers=0 calls=1
   calls: sub_4c4290
*/
void sub_5820d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5820d0ULL || rel >= 0x582190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582190 size=192 callers=0 calls=1
   calls: sub_4c45a0
*/
void sub_582190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582190ULL || rel >= 0x582250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582250 size=384 callers=0 calls=5
   calls: sub_4bf7b0, sub_4c4290, sub_4c5170, sub_4c51e0, sub_4c5480
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_MemoryStream_Impl.cpp
*/
void SiIO_MemoryStream_Impl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582250ULL || rel >= 0x5823d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005823d0 size=384 callers=0 calls=5
   calls: sub_4bf7b0, sub_4c45a0, sub_4c4e80, sub_4c5170, sub_4c5480
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_MemoryStream_Impl.cpp
*/
void SiIO_MemoryStream_Impl_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5823d0ULL || rel >= 0x582550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582550 size=336 callers=0 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c5b30
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582550ULL || rel >= 0x5826a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005826a0 size=336 callers=0 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c5b70
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_141(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5826a0ULL || rel >= 0x5827f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005827f0 size=256 callers=0 calls=0
*/
void sub_5827f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5827f0ULL || rel >= 0x5828f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 005828f0 size=272 callers=0 calls=0
*/
void sub_5828f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x5828f0ULL || rel >= 0x582a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582a00 size=160 callers=0 calls=0
*/
void sub_582a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582a00ULL || rel >= 0x582aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582aa0 size=160 callers=0 calls=0
*/
void sub_582aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582aa0ULL || rel >= 0x582b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00582b40 size=16 callers=0 calls=0
*/
void sub_582b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x582b40ULL || rel >= 0x582b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

