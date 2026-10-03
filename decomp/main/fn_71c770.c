/* main functions 0071c770..007509b0 (49 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0071c770 size=16 callers=0 calls=0
*/
void sub_71c770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c770ULL || rel >= 0x71c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c780 size=16 callers=0 calls=0
*/
void sub_71c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c780ULL || rel >= 0x71c790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c790 size=16 callers=0 calls=0
*/
void sub_71c790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c790ULL || rel >= 0x71c7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c7a0 size=112 callers=6 calls=2
   calls: gflnet3_common_2, gflnet3_common_3
*/
void sub_71c7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c7a0ULL || rel >= 0x71c810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c810 size=128 callers=17 calls=2
   calls: gflnet3_common_2, gflnet3_common_3
*/
void sub_71c810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c810ULL || rel >= 0x71c890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c890 size=80 callers=1 calls=2
   calls: gflnet3_common_2, gflnet3_common_3
*/
void sub_71c890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c890ULL || rel >= 0x71c8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c8e0 size=144 callers=0 calls=0
*/
void sub_71c8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c8e0ULL || rel >= 0x71c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071c970 size=144 callers=0 calls=3
   calls: sub_70da70, sub_70db70, sub_c70
*/
void sub_71c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71c970ULL || rel >= 0x71ca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ca00 size=112 callers=1 calls=2
   calls: sub_6fff70, sub_7209b0
*/
void sub_71ca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ca00ULL || rel >= 0x71ca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ca70 size=560 callers=1 calls=6
   calls: sub_6fffa0, sub_71cca0, sub_71cd40, sub_71ce80, sub_721570, sub_ce0
*/
void sub_71ca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ca70ULL || rel >= 0x71cca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071cca0 size=160 callers=3 calls=1
   calls: sub_ce0
*/
void sub_71cca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71cca0ULL || rel >= 0x71cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071cd40 size=320 callers=3 calls=1
   calls: sub_71d550
*/
void sub_71cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71cd40ULL || rel >= 0x71ce80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ce80 size=240 callers=1 calls=4
   calls: sub_71cd40, sub_7212a0, sub_8c0, sub_ce0
*/
void sub_71ce80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ce80ULL || rel >= 0x71cf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071cf70 size=48 callers=0 calls=1
   calls: sub_71ca70
*/
void sub_71cf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71cf70ULL || rel >= 0x71cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071cfa0 size=64 callers=0 calls=0
*/
void sub_71cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71cfa0ULL || rel >= 0x71cfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071cfe0 size=176 callers=0 calls=2
   calls: sub_721710, sub_721c50
*/
void sub_71cfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71cfe0ULL || rel >= 0x71d090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071d090 size=560 callers=0 calls=6
   calls: sub_6e2a10, sub_71d2c0, sub_721710, sub_721c50, sub_c70, sub_ce0
*/
void sub_71d090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71d090ULL || rel >= 0x71d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071d2c0 size=304 callers=2 calls=8
   calls: gflnet3_map, sub_70db70, sub_721d60, sub_721fd0, sub_7226f0, sub_722760, sub_c70, sub_ce0
*/
void sub_71d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71d2c0ULL || rel >= 0x71d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071d3f0 size=352 callers=0 calls=6
   calls: gflnet3_common_2, gflnet3_common_3, sub_71cca0, sub_71d550, sub_721710, sub_721c50
*/
void sub_71d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71d3f0ULL || rel >= 0x71d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071d550 size=320 callers=2 calls=4
   calls: sub_721570, sub_722790, sub_722a00, sub_ce0
*/
void sub_71d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71d550ULL || rel >= 0x71d690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071d690 size=128 callers=0 calls=2
   calls: gflnet3_common_2, gflnet3_common_3
*/
void sub_71d690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71d690ULL || rel >= 0x71d710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071d710 size=128 callers=0 calls=2
   calls: gflnet3_common_2, gflnet3_common_3
*/
void sub_71d710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71d710ULL || rel >= 0x71d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071d790 size=160 callers=0 calls=1
   calls: gflnet3_map
*/
void sub_71d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71d790ULL || rel >= 0x71d830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071d830 size=416 callers=5 calls=6
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_c70, sub_ce0
   ref: Protocol Buffer map usage error:
   ref: Unsupported
   ref: Call set methods to initialize MapKey.
   ref: MapKey::type MapKey is not initialized. 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71d830ULL || rel >= 0x71d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071d9d0 size=1568 callers=0 calls=29
   calls: gflnet3_map_10, gflnet3_map_11, gflnet3_map_12, gflnet3_map_13, gflnet3_map_14, gflnet3_map_15, gflnet3_map_16, gflnet3_map_17, gflnet3_map_2, gflnet3_map_3, gflnet3_map_4, gflnet3_map_5
   ... +17 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/map_field.c
   ref: Can't get here.
*/
void gflnet3_map_field(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71d9d0ULL || rel >= 0x71dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071dff0 size=416 callers=2 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapKey::GetStringValue
   ref: Call set methods to initialize MapKey.
   ref: MapKey::type MapKey is not initialized. 
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71dff0ULL || rel >= 0x71e190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071e190 size=416 callers=2 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapKey::GetInt64Value
   ref: Call set methods to initialize MapKey.
   ref: MapKey::type MapKey is not initialized. 
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71e190ULL || rel >= 0x71e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071e330 size=416 callers=2 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapKey::GetInt32Value
   ref: Call set methods to initialize MapKey.
   ref: MapKey::type MapKey is not initialized. 
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71e330ULL || rel >= 0x71e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071e4d0 size=416 callers=2 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapKey::GetUInt64Value
   ref: Call set methods to initialize MapKey.
   ref: MapKey::type MapKey is not initialized. 
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71e4d0ULL || rel >= 0x71e670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071e670 size=416 callers=2 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapKey::GetUInt32Value
   ref: Call set methods to initialize MapKey.
   ref: MapKey::type MapKey is not initialized. 
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71e670ULL || rel >= 0x71e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071e810 size=416 callers=2 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: Call set methods to initialize MapKey.
   ref: MapKey::GetBoolValue
   ref: MapKey::type MapKey is not initialized. 
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71e810ULL || rel >= 0x71e9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071e9b0 size=400 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapValueRef::GetStringValue
   ref: MapValueRef::type MapValueRef is not initialized.
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71e9b0ULL || rel >= 0x71eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071eb40 size=400 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapValueRef::GetInt64Value
   ref: MapValueRef::type MapValueRef is not initialized.
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71eb40ULL || rel >= 0x71ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ecd0 size=400 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: MapValueRef::GetInt32Value
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapValueRef::type MapValueRef is not initialized.
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ecd0ULL || rel >= 0x71ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071ee60 size=400 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapValueRef::type MapValueRef is not initialized.
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
   ref: MapValueRef::GetUInt64Value
*/
void gflnet3_map_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71ee60ULL || rel >= 0x71eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071eff0 size=400 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: MapValueRef::GetUInt32Value
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapValueRef::type MapValueRef is not initialized.
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71eff0ULL || rel >= 0x71f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071f180 size=400 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapValueRef::GetBoolValue
   ref: MapValueRef::type MapValueRef is not initialized.
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71f180ULL || rel >= 0x71f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071f310 size=400 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapValueRef::GetDoubleValue
   ref: MapValueRef::type MapValueRef is not initialized.
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71f310ULL || rel >= 0x71f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071f4a0 size=400 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapValueRef::type MapValueRef is not initialized.
   ref:   Actual   : 
   ref: MapValueRef::GetFloatValue
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71f4a0ULL || rel >= 0x71f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071f630 size=400 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: Protocol Buffer map usage error:
   ref: MapValueRef::type MapValueRef is not initialized.
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
   ref: MapValueRef::GetEnumValue
*/
void gflnet3_map_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71f630ULL || rel >= 0x71f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071f7c0 size=400 callers=2 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref:   Expected : 
   ref: MapValueRef::GetMessageValue
   ref: Protocol Buffer map usage error:
   ref: MapValueRef::type MapValueRef is not initialized.
   ref:   Actual   : 
   ref:  type does not match
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71f7c0ULL || rel >= 0x71f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0071f950 size=2096 callers=0 calls=11
   calls: sub_6e2a10, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71cca0, sub_71cd40, sub_71d2c0, sub_721570, sub_c70, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/map_field.c
   ref: Can't get here.
*/
void gflnet3_map_field_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x71f950ULL || rel >= 0x720180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00720180 size=880 callers=0 calls=6
   calls: gflnet3_map_17, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_722bd0
   ref: Protocol Buffer map usage error:
   ref: MapValueRef::type MapValueRef is not initialized.
   ref: Call set methods to initialize MapKey.
   ref: MapKey::type MapKey is not initialized. 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x720180ULL || rel >= 0x7204f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007204f0 size=16 callers=0 calls=0
*/
void sub_7204f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7204f0ULL || rel >= 0x720500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00720500 size=96 callers=0 calls=0
*/
void sub_720500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x720500ULL || rel >= 0x720560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00720560 size=208 callers=0 calls=0
*/
void sub_720560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x720560ULL || rel >= 0x720630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00720630 size=112 callers=0 calls=0
*/
void sub_720630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x720630ULL || rel >= 0x7206a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007206a0 size=64 callers=0 calls=1
   calls: sub_c70
*/
void sub_7206a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7206a0ULL || rel >= 0x7206e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007206e0 size=16 callers=0 calls=0
*/
void sub_7206e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7206e0ULL || rel >= 0x7206f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007206f0 size=320 callers=0 calls=6
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_c70, sub_ce0
   ref: Protocol Buffer map usage error:
   ref: Call set methods to initialize MapKey.
   ref: MapKey::type MapKey is not initialized. 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7206f0ULL || rel >= 0x720830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00720830 size=96 callers=0 calls=1
   calls: sub_722bd0
*/
void sub_720830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x720830ULL || rel >= 0x720890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00720890 size=128 callers=0 calls=0
*/
void sub_720890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x720890ULL || rel >= 0x720910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00720910 size=160 callers=0 calls=1
   calls: sub_ce0
*/
void sub_720910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x720910ULL || rel >= 0x7209b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007209b0 size=336 callers=1 calls=5
   calls: sub_70da70, sub_70db70, sub_720b00, sub_860, sub_c70
*/
void sub_7209b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7209b0ULL || rel >= 0x720b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00720b00 size=272 callers=3 calls=0
*/
void sub_720b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x720b00ULL || rel >= 0x720c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00720c10 size=768 callers=0 calls=4
   calls: gflnet3_map_20, sub_70db70, sub_860, sub_8c0
*/
void sub_720c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x720c10ULL || rel >= 0x720f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00720f10 size=672 callers=9 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: Unsupported: type mismatch
   ref: Protocol Buffer map usage error:
   ref: Unsupported
   ref: Call set methods to initialize MapKey.
   ref: MapKey::type MapKey is not initialized. 
   ref: Can't get here.
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x720f10ULL || rel >= 0x7211b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007211b0 size=176 callers=0 calls=2
   calls: sub_8c0, sub_ce0
*/
void sub_7211b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7211b0ULL || rel >= 0x721260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00721260 size=64 callers=0 calls=1
   calls: sub_7212a0
*/
void sub_721260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x721260ULL || rel >= 0x7212a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007212a0 size=640 callers=2 calls=4
   calls: sub_6f9720, sub_721520, sub_8c0, sub_ce0
*/
void sub_7212a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7212a0ULL || rel >= 0x721520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00721520 size=80 callers=6 calls=1
   calls: sub_721520
*/
void sub_721520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x721520ULL || rel >= 0x721570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00721570 size=416 callers=3 calls=1
   calls: sub_721710
*/
void sub_721570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x721570ULL || rel >= 0x721710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00721710 size=256 callers=8 calls=3
   calls: gflnet3_map_20, gflnet3_map_21, gflnet3_map_22
*/
void sub_721710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x721710ULL || rel >= 0x721810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00721810 size=480 callers=5 calls=10
   calls: gflnet3_map_2, gflnet3_map_3, gflnet3_map_4, gflnet3_map_5, gflnet3_map_6, gflnet3_map_7, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: Protocol Buffer map usage error:
   ref: Unsupported
   ref: Call set methods to initialize MapKey.
   ref: MapKey::type MapKey is not initialized. 
   ref: Can't get here.
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x721810ULL || rel >= 0x7219f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007219f0 size=608 callers=5 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: Unsupported: type mismatch
   ref: Protocol Buffer map usage error:
   ref: Unsupported
   ref: Call set methods to initialize MapKey.
   ref: MapKey::type MapKey is not initialized. 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/map.h
*/
void gflnet3_map_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7219f0ULL || rel >= 0x721c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00721c50 size=272 callers=3 calls=2
   calls: gflnet3_map_20, gflnet3_map_21
*/
void sub_721c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x721c50ULL || rel >= 0x721d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00721d60 size=624 callers=1 calls=6
   calls: gflnet3_map, gflnet3_map_20, gflnet3_map_21, sub_70db70, sub_720b00, sub_860
*/
void sub_721d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x721d60ULL || rel >= 0x721fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00721fd0 size=400 callers=1 calls=6
   calls: gflnet3_map, sub_70db70, sub_721710, sub_722160, sub_722280, sub_860
*/
void sub_721fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x721fd0ULL || rel >= 0x722160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722160 size=288 callers=3 calls=2
   calls: sub_722480, sub_7225c0
*/
void sub_722160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722160ULL || rel >= 0x722280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722280 size=272 callers=1 calls=6
   calls: gflnet3_map_21, sub_70db70, sub_722160, sub_722390, sub_860, sub_8c0
*/
void sub_722280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722280ULL || rel >= 0x722390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722390 size=240 callers=1 calls=4
   calls: gflnet3_map_21, sub_721520, sub_722160, sub_8c0
*/
void sub_722390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722390ULL || rel >= 0x722480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722480 size=320 callers=1 calls=4
   calls: sub_70db70, sub_721520, sub_7225c0, sub_860
*/
void sub_722480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722480ULL || rel >= 0x7225c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007225c0 size=304 callers=4 calls=4
   calls: gflnet3_map_22, sub_6a54a0, sub_70db70, sub_860
*/
void sub_7225c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7225c0ULL || rel >= 0x7226f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007226f0 size=32 callers=1 calls=0
*/
void sub_7226f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7226f0ULL || rel >= 0x722710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722710 size=80 callers=0 calls=1
   calls: sub_ce0
*/
void sub_722710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722710ULL || rel >= 0x722760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722760 size=32 callers=1 calls=0
*/
void sub_722760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722760ULL || rel >= 0x722780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722780 size=16 callers=0 calls=0
*/
void sub_722780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722780ULL || rel >= 0x722790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722790 size=624 callers=1 calls=6
   calls: sub_6f9720, sub_721520, sub_721710, sub_722b80, sub_8c0, sub_ce0
*/
void sub_722790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722790ULL || rel >= 0x722a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722a00 size=384 callers=1 calls=2
   calls: sub_8c0, sub_ce0
*/
void sub_722a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722a00ULL || rel >= 0x722b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722b80 size=80 callers=2 calls=1
   calls: sub_722b80
*/
void sub_722b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722b80ULL || rel >= 0x722bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722bd0 size=416 callers=3 calls=1
   calls: sub_721710
*/
void sub_722bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722bd0ULL || rel >= 0x722d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722d70 size=224 callers=26 calls=1
   calls: sub_70db70
*/
void sub_722d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722d70ULL || rel >= 0x722e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722e50 size=32 callers=69 calls=0
*/
void sub_722e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722e50ULL || rel >= 0x722e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722e70 size=240 callers=1 calls=3
   calls: gflnet3_reflection_ops, sub_70e0c0, sub_ce0
*/
void sub_722e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722e70ULL || rel >= 0x722f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00722f60 size=208 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_722f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x722f60ULL || rel >= 0x723030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00723030 size=1872 callers=2 calls=7
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70e370, sub_ce0
   ref: CHECK failed: (&from) != (to): 
   ref: (merge 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/reflection_
   ref: CHECK failed: (to->GetDescriptor()) == (descriptor): 
   ref: Tried to merge messages of different types 
*/
void gflnet3_reflection_ops(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x723030ULL || rel >= 0x723780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00723780 size=496 callers=0 calls=1
   calls: sub_ce0
*/
void sub_723780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x723780ULL || rel >= 0x723970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00723970 size=368 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_723970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x723970ULL || rel >= 0x723ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00723ae0 size=656 callers=4 calls=5
   calls: sub_6f7360, sub_705c40, sub_723ae0, sub_723d70, sub_ce0
*/
void sub_723ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x723ae0ULL || rel >= 0x723d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00723d70 size=304 callers=2 calls=2
   calls: sub_6fe760, sub_ce0
*/
void sub_723d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x723d70ULL || rel >= 0x723ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00723ea0 size=336 callers=0 calls=0
*/
void sub_723ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x723ea0ULL || rel >= 0x723ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00723ff0 size=32 callers=41 calls=0
*/
void sub_723ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x723ff0ULL || rel >= 0x724010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724010 size=176 callers=1 calls=1
   calls: sub_7240c0
*/
void sub_724010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724010ULL || rel >= 0x7240c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007240c0 size=400 callers=3 calls=1
   calls: sub_ce0
*/
void sub_7240c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7240c0ULL || rel >= 0x724250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724250 size=96 callers=0 calls=0
*/
void sub_724250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724250ULL || rel >= 0x7242b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007242b0 size=80 callers=0 calls=0
*/
void sub_7242b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7242b0ULL || rel >= 0x724300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724300 size=160 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Can't get here.
*/
void gflnet3_extension_set(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724300ULL || rel >= 0x7243a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007243a0 size=80 callers=0 calls=0
*/
void sub_7243a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7243a0ULL || rel >= 0x7243f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007243f0 size=416 callers=5 calls=0
*/
void sub_7243f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7243f0ULL || rel >= 0x724590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724590 size=80 callers=0 calls=0
*/
void sub_724590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724590ULL || rel >= 0x7245e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007245e0 size=368 callers=0 calls=2
   calls: sub_6a54a0, sub_c70
*/
void sub_7245e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7245e0ULL || rel >= 0x724750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724750 size=336 callers=3 calls=2
   calls: sub_6a54a0, sub_c70
*/
void sub_724750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724750ULL || rel >= 0x7248a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007248a0 size=192 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7248a0ULL || rel >= 0x724960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724960 size=208 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724960ULL || rel >= 0x724a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724a30 size=528 callers=6 calls=5
   calls: sub_6a54a0, sub_6f67b0, sub_70da70, sub_70db70, sub_c70
*/
void sub_724a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724a30ULL || rel >= 0x724c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724c40 size=80 callers=0 calls=0
*/
void sub_724c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724c40ULL || rel >= 0x724c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724c90 size=368 callers=0 calls=2
   calls: sub_6a54a0, sub_c70
*/
void sub_724c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724c90ULL || rel >= 0x724e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724e00 size=192 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724e00ULL || rel >= 0x724ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724ec0 size=208 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724ec0ULL || rel >= 0x724f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00724f90 size=528 callers=5 calls=5
   calls: sub_6a54a0, sub_70da70, sub_70db70, sub_719900, sub_c70
*/
void sub_724f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x724f90ULL || rel >= 0x7251a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007251a0 size=80 callers=0 calls=0
*/
void sub_7251a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7251a0ULL || rel >= 0x7251f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007251f0 size=368 callers=0 calls=2
   calls: sub_6a54a0, sub_c70
*/
void sub_7251f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7251f0ULL || rel >= 0x725360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00725360 size=192 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x725360ULL || rel >= 0x725420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00725420 size=208 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x725420ULL || rel >= 0x7254f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007254f0 size=528 callers=4 calls=5
   calls: sub_6a54a0, sub_70da70, sub_70db70, sub_7193a0, sub_c70
*/
void sub_7254f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7254f0ULL || rel >= 0x725700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00725700 size=80 callers=0 calls=0
*/
void sub_725700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x725700ULL || rel >= 0x725750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00725750 size=368 callers=0 calls=2
   calls: sub_6a54a0, sub_c70
*/
void sub_725750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x725750ULL || rel >= 0x7258c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007258c0 size=192 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7258c0ULL || rel >= 0x725980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00725980 size=208 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x725980ULL || rel >= 0x725a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00725a50 size=528 callers=4 calls=5
   calls: sub_6a54a0, sub_70da70, sub_70db70, sub_719e60, sub_c70
*/
void sub_725a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x725a50ULL || rel >= 0x725c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00725c60 size=80 callers=0 calls=0
*/
void sub_725c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x725c60ULL || rel >= 0x725cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00725cb0 size=368 callers=0 calls=2
   calls: sub_6a54a0, sub_c70
*/
void sub_725cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x725cb0ULL || rel >= 0x725e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00725e20 size=192 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x725e20ULL || rel >= 0x725ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00725ee0 size=208 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x725ee0ULL || rel >= 0x725fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00725fb0 size=544 callers=2 calls=5
   calls: sub_6a54a0, sub_70da70, sub_70db70, sub_71a3d0, sub_c70
*/
void sub_725fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x725fb0ULL || rel >= 0x7261d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007261d0 size=80 callers=0 calls=0
*/
void sub_7261d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7261d0ULL || rel >= 0x726220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00726220 size=368 callers=0 calls=2
   calls: sub_6a54a0, sub_c70
*/
void sub_726220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x726220ULL || rel >= 0x726390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00726390 size=192 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x726390ULL || rel >= 0x726450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00726450 size=208 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x726450ULL || rel >= 0x726520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00726520 size=544 callers=2 calls=5
   calls: sub_6a54a0, sub_70da70, sub_70db70, sub_71a940, sub_c70
*/
void sub_726520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x726520ULL || rel >= 0x726740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00726740 size=96 callers=0 calls=0
*/
void sub_726740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x726740ULL || rel >= 0x7267a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007267a0 size=368 callers=0 calls=2
   calls: sub_6a54a0, sub_c70
*/
void sub_7267a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7267a0ULL || rel >= 0x726910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00726910 size=192 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x726910ULL || rel >= 0x7269d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007269d0 size=208 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7269d0ULL || rel >= 0x726aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00726aa0 size=544 callers=2 calls=5
   calls: sub_6a54a0, sub_70da70, sub_70db70, sub_71aea0, sub_c70
*/
void sub_726aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x726aa0ULL || rel >= 0x726cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00726cc0 size=1024 callers=3 calls=4
   calls: sub_6a54a0, sub_70da70, sub_70db70, sub_c70
*/
void sub_726cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x726cc0ULL || rel >= 0x7270c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007270c0 size=80 callers=0 calls=0
*/
void sub_7270c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7270c0ULL || rel >= 0x727110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00727110 size=368 callers=2 calls=2
   calls: sub_6a54a0, sub_c70
*/
void sub_727110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x727110ULL || rel >= 0x727280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00727280 size=192 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x727280ULL || rel >= 0x727340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00727340 size=208 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x727340ULL || rel >= 0x727410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00727410 size=528 callers=3 calls=5
   calls: sub_6a54a0, sub_6f67b0, sub_70da70, sub_70db70, sub_c70
*/
void sub_727410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x727410ULL || rel >= 0x727620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00727620 size=80 callers=1 calls=0
*/
void sub_727620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x727620ULL || rel >= 0x727670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00727670 size=432 callers=3 calls=4
   calls: sub_6a54a0, sub_70da70, sub_70db70, sub_c70
*/
void sub_727670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x727670ULL || rel >= 0x727820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00727820 size=192 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x727820ULL || rel >= 0x7278e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007278e0 size=192 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7278e0ULL || rel >= 0x7279a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007279a0 size=432 callers=2 calls=4
   calls: sub_6a54a0, sub_70da70, sub_70db70, sub_c70
*/
void sub_7279a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7279a0ULL || rel >= 0x727b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00727b50 size=448 callers=2 calls=2
   calls: sub_6a54a0, sub_c70
*/
void sub_727b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x727b50ULL || rel >= 0x727d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00727d10 size=656 callers=0 calls=3
   calls: sub_6a54a0, sub_70aa60, sub_c70
*/
void sub_727d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x727d10ULL || rel >= 0x727fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00727fa0 size=192 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x727fa0ULL || rel >= 0x728060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00728060 size=192 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x728060ULL || rel >= 0x728120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00728120 size=544 callers=2 calls=5
   calls: sub_6a54a0, sub_70da70, sub_70db70, sub_728340, sub_c70
*/
void sub_728120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x728120ULL || rel >= 0x728340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00728340 size=288 callers=4 calls=1
   calls: sub_722e50
*/
void sub_728340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x728340ULL || rel >= 0x728460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00728460 size=384 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x728460ULL || rel >= 0x7285e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007285e0 size=240 callers=1 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7285e0ULL || rel >= 0x7286d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007286d0 size=368 callers=0 calls=4
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Index out-of-bounds (field is empty).
   ref: CHECK failed: iter != extensions_.end(): 
*/
void gflnet3_extension_set_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7286d0ULL || rel >= 0x728840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00728840 size=128 callers=15 calls=1
   calls: sub_7243f0
*/
void sub_728840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x728840ULL || rel >= 0x7288c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007288c0 size=160 callers=8 calls=1
   calls: sub_728960
*/
void sub_7288c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7288c0ULL || rel >= 0x728960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00728960 size=3840 callers=9 calls=6
   calls: sub_6a54a0, sub_70da70, sub_70db70, sub_727670, sub_728340, sub_c70
*/
void sub_728960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x728960ULL || rel >= 0x729860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00729860 size=880 callers=1 calls=4
   calls: sub_7240c0, sub_7243f0, sub_728960, sub_72dc50
*/
void sub_729860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x729860ULL || rel >= 0x729bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00729bd0 size=1536 callers=1 calls=7
   calls: sub_6a54a0, sub_6f9720, sub_7240c0, sub_7243f0, sub_728960, sub_72dc50, sub_c70
*/
void sub_729bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x729bd0ULL || rel >= 0x72a1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072a1d0 size=368 callers=0 calls=0
*/
void sub_72a1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72a1d0ULL || rel >= 0x72a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072a340 size=304 callers=1 calls=5
   calls: gflnet3_extension_set_26, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: can't reach here.
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
*/
void gflnet3_extension_set_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72a340ULL || rel >= 0x72a470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072a470 size=7600 callers=1 calls=29
   calls: sub_6a54a0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70b510, sub_70b590, sub_70b5e0, sub_70b750, sub_70b820, sub_70bdc0, sub_70beb0
   ... +17 more
   ref: Non-primitive types can't be packed.
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
*/
void gflnet3_extension_set_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72a470ULL || rel >= 0x72c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072c220 size=16 callers=2 calls=0
*/
void sub_72c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72c220ULL || rel >= 0x72c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072c230 size=192 callers=8 calls=1
   calls: gflnet3_extension_set_27
*/
void sub_72c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72c230ULL || rel >= 0x72c2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072c2f0 size=3776 callers=1 calls=26
   calls: gflnet3_wire_format_lite, gflnet3_wire_format_lite_3, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70c960, sub_70ca60, sub_70cb60, sub_70cc80, sub_713690, sub_7137c0
   ... +14 more
   ref: Non-primitive types can't be packed.
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
*/
void gflnet3_extension_set_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72c2f0ULL || rel >= 0x72d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072d1b0 size=176 callers=12 calls=1
   calls: gflnet3_extension_set_28
*/
void sub_72d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72d1b0ULL || rel >= 0x72d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072d260 size=2528 callers=1 calls=6
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70d000, sub_70d040
   ref: Non-primitive types can't be packed.
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
*/
void gflnet3_extension_set_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72d260ULL || rel >= 0x72dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072dc40 size=16 callers=0 calls=0
*/
void sub_72dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72dc40ULL || rel >= 0x72dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072dc50 size=64 callers=4 calls=1
   calls: sub_72dc50
*/
void sub_72dc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72dc50ULL || rel >= 0x72dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072dc90 size=32 callers=0 calls=0
*/
void sub_72dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72dc90ULL || rel >= 0x72dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072dcb0 size=32 callers=0 calls=0
*/
void sub_72dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72dcb0ULL || rel >= 0x72dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072dcd0 size=32 callers=0 calls=0
*/
void sub_72dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72dcd0ULL || rel >= 0x72dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072dcf0 size=32 callers=0 calls=0
*/
void sub_72dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72dcf0ULL || rel >= 0x72dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072dd10 size=32 callers=0 calls=0
*/
void sub_72dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72dd10ULL || rel >= 0x72dd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072dd30 size=32 callers=0 calls=0
*/
void sub_72dd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72dd30ULL || rel >= 0x72dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072dd50 size=32 callers=0 calls=0
*/
void sub_72dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72dd50ULL || rel >= 0x72dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072dd70 size=128 callers=0 calls=1
   calls: sub_ce0
*/
void sub_72dd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72dd70ULL || rel >= 0x72ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072ddf0 size=128 callers=0 calls=0
*/
void sub_72ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72ddf0ULL || rel >= 0x72de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072de70 size=128 callers=1 calls=1
   calls: sub_6e1390
*/
void sub_72de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72de70ULL || rel >= 0x72def0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072def0 size=128 callers=1 calls=1
   calls: sub_6e1390
*/
void sub_72def0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72def0ULL || rel >= 0x72df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072df70 size=16 callers=0 calls=0
*/
void sub_72df70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72df70ULL || rel >= 0x72df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072df80 size=48 callers=0 calls=1
   calls: sub_717010
*/
void sub_72df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72df80ULL || rel >= 0x72dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072dfb0 size=208 callers=0 calls=3
   calls: sub_6fff50, sub_7007d0, sub_70e020
*/
void sub_72dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72dfb0ULL || rel >= 0x72e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072e080 size=48 callers=0 calls=0
*/
void sub_72e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72e080ULL || rel >= 0x72e0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072e0b0 size=3296 callers=0 calls=5
   calls: sub_6e3840, sub_70e740, sub_714f90, sub_71c890, sub_73e8b0
*/
void sub_72e0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72e0b0ULL || rel >= 0x72ed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0072ed90 size=5552 callers=2 calls=9
   calls: sub_6e3840, sub_6ffaf0, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50, sub_71c810, sub_73cb60, sub_ce0
   ref: Unimplemented type: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x72ed90ULL || rel >= 0x730340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00730340 size=5424 callers=2 calls=14
   calls: sub_6e28a0, sub_6ffaf0, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50, sub_731870, sub_731a40, sub_731c10, sub_731de0, sub_731fb0, sub_732180
   ... +2 more
   ref: Unimplemented type: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x730340ULL || rel >= 0x731870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00731870 size=464 callers=5 calls=0
*/
void sub_731870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x731870ULL || rel >= 0x731a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00731a40 size=464 callers=3 calls=0
*/
void sub_731a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x731a40ULL || rel >= 0x731c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00731c10 size=464 callers=3 calls=0
*/
void sub_731c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x731c10ULL || rel >= 0x731de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00731de0 size=464 callers=3 calls=0
*/
void sub_731de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x731de0ULL || rel >= 0x731fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00731fb0 size=464 callers=3 calls=0
*/
void sub_731fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x731fb0ULL || rel >= 0x732180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00732180 size=464 callers=3 calls=0
*/
void sub_732180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x732180ULL || rel >= 0x732350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00732350 size=464 callers=3 calls=0
*/
void sub_732350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x732350ULL || rel >= 0x732520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00732520 size=1072 callers=0 calls=8
   calls: gflnet3_generated_message_reflection, gflnet3_generated_message_reflection_2, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_729860
   ref: ").  Note that the exact same class is required; not just the same descriptor.
   ref: CHECK failed: (message1->GetReflection()) == (this): 
   ref: ") is not compatible with this reflection object (which is for type "
   ref: First argument to Swap() (of type "
   ref: Second argument to Swap() (of type "
   ref: CHECK failed: (message2->GetReflection()) == (this): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x732520ULL || rel >= 0x732950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00732950 size=880 callers=0 calls=12
   calls: gflnet3_generated_message_reflection, gflnet3_generated_message_reflection_2, sub_6a54a0, sub_6f7500, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_729bd0, sub_732cc0, sub_c70
   ref: ").  Note that the exact same class is required; not just the same descriptor.
   ref: CHECK failed: (message1->GetReflection()) == (this): 
   ref: Second argument to SwapFields() (of type "
   ref: ") is not compatible with this reflection object (which is for type "
   ref: First argument to SwapFields() (of type "
   ref: CHECK failed: (message2->GetReflection()) == (this): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x732950ULL || rel >= 0x732cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00732cc0 size=720 callers=1 calls=1
   calls: sub_733150
*/
void sub_732cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x732cc0ULL || rel >= 0x732f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00732f90 size=256 callers=0 calls=1
   calls: gflnet3_generated_message_reflection_5
   ref: HasField
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void HasField(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x732f90ULL || rel >= 0x733090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00733090 size=192 callers=130 calls=5
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: Protocol Buffer reflection usage error:
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x733090ULL || rel >= 0x733150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00733150 size=1824 callers=4 calls=0
*/
void sub_733150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x733150ULL || rel >= 0x733870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00733870 size=992 callers=0 calls=7
   calls: gflnet3_generated_message_reflection_5, sub_6e3840, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71c7a0
   ref: FieldSize
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: Can't get here.
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x733870ULL || rel >= 0x733c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00733c50 size=2528 callers=0 calls=5
   calls: gflnet3_generated_message_reflection_5, sub_6e3840, sub_71c810, sub_733150, sub_ce0
   ref: ClearField
   ref: Field does not match message type.
*/
void ClearField(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x733c50ULL || rel >= 0x734630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00734630 size=816 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, sub_6e3840, sub_71c810
   ref: Field is singular; the method requires a repeated field.
   ref: RemoveLast
   ref: Field does not match message type.
*/
void RemoveLast(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x734630ULL || rel >= 0x734960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00734960 size=672 callers=0 calls=7
   calls: gflnet3_extension_set_23, gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6e3840, sub_7178b0, sub_71c1c0, sub_71c810
   ref: ReleaseLast
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void ReleaseLast(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x734960ULL || rel >= 0x734c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00734c00 size=240 callers=58 calls=5
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: Protocol Buffer reflection usage error:
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x734c00ULL || rel >= 0x734cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00734cf0 size=928 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, sub_6e3840, sub_71c810
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void Field_does_not_match_message_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x734cf0ULL || rel >= 0x735090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00735090 size=640 callers=0 calls=4
   calls: sub_733150, sub_73de80, sub_c70, sub_ce0
*/
void sub_735090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x735090ULL || rel >= 0x735310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00735310 size=384 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: GetInt32
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void GetInt32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x735310ULL || rel >= 0x735490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00735490 size=256 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_731870
   ref: SetInt32
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void SetInt32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x735490ULL || rel >= 0x735590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00735590 size=400 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: GetRepeatedInt32
*/
void GetRepeatedInt32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x735590ULL || rel >= 0x735720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00735720 size=336 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: SetRepeatedInt32
   ref: Field does not match message type.
*/
void SetRepeatedInt32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x735720ULL || rel >= 0x735870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00735870 size=368 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6f67b0
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: AddInt32
*/
void AddInt32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x735870ULL || rel >= 0x7359e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007359e0 size=384 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: GetInt64
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void GetInt64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7359e0ULL || rel >= 0x735b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00735b60 size=256 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_731a40
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
   ref: SetInt64
*/
void SetInt64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x735b60ULL || rel >= 0x735c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00735c60 size=400 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: GetRepeatedInt64
*/
void GetRepeatedInt64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x735c60ULL || rel >= 0x735df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00735df0 size=336 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: SetRepeatedInt64
*/
void SetRepeatedInt64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x735df0ULL || rel >= 0x735f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00735f40 size=368 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_719900
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: AddInt64
*/
void AddInt64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x735f40ULL || rel >= 0x7360b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007360b0 size=384 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: GetUInt32
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void GetUInt32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7360b0ULL || rel >= 0x736230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00736230 size=256 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_731c10
   ref: SetUInt32
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void SetUInt32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x736230ULL || rel >= 0x736330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00736330 size=400 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: GetRepeatedUInt32
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void GetRepeatedUInt32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x736330ULL || rel >= 0x7364c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007364c0 size=336 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: SetRepeatedUInt32
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void SetRepeatedUInt32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7364c0ULL || rel >= 0x736610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00736610 size=368 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_7193a0
   ref: AddUInt32
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void AddUInt32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x736610ULL || rel >= 0x736780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00736780 size=384 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field does not match message type.
   ref: GetUInt64
   ref: Field is repeated; the method requires a singular field.
*/
void GetUInt64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x736780ULL || rel >= 0x736900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00736900 size=256 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_731de0
   ref: SetUInt64
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void SetUInt64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x736900ULL || rel >= 0x736a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00736a00 size=400 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: GetRepeatedUInt64
*/
void GetRepeatedUInt64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x736a00ULL || rel >= 0x736b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00736b90 size=336 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: SetRepeatedUInt64
*/
void SetRepeatedUInt64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x736b90ULL || rel >= 0x736ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00736ce0 size=368 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_719e60
   ref: AddUInt64
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void AddUInt64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x736ce0ULL || rel >= 0x736e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00736e50 size=384 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: GetFloat
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void GetFloat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x736e50ULL || rel >= 0x736fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00736fd0 size=272 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_731fb0
   ref: SetFloat
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void SetFloat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x736fd0ULL || rel >= 0x7370e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007370e0 size=400 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: GetRepeatedFloat
*/
void GetRepeatedFloat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7370e0ULL || rel >= 0x737270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00737270 size=336 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: SetRepeatedFloat
*/
void SetRepeatedFloat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x737270ULL || rel >= 0x7373c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007373c0 size=384 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_71a3d0
   ref: AddFloat
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void AddFloat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7373c0ULL || rel >= 0x737540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00737540 size=384 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: GetDouble
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void GetDouble(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x737540ULL || rel >= 0x7376c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007376c0 size=272 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_732180
   ref: Field does not match message type.
   ref: SetDouble
   ref: Field is repeated; the method requires a singular field.
*/
void SetDouble(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7376c0ULL || rel >= 0x7377d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007377d0 size=400 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: GetRepeatedDouble
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void GetRepeatedDouble(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7377d0ULL || rel >= 0x737960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00737960 size=336 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: SetRepeatedDouble
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void SetRepeatedDouble(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x737960ULL || rel >= 0x737ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00737ab0 size=384 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_71a940
   ref: Field is singular; the method requires a repeated field.
   ref: AddDouble
   ref: Field does not match message type.
*/
void AddDouble(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x737ab0ULL || rel >= 0x737c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00737c30 size=384 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
   ref: GetBool
*/
void GetBool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x737c30ULL || rel >= 0x737db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00737db0 size=272 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_732350
   ref: SetBool
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void SetBool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x737db0ULL || rel >= 0x737ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00737ec0 size=400 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: GetRepeatedBool
*/
void GetRepeatedBool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x737ec0ULL || rel >= 0x738050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00738050 size=352 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: SetRepeatedBool
   ref: Field does not match message type.
*/
void SetRepeatedBool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x738050ULL || rel >= 0x7381b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007381b0 size=368 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_71aea0
   ref: AddBool
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void AddBool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7381b0ULL || rel >= 0x738320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00738320 size=384 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_727620
   ref: GetString
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void GetString(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x738320ULL || rel >= 0x7384a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007384a0 size=384 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
   ref: GetStringReference
*/
void GetStringReference(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7384a0ULL || rel >= 0x738620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00738620 size=1152 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_727670
   ref: SetString
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void SetString(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x738620ULL || rel >= 0x738aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00738aa0 size=416 callers=0 calls=3
   calls: gflnet3_extension_set_18, gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: GetRepeatedString
   ref: Field does not match message type.
*/
void GetRepeatedString(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x738aa0ULL || rel >= 0x738c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00738c40 size=400 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: GetRepeatedStringReference
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void GetRepeatedStringReference(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x738c40ULL || rel >= 0x738dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00738dd0 size=336 callers=0 calls=3
   calls: gflnet3_extension_set_19, gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: SetRepeatedString
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void SetRepeatedString(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x738dd0ULL || rel >= 0x738f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00738f20 size=320 callers=0 calls=4
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6f66a0, sub_7279a0
   ref: AddString
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void AddString(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x738f20ULL || rel >= 0x739060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00739060 size=48 callers=0 calls=0
*/
void sub_739060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x739060ULL || rel >= 0x739090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00739090 size=384 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: GetEnumValue
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void GetEnumValue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x739090ULL || rel >= 0x739210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00739210 size=160 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_8, sub_727110, sub_731870
   ref: SetEnum
*/
void SetEnum(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x739210ULL || rel >= 0x7392b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007392b0 size=208 callers=3 calls=5
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: Protocol Buffer reflection usage error:
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7392b0ULL || rel >= 0x739380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00739380 size=400 callers=0 calls=11
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6e2c20, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50, sub_727110, sub_731870
   ref: SetEnumValue
   ref: Field does not match message type.
   ref:  unexpected for field 
   ref: SetEnumValue accepts only valid integer values: value 
   ref: Field is repeated; the method requires a singular field.
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x739380ULL || rel >= 0x739510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00739510 size=48 callers=0 calls=0
*/
void sub_739510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x739510ULL || rel >= 0x739540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00739540 size=400 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: GetRepeatedEnumValue
*/
void GetRepeatedEnumValue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x739540ULL || rel >= 0x7396d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007396d0 size=256 callers=0 calls=1
   calls: gflnet3_generated_message_reflection_8
   ref: SetRepeatedEnum
*/
void SetRepeatedEnum(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7396d0ULL || rel >= 0x7397d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007397d0 size=496 callers=0 calls=10
   calls: gflnet3_extension_set_17, gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6e2c20, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50
   ref: value 
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref:  unexpected for field 
   ref: SetRepeatedEnum
   ref: SetRepeatedEnumValue accepts only valid integer values: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7397d0ULL || rel >= 0x7399c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007399c0 size=288 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_8, sub_6f67b0
   ref: AddEnum
*/
void AddEnum(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7399c0ULL || rel >= 0x739ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00739ae0 size=512 callers=0 calls=11
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6e2c20, sub_6f67b0, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50, sub_727410
   ref: AddEnum
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref:  unexpected for field 
   ref: AddEnumValue accepts only valid integer values: value 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x739ae0ULL || rel >= 0x739ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00739ce0 size=512 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_73e100
   ref: Field does not match message type.
   ref: GetMessage
   ref: Field is repeated; the method requires a singular field.
*/
void GetMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x739ce0ULL || rel >= 0x739ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00739ee0 size=1120 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_73e1c0
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
   ref: MutableMessage
*/
void MutableMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x739ee0ULL || rel >= 0x73a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073a340 size=832 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7
   ref: SetAllocatedMessage
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
*/
void SetAllocatedMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73a340ULL || rel >= 0x73a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073a680 size=256 callers=0 calls=1
   calls: sub_7162c0
*/
void sub_73a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73a680ULL || rel >= 0x73a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073a780 size=560 callers=1 calls=3
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_73e2c0
   ref: Field does not match message type.
   ref: Field is repeated; the method requires a singular field.
   ref: ReleaseMessage
*/
void ReleaseMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73a780ULL || rel >= 0x73a9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073a9b0 size=160 callers=0 calls=1
   calls: ReleaseMessage
*/
void sub_73a9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73a9b0ULL || rel >= 0x73aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073aa50 size=752 callers=0 calls=5
   calls: gflnet3_extension_set_20, gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6e3840, sub_71c7a0
   ref: GetRepeatedMessage
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void GetRepeatedMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73aa50ULL || rel >= 0x73ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073ad40 size=512 callers=0 calls=5
   calls: gflnet3_extension_set_21, gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6e3840, sub_71c810
   ref: MutableRepeatedMessage
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
*/
void MutableRepeatedMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73ad40ULL || rel >= 0x73af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073af40 size=832 callers=0 calls=6
   calls: gflnet3_extension_set_heavy, gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6e3840, sub_71c810, sub_722e50
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: AddMessage
*/
void AddMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73af40ULL || rel >= 0x73b280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073b280 size=656 callers=0 calls=6
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6e3840, sub_7178c0, sub_7178d0, sub_71c810
   ref: Field is singular; the method requires a repeated field.
   ref: Field does not match message type.
   ref: AddAllocatedMessage
*/
void AddAllocatedMessage(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73b280ULL || rel >= 0x73b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073b510 size=512 callers=0 calls=10
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6e3840, sub_6e8450, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71c810, sub_726cc0
   ref: MutableRawRepeatedField
   ref: Field is singular; the method requires a repeated field.
   ref: subtype mismatch
   ref: CHECK failed: (field->options().ctype()) == (ctype): 
   ref: CHECK failed: (field->message_type()) == (desc): 
   ref: "MutableRawRepeatedField"
   ref: wrong submessage type
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73b510ULL || rel >= 0x73b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073b710 size=512 callers=0 calls=10
   calls: gflnet3_generated_message_reflection_5, gflnet3_generated_message_reflection_7, sub_6e3840, sub_6e8450, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_71c7a0, sub_726cc0
   ref: GetRawRepeatedField
   ref: Field is singular; the method requires a repeated field.
   ref: subtype mismatch
   ref: CHECK failed: (field->options().ctype()) == (ctype): 
   ref: CHECK failed: (field->message_type()) == (desc): 
   ref: wrong submessage type
   ref: "GetRawRepeatedField"
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73b710ULL || rel >= 0x73b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073b910 size=64 callers=0 calls=0
*/
void sub_73b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73b910ULL || rel >= 0x73b950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073b950 size=352 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, sub_6e3840
   ref: "LookupMapValue"
   ref: Field is not a map field.
*/
void LookupMapValue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73b950ULL || rel >= 0x73bab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073bab0 size=352 callers=0 calls=4
   calls: gflnet3_generated_message_reflection_5, sub_6e2a10, sub_6e3840, sub_ce0
   ref: "InsertOrLookupMapValue"
   ref: Field is not a map field.
*/
void InsertOrLookupMapValue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73bab0ULL || rel >= 0x73bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073bc10 size=240 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, sub_6e3840
   ref: "DeleteMapValue"
   ref: Field is not a map field.
*/
void DeleteMapValue(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73bc10ULL || rel >= 0x73bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073bd00 size=368 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, sub_6e3840, sub_717020
   ref: Field is not a map field.
   ref: "MapBegin"
*/
void MapBegin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73bd00ULL || rel >= 0x73be70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073be70 size=368 callers=0 calls=3
   calls: gflnet3_generated_message_reflection_5, sub_6e3840, sub_717020
   ref: "MapEnd"
   ref: Field is not a map field.
*/
void MapEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73be70ULL || rel >= 0x73bfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073bfe0 size=352 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, sub_6e3840
   ref: Field is not a map field.
   ref: "MapSize"
*/
void MapSize(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73bfe0ULL || rel >= 0x73c140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073c140 size=240 callers=0 calls=2
   calls: sub_6e21b0, sub_6e2450
*/
void sub_73c140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c140ULL || rel >= 0x73c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073c230 size=48 callers=0 calls=0
*/
void sub_73c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c230ULL || rel >= 0x73c260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073c260 size=32 callers=0 calls=0
*/
void sub_73c260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c260ULL || rel >= 0x73c280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073c280 size=16 callers=0 calls=0
*/
void sub_73c280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c280ULL || rel >= 0x73c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073c290 size=464 callers=0 calls=6
   calls: sub_6e8450, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_726cc0
   ref: the actual field type (for enums T should be the generated enum 
   ref: type or int32).
   ref: CHECK failed: field->cpp_type() == cpp_type || (field->cpp_type() == FieldDescriptor::CPPTYPE_ENUM &
   ref: CHECK failed: (message_type) == (field->message_type()): 
   ref: The type parameter T in RepeatedFieldRef<T> API doesn't match 
   ref: CHECK failed: field->is_repeated(): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_m
*/
void gflnet3_generated_message_reflection_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c290ULL || rel >= 0x73c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073c460 size=224 callers=0 calls=2
   calls: gflnet3_generated_message_reflection_5, sub_6e3840
   ref: "GetMapData"
   ref: Field is not a map field.
*/
void GetMapData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c460ULL || rel >= 0x73c540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073c540 size=224 callers=20 calls=3
   calls: sub_6e1390, sub_7171a0, sub_c70
*/
void sub_73c540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c540ULL || rel >= 0x73c620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073c620 size=192 callers=101 calls=3
   calls: sub_6e1390, sub_7171a0, sub_c70
*/
void sub_73c620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c620ULL || rel >= 0x73c6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073c6e0 size=64 callers=0 calls=0
*/
void sub_73c6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c6e0ULL || rel >= 0x73c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073c720 size=976 callers=0 calls=2
   calls: sub_6e28a0, sub_ce0
*/
void sub_73c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73c720ULL || rel >= 0x73caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073caf0 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_73caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73caf0ULL || rel >= 0x73cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073cb20 size=64 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_73cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73cb20ULL || rel >= 0x73cb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073cb60 size=128 callers=2 calls=1
   calls: sub_c70
*/
void sub_73cb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73cb60ULL || rel >= 0x73cbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073cbe0 size=368 callers=0 calls=2
   calls: sub_73cd50, sub_ce0
*/
void sub_73cbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73cbe0ULL || rel >= 0x73cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073cd50 size=272 callers=2 calls=3
   calls: sub_70b3e0, sub_722d70, sub_73ce60
*/
void sub_73cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73cd50ULL || rel >= 0x73ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073ce60 size=128 callers=1 calls=3
   calls: sub_70da70, sub_70db70, sub_c70
*/
void sub_73ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73ce60ULL || rel >= 0x73cee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073cee0 size=288 callers=0 calls=1
   calls: sub_73d000
*/
void sub_73cee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73cee0ULL || rel >= 0x73d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073d000 size=272 callers=2 calls=3
   calls: sub_7178b0, sub_71c1c0, sub_722d70
*/
void sub_73d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73d000ULL || rel >= 0x73d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073d110 size=1648 callers=2 calls=3
   calls: sub_73d110, sub_73d780, sub_73d980
*/
void sub_73d110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73d110ULL || rel >= 0x73d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073d780 size=512 callers=2 calls=0
*/
void sub_73d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73d780ULL || rel >= 0x73d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073d980 size=976 callers=2 calls=1
   calls: sub_73d780
*/
void sub_73d980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73d980ULL || rel >= 0x73dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073dd50 size=304 callers=0 calls=4
   calls: sub_7162c0, sub_7178b0, sub_71c1c0, sub_722e50
*/
void sub_73dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73dd50ULL || rel >= 0x73de80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073de80 size=640 callers=1 calls=4
   calls: gflnet3_extension_set, sub_6e24a0, sub_c70, sub_ce0
*/
void sub_73de80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73de80ULL || rel >= 0x73e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073e100 size=192 callers=1 calls=0
*/
void sub_73e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e100ULL || rel >= 0x73e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073e1c0 size=256 callers=1 calls=1
   calls: sub_724750
*/
void sub_73e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e1c0ULL || rel >= 0x73e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073e2c0 size=400 callers=1 calls=2
   calls: sub_6f9720, sub_ce0
*/
void sub_73e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e2c0ULL || rel >= 0x73e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073e450 size=400 callers=1 calls=9
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70da70, sub_70db70, sub_724750, sub_728340, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: CHECK failed: prototype != NULL: 
*/
void gflnet3_extension_set_heavy(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e450ULL || rel >= 0x73e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073e5e0 size=208 callers=0 calls=5
   calls: sub_70da70, sub_70db70, sub_724750, sub_728340, sub_c70
*/
void sub_73e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e5e0ULL || rel >= 0x73e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073e6b0 size=288 callers=0 calls=6
   calls: sub_6e24a0, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Extension factory's GetPrototype() returned NULL for extension: 
   ref: CHECK failed: output->message_prototype != NULL: 
*/
void gflnet3_extension_set_heavy_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e6b0ULL || rel >= 0x73e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073e7d0 size=32 callers=0 calls=1
   calls: sub_6e2c20
*/
void sub_73e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e7d0ULL || rel >= 0x73e7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073e7f0 size=192 callers=8 calls=2
   calls: gflnet3_extension_set_25, sub_72c220
*/
void sub_73e7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e7f0ULL || rel >= 0x73e8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073e8b0 size=160 callers=1 calls=1
   calls: sub_73e950
*/
void sub_73e8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e8b0ULL || rel >= 0x73e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073e950 size=736 callers=1 calls=1
   calls: sub_714f90
*/
void sub_73e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73e950ULL || rel >= 0x73ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073ec30 size=224 callers=8 calls=1
   calls: gflnet3_extension_set_heavy_3
*/
void sub_73ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73ec30ULL || rel >= 0x73ed10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0073ed10 size=6720 callers=1 calls=6
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_70cee0, sub_70d0d0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_s
   ref: Non-primitive types can't be packed.
*/
void gflnet3_extension_set_heavy_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x73ed10ULL || rel >= 0x740750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00740750 size=48 callers=0 calls=1
   calls: sub_72c220
*/
void sub_740750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x740750ULL || rel >= 0x740780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00740780 size=16 callers=4 calls=0
*/
void sub_740780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x740780ULL || rel >= 0x740790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00740790 size=240 callers=1 calls=0
*/
void sub_740790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x740790ULL || rel >= 0x740880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00740880 size=112 callers=1 calls=1
   calls: sub_ce0
*/
void sub_740880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x740880ULL || rel >= 0x7408f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007408f0 size=304 callers=54 calls=0
*/
void sub_7408f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7408f0ULL || rel >= 0x740a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00740a20 size=1280 callers=1 calls=3
   calls: sub_7408f0, sub_c70, sub_ce0
   ref: Expected four hex digits for \u escape sequence.
   ref: Expected eight hex digits up to 10ffff for \U escape sequence
   ref: Expected hex digits for escape sequence.
   ref: Invalid escape sequence in string literal.
   ref: String literals cannot cross line boundaries.
   ref: Unexpected end of string.
*/
void u_escape_sequence(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x740a20ULL || rel >= 0x740f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00740f20 size=1216 callers=2 calls=3
   calls: sub_7408f0, sub_c70, sub_ce0
   ref: Need space between number and identifier.
   ref: "0x" must be followed by hex digits.
   ref: "e" must be followed by exponent.
   ref: Numbers starting with leading zero must be in octal.
   ref: Already saw decimal point or exponent; can't have another one.
   ref: Hex and octal numbers must be integers.
*/
void e_must_be_followed_by_exponent(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x740f20ULL || rel >= 0x7413e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007413e0 size=1232 callers=1 calls=3
   calls: sub_7408f0, sub_c70, sub_ce0
   ref: "/*" inside block comment.  Block comments cannot be nested.
   ref: End-of-file inside block comment.
   ref:   Comment started here.
*/
void inside_block_comment_Block_comments_cannot_be_nested(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7413e0ULL || rel >= 0x7418b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007418b0 size=240 callers=1 calls=1
   calls: sub_7408f0
*/
void sub_7418b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7418b0ULL || rel >= 0x7419a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007419a0 size=1200 callers=29 calls=8
   calls: e_must_be_followed_by_exponent, inside_block_comment_Block_comments_cannot_be_nested, sub_70def0, sub_7408f0, sub_7418b0, sub_c70, sub_ce0, u_escape_sequence
   ref: Interpreting non ascii codepoint %d.
   ref: Invalid control characters encountered in text.
   ref: Need space between identifier and decimal point.
*/
void Interpreting_non_ascii_codepoint_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7419a0ULL || rel >= 0x741e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00741e50 size=240 callers=2 calls=0
*/
void sub_741e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x741e50ULL || rel >= 0x741f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00741f40 size=320 callers=1 calls=8
   calls: gflnet3_strtod, sub_6fe290, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_ce0
   ref:  Tokenizer::ParseFloat() passed text that could not have been tokenized as a float: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/tokenize
*/
void gflnet3_tokenizer(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x741f40ULL || rel >= 0x742080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00742080 size=1696 callers=1 calls=9
   calls: sub_6fe290, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_700130, sub_70dfa0, sub_ce0
   ref:  Tokenizer::ParseStringAppend() passed text that could not have been tokenized as a string: 
   ref: \U%08x
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/tokenize
*/
void gflnet3_tokenizer_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x742080ULL || rel >= 0x742720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00742720 size=304 callers=1 calls=1
   calls: sub_ce0
*/
void sub_742720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x742720ULL || rel >= 0x742850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00742850 size=608 callers=3 calls=6
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_742af0, sub_ce0
   ref: CHECK failed: (temp[0]) == ('1'): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/strtod.c
   ref: CHECK failed: (size) <= (6): 
   ref: CHECK failed: (temp[size-1]) == ('5'): 
*/
void gflnet3_strtod(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x742850ULL || rel >= 0x742ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00742ab0 size=64 callers=2 calls=0
*/
void sub_742ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x742ab0ULL || rel >= 0x742af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00742af0 size=512 callers=1 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_742af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x742af0ULL || rel >= 0x742cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00742cf0 size=256 callers=1 calls=1
   calls: sub_ce0
*/
void sub_742cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x742cf0ULL || rel >= 0x742df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00742df0 size=256 callers=2 calls=1
   calls: sub_6e28a0
*/
void sub_742df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x742df0ULL || rel >= 0x742ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00742ef0 size=1872 callers=0 calls=10
   calls: gflnet3_descriptor_17, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: google/protobuf/descriptor.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x742ef0ULL || rel >= 0x743640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00743640 size=2928 callers=69 calls=9
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_descriptor_17, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_723ff0, sub_c70
   ref: google/protobuf/descriptor.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x743640ULL || rel >= 0x7441b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007441b0 size=1328 callers=0 calls=0
*/
void sub_7441b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7441b0ULL || rel >= 0x7446e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007446e0 size=1104 callers=0 calls=4
   calls: gflnet3_descriptor_17, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_7446e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7446e0ULL || rel >= 0x744b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00744b30 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_744b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x744b30ULL || rel >= 0x744bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00744bf0 size=48 callers=0 calls=1
   calls: sub_744b30
*/
void sub_744bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x744bf0ULL || rel >= 0x744c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00744c20 size=16 callers=0 calls=0
*/
void sub_744c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x744c20ULL || rel >= 0x744c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00744c30 size=96 callers=0 calls=2
   calls: sub_744c90, sub_c70
*/
void sub_744c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x744c30ULL || rel >= 0x744c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00744c90 size=32 callers=1 calls=0
*/
void sub_744c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x744c90ULL || rel >= 0x744cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00744cb0 size=128 callers=0 calls=0
*/
void sub_744cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x744cb0ULL || rel >= 0x744d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00744d30 size=528 callers=0 calls=8
   calls: sub_6bd410, sub_70b670, sub_70b7c0, sub_70c480, sub_70f110, sub_722e50, sub_746300, sub_75f170
*/
void sub_744d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x744d30ULL || rel >= 0x744f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00744f40 size=128 callers=0 calls=1
   calls: sub_714af0
*/
void sub_744f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x744f40ULL || rel >= 0x744fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00744fc0 size=192 callers=0 calls=0
*/
void sub_744fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x744fc0ULL || rel >= 0x745080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745080 size=160 callers=0 calls=3
   calls: sub_70d000, sub_70fe30, sub_747780
*/
void sub_745080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745080ULL || rel >= 0x745120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745120 size=304 callers=0 calls=5
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_745250
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745120ULL || rel >= 0x745250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745250 size=288 callers=1 calls=3
   calls: sub_722d70, sub_75f170, sub_75f910
*/
void sub_745250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745250ULL || rel >= 0x745370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745370 size=80 callers=0 calls=0
*/
void sub_745370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745370ULL || rel >= 0x7453c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007453c0 size=96 callers=0 calls=0
*/
void sub_7453c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7453c0ULL || rel >= 0x745420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745420 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_745420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745420ULL || rel >= 0x745490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745490 size=208 callers=5 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_745490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745490ULL || rel >= 0x745560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745560 size=64 callers=8 calls=1
   calls: gflnet3_descriptor_17
*/
void sub_745560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745560ULL || rel >= 0x7455a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007455a0 size=64 callers=2 calls=1
   calls: gflnet3_descriptor_17
*/
void sub_7455a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7455a0ULL || rel >= 0x7455e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007455e0 size=816 callers=0 calls=17
   calls: gflnet3_descriptor_21, gflnet3_generated_message_util, gflnet3_repeated_field, sub_6bd410, sub_6fff50, sub_7007d0, sub_70e020, sub_70e370, sub_71bab0, sub_723ff0, sub_747d80, sub_747ea0
   ... +5 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7455e0ULL || rel >= 0x745910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745910 size=592 callers=6 calls=3
   calls: sub_70e0c0, sub_745b60, sub_ce0
*/
void sub_745910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745910ULL || rel >= 0x745b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745b60 size=272 callers=1 calls=1
   calls: sub_ce0
*/
void sub_745b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745b60ULL || rel >= 0x745c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745c70 size=48 callers=0 calls=1
   calls: sub_745910
*/
void sub_745c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745c70ULL || rel >= 0x745ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745ca0 size=16 callers=0 calls=0
*/
void sub_745ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745ca0ULL || rel >= 0x745cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745cb0 size=224 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_745d90, sub_c70
*/
void sub_745cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745cb0ULL || rel >= 0x745d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745d90 size=32 callers=1 calls=0
*/
void sub_745d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745d90ULL || rel >= 0x745db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00745db0 size=704 callers=0 calls=2
   calls: sub_70e0c0, sub_746070
*/
void sub_745db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x745db0ULL || rel >= 0x746070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00746070 size=528 callers=1 calls=1
   calls: sub_728840
*/
void sub_746070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x746070ULL || rel >= 0x746280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00746280 size=128 callers=0 calls=0
*/
void sub_746280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x746280ULL || rel >= 0x746300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00746300 size=3184 callers=1 calls=29
   calls: sub_6bd410, sub_6f6640, sub_6f66a0, sub_6f67b0, sub_6f68e0, sub_6f6960, sub_6f69e0, sub_6f6a60, sub_6fff50, sub_7007d0, sub_70b5e0, sub_70b670
   ... +17 more
*/
void sub_746300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x746300ULL || rel >= 0x746f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00746f70 size=320 callers=2 calls=6
   calls: sub_6f67b0, sub_70b510, sub_70b590, sub_70b820, sub_70c190, sub_70c2e0
*/
void sub_746f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x746f70ULL || rel >= 0x7470b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007470b0 size=624 callers=0 calls=4
   calls: gflnet3_wire_format_lite, gflnet3_wire_format_lite_2, sub_713690, sub_714af0
*/
void sub_7470b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7470b0ULL || rel >= 0x747320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00747320 size=1120 callers=0 calls=2
   calls: sub_70cee0, sub_70d0d0
*/
void sub_747320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x747320ULL || rel >= 0x747780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00747780 size=1328 callers=1 calls=8
   calls: sub_70d000, sub_70fe30, sub_74b350, sub_74d500, sub_74f530, sub_751600, sub_754310, sub_75c4f0
*/
void sub_747780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x747780ULL || rel >= 0x747cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00747cb0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x747cb0ULL || rel >= 0x747d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00747d80 size=288 callers=2 calls=3
   calls: sub_6f68e0, sub_722d70, sub_75f920
*/
void sub_747d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x747d80ULL || rel >= 0x747ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00747ea0 size=288 callers=2 calls=3
   calls: sub_6f6960, sub_722d70, sub_75f930
*/
void sub_747ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x747ea0ULL || rel >= 0x747fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00747fc0 size=288 callers=1 calls=3
   calls: sub_6f69e0, sub_722d70, sub_75f940
*/
void sub_747fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x747fc0ULL || rel >= 0x7480e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007480e0 size=288 callers=3 calls=3
   calls: sub_6f6a60, sub_722d70, sub_75f950
*/
void sub_7480e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7480e0ULL || rel >= 0x748200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748200 size=720 callers=1 calls=6
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_7288c0, sub_754720, sub_75fa00
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748200ULL || rel >= 0x7484d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007484d0 size=80 callers=0 calls=0
*/
void sub_7484d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7484d0ULL || rel >= 0x748520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748520 size=304 callers=0 calls=0
*/
void sub_748520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748520ULL || rel >= 0x748650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748650 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_748650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748650ULL || rel >= 0x7486c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007486c0 size=32 callers=2 calls=0
*/
void sub_7486c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7486c0ULL || rel >= 0x7486e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007486e0 size=208 callers=0 calls=3
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7486e0ULL || rel >= 0x7487b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007487b0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_7487b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7487b0ULL || rel >= 0x748810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748810 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_748810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748810ULL || rel >= 0x748870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748870 size=16 callers=0 calls=0
*/
void sub_748870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748870ULL || rel >= 0x748880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748880 size=80 callers=0 calls=2
   calls: sub_7488d0, sub_c70
*/
void sub_748880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748880ULL || rel >= 0x7488d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007488d0 size=32 callers=1 calls=0
*/
void sub_7488d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7488d0ULL || rel >= 0x7488f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007488f0 size=48 callers=0 calls=0
*/
void sub_7488f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7488f0ULL || rel >= 0x748920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748920 size=592 callers=1 calls=4
   calls: sub_6bd410, sub_70c190, sub_70c480, sub_70f110
*/
void sub_748920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748920ULL || rel >= 0x748b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748b70 size=128 callers=0 calls=1
   calls: sub_713690
*/
void sub_748b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748b70ULL || rel >= 0x748bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748bf0 size=272 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_748bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748bf0ULL || rel >= 0x748d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748d00 size=208 callers=0 calls=2
   calls: sub_70d000, sub_70fe30
*/
void sub_748d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748d00ULL || rel >= 0x748dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748dd0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748dd0ULL || rel >= 0x748ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748ea0 size=80 callers=0 calls=0
*/
void sub_748ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748ea0ULL || rel >= 0x748ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748ef0 size=16 callers=0 calls=0
*/
void sub_748ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748ef0ULL || rel >= 0x748f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748f00 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_748f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748f00ULL || rel >= 0x748f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748f70 size=32 callers=2 calls=0
*/
void sub_748f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748f70ULL || rel >= 0x748f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00748f90 size=208 callers=0 calls=3
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x748f90ULL || rel >= 0x749060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749060 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_749060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749060ULL || rel >= 0x7490c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007490c0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_7490c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7490c0ULL || rel >= 0x749120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749120 size=16 callers=0 calls=0
*/
void sub_749120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749120ULL || rel >= 0x749130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749130 size=80 callers=0 calls=2
   calls: sub_749180, sub_c70
*/
void sub_749130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749130ULL || rel >= 0x749180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749180 size=32 callers=1 calls=0
*/
void sub_749180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749180ULL || rel >= 0x7491a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007491a0 size=48 callers=0 calls=0
*/
void sub_7491a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7491a0ULL || rel >= 0x7491d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007491d0 size=592 callers=1 calls=4
   calls: sub_6bd410, sub_70c190, sub_70c480, sub_70f110
*/
void sub_7491d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7491d0ULL || rel >= 0x749420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749420 size=128 callers=0 calls=1
   calls: sub_713690
*/
void sub_749420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749420ULL || rel >= 0x7494a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007494a0 size=272 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_7494a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7494a0ULL || rel >= 0x7495b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007495b0 size=208 callers=0 calls=2
   calls: sub_70d000, sub_70fe30
*/
void sub_7495b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7495b0ULL || rel >= 0x749680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749680 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749680ULL || rel >= 0x749750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749750 size=80 callers=0 calls=0
*/
void sub_749750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749750ULL || rel >= 0x7497a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007497a0 size=16 callers=0 calls=0
*/
void sub_7497a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7497a0ULL || rel >= 0x7497b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007497b0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_7497b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7497b0ULL || rel >= 0x749820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749820 size=208 callers=2 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_749820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749820ULL || rel >= 0x7498f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007498f0 size=64 callers=4 calls=1
   calls: gflnet3_descriptor_17
*/
void sub_7498f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7498f0ULL || rel >= 0x749930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749930 size=416 callers=0 calls=14
   calls: gflnet3_descriptor_28, gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_71bab0, sub_723ff0, sub_747d80, sub_747ea0, sub_7480e0, sub_74b980, sub_74baa0, sub_74bbc0
   ... +2 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749930ULL || rel >= 0x749ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749ad0 size=864 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_749ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749ad0ULL || rel >= 0x749e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749e30 size=48 callers=0 calls=1
   calls: sub_749ad0
*/
void sub_749e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749e30ULL || rel >= 0x749e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749e60 size=16 callers=0 calls=0
*/
void sub_749e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749e60ULL || rel >= 0x749e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749e70 size=240 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_749f60, sub_c70
*/
void sub_749e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749e70ULL || rel >= 0x749f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749f60 size=32 callers=1 calls=0
*/
void sub_749f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749f60ULL || rel >= 0x749f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00749f80 size=688 callers=0 calls=2
   calls: sub_70e0c0, sub_728840
*/
void sub_749f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x749f80ULL || rel >= 0x74a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074a230 size=144 callers=0 calls=1
   calls: sub_728840
*/
void sub_74a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74a230ULL || rel >= 0x74a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074a2c0 size=2688 callers=2 calls=27
   calls: sub_6bd410, sub_6f6640, sub_6f66a0, sub_6f68e0, sub_6f6960, sub_6f6a60, sub_6f6ae0, sub_6f6b60, sub_6f6be0, sub_70b5e0, sub_70b670, sub_70b750
   ... +15 more
*/
void sub_74a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74a2c0ULL || rel >= 0x74ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074ad40 size=544 callers=0 calls=3
   calls: gflnet3_wire_format_lite, gflnet3_wire_format_lite_2, sub_714af0
*/
void sub_74ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74ad40ULL || rel >= 0x74af60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074af60 size=1008 callers=0 calls=1
   calls: sub_70d0d0
*/
void sub_74af60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74af60ULL || rel >= 0x74b350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074b350 size=1376 callers=2 calls=7
   calls: sub_70d000, sub_70fe30, sub_74b350, sub_74d500, sub_74e550, sub_74f530, sub_7552e0
*/
void sub_74b350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74b350ULL || rel >= 0x74b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074b8b0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74b8b0ULL || rel >= 0x74b980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074b980 size=288 callers=1 calls=3
   calls: sub_6f6b60, sub_722d70, sub_75f960
*/
void sub_74b980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74b980ULL || rel >= 0x74baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074baa0 size=288 callers=1 calls=3
   calls: sub_6f6ae0, sub_722d70, sub_75f970
*/
void sub_74baa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74baa0ULL || rel >= 0x74bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074bbc0 size=288 callers=1 calls=3
   calls: sub_6f6be0, sub_722d70, sub_75f980
*/
void sub_74bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74bbc0ULL || rel >= 0x74bce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074bce0 size=304 callers=1 calls=5
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_7288c0, sub_754720
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74bce0ULL || rel >= 0x74be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074be10 size=80 callers=0 calls=0
*/
void sub_74be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74be10ULL || rel >= 0x74be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074be60 size=368 callers=0 calls=0
*/
void sub_74be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74be60ULL || rel >= 0x74bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074bfd0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_74bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74bfd0ULL || rel >= 0x74c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c040 size=176 callers=2 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_74c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c040ULL || rel >= 0x74c0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c0f0 size=64 callers=2 calls=1
   calls: gflnet3_descriptor_17
*/
void sub_74c0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c0f0ULL || rel >= 0x74c130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c130 size=656 callers=0 calls=7
   calls: gflnet3_descriptor_31, gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_723ff0, sub_75fa00, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c130ULL || rel >= 0x74c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c3c0 size=112 callers=0 calls=3
   calls: sub_70e0c0, sub_74c430, sub_ce0
*/
void sub_74c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c3c0ULL || rel >= 0x74c430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c430 size=336 callers=2 calls=1
   calls: sub_ce0
*/
void sub_74c430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c430ULL || rel >= 0x74c580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c580 size=112 callers=0 calls=3
   calls: sub_70e0c0, sub_74c430, sub_ce0
*/
void sub_74c580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c580ULL || rel >= 0x74c5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c5f0 size=16 callers=0 calls=0
*/
void sub_74c5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c5f0ULL || rel >= 0x74c600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c600 size=208 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_74c6d0, sub_c70
*/
void sub_74c600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c600ULL || rel >= 0x74c6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c6d0 size=32 callers=1 calls=0
*/
void sub_74c6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c6d0ULL || rel >= 0x74c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c6f0 size=576 callers=0 calls=2
   calls: sub_70e0c0, sub_728840
*/
void sub_74c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c6f0ULL || rel >= 0x74c930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c930 size=160 callers=0 calls=1
   calls: sub_728840
*/
void sub_74c930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c930ULL || rel >= 0x74c9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074c9d0 size=1760 callers=3 calls=13
   calls: sub_6bd410, sub_6f6640, sub_70b5e0, sub_70b750, sub_70c190, sub_70c2e0, sub_70c480, sub_70e800, sub_70f110, sub_714c90, sub_723ff0, sub_7557b0
   ... +1 more
*/
void sub_74c9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74c9d0ULL || rel >= 0x74d0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074d0b0 size=352 callers=0 calls=4
   calls: gflnet3_wire_format_lite_2, sub_713690, sub_714090, sub_714af0
*/
void sub_74d0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74d0b0ULL || rel >= 0x74d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074d210 size=752 callers=0 calls=2
   calls: sub_70cee0, sub_70d0d0
*/
void sub_74d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74d210ULL || rel >= 0x74d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074d500 size=944 callers=3 calls=3
   calls: sub_70d000, sub_70fe30, sub_7561b0
*/
void sub_74d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74d500ULL || rel >= 0x74d8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074d8b0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74d8b0ULL || rel >= 0x74d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074d980 size=368 callers=1 calls=5
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_7288c0, sub_754720
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74d980ULL || rel >= 0x74daf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074daf0 size=80 callers=0 calls=0
*/
void sub_74daf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74daf0ULL || rel >= 0x74db40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074db40 size=64 callers=0 calls=0
*/
void sub_74db40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74db40ULL || rel >= 0x74db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074db80 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_74db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74db80ULL || rel >= 0x74dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074dbf0 size=160 callers=2 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_74dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74dbf0ULL || rel >= 0x74dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074dc90 size=64 callers=3 calls=1
   calls: gflnet3_descriptor_17
*/
void sub_74dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74dc90ULL || rel >= 0x74dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074dcd0 size=320 callers=0 calls=7
   calls: gflnet3_descriptor_34, gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_723ff0, sub_75fa00, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74dcd0ULL || rel >= 0x74de10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074de10 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_74de10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74de10ULL || rel >= 0x74ded0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074ded0 size=48 callers=0 calls=1
   calls: sub_74de10
*/
void sub_74ded0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74ded0ULL || rel >= 0x74df00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074df00 size=16 callers=0 calls=0
*/
void sub_74df00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74df00ULL || rel >= 0x74df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074df10 size=176 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_74dfc0, sub_c70
*/
void sub_74df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74df10ULL || rel >= 0x74dfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074dfc0 size=32 callers=1 calls=0
*/
void sub_74dfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74dfc0ULL || rel >= 0x74dfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074dfe0 size=272 callers=0 calls=2
   calls: sub_70e0c0, sub_728840
*/
void sub_74dfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74dfe0ULL || rel >= 0x74e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e0f0 size=144 callers=0 calls=1
   calls: sub_728840
*/
void sub_74e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e0f0ULL || rel >= 0x74e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e180 size=656 callers=1 calls=11
   calls: sub_6bd410, sub_6f6640, sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_70f110, sub_714c90, sub_723ff0, sub_756740, sub_c70
*/
void sub_74e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e180ULL || rel >= 0x74e410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e410 size=128 callers=0 calls=2
   calls: gflnet3_wire_format_lite_2, sub_714af0
*/
void sub_74e410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e410ULL || rel >= 0x74e490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e490 size=192 callers=0 calls=1
   calls: sub_70d0d0
*/
void sub_74e490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e490ULL || rel >= 0x74e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e550 size=384 callers=1 calls=4
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_75ad70
*/
void sub_74e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e550ULL || rel >= 0x74e6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e6d0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e6d0ULL || rel >= 0x74e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e7a0 size=176 callers=1 calls=5
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_7288c0, sub_754720
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e7a0ULL || rel >= 0x74e850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e850 size=80 callers=0 calls=0
*/
void sub_74e850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e850ULL || rel >= 0x74e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e8a0 size=64 callers=0 calls=0
*/
void sub_74e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e8a0ULL || rel >= 0x74e8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e8e0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_74e8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e8e0ULL || rel >= 0x74e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e950 size=160 callers=2 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_74e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e950ULL || rel >= 0x74e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074e9f0 size=64 callers=4 calls=1
   calls: gflnet3_descriptor_17
*/
void sub_74e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74e9f0ULL || rel >= 0x74ea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074ea30 size=336 callers=0 calls=8
   calls: gflnet3_descriptor_37, gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_723ff0, sub_74f770, sub_75fa00, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74ea30ULL || rel >= 0x74eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074eb80 size=288 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_74eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74eb80ULL || rel >= 0x74eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074eca0 size=48 callers=0 calls=1
   calls: sub_74eb80
*/
void sub_74eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74eca0ULL || rel >= 0x74ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074ecd0 size=16 callers=0 calls=0
*/
void sub_74ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74ecd0ULL || rel >= 0x74ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074ece0 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_74eda0, sub_c70
*/
void sub_74ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74ece0ULL || rel >= 0x74eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074eda0 size=32 callers=1 calls=0
*/
void sub_74eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74eda0ULL || rel >= 0x74edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074edc0 size=320 callers=0 calls=2
   calls: sub_70e0c0, sub_728840
*/
void sub_74edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74edc0ULL || rel >= 0x74ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074ef00 size=144 callers=0 calls=1
   calls: sub_728840
*/
void sub_74ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74ef00ULL || rel >= 0x74ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074ef90 size=960 callers=2 calls=16
   calls: sub_6bd410, sub_6f6640, sub_6f6c60, sub_70b5e0, sub_70b670, sub_70b750, sub_70b7c0, sub_70c2e0, sub_70c480, sub_70f110, sub_714c90, sub_722e50
   ... +4 more
*/
void sub_74ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74ef90ULL || rel >= 0x74f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074f350 size=176 callers=0 calls=2
   calls: gflnet3_wire_format_lite_2, sub_714af0
*/
void sub_74f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74f350ULL || rel >= 0x74f400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074f400 size=304 callers=0 calls=1
   calls: sub_70d0d0
*/
void sub_74f400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74f400ULL || rel >= 0x74f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074f530 size=368 callers=2 calls=4
   calls: sub_70d000, sub_70fe30, sub_7505b0, sub_757630
*/
void sub_74f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74f530ULL || rel >= 0x74f6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074f6a0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74f6a0ULL || rel >= 0x74f770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074f770 size=288 callers=1 calls=3
   calls: sub_6f6c60, sub_722d70, sub_75f990
*/
void sub_74f770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74f770ULL || rel >= 0x74f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074f890 size=240 callers=1 calls=5
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_7288c0, sub_754720
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74f890ULL || rel >= 0x74f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074f980 size=80 callers=0 calls=0
*/
void sub_74f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74f980ULL || rel >= 0x74f9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074f9d0 size=144 callers=0 calls=0
*/
void sub_74f9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74f9d0ULL || rel >= 0x74fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074fa60 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_74fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74fa60ULL || rel >= 0x74fad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074fad0 size=160 callers=2 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_74fad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74fad0ULL || rel >= 0x74fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074fb70 size=64 callers=5 calls=1
   calls: gflnet3_descriptor_17
*/
void sub_74fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74fb70ULL || rel >= 0x74fbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074fbb0 size=384 callers=0 calls=7
   calls: gflnet3_descriptor_40, gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_723ff0, sub_75fa00, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74fbb0ULL || rel >= 0x74fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074fd30 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_74fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74fd30ULL || rel >= 0x74fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074fdf0 size=48 callers=0 calls=1
   calls: sub_74fd30
*/
void sub_74fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74fdf0ULL || rel >= 0x74fe20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074fe20 size=16 callers=0 calls=0
*/
void sub_74fe20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74fe20ULL || rel >= 0x74fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074fe30 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_74fef0, sub_c70
*/
void sub_74fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74fe30ULL || rel >= 0x74fef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074fef0 size=32 callers=1 calls=0
*/
void sub_74fef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74fef0ULL || rel >= 0x74ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0074ff10 size=288 callers=0 calls=2
   calls: sub_70e0c0, sub_728840
*/
void sub_74ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x74ff10ULL || rel >= 0x750030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750030 size=144 callers=0 calls=1
   calls: sub_728840
*/
void sub_750030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750030ULL || rel >= 0x7500c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007500c0 size=800 callers=1 calls=12
   calls: sub_6bd410, sub_6f6640, sub_70b5e0, sub_70b750, sub_70c190, sub_70c2e0, sub_70c480, sub_70f110, sub_714c90, sub_723ff0, sub_757ae0, sub_c70
*/
void sub_7500c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7500c0ULL || rel >= 0x7503e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007503e0 size=160 callers=0 calls=3
   calls: gflnet3_wire_format_lite_2, sub_713690, sub_714af0
*/
void sub_7503e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7503e0ULL || rel >= 0x750480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750480 size=304 callers=0 calls=2
   calls: sub_70cee0, sub_70d0d0
*/
void sub_750480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750480ULL || rel >= 0x7505b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007505b0 size=464 callers=1 calls=4
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_75ad70
*/
void sub_7505b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7505b0ULL || rel >= 0x750780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750780 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750780ULL || rel >= 0x750850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750850 size=208 callers=2 calls=5
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_7288c0, sub_754720
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750850ULL || rel >= 0x750920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750920 size=80 callers=0 calls=0
*/
void sub_750920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750920ULL || rel >= 0x750970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750970 size=64 callers=0 calls=0
*/
void sub_750970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750970ULL || rel >= 0x7509b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007509b0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_7509b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7509b0ULL || rel >= 0x750a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

