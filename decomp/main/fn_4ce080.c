/* main functions 004ce080..004e8750 (29 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 004ce080 size=304 callers=0 calls=7
   calls: SiCore_Array_50, SiCore_String_58, SiGfx_NX_Manager_Impl, sub_4c5930, sub_4ed060, sub_596640, sub_596680
*/
void sub_4ce080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce080ULL || rel >= 0x4ce1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce1b0 size=16 callers=0 calls=0
*/
void sub_4ce1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce1b0ULL || rel >= 0x4ce1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce1c0 size=80 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_4ce1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce1c0ULL || rel >= 0x4ce210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce210 size=240 callers=0 calls=2
   calls: sub_596640, sub_596680
*/
void sub_4ce210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce210ULL || rel >= 0x4ce300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce300 size=16 callers=0 calls=0
*/
void sub_4ce300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce300ULL || rel >= 0x4ce310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce310 size=16 callers=0 calls=0
*/
void sub_4ce310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce310ULL || rel >= 0x4ce320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce320 size=16 callers=0 calls=0
*/
void sub_4ce320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce320ULL || rel >= 0x4ce330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce330 size=16 callers=0 calls=0
*/
void sub_4ce330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce330ULL || rel >= 0x4ce340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce340 size=16 callers=0 calls=0
*/
void sub_4ce340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce340ULL || rel >= 0x4ce350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce350 size=16 callers=0 calls=0
*/
void sub_4ce350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce350ULL || rel >= 0x4ce360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce360 size=16 callers=0 calls=0
*/
void sub_4ce360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce360ULL || rel >= 0x4ce370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce370 size=16 callers=0 calls=0
*/
void sub_4ce370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce370ULL || rel >= 0x4ce380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce380 size=16 callers=0 calls=0
*/
void sub_4ce380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce380ULL || rel >= 0x4ce390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce390 size=16 callers=0 calls=0
*/
void sub_4ce390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce390ULL || rel >= 0x4ce3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce3a0 size=16 callers=0 calls=0
*/
void sub_4ce3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce3a0ULL || rel >= 0x4ce3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce3b0 size=16 callers=0 calls=0
*/
void sub_4ce3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce3b0ULL || rel >= 0x4ce3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce3c0 size=16 callers=0 calls=0
*/
void sub_4ce3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce3c0ULL || rel >= 0x4ce3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce3d0 size=16 callers=0 calls=0
*/
void sub_4ce3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce3d0ULL || rel >= 0x4ce3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce3e0 size=400 callers=0 calls=5
   calls: SiCore_String_11, sub_4bc640, sub_4bc690, sub_4c45c0, sub_4c8020
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: /../shadercache
*/
void shadercache_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce3e0ULL || rel >= 0x4ce570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce570 size=16 callers=0 calls=0
*/
void sub_4ce570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce570ULL || rel >= 0x4ce580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce580 size=16 callers=0 calls=0
*/
void sub_4ce580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce580ULL || rel >= 0x4ce590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce590 size=16 callers=0 calls=0
*/
void sub_4ce590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce590ULL || rel >= 0x4ce5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce5a0 size=16 callers=0 calls=0
*/
void sub_4ce5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce5a0ULL || rel >= 0x4ce5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce5b0 size=352 callers=0 calls=4
   calls: SiCore_String_44, sub_4bc640, sub_4bc690, sub_4c8020
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce5b0ULL || rel >= 0x4ce710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce710 size=16 callers=0 calls=0
*/
void sub_4ce710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce710ULL || rel >= 0x4ce720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce720 size=176 callers=0 calls=1
   calls: SiCore_Array_52
*/
void sub_4ce720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce720ULL || rel >= 0x4ce7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce7d0 size=224 callers=0 calls=0
*/
void sub_4ce7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce7d0ULL || rel >= 0x4ce8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce8b0 size=144 callers=0 calls=0
*/
void sub_4ce8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce8b0ULL || rel >= 0x4ce940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce940 size=144 callers=0 calls=0
*/
void sub_4ce940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce940ULL || rel >= 0x4ce9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ce9d0 size=224 callers=5 calls=5
   calls: SiCore_Array_51, sub_4ee850, sub_4ee860, sub_596640, sub_596680
*/
void sub_4ce9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ce9d0ULL || rel >= 0x4ceab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ceab0 size=304 callers=1 calls=3
   calls: sub_4ee850, sub_596640, sub_596680
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: iIndex < m_itemCount
   ref: RemoveByIndexNonStable
*/
void RemoveByIndexNonStable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ceab0ULL || rel >= 0x4cebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cebe0 size=32 callers=0 calls=0
*/
void sub_4cebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cebe0ULL || rel >= 0x4cec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cec00 size=880 callers=1 calls=12
   calls: sub_4bc640, sub_4bc690, sub_4bf660, sub_4bf7b0, sub_4c34a0, sub_4c45c0, sub_4caea0, sub_4cb410, sub_4cb420, sub_4cb770, sub_4cb7b0, sub_4cf8b0
   ref: SI_GUID
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Object.h
   ref: SiGfxShaderGraphObject
   ref: SiStringT
   ref: DisplayName
*/
void SiGfxShaderGraphObject(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cec00ULL || rel >= 0x4cef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cef70 size=352 callers=1 calls=6
   calls: sub_4bf7b0, sub_4c34a0, sub_4caea0, sub_4cb410, sub_4cb770, sub_4cf8b0
   ref: SI_POD_TYPE
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_POD.h
   ref: SiGfxShaderGraphDataTypePOD
   ref: PODType
*/
void SiGfxShaderGraphDataTypePOD(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cef70ULL || rel >= 0x4cf0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf0d0 size=320 callers=1 calls=6
   calls: sub_4bf7b0, sub_4c34a0, sub_4caea0, sub_4cb410, sub_4cb770, sub_4cf8b0
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Struct.h
   ref: SiGfxShaderGraphDataTypeStruct
   ref: SiGfxShaderGraphDataType*
   ref: Members
*/
void SiGfxShaderGraphDataTypeStruct(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf0d0ULL || rel >= 0x4cf210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf210 size=496 callers=1 calls=6
   calls: sub_4bf7b0, sub_4c34a0, sub_4caea0, sub_4cb410, sub_4cb770, sub_4cf8b0
   ref: SI_POD_TYPE
   ref: SI_INT
   ref: SiGfxShaderGraphDataTypeVector
   ref: VectorDimension
   ref: VectorPODType
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Vector.h
*/
void SiGfxShaderGraphDataTypeVector(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf210ULL || rel >= 0x4cf400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf400 size=432 callers=1 calls=6
   calls: sub_4bf7b0, sub_4c34a0, sub_4caea0, sub_4cb410, sub_4cb770, sub_4cf8b0
   ref: SI_BOOL
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Node.h
   ref: UIExpanded
   ref: UIPosition
   ref: SiMathVector3Df
   ref: SiGfxShaderGraphNode
*/
void SiGfxShaderGraphNode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf400ULL || rel >= 0x4cf5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf5b0 size=240 callers=0 calls=2
   calls: sub_596640, sub_596680
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_46(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf5b0ULL || rel >= 0x4cf6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf6a0 size=16 callers=0 calls=0
*/
void sub_4cf6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf6a0ULL || rel >= 0x4cf6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf6b0 size=32 callers=0 calls=0
*/
void sub_4cf6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf6b0ULL || rel >= 0x4cf6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf6d0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_Kernel_Impl.h
*/
void SiGfx_Kernel_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf6d0ULL || rel >= 0x4cf750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf750 size=16 callers=0 calls=0
*/
void sub_4cf750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf750ULL || rel >= 0x4cf760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf760 size=32 callers=0 calls=0
*/
void sub_4cf760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf760ULL || rel >= 0x4cf780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf780 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_4cf780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf780ULL || rel >= 0x4cf7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf7c0 size=32 callers=0 calls=0
*/
void sub_4cf7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf7c0ULL || rel >= 0x4cf7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf7e0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Reflection.h
*/
void SiCore_Reflection_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf7e0ULL || rel >= 0x4cf860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf860 size=16 callers=0 calls=0
*/
void sub_4cf860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf860ULL || rel >= 0x4cf870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf870 size=32 callers=0 calls=0
*/
void sub_4cf870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf870ULL || rel >= 0x4cf890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf890 size=32 callers=0 calls=0
*/
void sub_4cf890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf890ULL || rel >= 0x4cf8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf8b0 size=320 callers=9 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c34a0
*/
void sub_4cf8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf8b0ULL || rel >= 0x4cf9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cf9f0 size=112 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cf9f0ULL || rel >= 0x4cfa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfa60 size=224 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfa60ULL || rel >= 0x4cfb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfb40 size=16 callers=0 calls=0
*/
void sub_4cfb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfb40ULL || rel >= 0x4cfb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfb50 size=16 callers=0 calls=0
*/
void sub_4cfb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfb50ULL || rel >= 0x4cfb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfb60 size=16 callers=0 calls=0
*/
void sub_4cfb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfb60ULL || rel >= 0x4cfb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfb70 size=16 callers=0 calls=0
*/
void sub_4cfb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfb70ULL || rel >= 0x4cfb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfb80 size=16 callers=0 calls=0
*/
void sub_4cfb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfb80ULL || rel >= 0x4cfb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfb90 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfb90ULL || rel >= 0x4cfc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfc30 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfc30ULL || rel >= 0x4cfcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfcd0 size=176 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfcd0ULL || rel >= 0x4cfd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfd80 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfd80ULL || rel >= 0x4cfe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfe20 size=16 callers=0 calls=0
*/
void sub_4cfe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfe20ULL || rel >= 0x4cfe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfe30 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfe30ULL || rel >= 0x4cfed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfed0 size=16 callers=0 calls=0
*/
void sub_4cfed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfed0ULL || rel >= 0x4cfee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfee0 size=32 callers=0 calls=0
*/
void sub_4cfee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfee0ULL || rel >= 0x4cff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cff00 size=32 callers=0 calls=0
*/
void sub_4cff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cff00ULL || rel >= 0x4cff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cff20 size=16 callers=0 calls=0
*/
void sub_4cff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cff20ULL || rel >= 0x4cff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cff30 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cff30ULL || rel >= 0x4cffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cffd0 size=16 callers=0 calls=0
*/
void sub_4cffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cffd0ULL || rel >= 0x4cffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cffe0 size=16 callers=0 calls=0
*/
void sub_4cffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cffe0ULL || rel >= 0x4cfff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004cfff0 size=16 callers=0 calls=0
*/
void sub_4cfff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4cfff0ULL || rel >= 0x4d0000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0000 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0000ULL || rel >= 0x4d00a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d00a0 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d00a0ULL || rel >= 0x4d0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0140 size=176 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0140ULL || rel >= 0x4d01f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d01f0 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d01f0ULL || rel >= 0x4d0290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0290 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0290ULL || rel >= 0x4d0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0330 size=240 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0330ULL || rel >= 0x4d0420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0420 size=672 callers=19 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4c8020
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_44(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0420ULL || rel >= 0x4d06c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d06c0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_47(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d06c0ULL || rel >= 0x4d0720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0720 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0720ULL || rel >= 0x4d0780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0780 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_49(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0780ULL || rel >= 0x4d0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0810 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0810ULL || rel >= 0x4d09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d09b0 size=544 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_51(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d09b0ULL || rel >= 0x4d0bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0bd0 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_52(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0bd0ULL || rel >= 0x4d0d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0d70 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4d0d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0d70ULL || rel >= 0x4d0df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0df0 size=176 callers=1 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_4d0df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0df0ULL || rel >= 0x4d0ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d0ea0 size=384 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_53(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d0ea0ULL || rel >= 0x4d1020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1020 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_54(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1020ULL || rel >= 0x4d10a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d10a0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_55(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d10a0ULL || rel >= 0x4d1120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1120 size=48 callers=0 calls=1
   calls: SiCore_Array_53
*/
void sub_4d1120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1120ULL || rel >= 0x4d1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1150 size=96 callers=1 calls=1
   calls: SiGfx_ImageLoader_DDS
*/
void sub_4d1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1150ULL || rel >= 0x4d11b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d11b0 size=176 callers=0 calls=1
   calls: SiCore_Array_60
*/
void sub_4d11b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d11b0ULL || rel >= 0x4d1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1260 size=208 callers=0 calls=0
*/
void sub_4d1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1260ULL || rel >= 0x4d1330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1330 size=176 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_56(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1330ULL || rel >= 0x4d13e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d13e0 size=16 callers=0 calls=0
*/
void sub_4d13e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d13e0ULL || rel >= 0x4d13f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d13f0 size=48 callers=0 calls=0
*/
void sub_4d13f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d13f0ULL || rel >= 0x4d1420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1420 size=176 callers=0 calls=1
   calls: SiCore_Array_61
*/
void sub_4d1420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1420ULL || rel >= 0x4d14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d14d0 size=208 callers=0 calls=0
*/
void sub_4d14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d14d0ULL || rel >= 0x4d15a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d15a0 size=176 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_57(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d15a0ULL || rel >= 0x4d1650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1650 size=16 callers=0 calls=0
*/
void sub_4d1650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1650ULL || rel >= 0x4d1660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1660 size=48 callers=0 calls=0
*/
void sub_4d1660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1660ULL || rel >= 0x4d1690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1690 size=352 callers=0 calls=3
   calls: SiCore_String_11, sub_4bc640, sub_4bc690
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_45(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1690ULL || rel >= 0x4d17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d17f0 size=224 callers=0 calls=1
   calls: sub_582d80
*/
void sub_4d17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d17f0ULL || rel >= 0x4d18d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d18d0 size=160 callers=0 calls=0
*/
void sub_4d18d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d18d0ULL || rel >= 0x4d1970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1970 size=256 callers=0 calls=0
*/
void sub_4d1970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1970ULL || rel >= 0x4d1a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d1a70 size=1696 callers=0 calls=2
   calls: sub_4ed0c0, sub_4ed4f0
*/
void sub_4d1a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d1a70ULL || rel >= 0x4d2110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2110 size=368 callers=0 calls=1
   calls: sub_4d2280
*/
void sub_4d2110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2110ULL || rel >= 0x4d2280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2280 size=1008 callers=5 calls=2
   calls: sub_4ed0c0, sub_4ed4f0
*/
void sub_4d2280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2280ULL || rel >= 0x4d2670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2670 size=32 callers=0 calls=0
*/
void sub_4d2670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2670ULL || rel >= 0x4d2690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2690 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_ImageUtility_Impl.h
*/
void SiGfx_ImageUtility_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2690ULL || rel >= 0x4d2710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2710 size=16 callers=0 calls=0
*/
void sub_4d2710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2710ULL || rel >= 0x4d2720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2720 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2720ULL || rel >= 0x4d2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2780 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_59(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2780ULL || rel >= 0x4d27e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d27e0 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d27e0ULL || rel >= 0x4d2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2980 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_61(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2980ULL || rel >= 0x4d2b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2b20 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4d2b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2b20ULL || rel >= 0x4d2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2ba0 size=128 callers=1 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_4d2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2ba0ULL || rel >= 0x4d2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2c20 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_62(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2c20ULL || rel >= 0x4d2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2cf0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_63(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2cf0ULL || rel >= 0x4d2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2d70 size=224 callers=0 calls=1
   calls: sub_4bf6a0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2d70ULL || rel >= 0x4d2e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2e50 size=176 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_65(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2e50ULL || rel >= 0x4d2f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2f00 size=16 callers=0 calls=0
*/
void sub_4d2f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2f00ULL || rel >= 0x4d2f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2f10 size=16 callers=0 calls=0
*/
void sub_4d2f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2f10ULL || rel >= 0x4d2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2f20 size=16 callers=0 calls=0
*/
void sub_4d2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2f20ULL || rel >= 0x4d2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2f30 size=64 callers=0 calls=0
*/
void sub_4d2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2f30ULL || rel >= 0x4d2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2f70 size=32 callers=0 calls=0
*/
void sub_4d2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2f70ULL || rel >= 0x4d2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d2f90 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_DisplayUtility_Impl.h
*/
void SiGfx_DisplayUtility_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d2f90ULL || rel >= 0x4d3010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d3010 size=16 callers=0 calls=0
*/
void sub_4d3010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3010ULL || rel >= 0x4d3020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d3020 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_66(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3020ULL || rel >= 0x4d3080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d3080 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4d3080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3080ULL || rel >= 0x4d3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d3100 size=32 callers=1 calls=0
*/
void sub_4d3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3100ULL || rel >= 0x4d3120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d3120 size=32 callers=0 calls=0
*/
void sub_4d3120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3120ULL || rel >= 0x4d3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d3140 size=64 callers=0 calls=1
   calls: sub_4bf6a0
*/
void sub_4d3140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3140ULL || rel >= 0x4d3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d3180 size=16 callers=1 calls=0
*/
void sub_4d3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3180ULL || rel >= 0x4d3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d3190 size=2928 callers=0 calls=3
   calls: sub_4d3d00, sub_4d3e30, sub_4ed850
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_GeometryUtility_Impl.cpp
*/
void SiGfx_GeometryUtility_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3190ULL || rel >= 0x4d3d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d3d00 size=304 callers=31 calls=1
   calls: sub_4ed850
*/
void sub_4d3d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3d00ULL || rel >= 0x4d3e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d3e30 size=960 callers=10 calls=1
   calls: sub_4ed0c0
*/
void sub_4d3e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d3e30ULL || rel >= 0x4d41f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d41f0 size=2528 callers=0 calls=4
   calls: sub_4d3d00, sub_4d3e30, sub_4ed780, sub_4ed850
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_GeometryUtility_Impl.cpp
*/
void SiGfx_GeometryUtility_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d41f0ULL || rel >= 0x4d4bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d4bd0 size=2576 callers=0 calls=2
   calls: sub_4d3d00, sub_4d3e30
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_GeometryUtility_Impl.cpp
*/
void SiGfx_GeometryUtility_Impl_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d4bd0ULL || rel >= 0x4d55e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d55e0 size=3824 callers=0 calls=3
   calls: sub_4d3d00, sub_4d3e30, sub_4ed780
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_GeometryUtility_Impl.cpp
*/
void SiGfx_GeometryUtility_Impl_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d55e0ULL || rel >= 0x4d64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d64d0 size=2016 callers=0 calls=3
   calls: sub_4d3d00, sub_4d3e30, sub_4ed780
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_GeometryUtility_Impl.cpp
*/
void SiGfx_GeometryUtility_Impl_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d64d0ULL || rel >= 0x4d6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d6cb0 size=1664 callers=0 calls=3
   calls: sub_4d3d00, sub_4d3e30, sub_4ed780
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_GeometryUtility_Impl.cpp
*/
void SiGfx_GeometryUtility_Impl_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d6cb0ULL || rel >= 0x4d7330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7330 size=1824 callers=0 calls=3
   calls: sub_4d3d00, sub_4d3e30, sub_4ed780
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_GeometryUtility_Impl.cpp
*/
void SiGfx_GeometryUtility_Impl_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7330ULL || rel >= 0x4d7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d7a50 size=2064 callers=0 calls=3
   calls: sub_4d3d00, sub_4d3e30, sub_4ed780
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_GeometryUtility_Impl.cpp
*/
void SiGfx_GeometryUtility_Impl_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d7a50ULL || rel >= 0x4d8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8260 size=2576 callers=0 calls=2
   calls: sub_4d3d00, sub_4d3e30
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_GeometryUtility_Impl.cpp
*/
void SiGfx_GeometryUtility_Impl_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8260ULL || rel >= 0x4d8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d8c70 size=3248 callers=0 calls=3
   calls: sub_4d3d00, sub_4d3e30, sub_4ed780
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_GeometryUtility_Impl.cpp
*/
void SiGfx_GeometryUtility_Impl_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d8c70ULL || rel >= 0x4d9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d9920 size=32 callers=0 calls=0
*/
void sub_4d9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d9920ULL || rel >= 0x4d9940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d9940 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_GeometryUtility_Impl.h
*/
void SiGfx_GeometryUtility_Impl_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d9940ULL || rel >= 0x4d99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d99c0 size=16 callers=0 calls=0
*/
void sub_4d99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d99c0ULL || rel >= 0x4d99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d99d0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4d99d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d99d0ULL || rel >= 0x4d9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d9a50 size=400 callers=1 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_4d9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d9a50ULL || rel >= 0x4d9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d9be0 size=672 callers=1 calls=1
   calls: SiCore_Array_68
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_67(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d9be0ULL || rel >= 0x4d9e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004d9e80 size=848 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4d9e80ULL || rel >= 0x4da1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da1d0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_69(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da1d0ULL || rel >= 0x4da250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da250 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da250ULL || rel >= 0x4da2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da2d0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_71(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da2d0ULL || rel >= 0x4da350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da350 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_72(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da350ULL || rel >= 0x4da3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da3d0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_73(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da3d0ULL || rel >= 0x4da450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da450 size=48 callers=0 calls=1
   calls: SiCore_Array_67
*/
void sub_4da450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da450ULL || rel >= 0x4da480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da480 size=16 callers=1 calls=0
*/
void sub_4da480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da480ULL || rel >= 0x4da490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da490 size=48 callers=0 calls=2
   calls: sub_4da4c0, sub_4da8c0
*/
void sub_4da490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da490ULL || rel >= 0x4da4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da4c0 size=1024 callers=1 calls=4
   calls: SiCore_Array_80, SiGfx_ShaderGraph_DataType_Matrix, SiGfx_ShaderGraph_DataType_POD, SiGfx_ShaderGraph_DataType_Vector
*/
void sub_4da4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da4c0ULL || rel >= 0x4da8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004da8c0 size=624 callers=1 calls=6
   calls: SiCore_Array_81, SiGfx_ShaderGraph_IOSlotType, SiGfx_ShaderGraph_NodeType_Operator, sub_4c4700, sub_4dc1e0, sub_4dc290
*/
void sub_4da8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4da8c0ULL || rel >= 0x4dab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dab30 size=160 callers=0 calls=1
   calls: SiCore_Array_83
*/
void sub_4dab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dab30ULL || rel >= 0x4dabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dabd0 size=208 callers=0 calls=0
*/
void sub_4dabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dabd0ULL || rel >= 0x4daca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004daca0 size=176 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_74(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4daca0ULL || rel >= 0x4dad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dad50 size=16 callers=0 calls=0
*/
void sub_4dad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dad50ULL || rel >= 0x4dad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dad60 size=16 callers=0 calls=0
*/
void sub_4dad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dad60ULL || rel >= 0x4dad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dad70 size=816 callers=0 calls=0
*/
void sub_4dad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dad70ULL || rel >= 0x4db0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db0a0 size=176 callers=0 calls=1
   calls: SiCore_Array_82
*/
void sub_4db0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db0a0ULL || rel >= 0x4db150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db150 size=208 callers=0 calls=0
*/
void sub_4db150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db150ULL || rel >= 0x4db220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db220 size=320 callers=0 calls=0
*/
void sub_4db220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db220ULL || rel >= 0x4db360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db360 size=32 callers=0 calls=0
*/
void sub_4db360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db360ULL || rel >= 0x4db380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db380 size=128 callers=0 calls=0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_Utility_Impl.h
*/
void SiGfx_ShaderGraph_Utility_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db380ULL || rel >= 0x4db400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db400 size=16 callers=0 calls=0
*/
void sub_4db400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db400ULL || rel >= 0x4db410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db410 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_75(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db410ULL || rel >= 0x4db470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db470 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_76(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db470ULL || rel >= 0x4db4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db4d0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_77(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db4d0ULL || rel >= 0x4db530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db530 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db530ULL || rel >= 0x4db590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db590 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_79(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db590ULL || rel >= 0x4db5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db5f0 size=416 callers=18 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db5f0ULL || rel >= 0x4db790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db790 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_81(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db790ULL || rel >= 0x4db930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004db930 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_82(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4db930ULL || rel >= 0x4dbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dbad0 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_83(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dbad0ULL || rel >= 0x4dbc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dbc70 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4dbc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dbc70ULL || rel >= 0x4dbcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dbcf0 size=192 callers=1 calls=2
   calls: sub_4bc640, sub_4dc730
*/
void sub_4dbcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dbcf0ULL || rel >= 0x4dbdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dbdb0 size=512 callers=4 calls=1
   calls: SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_84(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dbdb0ULL || rel >= 0x4dbfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dbfb0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_85(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dbfb0ULL || rel >= 0x4dc030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc030 size=16 callers=0 calls=0
*/
void sub_4dc030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc030ULL || rel >= 0x4dc040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc040 size=16 callers=0 calls=0
*/
void sub_4dc040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc040ULL || rel >= 0x4dc050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc050 size=16 callers=0 calls=0
*/
void sub_4dc050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc050ULL || rel >= 0x4dc060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc060 size=16 callers=0 calls=0
*/
void sub_4dc060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc060ULL || rel >= 0x4dc070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc070 size=16 callers=0 calls=0
*/
void sub_4dc070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc070ULL || rel >= 0x4dc080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc080 size=16 callers=0 calls=0
*/
void sub_4dc080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc080ULL || rel >= 0x4dc090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc090 size=16 callers=0 calls=0
*/
void sub_4dc090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc090ULL || rel >= 0x4dc0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc0a0 size=16 callers=0 calls=0
*/
void sub_4dc0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc0a0ULL || rel >= 0x4dc0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc0b0 size=304 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_86(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc0b0ULL || rel >= 0x4dc1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc1e0 size=176 callers=2 calls=1
   calls: SiCore_Array_88
*/
void sub_4dc1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc1e0ULL || rel >= 0x4dc290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc290 size=176 callers=1 calls=1
   calls: SiCore_Array_88
*/
void sub_4dc290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc290ULL || rel >= 0x4dc340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc340 size=32 callers=0 calls=0
*/
void sub_4dc340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc340ULL || rel >= 0x4dc360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc360 size=128 callers=0 calls=0
   ref: ../../../../Include\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Object.h
*/
void SiGfx_ShaderGraph_Object_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc360ULL || rel >= 0x4dc3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc3e0 size=16 callers=0 calls=0
*/
void sub_4dc3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc3e0ULL || rel >= 0x4dc3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc3f0 size=16 callers=0 calls=0
*/
void sub_4dc3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc3f0ULL || rel >= 0x4dc400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc400 size=16 callers=0 calls=0
*/
void sub_4dc400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc400ULL || rel >= 0x4dc410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc410 size=16 callers=0 calls=0
*/
void sub_4dc410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc410ULL || rel >= 0x4dc420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc420 size=16 callers=0 calls=0
*/
void sub_4dc420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc420ULL || rel >= 0x4dc430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc430 size=16 callers=0 calls=0
*/
void sub_4dc430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc430ULL || rel >= 0x4dc440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc440 size=16 callers=0 calls=0
*/
void sub_4dc440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc440ULL || rel >= 0x4dc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc450 size=16 callers=0 calls=0
*/
void sub_4dc450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc450ULL || rel >= 0x4dc460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc460 size=16 callers=0 calls=0
*/
void sub_4dc460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc460ULL || rel >= 0x4dc470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc470 size=16 callers=0 calls=0
*/
void sub_4dc470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc470ULL || rel >= 0x4dc480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc480 size=16 callers=0 calls=0
*/
void sub_4dc480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc480ULL || rel >= 0x4dc490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc490 size=32 callers=0 calls=0
*/
void sub_4dc490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc490ULL || rel >= 0x4dc4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc4b0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_87(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc4b0ULL || rel >= 0x4dc510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc510 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc510ULL || rel >= 0x4dc6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc6b0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4dc6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc6b0ULL || rel >= 0x4dc730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc730 size=192 callers=6 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_4dc730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc730ULL || rel >= 0x4dc7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc7f0 size=256 callers=4 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_46(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc7f0ULL || rel >= 0x4dc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc8f0 size=16 callers=0 calls=0
*/
void sub_4dc8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc8f0ULL || rel >= 0x4dc900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc900 size=16 callers=0 calls=0
*/
void sub_4dc900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc900ULL || rel >= 0x4dc910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc910 size=16 callers=0 calls=0
*/
void sub_4dc910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc910ULL || rel >= 0x4dc920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc920 size=48 callers=0 calls=1
   calls: SiCore_String_46
*/
void sub_4dc920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc920ULL || rel >= 0x4dc950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc950 size=48 callers=0 calls=1
   calls: SiCore_String_46
*/
void sub_4dc950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc950ULL || rel >= 0x4dc980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc980 size=48 callers=0 calls=1
   calls: SiCore_String_46
*/
void sub_4dc980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc980ULL || rel >= 0x4dc9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc9b0 size=48 callers=0 calls=1
   calls: SiCore_String_46
*/
void sub_4dc9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc9b0ULL || rel >= 0x4dc9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dc9e0 size=48 callers=3 calls=1
   calls: sub_4c8f70
*/
void sub_4dc9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dc9e0ULL || rel >= 0x4dca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dca10 size=160 callers=14 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_47(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dca10ULL || rel >= 0x4dcab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcab0 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_4dcab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcab0ULL || rel >= 0x4dcaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcaf0 size=64 callers=0 calls=2
   calls: sub_4c3510, sub_4c4700
*/
void sub_4dcaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcaf0ULL || rel >= 0x4dcb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcb30 size=32 callers=0 calls=1
   calls: sub_4c4700
*/
void sub_4dcb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcb30ULL || rel >= 0x4dcb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcb50 size=16 callers=0 calls=0
*/
void sub_4dcb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcb50ULL || rel >= 0x4dcb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcb60 size=16 callers=0 calls=0
*/
void sub_4dcb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcb60ULL || rel >= 0x4dcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcb70 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4dcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcb70ULL || rel >= 0x4dcbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcbf0 size=288 callers=3 calls=2
   calls: sub_4bc640, sub_4dc730
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_IOSlotType.cpp
*/
void SiGfx_ShaderGraph_IOSlotType(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcbf0ULL || rel >= 0x4dcd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcd10 size=320 callers=4 calls=1
   calls: SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_89(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcd10ULL || rel >= 0x4dce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dce50 size=16 callers=0 calls=0
*/
void sub_4dce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dce50ULL || rel >= 0x4dce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dce60 size=16 callers=0 calls=0
*/
void sub_4dce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dce60ULL || rel >= 0x4dce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dce70 size=16 callers=0 calls=0
*/
void sub_4dce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dce70ULL || rel >= 0x4dce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dce80 size=48 callers=0 calls=1
   calls: SiCore_Array_89
*/
void sub_4dce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dce80ULL || rel >= 0x4dceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dceb0 size=48 callers=0 calls=1
   calls: SiCore_Array_89
*/
void sub_4dceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dceb0ULL || rel >= 0x4dcee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcee0 size=48 callers=0 calls=1
   calls: SiCore_Array_89
*/
void sub_4dcee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcee0ULL || rel >= 0x4dcf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcf10 size=48 callers=0 calls=1
   calls: SiCore_Array_89
*/
void sub_4dcf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcf10ULL || rel >= 0x4dcf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcf40 size=16 callers=0 calls=0
*/
void sub_4dcf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcf40ULL || rel >= 0x4dcf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dcf50 size=208 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dcf50ULL || rel >= 0x4dd020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd020 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4dd020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd020ULL || rel >= 0x4dd0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd0a0 size=176 callers=7 calls=2
   calls: sub_4dd4b0, sub_4dd6e0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_DataType_POD.cpp
*/
void SiGfx_ShaderGraph_DataType_POD(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd0a0ULL || rel >= 0x4dd150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd150 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4dd150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd150ULL || rel >= 0x4dd1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd1a0 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4dd1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd1a0ULL || rel >= 0x4dd1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd1f0 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4dd1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd1f0ULL || rel >= 0x4dd240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd240 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4dd240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd240ULL || rel >= 0x4dd290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd290 size=80 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4dd290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd290ULL || rel >= 0x4dd2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd2e0 size=96 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4dd2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd2e0ULL || rel >= 0x4dd340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd340 size=96 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4dd340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd340ULL || rel >= 0x4dd3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd3a0 size=96 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4dd3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd3a0ULL || rel >= 0x4dd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd400 size=16 callers=0 calls=0
*/
void sub_4dd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd400ULL || rel >= 0x4dd410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd410 size=16 callers=0 calls=0
*/
void sub_4dd410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd410ULL || rel >= 0x4dd420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd420 size=16 callers=0 calls=0
*/
void sub_4dd420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd420ULL || rel >= 0x4dd430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd430 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4dd430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd430ULL || rel >= 0x4dd4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd4b0 size=144 callers=3 calls=2
   calls: sub_4bc640, sub_4dc730
*/
void sub_4dd4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd4b0ULL || rel >= 0x4dd540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd540 size=304 callers=12 calls=1
   calls: SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_91(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd540ULL || rel >= 0x4dd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd670 size=16 callers=0 calls=0
*/
void sub_4dd670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd670ULL || rel >= 0x4dd680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd680 size=16 callers=0 calls=0
*/
void sub_4dd680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd680ULL || rel >= 0x4dd690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd690 size=16 callers=0 calls=0
*/
void sub_4dd690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd690ULL || rel >= 0x4dd6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd6a0 size=16 callers=0 calls=0
*/
void sub_4dd6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd6a0ULL || rel >= 0x4dd6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd6b0 size=16 callers=0 calls=0
*/
void sub_4dd6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd6b0ULL || rel >= 0x4dd6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd6c0 size=16 callers=0 calls=0
*/
void sub_4dd6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd6c0ULL || rel >= 0x4dd6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd6d0 size=16 callers=0 calls=0
*/
void sub_4dd6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd6d0ULL || rel >= 0x4dd6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd6e0 size=16 callers=3 calls=0
*/
void sub_4dd6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd6e0ULL || rel >= 0x4dd6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd6f0 size=176 callers=24 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_92(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd6f0ULL || rel >= 0x4dd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd7a0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4dd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd7a0ULL || rel >= 0x4dd820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd820 size=192 callers=1 calls=2
   calls: sub_4ddcf0, sub_4de030
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_DataValue_POD.cpp
*/
void SiGfx_ShaderGraph_DataValue_POD(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd820ULL || rel >= 0x4dd8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd8e0 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4dd8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd8e0ULL || rel >= 0x4dd930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd930 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4dd930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd930ULL || rel >= 0x4dd980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd980 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4dd980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd980ULL || rel >= 0x4dd9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dd9d0 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4dd9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dd9d0ULL || rel >= 0x4dda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dda20 size=80 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4dda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dda20ULL || rel >= 0x4dda70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dda70 size=96 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4dda70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dda70ULL || rel >= 0x4ddad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddad0 size=96 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4ddad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddad0ULL || rel >= 0x4ddb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddb30 size=96 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4ddb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddb30ULL || rel >= 0x4ddb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddb90 size=16 callers=0 calls=0
*/
void sub_4ddb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddb90ULL || rel >= 0x4ddba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddba0 size=16 callers=0 calls=0
*/
void sub_4ddba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddba0ULL || rel >= 0x4ddbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddbb0 size=192 callers=0 calls=2
   calls: sub_4ddcf0, sub_4de030
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_DataValue_POD.cpp
*/
void SiGfx_ShaderGraph_DataValue_POD_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddbb0ULL || rel >= 0x4ddc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddc70 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4ddc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddc70ULL || rel >= 0x4ddcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddcf0 size=160 callers=4 calls=2
   calls: sub_4bc640, sub_4dc730
*/
void sub_4ddcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddcf0ULL || rel >= 0x4ddd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddd90 size=304 callers=16 calls=1
   calls: SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_93(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddd90ULL || rel >= 0x4ddec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddec0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_94(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddec0ULL || rel >= 0x4ddf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddf40 size=16 callers=0 calls=0
*/
void sub_4ddf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddf40ULL || rel >= 0x4ddf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddf50 size=16 callers=0 calls=0
*/
void sub_4ddf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddf50ULL || rel >= 0x4ddf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddf60 size=16 callers=0 calls=0
*/
void sub_4ddf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddf60ULL || rel >= 0x4ddf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddf70 size=48 callers=0 calls=1
   calls: SiCore_Array_93
*/
void sub_4ddf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddf70ULL || rel >= 0x4ddfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddfa0 size=48 callers=0 calls=1
   calls: SiCore_Array_93
*/
void sub_4ddfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddfa0ULL || rel >= 0x4ddfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ddfd0 size=48 callers=0 calls=1
   calls: SiCore_Array_93
*/
void sub_4ddfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ddfd0ULL || rel >= 0x4de000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de000 size=48 callers=0 calls=1
   calls: SiCore_Array_93
*/
void sub_4de000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de000ULL || rel >= 0x4de030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de030 size=528 callers=4 calls=4
   calls: SiCore_Array_97, SiGfx_ShaderGraph_DataValue_POD, SiGfx_ShaderGraph_DataValue_Vector, sub_4dc9e0
*/
void sub_4de030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de030ULL || rel >= 0x4de240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de240 size=176 callers=24 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_95(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de240ULL || rel >= 0x4de2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de2f0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_96(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de2f0ULL || rel >= 0x4de350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de350 size=416 callers=3 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_97(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de350ULL || rel >= 0x4de4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de4f0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4de4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de4f0ULL || rel >= 0x4de570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de570 size=192 callers=1 calls=2
   calls: sub_4ddcf0, sub_4de030
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_DataValue_Vector.c
*/
void SiGfx_ShaderGraph_DataValue_Vector(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de570ULL || rel >= 0x4de630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de630 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4de630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de630ULL || rel >= 0x4de680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de680 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4de680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de680ULL || rel >= 0x4de6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de6d0 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4de6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de6d0ULL || rel >= 0x4de720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de720 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4de720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de720ULL || rel >= 0x4de770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de770 size=80 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4de770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de770ULL || rel >= 0x4de7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de7c0 size=96 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4de7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de7c0ULL || rel >= 0x4de820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de820 size=96 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4de820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de820ULL || rel >= 0x4de880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de880 size=96 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4de880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de880ULL || rel >= 0x4de8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de8e0 size=16 callers=0 calls=0
*/
void sub_4de8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de8e0ULL || rel >= 0x4de8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de8f0 size=16 callers=0 calls=0
*/
void sub_4de8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de8f0ULL || rel >= 0x4de900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de900 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4de900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de900ULL || rel >= 0x4de980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004de980 size=208 callers=1 calls=2
   calls: sub_4dd4b0, sub_4dd6e0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_DataType_Matrix.cp
*/
void SiGfx_ShaderGraph_DataType_Matrix(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4de980ULL || rel >= 0x4dea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dea50 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4dea50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dea50ULL || rel >= 0x4deaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004deaa0 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4deaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4deaa0ULL || rel >= 0x4deaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004deaf0 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4deaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4deaf0ULL || rel >= 0x4deb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004deb40 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4deb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4deb40ULL || rel >= 0x4deb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004deb90 size=80 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4deb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4deb90ULL || rel >= 0x4debe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004debe0 size=96 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4debe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4debe0ULL || rel >= 0x4dec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dec40 size=96 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4dec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dec40ULL || rel >= 0x4deca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004deca0 size=96 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4deca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4deca0ULL || rel >= 0x4ded00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ded00 size=16 callers=0 calls=0
*/
void sub_4ded00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ded00ULL || rel >= 0x4ded10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ded10 size=16 callers=0 calls=0
*/
void sub_4ded10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ded10ULL || rel >= 0x4ded20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ded20 size=16 callers=0 calls=0
*/
void sub_4ded20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ded20ULL || rel >= 0x4ded30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004ded30 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4ded30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4ded30ULL || rel >= 0x4dedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dedb0 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4dedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dedb0ULL || rel >= 0x4dee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dee00 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4dee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dee00ULL || rel >= 0x4dee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dee50 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4dee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dee50ULL || rel >= 0x4deea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004deea0 size=80 callers=0 calls=1
   calls: SiCore_Array_95
*/
void sub_4deea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4deea0ULL || rel >= 0x4deef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004deef0 size=80 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4deef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4deef0ULL || rel >= 0x4def40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004def40 size=96 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4def40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4def40ULL || rel >= 0x4defa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004defa0 size=96 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4defa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4defa0ULL || rel >= 0x4df000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df000 size=96 callers=0 calls=2
   calls: SiCore_Array_93, SiCore_Array_95
*/
void sub_4df000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df000ULL || rel >= 0x4df060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df060 size=16 callers=0 calls=0
*/
void sub_4df060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df060ULL || rel >= 0x4df070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df070 size=16 callers=0 calls=0
*/
void sub_4df070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df070ULL || rel >= 0x4df080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df080 size=192 callers=0 calls=2
   calls: sub_4ddcf0, sub_4de030
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_DataValue_Matrix.c
*/
void SiGfx_ShaderGraph_DataValue_Matrix(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df080ULL || rel >= 0x4df140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df140 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4df140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df140ULL || rel >= 0x4df1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df1c0 size=192 callers=1 calls=2
   calls: sub_4dd4b0, sub_4df530
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_DataType_Vector.cp
*/
void SiGfx_ShaderGraph_DataType_Vector(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df1c0ULL || rel >= 0x4df280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df280 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4df280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df280ULL || rel >= 0x4df2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df2d0 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4df2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df2d0ULL || rel >= 0x4df320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df320 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4df320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df320ULL || rel >= 0x4df370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df370 size=80 callers=0 calls=1
   calls: SiCore_Array_92
*/
void sub_4df370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df370ULL || rel >= 0x4df3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df3c0 size=80 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4df3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df3c0ULL || rel >= 0x4df410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df410 size=96 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4df410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df410ULL || rel >= 0x4df470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df470 size=96 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4df470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df470ULL || rel >= 0x4df4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df4d0 size=96 callers=0 calls=2
   calls: SiCore_Array_91, SiCore_Array_92
*/
void sub_4df4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df4d0ULL || rel >= 0x4df530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df530 size=976 callers=1 calls=3
   calls: SiCore_Array_80, SiGfx_ShaderGraph_DataType_POD, sub_4dd6e0
*/
void sub_4df530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df530ULL || rel >= 0x4df900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df900 size=16 callers=0 calls=0
*/
void sub_4df900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df900ULL || rel >= 0x4df910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df910 size=16 callers=0 calls=0
*/
void sub_4df910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df910ULL || rel >= 0x4df920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df920 size=16 callers=0 calls=0
*/
void sub_4df920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df920ULL || rel >= 0x4df930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df930 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4df930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df930ULL || rel >= 0x4df9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004df9b0 size=256 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4dbcf0
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_NodeType_Operator.
*/
void SiGfx_ShaderGraph_NodeType_Operator(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4df9b0ULL || rel >= 0x4dfab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dfab0 size=128 callers=0 calls=1
   calls: SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfab0ULL || rel >= 0x4dfb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dfb30 size=144 callers=0 calls=1
   calls: SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_49(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfb30ULL || rel >= 0x4dfbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dfbc0 size=144 callers=0 calls=1
   calls: SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfbc0ULL || rel >= 0x4dfc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dfc50 size=144 callers=0 calls=1
   calls: SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_51(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfc50ULL || rel >= 0x4dfce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dfce0 size=144 callers=0 calls=2
   calls: SiCore_Array_84, SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_52(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfce0ULL || rel >= 0x4dfd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dfd70 size=144 callers=0 calls=2
   calls: SiCore_Array_84, SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_53(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfd70ULL || rel >= 0x4dfe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dfe00 size=144 callers=0 calls=2
   calls: SiCore_Array_84, SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_54(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfe00ULL || rel >= 0x4dfe90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dfe90 size=144 callers=0 calls=2
   calls: SiCore_Array_84, SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_55(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dfe90ULL || rel >= 0x4dff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dff20 size=16 callers=0 calls=0
*/
void sub_4dff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dff20ULL || rel >= 0x4dff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dff30 size=16 callers=0 calls=0
*/
void sub_4dff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dff30ULL || rel >= 0x4dff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dff40 size=128 callers=0 calls=1
   calls: sub_4e0050
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_NodeType_Operator.
*/
void SiGfx_ShaderGraph_NodeType_Operator_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dff40ULL || rel >= 0x4dffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dffc0 size=16 callers=0 calls=0
*/
void sub_4dffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dffc0ULL || rel >= 0x4dffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004dffd0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4dffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4dffd0ULL || rel >= 0x4e0050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0050 size=80 callers=1 calls=1
   calls: sub_4e03f0
*/
void sub_4e0050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0050ULL || rel >= 0x4e00a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e00a0 size=80 callers=0 calls=1
   calls: SiCore_Array_100
*/
void sub_4e00a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e00a0ULL || rel >= 0x4e00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e00f0 size=80 callers=0 calls=1
   calls: SiCore_Array_100
*/
void sub_4e00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e00f0ULL || rel >= 0x4e0140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0140 size=80 callers=0 calls=1
   calls: SiCore_Array_100
*/
void sub_4e0140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0140ULL || rel >= 0x4e0190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0190 size=80 callers=0 calls=1
   calls: SiCore_Array_100
*/
void sub_4e0190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0190ULL || rel >= 0x4e01e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e01e0 size=80 callers=0 calls=2
   calls: SiCore_Array_100, SiCore_Array_98
*/
void sub_4e01e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e01e0ULL || rel >= 0x4e0230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0230 size=96 callers=0 calls=2
   calls: SiCore_Array_100, SiCore_Array_98
*/
void sub_4e0230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0230ULL || rel >= 0x4e0290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0290 size=96 callers=0 calls=2
   calls: SiCore_Array_100, SiCore_Array_98
*/
void sub_4e0290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0290ULL || rel >= 0x4e02f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e02f0 size=96 callers=0 calls=2
   calls: SiCore_Array_100, SiCore_Array_98
*/
void sub_4e02f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e02f0ULL || rel >= 0x4e0350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0350 size=16 callers=0 calls=0
*/
void sub_4e0350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0350ULL || rel >= 0x4e0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0360 size=16 callers=0 calls=0
*/
void sub_4e0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0360ULL || rel >= 0x4e0370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0370 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e0370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0370ULL || rel >= 0x4e03f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e03f0 size=224 callers=1 calls=2
   calls: sub_4bc640, sub_4dc730
*/
void sub_4e03f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e03f0ULL || rel >= 0x4e04d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e04d0 size=544 callers=8 calls=1
   calls: SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e04d0ULL || rel >= 0x4e06f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e06f0 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_99(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e06f0ULL || rel >= 0x4e0770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0770 size=16 callers=0 calls=0
*/
void sub_4e0770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0770ULL || rel >= 0x4e0780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0780 size=16 callers=0 calls=0
*/
void sub_4e0780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0780ULL || rel >= 0x4e0790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0790 size=16 callers=0 calls=0
*/
void sub_4e0790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0790ULL || rel >= 0x4e07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e07a0 size=48 callers=0 calls=1
   calls: SiCore_Array_98
*/
void sub_4e07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e07a0ULL || rel >= 0x4e07d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e07d0 size=48 callers=0 calls=1
   calls: SiCore_Array_98
*/
void sub_4e07d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e07d0ULL || rel >= 0x4e0800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0800 size=48 callers=0 calls=1
   calls: SiCore_Array_98
*/
void sub_4e0800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0800ULL || rel >= 0x4e0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0830 size=48 callers=0 calls=1
   calls: SiCore_Array_98
*/
void sub_4e0830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0830ULL || rel >= 0x4e0860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0860 size=192 callers=0 calls=1
   calls: sub_4dc9e0
*/
void sub_4e0860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0860ULL || rel >= 0x4e0920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0920 size=336 callers=8 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0920ULL || rel >= 0x4e0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0a70 size=320 callers=0 calls=2
   calls: SiCore_Array_102, SiGfx_ShaderGraph_IOSlot
*/
void sub_4e0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0a70ULL || rel >= 0x4e0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0bb0 size=320 callers=0 calls=2
   calls: SiCore_Array_102, SiGfx_ShaderGraph_IOSlot
*/
void sub_4e0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0bb0ULL || rel >= 0x4e0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0cf0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_101(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0cf0ULL || rel >= 0x4e0d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0d50 size=416 callers=6 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_102(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0d50ULL || rel >= 0x4e0ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0ef0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e0ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0ef0ULL || rel >= 0x4e0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e0f70 size=288 callers=3 calls=2
   calls: sub_4bc640, sub_4dc730
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_IOSlot.cpp
*/
void SiGfx_ShaderGraph_IOSlot(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e0f70ULL || rel >= 0x4e1090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1090 size=496 callers=4 calls=1
   calls: SiCore_String_47
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_103(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1090ULL || rel >= 0x4e1280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1280 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_104(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1280ULL || rel >= 0x4e1300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1300 size=16 callers=0 calls=0
*/
void sub_4e1300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1300ULL || rel >= 0x4e1310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1310 size=16 callers=0 calls=0
*/
void sub_4e1310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1310ULL || rel >= 0x4e1320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1320 size=16 callers=0 calls=0
*/
void sub_4e1320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1320ULL || rel >= 0x4e1330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1330 size=48 callers=0 calls=1
   calls: SiCore_Array_103
*/
void sub_4e1330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1330ULL || rel >= 0x4e1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1360 size=48 callers=0 calls=1
   calls: SiCore_Array_103
*/
void sub_4e1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1360ULL || rel >= 0x4e1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1390 size=48 callers=0 calls=1
   calls: SiCore_Array_103
*/
void sub_4e1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1390ULL || rel >= 0x4e13c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e13c0 size=48 callers=0 calls=1
   calls: SiCore_Array_103
*/
void sub_4e13c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e13c0ULL || rel >= 0x4e13f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e13f0 size=496 callers=0 calls=3
   calls: SiCore_Array_102, SiGfx_ShaderGraph_IOSlot, sub_4dc9e0
*/
void sub_4e13f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e13f0ULL || rel >= 0x4e15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e15e0 size=272 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_105(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e15e0ULL || rel >= 0x4e16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e16f0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_106(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e16f0ULL || rel >= 0x4e1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1750 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1750ULL || rel >= 0x4e17d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e17d0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e17d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e17d0ULL || rel >= 0x4e1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1850 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1850ULL || rel >= 0x4e18d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e18d0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e18d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e18d0ULL || rel >= 0x4e1950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1950 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e1950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1950ULL || rel >= 0x4e19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e19d0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e19d0ULL || rel >= 0x4e1a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1a50 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e1a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1a50ULL || rel >= 0x4e1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1ad0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1ad0ULL || rel >= 0x4e1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1b50 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1b50ULL || rel >= 0x4e1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1bd0 size=496 callers=1 calls=2
   calls: sub_4bc640, sub_4bf660
*/
void sub_4e1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1bd0ULL || rel >= 0x4e1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1dc0 size=384 callers=1 calls=4
   calls: SiCore_Array_108, SiCore_Array_114, SiCore_Array_117, sub_4e2120
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_107(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1dc0ULL || rel >= 0x4e1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e1f40 size=416 callers=1 calls=2
   calls: SiCore_Array_114, SiCore_Array_117
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_108(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e1f40ULL || rel >= 0x4e20e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e20e0 size=32 callers=0 calls=0
*/
void sub_4e20e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e20e0ULL || rel >= 0x4e2100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2100 size=32 callers=0 calls=0
*/
void sub_4e2100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2100ULL || rel >= 0x4e2120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2120 size=368 callers=1 calls=0
*/
void sub_4e2120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2120ULL || rel >= 0x4e2290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2290 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_109(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2290ULL || rel >= 0x4e2330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2330 size=160 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2330ULL || rel >= 0x4e23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e23d0 size=48 callers=0 calls=1
   calls: SiCore_Array_107
*/
void sub_4e23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e23d0ULL || rel >= 0x4e2400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2400 size=48 callers=1 calls=0
*/
void sub_4e2400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2400ULL || rel >= 0x4e2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2430 size=448 callers=1 calls=0
*/
void sub_4e2430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2430ULL || rel >= 0x4e25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e25f0 size=1600 callers=0 calls=0
*/
void sub_4e25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e25f0ULL || rel >= 0x4e2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2c30 size=32 callers=0 calls=0
*/
void sub_4e2c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2c30ULL || rel >= 0x4e2c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2c50 size=208 callers=0 calls=2
   calls: SiCore_Array_114, SiCore_Array_117
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_111(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2c50ULL || rel >= 0x4e2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2d20 size=16 callers=0 calls=0
*/
void sub_4e2d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2d20ULL || rel >= 0x4e2d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2d30 size=16 callers=0 calls=0
*/
void sub_4e2d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2d30ULL || rel >= 0x4e2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2d40 size=16 callers=0 calls=0
*/
void sub_4e2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2d40ULL || rel >= 0x4e2d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2d50 size=16 callers=0 calls=0
*/
void sub_4e2d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2d50ULL || rel >= 0x4e2d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2d60 size=16 callers=0 calls=0
*/
void sub_4e2d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2d60ULL || rel >= 0x4e2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2d70 size=16 callers=0 calls=0
*/
void sub_4e2d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2d70ULL || rel >= 0x4e2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2d80 size=16 callers=0 calls=0
*/
void sub_4e2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2d80ULL || rel >= 0x4e2d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2d90 size=32 callers=0 calls=0
*/
void sub_4e2d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2d90ULL || rel >= 0x4e2db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2db0 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_PerformanceUtility_Impl.h
*/
void SiGfx_PerformanceUtility_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2db0ULL || rel >= 0x4e2e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2e30 size=16 callers=0 calls=0
*/
void sub_4e2e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2e30ULL || rel >= 0x4e2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2e40 size=16 callers=0 calls=0
*/
void sub_4e2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2e40ULL || rel >= 0x4e2e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2e50 size=16 callers=0 calls=0
*/
void sub_4e2e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2e50ULL || rel >= 0x4e2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2e60 size=16 callers=0 calls=0
*/
void sub_4e2e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2e60ULL || rel >= 0x4e2e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2e70 size=16 callers=0 calls=0
*/
void sub_4e2e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2e70ULL || rel >= 0x4e2e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2e80 size=16 callers=0 calls=0
*/
void sub_4e2e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2e80ULL || rel >= 0x4e2e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2e90 size=16 callers=0 calls=0
*/
void sub_4e2e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2e90ULL || rel >= 0x4e2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2ea0 size=16 callers=0 calls=0
*/
void sub_4e2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2ea0ULL || rel >= 0x4e2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2eb0 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_112(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2eb0ULL || rel >= 0x4e2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2f40 size=144 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_113(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2f40ULL || rel >= 0x4e2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e2fd0 size=64 callers=0 calls=1
   calls: SiCore_Array_114
*/
void sub_4e2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e2fd0ULL || rel >= 0x4e3010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3010 size=64 callers=0 calls=1
   calls: SiCore_Array_117
*/
void sub_4e3010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3010ULL || rel >= 0x4e3050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3050 size=272 callers=7 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_114(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3050ULL || rel >= 0x4e3160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3160 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_115(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3160ULL || rel >= 0x4e31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e31e0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_116(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e31e0ULL || rel >= 0x4e3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3240 size=272 callers=6 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_117(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3240ULL || rel >= 0x4e3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3350 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3350ULL || rel >= 0x4e33d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e33d0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_119(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e33d0ULL || rel >= 0x4e3430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3430 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3430ULL || rel >= 0x4e35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e35d0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e35d0ULL || rel >= 0x4e3650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3650 size=384 callers=1 calls=3
   calls: sub_4bc640, sub_4bc690, sub_4bf660
*/
void sub_4e3650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3650ULL || rel >= 0x4e37d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e37d0 size=688 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_String_56(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e37d0ULL || rel >= 0x4e3a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3a80 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_121(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3a80ULL || rel >= 0x4e3b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3b00 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_122(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3b00ULL || rel >= 0x4e3b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3b80 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_123(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3b80ULL || rel >= 0x4e3c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3c00 size=48 callers=0 calls=1
   calls: SiCore_String_56
*/
void sub_4e3c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3c00ULL || rel >= 0x4e3c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3c30 size=16 callers=1 calls=0
*/
void sub_4e3c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3c30ULL || rel >= 0x4e3c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3c40 size=384 callers=0 calls=2
   calls: SiCore_Array_131, SiGfx_ShaderEffectPackage_Impl_3
*/
void sub_4e3c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3c40ULL || rel >= 0x4e3dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3dc0 size=272 callers=0 calls=0
*/
void sub_4e3dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3dc0ULL || rel >= 0x4e3ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3ed0 size=176 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_124(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3ed0ULL || rel >= 0x4e3f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e3f80 size=272 callers=0 calls=0
*/
void sub_4e3f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e3f80ULL || rel >= 0x4e4090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4090 size=16 callers=0 calls=0
*/
void sub_4e4090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4090ULL || rel >= 0x4e40a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e40a0 size=16 callers=0 calls=0
*/
void sub_4e40a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e40a0ULL || rel >= 0x4e40b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e40b0 size=112 callers=0 calls=0
*/
void sub_4e40b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e40b0ULL || rel >= 0x4e4120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4120 size=272 callers=0 calls=6
   calls: SiCore_LinkedList, sub_4c4700, sub_4c8020, sub_4c94c0, sub_4e4230, sub_4e4400
   ref: ../../../../Include\SiCore/SiCore_String.inl
*/
void SiCore_String_57(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4120ULL || rel >= 0x4e4230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4230 size=464 callers=3 calls=3
   calls: SiCore_String_11, sub_4bc640, sub_4bc690
*/
void sub_4e4230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4230ULL || rel >= 0x4e4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4400 size=2080 callers=9 calls=3
   calls: SiCore_String_11, sub_4bc640, sub_4bc690
*/
void sub_4e4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4400ULL || rel >= 0x4e4c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4c20 size=16 callers=0 calls=0
*/
void sub_4e4c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4c20ULL || rel >= 0x4e4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e4c30 size=2992 callers=0 calls=13
   calls: SiCore_String_11, sub_4bc640, sub_4bc690, sub_4c5520, sub_4c8020, sub_4e4230, sub_4e4400, sub_4e57e0, sub_4e59e0, sub_4e5a60, sub_57d030, sub_582d80
   ... +1 more
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: SSKK.ShaderVariationList
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: _NotFoundList
*/
void NotFoundList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e4c30ULL || rel >= 0x4e57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e57e0 size=512 callers=1 calls=2
   calls: SiCore_Array_133, sub_4e5d80
*/
void sub_4e57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e57e0ULL || rel >= 0x4e59e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e59e0 size=128 callers=2 calls=2
   calls: sub_4e59e0, sub_4e7e40
*/
void sub_4e59e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e59e0ULL || rel >= 0x4e5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e5a60 size=544 callers=1 calls=1
   calls: SiCore_String_11
*/
void sub_4e5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e5a60ULL || rel >= 0x4e5c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e5c80 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_125(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e5c80ULL || rel >= 0x4e5d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e5d00 size=128 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_126(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e5d00ULL || rel >= 0x4e5d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e5d80 size=464 callers=1 calls=0
*/
void sub_4e5d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e5d80ULL || rel >= 0x4e5f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e5f50 size=576 callers=0 calls=4
   calls: SiCore_Array_133, SiGfx_ShaderEffectVariationList_Impl, sub_4c5630, sub_57d030
   ref: SSKK.ShaderVariationList
*/
void SSKK_ShaderVariationList(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e5f50ULL || rel >= 0x4e6190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6190 size=80 callers=0 calls=0
*/
void sub_4e6190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6190ULL || rel >= 0x4e61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e61e0 size=16 callers=0 calls=0
*/
void sub_4e61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e61e0ULL || rel >= 0x4e61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e61f0 size=128 callers=0 calls=2
   calls: sub_4e8460, sub_4e8b20
   ref: C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_ShaderUtility_Impl.cpp
*/
void SiGfx_ShaderUtility_Impl(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e61f0ULL || rel >= 0x4e6270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6270 size=176 callers=0 calls=1
   calls: SiCore_Array_135
*/
void sub_4e6270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6270ULL || rel >= 0x4e6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6320 size=208 callers=0 calls=0
*/
void sub_4e6320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6320ULL || rel >= 0x4e63f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e63f0 size=176 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_127(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e63f0ULL || rel >= 0x4e64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e64a0 size=128 callers=0 calls=0
*/
void sub_4e64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e64a0ULL || rel >= 0x4e6520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6520 size=96 callers=0 calls=1
   calls: sub_4cbec0
*/
void sub_4e6520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6520ULL || rel >= 0x4e6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6580 size=96 callers=0 calls=1
   calls: sub_4cbec0
*/
void sub_4e6580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6580ULL || rel >= 0x4e65e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e65e0 size=1696 callers=1 calls=12
   calls: SiCore_LinkedList, SiCore_String_11, SiCore_String_59, Unknown_2, sub_4bc640, sub_4bc690, sub_4c4700, sub_4c8020, sub_4c94c0, sub_4cbf40, sub_4e4400, sub_582d80
   ref: SiGfx_NX_Common.mi_shader_pkg
   ref: SiGfx_Vulkan_Common.mi_shader_pkg
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: SiGfx_D3D12_Common.mi_shader_pkg
   ref: SiGfx_OGL_Common.mi_shader_pkg
   ref: SiGfx_D3D11_Common.mi_shader_pkg
   ref: %SISDK_V3%/SDK/Core/Shader/Bin
   ref: SiGfx_OGLES3_Common.mi_shader_pkg
*/
void SiCore_String_58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e65e0ULL || rel >= 0x4e6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e6c80 size=2560 callers=1 calls=12
   calls: SiCore_LinkedList, SiCore_String_11, SiCore_String_44, Unknown_2, sub_4bc640, sub_4bc690, sub_4c4700, sub_4c8020, sub_4c94c0, sub_4cbf40, sub_4e4400, sub_582d80
   ref: ../../../../Include\SiCore/SiCore_String.inl
   ref: SiGfx_D3D12_Common_Subdiv.mi_shader_pkg
   ref: SiGfx_PS4_Special.mi_shader_pkg
   ref: ../../../../Include\SiCore/SiCore_Array.h
   ref: SiGfx_NX_Special.mi_shader_pkg
   ref: SiGfx_PS4_Common_Subdiv.mi_shader_pkg
   ref: %SISDK_V3%/SDK/Core/Shader/Bin
   ref: SiGfx_D3D11_Common_Subdiv.mi_shader_pkg
*/
void SiCore_String_59(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e6c80ULL || rel >= 0x4e7680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7680 size=144 callers=1 calls=2
   calls: sub_4ea060, sub_56d100
*/
void sub_4e7680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7680ULL || rel >= 0x4e7710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7710 size=352 callers=0 calls=4
   calls: SiCore_String_44, sub_4c4700, sub_4c8020, sub_4eddf0
*/
void sub_4e7710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7710ULL || rel >= 0x4e7870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7870 size=32 callers=0 calls=0
*/
void sub_4e7870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7870ULL || rel >= 0x4e7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7890 size=128 callers=0 calls=0
   ref: ../../../../Libsrc/SiGfx/Source/SiGfx_ShaderUtility_Impl.h
*/
void SiGfx_ShaderUtility_Impl_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7890ULL || rel >= 0x4e7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7910 size=16 callers=0 calls=0
*/
void sub_4e7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7910ULL || rel >= 0x4e7920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7920 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7920ULL || rel >= 0x4e7980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7980 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_129(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7980ULL || rel >= 0x4e79e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e79e0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e79e0ULL || rel >= 0x4e7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7a40 size=416 callers=2 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_131(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7a40ULL || rel >= 0x4e7be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7be0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_132(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7be0ULL || rel >= 0x4e7c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7c40 size=416 callers=4 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_133(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7c40ULL || rel >= 0x4e7de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7de0 size=96 callers=0 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_134(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7de0ULL || rel >= 0x4e7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e7e40 size=1024 callers=1 calls=0
*/
void sub_4e7e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e7e40ULL || rel >= 0x4e8240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8240 size=416 callers=1 calls=0
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_135(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8240ULL || rel >= 0x4e83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e83e0 size=128 callers=0 calls=1
   calls: sub_4bc640
*/
void sub_4e83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e83e0ULL || rel >= 0x4e8460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8460 size=304 callers=1 calls=3
   calls: sub_4bc640, sub_4bf660, sub_596410
*/
void sub_4e8460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8460ULL || rel >= 0x4e8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8590 size=448 callers=1 calls=2
   calls: SiCore_Array_137, sub_596460
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_136(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8590ULL || rel >= 0x4e8750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 004e8750 size=384 callers=1 calls=1
   calls: SiCore_Array_142
   ref: ../../../../Include\SiCore/SiCore_Array.h
*/
void SiCore_Array_137(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x4e8750ULL || rel >= 0x4e88d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

