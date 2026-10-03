/* main functions 00750a20..007661c0 (50 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00750a20 size=160 callers=2 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_750a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750a20ULL || rel >= 0x750ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750ac0 size=64 callers=2 calls=1
   calls: gflnet3_descriptor_17
*/
void sub_750ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750ac0ULL || rel >= 0x750b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750b00 size=336 callers=0 calls=8
   calls: gflnet3_descriptor_43, gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_723ff0, sub_7518c0, sub_75fa00, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750b00ULL || rel >= 0x750c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750c50 size=288 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_750c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750c50ULL || rel >= 0x750d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750d70 size=48 callers=0 calls=1
   calls: sub_750c50
*/
void sub_750d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750d70ULL || rel >= 0x750da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750da0 size=16 callers=0 calls=0
*/
void sub_750da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750da0ULL || rel >= 0x750db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750db0 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_750e70, sub_c70
*/
void sub_750db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750db0ULL || rel >= 0x750e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750e70 size=32 callers=1 calls=0
*/
void sub_750e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750e70ULL || rel >= 0x750e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750e90 size=320 callers=0 calls=2
   calls: sub_70e0c0, sub_728840
*/
void sub_750e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750e90ULL || rel >= 0x750fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00750fd0 size=144 callers=0 calls=1
   calls: sub_728840
*/
void sub_750fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x750fd0ULL || rel >= 0x751060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00751060 size=960 callers=1 calls=16
   calls: sub_6bd410, sub_6f6640, sub_6f6ce0, sub_70b5e0, sub_70b670, sub_70b750, sub_70b7c0, sub_70c2e0, sub_70c480, sub_70f110, sub_714c90, sub_722e50
   ... +4 more
*/
void sub_751060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x751060ULL || rel >= 0x751420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00751420 size=176 callers=0 calls=2
   calls: gflnet3_wire_format_lite_2, sub_714af0
*/
void sub_751420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x751420ULL || rel >= 0x7514d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007514d0 size=304 callers=0 calls=1
   calls: sub_70d0d0
*/
void sub_7514d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7514d0ULL || rel >= 0x751600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00751600 size=496 callers=1 calls=5
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_752a80, sub_75ad70
*/
void sub_751600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x751600ULL || rel >= 0x7517f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007517f0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7517f0ULL || rel >= 0x7518c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007518c0 size=288 callers=1 calls=3
   calls: sub_6f6ce0, sub_722d70, sub_75f9a0
*/
void sub_7518c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7518c0ULL || rel >= 0x7519e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007519e0 size=208 callers=1 calls=5
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_7288c0, sub_754720
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7519e0ULL || rel >= 0x751ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00751ab0 size=80 callers=0 calls=0
*/
void sub_751ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x751ab0ULL || rel >= 0x751b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00751b00 size=144 callers=0 calls=0
*/
void sub_751b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x751b00ULL || rel >= 0x751b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00751b90 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_751b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x751b90ULL || rel >= 0x751c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00751c00 size=160 callers=2 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_751c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x751c00ULL || rel >= 0x751ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00751ca0 size=64 callers=2 calls=1
   calls: gflnet3_descriptor_17
*/
void sub_751ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x751ca0ULL || rel >= 0x751ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00751ce0 size=512 callers=0 calls=7
   calls: gflnet3_descriptor_46, gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_723ff0, sub_75fa00, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_44(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x751ce0ULL || rel >= 0x751ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00751ee0 size=112 callers=0 calls=3
   calls: sub_70e0c0, sub_751f50, sub_ce0
*/
void sub_751ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x751ee0ULL || rel >= 0x751f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00751f50 size=240 callers=2 calls=1
   calls: sub_ce0
*/
void sub_751f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x751f50ULL || rel >= 0x752040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752040 size=112 callers=0 calls=3
   calls: sub_70e0c0, sub_751f50, sub_ce0
*/
void sub_752040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752040ULL || rel >= 0x7520b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007520b0 size=16 callers=0 calls=0
*/
void sub_7520b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7520b0ULL || rel >= 0x7520c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007520c0 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_752180, sub_c70
*/
void sub_7520c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7520c0ULL || rel >= 0x752180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752180 size=32 callers=1 calls=0
*/
void sub_752180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752180ULL || rel >= 0x7521a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007521a0 size=416 callers=0 calls=2
   calls: sub_70e0c0, sub_728840
*/
void sub_7521a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7521a0ULL || rel >= 0x752340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752340 size=144 callers=0 calls=1
   calls: sub_728840
*/
void sub_752340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752340ULL || rel >= 0x7523d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007523d0 size=1136 callers=1 calls=12
   calls: sub_6bd410, sub_6f6640, sub_70b5e0, sub_70b750, sub_70bfa0, sub_70c2e0, sub_70c480, sub_70f110, sub_714c90, sub_723ff0, sub_758e80, sub_c70
*/
void sub_7523d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7523d0ULL || rel >= 0x752840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752840 size=240 callers=0 calls=3
   calls: gflnet3_wire_format_lite_2, sub_713fb0, sub_714af0
*/
void sub_752840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752840ULL || rel >= 0x752930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752930 size=336 callers=0 calls=1
   calls: sub_70d0d0
*/
void sub_752930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752930ULL || rel >= 0x752a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752a80 size=624 callers=1 calls=4
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_75ad70
*/
void sub_752a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752a80ULL || rel >= 0x752cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752cf0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_45(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752cf0ULL || rel >= 0x752dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752dc0 size=208 callers=2 calls=5
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_7288c0, sub_754720
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_46(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752dc0ULL || rel >= 0x752e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752e90 size=80 callers=0 calls=0
*/
void sub_752e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752e90ULL || rel >= 0x752ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752ee0 size=64 callers=0 calls=0
*/
void sub_752ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752ee0ULL || rel >= 0x752f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752f20 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_752f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752f20ULL || rel >= 0x752f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00752f90 size=192 callers=2 calls=3
   calls: sub_6fff50, sub_7007d0, sub_723ff0
*/
void sub_752f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x752f90ULL || rel >= 0x753050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00753050 size=192 callers=1 calls=3
   calls: sub_70e0c0, sub_753110, sub_ce0
*/
void sub_753050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x753050ULL || rel >= 0x753110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00753110 size=288 callers=1 calls=1
   calls: sub_ce0
*/
void sub_753110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x753110ULL || rel >= 0x753230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00753230 size=48 callers=0 calls=1
   calls: sub_753050
*/
void sub_753230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x753230ULL || rel >= 0x753260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00753260 size=16 callers=0 calls=0
*/
void sub_753260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x753260ULL || rel >= 0x753270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00753270 size=208 callers=0 calls=5
   calls: sub_6fff50, sub_7007d0, sub_723ff0, sub_753340, sub_c70
*/
void sub_753270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x753270ULL || rel >= 0x753340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00753340 size=32 callers=1 calls=0
*/
void sub_753340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x753340ULL || rel >= 0x753360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00753360 size=2688 callers=1 calls=14
   calls: sub_6bd410, sub_6f6640, sub_70b670, sub_70b7c0, sub_70bfa0, sub_70c190, sub_70c480, sub_70e800, sub_70f110, sub_714c90, sub_722e50, sub_73e7f0
   ... +2 more
*/
void sub_753360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x753360ULL || rel >= 0x753de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00753de0 size=560 callers=0 calls=5
   calls: gflnet3_wire_format_lite_2, sub_713fb0, sub_714090, sub_714af0, sub_72c230
*/
void sub_753de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x753de0ULL || rel >= 0x754010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754010 size=768 callers=0 calls=3
   calls: sub_70cee0, sub_70d0d0, sub_73ec30
*/
void sub_754010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754010ULL || rel >= 0x754310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754310 size=832 callers=1 calls=4
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_75ad70
*/
void sub_754310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754310ULL || rel >= 0x754650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754650 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_47(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754650ULL || rel >= 0x754720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754720 size=288 callers=8 calls=3
   calls: sub_722d70, sub_75f330, sub_75f9b0
*/
void sub_754720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754720ULL || rel >= 0x754840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754840 size=80 callers=0 calls=0
*/
void sub_754840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754840ULL || rel >= 0x754890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754890 size=64 callers=0 calls=0
*/
void sub_754890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754890ULL || rel >= 0x7548d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007548d0 size=96 callers=0 calls=0
*/
void sub_7548d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7548d0ULL || rel >= 0x754930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754930 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_754930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754930ULL || rel >= 0x7549a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007549a0 size=64 callers=2 calls=1
   calls: sub_723ff0
*/
void sub_7549a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7549a0ULL || rel >= 0x7549e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007549e0 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_7549e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7549e0ULL || rel >= 0x754aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754aa0 size=48 callers=0 calls=1
   calls: sub_7549e0
*/
void sub_754aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754aa0ULL || rel >= 0x754ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754ad0 size=16 callers=0 calls=0
*/
void sub_754ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754ad0ULL || rel >= 0x754ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754ae0 size=96 callers=0 calls=3
   calls: sub_723ff0, sub_754b40, sub_c70
*/
void sub_754ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754ae0ULL || rel >= 0x754b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754b40 size=32 callers=1 calls=0
*/
void sub_754b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754b40ULL || rel >= 0x754b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00754b60 size=1280 callers=1 calls=10
   calls: sub_6bd410, sub_70b670, sub_70b7c0, sub_70bfa0, sub_70c480, sub_70f110, sub_722e50, sub_73e7f0, sub_75a590, sub_75f330
*/
void sub_754b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x754b60ULL || rel >= 0x755060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00755060 size=288 callers=0 calls=3
   calls: sub_713fb0, sub_714af0, sub_72c230
*/
void sub_755060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x755060ULL || rel >= 0x755180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00755180 size=352 callers=0 calls=1
   calls: sub_73ec30
*/
void sub_755180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x755180ULL || rel >= 0x7552e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007552e0 size=224 callers=1 calls=4
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_75ad70
*/
void sub_7552e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7552e0ULL || rel >= 0x7553c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007553c0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7553c0ULL || rel >= 0x755490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00755490 size=80 callers=0 calls=0
*/
void sub_755490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x755490ULL || rel >= 0x7554e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007554e0 size=64 callers=0 calls=0
*/
void sub_7554e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7554e0ULL || rel >= 0x755520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00755520 size=96 callers=0 calls=0
*/
void sub_755520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x755520ULL || rel >= 0x755580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00755580 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_755580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x755580ULL || rel >= 0x7555f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007555f0 size=64 callers=2 calls=1
   calls: sub_723ff0
*/
void sub_7555f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7555f0ULL || rel >= 0x755630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00755630 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_755630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x755630ULL || rel >= 0x7556f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007556f0 size=48 callers=0 calls=1
   calls: sub_755630
*/
void sub_7556f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7556f0ULL || rel >= 0x755720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00755720 size=16 callers=0 calls=0
*/
void sub_755720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x755720ULL || rel >= 0x755730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00755730 size=96 callers=0 calls=3
   calls: sub_723ff0, sub_755790, sub_c70
*/
void sub_755730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x755730ULL || rel >= 0x755790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00755790 size=32 callers=1 calls=0
*/
void sub_755790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x755790ULL || rel >= 0x7557b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007557b0 size=1664 callers=1 calls=12
   calls: sub_6bd410, sub_70b670, sub_70b7c0, sub_70bfa0, sub_70c190, sub_70c480, sub_70e800, sub_70f110, sub_722e50, sub_73e7f0, sub_75a590, sub_75f330
*/
void sub_7557b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7557b0ULL || rel >= 0x755e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00755e30 size=336 callers=0 calls=4
   calls: sub_713fb0, sub_714090, sub_714af0, sub_72c230
*/
void sub_755e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x755e30ULL || rel >= 0x755f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00755f80 size=560 callers=0 calls=2
   calls: sub_70cee0, sub_73ec30
*/
void sub_755f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x755f80ULL || rel >= 0x7561b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007561b0 size=416 callers=1 calls=4
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_75ad70
*/
void sub_7561b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7561b0ULL || rel >= 0x756350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756350 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_49(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756350ULL || rel >= 0x756420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756420 size=80 callers=0 calls=0
*/
void sub_756420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756420ULL || rel >= 0x756470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756470 size=64 callers=1 calls=0
*/
void sub_756470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756470ULL || rel >= 0x7564b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007564b0 size=96 callers=0 calls=0
*/
void sub_7564b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7564b0ULL || rel >= 0x756510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756510 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_756510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756510ULL || rel >= 0x756580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756580 size=64 callers=2 calls=1
   calls: sub_723ff0
*/
void sub_756580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756580ULL || rel >= 0x7565c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007565c0 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_7565c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7565c0ULL || rel >= 0x756680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756680 size=48 callers=0 calls=1
   calls: sub_7565c0
*/
void sub_756680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756680ULL || rel >= 0x7566b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007566b0 size=16 callers=0 calls=0
*/
void sub_7566b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7566b0ULL || rel >= 0x7566c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007566c0 size=96 callers=0 calls=3
   calls: sub_723ff0, sub_756720, sub_c70
*/
void sub_7566c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7566c0ULL || rel >= 0x756720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756720 size=32 callers=1 calls=0
*/
void sub_756720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756720ULL || rel >= 0x756740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756740 size=720 callers=1 calls=9
   calls: sub_6bd410, sub_70b670, sub_70b7c0, sub_70c480, sub_70f110, sub_722e50, sub_73e7f0, sub_75a590, sub_75f330
*/
void sub_756740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756740ULL || rel >= 0x756a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756a10 size=160 callers=0 calls=2
   calls: sub_714af0, sub_72c230
*/
void sub_756a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756a10ULL || rel >= 0x756ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756ab0 size=208 callers=0 calls=1
   calls: sub_73ec30
*/
void sub_756ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756ab0ULL || rel >= 0x756b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756b80 size=176 callers=0 calls=4
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_75ad70
*/
void sub_756b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756b80ULL || rel >= 0x756c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756c30 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756c30ULL || rel >= 0x756d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756d00 size=80 callers=0 calls=0
*/
void sub_756d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756d00ULL || rel >= 0x756d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756d50 size=64 callers=0 calls=0
*/
void sub_756d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756d50ULL || rel >= 0x756d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756d90 size=96 callers=0 calls=0
*/
void sub_756d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756d90ULL || rel >= 0x756df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756df0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_756df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756df0ULL || rel >= 0x756e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756e60 size=64 callers=2 calls=1
   calls: sub_723ff0
*/
void sub_756e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756e60ULL || rel >= 0x756ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756ea0 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_756ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756ea0ULL || rel >= 0x756f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756f60 size=48 callers=0 calls=1
   calls: sub_756ea0
*/
void sub_756f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756f60ULL || rel >= 0x756f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756f90 size=16 callers=0 calls=0
*/
void sub_756f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756f90ULL || rel >= 0x756fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00756fa0 size=96 callers=0 calls=3
   calls: sub_723ff0, sub_757000, sub_c70
*/
void sub_756fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x756fa0ULL || rel >= 0x757000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757000 size=32 callers=1 calls=0
*/
void sub_757000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757000ULL || rel >= 0x757020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757020 size=1040 callers=1 calls=10
   calls: sub_6bd410, sub_70b670, sub_70b7c0, sub_70bfa0, sub_70c480, sub_70f110, sub_722e50, sub_73e7f0, sub_75a590, sub_75f330
*/
void sub_757020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757020ULL || rel >= 0x757430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757430 size=224 callers=0 calls=3
   calls: sub_713fb0, sub_714af0, sub_72c230
*/
void sub_757430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757430ULL || rel >= 0x757510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757510 size=288 callers=0 calls=1
   calls: sub_73ec30
*/
void sub_757510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757510ULL || rel >= 0x757630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757630 size=192 callers=1 calls=4
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_75ad70
*/
void sub_757630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757630ULL || rel >= 0x7576f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007576f0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_51(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7576f0ULL || rel >= 0x7577c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007577c0 size=80 callers=0 calls=0
*/
void sub_7577c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7577c0ULL || rel >= 0x757810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757810 size=64 callers=0 calls=0
*/
void sub_757810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757810ULL || rel >= 0x757850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757850 size=96 callers=0 calls=0
*/
void sub_757850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757850ULL || rel >= 0x7578b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007578b0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_7578b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7578b0ULL || rel >= 0x757920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757920 size=64 callers=2 calls=1
   calls: sub_723ff0
*/
void sub_757920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757920ULL || rel >= 0x757960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757960 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_757960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757960ULL || rel >= 0x757a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757a20 size=48 callers=0 calls=1
   calls: sub_757960
*/
void sub_757a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757a20ULL || rel >= 0x757a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757a50 size=16 callers=0 calls=0
*/
void sub_757a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757a50ULL || rel >= 0x757a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757a60 size=96 callers=0 calls=3
   calls: sub_723ff0, sub_757ac0, sub_c70
*/
void sub_757a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757a60ULL || rel >= 0x757ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757ac0 size=32 callers=1 calls=0
*/
void sub_757ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757ac0ULL || rel >= 0x757ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757ae0 size=896 callers=1 calls=10
   calls: sub_6bd410, sub_70b670, sub_70b7c0, sub_70bfa0, sub_70c480, sub_70f110, sub_722e50, sub_73e7f0, sub_75a590, sub_75f330
*/
void sub_757ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757ae0ULL || rel >= 0x757e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757e60 size=192 callers=0 calls=3
   calls: sub_713fb0, sub_714af0, sub_72c230
*/
void sub_757e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757e60ULL || rel >= 0x757f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00757f20 size=240 callers=0 calls=1
   calls: sub_73ec30
*/
void sub_757f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x757f20ULL || rel >= 0x758010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758010 size=176 callers=0 calls=4
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_75ad70
*/
void sub_758010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758010ULL || rel >= 0x7580c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007580c0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_52(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7580c0ULL || rel >= 0x758190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758190 size=80 callers=0 calls=0
*/
void sub_758190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758190ULL || rel >= 0x7581e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007581e0 size=64 callers=0 calls=0
*/
void sub_7581e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7581e0ULL || rel >= 0x758220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758220 size=96 callers=0 calls=0
*/
void sub_758220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758220ULL || rel >= 0x758280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758280 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_758280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758280ULL || rel >= 0x7582f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007582f0 size=64 callers=2 calls=1
   calls: sub_723ff0
*/
void sub_7582f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7582f0ULL || rel >= 0x758330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758330 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_758330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758330ULL || rel >= 0x7583f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007583f0 size=48 callers=0 calls=1
   calls: sub_758330
*/
void sub_7583f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7583f0ULL || rel >= 0x758420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758420 size=16 callers=0 calls=0
*/
void sub_758420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758420ULL || rel >= 0x758430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758430 size=96 callers=0 calls=3
   calls: sub_723ff0, sub_758490, sub_c70
*/
void sub_758430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758430ULL || rel >= 0x758490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758490 size=32 callers=1 calls=0
*/
void sub_758490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758490ULL || rel >= 0x7584b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007584b0 size=896 callers=1 calls=10
   calls: sub_6bd410, sub_70b670, sub_70b7c0, sub_70bfa0, sub_70c480, sub_70f110, sub_722e50, sub_73e7f0, sub_75a590, sub_75f330
*/
void sub_7584b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7584b0ULL || rel >= 0x758830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758830 size=192 callers=0 calls=3
   calls: sub_713fb0, sub_714af0, sub_72c230
*/
void sub_758830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758830ULL || rel >= 0x7588f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007588f0 size=240 callers=0 calls=1
   calls: sub_73ec30
*/
void sub_7588f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7588f0ULL || rel >= 0x7589e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007589e0 size=176 callers=0 calls=4
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_75ad70
*/
void sub_7589e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7589e0ULL || rel >= 0x758a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758a90 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_53(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758a90ULL || rel >= 0x758b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758b60 size=80 callers=0 calls=0
*/
void sub_758b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758b60ULL || rel >= 0x758bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758bb0 size=64 callers=0 calls=0
*/
void sub_758bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758bb0ULL || rel >= 0x758bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758bf0 size=96 callers=0 calls=0
*/
void sub_758bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758bf0ULL || rel >= 0x758c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758c50 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_758c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758c50ULL || rel >= 0x758cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758cc0 size=64 callers=2 calls=1
   calls: sub_723ff0
*/
void sub_758cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758cc0ULL || rel >= 0x758d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758d00 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_758d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758d00ULL || rel >= 0x758dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758dc0 size=48 callers=0 calls=1
   calls: sub_758d00
*/
void sub_758dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758dc0ULL || rel >= 0x758df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758df0 size=16 callers=0 calls=0
*/
void sub_758df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758df0ULL || rel >= 0x758e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758e00 size=96 callers=0 calls=3
   calls: sub_723ff0, sub_758e60, sub_c70
*/
void sub_758e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758e00ULL || rel >= 0x758e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758e60 size=32 callers=1 calls=0
*/
void sub_758e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758e60ULL || rel >= 0x758e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00758e80 size=896 callers=1 calls=10
   calls: sub_6bd410, sub_70b670, sub_70b7c0, sub_70bfa0, sub_70c480, sub_70f110, sub_722e50, sub_73e7f0, sub_75a590, sub_75f330
*/
void sub_758e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x758e80ULL || rel >= 0x759200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759200 size=192 callers=0 calls=3
   calls: sub_713fb0, sub_714af0, sub_72c230
*/
void sub_759200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759200ULL || rel >= 0x7592c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007592c0 size=240 callers=0 calls=1
   calls: sub_73ec30
*/
void sub_7592c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7592c0ULL || rel >= 0x7593b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007593b0 size=176 callers=0 calls=4
   calls: sub_70d000, sub_70fe30, sub_72d1b0, sub_75ad70
*/
void sub_7593b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7593b0ULL || rel >= 0x759460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759460 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_54(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759460ULL || rel >= 0x759530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759530 size=80 callers=0 calls=0
*/
void sub_759530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759530ULL || rel >= 0x759580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759580 size=64 callers=1 calls=0
*/
void sub_759580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759580ULL || rel >= 0x7595c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007595c0 size=96 callers=0 calls=0
*/
void sub_7595c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7595c0ULL || rel >= 0x759620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759620 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_759620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759620ULL || rel >= 0x759690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759690 size=224 callers=0 calls=4
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_75fa00
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_55(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759690ULL || rel >= 0x759770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759770 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_759770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759770ULL || rel >= 0x759810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759810 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_759810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759810ULL || rel >= 0x7598b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007598b0 size=16 callers=0 calls=0
*/
void sub_7598b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7598b0ULL || rel >= 0x7598c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007598c0 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_759980, sub_c70
*/
void sub_7598c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7598c0ULL || rel >= 0x759980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759980 size=32 callers=1 calls=0
*/
void sub_759980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759980ULL || rel >= 0x7599a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007599a0 size=112 callers=0 calls=0
*/
void sub_7599a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7599a0ULL || rel >= 0x759a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759a10 size=544 callers=1 calls=6
   calls: sub_6bd410, sub_6f6640, sub_70bfa0, sub_70c480, sub_70f110, sub_714c90
*/
void sub_759a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759a10ULL || rel >= 0x759c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759c30 size=128 callers=0 calls=2
   calls: gflnet3_wire_format_lite_2, sub_713fb0
*/
void sub_759c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759c30ULL || rel >= 0x759cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759cb0 size=128 callers=0 calls=1
   calls: sub_70d0d0
*/
void sub_759cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759cb0ULL || rel >= 0x759d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759d30 size=272 callers=1 calls=2
   calls: sub_70d000, sub_70fe30
*/
void sub_759d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759d30ULL || rel >= 0x759e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759e40 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_56(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759e40ULL || rel >= 0x759f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759f10 size=80 callers=0 calls=0
*/
void sub_759f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759f10ULL || rel >= 0x759f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759f60 size=32 callers=0 calls=0
*/
void sub_759f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759f60ULL || rel >= 0x759f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759f80 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_759f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759f80ULL || rel >= 0x759ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00759ff0 size=416 callers=0 calls=5
   calls: gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_75b090, sub_75fa00
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_57(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x759ff0ULL || rel >= 0x75a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075a190 size=192 callers=1 calls=3
   calls: sub_70e0c0, sub_75a250, sub_ce0
*/
void sub_75a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75a190ULL || rel >= 0x75a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075a250 size=192 callers=1 calls=1
   calls: sub_ce0
*/
void sub_75a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75a250ULL || rel >= 0x75a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075a310 size=48 callers=0 calls=1
   calls: sub_75a190
*/
void sub_75a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75a310ULL || rel >= 0x75a340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075a340 size=16 callers=0 calls=0
*/
void sub_75a340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75a340ULL || rel >= 0x75a350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075a350 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_75a410, sub_c70
*/
void sub_75a350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75a350ULL || rel >= 0x75a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075a410 size=32 callers=1 calls=0
*/
void sub_75a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75a410ULL || rel >= 0x75a430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075a430 size=352 callers=0 calls=0
*/
void sub_75a430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75a430ULL || rel >= 0x75a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075a590 size=1312 callers=8 calls=12
   calls: sub_6bd410, sub_6f6640, sub_70b670, sub_70b7c0, sub_70beb0, sub_70bfa0, sub_70c480, sub_70f110, sub_714c90, sub_722e50, sub_759a10, sub_75f4b0
*/
void sub_75a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75a590ULL || rel >= 0x75aab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075aab0 size=304 callers=0 calls=6
   calls: gflnet3_wire_format_lite_2, gflnet3_wire_format_lite_4, sub_7137c0, sub_713970, sub_713f00, sub_714af0
*/
void sub_75aab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75aab0ULL || rel >= 0x75abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075abe0 size=400 callers=0 calls=2
   calls: sub_70cee0, sub_70d0d0
*/
void sub_75abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75abe0ULL || rel >= 0x75ad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ad70 size=592 callers=12 calls=4
   calls: sub_70d000, sub_70d040, sub_70fe30, sub_759d30
*/
void sub_75ad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ad70ULL || rel >= 0x75afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075afc0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75afc0ULL || rel >= 0x75b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b090 size=288 callers=1 calls=3
   calls: sub_722d70, sub_75f4b0, sub_75f9c0
*/
void sub_75b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b090ULL || rel >= 0x75b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b1b0 size=80 callers=0 calls=0
*/
void sub_75b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b1b0ULL || rel >= 0x75b200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b200 size=96 callers=0 calls=0
*/
void sub_75b200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b200ULL || rel >= 0x75b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b260 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_75b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b260ULL || rel >= 0x75b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b2d0 size=288 callers=0 calls=6
   calls: gflnet3_generated_message_util, gflnet3_repeated_field, sub_6bd410, sub_70e020, sub_71bab0, sub_75fa00
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_59(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b2d0ULL || rel >= 0x75b3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b3f0 size=368 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_75b3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b3f0ULL || rel >= 0x75b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b560 size=48 callers=0 calls=1
   calls: sub_75b3f0
*/
void sub_75b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b560ULL || rel >= 0x75b590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b590 size=16 callers=0 calls=0
*/
void sub_75b590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b590ULL || rel >= 0x75b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b5a0 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_75b660, sub_c70
*/
void sub_75b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b5a0ULL || rel >= 0x75b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b660 size=32 callers=1 calls=0
*/
void sub_75b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b660ULL || rel >= 0x75b680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b680 size=256 callers=0 calls=0
*/
void sub_75b680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b680ULL || rel >= 0x75b780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075b780 size=1328 callers=1 calls=13
   calls: sub_6bd410, sub_6f6640, sub_6f66a0, sub_6f67b0, sub_70b510, sub_70b590, sub_70b820, sub_70c190, sub_70c2e0, sub_70c480, sub_70f110, sub_714c90
   ... +1 more
*/
void sub_75b780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75b780ULL || rel >= 0x75bcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075bcb0 size=512 callers=4 calls=2
   calls: sub_6f67b0, sub_70c190
*/
void sub_75bcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75bcb0ULL || rel >= 0x75beb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075beb0 size=1040 callers=0 calls=4
   calls: gflnet3_wire_format_lite, gflnet3_wire_format_lite_2, sub_70cb60, sub_70cc80
*/
void sub_75beb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75beb0ULL || rel >= 0x75c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075c2c0 size=560 callers=0 calls=2
   calls: sub_70cee0, sub_70d0d0
*/
void sub_75c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75c2c0ULL || rel >= 0x75c4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075c4f0 size=736 callers=2 calls=2
   calls: sub_70d000, sub_70fe30
*/
void sub_75c4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75c4f0ULL || rel >= 0x75c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075c7d0 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75c7d0ULL || rel >= 0x75c8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075c8a0 size=80 callers=0 calls=0
*/
void sub_75c8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75c8a0ULL || rel >= 0x75c8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075c8f0 size=16 callers=0 calls=0
*/
void sub_75c8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75c8f0ULL || rel >= 0x75c900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075c900 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_75c900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75c900ULL || rel >= 0x75c970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075c970 size=32 callers=1 calls=0
*/
void sub_75c970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75c970ULL || rel >= 0x75c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075c990 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_75c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75c990ULL || rel >= 0x75ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ca50 size=48 callers=0 calls=1
   calls: sub_75c990
*/
void sub_75ca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ca50ULL || rel >= 0x75ca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ca80 size=16 callers=0 calls=0
*/
void sub_75ca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ca80ULL || rel >= 0x75ca90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ca90 size=96 callers=0 calls=2
   calls: sub_75caf0, sub_c70
*/
void sub_75ca90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ca90ULL || rel >= 0x75caf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075caf0 size=32 callers=1 calls=0
*/
void sub_75caf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75caf0ULL || rel >= 0x75cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075cb10 size=528 callers=1 calls=8
   calls: sub_6bd410, sub_70b670, sub_70b7c0, sub_70c480, sub_70f110, sub_722e50, sub_75b780, sub_75f620
*/
void sub_75cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75cb10ULL || rel >= 0x75cd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075cd20 size=128 callers=0 calls=1
   calls: sub_714af0
*/
void sub_75cd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75cd20ULL || rel >= 0x75cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075cda0 size=192 callers=0 calls=0
*/
void sub_75cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75cda0ULL || rel >= 0x75ce60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ce60 size=160 callers=0 calls=3
   calls: sub_70d000, sub_70fe30, sub_75c4f0
*/
void sub_75ce60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ce60ULL || rel >= 0x75cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075cf00 size=304 callers=0 calls=5
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_75d030
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_61(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75cf00ULL || rel >= 0x75d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d030 size=288 callers=3 calls=3
   calls: sub_722d70, sub_75f620, sub_75f9d0
*/
void sub_75d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d030ULL || rel >= 0x75d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d150 size=80 callers=0 calls=0
*/
void sub_75d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d150ULL || rel >= 0x75d1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d1a0 size=160 callers=1 calls=3
   calls: sub_6bd410, sub_70e020, sub_75d030
*/
void sub_75d1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d1a0ULL || rel >= 0x75d240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d240 size=16 callers=0 calls=0
*/
void sub_75d240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d240ULL || rel >= 0x75d250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d250 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_75d250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d250ULL || rel >= 0x75d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d2c0 size=288 callers=0 calls=5
   calls: gflnet3_generated_message_util, gflnet3_repeated_field, sub_6bd410, sub_70e020, sub_75fa00
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_62(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d2c0ULL || rel >= 0x75d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d3e0 size=208 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_75d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d3e0ULL || rel >= 0x75d4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d4b0 size=48 callers=0 calls=1
   calls: sub_75d3e0
*/
void sub_75d4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d4b0ULL || rel >= 0x75d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d4e0 size=16 callers=0 calls=0
*/
void sub_75d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d4e0ULL || rel >= 0x75d4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d4f0 size=192 callers=0 calls=4
   calls: sub_6fff50, sub_7007d0, sub_75d5b0, sub_c70
*/
void sub_75d4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d4f0ULL || rel >= 0x75d5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d5b0 size=32 callers=1 calls=0
*/
void sub_75d5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d5b0ULL || rel >= 0x75d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d5d0 size=128 callers=0 calls=0
*/
void sub_75d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d5d0ULL || rel >= 0x75d650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075d650 size=1024 callers=1 calls=12
   calls: sub_6bd410, sub_6f6640, sub_6f67b0, sub_70b510, sub_70b590, sub_70b820, sub_70c190, sub_70c2e0, sub_70c480, sub_70f110, sub_714c90, sub_75bcb0
*/
void sub_75d650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75d650ULL || rel >= 0x75da50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075da50 size=592 callers=0 calls=4
   calls: gflnet3_wire_format_lite_2, sub_70cb60, sub_70cc80, sub_713690
*/
void sub_75da50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75da50ULL || rel >= 0x75dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075dca0 size=464 callers=0 calls=2
   calls: sub_70cee0, sub_70d0d0
*/
void sub_75dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75dca0ULL || rel >= 0x75de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075de70 size=528 callers=1 calls=2
   calls: sub_70d000, sub_70fe30
*/
void sub_75de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75de70ULL || rel >= 0x75e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e080 size=208 callers=0 calls=2
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_63(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e080ULL || rel >= 0x75e150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e150 size=80 callers=0 calls=0
*/
void sub_75e150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e150ULL || rel >= 0x75e1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e1a0 size=16 callers=0 calls=0
*/
void sub_75e1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e1a0ULL || rel >= 0x75e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e1b0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_75e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e1b0ULL || rel >= 0x75e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e220 size=192 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_75e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e220ULL || rel >= 0x75e2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e2e0 size=48 callers=0 calls=1
   calls: sub_75e220
*/
void sub_75e2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e2e0ULL || rel >= 0x75e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e310 size=16 callers=0 calls=0
*/
void sub_75e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e310ULL || rel >= 0x75e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e320 size=96 callers=0 calls=2
   calls: sub_75e380, sub_c70
*/
void sub_75e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e320ULL || rel >= 0x75e380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e380 size=32 callers=1 calls=0
*/
void sub_75e380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e380ULL || rel >= 0x75e3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e3a0 size=128 callers=0 calls=0
*/
void sub_75e3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e3a0ULL || rel >= 0x75e420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e420 size=528 callers=0 calls=8
   calls: sub_6bd410, sub_70b670, sub_70b7c0, sub_70c480, sub_70f110, sub_722e50, sub_75d650, sub_75f7a0
*/
void sub_75e420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e420ULL || rel >= 0x75e630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e630 size=128 callers=0 calls=1
   calls: sub_714af0
*/
void sub_75e630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e630ULL || rel >= 0x75e6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e6b0 size=192 callers=0 calls=0
*/
void sub_75e6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e6b0ULL || rel >= 0x75e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e770 size=160 callers=0 calls=3
   calls: sub_70d000, sub_70fe30, sub_75de70
*/
void sub_75e770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e770ULL || rel >= 0x75e810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e810 size=304 callers=0 calls=5
   calls: gflnet3_descriptor_17, gflnet3_generated_message_util, sub_6bd410, sub_70e020, sub_75e940
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e810ULL || rel >= 0x75e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075e940 size=288 callers=1 calls=3
   calls: sub_722d70, sub_75f7a0, sub_75f9e0
*/
void sub_75e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75e940ULL || rel >= 0x75ea60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ea60 size=80 callers=0 calls=0
*/
void sub_75ea60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ea60ULL || rel >= 0x75eab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eab0 size=16 callers=0 calls=0
*/
void sub_75eab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eab0ULL || rel >= 0x75eac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eac0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_75eac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eac0ULL || rel >= 0x75eb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eb30 size=16 callers=0 calls=0
*/
void sub_75eb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eb30ULL || rel >= 0x75eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eb40 size=32 callers=0 calls=0
*/
void sub_75eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eb40ULL || rel >= 0x75eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eb60 size=16 callers=0 calls=0
*/
void sub_75eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eb60ULL || rel >= 0x75eb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eb70 size=16 callers=0 calls=0
*/
void sub_75eb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eb70ULL || rel >= 0x75eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eb80 size=32 callers=0 calls=0
*/
void sub_75eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eb80ULL || rel >= 0x75eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eba0 size=16 callers=0 calls=0
*/
void sub_75eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eba0ULL || rel >= 0x75ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ebb0 size=16 callers=0 calls=0
*/
void sub_75ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ebb0ULL || rel >= 0x75ebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ebc0 size=32 callers=0 calls=0
*/
void sub_75ebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ebc0ULL || rel >= 0x75ebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ebe0 size=16 callers=0 calls=0
*/
void sub_75ebe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ebe0ULL || rel >= 0x75ebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ebf0 size=16 callers=0 calls=0
*/
void sub_75ebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ebf0ULL || rel >= 0x75ec00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ec00 size=32 callers=0 calls=0
*/
void sub_75ec00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ec00ULL || rel >= 0x75ec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ec20 size=16 callers=0 calls=0
*/
void sub_75ec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ec20ULL || rel >= 0x75ec30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ec30 size=16 callers=0 calls=0
*/
void sub_75ec30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ec30ULL || rel >= 0x75ec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ec40 size=32 callers=0 calls=0
*/
void sub_75ec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ec40ULL || rel >= 0x75ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ec60 size=16 callers=0 calls=0
*/
void sub_75ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ec60ULL || rel >= 0x75ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ec70 size=16 callers=0 calls=0
*/
void sub_75ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ec70ULL || rel >= 0x75ec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ec80 size=32 callers=0 calls=0
*/
void sub_75ec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ec80ULL || rel >= 0x75eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eca0 size=16 callers=0 calls=0
*/
void sub_75eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eca0ULL || rel >= 0x75ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ecb0 size=16 callers=0 calls=0
*/
void sub_75ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ecb0ULL || rel >= 0x75ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ecc0 size=32 callers=0 calls=0
*/
void sub_75ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ecc0ULL || rel >= 0x75ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ece0 size=16 callers=0 calls=0
*/
void sub_75ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ece0ULL || rel >= 0x75ecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ecf0 size=16 callers=0 calls=0
*/
void sub_75ecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ecf0ULL || rel >= 0x75ed00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ed00 size=32 callers=0 calls=0
*/
void sub_75ed00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ed00ULL || rel >= 0x75ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ed20 size=16 callers=0 calls=0
*/
void sub_75ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ed20ULL || rel >= 0x75ed30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ed30 size=16 callers=0 calls=0
*/
void sub_75ed30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ed30ULL || rel >= 0x75ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ed40 size=32 callers=0 calls=0
*/
void sub_75ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ed40ULL || rel >= 0x75ed60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ed60 size=16 callers=0 calls=0
*/
void sub_75ed60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ed60ULL || rel >= 0x75ed70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ed70 size=16 callers=0 calls=0
*/
void sub_75ed70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ed70ULL || rel >= 0x75ed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ed80 size=32 callers=0 calls=0
*/
void sub_75ed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ed80ULL || rel >= 0x75eda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eda0 size=16 callers=0 calls=0
*/
void sub_75eda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eda0ULL || rel >= 0x75edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075edb0 size=16 callers=0 calls=0
*/
void sub_75edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75edb0ULL || rel >= 0x75edc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075edc0 size=32 callers=0 calls=0
*/
void sub_75edc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75edc0ULL || rel >= 0x75ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ede0 size=16 callers=0 calls=0
*/
void sub_75ede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ede0ULL || rel >= 0x75edf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075edf0 size=16 callers=0 calls=0
*/
void sub_75edf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75edf0ULL || rel >= 0x75ee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ee00 size=32 callers=0 calls=0
*/
void sub_75ee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ee00ULL || rel >= 0x75ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ee20 size=16 callers=0 calls=0
*/
void sub_75ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ee20ULL || rel >= 0x75ee30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ee30 size=16 callers=0 calls=0
*/
void sub_75ee30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ee30ULL || rel >= 0x75ee40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ee40 size=32 callers=0 calls=0
*/
void sub_75ee40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ee40ULL || rel >= 0x75ee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ee60 size=16 callers=0 calls=0
*/
void sub_75ee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ee60ULL || rel >= 0x75ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ee70 size=16 callers=0 calls=0
*/
void sub_75ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ee70ULL || rel >= 0x75ee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ee80 size=32 callers=0 calls=0
*/
void sub_75ee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ee80ULL || rel >= 0x75eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eea0 size=16 callers=0 calls=0
*/
void sub_75eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eea0ULL || rel >= 0x75eeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eeb0 size=16 callers=0 calls=0
*/
void sub_75eeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eeb0ULL || rel >= 0x75eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eec0 size=32 callers=0 calls=0
*/
void sub_75eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eec0ULL || rel >= 0x75eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eee0 size=16 callers=0 calls=0
*/
void sub_75eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eee0ULL || rel >= 0x75eef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eef0 size=16 callers=0 calls=0
*/
void sub_75eef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eef0ULL || rel >= 0x75ef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ef00 size=32 callers=0 calls=0
*/
void sub_75ef00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ef00ULL || rel >= 0x75ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ef20 size=16 callers=0 calls=0
*/
void sub_75ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ef20ULL || rel >= 0x75ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ef30 size=16 callers=0 calls=0
*/
void sub_75ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ef30ULL || rel >= 0x75ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ef40 size=32 callers=0 calls=0
*/
void sub_75ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ef40ULL || rel >= 0x75ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ef60 size=16 callers=0 calls=0
*/
void sub_75ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ef60ULL || rel >= 0x75ef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ef70 size=16 callers=0 calls=0
*/
void sub_75ef70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ef70ULL || rel >= 0x75ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ef80 size=32 callers=0 calls=0
*/
void sub_75ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ef80ULL || rel >= 0x75efa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075efa0 size=16 callers=0 calls=0
*/
void sub_75efa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75efa0ULL || rel >= 0x75efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075efb0 size=16 callers=0 calls=0
*/
void sub_75efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75efb0ULL || rel >= 0x75efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075efc0 size=32 callers=0 calls=0
*/
void sub_75efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75efc0ULL || rel >= 0x75efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075efe0 size=16 callers=0 calls=0
*/
void sub_75efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75efe0ULL || rel >= 0x75eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075eff0 size=16 callers=0 calls=0
*/
void sub_75eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75eff0ULL || rel >= 0x75f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f000 size=32 callers=0 calls=0
*/
void sub_75f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f000ULL || rel >= 0x75f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f020 size=16 callers=0 calls=0
*/
void sub_75f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f020ULL || rel >= 0x75f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f030 size=16 callers=0 calls=0
*/
void sub_75f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f030ULL || rel >= 0x75f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f040 size=32 callers=0 calls=0
*/
void sub_75f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f040ULL || rel >= 0x75f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f060 size=16 callers=0 calls=0
*/
void sub_75f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f060ULL || rel >= 0x75f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f070 size=16 callers=0 calls=0
*/
void sub_75f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f070ULL || rel >= 0x75f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f080 size=32 callers=0 calls=0
*/
void sub_75f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f080ULL || rel >= 0x75f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f0a0 size=16 callers=0 calls=0
*/
void sub_75f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f0a0ULL || rel >= 0x75f0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f0b0 size=16 callers=0 calls=0
*/
void sub_75f0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f0b0ULL || rel >= 0x75f0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f0c0 size=32 callers=0 calls=0
*/
void sub_75f0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f0c0ULL || rel >= 0x75f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f0e0 size=16 callers=0 calls=0
*/
void sub_75f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f0e0ULL || rel >= 0x75f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f0f0 size=16 callers=0 calls=0
*/
void sub_75f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f0f0ULL || rel >= 0x75f100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f100 size=32 callers=0 calls=0
*/
void sub_75f100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f100ULL || rel >= 0x75f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f120 size=16 callers=0 calls=0
*/
void sub_75f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f120ULL || rel >= 0x75f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f130 size=16 callers=0 calls=0
*/
void sub_75f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f130ULL || rel >= 0x75f140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f140 size=32 callers=0 calls=0
*/
void sub_75f140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f140ULL || rel >= 0x75f160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f160 size=16 callers=0 calls=0
*/
void sub_75f160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f160ULL || rel >= 0x75f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f170 size=16 callers=2 calls=0
*/
void sub_75f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f170ULL || rel >= 0x75f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f180 size=416 callers=0 calls=5
   calls: sub_6fff50, sub_7007d0, sub_70da70, sub_70db70, sub_c70
*/
void sub_75f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f180ULL || rel >= 0x75f320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f320 size=16 callers=0 calls=0
*/
void sub_75f320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f320ULL || rel >= 0x75f330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f330 size=16 callers=9 calls=0
*/
void sub_75f330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f330ULL || rel >= 0x75f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f340 size=352 callers=0 calls=5
   calls: sub_6fff50, sub_7007d0, sub_70da70, sub_70db70, sub_c70
*/
void sub_75f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f340ULL || rel >= 0x75f4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f4a0 size=16 callers=0 calls=0
*/
void sub_75f4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f4a0ULL || rel >= 0x75f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f4b0 size=16 callers=2 calls=0
*/
void sub_75f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f4b0ULL || rel >= 0x75f4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f4c0 size=336 callers=0 calls=5
   calls: sub_6fff50, sub_7007d0, sub_70da70, sub_70db70, sub_c70
*/
void sub_75f4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f4c0ULL || rel >= 0x75f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f610 size=16 callers=0 calls=0
*/
void sub_75f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f610ULL || rel >= 0x75f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f620 size=16 callers=2 calls=0
*/
void sub_75f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f620ULL || rel >= 0x75f630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f630 size=352 callers=0 calls=5
   calls: sub_6fff50, sub_7007d0, sub_70da70, sub_70db70, sub_c70
*/
void sub_75f630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f630ULL || rel >= 0x75f790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f790 size=16 callers=0 calls=0
*/
void sub_75f790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f790ULL || rel >= 0x75f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f7a0 size=16 callers=2 calls=0
*/
void sub_75f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f7a0ULL || rel >= 0x75f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f7b0 size=336 callers=0 calls=5
   calls: sub_6fff50, sub_7007d0, sub_70da70, sub_70db70, sub_c70
*/
void sub_75f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f7b0ULL || rel >= 0x75f900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f900 size=16 callers=0 calls=0
*/
void sub_75f900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f900ULL || rel >= 0x75f910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f910 size=16 callers=2 calls=0
*/
void sub_75f910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f910ULL || rel >= 0x75f920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f920 size=16 callers=2 calls=0
*/
void sub_75f920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f920ULL || rel >= 0x75f930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f930 size=16 callers=2 calls=0
*/
void sub_75f930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f930ULL || rel >= 0x75f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f940 size=16 callers=2 calls=0
*/
void sub_75f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f940ULL || rel >= 0x75f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f950 size=16 callers=2 calls=0
*/
void sub_75f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f950ULL || rel >= 0x75f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f960 size=16 callers=2 calls=0
*/
void sub_75f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f960ULL || rel >= 0x75f970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f970 size=16 callers=2 calls=0
*/
void sub_75f970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f970ULL || rel >= 0x75f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f980 size=16 callers=2 calls=0
*/
void sub_75f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f980ULL || rel >= 0x75f990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f990 size=16 callers=2 calls=0
*/
void sub_75f990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f990ULL || rel >= 0x75f9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f9a0 size=16 callers=2 calls=0
*/
void sub_75f9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f9a0ULL || rel >= 0x75f9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f9b0 size=16 callers=2 calls=0
*/
void sub_75f9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f9b0ULL || rel >= 0x75f9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f9c0 size=16 callers=2 calls=0
*/
void sub_75f9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f9c0ULL || rel >= 0x75f9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f9d0 size=16 callers=2 calls=0
*/
void sub_75f9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f9d0ULL || rel >= 0x75f9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f9e0 size=16 callers=2 calls=0
*/
void sub_75f9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f9e0ULL || rel >= 0x75f9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075f9f0 size=16 callers=0 calls=0
*/
void sub_75f9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75f9f0ULL || rel >= 0x75fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075fa00 size=64 callers=39 calls=0
*/
void sub_75fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75fa00ULL || rel >= 0x75fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075fa40 size=64 callers=1 calls=0
*/
void sub_75fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75fa40ULL || rel >= 0x75fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075fa80 size=144 callers=1 calls=3
   calls: sub_7603f0, sub_760440, sub_ce0
*/
void sub_75fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75fa80ULL || rel >= 0x75fb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075fb10 size=48 callers=0 calls=1
   calls: sub_75fa80
*/
void sub_75fb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75fb10ULL || rel >= 0x75fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075fb40 size=192 callers=1 calls=8
   calls: gflnet3_descriptor_database_2, gflnet3_message_lite_2, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_745490, sub_745910
   ref: Invalid file descriptor data passed to EncodedDescriptorDatabase::Add().
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor_
*/
void gflnet3_descriptor_database(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75fb40ULL || rel >= 0x75fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075fc00 size=720 callers=1 calls=11
   calls: gflnet3_descriptor_database_3, gflnet3_descriptor_database_4, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_705c40, sub_760490, sub_760970, sub_ce0
   ref: File already exists in database: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor_
*/
void gflnet3_descriptor_database_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75fc00ULL || rel >= 0x75fed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075fed0 size=112 callers=0 calls=1
   calls: sub_761590
*/
void sub_75fed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75fed0ULL || rel >= 0x75ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ff40 size=80 callers=0 calls=1
   calls: sub_75ff90
*/
void sub_75ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ff40ULL || rel >= 0x75ff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0075ff90 size=336 callers=1 calls=1
   calls: sub_760d10
*/
void sub_75ff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x75ff90ULL || rel >= 0x7600e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007600e0 size=160 callers=0 calls=3
   calls: gflnet3_message_lite_2, sub_7616a0, sub_ce0
*/
void sub_7600e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7600e0ULL || rel >= 0x760180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00760180 size=16 callers=0 calls=0
*/
void sub_760180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x760180ULL || rel >= 0x760190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00760190 size=608 callers=0 calls=3
   calls: sub_7619d0, sub_c70, sub_ce0
*/
void sub_760190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x760190ULL || rel >= 0x7603f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007603f0 size=80 callers=3 calls=2
   calls: sub_7603f0, sub_ce0
*/
void sub_7603f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7603f0ULL || rel >= 0x760440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00760440 size=80 callers=3 calls=2
   calls: sub_760440, sub_ce0
*/
void sub_760440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x760440ULL || rel >= 0x760490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00760490 size=240 callers=1 calls=4
   calls: sub_6a54a0, sub_760be0, sub_c70, sub_ce0
*/
void sub_760490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x760490ULL || rel >= 0x760580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00760580 size=1008 callers=4 calls=11
   calls: sub_6a54a0, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_760be0, sub_760d10, sub_760e40, sub_c70, sub_ce0
   ref: Symbol name "
   ref: " conflicts with the existing symbol "
   ref: Invalid symbol name: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor_
*/
void gflnet3_descriptor_database_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x760580ULL || rel >= 0x760970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00760970 size=208 callers=2 calls=2
   calls: gflnet3_descriptor_database_4, sub_760970
*/
void sub_760970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x760970ULL || rel >= 0x760a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00760a40 size=416 callers=2 calls=8
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50, sub_761130, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor_
   ref: Extension conflicts with extension already in database: extend 
*/
void gflnet3_descriptor_database_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x760a40ULL || rel >= 0x760be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00760be0 size=304 callers=2 calls=0
*/
void sub_760be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x760be0ULL || rel >= 0x760d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00760d10 size=304 callers=3 calls=0
*/
void sub_760d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x760d10ULL || rel >= 0x760e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00760e40 size=752 callers=1 calls=0
*/
void sub_760e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x760e40ULL || rel >= 0x761130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00761130 size=256 callers=1 calls=4
   calls: sub_6a54a0, sub_761230, sub_c70, sub_ce0
*/
void sub_761130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x761130ULL || rel >= 0x761230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00761230 size=864 callers=1 calls=0
*/
void sub_761230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x761230ULL || rel >= 0x761590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00761590 size=272 callers=1 calls=0
*/
void sub_761590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x761590ULL || rel >= 0x7616a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007616a0 size=320 callers=1 calls=1
   calls: sub_7617e0
*/
void sub_7616a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7616a0ULL || rel >= 0x7617e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007617e0 size=496 callers=1 calls=0
*/
void sub_7617e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7617e0ULL || rel >= 0x7619d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007619d0 size=496 callers=1 calls=0
*/
void sub_7619d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7619d0ULL || rel >= 0x761bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00761bc0 size=96 callers=15 calls=1
   calls: gflnet3_substitute
*/
void sub_761bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x761bc0ULL || rel >= 0x761c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00761c20 size=848 callers=23 calls=9
   calls: sub_6fe290, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50, sub_c70, sub_ce0
   ref: Invalid strings::Substitute() format string: "
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/stubs/subst
   ref:  args were given.  Full format string was: "
   ref: strings::Substitute format string invalid: asked for "$
   ref: ", but only 
*/
void gflnet3_substitute(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x761c20ULL || rel >= 0x761f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00761f70 size=64 callers=1 calls=0
*/
void sub_761f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x761f70ULL || rel >= 0x761fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00761fb0 size=544 callers=3 calls=3
   calls: sub_76f850, sub_770c10, sub_770c50
*/
void sub_761fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x761fb0ULL || rel >= 0x7621d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007621d0 size=576 callers=1 calls=8
   calls: sub_762410, sub_76bc00, sub_76f910, sub_770c10, sub_770cd0, sub_771ff0, sub_774690, sub_777d30
*/
void sub_7621d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7621d0ULL || rel >= 0x762410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762410 size=176 callers=2 calls=12
   calls: sub_762700, sub_765bc0, sub_76a5c0, sub_76ba80, sub_771520, sub_771ff0, sub_772950, sub_777d50, sub_778230, sub_779480, sub_77adb0, sub_77bec0
*/
void sub_762410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762410ULL || rel >= 0x7624c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007624c0 size=560 callers=3 calls=8
   calls: sub_762410, sub_76bc00, sub_76f990, sub_770c10, sub_770cd0, sub_771ff0, sub_774690, sub_777d30
*/
void sub_7624c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7624c0ULL || rel >= 0x7626f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007626f0 size=16 callers=2 calls=0
*/
void sub_7626f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7626f0ULL || rel >= 0x762700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762700 size=400 callers=5 calls=12
   calls: sub_766220, sub_76be10, sub_76beb0, sub_76bec0, sub_76bed0, sub_771ff0, sub_7723b0, sub_774690, sub_779db0, sub_779f10, sub_77a070, sub_77fd10
*/
void sub_762700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762700ULL || rel >= 0x762890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762890 size=96 callers=13 calls=5
   calls: sub_76ba80, sub_771ff0, sub_772950, sub_77adb0, sub_77bec0
*/
void sub_762890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762890ULL || rel >= 0x7628f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007628f0 size=64 callers=12 calls=3
   calls: sub_771520, sub_777d50, sub_778230
*/
void sub_7628f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7628f0ULL || rel >= 0x762930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762930 size=16 callers=262 calls=0
*/
void sub_762930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762930ULL || rel >= 0x762940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762940 size=16 callers=140 calls=0
*/
void sub_762940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762940ULL || rel >= 0x762950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762950 size=544 callers=1 calls=4
   calls: sub_76f850, sub_770c10, sub_770cd0, sub_771120
*/
void sub_762950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762950ULL || rel >= 0x762b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762b70 size=64 callers=1 calls=1
   calls: sub_771120
*/
void sub_762b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762b70ULL || rel >= 0x762bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762bb0 size=320 callers=0 calls=0
*/
void sub_762bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762bb0ULL || rel >= 0x762cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762cf0 size=16 callers=0 calls=0
*/
void sub_762cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762cf0ULL || rel >= 0x762d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762d00 size=16 callers=0 calls=0
*/
void sub_762d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762d00ULL || rel >= 0x762d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762d10 size=16 callers=0 calls=0
*/
void sub_762d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762d10ULL || rel >= 0x762d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762d20 size=16 callers=0 calls=0
*/
void sub_762d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762d20ULL || rel >= 0x762d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762d30 size=16 callers=1 calls=0
*/
void sub_762d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762d30ULL || rel >= 0x762d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762d40 size=16 callers=11 calls=0
*/
void sub_762d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762d40ULL || rel >= 0x762d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762d50 size=32 callers=118 calls=1
   calls: sub_771ff0
*/
void sub_762d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762d50ULL || rel >= 0x762d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762d70 size=32 callers=127 calls=1
   calls: sub_772130
*/
void sub_762d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762d70ULL || rel >= 0x762d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762d90 size=16 callers=23 calls=0
*/
void sub_762d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762d90ULL || rel >= 0x762da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762da0 size=16 callers=1 calls=0
*/
void sub_762da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762da0ULL || rel >= 0x762db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762db0 size=48 callers=31 calls=1
   calls: sub_772810
*/
void sub_762db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762db0ULL || rel >= 0x762de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762de0 size=112 callers=13 calls=2
   calls: sub_772810, sub_782d90
*/
void sub_762de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762de0ULL || rel >= 0x762e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762e50 size=224 callers=1 calls=3
   calls: sub_772810, sub_779330, sub_782d90
*/
void sub_762e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762e50ULL || rel >= 0x762f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762f30 size=160 callers=2 calls=2
   calls: sub_772810, sub_782d70
*/
void sub_762f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762f30ULL || rel >= 0x762fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762fd0 size=16 callers=14 calls=0
*/
void sub_762fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762fd0ULL || rel >= 0x762fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762fe0 size=16 callers=7 calls=0
*/
void sub_762fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762fe0ULL || rel >= 0x762ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00762ff0 size=16 callers=6 calls=0
*/
void sub_762ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x762ff0ULL || rel >= 0x763000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763000 size=16 callers=39 calls=0
*/
void sub_763000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763000ULL || rel >= 0x763010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763010 size=16 callers=6 calls=0
*/
void sub_763010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763010ULL || rel >= 0x763020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763020 size=16 callers=25 calls=0
*/
void sub_763020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763020ULL || rel >= 0x763030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763030 size=32 callers=2 calls=0
*/
void sub_763030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763030ULL || rel >= 0x763050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763050 size=64 callers=0 calls=1
   calls: sub_771ea0
*/
void sub_763050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763050ULL || rel >= 0x763090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763090 size=96 callers=0 calls=1
   calls: sub_771ea0
*/
void sub_763090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763090ULL || rel >= 0x7630f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007630f0 size=64 callers=0 calls=2
   calls: sub_77f890, sub_782dc0
*/
void sub_7630f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7630f0ULL || rel >= 0x763130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763130 size=64 callers=2 calls=2
   calls: sub_77f890, sub_782db0
*/
void sub_763130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763130ULL || rel >= 0x763170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763170 size=96 callers=1 calls=3
   calls: sub_771ff0, sub_774690, sub_77f890
*/
void sub_763170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763170ULL || rel >= 0x7631d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007631d0 size=112 callers=1 calls=4
   calls: sub_771ff0, sub_774690, sub_77f890, sub_782de0
*/
void sub_7631d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7631d0ULL || rel >= 0x763240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763240 size=240 callers=1 calls=5
   calls: sub_771ff0, sub_774690, sub_77f890, sub_782dd0, sub_782de0
*/
void sub_763240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763240ULL || rel >= 0x763330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763330 size=80 callers=2 calls=2
   calls: sub_771ff0, sub_77f890
*/
void sub_763330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763330ULL || rel >= 0x763380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763380 size=336 callers=33 calls=8
   calls: sub_776e30, sub_776f70, sub_7770b0, sub_7771f0, sub_77d660, sub_77d7a0, sub_77d8e0, sub_77da20
*/
void sub_763380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763380ULL || rel >= 0x7634d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007634d0 size=256 callers=79 calls=0
*/
void sub_7634d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7634d0ULL || rel >= 0x7635d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007635d0 size=96 callers=30 calls=0
*/
void sub_7635d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7635d0ULL || rel >= 0x763630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763630 size=96 callers=13 calls=1
   calls: sub_77fb20
*/
void sub_763630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763630ULL || rel >= 0x763690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763690 size=80 callers=2 calls=1
   calls: sub_77fb20
*/
void sub_763690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763690ULL || rel >= 0x7636e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007636e0 size=592 callers=0 calls=18
   calls: sub_763ff0, sub_7640e0, sub_7641d0, sub_7642c0, sub_7643b0, sub_764640, sub_764740, sub_764840, sub_764940, sub_764a40, sub_770ce0, sub_771d70
   ... +6 more
*/
void sub_7636e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7636e0ULL || rel >= 0x763930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763930 size=224 callers=1 calls=7
   calls: sub_763f00, sub_764540, sub_7651c0, sub_765520, sub_770ce0, sub_771d70, sub_778100
*/
void sub_763930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763930ULL || rel >= 0x763a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763a10 size=80 callers=13 calls=2
   calls: sub_77f9d0, sub_77fb20
*/
void sub_763a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763a10ULL || rel >= 0x763a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763a60 size=608 callers=5 calls=25
   calls: sub_763930, sub_763ff0, sub_7640e0, sub_7641d0, sub_7642c0, sub_7643b0, sub_764640, sub_764740, sub_764840, sub_764940, sub_764a40, sub_770ce0
   ... +13 more
*/
void sub_763a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763a60ULL || rel >= 0x763cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763cc0 size=64 callers=11 calls=1
   calls: sub_770ce0
*/
void sub_763cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763cc0ULL || rel >= 0x763d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763d00 size=80 callers=8 calls=2
   calls: sub_770ce0, sub_777ea0
*/
void sub_763d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763d00ULL || rel >= 0x763d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763d50 size=112 callers=5 calls=2
   calls: sub_770ce0, sub_771d70
*/
void sub_763d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763d50ULL || rel >= 0x763dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763dc0 size=16 callers=10 calls=0
*/
void sub_763dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763dc0ULL || rel >= 0x763dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763dd0 size=16 callers=9 calls=0
*/
void sub_763dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763dd0ULL || rel >= 0x763de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763de0 size=32 callers=6 calls=1
   calls: sub_773f10
*/
void sub_763de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763de0ULL || rel >= 0x763e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763e00 size=32 callers=11 calls=0
*/
void sub_763e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763e00ULL || rel >= 0x763e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763e20 size=64 callers=2 calls=1
   calls: sub_773f10
*/
void sub_763e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763e20ULL || rel >= 0x763e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763e60 size=160 callers=16 calls=6
   calls: sub_763f00, sub_763ff0, sub_7640e0, sub_7641d0, sub_7642c0, sub_7643b0
*/
void sub_763e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763e60ULL || rel >= 0x763f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763f00 size=240 callers=4 calls=11
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_772a90, sub_773790, sub_774690, sub_77fb20, sub_77fd10
*/
void sub_763f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763f00ULL || rel >= 0x763ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00763ff0 size=240 callers=5 calls=12
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_772bd0, sub_7738d0, sub_774690, sub_774910, sub_77fb20, sub_77fd10
*/
void sub_763ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x763ff0ULL || rel >= 0x7640e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007640e0 size=240 callers=5 calls=12
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_772d10, sub_773a10, sub_774690, sub_774910, sub_77fb20, sub_77fd10
*/
void sub_7640e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7640e0ULL || rel >= 0x7641d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007641d0 size=240 callers=5 calls=12
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_772e50, sub_773b50, sub_774690, sub_774910, sub_77fb20, sub_77fd10
*/
void sub_7641d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7641d0ULL || rel >= 0x7642c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007642c0 size=240 callers=5 calls=12
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_772f90, sub_773c90, sub_774690, sub_774910, sub_77fb20, sub_77fd10
*/
void sub_7642c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7642c0ULL || rel >= 0x7643b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007643b0 size=240 callers=5 calls=12
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_7730d0, sub_773dd0, sub_774690, sub_774910, sub_77fb20, sub_77fd10
*/
void sub_7643b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7643b0ULL || rel >= 0x7644a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007644a0 size=160 callers=20 calls=6
   calls: sub_764540, sub_764640, sub_764740, sub_764840, sub_764940, sub_764a40
*/
void sub_7644a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7644a0ULL || rel >= 0x764540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764540 size=256 callers=4 calls=12
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_772a90, sub_773790, sub_773f10, sub_774690, sub_77fb20, sub_77fd10
*/
void sub_764540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764540ULL || rel >= 0x764640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764640 size=256 callers=5 calls=13
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_772bd0, sub_7738d0, sub_773f10, sub_774690, sub_774910, sub_77fb20
   ... +1 more
*/
void sub_764640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764640ULL || rel >= 0x764740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764740 size=256 callers=5 calls=13
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_772d10, sub_773a10, sub_773f10, sub_774690, sub_774910, sub_77fb20
   ... +1 more
*/
void sub_764740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764740ULL || rel >= 0x764840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764840 size=256 callers=5 calls=13
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_772e50, sub_773b50, sub_773f10, sub_774690, sub_774910, sub_77fb20
   ... +1 more
*/
void sub_764840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764840ULL || rel >= 0x764940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764940 size=256 callers=5 calls=13
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_772f90, sub_773c90, sub_773f10, sub_774690, sub_774910, sub_77fb20
   ... +1 more
*/
void sub_764940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764940ULL || rel >= 0x764a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764a40 size=256 callers=5 calls=13
   calls: sub_76bc60, sub_76bc80, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_7730d0, sub_773dd0, sub_773f10, sub_774690, sub_774910, sub_77fb20
   ... +1 more
*/
void sub_764a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764a40ULL || rel >= 0x764b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764b40 size=128 callers=81 calls=5
   calls: sub_770ce0, sub_771ff0, sub_7723b0, sub_774690, sub_77fd10
*/
void sub_764b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764b40ULL || rel >= 0x764bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764bc0 size=112 callers=6 calls=3
   calls: sub_76bc60, sub_771ff0, sub_774690
*/
void sub_764bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764bc0ULL || rel >= 0x764c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764c30 size=96 callers=52 calls=0
*/
void sub_764c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764c30ULL || rel >= 0x764c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764c90 size=16 callers=4 calls=0
*/
void sub_764c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764c90ULL || rel >= 0x764ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764ca0 size=144 callers=1 calls=6
   calls: sub_773790, sub_7738d0, sub_773a10, sub_773b50, sub_773c90, sub_773dd0
*/
void sub_764ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764ca0ULL || rel >= 0x764d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764d30 size=112 callers=0 calls=6
   calls: sub_772a90, sub_772bd0, sub_772d10, sub_772e50, sub_772f90, sub_7730d0
*/
void sub_764d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764d30ULL || rel >= 0x764da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764da0 size=80 callers=2 calls=1
   calls: sub_764c30
*/
void sub_764da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764da0ULL || rel >= 0x764df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00764df0 size=640 callers=48 calls=20
   calls: sub_763ff0, sub_7640e0, sub_7641d0, sub_7642c0, sub_7643b0, sub_764640, sub_764740, sub_764840, sub_764940, sub_764a40, sub_764c30, sub_7650c0
   ... +8 more
*/
void sub_764df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x764df0ULL || rel >= 0x765070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765070 size=80 callers=0 calls=1
   calls: sub_764c30
*/
void sub_765070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765070ULL || rel >= 0x7650c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007650c0 size=192 callers=1 calls=6
   calls: sub_772a90, sub_772bd0, sub_772d10, sub_772e50, sub_772f90, sub_7730d0
*/
void sub_7650c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7650c0ULL || rel >= 0x765180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765180 size=64 callers=39 calls=0
*/
void sub_765180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765180ULL || rel >= 0x7651c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007651c0 size=144 callers=16 calls=4
   calls: sub_763f00, sub_764540, sub_770ce0, sub_771d70
*/
void sub_7651c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7651c0ULL || rel >= 0x765250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765250 size=144 callers=0 calls=4
   calls: sub_763ff0, sub_764640, sub_770ce0, sub_771d70
*/
void sub_765250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765250ULL || rel >= 0x7652e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007652e0 size=144 callers=0 calls=4
   calls: sub_7640e0, sub_764740, sub_770ce0, sub_771d70
*/
void sub_7652e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7652e0ULL || rel >= 0x765370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765370 size=144 callers=0 calls=4
   calls: sub_7641d0, sub_764840, sub_770ce0, sub_771d70
*/
void sub_765370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765370ULL || rel >= 0x765400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765400 size=144 callers=0 calls=4
   calls: sub_7642c0, sub_764940, sub_770ce0, sub_771d70
*/
void sub_765400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765400ULL || rel >= 0x765490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765490 size=144 callers=0 calls=4
   calls: sub_7643b0, sub_764a40, sub_770ce0, sub_771d70
*/
void sub_765490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765490ULL || rel >= 0x765520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765520 size=144 callers=54 calls=4
   calls: sub_763f00, sub_764540, sub_770ce0, sub_771d70
*/
void sub_765520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765520ULL || rel >= 0x7655b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007655b0 size=64 callers=6 calls=1
   calls: sub_771520
*/
void sub_7655b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7655b0ULL || rel >= 0x7655f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007655f0 size=80 callers=2 calls=2
   calls: sub_7713d0, sub_771520
*/
void sub_7655f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7655f0ULL || rel >= 0x765640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765640 size=48 callers=1 calls=1
   calls: sub_771520
*/
void sub_765640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765640ULL || rel >= 0x765670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765670 size=96 callers=2 calls=3
   calls: sub_770ce0, sub_7713d0, sub_771520
*/
void sub_765670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765670ULL || rel >= 0x7656d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007656d0 size=80 callers=9 calls=2
   calls: sub_770ce0, sub_7713d0
*/
void sub_7656d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7656d0ULL || rel >= 0x765720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765720 size=272 callers=2 calls=9
   calls: sub_76bd60, sub_76bdf0, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_774690, sub_778eb0, sub_77fd10
*/
void sub_765720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765720ULL || rel >= 0x765830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765830 size=112 callers=9 calls=5
   calls: sub_76bd60, sub_76bdf0, sub_771ff0, sub_774690, sub_778eb0
*/
void sub_765830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765830ULL || rel >= 0x7658a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007658a0 size=16 callers=11 calls=0
*/
void sub_7658a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7658a0ULL || rel >= 0x7658b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007658b0 size=128 callers=2 calls=6
   calls: sub_76bd60, sub_76bdf0, sub_771ff0, sub_7723b0, sub_774690, sub_778eb0
*/
void sub_7658b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7658b0ULL || rel >= 0x765930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765930 size=176 callers=6 calls=7
   calls: sub_76bd60, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_774690, sub_77fd10
*/
void sub_765930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765930ULL || rel >= 0x7659e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007659e0 size=176 callers=6 calls=7
   calls: sub_76bd60, sub_770ce0, sub_771c40, sub_771ff0, sub_7723b0, sub_774690, sub_77fd10
*/
void sub_7659e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7659e0ULL || rel >= 0x765a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765a90 size=32 callers=6 calls=1
   calls: sub_771280
*/
void sub_765a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765a90ULL || rel >= 0x765ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765ab0 size=16 callers=13 calls=0
*/
void sub_765ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765ab0ULL || rel >= 0x765ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765ac0 size=16 callers=5 calls=0
*/
void sub_765ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765ac0ULL || rel >= 0x765ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765ad0 size=16 callers=2 calls=0
*/
void sub_765ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765ad0ULL || rel >= 0x765ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765ae0 size=32 callers=24 calls=1
   calls: sub_773370
*/
void sub_765ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765ae0ULL || rel >= 0x765b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765b00 size=112 callers=6 calls=3
   calls: sub_773210, sub_7734d0, sub_780ca0
*/
void sub_765b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765b00ULL || rel >= 0x765b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765b70 size=80 callers=29 calls=3
   calls: sub_773210, sub_7734d0, sub_780ca0
*/
void sub_765b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765b70ULL || rel >= 0x765bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765bc0 size=256 callers=1 calls=4
   calls: sub_765cc0, sub_773210, sub_7734d0, sub_780ca0
*/
void sub_765bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765bc0ULL || rel >= 0x765cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765cc0 size=208 callers=8 calls=4
   calls: sub_773210, sub_773370, sub_7734d0, sub_780ca0
*/
void sub_765cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765cc0ULL || rel >= 0x765d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765d90 size=32 callers=13 calls=1
   calls: sub_7734d0
*/
void sub_765d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765d90ULL || rel >= 0x765db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765db0 size=32 callers=7 calls=0
*/
void sub_765db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765db0ULL || rel >= 0x765dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765dd0 size=16 callers=84 calls=0
*/
void sub_765dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765dd0ULL || rel >= 0x765de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765de0 size=128 callers=56 calls=1
   calls: sub_773210
*/
void sub_765de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765de0ULL || rel >= 0x765e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765e60 size=128 callers=14 calls=1
   calls: sub_773210
*/
void sub_765e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765e60ULL || rel >= 0x765ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765ee0 size=16 callers=4 calls=0
*/
void sub_765ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765ee0ULL || rel >= 0x765ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765ef0 size=32 callers=7 calls=0
*/
void sub_765ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765ef0ULL || rel >= 0x765f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00765f10 size=384 callers=2 calls=12
   calls: sub_766090, sub_76c420, sub_76c470, sub_76c4a0, sub_76c5e0, sub_771ff0, sub_773210, sub_774690, sub_782940, sub_782980, sub_7829a0, sub_782cf0
*/
void sub_765f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x765f10ULL || rel >= 0x766090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00766090 size=304 callers=5 calls=5
   calls: sub_773210, sub_779db0, sub_779f10, sub_77a070, sub_780ca0
*/
void sub_766090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x766090ULL || rel >= 0x7661c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007661c0 size=96 callers=28 calls=2
   calls: sub_779db0, sub_77a070
*/
void sub_7661c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7661c0ULL || rel >= 0x766220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

