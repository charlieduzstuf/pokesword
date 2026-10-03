/* main functions 006d2c10..006fb650 (47 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 006d2c10 size=528 callers=0 calls=2
   calls: sub_5e2350, sub_89b480
*/
void sub_6d2c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2c10ULL || rel >= 0x6d2e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2e20 size=80 callers=0 calls=0
*/
void sub_6d2e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2e20ULL || rel >= 0x6d2e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2e70 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_6d2e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2e70ULL || rel >= 0x6d2ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2ee0 size=16 callers=0 calls=0
*/
void sub_6d2ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2ee0ULL || rel >= 0x6d2ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2ef0 size=64 callers=0 calls=0
*/
void sub_6d2ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2ef0ULL || rel >= 0x6d2f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2f30 size=32 callers=0 calls=0
*/
void sub_6d2f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2f30ULL || rel >= 0x6d2f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2f50 size=80 callers=0 calls=0
*/
void sub_6d2f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2f50ULL || rel >= 0x6d2fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2fa0 size=80 callers=0 calls=0
*/
void sub_6d2fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2fa0ULL || rel >= 0x6d2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2ff0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_6d2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2ff0ULL || rel >= 0x6d3060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3060 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_6d3060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3060ULL || rel >= 0x6d30d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d30d0 size=80 callers=0 calls=0
*/
void sub_6d30d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d30d0ULL || rel >= 0x6d3120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3120 size=80 callers=0 calls=0
*/
void sub_6d3120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3120ULL || rel >= 0x6d3170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3170 size=160 callers=0 calls=0
*/
void sub_6d3170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3170ULL || rel >= 0x6d3210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3210 size=416 callers=0 calls=5
   calls: gflnet3_message_lite_2, sub_65da00, sub_65daf0, sub_6d4990, sub_6d56d0
*/
void sub_6d3210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3210ULL || rel >= 0x6d33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d33b0 size=160 callers=0 calls=0
*/
void sub_6d33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d33b0ULL || rel >= 0x6d3450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3450 size=160 callers=0 calls=0
*/
void sub_6d3450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3450ULL || rel >= 0x6d34f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d34f0 size=160 callers=0 calls=0
*/
void sub_6d34f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d34f0ULL || rel >= 0x6d3590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3590 size=160 callers=0 calls=0
*/
void sub_6d3590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3590ULL || rel >= 0x6d3630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3630 size=544 callers=1 calls=0
*/
void sub_6d3630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3630ULL || rel >= 0x6d3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3850 size=288 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_6d3aa0
*/
void sub_6d3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3850ULL || rel >= 0x6d3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3970 size=304 callers=1 calls=7
   calls: sub_65da00, sub_65daf0, sub_6d4990, sub_6d4ad0, sub_6d5450, sub_6d5ff0, sub_c70
*/
void sub_6d3970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3970ULL || rel >= 0x6d3aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3aa0 size=368 callers=1 calls=3
   calls: sub_65da00, sub_65daf0, sub_70b2e0
*/
void sub_6d3aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3aa0ULL || rel >= 0x6d3c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3c10 size=560 callers=1 calls=0
*/
void sub_6d3c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3c10ULL || rel >= 0x6d3e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3e40 size=128 callers=0 calls=0
*/
void sub_6d3e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3e40ULL || rel >= 0x6d3ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3ec0 size=32 callers=1 calls=0
*/
void sub_6d3ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3ec0ULL || rel >= 0x6d3ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3ee0 size=208 callers=3 calls=0
*/
void sub_6d3ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3ee0ULL || rel >= 0x6d3fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d3fb0 size=208 callers=1 calls=0
*/
void sub_6d3fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d3fb0ULL || rel >= 0x6d4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4080 size=192 callers=2 calls=1
   calls: sub_65c880
*/
void sub_6d4080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4080ULL || rel >= 0x6d4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4140 size=112 callers=0 calls=0
*/
void sub_6d4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4140ULL || rel >= 0x6d41b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d41b0 size=352 callers=1 calls=0
*/
void sub_6d41b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d41b0ULL || rel >= 0x6d4310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4310 size=752 callers=0 calls=0
*/
void sub_6d4310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4310ULL || rel >= 0x6d4600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4600 size=128 callers=0 calls=0
*/
void sub_6d4600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4600ULL || rel >= 0x6d4680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4680 size=320 callers=0 calls=9
   calls: gflnet3_sync_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/data/out/data/
   ref: sync_data_holder.proto
*/
void gflnet3_sync_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4680ULL || rel >= 0x6d47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d47c0 size=224 callers=3 calls=6
   calls: gflnet3_common, gflnet3_data_2, gflnet3_descriptor, gflnet3_message_3, sub_6d56d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/data/out/data/
   ref: sync_data_holder.proto
*/
void gflnet3_sync_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d47c0ULL || rel >= 0x6d48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d48a0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_6d48a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d48a0ULL || rel >= 0x6d4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4900 size=144 callers=0 calls=4
   calls: gflnet3_message_4, gflnet3_sync_data_holder_2, sub_6fff50, sub_7007d0
*/
void sub_6d4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4900ULL || rel >= 0x6d4990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4990 size=32 callers=2 calls=0
*/
void sub_6d4990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4990ULL || rel >= 0x6d49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d49b0 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6d49b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d49b0ULL || rel >= 0x6d4a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4a40 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6d4a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4a40ULL || rel >= 0x6d4ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4ad0 size=64 callers=1 calls=0
*/
void sub_6d4ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4ad0ULL || rel >= 0x6d4b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4b10 size=16 callers=0 calls=0
*/
void sub_6d4b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4b10ULL || rel >= 0x6d4b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4b20 size=96 callers=0 calls=2
   calls: sub_6d4b80, sub_c70
*/
void sub_6d4b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4b20ULL || rel >= 0x6d4b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4b80 size=32 callers=1 calls=0
*/
void sub_6d4b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4b80ULL || rel >= 0x6d4ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4ba0 size=64 callers=0 calls=0
*/
void sub_6d4ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4ba0ULL || rel >= 0x6d4be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4be0 size=416 callers=0 calls=8
   calls: sub_6d5450, sub_6d5840, sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_c70
*/
void sub_6d4be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4be0ULL || rel >= 0x6d4d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4d80 size=32 callers=0 calls=0
*/
void sub_6d4d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4d80ULL || rel >= 0x6d4da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4da0 size=96 callers=0 calls=0
*/
void sub_6d4da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4da0ULL || rel >= 0x6d4e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4e00 size=112 callers=0 calls=2
   calls: sub_6d5d40, sub_70d000
*/
void sub_6d4e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4e00ULL || rel >= 0x6d4e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4e70 size=336 callers=0 calls=5
   calls: gflnet3_generated_message_util, gflnet3_sync_data_holder_2, sub_6d5450, sub_6d56d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/data/out/data/
*/
void gflnet3_sync_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4e70ULL || rel >= 0x6d4fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d4fc0 size=80 callers=0 calls=0
*/
void sub_6d4fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d4fc0ULL || rel >= 0x6d5010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5010 size=16 callers=0 calls=0
*/
void sub_6d5010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5010ULL || rel >= 0x6d5020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5020 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6d5020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5020ULL || rel >= 0x6d5090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5090 size=16 callers=0 calls=0
*/
void sub_6d5090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5090ULL || rel >= 0x6d50a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d50a0 size=32 callers=0 calls=0
*/
void sub_6d50a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d50a0ULL || rel >= 0x6d50c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d50c0 size=16 callers=0 calls=0
*/
void sub_6d50c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d50c0ULL || rel >= 0x6d50d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d50d0 size=16 callers=0 calls=0
*/
void sub_6d50d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d50d0ULL || rel >= 0x6d50e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d50e0 size=128 callers=0 calls=0
*/
void sub_6d50e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d50e0ULL || rel >= 0x6d5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5160 size=256 callers=0 calls=9
   calls: gflnet3_data_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/data/out/data/
   ref: data.proto
*/
void gflnet3_data(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5160ULL || rel >= 0x6d5260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5260 size=272 callers=5 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/data/out/data/
   ref: data.proto
*/
void gflnet3_data_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5260ULL || rel >= 0x6d5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5370 size=80 callers=0 calls=0
*/
void sub_6d5370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5370ULL || rel >= 0x6d53c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d53c0 size=144 callers=0 calls=4
   calls: gflnet3_data_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_6d53c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d53c0ULL || rel >= 0x6d5450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5450 size=160 callers=4 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6d5450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5450ULL || rel >= 0x6d54f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d54f0 size=144 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/data/out/data/
*/
void gflnet3_data_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d54f0ULL || rel >= 0x6d5580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5580 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6d5580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5580ULL || rel >= 0x6d5620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5620 size=160 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6d5620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5620ULL || rel >= 0x6d56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d56c0 size=16 callers=0 calls=0
*/
void sub_6d56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d56c0ULL || rel >= 0x6d56d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d56d0 size=64 callers=3 calls=1
   calls: gflnet3_data_2
*/
void sub_6d56d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d56d0ULL || rel >= 0x6d5710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5710 size=192 callers=0 calls=4
   calls: sub_6d57d0, sub_6fff50, sub_7007d0, sub_c70
*/
void sub_6d5710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5710ULL || rel >= 0x6d57d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d57d0 size=32 callers=1 calls=0
*/
void sub_6d57d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d57d0ULL || rel >= 0x6d57f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d57f0 size=80 callers=0 calls=0
*/
void sub_6d57f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d57f0ULL || rel >= 0x6d5840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5840 size=864 callers=1 calls=6
   calls: sub_6f6640, sub_70bfa0, sub_70c190, sub_70c480, sub_713480, sub_714c90
*/
void sub_6d5840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5840ULL || rel >= 0x6d5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5ba0 size=160 callers=0 calls=2
   calls: sub_713860, sub_713970
*/
void sub_6d5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5ba0ULL || rel >= 0x6d5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5c40 size=256 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_6d5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5c40ULL || rel >= 0x6d5d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5d40 size=288 callers=1 calls=2
   calls: sub_70d000, sub_70d040
*/
void sub_6d5d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5d40ULL || rel >= 0x6d5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5e60 size=320 callers=0 calls=2
   calls: gflnet3_data_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/data/out/data/
*/
void gflnet3_data_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5e60ULL || rel >= 0x6d5fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5fa0 size=80 callers=0 calls=0
*/
void sub_6d5fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5fa0ULL || rel >= 0x6d5ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d5ff0 size=160 callers=1 calls=0
*/
void sub_6d5ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d5ff0ULL || rel >= 0x6d6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6090 size=16 callers=0 calls=0
*/
void sub_6d6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6090ULL || rel >= 0x6d60a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d60a0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6d60a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d60a0ULL || rel >= 0x6d6110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6110 size=16 callers=0 calls=0
*/
void sub_6d6110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6110ULL || rel >= 0x6d6120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6120 size=32 callers=0 calls=0
*/
void sub_6d6120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6120ULL || rel >= 0x6d6140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6140 size=16 callers=0 calls=0
*/
void sub_6d6140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6140ULL || rel >= 0x6d6150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6150 size=16 callers=0 calls=0
*/
void sub_6d6150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6150ULL || rel >= 0x6d6160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6160 size=128 callers=0 calls=0
*/
void sub_6d6160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6160ULL || rel >= 0x6d61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d61e0 size=32 callers=1 calls=0
*/
void sub_6d61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d61e0ULL || rel >= 0x6d6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6200 size=208 callers=3 calls=0
*/
void sub_6d6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6200ULL || rel >= 0x6d62d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d62d0 size=384 callers=1 calls=1
   calls: sub_6d6cf0
*/
void sub_6d62d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d62d0ULL || rel >= 0x6d6450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6450 size=624 callers=0 calls=2
   calls: sub_6d67c0, sub_6d6f30
*/
void sub_6d6450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6450ULL || rel >= 0x6d66c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d66c0 size=256 callers=1 calls=1
   calls: sub_6d6f30
*/
void sub_6d66c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d66c0ULL || rel >= 0x6d67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d67c0 size=336 callers=1 calls=1
   calls: sub_6d6f30
*/
void sub_6d67c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d67c0ULL || rel >= 0x6d6910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6910 size=336 callers=3 calls=2
   calls: sub_6d6a60, sub_6d6f30
*/
void sub_6d6910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6910ULL || rel >= 0x6d6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6a60 size=288 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_6d6a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6a60ULL || rel >= 0x6d6b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6b80 size=368 callers=1 calls=0
*/
void sub_6d6b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6b80ULL || rel >= 0x6d6cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6cf0 size=576 callers=1 calls=0
*/
void sub_6d6cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6cf0ULL || rel >= 0x6d6f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d6f30 size=304 callers=6 calls=0
*/
void sub_6d6f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d6f30ULL || rel >= 0x6d7060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7060 size=128 callers=0 calls=0
*/
void sub_6d7060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7060ULL || rel >= 0x6d70e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d70e0 size=704 callers=10 calls=2
   calls: sub_5e2350, sub_6d8380
*/
void sub_6d70e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d70e0ULL || rel >= 0x6d73a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d73a0 size=544 callers=0 calls=0
*/
void sub_6d73a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d73a0ULL || rel >= 0x6d75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d75c0 size=16 callers=0 calls=0
*/
void sub_6d75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d75c0ULL || rel >= 0x6d75d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d75d0 size=16 callers=0 calls=0
*/
void sub_6d75d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d75d0ULL || rel >= 0x6d75e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d75e0 size=16 callers=0 calls=0
*/
void sub_6d75e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d75e0ULL || rel >= 0x6d75f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d75f0 size=16 callers=0 calls=0
*/
void sub_6d75f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d75f0ULL || rel >= 0x6d7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7600 size=16 callers=0 calls=0
*/
void sub_6d7600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7600ULL || rel >= 0x6d7610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7610 size=336 callers=29 calls=1
   calls: sub_6afc50
*/
void sub_6d7610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7610ULL || rel >= 0x6d7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7760 size=224 callers=20 calls=1
   calls: sub_6d8630
*/
void sub_6d7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7760ULL || rel >= 0x6d7840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7840 size=208 callers=10 calls=1
   calls: sub_6aea40
*/
void sub_6d7840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7840ULL || rel >= 0x6d7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7910 size=400 callers=10 calls=1
   calls: sub_6aeb70
*/
void sub_6d7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7910ULL || rel >= 0x6d7aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7aa0 size=16 callers=30 calls=0
*/
void sub_6d7aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7aa0ULL || rel >= 0x6d7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7ab0 size=16 callers=16 calls=0
*/
void sub_6d7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7ab0ULL || rel >= 0x6d7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7ac0 size=48 callers=29 calls=1
   calls: sub_6d7af0
*/
void sub_6d7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7ac0ULL || rel >= 0x6d7af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7af0 size=656 callers=2 calls=1
   calls: sub_6d8860
*/
void sub_6d7af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7af0ULL || rel >= 0x6d7d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7d80 size=224 callers=30 calls=0
*/
void sub_6d7d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7d80ULL || rel >= 0x6d7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7e60 size=112 callers=30 calls=1
   calls: sub_6d7af0
*/
void sub_6d7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7e60ULL || rel >= 0x6d7ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d7ed0 size=464 callers=2 calls=3
   calls: sub_6ae890, sub_6afc50, sub_6ba6a0
*/
void sub_6d7ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d7ed0ULL || rel >= 0x6d80a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d80a0 size=160 callers=20 calls=0
*/
void sub_6d80a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d80a0ULL || rel >= 0x6d8140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8140 size=288 callers=0 calls=1
   calls: sub_6d7ed0
*/
void sub_6d8140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8140ULL || rel >= 0x6d8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8260 size=16 callers=0 calls=0
*/
void sub_6d8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8260ULL || rel >= 0x6d8270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8270 size=240 callers=0 calls=0
*/
void sub_6d8270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8270ULL || rel >= 0x6d8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8360 size=16 callers=0 calls=0
*/
void sub_6d8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8360ULL || rel >= 0x6d8370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8370 size=16 callers=0 calls=0
*/
void sub_6d8370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8370ULL || rel >= 0x6d8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8380 size=688 callers=1 calls=0
*/
void sub_6d8380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8380ULL || rel >= 0x6d8630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8630 size=560 callers=1 calls=0
*/
void sub_6d8630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8630ULL || rel >= 0x6d8860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8860 size=272 callers=1 calls=0
*/
void sub_6d8860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8860ULL || rel >= 0x6d8970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8970 size=688 callers=0 calls=0
*/
void sub_6d8970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8970ULL || rel >= 0x6d8c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8c20 size=128 callers=0 calls=0
*/
void sub_6d8c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8c20ULL || rel >= 0x6d8ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8ca0 size=400 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: request_cancel.proto
*/
void gflnet3_request_cancel(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8ca0ULL || rel >= 0x6d8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8e30 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: request_cancel.proto
*/
void gflnet3_request_cancel_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8e30ULL || rel >= 0x6d8ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8ed0 size=80 callers=0 calls=0
*/
void sub_6d8ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8ed0ULL || rel >= 0x6d8f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d8f20 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: request_cancel.proto
*/
void gflnet3_request_cancel_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d8f20ULL || rel >= 0x6d9040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9040 size=32 callers=2 calls=0
*/
void sub_6d9040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9040ULL || rel >= 0x6d9060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9060 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_request_cancel_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9060ULL || rel >= 0x6d9090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9090 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6d9090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9090ULL || rel >= 0x6d90f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d90f0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6d90f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d90f0ULL || rel >= 0x6d9150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9150 size=16 callers=0 calls=0
*/
void sub_6d9150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9150ULL || rel >= 0x6d9160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9160 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: request_cancel.proto
*/
void gflnet3_request_cancel_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9160ULL || rel >= 0x6d9230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9230 size=96 callers=0 calls=2
   calls: sub_6d9290, sub_c70
*/
void sub_6d9230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9230ULL || rel >= 0x6d9290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9290 size=32 callers=1 calls=0
*/
void sub_6d9290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9290ULL || rel >= 0x6d92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d92b0 size=16 callers=0 calls=0
*/
void sub_6d92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d92b0ULL || rel >= 0x6d92c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d92c0 size=304 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_6d92c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d92c0ULL || rel >= 0x6d93f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d93f0 size=32 callers=0 calls=0
*/
void sub_6d93f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d93f0ULL || rel >= 0x6d9410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9410 size=96 callers=0 calls=0
*/
void sub_6d9410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9410ULL || rel >= 0x6d9470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9470 size=112 callers=1 calls=1
   calls: sub_70d000
*/
void sub_6d9470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9470ULL || rel >= 0x6d94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d94e0 size=368 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: request_cancel.proto
*/
void gflnet3_request_cancel_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d94e0ULL || rel >= 0x6d9650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9650 size=80 callers=0 calls=0
*/
void sub_6d9650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9650ULL || rel >= 0x6d96a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d96a0 size=16 callers=0 calls=0
*/
void sub_6d96a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d96a0ULL || rel >= 0x6d96b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d96b0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6d96b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d96b0ULL || rel >= 0x6d9720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9720 size=16 callers=0 calls=0
*/
void sub_6d9720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9720ULL || rel >= 0x6d9730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9730 size=32 callers=0 calls=0
*/
void sub_6d9730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9730ULL || rel >= 0x6d9750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9750 size=16 callers=0 calls=0
*/
void sub_6d9750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9750ULL || rel >= 0x6d9760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9760 size=16 callers=0 calls=0
*/
void sub_6d9760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9760ULL || rel >= 0x6d9770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9770 size=272 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: request_cancel.proto
*/
void gflnet3_request_cancel_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9770ULL || rel >= 0x6d9880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9880 size=400 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: cancel_accepted.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_cancel_accepted(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9880ULL || rel >= 0x6d9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9a10 size=176 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: cancel_accepted.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_cancel_accepted_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9a10ULL || rel >= 0x6d9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9ac0 size=80 callers=0 calls=0
*/
void sub_6d9ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9ac0ULL || rel >= 0x6d9b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9b10 size=304 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: cancel_accepted.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_cancel_accepted_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9b10ULL || rel >= 0x6d9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9c40 size=48 callers=23 calls=0
*/
void sub_6d9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9c40ULL || rel >= 0x6d9c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9c70 size=64 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_cancel_accepted_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9c70ULL || rel >= 0x6d9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9cb0 size=96 callers=20 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6d9cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9cb0ULL || rel >= 0x6d9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9d10 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6d9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9d10ULL || rel >= 0x6d9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9d70 size=16 callers=0 calls=0
*/
void sub_6d9d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9d70ULL || rel >= 0x6d9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9d80 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: cancel_accepted.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_cancel_accepted_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9d80ULL || rel >= 0x6d9e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9e50 size=96 callers=0 calls=2
   calls: sub_6d9eb0, sub_c70
*/
void sub_6d9e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9e50ULL || rel >= 0x6d9eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9eb0 size=32 callers=1 calls=0
*/
void sub_6d9eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9eb0ULL || rel >= 0x6d9ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9ed0 size=16 callers=0 calls=0
*/
void sub_6d9ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9ed0ULL || rel >= 0x6d9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d9ee0 size=496 callers=1 calls=4
   calls: sub_70bfa0, sub_70c190, sub_70c480, sub_713480
*/
void sub_6d9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d9ee0ULL || rel >= 0x6da0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da0d0 size=96 callers=0 calls=1
   calls: sub_713690
*/
void sub_6da0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da0d0ULL || rel >= 0x6da130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da130 size=144 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_6da130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da130ULL || rel >= 0x6da1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da1c0 size=112 callers=1 calls=1
   calls: sub_70d000
*/
void sub_6da1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da1c0ULL || rel >= 0x6da230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da230 size=384 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: cancel_accepted.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_cancel_accepted_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da230ULL || rel >= 0x6da3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da3b0 size=80 callers=0 calls=0
*/
void sub_6da3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da3b0ULL || rel >= 0x6da400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da400 size=80 callers=1 calls=0
*/
void sub_6da400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da400ULL || rel >= 0x6da450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da450 size=16 callers=0 calls=0
*/
void sub_6da450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da450ULL || rel >= 0x6da460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da460 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6da460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da460ULL || rel >= 0x6da4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da4d0 size=16 callers=0 calls=0
*/
void sub_6da4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da4d0ULL || rel >= 0x6da4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da4e0 size=32 callers=0 calls=0
*/
void sub_6da4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da4e0ULL || rel >= 0x6da500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da500 size=16 callers=0 calls=0
*/
void sub_6da500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da500ULL || rel >= 0x6da510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da510 size=16 callers=0 calls=0
*/
void sub_6da510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da510ULL || rel >= 0x6da520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da520 size=288 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: cancel_accepted.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_cancel_accepted_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da520ULL || rel >= 0x6da640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da640 size=400 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: request_cancel_all.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_request_cancel_all(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da640ULL || rel >= 0x6da7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da7d0 size=160 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: request_cancel_all.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_request_cancel_all_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da7d0ULL || rel >= 0x6da870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da870 size=80 callers=0 calls=0
*/
void sub_6da870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da870ULL || rel >= 0x6da8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da8c0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: request_cancel_all.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_request_cancel_all_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da8c0ULL || rel >= 0x6da9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006da9e0 size=32 callers=2 calls=0
*/
void sub_6da9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6da9e0ULL || rel >= 0x6daa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006daa00 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_request_cancel_all_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6daa00ULL || rel >= 0x6daa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006daa30 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6daa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6daa30ULL || rel >= 0x6daa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006daa90 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6daa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6daa90ULL || rel >= 0x6daaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006daaf0 size=16 callers=0 calls=0
*/
void sub_6daaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6daaf0ULL || rel >= 0x6dab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dab00 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: request_cancel_all.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_request_cancel_all_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dab00ULL || rel >= 0x6dabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dabd0 size=96 callers=0 calls=2
   calls: sub_6dac30, sub_c70
*/
void sub_6dabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dabd0ULL || rel >= 0x6dac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dac30 size=32 callers=1 calls=0
*/
void sub_6dac30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dac30ULL || rel >= 0x6dac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dac50 size=16 callers=0 calls=0
*/
void sub_6dac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dac50ULL || rel >= 0x6dac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dac60 size=304 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_6dac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dac60ULL || rel >= 0x6dad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dad90 size=32 callers=0 calls=0
*/
void sub_6dad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dad90ULL || rel >= 0x6dadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dadb0 size=96 callers=0 calls=0
*/
void sub_6dadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dadb0ULL || rel >= 0x6dae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dae10 size=112 callers=1 calls=1
   calls: sub_70d000
*/
void sub_6dae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dae10ULL || rel >= 0x6dae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dae80 size=368 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: request_cancel_all.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_request_cancel_all_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dae80ULL || rel >= 0x6daff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006daff0 size=80 callers=0 calls=0
*/
void sub_6daff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6daff0ULL || rel >= 0x6db040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db040 size=16 callers=0 calls=0
*/
void sub_6db040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db040ULL || rel >= 0x6db050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db050 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6db050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db050ULL || rel >= 0x6db0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db0c0 size=16 callers=0 calls=0
*/
void sub_6db0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db0c0ULL || rel >= 0x6db0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db0d0 size=32 callers=0 calls=0
*/
void sub_6db0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db0d0ULL || rel >= 0x6db0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db0f0 size=16 callers=0 calls=0
*/
void sub_6db0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db0f0ULL || rel >= 0x6db100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db100 size=16 callers=0 calls=0
*/
void sub_6db100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db100ULL || rel >= 0x6db110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db110 size=272 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: request_cancel_all.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_request_cancel_all_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db110ULL || rel >= 0x6db220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db220 size=368 callers=0 calls=10
   calls: gflnet3_sequence_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: sequence_data_holder.proto
   ref: CHECK failed: file != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_sequence_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db220ULL || rel >= 0x6db390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db390 size=272 callers=3 calls=12
   calls: gflnet3_cancel_accepted_2, gflnet3_cancel_accepted_5, gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_request_cancel_2, gflnet3_request_cancel_5, gflnet3_request_cancel_all_2, gflnet3_request_cancel_all_5, gflnet3_request_forced_proceed_2, gflnet3_request_forced_proceed_5, sub_c70
   ref: sequence_data_holder.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_sequence_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db390ULL || rel >= 0x6db4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db4a0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_6db4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db4a0ULL || rel >= 0x6db500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db500 size=144 callers=0 calls=4
   calls: gflnet3_message_4, gflnet3_sequence_data_holder_2, sub_6fff50, sub_7007d0
*/
void sub_6db500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db500ULL || rel >= 0x6db590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db590 size=32 callers=2 calls=0
*/
void sub_6db590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db590ULL || rel >= 0x6db5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db5b0 size=656 callers=0 calls=10
   calls: gflnet3_cancel_accepted_5, gflnet3_generated_message_util, gflnet3_request_cancel_5, gflnet3_request_cancel_all_5, gflnet3_request_forced_proceed_5, sub_6d9040, sub_6d9c40, sub_6da9e0, sub_6dc8e0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_sequence_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db5b0ULL || rel >= 0x6db840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db840 size=160 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6db840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db840ULL || rel >= 0x6db8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db8e0 size=48 callers=0 calls=1
   calls: sub_6db840
*/
void sub_6db8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db8e0ULL || rel >= 0x6db910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db910 size=96 callers=1 calls=0
*/
void sub_6db910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db910ULL || rel >= 0x6db970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db970 size=16 callers=0 calls=0
*/
void sub_6db970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db970ULL || rel >= 0x6db980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db980 size=96 callers=0 calls=2
   calls: sub_6db9e0, sub_c70
*/
void sub_6db980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db980ULL || rel >= 0x6db9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006db9e0 size=32 callers=1 calls=0
*/
void sub_6db9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6db9e0ULL || rel >= 0x6dba00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dba00 size=96 callers=0 calls=0
*/
void sub_6dba00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dba00ULL || rel >= 0x6dba60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dba60 size=1328 callers=0 calls=14
   calls: sub_6d9040, sub_6d92c0, sub_6d9c40, sub_6d9ee0, sub_6da9e0, sub_6dac60, sub_6dc8e0, sub_6dcb70, sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480
   ... +2 more
*/
void sub_6dba60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dba60ULL || rel >= 0x6dbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dbf90 size=176 callers=0 calls=1
   calls: sub_714af0
*/
void sub_6dbf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dbf90ULL || rel >= 0x6dc040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc040 size=416 callers=0 calls=0
*/
void sub_6dc040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc040ULL || rel >= 0x6dc1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc1e0 size=208 callers=0 calls=5
   calls: sub_6d9470, sub_6da1c0, sub_6dae10, sub_6dce90, sub_70d000
*/
void sub_6dc1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc1e0ULL || rel >= 0x6dc2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc2b0 size=208 callers=0 calls=2
   calls: gflnet3_generated_message_util, gflnet3_sequence_data_holder_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_sequence_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc2b0ULL || rel >= 0x6dc380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc380 size=80 callers=0 calls=0
*/
void sub_6dc380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc380ULL || rel >= 0x6dc3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc3d0 size=16 callers=0 calls=0
*/
void sub_6dc3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc3d0ULL || rel >= 0x6dc3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc3e0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6dc3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc3e0ULL || rel >= 0x6dc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc450 size=16 callers=0 calls=0
*/
void sub_6dc450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc450ULL || rel >= 0x6dc460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc460 size=32 callers=0 calls=0
*/
void sub_6dc460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc460ULL || rel >= 0x6dc480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc480 size=16 callers=0 calls=0
*/
void sub_6dc480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc480ULL || rel >= 0x6dc490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc490 size=16 callers=0 calls=0
*/
void sub_6dc490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc490ULL || rel >= 0x6dc4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc4a0 size=128 callers=0 calls=0
*/
void sub_6dc4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc4a0ULL || rel >= 0x6dc520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc520 size=416 callers=0 calls=13
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffc70, sub_6ffe30, sub_6ffe50, sub_73c620, sub_c70
   ... +1 more
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: CHECK failed: file != NULL: 
   ref: request_forced_proceed.proto
*/
void gflnet3_request_forced_proceed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc520ULL || rel >= 0x6dc6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc6c0 size=176 callers=1 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: request_forced_proceed.proto
*/
void gflnet3_request_forced_proceed_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc6c0ULL || rel >= 0x6dc770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc770 size=80 callers=0 calls=0
*/
void sub_6dc770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc770ULL || rel >= 0x6dc7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc7c0 size=288 callers=0 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_message_4, sub_6ffc70, sub_6fff50, sub_7007d0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: request_forced_proceed.proto
*/
void gflnet3_request_forced_proceed_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc7c0ULL || rel >= 0x6dc8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc8e0 size=32 callers=2 calls=0
*/
void sub_6dc8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc8e0ULL || rel >= 0x6dc900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc900 size=64 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
*/
void gflnet3_request_forced_proceed_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc900ULL || rel >= 0x6dc940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc940 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6dc940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc940ULL || rel >= 0x6dc9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dc9a0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6dc9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dc9a0ULL || rel >= 0x6dca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dca00 size=16 callers=0 calls=0
*/
void sub_6dca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dca00ULL || rel >= 0x6dca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dca10 size=208 callers=3 calls=5
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: request_forced_proceed.proto
*/
void gflnet3_request_forced_proceed_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dca10ULL || rel >= 0x6dcae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dcae0 size=96 callers=0 calls=2
   calls: sub_6dcb40, sub_c70
*/
void sub_6dcae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dcae0ULL || rel >= 0x6dcb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dcb40 size=32 callers=1 calls=0
*/
void sub_6dcb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dcb40ULL || rel >= 0x6dcb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dcb60 size=16 callers=0 calls=0
*/
void sub_6dcb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dcb60ULL || rel >= 0x6dcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dcb70 size=512 callers=1 calls=3
   calls: sub_70c190, sub_70c480, sub_713480
*/
void sub_6dcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dcb70ULL || rel >= 0x6dcd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dcd70 size=80 callers=0 calls=1
   calls: sub_713690
*/
void sub_6dcd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dcd70ULL || rel >= 0x6dcdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dcdc0 size=208 callers=0 calls=1
   calls: sub_70cee0
*/
void sub_6dcdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dcdc0ULL || rel >= 0x6dce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dce90 size=160 callers=1 calls=1
   calls: sub_70d000
*/
void sub_6dce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dce90ULL || rel >= 0x6dcf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dcf30 size=384 callers=0 calls=6
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_generated_message_util, gflnet3_message_3, sub_6ffc70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: request_forced_proceed.proto
*/
void gflnet3_request_forced_proceed_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dcf30ULL || rel >= 0x6dd0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd0b0 size=80 callers=0 calls=0
*/
void sub_6dd0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd0b0ULL || rel >= 0x6dd100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd100 size=16 callers=0 calls=0
*/
void sub_6dd100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd100ULL || rel >= 0x6dd110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd110 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6dd110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd110ULL || rel >= 0x6dd180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd180 size=16 callers=0 calls=0
*/
void sub_6dd180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd180ULL || rel >= 0x6dd190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd190 size=32 callers=0 calls=0
*/
void sub_6dd190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd190ULL || rel >= 0x6dd1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd1b0 size=16 callers=0 calls=0
*/
void sub_6dd1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd1b0ULL || rel >= 0x6dd1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd1c0 size=16 callers=0 calls=0
*/
void sub_6dd1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd1c0ULL || rel >= 0x6dd1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd1d0 size=288 callers=0 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/
   ref: request_forced_proceed.proto
*/
void gflnet3_request_forced_proceed_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd1d0ULL || rel >= 0x6dd2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd2f0 size=16 callers=1 calls=0
*/
void sub_6dd2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd2f0ULL || rel >= 0x6dd300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd300 size=128 callers=0 calls=0
*/
void sub_6dd300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd300ULL || rel >= 0x6dd380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd380 size=400 callers=0 calls=3
   calls: SubmitNetworkRequest, sub_6a2c90, sub_6a2cb0
*/
void sub_6dd380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd380ULL || rel >= 0x6dd510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd510 size=64 callers=0 calls=0
*/
void sub_6dd510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd510ULL || rel >= 0x6dd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd550 size=16 callers=0 calls=0
*/
void sub_6dd550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd550ULL || rel >= 0x6dd560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd560 size=16 callers=0 calls=0
*/
void sub_6dd560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd560ULL || rel >= 0x6dd570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd570 size=224 callers=0 calls=2
   calls: sub_6a2c30, sub_6a2cb0
*/
void sub_6dd570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd570ULL || rel >= 0x6dd650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd650 size=80 callers=0 calls=0
*/
void sub_6dd650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd650ULL || rel >= 0x6dd6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd6a0 size=80 callers=0 calls=0
*/
void sub_6dd6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd6a0ULL || rel >= 0x6dd6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd6f0 size=64 callers=0 calls=0
*/
void sub_6dd6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd6f0ULL || rel >= 0x6dd730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd730 size=16 callers=0 calls=0
*/
void sub_6dd730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd730ULL || rel >= 0x6dd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd740 size=16 callers=0 calls=0
*/
void sub_6dd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd740ULL || rel >= 0x6dd750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd750 size=16 callers=0 calls=0
*/
void sub_6dd750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd750ULL || rel >= 0x6dd760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd760 size=16 callers=0 calls=0
*/
void sub_6dd760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd760ULL || rel >= 0x6dd770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd770 size=16 callers=0 calls=0
*/
void sub_6dd770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd770ULL || rel >= 0x6dd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd780 size=48 callers=0 calls=0
*/
void sub_6dd780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd780ULL || rel >= 0x6dd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd7b0 size=128 callers=0 calls=0
*/
void sub_6dd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd7b0ULL || rel >= 0x6dd830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd830 size=416 callers=0 calls=4
   calls: sub_6a2b60, sub_6a2f20, sub_6a3110, sub_6a3150
*/
void sub_6dd830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd830ULL || rel >= 0x6dd9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dd9d0 size=224 callers=0 calls=2
   calls: sub_6a30e0, sub_6a3110
*/
void sub_6dd9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dd9d0ULL || rel >= 0x6ddab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ddab0 size=80 callers=0 calls=0
*/
void sub_6ddab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ddab0ULL || rel >= 0x6ddb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ddb00 size=128 callers=0 calls=0
*/
void sub_6ddb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ddb00ULL || rel >= 0x6ddb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ddb80 size=160 callers=0 calls=1
   calls: sub_6a0b80
*/
void sub_6ddb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ddb80ULL || rel >= 0x6ddc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ddc20 size=16 callers=0 calls=0
*/
void sub_6ddc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ddc20ULL || rel >= 0x6ddc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ddc30 size=80 callers=0 calls=0
*/
void sub_6ddc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ddc30ULL || rel >= 0x6ddc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ddc80 size=128 callers=0 calls=0
*/
void sub_6ddc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ddc80ULL || rel >= 0x6ddd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ddd00 size=112 callers=0 calls=0
*/
void sub_6ddd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ddd00ULL || rel >= 0x6ddd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ddd70 size=112 callers=0 calls=0
*/
void sub_6ddd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ddd70ULL || rel >= 0x6ddde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ddde0 size=32 callers=0 calls=0
*/
void sub_6ddde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ddde0ULL || rel >= 0x6dde00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dde00 size=480 callers=2 calls=0
*/
void sub_6dde00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dde00ULL || rel >= 0x6ddfe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ddfe0 size=208 callers=8 calls=1
   calls: sub_5d0e50
*/
void sub_6ddfe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ddfe0ULL || rel >= 0x6de0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de0b0 size=624 callers=2 calls=6
   calls: sub_1751010, sub_17510b0, sub_5d0b10, sub_5d0f90, sub_6de320, sub_6de3f0
   ref: HttpThread
*/
void HttpThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de0b0ULL || rel >= 0x6de320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de320 size=208 callers=1 calls=1
   calls: sub_17510b0
*/
void sub_6de320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de320ULL || rel >= 0x6de3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de3f0 size=448 callers=1 calls=1
   calls: sub_17510b0
*/
void sub_6de3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de3f0ULL || rel >= 0x6de5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de5b0 size=112 callers=2 calls=1
   calls: sub_5d0e50
*/
void sub_6de5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de5b0ULL || rel >= 0x6de620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de620 size=32 callers=2 calls=0
*/
void sub_6de620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de620ULL || rel >= 0x6de640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de640 size=32 callers=6 calls=0
*/
void sub_6de640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de640ULL || rel >= 0x6de660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de660 size=16 callers=1 calls=0
*/
void sub_6de660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de660ULL || rel >= 0x6de670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de670 size=32 callers=3 calls=0
*/
void sub_6de670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de670ULL || rel >= 0x6de690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de690 size=160 callers=1 calls=1
   calls: sub_1751330
*/
void sub_6de690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de690ULL || rel >= 0x6de730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de730 size=160 callers=0 calls=4
   calls: easy_handle_already_used_in_multi_handle, sub_1751320, sub_1751330, sub_6de690
*/
void sub_6de730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de730ULL || rel >= 0x6de7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de7d0 size=16 callers=0 calls=0
*/
void sub_6de7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de7d0ULL || rel >= 0x6de7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de7e0 size=16 callers=0 calls=0
*/
void sub_6de7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de7e0ULL || rel >= 0x6de7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de7f0 size=16 callers=0 calls=0
*/
void sub_6de7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de7f0ULL || rel >= 0x6de800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de800 size=128 callers=0 calls=0
*/
void sub_6de800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de800ULL || rel >= 0x6de880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de880 size=96 callers=0 calls=1
   calls: sub_6a0cb0
*/
void sub_6de880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de880ULL || rel >= 0x6de8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de8e0 size=80 callers=0 calls=0
*/
void sub_6de8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de8e0ULL || rel >= 0x6de930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de930 size=80 callers=0 calls=0
*/
void sub_6de930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de930ULL || rel >= 0x6de980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006de980 size=128 callers=0 calls=0
*/
void sub_6de980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6de980ULL || rel >= 0x6dea00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dea00 size=528 callers=1 calls=2
   calls: sub_6f7600, sub_6f85a0
*/
void sub_6dea00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dea00ULL || rel >= 0x6dec10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dec10 size=720 callers=1 calls=3
   calls: sub_6df2a0, sub_6f61f0, sub_ce0
*/
void sub_6dec10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dec10ULL || rel >= 0x6deee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006deee0 size=480 callers=2 calls=4
   calls: sub_6df0c0, sub_6df1b0, sub_6f7890, sub_6f8ae0
*/
void sub_6deee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6deee0ULL || rel >= 0x6df0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006df0c0 size=240 callers=2 calls=0
*/
void sub_6df0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6df0c0ULL || rel >= 0x6df1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006df1b0 size=240 callers=2 calls=0
*/
void sub_6df1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6df1b0ULL || rel >= 0x6df2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006df2a0 size=368 callers=3 calls=2
   calls: sub_6fffa0, sub_ce0
*/
void sub_6df2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6df2a0ULL || rel >= 0x6df410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006df410 size=496 callers=1 calls=1
   calls: sub_c70
*/
void sub_6df410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6df410ULL || rel >= 0x6df600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006df600 size=1776 callers=2 calls=10
   calls: sub_6df2a0, sub_6f9490, sub_6f95c0, sub_6f9b60, sub_6f9cc0, sub_6f9e90, sub_6f9ff0, sub_6fa150, sub_6fa2b0, sub_ce0
*/
void sub_6df600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6df600ULL || rel >= 0x6dfcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dfcf0 size=368 callers=1 calls=3
   calls: sub_6fa410, sub_c70, sub_ce0
*/
void sub_6dfcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dfcf0ULL || rel >= 0x6dfe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006dfe60 size=864 callers=2 calls=2
   calls: sub_6f8830, sub_c70
*/
void sub_6dfe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6dfe60ULL || rel >= 0x6e01c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e01c0 size=832 callers=4 calls=2
   calls: sub_6f8ae0, sub_c70
*/
void sub_6e01c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e01c0ULL || rel >= 0x6e0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e0500 size=832 callers=2 calls=2
   calls: sub_6f8d80, sub_c70
*/
void sub_6e0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e0500ULL || rel >= 0x6e0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e0840 size=496 callers=1 calls=3
   calls: sub_6a54a0, sub_c70, sub_ce0
*/
void sub_6e0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e0840ULL || rel >= 0x6e0a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e0a30 size=272 callers=33 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6e0a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e0a30ULL || rel >= 0x6e0b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e0b40 size=272 callers=1 calls=3
   calls: sub_6deee0, sub_c70, sub_ce0
*/
void sub_6e0b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e0b40ULL || rel >= 0x6e0c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e0c50 size=272 callers=25 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6e0c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e0c50ULL || rel >= 0x6e0d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e0d60 size=304 callers=0 calls=4
   calls: sub_6e0e90, sub_6fe620, sub_6ff440, sub_ce0
*/
void sub_6e0d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e0d60ULL || rel >= 0x6e0e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e0e90 size=976 callers=1 calls=2
   calls: sub_6f9020, sub_c70
*/
void sub_6e0e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e0e90ULL || rel >= 0x6e1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e1260 size=304 callers=1 calls=6
   calls: sub_6fa700, sub_6fe620, sub_6ff440, sub_6fff50, sub_7007d0, sub_ce0
*/
void sub_6e1260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e1260ULL || rel >= 0x6e1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e1390 size=112 callers=82 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6e1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e1390ULL || rel >= 0x6e1400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e1400 size=208 callers=222 calls=7
   calls: gflnet3_descriptor_database, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_6fff50, sub_7007d0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: CHECK failed: generated_database_->Add(encoded_file_descriptor, size): 
*/
void gflnet3_descriptor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e1400ULL || rel >= 0x6e14d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e14d0 size=640 callers=77 calls=6
   calls: gflnet3_common_2, gflnet3_common_3, sub_6e14d0, sub_6e1750, sub_6f6280, sub_ce0
*/
void sub_6e14d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e14d0ULL || rel >= 0x6e1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e1750 size=1136 callers=2 calls=6
   calls: sub_6e3260, sub_6fa920, sub_6fab40, sub_745490, sub_745910, sub_c70
*/
void sub_6e1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e1750ULL || rel >= 0x6e1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e1bc0 size=336 callers=7 calls=0
*/
void sub_6e1bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e1bc0ULL || rel >= 0x6e1d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e1d10 size=1184 callers=2 calls=8
   calls: sub_6e3260, sub_6e3700, sub_6f6280, sub_6fa920, sub_6fab40, sub_745490, sub_745910, sub_c70
*/
void sub_6e1d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e1d10ULL || rel >= 0x6e21b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e21b0 size=48 callers=3 calls=1
   calls: sub_6e21e0
*/
void sub_6e21b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e21b0ULL || rel >= 0x6e21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e21e0 size=624 callers=3 calls=6
   calls: gflnet3_common_2, gflnet3_common_3, sub_6e1bc0, sub_6e1d10, sub_6e21e0, sub_ce0
*/
void sub_6e21e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e21e0ULL || rel >= 0x6e2450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e2450 size=80 callers=1 calls=1
   calls: sub_6e21e0
*/
void sub_6e2450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e2450ULL || rel >= 0x6e24a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e24a0 size=816 callers=4 calls=5
   calls: gflnet3_common_2, gflnet3_common_3, sub_6e24a0, sub_6e27d0, sub_ce0
*/
void sub_6e24a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e24a0ULL || rel >= 0x6e27d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e27d0 size=208 callers=1 calls=4
   calls: sub_6e3260, sub_6f6280, sub_745490, sub_745910
*/
void sub_6e27d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e27d0ULL || rel >= 0x6e28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e28a0 size=272 callers=7 calls=0
*/
void sub_6e28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e28a0ULL || rel >= 0x6e29b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e29b0 size=96 callers=1 calls=1
   calls: sub_6f64e0
*/
void sub_6e29b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e29b0ULL || rel >= 0x6e2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e2a10 size=80 callers=10 calls=1
   calls: sub_6e2a60
*/
void sub_6e2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e2a10ULL || rel >= 0x6e2a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e2a60 size=400 callers=7 calls=0
*/
void sub_6e2a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e2a60ULL || rel >= 0x6e2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e2bf0 size=48 callers=1 calls=1
   calls: sub_6e2a60
*/
void sub_6e2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e2bf0ULL || rel >= 0x6e2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e2c20 size=304 callers=8 calls=0
*/
void sub_6e2c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e2c20ULL || rel >= 0x6e2d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e2d50 size=32 callers=0 calls=0
*/
void sub_6e2d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e2d50ULL || rel >= 0x6e2d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e2d70 size=1184 callers=0 calls=11
   calls: gflnet3_common_2, gflnet3_common_3, sub_6e0500, sub_6e0a30, sub_6e0c50, sub_6ead90, sub_6fff50, sub_7007d0, sub_70def0, sub_74fb70, sub_ce0
   ref: UNKNOWN_ENUM_VALUE_%s_%d
*/
void UNKNOWN_ENUM_VALUE__s__d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e2d70ULL || rel >= 0x6e3210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e3210 size=80 callers=2 calls=0
*/
void sub_6e3210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e3210ULL || rel >= 0x6e3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e3260 size=1184 callers=3 calls=6
   calls: proto2, sub_6e9710, sub_6fa920, sub_6fab40, sub_700120, sub_c70
*/
void sub_6e3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e3260ULL || rel >= 0x6e3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e3700 size=320 callers=2 calls=3
   calls: sub_6e1bc0, sub_6e3700, sub_ce0
*/
void sub_6e3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e3700ULL || rel >= 0x6e3840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e3840 size=48 callers=26 calls=0
*/
void sub_6e3840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e3840ULL || rel >= 0x6e3870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e3870 size=672 callers=2 calls=12
   calls: sub_6fe290, sub_6fe760, sub_6fe8d0, sub_6fe9a0, sub_6feb10, sub_6febe0, sub_6fed50, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_ce0
   ref: CHECK failed: has_default_value(): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: Can't get here: failed to get default value as string
   ref: No default value
   ref: Messages can't have default values!
*/
void gflnet3_descriptor_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e3870ULL || rel >= 0x6e3b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e3b10 size=1344 callers=1 calls=16
   calls: sub_6e4050, sub_6e4160, sub_6e47e0, sub_6e4970, sub_6e4b00, sub_6f6640, sub_6f66a0, sub_6f67b0, sub_6f68e0, sub_6f6960, sub_6f69e0, sub_6f6a60
   ... +4 more
   ref: proto3
*/
void proto3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e3b10ULL || rel >= 0x6e4050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e4050 size=272 callers=2 calls=3
   calls: sub_6f6640, sub_c70, sub_ce0
*/
void sub_6e4050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e4050ULL || rel >= 0x6e4160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e4160 size=1664 callers=2 calls=16
   calls: sub_6e4160, sub_6e47e0, sub_6e4b00, sub_6e4e40, sub_6f6640, sub_6f66a0, sub_6f68e0, sub_6f6960, sub_6f6a60, sub_6f6ae0, sub_6f6b60, sub_6f6be0
   ... +4 more
*/
void sub_6e4160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e4160ULL || rel >= 0x6e47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e47e0 size=400 callers=2 calls=7
   calls: sub_6e5120, sub_6f6640, sub_6f6c60, sub_722e50, sub_74e9f0, sub_756e60, sub_c70
*/
void sub_6e47e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e47e0ULL || rel >= 0x6e4970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e4970 size=400 callers=1 calls=7
   calls: sub_6e51f0, sub_6f6640, sub_6f6ce0, sub_722e50, sub_750ac0, sub_7582f0, sub_c70
*/
void sub_6e4970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e4970ULL || rel >= 0x6e4b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e4b00 size=832 callers=3 calls=9
   calls: gflnet3_descriptor_2, sub_6e4f00, sub_6e5010, sub_6f6640, sub_74c0f0, sub_7555f0, sub_756470, sub_c70, sub_ce0
*/
void sub_6e4b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e4b00ULL || rel >= 0x6e4e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e4e40 size=192 callers=1 calls=4
   calls: sub_6f6640, sub_74dc90, sub_756580, sub_c70
*/
void sub_6e4e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e4e40ULL || rel >= 0x6e4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e4f00 size=272 callers=1 calls=3
   calls: sub_6f6640, sub_c70, sub_ce0
*/
void sub_6e4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e4f00ULL || rel >= 0x6e5010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e5010 size=272 callers=2 calls=3
   calls: sub_6f6640, sub_c70, sub_ce0
*/
void sub_6e5010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e5010ULL || rel >= 0x6e5120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e5120 size=208 callers=1 calls=4
   calls: sub_6f6640, sub_74fb70, sub_757920, sub_c70
*/
void sub_6e5120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e5120ULL || rel >= 0x6e51f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e51f0 size=464 callers=1 calls=7
   calls: sub_6e53c0, sub_6e54d0, sub_6f6640, sub_751ca0, sub_758cc0, sub_759580, sub_c70
*/
void sub_6e51f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e51f0ULL || rel >= 0x6e53c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e53c0 size=272 callers=1 calls=3
   calls: sub_6f6640, sub_c70, sub_ce0
*/
void sub_6e53c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e53c0ULL || rel >= 0x6e54d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e54d0 size=272 callers=1 calls=3
   calls: sub_6f6640, sub_c70, sub_ce0
*/
void sub_6e54d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e54d0ULL || rel >= 0x6e55e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e55e0 size=336 callers=5 calls=2
   calls: sub_ce0, unnamed_11
*/
void sub_6e55e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e55e0ULL || rel >= 0x6e5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e5730 size=608 callers=3 calls=4
   calls: gflnet3_substitute, sub_6f6f50, sub_c70, sub_ce0
   ref: $0option $1;
*/
void f_0option_1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e5730ULL || rel >= 0x6e5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e5990 size=1072 callers=1 calls=9
   calls: f_0_1_2, f_0option_1, gflnet3_logging, gflnet3_substitute, sub_6e55e0, sub_6e8d80, sub_c70, sub_ce0, unnamed_11
   ref: $0enum $1 {
*/
void f_0enum_1(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e5990ULL || rel >= 0x6e5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e5dc0 size=4000 callers=2 calls=16
   calls: f_0enum_1, f_0option_1, gflnet3_logging, gflnet3_substitute, sub_6a54a0, sub_6e55e0, sub_6e84d0, sub_6f74c0, sub_6fe290, sub_6fe390, sub_c70, sub_ce0
   ... +4 more
   ref: $0  extend .$1 {
   ref: $0  reserved 
   ref: $0  extensions $1 to $2;
   ref: $0message $1
   ref: "$0", 
   ref: $0 to $1, 
*/
void unnamed_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e5dc0ULL || rel >= 0x6e6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e6d60 size=1984 callers=4 calls=12
   calls: gflnet3_descriptor_2, gflnet3_logging, gflnet3_substitute, sub_6e55e0, sub_6e7ab0, sub_6e7b90, sub_6e8820, sub_6fe390, sub_c70, sub_ce0, unnamed_11, unnamed_8
   ref: map<$0, $1>
   ref: $0$1$2 $3 = $4
   ref:  [default = $0
   ref:  { ... };
*/
void unnamed_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e6d60ULL || rel >= 0x6e7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e7520 size=1104 callers=1 calls=9
   calls: f_0option_1, gflnet3_logging, gflnet3_substitute, sub_6e55e0, sub_6e8b80, sub_c70, sub_ce0, unnamed_11, unnamed_9
   ref:  ... }
   ref: $0 oneof $1 {
*/
void unnamed_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e7520ULL || rel >= 0x6e7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e7970 size=320 callers=1 calls=2
   calls: gflnet3_substitute, unnamed_9
   ref: extend .$0 {
*/
void extend_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e7970ULL || rel >= 0x6e7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e7ab0 size=224 callers=3 calls=1
   calls: sub_c70
*/
void sub_6e7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e7ab0ULL || rel >= 0x6e7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e7b90 size=352 callers=2 calls=3
   calls: sub_6f6f50, sub_6ff440, sub_ce0
*/
void sub_6e7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e7b90ULL || rel >= 0x6e7cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e7cf0 size=1088 callers=1 calls=9
   calls: gflnet3_logging, gflnet3_substitute, sub_6e55e0, sub_6e7b90, sub_6e90d0, sub_6fe390, sub_c70, sub_ce0, unnamed_11
   ref: $0$1 = $2
*/
void f_0_1_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e7cf0ULL || rel >= 0x6e8130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e8130 size=320 callers=5 calls=6
   calls: sub_6e1260, sub_6e8270, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: 'out_location' must not be NULL
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include\google/protobuf/stubs/loggi
*/
void gflnet3_logging(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e8130ULL || rel >= 0x6e8270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e8270 size=480 callers=1 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6e8270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e8270ULL || rel >= 0x6e8450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e8450 size=128 callers=6 calls=0
*/
void sub_6e8450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e8450ULL || rel >= 0x6e84d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e84d0 size=848 callers=6 calls=3
   calls: sub_6e84d0, sub_c70, sub_ce0
*/
void sub_6e84d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e84d0ULL || rel >= 0x6e8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e8820 size=864 callers=1 calls=3
   calls: sub_6e84d0, sub_c70, sub_ce0
*/
void sub_6e8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e8820ULL || rel >= 0x6e8b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e8b80 size=512 callers=1 calls=3
   calls: sub_6e84d0, sub_c70, sub_ce0
*/
void sub_6e8b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e8b80ULL || rel >= 0x6e8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e8d80 size=848 callers=2 calls=3
   calls: sub_6e84d0, sub_c70, sub_ce0
*/
void sub_6e8d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e8d80ULL || rel >= 0x6e90d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e90d0 size=512 callers=1 calls=3
   calls: sub_6e8d80, sub_c70, sub_ce0
*/
void sub_6e90d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e90d0ULL || rel >= 0x6e92d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e92d0 size=1088 callers=1 calls=12
   calls: File_recursively_imports_itself, gflnet3_descriptor_5, proto3, sub_6e14d0, sub_6e1750, sub_6e4050, sub_6f6280, sub_6fb0c0, sub_70b380, sub_745490, sub_745910, sub_ce0
   ref: proto2
*/
void proto2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e92d0ULL || rel >= 0x6e9710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e9710 size=240 callers=1 calls=2
   calls: sub_6f7540, sub_ce0
*/
void sub_6e9710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e9710ULL || rel >= 0x6e9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e9800 size=288 callers=52 calls=5
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: Invalid proto descriptor for file "
*/
void gflnet3_descriptor_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e9800ULL || rel >= 0x6e9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e9920 size=240 callers=34 calls=3
   calls: gflnet3_descriptor_3, sub_c70, sub_ce0
*/
void sub_6e9920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e9920ULL || rel >= 0x6e9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e9a10 size=1104 callers=3 calls=2
   calls: gflnet3_descriptor_3, sub_ce0
   ref: ".  To use it here, please add the necessary import.
   ref: " seems to be defined in "
   ref: ", which is not imported by "
   ref: " is resolved to "
   ref: ", which is not defined. The innermost scope is searched first in name resolution. Consider using a 
   ref: ") to start from the outermost scope.
   ref: " is not defined.
*/
void is_not_defined(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e9a10ULL || rel >= 0x6e9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e9e60 size=208 callers=3 calls=5
   calls: sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
*/
void gflnet3_descriptor_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e9e60ULL || rel >= 0x6e9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006e9f30 size=304 callers=2 calls=3
   calls: sub_6a54a0, sub_6e9f30, sub_c70
*/
void sub_6e9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6e9f30ULL || rel >= 0x6ea060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ea060 size=352 callers=2 calls=6
   calls: sub_6e0a30, sub_6e0c50, sub_6fff50, sub_7007d0, sub_745560, sub_7455a0
*/
void sub_6ea060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ea060ULL || rel >= 0x6ea1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ea1c0 size=672 callers=2 calls=7
   calls: Missing_name, gflnet3_descriptor_3, is_already_defined_as_something_other_than_a_package_in, sub_6e0a30, sub_6e1bc0, sub_6ea460, sub_ce0
   ref: " is already defined (as something other than a package) in file "
*/
void is_already_defined_as_something_other_than_a_package_in(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ea1c0ULL || rel >= 0x6ea460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ea460 size=1136 callers=2 calls=3
   calls: sub_6f7600, sub_c70, sub_ce0
*/
void sub_6ea460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ea460ULL || rel >= 0x6ea8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ea8d0 size=400 callers=8 calls=2
   calls: gflnet3_descriptor_3, sub_ce0
   ref: Missing name.
   ref: " is not a valid identifier.
*/
void Missing_name(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ea8d0ULL || rel >= 0x6eaa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006eaa60 size=816 callers=1 calls=5
   calls: gflnet3_message_lite, sub_6fafb0, sub_70b380, sub_c70, sub_ce0
*/
void sub_6eaa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eaa60ULL || rel >= 0x6ead90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ead90 size=256 callers=8 calls=1
   calls: sub_c70
*/
void sub_6ead90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ead90ULL || rel >= 0x6eae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006eae90 size=352 callers=1 calls=3
   calls: gflnet3_descriptor_3, sub_c70, sub_ce0
   ref: File recursively imports itself: 
*/
void File_recursively_imports_itself(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eae90ULL || rel >= 0x6eaff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006eaff0 size=176 callers=1 calls=2
   calls: gflnet3_descriptor_3, sub_ce0
   ref: " was listed twice.
   ref: Import "
*/
void Import(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eaff0ULL || rel >= 0x6eb0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006eb0a0 size=352 callers=1 calls=2
   calls: gflnet3_descriptor_3, sub_ce0
   ref: " was not found or had errors.
   ref: Import "
   ref: " has not been loaded.
*/
void Import_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eb0a0ULL || rel >= 0x6eb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006eb200 size=4416 callers=1 calls=48
   calls: Couldn_t_parse_default_value, Enums_must_contain_at_least_one_value, Expanded_map_entry_type, Field_name_0_is_reserved, Import, Import_2, Import_3, gflnet3_descriptor_3, gflnet3_descriptor_4, gflnet3_descriptor_8, gflnet3_message_lite_5, is_already_defined_as_something_other_than_a_package_in
   ... +36 more
   ref: uninterpreted_option
   ref: No field named "uninterpreted_option" in the Options proto.
   ref: CHECK failed: original_uninterpreted_options_field != NULL: 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: Invalid weak dependency index.
   ref: Invalid public dependency index.
   ref: CHECK failed: builder_: 
   ref: .dummy
*/
void gflnet3_descriptor_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eb200ULL || rel >= 0x6ec340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ec340 size=272 callers=1 calls=3
   calls: sub_75c970, sub_c70, sub_ce0
*/
void sub_6ec340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec340ULL || rel >= 0x6ec450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ec450 size=5360 callers=4 calls=17
   calls: Couldn_t_parse_default_value, Enums_must_contain_at_least_one_value, Field_name_0_is_reserved, Missing_name, gflnet3_descriptor_3, gflnet3_descriptor_6, sub_6e0a30, sub_6e0c50, sub_6e9920, sub_6eeef0, sub_6fab40, sub_6fb320
   ... +5 more
   ref: Extension range $0 to $1 includes field "$2" ($3).
   ref: Field "$0" uses reserved number $1.
   ref: Reserved numbers must be positive integers.
   ref: Extension numbers must be positive integers.
   ref: Extension range $0 to $1 overlaps with already-defined range $2 to $3.
   ref: Field name "$0" is reserved multiple times.
   ref: Extension range $0 to $1 overlaps with reserved range $2 to $3.
   ref: Extension range end number must be greater than start number.
*/
void Field_name_0_is_reserved(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ec450ULL || rel >= 0x6ed940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ed940 size=480 callers=4 calls=6
   calls: Missing_name, sub_6e0a30, sub_6e0c50, sub_6e9920, sub_6fc200, the_global_scope
   ref: Enums must contain at least one value.
*/
void Enums_must_contain_at_least_one_value(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ed940ULL || rel >= 0x6edb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006edb20 size=416 callers=2 calls=5
   calls: Missing_name, sub_6e0a30, sub_6e0c50, sub_6f0bc0, sub_6fca80
*/
void sub_6edb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6edb20ULL || rel >= 0x6edcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006edcc0 size=592 callers=1 calls=7
   calls: Enum_type, Oneof_must_have_at_least_one_field, is_not_a_message_type, sub_745560, sub_74e9f0, sub_74fb70, sub_750ac0
*/
void sub_6edcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6edcc0ULL || rel >= 0x6edf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006edf10 size=720 callers=1 calls=8
   calls: Extension_numbers_cannot_be_greater_than_0, MessageSets_cannot_have_fields_only_extensions, The_first_enum_value_must_be_zero_in_proto3, gflnet3_descriptor_3, gflnet3_descriptor_7, sub_6e9920, sub_745560, sub_ce0
   ref: Files that do not use optimize_for = LITE_RUNTIME cannot import files which do use this option.  Thi
   ref: Files with optimize_for = LITE_RUNTIME cannot define services unless you set both options cc_generic
   ref: " which is.
*/
void which_is(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6edf10ULL || rel >= 0x6ee1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ee1e0 size=1152 callers=2 calls=8
   calls: Expanded_map_entry_type, gflnet3_descriptor_3, sub_6a54a0, sub_6f7f10, sub_6fd540, sub_6fd670, sub_c70, sub_ce0
   ref: Expanded map entry type 
   ref:  conflicts with an existing oneof type.
   ref:  conflicts with an existing field.
   ref:  conflicts with an existing enum type.
   ref:  conflicts with an existing nested message type.
*/
void Expanded_map_entry_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ee1e0ULL || rel >= 0x6ee660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ee660 size=2192 callers=1 calls=7
   calls: gflnet3_descriptor_4, sub_6a54a0, sub_6f6230, sub_6f8250, sub_6f8380, sub_c70, sub_ce0
   ref: google.protobuf.EnumValueOptions
   ref: google.protobuf.MethodOptions
   ref: google.protobuf.FieldOptions
   ref: google.protobuf.FileOptions
   ref: google.protobuf.MessageOptions
   ref: google.protobuf.StreamOptions
   ref: Import 
   ref: google.protobuf.ServiceOptions
*/
void Import_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ee660ULL || rel >= 0x6eeef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006eeef0 size=272 callers=2 calls=3
   calls: Missing_name, sub_6e0a30, sub_6fbdc0
*/
void sub_6eeef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6eeef0ULL || rel >= 0x6ef000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ef000 size=1200 callers=3 calls=10
   calls: gflnet3_descriptor_3, sub_6e1bc0, sub_6ea460, sub_6f0840, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: " is already defined.
   ref: " not previously defined in symbols_by_name_, but was defined in symbols_by_parent_; this shouldn't 
   ref: " is already defined in file "
   ref: " is already defined in "
*/
void gflnet3_descriptor_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ef000ULL || rel >= 0x6ef4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ef4b0 size=3520 callers=6 calls=15
   calls: Missing_name, gflnet3_descriptor_3, gflnet3_descriptor_6, gflnet3_strtod, sub_6e0a30, sub_6e9920, sub_6f0270, sub_6fb980, sub_6fdf80, sub_6fe390, sub_6fff50, sub_7007d0
   ... +3 more
   ref: Boolean default must be true or false.
   ref: Field numbers $0 through $1 are reserved for the protocol buffer library implementation.
   ref: Repeated fields can't have default values.
   ref: FieldDescriptorProto.extendee set for non-extension field.
   ref: Couldn't parse default value "
   ref: FieldDescriptorProto.oneof_index $0 is out of range for type "$1".
   ref: FieldDescriptorProto.extendee not set for extension field.
   ref: Field numbers must be positive integers.
*/
void Couldn_t_parse_default_value(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ef4b0ULL || rel >= 0x6f0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f0270 size=368 callers=2 calls=0
*/
void sub_6f0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f0270ULL || rel >= 0x6f03e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f03e0 size=1120 callers=2 calls=8
   calls: Missing_name, gflnet3_descriptor_3, gflnet3_descriptor_6, sub_6e0500, sub_6e0a30, sub_6f0840, sub_6fc640, sub_ce0
   ref: , not just within "
   ref: the global scope
   ref: Note that enum values use C++ scoping rules, meaning that enum values are siblings of their type, no
   ref: " must be unique within 
*/
void the_global_scope(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f03e0ULL || rel >= 0x6f0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f0840 size=896 callers=2 calls=2
   calls: sub_6f7890, sub_c70
*/
void sub_6f0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f0840ULL || rel >= 0x6f0bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f0bc0 size=272 callers=2 calls=3
   calls: Missing_name, sub_6e0a30, sub_6fcec0
*/
void sub_6f0bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f0bc0ULL || rel >= 0x6f0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f0cd0 size=1440 callers=2 calls=12
   calls: Enum_type, Oneof_must_have_at_least_one_field, gflnet3_descriptor_3, sub_6e0c50, sub_6e9920, sub_6ead90, sub_7498f0, sub_74dc90, sub_74e9f0, sub_74fb70, sub_761bc0, sub_ce0
   ref: Fields in the same oneof must be defined consecutively. "$0" cannot be defined before the completion
   ref: Oneof must have at least one field.
*/
void Oneof_must_have_at_least_one_field(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f0cd0ULL || rel >= 0x6f1270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f1270 size=3152 callers=3 calls=15
   calls: PLACEHOLDER_VALUE, gflnet3_descriptor_3, gflnet3_descriptor_4, is_not_defined, sub_6dfe60, sub_6e01c0, sub_6e0840, sub_6e9920, sub_6f2370, sub_6f2750, sub_6fe390, sub_742720
   ... +3 more
   ref: Field with message or enum type missing type_name.
   ref: " has no value named "
   ref: Field number $0 has already been used in "$1" by field "$2".
   ref: "$0" does not declare $1 as an extension number.
   ref: " is not a message type.
   ref: Field with primitive type has type_name.
   ref: " is not a type.
   ref: " is not an enum type.
*/
void Enum_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f1270ULL || rel >= 0x6f1ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f1ec0 size=1200 callers=5 calls=11
   calls: sub_6e0a30, sub_6e0c50, sub_6ea060, sub_6ead90, sub_6f2750, sub_6fff50, sub_7007d0, sub_7498f0, sub_74e9f0, sub_74fb70, sub_ce0
   ref: PLACEHOLDER_VALUE
   ref: .PLACEHOLDER_VALUE
   ref: .placeholder.proto
*/
void PLACEHOLDER_VALUE(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f1ec0ULL || rel >= 0x6f2370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f2370 size=992 callers=6 calls=3
   calls: sub_6f7f60, sub_6f9720, sub_ce0
*/
void sub_6f2370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f2370ULL || rel >= 0x6f2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f2750 size=1024 callers=3 calls=2
   calls: sub_6f2370, sub_ce0
*/
void sub_6f2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f2750ULL || rel >= 0x6f2b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f2b50 size=464 callers=1 calls=5
   calls: PLACEHOLDER_VALUE, gflnet3_descriptor_3, is_not_defined, sub_751ca0, sub_ce0
   ref: " is not a message type.
*/
void is_not_a_message_type(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f2b50ULL || rel >= 0x6f2d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f2d20 size=672 callers=2 calls=7
   calls: Extension_numbers_cannot_be_greater_than_0, MessageSets_cannot_have_fields_only_extensions, gflnet3_descriptor_3, gflnet3_descriptor_7, sub_6fe2c0, sub_761bc0, sub_ce0
   ref: Extension numbers cannot be greater than $0.
*/
void Extension_numbers_cannot_be_greater_than_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f2d20ULL || rel >= 0x6f2fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f2fc0 size=1072 callers=2 calls=9
   calls: gflnet3_descriptor_3, sub_6a54a0, sub_6f7ec0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_c70, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: " uses the same enum value as "
   ref: ". If this is intended, set 'option allow_alias = true;' to the enum definition.
*/
void gflnet3_descriptor_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f2fc0ULL || rel >= 0x6f33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f33f0 size=512 callers=3 calls=4
   calls: double_bytes_or_message_types, sub_6e9920, sub_745560, sub_7498f0
   ref: Extensions to non-lite types can only be declared in non-lite files.  Note that you cannot extend a 
   ref: Extensions of MessageSets must be optional messages.
   ref: [lazy = true] can only be specified for submessage fields.
   ref: [packed = true] can only be specified for repeated primitive fields.
   ref: MessageSets cannot have fields, only extensions.
   ref: map_entry should not be set explicitly. Use map<KeyType, ValueType> instead.
*/
void MessageSets_cannot_have_fields_only_extensions(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f33f0ULL || rel >= 0x6f35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f35f0 size=320 callers=1 calls=3
   calls: Enum_type_2, This_is_not, sub_6e9920
   ref: The first enum value must be zero in proto3.
*/
void The_first_enum_value_must_be_zero_in_proto3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f35f0ULL || rel >= 0x6f3730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f3730 size=672 callers=3 calls=6
   calls: gflnet3_descriptor_3, sub_6e9920, sub_6f8380, sub_6fff50, sub_7007d0, sub_ce0
   ref: Required fields are not allowed in proto3.
   ref: Explicit default values are not allowed in proto3.
   ref: Extensions in proto3 are only allowed for defining options.
   ref: " which is a proto3 message type.
   ref: Enum type "
   ref: " is not a proto3 enum, but is used in "
   ref: Groups are not supported in proto3 syntax.
*/
void Enum_type_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f3730ULL || rel >= 0x6f39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f39d0 size=1376 callers=2 calls=10
   calls: Enum_type_2, This_is_not, gflnet3_descriptor_3, sub_6a54a0, sub_6e9920, sub_6f7b40, sub_6fd300, sub_6fd410, sub_c70, sub_ce0
   ref: Extension ranges are not allowed in proto3.
   ref: " conflicts with field "
   ref: MessageSet is not supported in proto3.
   ref: The first enum value must be zero in proto3.
   ref: ". This is not 
   ref: The JSON camel-case name of field "
   ref: allowed in proto3.
*/
void This_is_not(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f39d0ULL || rel >= 0x6f3f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f3f30 size=720 callers=1 calls=3
   calls: sub_6e9920, sub_6f0270, sub_ce0
   ref: Key in map fields cannot be float/double, bytes or message types.
   ref: Enum value in map must define 0 as the first value.
   ref: Key in map fields cannot be enum types.
*/
void double_bytes_or_message_types(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f3f30ULL || rel >= 0x6f4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f4200 size=2976 callers=1 calls=24
   calls: Enum_type_3, PLACEHOLDER_VALUE, gflnet3_descriptor_10, gflnet3_descriptor_3, gflnet3_descriptor_9, sub_6e2a60, sub_6f7f60, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffde0, sub_6ffe30
   ... +12 more
   ref: uninterpreted_option
   ref: " is resolved to "(
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: Option "
   ref: " is not a field or extension of message "
   ref: " unknown.
   ref: Option must not use reserved name "uninterpreted_option".
   ref: CHECK failed: !out.HadError(): 
*/
void gflnet3_descriptor_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f4200ULL || rel >= 0x6f4da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f4da0 size=288 callers=1 calls=5
   calls: sub_6e2a60, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50
   ref: uninterpreted_option
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: CHECK failed: field != NULL: 
*/
void gflnet3_descriptor_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f4da0ULL || rel >= 0x6f4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f4ec0 size=656 callers=3 calls=10
   calls: gflnet3_descriptor_10, gflnet3_descriptor_3, sub_6ffaf0, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50, sub_70e0c0, sub_70ef70, sub_ce0
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: Option "
   ref: " was already set.
   ref: Invalid wire type for CPPTYPE_MESSAGE: 
*/
void gflnet3_descriptor_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f4ec0ULL || rel >= 0x6f5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f5150 size=2240 callers=1 calls=15
   calls: gflnet3_descriptor_11, gflnet3_descriptor_12, gflnet3_descriptor_13, gflnet3_descriptor_14, gflnet3_descriptor_15, gflnet3_descriptor_3, sub_6e2a60, sub_6f7f60, sub_6fff50, sub_7007d0, sub_70e800, sub_70e950
   ... +3 more
   ref: " has no value named "
   ref: Value must be "true" or "false" for boolean option "
   ref: Value must be integer for int32 option "
   ref: Value out of range for int64 option "
   ref: Value must be identifier for boolean option "
   ref: Value must be integer for int64 option "
   ref: Value must be non-negative integer for uint32 option "
   ref: Enum type "
*/
void Enum_type_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f5150ULL || rel >= 0x6f5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f5a10 size=192 callers=1 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: Invalid wire type for CPPTYPE_INT32: 
*/
void gflnet3_descriptor_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f5a10ULL || rel >= 0x6f5ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f5ad0 size=176 callers=1 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: Invalid wire type for CPPTYPE_INT64: 
*/
void gflnet3_descriptor_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f5ad0ULL || rel >= 0x6f5b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f5b80 size=176 callers=1 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: Invalid wire type for CPPTYPE_UINT32: 
*/
void gflnet3_descriptor_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f5b80ULL || rel >= 0x6f5c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f5c30 size=160 callers=1 calls=5
   calls: sub_6ffaf0, sub_6ffb60, sub_6ffde0, sub_6ffe30, sub_6ffe50
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: Invalid wire type for CPPTYPE_UINT64: 
*/
void gflnet3_descriptor_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f5c30ULL || rel >= 0x6f5cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f5cd0 size=1248 callers=1 calls=18
   calls: extend_0, gflnet3_descriptor_3, sub_6ffaf0, sub_6ffb20, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_700f70, sub_700f80, sub_700f90, sub_7012a0, sub_70b2c0
   ... +6 more
   ref: Could not create an instance of 
   ref: CHECK failed: (option_field->type()) == (FieldDescriptor::TYPE_GROUP): 
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.
   ref: CHECK failed: dynamic.get() != NULL: 
   ref: Option "
   ref: " is a message. To set the entire message, use syntax like "
   ref:  = { <proto text format> }". To set fields within it, use syntax like "
   ref: Error while parsing option value for "
*/
void gflnet3_descriptor_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f5cd0ULL || rel >= 0x6f61b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f61b0 size=64 callers=0 calls=1
   calls: sub_ce0
*/
void sub_6f61b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f61b0ULL || rel >= 0x6f61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f61f0 size=64 callers=3 calls=1
   calls: sub_6f61f0
*/
void sub_6f61f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f61f0ULL || rel >= 0x6f6230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6230 size=80 callers=6 calls=2
   calls: sub_6f6230, sub_ce0
*/
void sub_6f6230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6230ULL || rel >= 0x6f6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6280 size=304 callers=7 calls=0
*/
void sub_6f6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6280ULL || rel >= 0x6f63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f63b0 size=160 callers=0 calls=4
   calls: sub_6dea00, sub_6fff70, sub_75fa40, sub_c70
*/
void sub_6f63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f63b0ULL || rel >= 0x6f6450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6450 size=144 callers=0 calls=4
   calls: sub_6dec10, sub_6f6230, sub_6fffa0, sub_ce0
*/
void sub_6f6450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6450ULL || rel >= 0x6f64e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f64e0 size=352 callers=1 calls=0
*/
void sub_6f64e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f64e0ULL || rel >= 0x6f6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6640 size=96 callers=107 calls=1
   calls: sub_c70
*/
void sub_6f6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6640ULL || rel >= 0x6f66a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f66a0 size=240 callers=6 calls=4
   calls: sub_70da70, sub_70db70, sub_722e50, sub_c70
*/
void sub_6f66a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f66a0ULL || rel >= 0x6f6790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6790 size=32 callers=0 calls=0
*/
void sub_6f6790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6790ULL || rel >= 0x6f67b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f67b0 size=304 callers=27 calls=1
   calls: sub_70db70
*/
void sub_6f67b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f67b0ULL || rel >= 0x6f68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f68e0 size=112 callers=5 calls=4
   calls: sub_70da70, sub_70db70, sub_749820, sub_c70
*/
void sub_6f68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f68e0ULL || rel >= 0x6f6950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6950 size=16 callers=0 calls=0
*/
void sub_6f6950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6950ULL || rel >= 0x6f6960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6960 size=112 callers=5 calls=4
   calls: sub_70da70, sub_70db70, sub_74e950, sub_c70
*/
void sub_6f6960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6960ULL || rel >= 0x6f69d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f69d0 size=16 callers=0 calls=0
*/
void sub_6f69d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f69d0ULL || rel >= 0x6f69e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f69e0 size=112 callers=3 calls=4
   calls: sub_70da70, sub_70db70, sub_750a20, sub_c70
*/
void sub_6f69e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f69e0ULL || rel >= 0x6f6a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6a50 size=16 callers=0 calls=0
*/
void sub_6f6a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6a50ULL || rel >= 0x6f6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6a60 size=112 callers=7 calls=4
   calls: sub_70da70, sub_70db70, sub_74c040, sub_c70
*/
void sub_6f6a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6a60ULL || rel >= 0x6f6ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6ad0 size=16 callers=0 calls=0
*/
void sub_6f6ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6ad0ULL || rel >= 0x6f6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6ae0 size=112 callers=3 calls=4
   calls: sub_70da70, sub_70db70, sub_74dbf0, sub_c70
*/
void sub_6f6ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6ae0ULL || rel >= 0x6f6b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6b50 size=16 callers=0 calls=0
*/
void sub_6f6b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6b50ULL || rel >= 0x6f6b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6b60 size=112 callers=3 calls=4
   calls: sub_70da70, sub_70db70, sub_7486c0, sub_c70
*/
void sub_6f6b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6b60ULL || rel >= 0x6f6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6bd0 size=16 callers=0 calls=0
*/
void sub_6f6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6bd0ULL || rel >= 0x6f6be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6be0 size=112 callers=3 calls=4
   calls: sub_70da70, sub_70db70, sub_748f70, sub_c70
*/
void sub_6f6be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6be0ULL || rel >= 0x6f6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6c50 size=16 callers=0 calls=0
*/
void sub_6f6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6c50ULL || rel >= 0x6f6c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6c60 size=112 callers=3 calls=4
   calls: sub_70da70, sub_70db70, sub_74fad0, sub_c70
*/
void sub_6f6c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6c60ULL || rel >= 0x6f6cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6cd0 size=16 callers=0 calls=0
*/
void sub_6f6cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6cd0ULL || rel >= 0x6f6ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6ce0 size=112 callers=3 calls=4
   calls: sub_70da70, sub_70db70, sub_751c00, sub_c70
*/
void sub_6f6ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6ce0ULL || rel >= 0x6f6d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6d50 size=16 callers=0 calls=0
*/
void sub_6f6d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6d50ULL || rel >= 0x6f6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6d60 size=496 callers=7 calls=4
   calls: gflnet3_substitute, sub_6fd780, sub_6fd8d0, sub_ce0
   ref: $0// $1
*/
void unnamed_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6d60ULL || rel >= 0x6f6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f6f50 size=1040 callers=2 calls=7
   calls: sub_6ead90, sub_6f7360, sub_701730, sub_701790, sub_702ff0, sub_703ed0, sub_ce0
*/
void sub_6f6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f6f50ULL || rel >= 0x6f7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7360 size=352 callers=5 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6f7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7360ULL || rel >= 0x6f74c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f74c0 size=64 callers=3 calls=1
   calls: sub_6f74c0
*/
void sub_6f74c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f74c0ULL || rel >= 0x6f7500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7500 size=64 callers=4 calls=1
   calls: sub_6f7500
*/
void sub_6f7500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7500ULL || rel >= 0x6f7540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7540 size=64 callers=6 calls=1
   calls: sub_6f7540
*/
void sub_6f7540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7540ULL || rel >= 0x6f7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7580 size=64 callers=0 calls=2
   calls: sub_6deee0, sub_c70
*/
void sub_6f7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7580ULL || rel >= 0x6f75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f75c0 size=64 callers=0 calls=2
   calls: sub_6df2a0, sub_ce0
*/
void sub_6f75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f75c0ULL || rel >= 0x6f7600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7600 size=656 callers=2 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6f7600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7600ULL || rel >= 0x6f7890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7890 size=688 callers=2 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6f7890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7890ULL || rel >= 0x6f7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7b40 size=80 callers=3 calls=2
   calls: sub_6f7b40, sub_ce0
*/
void sub_6f7b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7b40ULL || rel >= 0x6f7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7b90 size=752 callers=0 calls=5
   calls: sub_6a54a0, sub_6f8250, sub_6ffc70, sub_c70, sub_ce0
   ref: google.protobuf.
*/
void google_protobuf(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7b90ULL || rel >= 0x6f7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7e80 size=64 callers=0 calls=1
   calls: sub_6f6230
*/
void sub_6f7e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7e80ULL || rel >= 0x6f7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7ec0 size=80 callers=3 calls=2
   calls: sub_6f7ec0, sub_ce0
*/
void sub_6f7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7ec0ULL || rel >= 0x6f7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7f10 size=80 callers=3 calls=2
   calls: sub_6f7f10, sub_ce0
*/
void sub_6f7f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7f10ULL || rel >= 0x6f7f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f7f60 size=256 callers=4 calls=5
   calls: gflnet3_common_2, gflnet3_common_3, sub_6e1bc0, sub_6e1d10, sub_6f7f60
*/
void sub_6f7f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f7f60ULL || rel >= 0x6f8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f8060 size=80 callers=0 calls=2
   calls: sub_740780, sub_ce0
*/
void sub_6f8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f8060ULL || rel >= 0x6f80b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f80b0 size=112 callers=0 calls=0
*/
void sub_6f80b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f80b0ULL || rel >= 0x6f8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f8120 size=16 callers=0 calls=0
*/
void sub_6f8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f8120ULL || rel >= 0x6f8130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f8130 size=48 callers=0 calls=1
   calls: sub_700f70
*/
void sub_6f8130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f8130ULL || rel >= 0x6f8160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f8160 size=240 callers=0 calls=2
   calls: sub_6f2750, sub_700120
*/
void sub_6f8160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f8160ULL || rel >= 0x6f8250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f8250 size=304 callers=11 calls=0
*/
void sub_6f8250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f8250ULL || rel >= 0x6f8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f8380 size=272 callers=2 calls=0
*/
void sub_6f8380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f8380ULL || rel >= 0x6f8490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f8490 size=272 callers=1 calls=0
*/
void sub_6f8490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f8490ULL || rel >= 0x6f85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f85a0 size=656 callers=1 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6f85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f85a0ULL || rel >= 0x6f8830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f8830 size=688 callers=1 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6f8830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f8830ULL || rel >= 0x6f8ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f8ae0 size=672 callers=2 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6f8ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f8ae0ULL || rel >= 0x6f8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f8d80 size=672 callers=1 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6f8d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f8d80ULL || rel >= 0x6f9020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f9020 size=272 callers=1 calls=0
*/
void sub_6f9020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f9020ULL || rel >= 0x6f9130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f9130 size=864 callers=0 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6f9130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f9130ULL || rel >= 0x6f9490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f9490 size=304 callers=1 calls=0
*/
void sub_6f9490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f9490ULL || rel >= 0x6f95c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f95c0 size=352 callers=1 calls=2
   calls: sub_6f9720, sub_ce0
*/
void sub_6f95c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f95c0ULL || rel >= 0x6f9720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f9720 size=1088 callers=53 calls=0
*/
void sub_6f9720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f9720ULL || rel >= 0x6f9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f9b60 size=352 callers=2 calls=1
   calls: sub_c70
*/
void sub_6f9b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f9b60ULL || rel >= 0x6f9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f9cc0 size=464 callers=1 calls=1
   calls: sub_c70
*/
void sub_6f9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f9cc0ULL || rel >= 0x6f9e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f9e90 size=352 callers=1 calls=1
   calls: sub_c70
*/
void sub_6f9e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f9e90ULL || rel >= 0x6f9ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006f9ff0 size=352 callers=1 calls=1
   calls: sub_c70
*/
void sub_6f9ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6f9ff0ULL || rel >= 0x6fa150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fa150 size=352 callers=1 calls=1
   calls: sub_c70
*/
void sub_6fa150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fa150ULL || rel >= 0x6fa2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fa2b0 size=352 callers=1 calls=1
   calls: sub_c70
*/
void sub_6fa2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fa2b0ULL || rel >= 0x6fa410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fa410 size=624 callers=2 calls=2
   calls: sub_6f8490, sub_c70
*/
void sub_6fa410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fa410ULL || rel >= 0x6fa680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fa680 size=48 callers=0 calls=1
   calls: sub_6fff50
*/
void sub_6fa680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fa680ULL || rel >= 0x6fa6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fa6b0 size=80 callers=0 calls=0
*/
void sub_6fa6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fa6b0ULL || rel >= 0x6fa700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fa700 size=544 callers=1 calls=0
*/
void sub_6fa700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fa700ULL || rel >= 0x6fa920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fa920 size=544 callers=3 calls=0
*/
void sub_6fa920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fa920ULL || rel >= 0x6fab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fab40 size=272 callers=4 calls=0
*/
void sub_6fab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fab40ULL || rel >= 0x6fac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fac50 size=864 callers=0 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6fac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fac50ULL || rel >= 0x6fafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fafb0 size=272 callers=1 calls=3
   calls: sub_752f90, sub_c70, sub_ce0
*/
void sub_6fafb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fafb0ULL || rel >= 0x6fb0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fb0c0 size=336 callers=1 calls=2
   calls: sub_c70, sub_ce0
*/
void sub_6fb0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fb0c0ULL || rel >= 0x6fb210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fb210 size=272 callers=1 calls=0
*/
void sub_6fb210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fb210ULL || rel >= 0x6fb320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fb320 size=816 callers=1 calls=5
   calls: gflnet3_message_lite, sub_6fb650, sub_70b380, sub_c70, sub_ce0
*/
void sub_6fb320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fb320ULL || rel >= 0x6fb650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006fb650 size=272 callers=1 calls=3
   calls: sub_7549a0, sub_c70, sub_ce0
*/
void sub_6fb650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6fb650ULL || rel >= 0x6fb760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

