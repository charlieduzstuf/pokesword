/* main functions 006bc9e0..006d2bc0 (46 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 006bc9e0 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
*/
void gflnet3_ping_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bc9e0ULL || rel >= 0x6bca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bca10 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6bca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bca10ULL || rel >= 0x6bca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bca70 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6bca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bca70ULL || rel >= 0x6bcad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcad0 size=16 callers=0 calls=0
*/
void sub_6bcad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcad0ULL || rel >= 0x6bcae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcae0 size=64 callers=3 calls=1
   calls: gflnet3_ping_2
*/
void sub_6bcae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcae0ULL || rel >= 0x6bcb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcb20 size=96 callers=0 calls=2
   calls: sub_6bcb80, sub_c70
*/
void sub_6bcb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcb20ULL || rel >= 0x6bcb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcb80 size=32 callers=1 calls=0
*/
void sub_6bcb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcb80ULL || rel >= 0x6bcba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcba0 size=16 callers=0 calls=0
*/
void sub_6bcba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcba0ULL || rel >= 0x6bcbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcbb0 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_6bcbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcbb0ULL || rel >= 0x6bcc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcc50 size=16 callers=0 calls=0
*/
void sub_6bcc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcc50ULL || rel >= 0x6bcc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcc60 size=16 callers=0 calls=0
*/
void sub_6bcc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcc60ULL || rel >= 0x6bcc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcc70 size=16 callers=1 calls=0
*/
void sub_6bcc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcc70ULL || rel >= 0x6bcc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcc80 size=224 callers=0 calls=2
   calls: gflnet3_generated_message_util, gflnet3_ping_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
*/
void gflnet3_ping_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcc80ULL || rel >= 0x6bcd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcd60 size=80 callers=0 calls=0
*/
void sub_6bcd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcd60ULL || rel >= 0x6bcdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcdb0 size=32 callers=1 calls=0
*/
void sub_6bcdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcdb0ULL || rel >= 0x6bcdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcdd0 size=16 callers=0 calls=0
*/
void sub_6bcdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcdd0ULL || rel >= 0x6bcde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcde0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6bcde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcde0ULL || rel >= 0x6bce50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bce50 size=32 callers=6 calls=0
*/
void sub_6bce50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bce50ULL || rel >= 0x6bce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bce70 size=48 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
*/
void gflnet3_ping_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bce70ULL || rel >= 0x6bcea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcea0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6bcea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcea0ULL || rel >= 0x6bcf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcf00 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6bcf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcf00ULL || rel >= 0x6bcf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcf60 size=16 callers=0 calls=0
*/
void sub_6bcf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcf60ULL || rel >= 0x6bcf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcf70 size=64 callers=3 calls=1
   calls: gflnet3_ping_2
*/
void sub_6bcf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcf70ULL || rel >= 0x6bcfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bcfb0 size=96 callers=0 calls=2
   calls: sub_6bd010, sub_c70
*/
void sub_6bcfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bcfb0ULL || rel >= 0x6bd010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd010 size=32 callers=1 calls=0
*/
void sub_6bd010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd010ULL || rel >= 0x6bd030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd030 size=16 callers=0 calls=0
*/
void sub_6bd030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd030ULL || rel >= 0x6bd040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd040 size=160 callers=1 calls=2
   calls: sub_70c480, sub_713480
*/
void sub_6bd040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd040ULL || rel >= 0x6bd0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd0e0 size=16 callers=0 calls=0
*/
void sub_6bd0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd0e0ULL || rel >= 0x6bd0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd0f0 size=16 callers=0 calls=0
*/
void sub_6bd0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd0f0ULL || rel >= 0x6bd100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd100 size=16 callers=1 calls=0
*/
void sub_6bd100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd100ULL || rel >= 0x6bd110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd110 size=224 callers=0 calls=2
   calls: gflnet3_generated_message_util, gflnet3_ping_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
*/
void gflnet3_ping_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd110ULL || rel >= 0x6bd1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd1f0 size=80 callers=0 calls=0
*/
void sub_6bd1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd1f0ULL || rel >= 0x6bd240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd240 size=32 callers=2 calls=0
*/
void sub_6bd240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd240ULL || rel >= 0x6bd260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd260 size=16 callers=0 calls=0
*/
void sub_6bd260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd260ULL || rel >= 0x6bd270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd270 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6bd270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd270ULL || rel >= 0x6bd2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd2e0 size=16 callers=0 calls=0
*/
void sub_6bd2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd2e0ULL || rel >= 0x6bd2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd2f0 size=16 callers=0 calls=0
*/
void sub_6bd2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd2f0ULL || rel >= 0x6bd300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd300 size=16 callers=0 calls=0
*/
void sub_6bd300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd300ULL || rel >= 0x6bd310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd310 size=32 callers=0 calls=0
*/
void sub_6bd310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd310ULL || rel >= 0x6bd330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd330 size=16 callers=0 calls=0
*/
void sub_6bd330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd330ULL || rel >= 0x6bd340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd340 size=32 callers=0 calls=0
*/
void sub_6bd340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd340ULL || rel >= 0x6bd360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd360 size=16 callers=0 calls=0
*/
void sub_6bd360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd360ULL || rel >= 0x6bd370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd370 size=16 callers=0 calls=0
*/
void sub_6bd370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd370ULL || rel >= 0x6bd380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd380 size=32 callers=0 calls=0
*/
void sub_6bd380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd380ULL || rel >= 0x6bd3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd3a0 size=16 callers=0 calls=0
*/
void sub_6bd3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd3a0ULL || rel >= 0x6bd3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd3b0 size=16 callers=0 calls=0
*/
void sub_6bd3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd3b0ULL || rel >= 0x6bd3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd3c0 size=16 callers=0 calls=0
*/
void sub_6bd3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd3c0ULL || rel >= 0x6bd3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd3d0 size=32 callers=0 calls=0
*/
void sub_6bd3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd3d0ULL || rel >= 0x6bd3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd3f0 size=16 callers=0 calls=0
*/
void sub_6bd3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd3f0ULL || rel >= 0x6bd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd400 size=16 callers=0 calls=0
*/
void sub_6bd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd400ULL || rel >= 0x6bd410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd410 size=144 callers=65 calls=3
   calls: sub_70da70, sub_70db70, sub_c70
*/
void sub_6bd410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd410ULL || rel >= 0x6bd4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd4a0 size=16 callers=0 calls=0
*/
void sub_6bd4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd4a0ULL || rel >= 0x6bd4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd4b0 size=32 callers=0 calls=0
*/
void sub_6bd4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd4b0ULL || rel >= 0x6bd4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd4d0 size=128 callers=0 calls=0
*/
void sub_6bd4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd4d0ULL || rel >= 0x6bd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd550 size=368 callers=0 calls=10
   calls: gflnet3_sync_ping_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: sync_ping_data_holder.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
*/
void gflnet3_sync_ping_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd550ULL || rel >= 0x6bd6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd6c0 size=240 callers=3 calls=8
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_ping_2, sub_6bc650, sub_6bcae0, sub_6bcf70, sub_c70
   ref: sync_ping_data_holder.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
*/
void gflnet3_sync_ping_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd6c0ULL || rel >= 0x6bd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd7b0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_6bd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd7b0ULL || rel >= 0x6bd810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd810 size=144 callers=0 calls=4
   calls: gflnet3_message_4, gflnet3_sync_ping_data_holder_2, sub_6fff50, sub_7007d0
*/
void sub_6bd810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd810ULL || rel >= 0x6bd8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd8a0 size=32 callers=5 calls=0
*/
void sub_6bd8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd8a0ULL || rel >= 0x6bd8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bd8c0 size=512 callers=0 calls=8
   calls: gflnet3_generated_message_util, sub_6bc530, sub_6bc650, sub_6bc9c0, sub_6bcae0, sub_6bce50, sub_6bcf70, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
*/
void gflnet3_sync_ping_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bd8c0ULL || rel >= 0x6bdac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bdac0 size=160 callers=1 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6bdac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bdac0ULL || rel >= 0x6bdb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bdb60 size=48 callers=0 calls=1
   calls: sub_6bdac0
*/
void sub_6bdb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bdb60ULL || rel >= 0x6bdb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bdb90 size=80 callers=4 calls=0
*/
void sub_6bdb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bdb90ULL || rel >= 0x6bdbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bdbe0 size=16 callers=0 calls=0
*/
void sub_6bdbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bdbe0ULL || rel >= 0x6bdbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bdbf0 size=96 callers=0 calls=2
   calls: sub_6bdc50, sub_c70
*/
void sub_6bdbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bdbf0ULL || rel >= 0x6bdc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bdc50 size=32 callers=1 calls=0
*/
void sub_6bdc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bdc50ULL || rel >= 0x6bdc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bdc70 size=80 callers=0 calls=0
*/
void sub_6bdc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bdc70ULL || rel >= 0x6bdcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bdcc0 size=1008 callers=0 calls=12
   calls: sub_6bc530, sub_6bc720, sub_6bc9c0, sub_6bcbb0, sub_6bce50, sub_6bd040, sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_c70
*/
void sub_6bdcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bdcc0ULL || rel >= 0x6be0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be0b0 size=144 callers=0 calls=1
   calls: sub_714af0
*/
void sub_6be0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be0b0ULL || rel >= 0x6be140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be140 size=320 callers=0 calls=0
*/
void sub_6be140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be140ULL || rel >= 0x6be280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be280 size=176 callers=0 calls=4
   calls: sub_6bc7e0, sub_6bcc70, sub_6bd100, sub_70d000
*/
void sub_6be280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be280ULL || rel >= 0x6be330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be330 size=208 callers=0 calls=2
   calls: gflnet3_generated_message_util, gflnet3_sync_ping_data_holder_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/sync/protocol_buffers/ping/out/data/
*/
void gflnet3_sync_ping_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be330ULL || rel >= 0x6be400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be400 size=80 callers=0 calls=0
*/
void sub_6be400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be400ULL || rel >= 0x6be450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be450 size=16 callers=0 calls=0
*/
void sub_6be450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be450ULL || rel >= 0x6be460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be460 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6be460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be460ULL || rel >= 0x6be4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be4d0 size=16 callers=0 calls=0
*/
void sub_6be4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be4d0ULL || rel >= 0x6be4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be4e0 size=32 callers=0 calls=0
*/
void sub_6be4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be4e0ULL || rel >= 0x6be500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be500 size=16 callers=0 calls=0
*/
void sub_6be500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be500ULL || rel >= 0x6be510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be510 size=16 callers=0 calls=0
*/
void sub_6be510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be510ULL || rel >= 0x6be520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be520 size=128 callers=0 calls=0
*/
void sub_6be520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be520ULL || rel >= 0x6be5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be5a0 size=272 callers=2 calls=1
   calls: sub_6bf610
*/
void sub_6be5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be5a0ULL || rel >= 0x6be6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be6b0 size=256 callers=0 calls=0
*/
void sub_6be6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be6b0ULL || rel >= 0x6be7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be7b0 size=256 callers=0 calls=0
*/
void sub_6be7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be7b0ULL || rel >= 0x6be8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be8b0 size=144 callers=39 calls=1
   calls: sub_6be940
*/
void sub_6be8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be8b0ULL || rel >= 0x6be940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006be940 size=1136 callers=3 calls=2
   calls: sub_6bf840, sub_6bfac0
*/
void sub_6be940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6be940ULL || rel >= 0x6bedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bedb0 size=192 callers=1 calls=3
   calls: sub_6ac330, sub_6ac390, sub_6bf3c0
*/
void sub_6bedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bedb0ULL || rel >= 0x6bee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bee70 size=16 callers=30 calls=0
*/
void sub_6bee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bee70ULL || rel >= 0x6bee80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bee80 size=416 callers=0 calls=2
   calls: sub_6ac330, sub_6bf020
*/
void sub_6bee80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bee80ULL || rel >= 0x6bf020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bf020 size=544 callers=3 calls=2
   calls: sub_174de70, sub_6bf840
*/
void sub_6bf020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bf020ULL || rel >= 0x6bf240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bf240 size=384 callers=0 calls=4
   calls: sub_17385b0, sub_1738980, sub_6ac390, sub_6bf020
*/
void sub_6bf240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bf240ULL || rel >= 0x6bf3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bf3c0 size=336 callers=2 calls=3
   calls: sub_165e060, sub_6abee0, sub_6bf020
*/
void sub_6bf3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bf3c0ULL || rel >= 0x6bf510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bf510 size=16 callers=0 calls=0
*/
void sub_6bf510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bf510ULL || rel >= 0x6bf520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bf520 size=112 callers=0 calls=0
*/
void sub_6bf520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bf520ULL || rel >= 0x6bf590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bf590 size=16 callers=0 calls=0
*/
void sub_6bf590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bf590ULL || rel >= 0x6bf5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bf5a0 size=112 callers=0 calls=0
*/
void sub_6bf5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bf5a0ULL || rel >= 0x6bf610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bf610 size=560 callers=1 calls=0
*/
void sub_6bf610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bf610ULL || rel >= 0x6bf840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bf840 size=464 callers=7 calls=0
*/
void sub_6bf840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bf840ULL || rel >= 0x6bfa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfa10 size=48 callers=0 calls=0
*/
void sub_6bfa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfa10ULL || rel >= 0x6bfa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfa40 size=16 callers=0 calls=0
*/
void sub_6bfa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfa40ULL || rel >= 0x6bfa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfa50 size=16 callers=0 calls=0
*/
void sub_6bfa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfa50ULL || rel >= 0x6bfa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfa60 size=16 callers=0 calls=0
*/
void sub_6bfa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfa60ULL || rel >= 0x6bfa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfa70 size=32 callers=0 calls=0
*/
void sub_6bfa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfa70ULL || rel >= 0x6bfa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfa90 size=16 callers=0 calls=0
*/
void sub_6bfa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfa90ULL || rel >= 0x6bfaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfaa0 size=16 callers=0 calls=0
*/
void sub_6bfaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfaa0ULL || rel >= 0x6bfab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfab0 size=16 callers=0 calls=0
*/
void sub_6bfab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfab0ULL || rel >= 0x6bfac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfac0 size=352 callers=1 calls=0
*/
void sub_6bfac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfac0ULL || rel >= 0x6bfc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfc20 size=528 callers=0 calls=0
*/
void sub_6bfc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfc20ULL || rel >= 0x6bfe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfe30 size=128 callers=0 calls=0
*/
void sub_6bfe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfe30ULL || rel >= 0x6bfeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006bfeb0 size=352 callers=0 calls=10
   calls: gflnet3_block_data_holder_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c540, sub_c70, sub_ce0
   ref: CHECK failed: file != NULL: 
   ref: block_data_holder.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/d
*/
void gflnet3_block_data_holder(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6bfeb0ULL || rel >= 0x6c0010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0010 size=224 callers=3 calls=7
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, gflnet3_result_2, sub_6c1160, sub_6c16f0, sub_c70
   ref: block_data_holder.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/d
*/
void gflnet3_block_data_holder_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0010ULL || rel >= 0x6c00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c00f0 size=96 callers=0 calls=1
   calls: sub_ce0
*/
void sub_6c00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c00f0ULL || rel >= 0x6c0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0150 size=144 callers=0 calls=4
   calls: gflnet3_block_data_holder_2, gflnet3_message_4, sub_6fff50, sub_7007d0
*/
void sub_6c0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0150ULL || rel >= 0x6c01e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c01e0 size=32 callers=3 calls=0
*/
void sub_6c01e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c01e0ULL || rel >= 0x6c0200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0200 size=352 callers=0 calls=6
   calls: gflnet3_generated_message_util, sub_6c1030, sub_6c1160, sub_6c15c0, sub_6c16f0, sub_c70
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/d
*/
void gflnet3_block_data_holder_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0200ULL || rel >= 0x6c0360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0360 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6c0360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0360ULL || rel >= 0x6c03f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c03f0 size=144 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6c03f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c03f0ULL || rel >= 0x6c0480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0480 size=80 callers=2 calls=0
*/
void sub_6c0480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0480ULL || rel >= 0x6c04d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c04d0 size=16 callers=0 calls=0
*/
void sub_6c04d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c04d0ULL || rel >= 0x6c04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c04e0 size=96 callers=0 calls=2
   calls: sub_6c0540, sub_c70
*/
void sub_6c04e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c04e0ULL || rel >= 0x6c0540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0540 size=32 callers=1 calls=0
*/
void sub_6c0540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0540ULL || rel >= 0x6c0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0560 size=80 callers=0 calls=0
*/
void sub_6c0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0560ULL || rel >= 0x6c05b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c05b0 size=720 callers=0 calls=10
   calls: sub_6c1030, sub_6c1230, sub_6c15c0, sub_6c17c0, sub_70b5e0, sub_70b750, sub_70c2e0, sub_70c480, sub_713480, sub_c70
*/
void sub_6c05b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c05b0ULL || rel >= 0x6c0880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0880 size=96 callers=0 calls=1
   calls: sub_714af0
*/
void sub_6c0880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0880ULL || rel >= 0x6c08e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c08e0 size=224 callers=0 calls=0
*/
void sub_6c08e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c08e0ULL || rel >= 0x6c09c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c09c0 size=144 callers=0 calls=3
   calls: sub_6c1390, sub_6c1920, sub_70d000
*/
void sub_6c09c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c09c0ULL || rel >= 0x6c0a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0a50 size=208 callers=0 calls=2
   calls: gflnet3_block_data_holder_2, gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/d
*/
void gflnet3_block_data_holder_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0a50ULL || rel >= 0x6c0b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0b20 size=80 callers=0 calls=0
*/
void sub_6c0b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0b20ULL || rel >= 0x6c0b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0b70 size=16 callers=0 calls=0
*/
void sub_6c0b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0b70ULL || rel >= 0x6c0b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0b80 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6c0b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0b80ULL || rel >= 0x6c0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0bf0 size=16 callers=0 calls=0
*/
void sub_6c0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0bf0ULL || rel >= 0x6c0c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0c00 size=32 callers=0 calls=0
*/
void sub_6c0c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0c00ULL || rel >= 0x6c0c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0c20 size=16 callers=0 calls=0
*/
void sub_6c0c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0c20ULL || rel >= 0x6c0c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0c30 size=16 callers=0 calls=0
*/
void sub_6c0c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0c30ULL || rel >= 0x6c0c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0c40 size=128 callers=0 calls=0
*/
void sub_6c0c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0c40ULL || rel >= 0x6c0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0cc0 size=336 callers=0 calls=9
   calls: gflnet3_result_2, sub_6e1390, sub_6e14d0, sub_6ffaf0, sub_6ffb60, sub_6ffe30, sub_6ffe50, sub_73c620, sub_ce0
   ref: result.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/d
   ref: CHECK failed: file != NULL: 
*/
void gflnet3_result(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0cc0ULL || rel >= 0x6c0e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0e10 size=224 callers=8 calls=4
   calls: gflnet3_common, gflnet3_descriptor, gflnet3_message_3, sub_c70
   ref: result.proto
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/d
*/
void gflnet3_result_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0e10ULL || rel >= 0x6c0ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0ef0 size=128 callers=0 calls=0
*/
void sub_6c0ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0ef0ULL || rel >= 0x6c0f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c0f70 size=192 callers=0 calls=4
   calls: gflnet3_message_4, gflnet3_result_2, sub_6fff50, sub_7007d0
*/
void sub_6c0f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c0f70ULL || rel >= 0x6c1030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1030 size=32 callers=4 calls=0
*/
void sub_6c1030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1030ULL || rel >= 0x6c1050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1050 size=64 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/d
*/
void gflnet3_result_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1050ULL || rel >= 0x6c1090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1090 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6c1090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1090ULL || rel >= 0x6c10f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c10f0 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6c10f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c10f0ULL || rel >= 0x6c1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1150 size=16 callers=0 calls=0
*/
void sub_6c1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1150ULL || rel >= 0x6c1160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1160 size=64 callers=3 calls=1
   calls: gflnet3_result_2
*/
void sub_6c1160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1160ULL || rel >= 0x6c11a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c11a0 size=96 callers=0 calls=2
   calls: sub_6c1200, sub_c70
*/
void sub_6c11a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c11a0ULL || rel >= 0x6c1200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1200 size=32 callers=1 calls=0
*/
void sub_6c1200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1200ULL || rel >= 0x6c1220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1220 size=16 callers=0 calls=0
*/
void sub_6c1220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1220ULL || rel >= 0x6c1230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1230 size=288 callers=1 calls=3
   calls: sub_70bfa0, sub_70c480, sub_713480
*/
void sub_6c1230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1230ULL || rel >= 0x6c1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1350 size=32 callers=0 calls=0
*/
void sub_6c1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1350ULL || rel >= 0x6c1370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1370 size=32 callers=0 calls=0
*/
void sub_6c1370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1370ULL || rel >= 0x6c1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1390 size=32 callers=1 calls=0
*/
void sub_6c1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1390ULL || rel >= 0x6c13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c13b0 size=240 callers=0 calls=2
   calls: gflnet3_generated_message_util, gflnet3_result_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/d
*/
void gflnet3_result_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c13b0ULL || rel >= 0x6c14a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c14a0 size=80 callers=0 calls=0
*/
void sub_6c14a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c14a0ULL || rel >= 0x6c14f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c14f0 size=80 callers=1 calls=0
*/
void sub_6c14f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c14f0ULL || rel >= 0x6c1540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1540 size=16 callers=0 calls=0
*/
void sub_6c1540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1540ULL || rel >= 0x6c1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1550 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6c1550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1550ULL || rel >= 0x6c15c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c15c0 size=32 callers=4 calls=0
*/
void sub_6c15c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c15c0ULL || rel >= 0x6c15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c15e0 size=64 callers=0 calls=1
   calls: gflnet3_generated_message_util
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/d
*/
void gflnet3_result_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c15e0ULL || rel >= 0x6c1620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1620 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6c1620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1620ULL || rel >= 0x6c1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1680 size=96 callers=0 calls=2
   calls: sub_70e0c0, sub_ce0
*/
void sub_6c1680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1680ULL || rel >= 0x6c16e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c16e0 size=16 callers=0 calls=0
*/
void sub_6c16e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c16e0ULL || rel >= 0x6c16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c16f0 size=64 callers=3 calls=1
   calls: gflnet3_result_2
*/
void sub_6c16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c16f0ULL || rel >= 0x6c1730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1730 size=96 callers=0 calls=2
   calls: sub_6c1790, sub_c70
*/
void sub_6c1730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1730ULL || rel >= 0x6c1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1790 size=32 callers=1 calls=0
*/
void sub_6c1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1790ULL || rel >= 0x6c17b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c17b0 size=16 callers=0 calls=0
*/
void sub_6c17b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c17b0ULL || rel >= 0x6c17c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c17c0 size=288 callers=1 calls=3
   calls: sub_70bfa0, sub_70c480, sub_713480
*/
void sub_6c17c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c17c0ULL || rel >= 0x6c18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c18e0 size=32 callers=0 calls=0
*/
void sub_6c18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c18e0ULL || rel >= 0x6c1900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1900 size=32 callers=0 calls=0
*/
void sub_6c1900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1900ULL || rel >= 0x6c1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1920 size=32 callers=1 calls=0
*/
void sub_6c1920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1920ULL || rel >= 0x6c1940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1940 size=240 callers=0 calls=2
   calls: gflnet3_generated_message_util, gflnet3_result_2
   ref: C:/jenkins/workspace/orion/RomBuild/program/lib/gflnet3/src/p2p/session/block/protocol_buffers/out/d
*/
void gflnet3_result_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1940ULL || rel >= 0x6c1a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1a30 size=80 callers=0 calls=0
*/
void sub_6c1a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1a30ULL || rel >= 0x6c1a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1a80 size=80 callers=1 calls=0
*/
void sub_6c1a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1a80ULL || rel >= 0x6c1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1ad0 size=16 callers=0 calls=0
*/
void sub_6c1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1ad0ULL || rel >= 0x6c1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1ae0 size=112 callers=0 calls=2
   calls: sub_6fff50, sub_7007d0
*/
void sub_6c1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1ae0ULL || rel >= 0x6c1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1b50 size=16 callers=0 calls=0
*/
void sub_6c1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1b50ULL || rel >= 0x6c1b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1b60 size=32 callers=0 calls=0
*/
void sub_6c1b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1b60ULL || rel >= 0x6c1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1b80 size=16 callers=0 calls=0
*/
void sub_6c1b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1b80ULL || rel >= 0x6c1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1b90 size=16 callers=0 calls=0
*/
void sub_6c1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1b90ULL || rel >= 0x6c1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1ba0 size=16 callers=0 calls=0
*/
void sub_6c1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1ba0ULL || rel >= 0x6c1bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1bb0 size=32 callers=0 calls=0
*/
void sub_6c1bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1bb0ULL || rel >= 0x6c1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1bd0 size=16 callers=0 calls=0
*/
void sub_6c1bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1bd0ULL || rel >= 0x6c1be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1be0 size=16 callers=0 calls=0
*/
void sub_6c1be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1be0ULL || rel >= 0x6c1bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1bf0 size=128 callers=0 calls=0
*/
void sub_6c1bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1bf0ULL || rel >= 0x6c1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1c70 size=64 callers=1 calls=0
*/
void sub_6c1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1c70ULL || rel >= 0x6c1cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1cb0 size=32 callers=2 calls=0
*/
void sub_6c1cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1cb0ULL || rel >= 0x6c1cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1cd0 size=16 callers=4 calls=0
*/
void sub_6c1cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1cd0ULL || rel >= 0x6c1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1ce0 size=496 callers=3 calls=0
*/
void sub_6c1ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1ce0ULL || rel >= 0x6c1ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1ed0 size=48 callers=2 calls=0
*/
void sub_6c1ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1ed0ULL || rel >= 0x6c1f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1f00 size=48 callers=2 calls=1
   calls: sub_6aed90
*/
void sub_6c1f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1f00ULL || rel >= 0x6c1f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1f30 size=16 callers=2 calls=0
*/
void sub_6c1f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1f30ULL || rel >= 0x6c1f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1f40 size=80 callers=2 calls=0
*/
void sub_6c1f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1f40ULL || rel >= 0x6c1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1f90 size=96 callers=6 calls=0
*/
void sub_6c1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1f90ULL || rel >= 0x6c1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c1ff0 size=16 callers=2 calls=0
*/
void sub_6c1ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c1ff0ULL || rel >= 0x6c2000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2000 size=16 callers=5 calls=0
*/
void sub_6c2000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2000ULL || rel >= 0x6c2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2010 size=16 callers=2 calls=0
*/
void sub_6c2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2010ULL || rel >= 0x6c2020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2020 size=80 callers=6 calls=0
*/
void sub_6c2020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2020ULL || rel >= 0x6c2070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2070 size=16 callers=1 calls=0
*/
void sub_6c2070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2070ULL || rel >= 0x6c2080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2080 size=16 callers=1 calls=0
*/
void sub_6c2080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2080ULL || rel >= 0x6c2090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2090 size=368 callers=9 calls=2
   calls: sub_65c700, sub_6c2b60
*/
void sub_6c2090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2090ULL || rel >= 0x6c2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2200 size=80 callers=3 calls=0
*/
void sub_6c2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2200ULL || rel >= 0x6c2250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2250 size=256 callers=1 calls=0
*/
void sub_6c2250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2250ULL || rel >= 0x6c2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2350 size=224 callers=1 calls=0
*/
void sub_6c2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2350ULL || rel >= 0x6c2430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2430 size=32 callers=1 calls=0
*/
void sub_6c2430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2430ULL || rel >= 0x6c2450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2450 size=656 callers=4 calls=4
   calls: sub_65c700, sub_6aed90, sub_6c1ce0, sub_6c2b60
*/
void sub_6c2450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2450ULL || rel >= 0x6c26e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c26e0 size=32 callers=0 calls=0
*/
void sub_6c26e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c26e0ULL || rel >= 0x6c2700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2700 size=208 callers=2 calls=0
*/
void sub_6c2700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2700ULL || rel >= 0x6c27d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c27d0 size=16 callers=6 calls=0
*/
void sub_6c27d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c27d0ULL || rel >= 0x6c27e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c27e0 size=48 callers=0 calls=0
*/
void sub_6c27e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c27e0ULL || rel >= 0x6c2810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2810 size=48 callers=6 calls=0
*/
void sub_6c2810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2810ULL || rel >= 0x6c2840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2840 size=16 callers=0 calls=0
*/
void sub_6c2840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2840ULL || rel >= 0x6c2850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2850 size=32 callers=0 calls=0
*/
void sub_6c2850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2850ULL || rel >= 0x6c2870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2870 size=32 callers=0 calls=0
*/
void sub_6c2870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2870ULL || rel >= 0x6c2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2890 size=32 callers=0 calls=0
*/
void sub_6c2890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2890ULL || rel >= 0x6c28b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c28b0 size=32 callers=0 calls=0
*/
void sub_6c28b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c28b0ULL || rel >= 0x6c28d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c28d0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_6c28d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c28d0ULL || rel >= 0x6c2920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2920 size=96 callers=0 calls=0
*/
void sub_6c2920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2920ULL || rel >= 0x6c2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2980 size=144 callers=0 calls=0
*/
void sub_6c2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2980ULL || rel >= 0x6c2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2a10 size=336 callers=1 calls=0
*/
void sub_6c2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2a10ULL || rel >= 0x6c2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2b60 size=64 callers=7 calls=0
*/
void sub_6c2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2b60ULL || rel >= 0x6c2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2ba0 size=16 callers=1 calls=0
*/
void sub_6c2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2ba0ULL || rel >= 0x6c2bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2bb0 size=320 callers=0 calls=2
   calls: sub_165e060, sub_6c3460
*/
void sub_6c2bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2bb0ULL || rel >= 0x6c2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2cf0 size=320 callers=0 calls=3
   calls: sub_6c3810, sub_6c3a00, sub_6c3a70
*/
void sub_6c2cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2cf0ULL || rel >= 0x6c2e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2e30 size=48 callers=0 calls=0
*/
void sub_6c2e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2e30ULL || rel >= 0x6c2e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2e60 size=64 callers=4 calls=0
*/
void sub_6c2e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2e60ULL || rel >= 0x6c2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2ea0 size=256 callers=0 calls=0
*/
void sub_6c2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2ea0ULL || rel >= 0x6c2fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c2fa0 size=208 callers=0 calls=0
*/
void sub_6c2fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c2fa0ULL || rel >= 0x6c3070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3070 size=64 callers=11 calls=0
*/
void sub_6c3070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3070ULL || rel >= 0x6c30b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c30b0 size=80 callers=20 calls=0
*/
void sub_6c30b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c30b0ULL || rel >= 0x6c3100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3100 size=64 callers=16 calls=0
*/
void sub_6c3100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3100ULL || rel >= 0x6c3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3140 size=64 callers=1 calls=0
*/
void sub_6c3140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3140ULL || rel >= 0x6c3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3180 size=96 callers=1 calls=2
   calls: sub_6c2450, sub_6c3950
*/
void sub_6c3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3180ULL || rel >= 0x6c31e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c31e0 size=128 callers=1 calls=0
*/
void sub_6c31e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c31e0ULL || rel >= 0x6c3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3260 size=128 callers=2 calls=0
*/
void sub_6c3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3260ULL || rel >= 0x6c32e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c32e0 size=96 callers=1 calls=0
*/
void sub_6c32e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c32e0ULL || rel >= 0x6c3340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3340 size=80 callers=0 calls=1
   calls: sub_5d0e50
*/
void sub_6c3340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3340ULL || rel >= 0x6c3390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3390 size=80 callers=0 calls=1
   calls: sub_5d0e50
*/
void sub_6c3390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3390ULL || rel >= 0x6c33e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c33e0 size=64 callers=1 calls=0
*/
void sub_6c33e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c33e0ULL || rel >= 0x6c3420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3420 size=64 callers=1 calls=0
*/
void sub_6c3420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3420ULL || rel >= 0x6c3460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3460 size=240 callers=15 calls=2
   calls: sub_165e060, sub_165e140
*/
void sub_6c3460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3460ULL || rel >= 0x6c3550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3550 size=112 callers=1 calls=0
*/
void sub_6c3550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3550ULL || rel >= 0x6c35c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c35c0 size=224 callers=0 calls=0
*/
void sub_6c35c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c35c0ULL || rel >= 0x6c36a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c36a0 size=16 callers=0 calls=0
*/
void sub_6c36a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c36a0ULL || rel >= 0x6c36b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c36b0 size=112 callers=0 calls=0
*/
void sub_6c36b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c36b0ULL || rel >= 0x6c3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3720 size=112 callers=0 calls=0
*/
void sub_6c3720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3720ULL || rel >= 0x6c3790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3790 size=128 callers=0 calls=0
*/
void sub_6c3790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3790ULL || rel >= 0x6c3810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3810 size=256 callers=1 calls=2
   calls: sub_5d0b10, sub_6c2450
*/
void sub_6c3810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3810ULL || rel >= 0x6c3910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3910 size=64 callers=0 calls=0
*/
void sub_6c3910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3910ULL || rel >= 0x6c3950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3950 size=176 callers=1 calls=1
   calls: sub_6c2350
*/
void sub_6c3950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3950ULL || rel >= 0x6c3a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3a00 size=112 callers=1 calls=0
*/
void sub_6c3a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3a00ULL || rel >= 0x6c3a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3a70 size=112 callers=1 calls=0
*/
void sub_6c3a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3a70ULL || rel >= 0x6c3ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3ae0 size=144 callers=0 calls=5
   calls: sub_5d1080, sub_6a0d50, sub_6c30b0, sub_6c3b70, sub_6c3c20
*/
void sub_6c3ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3ae0ULL || rel >= 0x6c3b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3b70 size=176 callers=1 calls=4
   calls: sub_6c3070, sub_6c30b0, sub_6c3140, sub_6c3cf0
*/
void sub_6c3b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3b70ULL || rel >= 0x6c3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3c20 size=208 callers=1 calls=7
   calls: sub_6a0d50, sub_6c2e60, sub_6c30b0, sub_6c3e00, sub_6c3f00, sub_6c4a00, sub_6c4de0
*/
void sub_6c3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3c20ULL || rel >= 0x6c3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3cf0 size=272 callers=1 calls=8
   calls: W3GoSMEn7RIIUQ89rzqBHGhGferRNb7K18ZBq2aNuj8Us9RO9Q9JYyGO, sub_6a0d40, sub_6a0d50, sub_6c3070, sub_6c30b0, sub_6c33e0, sub_6c3f00, sub_6c4010
*/
void sub_6c3cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3cf0ULL || rel >= 0x6c3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3e00 size=256 callers=1 calls=2
   calls: sub_6c2e60, sub_6c4620
*/
void sub_6c3e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3e00ULL || rel >= 0x6c3f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c3f00 size=272 callers=2 calls=4
   calls: sub_172a680, sub_6a0d40, sub_6c3100, sub_6c3420
*/
void sub_6c3f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c3f00ULL || rel >= 0x6c4010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c4010 size=272 callers=1 calls=6
   calls: sub_165e060, sub_172a3f0, sub_6c30b0, sub_6c3100, sub_6c3460, sub_6c4530
*/
void sub_6c4010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c4010ULL || rel >= 0x6c4120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c4120 size=1040 callers=1 calls=24
   calls: sub_16578d0, sub_165e060, sub_1661a90, sub_1661af0, sub_1661bf0, sub_1661ea0, sub_167be00, sub_167be80, sub_167bf30, sub_167bfd0, sub_1723370, sub_172b2a0
   ... +12 more
   ref: W3GoSMEn7RIIUQ89rzqBHGhGferRNb7K18ZBq2aNuj8Us9RO9Q9JYyGOZlLy8MYL
*/
void W3GoSMEn7RIIUQ89rzqBHGhGferRNb7K18ZBq2aNuj8Us9RO9Q9JYyGO(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c4120ULL || rel >= 0x6c4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c4530 size=240 callers=1 calls=4
   calls: sub_6a0d40, sub_6c30b0, sub_6c3100, sub_6c3550
*/
void sub_6c4530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c4530ULL || rel >= 0x6c4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c4620 size=992 callers=1 calls=19
   calls: sub_16578d0, sub_165e060, sub_167b870, sub_167b8d0, sub_167b990, sub_1686d80, sub_1686dc0, sub_1686e30, sub_172bc60, sub_172bcc0, sub_172bcf0, sub_172ccd0
   ... +7 more
*/
void sub_6c4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c4620ULL || rel >= 0x6c4a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c4a00 size=992 callers=1 calls=19
   calls: sub_16578d0, sub_165e060, sub_1679c10, sub_1679d30, sub_1679ec0, sub_172b050, sub_172b1c0, sub_172b1f0, sub_172ccd0, sub_1733d10, sub_1733d30, sub_1733d80
   ... +7 more
*/
void sub_6c4a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c4a00ULL || rel >= 0x6c4de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c4de0 size=608 callers=1 calls=12
   calls: sub_16578d0, sub_165e060, sub_172b280, sub_172ccd0, sub_6c2020, sub_6c2090, sub_6c2810, sub_6c3070, sub_6c30b0, sub_6c3100, sub_6c3460, sub_6c5860
*/
void sub_6c4de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c4de0ULL || rel >= 0x6c5040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5040 size=176 callers=0 calls=0
*/
void sub_6c5040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5040ULL || rel >= 0x6c50f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c50f0 size=176 callers=0 calls=0
*/
void sub_6c50f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c50f0ULL || rel >= 0x6c51a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c51a0 size=176 callers=0 calls=0
*/
void sub_6c51a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c51a0ULL || rel >= 0x6c5250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5250 size=176 callers=0 calls=0
*/
void sub_6c5250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5250ULL || rel >= 0x6c5300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5300 size=176 callers=0 calls=0
*/
void sub_6c5300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5300ULL || rel >= 0x6c53b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c53b0 size=176 callers=0 calls=0
*/
void sub_6c53b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c53b0ULL || rel >= 0x6c5460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5460 size=128 callers=0 calls=0
*/
void sub_6c5460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5460ULL || rel >= 0x6c54e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c54e0 size=352 callers=1 calls=1
   calls: sub_6c5640
*/
void sub_6c54e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c54e0ULL || rel >= 0x6c5640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5640 size=368 callers=2 calls=1
   calls: sub_6c5c20
*/
void sub_6c5640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5640ULL || rel >= 0x6c57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c57b0 size=176 callers=2 calls=0
*/
void sub_6c57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c57b0ULL || rel >= 0x6c5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5860 size=176 callers=3 calls=2
   calls: sub_6c2250, sub_6c5910
*/
void sub_6c5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5860ULL || rel >= 0x6c5910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5910 size=352 callers=1 calls=2
   calls: sub_6c2700, sub_6c5f40
*/
void sub_6c5910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5910ULL || rel >= 0x6c5a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5a70 size=384 callers=0 calls=0
*/
void sub_6c5a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5a70ULL || rel >= 0x6c5bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5bf0 size=16 callers=0 calls=0
*/
void sub_6c5bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5bf0ULL || rel >= 0x6c5c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5c00 size=16 callers=0 calls=0
*/
void sub_6c5c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5c00ULL || rel >= 0x6c5c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5c10 size=16 callers=0 calls=0
*/
void sub_6c5c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5c10ULL || rel >= 0x6c5c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5c20 size=800 callers=1 calls=0
*/
void sub_6c5c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5c20ULL || rel >= 0x6c5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c5f40 size=704 callers=1 calls=1
   calls: sub_6c2700
*/
void sub_6c5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c5f40ULL || rel >= 0x6c6200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6200 size=128 callers=0 calls=0
*/
void sub_6c6200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6200ULL || rel >= 0x6c6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6280 size=304 callers=1 calls=1
   calls: sub_6b0220
*/
void sub_6c6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6280ULL || rel >= 0x6c63b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c63b0 size=208 callers=0 calls=5
   calls: sub_6b06f0, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b1630
*/
void sub_6c63b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c63b0ULL || rel >= 0x6c6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6480 size=144 callers=0 calls=5
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b1630
*/
void sub_6c6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6480ULL || rel >= 0x6c6510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6510 size=192 callers=0 calls=4
   calls: sub_6b06f0, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6c6510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6510ULL || rel >= 0x6c65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c65d0 size=192 callers=0 calls=4
   calls: sub_6b06f0, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6c65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c65d0ULL || rel >= 0x6c6690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6690 size=144 callers=0 calls=5
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b1630
*/
void sub_6c6690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6690ULL || rel >= 0x6c6720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6720 size=448 callers=0 calls=5
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b0cd0
*/
void sub_6c6720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6720ULL || rel >= 0x6c68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c68e0 size=448 callers=0 calls=5
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b0cd0
*/
void sub_6c68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c68e0ULL || rel >= 0x6c6aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6aa0 size=96 callers=0 calls=3
   calls: sub_6b0760, sub_6b0780, sub_6b0b50
*/
void sub_6c6aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6aa0ULL || rel >= 0x6c6b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6b00 size=96 callers=0 calls=4
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6c6b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6b00ULL || rel >= 0x6c6b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6b60 size=96 callers=0 calls=3
   calls: sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6c6b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6b60ULL || rel >= 0x6c6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6bc0 size=16 callers=0 calls=0
*/
void sub_6c6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6bc0ULL || rel >= 0x6c6bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6bd0 size=48 callers=0 calls=0
*/
void sub_6c6bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6bd0ULL || rel >= 0x6c6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6c00 size=96 callers=0 calls=1
   calls: sub_172aef0
*/
void sub_6c6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6c00ULL || rel >= 0x6c6c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c6c60 size=1184 callers=0 calls=22
   calls: sub_165bc90, sub_16c41a0, sub_16c4560, sub_16c48c0, sub_16c4900, sub_16c4960, sub_16c4cd0, sub_16c4de0, sub_16d3130, sub_16d31d0, sub_16d32e0, sub_16d3350
   ... +10 more
*/
void sub_6c6c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c6c60ULL || rel >= 0x6c7100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7100 size=208 callers=0 calls=2
   calls: sub_172aef0, sub_172af20
*/
void sub_6c7100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7100ULL || rel >= 0x6c71d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c71d0 size=144 callers=0 calls=1
   calls: sub_6b13f0
*/
void sub_6c71d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c71d0ULL || rel >= 0x6c7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7260 size=144 callers=0 calls=1
   calls: sub_6b13f0
*/
void sub_6c7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7260ULL || rel >= 0x6c72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c72f0 size=128 callers=0 calls=1
   calls: sub_6b13f0
*/
void sub_6c72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c72f0ULL || rel >= 0x6c7370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7370 size=144 callers=0 calls=1
   calls: sub_6b13f0
*/
void sub_6c7370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7370ULL || rel >= 0x6c7400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7400 size=656 callers=0 calls=8
   calls: sub_1713e80, sub_17142a0, sub_1714500, sub_1714580, sub_17145a0, sub_17145c0, sub_1714680, sub_172b050
*/
void sub_6c7400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7400ULL || rel >= 0x6c7690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7690 size=192 callers=0 calls=3
   calls: sub_172b1c0, sub_172b1f0, sub_172b280
*/
void sub_6c7690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7690ULL || rel >= 0x6c7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7750 size=48 callers=0 calls=0
*/
void sub_6c7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7750ULL || rel >= 0x6c7780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7780 size=96 callers=0 calls=1
   calls: sub_172b550
*/
void sub_6c7780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7780ULL || rel >= 0x6c77e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c77e0 size=240 callers=0 calls=8
   calls: sub_165bc90, sub_16d34e0, sub_16d3660, sub_16d3750, sub_1724e80, sub_1724ee0, sub_172b460, sub_6b2b10
*/
void sub_6c77e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c77e0ULL || rel >= 0x6c78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c78d0 size=240 callers=0 calls=2
   calls: sub_172b550, sub_172b580
*/
void sub_6c78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c78d0ULL || rel >= 0x6c79c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c79c0 size=48 callers=0 calls=0
*/
void sub_6c79c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c79c0ULL || rel >= 0x6c79f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c79f0 size=96 callers=0 calls=1
   calls: sub_172b550
*/
void sub_6c79f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c79f0ULL || rel >= 0x6c7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7a50 size=240 callers=0 calls=7
   calls: sub_165bc90, sub_16d34e0, sub_16d3660, sub_16d3750, sub_1724ea0, sub_1724ee0, sub_172b460
*/
void sub_6c7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7a50ULL || rel >= 0x6c7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7b40 size=240 callers=0 calls=2
   calls: sub_172b550, sub_172b580
*/
void sub_6c7b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7b40ULL || rel >= 0x6c7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7c30 size=432 callers=0 calls=8
   calls: sub_165bc90, sub_16c41a0, sub_16c4560, sub_16c48c0, sub_16c4960, sub_16c4bc0, sub_1723370, sub_172b2a0
*/
void sub_6c7c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7c30ULL || rel >= 0x6c7de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7de0 size=208 callers=0 calls=2
   calls: sub_172b3a0, sub_172b3d0
*/
void sub_6c7de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7de0ULL || rel >= 0x6c7eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7eb0 size=64 callers=0 calls=1
   calls: sub_6aede0
*/
void sub_6c7eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7eb0ULL || rel >= 0x6c7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7ef0 size=144 callers=0 calls=3
   calls: sub_6b13f0, sub_6b5740, sub_6b6a90
*/
void sub_6c7ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7ef0ULL || rel >= 0x6c7f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c7f80 size=1152 callers=0 calls=5
   calls: sub_6b0cd0, sub_6b13f0, sub_6b3530, sub_6b5740, sub_6b7650
*/
void sub_6c7f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c7f80ULL || rel >= 0x6c8400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8400 size=176 callers=0 calls=5
   calls: SDK_Private_Nintendo_nex_NexFacade_SetRelayServiceEnable, sub_165bc90, sub_16c66f0, sub_6a0d90, sub_6a4d50
*/
void sub_6c8400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8400ULL || rel >= 0x6c84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c84b0 size=16 callers=0 calls=0
*/
void sub_6c84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c84b0ULL || rel >= 0x6c84c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c84c0 size=1952 callers=0 calls=2
   calls: sub_6b2640, sub_6b27f0
*/
void sub_6c84c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c84c0ULL || rel >= 0x6c8c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8c60 size=64 callers=0 calls=1
   calls: sub_6b0b60
*/
void sub_6c8c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8c60ULL || rel >= 0x6c8ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8ca0 size=48 callers=0 calls=1
   calls: sub_6b2cf0
*/
void sub_6c8ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8ca0ULL || rel >= 0x6c8cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8cd0 size=16 callers=0 calls=0
*/
void sub_6c8cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8cd0ULL || rel >= 0x6c8ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8ce0 size=16 callers=0 calls=0
   ref: RandomSession
*/
void RandomSession_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8ce0ULL || rel >= 0x6c8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8cf0 size=16 callers=0 calls=0
*/
void sub_6c8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8cf0ULL || rel >= 0x6c8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8d00 size=16 callers=0 calls=0
   ref: BindNgs
*/
void BindNgs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8d00ULL || rel >= 0x6c8d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8d10 size=16 callers=0 calls=0
*/
void sub_6c8d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8d10ULL || rel >= 0x6c8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8d20 size=16 callers=0 calls=0
   ref: UnbindNgs
*/
void UnbindNgs(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8d20ULL || rel >= 0x6c8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8d30 size=16 callers=0 calls=0
*/
void sub_6c8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8d30ULL || rel >= 0x6c8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8d40 size=16 callers=0 calls=0
   ref: SearchSession
*/
void SearchSession_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8d40ULL || rel >= 0x6c8d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8d50 size=16 callers=0 calls=0
   ref: JoinSession
*/
void JoinSession_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8d50ULL || rel >= 0x6c8d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8d60 size=16 callers=0 calls=0
   ref: JoinSessionWithId
*/
void JoinSessionWithId(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8d60ULL || rel >= 0x6c8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8d70 size=16 callers=0 calls=0
*/
void sub_6c8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8d70ULL || rel >= 0x6c8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8d80 size=16 callers=0 calls=0
   ref: CreateSession
*/
void CreateSession_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8d80ULL || rel >= 0x6c8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8d90 size=16 callers=0 calls=0
*/
void sub_6c8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8d90ULL || rel >= 0x6c8da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8da0 size=16 callers=0 calls=0
   ref: CheckBlock
*/
void CheckBlock_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8da0ULL || rel >= 0x6c8db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8db0 size=128 callers=0 calls=0
*/
void sub_6c8db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8db0ULL || rel >= 0x6c8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c8e30 size=800 callers=1 calls=1
   calls: sub_6b0220
*/
void sub_6c8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c8e30ULL || rel >= 0x6c9150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9150 size=240 callers=1 calls=1
   calls: sub_5d0e50
*/
void sub_6c9150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9150ULL || rel >= 0x6c9240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9240 size=48 callers=0 calls=1
   calls: sub_6c9150
*/
void sub_6c9240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9240ULL || rel >= 0x6c9270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9270 size=272 callers=0 calls=5
   calls: sub_6b06f0, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b1630
*/
void sub_6c9270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9270ULL || rel >= 0x6c9380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9380 size=240 callers=0 calls=5
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b1630
*/
void sub_6c9380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9380ULL || rel >= 0x6c9470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9470 size=256 callers=0 calls=4
   calls: sub_6b06f0, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6c9470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9470ULL || rel >= 0x6c9570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9570 size=288 callers=0 calls=4
   calls: sub_6b06f0, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6c9570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9570ULL || rel >= 0x6c9690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9690 size=240 callers=0 calls=5
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b1630
*/
void sub_6c9690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9690ULL || rel >= 0x6c9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9780 size=512 callers=0 calls=5
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b0cd0
*/
void sub_6c9780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9780ULL || rel >= 0x6c9980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9980 size=544 callers=0 calls=5
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b0cd0
*/
void sub_6c9980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9980ULL || rel >= 0x6c9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9ba0 size=256 callers=0 calls=4
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6c9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9ba0ULL || rel >= 0x6c9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9ca0 size=208 callers=0 calls=4
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6c9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9ca0ULL || rel >= 0x6c9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9d70 size=208 callers=0 calls=4
   calls: sub_6b0760, sub_6b0780, sub_6b0b50, sub_6b0b60
*/
void sub_6c9d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9d70ULL || rel >= 0x6c9e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9e40 size=32 callers=0 calls=0
*/
void sub_6c9e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9e40ULL || rel >= 0x6c9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006c9e60 size=448 callers=0 calls=2
   calls: sub_5d0b10, sub_5d0f90
   ref: InitializeLdn
*/
void InitializeLdn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6c9e60ULL || rel >= 0x6ca020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca020 size=160 callers=0 calls=1
   calls: sub_6b24a0
*/
void sub_6ca020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca020ULL || rel >= 0x6ca0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca0c0 size=32 callers=0 calls=0
*/
void sub_6ca0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca0c0ULL || rel >= 0x6ca0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca0e0 size=400 callers=0 calls=2
   calls: sub_5d0b10, sub_5d0f90
   ref: FinalizeLdn
*/
void FinalizeLdn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca0e0ULL || rel >= 0x6ca270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca270 size=96 callers=0 calls=0
*/
void sub_6ca270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca270ULL || rel >= 0x6ca2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca2d0 size=304 callers=0 calls=5
   calls: sub_172b050, sub_1733d10, sub_1733d30, sub_1733d80, sub_6a0d90
*/
void sub_6ca2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca2d0ULL || rel >= 0x6ca400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca400 size=432 callers=0 calls=7
   calls: sub_172b1c0, sub_172b1f0, sub_172b280, sub_6c2020, sub_6c2090, sub_6c2810, sub_6c5860
*/
void sub_6ca400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca400ULL || rel >= 0x6ca5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca5b0 size=48 callers=0 calls=0
*/
void sub_6ca5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca5b0ULL || rel >= 0x6ca5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca5e0 size=96 callers=0 calls=1
   calls: sub_172b550
*/
void sub_6ca5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca5e0ULL || rel >= 0x6ca640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca640 size=272 callers=1 calls=9
   calls: sub_165bc90, sub_167c240, sub_167c2b0, sub_168bea0, sub_168bf50, sub_1724e80, sub_1724ee0, sub_172b460, sub_6b2b10
   ref: W3GoSMEn7RIIUQ89rzqBHGhGferRNb7K18ZBq2aNuj8Us9RO9Q9JYyGOZlLy8MYL
*/
void W3GoSMEn7RIIUQ89rzqBHGhGferRNb7K18ZBq2aNuj8Us9RO9Q9JYyGO_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca640ULL || rel >= 0x6ca750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca750 size=400 callers=1 calls=4
   calls: sub_172b550, sub_172b580, sub_6b2b10, sub_6cd7f0
*/
void sub_6ca750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca750ULL || rel >= 0x6ca8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca8e0 size=48 callers=0 calls=1
   calls: sub_172b550
*/
void sub_6ca8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca8e0ULL || rel >= 0x6ca910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca910 size=96 callers=0 calls=1
   calls: sub_172b550
*/
void sub_6ca910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca910ULL || rel >= 0x6ca970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca970 size=128 callers=0 calls=2
   calls: W3GoSMEn7RIIUQ89rzqBHGhGferRNb7K18ZBq2aNuj8Us9RO9Q9JYyGO_2, sub_6b13f0
*/
void sub_6ca970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca970ULL || rel >= 0x6ca9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ca9f0 size=656 callers=0 calls=5
   calls: sub_172be70, sub_6b0cd0, sub_6b13f0, sub_6b3530, sub_6ca750
*/
void sub_6ca9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ca9f0ULL || rel >= 0x6cac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cac80 size=384 callers=0 calls=9
   calls: sub_1652940, sub_165bc90, sub_167be00, sub_167be80, sub_167bf30, sub_167bfd0, sub_1688780, sub_172b2a0, sub_6a0d90
   ref: p1frXqxmeCZWFv0X
   ref: W3GoSMEn7RIIUQ89rzqBHGhGferRNb7K18ZBq2aNuj8Us9RO9Q9JYyGOZlLy8MYL
*/
void W3GoSMEn7RIIUQ89rzqBHGhGferRNb7K18ZBq2aNuj8Us9RO9Q9JYyGO_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cac80ULL || rel >= 0x6cae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cae00 size=192 callers=0 calls=2
   calls: sub_172b3a0, sub_172b3d0
*/
void sub_6cae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cae00ULL || rel >= 0x6caec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006caec0 size=160 callers=0 calls=4
   calls: sub_1686d80, sub_1686dc0, sub_1686e30, sub_172bc60
*/
void sub_6caec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6caec0ULL || rel >= 0x6caf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006caf60 size=176 callers=0 calls=2
   calls: sub_172bcc0, sub_172bcf0
*/
void sub_6caf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6caf60ULL || rel >= 0x6cb010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cb010 size=2368 callers=0 calls=7
   calls: sub_172b280, sub_172be70, sub_6b0cd0, sub_6b13f0, sub_6b3530, sub_6cb950, sub_6cbce0
*/
void sub_6cb010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cb010ULL || rel >= 0x6cb950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cb950 size=912 callers=1 calls=9
   calls: sub_172b280, sub_6b5740, sub_6b7660, sub_6c1f30, sub_6c2010, sub_6c2020, sub_6c2090, sub_6c2200, sub_6c2810
*/
void sub_6cb950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cb950ULL || rel >= 0x6cbce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cbce0 size=1168 callers=1 calls=11
   calls: sub_172b280, sub_172be60, sub_6b5740, sub_6b7660, sub_6c1f30, sub_6c2010, sub_6c2020, sub_6c2090, sub_6c2200, sub_6c2810, sub_6cd9d0
*/
void sub_6cbce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cbce0ULL || rel >= 0x6cc170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cc170 size=144 callers=0 calls=1
   calls: sub_6b13f0
*/
void sub_6cc170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cc170ULL || rel >= 0x6cc200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cc200 size=272 callers=0 calls=1
   calls: sub_6b13f0
*/
void sub_6cc200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cc200ULL || rel >= 0x6cc310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cc310 size=720 callers=0 calls=4
   calls: sub_172be70, sub_6b0cd0, sub_6b13f0, sub_6b3530
*/
void sub_6cc310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cc310ULL || rel >= 0x6cc5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cc5e0 size=64 callers=0 calls=1
   calls: sub_6aede0
*/
void sub_6cc5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cc5e0ULL || rel >= 0x6cc620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cc620 size=144 callers=0 calls=3
   calls: sub_6b13f0, sub_6b5740, sub_6b6a90
*/
void sub_6cc620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cc620ULL || rel >= 0x6cc6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cc6b0 size=1152 callers=0 calls=5
   calls: sub_6b0cd0, sub_6b13f0, sub_6b3530, sub_6b5740, sub_6b7650
*/
void sub_6cc6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cc6b0ULL || rel >= 0x6ccb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ccb30 size=576 callers=0 calls=9
   calls: sub_1686d80, sub_1686dc0, sub_1686e30, sub_16b0030, sub_172bc60, sub_174de50, sub_6ae890, sub_6b1490, sub_6b8610
*/
void sub_6ccb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ccb30ULL || rel >= 0x6ccd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ccd70 size=208 callers=0 calls=3
   calls: sub_172bcc0, sub_172bcf0, sub_6b1490
*/
void sub_6ccd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ccd70ULL || rel >= 0x6cce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cce40 size=128 callers=0 calls=6
   calls: sub_172ade0, sub_6b0780, sub_6b0b50, sub_6b0b60, sub_6b0cd0, sub_6b1490
*/
void sub_6cce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cce40ULL || rel >= 0x6ccec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ccec0 size=16 callers=0 calls=0
*/
void sub_6ccec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ccec0ULL || rel >= 0x6cced0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cced0 size=1120 callers=0 calls=2
   calls: sub_6b2640, sub_6b27f0
*/
void sub_6cced0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cced0ULL || rel >= 0x6cd330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd330 size=656 callers=0 calls=1
   calls: sub_6b3530
*/
void sub_6cd330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd330ULL || rel >= 0x6cd5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd5c0 size=48 callers=0 calls=1
   calls: sub_6b0b60
*/
void sub_6cd5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd5c0ULL || rel >= 0x6cd5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd5f0 size=16 callers=0 calls=0
*/
void sub_6cd5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd5f0ULL || rel >= 0x6cd600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd600 size=16 callers=0 calls=0
   ref: WaitMinMember
*/
void WaitMinMember(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd600ULL || rel >= 0x6cd610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd610 size=16 callers=0 calls=0
*/
void sub_6cd610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd610ULL || rel >= 0x6cd620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd620 size=16 callers=0 calls=0
   ref: InitializeLdn
*/
void InitializeLdn_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd620ULL || rel >= 0x6cd630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd630 size=16 callers=0 calls=0
*/
void sub_6cd630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd630ULL || rel >= 0x6cd640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd640 size=16 callers=0 calls=0
   ref: FinalizeLdn
*/
void FinalizeLdn_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd640ULL || rel >= 0x6cd650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd650 size=16 callers=0 calls=0
*/
void sub_6cd650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd650ULL || rel >= 0x6cd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd660 size=16 callers=0 calls=0
   ref: SearchSession
*/
void SearchSession_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd660ULL || rel >= 0x6cd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd670 size=16 callers=0 calls=0
   ref: JoinSession
*/
void JoinSession_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd670ULL || rel >= 0x6cd680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd680 size=16 callers=0 calls=0
   ref: JoinSessionOnRandom
*/
void JoinSessionOnRandom(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd680ULL || rel >= 0x6cd690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd690 size=16 callers=0 calls=0
*/
void sub_6cd690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd690ULL || rel >= 0x6cd6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd6a0 size=16 callers=0 calls=0
   ref: CreateSession
*/
void CreateSession_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd6a0ULL || rel >= 0x6cd6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd6b0 size=16 callers=0 calls=0
*/
void sub_6cd6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd6b0ULL || rel >= 0x6cd6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd6c0 size=16 callers=0 calls=0
   ref: UpdateSettingSession
*/
void UpdateSettingSession_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd6c0ULL || rel >= 0x6cd6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd6d0 size=16 callers=0 calls=0
*/
void sub_6cd6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd6d0ULL || rel >= 0x6cd6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd6e0 size=16 callers=0 calls=0
   ref: BranchSequenceOnRandom
*/
void BranchSequenceOnRandom(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd6e0ULL || rel >= 0x6cd6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd6f0 size=16 callers=0 calls=0
*/
void sub_6cd6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd6f0ULL || rel >= 0x6cd700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd700 size=16 callers=0 calls=0
   ref: CheckBlock
*/
void CheckBlock_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd700ULL || rel >= 0x6cd710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd710 size=16 callers=0 calls=0
*/
void sub_6cd710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd710ULL || rel >= 0x6cd720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd720 size=16 callers=0 calls=0
   ref: LocalCloseSession
*/
void LocalCloseSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd720ULL || rel >= 0x6cd730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd730 size=16 callers=0 calls=0
*/
void sub_6cd730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd730ULL || rel >= 0x6cd740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd740 size=48 callers=0 calls=0
*/
void sub_6cd740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd740ULL || rel >= 0x6cd770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd770 size=16 callers=0 calls=0
*/
void sub_6cd770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd770ULL || rel >= 0x6cd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd780 size=16 callers=0 calls=0
*/
void sub_6cd780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd780ULL || rel >= 0x6cd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd790 size=16 callers=0 calls=0
*/
void sub_6cd790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd790ULL || rel >= 0x6cd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd7a0 size=32 callers=0 calls=0
*/
void sub_6cd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd7a0ULL || rel >= 0x6cd7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd7c0 size=16 callers=0 calls=0
*/
void sub_6cd7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd7c0ULL || rel >= 0x6cd7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd7d0 size=16 callers=0 calls=0
*/
void sub_6cd7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd7d0ULL || rel >= 0x6cd7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd7e0 size=16 callers=0 calls=0
*/
void sub_6cd7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd7e0ULL || rel >= 0x6cd7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd7f0 size=480 callers=1 calls=0
*/
void sub_6cd7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd7f0ULL || rel >= 0x6cd9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cd9d0 size=448 callers=2 calls=0
*/
void sub_6cd9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cd9d0ULL || rel >= 0x6cdb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cdb90 size=128 callers=0 calls=0
*/
void sub_6cdb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cdb90ULL || rel >= 0x6cdc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cdc10 size=96 callers=1 calls=1
   calls: sub_6cdc70
*/
void sub_6cdc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cdc10ULL || rel >= 0x6cdc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cdc70 size=432 callers=1 calls=0
*/
void sub_6cdc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cdc70ULL || rel >= 0x6cde20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cde20 size=208 callers=1 calls=0
*/
void sub_6cde20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cde20ULL || rel >= 0x6cdef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cdef0 size=528 callers=0 calls=1
   calls: sub_6ce780
*/
void sub_6cdef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cdef0ULL || rel >= 0x6ce100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce100 size=16 callers=202 calls=0
*/
void sub_6ce100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce100ULL || rel >= 0x6ce110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce110 size=176 callers=10 calls=2
   calls: sub_5e2350, sub_6ce870
*/
void sub_6ce110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce110ULL || rel >= 0x6ce1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce1c0 size=512 callers=2 calls=0
*/
void sub_6ce1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce1c0ULL || rel >= 0x6ce3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce3c0 size=16 callers=300 calls=0
*/
void sub_6ce3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce3c0ULL || rel >= 0x6ce3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce3d0 size=432 callers=90 calls=1
   calls: sub_6cea70
*/
void sub_6ce3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce3d0ULL || rel >= 0x6ce580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce580 size=96 callers=300 calls=0
*/
void sub_6ce580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce580ULL || rel >= 0x6ce5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce5e0 size=288 callers=0 calls=0
*/
void sub_6ce5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce5e0ULL || rel >= 0x6ce700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce700 size=16 callers=0 calls=0
*/
void sub_6ce700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce700ULL || rel >= 0x6ce710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce710 size=16 callers=0 calls=0
*/
void sub_6ce710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce710ULL || rel >= 0x6ce720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce720 size=16 callers=0 calls=0
*/
void sub_6ce720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce720ULL || rel >= 0x6ce730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce730 size=16 callers=0 calls=0
*/
void sub_6ce730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce730ULL || rel >= 0x6ce740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce740 size=16 callers=0 calls=0
*/
void sub_6ce740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce740ULL || rel >= 0x6ce750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce750 size=16 callers=0 calls=0
*/
void sub_6ce750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce750ULL || rel >= 0x6ce760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce760 size=16 callers=0 calls=0
*/
void sub_6ce760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce760ULL || rel >= 0x6ce770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce770 size=16 callers=0 calls=0
*/
void sub_6ce770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce770ULL || rel >= 0x6ce780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce780 size=240 callers=1 calls=0
*/
void sub_6ce780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce780ULL || rel >= 0x6ce870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ce870 size=512 callers=1 calls=0
*/
void sub_6ce870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ce870ULL || rel >= 0x6cea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cea70 size=528 callers=1 calls=0
*/
void sub_6cea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cea70ULL || rel >= 0x6cec80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cec80 size=128 callers=0 calls=0
*/
void sub_6cec80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cec80ULL || rel >= 0x6ced00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ced00 size=144 callers=1 calls=0
*/
void sub_6ced00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ced00ULL || rel >= 0x6ced90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ced90 size=16 callers=1 calls=0
*/
void sub_6ced90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ced90ULL || rel >= 0x6ceda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ceda0 size=16 callers=1 calls=0
*/
void sub_6ceda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ceda0ULL || rel >= 0x6cedb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cedb0 size=192 callers=1 calls=1
   calls: sub_165e210
*/
void sub_6cedb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cedb0ULL || rel >= 0x6cee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cee70 size=128 callers=0 calls=0
*/
void sub_6cee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cee70ULL || rel >= 0x6ceef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006ceef0 size=64 callers=1 calls=0
*/
void sub_6ceef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6ceef0ULL || rel >= 0x6cef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cef30 size=176 callers=3 calls=0
*/
void sub_6cef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cef30ULL || rel >= 0x6cefe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cefe0 size=384 callers=1 calls=1
   calls: sub_6d0200
*/
void sub_6cefe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cefe0ULL || rel >= 0x6cf160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cf160 size=512 callers=1 calls=2
   calls: sub_6cf360, sub_89b390
*/
void sub_6cf160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cf160ULL || rel >= 0x6cf360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cf360 size=576 callers=3 calls=1
   calls: sub_89b390
*/
void sub_6cf360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cf360ULL || rel >= 0x6cf5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cf5a0 size=512 callers=10 calls=2
   calls: sub_6cf360, sub_89b390
*/
void sub_6cf5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cf5a0ULL || rel >= 0x6cf7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cf7a0 size=336 callers=1 calls=1
   calls: sub_89b390
*/
void sub_6cf7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cf7a0ULL || rel >= 0x6cf8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cf8f0 size=448 callers=11 calls=2
   calls: sub_6cfab0, sub_89b390
*/
void sub_6cf8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cf8f0ULL || rel >= 0x6cfab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cfab0 size=288 callers=1 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_6cfab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cfab0ULL || rel >= 0x6cfbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cfbd0 size=464 callers=10 calls=2
   calls: sub_6cfda0, sub_89b390
*/
void sub_6cfbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cfbd0ULL || rel >= 0x6cfda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cfda0 size=288 callers=2 calls=4
   calls: sub_1652250, sub_165e060, sub_6abee0, sub_6ac290
*/
void sub_6cfda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cfda0ULL || rel >= 0x6cfec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006cfec0 size=464 callers=1 calls=2
   calls: sub_6cfda0, sub_89b390
*/
void sub_6cfec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6cfec0ULL || rel >= 0x6d0090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d0090 size=368 callers=1 calls=0
*/
void sub_6d0090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d0090ULL || rel >= 0x6d0200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d0200 size=576 callers=1 calls=0
*/
void sub_6d0200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d0200ULL || rel >= 0x6d0440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d0440 size=128 callers=0 calls=0
*/
void sub_6d0440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d0440ULL || rel >= 0x6d04c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d04c0 size=432 callers=10 calls=0
*/
void sub_6d04c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d04c0ULL || rel >= 0x6d0670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d0670 size=544 callers=10 calls=5
   calls: sub_6b90e0, sub_6cef30, sub_6d0890, sub_6d3ee0, sub_6d6200
*/
void sub_6d0670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d0670ULL || rel >= 0x6d0890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d0890 size=400 callers=1 calls=5
   calls: sub_6b90e0, sub_6b9260, sub_6cef30, sub_6d3ee0, sub_6d6200
*/
void sub_6d0890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d0890ULL || rel >= 0x6d0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d0a20 size=1616 callers=10 calls=16
   calls: sub_5e2350, sub_6b9030, sub_6b90e0, sub_6b92c0, sub_6be940, sub_6ceef0, sub_6cef30, sub_6cefe0, sub_6d2020, sub_6d3630, sub_6d3ec0, sub_6d3ee0
   ... +4 more
*/
void sub_6d0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d0a20ULL || rel >= 0x6d1070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1070 size=80 callers=49 calls=0
*/
void sub_6d1070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1070ULL || rel >= 0x6d10c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d10c0 size=544 callers=0 calls=11
   calls: sub_172bd80, sub_6b9560, sub_6b9d40, sub_6cf360, sub_6cf7a0, sub_6cf8f0, sub_6cfec0, sub_6d18e0, sub_6d4080, sub_6d66c0, sub_6d6910
*/
void sub_6d10c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d10c0ULL || rel >= 0x6d12e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d12e0 size=128 callers=20 calls=2
   calls: sub_6d4080, sub_6d6910
*/
void sub_6d12e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d12e0ULL || rel >= 0x6d1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1360 size=80 callers=0 calls=1
   calls: sub_172bd80
*/
void sub_6d1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1360ULL || rel >= 0x6d13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d13b0 size=160 callers=20 calls=2
   calls: sub_6b9d40, sub_6cf160
*/
void sub_6d13b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d13b0ULL || rel >= 0x6d1450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1450 size=64 callers=31 calls=0
*/
void sub_6d1450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1450ULL || rel >= 0x6d1490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1490 size=96 callers=10 calls=1
   calls: sub_6b9d40
*/
void sub_6d1490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1490ULL || rel >= 0x6d14f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d14f0 size=64 callers=10 calls=0
*/
void sub_6d14f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d14f0ULL || rel >= 0x6d1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1530 size=16 callers=20 calls=0
*/
void sub_6d1530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1530ULL || rel >= 0x6d1540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1540 size=224 callers=10 calls=1
   calls: sub_6bb230
*/
void sub_6d1540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1540ULL || rel >= 0x6d1620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1620 size=704 callers=20 calls=4
   calls: sub_6b9f50, sub_6d0090, sub_6d41b0, sub_6d6b80
*/
void sub_6d1620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1620ULL || rel >= 0x6d18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d18e0 size=704 callers=2 calls=7
   calls: sub_65da00, sub_65daf0, sub_6d1ba0, sub_6d5450, sub_6f6640, sub_c70, sub_ce0
*/
void sub_6d18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d18e0ULL || rel >= 0x6d1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1ba0 size=208 callers=1 calls=4
   calls: sub_65da00, sub_65daf0, sub_6d3850, sub_6d3970
*/
void sub_6d1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1ba0ULL || rel >= 0x6d1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1c70 size=416 callers=0 calls=2
   calls: sub_6d18e0, sub_6d3c10
*/
void sub_6d1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1c70ULL || rel >= 0x6d1e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1e10 size=144 callers=0 calls=1
   calls: sub_6b9d40
*/
void sub_6d1e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1e10ULL || rel >= 0x6d1ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1ea0 size=144 callers=0 calls=0
*/
void sub_6d1ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1ea0ULL || rel >= 0x6d1f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1f30 size=144 callers=0 calls=0
*/
void sub_6d1f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1f30ULL || rel >= 0x6d1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1fc0 size=16 callers=0 calls=0
*/
void sub_6d1fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1fc0ULL || rel >= 0x6d1fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1fd0 size=16 callers=0 calls=0
*/
void sub_6d1fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1fd0ULL || rel >= 0x6d1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1fe0 size=16 callers=0 calls=0
*/
void sub_6d1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1fe0ULL || rel >= 0x6d1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d1ff0 size=16 callers=0 calls=0
*/
void sub_6d1ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d1ff0ULL || rel >= 0x6d2000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2000 size=16 callers=0 calls=0
*/
void sub_6d2000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2000ULL || rel >= 0x6d2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2010 size=16 callers=0 calls=0
*/
void sub_6d2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2010ULL || rel >= 0x6d2020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2020 size=288 callers=1 calls=0
*/
void sub_6d2020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2020ULL || rel >= 0x6d2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2140 size=528 callers=0 calls=2
   calls: sub_5e2350, sub_89b480
*/
void sub_6d2140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2140ULL || rel >= 0x6d2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2350 size=80 callers=0 calls=0
*/
void sub_6d2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2350ULL || rel >= 0x6d23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d23a0 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_6d23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d23a0ULL || rel >= 0x6d2410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2410 size=16 callers=0 calls=0
*/
void sub_6d2410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2410ULL || rel >= 0x6d2420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2420 size=64 callers=0 calls=0
*/
void sub_6d2420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2420ULL || rel >= 0x6d2460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2460 size=32 callers=0 calls=0
*/
void sub_6d2460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2460ULL || rel >= 0x6d2480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2480 size=80 callers=0 calls=0
*/
void sub_6d2480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2480ULL || rel >= 0x6d24d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d24d0 size=80 callers=0 calls=0
*/
void sub_6d24d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d24d0ULL || rel >= 0x6d2520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2520 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_6d2520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2520ULL || rel >= 0x6d2590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2590 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_6d2590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2590ULL || rel >= 0x6d2600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2600 size=80 callers=0 calls=0
*/
void sub_6d2600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2600ULL || rel >= 0x6d2650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2650 size=80 callers=0 calls=0
*/
void sub_6d2650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2650ULL || rel >= 0x6d26a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d26a0 size=544 callers=0 calls=2
   calls: sub_5e2350, sub_89b480
*/
void sub_6d26a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d26a0ULL || rel >= 0x6d28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d28c0 size=80 callers=0 calls=0
*/
void sub_6d28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d28c0ULL || rel >= 0x6d2910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2910 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_6d2910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2910ULL || rel >= 0x6d2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2980 size=16 callers=0 calls=0
*/
void sub_6d2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2980ULL || rel >= 0x6d2990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2990 size=64 callers=0 calls=0
*/
void sub_6d2990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2990ULL || rel >= 0x6d29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d29d0 size=32 callers=0 calls=0
*/
void sub_6d29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d29d0ULL || rel >= 0x6d29f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d29f0 size=80 callers=0 calls=0
*/
void sub_6d29f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d29f0ULL || rel >= 0x6d2a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2a40 size=80 callers=0 calls=0
*/
void sub_6d2a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2a40ULL || rel >= 0x6d2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2a90 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_6d2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2a90ULL || rel >= 0x6d2b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2b00 size=112 callers=0 calls=1
   calls: sub_89b390
*/
void sub_6d2b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2b00ULL || rel >= 0x6d2b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2b70 size=80 callers=0 calls=0
*/
void sub_6d2b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2b70ULL || rel >= 0x6d2bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 006d2bc0 size=80 callers=0 calls=0
*/
void sub_6d2bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x6d2bc0ULL || rel >= 0x6d2c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

