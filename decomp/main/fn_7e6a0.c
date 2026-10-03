/* main functions 0007e6a0..000c9cc0 (4 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0007e6a0 size=208 callers=6 calls=0
*/
void sub_7e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6a0ULL || rel >= 0x7e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007e770 size=800 callers=6 calls=1
   calls: sub_5d140
*/
void sub_7e770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e770ULL || rel >= 0x7ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ea90 size=5296 callers=1 calls=1
   calls: sub_7e770
*/
void sub_7ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea90ULL || rel >= 0x7ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0007ff40 size=1664 callers=0 calls=0
*/
void sub_7ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ff40ULL || rel >= 0x805c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000805c0 size=5104 callers=0 calls=5
   calls: sub_7ea90, sub_819b0, sub_81ef0, sub_82110, sub_82500
*/
void sub_805c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x805c0ULL || rel >= 0x819b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000819b0 size=1312 callers=2 calls=0
*/
void sub_819b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x819b0ULL || rel >= 0x81ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081ed0 size=32 callers=1 calls=0
*/
void sub_81ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81ed0ULL || rel >= 0x81ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00081ef0 size=544 callers=4 calls=0
*/
void sub_81ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x81ef0ULL || rel >= 0x82110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082110 size=1008 callers=4 calls=0
*/
void sub_82110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82110ULL || rel >= 0x82500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082500 size=1520 callers=2 calls=0
*/
void sub_82500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82500ULL || rel >= 0x82af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082af0 size=16 callers=0 calls=0
*/
void sub_82af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82af0ULL || rel >= 0x82b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00082b00 size=5360 callers=0 calls=3
   calls: sub_81ef0, sub_82110, sub_84000
*/
void sub_82b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x82b00ULL || rel >= 0x83ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00083ff0 size=16 callers=0 calls=0
*/
void sub_83ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x83ff0ULL || rel >= 0x84000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084000 size=3440 callers=1 calls=5
   calls: sub_7e540, sub_7e600, sub_7e650, sub_7e6a0, sub_7e770
*/
void sub_84000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84000ULL || rel >= 0x84d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00084d70 size=1952 callers=0 calls=0
*/
void sub_84d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x84d70ULL || rel >= 0x85510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00085510 size=1280 callers=1 calls=0
*/
void sub_85510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85510ULL || rel >= 0x85a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00085a10 size=13328 callers=0 calls=5
   calls: sub_819b0, sub_81ef0, sub_82110, sub_82500, sub_85510
*/
void sub_85a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x85a10ULL || rel >= 0x88e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00088e20 size=928 callers=1 calls=0
*/
void sub_88e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x88e20ULL || rel >= 0x891c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000891c0 size=16 callers=0 calls=0
*/
void sub_891c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891c0ULL || rel >= 0x891d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000891d0 size=9456 callers=0 calls=3
   calls: sub_81ef0, sub_82110, sub_88e20
*/
void sub_891d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x891d0ULL || rel >= 0x8b6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008b6c0 size=16 callers=0 calls=0
*/
void sub_8b6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6c0ULL || rel >= 0x8b6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008b6d0 size=1040 callers=1 calls=1
   calls: sub_8bae0
*/
void sub_8b6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8b6d0ULL || rel >= 0x8bae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008bae0 size=2768 callers=1 calls=2
   calls: sub_7cab0, sub_8c5b0
*/
void sub_8bae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8bae0ULL || rel >= 0x8c5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008c5b0 size=448 callers=4 calls=0
*/
void sub_8c5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c5b0ULL || rel >= 0x8c770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008c770 size=10624 callers=1 calls=4
   calls: NonTrackedAlloc_183, PsArray_138, sub_301c30, sub_ed340
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelDyn
*/
void DyConstraintPartition(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8c770ULL || rel >= 0x8f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f0f0 size=96 callers=1 calls=0
*/
void sub_8f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f0f0ULL || rel >= 0x8f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f150 size=32 callers=1 calls=0
*/
void sub_8f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f150ULL || rel >= 0x8f170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f170 size=192 callers=0 calls=3
   calls: PtContextCpu_2, sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ContextCpu>::getName() [T = physx::
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
*/
void PtContextCpu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f170ULL || rel >= 0x8f230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f230 size=32 callers=0 calls=0
*/
void sub_8f230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f230ULL || rel >= 0x8f250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f250 size=160 callers=0 calls=2
   calls: CmPool_3, NonTrackedAlloc_71
*/
void sub_8f250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f250ULL || rel >= 0x8f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f2f0 size=144 callers=0 calls=2
   calls: sub_93470, sub_93660
*/
void sub_8f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f2f0ULL || rel >= 0x8f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f380 size=48 callers=0 calls=0
*/
void sub_8f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f380ULL || rel >= 0x8f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f3b0 size=48 callers=0 calls=0
*/
void sub_8f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3b0ULL || rel >= 0x8f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f3e0 size=48 callers=0 calls=0
*/
void sub_8f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f3e0ULL || rel >= 0x8f410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f410 size=992 callers=1 calls=10
   calls: Pt_Batcher_shapeGen, sub_2ff4a0, sub_2ff4b0, sub_2ff550, sub_300c80, sub_300cb0, sub_90660, sub_90770, sub_907c0, sub_90ea0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleSystemSimCpu>::getName() [T
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleShapeCpu>::getName() [T = p
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
   ref: ./../../Common/src\CmPool.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::Batcher>::getName() [T = physx::Pt:
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::BodyTransformVault>::getName() [T =
*/
void PtContextCpu_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f410ULL || rel >= 0x8f7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f7f0 size=336 callers=1 calls=7
   calls: sub_2ff4b0, sub_300c80, sub_8fc00, sub_90660, sub_90770, sub_907c0, sub_91000
*/
void sub_8f7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f7f0ULL || rel >= 0x8f940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f940 size=64 callers=0 calls=2
   calls: sub_300c80, sub_8f7f0
*/
void sub_8f940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f940ULL || rel >= 0x8f980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008f980 size=208 callers=1 calls=4
   calls: CmPool_4, PsSwitchMutex, sub_2ff4c0, sub_90d80
*/
void sub_8f980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8f980ULL || rel >= 0x8fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fa50 size=112 callers=1 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_8fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fa50ULL || rel >= 0x8fac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fac0 size=64 callers=0 calls=0
*/
void sub_8fac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fac0ULL || rel >= 0x8fb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fb00 size=64 callers=0 calls=0
*/
void sub_8fb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb00ULL || rel >= 0x8fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fb40 size=64 callers=0 calls=0
*/
void sub_8fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb40ULL || rel >= 0x8fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fb80 size=64 callers=0 calls=0
*/
void sub_8fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fb80ULL || rel >= 0x8fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fbc0 size=64 callers=0 calls=0
*/
void sub_8fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fbc0ULL || rel >= 0x8fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fc00 size=240 callers=23 calls=2
   calls: sub_2ff4b0, sub_300c80
*/
void sub_8fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fc00ULL || rel >= 0x8fcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fcf0 size=48 callers=0 calls=1
   calls: sub_8fc00
*/
void sub_8fcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fcf0ULL || rel >= 0x8fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fd20 size=96 callers=0 calls=2
   calls: sub_2ff460, sub_2ff480
*/
void sub_8fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fd20ULL || rel >= 0x8fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fd80 size=16 callers=0 calls=0
*/
void sub_8fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fd80ULL || rel >= 0x8fd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fd90 size=96 callers=0 calls=3
   calls: PsSwitchMutex, sub_2ff3c0, sub_2ff4c0
*/
void sub_8fd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fd90ULL || rel >= 0x8fdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008fdf0 size=272 callers=14 calls=5
   calls: PsArray_69, PsSwitchMutex, sub_2ff3c0, sub_2ff3e0, sub_2ff4c0
*/
void sub_8fdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8fdf0ULL || rel >= 0x8ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008ff00 size=16 callers=0 calls=0
*/
void sub_8ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ff00ULL || rel >= 0x8ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0008ff10 size=512 callers=0 calls=6
   calls: PsArray_70, PsArray_71, PsSwitchMutex, sub_2ff3e0, sub_2ff4c0, sub_300c80
*/
void sub_8ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8ff10ULL || rel >= 0x90110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090110 size=16 callers=0 calls=0
*/
void sub_90110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90110ULL || rel >= 0x90120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090120 size=464 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxBaseTask *>::getName() [T = physx::Px
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_69(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90120ULL || rel >= 0x902f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000902f0 size=416 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxBaseTask *>::getName() [T = physx::Px
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x902f0ULL || rel >= 0x90490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090490 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxBaseTask *>::getName() [T = physx::Px
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_71(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90490ULL || rel >= 0x90660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090660 size=272 callers=2 calls=1
   calls: sub_300c80
*/
void sub_90660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90660ULL || rel >= 0x90770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090770 size=80 callers=13 calls=1
   calls: sub_300c80
*/
void sub_90770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90770ULL || rel >= 0x907c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000907c0 size=272 callers=2 calls=1
   calls: sub_300c80
*/
void sub_907c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x907c0ULL || rel >= 0x908d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000908d0 size=464 callers=1 calls=4
   calls: NonTrackedAlloc_69, Pt_ParticleSystemSimCpu_dynamicsUpdate, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleSystemSimCpu>::getName() [T
   ref: <allocation names disabled>
   ref: ./../../Common/src\CmPool.h
*/
void CmPool_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x908d0ULL || rel >= 0x90aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090aa0 size=208 callers=73 calls=1
   calls: sub_300c80
   ref: ./../../Common/src/CmBitMap.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_69(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90aa0ULL || rel >= 0x90b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090b70 size=464 callers=1 calls=4
   calls: NonTrackedAlloc_69, sub_300c80, sub_300cb0, sub_90d40
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleShapeCpu>::getName() [T = p
   ref: <allocation names disabled>
   ref: ./../../Common/src\CmPool.h
*/
void CmPool_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90b70ULL || rel >= 0x90d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090d40 size=32 callers=1 calls=0
*/
void sub_90d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90d40ULL || rel >= 0x90d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090d60 size=16 callers=0 calls=0
*/
void sub_90d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90d60ULL || rel >= 0x90d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090d70 size=16 callers=0 calls=0
*/
void sub_90d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90d70ULL || rel >= 0x90d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090d80 size=128 callers=1 calls=0
*/
void sub_90d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90d80ULL || rel >= 0x90e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090e00 size=64 callers=0 calls=1
   calls: sub_8fa50
*/
void sub_90e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e00ULL || rel >= 0x90e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090e40 size=64 callers=0 calls=0
*/
void sub_90e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e40ULL || rel >= 0x90e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090e80 size=16 callers=0 calls=0
*/
void sub_90e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e80ULL || rel >= 0x90e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090e90 size=16 callers=0 calls=0
*/
void sub_90e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90e90ULL || rel >= 0x90ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090ea0 size=128 callers=1 calls=1
   calls: sub_90f20
*/
void sub_90ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90ea0ULL || rel >= 0x90f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00090f20 size=224 callers=1 calls=3
   calls: sub_300c80, sub_91710, sub_918f0
*/
void sub_90f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x90f20ULL || rel >= 0x91000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00091000 size=16 callers=1 calls=0
*/
void sub_91000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91000ULL || rel >= 0x91010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00091010 size=912 callers=1 calls=3
   calls: PsArray_73, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::BodyTransformVault::Body2World>::ge
*/
void PsPool_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91010ULL || rel >= 0x913a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000913a0 size=256 callers=1 calls=0
*/
void sub_913a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x913a0ULL || rel >= 0x914a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000914a0 size=192 callers=1 calls=0
*/
void sub_914a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x914a0ULL || rel >= 0x91560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00091560 size=160 callers=1 calls=0
*/
void sub_91560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91560ULL || rel >= 0x91600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00091600 size=112 callers=1 calls=0
*/
void sub_91600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91600ULL || rel >= 0x91670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00091670 size=160 callers=1 calls=0
*/
void sub_91670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91670ULL || rel >= 0x91710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00091710 size=480 callers=1 calls=3
   calls: PsArray_72, PsSortInternals_10, sub_300c80
*/
void sub_91710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91710ULL || rel >= 0x918f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000918f0 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_918f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x918f0ULL || rel >= 0x91950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00091950 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::BodyTransformVault::Body2World>::ge
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91950ULL || rel >= 0x91e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00091e90 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::BodyTransformVault::Body2World>::ge
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_72(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x91e90ULL || rel >= 0x92020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092020 size=464 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::BodyTransformVault::Body2World>::ge
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_73(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92020ULL || rel >= 0x921f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000921f0 size=16 callers=0 calls=0
*/
void sub_921f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x921f0ULL || rel >= 0x92200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092200 size=224 callers=0 calls=0
*/
void sub_92200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92200ULL || rel >= 0x922e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000922e0 size=48 callers=0 calls=0
*/
void sub_922e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x922e0ULL || rel >= 0x92310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092310 size=176 callers=1 calls=0
*/
void sub_92310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92310ULL || rel >= 0x923c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000923c0 size=32 callers=10 calls=0
*/
void sub_923c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923c0ULL || rel >= 0x923e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000923e0 size=128 callers=1 calls=0
*/
void sub_923e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x923e0ULL || rel >= 0x92460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092460 size=144 callers=1 calls=0
*/
void sub_92460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92460ULL || rel >= 0x924f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000924f0 size=352 callers=0 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
   ref: static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]
*/
void PtParticleSystemSimCpu(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x924f0ULL || rel >= 0x92650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092650 size=720 callers=1 calls=2
   calls: sub_300c80, sub_8f980
   ref: ./../../Common/src\CmBitMap.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92650ULL || rel >= 0x92920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092920 size=32 callers=0 calls=0
*/
void sub_92920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92920ULL || rel >= 0x92940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092940 size=16 callers=0 calls=0
*/
void sub_92940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92940ULL || rel >= 0x92950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092950 size=16 callers=0 calls=0
*/
void sub_92950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92950ULL || rel >= 0x92960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092960 size=16 callers=0 calls=0
*/
void sub_92960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92960ULL || rel >= 0x92970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092970 size=32 callers=0 calls=0
*/
void sub_92970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92970ULL || rel >= 0x92990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092990 size=272 callers=0 calls=0
*/
void sub_92990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92990ULL || rel >= 0x92aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092aa0 size=16 callers=0 calls=0
*/
void sub_92aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92aa0ULL || rel >= 0x92ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092ab0 size=432 callers=1 calls=3
   calls: Collision_mergeResults, Pt_Dynamics_mergeForce, sub_9e6f0
   ref: Pt::ParticleSystemSimCpu.collisionFinalization
   ref: Pt::ParticleSystemSimCpu.spatialHashUpdateSections
   ref: Pt::ParticleSystemSimCpu.packetShapesUpdate
   ref: Pt::ParticleSystemSimCpu.collisionUpdate
   ref: Pt::ParticleSystemSimCpu.packetShapesFinalization
   ref: Pt::ParticleSystemSimCpu.dynamicsUpdate
*/
void Pt_ParticleSystemSimCpu_dynamicsUpdate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92ab0ULL || rel >= 0x92c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092c60 size=32 callers=0 calls=0
*/
void sub_92c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c60ULL || rel >= 0x92c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092c80 size=128 callers=0 calls=1
   calls: sub_a7240
*/
void sub_92c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92c80ULL || rel >= 0x92d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092d00 size=128 callers=0 calls=2
   calls: sub_9e6f0, sub_a7240
*/
void sub_92d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92d00ULL || rel >= 0x92d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00092d80 size=1232 callers=1 calls=5
   calls: NonTrackedAlloc_72, sub_300c80, sub_300cb0, sub_93250, sub_961d0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
   ref: NonTrackedAlloc
   ref: static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]
*/
void NonTrackedAlloc_71(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x92d80ULL || rel >= 0x93250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093250 size=544 callers=1 calls=0
*/
void sub_93250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93250ULL || rel >= 0x93470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093470 size=496 callers=1 calls=4
   calls: sub_300c80, sub_93f50, sub_96a80, sub_9e710
*/
void sub_93470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93470ULL || rel >= 0x93660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093660 size=16 callers=1 calls=0
*/
void sub_93660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93660ULL || rel >= 0x93670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093670 size=176 callers=0 calls=0
*/
void sub_93670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93670ULL || rel >= 0x93720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093720 size=304 callers=0 calls=0
*/
void sub_93720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93720ULL || rel >= 0x93850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093850 size=144 callers=0 calls=0
*/
void sub_93850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93850ULL || rel >= 0x938e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000938e0 size=16 callers=0 calls=0
*/
void sub_938e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938e0ULL || rel >= 0x938f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000938f0 size=16 callers=0 calls=0
*/
void sub_938f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x938f0ULL || rel >= 0x93900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093900 size=16 callers=0 calls=0
*/
void sub_93900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93900ULL || rel >= 0x93910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093910 size=16 callers=0 calls=0
*/
void sub_93910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93910ULL || rel >= 0x93920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093920 size=32 callers=0 calls=0
*/
void sub_93920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93920ULL || rel >= 0x93940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093940 size=16 callers=0 calls=0
*/
void sub_93940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93940ULL || rel >= 0x93950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093950 size=32 callers=0 calls=0
*/
void sub_93950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93950ULL || rel >= 0x93970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093970 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_93970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93970ULL || rel >= 0x939c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000939c0 size=96 callers=0 calls=2
   calls: sub_2ff460, sub_2ff480
*/
void sub_939c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x939c0ULL || rel >= 0x93a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093a20 size=16 callers=0 calls=0
*/
void sub_93a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a20ULL || rel >= 0x93a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093a30 size=16 callers=0 calls=0
*/
void sub_93a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a30ULL || rel >= 0x93a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093a40 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_93a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a40ULL || rel >= 0x93a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093a90 size=16 callers=0 calls=0
*/
void sub_93a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93a90ULL || rel >= 0x93aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093aa0 size=80 callers=0 calls=2
   calls: NonTrackedAlloc_70, sub_300c80
*/
void sub_93aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93aa0ULL || rel >= 0x93af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093af0 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_93af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93af0ULL || rel >= 0x93b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093b40 size=16 callers=0 calls=0
*/
void sub_93b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93b40ULL || rel >= 0x93b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093b50 size=112 callers=0 calls=0
*/
void sub_93b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93b50ULL || rel >= 0x93bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093bc0 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_93bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93bc0ULL || rel >= 0x93c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093c10 size=16 callers=0 calls=0
*/
void sub_93c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c10ULL || rel >= 0x93c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093c20 size=288 callers=0 calls=1
   calls: sub_a7400
*/
void sub_93c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93c20ULL || rel >= 0x93d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093d40 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_93d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d40ULL || rel >= 0x93d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093d90 size=16 callers=0 calls=0
*/
void sub_93d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93d90ULL || rel >= 0x93da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093da0 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_93da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93da0ULL || rel >= 0x93df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093df0 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_93df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93df0ULL || rel >= 0x93e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093e40 size=16 callers=0 calls=0
*/
void sub_93e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e40ULL || rel >= 0x93e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093e50 size=32 callers=0 calls=0
*/
void sub_93e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e50ULL || rel >= 0x93e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093e70 size=224 callers=1 calls=1
   calls: sub_300c80
   ref: NonTrackedAlloc
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
*/
void NonTrackedAlloc_72(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93e70ULL || rel >= 0x93f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093f50 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_93f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93f50ULL || rel >= 0x93fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00093fb0 size=1088 callers=0 calls=2
   calls: sub_300c80, sub_943f0
   ref: NonTrackedAlloc
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
*/
void NonTrackedAlloc_73(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x93fb0ULL || rel >= 0x943f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000943f0 size=304 callers=1 calls=0
*/
void sub_943f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x943f0ULL || rel >= 0x94520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00094520 size=160 callers=0 calls=1
   calls: PtSpatialHash
*/
void sub_94520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94520ULL || rel >= 0x945c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000945c0 size=1392 callers=1 calls=2
   calls: NonTrackedAlloc_183, sub_301c30
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
*/
void PtSpatialHash(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x945c0ULL || rel >= 0x94b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00094b30 size=4160 callers=1 calls=0
*/
void sub_94b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x94b30ULL || rel >= 0x95b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00095b70 size=240 callers=1 calls=1
   calls: sub_300c80
*/
void sub_95b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95b70ULL || rel >= 0x95c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00095c60 size=704 callers=1 calls=2
   calls: NonTrackedAlloc_74, sub_300c80
*/
void sub_95c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95c60ULL || rel >= 0x95f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00095f20 size=240 callers=1 calls=1
   calls: sub_300c80
   ref: ./../../Common/src\CmBitMap.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_74(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x95f20ULL || rel >= 0x96010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096010 size=160 callers=1 calls=2
   calls: sub_300c80, sub_90770
*/
void sub_96010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96010ULL || rel >= 0x960b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000960b0 size=48 callers=0 calls=1
   calls: sub_96010
*/
void sub_960b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x960b0ULL || rel >= 0x960e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000960e0 size=240 callers=1 calls=0
*/
void sub_960e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x960e0ULL || rel >= 0x961d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000961d0 size=128 callers=1 calls=0
*/
void sub_961d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x961d0ULL || rel >= 0x96250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096250 size=1232 callers=1 calls=0
   ref: mOwnMemory
   ref: mWorldBounds
   ref: mParticleMap
   ref: mParticleBuffer
   ref: mMaxParticles
   ref: mHasRestOffsets
   ref: position
   ref: Pt::ParticleFlags
*/
void mValidParticleRange(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96250ULL || rel >= 0x96720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096720 size=256 callers=0 calls=0
*/
void sub_96720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96720ULL || rel >= 0x96820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096820 size=240 callers=1 calls=3
   calls: sub_300c80, sub_300cb0, sub_95c60
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleData>::getName() [T = physx
*/
void PtParticleData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96820ULL || rel >= 0x96910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096910 size=224 callers=1 calls=3
   calls: sub_300c80, sub_300cb0, sub_95b70
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleData>::getName() [T = physx
*/
void PtParticleData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96910ULL || rel >= 0x969f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000969f0 size=144 callers=1 calls=0
*/
void sub_969f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x969f0ULL || rel >= 0x96a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096a80 size=64 callers=3 calls=1
   calls: sub_300c80
*/
void sub_96a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96a80ULL || rel >= 0x96ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096ac0 size=464 callers=0 calls=0
*/
void sub_96ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ac0ULL || rel >= 0x96c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096c90 size=240 callers=0 calls=0
*/
void sub_96c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96c90ULL || rel >= 0x96d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096d80 size=320 callers=0 calls=0
*/
void sub_96d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96d80ULL || rel >= 0x96ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096ec0 size=16 callers=0 calls=0
*/
void sub_96ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ec0ULL || rel >= 0x96ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096ed0 size=160 callers=0 calls=0
*/
void sub_96ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96ed0ULL || rel >= 0x96f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00096f70 size=176 callers=0 calls=0
*/
void sub_96f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x96f70ULL || rel >= 0x97020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00097020 size=80 callers=0 calls=0
*/
void sub_97020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97020ULL || rel >= 0x97070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00097070 size=112 callers=0 calls=0
*/
void sub_97070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97070ULL || rel >= 0x970e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000970e0 size=336 callers=0 calls=0
*/
void sub_970e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x970e0ULL || rel >= 0x97230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00097230 size=64 callers=0 calls=0
*/
void sub_97230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97230ULL || rel >= 0x97270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00097270 size=16 callers=0 calls=0
*/
void sub_97270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97270ULL || rel >= 0x97280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00097280 size=12304 callers=1 calls=1
   calls: sub_a5670
*/
void sub_97280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x97280ULL || rel >= 0x9a290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009a290 size=17408 callers=3 calls=2
   calls: sub_a5670, sub_a5c50
*/
void sub_9a290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9a290ULL || rel >= 0x9e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009e690 size=96 callers=1 calls=0
   ref: Pt::Dynamics.mergeDensity
   ref: Pt::Dynamics.mergeForce
*/
void Pt_Dynamics_mergeForce(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9e690ULL || rel >= 0x9e6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009e6f0 size=32 callers=2 calls=0
*/
void sub_9e6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9e6f0ULL || rel >= 0x9e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009e710 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_9e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9e710ULL || rel >= 0x9e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009e760 size=992 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
   ref: NonTrackedAlloc
   ref: static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]
*/
void NonTrackedAlloc_75(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9e760ULL || rel >= 0x9eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009eb40 size=1632 callers=0 calls=4
   calls: NonTrackedAlloc_75, sub_300c80, sub_300cb0, sub_9f1a0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
   ref: static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]
*/
void PtDynamics(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9eb40ULL || rel >= 0x9f1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009f1a0 size=256 callers=2 calls=3
   calls: NonTrackedAlloc_76, PsSwitchMutex, sub_2ff4c0
*/
void sub_9f1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f1a0ULL || rel >= 0x9f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009f2a0 size=272 callers=0 calls=1
   calls: sub_300c80
*/
void sub_9f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f2a0ULL || rel >= 0x9f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0009f3b0 size=14736 callers=1 calls=3
   calls: sub_a2d40, sub_a5670, sub_a5c50
*/
void sub_9f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x9f3b0ULL || rel >= 0xa2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a2d40 size=10544 callers=1 calls=4
   calls: sub_97280, sub_9a290, sub_a5c50, sub_a66f0
*/
void sub_a2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa2d40ULL || rel >= 0xa5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a5670 size=1504 callers=9 calls=0
*/
void sub_a5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5670ULL || rel >= 0xa5c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a5c50 size=1792 callers=11 calls=0
*/
void sub_a5c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa5c50ULL || rel >= 0xa6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a6350 size=304 callers=55 calls=2
   calls: PsArray_2, sub_300c80
   ref: NonTrackedAlloc
   ref: ./../../Common/src\CmFlushPool.h
*/
void NonTrackedAlloc_76(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6350ULL || rel >= 0xa6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a6480 size=32 callers=0 calls=0
*/
void sub_a6480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6480ULL || rel >= 0xa64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a64a0 size=16 callers=0 calls=0
   ref: Pt::Dynamics.sph
*/
void Pt_Dynamics(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64a0ULL || rel >= 0xa64b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a64b0 size=240 callers=0 calls=2
   calls: sub_94b30, sub_9f3b0
*/
void sub_a64b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa64b0ULL || rel >= 0xa65a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a65a0 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_a65a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa65a0ULL || rel >= 0xa65f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a65f0 size=16 callers=0 calls=0
*/
void sub_a65f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa65f0ULL || rel >= 0xa6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a6600 size=64 callers=0 calls=1
   calls: sub_9f1a0
*/
void sub_a6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6600ULL || rel >= 0xa6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a6640 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_a6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6640ULL || rel >= 0xa6690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a6690 size=16 callers=0 calls=0
*/
void sub_a6690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6690ULL || rel >= 0xa66a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a66a0 size=16 callers=0 calls=0
*/
void sub_a66a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa66a0ULL || rel >= 0xa66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a66b0 size=64 callers=0 calls=0
*/
void sub_a66b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa66b0ULL || rel >= 0xa66f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a66f0 size=2224 callers=7 calls=0
*/
void sub_a66f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa66f0ULL || rel >= 0xa6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a6fa0 size=576 callers=2 calls=0
*/
void sub_a6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa6fa0ULL || rel >= 0xa71e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a71e0 size=96 callers=1 calls=0
   ref: Collision.mergeResults
*/
void Collision_mergeResults(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa71e0ULL || rel >= 0xa7240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7240 size=448 callers=2 calls=1
   calls: sub_300c80
*/
void sub_a7240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7240ULL || rel >= 0xa7400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7400 size=496 callers=1 calls=3
   calls: NonTrackedAlloc_76, PsSwitchMutex, sub_2ff4c0
*/
void sub_a7400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7400ULL || rel >= 0xa75f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a75f0 size=560 callers=0 calls=0
*/
void sub_a75f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa75f0ULL || rel >= 0xa7820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a7820 size=2480 callers=0 calls=2
   calls: NonTrackedAlloc_77, PsArray_74
*/
void sub_a7820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa7820ULL || rel >= 0xa81d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a81d0 size=5280 callers=1 calls=5
   calls: NonTrackedAlloc_183, PtCollision, sub_300c80, sub_301c30, sub_a6fa0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_77(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa81d0ULL || rel >= 0xa9670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9670 size=720 callers=0 calls=0
*/
void sub_a9670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9670ULL || rel >= 0xa9940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000a9940 size=4576 callers=3 calls=11
   calls: NonTrackedAlloc_183, sub_301c30, sub_a66f0, sub_aad60, sub_ab8c0, sub_ac140, sub_ac2e0, sub_ac5c0, sub_ade40, sub_ae720, sub_af6b0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelPar
*/
void PtCollision(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xa9940ULL || rel >= 0xaab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aab20 size=32 callers=0 calls=0
*/
void sub_aab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab20ULL || rel >= 0xaab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aab40 size=16 callers=0 calls=0
   ref: Collision.fluidCollision
*/
void Collision_fluidCollision(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab40ULL || rel >= 0xaab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aab50 size=32 callers=0 calls=0
*/
void sub_aab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab50ULL || rel >= 0xaab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aab70 size=384 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::W2STransformTemp>::getName() [T = p
*/
void PsArray_74(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaab70ULL || rel >= 0xaacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aacf0 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_aacf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaacf0ULL || rel >= 0xaad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aad40 size=16 callers=0 calls=0
*/
void sub_aad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaad40ULL || rel >= 0xaad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aad50 size=16 callers=0 calls=0
*/
void sub_aad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaad50ULL || rel >= 0xaad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000aad60 size=912 callers=1 calls=2
   calls: sub_ab0f0, sub_ab3d0
*/
void sub_aad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaad60ULL || rel >= 0xab0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ab0f0 size=736 callers=1 calls=0
*/
void sub_ab0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab0f0ULL || rel >= 0xab3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ab3d0 size=1264 callers=2 calls=0
*/
void sub_ab3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab3d0ULL || rel >= 0xab8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ab8c0 size=2176 callers=1 calls=1
   calls: sub_ab3d0
*/
void sub_ab8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xab8c0ULL || rel >= 0xac140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ac140 size=416 callers=1 calls=0
*/
void sub_ac140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac140ULL || rel >= 0xac2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ac2e0 size=736 callers=1 calls=0
*/
void sub_ac2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac2e0ULL || rel >= 0xac5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ac5c0 size=1328 callers=1 calls=1
   calls: sub_acaf0
*/
void sub_ac5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xac5c0ULL || rel >= 0xacaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acaf0 size=752 callers=2 calls=0
*/
void sub_acaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacaf0ULL || rel >= 0xacde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000acde0 size=672 callers=3 calls=2
   calls: sub_13b900, sub_b0c90
*/
void sub_acde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xacde0ULL || rel >= 0xad080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ad080 size=3520 callers=2 calls=0
*/
void sub_ad080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xad080ULL || rel >= 0xade40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ade40 size=1584 callers=1 calls=3
   calls: sub_acde0, sub_ae470, sub_b0ee0
*/
void sub_ade40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xade40ULL || rel >= 0xae470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ae470 size=688 callers=10 calls=0
*/
void sub_ae470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae470ULL || rel >= 0xae720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ae720 size=3984 callers=1 calls=3
   calls: sub_acde0, sub_ad080, sub_b0ee0
*/
void sub_ae720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xae720ULL || rel >= 0xaf6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000af6b0 size=4000 callers=1 calls=4
   calls: sub_b0650, sub_b0880, sub_b09b0, sub_b1350
*/
void sub_af6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xaf6b0ULL || rel >= 0xb0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b0650 size=560 callers=1 calls=0
*/
void sub_b0650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0650ULL || rel >= 0xb0880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b0880 size=304 callers=1 calls=1
   calls: sub_b09b0
*/
void sub_b0880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0880ULL || rel >= 0xb09b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b09b0 size=736 callers=2 calls=0
*/
void sub_b09b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb09b0ULL || rel >= 0xb0c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b0c90 size=592 callers=7 calls=0
*/
void sub_b0c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0c90ULL || rel >= 0xb0ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b0ee0 size=832 callers=29 calls=0
*/
void sub_b0ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb0ee0ULL || rel >= 0xb1220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1220 size=272 callers=0 calls=1
   calls: sub_ad080
*/
void sub_b1220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1220ULL || rel >= 0xb1330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1330 size=16 callers=0 calls=0
*/
void sub_b1330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1330ULL || rel >= 0xb1340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1340 size=16 callers=0 calls=0
*/
void sub_b1340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1340ULL || rel >= 0xb1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1350 size=480 callers=1 calls=0
*/
void sub_b1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1350ULL || rel >= 0xb1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1530 size=192 callers=1 calls=2
   calls: PsMutex_4, sub_8fc00
   ref: Pt::Batcher::collPrep
   ref: Pt::Batcher::collisionCpu
   ref: Pt::Batcher::dynamicsCpu
   ref: Pt::Batcher::shapeGen
*/
void Pt_Batcher_shapeGen(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1530ULL || rel >= 0xb15f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b15f0 size=384 callers=9 calls=4
   calls: sub_2ff4a0, sub_2ff550, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = phys
*/
void PsMutex_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb15f0ULL || rel >= 0xb1770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1770 size=192 callers=0 calls=3
   calls: sub_8fdf0, sub_92310, sub_b1830
*/
void sub_b1770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1770ULL || rel >= 0xb1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1830 size=192 callers=12 calls=4
   calls: PsArray_69, PsSwitchMutex, sub_2ff3c0, sub_2ff4c0
*/
void sub_b1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1830ULL || rel >= 0xb18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b18f0 size=192 callers=0 calls=3
   calls: sub_8fdf0, sub_923e0, sub_b1830
*/
void sub_b18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb18f0ULL || rel >= 0xb19b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b19b0 size=224 callers=0 calls=2
   calls: sub_8fdf0, sub_b1830
*/
void sub_b19b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb19b0ULL || rel >= 0xb1a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1a90 size=192 callers=0 calls=3
   calls: sub_8fdf0, sub_92460, sub_b1830
*/
void sub_b1a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1a90ULL || rel >= 0xb1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1b50 size=48 callers=0 calls=0
*/
void sub_b1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1b50ULL || rel >= 0xb1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1b80 size=864 callers=1 calls=9
   calls: NonTrackedAlloc_78, NonTrackedAlloc_81, sub_2d9480, sub_2d94b0, sub_2ff4a0, sub_2ff4b0, sub_2ff550, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = phys
*/
void PsMutex_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1b80ULL || rel >= 0xb1ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1ee0 size=176 callers=1 calls=1
   calls: sub_300c80
   ref: NonTrackedAlloc
   ref: ./../../PhysX/src/NpMaterialManager.h
*/
void NonTrackedAlloc_78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1ee0ULL || rel >= 0xb1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1f90 size=80 callers=7 calls=2
   calls: sub_2ff4b0, sub_300c80
*/
void sub_b1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1f90ULL || rel >= 0xb1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b1fe0 size=112 callers=1 calls=1
   calls: sub_300c80
*/
void sub_b1fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb1fe0ULL || rel >= 0xb2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2050 size=16 callers=0 calls=0
*/
void sub_b2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2050ULL || rel >= 0xb2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2060 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_b2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2060ULL || rel >= 0xb20b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b20b0 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_b20b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb20b0ULL || rel >= 0xb2100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2100 size=1040 callers=1 calls=8
   calls: sub_2d94b0, sub_2ff4b0, sub_300c80, sub_b1f90, sub_b1fe0, sub_b2060, sub_b20b0, sub_b2510
*/
void sub_b2100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2100ULL || rel >= 0xb2510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2510 size=224 callers=1 calls=2
   calls: PsArray_75, sub_300c80
*/
void sub_b2510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2510ULL || rel >= 0xb25f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b25f0 size=64 callers=0 calls=2
   calls: sub_300c80, sub_b2100
*/
void sub_b25f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb25f0ULL || rel >= 0xb2630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2630 size=656 callers=0 calls=8
   calls: NpFactory_2, PsFoundation, PsMutex_5, SDK_MW_NVIDIA_PhysX_3_4_2_release, sub_19cd70, sub_300c80, sub_300cb0, sub_301990
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPhysics>::getName() [T = physx::NpPhy
   ref: Scale invalid.
   ref: Wrong version: PhysX version is 0x%08x, tried to create 0x%08x
*/
void NpPhysics(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2630ULL || rel >= 0xb28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b28c0 size=96 callers=0 calls=1
   calls: sub_b76d0
*/
void sub_b28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb28c0ULL || rel >= 0xb2920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2920 size=528 callers=0 calls=10
   calls: PsArray_76, PsSwitchMutex, PsSync, sub_2ff4c0, sub_3007d0, sub_3007e0, sub_300c80, sub_300cb0, sub_f6e50, sub_fc740
   ref: Unable to create scene.
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpScene>::getName() [T = physx::NpScene
   ref: <allocation names disabled>
   ref: Unable to create scene. Task manager creation failed.
*/
void NpPhysics_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2920ULL || rel >= 0xb2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2b30 size=128 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b2b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2b30ULL || rel >= 0xb2bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2bb0 size=64 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b2bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2bb0ULL || rel >= 0xb2bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2bf0 size=256 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b2bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2bf0ULL || rel >= 0xb2cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2cf0 size=176 callers=0 calls=1
   calls: PsPool_15
*/
void sub_b2cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2cf0ULL || rel >= 0xb2da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2da0 size=80 callers=0 calls=1
   calls: PsPool_14
*/
void sub_b2da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2da0ULL || rel >= 0xb2df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2df0 size=16 callers=0 calls=0
*/
void sub_b2df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2df0ULL || rel >= 0xb2e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2e00 size=16 callers=0 calls=0
*/
void sub_b2e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e00ULL || rel >= 0xb2e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2e10 size=176 callers=0 calls=1
   calls: PsPool_16
*/
void sub_b2e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2e10ULL || rel >= 0xb2ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2ec0 size=16 callers=0 calls=0
*/
void sub_b2ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ec0ULL || rel >= 0xb2ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2ed0 size=16 callers=0 calls=0
*/
void sub_b2ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ed0ULL || rel >= 0xb2ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2ee0 size=32 callers=0 calls=0
*/
void sub_b2ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2ee0ULL || rel >= 0xb2f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2f00 size=32 callers=0 calls=0
*/
void sub_b2f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f00ULL || rel >= 0xb2f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2f20 size=32 callers=0 calls=0
*/
void sub_b2f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f20ULL || rel >= 0xb2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b2f40 size=224 callers=0 calls=1
   calls: NpFactory_7
*/
void sub_b2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb2f40ULL || rel >= 0xb3020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3020 size=480 callers=1 calls=4
   calls: PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_fc740
   ref: NonTrackedAlloc
   ref: ./../../PhysX/src/NpMaterialManager.h
*/
void NonTrackedAlloc_79(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3020ULL || rel >= 0xb3200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3200 size=64 callers=0 calls=1
   calls: sub_b9650
*/
void sub_b3200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3200ULL || rel >= 0xb3240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3240 size=80 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b3240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3240ULL || rel >= 0xb3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3290 size=224 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3290ULL || rel >= 0xb3370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3370 size=240 callers=4 calls=4
   calls: PsArray_75, PsSwitchMutex, sub_2ff4c0, sub_fc760
*/
void sub_b3370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3370ULL || rel >= 0xb3460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3460 size=144 callers=0 calls=3
   calls: PsSwitchMutex, sub_2ff4c0, sub_fc750
*/
void sub_b3460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3460ULL || rel >= 0xb34f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b34f0 size=16 callers=0 calls=0
*/
void sub_b34f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb34f0ULL || rel >= 0xb3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3500 size=16 callers=0 calls=0
*/
void sub_b3500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3500ULL || rel >= 0xb3510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3510 size=16 callers=0 calls=0
*/
void sub_b3510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3510ULL || rel >= 0xb3520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3520 size=16 callers=0 calls=0
*/
void sub_b3520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3520ULL || rel >= 0xb3530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3530 size=16 callers=0 calls=0
*/
void sub_b3530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3530ULL || rel >= 0xb3540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3540 size=16 callers=0 calls=0
*/
void sub_b3540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3540ULL || rel >= 0xb3550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3550 size=16 callers=0 calls=0
*/
void sub_b3550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3550ULL || rel >= 0xb3560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3560 size=16 callers=0 calls=0
*/
void sub_b3560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3560ULL || rel >= 0xb3570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3570 size=16 callers=0 calls=0
*/
void sub_b3570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3570ULL || rel >= 0xb3580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3580 size=16 callers=0 calls=0
*/
void sub_b3580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3580ULL || rel >= 0xb3590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3590 size=16 callers=0 calls=0
*/
void sub_b3590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3590ULL || rel >= 0xb35a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b35a0 size=16 callers=0 calls=0
*/
void sub_b35a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb35a0ULL || rel >= 0xb35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b35b0 size=16 callers=0 calls=0
*/
void sub_b35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb35b0ULL || rel >= 0xb35c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b35c0 size=128 callers=0 calls=4
   calls: PsSwitchMutex, sub_2dc4f0, sub_2ff4c0, sub_b7c10
*/
void sub_b35c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb35c0ULL || rel >= 0xb3640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3640 size=240 callers=0 calls=4
   calls: NonTrackedAlloc_124, sub_295f50, sub_300c80, sub_300cb0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::PruningStructure>::getName() [T = p
*/
void NpPhysics_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3640ULL || rel >= 0xb3730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3730 size=576 callers=0 calls=6
   calls: NonTrackedAlloc_80, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0, sub_b4940
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPhysics::NpDelListenerEntry>::getName
*/
void NpPhysics_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3730ULL || rel >= 0xb3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3970 size=384 callers=0 calls=4
   calls: PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_b4ac0
*/
void sub_b3970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3970ULL || rel >= 0xb3af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3af0 size=368 callers=0 calls=4
   calls: NonTrackedAlloc_80, PsSwitchMutex, sub_2ff4c0, sub_b4c20
*/
void sub_b3af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3af0ULL || rel >= 0xb3c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3c60 size=448 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b3c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3c60ULL || rel >= 0xb3e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3e20 size=384 callers=10 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b3e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3e20ULL || rel >= 0xb3fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3fa0 size=16 callers=0 calls=0
*/
void sub_b3fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3fa0ULL || rel >= 0xb3fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3fb0 size=32 callers=0 calls=1
   calls: sub_3007d0
*/
void sub_b3fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3fb0ULL || rel >= 0xb3fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3fd0 size=16 callers=1 calls=0
*/
void sub_b3fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3fd0ULL || rel >= 0xb3fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b3fe0 size=32 callers=1 calls=1
   calls: sub_59790
*/
void sub_b3fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb3fe0ULL || rel >= 0xb4000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4000 size=32 callers=1 calls=1
   calls: sub_10a90
*/
void sub_b4000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4000ULL || rel >= 0xb4020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4020 size=16 callers=1 calls=0
*/
void sub_b4020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4020ULL || rel >= 0xb4030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4030 size=32 callers=1 calls=1
   calls: sub_8f0f0
*/
void sub_b4030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4030ULL || rel >= 0xb4050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4050 size=32 callers=1 calls=0
*/
void sub_b4050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4050ULL || rel >= 0xb4070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4070 size=16 callers=0 calls=0
*/
void sub_b4070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4070ULL || rel >= 0xb4080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4080 size=176 callers=0 calls=5
   calls: GuMeshFactory_4, sub_19b290, sub_19c4f0, sub_3007d0, sub_3007e0
   ref: Inserting object failed: Object type not supported for buildObjectFromData.
   ref: ./../../PhysX/src/NpPhysicsInsertionCallback.h
*/
void NpPhysicsInsertionCallback(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4080ULL || rel >= 0xb4130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4130 size=16 callers=0 calls=0
*/
void sub_b4130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4130ULL || rel >= 0xb4140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4140 size=16 callers=0 calls=0
*/
void sub_b4140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4140ULL || rel >= 0xb4150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4150 size=32 callers=0 calls=0
*/
void sub_b4150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4150ULL || rel >= 0xb4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4170 size=16 callers=0 calls=0
*/
void sub_b4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4170ULL || rel >= 0xb4180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4180 size=416 callers=64 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]
*/
void PsArray_75(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4180ULL || rel >= 0xb4320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4320 size=752 callers=3 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4320ULL || rel >= 0xb4610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4610 size=416 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_81(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4610ULL || rel >= 0xb47b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b47b0 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpScene *>::getName() [T = physx::NpSce
   ref: <allocation names disabled>
*/
void PsArray_76(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb47b0ULL || rel >= 0xb4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4940 size=384 callers=1 calls=1
   calls: NonTrackedAlloc_81
*/
void sub_b4940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4940ULL || rel >= 0xb4ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4ac0 size=352 callers=1 calls=0
*/
void sub_b4ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4ac0ULL || rel >= 0xb4c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4c20 size=400 callers=1 calls=1
   calls: NonTrackedAlloc_80
*/
void sub_b4c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4c20ULL || rel >= 0xb4db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4db0 size=16 callers=1 calls=0
   ref: SDK MW+NVIDIA+PhysX-3_4_2-release
*/
void SDK_MW_NVIDIA_PhysX_3_4_2_release(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4db0ULL || rel >= 0xb4dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b4dc0 size=3920 callers=1 calls=27
   calls: NonTrackedAlloc_83, NonTrackedAlloc_84, NonTrackedAlloc_85, NonTrackedAlloc_86, NonTrackedAlloc_87, PsMutex_6, PsMutex_8, sub_19ade0, sub_2ff4a0, sub_2ff4b0, sub_2ff550, sub_300c80
   ... +15 more
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager>::getName() [T
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = phys
*/
void NpFactory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb4dc0ULL || rel >= 0xb5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b5d10 size=272 callers=1 calls=4
   calls: sub_2ff4a0, sub_2ff550, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = phys
*/
void PsMutex_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5d10ULL || rel >= 0xb5e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b5e20 size=224 callers=2 calls=3
   calls: sub_300c80, sub_bd780, sub_bd980
*/
void sub_b5e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5e20ULL || rel >= 0xb5f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b5f00 size=224 callers=2 calls=3
   calls: sub_300c80, sub_be0b0, sub_be2c0
*/
void sub_b5f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5f00ULL || rel >= 0xb5fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b5fe0 size=224 callers=2 calls=3
   calls: sub_300c80, sub_be9f0, sub_bebf0
*/
void sub_b5fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb5fe0ULL || rel >= 0xb60c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b60c0 size=224 callers=2 calls=3
   calls: sub_300c80, sub_bf320, sub_bf520
*/
void sub_b60c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb60c0ULL || rel >= 0xb61a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b61a0 size=224 callers=2 calls=3
   calls: sub_300c80, sub_bfc50, sub_bfe60
*/
void sub_b61a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb61a0ULL || rel >= 0xb6280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b6280 size=224 callers=2 calls=3
   calls: sub_300c80, sub_c0590, sub_c07a0
*/
void sub_b6280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6280ULL || rel >= 0xb6360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b6360 size=224 callers=2 calls=3
   calls: sub_300c80, sub_c0ed0, sub_c10e0
*/
void sub_b6360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6360ULL || rel >= 0xb6440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b6440 size=224 callers=2 calls=3
   calls: sub_300c80, sub_c1810, sub_c1a10
*/
void sub_b6440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6440ULL || rel >= 0xb6520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b6520 size=224 callers=2 calls=3
   calls: sub_300c80, sub_c2140, sub_c2350
*/
void sub_b6520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6520ULL || rel >= 0xb6600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b6600 size=224 callers=2 calls=3
   calls: sub_300c80, sub_c2a80, sub_c2c80
*/
void sub_b6600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6600ULL || rel >= 0xb66e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b66e0 size=224 callers=2 calls=3
   calls: sub_300c80, sub_c33b0, sub_c35b0
*/
void sub_b66e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb66e0ULL || rel >= 0xb67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b67c0 size=224 callers=2 calls=3
   calls: sub_300c80, sub_c3ce0, sub_c3ef0
*/
void sub_b67c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb67c0ULL || rel >= 0xb68a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b68a0 size=224 callers=3 calls=3
   calls: sub_300c80, sub_c4620, sub_c4820
*/
void sub_b68a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb68a0ULL || rel >= 0xb6980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b6980 size=224 callers=2 calls=3
   calls: sub_300c80, sub_c4f50, sub_c5190
*/
void sub_b6980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6980ULL || rel >= 0xb6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b6a60 size=1264 callers=1 calls=16
   calls: sub_2ff4b0, sub_300c80, sub_b5e20, sub_b5f00, sub_b5fe0, sub_b60c0, sub_b61a0, sub_b6280, sub_b6360, sub_b6440, sub_b6520, sub_b6600
   ... +4 more
*/
void sub_b6a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6a60ULL || rel >= 0xb6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b6f50 size=64 callers=0 calls=2
   calls: sub_300c80, sub_b6a60
*/
void sub_b6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f50ULL || rel >= 0xb6f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b6f90 size=1680 callers=1 calls=11
   calls: PsArray_100, PsArray_101, PsArray_102, PsArray_103, PsArray_104, PsArray_97, PsArray_98, PsArray_99, sub_1054d0, sub_19afb0, sub_300c80
*/
void sub_b6f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb6f90ULL || rel >= 0xb7620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7620 size=176 callers=1 calls=3
   calls: NpFactory, sub_300c80, sub_300cb0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpFactory>::getName() [T = physx::NpFac
*/
void NpFactory_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7620ULL || rel >= 0xb76d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b76d0 size=48 callers=1 calls=1
   calls: sub_b6f90
*/
void sub_b76d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb76d0ULL || rel >= 0xb7700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7700 size=32 callers=0 calls=0
*/
void sub_b7700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7700ULL || rel >= 0xb7720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7720 size=32 callers=0 calls=0
*/
void sub_b7720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7720ULL || rel >= 0xb7740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7740 size=32 callers=0 calls=0
*/
void sub_b7740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7740ULL || rel >= 0xb7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7760 size=384 callers=1 calls=6
   calls: PsArray_105, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0, sub_e7700
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpParticleSystem>::getName() [T = physx
*/
void PsPool_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7760ULL || rel >= 0xb78e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b78e0 size=384 callers=1 calls=6
   calls: PsArray_106, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0, sub_e58b0
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpParticleFluid>::getName() [T = physx:
*/
void PsPool_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb78e0ULL || rel >= 0xb7a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7a60 size=224 callers=0 calls=6
   calls: PsPool_4, PsSwitchMutex, sub_2ff4c0, sub_3007d0, sub_3007e0, sub_c71d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: Particle fluid creation failed. Use PxRegisterParticles to register particle module: returned NULL.
   ref: Particle fluid initialization failed: returned NULL.
*/
void NpFactory_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7a60ULL || rel >= 0xb7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7b40 size=208 callers=0 calls=6
   calls: PsPool_3, PsSwitchMutex, sub_2ff4c0, sub_3007d0, sub_3007e0, sub_c71d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: Particle system creation failed. Use PxRegisterParticles to register particle module: returned NULL.
   ref: Particle system initialization failed: returned NULL.
*/
void NpFactory_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7b40ULL || rel >= 0xb7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7c10 size=64 callers=1 calls=0
*/
void sub_b7c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c10ULL || rel >= 0xb7c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7c50 size=80 callers=0 calls=1
   calls: PsPool_5
*/
void sub_b7c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7c50ULL || rel >= 0xb7ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7ca0 size=112 callers=0 calls=3
   calls: PsPool_6, sub_2ff3e0, sub_e5730
*/
void sub_b7ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7ca0ULL || rel >= 0xb7d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7d10 size=112 callers=0 calls=3
   calls: PsPool_6, sub_2ff3e0, sub_e5740
*/
void sub_b7d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d10ULL || rel >= 0xb7d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7d80 size=416 callers=2 calls=6
   calls: PsArray_107, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0, sub_e9040
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpCloth>::getName() [T = physx::NpCloth
*/
void PsPool_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7d80ULL || rel >= 0xb7f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b7f20 size=368 callers=4 calls=6
   calls: PsArray_108, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0, sub_e5460
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpClothFabric>::getName() [T = physx::N
*/
void PsPool_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb7f20ULL || rel >= 0xb8090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8090 size=96 callers=2 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b8090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8090ULL || rel >= 0xb80f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b80f0 size=400 callers=2 calls=4
   calls: PsArray_109, PsArray_110, PsSwitchMutex, sub_2ff4c0
*/
void sub_b80f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb80f0ULL || rel >= 0xb8280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8280 size=192 callers=0 calls=6
   calls: PsPool_6, sub_2ff3e0, sub_3007d0, sub_3007e0, sub_b80f0, sub_e5730
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: Cloth not registered: returned NULL.
*/
void NpFactory_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8280ULL || rel >= 0xb8340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8340 size=192 callers=0 calls=6
   calls: PsPool_6, sub_2ff3e0, sub_3007d0, sub_3007e0, sub_b80f0, sub_e5740
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: Cloth not registered: returned NULL.
*/
void NpFactory_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8340ULL || rel >= 0xb8400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8400 size=128 callers=2 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b8400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8400ULL || rel >= 0xb8480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8480 size=16 callers=0 calls=0
*/
void sub_b8480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8480ULL || rel >= 0xb8490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8490 size=128 callers=0 calls=0
*/
void sub_b8490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8490ULL || rel >= 0xb8510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8510 size=224 callers=1 calls=6
   calls: PsPool_5, PsSwitchMutex, sub_2ff4c0, sub_3007d0, sub_3007e0, sub_c71d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: Cloth not registered: returned NULL.
   ref: Cloth initialization failed: returned NULL.
*/
void NpFactory_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8510ULL || rel >= 0xb85f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b85f0 size=240 callers=0 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b85f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb85f0ULL || rel >= 0xb86e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b86e0 size=96 callers=2 calls=3
   calls: PsSwitchMutex, sub_2ff4c0, sub_c7f00
*/
void sub_b86e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb86e0ULL || rel >= 0xb8740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8740 size=32 callers=0 calls=0
*/
void sub_b8740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8740ULL || rel >= 0xb8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8760 size=112 callers=0 calls=3
   calls: PsPool_7, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: Articulation initialization failed: returned NULL.
*/
void NpFactory_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8760ULL || rel >= 0xb87d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b87d0 size=576 callers=1 calls=4
   calls: PsPool_8, PsPool_9, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: Articulation link initialization failed due to joint creation failure: returned NULL.
   ref: Articulation link initialization failed: returned NULL.
*/
void NpFactory_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb87d0ULL || rel >= 0xb8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8a10 size=368 callers=2 calls=6
   calls: PsArray_111, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0, sub_d8700
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulation>::getName() [T = physx::
*/
void PsPool_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8a10ULL || rel >= 0xb8b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8b80 size=208 callers=0 calls=6
   calls: PsPool_7, PsSwitchMutex, sub_2ff4c0, sub_3007d0, sub_3007e0, sub_c8060
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: Articulation initialization failed: returned NULL.
   ref: Articulations not registered: returned NULL.
*/
void NpFactory_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8b80ULL || rel >= 0xb8c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8c50 size=240 callers=1 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b8c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8c50ULL || rel >= 0xb8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8d40 size=400 callers=1 calls=6
   calls: PsArray_112, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0, sub_da240
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulationLink>::getName() [T = phy
*/
void PsPool_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8d40ULL || rel >= 0xb8ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8ed0 size=96 callers=1 calls=3
   calls: NpFactory_9, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: Articulations not registered: returned NULL.
*/
void NpFactory_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8ed0ULL || rel >= 0xb8f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b8f30 size=416 callers=1 calls=6
   calls: PsArray_113, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0, sub_e2350
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulationJoint>::getName() [T = ph
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
*/
void PsPool_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb8f30ULL || rel >= 0xb90d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b90d0 size=480 callers=0 calls=7
   calls: PsArray_114, PsSwitchMutex, PxConstraint_Add_to_rigid_actor_1_Constraint_already_add_2, sub_2ff4c0, sub_300c80, sub_300cb0, sub_c8760
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpConstraint>::getName() [T = physx::Np
*/
void PsPool_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb90d0ULL || rel >= 0xb92b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b92b0 size=240 callers=2 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b92b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb92b0ULL || rel >= 0xb93a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b93a0 size=448 callers=0 calls=7
   calls: NonTrackedAlloc_88, PsArray_115, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0, sub_c8ac0
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpAggregate>::getName() [T = physx::NpA
*/
void PsPool_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb93a0ULL || rel >= 0xb9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9560 size=240 callers=2 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9560ULL || rel >= 0xb9650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9650 size=128 callers=1 calls=3
   calls: PsPool_12, PsSwitchMutex, sub_2ff4c0
*/
void sub_b9650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9650ULL || rel >= 0xb96d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b96d0 size=384 callers=1 calls=6
   calls: PsArray_116, sub_2c6df0, sub_2c6e20, sub_300c80, sub_300cb0, sub_c98d0
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpMaterial>::getName() [T = physx::NpMa
*/
void PsPool_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb96d0ULL || rel >= 0xb9850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9850 size=96 callers=2 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_b9850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9850ULL || rel >= 0xb98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b98b0 size=368 callers=3 calls=5
   calls: PsArray_117, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpConnectorArray>::getName() [T = physx
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
*/
void PsPool_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb98b0ULL || rel >= 0xb9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9a20 size=160 callers=4 calls=3
   calls: PsSwitchMutex, sub_2ff4c0, sub_300c80
*/
void sub_b9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9a20ULL || rel >= 0xb9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9ac0 size=960 callers=1 calls=10
   calls: PsArray_119, PsSwitchMutex, sub_104c20, sub_2f8a60, sub_2ff3c0, sub_2ff4c0, sub_300c80, sub_300cb0, sub_b9e80, sub_c7360
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpShape>::getName() [T = physx::NpShape
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
*/
void PsPool_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9ac0ULL || rel >= 0xb9e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9e80 size=224 callers=1 calls=1
   calls: PsArray_118
*/
void sub_b9e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9e80ULL || rel >= 0xb9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9f60 size=16 callers=0 calls=0
*/
void sub_b9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f60ULL || rel >= 0xb9f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000b9f70 size=144 callers=0 calls=0
*/
void sub_b9f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xb9f70ULL || rel >= 0xba000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ba000 size=432 callers=1 calls=7
   calls: PsArray_120, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0, sub_c71d0, sub_f32f0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpRigidStatic>::getName() [T = physx::N
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
*/
void PsPool_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba000ULL || rel >= 0xba1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ba1b0 size=432 callers=1 calls=7
   calls: PsArray_121, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0, sub_c71d0, sub_edac0
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpRigidDynamic>::getName() [T = physx::
*/
void PsPool_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba1b0ULL || rel >= 0xba360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ba360 size=960 callers=0 calls=12
   calls: PsArray_109, PsArray_110, PsSwitchMutex, sub_19b040, sub_19c440, sub_19c8e0, sub_2ff4c0, sub_c71d0, sub_c7360, sub_c8060, sub_c8760, sub_c8ac0
*/
void sub_ba360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba360ULL || rel >= 0xba720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ba720 size=1216 callers=1 calls=2
   calls: PsSwitchMutex, sub_2ff4c0
*/
void sub_ba720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xba720ULL || rel >= 0xbabe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000babe0 size=224 callers=2 calls=3
   calls: sub_300c80, sub_bb3c0, sub_bb660
*/
void sub_babe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbabe0ULL || rel >= 0xbacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bacc0 size=224 callers=2 calls=3
   calls: sub_300c80, sub_bbd90, sub_bc030
*/
void sub_bacc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbacc0ULL || rel >= 0xbada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bada0 size=976 callers=0 calls=7
   calls: PsArray_79, PsArray_80, PsArray_81, PsSwitchMutex, sub_2ff4c0, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsPool.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<16> 
   ref: <allocation names disabled>
   ref: ./../../PhysX/src/NpPtrTableStorageManager.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<64> 
   ref: NonTrackedAlloc
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<4> >
*/
void NonTrackedAlloc_82(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbada0ULL || rel >= 0xbb170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb170 size=240 callers=0 calls=3
   calls: PsSwitchMutex, sub_2ff4c0, sub_300c80
*/
void sub_bb170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb170ULL || rel >= 0xbb260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb260 size=96 callers=0 calls=0
*/
void sub_bb260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb260ULL || rel >= 0xbb2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb2c0 size=112 callers=0 calls=5
   calls: sub_2ff4b0, sub_300c80, sub_babe0, sub_bacc0, sub_bccd0
*/
void sub_bb2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb2c0ULL || rel >= 0xbb330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb330 size=144 callers=0 calls=5
   calls: sub_2ff4b0, sub_300c80, sub_babe0, sub_bacc0, sub_bccd0
*/
void sub_bb330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb330ULL || rel >= 0xbb3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb3c0 size=672 callers=1 calls=3
   calls: PsArray_77, PsSortInternals_11, sub_300c80
*/
void sub_bb3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb3c0ULL || rel >= 0xbb660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb660 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_bb660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb660ULL || rel >= 0xbb6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bb6c0 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<16> 
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbb6c0ULL || rel >= 0xbbc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bbc00 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<16> 
   ref: <allocation names disabled>
*/
void PsArray_77(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbc00ULL || rel >= 0xbbd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bbd90 size=672 callers=1 calls=3
   calls: PsArray_78, PsSortInternals_12, sub_300c80
*/
void sub_bbd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbbd90ULL || rel >= 0xbc030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bc030 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_bc030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc030ULL || rel >= 0xbc090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bc090 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<4> >
*/
void PsSortInternals_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc090ULL || rel >= 0xbc5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bc5d0 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<4> >
*/
void PsArray_78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc5d0ULL || rel >= 0xbc760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bc760 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<4> >
*/
void PsArray_79(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc760ULL || rel >= 0xbc930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bc930 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<16> 
   ref: <allocation names disabled>
*/
void PsArray_80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbc930ULL || rel >= 0xbcb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bcb00 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<64> 
*/
void PsArray_81(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcb00ULL || rel >= 0xbccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bccd0 size=224 callers=2 calls=3
   calls: sub_300c80, sub_bcdb0, sub_bd050
*/
void sub_bccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbccd0ULL || rel >= 0xbcdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bcdb0 size=672 callers=1 calls=3
   calls: PsArray_82, PsSortInternals_13, sub_300c80
*/
void sub_bcdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbcdb0ULL || rel >= 0xbd050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bd050 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_bd050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd050ULL || rel >= 0xbd0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bd0b0 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<64> 
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd0b0ULL || rel >= 0xbd5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bd5f0 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpPtrTableStorageManager::PtrBlock<64> 
*/
void PsArray_82(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd5f0ULL || rel >= 0xbd780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bd780 size=512 callers=1 calls=3
   calls: PsArray_83, PsSortInternals_14, sub_300c80
*/
void sub_bd780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd780ULL || rel >= 0xbd980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bd980 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_bd980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd980ULL || rel >= 0xbd9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bd9e0 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpClothFabric>::getName() [T = physx::N
*/
void PsSortInternals_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbd9e0ULL || rel >= 0xbdf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bdf20 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpClothFabric>::getName() [T = physx::N
*/
void PsArray_83(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbdf20ULL || rel >= 0xbe0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000be0b0 size=528 callers=1 calls=3
   calls: PsArray_84, PsSortInternals_15, sub_300c80
*/
void sub_be0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe0b0ULL || rel >= 0xbe2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000be2c0 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_be2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe2c0ULL || rel >= 0xbe320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000be320 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpCloth>::getName() [T = physx::NpCloth
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe320ULL || rel >= 0xbe860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000be860 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpCloth>::getName() [T = physx::NpCloth
*/
void PsArray_84(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe860ULL || rel >= 0xbe9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000be9f0 size=512 callers=1 calls=3
   calls: PsArray_85, PsSortInternals_16, sub_300c80
*/
void sub_be9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbe9f0ULL || rel >= 0xbebf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bebf0 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_bebf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbebf0ULL || rel >= 0xbec50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bec50 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpParticleFluid>::getName() [T = physx:
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbec50ULL || rel >= 0xbf190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bf190 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpParticleFluid>::getName() [T = physx:
*/
void PsArray_85(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf190ULL || rel >= 0xbf320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bf320 size=512 callers=1 calls=3
   calls: PsArray_86, PsSortInternals_17, sub_300c80
*/
void sub_bf320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf320ULL || rel >= 0xbf520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bf520 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_bf520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf520ULL || rel >= 0xbf580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bf580 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpParticleSystem>::getName() [T = physx
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbf580ULL || rel >= 0xbfac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bfac0 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpParticleSystem>::getName() [T = physx
*/
void PsArray_86(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfac0ULL || rel >= 0xbfc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bfc50 size=528 callers=1 calls=3
   calls: PsArray_87, PsSortInternals_18, sub_300c80
*/
void sub_bfc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfc50ULL || rel >= 0xbfe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bfe60 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_bfe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfe60ULL || rel >= 0xbfec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000bfec0 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulationJoint>::getName() [T = ph
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xbfec0ULL || rel >= 0xc0400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0400 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulationJoint>::getName() [T = ph
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_87(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0400ULL || rel >= 0xc0590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0590 size=528 callers=1 calls=3
   calls: PsArray_88, PsSortInternals_19, sub_300c80
*/
void sub_c0590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0590ULL || rel >= 0xc07a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c07a0 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_c07a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc07a0ULL || rel >= 0xc0800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0800 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulationLink>::getName() [T = phy
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0800ULL || rel >= 0xc0d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0d40 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulationLink>::getName() [T = phy
*/
void PsArray_88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0d40ULL || rel >= 0xc0ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c0ed0 size=528 callers=1 calls=3
   calls: PsArray_89, PsSortInternals_20, sub_300c80
*/
void sub_c0ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc0ed0ULL || rel >= 0xc10e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c10e0 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_c10e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc10e0ULL || rel >= 0xc1140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c1140 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulation>::getName() [T = physx::
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1140ULL || rel >= 0xc1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c1680 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulation>::getName() [T = physx::
*/
void PsArray_89(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1680ULL || rel >= 0xc1810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c1810 size=512 callers=1 calls=3
   calls: PsArray_90, PsSortInternals_21, sub_300c80
*/
void sub_c1810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1810ULL || rel >= 0xc1a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c1a10 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_c1a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1a10ULL || rel >= 0xc1a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c1a70 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpMaterial>::getName() [T = physx::NpMa
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1a70ULL || rel >= 0xc1fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c1fb0 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpMaterial>::getName() [T = physx::NpMa
*/
void PsArray_90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc1fb0ULL || rel >= 0xc2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c2140 size=528 callers=1 calls=3
   calls: PsArray_91, PsSortInternals_22, sub_300c80
*/
void sub_c2140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2140ULL || rel >= 0xc2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c2350 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_c2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2350ULL || rel >= 0xc23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c23b0 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpConstraint>::getName() [T = physx::Np
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc23b0ULL || rel >= 0xc28f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c28f0 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpConstraint>::getName() [T = physx::Np
*/
void PsArray_91(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc28f0ULL || rel >= 0xc2a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c2a80 size=512 callers=1 calls=3
   calls: PsArray_92, PsSortInternals_23, sub_300c80
*/
void sub_c2a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2a80ULL || rel >= 0xc2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c2c80 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_c2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2c80ULL || rel >= 0xc2ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c2ce0 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpAggregate>::getName() [T = physx::NpA
*/
void PsSortInternals_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc2ce0ULL || rel >= 0xc3220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c3220 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpAggregate>::getName() [T = physx::NpA
*/
void PsArray_92(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3220ULL || rel >= 0xc33b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c33b0 size=512 callers=1 calls=3
   calls: PsArray_93, PsSortInternals_24, sub_300c80
*/
void sub_c33b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc33b0ULL || rel >= 0xc35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c35b0 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_c35b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc35b0ULL || rel >= 0xc3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c3610 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpShape>::getName() [T = physx::NpShape
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3610ULL || rel >= 0xc3b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c3b50 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpShape>::getName() [T = physx::NpShape
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_93(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3b50ULL || rel >= 0xc3ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c3ce0 size=528 callers=1 calls=3
   calls: PsArray_94, PsSortInternals_25, sub_300c80
*/
void sub_c3ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ce0ULL || rel >= 0xc3ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c3ef0 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_c3ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3ef0ULL || rel >= 0xc3f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c3f50 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpRigidStatic>::getName() [T = physx::N
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc3f50ULL || rel >= 0xc4490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c4490 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpRigidStatic>::getName() [T = physx::N
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_94(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4490ULL || rel >= 0xc4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c4620 size=512 callers=1 calls=3
   calls: PsArray_95, PsSortInternals_26, sub_300c80
*/
void sub_c4620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4620ULL || rel >= 0xc4820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c4820 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_c4820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4820ULL || rel >= 0xc4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c4880 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpRigidDynamic>::getName() [T = physx::
*/
void PsSortInternals_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4880ULL || rel >= 0xc4dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c4dc0 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpRigidDynamic>::getName() [T = physx::
*/
void PsArray_95(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4dc0ULL || rel >= 0xc4f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c4f50 size=576 callers=1 calls=3
   calls: PsArray_96, PsSortInternals_27, sub_300c80
*/
void sub_c4f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc4f50ULL || rel >= 0xc5190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c5190 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_c5190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5190ULL || rel >= 0xc51f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c51f0 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpConnectorArray>::getName() [T = physx
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc51f0ULL || rel >= 0xc5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c5730 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpConnectorArray>::getName() [T = physx
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_96(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5730ULL || rel >= 0xc58c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c58c0 size=752 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_83(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc58c0ULL || rel >= 0xc5bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c5bb0 size=752 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_84(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5bb0ULL || rel >= 0xc5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c5ea0 size=752 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_85(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc5ea0ULL || rel >= 0xc6190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6190 size=752 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_86(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6190ULL || rel >= 0xc6480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6480 size=400 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_87(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6480ULL || rel >= 0xc6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6610 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxAggregate *>::getName() [T = physx::P
   ref: <allocation names disabled>
*/
void PsArray_97(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6610ULL || rel >= 0xc6770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6770 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxAggregate *>::getName() [T = physx::P
   ref: <allocation names disabled>
*/
void PsArray_98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6770ULL || rel >= 0xc6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6900 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxConstraint *>::getName() [T = physx::
*/
void PsArray_99(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6900ULL || rel >= 0xc6a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6a60 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxConstraint *>::getName() [T = physx::
*/
void PsArray_100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6a60ULL || rel >= 0xc6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6bf0 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxArticulation *>::getName() [T = physx
*/
void PsArray_101(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6bf0ULL || rel >= 0xc6d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6d50 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxArticulation *>::getName() [T = physx
*/
void PsArray_102(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6d50ULL || rel >= 0xc6ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c6ee0 size=352 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxActor *>::getName() [T = physx::PxAct
*/
void PsArray_103(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc6ee0ULL || rel >= 0xc7040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7040 size=400 callers=7 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxActor *>::getName() [T = physx::PxAct
*/
void PsArray_104(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7040ULL || rel >= 0xc71d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c71d0 size=400 callers=12 calls=1
   calls: NonTrackedAlloc_86
*/
void sub_c71d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc71d0ULL || rel >= 0xc7360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7360 size=368 callers=2 calls=1
   calls: NonTrackedAlloc_87
*/
void sub_c7360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7360ULL || rel >= 0xc74d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c74d0 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpParticleSystem>::getName() [T = physx
*/
void PsArray_105(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc74d0ULL || rel >= 0xc76a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c76a0 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpParticleFluid>::getName() [T = physx:
*/
void PsArray_106(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc76a0ULL || rel >= 0xc7870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7870 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpCloth>::getName() [T = physx::NpCloth
*/
void PsArray_107(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7870ULL || rel >= 0xc7a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7a40 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpClothFabric>::getName() [T = physx::N
*/
void PsArray_108(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7a40ULL || rel >= 0xc7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7c10 size=352 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpClothFabric *>::getName() [T = physx:
*/
void PsArray_109(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7c10ULL || rel >= 0xc7d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7d70 size=400 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpClothFabric *>::getName() [T = physx:
*/
void PsArray_110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7d70ULL || rel >= 0xc7f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c7f00 size=352 callers=1 calls=0
*/
void sub_c7f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc7f00ULL || rel >= 0xc8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8060 size=400 callers=2 calls=1
   calls: NonTrackedAlloc_84
*/
void sub_c8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8060ULL || rel >= 0xc81f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c81f0 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulation>::getName() [T = physx::
*/
void PsArray_111(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc81f0ULL || rel >= 0xc83c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c83c0 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulationLink>::getName() [T = phy
*/
void PsArray_112(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc83c0ULL || rel >= 0xc8590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8590 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulationJoint>::getName() [T = ph
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_113(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8590ULL || rel >= 0xc8760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8760 size=400 callers=2 calls=1
   calls: NonTrackedAlloc_85
*/
void sub_c8760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8760ULL || rel >= 0xc88f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c88f0 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpConstraint>::getName() [T = physx::Np
*/
void PsArray_114(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc88f0ULL || rel >= 0xc8ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8ac0 size=400 callers=2 calls=1
   calls: NonTrackedAlloc_83
*/
void sub_c8ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ac0ULL || rel >= 0xc8c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8c50 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpAggregate>::getName() [T = physx::NpA
*/
void PsArray_115(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8c50ULL || rel >= 0xc8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8e20 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpMaterial>::getName() [T = physx::NpMa
*/
void PsArray_116(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8e20ULL || rel >= 0xc8ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c8ff0 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpConnectorArray>::getName() [T = physx
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_117(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc8ff0ULL || rel >= 0xc91c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c91c0 size=416 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned short>::getName() [T = unsigned short
*/
void PsArray_118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc91c0ULL || rel >= 0xc9360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9360 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpShape>::getName() [T = physx::NpShape
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_119(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9360ULL || rel >= 0xc9530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9530 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpRigidStatic>::getName() [T = physx::N
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9530ULL || rel >= 0xc9700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9700 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpRigidDynamic>::getName() [T = physx::
*/
void PsArray_121(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9700ULL || rel >= 0xc98d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c98d0 size=112 callers=1 calls=0
*/
void sub_c98d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc98d0ULL || rel >= 0xc9940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9940 size=96 callers=0 calls=2
   calls: sub_2c6e20, sub_b3370
*/
void sub_c9940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9940ULL || rel >= 0xc99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c99a0 size=96 callers=0 calls=2
   calls: sub_2c6e20, sub_b3370
*/
void sub_c99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc99a0ULL || rel >= 0xc9a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9a00 size=128 callers=0 calls=3
   calls: sub_2c6e20, sub_300c80, sub_b3370
*/
void sub_c9a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9a00ULL || rel >= 0xc9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9a80 size=128 callers=0 calls=3
   calls: sub_2c6e20, sub_300c80, sub_b3370
*/
void sub_c9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9a80ULL || rel >= 0xc9b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9b00 size=32 callers=0 calls=0
*/
void sub_c9b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9b00ULL || rel >= 0xc9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9b20 size=112 callers=0 calls=1
   calls: sub_b9850
*/
void sub_c9b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9b20ULL || rel >= 0xc9b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9b90 size=112 callers=0 calls=1
   calls: sub_b9850
*/
void sub_c9b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9b90ULL || rel >= 0xc9c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9c00 size=112 callers=0 calls=1
   calls: NonTrackedAlloc_79
*/
void sub_c9c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9c00ULL || rel >= 0xc9c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9c70 size=64 callers=0 calls=1
   calls: sub_2ff3e0
*/
void sub_c9c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9c70ULL || rel >= 0xc9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9cb0 size=16 callers=0 calls=0
*/
void sub_c9cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9cb0ULL || rel >= 0xc9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9cc0 size=16 callers=0 calls=0
*/
void sub_c9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9cc0ULL || rel >= 0xc9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

