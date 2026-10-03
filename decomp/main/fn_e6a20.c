/* main functions 000e6a20..000fa9f0 (6 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 000e6a20 size=32 callers=0 calls=0
*/
void sub_e6a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6a20ULL || rel >= 0xe6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6a40 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6a40ULL || rel >= 0xe6ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6ae0 size=32 callers=0 calls=0
*/
void sub_e6ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ae0ULL || rel >= 0xe6b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6b00 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e6b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6b00ULL || rel >= 0xe6ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6ba0 size=32 callers=0 calls=0
*/
void sub_e6ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6ba0ULL || rel >= 0xe6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6bc0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6bc0ULL || rel >= 0xe6c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6c60 size=32 callers=0 calls=0
*/
void sub_e6c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c60ULL || rel >= 0xe6c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6c80 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e6c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6c80ULL || rel >= 0xe6d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6d20 size=176 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e6d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6d20ULL || rel >= 0xe6dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6dd0 size=64 callers=0 calls=1
   calls: sub_2a9a50
*/
void sub_e6dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6dd0ULL || rel >= 0xe6e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6e10 size=320 callers=0 calls=6
   calls: sub_2a9a90, sub_2a9aa0, sub_3007d0, sub_d17a0, sub_d1950, sub_e1dc0
   ref: PxParticleBaseFlag::ePER_PARTICLE_REST_OFFSET flag is not modifiable. Operation ignored.
   ref: ./../../PhysX/src/particles/NpParticleBaseTemplate.h
*/
void NpParticleBaseTemplate_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6e10ULL || rel >= 0xe6f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6f50 size=32 callers=0 calls=0
*/
void sub_e6f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f50ULL || rel >= 0xe6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6f70 size=16 callers=0 calls=0
*/
void sub_e6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f70ULL || rel >= 0xe6f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6f80 size=16 callers=0 calls=0
*/
void sub_e6f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f80ULL || rel >= 0xe6f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6f90 size=64 callers=0 calls=0
*/
void sub_e6f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6f90ULL || rel >= 0xe6fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6fd0 size=16 callers=0 calls=0
*/
void sub_e6fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6fd0ULL || rel >= 0xe6fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e6fe0 size=64 callers=0 calls=0
*/
void sub_e6fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe6fe0ULL || rel >= 0xe7020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7020 size=16 callers=0 calls=0
*/
void sub_e7020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7020ULL || rel >= 0xe7030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7030 size=64 callers=0 calls=0
*/
void sub_e7030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7030ULL || rel >= 0xe7070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7070 size=16 callers=0 calls=0
*/
void sub_e7070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7070ULL || rel >= 0xe7080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7080 size=64 callers=0 calls=0
*/
void sub_e7080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7080ULL || rel >= 0xe70c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e70c0 size=16 callers=0 calls=0
*/
void sub_e70c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70c0ULL || rel >= 0xe70d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e70d0 size=160 callers=0 calls=2
   calls: sub_2a9b60, sub_2a9b70
*/
void sub_e70d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe70d0ULL || rel >= 0xe7170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7170 size=16 callers=0 calls=0
*/
void sub_e7170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7170ULL || rel >= 0xe7180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7180 size=16 callers=0 calls=0
*/
void sub_e7180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7180ULL || rel >= 0xe7190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7190 size=96 callers=0 calls=3
   calls: sub_3007d0, sub_3007e0, sub_e1d90
   ref: PxParticleBase::resetFiltering: This method has been deprecated!
   ref: ./../../PhysX/src/particles/NpParticleBaseTemplate.h
*/
void NpParticleBaseTemplate_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7190ULL || rel >= 0xe71f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e71f0 size=16 callers=0 calls=0
*/
void sub_e71f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe71f0ULL || rel >= 0xe7200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7200 size=96 callers=0 calls=3
   calls: sub_e0cb0, sub_e1e10, sub_e3c20
*/
void sub_e7200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7200ULL || rel >= 0xe7260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7260 size=16 callers=0 calls=0
*/
void sub_e7260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7260ULL || rel >= 0xe7270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7270 size=16 callers=0 calls=0
*/
void sub_e7270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7270ULL || rel >= 0xe7280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7280 size=16 callers=0 calls=0
*/
void sub_e7280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7280ULL || rel >= 0xe7290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7290 size=16 callers=0 calls=0
*/
void sub_e7290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7290ULL || rel >= 0xe72a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e72a0 size=80 callers=0 calls=2
   calls: sub_e0cb0, sub_e1e10
*/
void sub_e72a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72a0ULL || rel >= 0xe72f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e72f0 size=16 callers=0 calls=0
*/
void sub_e72f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe72f0ULL || rel >= 0xe7300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7300 size=16 callers=0 calls=0
*/
void sub_e7300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7300ULL || rel >= 0xe7310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7310 size=528 callers=4 calls=5
   calls: sub_2a9f20, sub_3007d0, sub_3007e0, sub_300c80, sub_300cb0
   ref: ./../../PhysX/src/buffering\ScbParticleSystem.h
   ref: <allocation names disabled>
   ref: PxParticleBase::lockParticleReadData()
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::NpParticleFluidReadData>::getName() [T 
   ref: Particle data read not allowed while simulation is running.
   ref: UNDEFINED
   ref: ./../../PhysX/src/particles\NpParticleFluidReadData.h
   ref: PxParticleReadData access through %s while its still locked by last call of %s.
*/
void UNDEFINED(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7310ULL || rel >= 0xe7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7520 size=16 callers=0 calls=0
*/
void sub_e7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7520ULL || rel >= 0xe7530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7530 size=16 callers=0 calls=0
*/
void sub_e7530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7530ULL || rel >= 0xe7540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7540 size=64 callers=0 calls=1
   calls: sub_300c80
*/
void sub_e7540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7540ULL || rel >= 0xe7580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7580 size=16 callers=0 calls=0
*/
void sub_e7580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7580ULL || rel >= 0xe7590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7590 size=16 callers=0 calls=0
*/
void sub_e7590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7590ULL || rel >= 0xe75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e75a0 size=352 callers=3 calls=0
*/
void sub_e75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe75a0ULL || rel >= 0xe7700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7700 size=240 callers=1 calls=4
   calls: sub_e0ca0, sub_e0cb0, sub_e1e10, sub_e3bc0
*/
void sub_e7700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7700ULL || rel >= 0xe77f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e77f0 size=96 callers=0 calls=3
   calls: sub_e0cb0, sub_e1e10, sub_e3c20
*/
void sub_e77f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe77f0ULL || rel >= 0xe7850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7850 size=128 callers=0 calls=4
   calls: sub_300c80, sub_e0cb0, sub_e1e10, sub_e3c20
*/
void sub_e7850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7850ULL || rel >= 0xe78d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e78d0 size=160 callers=0 calls=1
   calls: sub_2a98a0
*/
void sub_e78d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe78d0ULL || rel >= 0xe7970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7970 size=160 callers=0 calls=2
   calls: sub_2a9b60, sub_2a9b70
*/
void sub_e7970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7970ULL || rel >= 0xe7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7a10 size=160 callers=0 calls=2
   calls: sub_2a9b60, sub_2a9b70
*/
void sub_e7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7a10ULL || rel >= 0xe7ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7ab0 size=144 callers=0 calls=6
   calls: sub_b3e20, sub_caec0, sub_ced30, sub_e1150, sub_e1dc0, sub_e75a0
*/
void sub_e7ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7ab0ULL || rel >= 0xe7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7b40 size=16 callers=0 calls=0
   ref: PxParticleSystem
*/
void PxParticleSystem(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b40ULL || rel >= 0xe7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7b50 size=160 callers=0 calls=0
   ref: PxBase
   ref: PxParticleBase
   ref: PxActor
   ref: PxParticleSystem
*/
void PxParticleSystem_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7b50ULL || rel >= 0xe7bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7bf0 size=16 callers=0 calls=0
*/
void sub_e7bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7bf0ULL || rel >= 0xe7c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7c00 size=16 callers=0 calls=0
*/
void sub_e7c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c00ULL || rel >= 0xe7c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7c10 size=16 callers=0 calls=0
*/
void sub_e7c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c10ULL || rel >= 0xe7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7c20 size=16 callers=0 calls=0
*/
void sub_e7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c20ULL || rel >= 0xe7c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7c30 size=256 callers=0 calls=3
   calls: sub_2aa160, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbParticleSystem.h
   ref: PxActor::getWorldBounds(): Can't access particle world bounds during simulation without enabling bul
*/
void ScbParticleSystem_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7c30ULL || rel >= 0xe7d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7d30 size=288 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_e7d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7d30ULL || rel >= 0xe7e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7e50 size=208 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_e7e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7e50ULL || rel >= 0xe7f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7f20 size=80 callers=0 calls=0
*/
void sub_e7f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f20ULL || rel >= 0xe7f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e7f70 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e7f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe7f70ULL || rel >= 0xe8030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8030 size=80 callers=0 calls=0
*/
void sub_e8030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8030ULL || rel >= 0xe8080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8080 size=224 callers=0 calls=2
   calls: sub_3007d0, sub_e1d90
   ref: ./../../PhysX/src\NpActorTemplate.h
   ref: ./../../PhysX/src/buffering\ScbActor.h
   ref: Attempt to set the client id when an actor is already in a scene.
   ref: Attempt to set the client id when an actor is buffering
*/
void NpActorTemplate_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8080ULL || rel >= 0xe8160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8160 size=64 callers=0 calls=0
*/
void sub_e8160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8160ULL || rel >= 0xe81a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e81a0 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e81a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe81a0ULL || rel >= 0xe8260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8260 size=96 callers=0 calls=0
*/
void sub_e8260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8260ULL || rel >= 0xe82c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e82c0 size=16 callers=0 calls=0
*/
void sub_e82c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe82c0ULL || rel >= 0xe82d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e82d0 size=48 callers=0 calls=1
   calls: UNDEFINED
*/
void sub_e82d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe82d0ULL || rel >= 0xe8300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8300 size=48 callers=0 calls=1
   calls: UNDEFINED
*/
void sub_e8300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8300ULL || rel >= 0xe8330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8330 size=112 callers=0 calls=2
   calls: ScbParticleSystem, sub_2a9a90
*/
void sub_e8330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8330ULL || rel >= 0xe83a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e83a0 size=16 callers=0 calls=0
*/
void sub_e83a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83a0ULL || rel >= 0xe83b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e83b0 size=16 callers=0 calls=0
*/
void sub_e83b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83b0ULL || rel >= 0xe83c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e83c0 size=16 callers=0 calls=0
*/
void sub_e83c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83c0ULL || rel >= 0xe83d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e83d0 size=16 callers=0 calls=0
*/
void sub_e83d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83d0ULL || rel >= 0xe83e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e83e0 size=16 callers=0 calls=0
*/
void sub_e83e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83e0ULL || rel >= 0xe83f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e83f0 size=160 callers=0 calls=2
   calls: sub_3007d0, sub_e1dc0
   ref: Attempt to add forces on particle system which isn't assigned to any scene.
   ref: ./../../PhysX/src/particles/NpParticleBaseTemplate.h
*/
void NpParticleBaseTemplate_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe83f0ULL || rel >= 0xe8490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8490 size=32 callers=0 calls=0
*/
void sub_e8490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8490ULL || rel >= 0xe84b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e84b0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e84b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe84b0ULL || rel >= 0xe8550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8550 size=80 callers=0 calls=1
   calls: sub_2aa1a0
*/
void sub_e8550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8550ULL || rel >= 0xe85a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e85a0 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e85a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe85a0ULL || rel >= 0xe8660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8660 size=80 callers=0 calls=1
   calls: sub_2aa1b0
*/
void sub_e8660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8660ULL || rel >= 0xe86b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e86b0 size=208 callers=0 calls=3
   calls: sub_2aa1c0, sub_d17a0, sub_d1950
*/
void sub_e86b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe86b0ULL || rel >= 0xe8780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8780 size=32 callers=0 calls=0
*/
void sub_e8780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8780ULL || rel >= 0xe87a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e87a0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e87a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe87a0ULL || rel >= 0xe8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8840 size=32 callers=0 calls=0
*/
void sub_e8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8840ULL || rel >= 0xe8860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8860 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e8860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8860ULL || rel >= 0xe8900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8900 size=32 callers=0 calls=0
*/
void sub_e8900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8900ULL || rel >= 0xe8920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8920 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e8920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8920ULL || rel >= 0xe89c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e89c0 size=32 callers=0 calls=0
*/
void sub_e89c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89c0ULL || rel >= 0xe89e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e89e0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e89e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe89e0ULL || rel >= 0xe8a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8a80 size=176 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_e8a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8a80ULL || rel >= 0xe8b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8b30 size=64 callers=0 calls=1
   calls: sub_2a9a50
*/
void sub_e8b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8b30ULL || rel >= 0xe8b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8b70 size=320 callers=0 calls=6
   calls: sub_2a9a90, sub_2a9aa0, sub_3007d0, sub_d17a0, sub_d1950, sub_e1dc0
   ref: PxParticleBaseFlag::ePER_PARTICLE_REST_OFFSET flag is not modifiable. Operation ignored.
   ref: ./../../PhysX/src/particles/NpParticleBaseTemplate.h
*/
void NpParticleBaseTemplate_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8b70ULL || rel >= 0xe8cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8cb0 size=32 callers=0 calls=0
*/
void sub_e8cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8cb0ULL || rel >= 0xe8cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8cd0 size=16 callers=0 calls=0
*/
void sub_e8cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8cd0ULL || rel >= 0xe8ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8ce0 size=16 callers=0 calls=0
*/
void sub_e8ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8ce0ULL || rel >= 0xe8cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8cf0 size=64 callers=0 calls=0
*/
void sub_e8cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8cf0ULL || rel >= 0xe8d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8d30 size=16 callers=0 calls=0
*/
void sub_e8d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8d30ULL || rel >= 0xe8d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8d40 size=64 callers=0 calls=0
*/
void sub_e8d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8d40ULL || rel >= 0xe8d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8d80 size=16 callers=0 calls=0
*/
void sub_e8d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8d80ULL || rel >= 0xe8d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8d90 size=64 callers=0 calls=0
*/
void sub_e8d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8d90ULL || rel >= 0xe8dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8dd0 size=16 callers=0 calls=0
*/
void sub_e8dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8dd0ULL || rel >= 0xe8de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8de0 size=64 callers=0 calls=0
*/
void sub_e8de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8de0ULL || rel >= 0xe8e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8e20 size=16 callers=0 calls=0
*/
void sub_e8e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8e20ULL || rel >= 0xe8e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8e30 size=16 callers=0 calls=0
*/
void sub_e8e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8e30ULL || rel >= 0xe8e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8e40 size=16 callers=0 calls=0
*/
void sub_e8e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8e40ULL || rel >= 0xe8e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8e50 size=96 callers=0 calls=3
   calls: sub_3007d0, sub_3007e0, sub_e1d90
   ref: PxParticleBase::resetFiltering: This method has been deprecated!
   ref: ./../../PhysX/src/particles/NpParticleBaseTemplate.h
*/
void NpParticleBaseTemplate_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8e50ULL || rel >= 0xe8eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8eb0 size=16 callers=0 calls=0
*/
void sub_e8eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8eb0ULL || rel >= 0xe8ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8ec0 size=96 callers=0 calls=3
   calls: sub_e0cb0, sub_e1e10, sub_e3c20
*/
void sub_e8ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8ec0ULL || rel >= 0xe8f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8f20 size=128 callers=0 calls=4
   calls: sub_300c80, sub_e0cb0, sub_e1e10, sub_e3c20
*/
void sub_e8f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8f20ULL || rel >= 0xe8fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8fa0 size=16 callers=0 calls=0
*/
void sub_e8fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8fa0ULL || rel >= 0xe8fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8fb0 size=16 callers=0 calls=0
*/
void sub_e8fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8fb0ULL || rel >= 0xe8fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8fc0 size=16 callers=0 calls=0
*/
void sub_e8fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8fc0ULL || rel >= 0xe8fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e8fd0 size=80 callers=0 calls=2
   calls: sub_e0cb0, sub_e1e10
*/
void sub_e8fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe8fd0ULL || rel >= 0xe9020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9020 size=16 callers=0 calls=0
*/
void sub_e9020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9020ULL || rel >= 0xe9030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9030 size=16 callers=0 calls=0
*/
void sub_e9030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9030ULL || rel >= 0xe9040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9040 size=304 callers=1 calls=6
   calls: sub_2ff3c0, sub_e0ca0, sub_e0cb0, sub_e1e10, sub_eda60, sub_edab0
*/
void sub_e9040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9040ULL || rel >= 0xe9170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9170 size=176 callers=1 calls=5
   calls: sub_2ff3e0, sub_e0cb0, sub_e1e10, sub_ed2b0, sub_edab0
*/
void sub_e9170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9170ULL || rel >= 0xe9220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9220 size=64 callers=0 calls=2
   calls: sub_300c80, sub_e9170
*/
void sub_e9220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9220ULL || rel >= 0xe9260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9260 size=96 callers=0 calls=1
   calls: sub_2ff3c0
*/
void sub_e9260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9260ULL || rel >= 0xe92c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e92c0 size=32 callers=0 calls=0
*/
void sub_e92c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92c0ULL || rel >= 0xe92e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e92e0 size=176 callers=0 calls=1
   calls: sub_2b0b40
*/
void sub_e92e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe92e0ULL || rel >= 0xe9390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9390 size=80 callers=0 calls=3
   calls: sub_b3e20, sub_e1dc0, sub_f8b40
*/
void sub_e9390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9390ULL || rel >= 0xe93e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e93e0 size=16 callers=0 calls=0
*/
void sub_e93e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93e0ULL || rel >= 0xe93f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e93f0 size=16 callers=0 calls=0
*/
void sub_e93f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe93f0ULL || rel >= 0xe9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9400 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: Call to PxCloth::setParticles() not allowed while simulation is running.
   ref: ./../../PhysX/src/buffering\ScbCloth.h
*/
void ScbCloth(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9400ULL || rel >= 0xe9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9460 size=16 callers=0 calls=0
*/
void sub_e9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9460ULL || rel >= 0xe9470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9470 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setMotionConstraints() not allowed while simulation is running.
*/
void ScbCloth_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9470ULL || rel >= 0xe94d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e94d0 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getMotionConstraints() not allowed while simulation is running.
*/
void ScbCloth_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe94d0ULL || rel >= 0xe9540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9540 size=16 callers=0 calls=0
*/
void sub_e9540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9540ULL || rel >= 0xe9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9550 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: Call to PxCloth::setMotionConstraintConfig() not allowed while simulation is running.
   ref: ./../../PhysX/src/buffering\ScbCloth.h
*/
void ScbCloth_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9550ULL || rel >= 0xe95b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e95b0 size=128 callers=0 calls=3
   calls: sub_2b0d00, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getMotionConstraintScaleBias() not allowed while simulation is running.
*/
void ScbCloth_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe95b0ULL || rel >= 0xe9630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9630 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setSeparationConstraints() not allowed while simulation is running.
*/
void ScbCloth_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9630ULL || rel >= 0xe9690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9690 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getSeparationConstraints() not allowed while simulation is running.
*/
void ScbCloth_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9690ULL || rel >= 0xe9700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9700 size=16 callers=0 calls=0
*/
void sub_e9700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9700ULL || rel >= 0xe9710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9710 size=16 callers=0 calls=0
*/
void sub_e9710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9710ULL || rel >= 0xe9720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9720 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setParticleAccelerations() not allowed while simulation is running.
*/
void ScbCloth_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9720ULL || rel >= 0xe9780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9780 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: Call to PxCloth::getParticleAccelerations() not allowed while simulation is running.
   ref: ./../../PhysX/src/buffering\ScbCloth.h
*/
void ScbCloth_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9780ULL || rel >= 0xe97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e97f0 size=16 callers=0 calls=0
*/
void sub_e97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe97f0ULL || rel >= 0xe9800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9800 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::addCollisionSphere() not allowed while simulation is running.
*/
void ScbCloth_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9800ULL || rel >= 0xe9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9860 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: Call to PxCloth::removeCollisionSphere() not allowed while simulation is running.
   ref: ./../../PhysX/src/buffering\ScbCloth.h
*/
void ScbCloth_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9860ULL || rel >= 0xe98c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e98c0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setCollisionSpheres() not allowed while simulation is running.
*/
void ScbCloth_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe98c0ULL || rel >= 0xe9920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9920 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getNbCollisionSpheres() not allowed while simulation is running.
*/
void ScbCloth_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9920ULL || rel >= 0xe9990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9990 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getCollisionData() not allowed while simulation is running.
*/
void ScbCloth_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9990ULL || rel >= 0xe99f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e99f0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::addCollisionCapsule() not allowed while simulation is running.
*/
void ScbCloth_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe99f0ULL || rel >= 0xe9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9a50 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::removeCollisionCapsule() not allowed while simulation is running.
*/
void ScbCloth_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9a50ULL || rel >= 0xe9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9ab0 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getNbCollisionCapsules() not allowed while simulation is running.
*/
void ScbCloth_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ab0ULL || rel >= 0xe9b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9b20 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::addCollisionTriangle() not allowed while simulation is running.
*/
void ScbCloth_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b20ULL || rel >= 0xe9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9b80 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: Call to PxCloth::removeCollisionTriangle() not allowed while simulation is running.
   ref: ./../../PhysX/src/buffering\ScbCloth.h
*/
void ScbCloth_19(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9b80ULL || rel >= 0xe9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9be0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setCollisionTriangles() not allowed while simulation is running.
*/
void ScbCloth_20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9be0ULL || rel >= 0xe9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9c40 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getNbCollisionTriangles() not allowed while simulation is running.
*/
void ScbCloth_21(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9c40ULL || rel >= 0xe9cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9cb0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::addCollisionPlane() not allowed while simulation is running.
*/
void ScbCloth_22(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9cb0ULL || rel >= 0xe9d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9d10 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::removeCollisionPlane() not allowed while simulation is running.
*/
void ScbCloth_23(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d10ULL || rel >= 0xe9d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9d70 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setCollisionPlanes() not allowed while simulation is running.
*/
void ScbCloth_24(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9d70ULL || rel >= 0xe9dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9dd0 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getNbCollisionPlanes() not allowed while simulation is running.
*/
void ScbCloth_25(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9dd0ULL || rel >= 0xe9e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9e40 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::addCollisionConvex() not allowed while simulation is running.
*/
void ScbCloth_26(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9e40ULL || rel >= 0xe9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9ea0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::removeCollisionConvex() not allowed while simulation is running.
*/
void ScbCloth_27(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9ea0ULL || rel >= 0xe9f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9f00 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getNbCollisionConvexes() not allowed while simulation is running.
*/
void ScbCloth_28(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9f00ULL || rel >= 0xe9f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9f70 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setVirtualParticles() not allowed while simulation is running.
*/
void ScbCloth_29(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9f70ULL || rel >= 0xe9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000e9fd0 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getNbVirtualParticles() not allowed while simulation is running.
*/
void ScbCloth_30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xe9fd0ULL || rel >= 0xea040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea040 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getVirtualParticles() not allowed while simulation is running.
*/
void ScbCloth_31(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea040ULL || rel >= 0xea0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea0a0 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getNbVirtualParticleWeights() not allowed while simulation is running.
*/
void ScbCloth_32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea0a0ULL || rel >= 0xea110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea110 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getVirtualParticleWeights() not allowed while simulation is running.
*/
void ScbCloth_33(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea110ULL || rel >= 0xea170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea170 size=256 callers=0 calls=3
   calls: sub_2ae680, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setGlobalPose() not allowed while simulation is running.
*/
void ScbCloth_34(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea170ULL || rel >= 0xea270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea270 size=144 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: Call to PxCloth::getGlobalPose() not allowed while simulation is running.
   ref: ./../../PhysX/src/buffering\ScbCloth.h
*/
void ScbCloth_35(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea270ULL || rel >= 0xea300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea300 size=256 callers=0 calls=3
   calls: sub_2b12d0, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setTargetPose() not allowed while simulation is running.
*/
void ScbCloth_36(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea300ULL || rel >= 0xea400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea400 size=144 callers=0 calls=3
   calls: sub_2b0270, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setExternalAcceleration() not allowed while simulation is running.
*/
void ScbCloth_37(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea400ULL || rel >= 0xea490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea490 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getExternalAcceleration() not allowed while simulation is running.
*/
void ScbCloth_38(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea490ULL || rel >= 0xea510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea510 size=144 callers=0 calls=3
   calls: sub_2b1280, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setLinearInertiaScale() not allowed while simulation is running.
*/
void ScbCloth_39(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea510ULL || rel >= 0xea5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea5a0 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getLinearInertiaScale() not allowed while simulation is running.
*/
void ScbCloth_40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea5a0ULL || rel >= 0xea620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea620 size=144 callers=0 calls=3
   calls: sub_2b12a0, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setAngularInertiaScale() not allowed while simulation is running.
*/
void ScbCloth_41(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea620ULL || rel >= 0xea6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea6b0 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getAngularInertiaScale() not allowed while simulation is running.
*/
void ScbCloth_42(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea6b0ULL || rel >= 0xea730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea730 size=144 callers=0 calls=3
   calls: sub_2b12c0, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setCentrifugalInertiaScale() not allowed while simulation is running.
*/
void ScbCloth_43(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea730ULL || rel >= 0xea7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea7c0 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getCentrifugalInertiaScale() not allowed while simulation is running.
*/
void ScbCloth_44(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea7c0ULL || rel >= 0xea840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea840 size=256 callers=0 calls=4
   calls: sub_2b1280, sub_2b12a0, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setLinearInertiaScale() not allowed while simulation is running.
   ref: Call to PxCloth::setAngularInertiaScale() not allowed while simulation is running.
*/
void ScbCloth_45(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea840ULL || rel >= 0xea940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea940 size=144 callers=0 calls=3
   calls: sub_2b1320, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setDampingCoefficient() not allowed while simulation is running.
*/
void ScbCloth_46(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea940ULL || rel >= 0xea9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ea9d0 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: Call to PxCloth::getDampingCoefficient() not allowed while simulation is running.
   ref: ./../../PhysX/src/buffering\ScbCloth.h
*/
void ScbCloth_47(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xea9d0ULL || rel >= 0xeaa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eaa50 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setFrictionCoefficient() not allowed while simulation is running.
*/
void ScbCloth_48(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaa50ULL || rel >= 0xeaab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eaab0 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getFrictionCoefficient() not allowed while simulation is running.
*/
void ScbCloth_49(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaab0ULL || rel >= 0xeab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eab20 size=144 callers=0 calls=3
   calls: sub_2b1360, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setLinearDragCoefficient() not allowed while simulation is running.
*/
void ScbCloth_50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeab20ULL || rel >= 0xeabb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eabb0 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getLinearDragCoefficient() not allowed while simulation is running.
*/
void ScbCloth_51(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeabb0ULL || rel >= 0xeac30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eac30 size=144 callers=0 calls=3
   calls: sub_2b1380, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setAngularDragCoefficient() not allowed while simulation is running.
*/
void ScbCloth_52(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeac30ULL || rel >= 0xeacc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eacc0 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getAngularDragCoefficient() not allowed while simulation is running.
*/
void ScbCloth_53(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeacc0ULL || rel >= 0xead40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ead40 size=112 callers=0 calls=0
*/
void sub_ead40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xead40ULL || rel >= 0xeadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eadb0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setCollisionMassScale() not allowed while simulation is running.
*/
void ScbCloth_54(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeadb0ULL || rel >= 0xeae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eae10 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getCollisionMassScale() not allowed while simulation is running.
*/
void ScbCloth_55(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeae10ULL || rel >= 0xeae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eae80 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setSelfCollisionDistance() not allowed while simulation is running.
*/
void ScbCloth_56(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeae80ULL || rel >= 0xeaee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eaee0 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getSelfCollisionDistance() not allowed while simulation is running.
*/
void ScbCloth_57(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaee0ULL || rel >= 0xeaf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eaf50 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setSelfCollisionStiffness() not allowed while simulation is running.
*/
void ScbCloth_58(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeaf50ULL || rel >= 0xeafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eafb0 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getSelfCollisionStiffness() not allowed while simulation is running.
*/
void ScbCloth_59(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeafb0ULL || rel >= 0xeb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb020 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setSelfCollisionIndices() not allowed while simulation is running.
*/
void ScbCloth_60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb020ULL || rel >= 0xeb080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb080 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getSelfCollisionIndices() not allowed while simulation is running.
*/
void ScbCloth_61(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb080ULL || rel >= 0xeb0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb0f0 size=16 callers=0 calls=0
*/
void sub_eb0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb0f0ULL || rel >= 0xeb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb100 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setRestPositions() not allowed while simulation is running.
*/
void ScbCloth_62(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb100ULL || rel >= 0xeb160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb160 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getRestPositions() not allowed while simulation is running.
*/
void ScbCloth_63(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb160ULL || rel >= 0xeb1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb1d0 size=16 callers=0 calls=0
*/
void sub_eb1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb1d0ULL || rel >= 0xeb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb1e0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setSolverFrequency() not allowed while simulation is running.
*/
void ScbCloth_64(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb1e0ULL || rel >= 0xeb240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb240 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getSolverFrequency() not allowed while simulation is running.
*/
void ScbCloth_65(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb240ULL || rel >= 0xeb2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb2b0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setStiffnessFrequency() not allowed while simulation is running.
*/
void ScbCloth_66(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb2b0ULL || rel >= 0xeb310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb310 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getStiffnessFrequency() not allowed while simulation is running.
*/
void ScbCloth_67(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb310ULL || rel >= 0xeb380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb380 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: Call to PxCloth::setStretchConfig() not allowed while simulation is running.
   ref: ./../../PhysX/src/buffering\ScbCloth.h
*/
void ScbCloth_68(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb380ULL || rel >= 0xeb3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb3e0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setTetherConfig() not allowed while simulation is running.
*/
void ScbCloth_69(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb3e0ULL || rel >= 0xeb440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb440 size=128 callers=0 calls=3
   calls: sub_2b1590, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getStretchConfig() not allowed while simulation is running.
*/
void ScbCloth_70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb440ULL || rel >= 0xeb4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb4c0 size=112 callers=0 calls=3
   calls: sub_2b1630, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getTetherConfig() not allowed while simulation is running.
*/
void ScbCloth_71(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb4c0ULL || rel >= 0xeb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb530 size=144 callers=0 calls=4
   calls: sub_2b1680, sub_3007d0, sub_3007e0, sub_e1dc0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setClothFlag() not allowed while simulation is running.
*/
void ScbCloth_72(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb530ULL || rel >= 0xeb5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb5c0 size=208 callers=0 calls=3
   calls: sub_2b1710, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getClothFlags() not allowed while simulation is running.
*/
void ScbCloth_73(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb5c0ULL || rel >= 0xeb690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb690 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getClothFlags() not allowed while simulation is running.
*/
void ScbCloth_74(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb690ULL || rel >= 0xeb710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb710 size=144 callers=0 calls=3
   calls: sub_2b1720, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setWindVelocity() not allowed while simulation is running.
*/
void ScbCloth_75(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb710ULL || rel >= 0xeb7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb7a0 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getWindVelocity() not allowed while simulation is running.
*/
void ScbCloth_76(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb7a0ULL || rel >= 0xeb820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb820 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setDragCoefficient() not allowed while simulation is running.
*/
void ScbCloth_77(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb820ULL || rel >= 0xeb880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb880 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: Call to PxCloth::getDragCoefficient() not allowed while simulation is running.
   ref: ./../../PhysX/src/buffering\ScbCloth.h
*/
void ScbCloth_78(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb880ULL || rel >= 0xeb8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb8f0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setLiftCoefficient() not allowed while simulation is running.
*/
void ScbCloth_79(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb8f0ULL || rel >= 0xeb950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb950 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getLiftCoefficient() not allowed while simulation is running.
*/
void ScbCloth_80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb950ULL || rel >= 0xeb9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eb9c0 size=128 callers=0 calls=3
   calls: sub_3007d0, sub_3007e0, sub_e1d90
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::isSleeping() not allowed while simulation is running.
*/
void ScbCloth_81(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeb9c0ULL || rel >= 0xeba40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eba40 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getSleepLinearVelocity() not allowed while simulation is running.
*/
void ScbCloth_82(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeba40ULL || rel >= 0xebab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebab0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setSleepLinearVelocity() not allowed while simulation is running.
*/
void ScbCloth_83(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebab0ULL || rel >= 0xebb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebb10 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setWakeCounter() not allowed while simulation is running.
*/
void ScbCloth_84(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb10ULL || rel >= 0xebb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebb70 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getWakeCounter() not allowed while simulation is running.
*/
void ScbCloth_85(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebb70ULL || rel >= 0xebbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebbe0 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_e1d90
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::wakeUp() not allowed while simulation is running.
*/
void ScbCloth_86(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebbe0ULL || rel >= 0xebc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebc60 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_e1d90
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::putToSleep() not allowed while simulation is running.
*/
void ScbCloth_87(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebc60ULL || rel >= 0xebce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebce0 size=208 callers=0 calls=4
   calls: sub_2b17d0, sub_3007d0, sub_3007e0, sub_ed9c0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::lockParticleData() not allowed while simulation is running.
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/c
   ref: PxClothParticleData access through PxCloth::lockParticleData() while its still locked by last call.
*/
void NpCloth(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebce0ULL || rel >= 0xebdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebdb0 size=48 callers=0 calls=0
*/
void sub_ebdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebdb0ULL || rel >= 0xebde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebde0 size=16 callers=1 calls=0
*/
void sub_ebde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebde0ULL || rel >= 0xebdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebdf0 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getPreviousTimeStep() not allowed while simulation is running.
*/
void ScbCloth_88(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebdf0ULL || rel >= 0xebe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebe60 size=320 callers=0 calls=3
   calls: sub_2b18f0, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getWorldBounds() not allowed while simulation is running.
*/
void ScbCloth_89(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebe60ULL || rel >= 0xebfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ebfa0 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setSimulationFilterData() not allowed while simulation is running.
*/
void ScbCloth_90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xebfa0ULL || rel >= 0xec000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ec000 size=112 callers=0 calls=3
   calls: sub_2ae2c0, sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getSimulationFilterData() not allowed while simulation is running.
*/
void ScbCloth_91(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec000ULL || rel >= 0xec070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ec070 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setContactOffset() not allowed while simulation is running.
*/
void ScbCloth_92(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec070ULL || rel >= 0xec0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ec0d0 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getContactOffset() not allowed while simulation is running.
*/
void ScbCloth_93(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec0d0ULL || rel >= 0xec140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ec140 size=96 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::setRestOffset() not allowed while simulation is running.
*/
void ScbCloth_94(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec140ULL || rel >= 0xec1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ec1a0 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering\ScbCloth.h
   ref: Call to PxCloth::getRestOffset() not allowed while simulation is running.
*/
void ScbCloth_95(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec1a0ULL || rel >= 0xec210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ec210 size=2592 callers=0 calls=8
   calls: sub_1184c0, sub_1184d0, sub_118620, sub_300c80, sub_e5810, sub_ed340, sub_ed580, sub_ed7c0
*/
void sub_ec210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xec210ULL || rel >= 0xecc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ecc30 size=16 callers=0 calls=0
   ref: PxCloth
*/
void PxCloth(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecc30ULL || rel >= 0xecc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ecc40 size=128 callers=0 calls=0
   ref: PxBase
   ref: PxCloth
   ref: PxActor
*/
void PxCloth_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecc40ULL || rel >= 0xeccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eccc0 size=16 callers=0 calls=0
*/
void sub_eccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeccc0ULL || rel >= 0xeccd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eccd0 size=16 callers=0 calls=0
*/
void sub_eccd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeccd0ULL || rel >= 0xecce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ecce0 size=16 callers=0 calls=0
*/
void sub_ecce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecce0ULL || rel >= 0xeccf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eccf0 size=288 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_eccf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeccf0ULL || rel >= 0xece10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ece10 size=208 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_ece10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xece10ULL || rel >= 0xecee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ecee0 size=80 callers=0 calls=0
*/
void sub_ecee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecee0ULL || rel >= 0xecf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ecf30 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_ecf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecf30ULL || rel >= 0xecff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ecff0 size=80 callers=0 calls=0
*/
void sub_ecff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xecff0ULL || rel >= 0xed040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed040 size=224 callers=0 calls=2
   calls: sub_3007d0, sub_e1d90
   ref: ./../../PhysX/src\NpActorTemplate.h
   ref: ./../../PhysX/src/buffering\ScbActor.h
   ref: Attempt to set the client id when an actor is already in a scene.
   ref: Attempt to set the client id when an actor is buffering
*/
void NpActorTemplate_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed040ULL || rel >= 0xed120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed120 size=64 callers=0 calls=0
*/
void sub_ed120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed120ULL || rel >= 0xed160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed160 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_ed160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed160ULL || rel >= 0xed220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed220 size=96 callers=0 calls=0
*/
void sub_ed220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed220ULL || rel >= 0xed280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed280 size=16 callers=0 calls=0
*/
void sub_ed280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed280ULL || rel >= 0xed290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed290 size=16 callers=0 calls=0
*/
void sub_ed290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed290ULL || rel >= 0xed2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed2a0 size=16 callers=0 calls=0
*/
void sub_ed2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2a0ULL || rel >= 0xed2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed2b0 size=80 callers=1 calls=2
   calls: sub_e0cb0, sub_e1e10
*/
void sub_ed2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed2b0ULL || rel >= 0xed300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed300 size=16 callers=0 calls=0
*/
void sub_ed300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed300ULL || rel >= 0xed310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed310 size=16 callers=0 calls=0
*/
void sub_ed310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed310ULL || rel >= 0xed320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed320 size=16 callers=0 calls=0
*/
void sub_ed320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed320ULL || rel >= 0xed330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed330 size=16 callers=0 calls=0
*/
void sub_ed330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed330ULL || rel >= 0xed340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed340 size=224 callers=47 calls=1
   calls: PsArray_138
*/
void sub_ed340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed340ULL || rel >= 0xed420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed420 size=352 callers=39 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_138(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed420ULL || rel >= 0xed580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed580 size=224 callers=2 calls=1
   calls: PsArray_139
*/
void sub_ed580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed580ULL || rel >= 0xed660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed660 size=352 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxClothFabricPhase>::getName() [T = phy
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_139(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed660ULL || rel >= 0xed7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed7c0 size=144 callers=3 calls=1
   calls: PsArray_140
*/
void sub_ed7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed7c0ULL || rel >= 0xed850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed850 size=272 callers=3 calls=2
   calls: sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::PxVec3>::getName() [T = physx::PxVec3]
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed850ULL || rel >= 0xed960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed960 size=96 callers=0 calls=1
   calls: sub_ebde0
*/
void sub_ed960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed960ULL || rel >= 0xed9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ed9c0 size=80 callers=1 calls=0
*/
void sub_ed9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xed9c0ULL || rel >= 0xeda10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eda10 size=16 callers=0 calls=0
*/
void sub_eda10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda10ULL || rel >= 0xeda20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eda20 size=64 callers=0 calls=1
   calls: sub_300c80
*/
void sub_eda20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda20ULL || rel >= 0xeda60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eda60 size=80 callers=1 calls=1
   calls: sub_2ae2d0
*/
void sub_eda60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeda60ULL || rel >= 0xedab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000edab0 size=16 callers=3 calls=0
*/
void sub_edab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedab0ULL || rel >= 0xedac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000edac0 size=400 callers=1 calls=6
   calls: sub_106d50, sub_106dd0, sub_2bd6a0, sub_e0ca0, sub_e0cb0, sub_e1e10
*/
void sub_edac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedac0ULL || rel >= 0xedc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000edc50 size=128 callers=0 calls=4
   calls: sub_106dd0, sub_2bd7e0, sub_e0cb0, sub_e1e10
*/
void sub_edc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedc50ULL || rel >= 0xedcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000edcd0 size=160 callers=0 calls=5
   calls: sub_106dd0, sub_2bd7e0, sub_300c80, sub_e0cb0, sub_e1e10
*/
void sub_edcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedcd0ULL || rel >= 0xedd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000edd70 size=144 callers=0 calls=0
*/
void sub_edd70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedd70ULL || rel >= 0xede00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ede00 size=144 callers=0 calls=0
*/
void sub_ede00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede00ULL || rel >= 0xede90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ede90 size=288 callers=0 calls=5
   calls: sub_106d90, sub_106e80, sub_e0cb0, sub_e0ef0, sub_e1e10
*/
void sub_ede90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xede90ULL || rel >= 0xedfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000edfb0 size=224 callers=0 calls=7
   calls: NpRigidActorTemplate_7, sub_107b20, sub_b3e20, sub_caec0, sub_cc870, sub_cd830, sub_f87d0
*/
void sub_edfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xedfb0ULL || rel >= 0xee090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ee090 size=912 callers=0 calls=9
   calls: sub_107e30, sub_296df0, sub_2bd990, sub_2be6c0, sub_3007d0, sub_3007e0, sub_d17a0, sub_e1d90, sub_e1dc0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxRigidDynamic::setGlobalPose: Actor is part of a pruning structure, pruning structure is now invali
*/
void NpRigidDynamic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee090ULL || rel >= 0xee420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ee420 size=544 callers=0 calls=3
   calls: sub_107e30, sub_e1dc0, sub_f3190
*/
void sub_ee420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee420ULL || rel >= 0xee640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ee640 size=704 callers=0 calls=1
   calls: sub_2bec20
*/
void sub_ee640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee640ULL || rel >= 0xee900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ee900 size=1232 callers=0 calls=5
   calls: sub_107e30, sub_2bec20, sub_e1dc0, sub_eedd0, sub_f3190
*/
void sub_ee900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xee900ULL || rel >= 0xeedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eedd0 size=784 callers=1 calls=5
   calls: sub_2bd990, sub_2bdac0, sub_d17a0, sub_d1950, sub_e05b0
*/
void sub_eedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeedd0ULL || rel >= 0xef0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef0e0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_ef0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef0e0ULL || rel >= 0xef180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef180 size=32 callers=0 calls=0
*/
void sub_ef180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef180ULL || rel >= 0xef1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef1a0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_ef1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef1a0ULL || rel >= 0xef240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef240 size=32 callers=0 calls=0
*/
void sub_ef240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef240ULL || rel >= 0xef260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef260 size=416 callers=0 calls=4
   calls: sub_2bda20, sub_d17a0, sub_e1d90, sub_e1dc0
*/
void sub_ef260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef260ULL || rel >= 0xef400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef400 size=240 callers=1 calls=2
   calls: sub_d17a0, sub_e1d90
*/
void sub_ef400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef400ULL || rel >= 0xef4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef4f0 size=416 callers=0 calls=4
   calls: sub_2bda70, sub_d17a0, sub_e1d90, sub_e1dc0
*/
void sub_ef4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef4f0ULL || rel >= 0xef690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef690 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_ef690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef690ULL || rel >= 0xef730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef730 size=48 callers=0 calls=1
   calls: sub_2be260
*/
void sub_ef730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef730ULL || rel >= 0xef760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef760 size=304 callers=0 calls=3
   calls: sub_d17a0, sub_e1d90, sub_ef890
*/
void sub_ef760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef760ULL || rel >= 0xef890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000ef890 size=1168 callers=2 calls=4
   calls: sub_2be030, sub_2be0b0, sub_df1a0, sub_df2d0
*/
void sub_ef890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xef890ULL || rel >= 0xefd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000efd20 size=304 callers=0 calls=3
   calls: sub_d17a0, sub_e1d90, sub_ef890
*/
void sub_efd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefd20ULL || rel >= 0xefe50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000efe50 size=320 callers=0 calls=1
   calls: sub_d1950
*/
void sub_efe50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xefe50ULL || rel >= 0xeff90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000eff90 size=304 callers=0 calls=1
   calls: sub_d1950
*/
void sub_eff90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xeff90ULL || rel >= 0xf00c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f00c0 size=16 callers=0 calls=0
*/
void sub_f00c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf00c0ULL || rel >= 0xf00d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f00d0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f00d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf00d0ULL || rel >= 0xf0170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0170 size=32 callers=0 calls=0
*/
void sub_f0170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0170ULL || rel >= 0xf0190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0190 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f0190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0190ULL || rel >= 0xf0230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0230 size=32 callers=0 calls=0
*/
void sub_f0230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0230ULL || rel >= 0xf0250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0250 size=16 callers=0 calls=0
*/
void sub_f0250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0250ULL || rel >= 0xf0260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0260 size=16 callers=0 calls=0
*/
void sub_f0260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0260ULL || rel >= 0xf0270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0270 size=144 callers=0 calls=1
   calls: sub_d17a0
*/
void sub_f0270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0270ULL || rel >= 0xf0300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0300 size=16 callers=0 calls=0
*/
void sub_f0300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0300ULL || rel >= 0xf0310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0310 size=176 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f0310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0310ULL || rel >= 0xf03c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f03c0 size=48 callers=0 calls=0
*/
void sub_f03c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03c0ULL || rel >= 0xf03f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f03f0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f03f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf03f0ULL || rel >= 0xf0490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0490 size=32 callers=0 calls=0
*/
void sub_f0490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0490ULL || rel >= 0xf04b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f04b0 size=64 callers=14 calls=1
   calls: sub_2d96e0
*/
void sub_f04b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04b0ULL || rel >= 0xf04f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f04f0 size=320 callers=0 calls=4
   calls: sub_2be5b0, sub_2be940, sub_cc880, sub_d5ed0
*/
void sub_f04f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf04f0ULL || rel >= 0xf0630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0630 size=48 callers=0 calls=0
*/
void sub_f0630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0630ULL || rel >= 0xf0660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0660 size=48 callers=0 calls=0
*/
void sub_f0660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0660ULL || rel >= 0xf0690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0690 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f0690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0690ULL || rel >= 0xf0730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0730 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f0730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0730ULL || rel >= 0xf07f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f07f0 size=560 callers=1 calls=6
   calls: sub_1184d0, sub_118570, sub_118a20, sub_2be030, sub_2be0b0, sub_f0a20
*/
void sub_f07f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf07f0ULL || rel >= 0xf0a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0a20 size=864 callers=1 calls=7
   calls: NonTrackedAlloc_99, sub_1184d0, sub_1184e0, sub_118570, sub_118d60, sub_119020, sub_2e6570
*/
void sub_f0a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0a20ULL || rel >= 0xf0d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0d80 size=16 callers=0 calls=0
   ref: PxRigidDynamic
*/
void PxRigidDynamic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0d80ULL || rel >= 0xf0d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0d90 size=192 callers=0 calls=0
   ref: PxBase
   ref: PxRigidDynamic
   ref: PxRigidActor
   ref: PxActor
   ref: PxRigidBody
*/
void PxRigidDynamic_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0d90ULL || rel >= 0xf0e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0e50 size=16 callers=0 calls=0
*/
void sub_f0e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e50ULL || rel >= 0xf0e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0e60 size=16 callers=0 calls=0
*/
void sub_f0e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e60ULL || rel >= 0xf0e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0e70 size=16 callers=0 calls=0
*/
void sub_f0e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e70ULL || rel >= 0xf0e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0e80 size=16 callers=0 calls=0
*/
void sub_f0e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e80ULL || rel >= 0xf0e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0e90 size=208 callers=0 calls=1
   calls: sub_107880
*/
void sub_f0e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0e90ULL || rel >= 0xf0f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f0f60 size=800 callers=0 calls=6
   calls: sub_2ba220, sub_d17a0, sub_d1950, sub_e1670, sub_e1720, sub_e1d90
*/
void sub_f0f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf0f60ULL || rel >= 0xf1280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1280 size=672 callers=0 calls=6
   calls: sub_2ba220, sub_d17a0, sub_d1950, sub_e1670, sub_e1720, sub_e1d90
*/
void sub_f1280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1280ULL || rel >= 0xf1520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1520 size=80 callers=0 calls=0
*/
void sub_f1520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1520ULL || rel >= 0xf1570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1570 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f1570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1570ULL || rel >= 0xf1630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1630 size=80 callers=0 calls=0
*/
void sub_f1630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1630ULL || rel >= 0xf1680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1680 size=224 callers=0 calls=2
   calls: sub_3007d0, sub_e1d90
   ref: ./../../PhysX/src/NpActorTemplate.h
   ref: ./../../PhysX/src/buffering\ScbActor.h
   ref: Attempt to set the client id when an actor is already in a scene.
   ref: Attempt to set the client id when an actor is buffering
*/
void ScbActor_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1680ULL || rel >= 0xf1760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1760 size=64 callers=0 calls=0
*/
void sub_f1760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1760ULL || rel >= 0xf17a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f17a0 size=224 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f17a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf17a0ULL || rel >= 0xf1880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1880 size=96 callers=0 calls=0
*/
void sub_f1880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1880ULL || rel >= 0xf18e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f18e0 size=16 callers=0 calls=0
*/
void sub_f18e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf18e0ULL || rel >= 0xf18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f18f0 size=496 callers=0 calls=0
*/
void sub_f18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf18f0ULL || rel >= 0xf1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1ae0 size=112 callers=0 calls=2
   calls: sub_1054d0, sub_106eb0
*/
void sub_f1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1ae0ULL || rel >= 0xf1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1b50 size=112 callers=0 calls=3
   calls: sub_296df0, sub_3007d0, sub_3007e0
   ref: PxRigidActor::attachShape: Actor is part of a pruning structure, pruning structure is now invalid!
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1b50ULL || rel >= 0xf1bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1bc0 size=176 callers=0 calls=4
   calls: sub_107190, sub_296df0, sub_3007d0, sub_3007e0
   ref: PxRigidActor::detachShape: Actor is part of a pruning structure, pruning structure is now invalid!
   ref: PxRigidActor::detachShape: shape is not attached to this actor!
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1bc0ULL || rel >= 0xf1c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1c70 size=16 callers=0 calls=0
*/
void sub_f1c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1c70ULL || rel >= 0xf1c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1c80 size=16 callers=0 calls=0
*/
void sub_f1c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1c80ULL || rel >= 0xf1c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1c90 size=16 callers=0 calls=0
*/
void sub_f1c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1c90ULL || rel >= 0xf1ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1ca0 size=128 callers=0 calls=0
*/
void sub_f1ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1ca0ULL || rel >= 0xf1d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1d20 size=80 callers=0 calls=0
*/
void sub_f1d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1d20ULL || rel >= 0xf1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1d70 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1d70ULL || rel >= 0xf1e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1e30 size=80 callers=0 calls=1
   calls: sub_2be030
*/
void sub_f1e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1e30ULL || rel >= 0xf1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1e80 size=32 callers=0 calls=0
*/
void sub_f1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1e80ULL || rel >= 0xf1ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1ea0 size=288 callers=0 calls=3
   calls: sub_2be0e0, sub_d17a0, sub_d1950
*/
void sub_f1ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1ea0ULL || rel >= 0xf1fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f1fc0 size=160 callers=0 calls=1
   calls: sub_2be0b0
*/
void sub_f1fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf1fc0ULL || rel >= 0xf2060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2060 size=80 callers=0 calls=1
   calls: sub_2be0b0
*/
void sub_f2060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2060ULL || rel >= 0xf20b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f20b0 size=32 callers=0 calls=0
*/
void sub_f20b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf20b0ULL || rel >= 0xf20d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f20d0 size=32 callers=0 calls=0
*/
void sub_f20d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf20d0ULL || rel >= 0xf20f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f20f0 size=1024 callers=0 calls=9
   calls: PsPool_18, sub_107e30, sub_2be540, sub_2be940, sub_2bec20, sub_3007d0, sub_3007e0, sub_df400, sub_e1dc0
   ref: RigidBody::setRigidBodyFlag: dynamic meshes/planes/heightfields are not supported!
   ref: RigidBody::setRigidBodyFlag: eENABLE_CCD can't be raised as the same time as eENABLE_SPECULATIVE_CCD
   ref: ./../../PhysX/src/NpRigidBodyTemplate.h
   ref: RigidBody::setRigidBodyFlag: kinematic bodies with CCD enabled are not supported! CCD will be ignore
   ref: RigidBody::setRigidBodyFlag: kinematic articulation links are not supported!
*/
void heightfields_are_not_supported_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf20f0ULL || rel >= 0xf24f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f24f0 size=1008 callers=0 calls=9
   calls: PsPool_18, sub_107e30, sub_2be540, sub_2be940, sub_2bec20, sub_3007d0, sub_3007e0, sub_df400, sub_e1dc0
   ref: RigidBody::setRigidBodyFlag: dynamic meshes/planes/heightfields are not supported!
   ref: RigidBody::setRigidBodyFlag: eENABLE_CCD can't be raised as the same time as eENABLE_SPECULATIVE_CCD
   ref: ./../../PhysX/src/NpRigidBodyTemplate.h
   ref: RigidBody::setRigidBodyFlag: kinematic bodies with CCD enabled are not supported! CCD will be ignore
   ref: RigidBody::setRigidBodyFlag: kinematic articulation links are not supported!
*/
void heightfields_are_not_supported_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf24f0ULL || rel >= 0xf28e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f28e0 size=48 callers=0 calls=0
*/
void sub_f28e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf28e0ULL || rel >= 0xf2910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2910 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f2910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2910ULL || rel >= 0xf29b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f29b0 size=32 callers=0 calls=0
*/
void sub_f29b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29b0ULL || rel >= 0xf29d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f29d0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f29d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf29d0ULL || rel >= 0xf2a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2a70 size=48 callers=0 calls=0
*/
void sub_f2a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2a70ULL || rel >= 0xf2aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2aa0 size=160 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f2aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2aa0ULL || rel >= 0xf2b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2b40 size=32 callers=0 calls=0
*/
void sub_f2b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2b40ULL || rel >= 0xf2b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2b60 size=48 callers=0 calls=1
   calls: sub_106e50
*/
void sub_f2b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2b60ULL || rel >= 0xf2b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2b90 size=144 callers=0 calls=1
   calls: sub_106b90
*/
void sub_f2b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2b90ULL || rel >= 0xf2c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2c20 size=144 callers=1 calls=6
   calls: sub_107580, sub_296df0, sub_3007d0, sub_3007e0, sub_e1030, sub_e1dc0
   ref: PxRigidActor::release: Actor is part of a pruning structure, pruning structure is now invalid!
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2c20ULL || rel >= 0xf2cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2cb0 size=128 callers=0 calls=4
   calls: sub_106dd0, sub_2bd7e0, sub_e0cb0, sub_e1e10
*/
void sub_f2cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2cb0ULL || rel >= 0xf2d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2d30 size=16 callers=0 calls=0
*/
void sub_f2d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2d30ULL || rel >= 0xf2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2d40 size=16 callers=0 calls=0
*/
void sub_f2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2d40ULL || rel >= 0xf2d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2d50 size=16 callers=0 calls=0
*/
void sub_f2d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2d50ULL || rel >= 0xf2d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2d60 size=96 callers=0 calls=3
   calls: sub_106dd0, sub_e0cb0, sub_e1e10
*/
void sub_f2d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2d60ULL || rel >= 0xf2dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2dc0 size=16 callers=0 calls=0
*/
void sub_f2dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2dc0ULL || rel >= 0xf2dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2dd0 size=112 callers=0 calls=3
   calls: sub_296df0, sub_3007d0, sub_3007e0
   ref: PxRigidActor::attachShape: Actor is part of a pruning structure, pruning structure is now invalid!
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2dd0ULL || rel >= 0xf2e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2e40 size=16 callers=0 calls=0
*/
void sub_f2e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2e40ULL || rel >= 0xf2e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2e50 size=80 callers=0 calls=2
   calls: sub_e0cb0, sub_e1e10
*/
void sub_f2e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2e50ULL || rel >= 0xf2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2ea0 size=16 callers=0 calls=0
*/
void sub_f2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2ea0ULL || rel >= 0xf2eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2eb0 size=288 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_f2eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2eb0ULL || rel >= 0xf2fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f2fd0 size=208 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_f2fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf2fd0ULL || rel >= 0xf30a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f30a0 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f30a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf30a0ULL || rel >= 0xf3160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3160 size=16 callers=0 calls=0
*/
void sub_f3160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3160ULL || rel >= 0xf3170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3170 size=16 callers=0 calls=0
*/
void sub_f3170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3170ULL || rel >= 0xf3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3180 size=16 callers=0 calls=0
*/
void sub_f3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3180ULL || rel >= 0xf3190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3190 size=352 callers=2 calls=3
   calls: ScBodyCore, sub_d17a0, sub_d1950
*/
void sub_f3190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3190ULL || rel >= 0xf32f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f32f0 size=368 callers=1 calls=6
   calls: sub_106d50, sub_106dd0, sub_2d9530, sub_e0ca0, sub_e0cb0, sub_e1e10
*/
void sub_f32f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf32f0ULL || rel >= 0xf3460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3460 size=128 callers=0 calls=4
   calls: sub_106dd0, sub_2d9550, sub_e0cb0, sub_e1e10
*/
void sub_f3460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3460ULL || rel >= 0xf34e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f34e0 size=160 callers=0 calls=5
   calls: sub_106dd0, sub_2d9550, sub_300c80, sub_e0cb0, sub_e1e10
*/
void sub_f34e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf34e0ULL || rel >= 0xf3580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3580 size=144 callers=0 calls=0
*/
void sub_f3580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3580ULL || rel >= 0xf3610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3610 size=144 callers=0 calls=0
*/
void sub_f3610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3610ULL || rel >= 0xf36a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f36a0 size=272 callers=0 calls=5
   calls: sub_106d90, sub_106e80, sub_e0cb0, sub_e0ef0, sub_e1e10
*/
void sub_f36a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf36a0ULL || rel >= 0xf37b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f37b0 size=224 callers=0 calls=7
   calls: NpRigidActorTemplate_11, sub_107b20, sub_b3e20, sub_caec0, sub_cc870, sub_ccf00, sub_f87d0
*/
void sub_f37b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf37b0ULL || rel >= 0xf3890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3890 size=480 callers=0 calls=9
   calls: sub_107e30, sub_296df0, sub_2fef20, sub_3007d0, sub_3007e0, sub_d17a0, sub_d1950, sub_e05b0, sub_e1dc0
   ref: PxRigidStatic::setGlobalPose: Actor is part of a pruning structure, pruning structure is now invalid
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpRigidStatic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3890ULL || rel >= 0xf3a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3a70 size=80 callers=0 calls=0
*/
void sub_f3a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3a70ULL || rel >= 0xf3ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3ac0 size=112 callers=0 calls=2
   calls: sub_1054d0, sub_106eb0
*/
void sub_f3ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3ac0ULL || rel >= 0xf3b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3b30 size=96 callers=14 calls=1
   calls: sub_2d96e0
*/
void sub_f3b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b30ULL || rel >= 0xf3b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3b90 size=48 callers=0 calls=0
*/
void sub_f3b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3b90ULL || rel >= 0xf3bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3bc0 size=48 callers=0 calls=0
*/
void sub_f3bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3bc0ULL || rel >= 0xf3bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3bf0 size=336 callers=1 calls=4
   calls: NonTrackedAlloc_99, sub_118570, sub_119020, sub_2e6570
*/
void sub_f3bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3bf0ULL || rel >= 0xf3d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3d40 size=16 callers=0 calls=0
   ref: PxRigidStatic
*/
void PxRigidStatic(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d40ULL || rel >= 0xf3d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3d50 size=160 callers=0 calls=0
   ref: PxBase
   ref: PxRigidActor
   ref: PxRigidStatic
   ref: PxActor
*/
void PxRigidStatic_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3d50ULL || rel >= 0xf3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3df0 size=16 callers=0 calls=0
*/
void sub_f3df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3df0ULL || rel >= 0xf3e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3e00 size=16 callers=0 calls=0
*/
void sub_f3e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3e00ULL || rel >= 0xf3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3e10 size=16 callers=0 calls=0
*/
void sub_f3e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3e10ULL || rel >= 0xf3e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3e20 size=16 callers=0 calls=0
*/
void sub_f3e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3e20ULL || rel >= 0xf3e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3e30 size=208 callers=0 calls=1
   calls: sub_107880
*/
void sub_f3e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3e30ULL || rel >= 0xf3f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f3f00 size=800 callers=0 calls=6
   calls: sub_2ba220, sub_d17a0, sub_d1950, sub_e1670, sub_e1720, sub_e1d90
*/
void sub_f3f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf3f00ULL || rel >= 0xf4220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4220 size=672 callers=0 calls=6
   calls: sub_2ba220, sub_d17a0, sub_d1950, sub_e1670, sub_e1720, sub_e1d90
*/
void sub_f4220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4220ULL || rel >= 0xf44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f44c0 size=80 callers=0 calls=0
*/
void sub_f44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf44c0ULL || rel >= 0xf4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4510 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4510ULL || rel >= 0xf45d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f45d0 size=80 callers=0 calls=0
*/
void sub_f45d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf45d0ULL || rel >= 0xf4620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4620 size=224 callers=0 calls=2
   calls: sub_3007d0, sub_e1d90
   ref: ./../../PhysX/src/NpActorTemplate.h
   ref: ./../../PhysX/src/buffering\ScbActor.h
   ref: Attempt to set the client id when an actor is already in a scene.
   ref: Attempt to set the client id when an actor is buffering
*/
void ScbActor_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4620ULL || rel >= 0xf4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4700 size=64 callers=0 calls=0
*/
void sub_f4700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4700ULL || rel >= 0xf4740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4740 size=224 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f4740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4740ULL || rel >= 0xf4820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4820 size=96 callers=0 calls=0
*/
void sub_f4820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4820ULL || rel >= 0xf4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4880 size=16 callers=0 calls=0
*/
void sub_f4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4880ULL || rel >= 0xf4890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4890 size=112 callers=0 calls=3
   calls: sub_296df0, sub_3007d0, sub_3007e0
   ref: PxRigidActor::attachShape: Actor is part of a pruning structure, pruning structure is now invalid!
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4890ULL || rel >= 0xf4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4900 size=176 callers=0 calls=4
   calls: sub_107190, sub_296df0, sub_3007d0, sub_3007e0
   ref: PxRigidActor::detachShape: Actor is part of a pruning structure, pruning structure is now invalid!
   ref: PxRigidActor::detachShape: shape is not attached to this actor!
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4900ULL || rel >= 0xf49b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f49b0 size=16 callers=0 calls=0
*/
void sub_f49b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49b0ULL || rel >= 0xf49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f49c0 size=16 callers=0 calls=0
*/
void sub_f49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49c0ULL || rel >= 0xf49d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f49d0 size=16 callers=0 calls=0
*/
void sub_f49d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49d0ULL || rel >= 0xf49e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f49e0 size=128 callers=0 calls=0
*/
void sub_f49e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf49e0ULL || rel >= 0xf4a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4a60 size=48 callers=0 calls=1
   calls: sub_106e50
*/
void sub_f4a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a60ULL || rel >= 0xf4a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4a90 size=144 callers=0 calls=1
   calls: sub_106b90
*/
void sub_f4a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4a90ULL || rel >= 0xf4b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4b20 size=144 callers=1 calls=6
   calls: sub_107580, sub_296df0, sub_3007d0, sub_3007e0, sub_e1030, sub_e1dc0
   ref: PxRigidActor::release: Actor is part of a pruning structure, pruning structure is now invalid!
   ref: ./../../PhysX/src/NpRigidActorTemplate.h
*/
void NpRigidActorTemplate_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4b20ULL || rel >= 0xf4bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4bb0 size=96 callers=0 calls=3
   calls: sub_106dd0, sub_e0cb0, sub_e1e10
*/
void sub_f4bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4bb0ULL || rel >= 0xf4c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4c10 size=16 callers=0 calls=0
*/
void sub_f4c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c10ULL || rel >= 0xf4c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4c20 size=16 callers=0 calls=0
*/
void sub_f4c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c20ULL || rel >= 0xf4c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4c30 size=16 callers=0 calls=0
*/
void sub_f4c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c30ULL || rel >= 0xf4c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4c40 size=16 callers=0 calls=0
*/
void sub_f4c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c40ULL || rel >= 0xf4c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4c50 size=80 callers=0 calls=2
   calls: sub_e0cb0, sub_e1e10
*/
void sub_f4c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4c50ULL || rel >= 0xf4ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4ca0 size=16 callers=0 calls=0
*/
void sub_f4ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ca0ULL || rel >= 0xf4cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4cb0 size=288 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_f4cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4cb0ULL || rel >= 0xf4dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4dd0 size=208 callers=0 calls=3
   calls: sub_2ba220, sub_d17a0, sub_d1950
*/
void sub_f4dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4dd0ULL || rel >= 0xf4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4ea0 size=192 callers=0 calls=2
   calls: sub_d17a0, sub_d1950
*/
void sub_f4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4ea0ULL || rel >= 0xf4f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4f60 size=16 callers=0 calls=0
*/
void sub_f4f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f60ULL || rel >= 0xf4f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4f70 size=16 callers=0 calls=0
*/
void sub_f4f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f70ULL || rel >= 0xf4f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4f80 size=16 callers=0 calls=0
*/
void sub_f4f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f80ULL || rel >= 0xf4f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f4f90 size=288 callers=1 calls=7
   calls: PsMutex_7, PsMutex_9, sub_1a48a0, sub_1aedd0, sub_1c5670, sub_29a590, sub_f50b0
   ref: NpSceneQueries.sceneQueriesDynamicPrunerUpdate
   ref: NpSceneQueries.sceneQueriesStaticPrunerUpdate
*/
void NpSceneQueries_sceneQueriesStaticPrunerUpdate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf4f90ULL || rel >= 0xf50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f50b0 size=1120 callers=4 calls=3
   calls: sub_2ff4b0, sub_300c80, sub_cbac0
*/
void sub_f50b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf50b0ULL || rel >= 0xf5510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5510 size=2288 callers=1 calls=18
   calls: NonTrackedAlloc_181, NonTrackedAlloc_92, NonTrackedAlloc_94, NonTrackedAlloc_95, NonTrackedAlloc_96, NonTrackedAlloc_97, NonTrackedAlloc_98, NpSceneQueries_sceneQueriesStaticPrunerUpdate, sub_29a590, sub_2ff620, sub_2ffa20, sub_2ffa30
   ... +6 more
   ref: <allocation names disabled>
   ref: NpScene.execution
   ref: ./../../../../PxShared/src/foundation/include\PsSync.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SyncImpl>::getName() [T = physx
   ref: NpScene.collide
   ref: NpScene.solve
*/
void PsSync(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5510ULL || rel >= 0xf5e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5e00 size=80 callers=6 calls=1
   calls: sub_300c80
*/
void sub_f5e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5e00ULL || rel >= 0xf5e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5e50 size=80 callers=4 calls=2
   calls: sub_2ffa70, sub_300c80
*/
void sub_f5e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5e50ULL || rel >= 0xf5ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5ea0 size=112 callers=1 calls=1
   calls: sub_300c80
*/
void sub_f5ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5ea0ULL || rel >= 0xf5f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5f10 size=112 callers=1 calls=1
   calls: sub_300c80
*/
void sub_f5f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f10ULL || rel >= 0xf5f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5f80 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_f5f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5f80ULL || rel >= 0xf5fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f5fd0 size=112 callers=1 calls=1
   calls: sub_300c80
*/
void sub_f5fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf5fd0ULL || rel >= 0xf6040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6040 size=112 callers=1 calls=1
   calls: sub_300c80
*/
void sub_f6040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6040ULL || rel >= 0xf60b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f60b0 size=112 callers=1 calls=1
   calls: sub_300c80
*/
void sub_f60b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf60b0ULL || rel >= 0xf6120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6120 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_f6120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6120ULL || rel >= 0xf6170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6170 size=112 callers=1 calls=1
   calls: sub_300c80
*/
void sub_f6170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6170ULL || rel >= 0xf61e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f61e0 size=288 callers=5 calls=1
   calls: sub_300c80
*/
void sub_f61e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf61e0ULL || rel >= 0xf6300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6300 size=96 callers=1 calls=1
   calls: sub_29a590
*/
void sub_f6300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6300ULL || rel >= 0xf6360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6360 size=16 callers=0 calls=0
*/
void sub_f6360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6360ULL || rel >= 0xf6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6370 size=2272 callers=1 calls=21
   calls: PsArray_150, PsArray_151, sub_29a590, sub_2ff620, sub_2ffa70, sub_2fffd0, sub_300c80, sub_cc790, sub_f50b0, sub_f5e00, sub_f5e50, sub_f5ea0
   ... +9 more
*/
void sub_f6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6370ULL || rel >= 0xf6c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6c50 size=208 callers=0 calls=0
*/
void sub_f6c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6c50ULL || rel >= 0xf6d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6d20 size=64 callers=0 calls=2
   calls: sub_300c80, sub_f6370
*/
void sub_f6d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d20ULL || rel >= 0xf6d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6d60 size=240 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::release(): Scene is still being simulated! PxScene::fetchResults() is called implicitly.
*/
void NpScene(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6d60ULL || rel >= 0xf6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6e50 size=112 callers=1 calls=2
   calls: PsArray_152, sub_2dd5f0
*/
void sub_f6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6e50ULL || rel >= 0xf6ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6ec0 size=96 callers=0 calls=0
*/
void sub_f6ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6ec0ULL || rel >= 0xf6f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6f20 size=80 callers=0 calls=0
*/
void sub_f6f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6f20ULL || rel >= 0xf6f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6f70 size=48 callers=0 calls=0
*/
void sub_f6f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6f70ULL || rel >= 0xf6fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6fa0 size=32 callers=0 calls=0
*/
void sub_f6fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6fa0ULL || rel >= 0xf6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f6fc0 size=128 callers=0 calls=2
   calls: PsArray_152, sub_2dd5f0
*/
void sub_f6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf6fc0ULL || rel >= 0xf7040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f7040 size=16 callers=0 calls=0
*/
void sub_f7040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7040ULL || rel >= 0xf7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f7050 size=144 callers=0 calls=1
   calls: sub_2dc410
*/
void sub_f7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7050ULL || rel >= 0xf70e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f70e0 size=48 callers=0 calls=0
*/
void sub_f70e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf70e0ULL || rel >= 0xf7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f7110 size=240 callers=0 calls=4
   calls: NpScene_3, sub_3007d0, sub_3007e0, sub_e1d90
   ref: PxScene::addActor(): actor is in a pruning structure and cannot be added to a scene directly, use ad
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::addActor(): Actor already assigned to a scene. Call will be ignored!
*/
void NpScene_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7110ULL || rel >= 0xf7200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f7200 size=288 callers=2 calls=5
   calls: ScbScene, sub_100920, sub_100a90, sub_3007d0, sub_cec70
   ref: PxScene::addActor(): Individual articulation links can not be added to the scene
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7200ULL || rel >= 0xf7320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f7320 size=320 callers=1 calls=4
   calls: PsArray_154, sub_107cb0, sub_ccaf0, sub_e1720
*/
void sub_f7320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7320ULL || rel >= 0xf7460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f7460 size=320 callers=1 calls=4
   calls: PsArray_154, sub_107cb0, sub_ccc90, sub_e1720
*/
void sub_f7460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7460ULL || rel >= 0xf75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f75a0 size=432 callers=2 calls=2
   calls: sub_29a750, sub_2ff3c0
*/
void sub_f75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf75a0ULL || rel >= 0xf7750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f7750 size=16 callers=0 calls=0
*/
void sub_f7750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7750ULL || rel >= 0xf7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f7760 size=1792 callers=1 calls=17
   calls: NpScene_3, NpScene_6, PsArray_154, sub_106c80, sub_2e8560, sub_2e8ac0, sub_2e8cb0, sub_2e8f50, sub_3007d0, sub_3007e0, sub_300c80, sub_e1720
   ... +5 more
   ref: PxScene::addActors(): Actor already assigned to a scene. Call will be ignored!
   ref: PxScene::addActors(): actor is in a pruning structure and cannot be added to a scene directly, use a
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::addRigidActors(): articulation link not permitted
   ref: PxScene::addActors() not allowed while simulation is running.
*/
void NpScene_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7760ULL || rel >= 0xf7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f7e60 size=80 callers=0 calls=1
   calls: sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::addActors(): Provided pruning structure is not valid.
*/
void NpScene_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7e60ULL || rel >= 0xf7eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f7eb0 size=64 callers=2 calls=1
   calls: PsArray_153
*/
void sub_f7eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7eb0ULL || rel >= 0xf7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f7ef0 size=304 callers=3 calls=5
   calls: sub_3007d0, sub_ced30, sub_cef20, sub_e75a0, sub_fee20
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::removeActor(): Individual articulation links can not be removed from the scene
*/
void NpScene_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf7ef0ULL || rel >= 0xf8020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f8020 size=1968 callers=0 calls=11
   calls: NpScene_6, sub_1076d0, sub_2e64d0, sub_2e7bb0, sub_2e7cb0, sub_3007d0, sub_3007e0, sub_300c80, sub_ccf00, sub_cd830, sub_e1670
   ref: %s not assigned to scene or assigned to another scene. Call will be ignored!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::removeActors(): Actor
   ref: PxScene::removeActor(): Individual articulation links can not be removed from the scene
*/
void NpScene_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8020ULL || rel >= 0xf87d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f87d0 size=128 callers=2 calls=0
*/
void sub_f87d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf87d0ULL || rel >= 0xf8850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f8850 size=144 callers=0 calls=1
   calls: sub_3007d0
   ref: %s not assigned to scene or assigned to another scene. Call will be ignored!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::removeActor(): Actor
*/
void NpScene_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8850ULL || rel >= 0xf88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f88e0 size=304 callers=0 calls=5
   calls: NpAggregate_2, sub_1076d0, sub_ccf00, sub_e14c0, sub_e1670
*/
void sub_f88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf88e0ULL || rel >= 0xf8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f8a10 size=304 callers=0 calls=5
   calls: NpAggregate_2, sub_1076d0, sub_cd830, sub_e14c0, sub_e1670
*/
void sub_f8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8a10ULL || rel >= 0xf8b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f8b40 size=80 callers=1 calls=2
   calls: sub_cef20, sub_fee20
*/
void sub_f8b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b40ULL || rel >= 0xf8b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f8b90 size=192 callers=0 calls=4
   calls: NpScene_10, sub_3007d0, sub_3007e0, sub_cc870
   ref: PxScene::addArticulation(): Articulations are not currently supported when PxSceneFlag::eENABLE_GPU_
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::addArticulation(): Articulation already assigned to a scene. Call will be ignored!
*/
void NpScene_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8b90ULL || rel >= 0xf8c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f8c50 size=1376 callers=2 calls=11
   calls: NonTrackedAlloc_183, sub_100260, sub_107cb0, sub_3007d0, sub_3007e0, sub_301c30, sub_ccc90, sub_ce4b0, sub_ce6b0, sub_d91e0, sub_e1720
   ref: PxScene::addArticulation(): Articulation link with zero moment of inertia added to scene; defaulting
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::addArticulation(): Articulation link with zero mass added to scene; defaulting mass to 1
*/
void NpScene_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf8c50ULL || rel >= 0xf91b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f91b0 size=160 callers=1 calls=3
   calls: sub_107cb0, sub_ccc90, sub_ce6b0
*/
void sub_f91b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf91b0ULL || rel >= 0xf9250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9250 size=144 callers=0 calls=1
   calls: sub_3007d0
   ref: %s not assigned to scene or assigned to another scene. Call will be ignored!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::removeArticulation(): Articulation
*/
void NpScene_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9250ULL || rel >= 0xf92e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f92e0 size=736 callers=1 calls=10
   calls: NonTrackedAlloc_183, NpAggregate_5, sub_1076d0, sub_2baa30, sub_301c30, sub_cd830, sub_ce5e0, sub_ce7c0, sub_d9bb0, sub_e1670
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf92e0ULL || rel >= 0xf95c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f95c0 size=240 callers=0 calls=6
   calls: sub_1003d0, sub_3007d0, sub_3007e0, sub_ca220, sub_cc870, sub_ce8a0
   ref: PxScene::addAggregate(): Aggregate already assigned to a scene. Call will be ignored!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
*/
void NpScene_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf95c0ULL || rel >= 0xf96b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f96b0 size=496 callers=0 calls=6
   calls: NpScene_12, NpScene_6, sub_3007d0, sub_cad60, sub_ce990, sub_e4ff0
   ref: %s not assigned to scene or assigned to another scene. Call will be ignored!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::removeAggregate(): Aggregate
*/
void NpScene_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf96b0ULL || rel >= 0xf98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f98a0 size=16 callers=0 calls=0
*/
void sub_f98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf98a0ULL || rel >= 0xf98b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f98b0 size=192 callers=0 calls=0
*/
void sub_f98b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf98b0ULL || rel >= 0xf9970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9970 size=864 callers=0 calls=4
   calls: NpScene_4, PsArray_103, PsArray_104, sub_300c80
*/
void sub_f9970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9970ULL || rel >= 0xf9cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9cd0 size=288 callers=0 calls=0
*/
void sub_f9cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9cd0ULL || rel >= 0xf9df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000f9df0 size=528 callers=0 calls=0
*/
void sub_f9df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xf9df0ULL || rel >= 0xfa000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa000 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering/ScbScene.h
   ref: PxScene::getActiveTransforms() not allowed while simulation is running. Call will be ignored.
*/
void ScbScene_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa000ULL || rel >= 0xfa070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa070 size=112 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: ./../../PhysX/src/buffering/ScbScene.h
   ref: PxScene::getActiveActors() not allowed while simulation is running. Call will be ignored.
*/
void ScbScene_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa070ULL || rel >= 0xfa0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa0e0 size=16 callers=0 calls=0
*/
void sub_fa0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0e0ULL || rel >= 0xfa0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa0f0 size=192 callers=0 calls=0
*/
void sub_fa0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa0f0ULL || rel >= 0xfa1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa1b0 size=16 callers=0 calls=0
*/
void sub_fa1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1b0ULL || rel >= 0xfa1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa1c0 size=192 callers=0 calls=0
*/
void sub_fa1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa1c0ULL || rel >= 0xfa280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa280 size=80 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::getRenderBuffer() not allowed while simulation is running.
*/
void NpScene_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa280ULL || rel >= 0xfa2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa2d0 size=912 callers=1 calls=10
   calls: sub_1184d0, sub_118570, sub_118a20, sub_119020, sub_2e9360, sub_d1b60, sub_d1b70, sub_d9960, sub_f07f0, sub_f3bf0
*/
void sub_fa2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa2d0ULL || rel >= 0xfa660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa660 size=32 callers=0 calls=0
*/
void sub_fa660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa660ULL || rel >= 0xfa680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa680 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/N
   ref: PxScene::getSimulationStatistics() not allowed while simulation is running. Call will be ignored.
*/
void NpScene_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa680ULL || rel >= 0xfa6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa6c0 size=176 callers=0 calls=2
   calls: PsArray_122, ScScene_6
*/
void sub_fa6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa6c0ULL || rel >= 0xfa770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa770 size=96 callers=0 calls=1
   calls: sub_2e9a30
*/
void sub_fa770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa770ULL || rel >= 0xfa7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa7d0 size=48 callers=0 calls=0
*/
void sub_fa7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa7d0ULL || rel >= 0xfa800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa800 size=16 callers=0 calls=0
*/
void sub_fa800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa800ULL || rel >= 0xfa810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa810 size=16 callers=0 calls=0
*/
void sub_fa810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa810ULL || rel >= 0xfa820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa820 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering/ScbScene.h
   ref: PxScene::setClothInterCollisionDistance() not allowed while simulation is running. Call will be igno
*/
void ScbScene_7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa820ULL || rel >= 0xfa860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa860 size=16 callers=0 calls=0
*/
void sub_fa860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa860ULL || rel >= 0xfa870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa870 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering/ScbScene.h
   ref: PxScene::setClothInterCollisionStiffness() not allowed while simulation is running. Call will be ign
*/
void ScbScene_8(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa870ULL || rel >= 0xfa8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa8b0 size=16 callers=0 calls=0
*/
void sub_fa8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8b0ULL || rel >= 0xfa8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa8c0 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering/ScbScene.h
   ref: PxScene::setClothInterCollisionNbIterations() not allowed while simulation is running. Call will be 
*/
void ScbScene_9(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa8c0ULL || rel >= 0xfa900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa900 size=16 callers=0 calls=0
*/
void sub_fa900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa900ULL || rel >= 0xfa910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa910 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering/ScbScene.h
   ref: PxScene::setSimulationEventCallback() not allowed while simulation is running. Call will be ignored.
*/
void ScbScene_10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa910ULL || rel >= 0xfa950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa950 size=16 callers=0 calls=0
*/
void sub_fa950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa950ULL || rel >= 0xfa960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa960 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering/ScbScene.h
   ref: PxScene::setContactModifyCallback() not allowed while simulation is running. Call will be ignored.
*/
void ScbScene_11(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa960ULL || rel >= 0xfa9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa9a0 size=16 callers=0 calls=0
*/
void sub_fa9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9a0ULL || rel >= 0xfa9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa9b0 size=64 callers=0 calls=1
   calls: sub_3007d0
   ref: ./../../PhysX/src/buffering/ScbScene.h
   ref: PxScene::setCCDContactModifyCallback() not allowed while simulation is running. Call will be ignored
*/
void ScbScene_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9b0ULL || rel >= 0xfa9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 000fa9f0 size=16 callers=0 calls=0
*/
void sub_fa9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0xfa9f0ULL || rel >= 0xfaa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

