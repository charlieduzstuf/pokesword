/* main functions 000faa00..00113df0 (7 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 000faa00 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering/ScbScene.h
   ref: PxScene::setBroadPhaseCallback() not allowed while simulation is running. Call will be ignored.
*/
void ScbScene_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaa00ULL || rel >= 0xfaa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000faa40 size=16 callers=0 calls=0
*/
void sub_faa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaa40ULL || rel >= 0xfaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000faa50 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering/ScbScene.h
   ref: PxScene::setCCDMaxPasses() not allowed while simulation is running. Call will be ignored.
*/
void ScbScene_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaa50ULL || rel >= 0xfaa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000faa90 size=16 callers=0 calls=0
*/
void sub_faa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaa90ULL || rel >= 0xfaaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000faaa0 size=16 callers=0 calls=0
*/
void sub_faaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaaa0ULL || rel >= 0xfaab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000faab0 size=16 callers=0 calls=0
*/
void sub_faab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaab0ULL || rel >= 0xfaac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000faac0 size=16 callers=0 calls=0
*/
void sub_faac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaac0ULL || rel >= 0xfaad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000faad0 size=16 callers=0 calls=0
*/
void sub_faad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaad0ULL || rel >= 0xfaae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000faae0 size=80 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::addBroadPhaseRegion(): region bounds are empty. Call will be ignored.
*/
void NpScene_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaae0ULL || rel >= 0xfab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fab30 size=16 callers=0 calls=0
*/
void sub_fab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfab30ULL || rel >= 0xfab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fab40 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering/ScbScene.h
   ref: PxScene::setFilterShaderData() not allowed while simulation is running. Call will be ignored.
*/
void ScbScene_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfab40ULL || rel >= 0xfab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fab80 size=16 callers=0 calls=0
*/
void sub_fab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfab80ULL || rel >= 0xfab90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fab90 size=16 callers=0 calls=0
*/
void sub_fab90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfab90ULL || rel >= 0xfaba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000faba0 size=16 callers=0 calls=0
*/
void sub_faba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfaba0ULL || rel >= 0xfabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fabb0 size=16 callers=0 calls=0
*/
void sub_fabb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfabb0ULL || rel >= 0xfabc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fabc0 size=400 callers=0 calls=4
   calls: NpRigidActorTemplate_13, NpRigidActorTemplate_14, sub_3007d0, sub_d17a0
   ref: PxScene::resetFiltering(): only PxParticleBase and PxRigidActor support this operation!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfabc0ULL || rel >= 0xfad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fad50 size=752 callers=1 calls=4
   calls: NonTrackedAlloc_183, sub_100540, sub_301c30, sub_d1950
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfad50ULL || rel >= 0xfb040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fb040 size=752 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_100540, sub_301c30, sub_d1950
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb040ULL || rel >= 0xfb330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fb330 size=752 callers=2 calls=4
   calls: NonTrackedAlloc_183, sub_100540, sub_301c30, sub_d1950
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb330ULL || rel >= 0xfb620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fb620 size=208 callers=0 calls=5
   calls: NpRigidActorTemplate_12, NpRigidActorTemplate_13, NpRigidActorTemplate_14, sub_d91e0, sub_ef400
*/
void sub_fb620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb620ULL || rel >= 0xfb6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fb6f0 size=16 callers=0 calls=0
*/
void sub_fb6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb6f0ULL || rel >= 0xfb700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fb700 size=624 callers=0 calls=7
   calls: sub_2e7540, sub_3007d0, sub_3007e0, sub_cf000, sub_cf2a0, sub_e0380, sub_fa2d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb700ULL || rel >= 0xfb970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fb970 size=32 callers=0 calls=0
   ref: PxScene::simulate: Simulation is still processing last simulate call, you should call fetchResults()
*/
void PxScene_simulate_Simulation_is_still_processing_last_sim(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb970ULL || rel >= 0xfb990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fb990 size=224 callers=0 calls=2
   calls: sub_3007d0, sub_cf5d0
   ref: PxScene::advance: advance() called illegally! advance() needed to be called after fetchCollision() a
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfb990ULL || rel >= 0xfba70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fba70 size=32 callers=0 calls=0
   ref: PxScene::collide: collide() called illegally! If it isn't the first frame, collide() needed to be ca
*/
void PxScene_collide_collide_called_illegally_If_it_isn_t_the(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfba70ULL || rel >= 0xfba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fba90 size=16 callers=0 calls=0
*/
void sub_fba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfba90ULL || rel >= 0xfbaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fbaa0 size=16 callers=0 calls=0
*/
void sub_fbaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbaa0ULL || rel >= 0xfbab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fbab0 size=336 callers=2 calls=7
   calls: sub_2ddfb0, sub_2ddfc0, sub_2ddfd0, sub_2df8d0, sub_2e7310, sub_3007d0, sub_3007e0
   ref: At least one object is out of the broadphase bounds. To manage those objects, define a PxBroadPhaseC
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbab0ULL || rel >= 0xfbc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fbc00 size=144 callers=0 calls=3
   calls: sub_2ffb30, sub_3007d0, sub_3007e0
   ref: PxScene::fetchCollision: fetchCollision() should be called after collide() and before advance()!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbc00ULL || rel >= 0xfbc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fbc90 size=336 callers=2 calls=11
   calls: NonTrackedAlloc_164, ScbScene_2, sub_29a9c0, sub_2dcca0, sub_2de100, sub_2e5bc0, sub_2e7440, sub_2e9390, sub_2e9720, sub_2ffaa0, sub_fbde0
*/
void sub_fbc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbc90ULL || rel >= 0xfbde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fbde0 size=720 callers=1 calls=7
   calls: PsArray_134, PsArray_141, PsArray_142, PsArray_143, PsArray_146, PsArray_147, sub_fdd90
*/
void sub_fbde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfbde0ULL || rel >= 0xfc0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc0b0 size=240 callers=0 calls=11
   calls: NpScene_21, sub_2de830, sub_2dec60, sub_2dee10, sub_2e6950, sub_2e7260, sub_2ffb30, sub_3007d0, sub_3007e0, sub_d0d40, sub_fbc90
   ref: PxScene::fetchResults: fetchResults() called illegally! It must be called after advance() or simulat
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc0b0ULL || rel >= 0xfc1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc1a0 size=224 callers=0 calls=10
   calls: NpScene_21, sub_2de830, sub_2dee10, sub_2e67b0, sub_2e6950, sub_2e7260, sub_2ffb30, sub_3007d0, sub_3007e0, sub_d0d40
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PXScene::fetchResultsStart: fetchResultsStart() called illegally! It must be called after advance() 
*/
void NpScene_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc1a0ULL || rel >= 0xfc280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc280 size=400 callers=0 calls=0
*/
void sub_fc280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc280ULL || rel >= 0xfc410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc410 size=464 callers=0 calls=6
   calls: NonTrackedAlloc_76, PsSwitchMutex, sub_2e2a60, sub_2e67b0, sub_2ff4c0, sub_923c0
*/
void sub_fc410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc410ULL || rel >= 0xfc5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc5e0 size=48 callers=0 calls=1
   calls: sub_fbc90
*/
void sub_fc5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc5e0ULL || rel >= 0xfc610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc610 size=240 callers=0 calls=9
   calls: NonTrackedAlloc_162, PsArray_137, PsArray_148, PsArray_149, sub_29a5e0, sub_3007d0, sub_e5190, sub_fe9a0, sub_febe0
   ref: PxScene::flushSimulation(): This call is not allowed while the simulation is running. Call will be i
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc610ULL || rel >= 0xfc700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc700 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: PxScene::flushQueryUpdates(): This call is not allowed while the simulation is running. Call will be
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc700ULL || rel >= 0xfc740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc740 size=16 callers=2 calls=0
*/
void sub_fc740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc740ULL || rel >= 0xfc750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc750 size=16 callers=1 calls=0
*/
void sub_fc750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc750ULL || rel >= 0xfc760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc760 size=16 callers=1 calls=0
*/
void sub_fc760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc760ULL || rel >= 0xfc770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc770 size=224 callers=0 calls=0
*/
void sub_fc770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc770ULL || rel >= 0xfc850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc850 size=160 callers=0 calls=1
   calls: sub_2e9270
*/
void sub_fc850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc850ULL || rel >= 0xfc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc8f0 size=256 callers=0 calls=4
   calls: sub_100c00, sub_10a8c0, sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpVolumeCache>::getName() [T = physx::N
*/
void NpScene_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc8f0ULL || rel >= 0xfc9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fc9f0 size=16 callers=0 calls=0
*/
void sub_fc9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfc9f0ULL || rel >= 0xfca00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fca00 size=16 callers=0 calls=0
*/
void sub_fca00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca00ULL || rel >= 0xfca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fca10 size=16 callers=0 calls=0
*/
void sub_fca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca10ULL || rel >= 0xfca20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fca20 size=16 callers=0 calls=0
*/
void sub_fca20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca20ULL || rel >= 0xfca30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fca30 size=32 callers=0 calls=0
*/
void sub_fca30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca30ULL || rel >= 0xfca50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fca50 size=48 callers=0 calls=0
*/
void sub_fca50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca50ULL || rel >= 0xfca80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fca80 size=32 callers=0 calls=0
*/
void sub_fca80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfca80ULL || rel >= 0xfcaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcaa0 size=192 callers=0 calls=3
   calls: sub_2e92c0, sub_3007d0, sub_3007e0
   ref: setVisualizationParameter: parameter out of range.
   ref: setVisualizationParameter: value must be larger or equal to 0.
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcaa0ULL || rel >= 0xfcb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcb60 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: getVisualizationParameter: param is not an enum.
*/
void NpScene_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcb60ULL || rel >= 0xfcbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcbd0 size=96 callers=0 calls=0
*/
void sub_fcbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcbd0ULL || rel >= 0xfcc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcc30 size=112 callers=0 calls=1
   calls: sub_2e9360
*/
void sub_fcc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcc30ULL || rel >= 0xfcca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcca0 size=16 callers=0 calls=0
*/
void sub_fcca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcca0ULL || rel >= 0xfccb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fccb0 size=16 callers=0 calls=0
*/
void sub_fccb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccb0ULL || rel >= 0xfccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fccc0 size=16 callers=0 calls=0
*/
void sub_fccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccc0ULL || rel >= 0xfccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fccd0 size=16 callers=0 calls=0
*/
void sub_fccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccd0ULL || rel >= 0xfcce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcce0 size=16 callers=0 calls=0
*/
void sub_fcce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcce0ULL || rel >= 0xfccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fccf0 size=48 callers=0 calls=0
*/
void sub_fccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfccf0ULL || rel >= 0xfcd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcd20 size=48 callers=0 calls=0
*/
void sub_fcd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd20ULL || rel >= 0xfcd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcd50 size=16 callers=0 calls=0
*/
void sub_fcd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd50ULL || rel >= 0xfcd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcd60 size=16 callers=0 calls=0
*/
void sub_fcd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd60ULL || rel >= 0xfcd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcd70 size=16 callers=0 calls=0
*/
void sub_fcd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd70ULL || rel >= 0xfcd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcd80 size=16 callers=0 calls=0
*/
void sub_fcd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd80ULL || rel >= 0xfcd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcd90 size=128 callers=0 calls=3
   calls: sub_2ffc70, sub_2fffe0, sub_2ffff0
*/
void sub_fcd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcd90ULL || rel >= 0xfce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fce10 size=160 callers=0 calls=3
   calls: sub_2fffe0, sub_2ffff0, sub_3007d0
   ref: PxScene::unlockRead() called without matching call to PxScene::lockRead(), behaviour will be undefin
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfce10ULL || rel >= 0xfceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fceb0 size=192 callers=0 calls=5
   calls: sub_2ff750, sub_2ffc70, sub_2fffe0, sub_2ffff0, sub_3007d0
   ref: PxScene::lockWrite() detected after a PxScene::lockRead(), lock upgrading is not supported, behaviou
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfceb0ULL || rel >= 0xfcf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fcf70 size=160 callers=0 calls=3
   calls: sub_2fffe0, sub_2ffff0, sub_3007d0
   ref: PxScene::unlockWrite() called without matching call to PxScene::lockWrite(), behaviour will be undef
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfcf70ULL || rel >= 0xfd010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd010 size=16 callers=0 calls=0
*/
void sub_fd010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd010ULL || rel >= 0xfd020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd020 size=1472 callers=0 calls=6
   calls: sub_10d6d0, sub_29ae10, sub_2be970, sub_3007d0, sub_cf5c0, sub_fd5e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::shiftOrigin() not allowed while simulation is running. Call will be ignored.
*/
void NpScene_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd020ULL || rel >= 0xfd5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd5e0 size=464 callers=1 calls=0
*/
void sub_fd5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd5e0ULL || rel >= 0xfd7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd7b0 size=16 callers=0 calls=0
*/
void sub_fd7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7b0ULL || rel >= 0xfd7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd7c0 size=448 callers=0 calls=3
   calls: sub_29ac30, sub_29add0, sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::fetchSceneQueries was not called!
*/
void NpScene_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd7c0ULL || rel >= 0xfd980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd980 size=16 callers=0 calls=0
*/
void sub_fd980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd980ULL || rel >= 0xfd990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fd990 size=160 callers=0 calls=5
   calls: sub_29ac30, sub_2ffaa0, sub_2ffb30, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::fetchQueries: fetchQueries() called illegally! It must be called after sceneQueriesUpdate()
*/
void NpScene_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfd990ULL || rel >= 0xfda30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fda30 size=256 callers=0 calls=4
   calls: PsArray_155, PsSync_2, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpBatchQuery>::getName() [T = physx::Np
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfda30ULL || rel >= 0xfdb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdb30 size=96 callers=0 calls=0
*/
void sub_fdb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdb30ULL || rel >= 0xfdb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdb90 size=16 callers=0 calls=0
*/
void sub_fdb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdb90ULL || rel >= 0xfdba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdba0 size=16 callers=0 calls=0
*/
void sub_fdba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdba0ULL || rel >= 0xfdbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdbb0 size=16 callers=0 calls=0
*/
void sub_fdbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbb0ULL || rel >= 0xfdbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdbc0 size=32 callers=0 calls=0
*/
void sub_fdbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbc0ULL || rel >= 0xfdbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdbe0 size=16 callers=0 calls=0
   ref: NpContactCallbackTask
*/
void NpContactCallbackTask(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbe0ULL || rel >= 0xfdbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdbf0 size=64 callers=0 calls=2
   calls: sub_300c80, sub_f61e0
*/
void sub_fdbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdbf0ULL || rel >= 0xfdc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdc30 size=16 callers=0 calls=0
*/
void sub_fdc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc30ULL || rel >= 0xfdc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdc40 size=16 callers=0 calls=0
*/
void sub_fdc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc40ULL || rel >= 0xfdc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdc50 size=16 callers=0 calls=0
*/
void sub_fdc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc50ULL || rel >= 0xfdc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdc60 size=16 callers=0 calls=0
*/
void sub_fdc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc60ULL || rel >= 0xfdc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdc70 size=16 callers=0 calls=0
*/
void sub_fdc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc70ULL || rel >= 0xfdc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdc80 size=16 callers=0 calls=0
*/
void sub_fdc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc80ULL || rel >= 0xfdc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdc90 size=16 callers=0 calls=0
*/
void sub_fdc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdc90ULL || rel >= 0xfdca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdca0 size=16 callers=0 calls=0
*/
void sub_fdca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdca0ULL || rel >= 0xfdcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdcb0 size=32 callers=0 calls=0
*/
void sub_fdcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdcb0ULL || rel >= 0xfdcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdcd0 size=16 callers=0 calls=0
   ref: NpScene.completion
*/
void NpScene_completion(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdcd0ULL || rel >= 0xfdce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdce0 size=80 callers=0 calls=1
   calls: sub_2ffad0
*/
void sub_fdce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdce0ULL || rel >= 0xfdd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdd30 size=16 callers=0 calls=0
*/
void sub_fdd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd30ULL || rel >= 0xfdd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdd40 size=48 callers=0 calls=2
   calls: sub_107ed0, sub_e1820
*/
void sub_fdd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd40ULL || rel >= 0xfdd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdd70 size=16 callers=0 calls=0
*/
void sub_fdd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd70ULL || rel >= 0xfdd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdd80 size=16 callers=0 calls=0
*/
void sub_fdd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd80ULL || rel >= 0xfdd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdd90 size=256 callers=1 calls=2
   calls: PsArray_144, PsArray_145
*/
void sub_fdd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdd90ULL || rel >= 0xfde90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fde90 size=272 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxDebugPoint>::getName() [T = physx::Px
   ref: <allocation names disabled>
*/
void PsArray_141(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfde90ULL || rel >= 0xfdfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fdfa0 size=352 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxDebugPoint>::getName() [T = physx::Px
   ref: <allocation names disabled>
*/
void PsArray_142(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfdfa0ULL || rel >= 0xfe100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe100 size=400 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxDebugLine>::getName() [T = physx::PxD
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_143(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe100ULL || rel >= 0xfe290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe290 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxDebugTriangle>::getName() [T = physx:
*/
void PsArray_144(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe290ULL || rel >= 0xfe3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe3f0 size=496 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxDebugTriangle>::getName() [T = physx:
*/
void PsArray_145(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe3f0ULL || rel >= 0xfe5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe5e0 size=432 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxDebugText>::getName() [T = physx::PxD
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_146(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe5e0ULL || rel >= 0xfe790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe790 size=528 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxDebugText>::getName() [T = physx::PxD
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_147(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe790ULL || rel >= 0xfe9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fe9a0 size=224 callers=2 calls=1
   calls: PsArray_148
*/
void sub_fe9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfe9a0ULL || rel >= 0xfea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fea80 size=352 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned short>::getName() [T = unsigned short
*/
void PsArray_148(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfea80ULL || rel >= 0xfebe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000febe0 size=224 callers=3 calls=1
   calls: PsArray_149
*/
void sub_febe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfebe0ULL || rel >= 0xfecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fecc0 size=352 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Scb::Shape *>::getName() [T = physx::Sc
*/
void PsArray_149(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfecc0ULL || rel >= 0xfee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fee20 size=352 callers=2 calls=0
*/
void sub_fee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfee20ULL || rel >= 0xfef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fef80 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_fef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfef80ULL || rel >= 0xfefd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fefd0 size=16 callers=0 calls=0
*/
void sub_fefd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefd0ULL || rel >= 0xfefe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fefe0 size=16 callers=0 calls=0
*/
void sub_fefe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfefe0ULL || rel >= 0xfeff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000feff0 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_feff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfeff0ULL || rel >= 0xff040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff040 size=16 callers=0 calls=0
*/
void sub_ff040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff040ULL || rel >= 0xff050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff050 size=16 callers=0 calls=0
*/
void sub_ff050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff050ULL || rel >= 0xff060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff060 size=400 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_94(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff060ULL || rel >= 0xff1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff1f0 size=400 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_95(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff1f0ULL || rel >= 0xff380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff380 size=400 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_96(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff380ULL || rel >= 0xff510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff510 size=400 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_97(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff510ULL || rel >= 0xff6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff6a0 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_ff6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6a0ULL || rel >= 0xff6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff6f0 size=16 callers=0 calls=0
*/
void sub_ff6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff6f0ULL || rel >= 0xff700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff700 size=32 callers=0 calls=0
*/
void sub_ff700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff700ULL || rel >= 0xff720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff720 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_ff720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff720ULL || rel >= 0xff770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff770 size=16 callers=0 calls=0
*/
void sub_ff770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff770ULL || rel >= 0xff780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff780 size=32 callers=0 calls=0
*/
void sub_ff780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff780ULL || rel >= 0xff7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff7a0 size=80 callers=0 calls=1
   calls: sub_300c80
*/
void sub_ff7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7a0ULL || rel >= 0xff7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff7f0 size=16 callers=0 calls=0
*/
void sub_ff7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff7f0ULL || rel >= 0xff800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff800 size=32 callers=0 calls=0
*/
void sub_ff800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff800ULL || rel >= 0xff820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ff820 size=752 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_98(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xff820ULL || rel >= 0xffb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ffb10 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpVolumeCache *>::getName() [T = physx:
*/
void PsArray_150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffb10ULL || rel >= 0xffc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ffc70 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpVolumeCache *>::getName() [T = physx:
*/
void PsArray_151(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffc70ULL || rel >= 0xffe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ffe00 size=352 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxRigidActor *>::getName() [T = physx::
*/
void PsArray_152(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xffe00ULL || rel >= 0xfff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fff60 size=368 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxBounds3>::getName() [T = physx::PxBou
*/
void PsArray_153(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfff60ULL || rel >= 0x1000d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001000d0 size=400 callers=4 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxRigidActor *>::getName() [T = physx::
*/
void PsArray_154(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1000d0ULL || rel >= 0x100260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00100260 size=368 callers=1 calls=1
   calls: NonTrackedAlloc_94
*/
void sub_100260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x100260ULL || rel >= 0x1003d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001003d0 size=368 callers=1 calls=1
   calls: NonTrackedAlloc_95
*/
void sub_1003d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1003d0ULL || rel >= 0x100540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00100540 size=992 callers=3 calls=4
   calls: sub_2d95e0, sub_d17a0, sub_d1950, sub_febe0
*/
void sub_100540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x100540ULL || rel >= 0x100920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00100920 size=368 callers=1 calls=1
   calls: NonTrackedAlloc_96
*/
void sub_100920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x100920ULL || rel >= 0x100a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00100a90 size=368 callers=1 calls=1
   calls: NonTrackedAlloc_97
*/
void sub_100a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x100a90ULL || rel >= 0x100c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00100c00 size=400 callers=1 calls=1
   calls: NonTrackedAlloc_98
*/
void sub_100c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x100c00ULL || rel >= 0x100d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00100d90 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpBatchQuery *>::getName() [T = physx::
*/
void PsArray_155(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x100d90ULL || rel >= 0x100f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00100f20 size=240 callers=1 calls=4
   calls: sub_2ffa20, sub_2ffa30, sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include\PsSync.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SyncImpl>::getName() [T = physx
*/
void PsSync_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x100f20ULL || rel >= 0x101010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101010 size=144 callers=1 calls=2
   calls: sub_2ffa70, sub_300c80
*/
void sub_101010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101010ULL || rel >= 0x1010a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001010a0 size=64 callers=0 calls=2
   calls: sub_101010, sub_300c80
*/
void sub_1010a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1010a0ULL || rel >= 0x1010e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001010e0 size=112 callers=0 calls=2
   calls: sub_2ff390, sub_3007d0
   ref: PxBatchQuery::setUserMemory: This batch is still executing, skipping setUserMemory
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpBatchQuery(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1010e0ULL || rel >= 0x101150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101150 size=16 callers=0 calls=0
*/
void sub_101150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101150ULL || rel >= 0x101160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101160 size=1840 callers=0 calls=7
   calls: sub_1027d0, sub_102a80, sub_102ea0, sub_2ff360, sub_2ff390, sub_3007d0, sub_3007e0
   ref: PxBatchQuery::execute: Another thread is still adding queries to this batch
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxBatchQuery::execute: This batch is already executing
*/
void NpBatchQuery_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101160ULL || rel >= 0x101890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101890 size=528 callers=0 calls=5
   calls: PsArray_156, sub_101aa0, sub_102430, sub_2ff390, sub_3007d0
   ref: PxBatchQuery::raycast: This batch is still executing, skipping query.
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpBatchQuery_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101890ULL || rel >= 0x101aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101aa0 size=1008 callers=3 calls=2
   calls: PsArray_156, sub_102430
*/
void sub_101aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101aa0ULL || rel >= 0x101e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00101e90 size=496 callers=0 calls=5
   calls: PsArray_156, sub_101aa0, sub_102430, sub_2ff390, sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxBatchQuery::overlap: This batch is still executing, skipping query.
*/
void NpBatchQuery_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x101e90ULL || rel >= 0x102080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102080 size=752 callers=0 calls=6
   calls: PsArray_156, sub_101aa0, sub_102430, sub_2ff390, sub_3007d0, sub_3007e0
   ref:  eMTD cannot be used in conjunction with eASSUME_NO_INITIAL_OVERLAP. eASSUME_NO_INITIAL_OVERLAP will
   ref:  Precise sweep doesn't support inflation, inflation will be overwritten to be zero
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref:  Precise sweep doesn't support MTD. Perform MTD with default sweep
   ref: PxBatchQuery::sweep: This batch is still executing, skipping query.
*/
void NpBatchQuery_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102080ULL || rel >= 0x102370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102370 size=96 callers=0 calls=2
   calls: sub_2ff390, sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxBatchQuery::release: This batch is still executing, skipping release
*/
void NpBatchQuery_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102370ULL || rel >= 0x1023d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001023d0 size=16 callers=0 calls=0
*/
void sub_1023d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023d0ULL || rel >= 0x1023e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001023e0 size=16 callers=0 calls=0
*/
void sub_1023e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023e0ULL || rel >= 0x1023f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001023f0 size=16 callers=0 calls=0
*/
void sub_1023f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1023f0ULL || rel >= 0x102400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102400 size=16 callers=0 calls=0
*/
void sub_102400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102400ULL || rel >= 0x102410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102410 size=16 callers=0 calls=0
*/
void sub_102410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102410ULL || rel >= 0x102420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102420 size=16 callers=0 calls=0
*/
void sub_102420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102420ULL || rel >= 0x102430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102430 size=64 callers=12 calls=1
   calls: PsArray_156
*/
void sub_102430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102430ULL || rel >= 0x102470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102470 size=336 callers=14 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]
*/
void PsArray_156(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102470ULL || rel >= 0x1025c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001025c0 size=64 callers=0 calls=0
*/
void sub_1025c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1025c0ULL || rel >= 0x102600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102600 size=48 callers=0 calls=0
*/
void sub_102600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102600ULL || rel >= 0x102630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102630 size=16 callers=0 calls=0
*/
void sub_102630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102630ULL || rel >= 0x102640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102640 size=16 callers=0 calls=0
*/
void sub_102640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102640ULL || rel >= 0x102650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102650 size=64 callers=0 calls=0
*/
void sub_102650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102650ULL || rel >= 0x102690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102690 size=48 callers=0 calls=0
*/
void sub_102690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102690ULL || rel >= 0x1026c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001026c0 size=16 callers=0 calls=0
*/
void sub_1026c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026c0ULL || rel >= 0x1026d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001026d0 size=16 callers=0 calls=0
*/
void sub_1026d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026d0ULL || rel >= 0x1026e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001026e0 size=64 callers=0 calls=0
*/
void sub_1026e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1026e0ULL || rel >= 0x102720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102720 size=48 callers=0 calls=0
*/
void sub_102720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102720ULL || rel >= 0x102750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102750 size=16 callers=0 calls=0
*/
void sub_102750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102750ULL || rel >= 0x102760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102760 size=16 callers=0 calls=0
*/
void sub_102760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102760ULL || rel >= 0x102770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102770 size=96 callers=0 calls=1
   calls: sub_1027d0
*/
void sub_102770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102770ULL || rel >= 0x1027d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001027d0 size=576 callers=3 calls=6
   calls: sub_103180, sub_103940, sub_107ed0, sub_29a8b0, sub_29ac30, sub_e17f0
*/
void sub_1027d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1027d0ULL || rel >= 0x102a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102a10 size=112 callers=0 calls=1
   calls: sub_102a80
*/
void sub_102a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a10ULL || rel >= 0x102a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102a80 size=688 callers=2 calls=6
   calls: sub_103a60, sub_107ed0, sub_195060, sub_29a8b0, sub_29ac30, sub_e17f0
*/
void sub_102a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102a80ULL || rel >= 0x102d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102d30 size=368 callers=0 calls=3
   calls: sub_102ea0, sub_3007d0, sub_3007e0
   ref:  eMTD cannot be used in conjunction with eASSUME_NO_INITIAL_OVERLAP. eASSUME_NO_INITIAL_OVERLAP will
   ref:  Precise sweep doesn't support inflation, inflation will be overwritten to be zero
   ref:  Precise sweep doesn't support MTD. Perform MTD with default sweep
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpSceneQueries(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102d30ULL || rel >= 0x102ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00102ea0 size=704 callers=3 calls=7
   calls: NpSceneQueries_2, sub_104a60, sub_107ed0, sub_195060, sub_29a8b0, sub_29ac30, sub_e17f0
*/
void sub_102ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x102ea0ULL || rel >= 0x103160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103160 size=16 callers=0 calls=0
*/
void sub_103160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103160ULL || rel >= 0x103170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103170 size=16 callers=0 calls=0
*/
void sub_103170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103170ULL || rel >= 0x103180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103180 size=1984 callers=1 calls=4
   calls: sub_1027d0, sub_2d96e0, sub_2f8bc0, sub_e1870
*/
void sub_103180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103180ULL || rel >= 0x103940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103940 size=288 callers=2 calls=0
*/
void sub_103940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103940ULL || rel >= 0x103a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103a60 size=1136 callers=1 calls=3
   calls: sub_2d96e0, sub_2f8bc0, sub_e1870
*/
void sub_103a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103a60ULL || rel >= 0x103ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00103ed0 size=2960 callers=1 calls=8
   calls: GuBounds, sub_102ea0, sub_13a090, sub_2d96e0, sub_2f8bc0, sub_3007d0, sub_3007e0, sub_e1870
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::sweep(): first geometry object parameter must be sphere, capsule, box or convex geometry.
*/
void NpSceneQueries_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x103ed0ULL || rel >= 0x104a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104a60 size=288 callers=2 calls=0
*/
void sub_104a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104a60ULL || rel >= 0x104b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104b80 size=16 callers=0 calls=0
*/
void sub_104b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b80ULL || rel >= 0x104b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104b90 size=16 callers=0 calls=0
*/
void sub_104b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104b90ULL || rel >= 0x104ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104ba0 size=16 callers=0 calls=0
*/
void sub_104ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ba0ULL || rel >= 0x104bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104bb0 size=16 callers=0 calls=0
*/
void sub_104bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bb0ULL || rel >= 0x104bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104bc0 size=16 callers=0 calls=0
*/
void sub_104bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bc0ULL || rel >= 0x104bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104bd0 size=16 callers=0 calls=0
*/
void sub_104bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bd0ULL || rel >= 0x104be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104be0 size=16 callers=0 calls=0
*/
void sub_104be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104be0ULL || rel >= 0x104bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104bf0 size=16 callers=0 calls=0
*/
void sub_104bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104bf0ULL || rel >= 0x104c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104c00 size=16 callers=0 calls=0
*/
void sub_104c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c00ULL || rel >= 0x104c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104c10 size=16 callers=0 calls=0
*/
void sub_104c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c10ULL || rel >= 0x104c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104c20 size=320 callers=1 calls=3
   calls: sub_2f8770, sub_2f8990, sub_2ff3c0
*/
void sub_104c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104c20ULL || rel >= 0x104d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104d60 size=16 callers=1 calls=0
*/
void sub_104d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d60ULL || rel >= 0x104d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104d70 size=432 callers=2 calls=4
   calls: sub_104d60, sub_2f8a30, sub_2f8a60, sub_2ff3e0
*/
void sub_104d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d70ULL || rel >= 0x104f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104f20 size=16 callers=0 calls=0
*/
void sub_104f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104f20ULL || rel >= 0x104f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104f30 size=64 callers=0 calls=2
   calls: sub_104d70, sub_300c80
*/
void sub_104f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104f30ULL || rel >= 0x104f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104f70 size=64 callers=0 calls=2
   calls: sub_104d70, sub_300c80
*/
void sub_104f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104f70ULL || rel >= 0x104fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104fb0 size=64 callers=0 calls=1
   calls: sub_b86e0
*/
void sub_104fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104fb0ULL || rel >= 0x104ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00104ff0 size=64 callers=0 calls=1
   calls: sub_b86e0
*/
void sub_104ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ff0ULL || rel >= 0x105030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105030 size=64 callers=0 calls=1
   calls: sub_2f8c00
*/
void sub_105030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105030ULL || rel >= 0x105070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105070 size=368 callers=0 calls=2
   calls: sub_2f8a30, sub_2f8a60
*/
void sub_105070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105070ULL || rel >= 0x1051e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001051e0 size=464 callers=1 calls=5
   calls: sub_2f8a30, sub_2f8a60, sub_2f8d00, sub_2f8d40, sub_2ff3c0
*/
void sub_1051e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1051e0ULL || rel >= 0x1053b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001053b0 size=208 callers=0 calls=3
   calls: sub_1051e0, sub_2f8980, sub_2f8ca0
*/
void sub_1053b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053b0ULL || rel >= 0x105480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105480 size=16 callers=0 calls=0
*/
void sub_105480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105480ULL || rel >= 0x105490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105490 size=64 callers=0 calls=1
   calls: sub_2ff3e0
*/
void sub_105490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105490ULL || rel >= 0x1054d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001054d0 size=64 callers=4 calls=1
   calls: sub_2ff3e0
*/
void sub_1054d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054d0ULL || rel >= 0x105510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105510 size=192 callers=1 calls=6
   calls: sub_107ed0, sub_29a680, sub_3007d0, sub_3007e0, sub_e17f0, sub_e1dc0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpShape(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105510ULL || rel >= 0x1055d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001055d0 size=16 callers=0 calls=0
*/
void sub_1055d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055d0ULL || rel >= 0x1055e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001055e0 size=400 callers=0 calls=4
   calls: sub_105770, sub_2ff3c0, sub_2ff3e0, sub_3007d0
   ref: PxShape::setGeometry: Shape is a part of pruning structure, pruning structure is now invalid!
   ref: PxShape::setGeometry(): Invalid geometry type. Changing the type of the shape is not supported.
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpShape_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055e0ULL || rel >= 0x105770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105770 size=304 callers=1 calls=7
   calls: NonTrackedAlloc_178, sub_19a380, sub_2d95e0, sub_2e8500, sub_2e8520, sub_d17a0, sub_d1950
*/
void sub_105770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105770ULL || rel >= 0x1058a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001058a0 size=48 callers=0 calls=0
*/
void sub_1058a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058a0ULL || rel >= 0x1058d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001058d0 size=96 callers=0 calls=0
*/
void sub_1058d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058d0ULL || rel >= 0x105930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105930 size=64 callers=0 calls=0
*/
void sub_105930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105930ULL || rel >= 0x105970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105970 size=64 callers=0 calls=0
*/
void sub_105970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105970ULL || rel >= 0x1059b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001059b0 size=64 callers=0 calls=0
*/
void sub_1059b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059b0ULL || rel >= 0x1059f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001059f0 size=160 callers=0 calls=0
*/
void sub_1059f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059f0ULL || rel >= 0x105a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105a90 size=144 callers=0 calls=0
*/
void sub_105a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a90ULL || rel >= 0x105b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105b20 size=112 callers=0 calls=0
*/
void sub_105b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b20ULL || rel >= 0x105b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105b90 size=16 callers=0 calls=0
*/
void sub_105b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b90ULL || rel >= 0x105ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105ba0 size=192 callers=0 calls=2
   calls: NpShape, sub_105c60
   ref: PxShape::setLocalPose: Shape is a part of pruning structure, pruning structure is now invalid!
*/
void PxShape_setLocalPose_Shape_is_a_part_of_pruning_structur(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ba0ULL || rel >= 0x105c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105c60 size=320 callers=1 calls=3
   calls: sub_2d95e0, sub_d17a0, sub_d1950
*/
void sub_105c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c60ULL || rel >= 0x105da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105da0 size=80 callers=0 calls=0
*/
void sub_105da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105da0ULL || rel >= 0x105df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105df0 size=240 callers=0 calls=3
   calls: sub_2d95e0, sub_d17a0, sub_d1950
*/
void sub_105df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105df0ULL || rel >= 0x105ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105ee0 size=32 callers=0 calls=0
*/
void sub_105ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ee0ULL || rel >= 0x105f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105f00 size=32 callers=0 calls=0
*/
void sub_105f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f00ULL || rel >= 0x105f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105f20 size=16 callers=0 calls=0
*/
void sub_105f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f20ULL || rel >= 0x105f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00105f30 size=656 callers=0 calls=7
   calls: NonTrackedAlloc_183, sub_1061c0, sub_2f8a30, sub_2f8a60, sub_2ff3c0, sub_2ff3e0, sub_301c30
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpShape_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f30ULL || rel >= 0x1061c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001061c0 size=400 callers=1 calls=3
   calls: sub_d17a0, sub_d1950, sub_fe9a0
*/
void sub_1061c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1061c0ULL || rel >= 0x106350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106350 size=32 callers=0 calls=0
*/
void sub_106350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106350ULL || rel >= 0x106370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106370 size=288 callers=0 calls=2
   calls: sub_2f8a30, sub_2f8a60
*/
void sub_106370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106370ULL || rel >= 0x106490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106490 size=416 callers=0 calls=3
   calls: sub_2f8a60, sub_3007d0, sub_3007e0
   ref: PxShape::getMaterialFromInternalFaceIndex received 0xFFFFffff as input - returning NULL.
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpShape_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106490ULL || rel >= 0x106630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106630 size=208 callers=0 calls=3
   calls: sub_2d95e0, sub_d17a0, sub_d1950
*/
void sub_106630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106630ULL || rel >= 0x106700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106700 size=32 callers=0 calls=0
*/
void sub_106700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106700ULL || rel >= 0x106720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106720 size=208 callers=0 calls=3
   calls: sub_2d95e0, sub_d17a0, sub_d1950
*/
void sub_106720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106720ULL || rel >= 0x1067f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001067f0 size=32 callers=0 calls=0
*/
void sub_1067f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1067f0ULL || rel >= 0x106810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106810 size=704 callers=2 calls=10
   calls: sub_107b90, sub_107c30, sub_296df0, sub_2d95e0, sub_3007d0, sub_3007e0, sub_d17a0, sub_d1950, sub_e17f0, sub_e1dc0
   ref: PxShape::setFlag: Shape is a part of pruning structure, pruning structure is now invalid!
   ref: PxShape::setFlag(s): shapes cannot simultaneously be trigger shapes and simulation shapes.
   ref: PxShape::setFlag(s): triangle mesh, heightfield and plane shapes can only be simulation shapes if pa
   ref: PxShape::setFlag(s): triangle mesh and heightfield triggers are not supported!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpShape_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106810ULL || rel >= 0x106ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106ad0 size=80 callers=0 calls=1
   calls: NpShape_5
*/
void sub_106ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ad0ULL || rel >= 0x106b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106b20 size=48 callers=0 calls=1
   calls: NpShape_5
*/
void sub_106b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b20ULL || rel >= 0x106b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106b50 size=48 callers=0 calls=0
*/
void sub_106b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b50ULL || rel >= 0x106b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106b80 size=16 callers=0 calls=0
*/
void sub_106b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b80ULL || rel >= 0x106b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106b90 size=80 callers=4 calls=1
   calls: sub_2ff3c0
*/
void sub_106b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106b90ULL || rel >= 0x106be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106be0 size=96 callers=2 calls=1
   calls: sub_2ff3e0
*/
void sub_106be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106be0ULL || rel >= 0x106c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106c40 size=16 callers=0 calls=0
*/
void sub_106c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c40ULL || rel >= 0x106c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106c50 size=16 callers=0 calls=0
*/
void sub_106c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c50ULL || rel >= 0x106c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106c60 size=32 callers=2 calls=0
*/
void sub_106c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c60ULL || rel >= 0x106c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106c80 size=16 callers=32 calls=0
*/
void sub_106c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c80ULL || rel >= 0x106c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106c90 size=16 callers=9 calls=0
*/
void sub_106c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106c90ULL || rel >= 0x106ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106ca0 size=64 callers=7 calls=1
   calls: sub_2ff3e0
*/
void sub_106ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ca0ULL || rel >= 0x106ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106ce0 size=16 callers=0 calls=0
   ref: PxShape
*/
void PxShape(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106ce0ULL || rel >= 0x106cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106cf0 size=96 callers=0 calls=0
   ref: PxBase
   ref: PxShape
*/
void PxShape_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106cf0ULL || rel >= 0x106d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106d50 size=64 callers=3 calls=2
   calls: sub_117e40, sub_117e50
*/
void sub_106d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d50ULL || rel >= 0x106d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106d90 size=64 callers=3 calls=0
*/
void sub_106d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106d90ULL || rel >= 0x106dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106dd0 size=128 callers=14 calls=2
   calls: sub_117e50, sub_117e60
*/
void sub_106dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106dd0ULL || rel >= 0x106e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106e50 size=48 callers=4 calls=1
   calls: sub_117f40
*/
void sub_106e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e50ULL || rel >= 0x106e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106e80 size=48 callers=3 calls=1
   calls: sub_117fb0
*/
void sub_106e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106e80ULL || rel >= 0x106eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106eb0 size=288 callers=3 calls=4
   calls: sub_106fd0, sub_117fe0, sub_29a750, sub_e1dc0
*/
void sub_106eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106eb0ULL || rel >= 0x106fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00106fd0 size=448 callers=1 calls=5
   calls: PsArray_157, sub_106c90, sub_2d9560, sub_d17a0, sub_d1950
*/
void sub_106fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x106fd0ULL || rel >= 0x107190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107190 size=272 callers=3 calls=6
   calls: sub_106be0, sub_1072a0, sub_117ee0, sub_118170, sub_29a8e0, sub_e1dc0
*/
void sub_107190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107190ULL || rel >= 0x1072a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001072a0 size=736 callers=1 calls=6
   calls: PsArray_158, sub_106ca0, sub_2d9590, sub_caf00, sub_d17a0, sub_d1950
*/
void sub_1072a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1072a0ULL || rel >= 0x107580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107580 size=336 callers=3 calls=3
   calls: sub_106be0, sub_117e60, sub_29a8e0
*/
void sub_107580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107580ULL || rel >= 0x1076d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001076d0 size=240 callers=5 calls=1
   calls: sub_29a8e0
*/
void sub_1076d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1076d0ULL || rel >= 0x1077c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001077c0 size=192 callers=0 calls=0
*/
void sub_1077c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1077c0ULL || rel >= 0x107880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107880 size=672 callers=3 calls=1
   calls: GuBounds
*/
void sub_107880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107880ULL || rel >= 0x107b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107b20 size=112 callers=2 calls=1
   calls: sub_caf00
*/
void sub_107b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b20ULL || rel >= 0x107b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107b90 size=160 callers=1 calls=2
   calls: sub_117ee0, sub_29a750
*/
void sub_107b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107b90ULL || rel >= 0x107c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107c30 size=128 callers=1 calls=2
   calls: sub_117ee0, sub_29a8e0
*/
void sub_107c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107c30ULL || rel >= 0x107cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107cb0 size=384 callers=7 calls=1
   calls: sub_29a750
*/
void sub_107cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107cb0ULL || rel >= 0x107e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107e30 size=160 callers=12 calls=1
   calls: sub_29a680
*/
void sub_107e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107e30ULL || rel >= 0x107ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107ed0 size=64 callers=5 calls=1
   calls: sub_117ee0
*/
void sub_107ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107ed0ULL || rel >= 0x107f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00107f10 size=9056 callers=3 calls=15
   calls: GuBounds, PsArray_134, sub_10a680, sub_1184d0, sub_1184e0, sub_118570, sub_118a20, sub_118d60, sub_119020, sub_119100, sub_1191d0, sub_13b2b0
   ... +3 more
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_99(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x107f10ULL || rel >= 0x10a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010a270 size=464 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Scb::Shape *>::getName() [T = physx::Sc
*/
void PsArray_157(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10a270ULL || rel >= 0x10a440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010a440 size=576 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Scb::RemovedShape>::getName() [T = phys
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
*/
void PsArray_158(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10a440ULL || rel >= 0x10a680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010a680 size=480 callers=4 calls=0
*/
void sub_10a680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10a680ULL || rel >= 0x10a860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010a860 size=96 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh\GuMidphaseInterface.h
*/
void GuMidphaseInterface(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10a860ULL || rel >= 0x10a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010a8c0 size=256 callers=1 calls=2
   calls: PsArray_159, sub_300c80
*/
void sub_10a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10a8c0ULL || rel >= 0x10a9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010a9c0 size=144 callers=0 calls=1
   calls: sub_300c80
*/
void sub_10a9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10a9c0ULL || rel >= 0x10aa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010aa50 size=160 callers=0 calls=1
   calls: sub_300c80
*/
void sub_10aa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10aa50ULL || rel >= 0x10aaf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010aaf0 size=32 callers=0 calls=0
*/
void sub_10aaf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10aaf0ULL || rel >= 0x10ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010ab10 size=32 callers=0 calls=0
*/
void sub_10ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ab10ULL || rel >= 0x10ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010ab30 size=80 callers=0 calls=0
*/
void sub_10ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ab30ULL || rel >= 0x10ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010ab80 size=80 callers=0 calls=0
*/
void sub_10ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ab80ULL || rel >= 0x10abd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010abd0 size=320 callers=0 calls=3
   calls: NpVolumeCache_2, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxVolumeCache::fill(): unsupported cache volume geometry type.
*/
void NpVolumeCache(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10abd0ULL || rel >= 0x10ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010ad10 size=736 callers=9 calls=6
   calls: NonTrackedAlloc_183, PsArray_160, sub_10aff0, sub_3007d0, sub_3007e0, sub_301c30
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxVolumeCache::fill(): Fallback memory allocation failed, mMaxShapeCount = %d. Try reducing the cach
*/
void NpVolumeCache_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ad10ULL || rel >= 0x10aff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010aff0 size=320 callers=1 calls=1
   calls: PsArray_159
*/
void sub_10aff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10aff0ULL || rel >= 0x10b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010b130 size=128 callers=0 calls=0
*/
void sub_10b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b130ULL || rel >= 0x10b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010b1b0 size=704 callers=0 calls=2
   calls: NonTrackedAlloc_183, sub_301c30
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpVolumeCache_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b1b0ULL || rel >= 0x10b470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010b470 size=64 callers=0 calls=0
*/
void sub_10b470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b470ULL || rel >= 0x10b4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010b4b0 size=16 callers=0 calls=0
*/
void sub_10b4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4b0ULL || rel >= 0x10b4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010b4c0 size=64 callers=0 calls=0
*/
void sub_10b4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b4c0ULL || rel >= 0x10b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010b500 size=16 callers=0 calls=0
*/
void sub_10b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b500ULL || rel >= 0x10b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010b510 size=96 callers=0 calls=1
   calls: NpVolumeCache_4
*/
void sub_10b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b510ULL || rel >= 0x10b570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010b570 size=3056 callers=2 calls=8
   calls: NonTrackedAlloc_183, NpVolumeCache_2, NpVolumeCache_4, sub_19a330, sub_3007d0, sub_3007e0, sub_301c30, sub_e1850
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxVolumeCache: unspecified volume geometry. Reverting to uncached scene query.
*/
void NpVolumeCache_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10b570ULL || rel >= 0x10c160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010c160 size=96 callers=0 calls=1
   calls: NpVolumeCache_5
*/
void sub_10c160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c160ULL || rel >= 0x10c1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010c1c0 size=2992 callers=2 calls=8
   calls: NonTrackedAlloc_183, NpVolumeCache_2, NpVolumeCache_5, sub_199fa0, sub_3007d0, sub_3007e0, sub_301c30, sub_e1850
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxVolumeCache: unspecified volume geometry. Reverting to uncached scene query.
*/
void NpVolumeCache_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10c1c0ULL || rel >= 0x10cd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010cd70 size=80 callers=0 calls=1
   calls: NpVolumeCache_6
*/
void sub_10cd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cd70ULL || rel >= 0x10cdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010cdc0 size=2320 callers=3 calls=8
   calls: NonTrackedAlloc_183, NpVolumeCache_2, NpVolumeCache_6, sub_19a2d0, sub_3007d0, sub_3007e0, sub_301c30, sub_e1850
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxVolumeCache: unspecified volume geometry. Reverting to uncached scene query.
*/
void NpVolumeCache_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10cdc0ULL || rel >= 0x10d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d6d0 size=48 callers=1 calls=0
*/
void sub_10d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d6d0ULL || rel >= 0x10d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d700 size=176 callers=0 calls=1
   calls: NpVolumeCache_2
*/
void sub_10d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d700ULL || rel >= 0x10d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d7b0 size=16 callers=0 calls=0
*/
void sub_10d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7b0ULL || rel >= 0x10d7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d7c0 size=16 callers=0 calls=0
*/
void sub_10d7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7c0ULL || rel >= 0x10d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d7d0 size=464 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxActorShape>::getName() [T = physx::Px
*/
void PsArray_159(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d7d0ULL || rel >= 0x10d9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d9a0 size=16 callers=0 calls=0
*/
void sub_10d9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d9a0ULL || rel >= 0x10d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d9b0 size=16 callers=0 calls=0
*/
void sub_10d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d9b0ULL || rel >= 0x10d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010d9c0 size=512 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxActorShape>::getName() [T = physx::Px
*/
void PsArray_160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10d9c0ULL || rel >= 0x10dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010dbc0 size=496 callers=1 calls=0
   ref: PxBase
   ref: NpConstraint
   ref: Scb::Constraint
   ref: PxRigidActor
   ref: mActor0
   ref: mPaddingFromBool
   ref: mActor1
   ref: mIsDirty
*/
void mPaddingFromBool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10dbc0ULL || rel >= 0x10ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010ddb0 size=672 callers=1 calls=0
   ref: PxBase
   ref: userData
   ref: PxRigidActor
   ref: mExclusiveAndActorCount
   ref: Scb::Shape
   ref: mActor
   ref: string
   ref: RefCountable
*/
void mExclusiveAndActorCount(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ddb0ULL || rel >= 0x10e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010e050 size=608 callers=1 calls=0
   ref: PxBase
   ref: NpShapeManager
   ref: NpConnectorArray
   ref: userData
   ref: NpActor
   ref: string
   ref: mShapeManager
   ref: mIndex
*/
void mIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e050ULL || rel >= 0x10e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010e2b0 size=560 callers=1 calls=0
   ref: NpConnectorArray
   ref: mCapacity
   ref: mBuffer
   ref: mPadding
   ref: mBufferUsed
   ref: NpConnector
*/
void NpConnectorArray(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e2b0ULL || rel >= 0x10e4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010e4e0 size=608 callers=1 calls=0
   ref: PxBase
   ref: NpShapeManager
   ref: NpConnectorArray
   ref: userData
   ref: NpRigidDynamic
   ref: Scb::Body
   ref: NpActor
   ref: string
*/
void mIndex_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e4e0ULL || rel >= 0x10e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010e740 size=560 callers=1 calls=0
   ref: mCapacity
   ref: NpArticulationLink
   ref: mBuffer
   ref: mPadding
   ref: mBufferUsed
   ref: NpArticulationLinkArray
*/
void NpArticulationLinkArray(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e740ULL || rel >= 0x10e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010e970 size=560 callers=1 calls=0
   ref: PxBase
   ref: mArticulation
   ref: userData
   ref: NpAggregate
   ref: string
   ref: Scb::Articulation
   ref: NpArticulation
   ref: mAggregate
*/
void NpArticulationLinkArray_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10e970ULL || rel >= 0x10eba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010eba0 size=896 callers=1 calls=0
   ref: PxBase
   ref: NpShapeManager
   ref: NpConnectorArray
   ref: userData
   ref: NpArticulationLink
   ref: NpArticulationJoint
   ref: Scb::Body
   ref: mInboundJoint
*/
void mIndex_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10eba0ULL || rel >= 0x10ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010ef20 size=496 callers=1 calls=0
   ref: PxBase
   ref: userData
   ref: NpClothFabric
   ref: NpActor
   ref: NpCloth
   ref: mClothFabric
   ref: mParticleData
   ref: Scb::Cloth
*/
void mParticleData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10ef20ULL || rel >= 0x10f110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0010f110 size=6976 callers=0 calls=41
   calls: ArticulationJointCore, BV4TriangleMesh, MaterialIndicesStruct, NpArticulationLinkArray, NpArticulationLinkArray_2, NpConnectorArray, PxConstraintFlags, PxMaterialTableIndex, PxsRigidCore, RTreeTriangleMesh, Sc_RigidCore, Scb_Actor
   ... +29 more
   ref: PxBase
   ref: NpShapeManager
   ref: PtrTable
   ref: PxType
   ref: mWordCount
   ref: rotation
   ref: NpConnectorArray
   ref: userData
*/
void restParticleDistance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10f110ULL || rel >= 0x110c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110c50 size=368 callers=1 calls=0
   ref: mStreamPtr
   ref: ScbType::Enum
   ref: mControlState
   ref: Scb::Base
   ref: Scb::Scene
   ref: mScene
*/
void mControlState(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110c50ULL || rel >= 0x110dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110dc0 size=224 callers=1 calls=0
   ref: Scb::Shape
   ref: Scb::Base
   ref: ShapeCore
   ref: mShape
*/
void ShapeCore(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110dc0ULL || rel >= 0x110ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110ea0 size=160 callers=1 calls=0
   ref: Scb::Actor
   ref: Scb::Base
*/
void Scb_Base(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110ea0ULL || rel >= 0x110f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110f40 size=160 callers=1 calls=0
   ref: Scb::Actor
   ref: Scb::RigidObject
*/
void Scb_Actor(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110f40ULL || rel >= 0x110fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00110fe0 size=608 callers=1 calls=0
   ref: mBodyCore
   ref: mBufferedIsSleeping
   ref: Scb::Body
   ref: Sc::BodyCore
   ref: mBufferedLinVelocity
   ref: mBufferedBody2World
   ref: mBodyBufferFlags
   ref: PxVec3
*/
void mBufferedWakeCounter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x110fe0ULL || rel >= 0x111240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111240 size=224 callers=1 calls=0
   ref: mStatic
   ref: Sc::StaticCore
   ref: Scb::RigidObject
   ref: Scb::RigidStatic
*/
void mStatic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111240ULL || rel >= 0x111320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111320 size=368 callers=1 calls=0
   ref: mArticulation
   ref: mBufferedIsSleeping
   ref: Scb::Articulation
   ref: Scb::Base
   ref: mBufferedWakeCounter
   ref: PxReal
   ref: ArticulationCore
*/
void mBufferedWakeCounter_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111320ULL || rel >= 0x111490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111490 size=224 callers=1 calls=0
   ref: ArticulationJointCore
   ref: Scb::Base
   ref: Scb::ArticulationJoint
   ref: mJoint
*/
void ArticulationJointCore(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111490ULL || rel >= 0x111570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111570 size=416 callers=1 calls=0
   ref: Scb::Constraint
   ref: mBrokenFlag
   ref: mBufferedForce
   ref: Scb::Base
   ref: PxVec3
   ref: mBufferedTorque
   ref: ConstraintCore
   ref: mConstraint
*/
void PxConstraintFlags(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111570ULL || rel >= 0x111710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111710 size=416 callers=1 calls=0
   ref: PxAggregate
   ref: mPxAggregate
   ref: mMaxNbActors
   ref: Scb::Aggregate
   ref: Scb::Base
   ref: mSelfCollide
   ref: mAggregateID
*/
void mSelfCollide(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111710ULL || rel >= 0x1118b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001118b0 size=224 callers=1 calls=0
   ref: Sc::ClothCore
   ref: Scb::Actor
   ref: Scb::Cloth
   ref: mCloth
*/
void mCloth(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1118b0ULL || rel >= 0x111990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111990 size=672 callers=1 calls=0
   ref: ForceUpdates
   ref: mForceUpdatesVel
   ref: mReadParticleFluidData
   ref: mForceUpdatesAcc
   ref: Scb::Actor
   ref: PxVec3
   ref: BitMap
   ref: NpParticleFluidReadData
*/
void mReadParticleFluidData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111990ULL || rel >= 0x111c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111c30 size=160 callers=0 calls=1
   calls: sub_2bd800
*/
void sub_111c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111c30ULL || rel >= 0x111cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111cd0 size=112 callers=0 calls=0
*/
void sub_111cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111cd0ULL || rel >= 0x111d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111d40 size=112 callers=0 calls=0
*/
void sub_111d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111d40ULL || rel >= 0x111db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111db0 size=16 callers=0 calls=0
*/
void sub_111db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111db0ULL || rel >= 0x111dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111dc0 size=16 callers=0 calls=0
*/
void sub_111dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111dc0ULL || rel >= 0x111dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111dd0 size=16 callers=0 calls=0
*/
void sub_111dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111dd0ULL || rel >= 0x111de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00111de0 size=1792 callers=1 calls=1
   calls: sub_300cb0
   ref: NpConstraint
   ref: HeightField
   ref: PxSerializerDefaultAdapter
   ref: NpArticulationLink
   ref: NpArticulationJoint
   ref: NpParticleFluid
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: NpClothFabric
*/
void HeightField(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x111de0ULL || rel >= 0x1124e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001124e0 size=1408 callers=1 calls=1
   calls: sub_300cb0
*/
void sub_1124e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1124e0ULL || rel >= 0x112a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112a60 size=16 callers=0 calls=0
*/
void sub_112a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112a60ULL || rel >= 0x112a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112a70 size=32 callers=0 calls=0
*/
void sub_112a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112a70ULL || rel >= 0x112a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112a90 size=16 callers=0 calls=0
*/
void sub_112a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112a90ULL || rel >= 0x112aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112aa0 size=64 callers=0 calls=0
*/
void sub_112aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112aa0ULL || rel >= 0x112ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112ae0 size=16 callers=0 calls=0
*/
void sub_112ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112ae0ULL || rel >= 0x112af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112af0 size=32 callers=0 calls=0
*/
void sub_112af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112af0ULL || rel >= 0x112b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112b10 size=16 callers=0 calls=0
*/
void sub_112b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112b10ULL || rel >= 0x112b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112b20 size=32 callers=0 calls=0
*/
void sub_112b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112b20ULL || rel >= 0x112b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112b40 size=32 callers=0 calls=0
*/
void sub_112b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112b40ULL || rel >= 0x112b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112b60 size=112 callers=0 calls=0
*/
void sub_112b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112b60ULL || rel >= 0x112bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112bd0 size=16 callers=0 calls=0
*/
void sub_112bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112bd0ULL || rel >= 0x112be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112be0 size=16 callers=0 calls=0
*/
void sub_112be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112be0ULL || rel >= 0x112bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112bf0 size=16 callers=0 calls=0
*/
void sub_112bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112bf0ULL || rel >= 0x112c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112c00 size=16 callers=0 calls=0
*/
void sub_112c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112c00ULL || rel >= 0x112c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112c10 size=32 callers=0 calls=0
*/
void sub_112c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112c10ULL || rel >= 0x112c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112c30 size=16 callers=0 calls=0
*/
void sub_112c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112c30ULL || rel >= 0x112c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112c40 size=32 callers=0 calls=0
*/
void sub_112c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112c40ULL || rel >= 0x112c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112c60 size=16 callers=0 calls=0
*/
void sub_112c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112c60ULL || rel >= 0x112c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112c70 size=32 callers=0 calls=0
*/
void sub_112c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112c70ULL || rel >= 0x112c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112c90 size=32 callers=0 calls=0
*/
void sub_112c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112c90ULL || rel >= 0x112cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112cb0 size=112 callers=0 calls=0
*/
void sub_112cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112cb0ULL || rel >= 0x112d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112d20 size=16 callers=0 calls=0
*/
void sub_112d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112d20ULL || rel >= 0x112d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112d30 size=16 callers=0 calls=0
*/
void sub_112d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112d30ULL || rel >= 0x112d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112d40 size=16 callers=0 calls=0
*/
void sub_112d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112d40ULL || rel >= 0x112d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112d50 size=16 callers=0 calls=0
*/
void sub_112d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112d50ULL || rel >= 0x112d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112d60 size=32 callers=0 calls=0
*/
void sub_112d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112d60ULL || rel >= 0x112d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112d80 size=16 callers=0 calls=0
*/
void sub_112d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112d80ULL || rel >= 0x112d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112d90 size=32 callers=0 calls=0
*/
void sub_112d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112d90ULL || rel >= 0x112db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112db0 size=16 callers=0 calls=0
*/
void sub_112db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112db0ULL || rel >= 0x112dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112dc0 size=32 callers=0 calls=0
*/
void sub_112dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112dc0ULL || rel >= 0x112de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112de0 size=32 callers=0 calls=0
*/
void sub_112de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112de0ULL || rel >= 0x112e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112e00 size=112 callers=0 calls=0
*/
void sub_112e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e00ULL || rel >= 0x112e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112e70 size=16 callers=0 calls=0
*/
void sub_112e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e70ULL || rel >= 0x112e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112e80 size=16 callers=0 calls=0
*/
void sub_112e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e80ULL || rel >= 0x112e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112e90 size=16 callers=0 calls=0
*/
void sub_112e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112e90ULL || rel >= 0x112ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112ea0 size=16 callers=0 calls=0
*/
void sub_112ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112ea0ULL || rel >= 0x112eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112eb0 size=32 callers=0 calls=0
*/
void sub_112eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112eb0ULL || rel >= 0x112ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112ed0 size=16 callers=0 calls=0
*/
void sub_112ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112ed0ULL || rel >= 0x112ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112ee0 size=32 callers=0 calls=0
*/
void sub_112ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112ee0ULL || rel >= 0x112f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112f00 size=16 callers=0 calls=0
*/
void sub_112f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f00ULL || rel >= 0x112f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112f10 size=32 callers=0 calls=0
*/
void sub_112f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f10ULL || rel >= 0x112f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112f30 size=32 callers=0 calls=0
*/
void sub_112f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f30ULL || rel >= 0x112f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112f50 size=112 callers=0 calls=0
*/
void sub_112f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112f50ULL || rel >= 0x112fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112fc0 size=16 callers=0 calls=0
*/
void sub_112fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112fc0ULL || rel >= 0x112fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112fd0 size=16 callers=0 calls=0
*/
void sub_112fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112fd0ULL || rel >= 0x112fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112fe0 size=16 callers=0 calls=0
*/
void sub_112fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112fe0ULL || rel >= 0x112ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00112ff0 size=16 callers=0 calls=0
*/
void sub_112ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x112ff0ULL || rel >= 0x113000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113000 size=32 callers=0 calls=0
*/
void sub_113000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113000ULL || rel >= 0x113020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113020 size=16 callers=0 calls=0
*/
void sub_113020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113020ULL || rel >= 0x113030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113030 size=32 callers=0 calls=0
*/
void sub_113030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113030ULL || rel >= 0x113050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113050 size=16 callers=0 calls=0
*/
void sub_113050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113050ULL || rel >= 0x113060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113060 size=32 callers=0 calls=0
*/
void sub_113060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113060ULL || rel >= 0x113080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113080 size=16 callers=0 calls=0
*/
void sub_113080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113080ULL || rel >= 0x113090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113090 size=16 callers=0 calls=0
*/
void sub_113090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113090ULL || rel >= 0x1130a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001130a0 size=16 callers=0 calls=0
*/
void sub_1130a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130a0ULL || rel >= 0x1130b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001130b0 size=16 callers=0 calls=0
*/
void sub_1130b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130b0ULL || rel >= 0x1130c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001130c0 size=32 callers=0 calls=0
*/
void sub_1130c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130c0ULL || rel >= 0x1130e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001130e0 size=16 callers=0 calls=0
*/
void sub_1130e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130e0ULL || rel >= 0x1130f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001130f0 size=32 callers=0 calls=0
*/
void sub_1130f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1130f0ULL || rel >= 0x113110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113110 size=32 callers=0 calls=0
*/
void sub_113110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113110ULL || rel >= 0x113130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113130 size=112 callers=0 calls=0
*/
void sub_113130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113130ULL || rel >= 0x1131a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001131a0 size=16 callers=0 calls=0
*/
void sub_1131a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131a0ULL || rel >= 0x1131b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001131b0 size=16 callers=0 calls=0
*/
void sub_1131b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131b0ULL || rel >= 0x1131c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001131c0 size=16 callers=0 calls=0
*/
void sub_1131c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131c0ULL || rel >= 0x1131d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001131d0 size=16 callers=0 calls=0
*/
void sub_1131d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131d0ULL || rel >= 0x1131e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001131e0 size=32 callers=0 calls=0
*/
void sub_1131e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1131e0ULL || rel >= 0x113200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113200 size=16 callers=0 calls=0
*/
void sub_113200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113200ULL || rel >= 0x113210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113210 size=32 callers=0 calls=0
*/
void sub_113210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113210ULL || rel >= 0x113230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113230 size=16 callers=0 calls=0
*/
void sub_113230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113230ULL || rel >= 0x113240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113240 size=32 callers=0 calls=0
*/
void sub_113240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113240ULL || rel >= 0x113260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113260 size=32 callers=0 calls=0
*/
void sub_113260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113260ULL || rel >= 0x113280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113280 size=16 callers=0 calls=0
*/
void sub_113280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113280ULL || rel >= 0x113290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113290 size=16 callers=0 calls=0
*/
void sub_113290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113290ULL || rel >= 0x1132a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001132a0 size=16 callers=0 calls=0
*/
void sub_1132a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132a0ULL || rel >= 0x1132b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001132b0 size=16 callers=0 calls=0
*/
void sub_1132b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132b0ULL || rel >= 0x1132c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001132c0 size=32 callers=0 calls=0
*/
void sub_1132c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132c0ULL || rel >= 0x1132e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001132e0 size=16 callers=0 calls=0
*/
void sub_1132e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132e0ULL || rel >= 0x1132f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001132f0 size=16 callers=0 calls=0
*/
void sub_1132f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1132f0ULL || rel >= 0x113300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113300 size=32 callers=0 calls=0
*/
void sub_113300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113300ULL || rel >= 0x113320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113320 size=112 callers=0 calls=0
*/
void sub_113320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113320ULL || rel >= 0x113390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113390 size=16 callers=0 calls=0
*/
void sub_113390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113390ULL || rel >= 0x1133a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001133a0 size=16 callers=0 calls=0
*/
void sub_1133a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133a0ULL || rel >= 0x1133b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001133b0 size=16 callers=0 calls=0
*/
void sub_1133b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133b0ULL || rel >= 0x1133c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001133c0 size=16 callers=0 calls=0
*/
void sub_1133c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133c0ULL || rel >= 0x1133d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001133d0 size=32 callers=0 calls=0
*/
void sub_1133d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133d0ULL || rel >= 0x1133f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001133f0 size=16 callers=0 calls=0
*/
void sub_1133f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1133f0ULL || rel >= 0x113400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113400 size=32 callers=0 calls=0
*/
void sub_113400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113400ULL || rel >= 0x113420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113420 size=16 callers=0 calls=0
*/
void sub_113420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113420ULL || rel >= 0x113430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113430 size=32 callers=0 calls=0
*/
void sub_113430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113430ULL || rel >= 0x113450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113450 size=112 callers=0 calls=0
*/
void sub_113450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113450ULL || rel >= 0x1134c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001134c0 size=16 callers=0 calls=0
*/
void sub_1134c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1134c0ULL || rel >= 0x1134d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001134d0 size=16 callers=0 calls=0
*/
void sub_1134d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1134d0ULL || rel >= 0x1134e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001134e0 size=16 callers=0 calls=0
*/
void sub_1134e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1134e0ULL || rel >= 0x1134f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001134f0 size=16 callers=0 calls=0
*/
void sub_1134f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1134f0ULL || rel >= 0x113500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113500 size=32 callers=0 calls=0
*/
void sub_113500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113500ULL || rel >= 0x113520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113520 size=16 callers=0 calls=0
*/
void sub_113520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113520ULL || rel >= 0x113530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113530 size=32 callers=0 calls=0
*/
void sub_113530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113530ULL || rel >= 0x113550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113550 size=16 callers=0 calls=0
*/
void sub_113550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113550ULL || rel >= 0x113560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113560 size=32 callers=0 calls=0
*/
void sub_113560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113560ULL || rel >= 0x113580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113580 size=32 callers=0 calls=0
*/
void sub_113580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113580ULL || rel >= 0x1135a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001135a0 size=112 callers=0 calls=0
*/
void sub_1135a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1135a0ULL || rel >= 0x113610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113610 size=16 callers=0 calls=0
*/
void sub_113610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113610ULL || rel >= 0x113620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113620 size=16 callers=0 calls=0
*/
void sub_113620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113620ULL || rel >= 0x113630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113630 size=16 callers=0 calls=0
*/
void sub_113630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113630ULL || rel >= 0x113640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113640 size=16 callers=0 calls=0
*/
void sub_113640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113640ULL || rel >= 0x113650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113650 size=16 callers=0 calls=0
*/
void sub_113650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113650ULL || rel >= 0x113660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113660 size=32 callers=0 calls=0
*/
void sub_113660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113660ULL || rel >= 0x113680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113680 size=16 callers=0 calls=0
*/
void sub_113680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113680ULL || rel >= 0x113690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113690 size=32 callers=0 calls=0
*/
void sub_113690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113690ULL || rel >= 0x1136b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001136b0 size=16 callers=0 calls=0
*/
void sub_1136b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136b0ULL || rel >= 0x1136c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001136c0 size=32 callers=0 calls=0
*/
void sub_1136c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136c0ULL || rel >= 0x1136e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001136e0 size=32 callers=0 calls=0
*/
void sub_1136e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1136e0ULL || rel >= 0x113700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113700 size=112 callers=0 calls=0
*/
void sub_113700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113700ULL || rel >= 0x113770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113770 size=16 callers=0 calls=0
*/
void sub_113770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113770ULL || rel >= 0x113780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113780 size=16 callers=0 calls=0
*/
void sub_113780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113780ULL || rel >= 0x113790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113790 size=16 callers=0 calls=0
*/
void sub_113790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113790ULL || rel >= 0x1137a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001137a0 size=16 callers=0 calls=0
*/
void sub_1137a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137a0ULL || rel >= 0x1137b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001137b0 size=32 callers=0 calls=0
*/
void sub_1137b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137b0ULL || rel >= 0x1137d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001137d0 size=16 callers=0 calls=0
*/
void sub_1137d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137d0ULL || rel >= 0x1137e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001137e0 size=32 callers=0 calls=0
*/
void sub_1137e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1137e0ULL || rel >= 0x113800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113800 size=32 callers=0 calls=0
*/
void sub_113800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113800ULL || rel >= 0x113820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113820 size=32 callers=0 calls=0
*/
void sub_113820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113820ULL || rel >= 0x113840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113840 size=112 callers=0 calls=0
*/
void sub_113840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113840ULL || rel >= 0x1138b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001138b0 size=16 callers=0 calls=0
*/
void sub_1138b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1138b0ULL || rel >= 0x1138c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001138c0 size=16 callers=0 calls=0
*/
void sub_1138c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1138c0ULL || rel >= 0x1138d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001138d0 size=16 callers=0 calls=0
*/
void sub_1138d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1138d0ULL || rel >= 0x1138e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001138e0 size=16 callers=0 calls=0
*/
void sub_1138e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1138e0ULL || rel >= 0x1138f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001138f0 size=32 callers=0 calls=0
*/
void sub_1138f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1138f0ULL || rel >= 0x113910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113910 size=16 callers=0 calls=0
*/
void sub_113910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113910ULL || rel >= 0x113920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113920 size=32 callers=0 calls=0
*/
void sub_113920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113920ULL || rel >= 0x113940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113940 size=16 callers=0 calls=0
*/
void sub_113940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113940ULL || rel >= 0x113950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113950 size=32 callers=0 calls=0
*/
void sub_113950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113950ULL || rel >= 0x113970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113970 size=112 callers=0 calls=0
*/
void sub_113970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113970ULL || rel >= 0x1139e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001139e0 size=16 callers=0 calls=0
*/
void sub_1139e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139e0ULL || rel >= 0x1139f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001139f0 size=16 callers=0 calls=0
*/
void sub_1139f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1139f0ULL || rel >= 0x113a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113a00 size=16 callers=0 calls=0
*/
void sub_113a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a00ULL || rel >= 0x113a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113a10 size=16 callers=0 calls=0
*/
void sub_113a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a10ULL || rel >= 0x113a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113a20 size=32 callers=0 calls=0
*/
void sub_113a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a20ULL || rel >= 0x113a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113a40 size=16 callers=0 calls=0
*/
void sub_113a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a40ULL || rel >= 0x113a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113a50 size=32 callers=0 calls=0
*/
void sub_113a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a50ULL || rel >= 0x113a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113a70 size=16 callers=0 calls=0
*/
void sub_113a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a70ULL || rel >= 0x113a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113a80 size=16 callers=0 calls=0
*/
void sub_113a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a80ULL || rel >= 0x113a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113a90 size=32 callers=0 calls=0
*/
void sub_113a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113a90ULL || rel >= 0x113ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113ab0 size=112 callers=0 calls=0
*/
void sub_113ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ab0ULL || rel >= 0x113b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113b20 size=16 callers=0 calls=0
*/
void sub_113b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113b20ULL || rel >= 0x113b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113b30 size=16 callers=0 calls=0
*/
void sub_113b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113b30ULL || rel >= 0x113b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113b40 size=16 callers=0 calls=0
*/
void sub_113b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113b40ULL || rel >= 0x113b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113b50 size=16 callers=0 calls=0
*/
void sub_113b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113b50ULL || rel >= 0x113b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113b60 size=16 callers=0 calls=0
*/
void sub_113b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113b60ULL || rel >= 0x113b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113b70 size=32 callers=0 calls=0
*/
void sub_113b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113b70ULL || rel >= 0x113b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113b90 size=16 callers=0 calls=0
*/
void sub_113b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113b90ULL || rel >= 0x113ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113ba0 size=32 callers=0 calls=0
*/
void sub_113ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ba0ULL || rel >= 0x113bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113bc0 size=16 callers=0 calls=0
*/
void sub_113bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113bc0ULL || rel >= 0x113bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113bd0 size=32 callers=0 calls=0
*/
void sub_113bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113bd0ULL || rel >= 0x113bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113bf0 size=32 callers=0 calls=0
*/
void sub_113bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113bf0ULL || rel >= 0x113c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113c10 size=112 callers=0 calls=0
*/
void sub_113c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c10ULL || rel >= 0x113c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113c80 size=16 callers=0 calls=0
*/
void sub_113c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c80ULL || rel >= 0x113c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113c90 size=16 callers=0 calls=0
*/
void sub_113c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113c90ULL || rel >= 0x113ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113ca0 size=16 callers=0 calls=0
*/
void sub_113ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ca0ULL || rel >= 0x113cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113cb0 size=16 callers=0 calls=0
*/
void sub_113cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113cb0ULL || rel >= 0x113cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113cc0 size=32 callers=0 calls=0
*/
void sub_113cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113cc0ULL || rel >= 0x113ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113ce0 size=16 callers=0 calls=0
*/
void sub_113ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113ce0ULL || rel >= 0x113cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113cf0 size=32 callers=0 calls=0
*/
void sub_113cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113cf0ULL || rel >= 0x113d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113d10 size=16 callers=0 calls=0
*/
void sub_113d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d10ULL || rel >= 0x113d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113d20 size=32 callers=0 calls=0
*/
void sub_113d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d20ULL || rel >= 0x113d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113d40 size=32 callers=0 calls=0
*/
void sub_113d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d40ULL || rel >= 0x113d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113d60 size=112 callers=0 calls=0
*/
void sub_113d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113d60ULL || rel >= 0x113dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113dd0 size=16 callers=0 calls=0
*/
void sub_113dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113dd0ULL || rel >= 0x113de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113de0 size=16 callers=0 calls=0
*/
void sub_113de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113de0ULL || rel >= 0x113df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00113df0 size=16 callers=0 calls=0
*/
void sub_113df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x113df0ULL || rel >= 0x113e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

