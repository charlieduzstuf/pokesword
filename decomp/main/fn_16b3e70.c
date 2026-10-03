/* main functions 016b3e70..016d0570 (195 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 016b3e70 size=16 callers=0 calls=0
*/
void sub_16b3e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b3e70ULL || rel >= 0x16b3e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b3e80 size=16 callers=0 calls=0
*/
void sub_16b3e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b3e80ULL || rel >= 0x16b3e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b3e90 size=16 callers=0 calls=0
*/
void sub_16b3e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b3e90ULL || rel >= 0x16b3ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b3ea0 size=48 callers=1 calls=1
   calls: sub_174e7d0
*/
void sub_16b3ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b3ea0ULL || rel >= 0x16b3ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b3ed0 size=64 callers=0 calls=1
   calls: sub_174ea90
*/
void sub_16b3ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b3ed0ULL || rel >= 0x16b3f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b3f10 size=64 callers=0 calls=2
   calls: sub_174ea70, sub_174ea90
*/
void sub_16b3f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b3f10ULL || rel >= 0x16b3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b3f50 size=752 callers=0 calls=9
   calls: sub_1739e40, sub_173ae50, sub_173cc40, sub_1749700, sub_1749820, sub_17499e0, sub_1749d90, sub_174de50, sub_174de60
*/
void sub_16b3f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b3f50ULL || rel >= 0x16b4240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b4240 size=1104 callers=0 calls=9
   calls: sub_165c600, sub_165c6b0, sub_165e060, sub_1749700, sub_1749760, sub_1749780, sub_17497b0, sub_174de50, sub_174ed40
*/
void sub_16b4240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b4240ULL || rel >= 0x16b4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b4690 size=224 callers=0 calls=7
   calls: sub_165e060, sub_165e140, sub_173ae50, sub_173aef0, sub_173cc40, sub_173cd30, sub_174edc0
*/
void sub_16b4690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b4690ULL || rel >= 0x16b4770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b4770 size=112 callers=1 calls=4
   calls: sub_1652bd0, sub_1655080, sub_165ba50, sub_17162d0
*/
void sub_16b4770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b4770ULL || rel >= 0x16b47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b47e0 size=112 callers=0 calls=3
   calls: sub_1655170, sub_1655290, sub_1716390
*/
void sub_16b47e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b47e0ULL || rel >= 0x16b4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b4850 size=112 callers=0 calls=4
   calls: sub_1655170, sub_1655290, sub_165baa0, sub_1716390
*/
void sub_16b4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b4850ULL || rel >= 0x16b48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b48c0 size=464 callers=1 calls=8
   calls: sub_16551b0, sub_1655850, sub_165c6b0, sub_165e060, sub_169afc0, sub_1749820, sub_17499e0, sub_174de60
   ref: ProcessConnectionRequestJob::ConnectToRequesterStation
*/
void ProcessConnectionRequestJob_ConnectToRequesterStation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b48c0ULL || rel >= 0x16b4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b4a90 size=32 callers=0 calls=0
   ref: ProcessConnectionRequestJob::WaitInverseConnection
*/
void ProcessConnectionRequestJob_WaitInverseConnection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b4a90ULL || rel >= 0x16b4ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b4ab0 size=208 callers=0 calls=2
   calls: sub_165c6b0, sub_165e060
   ref: ProcessConnectionRequestJob::SendConnectionResponse
*/
void ProcessConnectionRequestJob_SendConnectionResponse(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b4ab0ULL || rel >= 0x16b4b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b4b80 size=1232 callers=0 calls=12
   calls: sub_1655330, sub_165e140, sub_16a8380, sub_16b00e0, sub_16b35e0, sub_16c0d50, sub_16c1030, sub_16c1160, sub_1749820, sub_17499e0, sub_1749d90, sub_174de60
   ref: ProcessConnectionRequestJob::WaitResponseAck
*/
void ProcessConnectionRequestJob_WaitResponseAck(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b4b80ULL || rel >= 0x16b5050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5050 size=320 callers=0 calls=7
   calls: sub_1655330, sub_16a8370, sub_16a8380, sub_16bfc20, sub_16c10f0, sub_16c1160, sub_174de50
*/
void sub_16b5050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5050ULL || rel >= 0x16b5190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5190 size=464 callers=1 calls=8
   calls: ConnectStationJob_SendRelayConnectionRequest, sub_16551b0, sub_1655850, sub_165c6b0, sub_165e060, sub_1749820, sub_17499e0, sub_174de60
   ref: ProcessConnectionRequestJob::WaitInverseConnection
*/
void ProcessConnectionRequestJob_WaitInverseConnection_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5190ULL || rel >= 0x16b5360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5360 size=192 callers=4 calls=4
   calls: sub_1655290, sub_16559c0, sub_16a8380, sub_16c1160
*/
void sub_16b5360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5360ULL || rel >= 0x16b5420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5420 size=16 callers=0 calls=0
*/
void sub_16b5420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5420ULL || rel >= 0x16b5430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5430 size=64 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_16b5430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5430ULL || rel >= 0x16b5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5470 size=16 callers=0 calls=0
*/
void sub_16b5470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5470ULL || rel >= 0x16b5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5480 size=48 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_16b5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5480ULL || rel >= 0x16b54b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b54b0 size=432 callers=1 calls=8
   calls: sub_1655950, sub_16559c0, sub_165c6b0, sub_165e060, sub_16a1c50, sub_16a6900, sub_16b6db0, sub_16bcaa0
   ref: ProcessDestroyMeshJob::SendDestroyResponse
*/
void ProcessDestroyMeshJob_SendDestroyResponse(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b54b0ULL || rel >= 0x16b5660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5660 size=144 callers=0 calls=3
   calls: sub_16a7a50, sub_16a7ec0, sub_16ae5f0
   ref: ProcessDestroyMeshJob::CleanupMesh
*/
void ProcessDestroyMeshJob_CleanupMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5660ULL || rel >= 0x16b56f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b56f0 size=144 callers=0 calls=3
   calls: sub_16a51f0, sub_16a5a10, sub_174de50
*/
void sub_16b56f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b56f0ULL || rel >= 0x16b5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5780 size=16 callers=1 calls=0
*/
void sub_16b5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5780ULL || rel >= 0x16b5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5790 size=16 callers=0 calls=0
*/
void sub_16b5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5790ULL || rel >= 0x16b57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b57a0 size=192 callers=3 calls=1
   calls: sub_165ba50
*/
void sub_16b57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b57a0ULL || rel >= 0x16b5860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5860 size=16 callers=2 calls=0
*/
void sub_16b5860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5860ULL || rel >= 0x16b5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5870 size=16 callers=0 calls=0
*/
void sub_16b5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5870ULL || rel >= 0x16b5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5880 size=720 callers=3 calls=13
   calls: sub_16559c0, sub_165c600, sub_165e060, sub_16a1c50, sub_16a5730, sub_16a65e0, sub_16a7a50, sub_16a7e70, sub_16a7ea0, sub_16a80b0, sub_16a8370, sub_16bcaa0
   ... +1 more
*/
void sub_16b5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5880ULL || rel >= 0x16b5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5b50 size=128 callers=0 calls=3
   calls: sub_16a5480, sub_16a54e0, sub_174de50
*/
void sub_16b5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5b50ULL || rel >= 0x16b5bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5bd0 size=80 callers=0 calls=2
   calls: sub_16a7ec0, sub_16aec80
*/
void sub_16b5bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5bd0ULL || rel >= 0x16b5c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5c20 size=128 callers=2 calls=2
   calls: sub_16b00e0, sub_174de50
*/
void sub_16b5c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5c20ULL || rel >= 0x16b5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5ca0 size=288 callers=4 calls=5
   calls: sub_165c6b0, sub_16a7a50, sub_16a7ea0, sub_16b00e0, sub_174de50
*/
void sub_16b5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5ca0ULL || rel >= 0x16b5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5dc0 size=160 callers=3 calls=4
   calls: ProcessJoinRequestJob_InitialStep, sub_1655850, sub_16a7c10, sub_16bcaa0
*/
void sub_16b5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5dc0ULL || rel >= 0x16b5e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5e60 size=272 callers=3 calls=3
   calls: sub_16a5480, sub_16a78a0, sub_174de50
*/
void sub_16b5e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5e60ULL || rel >= 0x16b5f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b5f70 size=832 callers=0 calls=18
   calls: sub_165c6b0, sub_165fd50, sub_169de40, sub_16a5480, sub_16a54e0, sub_16a56c0, sub_16a77c0, sub_16a7ea0, sub_16a7ec0, sub_16ae780, sub_16aff40, sub_17495e0
   ... +6 more
   ref: ProcessHostMigrationJob::HostMigrationFailure
   ref: ProcessHostMigrationJob::WaitGreetingResponse
*/
void ProcessHostMigrationJob_WaitGreetingResponse(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b5f70ULL || rel >= 0x16b62b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b62b0 size=144 callers=0 calls=4
   calls: sub_165c600, sub_16a51f0, sub_16a5730, sub_16a6900
*/
void sub_16b62b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b62b0ULL || rel >= 0x16b6340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b6340 size=688 callers=0 calls=7
   calls: sub_165c6b0, sub_16a5480, sub_16a54e0, sub_16a77c0, sub_16a7ec0, sub_16ae780, sub_174de50
   ref: ProcessHostMigrationJob::HostMigrationFailure
*/
void ProcessHostMigrationJob_HostMigrationFailure_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b6340ULL || rel >= 0x16b65f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b65f0 size=224 callers=0 calls=4
   calls: sub_16a77c0, sub_16a7ec0, sub_16acc00, sub_16ae8c0
   ref: ProcessHostMigrationJob::HostMigrationFailure
   ref: ProcessHostMigrationJob::HostMigrationSuccess
*/
void ProcessHostMigrationJob_HostMigrationSuccess(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b65f0ULL || rel >= 0x16b66d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b66d0 size=416 callers=0 calls=11
   calls: sub_1652d30, sub_165c600, sub_165fb50, sub_16a5730, sub_16a65e0, sub_16a77c0, sub_16a7b10, sub_16a7e70, sub_16a7ea0, sub_173e0c0, sub_174de50
   ref: ProcessHostMigrationJob::HostMigrationFailure
*/
void ProcessHostMigrationJob_HostMigrationFailure_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b66d0ULL || rel >= 0x16b6870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b6870 size=704 callers=0 calls=13
   calls: sub_1652d30, sub_165fb50, sub_165fd50, sub_16a5730, sub_16a77c0, sub_16a7ec0, sub_16ae9f0, sub_173e0c0, sub_1749820, sub_17499e0, sub_174a5e0, sub_174de50
   ... +1 more
   ref: ProcessHostMigrationJob::WaitNewHostFinished
   ref: ProcessHostMigrationJob::HostMigrationFailure
*/
void ProcessHostMigrationJob_WaitNewHostFinished(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b6870ULL || rel >= 0x16b6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b6b30 size=320 callers=0 calls=2
   calls: sub_16a5480, sub_16a77c0
   ref: ProcessHostMigrationJob::HostMigrationFailure
   ref: ProcessHostMigrationJob::HostMigrationSuccess
*/
void ProcessHostMigrationJob_HostMigrationSuccess_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b6b30ULL || rel >= 0x16b6c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b6c70 size=32 callers=0 calls=0
*/
void sub_16b6c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b6c70ULL || rel >= 0x16b6c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b6c90 size=128 callers=0 calls=2
   calls: sub_16b00e0, sub_174de50
*/
void sub_16b6c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b6c90ULL || rel >= 0x16b6d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b6d10 size=32 callers=0 calls=0
*/
void sub_16b6d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b6d10ULL || rel >= 0x16b6d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b6d30 size=112 callers=2 calls=0
*/
void sub_16b6d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b6d30ULL || rel >= 0x16b6da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b6da0 size=16 callers=0 calls=0
*/
void sub_16b6da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b6da0ULL || rel >= 0x16b6db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b6db0 size=64 callers=4 calls=0
*/
void sub_16b6db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b6db0ULL || rel >= 0x16b6df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b6df0 size=944 callers=2 calls=17
   calls: sub_16559c0, sub_165c600, sub_165e060, sub_16a1c50, sub_16a5480, sub_16a54e0, sub_16a5730, sub_16a65e0, sub_16a7a50, sub_16a7e70, sub_16a7ea0, sub_16a8010
   ... +5 more
*/
void sub_16b6df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b6df0ULL || rel >= 0x16b71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b71a0 size=16 callers=0 calls=0
*/
void sub_16b71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b71a0ULL || rel >= 0x16b71b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b71b0 size=1904 callers=3 calls=11
   calls: sub_165e060, sub_16a5480, sub_16a8370, sub_16bcc00, sub_16c02a0, sub_16c0330, sub_1749820, sub_17499e0, sub_1749d70, sub_174de50, sub_174de60
*/
void sub_16b71b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b71b0ULL || rel >= 0x16b7920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7920 size=400 callers=2 calls=1
   calls: sub_165e060
*/
void sub_16b7920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7920ULL || rel >= 0x16b7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7ab0 size=64 callers=1 calls=0
*/
void sub_16b7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7ab0ULL || rel >= 0x16b7af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7af0 size=32 callers=3 calls=0
*/
void sub_16b7af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7af0ULL || rel >= 0x16b7b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7b10 size=16 callers=1 calls=0
*/
void sub_16b7b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7b10ULL || rel >= 0x16b7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7b20 size=112 callers=1 calls=1
   calls: sub_165c6b0
*/
void sub_16b7b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7b20ULL || rel >= 0x16b7b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7b90 size=16 callers=0 calls=0
*/
void sub_16b7b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7b90ULL || rel >= 0x16b7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7ba0 size=352 callers=1 calls=4
   calls: sub_1652bd0, sub_165ba50, sub_165fb30, sub_1716330
*/
void sub_16b7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7ba0ULL || rel >= 0x16b7d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7d00 size=144 callers=1 calls=3
   calls: sub_1652d30, sub_1716390, sub_17163e0
*/
void sub_16b7d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7d00ULL || rel >= 0x16b7d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7d90 size=48 callers=0 calls=1
   calls: sub_16b7d00
*/
void sub_16b7d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7d90ULL || rel >= 0x16b7dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7dc0 size=128 callers=2 calls=2
   calls: sub_16a7ec0, sub_16afc70
   ref: ProcessJoinRequestJob::InitialStep
*/
void ProcessJoinRequestJob_InitialStep(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7dc0ULL || rel >= 0x16b7e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7e40 size=64 callers=0 calls=0
   ref: ProcessJoinRequestJob::CheckApprovalJoin
*/
void ProcessJoinRequestJob_CheckApprovalJoin(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7e40ULL || rel >= 0x16b7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b7e80 size=384 callers=0 calls=6
   calls: sub_165fea0, sub_16672c0, sub_169d670, sub_16a56c0, sub_16a6d50, sub_174de50
   ref: ProcessJoinRequestJob::SendJoinResponse
   ref: ProcessJoinRequestJob::InitialStep
   ref: ProcessJoinRequestJob::SendJoinRefused
*/
void ProcessJoinRequestJob_InitialStep_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b7e80ULL || rel >= 0x16b8000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b8000 size=160 callers=0 calls=3
   calls: sub_16a7ec0, sub_16ae370, sub_174de50
   ref: ProcessJoinRequestJob::InitialStep
*/
void ProcessJoinRequestJob_InitialStep_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b8000ULL || rel >= 0x16b80a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b80a0 size=1328 callers=0 calls=32
   calls: sub_1652d30, sub_165c600, sub_165c6b0, sub_165e140, sub_165fd30, sub_169de40, sub_16a5480, sub_16a54e0, sub_16a56c0, sub_16a7010, sub_16a78a0, sub_16a7ea0
   ... +20 more
   ref: ProcessJoinRequestJob::InitialStep
   ref: ProcessJoinRequestJob::WaitResponseAck
   ref: ProcessJoinRequestJob::SendJoinRefused
*/
void ProcessJoinRequestJob_InitialStep_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b80a0ULL || rel >= 0x16b85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b85d0 size=288 callers=0 calls=4
   calls: sub_165c600, sub_16a8380, sub_16c10f0, sub_16c1160
   ref: ProcessJoinRequestJob::InitialStep
   ref: ProcessJoinRequestJob::JoinSucceeded
*/
void ProcessJoinRequestJob_InitialStep_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b85d0ULL || rel >= 0x16b86f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b86f0 size=112 callers=0 calls=3
   calls: sub_16a7ac0, sub_16a7ec0, sub_16acc00
   ref: ProcessJoinRequestJob::InitialStep
*/
void ProcessJoinRequestJob_InitialStep_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b86f0ULL || rel >= 0x16b8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b8760 size=16 callers=1 calls=0
*/
void sub_16b8760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b8760ULL || rel >= 0x16b8770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b8770 size=32 callers=2 calls=0
*/
void sub_16b8770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b8770ULL || rel >= 0x16b8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b8790 size=144 callers=1 calls=2
   calls: sub_16a8380, sub_16c1160
*/
void sub_16b8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b8790ULL || rel >= 0x16b8820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b8820 size=16 callers=0 calls=0
*/
void sub_16b8820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b8820ULL || rel >= 0x16b8830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b8830 size=752 callers=2 calls=5
   calls: sub_1652bd0, sub_1655080, sub_165ba50, sub_17162d0, sub_1749820
*/
void sub_16b8830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b8830ULL || rel >= 0x16b8b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b8b20 size=352 callers=2 calls=3
   calls: sub_1655170, sub_1716390, sub_17163e0
*/
void sub_16b8b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b8b20ULL || rel >= 0x16b8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b8c80 size=48 callers=0 calls=1
   calls: sub_16b8b20
*/
void sub_16b8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b8c80ULL || rel >= 0x16b8cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b8cb0 size=272 callers=1 calls=4
   calls: sub_16a8340, sub_16b8dc0, sub_16b9050, sub_16b9170
   ref: ProcessUpdateMeshJob::WaitDirectConnection
   ref: ProcessUpdateMeshJob::UpdateFailed
   ref: ProcessUpdateMeshJob::CheckConnectionAll
*/
void ProcessUpdateMeshJob_UpdateFailed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b8cb0ULL || rel >= 0x16b8dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b8dc0 size=656 callers=1 calls=1
   calls: sub_165c9d0
*/
void sub_16b8dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b8dc0ULL || rel >= 0x16b9050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b9050 size=288 callers=2 calls=3
   calls: sub_165c6b0, sub_16a7ea0, sub_16a8340
*/
void sub_16b9050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b9050ULL || rel >= 0x16b9170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b9170 size=2848 callers=2 calls=35
   calls: sub_1652d30, sub_1653890, sub_1655850, sub_16559c0, sub_165e140, sub_169afc0, sub_169de40, sub_16a5480, sub_16a54e0, sub_16a56c0, sub_16a6bd0, sub_16a7a50
   ... +23 more
*/
void sub_16b9170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b9170ULL || rel >= 0x16b9c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016b9c90 size=1792 callers=0 calls=14
   calls: sub_165c6b0, sub_165e060, sub_165e140, sub_16a7a50, sub_16a7ea0, sub_16a7ec0, sub_16ae120, sub_16bad60, sub_1749400, sub_1749680, sub_1749d80, sub_174de50
   ... +2 more
   ref: ProcessUpdateMeshJob::SendConnectionReport
   ref: ProcessUpdateMeshJob::UpdateFailed
*/
void ProcessUpdateMeshJob_UpdateFailed_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16b9c90ULL || rel >= 0x16ba390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ba390 size=1888 callers=0 calls=16
   calls: sub_165c6b0, sub_165e060, sub_165e140, sub_16a5480, sub_16a78a0, sub_16a7a50, sub_16a7ea0, sub_16a7ec0, sub_16ae120, sub_16bad60, sub_1749400, sub_1749680
   ... +4 more
   ref: ProcessUpdateMeshJob::UpdateFailed
*/
void ProcessUpdateMeshJob_UpdateFailed_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ba390ULL || rel >= 0x16baaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016baaf0 size=176 callers=0 calls=3
   calls: LeaveMeshJob_SendLeaveRequest, sub_1655850, sub_16a6900
   ref: ProcessUpdateMeshJob::WaitLeaveMesh
   ref: ProcessUpdateMeshJob::CleanupByProcessFailure
*/
void ProcessUpdateMeshJob_WaitLeaveMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16baaf0ULL || rel >= 0x16baba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016baba0 size=448 callers=2 calls=0
*/
void sub_16baba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16baba0ULL || rel >= 0x16bad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bad60 size=2448 callers=4 calls=7
   calls: sub_165e060, sub_165e140, sub_1749820, sub_17499e0, sub_1749d90, sub_174de50, sub_174de60
*/
void sub_16bad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bad60ULL || rel >= 0x16bb6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bb6f0 size=320 callers=0 calls=5
   calls: sub_165e140, sub_16a7a50, sub_16a7ea0, sub_16a7ec0, sub_16aee10
   ref: ProcessUpdateMeshJob::UpdateFailed
   ref: ProcessUpdateMeshJob::StartRelayConnection
*/
void ProcessUpdateMeshJob_UpdateFailed_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bb6f0ULL || rel >= 0x16bb830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bb830 size=2720 callers=0 calls=31
   calls: ConnectStationJob_SendRelayConnectionRequest, sub_1652d30, sub_1655110, sub_1655290, sub_1655850, sub_16559c0, sub_165c6b0, sub_165e060, sub_165e140, sub_169de40, sub_16a1c50, sub_16a56c0
   ... +19 more
   ref: ProcessUpdateMeshJob::UpdateFailed
   ref: ProcessUpdateMeshJob::CheckConnectionAll
*/
void ProcessUpdateMeshJob_UpdateFailed_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bb830ULL || rel >= 0x16bc2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bc2d0 size=208 callers=0 calls=4
   calls: sub_1655110, sub_1655290, sub_16a51f0, sub_16a5a10
*/
void sub_16bc2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bc2d0ULL || rel >= 0x16bc3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bc3a0 size=64 callers=0 calls=0
   ref: ProcessUpdateMeshJob::CleanupByProcessFailure
*/
void ProcessUpdateMeshJob_CleanupByProcessFailure(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bc3a0ULL || rel >= 0x16bc3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bc3e0 size=896 callers=1 calls=5
   calls: sub_165c9d0, sub_16a8340, sub_16b9050, sub_16b9170, sub_16bc760
   ref: ProcessUpdateMeshJob::WaitDirectConnection
   ref: ProcessUpdateMeshJob::UpdateFailed
   ref: ProcessUpdateMeshJob::CheckConnectionAll
*/
void ProcessUpdateMeshJob_UpdateFailed_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bc3e0ULL || rel >= 0x16bc760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bc760 size=784 callers=1 calls=11
   calls: sub_1655330, sub_169de40, sub_16a5480, sub_16a56c0, sub_16aff40, sub_17495e0, sub_1749a80, sub_1749bf0, sub_174de50, sub_174de60, sub_174e2e0
*/
void sub_16bc760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bc760ULL || rel >= 0x16bca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bca70 size=48 callers=1 calls=0
*/
void sub_16bca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bca70ULL || rel >= 0x16bcaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bcaa0 size=208 callers=7 calls=2
   calls: sub_1655110, sub_1655290
*/
void sub_16bcaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bcaa0ULL || rel >= 0x16bcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bcb70 size=144 callers=0 calls=1
   calls: sub_1749d80
*/
void sub_16bcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bcb70ULL || rel >= 0x16bcc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bcc00 size=80 callers=3 calls=0
*/
void sub_16bcc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bcc00ULL || rel >= 0x16bcc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bcc50 size=64 callers=0 calls=0
*/
void sub_16bcc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bcc50ULL || rel >= 0x16bcc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bcc90 size=16 callers=1 calls=0
*/
void sub_16bcc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bcc90ULL || rel >= 0x16bcca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bcca0 size=32 callers=1 calls=0
*/
void sub_16bcca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bcca0ULL || rel >= 0x16bccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bccc0 size=16 callers=0 calls=0
*/
void sub_16bccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bccc0ULL || rel >= 0x16bccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bccd0 size=16 callers=0 calls=0
*/
void sub_16bccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bccd0ULL || rel >= 0x16bcce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bcce0 size=464 callers=1 calls=3
   calls: sub_1652bd0, sub_165ba50, sub_17162d0
*/
void sub_16bcce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bcce0ULL || rel >= 0x16bceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bceb0 size=128 callers=1 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_16bceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bceb0ULL || rel >= 0x16bcf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bcf30 size=48 callers=0 calls=1
   calls: sub_16bceb0
*/
void sub_16bcf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bcf30ULL || rel >= 0x16bcf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bcf60 size=192 callers=1 calls=1
   calls: sub_16559c0
   ref: RelayRouteManageJob::WaitAllDirectConnectionReport
*/
void RelayRouteManageJob_WaitAllDirectConnectionReport(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bcf60ULL || rel >= 0x16bd020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bd020 size=544 callers=0 calls=7
   calls: sub_16a5480, sub_16a7ea0, sub_16a8370, sub_16affd0, sub_16c0230, sub_1749700, sub_174de50
   ref: RelayRouteManageJob::SendRelayRouteDirections
*/
void RelayRouteManageJob_SendRelayRouteDirections(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bd020ULL || rel >= 0x16bd240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bd240 size=240 callers=0 calls=1
   calls: sub_165c9d0
*/
void sub_16bd240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bd240ULL || rel >= 0x16bd330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bd330 size=304 callers=0 calls=6
   calls: sub_16a7ea0, sub_16a7ec0, sub_16a8370, sub_16af1c0, sub_16bed80, sub_16bf6e0
   ref: RelayRouteManageJob::WaitAllDirectConnectionReport
*/
void RelayRouteManageJob_WaitAllDirectConnectionReport_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bd330ULL || rel >= 0x16bd460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bd460 size=64 callers=0 calls=2
   calls: sub_16a8370, sub_16bfe80
*/
void sub_16bd460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bd460ULL || rel >= 0x16bd4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bd4a0 size=80 callers=1 calls=0
*/
void sub_16bd4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bd4a0ULL || rel >= 0x16bd4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bd4f0 size=16 callers=0 calls=0
*/
void sub_16bd4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bd4f0ULL || rel >= 0x16bd500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bd500 size=64 callers=1 calls=0
*/
void sub_16bd500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bd500ULL || rel >= 0x16bd540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bd540 size=16 callers=1 calls=0
*/
void sub_16bd540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bd540ULL || rel >= 0x16bd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bd550 size=1264 callers=1 calls=3
   calls: sub_1652bd0, sub_165e060, sub_17162d0
*/
void sub_16bd550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bd550ULL || rel >= 0x16bda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bda40 size=240 callers=1 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_16bda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bda40ULL || rel >= 0x16bdb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bdb30 size=352 callers=1 calls=1
   calls: sub_16bdc90
*/
void sub_16bdb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bdb30ULL || rel >= 0x16bdc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bdc90 size=1600 callers=1 calls=1
   calls: sub_16be2d0
*/
void sub_16bdc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bdc90ULL || rel >= 0x16be2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016be2d0 size=320 callers=2 calls=1
   calls: sub_16be7b0
*/
void sub_16be2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16be2d0ULL || rel >= 0x16be410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016be410 size=560 callers=2 calls=1
   calls: sub_16be2d0
*/
void sub_16be410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16be410ULL || rel >= 0x16be640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016be640 size=368 callers=1 calls=0
*/
void sub_16be640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16be640ULL || rel >= 0x16be7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016be7b0 size=336 callers=2 calls=0
*/
void sub_16be7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16be7b0ULL || rel >= 0x16be900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016be900 size=832 callers=1 calls=1
   calls: sub_16be7b0
*/
void sub_16be900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16be900ULL || rel >= 0x16bec40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bec40 size=320 callers=1 calls=0
*/
void sub_16bec40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bec40ULL || rel >= 0x16bed80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bed80 size=2400 callers=1 calls=6
   calls: sub_165e060, sub_16bdb30, sub_16be410, sub_16be640, sub_16be900, sub_16bec40
*/
void sub_16bed80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bed80ULL || rel >= 0x16bf6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bf6e0 size=16 callers=3 calls=0
*/
void sub_16bf6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bf6e0ULL || rel >= 0x16bf6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bf6f0 size=528 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16bf6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bf6f0ULL || rel >= 0x16bf900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bf900 size=592 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16bf900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bf900ULL || rel >= 0x16bfb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bfb50 size=64 callers=1 calls=0
*/
void sub_16bfb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bfb50ULL || rel >= 0x16bfb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bfb90 size=144 callers=8 calls=1
   calls: sub_165e060
*/
void sub_16bfb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bfb90ULL || rel >= 0x16bfc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bfc20 size=144 callers=3 calls=1
   calls: sub_165e060
*/
void sub_16bfc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bfc20ULL || rel >= 0x16bfcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bfcb0 size=208 callers=2 calls=1
   calls: sub_165e060
*/
void sub_16bfcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bfcb0ULL || rel >= 0x16bfd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bfd80 size=192 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16bfd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bfd80ULL || rel >= 0x16bfe40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bfe40 size=32 callers=1 calls=0
*/
void sub_16bfe40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bfe40ULL || rel >= 0x16bfe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bfe60 size=32 callers=1 calls=0
*/
void sub_16bfe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bfe60ULL || rel >= 0x16bfe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bfe80 size=272 callers=1 calls=0
*/
void sub_16bfe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bfe80ULL || rel >= 0x16bff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016bff90 size=592 callers=7 calls=1
   calls: sub_165e060
*/
void sub_16bff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16bff90ULL || rel >= 0x16c01e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c01e0 size=80 callers=1 calls=0
*/
void sub_16c01e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c01e0ULL || rel >= 0x16c0230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c0230 size=112 callers=3 calls=0
*/
void sub_16c0230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c0230ULL || rel >= 0x16c02a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c02a0 size=144 callers=2 calls=1
   calls: sub_165e060
*/
void sub_16c02a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c02a0ULL || rel >= 0x16c0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c0330 size=192 callers=2 calls=1
   calls: sub_165e060
*/
void sub_16c0330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c0330ULL || rel >= 0x16c03f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c03f0 size=32 callers=1 calls=0
*/
void sub_16c03f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c03f0ULL || rel >= 0x16c0410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c0410 size=16 callers=1 calls=0
*/
void sub_16c0410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c0410ULL || rel >= 0x16c0420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c0420 size=1280 callers=1 calls=5
   calls: sub_1652bd0, sub_165e060, sub_165fb30, sub_17162d0, sub_1716330
*/
void sub_16c0420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c0420ULL || rel >= 0x16c0920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c0920 size=400 callers=1 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_16c0920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c0920ULL || rel >= 0x16c0ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c0ab0 size=96 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16c0ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c0ab0ULL || rel >= 0x16c0b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c0b10 size=32 callers=1 calls=0
*/
void sub_16c0b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c0b10ULL || rel >= 0x16c0b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c0b30 size=544 callers=1 calls=7
   calls: sub_165c600, sub_165e060, sub_165e140, sub_173c720, sub_173caa0, sub_173ef10, sub_174de50
*/
void sub_16c0b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c0b30ULL || rel >= 0x16c0d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c0d50 size=176 callers=6 calls=3
   calls: sub_165e060, sub_165fd50, sub_16c0e00
*/
void sub_16c0d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c0d50ULL || rel >= 0x16c0e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c0e00 size=560 callers=2 calls=3
   calls: sub_165c600, sub_165c9b0, sub_165e060
*/
void sub_16c0e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c0e00ULL || rel >= 0x16c1030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1030 size=192 callers=6 calls=3
   calls: sub_1653900, sub_165e060, sub_16c0e00
*/
void sub_16c1030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1030ULL || rel >= 0x16c10f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c10f0 size=80 callers=7 calls=0
*/
void sub_16c10f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c10f0ULL || rel >= 0x16c1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1140 size=32 callers=5 calls=0
*/
void sub_16c1140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1140ULL || rel >= 0x16c1160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1160 size=112 callers=42 calls=0
*/
void sub_16c1160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1160ULL || rel >= 0x16c11d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c11d0 size=48 callers=0 calls=1
   calls: sub_165c6b0
*/
void sub_16c11d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c11d0ULL || rel >= 0x16c1200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1200 size=80 callers=1 calls=1
   calls: sub_16580b0
*/
void sub_16c1200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1200ULL || rel >= 0x16c1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1250 size=160 callers=1 calls=4
   calls: sub_16580b0, sub_16580f0, sub_1716390, sub_17163e0
*/
void sub_16c1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1250ULL || rel >= 0x16c12f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c12f0 size=160 callers=1 calls=4
   calls: sub_16580b0, sub_16580f0, sub_1716390, sub_17163e0
*/
void sub_16c12f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c12f0ULL || rel >= 0x16c1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1390 size=416 callers=1 calls=4
   calls: sub_1652bd0, sub_16580c0, sub_165e060, sub_17162d0
*/
void sub_16c1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1390ULL || rel >= 0x16c1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1530 size=128 callers=1 calls=2
   calls: sub_16580b0, sub_16580f0
*/
void sub_16c1530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1530ULL || rel >= 0x16c15b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c15b0 size=224 callers=1 calls=3
   calls: sub_16580c0, sub_16581f0, sub_165e060
*/
void sub_16c15b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c15b0ULL || rel >= 0x16c1690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1690 size=64 callers=2 calls=0
*/
void sub_16c1690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1690ULL || rel >= 0x16c16d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c16d0 size=64 callers=12 calls=0
*/
void sub_16c16d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c16d0ULL || rel >= 0x16c1710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1710 size=64 callers=1 calls=0
*/
void sub_16c1710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1710ULL || rel >= 0x16c1750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1750 size=64 callers=2 calls=0
*/
void sub_16c1750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1750ULL || rel >= 0x16c1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1790 size=80 callers=0 calls=0
*/
void sub_16c1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1790ULL || rel >= 0x16c17e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c17e0 size=64 callers=4 calls=0
*/
void sub_16c17e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c17e0ULL || rel >= 0x16c1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1820 size=176 callers=0 calls=3
   calls: sub_16580f0, sub_1658120, sub_165e060
*/
void sub_16c1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1820ULL || rel >= 0x16c18d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c18d0 size=64 callers=3 calls=0
*/
void sub_16c18d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c18d0ULL || rel >= 0x16c1910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1910 size=176 callers=13 calls=1
   calls: sub_165e060
*/
void sub_16c1910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1910ULL || rel >= 0x16c19c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c19c0 size=176 callers=15 calls=1
   calls: sub_165e060
*/
void sub_16c19c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c19c0ULL || rel >= 0x16c1a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1a70 size=176 callers=18 calls=1
   calls: sub_165e060
*/
void sub_16c1a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1a70ULL || rel >= 0x16c1b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1b20 size=64 callers=3 calls=0
*/
void sub_16c1b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1b20ULL || rel >= 0x16c1b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1b60 size=32 callers=8 calls=0
*/
void sub_16c1b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1b60ULL || rel >= 0x16c1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1b80 size=16 callers=7 calls=0
*/
void sub_16c1b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1b80ULL || rel >= 0x16c1b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1b90 size=16 callers=1 calls=0
*/
void sub_16c1b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1b90ULL || rel >= 0x16c1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1ba0 size=16 callers=2 calls=0
*/
void sub_16c1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1ba0ULL || rel >= 0x16c1bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1bb0 size=80 callers=2 calls=2
   calls: sub_165c600, sub_165c6b0
*/
void sub_16c1bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1bb0ULL || rel >= 0x16c1c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1c00 size=32 callers=2 calls=0
*/
void sub_16c1c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1c00ULL || rel >= 0x16c1c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1c20 size=16 callers=1 calls=0
*/
void sub_16c1c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1c20ULL || rel >= 0x16c1c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1c30 size=80 callers=1 calls=2
   calls: sub_16c1b90, sub_173cf60
*/
void sub_16c1c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1c30ULL || rel >= 0x16c1c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1c80 size=64 callers=0 calls=1
   calls: sub_16c1ba0
*/
void sub_16c1c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1c80ULL || rel >= 0x16c1cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1cc0 size=64 callers=0 calls=2
   calls: sub_16c1ba0, sub_173cfa0
*/
void sub_16c1cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1cc0ULL || rel >= 0x16c1d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1d00 size=224 callers=0 calls=2
   calls: sub_165e060, sub_174de50
*/
void sub_16c1d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1d00ULL || rel >= 0x16c1de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1de0 size=16 callers=0 calls=0
*/
void sub_16c1de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1de0ULL || rel >= 0x16c1df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c1df0 size=560 callers=0 calls=9
   calls: sub_165c6b0, sub_165e060, sub_16a7b10, sub_16c2020, sub_16c2200, sub_16c2440, sub_16c24d0, sub_173ab40, sub_173ab60
*/
void sub_16c1df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c1df0ULL || rel >= 0x16c2020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2020 size=480 callers=2 calls=6
   calls: sub_165c600, sub_165e060, sub_16a7a50, sub_16a7b10, sub_173caa0, sub_173ef10
*/
void sub_16c2020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2020ULL || rel >= 0x16c2200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2200 size=576 callers=1 calls=4
   calls: sub_165c600, sub_165c6b0, sub_16c1c00, sub_16c2440
*/
void sub_16c2200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2200ULL || rel >= 0x16c2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2440 size=144 callers=2 calls=1
   calls: sub_165e060
*/
void sub_16c2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2440ULL || rel >= 0x16c24d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c24d0 size=480 callers=1 calls=4
   calls: sub_165e060, sub_16c1bb0, sub_173caa0, sub_173ef10
*/
void sub_16c24d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c24d0ULL || rel >= 0x16c26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c26b0 size=384 callers=0 calls=5
   calls: sub_165e060, sub_16a7a50, sub_16a7b10, sub_173d270, sub_174de50
*/
void sub_16c26b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c26b0ULL || rel >= 0x16c2830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2830 size=16 callers=0 calls=0
*/
void sub_16c2830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2830ULL || rel >= 0x16c2840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2840 size=272 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16c2840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2840ULL || rel >= 0x16c2950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2950 size=16 callers=0 calls=0
*/
void sub_16c2950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2950ULL || rel >= 0x16c2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2960 size=16 callers=0 calls=0
*/
void sub_16c2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2960ULL || rel >= 0x16c2970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2970 size=16 callers=0 calls=0
*/
void sub_16c2970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2970ULL || rel >= 0x16c2980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2980 size=224 callers=2 calls=7
   calls: sub_169de40, sub_16a54e0, sub_16a56c0, sub_16aff40, sub_17495e0, sub_174de50, sub_174de60
*/
void sub_16c2980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2980ULL || rel >= 0x16c2a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2a60 size=48 callers=1 calls=1
   calls: sub_16a9070
*/
void sub_16c2a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2a60ULL || rel >= 0x16c2a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2a90 size=16 callers=0 calls=0
*/
void sub_16c2a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2a90ULL || rel >= 0x16c2aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2aa0 size=48 callers=0 calls=1
   calls: sub_16a90b0
*/
void sub_16c2aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2aa0ULL || rel >= 0x16c2ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2ad0 size=208 callers=0 calls=3
   calls: sub_165e060, sub_165e140, sub_16a9130
*/
void sub_16c2ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2ad0ULL || rel >= 0x16c2ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2ba0 size=16 callers=0 calls=0
*/
void sub_16c2ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2ba0ULL || rel >= 0x16c2bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2bb0 size=224 callers=0 calls=3
   calls: sub_165e060, sub_165e140, sub_16a9220
*/
void sub_16c2bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2bb0ULL || rel >= 0x16c2c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2c90 size=16 callers=0 calls=0
*/
void sub_16c2c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2c90ULL || rel >= 0x16c2ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2ca0 size=256 callers=0 calls=6
   calls: sub_16c3a60, sub_173caa0, sub_173e5e0, sub_173ef10, sub_174b0f0, sub_174de50
*/
void sub_16c2ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2ca0ULL || rel >= 0x16c2da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2da0 size=256 callers=0 calls=1
   calls: sub_173e5e0
*/
void sub_16c2da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2da0ULL || rel >= 0x16c2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2ea0 size=224 callers=0 calls=1
   calls: sub_173e5e0
*/
void sub_16c2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2ea0ULL || rel >= 0x16c2f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2f80 size=16 callers=0 calls=0
*/
void sub_16c2f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2f80ULL || rel >= 0x16c2f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2f90 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16c2f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2f90ULL || rel >= 0x16c2ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c2ff0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16c2ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c2ff0ULL || rel >= 0x16c3050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3050 size=48 callers=1 calls=1
   calls: sub_16a9a20
*/
void sub_16c3050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3050ULL || rel >= 0x16c3080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3080 size=16 callers=0 calls=0
*/
void sub_16c3080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3080ULL || rel >= 0x16c3090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3090 size=48 callers=0 calls=1
   calls: sub_16a9a50
*/
void sub_16c3090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3090ULL || rel >= 0x16c30c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c30c0 size=224 callers=0 calls=3
   calls: sub_165e060, sub_165e140, sub_16a9a90
*/
void sub_16c30c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c30c0ULL || rel >= 0x16c31a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c31a0 size=16 callers=0 calls=0
*/
void sub_16c31a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c31a0ULL || rel >= 0x16c31b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c31b0 size=208 callers=0 calls=3
   calls: sub_165e060, sub_165e140, sub_16a9ba0
*/
void sub_16c31b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c31b0ULL || rel >= 0x16c3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3280 size=16 callers=0 calls=0
*/
void sub_16c3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3280ULL || rel >= 0x16c3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3290 size=528 callers=0 calls=7
   calls: sub_16a8370, sub_16aa1b0, sub_16aa380, sub_16bfb90, sub_16c34a0, sub_173eb50, sub_173eb60
*/
void sub_16c3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3290ULL || rel >= 0x16c34a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c34a0 size=480 callers=3 calls=8
   calls: sub_1652d30, sub_165fb30, sub_16aaaf0, sub_173c950, sub_173ca60, sub_173eed0, sub_174b020, sub_174de50
*/
void sub_16c34a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c34a0ULL || rel >= 0x16c3680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3680 size=928 callers=0 calls=11
   calls: sub_165e140, sub_16a8370, sub_16aa800, sub_16bfb90, sub_16bfcb0, sub_16bfd80, sub_16c34a0, sub_173eb50, sub_173eb60, sub_174b0f0, sub_174de50
*/
void sub_16c3680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3680ULL || rel >= 0x16c3a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3a20 size=64 callers=0 calls=1
   calls: sub_16c3a60
*/
void sub_16c3a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3a20ULL || rel >= 0x16c3a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3a60 size=832 callers=2 calls=8
   calls: sub_165e140, sub_16a8370, sub_16aa380, sub_16bfb90, sub_16bfcb0, sub_16c34a0, sub_173eb50, sub_173eb60
*/
void sub_16c3a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3a60ULL || rel >= 0x16c3da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3da0 size=16 callers=0 calls=0
*/
void sub_16c3da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3da0ULL || rel >= 0x16c3db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3db0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16c3db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3db0ULL || rel >= 0x16c3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3e10 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16c3e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3e10ULL || rel >= 0x16c3e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3e70 size=208 callers=1 calls=4
   calls: SDK_MW_Nintendo_PiaNex_5_18_0_forNEX_4_6_2, sub_1652a90, sub_165dee0, sub_165e060
   ref: pia nex heap
*/
void pia_nex_heap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3e70ULL || rel >= 0x16c3f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3f40 size=80 callers=0 calls=2
   calls: sub_1652b20, sub_165dfb0
*/
void sub_16c3f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3f40ULL || rel >= 0x16c3f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c3f90 size=176 callers=1 calls=2
   calls: sub_1652bf0, sub_165e060
*/
void sub_16c3f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c3f90ULL || rel >= 0x16c4040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4040 size=16 callers=1 calls=0
*/
void sub_16c4040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4040ULL || rel >= 0x16c4050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4050 size=176 callers=1 calls=3
   calls: sub_1652b90, sub_1652c30, sub_165e060
*/
void sub_16c4050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4050ULL || rel >= 0x16c4100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4100 size=16 callers=1 calls=0
*/
void sub_16c4100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4100ULL || rel >= 0x16c4110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4110 size=16 callers=9 calls=0
*/
void sub_16c4110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4110ULL || rel >= 0x16c4120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4120 size=112 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16c4120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4120ULL || rel >= 0x16c4190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4190 size=16 callers=1 calls=0
   ref: SDK MW+Nintendo+PiaNex-5_18_0-forNEX-4_6_2
*/
void SDK_MW_Nintendo_PiaNex_5_18_0_forNEX_4_6_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4190ULL || rel >= 0x16c41a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c41a0 size=944 callers=3 calls=3
   calls: sub_1652c70, sub_16538d0, sub_17232f0
*/
void sub_16c41a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c41a0ULL || rel >= 0x16c4550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4550 size=16 callers=0 calls=0
*/
void sub_16c4550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4550ULL || rel >= 0x16c4560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4560 size=64 callers=3 calls=1
   calls: sub_1652d30
*/
void sub_16c4560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4560ULL || rel >= 0x16c45a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c45a0 size=64 callers=0 calls=2
   calls: sub_1652d30, sub_1723320
*/
void sub_16c45a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c45a0ULL || rel >= 0x16c45e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c45e0 size=416 callers=1 calls=3
   calls: sub_1652cf0, sub_165bea0, sub_17233a0
*/
void sub_16c45e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c45e0ULL || rel >= 0x16c4780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4780 size=320 callers=2 calls=2
   calls: sub_16538d0, sub_17233d0
*/
void sub_16c4780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4780ULL || rel >= 0x16c48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c48c0 size=32 callers=2 calls=0
*/
void sub_16c48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c48c0ULL || rel >= 0x16c48e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c48e0 size=16 callers=2 calls=0
*/
void sub_16c48e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c48e0ULL || rel >= 0x16c48f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c48f0 size=16 callers=1 calls=0
*/
void sub_16c48f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c48f0ULL || rel >= 0x16c4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4900 size=48 callers=1 calls=0
*/
void sub_16c4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4900ULL || rel >= 0x16c4930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4930 size=16 callers=1 calls=0
*/
void sub_16c4930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4930ULL || rel >= 0x16c4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4940 size=16 callers=2 calls=0
*/
void sub_16c4940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4940ULL || rel >= 0x16c4950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4950 size=16 callers=2 calls=0
*/
void sub_16c4950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4950ULL || rel >= 0x16c4960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4960 size=144 callers=12 calls=1
   calls: sub_165e060
*/
void sub_16c4960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4960ULL || rel >= 0x16c49f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c49f0 size=32 callers=18 calls=0
*/
void sub_16c49f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c49f0ULL || rel >= 0x16c4a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4a10 size=48 callers=21 calls=0
*/
void sub_16c4a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4a10ULL || rel >= 0x16c4a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4a40 size=160 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16c4a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4a40ULL || rel >= 0x16c4ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4ae0 size=192 callers=0 calls=1
   calls: sub_165e060
*/
void sub_16c4ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4ae0ULL || rel >= 0x16c4ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4ba0 size=16 callers=0 calls=0
*/
void sub_16c4ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4ba0ULL || rel >= 0x16c4bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4bb0 size=16 callers=0 calls=0
*/
void sub_16c4bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4bb0ULL || rel >= 0x16c4bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4bc0 size=240 callers=1 calls=4
   calls: sub_165be70, sub_165bea0, sub_165c080, sub_165e060
*/
void sub_16c4bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4bc0ULL || rel >= 0x16c4cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4cb0 size=16 callers=3 calls=0
*/
void sub_16c4cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4cb0ULL || rel >= 0x16c4cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4cc0 size=16 callers=1 calls=0
*/
void sub_16c4cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4cc0ULL || rel >= 0x16c4cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4cd0 size=240 callers=1 calls=4
   calls: sub_165be70, sub_165bea0, sub_165c080, sub_165e060
*/
void sub_16c4cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4cd0ULL || rel >= 0x16c4dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4dc0 size=16 callers=4 calls=0
*/
void sub_16c4dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4dc0ULL || rel >= 0x16c4dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4dd0 size=16 callers=2 calls=0
*/
void sub_16c4dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4dd0ULL || rel >= 0x16c4de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4de0 size=32 callers=1 calls=0
*/
void sub_16c4de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4de0ULL || rel >= 0x16c4e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4e00 size=16 callers=5 calls=0
*/
void sub_16c4e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4e00ULL || rel >= 0x16c4e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4e10 size=16 callers=1 calls=0
*/
void sub_16c4e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4e10ULL || rel >= 0x16c4e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4e20 size=16 callers=1 calls=0
*/
void sub_16c4e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4e20ULL || rel >= 0x16c4e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4e30 size=16 callers=2 calls=0
*/
void sub_16c4e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4e30ULL || rel >= 0x16c4e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4e40 size=16 callers=1 calls=0
*/
void sub_16c4e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4e40ULL || rel >= 0x16c4e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4e50 size=16 callers=1 calls=0
*/
void sub_16c4e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4e50ULL || rel >= 0x16c4e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4e60 size=16 callers=1 calls=0
*/
void sub_16c4e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4e60ULL || rel >= 0x16c4e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4e70 size=16 callers=2 calls=0
*/
void sub_16c4e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4e70ULL || rel >= 0x16c4e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4e80 size=16 callers=1 calls=0
*/
void sub_16c4e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4e80ULL || rel >= 0x16c4e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4e90 size=16 callers=2 calls=0
*/
void sub_16c4e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4e90ULL || rel >= 0x16c4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4ea0 size=16 callers=1 calls=0
*/
void sub_16c4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4ea0ULL || rel >= 0x16c4eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4eb0 size=16 callers=2 calls=0
*/
void sub_16c4eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4eb0ULL || rel >= 0x16c4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4ec0 size=16 callers=3 calls=0
*/
void sub_16c4ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4ec0ULL || rel >= 0x16c4ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4ed0 size=16 callers=2 calls=0
*/
void sub_16c4ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4ed0ULL || rel >= 0x16c4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4ee0 size=16 callers=1 calls=0
*/
void sub_16c4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4ee0ULL || rel >= 0x16c4ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4ef0 size=16 callers=1 calls=0
*/
void sub_16c4ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4ef0ULL || rel >= 0x16c4f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4f00 size=128 callers=1 calls=1
   calls: sub_165c080
*/
void sub_16c4f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4f00ULL || rel >= 0x16c4f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c4f80 size=448 callers=1 calls=2
   calls: sub_15b9340, sub_15b9390
*/
void sub_16c4f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c4f80ULL || rel >= 0x16c5140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5140 size=16 callers=5 calls=0
*/
void sub_16c5140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5140ULL || rel >= 0x16c5150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5150 size=16 callers=1 calls=0
*/
void sub_16c5150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5150ULL || rel >= 0x16c5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5160 size=16 callers=2 calls=0
*/
void sub_16c5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5160ULL || rel >= 0x16c5170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5170 size=16 callers=2 calls=0
*/
void sub_16c5170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5170ULL || rel >= 0x16c5180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5180 size=16 callers=3 calls=0
*/
void sub_16c5180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5180ULL || rel >= 0x16c5190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5190 size=32 callers=1 calls=0
*/
void sub_16c5190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5190ULL || rel >= 0x16c51b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c51b0 size=16 callers=1 calls=0
*/
void sub_16c51b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c51b0ULL || rel >= 0x16c51c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c51c0 size=32 callers=2 calls=0
*/
void sub_16c51c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c51c0ULL || rel >= 0x16c51e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c51e0 size=32 callers=2 calls=0
*/
void sub_16c51e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c51e0ULL || rel >= 0x16c5200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5200 size=16 callers=0 calls=0
*/
void sub_16c5200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5200ULL || rel >= 0x16c5210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5210 size=16 callers=0 calls=0
*/
void sub_16c5210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5210ULL || rel >= 0x16c5220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5220 size=480 callers=0 calls=2
   calls: sub_165c200, sub_165e060
*/
void sub_16c5220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5220ULL || rel >= 0x16c5400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5400 size=16 callers=0 calls=0
*/
void sub_16c5400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5400ULL || rel >= 0x16c5410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5410 size=64 callers=0 calls=0
*/
void sub_16c5410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5410ULL || rel >= 0x16c5450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5450 size=480 callers=0 calls=2
   calls: sub_165c200, sub_165e060
*/
void sub_16c5450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5450ULL || rel >= 0x16c5630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5630 size=1056 callers=1 calls=26
   calls: sub_1653890, sub_165e060, sub_16c5a50, sub_1749820, sub_17499e0, sub_1749a80, sub_1749cd0, sub_1749ce0, sub_1749d50, sub_1749d60, sub_1749d70, sub_1749d80
   ... +14 more
*/
void sub_16c5630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5630ULL || rel >= 0x16c5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5a50 size=512 callers=8 calls=32
   calls: localhost_2, probeinit_2, sub_15bc310, sub_15d7230, sub_15dacb0, sub_15dd850, sub_15e02a0, sub_15e17d0, sub_15e18e0, sub_15e9080, sub_15ea750, sub_15ea7a0
   ... +20 more
*/
void sub_16c5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5a50ULL || rel >= 0x16c5c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5c50 size=80 callers=10 calls=3
   calls: sub_1618410, sub_16184b0, sub_1652de0
*/
void sub_16c5c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5c50ULL || rel >= 0x16c5ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5ca0 size=320 callers=1 calls=7
   calls: sub_1652bd0, sub_165e060, sub_16c4040, sub_16c4100, sub_16c5de0, sub_16c63e0, sub_1716330
*/
void sub_16c5ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5ca0ULL || rel >= 0x16c5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c5de0 size=640 callers=1 calls=17
   calls: sub_15a5390, sub_15e9650, sub_1633be0, sub_1652bd0, sub_165af60, sub_165e060, sub_16d3a60, sub_16d3dc0, sub_16d5d50, sub_16d6320, sub_16d6a40, sub_17103c0
   ... +5 more
*/
void sub_16c5de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c5de0ULL || rel >= 0x16c6060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6060 size=112 callers=1 calls=3
   calls: sub_16c60d0, sub_1716390, sub_17163e0
*/
void sub_16c6060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6060ULL || rel >= 0x16c60d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c60d0 size=784 callers=1 calls=11
   calls: InstanceTable_206, sub_15a5450, sub_1655110, sub_1655290, sub_165af80, sub_16c6590, sub_16d3ae0, sub_16d6ac0, sub_1710480, sub_1716390, sub_17163e0
*/
void sub_16c60d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c60d0ULL || rel >= 0x16c63e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c63e0 size=256 callers=1 calls=2
   calls: sub_1655080, sub_1749820
*/
void sub_16c63e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c63e0ULL || rel >= 0x16c64e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c64e0 size=80 callers=0 calls=2
   calls: sub_1655170, sub_17499e0
*/
void sub_16c64e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c64e0ULL || rel >= 0x16c6530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6530 size=96 callers=0 calls=2
   calls: sub_1655170, sub_17499e0
*/
void sub_16c6530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6530ULL || rel >= 0x16c6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6590 size=176 callers=3 calls=3
   calls: sub_16559c0, sub_1655a80, sub_165bba0
*/
void sub_16c6590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6590ULL || rel >= 0x16c6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6640 size=176 callers=1 calls=2
   calls: sub_165e060, sub_16c9180
*/
void sub_16c6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6640ULL || rel >= 0x16c66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c66f0 size=256 callers=1 calls=3
   calls: sub_159d190, sub_165bea0, sub_165e060
*/
void sub_16c66f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c66f0ULL || rel >= 0x16c67f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c67f0 size=112 callers=0 calls=0
*/
void sub_16c67f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c67f0ULL || rel >= 0x16c6860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6860 size=32 callers=37 calls=0
*/
void sub_16c6860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6860ULL || rel >= 0x16c6880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6880 size=16 callers=18 calls=0
*/
void sub_16c6880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6880ULL || rel >= 0x16c6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6890 size=560 callers=1 calls=6
   calls: sub_15b4ae0, sub_15b4c30, sub_15b8dc0, sub_165e060, sub_16d64e0, sub_6a5230
   ref: D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_2-S730-20190205-ja\Ni
*/
void InstanceTable_458(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6890ULL || rel >= 0x16c6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6ac0 size=336 callers=3 calls=6
   calls: CallContext, InstanceTable_206, sub_1655110, sub_1655290, sub_16c6590, sub_1710480
*/
void sub_16c6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6ac0ULL || rel >= 0x16c6c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6c10 size=48 callers=1 calls=0
*/
void sub_16c6c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6c10ULL || rel >= 0x16c6c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6c40 size=144 callers=1 calls=1
   calls: sub_165e060
*/
void sub_16c6c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6c40ULL || rel >= 0x16c6cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6cd0 size=176 callers=0 calls=2
   calls: sub_1655330, sub_165e060
*/
void sub_16c6cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6cd0ULL || rel >= 0x16c6d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6d80 size=16 callers=0 calls=0
*/
void sub_16c6d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6d80ULL || rel >= 0x16c6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6d90 size=416 callers=0 calls=4
   calls: sub_1655180, sub_1655190, sub_1655220, sub_165e060
*/
void sub_16c6d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6d90ULL || rel >= 0x16c6f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6f30 size=16 callers=0 calls=0
*/
void sub_16c6f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6f30ULL || rel >= 0x16c6f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c6f40 size=2528 callers=0 calls=52
   calls: CallContext, sub_15b8dc0, sub_15bead0, sub_15ca030, sub_15dd3a0, sub_15df270, sub_15e47e0, sub_15e6fc0, sub_15e9080, sub_15ea6f0, sub_15ea720, sub_15ea770
   ... +40 more
   ref: D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_2-S730-20190205-ja\Ni
*/
void InstanceTable_459(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c6f40ULL || rel >= 0x16c7920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c7920 size=1024 callers=1 calls=29
   calls: NexNatServerAddressResolveJob_StepResolveNatServerAddres, sub_15b8dc0, sub_15e6fc0, sub_15e9080, sub_15ea850, sub_1652ca0, sub_1652d30, sub_1653890, sub_1653b50, sub_1655110, sub_1655180, sub_1655190
   ... +17 more
   ref: D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_2-S730-20190205-ja\Ni
*/
void InstanceTable_460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c7920ULL || rel >= 0x16c7d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c7d20 size=320 callers=4 calls=8
   calls: CallContext, InstanceTable_206, sub_1655110, sub_1655290, sub_165b040, sub_165e140, sub_165ffd0, sub_16c6590
*/
void sub_16c7d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c7d20ULL || rel >= 0x16c7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c7e60 size=16 callers=0 calls=0
*/
void sub_16c7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c7e60ULL || rel >= 0x16c7e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c7e70 size=16 callers=3 calls=0
*/
void sub_16c7e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c7e70ULL || rel >= 0x16c7e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c7e80 size=32 callers=8 calls=1
   calls: sub_16ca650
*/
void sub_16c7e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c7e80ULL || rel >= 0x16c7ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c7ea0 size=80 callers=1 calls=0
*/
void sub_16c7ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c7ea0ULL || rel >= 0x16c7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c7ef0 size=80 callers=2 calls=0
*/
void sub_16c7ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c7ef0ULL || rel >= 0x16c7f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c7f40 size=208 callers=2 calls=6
   calls: sub_15a0eb0, sub_15bc1e0, sub_15bc310, sub_15bc340, sub_165be70, sub_165c180
*/
void sub_16c7f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c7f40ULL || rel >= 0x16c8010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8010 size=16 callers=2 calls=0
*/
void sub_16c8010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8010ULL || rel >= 0x16c8020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8020 size=688 callers=1 calls=9
   calls: sub_1652f60, sub_165b880, sub_165c600, sub_165c6b0, sub_165e060, sub_165e140, sub_16c82d0, sub_16ca670, sub_16d2b60
   ref: nncs2-%.n.n.srv.nintendo.net
   ref: nncs1-%.n.n.srv.nintendo.net
*/
void nncs2_n_n_srv_nintendo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8020ULL || rel >= 0x16c82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c82d0 size=128 callers=4 calls=2
   calls: sub_1652cf0, sub_165e060
*/
void sub_16c82d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c82d0ULL || rel >= 0x16c8350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8350 size=16 callers=0 calls=0
*/
void sub_16c8350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8350ULL || rel >= 0x16c8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8360 size=16 callers=0 calls=0
*/
void sub_16c8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8360ULL || rel >= 0x16c8370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8370 size=16 callers=0 calls=0
*/
void sub_16c8370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8370ULL || rel >= 0x16c8380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8380 size=16 callers=0 calls=0
*/
void sub_16c8380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8380ULL || rel >= 0x16c8390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8390 size=128 callers=0 calls=1
   calls: sub_1749d80
*/
void sub_16c8390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8390ULL || rel >= 0x16c8410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8410 size=16 callers=0 calls=0
*/
void sub_16c8410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8410ULL || rel >= 0x16c8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8420 size=16 callers=0 calls=0
*/
void sub_16c8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8420ULL || rel >= 0x16c8430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8430 size=32 callers=0 calls=0
*/
void sub_16c8430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8430ULL || rel >= 0x16c8450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8450 size=96 callers=0 calls=1
   calls: sub_16ca650
*/
void sub_16c8450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8450ULL || rel >= 0x16c84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c84b0 size=32 callers=0 calls=0
*/
void sub_16c84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c84b0ULL || rel >= 0x16c84d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c84d0 size=16 callers=1 calls=0
*/
void sub_16c84d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c84d0ULL || rel >= 0x16c84e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c84e0 size=16 callers=2 calls=0
*/
void sub_16c84e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c84e0ULL || rel >= 0x16c84f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c84f0 size=32 callers=0 calls=0
*/
void sub_16c84f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c84f0ULL || rel >= 0x16c8510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8510 size=48 callers=0 calls=0
*/
void sub_16c8510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8510ULL || rel >= 0x16c8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8540 size=144 callers=11 calls=1
   calls: sub_16ca290
*/
void sub_16c8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8540ULL || rel >= 0x16c85d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c85d0 size=1424 callers=1 calls=4
   calls: sub_16ca290, sub_16ca6a0, sub_1749820, sub_17499e0
*/
void sub_16c85d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c85d0ULL || rel >= 0x16c8b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8b60 size=144 callers=2 calls=1
   calls: sub_165e060
*/
void sub_16c8b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8b60ULL || rel >= 0x16c8bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8bf0 size=112 callers=0 calls=2
   calls: sub_16a6fb0, sub_16a8050
*/
void sub_16c8bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8bf0ULL || rel >= 0x16c8c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8c60 size=16 callers=0 calls=0
*/
void sub_16c8c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8c60ULL || rel >= 0x16c8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8c70 size=16 callers=1 calls=0
*/
void sub_16c8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8c70ULL || rel >= 0x16c8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8c80 size=32 callers=2 calls=0
*/
void sub_16c8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8c80ULL || rel >= 0x16c8ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8ca0 size=96 callers=9 calls=2
   calls: sub_165e060, sub_16d65e0
*/
void sub_16c8ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8ca0ULL || rel >= 0x16c8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8d00 size=16 callers=1 calls=0
*/
void sub_16c8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8d00ULL || rel >= 0x16c8d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8d10 size=16 callers=1 calls=0
*/
void sub_16c8d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8d10ULL || rel >= 0x16c8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8d20 size=176 callers=0 calls=3
   calls: sub_1618120, sub_1652c70, sub_1c0
*/
void sub_16c8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8d20ULL || rel >= 0x16c8dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8dd0 size=544 callers=1 calls=8
   calls: sub_1652bd0, sub_1652c70, sub_1652cf0, sub_1652d30, sub_1655080, sub_16cdf20, sub_16ce510, sub_17162d0
*/
void sub_16c8dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8dd0ULL || rel >= 0x16c8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c8ff0 size=272 callers=4 calls=3
   calls: sub_1652d30, sub_1655170, sub_1716390
*/
void sub_16c8ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c8ff0ULL || rel >= 0x16c9100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9100 size=80 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_16c9100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9100ULL || rel >= 0x16c9150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9150 size=48 callers=0 calls=1
   calls: sub_16c8ff0
*/
void sub_16c9150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9150ULL || rel >= 0x16c9180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9180 size=272 callers=1 calls=6
   calls: sub_165e060, sub_16cee50, sub_173d6d0, sub_173d700, sub_173d790, sub_173db30
*/
void sub_16c9180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9180ULL || rel >= 0x16c9290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9290 size=272 callers=3 calls=3
   calls: sub_1652c70, sub_1652cf0, sub_1652d30
*/
void sub_16c9290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9290ULL || rel >= 0x16c93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c93a0 size=432 callers=0 calls=4
   calls: IN_ANY_ADDR_d, sub_1652cf0, sub_165e060, sub_16c9290
*/
void sub_16c93a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c93a0ULL || rel >= 0x16c9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9550 size=272 callers=0 calls=4
   calls: sub_1655110, sub_1655290, sub_16cf550, sub_16d2350
*/
void sub_16c9550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9550ULL || rel >= 0x16c9660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9660 size=16 callers=0 calls=0
*/
void sub_16c9660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9660ULL || rel >= 0x16c9670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9670 size=16 callers=0 calls=0
*/
void sub_16c9670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9670ULL || rel >= 0x16c9680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9680 size=16 callers=0 calls=0
*/
void sub_16c9680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9680ULL || rel >= 0x16c9690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9690 size=464 callers=0 calls=11
   calls: sub_1652c70, sub_1652cf0, sub_1652d30, sub_1653860, sub_1653890, sub_1655180, sub_165e060, sub_16ca7b0, sub_16ca7d0, sub_16ca7f0, sub_16ce5f0
*/
void sub_16c9690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9690ULL || rel >= 0x16c9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9860 size=16 callers=0 calls=0
*/
void sub_16c9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9860ULL || rel >= 0x16c9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9870 size=672 callers=0 calls=8
   calls: sub_1652cf0, sub_1655110, sub_1655220, sub_1655290, sub_165e060, sub_16a8050, sub_16c9290, sub_16c9b10
*/
void sub_16c9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9870ULL || rel >= 0x16c9b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9b10 size=256 callers=3 calls=5
   calls: sub_16551b0, sub_1655220, sub_1655290, sub_165e060, sub_16d2310
*/
void sub_16c9b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9b10ULL || rel >= 0x16c9c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9c10 size=592 callers=0 calls=14
   calls: sub_1652c70, sub_1652cf0, sub_1652d30, sub_1653860, sub_1653890, sub_1655180, sub_165e060, sub_16c9b10, sub_16ca7b0, sub_16ca7d0, sub_16ca7f0, sub_16ce030
   ... +2 more
*/
void sub_16c9c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9c10ULL || rel >= 0x16c9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9e60 size=304 callers=0 calls=6
   calls: sub_1655110, sub_1655220, sub_1655290, sub_165e060, sub_16a8050, sub_16c9b10
*/
void sub_16c9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9e60ULL || rel >= 0x16c9f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9f90 size=16 callers=0 calls=0
*/
void sub_16c9f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9f90ULL || rel >= 0x16c9fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016c9fa0 size=336 callers=1 calls=8
   calls: sub_1652c70, sub_1652cf0, sub_1652d30, sub_1653860, sub_1653890, sub_1655220, sub_165e060, sub_16ce030
*/
void sub_16c9fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16c9fa0ULL || rel >= 0x16ca0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca0f0 size=416 callers=0 calls=6
   calls: sub_1655190, sub_165c600, sub_165c6b0, sub_165e060, sub_16cccb0, sub_16ccd30
*/
void sub_16ca0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca0f0ULL || rel >= 0x16ca290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca290 size=128 callers=17 calls=1
   calls: sub_1749da0
*/
void sub_16ca290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca290ULL || rel >= 0x16ca310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca310 size=176 callers=0 calls=4
   calls: sub_16d1ff0, sub_1749820, sub_17499e0, sub_1749a80
*/
void sub_16ca310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca310ULL || rel >= 0x16ca3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca3c0 size=16 callers=0 calls=0
*/
void sub_16ca3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca3c0ULL || rel >= 0x16ca3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca3d0 size=208 callers=3 calls=6
   calls: sub_165c600, sub_16ceaf0, sub_16cebf0, sub_1749820, sub_17499e0, sub_1749a80
*/
void sub_16ca3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca3d0ULL || rel >= 0x16ca4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca4a0 size=224 callers=0 calls=7
   calls: sub_1652d30, sub_1653890, sub_16d0220, sub_16d0310, sub_1749cf0, sub_1749da0, sub_1749ee0
*/
void sub_16ca4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca4a0ULL || rel >= 0x16ca580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca580 size=32 callers=1 calls=1
   calls: sub_1749a80
*/
void sub_16ca580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca580ULL || rel >= 0x16ca5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca5a0 size=32 callers=0 calls=0
*/
void sub_16ca5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca5a0ULL || rel >= 0x16ca5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca5c0 size=16 callers=1 calls=0
*/
void sub_16ca5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca5c0ULL || rel >= 0x16ca5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca5d0 size=64 callers=0 calls=1
   calls: sub_16cccb0
*/
void sub_16ca5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca5d0ULL || rel >= 0x16ca610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca610 size=64 callers=0 calls=1
   calls: sub_16ccdb0
*/
void sub_16ca610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca610ULL || rel >= 0x16ca650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca650 size=16 callers=5 calls=0
*/
void sub_16ca650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca650ULL || rel >= 0x16ca660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca660 size=16 callers=2 calls=0
*/
void sub_16ca660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca660ULL || rel >= 0x16ca670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca670 size=16 callers=7 calls=0
*/
void sub_16ca670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca670ULL || rel >= 0x16ca680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca680 size=16 callers=9 calls=0
*/
void sub_16ca680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca680ULL || rel >= 0x16ca690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca690 size=16 callers=1 calls=0
*/
void sub_16ca690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca690ULL || rel >= 0x16ca6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca6a0 size=128 callers=15 calls=1
   calls: sub_165e060
*/
void sub_16ca6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca6a0ULL || rel >= 0x16ca720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca720 size=16 callers=0 calls=0
*/
void sub_16ca720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca720ULL || rel >= 0x16ca730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca730 size=80 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_16ca730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca730ULL || rel >= 0x16ca780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca780 size=16 callers=0 calls=0
*/
void sub_16ca780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca780ULL || rel >= 0x16ca790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca790 size=16 callers=1 calls=0
*/
void sub_16ca790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca790ULL || rel >= 0x16ca7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca7a0 size=16 callers=1 calls=0
*/
void sub_16ca7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca7a0ULL || rel >= 0x16ca7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca7b0 size=32 callers=2 calls=0
*/
void sub_16ca7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca7b0ULL || rel >= 0x16ca7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca7d0 size=32 callers=2 calls=0
*/
void sub_16ca7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca7d0ULL || rel >= 0x16ca7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca7f0 size=160 callers=2 calls=1
   calls: sub_171e1e0
*/
void sub_16ca7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca7f0ULL || rel >= 0x16ca890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca890 size=128 callers=2 calls=4
   calls: sub_1652c70, sub_165af60, sub_16ca910, sub_16cb9d0
*/
void sub_16ca890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca890ULL || rel >= 0x16ca910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ca910 size=752 callers=1 calls=2
   calls: sub_16580b0, sub_16580c0
*/
void sub_16ca910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ca910ULL || rel >= 0x16cac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cac00 size=80 callers=2 calls=2
   calls: sub_1652d30, sub_16cba10
*/
void sub_16cac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cac00ULL || rel >= 0x16cac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cac50 size=16 callers=0 calls=0
*/
void sub_16cac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cac50ULL || rel >= 0x16cac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cac60 size=272 callers=0 calls=5
   calls: sub_1652cf0, sub_16580b0, sub_16580f0, sub_165c600, sub_165e060
*/
void sub_16cac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cac60ULL || rel >= 0x16cad70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cad70 size=16 callers=0 calls=0
*/
void sub_16cad70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cad70ULL || rel >= 0x16cad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cad80 size=32 callers=0 calls=0
*/
void sub_16cad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cad80ULL || rel >= 0x16cada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cada0 size=128 callers=0 calls=3
   calls: sub_16580b0, sub_16580f0, sub_16cae20
*/
void sub_16cada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cada0ULL || rel >= 0x16cae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cae20 size=240 callers=3 calls=3
   calls: sub_165b040, sub_165e060, sub_165e140
*/
void sub_16cae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cae20ULL || rel >= 0x16caf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016caf10 size=336 callers=1 calls=7
   calls: sub_1653bb0, sub_165af90, sub_165b040, sub_165b0f0, sub_165e060, sub_165e140, sub_16cb060
*/
void sub_16caf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16caf10ULL || rel >= 0x16cb060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb060 size=816 callers=2 calls=3
   calls: sub_1653bb0, sub_165b0f0, sub_171e1e0
*/
void sub_16cb060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb060ULL || rel >= 0x16cb390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb390 size=256 callers=1 calls=5
   calls: sub_165af90, sub_165b040, sub_165e060, sub_165e140, sub_16cb060
*/
void sub_16cb390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb390ULL || rel >= 0x16cb490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb490 size=96 callers=2 calls=3
   calls: sub_1652ca0, sub_1652d30, sub_16cb4f0
*/
void sub_16cb490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb490ULL || rel >= 0x16cb4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb4f0 size=192 callers=6 calls=5
   calls: sub_1652c70, sub_1652cf0, sub_16538d0, sub_16580c0, sub_16581f0
*/
void sub_16cb4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb4f0ULL || rel >= 0x16cb5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb5b0 size=128 callers=1 calls=2
   calls: sub_16580b0, sub_16580f0
*/
void sub_16cb5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb5b0ULL || rel >= 0x16cb630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb630 size=80 callers=2 calls=1
   calls: sub_16cb680
*/
void sub_16cb630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb630ULL || rel >= 0x16cb680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb680 size=272 callers=1 calls=5
   calls: sub_1652d30, sub_16580f0, sub_1658120, sub_165b5f0, sub_165e140
*/
void sub_16cb680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb680ULL || rel >= 0x16cb790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb790 size=304 callers=1 calls=2
   calls: sub_165b480, sub_165e140
*/
void sub_16cb790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb790ULL || rel >= 0x16cb8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb8c0 size=144 callers=1 calls=3
   calls: sub_1652cf0, sub_1652d30, sub_1652d50
*/
void sub_16cb8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb8c0ULL || rel >= 0x16cb950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb950 size=48 callers=1 calls=0
*/
void sub_16cb950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb950ULL || rel >= 0x16cb980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb980 size=16 callers=2 calls=0
*/
void sub_16cb980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb980ULL || rel >= 0x16cb990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb990 size=16 callers=2 calls=0
*/
void sub_16cb990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb990ULL || rel >= 0x16cb9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb9a0 size=16 callers=2 calls=0
*/
void sub_16cb9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb9a0ULL || rel >= 0x16cb9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb9b0 size=16 callers=0 calls=0
*/
void sub_16cb9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb9b0ULL || rel >= 0x16cb9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb9c0 size=16 callers=0 calls=0
*/
void sub_16cb9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb9c0ULL || rel >= 0x16cb9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cb9d0 size=64 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_16cb9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cb9d0ULL || rel >= 0x16cba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cba10 size=16 callers=1 calls=0
*/
void sub_16cba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cba10ULL || rel >= 0x16cba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cba20 size=48 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_16cba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cba20ULL || rel >= 0x16cba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cba50 size=208 callers=2 calls=5
   calls: sub_16540f0, sub_16548b0, sub_1655190, sub_165baf0, sub_165e060
   ref: NatDetectionJob::StepPreTest
*/
void NatDetectionJob_StepPreTest(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cba50ULL || rel >= 0x16cbb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cbb20 size=256 callers=0 calls=5
   calls: sub_16540f0, sub_16548b0, sub_1655220, sub_165e060, sub_16caf10
   ref: NatDetectionJob::StepStart
   ref: NatDetectionJob::StepComplete
*/
void NatDetectionJob_StepStart(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cbb20ULL || rel >= 0x16cbc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cbc20 size=112 callers=0 calls=2
   calls: sub_16540f0, sub_1655290
*/
void sub_16cbc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cbc20ULL || rel >= 0x16cbc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cbc90 size=480 callers=0 calls=6
   calls: sub_16540f0, sub_16548b0, sub_16551b0, sub_1655220, sub_165e060, sub_16c4110
*/
void sub_16cbc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cbc90ULL || rel >= 0x16cbe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cbe70 size=192 callers=0 calls=3
   calls: sub_165c600, sub_165c6b0, sub_16cb950
   ref: NatDetectionJob::StepEnd
   ref: NatDetectionJob::StepSend
*/
void NatDetectionJob_StepEnd(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cbe70ULL || rel >= 0x16cbf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cbf30 size=96 callers=0 calls=1
   calls: sub_16cae20
   ref: NatDetectionJob::StepComplete
*/
void NatDetectionJob_StepComplete(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cbf30ULL || rel >= 0x16cbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cbf90 size=512 callers=0 calls=4
   calls: sub_165c600, sub_165c6b0, sub_16cb630, sub_16cb790
   ref: NatDetectionJob::StepEnd
   ref: NatDetectionJob::StepRetry
   ref: NatDetectionJob::StepWait
*/
void NatDetectionJob_StepEnd_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cbf90ULL || rel >= 0x16cc190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cc190 size=160 callers=0 calls=1
   calls: sub_165c600
   ref: NatDetectionJob::StepEnd
   ref: NatDetectionJob::StepSend
*/
void NatDetectionJob_StepEnd_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cc190ULL || rel >= 0x16cc230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cc230 size=192 callers=0 calls=1
   calls: sub_16cae20
   ref: NatDetectionJob::StepStart
   ref: NatDetectionJob::StepPreTest
   ref: NatDetectionJob::StepComplete
*/
void NatDetectionJob_StepStart_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cc230ULL || rel >= 0x16cc2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cc2f0 size=176 callers=4 calls=4
   calls: sub_1652d30, sub_1653860, sub_1749cf0, sub_1749da0
*/
void sub_16cc2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cc2f0ULL || rel >= 0x16cc3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cc3a0 size=176 callers=5 calls=4
   calls: sub_1652d30, sub_1653b50, sub_1749cf0, sub_1749da0
*/
void sub_16cc3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cc3a0ULL || rel >= 0x16cc450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cc450 size=352 callers=1 calls=5
   calls: sub_1652bd0, sub_16580b0, sub_16580c0, sub_16580f0, sub_17162d0
*/
void sub_16cc450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cc450ULL || rel >= 0x16cc5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cc5b0 size=176 callers=1 calls=4
   calls: sub_16580b0, sub_16580f0, sub_1716390, sub_17163e0
*/
void sub_16cc5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cc5b0ULL || rel >= 0x16cc660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cc660 size=176 callers=0 calls=4
   calls: sub_16580b0, sub_16580f0, sub_1716390, sub_17163e0
*/
void sub_16cc660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cc660ULL || rel >= 0x16cc710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cc710 size=1088 callers=2 calls=13
   calls: sub_1653b50, sub_16580c0, sub_16580f0, sub_1658120, sub_16581f0, sub_16cc2f0, sub_16cc3a0, sub_16ccb50, sub_1749820, sub_1749a80, sub_1749da0, sub_1749e40
   ... +1 more
*/
void sub_16cc710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cc710ULL || rel >= 0x16ccb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ccb50 size=352 callers=4 calls=6
   calls: sub_1652d30, sub_1653b50, sub_16580f0, sub_1658120, sub_1749cf0, sub_1749da0
*/
void sub_16ccb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ccb50ULL || rel >= 0x16cccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cccb0 size=128 callers=4 calls=1
   calls: sub_16cc3a0
*/
void sub_16cccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cccb0ULL || rel >= 0x16ccd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ccd30 size=128 callers=4 calls=1
   calls: sub_16cc2f0
*/
void sub_16ccd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ccd30ULL || rel >= 0x16ccdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ccdb0 size=128 callers=6 calls=1
   calls: sub_1749da0
*/
void sub_16ccdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ccdb0ULL || rel >= 0x16cce30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cce30 size=592 callers=1 calls=12
   calls: sub_16580f0, sub_1658120, sub_165c600, sub_165c6b0, sub_16cc3a0, sub_16cc710, sub_16ccb50, sub_16cd080, sub_16cd850, sub_16cd960, sub_17499e0, sub_1749da0
*/
void sub_16cce30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cce30ULL || rel >= 0x16cd080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cd080 size=288 callers=2 calls=4
   calls: sub_16580f0, sub_1658120, sub_16cc3a0, sub_1749da0
*/
void sub_16cd080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cd080ULL || rel >= 0x16cd1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cd1a0 size=464 callers=1 calls=10
   calls: sub_16580f0, sub_1658120, sub_165c600, sub_165c6b0, sub_16cc2f0, sub_16ccb50, sub_16cd080, sub_16cdb50, sub_16cdd10, sub_1749da0
*/
void sub_16cd1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cd1a0ULL || rel >= 0x16cd370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cd370 size=288 callers=1 calls=4
   calls: sub_16580f0, sub_1658120, sub_1749d90, sub_1749da0
*/
void sub_16cd370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cd370ULL || rel >= 0x16cd490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cd490 size=256 callers=1 calls=3
   calls: sub_16580f0, sub_1658120, sub_1749da0
*/
void sub_16cd490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cd490ULL || rel >= 0x16cd590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cd590 size=16 callers=1 calls=0
*/
void sub_16cd590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cd590ULL || rel >= 0x16cd5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cd5a0 size=336 callers=2 calls=5
   calls: sub_1652bd0, sub_16580b0, sub_16580c0, sub_16580f0, sub_17162d0
*/
void sub_16cd5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cd5a0ULL || rel >= 0x16cd6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cd6f0 size=176 callers=2 calls=4
   calls: sub_16580b0, sub_16580f0, sub_1716390, sub_17163e0
*/
void sub_16cd6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cd6f0ULL || rel >= 0x16cd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cd7a0 size=176 callers=0 calls=4
   calls: sub_16580b0, sub_16580f0, sub_1716390, sub_17163e0
*/
void sub_16cd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cd7a0ULL || rel >= 0x16cd850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cd850 size=272 callers=2 calls=5
   calls: sub_1652d30, sub_165c600, sub_165c6b0, sub_17498a0, sub_1749cf0
*/
void sub_16cd850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cd850ULL || rel >= 0x16cd960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cd960 size=496 callers=1 calls=11
   calls: sub_1652ca0, sub_1652d30, sub_1653b50, sub_165fd40, sub_1749cd0, sub_1749ce0, sub_1749cf0, sub_1749ef0, sub_1749f00, sub_1749f10, sub_1749fc0
*/
void sub_16cd960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cd960ULL || rel >= 0x16cdb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cdb50 size=448 callers=1 calls=12
   calls: sub_1652c70, sub_1652cf0, sub_1652d30, sub_165fd40, sub_1749cd0, sub_1749ce0, sub_1749cf0, sub_1749ee0, sub_1749ef0, sub_1749f00, sub_1749f10, sub_1749fc0
*/
void sub_16cdb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cdb50ULL || rel >= 0x16cdd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cdd10 size=64 callers=1 calls=1
   calls: sub_165c6b0
*/
void sub_16cdd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cdd10ULL || rel >= 0x16cdd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cdd50 size=64 callers=1 calls=0
*/
void sub_16cdd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cdd50ULL || rel >= 0x16cdd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cdd90 size=192 callers=1 calls=8
   calls: sub_1652c70, sub_1652cf0, sub_1652d30, sub_1749cd0, sub_1749ce0, sub_1749ef0, sub_1749f00, sub_1749f10
*/
void sub_16cdd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cdd90ULL || rel >= 0x16cde50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cde50 size=96 callers=1 calls=2
   calls: sub_1652d30, sub_1749cf0
*/
void sub_16cde50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cde50ULL || rel >= 0x16cdeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cdeb0 size=16 callers=1 calls=0
*/
void sub_16cdeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cdeb0ULL || rel >= 0x16cdec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cdec0 size=32 callers=0 calls=0
*/
void sub_16cdec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cdec0ULL || rel >= 0x16cdee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cdee0 size=64 callers=0 calls=1
   calls: sub_17499e0
*/
void sub_16cdee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cdee0ULL || rel >= 0x16cdf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cdf20 size=80 callers=1 calls=3
   calls: sub_1652c70, sub_16ca890, sub_1749820
*/
void sub_16cdf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cdf20ULL || rel >= 0x16cdf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cdf70 size=80 callers=0 calls=2
   calls: sub_1652d30, sub_17499e0
*/
void sub_16cdf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cdf70ULL || rel >= 0x16cdfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cdfc0 size=96 callers=0 calls=3
   calls: sub_1652d30, sub_16cac00, sub_17499e0
*/
void sub_16cdfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cdfc0ULL || rel >= 0x16ce020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce020 size=16 callers=0 calls=0
*/
void sub_16ce020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce020ULL || rel >= 0x16ce030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce030 size=432 callers=2 calls=9
   calls: NatDetectionJob_StepPreTest, sub_1652ca0, sub_1652cf0, sub_1652d30, sub_1653890, sub_16559c0, sub_165e060, sub_165e140, sub_1749a80
*/
void sub_16ce030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce030ULL || rel >= 0x16ce1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce1e0 size=16 callers=0 calls=0
*/
void sub_16ce1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce1e0ULL || rel >= 0x16ce1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce1f0 size=16 callers=0 calls=0
*/
void sub_16ce1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce1f0ULL || rel >= 0x16ce200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce200 size=48 callers=0 calls=1
   calls: sub_16cb490
*/
void sub_16ce200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce200ULL || rel >= 0x16ce230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce230 size=208 callers=0 calls=4
   calls: sub_1652ca0, sub_1652d30, sub_1653890, sub_16cb4f0
*/
void sub_16ce230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce230ULL || rel >= 0x16ce300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce300 size=16 callers=0 calls=0
*/
void sub_16ce300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce300ULL || rel >= 0x16ce310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce310 size=16 callers=0 calls=0
*/
void sub_16ce310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce310ULL || rel >= 0x16ce320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce320 size=224 callers=0 calls=5
   calls: sub_165e140, sub_16ca790, sub_16ca7a0, sub_16cb390, sub_16cb980
*/
void sub_16ce320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce320ULL || rel >= 0x16ce400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce400 size=240 callers=0 calls=9
   calls: sub_1652c70, sub_1652d30, sub_1653890, sub_165c600, sub_165c6b0, sub_16cb8c0, sub_16cb980, sub_16cb9a0, sub_1749f00
*/
void sub_16ce400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce400ULL || rel >= 0x16ce4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce4f0 size=16 callers=1 calls=0
*/
void sub_16ce4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce4f0ULL || rel >= 0x16ce500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce500 size=16 callers=1 calls=0
*/
void sub_16ce500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce500ULL || rel >= 0x16ce510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce510 size=64 callers=2 calls=2
   calls: sub_1652c70, sub_16ca890
*/
void sub_16ce510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce510ULL || rel >= 0x16ce550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce550 size=64 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_16ce550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce550ULL || rel >= 0x16ce590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce590 size=80 callers=0 calls=2
   calls: sub_1652d30, sub_16cac00
*/
void sub_16ce590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce590ULL || rel >= 0x16ce5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce5e0 size=16 callers=0 calls=0
*/
void sub_16ce5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce5e0ULL || rel >= 0x16ce5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce5f0 size=400 callers=1 calls=8
   calls: NatDetectionJob_StepPreTest, sub_1652ca0, sub_1652cf0, sub_1652d30, sub_1653890, sub_16559c0, sub_165e060, sub_165e140
*/
void sub_16ce5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce5f0ULL || rel >= 0x16ce780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce780 size=16 callers=0 calls=0
*/
void sub_16ce780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce780ULL || rel >= 0x16ce790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce790 size=48 callers=0 calls=1
   calls: sub_16cb5b0
*/
void sub_16ce790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce790ULL || rel >= 0x16ce7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce7c0 size=16 callers=0 calls=0
*/
void sub_16ce7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce7c0ULL || rel >= 0x16ce7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce7d0 size=48 callers=0 calls=1
   calls: sub_16cb490
*/
void sub_16ce7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce7d0ULL || rel >= 0x16ce800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce800 size=272 callers=0 calls=4
   calls: sub_1652ca0, sub_1652d30, sub_1653890, sub_16cb4f0
*/
void sub_16ce800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce800ULL || rel >= 0x16ce910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce910 size=48 callers=0 calls=0
*/
void sub_16ce910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce910ULL || rel >= 0x16ce940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce940 size=32 callers=0 calls=0
*/
void sub_16ce940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce940ULL || rel >= 0x16ce960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce960 size=96 callers=0 calls=1
   calls: sub_16cb990
*/
void sub_16ce960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce960ULL || rel >= 0x16ce9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ce9c0 size=304 callers=0 calls=4
   calls: sub_1652d50, sub_165c600, sub_165c6b0, sub_16cb9a0
*/
void sub_16ce9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ce9c0ULL || rel >= 0x16ceaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016ceaf0 size=256 callers=5 calls=6
   calls: sub_16580c0, sub_16581f0, sub_16cebf0, sub_1749820, sub_1749a80, sub_174a450
*/
void sub_16ceaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16ceaf0ULL || rel >= 0x16cebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cebf0 size=256 callers=10 calls=4
   calls: sub_1652d30, sub_1653b50, sub_1749cf0, sub_1749da0
*/
void sub_16cebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cebf0ULL || rel >= 0x16cecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cecf0 size=352 callers=2 calls=8
   calls: sub_1652d30, sub_1653b50, sub_16580f0, sub_1658120, sub_17499e0, sub_1749cf0, sub_1749da0, sub_174a450
*/
void sub_16cecf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cecf0ULL || rel >= 0x16cee50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cee50 size=448 callers=1 calls=8
   calls: sub_1655080, sub_16580b0, sub_16580f0, sub_16cc450, sub_16cd5a0, sub_16cf010, sub_173cf60, sub_1749820
*/
void sub_16cee50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cee50ULL || rel >= 0x16cf010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cf010 size=256 callers=1 calls=3
   calls: sub_16580b0, sub_16580c0, sub_16580f0
*/
void sub_16cf010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cf010ULL || rel >= 0x16cf110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cf110 size=576 callers=1 calls=7
   calls: sub_1655170, sub_16580b0, sub_16580f0, sub_1658120, sub_16cc5b0, sub_16cd6f0, sub_17499e0
*/
void sub_16cf110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cf110ULL || rel >= 0x16cf350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cf350 size=128 callers=0 calls=1
   calls: sub_16580f0
*/
void sub_16cf350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cf350ULL || rel >= 0x16cf3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cf3d0 size=48 callers=0 calls=1
   calls: sub_16cf110
*/
void sub_16cf3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cf3d0ULL || rel >= 0x16cf400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cf400 size=336 callers=0 calls=8
   calls: sub_1652ca0, sub_1652d30, sub_1653890, sub_165e060, sub_16ca670, sub_1749cd0, sub_1749f00, sub_174a450
*/
void sub_16cf400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cf400ULL || rel >= 0x16cf550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cf550 size=496 callers=1 calls=6
   calls: sub_1655110, sub_1655290, sub_16580f0, sub_1658120, sub_16ca680, sub_17499e0
*/
void sub_16cf550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cf550ULL || rel >= 0x16cf740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cf740 size=672 callers=0 calls=16
   calls: sub_165c600, sub_165c6b0, sub_165e060, sub_16c4110, sub_16cccb0, sub_16ccd30, sub_16cd590, sub_16cf9e0, sub_16d28f0, sub_16d29e0, sub_171e1e0, sub_17498a0
   ... +4 more
*/
void sub_16cf740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cf740ULL || rel >= 0x16cf9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cf9e0 size=1072 callers=2 calls=20
   calls: sub_1652d30, sub_1652d50, sub_16580c0, sub_16580f0, sub_16581f0, sub_165e060, sub_16ca3d0, sub_16cfe10, sub_16d29a0, sub_17498a0, sub_17499e0, sub_1749a80
   ... +8 more
*/
void sub_16cf9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cf9e0ULL || rel >= 0x16cfe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cfe10 size=416 callers=1 calls=9
   calls: sub_1655290, sub_165c600, sub_165c6b0, sub_16ca680, sub_16ccdb0, sub_16cd370, sub_16cd490, sub_16cffb0, sub_1749da0
*/
void sub_16cfe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cfe10ULL || rel >= 0x16cffb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016cffb0 size=304 callers=3 calls=3
   calls: sub_16580f0, sub_1658120, sub_1749da0
*/
void sub_16cffb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16cffb0ULL || rel >= 0x16d00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d00e0 size=320 callers=2 calls=11
   calls: sub_1653890, sub_165c600, sub_165c6b0, sub_16cc710, sub_16cd850, sub_16cdeb0, sub_17499e0, sub_1749dc0, sub_1749de0, sub_1749e40, sub_1749ef0
*/
void sub_16d00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d00e0ULL || rel >= 0x16d0220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d0220 size=240 callers=2 calls=9
   calls: sub_165c600, sub_16ceaf0, sub_16cebf0, sub_16cf9e0, sub_16d00e0, sub_16d2940, sub_1749820, sub_17499e0, sub_1749a80
*/
void sub_16d0220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d0220ULL || rel >= 0x16d0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d0310 size=192 callers=2 calls=6
   calls: sub_165c600, sub_165c6b0, sub_16cebf0, sub_16d00e0, sub_1749da0, sub_1749dc0
*/
void sub_16d0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d0310ULL || rel >= 0x16d03d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d03d0 size=416 callers=0 calls=9
   calls: sub_165c600, sub_165c6b0, sub_165e060, sub_16ca5c0, sub_16d0570, sub_16d07a0, sub_16d08f0, sub_173ab40, sub_173ab60
*/
void sub_16d03d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d03d0ULL || rel >= 0x16d0570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 016d0570 size=560 callers=1 calls=20
   calls: sub_1652ca0, sub_1652d30, sub_1653890, sub_1653930, sub_16cce30, sub_16cd1a0, sub_16cffb0, sub_16d18c0, sub_16d26c0, sub_16d2810, sub_1749820, sub_17499e0
   ... +8 more
*/
void sub_16d0570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x16d0570ULL || rel >= 0x16d07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

