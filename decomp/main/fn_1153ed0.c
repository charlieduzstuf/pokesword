/* main functions 01153ed0..0116e170 (145 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01153ed0 size=48 callers=0 calls=0
*/
void sub_1153ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153ed0ULL || rel >= 0x1153f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01153f00 size=448 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: CHECK failed: file != NULL: 
   ref: cooking_matching_data.proto
*/
void contents_cooking_matching_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1153f00ULL || rel >= 0x11540c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011540c0 size=192 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_matching_data.proto
*/
void contents_cooking_matching_data_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11540c0ULL || rel >= 0x1154180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154180 size=80 callers=0 calls=0
*/
void sub_1154180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154180ULL || rel >= 0x11541d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011541d0 size=304 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_matching_data.proto
*/
void contents_cooking_matching_data_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11541d0ULL || rel >= 0x1154300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154300 size=48 callers=8 calls=0
*/
void sub_1154300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154300ULL || rel >= 0x1154330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154330 size=112 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_cooking_matching_data_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154330ULL || rel >= 0x11543a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011543a0 size=96 callers=5 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_11543a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11543a0ULL || rel >= 0x1154400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154400 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1154400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154400ULL || rel >= 0x1154460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154460 size=16 callers=0 calls=0
*/
void sub_1154460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154460ULL || rel >= 0x1154470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154470 size=224 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_matching_data.proto
*/
void contents_cooking_matching_data_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154470ULL || rel >= 0x1154550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154550 size=112 callers=0 calls=2
   calls: sub_11545c0, sub_c70
*/
void sub_1154550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154550ULL || rel >= 0x11545c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011545c0 size=32 callers=1 calls=0
*/
void sub_11545c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11545c0ULL || rel >= 0x11545e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011545e0 size=16 callers=0 calls=0
*/
void sub_11545e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11545e0ULL || rel >= 0x11545f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011545f0 size=1024 callers=1 calls=4
   calls: sub_70bfa0, sub_70c190, sub_70c480, sub_713480
*/
void sub_11545f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11545f0ULL || rel >= 0x11549f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011549f0 size=176 callers=0 calls=2
   calls: sub_713fb0, sub_714090
*/
void sub_11549f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11549f0ULL || rel >= 0x1154aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154aa0 size=496 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_1154aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154aa0ULL || rel >= 0x1154c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154c90 size=304 callers=1 calls=1
   calls: sub_70d000
*/
void sub_1154c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154c90ULL || rel >= 0x1154dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154dc0 size=448 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_matching_data.proto
*/
void contents_cooking_matching_data_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154dc0ULL || rel >= 0x1154f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154f80 size=80 callers=0 calls=0
*/
void sub_1154f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154f80ULL || rel >= 0x1154fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01154fd0 size=128 callers=1 calls=0
*/
void sub_1154fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1154fd0ULL || rel >= 0x1155050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155050 size=16 callers=0 calls=0
*/
void sub_1155050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155050ULL || rel >= 0x1155060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155060 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1155060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155060ULL || rel >= 0x11550d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011550d0 size=16 callers=0 calls=0
*/
void sub_11550d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11550d0ULL || rel >= 0x11550e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011550e0 size=32 callers=0 calls=0
*/
void sub_11550e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11550e0ULL || rel >= 0x1155100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155100 size=16 callers=0 calls=0
*/
void sub_1155100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155100ULL || rel >= 0x1155110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155110 size=16 callers=0 calls=0
*/
void sub_1155110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155110ULL || rel >= 0x1155120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155120 size=224 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_matching_data.proto
*/
void contents_cooking_matching_data_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155120ULL || rel >= 0x1155200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155200 size=416 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: cooking_transform.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_cooking_transform(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155200ULL || rel >= 0x11553a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011553a0 size=176 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: cooking_transform.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_cooking_transform_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11553a0ULL || rel >= 0x1155450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155450 size=80 callers=0 calls=0
*/
void sub_1155450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155450ULL || rel >= 0x11554a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011554a0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: cooking_transform.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_cooking_transform_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11554a0ULL || rel >= 0x11555c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011555c0 size=32 callers=4 calls=0
*/
void sub_11555c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11555c0ULL || rel >= 0x11555e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011555e0 size=64 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_cooking_transform_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11555e0ULL || rel >= 0x1155620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155620 size=96 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1155620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155620ULL || rel >= 0x1155680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155680 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1155680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155680ULL || rel >= 0x11556e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011556e0 size=16 callers=0 calls=0
*/
void sub_11556e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11556e0ULL || rel >= 0x11556f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011556f0 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: cooking_transform.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_cooking_transform_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11556f0ULL || rel >= 0x11557c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011557c0 size=96 callers=0 calls=2
   calls: sub_1155820, sub_c70
*/
void sub_11557c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11557c0ULL || rel >= 0x1155820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155820 size=32 callers=1 calls=0
*/
void sub_1155820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155820ULL || rel >= 0x1155840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155840 size=16 callers=0 calls=0
*/
void sub_1155840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155840ULL || rel >= 0x1155850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155850 size=528 callers=1 calls=4
   calls: sub_70bdc0, sub_70c190, sub_70c480, sub_713480
*/
void sub_1155850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155850ULL || rel >= 0x1155a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155a60 size=96 callers=0 calls=1
   calls: sub_714090
*/
void sub_1155a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155a60ULL || rel >= 0x1155ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155ac0 size=160 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_1155ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155ac0ULL || rel >= 0x1155b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155b60 size=112 callers=1 calls=1
   calls: sub_70d000
*/
void sub_1155b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155b60ULL || rel >= 0x1155bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155bd0 size=384 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: cooking_transform.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_cooking_transform_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155bd0ULL || rel >= 0x1155d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155d50 size=80 callers=0 calls=0
*/
void sub_1155d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155d50ULL || rel >= 0x1155da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155da0 size=80 callers=1 calls=0
*/
void sub_1155da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155da0ULL || rel >= 0x1155df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155df0 size=16 callers=0 calls=0
*/
void sub_1155df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155df0ULL || rel >= 0x1155e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155e00 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1155e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155e00ULL || rel >= 0x1155e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155e70 size=16 callers=0 calls=0
*/
void sub_1155e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155e70ULL || rel >= 0x1155e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155e80 size=32 callers=0 calls=0
*/
void sub_1155e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155e80ULL || rel >= 0x1155ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155ea0 size=16 callers=0 calls=0
*/
void sub_1155ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155ea0ULL || rel >= 0x1155eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155eb0 size=16 callers=0 calls=0
*/
void sub_1155eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155eb0ULL || rel >= 0x1155ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155ec0 size=208 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: cooking_transform.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_cooking_transform_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155ec0ULL || rel >= 0x1155f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01155f90 size=400 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: CHECK failed: file != NULL: 
   ref: cooking_spiece.proto
*/
void contents_cooking_spiece(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1155f90ULL || rel >= 0x1156120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156120 size=176 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_spiece.proto
*/
void contents_cooking_spiece_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156120ULL || rel >= 0x11561d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011561d0 size=80 callers=0 calls=0
*/
void sub_11561d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11561d0ULL || rel >= 0x1156220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156220 size=304 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_spiece.proto
*/
void contents_cooking_spiece_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156220ULL || rel >= 0x1156350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156350 size=48 callers=2 calls=0
*/
void sub_1156350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156350ULL || rel >= 0x1156380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156380 size=128 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
*/
void contents_cooking_spiece_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156380ULL || rel >= 0x1156400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156400 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1156400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156400ULL || rel >= 0x1156460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156460 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_1156460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156460ULL || rel >= 0x11564c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011564c0 size=16 callers=0 calls=0
*/
void sub_11564c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11564c0ULL || rel >= 0x11564d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011564d0 size=224 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_spiece.proto
*/
void contents_cooking_spiece_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11564d0ULL || rel >= 0x11565b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011565b0 size=96 callers=0 calls=2
   calls: sub_1156610, sub_c70
*/
void sub_11565b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11565b0ULL || rel >= 0x1156610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156610 size=32 callers=1 calls=0
*/
void sub_1156610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156610ULL || rel >= 0x1156630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156630 size=32 callers=0 calls=0
*/
void sub_1156630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156630ULL || rel >= 0x1156650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156650 size=896 callers=1 calls=4
   calls: sub_70bdc0, sub_70bfa0, sub_70c480, sub_713480
*/
void sub_1156650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156650ULL || rel >= 0x11569d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011569d0 size=160 callers=0 calls=2
   calls: sub_713e50, sub_713fb0
*/
void sub_11569d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11569d0ULL || rel >= 0x1156a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156a70 size=144 callers=0 calls=0
*/
void sub_1156a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156a70ULL || rel >= 0x1156b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156b00 size=96 callers=1 calls=0
*/
void sub_1156b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156b00ULL || rel >= 0x1156b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156b60 size=448 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_spiece.proto
*/
void contents_cooking_spiece_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156b60ULL || rel >= 0x1156d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156d20 size=80 callers=0 calls=0
*/
void sub_1156d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156d20ULL || rel >= 0x1156d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156d70 size=16 callers=0 calls=0
*/
void sub_1156d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156d70ULL || rel >= 0x1156d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156d80 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_1156d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156d80ULL || rel >= 0x1156df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156df0 size=16 callers=0 calls=0
*/
void sub_1156df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156df0ULL || rel >= 0x1156e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156e00 size=32 callers=0 calls=0
*/
void sub_1156e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156e00ULL || rel >= 0x1156e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156e20 size=16 callers=0 calls=0
*/
void sub_1156e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156e20ULL || rel >= 0x1156e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156e30 size=16 callers=0 calls=0
*/
void sub_1156e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156e30ULL || rel >= 0x1156e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156e40 size=224 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data
   ref: cooking_spiece.proto
*/
void contents_cooking_spiece_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156e40ULL || rel >= 0x1156f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01156f20 size=1552 callers=1 calls=11
   calls: sub_1159160, sub_11593e0, sub_11596b0, sub_1159b90, sub_5cf8c0, sub_5cf8e0, sub_5cf8f0, sub_5d1b50, sub_5d2010, sub_5d2070, sub_5e2350
*/
void sub_1156f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1156f20ULL || rel >= 0x1157530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01157530 size=192 callers=0 calls=1
   calls: sub_5cf8f0
*/
void sub_1157530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1157530ULL || rel >= 0x11575f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011575f0 size=16 callers=0 calls=0
*/
void sub_11575f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11575f0ULL || rel >= 0x1157600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01157600 size=16 callers=1 calls=0
*/
void sub_1157600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1157600ULL || rel >= 0x1157610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01157610 size=16 callers=1 calls=0
*/
void sub_1157610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1157610ULL || rel >= 0x1157620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01157620 size=448 callers=11 calls=4
   calls: sub_5cf8e0, sub_5cf8f0, sub_986200, sub_ea9e40
*/
void sub_1157620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1157620ULL || rel >= 0x11577e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011577e0 size=128 callers=4 calls=1
   calls: sub_1157860
*/
void sub_11577e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11577e0ULL || rel >= 0x1157860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01157860 size=1296 callers=12 calls=5
   calls: sub_112e3e0, sub_1159e60, sub_5cf8e0, sub_5cf8f0, sub_bf0820
*/
void sub_1157860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1157860ULL || rel >= 0x1157d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01157d70 size=160 callers=2 calls=1
   calls: sub_1157860
*/
void sub_1157d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1157d70ULL || rel >= 0x1157e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01157e10 size=224 callers=2 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1157e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1157e10ULL || rel >= 0x1157ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01157ef0 size=432 callers=71 calls=3
   calls: sub_11580a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1157ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1157ef0ULL || rel >= 0x11580a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011580a0 size=800 callers=5 calls=0
*/
void sub_11580a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11580a0ULL || rel >= 0x11583c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011583c0 size=640 callers=2 calls=3
   calls: sub_11580a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_11583c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11583c0ULL || rel >= 0x1158640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01158640 size=496 callers=17 calls=3
   calls: sub_11580a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1158640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1158640ULL || rel >= 0x1158830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01158830 size=528 callers=1 calls=4
   calls: sub_1157860, sub_11580a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1158830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1158830ULL || rel >= 0x1158a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01158a40 size=464 callers=2 calls=3
   calls: sub_11580a0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1158a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1158a40ULL || rel >= 0x1158c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01158c10 size=368 callers=1 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1158c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1158c10ULL || rel >= 0x1158d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01158d80 size=640 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1158d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1158d80ULL || rel >= 0x1159000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159000 size=16 callers=0 calls=0
*/
void sub_1159000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159000ULL || rel >= 0x1159010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159010 size=240 callers=0 calls=0
*/
void sub_1159010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159010ULL || rel >= 0x1159100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159100 size=16 callers=0 calls=0
*/
void sub_1159100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159100ULL || rel >= 0x1159110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159110 size=16 callers=0 calls=0
*/
void sub_1159110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159110ULL || rel >= 0x1159120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159120 size=16 callers=0 calls=0
*/
void sub_1159120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159120ULL || rel >= 0x1159130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159130 size=16 callers=0 calls=0
*/
void sub_1159130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159130ULL || rel >= 0x1159140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159140 size=16 callers=0 calls=0
*/
void sub_1159140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159140ULL || rel >= 0x1159150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159150 size=16 callers=0 calls=0
*/
void sub_1159150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159150ULL || rel >= 0x1159160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159160 size=640 callers=1 calls=0
*/
void sub_1159160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159160ULL || rel >= 0x11593e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011593e0 size=720 callers=1 calls=0
*/
void sub_11593e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11593e0ULL || rel >= 0x11596b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011596b0 size=208 callers=2 calls=4
   calls: sub_5d12d0, sub_5d1b50, sub_5d1ea0, sub_5ecb70
*/
void sub_11596b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11596b0ULL || rel >= 0x1159780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159780 size=96 callers=0 calls=0
*/
void sub_1159780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159780ULL || rel >= 0x11597e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011597e0 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_11597e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11597e0ULL || rel >= 0x1159890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159890 size=32 callers=0 calls=0
*/
void sub_1159890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159890ULL || rel >= 0x11598b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011598b0 size=96 callers=0 calls=0
*/
void sub_11598b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11598b0ULL || rel >= 0x1159910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159910 size=96 callers=0 calls=0
*/
void sub_1159910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159910ULL || rel >= 0x1159970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159970 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_1159970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159970ULL || rel >= 0x1159a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159a20 size=176 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_1159a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159a20ULL || rel >= 0x1159ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159ad0 size=96 callers=0 calls=0
*/
void sub_1159ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159ad0ULL || rel >= 0x1159b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159b30 size=96 callers=0 calls=0
*/
void sub_1159b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159b30ULL || rel >= 0x1159b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159b90 size=304 callers=2 calls=4
   calls: sub_5d12d0, sub_5d1b50, sub_5d1ea0, sub_5ecb70
*/
void sub_1159b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159b90ULL || rel >= 0x1159cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159cc0 size=16 callers=0 calls=0
*/
void sub_1159cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159cc0ULL || rel >= 0x1159cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159cd0 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_1159cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159cd0ULL || rel >= 0x1159d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159d40 size=16 callers=0 calls=0
*/
void sub_1159d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159d40ULL || rel >= 0x1159d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159d50 size=16 callers=0 calls=0
*/
void sub_1159d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159d50ULL || rel >= 0x1159d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159d60 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_1159d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159d60ULL || rel >= 0x1159dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159dd0 size=112 callers=0 calls=1
   calls: sub_e9e9a0
*/
void sub_1159dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159dd0ULL || rel >= 0x1159e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159e40 size=16 callers=0 calls=0
*/
void sub_1159e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159e40ULL || rel >= 0x1159e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159e50 size=16 callers=0 calls=0
*/
void sub_1159e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159e50ULL || rel >= 0x1159e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159e60 size=336 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1159e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159e60ULL || rel >= 0x1159fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01159fb0 size=80 callers=0 calls=0
*/
void sub_1159fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1159fb0ULL || rel >= 0x115a000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a000 size=240 callers=0 calls=0
*/
void sub_115a000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a000ULL || rel >= 0x115a0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a0f0 size=80 callers=0 calls=0
*/
void sub_115a0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a0f0ULL || rel >= 0x115a140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a140 size=80 callers=0 calls=0
*/
void sub_115a140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a140ULL || rel >= 0x115a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a190 size=16 callers=0 calls=0
*/
void sub_115a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a190ULL || rel >= 0x115a1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a1a0 size=16 callers=0 calls=0
*/
void sub_115a1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a1a0ULL || rel >= 0x115a1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a1b0 size=80 callers=0 calls=0
*/
void sub_115a1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a1b0ULL || rel >= 0x115a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a200 size=80 callers=0 calls=0
*/
void sub_115a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a200ULL || rel >= 0x115a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a250 size=64 callers=0 calls=0
*/
void sub_115a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a250ULL || rel >= 0x115a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a290 size=80 callers=2 calls=1
   calls: sub_1061800
*/
void sub_115a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a290ULL || rel >= 0x115a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a2e0 size=560 callers=0 calls=5
   calls: sub_115a520, sub_115f490, sub_115f4b0, sub_115ff00, sub_5cf8c0
*/
void sub_115a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a2e0ULL || rel >= 0x115a510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a510 size=16 callers=1 calls=0
*/
void sub_115a510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a510ULL || rel >= 0x115a520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a520 size=432 callers=2 calls=0
*/
void sub_115a520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a520ULL || rel >= 0x115a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a6d0 size=16 callers=0 calls=0
*/
void sub_115a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a6d0ULL || rel >= 0x115a6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a6e0 size=16 callers=91 calls=0
*/
void sub_115a6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a6e0ULL || rel >= 0x115a6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a6f0 size=32 callers=6 calls=0
*/
void sub_115a6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a6f0ULL || rel >= 0x115a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a710 size=16 callers=2 calls=0
*/
void sub_115a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a710ULL || rel >= 0x115a720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a720 size=16 callers=1 calls=0
*/
void sub_115a720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a720ULL || rel >= 0x115a730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a730 size=16 callers=1 calls=0
*/
void sub_115a730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a730ULL || rel >= 0x115a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a740 size=16 callers=1 calls=0
*/
void sub_115a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a740ULL || rel >= 0x115a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a750 size=144 callers=2 calls=0
*/
void sub_115a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a750ULL || rel >= 0x115a7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115a7e0 size=928 callers=3 calls=5
   calls: sub_1136f70, sub_115ea70, sub_115eba0, sub_967240, sub_bf05e0
*/
void sub_115a7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115a7e0ULL || rel >= 0x115ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ab80 size=352 callers=15 calls=2
   calls: sub_115edb0, sub_115f830
*/
void sub_115ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ab80ULL || rel >= 0x115ace0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ace0 size=256 callers=2 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_115ace0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ace0ULL || rel >= 0x115ade0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ade0 size=1312 callers=9 calls=13
   calls: sub_1136390, sub_1137010, sub_1137070, sub_1139e90, sub_115ea70, sub_115eba0, sub_115edb0, sub_115f830, sub_1160e20, sub_5cf8e0, sub_5cf8f0, sub_967240
   ... +1 more
*/
void sub_115ade0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ade0ULL || rel >= 0x115b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115b300 size=416 callers=2 calls=4
   calls: sub_1137070, sub_5cf8e0, sub_5cf8f0, sub_bf05e0
*/
void sub_115b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115b300ULL || rel >= 0x115b4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115b4a0 size=448 callers=10 calls=4
   calls: sub_115edb0, sub_115f830, sub_5cf8e0, sub_5cf8f0
*/
void sub_115b4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115b4a0ULL || rel >= 0x115b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115b660 size=176 callers=7 calls=1
   calls: sub_115b4a0
*/
void sub_115b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115b660ULL || rel >= 0x115b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115b710 size=352 callers=10 calls=2
   calls: sub_112e830, sub_112ea00
*/
void sub_115b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115b710ULL || rel >= 0x115b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115b870 size=352 callers=10 calls=2
   calls: sub_112e830, sub_112ea00
*/
void sub_115b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115b870ULL || rel >= 0x115b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115b9d0 size=16 callers=1 calls=0
*/
void sub_115b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115b9d0ULL || rel >= 0x115b9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115b9e0 size=16 callers=8 calls=0
*/
void sub_115b9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115b9e0ULL || rel >= 0x115b9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115b9f0 size=16 callers=16 calls=0
*/
void sub_115b9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115b9f0ULL || rel >= 0x115ba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ba00 size=16 callers=1 calls=0
*/
void sub_115ba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ba00ULL || rel >= 0x115ba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ba10 size=16 callers=3 calls=0
*/
void sub_115ba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ba10ULL || rel >= 0x115ba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ba20 size=16 callers=32 calls=0
*/
void sub_115ba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ba20ULL || rel >= 0x115ba30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ba30 size=272 callers=6 calls=1
   calls: sub_115e980
*/
void sub_115ba30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ba30ULL || rel >= 0x115bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bb40 size=16 callers=18 calls=0
*/
void sub_115bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bb40ULL || rel >= 0x115bb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bb50 size=96 callers=1 calls=0
*/
void sub_115bb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bb50ULL || rel >= 0x115bbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bbb0 size=16 callers=3 calls=0
*/
void sub_115bbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bbb0ULL || rel >= 0x115bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bbc0 size=16 callers=12 calls=0
*/
void sub_115bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bbc0ULL || rel >= 0x115bbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bbd0 size=16 callers=3 calls=0
*/
void sub_115bbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bbd0ULL || rel >= 0x115bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bbe0 size=16 callers=1 calls=0
*/
void sub_115bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bbe0ULL || rel >= 0x115bbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bbf0 size=16 callers=1 calls=0
*/
void sub_115bbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bbf0ULL || rel >= 0x115bc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bc00 size=16 callers=7 calls=0
*/
void sub_115bc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bc00ULL || rel >= 0x115bc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bc10 size=128 callers=13 calls=2
   calls: sub_1144ce0, sub_115bc90
*/
void sub_115bc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bc10ULL || rel >= 0x115bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bc90 size=160 callers=1 calls=1
   calls: sub_1160e20
*/
void sub_115bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bc90ULL || rel >= 0x115bd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bd30 size=176 callers=2 calls=2
   calls: sub_1144eb0, sub_1161280
*/
void sub_115bd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bd30ULL || rel >= 0x115bde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bde0 size=16 callers=1 calls=0
*/
void sub_115bde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bde0ULL || rel >= 0x115bdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bdf0 size=32 callers=2 calls=0
*/
void sub_115bdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bdf0ULL || rel >= 0x115be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115be10 size=128 callers=2 calls=0
*/
void sub_115be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115be10ULL || rel >= 0x115be90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115be90 size=176 callers=1 calls=0
*/
void sub_115be90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115be90ULL || rel >= 0x115bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bf40 size=96 callers=1 calls=0
*/
void sub_115bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bf40ULL || rel >= 0x115bfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bfa0 size=16 callers=7 calls=0
*/
void sub_115bfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bfa0ULL || rel >= 0x115bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bfb0 size=16 callers=6 calls=0
*/
void sub_115bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bfb0ULL || rel >= 0x115bfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bfc0 size=16 callers=2 calls=0
*/
void sub_115bfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bfc0ULL || rel >= 0x115bfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115bfd0 size=608 callers=3 calls=2
   calls: sub_112e830, sub_112ea00
*/
void sub_115bfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115bfd0ULL || rel >= 0x115c230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115c230 size=656 callers=1 calls=2
   calls: sub_112e830, sub_112ea00
*/
void sub_115c230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115c230ULL || rel >= 0x115c4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115c4c0 size=448 callers=4 calls=2
   calls: sub_112e830, sub_972c70
*/
void sub_115c4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115c4c0ULL || rel >= 0x115c680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115c680 size=656 callers=2 calls=2
   calls: sub_112e830, sub_112ea00
*/
void sub_115c680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115c680ULL || rel >= 0x115c910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115c910 size=128 callers=1 calls=1
   calls: sub_115f540
*/
void sub_115c910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115c910ULL || rel >= 0x115c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115c990 size=192 callers=1 calls=5
   calls: sub_5cfaf0, sub_794330, sub_d0c0, sub_ea7c40, sub_ea8c70
   ref: Play_Camp_Call
*/
void Play_Camp_Call(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115c990ULL || rel >= 0x115ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ca50 size=208 callers=8 calls=0
   ref: 33s?fff?
*/
void f_33s_fff(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ca50ULL || rel >= 0x115cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115cb20 size=16 callers=1 calls=0
*/
void sub_115cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115cb20ULL || rel >= 0x115cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115cb30 size=32 callers=1 calls=0
*/
void sub_115cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115cb30ULL || rel >= 0x115cb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115cb50 size=704 callers=0 calls=8
   calls: sub_11274b0, sub_1128e40, sub_1131f60, sub_1132310, sub_1164e20, sub_1306f20, sub_5cfad0, sub_967240
*/
void sub_115cb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115cb50ULL || rel >= 0x115ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ce10 size=400 callers=0 calls=4
   calls: sub_11274b0, sub_1132310, sub_1306f20, sub_967240
*/
void sub_115ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ce10ULL || rel >= 0x115cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115cfa0 size=4256 callers=0 calls=22
   calls: sub_1128340, sub_11288e0, sub_112e830, sub_112ea00, sub_115e980, sub_115f4d0, sub_115f590, sub_1160470, sub_11611a0, sub_13575b0, sub_13576a0, sub_13576d0
   ... +10 more
*/
void sub_115cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115cfa0ULL || rel >= 0x115e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115e040 size=1776 callers=0 calls=16
   calls: sub_11274b0, sub_1130c00, sub_1131f60, sub_113daf0, sub_115f020, sub_115f260, sub_1164020, sub_11640a0, sub_1164140, sub_11644f0, sub_1306f20, sub_59bee0
   ... +4 more
   ref: kwArea
*/
void kwArea(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115e040ULL || rel >= 0x115e730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115e730 size=464 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_115e730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115e730ULL || rel >= 0x115e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115e900 size=16 callers=0 calls=0
*/
void sub_115e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115e900ULL || rel >= 0x115e910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115e910 size=16 callers=0 calls=0
*/
void sub_115e910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115e910ULL || rel >= 0x115e920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115e920 size=16 callers=0 calls=0
*/
void sub_115e920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115e920ULL || rel >= 0x115e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115e930 size=16 callers=0 calls=0
*/
void sub_115e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115e930ULL || rel >= 0x115e940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115e940 size=16 callers=0 calls=0
*/
void sub_115e940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115e940ULL || rel >= 0x115e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115e950 size=16 callers=0 calls=0
*/
void sub_115e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115e950ULL || rel >= 0x115e960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115e960 size=16 callers=0 calls=0
*/
void sub_115e960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115e960ULL || rel >= 0x115e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115e970 size=16 callers=0 calls=0
*/
void sub_115e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115e970ULL || rel >= 0x115e980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115e980 size=240 callers=2 calls=1
   calls: sub_607750
*/
void sub_115e980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115e980ULL || rel >= 0x115ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ea70 size=304 callers=2 calls=1
   calls: sub_115f5a0
*/
void sub_115ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ea70ULL || rel >= 0x115eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115eba0 size=528 callers=2 calls=0
*/
void sub_115eba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115eba0ULL || rel >= 0x115edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115edb0 size=464 callers=3 calls=0
*/
void sub_115edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115edb0ULL || rel >= 0x115ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ef80 size=112 callers=0 calls=2
   calls: sub_1139e90, sub_bf05e0
*/
void sub_115ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ef80ULL || rel >= 0x115eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115eff0 size=16 callers=0 calls=0
*/
void sub_115eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115eff0ULL || rel >= 0x115f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f000 size=16 callers=0 calls=0
*/
void sub_115f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f000ULL || rel >= 0x115f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f010 size=16 callers=0 calls=0
*/
void sub_115f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f010ULL || rel >= 0x115f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f020 size=336 callers=3 calls=3
   calls: sub_115f170, sub_5cf8e0, sub_5cf8f0
*/
void sub_115f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f020ULL || rel >= 0x115f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f170 size=240 callers=4 calls=1
   calls: sub_607750
*/
void sub_115f170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f170ULL || rel >= 0x115f260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f260 size=224 callers=9 calls=1
   calls: sub_1163f80
*/
void sub_115f260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f260ULL || rel >= 0x115f340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f340 size=16 callers=0 calls=0
*/
void sub_115f340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f340ULL || rel >= 0x115f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f350 size=16 callers=0 calls=0
*/
void sub_115f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f350ULL || rel >= 0x115f360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f360 size=16 callers=0 calls=0
*/
void sub_115f360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f360ULL || rel >= 0x115f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f370 size=16 callers=0 calls=0
*/
void sub_115f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f370ULL || rel >= 0x115f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f380 size=272 callers=0 calls=1
   calls: sub_1c0
*/
void sub_115f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f380ULL || rel >= 0x115f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f490 size=32 callers=2 calls=0
*/
void sub_115f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f490ULL || rel >= 0x115f4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f4b0 size=32 callers=2 calls=0
*/
void sub_115f4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f4b0ULL || rel >= 0x115f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f4d0 size=112 callers=2 calls=0
*/
void sub_115f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f4d0ULL || rel >= 0x115f540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f540 size=80 callers=1 calls=0
*/
void sub_115f540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f540ULL || rel >= 0x115f590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f590 size=16 callers=2 calls=0
*/
void sub_115f590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f590ULL || rel >= 0x115f5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f5a0 size=272 callers=1 calls=3
   calls: sub_1127360, sub_5e2350, sub_bf05e0
*/
void sub_115f5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f5a0ULL || rel >= 0x115f6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f6b0 size=80 callers=26 calls=0
*/
void sub_115f6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f6b0ULL || rel >= 0x115f700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f700 size=304 callers=6 calls=1
   calls: sub_967240
*/
void sub_115f700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f700ULL || rel >= 0x115f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f830 size=304 callers=5 calls=1
   calls: sub_967240
*/
void sub_115f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f830ULL || rel >= 0x115f960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115f960 size=160 callers=0 calls=0
*/
void sub_115f960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115f960ULL || rel >= 0x115fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115fa00 size=160 callers=0 calls=0
*/
void sub_115fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115fa00ULL || rel >= 0x115faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115faa0 size=240 callers=0 calls=0
*/
void sub_115faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115faa0ULL || rel >= 0x115fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115fb90 size=160 callers=0 calls=0
*/
void sub_115fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115fb90ULL || rel >= 0x115fc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115fc30 size=160 callers=0 calls=0
*/
void sub_115fc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115fc30ULL || rel >= 0x115fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115fcd0 size=16 callers=0 calls=0
*/
void sub_115fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115fcd0ULL || rel >= 0x115fce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115fce0 size=16 callers=0 calls=0
*/
void sub_115fce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115fce0ULL || rel >= 0x115fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115fcf0 size=160 callers=0 calls=0
*/
void sub_115fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115fcf0ULL || rel >= 0x115fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115fd90 size=160 callers=0 calls=0
*/
void sub_115fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115fd90ULL || rel >= 0x115fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115fe30 size=208 callers=0 calls=0
*/
void sub_115fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115fe30ULL || rel >= 0x115ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0115ff00 size=432 callers=3 calls=6
   calls: sub_11600b0, sub_1160210, sub_1160370, sub_1398430, sub_5cf8c0, sub_5db1b0
*/
void sub_115ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x115ff00ULL || rel >= 0x11600b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011600b0 size=352 callers=1 calls=0
*/
void sub_11600b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11600b0ULL || rel >= 0x1160210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01160210 size=352 callers=1 calls=0
*/
void sub_1160210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1160210ULL || rel >= 0x1160370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01160370 size=256 callers=1 calls=3
   calls: sub_1161bc0, sub_1162c90, sub_1163a00
*/
void sub_1160370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1160370ULL || rel >= 0x1160470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01160470 size=336 callers=3 calls=3
   calls: sub_11605c0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1160470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1160470ULL || rel >= 0x11605c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011605c0 size=1104 callers=1 calls=12
   calls: sub_113e990, sub_113e9e0, sub_113ea00, sub_113ea20, sub_1160a10, sub_1161cb0, sub_1162ca0, sub_1162d40, sub_1163140, sub_1163180, sub_5cf8e0, sub_5cf8f0
*/
void sub_11605c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11605c0ULL || rel >= 0x1160a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01160a10 size=704 callers=1 calls=5
   calls: sub_1130c00, sub_5cf8e0, sub_5cf8f0, sub_967240, sub_bf0820
*/
void sub_1160a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1160a10ULL || rel >= 0x1160cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01160cd0 size=16 callers=0 calls=0
*/
void sub_1160cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1160cd0ULL || rel >= 0x1160ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01160ce0 size=16 callers=1 calls=0
*/
void sub_1160ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1160ce0ULL || rel >= 0x1160cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01160cf0 size=96 callers=3 calls=1
   calls: sub_1162d40
*/
void sub_1160cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1160cf0ULL || rel >= 0x1160d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01160d50 size=16 callers=13 calls=0
*/
void sub_1160d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1160d50ULL || rel >= 0x1160d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01160d60 size=192 callers=2 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1160d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1160d60ULL || rel >= 0x1160e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01160e20 size=896 callers=58 calls=6
   calls: sub_113e990, sub_1162d40, sub_1163130, sub_1163180, sub_5cf8e0, sub_5cf8f0
*/
void sub_1160e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1160e20ULL || rel >= 0x11611a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011611a0 size=48 callers=43 calls=1
   calls: sub_113e990
*/
void sub_11611a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11611a0ULL || rel >= 0x11611d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011611d0 size=16 callers=6 calls=0
*/
void sub_11611d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11611d0ULL || rel >= 0x11611e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011611e0 size=160 callers=6 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_11611e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11611e0ULL || rel >= 0x1161280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161280 size=432 callers=4 calls=4
   calls: sub_113e990, sub_113ea10, sub_5cf8e0, sub_5cf8f0
*/
void sub_1161280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161280ULL || rel >= 0x1161430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161430 size=288 callers=8 calls=3
   calls: sub_13facc0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1161430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161430ULL || rel >= 0x1161550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161550 size=80 callers=5 calls=1
   calls: sub_113e9c0
*/
void sub_1161550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161550ULL || rel >= 0x11615a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011615a0 size=464 callers=1 calls=4
   calls: sub_113e990, sub_113ea20, sub_1161cb0, sub_5cf8f0
*/
void sub_11615a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11615a0ULL || rel >= 0x1161770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161770 size=272 callers=1 calls=1
   calls: sub_113e990
*/
void sub_1161770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161770ULL || rel >= 0x1161880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161880 size=160 callers=27 calls=2
   calls: sub_1162c90, sub_1163a00
*/
void sub_1161880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161880ULL || rel >= 0x1161920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161920 size=256 callers=0 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1161920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161920ULL || rel >= 0x1161a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161a20 size=16 callers=0 calls=0
*/
void sub_1161a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161a20ULL || rel >= 0x1161a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161a30 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1161a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161a30ULL || rel >= 0x1161aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161aa0 size=16 callers=0 calls=0
*/
void sub_1161aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161aa0ULL || rel >= 0x1161ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161ab0 size=16 callers=0 calls=0
*/
void sub_1161ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161ab0ULL || rel >= 0x1161ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161ac0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1161ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161ac0ULL || rel >= 0x1161b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161b30 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1161b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161b30ULL || rel >= 0x1161ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161ba0 size=16 callers=0 calls=0
*/
void sub_1161ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161ba0ULL || rel >= 0x1161bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161bb0 size=16 callers=0 calls=0
*/
void sub_1161bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161bb0ULL || rel >= 0x1161bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161bc0 size=240 callers=1 calls=1
   calls: sub_1161f40
*/
void sub_1161bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161bc0ULL || rel >= 0x1161cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161cb0 size=448 callers=4 calls=0
*/
void sub_1161cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161cb0ULL || rel >= 0x1161e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161e70 size=32 callers=0 calls=0
*/
void sub_1161e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161e70ULL || rel >= 0x1161e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161e90 size=16 callers=0 calls=0
*/
void sub_1161e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161e90ULL || rel >= 0x1161ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161ea0 size=32 callers=0 calls=0
*/
void sub_1161ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161ea0ULL || rel >= 0x1161ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161ec0 size=32 callers=0 calls=0
*/
void sub_1161ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161ec0ULL || rel >= 0x1161ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161ee0 size=16 callers=0 calls=0
*/
void sub_1161ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161ee0ULL || rel >= 0x1161ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161ef0 size=16 callers=0 calls=0
*/
void sub_1161ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161ef0ULL || rel >= 0x1161f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161f00 size=32 callers=0 calls=0
*/
void sub_1161f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161f00ULL || rel >= 0x1161f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161f20 size=32 callers=0 calls=0
*/
void sub_1161f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161f20ULL || rel >= 0x1161f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161f40 size=64 callers=2 calls=1
   calls: sub_1162c30
*/
void sub_1161f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161f40ULL || rel >= 0x1161f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01161f80 size=272 callers=0 calls=1
   calls: sub_11631c0
*/
void sub_1161f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1161f80ULL || rel >= 0x1162090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162090 size=16 callers=0 calls=0
*/
void sub_1162090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162090ULL || rel >= 0x11620a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011620a0 size=16 callers=0 calls=0
*/
void sub_11620a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11620a0ULL || rel >= 0x11620b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011620b0 size=272 callers=0 calls=5
   calls: sub_1162eb0, sub_59a520, sub_59a530, sub_967240, sub_b44bb0
*/
void sub_11620b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11620b0ULL || rel >= 0x11621c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011621c0 size=272 callers=0 calls=4
   calls: sub_1162eb0, sub_59a520, sub_967240, sub_b44bb0
*/
void sub_11621c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11621c0ULL || rel >= 0x11622d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011622d0 size=240 callers=0 calls=0
*/
void sub_11622d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11622d0ULL || rel >= 0x11623c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011623c0 size=240 callers=0 calls=0
*/
void sub_11623c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11623c0ULL || rel >= 0x11624b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011624b0 size=240 callers=0 calls=0
*/
void sub_11624b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11624b0ULL || rel >= 0x11625a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011625a0 size=16 callers=0 calls=0
*/
void sub_11625a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11625a0ULL || rel >= 0x11625b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011625b0 size=240 callers=0 calls=0
*/
void sub_11625b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11625b0ULL || rel >= 0x11626a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011626a0 size=240 callers=0 calls=0
*/
void sub_11626a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11626a0ULL || rel >= 0x1162790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162790 size=16 callers=0 calls=0
*/
void sub_1162790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162790ULL || rel >= 0x11627a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011627a0 size=16 callers=0 calls=0
*/
void sub_11627a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11627a0ULL || rel >= 0x11627b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011627b0 size=240 callers=0 calls=0
*/
void sub_11627b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11627b0ULL || rel >= 0x11628a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011628a0 size=240 callers=0 calls=0
*/
void sub_11628a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11628a0ULL || rel >= 0x1162990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162990 size=16 callers=0 calls=0
*/
void sub_1162990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162990ULL || rel >= 0x11629a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011629a0 size=16 callers=0 calls=0
*/
void sub_11629a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11629a0ULL || rel >= 0x11629b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011629b0 size=16 callers=0 calls=0
*/
void sub_11629b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11629b0ULL || rel >= 0x11629c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011629c0 size=240 callers=0 calls=0
*/
void sub_11629c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11629c0ULL || rel >= 0x1162ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162ab0 size=16 callers=0 calls=0
*/
void sub_1162ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162ab0ULL || rel >= 0x1162ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162ac0 size=240 callers=0 calls=0
*/
void sub_1162ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162ac0ULL || rel >= 0x1162bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162bb0 size=16 callers=0 calls=0
*/
void sub_1162bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162bb0ULL || rel >= 0x1162bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162bc0 size=32 callers=0 calls=0
*/
void sub_1162bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162bc0ULL || rel >= 0x1162be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162be0 size=16 callers=0 calls=0
*/
void sub_1162be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162be0ULL || rel >= 0x1162bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162bf0 size=32 callers=0 calls=0
*/
void sub_1162bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162bf0ULL || rel >= 0x1162c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162c10 size=32 callers=0 calls=0
*/
void sub_1162c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162c10ULL || rel >= 0x1162c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162c30 size=96 callers=25 calls=1
   calls: sub_5e2350
*/
void sub_1162c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162c30ULL || rel >= 0x1162c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162c90 size=16 callers=4 calls=0
*/
void sub_1162c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162c90ULL || rel >= 0x1162ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162ca0 size=160 callers=1 calls=1
   calls: sub_113e9c0
*/
void sub_1162ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162ca0ULL || rel >= 0x1162d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162d40 size=160 callers=7 calls=1
   calls: sub_113e9c0
*/
void sub_1162d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162d40ULL || rel >= 0x1162de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162de0 size=208 callers=6 calls=1
   calls: sub_bf0820
*/
void sub_1162de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162de0ULL || rel >= 0x1162eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162eb0 size=224 callers=23 calls=1
   calls: sub_bf0820
*/
void sub_1162eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162eb0ULL || rel >= 0x1162f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01162f90 size=208 callers=1 calls=1
   calls: sub_bf0820
*/
void sub_1162f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1162f90ULL || rel >= 0x1163060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163060 size=208 callers=8 calls=1
   calls: sub_bf0820
*/
void sub_1163060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163060ULL || rel >= 0x1163130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163130 size=16 callers=3 calls=0
*/
void sub_1163130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163130ULL || rel >= 0x1163140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163140 size=64 callers=1 calls=0
*/
void sub_1163140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163140ULL || rel >= 0x1163180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163180 size=64 callers=4 calls=0
*/
void sub_1163180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163180ULL || rel >= 0x11631c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011631c0 size=240 callers=119 calls=0
*/
void sub_11631c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11631c0ULL || rel >= 0x11632b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011632b0 size=304 callers=4 calls=1
   calls: sub_bf0820
*/
void sub_11632b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11632b0ULL || rel >= 0x11633e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011633e0 size=464 callers=11 calls=2
   calls: sub_967240, sub_bf0820
*/
void sub_11633e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11633e0ULL || rel >= 0x11635b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011635b0 size=224 callers=31 calls=2
   calls: sub_112ea00, sub_bf0820
*/
void sub_11635b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11635b0ULL || rel >= 0x1163690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163690 size=224 callers=7 calls=2
   calls: sub_112e830, sub_bf0820
*/
void sub_1163690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163690ULL || rel >= 0x1163770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163770 size=240 callers=2 calls=2
   calls: sub_112e580, sub_bf0820
*/
void sub_1163770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163770ULL || rel >= 0x1163860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163860 size=208 callers=4 calls=1
   calls: sub_bf0820
*/
void sub_1163860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163860ULL || rel >= 0x1163930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163930 size=208 callers=3 calls=1
   calls: sub_bf0820
*/
void sub_1163930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163930ULL || rel >= 0x1163a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163a00 size=112 callers=2 calls=1
   calls: sub_1163a70
*/
void sub_1163a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163a00ULL || rel >= 0x1163a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163a70 size=528 callers=1 calls=0
*/
void sub_1163a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163a70ULL || rel >= 0x1163c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163c80 size=768 callers=0 calls=0
*/
void sub_1163c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163c80ULL || rel >= 0x1163f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01163f80 size=160 callers=2 calls=2
   calls: sub_5db1b0, sub_65d700
*/
void sub_1163f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1163f80ULL || rel >= 0x1164020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164020 size=64 callers=10 calls=0
*/
void sub_1164020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164020ULL || rel >= 0x1164060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164060 size=64 callers=2 calls=0
*/
void sub_1164060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164060ULL || rel >= 0x11640a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011640a0 size=64 callers=7 calls=0
*/
void sub_11640a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11640a0ULL || rel >= 0x11640e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011640e0 size=64 callers=1 calls=0
*/
void sub_11640e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11640e0ULL || rel >= 0x1164120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164120 size=16 callers=7 calls=0
*/
void sub_1164120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164120ULL || rel >= 0x1164130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164130 size=16 callers=17 calls=0
*/
void sub_1164130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164130ULL || rel >= 0x1164140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164140 size=16 callers=9 calls=0
*/
void sub_1164140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164140ULL || rel >= 0x1164150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164150 size=16 callers=1 calls=0
*/
void sub_1164150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164150ULL || rel >= 0x1164160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164160 size=224 callers=0 calls=1
   calls: sub_1164bf0
*/
void sub_1164160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164160ULL || rel >= 0x1164240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164240 size=128 callers=0 calls=0
*/
void sub_1164240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164240ULL || rel >= 0x11642c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011642c0 size=560 callers=0 calls=4
   calls: sub_112e3d0, sub_112e660, sub_112e920, sub_112ea00
*/
void sub_11642c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11642c0ULL || rel >= 0x11644f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011644f0 size=112 callers=6 calls=0
*/
void sub_11644f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11644f0ULL || rel >= 0x1164560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164560 size=224 callers=0 calls=0
*/
void sub_1164560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164560ULL || rel >= 0x1164640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164640 size=224 callers=0 calls=0
*/
void sub_1164640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164640ULL || rel >= 0x1164720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164720 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1164720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164720ULL || rel >= 0x1164790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164790 size=224 callers=0 calls=0
*/
void sub_1164790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164790ULL || rel >= 0x1164870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164870 size=224 callers=0 calls=0
*/
void sub_1164870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164870ULL || rel >= 0x1164950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164950 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_1164950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164950ULL || rel >= 0x11649c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011649c0 size=112 callers=0 calls=1
   calls: sub_bf0820
*/
void sub_11649c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11649c0ULL || rel >= 0x1164a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164a30 size=224 callers=0 calls=0
*/
void sub_1164a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164a30ULL || rel >= 0x1164b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164b10 size=224 callers=0 calls=0
*/
void sub_1164b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164b10ULL || rel >= 0x1164bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164bf0 size=528 callers=1 calls=0
*/
void sub_1164bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164bf0ULL || rel >= 0x1164e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164e00 size=32 callers=1 calls=0
*/
void sub_1164e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164e00ULL || rel >= 0x1164e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164e20 size=32 callers=1 calls=0
*/
void sub_1164e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164e20ULL || rel >= 0x1164e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164e40 size=32 callers=1 calls=0
*/
void sub_1164e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164e40ULL || rel >= 0x1164e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164e60 size=32 callers=1 calls=0
*/
void sub_1164e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164e60ULL || rel >= 0x1164e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164e80 size=32 callers=5 calls=0
*/
void sub_1164e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164e80ULL || rel >= 0x1164ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164ea0 size=32 callers=1 calls=0
*/
void sub_1164ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164ea0ULL || rel >= 0x1164ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164ec0 size=32 callers=1 calls=0
*/
void sub_1164ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164ec0ULL || rel >= 0x1164ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164ee0 size=32 callers=1 calls=0
*/
void sub_1164ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164ee0ULL || rel >= 0x1164f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01164f00 size=272 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1164f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1164f00ULL || rel >= 0x1165010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165010 size=16 callers=1 calls=0
*/
void sub_1165010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165010ULL || rel >= 0x1165020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165020 size=16 callers=2 calls=0
*/
void sub_1165020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165020ULL || rel >= 0x1165030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165030 size=320 callers=4 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1165030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165030ULL || rel >= 0x1165170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165170 size=32 callers=2 calls=0
*/
void sub_1165170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165170ULL || rel >= 0x1165190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165190 size=432 callers=0 calls=3
   calls: sub_11583c0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1165190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165190ULL || rel >= 0x1165340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165340 size=320 callers=3 calls=2
   calls: sub_1144870, sub_1165480
*/
void sub_1165340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165340ULL || rel >= 0x1165480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165480 size=400 callers=1 calls=4
   calls: sub_1168430, sub_11685c0, sub_5cf8e0, sub_5cf8f0
*/
void sub_1165480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165480ULL || rel >= 0x1165610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165610 size=256 callers=1 calls=2
   calls: sub_1144c30, sub_1165710
*/
void sub_1165610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165610ULL || rel >= 0x1165710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165710 size=384 callers=2 calls=4
   calls: sub_11685c0, sub_1168740, sub_5cf8e0, sub_5cf8f0
*/
void sub_1165710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165710ULL || rel >= 0x1165890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165890 size=288 callers=1 calls=2
   calls: sub_1144cc0, sub_1165710
*/
void sub_1165890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165890ULL || rel >= 0x11659b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011659b0 size=864 callers=2 calls=9
   calls: sub_113a4d0, sub_113a580, sub_113a5e0, sub_1143200, sub_1144bc0, sub_1144c50, sub_1160e20, sub_5cf8e0, sub_5cf8f0
*/
void sub_11659b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11659b0ULL || rel >= 0x1165d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165d10 size=176 callers=4 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1165d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165d10ULL || rel >= 0x1165dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165dc0 size=32 callers=21 calls=0
*/
void sub_1165dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165dc0ULL || rel >= 0x1165de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165de0 size=16 callers=14 calls=0
*/
void sub_1165de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165de0ULL || rel >= 0x1165df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01165df0 size=576 callers=0 calls=6
   calls: sub_113a4d0, sub_1142c00, sub_1142c70, sub_1161430, sub_5cf8e0, sub_5cf8f0
*/
void sub_1165df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1165df0ULL || rel >= 0x1166030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01166030 size=896 callers=1 calls=0
*/
void sub_1166030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1166030ULL || rel >= 0x11663b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011663b0 size=1408 callers=0 calls=16
   calls: sub_1108960, sub_112ea00, sub_1134fa0, sub_1136390, sub_1136450, sub_1139180, sub_113a550, sub_113a570, sub_113a690, sub_11611a0, sub_1161550, sub_1166930
   ... +4 more
*/
void sub_11663b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11663b0ULL || rel >= 0x1166930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01166930 size=944 callers=1 calls=0
*/
void sub_1166930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1166930ULL || rel >= 0x1166ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01166ce0 size=2528 callers=1 calls=0
*/
void sub_1166ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1166ce0ULL || rel >= 0x11676c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011676c0 size=192 callers=3 calls=1
   calls: sub_5cf8f0
*/
void sub_11676c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11676c0ULL || rel >= 0x1167780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167780 size=208 callers=5 calls=1
   calls: sub_5cf8f0
*/
void sub_1167780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167780ULL || rel >= 0x1167850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167850 size=240 callers=0 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1167850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167850ULL || rel >= 0x1167940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167940 size=240 callers=0 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1167940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167940ULL || rel >= 0x1167a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167a30 size=240 callers=0 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1167a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167a30ULL || rel >= 0x1167b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167b20 size=240 callers=0 calls=2
   calls: sub_5cf8e0, sub_5cf8f0
*/
void sub_1167b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167b20ULL || rel >= 0x1167c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167c10 size=32 callers=5 calls=0
*/
void sub_1167c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167c10ULL || rel >= 0x1167c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167c30 size=16 callers=1 calls=0
*/
void sub_1167c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167c30ULL || rel >= 0x1167c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167c40 size=16 callers=2 calls=0
*/
void sub_1167c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167c40ULL || rel >= 0x1167c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167c50 size=176 callers=2 calls=1
   calls: sub_1168fa0
*/
void sub_1167c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167c50ULL || rel >= 0x1167d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167d00 size=176 callers=0 calls=0
*/
void sub_1167d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167d00ULL || rel >= 0x1167db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167db0 size=176 callers=0 calls=0
*/
void sub_1167db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167db0ULL || rel >= 0x1167e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167e60 size=16 callers=0 calls=0
*/
void sub_1167e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167e60ULL || rel >= 0x1167e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167e70 size=176 callers=0 calls=0
*/
void sub_1167e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167e70ULL || rel >= 0x1167f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167f20 size=176 callers=0 calls=0
*/
void sub_1167f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167f20ULL || rel >= 0x1167fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167fd0 size=16 callers=0 calls=0
*/
void sub_1167fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167fd0ULL || rel >= 0x1167fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167fe0 size=16 callers=0 calls=0
*/
void sub_1167fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167fe0ULL || rel >= 0x1167ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01167ff0 size=176 callers=0 calls=0
*/
void sub_1167ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1167ff0ULL || rel >= 0x11680a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011680a0 size=176 callers=0 calls=0
*/
void sub_11680a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11680a0ULL || rel >= 0x1168150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168150 size=384 callers=0 calls=1
   calls: sub_5cf8d0
*/
void sub_1168150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168150ULL || rel >= 0x11682d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011682d0 size=16 callers=0 calls=0
*/
void sub_11682d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11682d0ULL || rel >= 0x11682e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011682e0 size=240 callers=0 calls=0
*/
void sub_11682e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11682e0ULL || rel >= 0x11683d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011683d0 size=16 callers=0 calls=0
*/
void sub_11683d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11683d0ULL || rel >= 0x11683e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011683e0 size=16 callers=0 calls=0
*/
void sub_11683e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11683e0ULL || rel >= 0x11683f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011683f0 size=16 callers=0 calls=0
*/
void sub_11683f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11683f0ULL || rel >= 0x1168400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168400 size=16 callers=0 calls=0
*/
void sub_1168400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168400ULL || rel >= 0x1168410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168410 size=16 callers=0 calls=0
*/
void sub_1168410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168410ULL || rel >= 0x1168420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168420 size=16 callers=0 calls=0
*/
void sub_1168420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168420ULL || rel >= 0x1168430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168430 size=400 callers=1 calls=3
   calls: sub_113a3d0, sub_1168740, sub_1168e60
*/
void sub_1168430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168430ULL || rel >= 0x11685c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011685c0 size=384 callers=2 calls=2
   calls: sub_5cf8c0, sub_5e2350
*/
void sub_11685c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11685c0ULL || rel >= 0x1168740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168740 size=384 callers=2 calls=3
   calls: sub_113a3d0, sub_11688c0, sub_1168e60
*/
void sub_1168740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168740ULL || rel >= 0x11688c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011688c0 size=336 callers=1 calls=2
   calls: sub_113a3d0, sub_1168e60
*/
void sub_11688c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11688c0ULL || rel >= 0x1168a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168a10 size=448 callers=0 calls=2
   calls: sub_11266f0, sub_1168be0
*/
void sub_1168a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168a10ULL || rel >= 0x1168bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168bd0 size=16 callers=0 calls=0
*/
void sub_1168bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168bd0ULL || rel >= 0x1168be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168be0 size=384 callers=1 calls=2
   calls: sub_11266f0, sub_1168d70
*/
void sub_1168be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168be0ULL || rel >= 0x1168d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168d60 size=16 callers=0 calls=0
*/
void sub_1168d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168d60ULL || rel >= 0x1168d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168d70 size=64 callers=1 calls=0
*/
void sub_1168d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168d70ULL || rel >= 0x1168db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168db0 size=16 callers=0 calls=0
*/
void sub_1168db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168db0ULL || rel >= 0x1168dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168dc0 size=16 callers=0 calls=0
*/
void sub_1168dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168dc0ULL || rel >= 0x1168dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168dd0 size=16 callers=0 calls=0
*/
void sub_1168dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168dd0ULL || rel >= 0x1168de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168de0 size=16 callers=0 calls=0
*/
void sub_1168de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168de0ULL || rel >= 0x1168df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168df0 size=16 callers=0 calls=0
*/
void sub_1168df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168df0ULL || rel >= 0x1168e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168e00 size=16 callers=0 calls=0
*/
void sub_1168e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168e00ULL || rel >= 0x1168e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168e10 size=16 callers=0 calls=0
*/
void sub_1168e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168e10ULL || rel >= 0x1168e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168e20 size=16 callers=0 calls=0
*/
void sub_1168e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168e20ULL || rel >= 0x1168e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168e30 size=16 callers=0 calls=0
*/
void sub_1168e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168e30ULL || rel >= 0x1168e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168e40 size=16 callers=0 calls=0
*/
void sub_1168e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168e40ULL || rel >= 0x1168e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168e50 size=16 callers=0 calls=0
*/
void sub_1168e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168e50ULL || rel >= 0x1168e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168e60 size=320 callers=3 calls=0
*/
void sub_1168e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168e60ULL || rel >= 0x1168fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01168fa0 size=240 callers=1 calls=0
*/
void sub_1168fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1168fa0ULL || rel >= 0x1169090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169090 size=208 callers=0 calls=0
*/
void sub_1169090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169090ULL || rel >= 0x1169160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169160 size=128 callers=2 calls=2
   calls: sub_11691e0, sub_5e2350
*/
void sub_1169160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169160ULL || rel >= 0x11691e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011691e0 size=400 callers=1 calls=0
*/
void sub_11691e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11691e0ULL || rel >= 0x1169370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169370 size=496 callers=0 calls=0
*/
void sub_1169370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169370ULL || rel >= 0x1169560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169560 size=448 callers=1 calls=1
   calls: sub_1157ef0
*/
void sub_1169560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169560ULL || rel >= 0x1169720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169720 size=16 callers=2 calls=0
*/
void sub_1169720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169720ULL || rel >= 0x1169730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169730 size=16 callers=2 calls=0
*/
void sub_1169730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169730ULL || rel >= 0x1169740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169740 size=64 callers=1 calls=0
*/
void sub_1169740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169740ULL || rel >= 0x1169780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169780 size=256 callers=0 calls=0
*/
void sub_1169780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169780ULL || rel >= 0x1169880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169880 size=256 callers=0 calls=0
*/
void sub_1169880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169880ULL || rel >= 0x1169980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169980 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1169980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169980ULL || rel >= 0x11699f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 011699f0 size=256 callers=0 calls=0
*/
void sub_11699f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x11699f0ULL || rel >= 0x1169af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169af0 size=256 callers=0 calls=0
*/
void sub_1169af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169af0ULL || rel >= 0x1169bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169bf0 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1169bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169bf0ULL || rel >= 0x1169c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169c60 size=112 callers=0 calls=1
   calls: sub_1113c90
*/
void sub_1169c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169c60ULL || rel >= 0x1169cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169cd0 size=256 callers=0 calls=0
*/
void sub_1169cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169cd0ULL || rel >= 0x1169dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169dd0 size=256 callers=0 calls=0
*/
void sub_1169dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169dd0ULL || rel >= 0x1169ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169ed0 size=272 callers=0 calls=5
   calls: sub_112e830, sub_112ea00, sub_115ba20, sub_11611a0, sub_1169ff0
*/
void sub_1169ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169ed0ULL || rel >= 0x1169fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169fe0 size=16 callers=0 calls=0
*/
void sub_1169fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169fe0ULL || rel >= 0x1169ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01169ff0 size=544 callers=1 calls=0
*/
void sub_1169ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1169ff0ULL || rel >= 0x116a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116a210 size=16 callers=0 calls=0
*/
void sub_116a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116a210ULL || rel >= 0x116a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116a220 size=16 callers=0 calls=0
*/
void sub_116a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116a220ULL || rel >= 0x116a230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116a230 size=336 callers=0 calls=6
   calls: sub_1108730, sub_112e830, sub_112ea00, sub_1134fa0, sub_11611a0, sub_116a390
*/
void sub_116a230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116a230ULL || rel >= 0x116a380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116a380 size=16 callers=0 calls=0
*/
void sub_116a380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116a380ULL || rel >= 0x116a390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116a390 size=656 callers=1 calls=0
*/
void sub_116a390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116a390ULL || rel >= 0x116a620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116a620 size=16 callers=0 calls=0
*/
void sub_116a620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116a620ULL || rel >= 0x116a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116a630 size=16 callers=0 calls=0
*/
void sub_116a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116a630ULL || rel >= 0x116a640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116a640 size=208 callers=0 calls=0
*/
void sub_116a640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116a640ULL || rel >= 0x116a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116a710 size=64 callers=1 calls=1
   calls: sub_116b660
*/
void sub_116a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116a710ULL || rel >= 0x116a750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116a750 size=48 callers=3 calls=1
   calls: sub_116a780
*/
void sub_116a750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116a750ULL || rel >= 0x116a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116a780 size=1360 callers=2 calls=1
   calls: sub_116bb10
*/
void sub_116a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116a780ULL || rel >= 0x116acd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116acd0 size=192 callers=0 calls=3
   calls: camp_delicious, camp_meal_reaction_after_eat_speed, sub_116a780
*/
void sub_116acd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116acd0ULL || rel >= 0x116ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116ad90 size=32 callers=0 calls=0
*/
void sub_116ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116ad90ULL || rel >= 0x116adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116adb0 size=640 callers=0 calls=4
   calls: sub_762930, sub_762940, sub_7670a0, sub_9fccc0
   ref: XXXX_XX_X.bin
   ref: bin/pokemon_data/pokecamp/common/poke_
*/
void poke(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116adb0ULL || rel >= 0x116b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116b030 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_116b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116b030ULL || rel >= 0x116b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116b0f0 size=192 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_116b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116b0f0ULL || rel >= 0x116b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116b1b0 size=16 callers=0 calls=0
*/
void sub_116b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116b1b0ULL || rel >= 0x116b1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116b1c0 size=16 callers=0 calls=0
*/
void sub_116b1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116b1c0ULL || rel >= 0x116b1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116b1d0 size=368 callers=0 calls=0
*/
void sub_116b1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116b1d0ULL || rel >= 0x116b340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116b340 size=800 callers=0 calls=1
   calls: sub_1c0
   ref: bin/archive/field/model/unit_obj_door_pc_01.gfpak
   ref: bin/archive/field/resident/skybox.gfpak
   ref: unit_obj_door_pc_01
   ref: bin/field/model/unit_obj/unit_obj_itemred01/
   ref: unit_obj_itemyel01
   ref: bin/field/model/unit_obj/unit_obj_door_pc_01/
   ref: bin/archive/field/model/unit_obj_itemred01.gfpak
   ref: bin/field/model/buildmodel/skybox_01/
*/
void skybox_01_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116b340ULL || rel >= 0x116b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116b660 size=64 callers=10 calls=0
*/
void sub_116b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116b660ULL || rel >= 0x116b6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116b6a0 size=624 callers=6 calls=7
   calls: sub_1119500, sub_5cf8e0, sub_5cf8f0, sub_5dd790, sub_5e2930, sub_5e3980, sub_c50b30
*/
void sub_116b6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116b6a0ULL || rel >= 0x116b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116b910 size=512 callers=4 calls=4
   calls: sub_5dd790, sub_5e2930, sub_5e3980, sub_c50b30
*/
void sub_116b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116b910ULL || rel >= 0x116bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116bb10 size=112 callers=140 calls=0
*/
void sub_116bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116bb10ULL || rel >= 0x116bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116bb80 size=16 callers=10 calls=0
*/
void sub_116bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116bb80ULL || rel >= 0x116bb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116bb90 size=144 callers=1 calls=1
   calls: sub_65d700
*/
void sub_116bb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116bb90ULL || rel >= 0x116bc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116bc20 size=176 callers=1 calls=0
*/
void sub_116bc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116bc20ULL || rel >= 0x116bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116bcd0 size=176 callers=0 calls=0
*/
void sub_116bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116bcd0ULL || rel >= 0x116bd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116bd80 size=736 callers=1 calls=2
   calls: fi_move_speed, sub_59a260
   ref: Pokemon/EffectStart
*/
void EffectStart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116bd80ULL || rel >= 0x116c060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116c060 size=624 callers=11 calls=12
   calls: camp_meal_state, kw20_drowse01_Enabled_3, sub_116c3e0, sub_116c4d0, sub_59a4f0, sub_59b090, sub_59b0c0, sub_59b100, sub_59b130, sub_59b1d0, sub_59b280, sub_b4a5e0
   ref: app_state
   ref: fi_move_speed
*/
void fi_move_speed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116c060ULL || rel >= 0x116c2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116c2d0 size=48 callers=1 calls=0
*/
void sub_116c2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116c2d0ULL || rel >= 0x116c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116c300 size=224 callers=3 calls=3
   calls: sub_59b170, sub_59b1a0, sub_b4a5e0
   ref: kw20_drowse01_Enabled
*/
void kw20_drowse01_Enabled_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116c300ULL || rel >= 0x116c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116c3e0 size=240 callers=6 calls=3
   calls: sub_59b170, sub_59b1a0, sub_b4a5e0
*/
void sub_116c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116c3e0ULL || rel >= 0x116c4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116c4d0 size=240 callers=10 calls=3
   calls: sub_59b170, sub_59b1a0, sub_b4a5e0
*/
void sub_116c4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116c4d0ULL || rel >= 0x116c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116c5c0 size=240 callers=2 calls=3
   calls: sub_59b090, sub_59b0c0, sub_b4a5e0
   ref: camp_meal_state
*/
void camp_meal_state(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116c5c0ULL || rel >= 0x116c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116c6b0 size=192 callers=1 calls=2
   calls: sub_59b1d0, sub_b4a5e0
*/
void sub_116c6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116c6b0ULL || rel >= 0x116c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116c770 size=352 callers=6 calls=5
   calls: fi_move_speed_2, sub_59b090, sub_59b0c0, sub_b4a5e0, walk_turn
   ref: app_state
*/
void app_state(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116c770ULL || rel >= 0x116c8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116c8d0 size=384 callers=4 calls=4
   calls: sub_59b250, sub_5b9120, sub_5b9220, sub_b4a5e0
   ref: wait_turn
   ref: walk_turn
*/
void walk_turn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116c8d0ULL || rel >= 0x116ca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116ca50 size=528 callers=1 calls=6
   calls: sub_116db10, sub_59a4f0, sub_59a520, sub_59b100, sub_59b130, sub_b4a5e0
   ref: fi_move_speed
*/
void fi_move_speed_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116ca50ULL || rel >= 0x116cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116cc60 size=112 callers=25 calls=2
   calls: app_state, walk_turn
*/
void sub_116cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116cc60ULL || rel >= 0x116ccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116ccd0 size=16 callers=1 calls=0
*/
void sub_116ccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116ccd0ULL || rel >= 0x116cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116cce0 size=176 callers=9 calls=3
   calls: sub_59b250, sub_5b9120, sub_b4a5e0
*/
void sub_116cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116cce0ULL || rel >= 0x116cd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116cd90 size=192 callers=4 calls=3
   calls: sub_59b1f0, sub_59b200, sub_b4a5e0
*/
void sub_116cd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116cd90ULL || rel >= 0x116ce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116ce50 size=240 callers=1 calls=3
   calls: sub_59b090, sub_59b0c0, sub_b4a5e0
   ref: camp_delicious
*/
void camp_delicious(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116ce50ULL || rel >= 0x116cf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116cf40 size=256 callers=2 calls=3
   calls: sub_59b090, sub_59b0d0, sub_b4a5e0
   ref: camp_delicious
*/
void camp_delicious_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116cf40ULL || rel >= 0x116d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116d040 size=1456 callers=1 calls=5
   calls: sub_59b100, sub_59b130, sub_59b170, sub_59b1a0, sub_b4a5e0
   ref: camp_meal_c_no_use
   ref: camp_meal_reaction_after_eat_speed
   ref: camp_meal_a_no_use
   ref: camp_meal_hate_no_use
   ref: camp_meal_offset_01
   ref: camp_meal_offset_02
   ref: camp_meal_no_eat
*/
void camp_meal_reaction_after_eat_speed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116d040ULL || rel >= 0x116d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116d5f0 size=256 callers=1 calls=3
   calls: sub_59b0d0, sub_59b170, sub_b4a5e0
   ref: camp_meal_mode
*/
void camp_meal_mode(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116d5f0ULL || rel >= 0x116d6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116d6f0 size=240 callers=1 calls=3
   calls: sub_59b170, sub_59b1a0, sub_b4a5e0
   ref: kw20_drowse01_Enabled
*/
void kw20_drowse01_Enabled_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116d6f0ULL || rel >= 0x116d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116d7e0 size=48 callers=1 calls=1
   calls: fi_move_speed
*/
void sub_116d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116d7e0ULL || rel >= 0x116d810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116d810 size=240 callers=2 calls=4
   calls: fi_move_speed, sub_59b1f0, sub_59b200, sub_b4a5e0
   ref: to_kw21_sleepA01
*/
void to_kw21_sleepA01(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116d810ULL || rel >= 0x116d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116d900 size=32 callers=7 calls=1
   calls: sub_116db10
*/
void sub_116d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116d900ULL || rel >= 0x116d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116d920 size=96 callers=52 calls=0
*/
void sub_116d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116d920ULL || rel >= 0x116d980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116d980 size=400 callers=1 calls=5
   calls: sub_59b090, sub_59b0d0, sub_59b100, sub_59b140, sub_b4a5e0
   ref: app_state
   ref: fi_move_speed
*/
void fi_move_speed_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116d980ULL || rel >= 0x116db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116db10 size=672 callers=3 calls=4
   calls: sub_59b250, sub_5b9220, sub_5b9430, sub_b4a5e0
*/
void sub_116db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116db10ULL || rel >= 0x116ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116ddb0 size=256 callers=2 calls=3
   calls: sub_59b170, sub_59b1c0, sub_b4a5e0
*/
void sub_116ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116ddb0ULL || rel >= 0x116deb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116deb0 size=192 callers=7 calls=1
   calls: sub_b4a5e0
*/
void sub_116deb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116deb0ULL || rel >= 0x116df70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116df70 size=144 callers=9 calls=1
   calls: sub_b4a5e0
*/
void sub_116df70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116df70ULL || rel >= 0x116e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e000 size=368 callers=2 calls=1
   calls: sub_116ebf0
*/
void sub_116e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e000ULL || rel >= 0x116e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0116e170 size=704 callers=1 calls=6
   calls: sub_59a4f0, sub_59a500, sub_5b90f0, sub_5b9220, sub_5b95e0, sub_b4a5e0
*/
void sub_116e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x116e170ULL || rel >= 0x116e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

