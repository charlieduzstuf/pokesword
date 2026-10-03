/* main functions 000c9cd0..000e6950 (5 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 000c9cd0 size=32 callers=0 calls=0
*/
void sub_c9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9cd0ULL || rel >= 0xc9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9cf0 size=16 callers=0 calls=0
*/
void sub_c9cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9cf0ULL || rel >= 0xc9d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9d00 size=32 callers=0 calls=0
*/
void sub_c9d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9d00ULL || rel >= 0xc9d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9d20 size=16 callers=0 calls=0
*/
void sub_c9d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9d20ULL || rel >= 0xc9d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9d30 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxMaterial::setRestitution: Invalid value %f was clamped to [0,1]!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpMaterial(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9d30ULL || rel >= 0xc9db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9db0 size=16 callers=0 calls=0
*/
void sub_c9db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9db0ULL || rel >= 0xc9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9dc0 size=64 callers=0 calls=0
*/
void sub_c9dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9dc0ULL || rel >= 0xc9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9e00 size=32 callers=0 calls=0
*/
void sub_c9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9e00ULL || rel >= 0xc9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9e20 size=16 callers=0 calls=0
*/
void sub_c9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9e20ULL || rel >= 0xc9e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9e30 size=48 callers=0 calls=0
*/
void sub_c9e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9e30ULL || rel >= 0xc9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9e60 size=16 callers=0 calls=0
*/
void sub_c9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9e60ULL || rel >= 0xc9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9e70 size=48 callers=0 calls=0
*/
void sub_c9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9e70ULL || rel >= 0xc9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9ea0 size=16 callers=0 calls=0
*/
void sub_c9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ea0ULL || rel >= 0xc9eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9eb0 size=16 callers=0 calls=0
   ref: PxMaterial
*/
void PxMaterial(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9eb0ULL || rel >= 0xc9ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9ec0 size=16 callers=0 calls=0
*/
void sub_c9ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ec0ULL || rel >= 0xc9ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9ed0 size=96 callers=0 calls=0
   ref: PxBase
   ref: PxMaterial
*/
void PxMaterial_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ed0ULL || rel >= 0xc9f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9f30 size=16 callers=0 calls=0
*/
void sub_c9f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f30ULL || rel >= 0xc9f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9f40 size=176 callers=1 calls=1
   calls: sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9f40ULL || rel >= 0xc9ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000c9ff0 size=112 callers=0 calls=2
   calls: sub_300c80, sub_b9560
*/
void sub_c9ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xc9ff0ULL || rel >= 0xca060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca060 size=144 callers=0 calls=2
   calls: sub_300c80, sub_b9560
*/
void sub_ca060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca060ULL || rel >= 0xca0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca0f0 size=304 callers=0 calls=7
   calls: NpActor_setAggregate_failed, sub_b3e20, sub_cad60, sub_caec0, sub_cc870, sub_ce990, sub_e4ff0
*/
void sub_ca0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca0f0ULL || rel >= 0xca220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca220 size=272 callers=2 calls=1
   calls: sub_e4e50
*/
void sub_ca220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca220ULL || rel >= 0xca330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca330 size=368 callers=0 calls=5
   calls: NpActor_setAggregate_failed, sub_3007d0, sub_3007e0, sub_ca220, sub_cc870
   ref: PxAggregate: can't add actor to aggregate, actor already belongs to an aggregate
   ref: PxAggregate: can't add articulation link to aggregate, only whole articulations can be added
   ref: PxAggregate: can't add actor to aggregate, max number of actors reached
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxAggregate: can't add actor to aggregate, actor already belongs to a scene
*/
void NpAggregate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca330ULL || rel >= 0xca4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca4a0 size=224 callers=2 calls=4
   calls: NpActor_setAggregate_failed, sub_3007d0, sub_3007e0, sub_e4ff0
   ref: PxAggregate: can't remove actor, actor doesn't belong to aggregate
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpAggregate_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca4a0ULL || rel >= 0xca580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca580 size=256 callers=0 calls=4
   calls: NpActor_setAggregate_failed, sub_3007d0, sub_3007e0, sub_e4ff0
   ref: PxAggregate: can't remove actor, actor doesn't belong to aggregate
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxAggregate: can't remove articulation link, only whole articulations can be removed
*/
void NpAggregate_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca580ULL || rel >= 0xca680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca680 size=400 callers=0 calls=6
   calls: NpActor_setAggregate_failed, NpScene_10, sub_3007d0, sub_3007e0, sub_cc870, sub_e4e50
   ref: PxAggregate: can't add articulation links, max number of actors reached
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxAggregate: can't add articulation to aggregate, articulation already belongs to an aggregate
   ref: PxAggregate: can't add articulation to aggregate, articulation already belongs to a scene
*/
void NpAggregate_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca680ULL || rel >= 0xca810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca810 size=304 callers=1 calls=4
   calls: NpActor_setAggregate_failed, sub_3007d0, sub_3007e0, sub_e4ff0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxAggregate: can't remove articulation, articulation doesn't belong to aggregate
*/
void NpAggregate_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca810ULL || rel >= 0xca940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca940 size=16 callers=0 calls=0
*/
void sub_ca940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca940ULL || rel >= 0xca950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca950 size=16 callers=0 calls=0
*/
void sub_ca950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca950ULL || rel >= 0xca960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca960 size=16 callers=0 calls=0
*/
void sub_ca960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca960ULL || rel >= 0xca970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ca970 size=192 callers=0 calls=0
*/
void sub_ca970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xca970ULL || rel >= 0xcaa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000caa30 size=64 callers=0 calls=1
   calls: sub_cc870
*/
void sub_caa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaa30ULL || rel >= 0xcaa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000caa70 size=16 callers=0 calls=0
*/
void sub_caa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaa70ULL || rel >= 0xcaa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000caa80 size=96 callers=0 calls=0
*/
void sub_caa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaa80ULL || rel >= 0xcaae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000caae0 size=240 callers=1 calls=2
   calls: NpActor_setAggregate_failed, sub_e1610
*/
void sub_caae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaae0ULL || rel >= 0xcabd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cabd0 size=144 callers=0 calls=1
   calls: sub_caae0
*/
void sub_cabd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcabd0ULL || rel >= 0xcac60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cac60 size=144 callers=0 calls=0
*/
void sub_cac60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcac60ULL || rel >= 0xcacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cacf0 size=16 callers=0 calls=0
   ref: PxAggregate
*/
void PxAggregate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcacf0ULL || rel >= 0xcad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cad00 size=96 callers=0 calls=0
   ref: PxBase
   ref: PxAggregate
*/
void PxAggregate_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcad00ULL || rel >= 0xcad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cad60 size=352 callers=2 calls=0
*/
void sub_cad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcad60ULL || rel >= 0xcaec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000caec0 size=64 callers=7 calls=0
*/
void sub_caec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaec0ULL || rel >= 0xcaf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000caf00 size=48 callers=2 calls=1
   calls: sub_d6890
*/
void sub_caf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf00ULL || rel >= 0xcaf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000caf30 size=400 callers=9 calls=1
   calls: sub_ba720
*/
void sub_caf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcaf30ULL || rel >= 0xcb0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cb0c0 size=1936 callers=1 calls=11
   calls: NonTrackedAlloc_159, NonTrackedAlloc_89, NonTrackedAlloc_90, sub_2ff4a0, sub_2ff4b0, sub_2ff550, sub_300c80, sub_300cb0, sub_cb9d0, sub_cbac0, sub_cbba0
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = phys
*/
void PsMutex_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb0c0ULL || rel >= 0xcb850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cb850 size=384 callers=2 calls=6
   calls: PsArray_2, sub_2ff4a0, sub_2ff4b0, sub_2ff550, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsMutex.h
   ref: <allocation names disabled>
   ref: NonTrackedAlloc
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = phys
   ref: ./../../Common/src\CmFlushPool.h
*/
void NonTrackedAlloc_89(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb850ULL || rel >= 0xcb9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cb9d0 size=240 callers=1 calls=2
   calls: PsArray_122, sub_300c80
*/
void sub_cb9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcb9d0ULL || rel >= 0xcbac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cbac0 size=224 callers=4 calls=4
   calls: sub_2ff4b0, sub_300c80, sub_b1f90, sub_d1c20
*/
void sub_cbac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbac0ULL || rel >= 0xcbba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cbba0 size=3056 callers=1 calls=9
   calls: sub_300c80, sub_8fc00, sub_cbac0, sub_d1f70, sub_d2050, sub_d2130, sub_d2210, sub_d22f0, sub_d23d0
*/
void sub_cbba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcbba0ULL || rel >= 0xcc790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cc790 size=64 callers=1 calls=1
   calls: sub_2dc5d0
*/
void sub_cc790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc790ULL || rel >= 0xcc7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cc7d0 size=160 callers=1 calls=3
   calls: PsSwitchMutex, sub_2ff4c0, sub_300c80
*/
void sub_cc7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc7d0ULL || rel >= 0xcc870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cc870 size=16 callers=20 calls=0
*/
void sub_cc870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc870ULL || rel >= 0xcc880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cc880 size=352 callers=3 calls=4
   calls: sub_106ca0, sub_2e7db0, sub_2e8160, sub_300c80
*/
void sub_cc880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc880ULL || rel >= 0xcc9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cc9e0 size=272 callers=0 calls=6
   calls: sub_106c80, sub_106c90, sub_2e7ac0, sub_2e7fd0, sub_f04b0, sub_f3b30
*/
void sub_cc9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcc9e0ULL || rel >= 0xccaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ccaf0 size=416 callers=2 calls=4
   calls: sub_106c80, sub_300c80, sub_d69f0, sub_f3b30
*/
void sub_ccaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xccaf0ULL || rel >= 0xccc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ccc90 size=624 callers=5 calls=5
   calls: sub_106c80, sub_300c80, sub_d70a0, sub_d7440, sub_f04b0
*/
void sub_ccc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xccc90ULL || rel >= 0xccf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ccf00 size=448 callers=3 calls=5
   calls: sub_106c80, sub_300c80, sub_cd0c0, sub_cd4c0, sub_f3b30
*/
void sub_ccf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xccf00ULL || rel >= 0xcd0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cd0c0 size=1024 callers=1 calls=9
   calls: sub_106c80, sub_106ca0, sub_2d96e0, sub_2e7db0, sub_300c80, sub_d6720, sub_d6890, sub_e4c80, sub_f3b30
*/
void sub_cd0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcd0c0ULL || rel >= 0xcd4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cd4c0 size=880 callers=1 calls=7
   calls: sub_106c80, sub_2d96e0, sub_300c80, sub_d6720, sub_d6890, sub_e4c80, sub_f3b30
*/
void sub_cd4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcd4c0ULL || rel >= 0xcd830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cd830 size=704 callers=5 calls=8
   calls: sub_106c80, sub_2be540, sub_2be940, sub_300c80, sub_cdaf0, sub_cdf00, sub_d5ed0, sub_f04b0
*/
void sub_cd830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcd830ULL || rel >= 0xcdaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cdaf0 size=1040 callers=1 calls=9
   calls: sub_106c80, sub_106ca0, sub_2d96e0, sub_2e8160, sub_300c80, sub_d6720, sub_d6890, sub_e4c80, sub_f04b0
*/
void sub_cdaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdaf0ULL || rel >= 0xcdf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cdf00 size=880 callers=1 calls=7
   calls: sub_106c80, sub_2d96e0, sub_300c80, sub_d6720, sub_d6890, sub_e4c80, sub_f04b0
*/
void sub_cdf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcdf00ULL || rel >= 0xce270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce270 size=16 callers=4 calls=0
*/
void sub_ce270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce270ULL || rel >= 0xce280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce280 size=336 callers=0 calls=4
   calls: PsPool_30, sub_d6720, sub_d6890, sub_e0660
*/
void sub_ce280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce280ULL || rel >= 0xce3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce3d0 size=224 callers=5 calls=3
   calls: sub_2dfb50, sub_d6720, sub_d6890
*/
void sub_ce3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce3d0ULL || rel >= 0xce4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce4b0 size=64 callers=1 calls=1
   calls: sub_ce4f0
*/
void sub_ce4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce4b0ULL || rel >= 0xce4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce4f0 size=240 callers=1 calls=3
   calls: sub_d6720, sub_d6890, sub_d9b10
*/
void sub_ce4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce4f0ULL || rel >= 0xce5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce5e0 size=208 callers=2 calls=3
   calls: sub_2dfd10, sub_d6720, sub_d6890
*/
void sub_ce5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce5e0ULL || rel >= 0xce6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce6b0 size=16 callers=3 calls=0
*/
void sub_ce6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce6b0ULL || rel >= 0xce6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce6c0 size=256 callers=0 calls=4
   calls: ScScene_2, sub_d6720, sub_d6890, sub_e3930
*/
void sub_ce6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce6c0ULL || rel >= 0xce7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce7c0 size=224 callers=2 calls=3
   calls: sub_2dfe50, sub_d6720, sub_d6890
*/
void sub_ce7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce7c0ULL || rel >= 0xce8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce8a0 size=240 callers=1 calls=3
   calls: sub_2ea2a0, sub_d6720, sub_d6890
*/
void sub_ce8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce8a0ULL || rel >= 0xce990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ce990 size=224 callers=2 calls=3
   calls: sub_2ea360, sub_d6720, sub_d6890
*/
void sub_ce990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xce990ULL || rel >= 0xcea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cea70 size=160 callers=0 calls=3
   calls: PsArray_130, PsSwitchMutex, sub_2ff4c0
*/
void sub_cea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcea70ULL || rel >= 0xceb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ceb10 size=176 callers=0 calls=3
   calls: PsArray_130, PsSwitchMutex, sub_2ff4c0
*/
void sub_ceb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xceb10ULL || rel >= 0xcebc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cebc0 size=176 callers=0 calls=3
   calls: PsArray_130, PsSwitchMutex, sub_2ff4c0
*/
void sub_cebc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcebc0ULL || rel >= 0xcec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cec70 size=192 callers=1 calls=2
   calls: sub_d6720, sub_d6890
*/
void sub_cec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcec70ULL || rel >= 0xced30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ced30 size=224 callers=3 calls=4
   calls: sub_2e9f80, sub_d6720, sub_d6890, sub_e3b20
*/
void sub_ced30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xced30ULL || rel >= 0xcee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cee10 size=272 callers=1 calls=4
   calls: ScScene_8, sub_3007d0, sub_d6720, sub_d6890
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: Adding cloth to the scene failed!
*/
void ScbScene(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcee10ULL || rel >= 0xcef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cef20 size=224 callers=2 calls=3
   calls: sub_2ea1a0, sub_d6720, sub_d6890
*/
void sub_cef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcef20ULL || rel >= 0xcf000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cf000 size=448 callers=1 calls=7
   calls: NonTrackedAlloc_91, PsSwitchMutex, sub_2ebb90, sub_2ebbb0, sub_2ebbd0, sub_2ff4c0, sub_cf1c0
*/
void sub_cf000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf000ULL || rel >= 0xcf1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cf1c0 size=224 callers=1 calls=1
   calls: PsArray_131
*/
void sub_cf1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf1c0ULL || rel >= 0xcf2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cf2a0 size=128 callers=1 calls=3
   calls: NpParticleFluidReadData, sub_2e9fd0, sub_2e9fe0
*/
void sub_cf2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf2a0ULL || rel >= 0xcf320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cf320 size=672 callers=1 calls=7
   calls: ScScene_6, sub_2dc3d0, sub_2de770, sub_2e91e0, sub_2e92c0, sub_2e9320, sub_2e9a30
*/
void sub_cf320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf320ULL || rel >= 0xcf5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cf5c0 size=16 callers=1 calls=0
*/
void sub_cf5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5c0ULL || rel >= 0xcf5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cf5d0 size=80 callers=1 calls=2
   calls: sub_2ff4c0, sub_cf620
*/
void sub_cf5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf5d0ULL || rel >= 0xcf620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cf620 size=592 callers=2 calls=9
   calls: ScBodyCore, sub_2bda20, sub_2bda70, sub_2bdbb0, sub_2bde80, sub_2bdef0, sub_2bdfc0, sub_2be6c0, sub_d1950
*/
void sub_cf620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf620ULL || rel >= 0xcf870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cf870 size=1232 callers=1 calls=31
   calls: NpParticleFluidReadData_2, PsSwitchMutex, ScScene, ScScene_2, ScScene_7, ScScene_8, sub_2e9fd0, sub_2e9fe0, sub_2ea260, sub_2ea270, sub_2ea280, sub_2ea290
   ... +19 more
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: Adding cloth to the scene failed!
*/
void ScbScene_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcf870ULL || rel >= 0xcfd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cfd40 size=320 callers=2 calls=2
   calls: sub_2ba280, sub_d1950
*/
void sub_cfd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfd40ULL || rel >= 0xcfe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000cfe80 size=1024 callers=1 calls=7
   calls: sub_106c80, sub_106c90, sub_2d96e0, sub_2e7ac0, sub_300c80, sub_d7a50, sub_f3b30
*/
void sub_cfe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xcfe80ULL || rel >= 0xd0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d0280 size=1472 callers=4 calls=22
   calls: sub_106c80, sub_106c90, sub_2bd990, sub_2bdac0, sub_2be060, sub_2be0e0, sub_2be190, sub_2be210, sub_2be290, sub_2be2e0, sub_2be5b0, sub_2be690
   ... +10 more
*/
void sub_d0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0280ULL || rel >= 0xd0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d0840 size=1024 callers=1 calls=7
   calls: sub_106c80, sub_106c90, sub_2d96e0, sub_2e7fd0, sub_300c80, sub_d0280, sub_f04b0
*/
void sub_d0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0840ULL || rel >= 0xd0c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d0c40 size=256 callers=1 calls=3
   calls: PsPool_30, sub_d7bc0, sub_e0660
*/
void sub_d0c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0c40ULL || rel >= 0xd0d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d0d40 size=688 callers=2 calls=13
   calls: sub_2c1520, sub_2dfb50, sub_2dfd10, sub_2dfe50, sub_2e9f80, sub_2ea1a0, sub_2ea360, sub_cfd40, sub_d0ff0, sub_d13d0, sub_d7bc0, sub_d7cb0
   ... +1 more
*/
void sub_d0d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0d40ULL || rel >= 0xd0ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d0ff0 size=992 callers=1 calls=8
   calls: sub_106c80, sub_106ca0, sub_2d96e0, sub_2e7db0, sub_300c80, sub_d6890, sub_e4c80, sub_f3b30
*/
void sub_d0ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd0ff0ULL || rel >= 0xd13d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d13d0 size=976 callers=1 calls=9
   calls: sub_106c80, sub_106ca0, sub_2d96e0, sub_2e8160, sub_300c80, sub_d0280, sub_d6890, sub_e4c80, sub_f04b0
*/
void sub_d13d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd13d0ULL || rel >= 0xd17a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d17a0 size=432 callers=164 calls=1
   calls: sub_d6720
*/
void sub_d17a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd17a0ULL || rel >= 0xd1950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1950 size=496 callers=171 calls=1
   calls: NonTrackedAlloc_76
*/
void sub_d1950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1950ULL || rel >= 0xd1b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1b40 size=16 callers=0 calls=0
*/
void sub_d1b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b40ULL || rel >= 0xd1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1b50 size=16 callers=0 calls=0
*/
void sub_d1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b50ULL || rel >= 0xd1b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1b60 size=16 callers=1 calls=0
*/
void sub_d1b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b60ULL || rel >= 0xd1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1b70 size=16 callers=1 calls=0
*/
void sub_d1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b70ULL || rel >= 0xd1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1b80 size=80 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: PxScene::addBroadPhaseRegion() not allowed while simulation is running. Call will be ignored.
*/
void ScbScene_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1b80ULL || rel >= 0xd1bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1bd0 size=80 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxScene::removeBroadPhaseRegion() not allowed while simulation is running. Call will be ignored.
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
*/
void ScbScene_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1bd0ULL || rel >= 0xd1c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1c20 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_d1c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1c20ULL || rel >= 0xd1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1c70 size=400 callers=10 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1c70ULL || rel >= 0xd1e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1e00 size=368 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxFlags<physx::PxClientBehaviorFlag::En
   ref: <allocation names disabled>
*/
void PsArray_122(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1e00ULL || rel >= 0xd1f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d1f70 size=224 callers=2 calls=3
   calls: sub_300c80, sub_d24b0, sub_d2690
*/
void sub_d1f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd1f70ULL || rel >= 0xd2050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d2050 size=224 callers=2 calls=3
   calls: sub_300c80, sub_d2dc0, sub_d3060
*/
void sub_d2050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2050ULL || rel >= 0xd2130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d2130 size=224 callers=2 calls=3
   calls: sub_300c80, sub_d3790, sub_d3a30
*/
void sub_d2130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2130ULL || rel >= 0xd2210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d2210 size=224 callers=2 calls=3
   calls: sub_300c80, sub_d4160, sub_d4400
*/
void sub_d2210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2210ULL || rel >= 0xd22f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d22f0 size=224 callers=2 calls=3
   calls: sub_300c80, sub_d4b30, sub_d4dd0
*/
void sub_d22f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd22f0ULL || rel >= 0xd23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d23d0 size=224 callers=2 calls=3
   calls: sub_300c80, sub_d5500, sub_d57a0
*/
void sub_d23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd23d0ULL || rel >= 0xd24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d24b0 size=480 callers=1 calls=3
   calls: PsArray_123, PsSortInternals_28, sub_300c80
*/
void sub_d24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd24b0ULL || rel >= 0xd2690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d2690 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_d2690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2690ULL || rel >= 0xd26f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d26f0 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<unsigned char, 384> >:
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd26f0ULL || rel >= 0xd2c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d2c30 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<unsigned char, 384> >:
*/
void PsArray_123(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2c30ULL || rel >= 0xd2dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d2dc0 size=672 callers=1 calls=3
   calls: PsArray_124, PsSortInternals_29, sub_300c80
*/
void sub_d2dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd2dc0ULL || rel >= 0xd3060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d3060 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_d3060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3060ULL || rel >= 0xd30c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d30c0 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<unsigned char, 256> >:
*/
void PsSortInternals_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd30c0ULL || rel >= 0xd3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d3600 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<unsigned char, 256> >:
*/
void PsArray_124(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3600ULL || rel >= 0xd3790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d3790 size=672 callers=1 calls=3
   calls: PsArray_125, PsSortInternals_30, sub_300c80
*/
void sub_d3790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3790ULL || rel >= 0xd3a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d3a30 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_d3a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a30ULL || rel >= 0xd3a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d3a90 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<unsigned char, 128> >:
*/
void PsSortInternals_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3a90ULL || rel >= 0xd3fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d3fd0 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<unsigned char, 128> >:
*/
void PsArray_125(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd3fd0ULL || rel >= 0xd4160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d4160 size=672 callers=1 calls=3
   calls: PsArray_126, PsSortInternals_31, sub_300c80
*/
void sub_d4160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4160ULL || rel >= 0xd4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d4400 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_d4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4400ULL || rel >= 0xd4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d4460 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<void *, 32> >::getName
*/
void PsSortInternals_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4460ULL || rel >= 0xd49a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d49a0 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<void *, 32> >::getName
*/
void PsArray_126(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd49a0ULL || rel >= 0xd4b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d4b30 size=672 callers=1 calls=3
   calls: PsArray_127, PsSortInternals_32, sub_300c80
*/
void sub_d4b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4b30ULL || rel >= 0xd4dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d4dd0 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_d4dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4dd0ULL || rel >= 0xd4e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d4e30 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<void *, 16> >::getName
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd4e30ULL || rel >= 0xd5370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d5370 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<void *, 16> >::getName
   ref: <allocation names disabled>
*/
void PsArray_127(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5370ULL || rel >= 0xd5500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d5500 size=672 callers=1 calls=3
   calls: PsArray_128, PsSortInternals_33, sub_300c80
*/
void sub_d5500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5500ULL || rel >= 0xd57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d57a0 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_d57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd57a0ULL || rel >= 0xd5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d5800 size=1344 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_300c80, sub_300cb0, sub_301c30
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<void *, 8> >::getName(
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsSort.h
   ref: ./../../../../PxShared/src/foundation/include/PsSortInternals.h
*/
void PsSortInternals_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5800ULL || rel >= 0xd5d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d5d40 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<void *, 8> >::getName(
   ref: <allocation names disabled>
*/
void PsArray_128(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5d40ULL || rel >= 0xd5ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d5ed0 size=384 callers=5 calls=3
   calls: sub_2bda20, sub_2bda70, sub_d17a0
*/
void sub_d5ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd5ed0ULL || rel >= 0xd6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d6050 size=384 callers=1 calls=1
   calls: sub_300c80
   ref: ./../../LowLevel/API/include\PxsMaterialManager.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_91(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6050ULL || rel >= 0xd61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d61d0 size=720 callers=3 calls=8
   calls: PsArray_129, sub_106c90, sub_2ba220, sub_2ba260, sub_2d9560, sub_2d95e0, sub_d1950, sub_d64a0
*/
void sub_d61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd61d0ULL || rel >= 0xd64a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d64a0 size=224 callers=1 calls=1
   calls: PsArray_129
*/
void sub_d64a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd64a0ULL || rel >= 0xd6580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d6580 size=416 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Scb::Shape *>::getName() [T = physx::Sc
*/
void PsArray_129(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6580ULL || rel >= 0xd6720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d6720 size=368 callers=21 calls=1
   calls: NonTrackedAlloc_90
*/
void sub_d6720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6720ULL || rel >= 0xd6890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d6890 size=352 callers=32 calls=0
*/
void sub_d6890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6890ULL || rel >= 0xd69f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d69f0 size=928 callers=1 calls=8
   calls: sub_106c80, sub_106c90, sub_2d96e0, sub_2e7ac0, sub_300c80, sub_d6720, sub_d6890, sub_f3b30
*/
void sub_d69f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd69f0ULL || rel >= 0xd6d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d6d90 size=784 callers=0 calls=6
   calls: sub_106c80, sub_2d96e0, sub_300c80, sub_d6720, sub_d6890, sub_f3b30
*/
void sub_d6d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd6d90ULL || rel >= 0xd70a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d70a0 size=928 callers=1 calls=8
   calls: sub_106c80, sub_106c90, sub_2d96e0, sub_2e7fd0, sub_300c80, sub_d6720, sub_d6890, sub_f04b0
*/
void sub_d70a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd70a0ULL || rel >= 0xd7440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d7440 size=784 callers=1 calls=6
   calls: sub_106c80, sub_2d96e0, sub_300c80, sub_d6720, sub_d6890, sub_f04b0
*/
void sub_d7440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7440ULL || rel >= 0xd7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d7750 size=416 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Scb::MaterialEvent>::getName() [T = phy
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7750ULL || rel >= 0xd78f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d78f0 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Scb::MaterialEvent>::getName() [T = phy
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_131(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd78f0ULL || rel >= 0xd7a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d7a50 size=368 callers=1 calls=8
   calls: sub_106c80, sub_106c90, sub_2e7ac0, sub_2fef20, sub_cc880, sub_d1950, sub_d61d0, sub_f3b30
*/
void sub_d7a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7a50ULL || rel >= 0xd7bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d7bc0 size=240 callers=3 calls=6
   calls: sub_2c13e0, sub_2c1440, sub_2c1460, sub_2c1490, sub_2c14d0, sub_d1950
*/
void sub_d7bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7bc0ULL || rel >= 0xd7cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d7cb0 size=416 callers=3 calls=13
   calls: sub_2ba8a0, sub_2ba8c0, sub_2ba8e0, sub_2ba900, sub_2ba910, sub_2ba930, sub_2ba940, sub_2ba960, sub_2ba970, sub_2ba990, sub_2ba9b0, sub_2ba9d0
   ... +1 more
*/
void sub_d7cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7cb0ULL || rel >= 0xd7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d7e50 size=480 callers=1 calls=17
   calls: sub_2babd0, sub_2bac10, sub_2bac50, sub_2bac80, sub_2bacb0, sub_2bacc0, sub_2bacd0, sub_2bace0, sub_2bacf0, sub_2bad40, sub_2bad50, sub_2bad60
   ... +5 more
*/
void sub_d7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd7e50ULL || rel >= 0xd8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8030 size=368 callers=2 calls=7
   calls: PsArray_132, sub_106ca0, sub_2d9590, sub_d1950, sub_d6890, sub_d81a0, sub_e4c80
*/
void sub_d8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8030ULL || rel >= 0xd81a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d81a0 size=320 callers=1 calls=1
   calls: PsArray_132
*/
void sub_d81a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd81a0ULL || rel >= 0xd82e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d82e0 size=528 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Scb::RemovedShape>::getName() [T = phys
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_132(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd82e0ULL || rel >= 0xd84f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d84f0 size=96 callers=0 calls=0
*/
void sub_d84f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd84f0ULL || rel >= 0xd8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8550 size=112 callers=0 calls=0
*/
void sub_d8550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8550ULL || rel >= 0xd85c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d85c0 size=320 callers=0 calls=0
*/
void sub_d85c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd85c0ULL || rel >= 0xd8700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8700 size=176 callers=1 calls=3
   calls: sub_2ba800, sub_2ba880, sub_2ba910
*/
void sub_d8700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8700ULL || rel >= 0xd87b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d87b0 size=16 callers=1 calls=0
*/
void sub_d87b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd87b0ULL || rel >= 0xd87c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d87c0 size=176 callers=1 calls=4
   calls: sub_300c80, sub_b8c50, sub_d87b0, sub_d8870
*/
void sub_d87c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd87c0ULL || rel >= 0xd8870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8870 size=96 callers=1 calls=1
   calls: sub_300c80
*/
void sub_d8870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8870ULL || rel >= 0xd88d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d88d0 size=64 callers=0 calls=2
   calls: sub_300c80, sub_d87c0
*/
void sub_d88d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd88d0ULL || rel >= 0xd8910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8910 size=240 callers=0 calls=6
   calls: sub_b3e20, sub_caec0, sub_cc870, sub_ce5e0, sub_d9bb0, sub_da620
*/
void sub_d8910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8910ULL || rel >= 0xd8a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8a00 size=64 callers=0 calls=1
   calls: sub_cc870
*/
void sub_d8a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8a00ULL || rel >= 0xd8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8a40 size=32 callers=0 calls=0
*/
void sub_d8a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8a40ULL || rel >= 0xd8a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8a60 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_d8a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8a60ULL || rel >= 0xd8b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8b00 size=32 callers=0 calls=0
*/
void sub_d8b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b00ULL || rel >= 0xd8b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8b20 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_d8b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8b20ULL || rel >= 0xd8bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8bc0 size=32 callers=0 calls=0
*/
void sub_d8bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8bc0ULL || rel >= 0xd8be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8be0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_d8be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8be0ULL || rel >= 0xd8c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8c80 size=32 callers=0 calls=0
*/
void sub_d8c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8c80ULL || rel >= 0xd8ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8ca0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_d8ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8ca0ULL || rel >= 0xd8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8d40 size=176 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_d8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8d40ULL || rel >= 0xd8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8df0 size=80 callers=0 calls=1
   calls: sub_2ba9c0
*/
void sub_d8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8df0ULL || rel >= 0xd8e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8e40 size=16 callers=0 calls=0
*/
void sub_d8e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8e40ULL || rel >= 0xd8e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8e50 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_d8e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8e50ULL || rel >= 0xd8ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8ef0 size=32 callers=0 calls=0
*/
void sub_d8ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8ef0ULL || rel >= 0xd8f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8f10 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_d8f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8f10ULL || rel >= 0xd8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8fb0 size=32 callers=0 calls=0
*/
void sub_d8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8fb0ULL || rel >= 0xd8fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d8fd0 size=240 callers=0 calls=2
   calls: sub_d17a0, sub_d90c0
*/
void sub_d8fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd8fd0ULL || rel >= 0xd90c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d90c0 size=272 callers=1 calls=1
   calls: sub_d17a0
*/
void sub_d90c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd90c0ULL || rel >= 0xd91d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d91d0 size=16 callers=0 calls=0
*/
void sub_d91d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd91d0ULL || rel >= 0xd91e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d91e0 size=400 callers=3 calls=3
   calls: sub_2be6c0, sub_cc870, sub_d17a0
*/
void sub_d91e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd91e0ULL || rel >= 0xd9370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9370 size=368 callers=0 calls=3
   calls: sub_2be6c0, sub_cc870, sub_d17a0
*/
void sub_d9370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9370ULL || rel >= 0xd94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d94e0 size=176 callers=0 calls=2
   calls: sub_d17a0, sub_d5ed0
*/
void sub_d94e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd94e0ULL || rel >= 0xd9590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9590 size=336 callers=0 calls=5
   calls: NpFactory_11, sub_3007d0, sub_3007e0, sub_cc870, sub_f91b0
   ref: Non-root articulation link must have valid parent pointer!
   ref: Root articulation link must have NULL parent pointer!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpArticulation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9590ULL || rel >= 0xd96e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d96e0 size=16 callers=0 calls=0
*/
void sub_d96e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96e0ULL || rel >= 0xd96f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d96f0 size=192 callers=0 calls=0
*/
void sub_d96f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd96f0ULL || rel >= 0xd97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d97b0 size=384 callers=0 calls=0
*/
void sub_d97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd97b0ULL || rel >= 0xd9930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9930 size=16 callers=0 calls=0
*/
void sub_d9930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9930ULL || rel >= 0xd9940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9940 size=16 callers=0 calls=0
*/
void sub_d9940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9940ULL || rel >= 0xd9950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9950 size=16 callers=0 calls=0
*/
void sub_d9950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9950ULL || rel >= 0xd9960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9960 size=96 callers=1 calls=1
   calls: sub_dc030
*/
void sub_d9960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9960ULL || rel >= 0xd99c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d99c0 size=16 callers=0 calls=0
*/
void sub_d99c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99c0ULL || rel >= 0xd99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d99d0 size=16 callers=0 calls=0
*/
void sub_d99d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99d0ULL || rel >= 0xd99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d99e0 size=16 callers=0 calls=0
*/
void sub_d99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99e0ULL || rel >= 0xd99f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d99f0 size=272 callers=0 calls=1
   calls: sub_2baa10
*/
void sub_d99f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd99f0ULL || rel >= 0xd9b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9b00 size=16 callers=0 calls=0
*/
void sub_d9b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b00ULL || rel >= 0xd9b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9b10 size=48 callers=2 calls=0
*/
void sub_d9b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b10ULL || rel >= 0xd9b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9b40 size=16 callers=0 calls=0
   ref: PxArticulation
*/
void PxArticulation(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b40ULL || rel >= 0xd9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9b50 size=96 callers=0 calls=0
   ref: PxBase
   ref: PxArticulation
*/
void PxArticulation_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9b50ULL || rel >= 0xd9bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9bb0 size=352 callers=2 calls=0
*/
void sub_d9bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9bb0ULL || rel >= 0xd9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9d10 size=192 callers=0 calls=0
*/
void sub_d9d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9d10ULL || rel >= 0xd9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9dd0 size=144 callers=0 calls=0
*/
void sub_d9dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9dd0ULL || rel >= 0xd9e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9e60 size=128 callers=0 calls=2
   calls: sub_106e50, sub_e0cc0
*/
void sub_d9e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9e60ULL || rel >= 0xd9ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9ee0 size=48 callers=0 calls=1
   calls: sub_106e50
*/
void sub_d9ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9ee0ULL || rel >= 0xd9f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000d9f10 size=304 callers=0 calls=2
   calls: sub_106b90, sub_e0fa0
*/
void sub_d9f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xd9f10ULL || rel >= 0xda040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da040 size=144 callers=0 calls=1
   calls: sub_106b90
*/
void sub_da040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda040ULL || rel >= 0xda0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da0d0 size=368 callers=0 calls=5
   calls: sub_106d90, sub_106e80, sub_e0cb0, sub_e0ef0, sub_e1e10
*/
void sub_da0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda0d0ULL || rel >= 0xda240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da240 size=720 callers=1 calls=9
   calls: PsArray_133, sub_106d50, sub_106dd0, sub_2bd6a0, sub_2bd7e0, sub_300c80, sub_e0ca0, sub_e0cb0, sub_e1e10
*/
void sub_da240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda240ULL || rel >= 0xda510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da510 size=208 callers=1 calls=5
   calls: sub_106dd0, sub_2bd7e0, sub_300c80, sub_e0cb0, sub_e1e10
*/
void sub_da510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda510ULL || rel >= 0xda5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da5e0 size=64 callers=0 calls=2
   calls: sub_300c80, sub_da510
*/
void sub_da5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda5e0ULL || rel >= 0xda620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da620 size=272 callers=1 calls=4
   calls: NpRigidActorTemplate, sub_b3e20, sub_cd830, sub_e1dc0
*/
void sub_da620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda620ULL || rel >= 0xda730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da730 size=144 callers=1 calls=6
   calls: sub_107580, sub_296df0, sub_3007d0, sub_3007e0, sub_e1030, sub_e1dc0
   ref: PxRigidActor::release: Actor is part of a pruning structure, pruning structure is now invalid!
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda730ULL || rel >= 0xda7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da7c0 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: PxArticulationLink::release(): Only leaf articulation links can be released. Release call failed
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpArticulationLink(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda7c0ULL || rel >= 0xda800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da800 size=496 callers=0 calls=0
*/
void sub_da800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda800ULL || rel >= 0xda9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000da9f0 size=16 callers=0 calls=0
*/
void sub_da9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xda9f0ULL || rel >= 0xdaa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000daa00 size=16 callers=0 calls=0
*/
void sub_daa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaa00ULL || rel >= 0xdaa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000daa10 size=16 callers=0 calls=0
*/
void sub_daa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaa10ULL || rel >= 0xdaa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000daa20 size=192 callers=0 calls=0
*/
void sub_daa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaa20ULL || rel >= 0xdaae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000daae0 size=1568 callers=0 calls=5
   calls: sub_2babd0, sub_2bac10, sub_d17a0, sub_d1950, sub_db100
*/
void sub_daae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdaae0ULL || rel >= 0xdb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db100 size=784 callers=1 calls=5
   calls: sub_2bd990, sub_2bdac0, sub_d17a0, sub_d1950, sub_e05b0
*/
void sub_db100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb100ULL || rel >= 0xdb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db410 size=128 callers=0 calls=2
   calls: sub_db490, sub_e1d90
*/
void sub_db410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb410ULL || rel >= 0xdb490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db490 size=1168 callers=2 calls=4
   calls: sub_2be030, sub_2be0b0, sub_df1a0, sub_df2d0
*/
void sub_db490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb490ULL || rel >= 0xdb920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db920 size=128 callers=0 calls=2
   calls: sub_db490, sub_e1d90
*/
void sub_db920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb920ULL || rel >= 0xdb9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000db9a0 size=320 callers=0 calls=2
   calls: sub_d1950, sub_e1d90
*/
void sub_db9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdb9a0ULL || rel >= 0xdbae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dbae0 size=320 callers=0 calls=2
   calls: sub_d1950, sub_e1d90
*/
void sub_dbae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbae0ULL || rel >= 0xdbc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dbc20 size=16 callers=0 calls=0
*/
void sub_dbc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbc20ULL || rel >= 0xdbc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dbc30 size=544 callers=0 calls=4
   calls: sub_2bd990, sub_d17a0, sub_d91e0, sub_e1d90
*/
void sub_dbc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbc30ULL || rel >= 0xdbe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dbe50 size=240 callers=0 calls=3
   calls: sub_2bda20, sub_d17a0, sub_e1d90
*/
void sub_dbe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbe50ULL || rel >= 0xdbf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dbf40 size=240 callers=0 calls=3
   calls: sub_2bda70, sub_d17a0, sub_e1d90
*/
void sub_dbf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdbf40ULL || rel >= 0xdc030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dc030 size=608 callers=1 calls=7
   calls: sub_1184d0, sub_118570, sub_118a20, sub_2be030, sub_2be0b0, sub_dc290, sub_dc5f0
*/
void sub_dc030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc030ULL || rel >= 0xdc290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dc290 size=864 callers=1 calls=7
   calls: NonTrackedAlloc_99, sub_1184d0, sub_1184e0, sub_118570, sub_118d60, sub_119020, sub_2e6570
*/
void sub_dc290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc290ULL || rel >= 0xdc5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dc5f0 size=1584 callers=1 calls=0
*/
void sub_dc5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdc5f0ULL || rel >= 0xdcc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcc20 size=16 callers=0 calls=0
*/
void sub_dcc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc20ULL || rel >= 0xdcc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcc30 size=16 callers=0 calls=0
   ref: PxArticulationLink
*/
void PxArticulationLink(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc30ULL || rel >= 0xdcc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcc40 size=192 callers=0 calls=0
   ref: PxBase
   ref: PxRigidActor
   ref: PxArticulationLink
   ref: PxActor
   ref: PxRigidBody
*/
void PxArticulationLink_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcc40ULL || rel >= 0xdcd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcd00 size=16 callers=0 calls=0
*/
void sub_dcd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd00ULL || rel >= 0xdcd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcd10 size=16 callers=0 calls=0
*/
void sub_dcd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd10ULL || rel >= 0xdcd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcd20 size=16 callers=0 calls=0
*/
void sub_dcd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd20ULL || rel >= 0xdcd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcd30 size=16 callers=0 calls=0
*/
void sub_dcd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd30ULL || rel >= 0xdcd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dcd40 size=208 callers=0 calls=1
   calls: sub_107880
*/
void sub_dcd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdcd40ULL || rel >= 0xdce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dce10 size=800 callers=0 calls=6
   calls: sub_2ba220, sub_d17a0, sub_d1950, sub_e1670, sub_e1720, sub_e1d90
*/
void sub_dce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdce10ULL || rel >= 0xdd130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd130 size=672 callers=0 calls=6
   calls: sub_2ba220, sub_d17a0, sub_d1950, sub_e1670, sub_e1720, sub_e1d90
*/
void sub_dd130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd130ULL || rel >= 0xdd3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd3d0 size=80 callers=0 calls=0
*/
void sub_dd3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd3d0ULL || rel >= 0xdd420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd420 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_dd420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd420ULL || rel >= 0xdd4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd4e0 size=80 callers=0 calls=0
*/
void sub_dd4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd4e0ULL || rel >= 0xdd530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd530 size=224 callers=0 calls=2
   calls: sub_3007d0, sub_e1d90
   ref: ./../../PhysX/src/NpActorTemplate.h
   ref: ./../../PhysX/src/buffering\ScbActor.h
   ref: Attempt to set the client id when an actor is already in a scene.
   ref: Attempt to set the client id when an actor is buffering
*/
void ScbActor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd530ULL || rel >= 0xdd610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd610 size=64 callers=0 calls=0
*/
void sub_dd610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd610ULL || rel >= 0xdd650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd650 size=224 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_dd650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd650ULL || rel >= 0xdd730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd730 size=96 callers=0 calls=0
*/
void sub_dd730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd730ULL || rel >= 0xdd790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd790 size=16 callers=0 calls=0
*/
void sub_dd790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd790ULL || rel >= 0xdd7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd7a0 size=112 callers=0 calls=2
   calls: sub_1054d0, sub_106eb0
*/
void sub_dd7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd7a0ULL || rel >= 0xdd810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd810 size=112 callers=0 calls=3
   calls: sub_296df0, sub_3007d0, sub_3007e0
   ref: PxRigidActor::attachShape: Actor is part of a pruning structure, pruning structure is now invalid!
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd810ULL || rel >= 0xdd880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd880 size=176 callers=0 calls=4
   calls: sub_107190, sub_296df0, sub_3007d0, sub_3007e0
   ref: PxRigidActor::detachShape: Actor is part of a pruning structure, pruning structure is now invalid!
   ref: PxRigidActor::detachShape: shape is not attached to this actor!
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd880ULL || rel >= 0xdd930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd930 size=16 callers=0 calls=0
*/
void sub_dd930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd930ULL || rel >= 0xdd940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd940 size=16 callers=0 calls=0
*/
void sub_dd940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd940ULL || rel >= 0xdd950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd950 size=16 callers=0 calls=0
*/
void sub_dd950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd950ULL || rel >= 0xdd960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd960 size=128 callers=0 calls=0
*/
void sub_dd960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd960ULL || rel >= 0xdd9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dd9e0 size=80 callers=0 calls=0
*/
void sub_dd9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdd9e0ULL || rel >= 0xdda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dda30 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_dda30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdda30ULL || rel >= 0xddaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddaf0 size=80 callers=0 calls=1
   calls: sub_2be030
*/
void sub_ddaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddaf0ULL || rel >= 0xddb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddb40 size=32 callers=0 calls=0
*/
void sub_ddb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb40ULL || rel >= 0xddb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddb60 size=288 callers=0 calls=3
   calls: sub_2be0e0, sub_d17a0, sub_d1950
*/
void sub_ddb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddb60ULL || rel >= 0xddc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddc80 size=160 callers=0 calls=1
   calls: sub_2be0b0
*/
void sub_ddc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddc80ULL || rel >= 0xddd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddd20 size=80 callers=0 calls=1
   calls: sub_2be0b0
*/
void sub_ddd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddd20ULL || rel >= 0xddd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddd70 size=32 callers=0 calls=0
*/
void sub_ddd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddd70ULL || rel >= 0xddd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ddd90 size=32 callers=0 calls=0
*/
void sub_ddd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xddd90ULL || rel >= 0xdddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dddb0 size=1024 callers=0 calls=9
   calls: PsPool_18, sub_107e30, sub_2be540, sub_2be940, sub_2bec20, sub_3007d0, sub_3007e0, sub_df400, sub_e1dc0
   ref: RigidBody::setRigidBodyFlag: dynamic meshes/planes/heightfields are not supported!
   ref: RigidBody::setRigidBodyFlag: eENABLE_CCD can't be raised as the same time as eENABLE_SPECULATIVE_CCD
   ref: ./../../PhysX/src/NpRigidBodyTemplate.h
   ref: RigidBody::setRigidBodyFlag: kinematic bodies with CCD enabled are not supported! CCD will be ignore
   ref: RigidBody::setRigidBodyFlag: kinematic articulation links are not supported!
*/
void heightfields_are_not_supported(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdddb0ULL || rel >= 0xde1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de1b0 size=1008 callers=0 calls=9
   calls: PsPool_18, sub_107e30, sub_2be540, sub_2be940, sub_2bec20, sub_3007d0, sub_3007e0, sub_df400, sub_e1dc0
   ref: RigidBody::setRigidBodyFlag: dynamic meshes/planes/heightfields are not supported!
   ref: RigidBody::setRigidBodyFlag: eENABLE_CCD can't be raised as the same time as eENABLE_SPECULATIVE_CCD
   ref: ./../../PhysX/src/NpRigidBodyTemplate.h
   ref: RigidBody::setRigidBodyFlag: kinematic bodies with CCD enabled are not supported! CCD will be ignore
   ref: RigidBody::setRigidBodyFlag: kinematic articulation links are not supported!
*/
void heightfields_are_not_supported_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde1b0ULL || rel >= 0xde5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de5a0 size=48 callers=0 calls=0
*/
void sub_de5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5a0ULL || rel >= 0xde5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de5d0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_de5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde5d0ULL || rel >= 0xde670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de670 size=32 callers=0 calls=0
*/
void sub_de670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde670ULL || rel >= 0xde690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de690 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_de690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde690ULL || rel >= 0xde730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de730 size=48 callers=0 calls=0
*/
void sub_de730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde730ULL || rel >= 0xde760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de760 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_de760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde760ULL || rel >= 0xde800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de800 size=32 callers=0 calls=0
*/
void sub_de800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde800ULL || rel >= 0xde820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de820 size=16 callers=0 calls=0
*/
void sub_de820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde820ULL || rel >= 0xde830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de830 size=16 callers=0 calls=0
*/
void sub_de830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde830ULL || rel >= 0xde840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de840 size=16 callers=0 calls=0
*/
void sub_de840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde840ULL || rel >= 0xde850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de850 size=128 callers=0 calls=4
   calls: sub_106dd0, sub_2bd7e0, sub_e0cb0, sub_e1e10
*/
void sub_de850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde850ULL || rel >= 0xde8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de8d0 size=16 callers=0 calls=0
*/
void sub_de8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde8d0ULL || rel >= 0xde8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de8e0 size=96 callers=0 calls=3
   calls: sub_106dd0, sub_e0cb0, sub_e1e10
*/
void sub_de8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde8e0ULL || rel >= 0xde940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de940 size=16 callers=0 calls=0
*/
void sub_de940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde940ULL || rel >= 0xde950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de950 size=112 callers=0 calls=3
   calls: sub_296df0, sub_3007d0, sub_3007e0
   ref: PxRigidActor::attachShape: Actor is part of a pruning structure, pruning structure is now invalid!
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde950ULL || rel >= 0xde9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de9c0 size=16 callers=0 calls=0
*/
void sub_de9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde9c0ULL || rel >= 0xde9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000de9d0 size=80 callers=0 calls=2
   calls: sub_e0cb0, sub_e1e10
*/
void sub_de9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xde9d0ULL || rel >= 0xdea20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dea20 size=16 callers=0 calls=0
*/
void sub_dea20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdea20ULL || rel >= 0xdea30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dea30 size=288 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_dea30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdea30ULL || rel >= 0xdeb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000deb50 size=208 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_deb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeb50ULL || rel >= 0xdec20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dec20 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_dec20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdec20ULL || rel >= 0xdece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dece0 size=16 callers=0 calls=0
*/
void sub_dece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdece0ULL || rel >= 0xdecf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000decf0 size=16 callers=0 calls=0
*/
void sub_decf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdecf0ULL || rel >= 0xded00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ded00 size=16 callers=0 calls=0
*/
void sub_ded00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded00ULL || rel >= 0xded10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ded10 size=16 callers=0 calls=0
*/
void sub_ded10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded10ULL || rel >= 0xded20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ded20 size=464 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpArticulationLink *>::getName() [T = p
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_133(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xded20ULL || rel >= 0xdeef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000deef0 size=16 callers=0 calls=0
*/
void sub_deef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdeef0ULL || rel >= 0xdef00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000def00 size=16 callers=0 calls=0
*/
void sub_def00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef00ULL || rel >= 0xdef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000def10 size=32 callers=0 calls=0
*/
void sub_def10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef10ULL || rel >= 0xdef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000def30 size=32 callers=0 calls=0
*/
void sub_def30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef30ULL || rel >= 0xdef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000def50 size=32 callers=0 calls=0
*/
void sub_def50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef50ULL || rel >= 0xdef70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000def70 size=32 callers=0 calls=0
*/
void sub_def70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef70ULL || rel >= 0xdef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000def90 size=224 callers=0 calls=2
   calls: PsArray_134, sub_1184d0
*/
void sub_def90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdef90ULL || rel >= 0xdf070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000df070 size=304 callers=15 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxDebugLine>::getName() [T = physx::PxD
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_134(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf070ULL || rel >= 0xdf1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000df1a0 size=304 callers=2 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_df1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf1a0ULL || rel >= 0xdf2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000df2d0 size=304 callers=2 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_df2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf2d0ULL || rel >= 0xdf400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000df400 size=320 callers=4 calls=4
   calls: sub_2be2e0, sub_d17a0, sub_d1950, sub_d5ed0
*/
void sub_df400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf400ULL || rel >= 0xdf540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000df540 size=592 callers=0 calls=7
   calls: sub_cc870, sub_ce270, sub_ce3d0, sub_e0840, sub_e09a0, sub_e1170, sub_e11e0
   ref: PxConstraint: Add to rigid actor 0: Constraint already added
   ref: PxConstraint: Add to rigid actor 1: Constraint already added
*/
void PxConstraint_Add_to_rigid_actor_1_Constraint_already_add(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf540ULL || rel >= 0xdf790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000df790 size=64 callers=2 calls=1
   calls: sub_cc870
*/
void sub_df790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf790ULL || rel >= 0xdf7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000df7d0 size=624 callers=1 calls=8
   calls: sub_2c1380, sub_2c13d0, sub_2c13e0, sub_ce270, sub_d17a0, sub_d1950, sub_e09a0, sub_e11e0
   ref: PxConstraint: Add to rigid actor 0: Constraint already added
   ref: PxConstraint: Add to rigid actor 1: Constraint already added
*/
void PxConstraint_Add_to_rigid_actor_1_Constraint_already_add_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdf7d0ULL || rel >= 0xdfa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfa40 size=16 callers=2 calls=0
*/
void sub_dfa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfa40ULL || rel >= 0xdfa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfa50 size=112 callers=0 calls=2
   calls: sub_b92b0, sub_dfa40
*/
void sub_dfa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfa50ULL || rel >= 0xdfac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfac0 size=144 callers=0 calls=4
   calls: sub_2c13d0, sub_300c80, sub_b92b0, sub_dfa40
*/
void sub_dfac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfac0ULL || rel >= 0xdfb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfb50 size=256 callers=0 calls=6
   calls: sub_b3e20, sub_caec0, sub_cc870, sub_ce3d0, sub_e0840, sub_e1390
   ref: PxConstraint: Add to rigid actor 0: Constraint already added
   ref: PxConstraint: Add to rigid actor 1: Constraint already added
*/
void PxConstraint_Add_to_rigid_actor_1_Constraint_already_add_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfb50ULL || rel >= 0xdfc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfc50 size=176 callers=0 calls=0
*/
void sub_dfc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfc50ULL || rel >= 0xdfd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfd00 size=64 callers=0 calls=1
   calls: sub_cc870
*/
void sub_dfd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd00ULL || rel >= 0xdfd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfd40 size=32 callers=0 calls=0
*/
void sub_dfd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd40ULL || rel >= 0xdfd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000dfd60 size=736 callers=0 calls=8
   calls: sub_cc870, sub_ce270, sub_ce3d0, sub_e0040, sub_e0840, sub_e09a0, sub_e11e0, sub_e1390
   ref: PxConstraint: Add to rigid actor 0: Constraint already added
   ref: PxConstraint: Add to rigid actor 1: Constraint already added
*/
void PxConstraint_Add_to_rigid_actor_1_Constraint_already_add_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xdfd60ULL || rel >= 0xe0040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0040 size=272 callers=3 calls=4
   calls: sub_2c1460, sub_2c1520, sub_d17a0, sub_d1950
*/
void sub_e0040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0040ULL || rel >= 0xe0150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0150 size=16 callers=0 calls=0
*/
void sub_e0150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0150ULL || rel >= 0xe0160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0160 size=176 callers=0 calls=3
   calls: sub_2c13e0, sub_d17a0, sub_d1950
*/
void sub_e0160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0160ULL || rel >= 0xe0210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0210 size=80 callers=0 calls=0
*/
void sub_e0210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0210ULL || rel >= 0xe0260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0260 size=224 callers=0 calls=3
   calls: sub_2c13e0, sub_d17a0, sub_d1950
*/
void sub_e0260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0260ULL || rel >= 0xe0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0340 size=64 callers=0 calls=0
*/
void sub_e0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0340ULL || rel >= 0xe0380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0380 size=80 callers=1 calls=1
   calls: sub_2c1470
*/
void sub_e0380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0380ULL || rel >= 0xe03d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e03d0 size=176 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e03d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe03d0ULL || rel >= 0xe0480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0480 size=48 callers=0 calls=0
*/
void sub_e0480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0480ULL || rel >= 0xe04b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e04b0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e04b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe04b0ULL || rel >= 0xe0550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0550 size=32 callers=0 calls=0
*/
void sub_e0550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0550ULL || rel >= 0xe0570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0570 size=48 callers=0 calls=0
*/
void sub_e0570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0570ULL || rel >= 0xe05a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e05a0 size=16 callers=0 calls=0
*/
void sub_e05a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe05a0ULL || rel >= 0xe05b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e05b0 size=144 callers=3 calls=0
*/
void sub_e05b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe05b0ULL || rel >= 0xe0640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0640 size=32 callers=1 calls=0
*/
void sub_e0640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0640ULL || rel >= 0xe0660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0660 size=128 callers=2 calls=0
*/
void sub_e0660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0660ULL || rel >= 0xe06e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e06e0 size=208 callers=1 calls=0
*/
void sub_e06e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe06e0ULL || rel >= 0xe07b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e07b0 size=16 callers=0 calls=0
   ref: PxConstraint
*/
void PxConstraint(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07b0ULL || rel >= 0xe07c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e07c0 size=96 callers=0 calls=0
   ref: PxBase
   ref: PxConstraint
*/
void PxConstraint_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe07c0ULL || rel >= 0xe0820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0820 size=16 callers=0 calls=0
*/
void sub_e0820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0820ULL || rel >= 0xe0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0830 size=16 callers=0 calls=0
*/
void sub_e0830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0830ULL || rel >= 0xe0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0840 size=352 callers=5 calls=0
*/
void sub_e0840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0840ULL || rel >= 0xe09a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e09a0 size=368 callers=4 calls=1
   calls: NonTrackedAlloc_92
*/
void sub_e09a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe09a0ULL || rel >= 0xe0b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0b10 size=400 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_92(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0b10ULL || rel >= 0xe0ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0ca0 size=16 callers=6 calls=0
*/
void sub_e0ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0ca0ULL || rel >= 0xe0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0cb0 size=16 callers=47 calls=0
*/
void sub_e0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0cb0ULL || rel >= 0xe0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0cc0 size=560 callers=1 calls=4
   calls: PsArray_135, PsArray_136, PsPool_13, sub_b9a20
*/
void sub_e0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0cc0ULL || rel >= 0xe0ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0ef0 size=176 callers=3 calls=0
*/
void sub_e0ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0ef0ULL || rel >= 0xe0fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e0fa0 size=144 callers=1 calls=0
*/
void sub_e0fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe0fa0ULL || rel >= 0xe1030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1030 size=288 callers=3 calls=5
   calls: sub_b9a20, sub_ce3d0, sub_df790, sub_e0640, sub_e0840
*/
void sub_e1030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1030ULL || rel >= 0xe1150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1150 size=32 callers=2 calls=0
*/
void sub_e1150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1150ULL || rel >= 0xe1170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1170 size=112 callers=2 calls=0
*/
void sub_e1170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1170ULL || rel >= 0xe11e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e11e0 size=432 callers=6 calls=4
   calls: PsArray_136, PsPool_13, sub_300c80, sub_e2190
*/
void sub_e11e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe11e0ULL || rel >= 0xe1390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1390 size=208 callers=4 calls=1
   calls: sub_b9a20
*/
void sub_e1390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1390ULL || rel >= 0xe1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1460 size=96 callers=0 calls=0
*/
void sub_e1460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1460ULL || rel >= 0xe14c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e14c0 size=112 callers=2 calls=0
*/
void sub_e14c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe14c0ULL || rel >= 0xe1530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1530 size=224 callers=7 calls=1
   calls: sub_b9a20
   ref: NpActor::setAggregate() failed
*/
void NpActor_setAggregate_failed(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1530ULL || rel >= 0xe1610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1610 size=96 callers=1 calls=0
*/
void sub_e1610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1610ULL || rel >= 0xe1670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1670 size=176 callers=11 calls=3
   calls: sub_ce3d0, sub_df790, sub_e0840
*/
void sub_e1670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1670ULL || rel >= 0xe1720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1720 size=208 callers=12 calls=3
   calls: sub_ce270, sub_e06e0, sub_e09a0
*/
void sub_e1720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1720ULL || rel >= 0xe17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e17f0 size=48 callers=5 calls=0
*/
void sub_e17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe17f0ULL || rel >= 0xe1820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1820 size=48 callers=1 calls=0
*/
void sub_e1820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1820ULL || rel >= 0xe1850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1850 size=32 callers=3 calls=0
*/
void sub_e1850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1850ULL || rel >= 0xe1870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1870 size=1312 callers=3 calls=1
   calls: sub_2bec20
*/
void sub_e1870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1870ULL || rel >= 0xe1d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1d90 size=48 callers=32 calls=1
   calls: sub_cc870
*/
void sub_e1d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1d90ULL || rel >= 0xe1dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1dc0 size=80 callers=32 calls=1
   calls: sub_cc870
*/
void sub_e1dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1dc0ULL || rel >= 0xe1e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1e10 size=32 callers=37 calls=0
*/
void sub_e1e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e10ULL || rel >= 0xe1e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1e30 size=400 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpConnector>::getName() [T = physx::NpC
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_135(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1e30ULL || rel >= 0xe1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e1fc0 size=464 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpConnector>::getName() [T = physx::NpC
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_136(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe1fc0ULL || rel >= 0xe2190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2190 size=64 callers=1 calls=1
   calls: PsArray_135
*/
void sub_e2190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2190ULL || rel >= 0xe21d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e21d0 size=160 callers=0 calls=0
*/
void sub_e21d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe21d0ULL || rel >= 0xe2270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2270 size=224 callers=0 calls=1
   calls: sub_2baca0
*/
void sub_e2270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2270ULL || rel >= 0xe2350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2350 size=128 callers=1 calls=1
   calls: sub_2baa50
*/
void sub_e2350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2350ULL || rel >= 0xe23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e23d0 size=32 callers=0 calls=0
*/
void sub_e23d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23d0ULL || rel >= 0xe23f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e23f0 size=80 callers=0 calls=2
   calls: sub_2babc0, sub_300c80
*/
void sub_e23f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe23f0ULL || rel >= 0xe2440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2440 size=112 callers=0 calls=2
   calls: sub_b3e20, sub_ce7c0
*/
void sub_e2440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2440ULL || rel >= 0xe24b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e24b0 size=400 callers=0 calls=0
*/
void sub_e24b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe24b0ULL || rel >= 0xe2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2640 size=624 callers=0 calls=3
   calls: sub_2babd0, sub_d17a0, sub_d1950
*/
void sub_e2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2640ULL || rel >= 0xe28b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e28b0 size=416 callers=0 calls=0
*/
void sub_e28b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe28b0ULL || rel >= 0xe2a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2a50 size=624 callers=0 calls=3
   calls: sub_2bac10, sub_d17a0, sub_d1950
*/
void sub_e2a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2a50ULL || rel >= 0xe2cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2cc0 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e2cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2cc0ULL || rel >= 0xe2d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2d80 size=64 callers=0 calls=0
*/
void sub_e2d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2d80ULL || rel >= 0xe2dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2dc0 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e2dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2dc0ULL || rel >= 0xe2e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2e80 size=32 callers=0 calls=0
*/
void sub_e2e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2e80ULL || rel >= 0xe2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2ea0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2ea0ULL || rel >= 0xe2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2f40 size=48 callers=0 calls=0
*/
void sub_e2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2f40ULL || rel >= 0xe2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e2f70 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe2f70ULL || rel >= 0xe3010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3010 size=32 callers=0 calls=0
*/
void sub_e3010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3010ULL || rel >= 0xe3030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3030 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e3030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3030ULL || rel >= 0xe30d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e30d0 size=32 callers=0 calls=0
*/
void sub_e30d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe30d0ULL || rel >= 0xe30f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e30f0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e30f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe30f0ULL || rel >= 0xe3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3190 size=32 callers=0 calls=0
*/
void sub_e3190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3190ULL || rel >= 0xe31b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e31b0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e31b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe31b0ULL || rel >= 0xe3250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3250 size=32 callers=0 calls=0
*/
void sub_e3250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3250ULL || rel >= 0xe3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3270 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3270ULL || rel >= 0xe3310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3310 size=32 callers=0 calls=0
*/
void sub_e3310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3310ULL || rel >= 0xe3330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3330 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e3330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3330ULL || rel >= 0xe33d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e33d0 size=32 callers=0 calls=0
*/
void sub_e33d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33d0ULL || rel >= 0xe33f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e33f0 size=208 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e33f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe33f0ULL || rel >= 0xe34c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e34c0 size=64 callers=0 calls=0
*/
void sub_e34c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe34c0ULL || rel >= 0xe3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3500 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e3500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3500ULL || rel >= 0xe35a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e35a0 size=32 callers=0 calls=0
*/
void sub_e35a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe35a0ULL || rel >= 0xe35c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e35c0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e35c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe35c0ULL || rel >= 0xe3660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3660 size=32 callers=0 calls=0
*/
void sub_e3660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3660ULL || rel >= 0xe3680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3680 size=176 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e3680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3680ULL || rel >= 0xe3730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3730 size=32 callers=0 calls=0
*/
void sub_e3730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3730ULL || rel >= 0xe3750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3750 size=208 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e3750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3750ULL || rel >= 0xe3820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3820 size=64 callers=0 calls=0
*/
void sub_e3820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3820ULL || rel >= 0xe3860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3860 size=176 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e3860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3860ULL || rel >= 0xe3910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3910 size=32 callers=0 calls=0
*/
void sub_e3910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3910ULL || rel >= 0xe3930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3930 size=32 callers=2 calls=0
*/
void sub_e3930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3930ULL || rel >= 0xe3950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3950 size=16 callers=0 calls=0
   ref: PxArticulationJoint
*/
void PxArticulationJoint(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3950ULL || rel >= 0xe3960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3960 size=96 callers=0 calls=0
   ref: PxBase
   ref: PxArticulationJoint
*/
void PxArticulationJoint_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3960ULL || rel >= 0xe39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e39c0 size=16 callers=0 calls=0
*/
void sub_e39c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39c0ULL || rel >= 0xe39d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e39d0 size=16 callers=0 calls=0
*/
void sub_e39d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39d0ULL || rel >= 0xe39e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e39e0 size=320 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Cm::BitMapBase<physx::shdfnd::NonTracki
   ref: <allocation names disabled>
   ref: ./../../Common/src\CmBitMap.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_93(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe39e0ULL || rel >= 0xe3b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3b20 size=160 callers=4 calls=1
   calls: sub_300c80
*/
void sub_e3b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3b20ULL || rel >= 0xe3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3bc0 size=96 callers=2 calls=1
   calls: sub_2a9580
*/
void sub_e3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3bc0ULL || rel >= 0xe3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3c20 size=64 callers=7 calls=0
*/
void sub_e3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c20ULL || rel >= 0xe3c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3c60 size=304 callers=2 calls=3
   calls: sub_2a9cd0, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: Particle operations are not allowed while simulation is running.
   ref: PxParticleBase::createParticles()
   ref: ./../../PhysX/src/particles\NpParticleFluidReadData.h
   ref: PxParticleReadData access through %s while its still locked by last call of %s.
*/
void ScbParticleSystem(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3c60ULL || rel >= 0xe3d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3d90 size=480 callers=0 calls=3
   calls: sub_2a9d10, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: PxParticleBase::releaseParticles()
   ref: Particle operations are not allowed while simulation is running.
   ref: ./../../PhysX/src/particles\NpParticleFluidReadData.h
   ref: PxParticleReadData access through %s while its still locked by last call of %s.
*/
void ScbParticleSystem_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3d90ULL || rel >= 0xe3f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e3f70 size=368 callers=0 calls=3
   calls: sub_2a9d60, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: PxParticleBase::releaseParticles()
   ref: Particle operations are not allowed while simulation is running.
   ref: ./../../PhysX/src/particles\NpParticleFluidReadData.h
   ref: PxParticleReadData access through %s while its still locked by last call of %s.
*/
void ScbParticleSystem_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe3f70ULL || rel >= 0xe40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e40e0 size=320 callers=0 calls=3
   calls: sub_2a9da0, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: PxParticleBase::setPositions()
   ref: Particle operations are not allowed while simulation is running.
   ref: ./../../PhysX/src/particles\NpParticleFluidReadData.h
   ref: PxParticleReadData access through %s while its still locked by last call of %s.
*/
void ScbParticleSystem_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe40e0ULL || rel >= 0xe4220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4220 size=320 callers=0 calls=3
   calls: sub_2a9e00, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: Particle operations are not allowed while simulation is running.
   ref: PxParticleBase::setVelocities()
   ref: ./../../PhysX/src/particles\NpParticleFluidReadData.h
   ref: PxParticleReadData access through %s while its still locked by last call of %s.
*/
void ScbParticleSystem_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4220ULL || rel >= 0xe4360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4360 size=320 callers=0 calls=3
   calls: sub_2a9e60, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: Particle operations are not allowed while simulation is running.
   ref: PxParticleBase::setRestOffsets()
   ref: ./../../PhysX/src/particles\NpParticleFluidReadData.h
   ref: PxParticleReadData access through %s while its still locked by last call of %s.
*/
void ScbParticleSystem_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4360ULL || rel >= 0xe44a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e44a0 size=496 callers=0 calls=4
   calls: NonTrackedAlloc_93, sub_2a99d0, sub_2a9b80, sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: Particle operations are not allowed while simulation is running.
*/
void ScbParticleSystem_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe44a0ULL || rel >= 0xe4690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4690 size=336 callers=1 calls=3
   calls: sub_2a9ec0, sub_3007d0, sub_3007e0
   ref: PxParticleBase: Apply forces
   ref: ./../../PhysX/src/particles\NpParticleFluidReadData.h
   ref: PxParticleReadData access through %s while its still locked by last call of %s.
*/
void NpParticleFluidReadData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4690ULL || rel >= 0xe47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e47e0 size=704 callers=1 calls=17
   calls: sub_2a9760, sub_2a9980, sub_2a99a0, sub_2a99c0, sub_2a99e0, sub_2a9a00, sub_2a9a20, sub_2a9a40, sub_2a9a60, sub_2a9a80, sub_2a9aa0, sub_2aa1c0
   ... +5 more
   ref: PxScene::fetchResults()
   ref: ./../../PhysX/src/particles\NpParticleFluidReadData.h
   ref: PxParticleReadData access through %s while its still locked by last call of %s.
*/
void NpParticleFluidReadData_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe47e0ULL || rel >= 0xe4aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4aa0 size=480 callers=0 calls=6
   calls: NonTrackedAlloc_177, NonTrackedAlloc_183, sub_2e8540, sub_3007d0, sub_3007e0, sub_301c30
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/b
   ref: PxShape::setMaterials() failed. Out of memory. Call will be ignored.
*/
void ScbShape(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4aa0ULL || rel >= 0xe4c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4c80 size=464 callers=12 calls=8
   calls: NonTrackedAlloc_177, NonTrackedAlloc_178, sub_106c60, sub_2d95e0, sub_2e8500, sub_2e8520, sub_2e8540, sub_d1950
*/
void sub_e4c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4c80ULL || rel >= 0xe4e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4e50 size=416 callers=3 calls=3
   calls: sub_d17a0, sub_d1950, sub_e5190
*/
void sub_e4e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4e50ULL || rel >= 0xe4ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e4ff0 size=416 callers=6 calls=3
   calls: sub_d17a0, sub_d1950, sub_e5190
*/
void sub_e4ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe4ff0ULL || rel >= 0xe5190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5190 size=224 callers=3 calls=1
   calls: PsArray_137
*/
void sub_e5190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5190ULL || rel >= 0xe5270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5270 size=352 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Scb::Actor *>::getName() [T = physx::Sc
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_137(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5270ULL || rel >= 0xe53d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e53d0 size=16 callers=0 calls=0
*/
void sub_e53d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe53d0ULL || rel >= 0xe53e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e53e0 size=128 callers=0 calls=2
   calls: sub_2b2300, sub_2b2b90
*/
void sub_e53e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe53e0ULL || rel >= 0xe5460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5460 size=64 callers=1 calls=0
*/
void sub_e5460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5460ULL || rel >= 0xe54a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e54a0 size=32 callers=0 calls=0
*/
void sub_e54a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe54a0ULL || rel >= 0xe54c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e54c0 size=32 callers=0 calls=0
*/
void sub_e54c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe54c0ULL || rel >= 0xe54e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e54e0 size=96 callers=0 calls=2
   calls: sub_2b2330, sub_300c80
*/
void sub_e54e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe54e0ULL || rel >= 0xe5540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5540 size=80 callers=0 calls=2
   calls: sub_2b2330, sub_300c80
*/
void sub_e5540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5540ULL || rel >= 0xe5590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5590 size=64 callers=0 calls=1
   calls: sub_2ff3e0
*/
void sub_e5590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5590ULL || rel >= 0xe55d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e55d0 size=160 callers=0 calls=3
   calls: sub_3007d0, sub_b8090, sub_b8400
   ref: NpClothFabric: double deletion detected!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/c
*/
void NpClothFabric(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe55d0ULL || rel >= 0xe5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5670 size=160 callers=0 calls=3
   calls: sub_3007d0, sub_b8090, sub_b8400
   ref: NpClothFabric: double deletion detected!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/c
*/
void NpClothFabric_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5670ULL || rel >= 0xe5710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5710 size=16 callers=0 calls=0
*/
void sub_e5710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5710ULL || rel >= 0xe5720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5720 size=16 callers=0 calls=0
*/
void sub_e5720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5720ULL || rel >= 0xe5730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5730 size=16 callers=2 calls=0
*/
void sub_e5730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5730ULL || rel >= 0xe5740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5740 size=16 callers=2 calls=0
*/
void sub_e5740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5740ULL || rel >= 0xe5750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5750 size=16 callers=0 calls=0
*/
void sub_e5750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5750ULL || rel >= 0xe5760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5760 size=16 callers=0 calls=0
*/
void sub_e5760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5760ULL || rel >= 0xe5770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5770 size=16 callers=0 calls=0
*/
void sub_e5770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5770ULL || rel >= 0xe5780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5780 size=16 callers=0 calls=0
*/
void sub_e5780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5780ULL || rel >= 0xe5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5790 size=16 callers=0 calls=0
*/
void sub_e5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5790ULL || rel >= 0xe57a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e57a0 size=16 callers=0 calls=0
*/
void sub_e57a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57a0ULL || rel >= 0xe57b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e57b0 size=16 callers=0 calls=0
*/
void sub_e57b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57b0ULL || rel >= 0xe57c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e57c0 size=16 callers=0 calls=0
*/
void sub_e57c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57c0ULL || rel >= 0xe57d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e57d0 size=16 callers=0 calls=0
*/
void sub_e57d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57d0ULL || rel >= 0xe57e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e57e0 size=16 callers=0 calls=0
*/
void sub_e57e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57e0ULL || rel >= 0xe57f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e57f0 size=16 callers=0 calls=0
*/
void sub_e57f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe57f0ULL || rel >= 0xe5800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5800 size=16 callers=0 calls=0
*/
void sub_e5800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5800ULL || rel >= 0xe5810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5810 size=16 callers=1 calls=0
*/
void sub_e5810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5810ULL || rel >= 0xe5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5820 size=16 callers=0 calls=0
*/
void sub_e5820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5820ULL || rel >= 0xe5830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5830 size=16 callers=0 calls=0
   ref: PxClothFabric
*/
void PxClothFabric(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5830ULL || rel >= 0xe5840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5840 size=96 callers=0 calls=0
   ref: PxBase
   ref: PxClothFabric
*/
void PxClothFabric_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5840ULL || rel >= 0xe58a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e58a0 size=16 callers=0 calls=0
*/
void sub_e58a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58a0ULL || rel >= 0xe58b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e58b0 size=240 callers=1 calls=4
   calls: sub_e0ca0, sub_e0cb0, sub_e1e10, sub_e3bc0
*/
void sub_e58b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe58b0ULL || rel >= 0xe59a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e59a0 size=96 callers=0 calls=3
   calls: sub_e0cb0, sub_e1e10, sub_e3c20
*/
void sub_e59a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe59a0ULL || rel >= 0xe5a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5a00 size=128 callers=0 calls=4
   calls: sub_300c80, sub_e0cb0, sub_e1e10, sub_e3c20
*/
void sub_e5a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5a00ULL || rel >= 0xe5a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5a80 size=160 callers=0 calls=1
   calls: sub_2a98a0
*/
void sub_e5a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5a80ULL || rel >= 0xe5b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5b20 size=48 callers=0 calls=0
*/
void sub_e5b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5b20ULL || rel >= 0xe5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5b50 size=16 callers=0 calls=0
*/
void sub_e5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5b50ULL || rel >= 0xe5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5b60 size=16 callers=0 calls=0
*/
void sub_e5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5b60ULL || rel >= 0xe5b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5b70 size=16 callers=0 calls=0
*/
void sub_e5b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5b70ULL || rel >= 0xe5b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5b80 size=32 callers=0 calls=0
*/
void sub_e5b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5b80ULL || rel >= 0xe5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5ba0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5ba0ULL || rel >= 0xe5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5c40 size=32 callers=0 calls=0
*/
void sub_e5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5c40ULL || rel >= 0xe5c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5c60 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e5c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5c60ULL || rel >= 0xe5d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5d00 size=16 callers=0 calls=0
*/
void sub_e5d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5d00ULL || rel >= 0xe5d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5d10 size=64 callers=0 calls=0
*/
void sub_e5d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5d10ULL || rel >= 0xe5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5d50 size=144 callers=0 calls=6
   calls: sub_b3e20, sub_caec0, sub_ced30, sub_e1150, sub_e1dc0, sub_e75a0
*/
void sub_e5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5d50ULL || rel >= 0xe5de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5de0 size=16 callers=0 calls=0
   ref: PxParticleFluid
*/
void PxParticleFluid(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5de0ULL || rel >= 0xe5df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5df0 size=160 callers=0 calls=0
   ref: PxBase
   ref: PxParticleBase
   ref: PxActor
   ref: PxParticleFluid
*/
void PxParticleFluid_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5df0ULL || rel >= 0xe5e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5e90 size=16 callers=0 calls=0
*/
void sub_e5e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5e90ULL || rel >= 0xe5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5ea0 size=16 callers=0 calls=0
*/
void sub_e5ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5ea0ULL || rel >= 0xe5eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5eb0 size=16 callers=0 calls=0
*/
void sub_e5eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5eb0ULL || rel >= 0xe5ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5ec0 size=16 callers=0 calls=0
*/
void sub_e5ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5ec0ULL || rel >= 0xe5ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5ed0 size=256 callers=0 calls=3
   calls: sub_2aa160, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbParticleSystem.h
   ref: PxActor::getWorldBounds(): Can't access particle world bounds during simulation without enabling bul
*/
void ScbParticleSystem_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5ed0ULL || rel >= 0xe5fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e5fd0 size=288 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_e5fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe5fd0ULL || rel >= 0xe60f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e60f0 size=208 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_e60f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe60f0ULL || rel >= 0xe61c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e61c0 size=80 callers=0 calls=0
*/
void sub_e61c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe61c0ULL || rel >= 0xe6210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6210 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e6210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6210ULL || rel >= 0xe62d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e62d0 size=80 callers=0 calls=0
*/
void sub_e62d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe62d0ULL || rel >= 0xe6320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6320 size=224 callers=0 calls=2
   calls: sub_3007d0, sub_e1d90
   ref: ./../../PhysX/src\NpActorTemplate.h
   ref: ./../../PhysX/src/buffering\ScbActor.h
   ref: Attempt to set the client id when an actor is already in a scene.
   ref: Attempt to set the client id when an actor is buffering
*/
void NpActorTemplate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6320ULL || rel >= 0xe6400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6400 size=64 callers=0 calls=0
*/
void sub_e6400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6400ULL || rel >= 0xe6440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6440 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e6440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6440ULL || rel >= 0xe6500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6500 size=96 callers=0 calls=0
*/
void sub_e6500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6500ULL || rel >= 0xe6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6560 size=16 callers=0 calls=0
*/
void sub_e6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6560ULL || rel >= 0xe6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6570 size=48 callers=0 calls=1
   calls: UNDEFINED
*/
void sub_e6570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6570ULL || rel >= 0xe65a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e65a0 size=48 callers=0 calls=1
   calls: UNDEFINED
*/
void sub_e65a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65a0ULL || rel >= 0xe65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e65d0 size=112 callers=0 calls=2
   calls: ScbParticleSystem, sub_2a9a90
*/
void sub_e65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe65d0ULL || rel >= 0xe6640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6640 size=16 callers=0 calls=0
*/
void sub_e6640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6640ULL || rel >= 0xe6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6650 size=16 callers=0 calls=0
*/
void sub_e6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6650ULL || rel >= 0xe6660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6660 size=16 callers=0 calls=0
*/
void sub_e6660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6660ULL || rel >= 0xe6670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6670 size=16 callers=0 calls=0
*/
void sub_e6670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6670ULL || rel >= 0xe6680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6680 size=16 callers=0 calls=0
*/
void sub_e6680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6680ULL || rel >= 0xe6690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6690 size=160 callers=0 calls=2
   calls: sub_3007d0, sub_e1dc0
   ref: Attempt to add forces on particle system which isn't assigned to any scene.
   ref: ./../../PhysX/src/particles/NpParticleBaseTemplate.h
*/
void NpParticleBaseTemplate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6690ULL || rel >= 0xe6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6730 size=32 callers=0 calls=0
*/
void sub_e6730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6730ULL || rel >= 0xe6750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6750 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e6750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6750ULL || rel >= 0xe67f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e67f0 size=80 callers=0 calls=1
   calls: sub_2aa1a0
*/
void sub_e67f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe67f0ULL || rel >= 0xe6840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6840 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e6840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6840ULL || rel >= 0xe6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6900 size=80 callers=0 calls=1
   calls: sub_2aa1b0
*/
void sub_e6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6900ULL || rel >= 0xe6950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6950 size=208 callers=0 calls=3
   calls: sub_2aa1c0, sub_d17a0, sub_d1950
*/
void sub_e6950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6950ULL || rel >= 0xe6a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

