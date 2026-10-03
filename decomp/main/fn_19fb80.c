/* main functions 0019fb80..001fd970 (10 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0019fb80 size=112 callers=0 calls=4
   calls: sub_19f4c0, sub_19f570, sub_19ff40, sub_300c80
*/
void sub_19fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fb80ULL || rel >= 0x19fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fbf0 size=96 callers=0 calls=0
   ref: PxBase
   ref: PxTriangleMesh
*/
void PxTriangleMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fbf0ULL || rel >= 0x19fc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fc50 size=16 callers=0 calls=0
*/
void sub_19fc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fc50ULL || rel >= 0x19fc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fc60 size=16 callers=0 calls=0
*/
void sub_19fc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fc60ULL || rel >= 0x19fc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fc70 size=16 callers=0 calls=0
*/
void sub_19fc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fc70ULL || rel >= 0x19fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fc80 size=16 callers=0 calls=0
*/
void sub_19fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fc80ULL || rel >= 0x19fc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fc90 size=16 callers=0 calls=0
*/
void sub_19fc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fc90ULL || rel >= 0x19fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fca0 size=16 callers=0 calls=0
*/
void sub_19fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fca0ULL || rel >= 0x19fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fcb0 size=32 callers=0 calls=0
*/
void sub_19fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fcb0ULL || rel >= 0x19fcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fcd0 size=64 callers=0 calls=0
*/
void sub_19fcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fcd0ULL || rel >= 0x19fd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fd10 size=16 callers=0 calls=0
*/
void sub_19fd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fd10ULL || rel >= 0x19fd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fd20 size=16 callers=0 calls=0
*/
void sub_19fd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fd20ULL || rel >= 0x19fd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fd30 size=16 callers=0 calls=0
*/
void sub_19fd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fd30ULL || rel >= 0x19fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fd40 size=16 callers=0 calls=0
*/
void sub_19fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fd40ULL || rel >= 0x19fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fd50 size=80 callers=0 calls=2
   calls: sub_19f4c0, sub_19f570
*/
void sub_19fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fd50ULL || rel >= 0x19fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fda0 size=112 callers=0 calls=4
   calls: sub_19f4c0, sub_19f570, sub_19ff40, sub_300c80
*/
void sub_19fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fda0ULL || rel >= 0x19fe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019fe10 size=304 callers=2 calls=0
*/
void sub_19fe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19fe10ULL || rel >= 0x19ff40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0019ff40 size=432 callers=7 calls=2
   calls: sub_1a0620, sub_300c80
*/
void sub_19ff40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x19ff40ULL || rel >= 0x1a00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a00f0 size=16 callers=0 calls=0
*/
void sub_1a00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a00f0ULL || rel >= 0x1a0100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0100 size=16 callers=0 calls=0
*/
void sub_1a0100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0100ULL || rel >= 0x1a0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0110 size=16 callers=0 calls=0
*/
void sub_1a0110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0110ULL || rel >= 0x1a0120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0120 size=416 callers=0 calls=0
*/
void sub_1a0120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0120ULL || rel >= 0x1a02c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a02c0 size=256 callers=2 calls=0
*/
void sub_1a02c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a02c0ULL || rel >= 0x1a03c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a03c0 size=160 callers=0 calls=2
   calls: sub_19c290, sub_3007d0
   ref: Gu::TriangleMesh::release: double deletion detected!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
*/
void GuTriangleMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a03c0ULL || rel >= 0x1a0460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0460 size=160 callers=0 calls=2
   calls: sub_19c290, sub_3007d0
   ref: Gu::TriangleMesh::release: double deletion detected!
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
*/
void GuTriangleMesh_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0460ULL || rel >= 0x1a0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0500 size=64 callers=0 calls=1
   calls: sub_2ff3e0
*/
void sub_1a0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0500ULL || rel >= 0x1a0540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0540 size=64 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: PxTriangleMesh::getVerticesForModification() is only supported for meshes with PxMeshMidPhase::eBVH3
*/
void GuTriangleMesh_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0540ULL || rel >= 0x1a0580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0580 size=128 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: PxTriangleMesh::refitBVH() is only supported for meshes with PxMeshMidPhase::eBVH33.
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
*/
void GuTriangleMesh_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0580ULL || rel >= 0x1a0600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0600 size=32 callers=1 calls=0
*/
void sub_1a0600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0600ULL || rel >= 0x1a0620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0620 size=128 callers=2 calls=1
   calls: sub_300c80
*/
void sub_1a0620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0620ULL || rel >= 0x1a06a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a06a0 size=592 callers=1 calls=5
   calls: sub_1af280, sub_1af360, sub_1af3c0, sub_1af420, sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_109(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a06a0ULL || rel >= 0x1a08f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a08f0 size=256 callers=1 calls=1
   calls: sub_19fe10
*/
void sub_1a08f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a08f0ULL || rel >= 0x1a09f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a09f0 size=160 callers=0 calls=4
   calls: sub_19ff40, sub_1a02c0, sub_1a1350, sub_1a13b0
*/
void sub_1a09f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a09f0ULL || rel >= 0x1a0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0a90 size=48 callers=0 calls=1
   calls: sub_1a1360
*/
void sub_1a0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0a90ULL || rel >= 0x1a0ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0ac0 size=16 callers=0 calls=0
*/
void sub_1a0ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0ac0ULL || rel >= 0x1a0ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0ad0 size=368 callers=0 calls=1
   calls: sub_1a13e0
*/
void sub_1a0ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0ad0ULL || rel >= 0x1a0c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0c40 size=16 callers=0 calls=0
*/
void sub_1a0c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0c40ULL || rel >= 0x1a0c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0c50 size=16 callers=0 calls=0
   ref: PxBVH33TriangleMesh
*/
void PxBVH33TriangleMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0c50ULL || rel >= 0x1a0c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0c60 size=112 callers=0 calls=1
   calls: sub_300c80
*/
void sub_1a0c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0c60ULL || rel >= 0x1a0cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0cd0 size=144 callers=0 calls=2
   calls: sub_19ff40, sub_300c80
*/
void sub_1a0cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0cd0ULL || rel >= 0x1a0d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0d60 size=16 callers=0 calls=0
*/
void sub_1a0d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0d60ULL || rel >= 0x1a0d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0d70 size=112 callers=0 calls=1
   calls: sub_300c80
*/
void sub_1a0d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0d70ULL || rel >= 0x1a0de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0de0 size=16 callers=0 calls=0
*/
void sub_1a0de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0de0ULL || rel >= 0x1a0df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0df0 size=288 callers=0 calls=0
*/
void sub_1a0df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0df0ULL || rel >= 0x1a0f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0f10 size=16 callers=0 calls=0
*/
void sub_1a0f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0f10ULL || rel >= 0x1a0f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a0f20 size=288 callers=0 calls=0
*/
void sub_1a0f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a0f20ULL || rel >= 0x1a1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a1040 size=16 callers=0 calls=0
*/
void sub_1a1040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a1040ULL || rel >= 0x1a1050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a1050 size=768 callers=1 calls=4
   calls: sub_1af280, sub_1af360, sub_1af420, sub_300c80
   ref: NonTrackedAlloc
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
*/
void NonTrackedAlloc_110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a1050ULL || rel >= 0x1a1350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a1350 size=16 callers=1 calls=0
*/
void sub_1a1350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a1350ULL || rel >= 0x1a1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a1360 size=80 callers=1 calls=0
*/
void sub_1a1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a1360ULL || rel >= 0x1a13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a13b0 size=48 callers=1 calls=0
*/
void sub_1a13b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a13b0ULL || rel >= 0x1a13e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a13e0 size=1536 callers=2 calls=0
*/
void sub_1a13e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a13e0ULL || rel >= 0x1a19e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a19e0 size=80 callers=0 calls=0
*/
void sub_1a19e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a19e0ULL || rel >= 0x1a1a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a1a30 size=112 callers=0 calls=1
   calls: sub_19a610
*/
void sub_1a1a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a1a30ULL || rel >= 0x1a1aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a1aa0 size=272 callers=0 calls=0
*/
void sub_1a1aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a1aa0ULL || rel >= 0x1a1bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a1bb0 size=304 callers=0 calls=1
   calls: sub_199430
*/
void sub_1a1bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a1bb0ULL || rel >= 0x1a1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a1ce0 size=1392 callers=0 calls=1
   calls: sub_1206b0
*/
void sub_1a1ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a1ce0ULL || rel >= 0x1a2250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a2250 size=64 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
   ref: Height Field Overlap test called with height fields unregistered 
*/
void GuOverlapTests(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a2250ULL || rel >= 0x1a2290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a2290 size=16 callers=0 calls=0
*/
void sub_1a2290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a2290ULL || rel >= 0x1a22a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a22a0 size=288 callers=0 calls=1
   calls: sub_19a610
*/
void sub_1a22a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a22a0ULL || rel >= 0x1a23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a23c0 size=848 callers=0 calls=1
   calls: sub_19a610
*/
void sub_1a23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a23c0ULL || rel >= 0x1a2710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a2710 size=1392 callers=0 calls=2
   calls: sub_133870, sub_19a610
*/
void sub_1a2710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a2710ULL || rel >= 0x1a2c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a2c80 size=352 callers=0 calls=1
   calls: sub_134e80
*/
void sub_1a2c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a2c80ULL || rel >= 0x1a2de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a2de0 size=352 callers=0 calls=1
   calls: sub_133950
*/
void sub_1a2de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a2de0ULL || rel >= 0x1a2f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a2f40 size=1728 callers=0 calls=1
   calls: sub_1206b0
*/
void sub_1a2f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a2f40ULL || rel >= 0x1a3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a3600 size=416 callers=0 calls=1
   calls: sub_1984b0
*/
void sub_1a3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a3600ULL || rel >= 0x1a37a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a37a0 size=1824 callers=0 calls=1
   calls: sub_1a4900
*/
void sub_1a37a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a37a0ULL || rel >= 0x1a3ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a3ec0 size=2528 callers=0 calls=1
   calls: sub_1a5760
*/
void sub_1a3ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a3ec0ULL || rel >= 0x1a48a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a48a0 size=16 callers=2 calls=0
*/
void sub_1a48a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a48a0ULL || rel >= 0x1a48b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a48b0 size=80 callers=0 calls=2
   calls: sub_1aede0, sub_1c5680
*/
void sub_1a48b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a48b0ULL || rel >= 0x1a4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a4900 size=3680 callers=1 calls=4
   calls: sub_121fc0, sub_131810, sub_131890, sub_137070
*/
void sub_1a4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a4900ULL || rel >= 0x1a5760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a5760 size=3872 callers=1 calls=4
   calls: sub_121fc0, sub_131810, sub_131890, sub_137070
*/
void sub_1a5760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a5760ULL || rel >= 0x1a6680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a6680 size=176 callers=1 calls=0
*/
void sub_1a6680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a6680ULL || rel >= 0x1a6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a6730 size=112 callers=0 calls=0
*/
void sub_1a6730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a6730ULL || rel >= 0x1a67a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a67a0 size=224 callers=0 calls=0
*/
void sub_1a67a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a67a0ULL || rel >= 0x1a6880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a6880 size=320 callers=0 calls=0
*/
void sub_1a6880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a6880ULL || rel >= 0x1a69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a69c0 size=1104 callers=0 calls=3
   calls: sub_131e90, sub_1a6e10, sub_b0ee0
*/
void sub_1a69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a69c0ULL || rel >= 0x1a6e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a6e10 size=1776 callers=1 calls=0
*/
void sub_1a6e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a6e10ULL || rel >= 0x1a7500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a7500 size=16 callers=0 calls=0
*/
void sub_1a7500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a7500ULL || rel >= 0x1a7510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a7510 size=96 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh/GuMidphaseInterface.h
*/
void GuMidphaseInterface_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a7510ULL || rel >= 0x1a7570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a7570 size=96 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh/GuMidphaseInterface.h
*/
void GuMidphaseInterface_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a7570ULL || rel >= 0x1a75d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a75d0 size=96 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh/GuMidphaseInterface.h
*/
void GuMidphaseInterface_14(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a75d0ULL || rel >= 0x1a7630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a7630 size=800 callers=0 calls=1
   calls: sub_1a7960
*/
void sub_1a7630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a7630ULL || rel >= 0x1a7950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a7950 size=16 callers=0 calls=0
*/
void sub_1a7950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a7950ULL || rel >= 0x1a7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a7960 size=3744 callers=1 calls=4
   calls: sub_121fc0, sub_131810, sub_131890, sub_137070
*/
void sub_1a7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a7960ULL || rel >= 0x1a8800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a8800 size=64 callers=0 calls=0
*/
void sub_1a8800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a8800ULL || rel >= 0x1a8840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a8840 size=192 callers=0 calls=0
*/
void sub_1a8840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a8840ULL || rel >= 0x1a8900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a8900 size=224 callers=0 calls=0
*/
void sub_1a8900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a8900ULL || rel >= 0x1a89e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a89e0 size=16 callers=0 calls=0
*/
void sub_1a89e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a89e0ULL || rel >= 0x1a89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a89f0 size=64 callers=0 calls=0
*/
void sub_1a89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a89f0ULL || rel >= 0x1a8a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a8a30 size=16 callers=0 calls=0
*/
void sub_1a8a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a8a30ULL || rel >= 0x1a8a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a8a40 size=80 callers=0 calls=1
   calls: sub_3007d0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh/GuMidphaseInterface.h
*/
void GuMidphaseInterface_15(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a8a40ULL || rel >= 0x1a8a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a8a90 size=576 callers=1 calls=1
   calls: sub_1a8cd0
*/
void sub_1a8a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a8a90ULL || rel >= 0x1a8cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a8cd0 size=2976 callers=2 calls=6
   calls: sub_13bdc0, sub_14fff0, sub_150170, sub_150640, sub_150780, sub_1abe80
*/
void sub_1a8cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a8cd0ULL || rel >= 0x1a9870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a9870 size=1312 callers=0 calls=3
   calls: sub_150170, sub_150780, sub_150890
*/
void sub_1a9870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a9870ULL || rel >= 0x1a9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001a9d90 size=2400 callers=0 calls=6
   calls: sub_135080, sub_150170, sub_150780, sub_150890, sub_151930, sub_151af0
*/
void sub_1a9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1a9d90ULL || rel >= 0x1aa6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001aa6f0 size=656 callers=0 calls=1
   calls: sub_1a8cd0
*/
void sub_1aa6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aa6f0ULL || rel >= 0x1aa980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001aa980 size=160 callers=0 calls=1
   calls: sub_1aaa20
*/
void sub_1aa980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aa980ULL || rel >= 0x1aaa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001aaa20 size=5216 callers=1 calls=6
   calls: sub_14fff0, sub_150170, sub_150640, sub_150780, sub_19a680, sub_1abe80
*/
void sub_1aaa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aaa20ULL || rel >= 0x1abe80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001abe80 size=2960 callers=2 calls=1
   calls: sub_13a090
*/
void sub_1abe80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1abe80ULL || rel >= 0x1aca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001aca10 size=1040 callers=0 calls=1
   calls: sub_139a50
*/
void sub_1aca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aca10ULL || rel >= 0x1ace20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ace20 size=304 callers=0 calls=1
   calls: sub_14a510
*/
void sub_1ace20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ace20ULL || rel >= 0x1acf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001acf50 size=928 callers=0 calls=1
   calls: sub_14cab0
*/
void sub_1acf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1acf50ULL || rel >= 0x1ad2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ad2f0 size=288 callers=0 calls=1
   calls: sub_19a610
*/
void sub_1ad2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ad2f0ULL || rel >= 0x1ad410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ad410 size=1712 callers=0 calls=1
   calls: sub_121880
*/
void sub_1ad410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ad410ULL || rel >= 0x1adac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001adac0 size=112 callers=0 calls=0
*/
void sub_1adac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1adac0ULL || rel >= 0x1adb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001adb30 size=4704 callers=0 calls=4
   calls: sub_139a50, sub_13a090, sub_150640, sub_1aee60
*/
void sub_1adb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1adb30ULL || rel >= 0x1aed90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001aed90 size=64 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: Height Field Raycast test called with height fields unregistered 
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
*/
void GuRaycastTests(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aed90ULL || rel >= 0x1aedd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001aedd0 size=16 callers=1 calls=0
*/
void sub_1aedd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aedd0ULL || rel >= 0x1aede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001aede0 size=32 callers=1 calls=0
*/
void sub_1aede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aede0ULL || rel >= 0x1aee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001aee00 size=96 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh\GuMidphaseInterface.h
*/
void GuMidphaseInterface_16(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aee00ULL || rel >= 0x1aee60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001aee60 size=1056 callers=4 calls=1
   calls: sub_150170
*/
void sub_1aee60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1aee60ULL || rel >= 0x1af280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001af280 size=144 callers=3 calls=0
*/
void sub_1af280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1af280ULL || rel >= 0x1af310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001af310 size=80 callers=2 calls=0
*/
void sub_1af310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1af310ULL || rel >= 0x1af360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001af360 size=96 callers=35 calls=0
*/
void sub_1af360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1af360ULL || rel >= 0x1af3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001af3c0 size=96 callers=21 calls=0
*/
void sub_1af3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1af3c0ULL || rel >= 0x1af420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001af420 size=144 callers=24 calls=0
*/
void sub_1af420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1af420ULL || rel >= 0x1af4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001af4b0 size=192 callers=2 calls=0
*/
void sub_1af4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1af4b0ULL || rel >= 0x1af570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001af570 size=464 callers=3 calls=0
*/
void sub_1af570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1af570ULL || rel >= 0x1af740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001af740 size=464 callers=5 calls=0
*/
void sub_1af740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1af740ULL || rel >= 0x1af910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001af910 size=336 callers=1 calls=0
*/
void sub_1af910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1af910ULL || rel >= 0x1afa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001afa60 size=384 callers=1 calls=0
*/
void sub_1afa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1afa60ULL || rel >= 0x1afbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001afbe0 size=1696 callers=1 calls=6
   calls: PsArray_138, sub_1320f0, sub_1b0280, sub_1b5970, sub_300c80, sub_ae470
*/
void sub_1afbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1afbe0ULL || rel >= 0x1b0280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b0280 size=976 callers=2 calls=1
   calls: sub_170690
*/
void sub_1b0280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b0280ULL || rel >= 0x1b0650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b0650 size=2128 callers=1 calls=6
   calls: PsArray_138, sub_151ce0, sub_152320, sub_1b0280, sub_1b5970, sub_300c80
*/
void sub_1b0650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b0650ULL || rel >= 0x1b0ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b0ea0 size=3296 callers=1 calls=7
   calls: PsArray_138, sub_1320f0, sub_16d8a0, sub_18b2c0, sub_18b430, sub_300c80, sub_ae470
*/
void sub_1b0ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b0ea0ULL || rel >= 0x1b1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b1b80 size=3728 callers=1 calls=7
   calls: PsArray_138, sub_151ce0, sub_152320, sub_16d8a0, sub_18b2c0, sub_18b430, sub_300c80
*/
void sub_1b1b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b1b80ULL || rel >= 0x1b2a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b2a10 size=4624 callers=1 calls=8
   calls: PsArray_138, sub_1320f0, sub_132770, sub_16d8a0, sub_18b460, sub_300c80, sub_ae470, sub_b0ee0
*/
void sub_1b2a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b2a10ULL || rel >= 0x1b3c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b3c20 size=4560 callers=1 calls=8
   calls: PsArray_138, sub_132770, sub_151ce0, sub_152320, sub_16d8a0, sub_18b460, sub_300c80, sub_b0ee0
*/
void sub_1b3c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b3c20ULL || rel >= 0x1b4df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b4df0 size=240 callers=1 calls=0
*/
void sub_1b4df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b4df0ULL || rel >= 0x1b4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b4ee0 size=384 callers=1 calls=0
*/
void sub_1b4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b4ee0ULL || rel >= 0x1b5060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b5060 size=464 callers=1 calls=1
   calls: sub_134e80
*/
void sub_1b5060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b5060ULL || rel >= 0x1b5230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b5230 size=176 callers=1 calls=0
*/
void sub_1b5230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b5230ULL || rel >= 0x1b52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b52e0 size=560 callers=1 calls=1
   calls: sub_195d70
*/
void sub_1b52e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b52e0ULL || rel >= 0x1b5510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b5510 size=784 callers=1 calls=1
   calls: sub_b0ee0
*/
void sub_1b5510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b5510ULL || rel >= 0x1b5820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b5820 size=80 callers=0 calls=1
   calls: PsArray_75
*/
void sub_1b5820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b5820ULL || rel >= 0x1b5870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b5870 size=16 callers=0 calls=0
*/
void sub_1b5870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b5870ULL || rel >= 0x1b5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b5880 size=80 callers=0 calls=1
   calls: sub_3007d0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh\GuMidphaseInterface.h
*/
void GuMidphaseInterface_17(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b5880ULL || rel >= 0x1b58d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b58d0 size=16 callers=0 calls=0
*/
void sub_1b58d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b58d0ULL || rel >= 0x1b58e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b58e0 size=144 callers=0 calls=1
   calls: PsArray_75
*/
void sub_1b58e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b58e0ULL || rel >= 0x1b5970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b5970 size=544 callers=3 calls=0
*/
void sub_1b5970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b5970ULL || rel >= 0x1b5b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b5b90 size=352 callers=0 calls=3
   calls: sub_1b4df0, sub_1b4ee0, sub_1c1e20
*/
void sub_1b5b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b5b90ULL || rel >= 0x1b5cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b5cf0 size=592 callers=0 calls=2
   calls: sub_19a610, sub_1b5230
*/
void sub_1b5cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b5cf0ULL || rel >= 0x1b5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b5f40 size=336 callers=0 calls=2
   calls: sub_1b5060, sub_1c2550
*/
void sub_1b5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b5f40ULL || rel >= 0x1b6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b6090 size=3760 callers=1 calls=2
   calls: sub_1b6f40, sub_b0ee0
*/
void sub_1b6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b6090ULL || rel >= 0x1b6f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b6f40 size=576 callers=2 calls=3
   calls: sub_158760, sub_1bacd0, sub_1bbc40
*/
void sub_1b6f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b6f40ULL || rel >= 0x1b7180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b7180 size=864 callers=0 calls=3
   calls: sub_195d70, sub_19a610, sub_1b52e0
*/
void sub_1b7180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b7180ULL || rel >= 0x1b74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b74e0 size=3952 callers=1 calls=2
   calls: sub_1b8450, sub_b0ee0
*/
void sub_1b74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b74e0ULL || rel >= 0x1b8450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b8450 size=672 callers=1 calls=3
   calls: sub_158760, sub_1bdb30, sub_1beb30
*/
void sub_1b8450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b8450ULL || rel >= 0x1b86f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b86f0 size=2688 callers=0 calls=1
   calls: sub_1b6f40
*/
void sub_1b86f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b86f0ULL || rel >= 0x1b9170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b9170 size=784 callers=0 calls=3
   calls: sub_19a610, sub_1b5510, sub_b0ee0
*/
void sub_1b9170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b9170ULL || rel >= 0x1b9480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b9480 size=384 callers=0 calls=1
   calls: sub_1b6090
*/
void sub_1b9480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b9480ULL || rel >= 0x1b9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b9600 size=496 callers=0 calls=1
   calls: sub_1b74e0
*/
void sub_1b9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b9600ULL || rel >= 0x1b97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001b97f0 size=4672 callers=0 calls=2
   calls: sub_1baa30, sub_b0ee0
*/
void sub_1b97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1b97f0ULL || rel >= 0x1baa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001baa30 size=672 callers=1 calls=3
   calls: sub_158760, sub_179b30, sub_1c0d10
*/
void sub_1baa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1baa30ULL || rel >= 0x1bacd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bacd0 size=3952 callers=1 calls=4
   calls: sub_121fc0, sub_131810, sub_131890, sub_137070
*/
void sub_1bacd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bacd0ULL || rel >= 0x1bbc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bbc40 size=7920 callers=1 calls=4
   calls: sub_131810, sub_131890, sub_138ed0, sub_161ac0
*/
void sub_1bbc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bbc40ULL || rel >= 0x1bdb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001bdb30 size=4096 callers=1 calls=4
   calls: sub_121fc0, sub_131810, sub_131890, sub_137070
*/
void sub_1bdb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1bdb30ULL || rel >= 0x1beb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001beb30 size=8112 callers=2 calls=4
   calls: sub_131810, sub_131890, sub_138ed0, sub_161ac0
*/
void sub_1beb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1beb30ULL || rel >= 0x1c0ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0ae0 size=128 callers=0 calls=0
*/
void sub_1c0ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0ae0ULL || rel >= 0x1c0b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0b60 size=144 callers=0 calls=0
*/
void sub_1c0b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0b60ULL || rel >= 0x1c0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0bf0 size=192 callers=0 calls=0
*/
void sub_1c0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0bf0ULL || rel >= 0x1c0cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0cb0 size=16 callers=0 calls=0
*/
void sub_1c0cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0cb0ULL || rel >= 0x1c0cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0cc0 size=64 callers=0 calls=0
*/
void sub_1c0cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0cc0ULL || rel >= 0x1c0d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0d00 size=16 callers=0 calls=0
*/
void sub_1c0d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0d00ULL || rel >= 0x1c0d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c0d10 size=4368 callers=1 calls=4
   calls: sub_121fc0, sub_131810, sub_131890, sub_137070
*/
void sub_1c0d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c0d10ULL || rel >= 0x1c1e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c1e20 size=1280 callers=1 calls=2
   calls: sub_14cab0, sub_1c2320
*/
void sub_1c1e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c1e20ULL || rel >= 0x1c2320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c2320 size=560 callers=1 calls=0
*/
void sub_1c2320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c2320ULL || rel >= 0x1c2550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c2550 size=2608 callers=1 calls=3
   calls: sub_134e80, sub_14cab0, sub_1c2f80
*/
void sub_1c2550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c2550ULL || rel >= 0x1c2f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c2f80 size=464 callers=2 calls=0
*/
void sub_1c2f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c2f80ULL || rel >= 0x1c3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c3150 size=2032 callers=0 calls=1
   calls: sub_1c3940
*/
void sub_1c3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c3150ULL || rel >= 0x1c3940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c3940 size=576 callers=3 calls=3
   calls: sub_158760, sub_1c56c0, sub_1c6440
*/
void sub_1c3940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c3940ULL || rel >= 0x1c3b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c3b80 size=1664 callers=0 calls=1
   calls: sub_1c3940
*/
void sub_1c3b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c3b80ULL || rel >= 0x1c4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c4200 size=2000 callers=0 calls=1
   calls: sub_1c3940
*/
void sub_1c4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c4200ULL || rel >= 0x1c49d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c49d0 size=2368 callers=0 calls=1
   calls: sub_1c5310
*/
void sub_1c49d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c49d0ULL || rel >= 0x1c5310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c5310 size=672 callers=1 calls=3
   calls: sub_158760, sub_1c7ff0, sub_1c8df0
*/
void sub_1c5310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c5310ULL || rel >= 0x1c55b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c55b0 size=64 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: Height Field Sweep test called with height fields unregistered 
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
*/
void GuSweepTests(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c55b0ULL || rel >= 0x1c55f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c55f0 size=64 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: Height Field Sweep test called with height fields unregistered 
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
*/
void GuSweepTests_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c55f0ULL || rel >= 0x1c5630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c5630 size=64 callers=0 calls=2
   calls: sub_3007d0, sub_3007e0
   ref: Height Field Sweep test called with height fields unregistered 
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/s
*/
void GuSweepTests_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c5630ULL || rel >= 0x1c5670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c5670 size=16 callers=1 calls=0
*/
void sub_1c5670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c5670ULL || rel >= 0x1c5680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c5680 size=64 callers=1 calls=0
*/
void sub_1c5680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c5680ULL || rel >= 0x1c56c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c56c0 size=3456 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_137070
*/
void sub_1c56c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c56c0ULL || rel >= 0x1c6440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c6440 size=6784 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_138ed0
*/
void sub_1c6440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c6440ULL || rel >= 0x1c7ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c7ec0 size=80 callers=0 calls=0
*/
void sub_1c7ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c7ec0ULL || rel >= 0x1c7f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c7f10 size=64 callers=0 calls=0
*/
void sub_1c7f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c7f10ULL || rel >= 0x1c7f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c7f50 size=112 callers=0 calls=0
*/
void sub_1c7f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c7f50ULL || rel >= 0x1c7fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c7fc0 size=16 callers=0 calls=0
*/
void sub_1c7fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c7fc0ULL || rel >= 0x1c7fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c7fd0 size=16 callers=0 calls=0
*/
void sub_1c7fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c7fd0ULL || rel >= 0x1c7fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c7fe0 size=16 callers=0 calls=0
*/
void sub_1c7fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c7fe0ULL || rel >= 0x1c7ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c7ff0 size=3584 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_137070
*/
void sub_1c7ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c7ff0ULL || rel >= 0x1c8df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001c8df0 size=6912 callers=2 calls=3
   calls: sub_131810, sub_131890, sub_138ed0
*/
void sub_1c8df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1c8df0ULL || rel >= 0x1ca8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ca8f0 size=1712 callers=0 calls=4
   calls: sub_150640, sub_1b5970, sub_1cafa0, sub_1cd890
*/
void sub_1ca8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ca8f0ULL || rel >= 0x1cafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cafa0 size=336 callers=1 calls=1
   calls: sub_1b0650
*/
void sub_1cafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cafa0ULL || rel >= 0x1cb0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cb0f0 size=1952 callers=0 calls=6
   calls: sub_150640, sub_1cb890, sub_1cc020, sub_1ce3f0, sub_b0c90, sub_b0ee0
*/
void sub_1cb0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cb0f0ULL || rel >= 0x1cb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cb890 size=1936 callers=1 calls=0
*/
void sub_1cb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cb890ULL || rel >= 0x1cc020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc020 size=432 callers=1 calls=1
   calls: sub_1b3c20
*/
void sub_1cc020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc020ULL || rel >= 0x1cc1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc1d0 size=16 callers=0 calls=0
*/
void sub_1cc1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc1d0ULL || rel >= 0x1cc1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cc1e0 size=2192 callers=0 calls=3
   calls: sub_150640, sub_1cca70, sub_1cef50
*/
void sub_1cc1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cc1e0ULL || rel >= 0x1cca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cca70 size=672 callers=1 calls=1
   calls: sub_1b1b80
*/
void sub_1cca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cca70ULL || rel >= 0x1ccd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ccd10 size=16 callers=0 calls=0
*/
void sub_1ccd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ccd10ULL || rel >= 0x1ccd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ccd20 size=368 callers=0 calls=2
   calls: sub_14da90, sub_152320
*/
void sub_1ccd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ccd20ULL || rel >= 0x1cce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cce90 size=16 callers=0 calls=0
*/
void sub_1cce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cce90ULL || rel >= 0x1ccea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ccea0 size=16 callers=0 calls=0
*/
void sub_1ccea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ccea0ULL || rel >= 0x1cceb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cceb0 size=1360 callers=0 calls=2
   calls: sub_1474e0, sub_152320
*/
void sub_1cceb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cceb0ULL || rel >= 0x1cd400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cd400 size=16 callers=0 calls=0
*/
void sub_1cd400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd400ULL || rel >= 0x1cd410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cd410 size=1152 callers=0 calls=2
   calls: sub_148720, sub_152320
*/
void sub_1cd410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd410ULL || rel >= 0x1cd890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cd890 size=1456 callers=1 calls=4
   calls: sub_13a090, sub_1cde40, sub_1ce050, sub_1ce1d0
*/
void sub_1cd890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cd890ULL || rel >= 0x1cde40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cde40 size=528 callers=1 calls=0
*/
void sub_1cde40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cde40ULL || rel >= 0x1ce050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce050 size=384 callers=3 calls=0
*/
void sub_1ce050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce050ULL || rel >= 0x1ce1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce1d0 size=544 callers=1 calls=1
   calls: sub_1ce050
*/
void sub_1ce1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce1d0ULL || rel >= 0x1ce3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce3f0 size=1456 callers=1 calls=4
   calls: sub_13a090, sub_1ce9a0, sub_1cebb0, sub_1ced30
*/
void sub_1ce3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce3f0ULL || rel >= 0x1ce9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ce9a0 size=528 callers=1 calls=0
*/
void sub_1ce9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ce9a0ULL || rel >= 0x1cebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cebb0 size=384 callers=3 calls=0
*/
void sub_1cebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cebb0ULL || rel >= 0x1ced30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ced30 size=544 callers=1 calls=1
   calls: sub_1cebb0
*/
void sub_1ced30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ced30ULL || rel >= 0x1cef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cef50 size=1456 callers=1 calls=4
   calls: sub_13a090, sub_1cf500, sub_1cf710, sub_1cf890
*/
void sub_1cef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cef50ULL || rel >= 0x1cf500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf500 size=528 callers=1 calls=0
*/
void sub_1cf500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf500ULL || rel >= 0x1cf710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf710 size=384 callers=3 calls=0
*/
void sub_1cf710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf710ULL || rel >= 0x1cf890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cf890 size=544 callers=1 calls=1
   calls: sub_1cf710
*/
void sub_1cf890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cf890ULL || rel >= 0x1cfab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cfab0 size=256 callers=0 calls=4
   calls: sub_1d07c0, sub_1f5760, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/Common/src/
   ref: PxCollection::add called for an object that has an associated id already present in the collection!
   ref: PxCollection::add called with an id which is already used in the collection
*/
void CmCollection(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cfab0ULL || rel >= 0x1cfbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cfbb0 size=224 callers=0 calls=2
   calls: sub_1d0940, sub_1d0a90
*/
void sub_1cfbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cfbb0ULL || rel >= 0x1cfc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cfc90 size=176 callers=0 calls=0
*/
void sub_1cfc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cfc90ULL || rel >= 0x1cfd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cfd40 size=304 callers=0 calls=3
   calls: sub_1d07c0, sub_1d0940, sub_1f5760
*/
void sub_1cfd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cfd40ULL || rel >= 0x1cfe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cfe70 size=256 callers=0 calls=2
   calls: sub_1d0940, sub_1f5760
*/
void sub_1cfe70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cfe70ULL || rel >= 0x1cff70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001cff70 size=192 callers=0 calls=0
*/
void sub_1cff70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1cff70ULL || rel >= 0x1d0030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d0030 size=352 callers=0 calls=3
   calls: NonTrackedAlloc_114, sub_1d07c0, sub_1f5760
*/
void sub_1d0030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0030ULL || rel >= 0x1d0190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d0190 size=272 callers=0 calls=2
   calls: sub_1d0940, sub_1d0a90
*/
void sub_1d0190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0190ULL || rel >= 0x1d02a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d02a0 size=16 callers=0 calls=0
*/
void sub_1d02a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d02a0ULL || rel >= 0x1d02b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d02b0 size=32 callers=0 calls=0
*/
void sub_1d02b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d02b0ULL || rel >= 0x1d02d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d02d0 size=96 callers=0 calls=0
*/
void sub_1d02d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d02d0ULL || rel >= 0x1d0330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d0330 size=16 callers=0 calls=0
*/
void sub_1d0330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0330ULL || rel >= 0x1d0340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d0340 size=192 callers=0 calls=0
*/
void sub_1d0340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0340ULL || rel >= 0x1d0400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d0400 size=240 callers=0 calls=0
*/
void sub_1d0400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0400ULL || rel >= 0x1d04f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d04f0 size=160 callers=1 calls=3
   calls: sub_1d0590, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Cm::Collection>::getName() [T = physx::
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/Common/src/
*/
void CmCollection_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d04f0ULL || rel >= 0x1d0590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d0590 size=240 callers=1 calls=3
   calls: NonTrackedAlloc_114, NonTrackedAlloc_115, sub_300c80
*/
void sub_1d0590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0590ULL || rel >= 0x1d0680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d0680 size=32 callers=0 calls=0
*/
void sub_1d0680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0680ULL || rel >= 0x1d06a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d06a0 size=224 callers=1 calls=1
   calls: sub_300c80
*/
void sub_1d06a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d06a0ULL || rel >= 0x1d0780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d0780 size=64 callers=0 calls=2
   calls: sub_1d06a0, sub_300c80
*/
void sub_1d0780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0780ULL || rel >= 0x1d07c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d07c0 size=384 callers=4 calls=1
   calls: NonTrackedAlloc_115
*/
void sub_1d07c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d07c0ULL || rel >= 0x1d0940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d0940 size=336 callers=4 calls=0
*/
void sub_1d0940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0940ULL || rel >= 0x1d0a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d0a90 size=352 callers=2 calls=0
*/
void sub_1d0a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0a90ULL || rel >= 0x1d0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d0bf0 size=1104 callers=1 calls=0
   ref: mNbSamples
   ref: mSubdiv
   ref: mCount
   ref: BigConvexData
   ref: Valency
   ref: Alignment
   ref: mNbVerts
   ref: mSamples
*/
void BigConvexRawData(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d0bf0ULL || rel >= 0x1d1040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d1040 size=2144 callers=1 calls=1
   calls: BigConvexRawData
   ref: PxBase
   ref: PxMat33
   ref: mCenterOfMass
   ref: HullPolygonData
   ref: mVRef8
   ref: mPolygons
   ref: mHullData
   ref: BigConvexData
*/
void mMinIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d1040ULL || rel >= 0x1d18a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d18a0 size=1856 callers=1 calls=0
   ref: PxBase
   ref: HeightField
   ref: mNbSamples
   ref: PxBitAndByte
   ref: convexEdgeThreshold
   ref: PxHeightFieldFlags
   ref: PxHeightFieldSample
   ref: height
*/
void PxMaterialTableIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d18a0ULL || rel >= 0x1d1fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d1fe0 size=1248 callers=1 calls=0
   ref: mBoundsMin
   ref: mInvDiagonal
   ref: mPageSize
   ref: mNumRootPages
   ref: PxVec4
   ref: RTreePage
   ref: mBoundsMax
   ref: mTotalNodes
*/
void mDiagonalScaler(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d1fe0ULL || rel >= 0x1d24c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d24c0 size=496 callers=1 calls=0
   ref: mVerts
   ref: mTriangles16
   ref: mTriangles32
   ref: mRemap
   ref: SourceMesh
   ref: PxVec3
   ref: mNbVerts
   ref: mNbTris
*/
void mTriangles32(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d24c0ULL || rel >= 0x1d26b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d26b0 size=1456 callers=1 calls=0
   ref: mExtentsMagnitude
   ref: mExtentsOrMaxCoeff
   ref: mMeshInterface
   ref: mData[0].mExtents
   ref: mData[1].mExtents
   ref: mUserAllocated
   ref: BV4Tree
   ref: mCenterOrMinCoeff
*/
void mExtentsOrMaxCoeff(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d26b0ULL || rel >= 0x1d2c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d2c60 size=1824 callers=1 calls=0
   ref: PxBase
   ref: mGRB_faceRemap
   ref: mGRB_triAdjacencies
   ref: TriangleMesh
   ref: mExtraTrigData
   ref: mMaterialIndices
   ref: mFaceRemap
   ref: mAdjacencies
*/
void mGRB_triAdjacencies(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d2c60ULL || rel >= 0x1d3380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3380 size=240 callers=1 calls=1
   calls: mDiagonalScaler
   ref: TriangleMesh
   ref: mRTree
   ref: RTreeTriangleMesh
*/
void RTreeTriangleMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3380ULL || rel >= 0x1d3470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3470 size=320 callers=1 calls=2
   calls: mExtentsOrMaxCoeff, mTriangles32
   ref: mMeshInterface
   ref: TriangleMesh
   ref: BV4Tree
   ref: BV4TriangleMesh
   ref: SourceMesh
   ref: mBV4Tree
*/
void BV4TriangleMesh(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3470ULL || rel >= 0x1d35b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d35b0 size=432 callers=1 calls=0
   ref: numIndices
   ref: MaterialIndicesStruct
   ref: indices
*/
void MaterialIndicesStruct(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d35b0ULL || rel >= 0x1d3760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d3760 size=3424 callers=1 calls=0
   ref: HeightField
   ref: ShadowHeightFieldGeometry
   ref: heightFieldData
   ref: ShadowPlaneGeometry
   ref: rowScale
   ref: PxPlaneGeometry
   ref: PxConvexMeshGeometryFlags
   ref: halfExtents
*/
void ShadowHeightFieldGeometry(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d3760ULL || rel >= 0x1d44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d44c0 size=48 callers=5 calls=1
   calls: sub_1d47d0
*/
void sub_1d44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d44c0ULL || rel >= 0x1d44f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d44f0 size=144 callers=11 calls=2
   calls: sub_1d4800, sub_300c80
*/
void sub_1d44f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d44f0ULL || rel >= 0x1d4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4580 size=48 callers=0 calls=1
   calls: sub_1d44f0
*/
void sub_1d4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4580ULL || rel >= 0x1d45b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d45b0 size=240 callers=2 calls=1
   calls: sub_300c80
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/Common/src/
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_111(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d45b0ULL || rel >= 0x1d46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d46a0 size=160 callers=5 calls=2
   calls: NonTrackedAlloc_111, sub_1d4820
*/
void sub_1d46a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d46a0ULL || rel >= 0x1d4740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4740 size=144 callers=2 calls=2
   calls: NonTrackedAlloc_111, sub_1d5790
*/
void sub_1d4740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4740ULL || rel >= 0x1d47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d47d0 size=48 callers=1 calls=0
*/
void sub_1d47d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d47d0ULL || rel >= 0x1d4800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4800 size=16 callers=1 calls=0
*/
void sub_1d4800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4800ULL || rel >= 0x1d4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4810 size=16 callers=0 calls=0
*/
void sub_1d4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4810ULL || rel >= 0x1d4820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d4820 size=3952 callers=1 calls=0
*/
void sub_1d4820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d4820ULL || rel >= 0x1d5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d5790 size=2512 callers=1 calls=0
*/
void sub_1d5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d5790ULL || rel >= 0x1d6160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6160 size=16 callers=0 calls=0
*/
void sub_1d6160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6160ULL || rel >= 0x1d6170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6170 size=1552 callers=0 calls=1
   calls: sub_1da960
*/
void sub_1d6170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6170ULL || rel >= 0x1d6780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6780 size=1696 callers=0 calls=1
   calls: sub_1dd6a0
*/
void sub_1d6780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6780ULL || rel >= 0x1d6e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d6e20 size=2368 callers=0 calls=1
   calls: sub_1e02c0
*/
void sub_1d6e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d6e20ULL || rel >= 0x1d7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d7760 size=1744 callers=0 calls=1
   calls: sub_1e3350
*/
void sub_1d7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7760ULL || rel >= 0x1d7e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d7e30 size=2480 callers=0 calls=1
   calls: sub_1e4470
*/
void sub_1d7e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d7e30ULL || rel >= 0x1d87e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d87e0 size=3136 callers=0 calls=1
   calls: sub_1e55a0
*/
void sub_1d87e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d87e0ULL || rel >= 0x1d9420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9420 size=48 callers=1 calls=0
*/
void sub_1d9420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9420ULL || rel >= 0x1d9450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9450 size=16 callers=0 calls=0
*/
void sub_1d9450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9450ULL || rel >= 0x1d9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9460 size=1472 callers=0 calls=1
   calls: sub_1e65d0
*/
void sub_1d9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9460ULL || rel >= 0x1d9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001d9a20 size=1584 callers=0 calls=1
   calls: sub_1e91a0
*/
void sub_1d9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1d9a20ULL || rel >= 0x1da050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001da050 size=2288 callers=0 calls=1
   calls: sub_1ebdf0
*/
void sub_1da050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da050ULL || rel >= 0x1da940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001da940 size=32 callers=2 calls=0
*/
void sub_1da940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da940ULL || rel >= 0x1da960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001da960 size=672 callers=1 calls=3
   calls: sub_158760, sub_1dae00, sub_1dbc50
*/
void sub_1da960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1da960ULL || rel >= 0x1dac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dac00 size=80 callers=0 calls=0
*/
void sub_1dac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dac00ULL || rel >= 0x1dac50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dac50 size=160 callers=0 calls=0
*/
void sub_1dac50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dac50ULL || rel >= 0x1dacf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dacf0 size=176 callers=0 calls=0
*/
void sub_1dacf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dacf0ULL || rel >= 0x1dada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dada0 size=16 callers=0 calls=0
*/
void sub_1dada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dada0ULL || rel >= 0x1dadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dadb0 size=64 callers=0 calls=0
*/
void sub_1dadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dadb0ULL || rel >= 0x1dadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dadf0 size=16 callers=0 calls=0
*/
void sub_1dadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dadf0ULL || rel >= 0x1dae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dae00 size=3664 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_137070
*/
void sub_1dae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dae00ULL || rel >= 0x1dbc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dbc50 size=6736 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_138ed0
*/
void sub_1dbc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dbc50ULL || rel >= 0x1dd6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dd6a0 size=672 callers=1 calls=3
   calls: sub_158760, sub_1dd940, sub_1de7b0
*/
void sub_1dd6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dd6a0ULL || rel >= 0x1dd940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001dd940 size=3696 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_137070
*/
void sub_1dd940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1dd940ULL || rel >= 0x1de7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001de7b0 size=6928 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_138ed0
*/
void sub_1de7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1de7b0ULL || rel >= 0x1e02c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e02c0 size=672 callers=1 calls=3
   calls: sub_158760, sub_1e0560, sub_1e13e0
*/
void sub_1e02c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e02c0ULL || rel >= 0x1e0560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e0560 size=3712 callers=1 calls=4
   calls: sub_131810, sub_131890, sub_137070, sub_1615d0
*/
void sub_1e0560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e0560ULL || rel >= 0x1e13e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e13e0 size=8048 callers=1 calls=4
   calls: sub_131810, sub_131890, sub_138ed0, sub_161ac0
*/
void sub_1e13e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e13e0ULL || rel >= 0x1e3350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e3350 size=672 callers=1 calls=3
   calls: sub_158760, sub_1c8df0, sub_1e35f0
*/
void sub_1e3350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e3350ULL || rel >= 0x1e35f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e35f0 size=3712 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_137070
*/
void sub_1e35f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e35f0ULL || rel >= 0x1e4470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4470 size=672 callers=1 calls=3
   calls: sub_158760, sub_1beb30, sub_1e4710
*/
void sub_1e4470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4470ULL || rel >= 0x1e4710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e4710 size=3728 callers=1 calls=4
   calls: sub_131810, sub_131890, sub_137070, sub_1615d0
*/
void sub_1e4710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e4710ULL || rel >= 0x1e55a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e55a0 size=672 callers=1 calls=3
   calls: sub_158760, sub_179b30, sub_1e5840
*/
void sub_1e55a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e55a0ULL || rel >= 0x1e5840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e5840 size=3472 callers=1 calls=5
   calls: sub_131810, sub_131890, sub_137070, sub_1615d0, sub_17c3b0
*/
void sub_1e5840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e5840ULL || rel >= 0x1e65d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e65d0 size=672 callers=1 calls=3
   calls: sub_158760, sub_1e6870, sub_1e7710
*/
void sub_1e65d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e65d0ULL || rel >= 0x1e6870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e6870 size=3744 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_137070
*/
void sub_1e6870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e6870ULL || rel >= 0x1e7710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e7710 size=6800 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_138ed0
*/
void sub_1e7710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e7710ULL || rel >= 0x1e91a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e91a0 size=672 callers=1 calls=3
   calls: sub_158760, sub_1e9440, sub_1ea2b0
*/
void sub_1e91a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e91a0ULL || rel >= 0x1e9440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001e9440 size=3696 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_137070
*/
void sub_1e9440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1e9440ULL || rel >= 0x1ea2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ea2b0 size=6976 callers=1 calls=3
   calls: sub_131810, sub_131890, sub_138ed0
*/
void sub_1ea2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ea2b0ULL || rel >= 0x1ebdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ebdf0 size=672 callers=1 calls=3
   calls: sub_158760, sub_1ec090, sub_1ed100
*/
void sub_1ebdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ebdf0ULL || rel >= 0x1ec090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ec090 size=4208 callers=1 calls=4
   calls: sub_121fc0, sub_131810, sub_131890, sub_137070
*/
void sub_1ec090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ec090ULL || rel >= 0x1ed100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ed100 size=8112 callers=1 calls=4
   calls: sub_131810, sub_131890, sub_138ed0, sub_161ac0
*/
void sub_1ed100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ed100ULL || rel >= 0x1ef0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001ef0b0 size=4304 callers=0 calls=6
   calls: sub_136970, sub_151ce0, sub_152320, sub_1da940, sub_300c80, sub_ed340
*/
void sub_1ef0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1ef0b0ULL || rel >= 0x1f0180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f0180 size=2128 callers=1 calls=3
   calls: sub_151ce0, sub_152320, sub_300c80
*/
void sub_1f0180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f0180ULL || rel >= 0x1f09d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f09d0 size=5232 callers=0 calls=10
   calls: sub_1320f0, sub_136970, sub_1424c0, sub_19a750, sub_1da940, sub_1f1e40, sub_1f1f20, sub_1f2160, sub_300c80, sub_b0ee0
*/
void sub_1f09d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f09d0ULL || rel >= 0x1f1e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1e40 size=224 callers=2 calls=1
   calls: PsArray_165
*/
void sub_1f1e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1e40ULL || rel >= 0x1f1f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f1f20 size=576 callers=3 calls=0
*/
void sub_1f1f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f1f20ULL || rel >= 0x1f2160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2160 size=1248 callers=2 calls=0
*/
void sub_1f2160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2160ULL || rel >= 0x1f2640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2640 size=592 callers=1 calls=3
   calls: sub_1320f0, sub_19a750, sub_b0ee0
*/
void sub_1f2640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2640ULL || rel >= 0x1f2890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2890 size=16 callers=0 calls=0
*/
void sub_1f2890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2890ULL || rel >= 0x1f28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f28a0 size=144 callers=0 calls=1
   calls: PsArray_164
*/
void sub_1f28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f28a0ULL || rel >= 0x1f2930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2930 size=480 callers=2 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_164(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2930ULL || rel >= 0x1f2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2b10 size=96 callers=0 calls=1
   calls: PsArray_164
*/
void sub_1f2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2b10ULL || rel >= 0x1f2b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2b70 size=16 callers=0 calls=0
*/
void sub_1f2b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2b70ULL || rel >= 0x1f2b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2b80 size=80 callers=0 calls=1
   calls: sub_3007d0
   ref: BV4 midphase only supported on Intel platforms.
   ref: ./../../GeomUtils/src/mesh\GuMidphaseInterface.h
*/
void GuMidphaseInterface_18(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2b80ULL || rel >= 0x1f2bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f2bd0 size=1376 callers=0 calls=2
   calls: sub_1f1f20, sub_1f2160
*/
void sub_1f2bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f2bd0ULL || rel >= 0x1f3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3130 size=16 callers=0 calls=0
*/
void sub_1f3130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3130ULL || rel >= 0x1f3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3140 size=416 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]
   ref: ./../../../../PxShared/src/foundation/include/PsArray.h
*/
void PsArray_165(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3140ULL || rel >= 0x1f32e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f32e0 size=192 callers=1 calls=3
   calls: NonTrackedAlloc_112, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::DefaultCpuDispatcher>::getName() [
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtens
*/
void ExtDefaultCpuDispatcher(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f32e0ULL || rel >= 0x1f33a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f33a0 size=976 callers=1 calls=18
   calls: ExtSharedQueueEntryPool, PsThread, sub_1f3960, sub_1f40f0, sub_1f4470, sub_2ff8d0, sub_2ff8e0, sub_2ffa10, sub_2ffa20, sub_2ffa30, sub_2ffa70, sub_2ffcb0
   ... +6 more
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SListImpl>::getName() [T = phys
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include\PsSync.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SyncImpl>::getName() [T = physx
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtens
   ref: NonTrackedAlloc
   ref: PxWorker%02d
   ref: ./../../../../PxShared/src/foundation/include\PsSList.h
*/
void NonTrackedAlloc_112(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f33a0ULL || rel >= 0x1f3770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3770 size=416 callers=2 calls=6
   calls: sub_2ff8d0, sub_2ff8e0, sub_2ff8f0, sub_2ffa10, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SListImpl>::getName() [T = phys
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>::getName() [T = 
   ref: ./../../PhysXExtensions/src/ExtSharedQueueEntryPool.h
   ref: ./../../../../PxShared/src/foundation/include\PsSList.h
*/
void ExtSharedQueueEntryPool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3770ULL || rel >= 0x1f3910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3910 size=80 callers=4 calls=2
   calls: sub_2ff8e0, sub_300c80
*/
void sub_1f3910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3910ULL || rel >= 0x1f3960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3960 size=128 callers=5 calls=3
   calls: sub_1f3910, sub_2ff8e0, sub_300c80
*/
void sub_1f3960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3960ULL || rel >= 0x1f39e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f39e0 size=432 callers=1 calls=9
   calls: sub_1f3910, sub_1f3960, sub_2ff8e0, sub_2ffa70, sub_2ffad0, sub_2ffe50, sub_2ffe70, sub_300c80, sub_f5e50
*/
void sub_1f39e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f39e0ULL || rel >= 0x1f3b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3b90 size=64 callers=0 calls=2
   calls: sub_1f39e0, sub_300c80
*/
void sub_1f3b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3b90ULL || rel >= 0x1f3bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3bd0 size=352 callers=0 calls=6
   calls: ExtSharedQueueEntryPool_3, sub_2ff8f0, sub_2ff950, sub_2ffc70, sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>::getName() [T = 
   ref: ./../../PhysXExtensions/src/ExtSharedQueueEntryPool.h
*/
void ExtSharedQueueEntryPool_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3bd0ULL || rel >= 0x1f3d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3d30 size=192 callers=1 calls=4
   calls: sub_1f4200, sub_2ff8f0, sub_2ff950, sub_300c80
*/
void sub_1f3d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3d30ULL || rel >= 0x1f3df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3df0 size=32 callers=0 calls=0
*/
void sub_1f3df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3df0ULL || rel >= 0x1f3e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3e10 size=64 callers=1 calls=1
   calls: sub_2ffaa0
*/
void sub_1f3e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3e10ULL || rel >= 0x1f3e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3e50 size=16 callers=0 calls=0
*/
void sub_1f3e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3e50ULL || rel >= 0x1f3e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3e60 size=16 callers=0 calls=0
*/
void sub_1f3e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3e60ULL || rel >= 0x1f3e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3e70 size=16 callers=0 calls=0
*/
void sub_1f3e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3e70ULL || rel >= 0x1f3e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f3e80 size=400 callers=1 calls=9
   calls: ExtSharedQueueEntryPool, sub_1f3960, sub_2ff8d0, sub_2ffa10, sub_2ffc60, sub_2ffc80, sub_2ffdd0, sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsThread.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::SListImpl>::getName() [T = phys
   ref: <allocation names disabled>
   ref: ./../../../../PxShared/src/foundation/include\PsSList.h
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::ThreadImpl>::getName() [T = phy
*/
void PsThread(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f3e80ULL || rel >= 0x1f4010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4010 size=160 callers=1 calls=4
   calls: sub_1f3960, sub_2ff8e0, sub_2ffdd0, sub_300c80
*/
void sub_1f4010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4010ULL || rel >= 0x1f40b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f40b0 size=64 callers=0 calls=2
   calls: sub_1f4010, sub_300c80
*/
void sub_1f40b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f40b0ULL || rel >= 0x1f40f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f40f0 size=16 callers=1 calls=0
*/
void sub_1f40f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f40f0ULL || rel >= 0x1f4100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4100 size=256 callers=1 calls=4
   calls: sub_2ff8f0, sub_2ff950, sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::SharedQueueEntry>::getName() [T = 
   ref: ./../../PhysXExtensions/src/ExtSharedQueueEntryPool.h
*/
void ExtSharedQueueEntryPool_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4100ULL || rel >= 0x1f4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4200 size=144 callers=1 calls=3
   calls: sub_2ff8f0, sub_2ff950, sub_300c80
*/
void sub_1f4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4200ULL || rel >= 0x1f4290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4290 size=256 callers=0 calls=8
   calls: sub_1f3d30, sub_1f3e10, sub_2ff8f0, sub_2ff950, sub_2ffb30, sub_2ffc70, sub_2ffea0, sub_300c80
*/
void sub_1f4290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4290ULL || rel >= 0x1f4390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4390 size=96 callers=0 calls=2
   calls: sub_2ffdd0, sub_300c80
*/
void sub_1f4390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4390ULL || rel >= 0x1f43f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f43f0 size=112 callers=0 calls=2
   calls: sub_2ffdd0, sub_300c80
*/
void sub_1f43f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f43f0ULL || rel >= 0x1f4460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4460 size=16 callers=0 calls=0
*/
void sub_1f4460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4460ULL || rel >= 0x1f4470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4470 size=128 callers=1 calls=0
*/
void sub_1f4470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4470ULL || rel >= 0x1f44f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f44f0 size=32 callers=1 calls=0
*/
void sub_1f44f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f44f0ULL || rel >= 0x1f4510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4510 size=16 callers=0 calls=0
*/
void sub_1f4510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4510ULL || rel >= 0x1f4520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4520 size=16 callers=0 calls=0
*/
void sub_1f4520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4520ULL || rel >= 0x1f4530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4530 size=272 callers=0 calls=2
   calls: printString, sub_2ffee0
   ref: warning
   ref: %s (%d) : %s : %s
   ref: performance warning
   ref: no error
   ref: invalid operation
   ref: unknown error
   ref: internal error
   ref: out of memory
*/
void warning(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4530ULL || rel >= 0x1f4640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4640 size=16 callers=0 calls=0
*/
void sub_1f4640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4640ULL || rel >= 0x1f4650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4650 size=80 callers=0 calls=0
*/
void sub_1f4650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4650ULL || rel >= 0x1f46a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f46a0 size=368 callers=0 calls=0
*/
void sub_1f46a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f46a0ULL || rel >= 0x1f4810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4810 size=80 callers=0 calls=0
*/
void sub_1f4810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4810ULL || rel >= 0x1f4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4860 size=80 callers=0 calls=0
*/
void sub_1f4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4860ULL || rel >= 0x1f48b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f48b0 size=80 callers=0 calls=0
*/
void sub_1f48b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f48b0ULL || rel >= 0x1f4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4900 size=96 callers=0 calls=0
*/
void sub_1f4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4900ULL || rel >= 0x1f4960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4960 size=96 callers=0 calls=0
*/
void sub_1f4960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4960ULL || rel >= 0x1f49c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f49c0 size=80 callers=0 calls=0
*/
void sub_1f49c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f49c0ULL || rel >= 0x1f4a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4a10 size=80 callers=0 calls=0
*/
void sub_1f4a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4a10ULL || rel >= 0x1f4a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f4a60 size=1984 callers=1 calls=9
   calls: CmCollection_2, NonTrackedAlloc_113, NonTrackedAlloc_114, NonTrackedAlloc_115, sub_1f5760, sub_3007d0, sub_3007e0, sub_300c80, sub_b4050
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtens
   ref: Cannot create class instance for concrete type %d.
   ref: PxSerialization::createCollectionFromBinary: External references needed but no externalRefs collecti
   ref: PxSerialization::createCollectionFromBinary: External reference %lu expected in externalRefs collect
   ref: PxSerialization::createCollectionFromBinary: External reference %d type mismatch. Expected %d but fo
*/
void SnBinaryDeserialization(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f4a60ULL || rel >= 0x1f5220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5220 size=512 callers=1 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_113(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5220ULL || rel >= 0x1f5420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5420 size=416 callers=4 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_114(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5420ULL || rel >= 0x1f55c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f55c0 size=416 callers=3 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_115(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f55c0ULL || rel >= 0x1f5760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5760 size=384 callers=6 calls=1
   calls: NonTrackedAlloc_114
*/
void sub_1f5760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5760ULL || rel >= 0x1f58e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f58e0 size=288 callers=0 calls=0
*/
void sub_1f58e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f58e0ULL || rel >= 0x1f5a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5a00 size=16 callers=0 calls=0
*/
void sub_1f5a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5a00ULL || rel >= 0x1f5a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5a10 size=16 callers=0 calls=0
*/
void sub_1f5a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5a10ULL || rel >= 0x1f5a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5a20 size=64 callers=0 calls=1
   calls: sub_300c80
*/
void sub_1f5a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5a20ULL || rel >= 0x1f5a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5a60 size=480 callers=1 calls=5
   calls: HeightField, NonTrackedAlloc_116, NonTrackedAlloc_117, PxSerializerDefaultAdapter, sub_300c80
*/
void sub_1f5a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5a60ULL || rel >= 0x1f5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5c40 size=80 callers=1 calls=1
   calls: sub_300c80
*/
void sub_1f5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5c40ULL || rel >= 0x1f5c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5c90 size=112 callers=1 calls=1
   calls: sub_300c80
*/
void sub_1f5c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5c90ULL || rel >= 0x1f5d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5d00 size=112 callers=1 calls=1
   calls: sub_300c80
*/
void sub_1f5d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5d00ULL || rel >= 0x1f5d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5d70 size=400 callers=1 calls=8
   calls: sub_1124e0, sub_1f5c40, sub_1f5c90, sub_1f5d00, sub_1fa660, sub_3007d0, sub_3007e0, sub_300c80
   ref: PxSerializationRegistry::release(): some registered PxSerializer instances were not unregistered
   ref: PxSerializationRegistry::release(): some registered PxRepXSerializer instances were not unregistered
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtens
*/
void SnSerializationRegistry(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5d70ULL || rel >= 0x1f5f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5f00 size=64 callers=0 calls=2
   calls: SnSerializationRegistry, sub_300c80
*/
void sub_1f5f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5f00ULL || rel >= 0x1f5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f5f40 size=256 callers=0 calls=3
   calls: sub_1f6a90, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtens
   ref: PxSerializationRegistry::registerSerializer: Type %d has already been registered
*/
void SnSerializationRegistry_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f5f40ULL || rel >= 0x1f6040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6040 size=256 callers=0 calls=3
   calls: sub_1f6bf0, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtens
   ref: PxSerializationRegistry::unregisterSerializer: failed to find PxSerializer instance for type %d
*/
void SnSerializationRegistry_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6040ULL || rel >= 0x1f6140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6140 size=176 callers=0 calls=0
*/
void sub_1f6140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6140ULL || rel >= 0x1f61f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f61f0 size=96 callers=0 calls=1
   calls: PsArray_167
*/
void sub_1f61f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f61f0ULL || rel >= 0x1f6250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6250 size=256 callers=0 calls=3
   calls: sub_1f6ec0, sub_3007d0, sub_3007e0
   ref: PxSerializationRegistry::registerRepXSerializer: Type %d has already been registered
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtens
*/
void SnSerializationRegistry_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6250ULL || rel >= 0x1f6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6350 size=272 callers=0 calls=1
   calls: sub_301a70
*/
void sub_1f6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6350ULL || rel >= 0x1f6460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6460 size=256 callers=0 calls=3
   calls: sub_1f7020, sub_3007d0, sub_3007e0
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtens
   ref: PxSerializationRegistry::unregisterRepXSerializer: failed to find PxRepXSerializer instance for type
*/
void SnSerializationRegistry_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6460ULL || rel >= 0x1f6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6560 size=176 callers=1 calls=3
   calls: sub_1f5a60, sub_300c80, sub_300cb0
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Sn::SerializationRegistry>::getName() [
   ref: <allocation names disabled>
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtens
*/
void SnSerializationRegistry_6(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6560ULL || rel >= 0x1f6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6610 size=32 callers=0 calls=0
*/
void sub_1f6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6610ULL || rel >= 0x1f6630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6630 size=288 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]
*/
void PsArray_166(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6630ULL || rel >= 0x1f6750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6750 size=416 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_116(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6750ULL || rel >= 0x1f68f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f68f0 size=416 callers=2 calls=1
   calls: sub_300c80
   ref: ./../../../../PxShared/src/foundation/include/PsHashInternals.h
   ref: NonTrackedAlloc
*/
void NonTrackedAlloc_117(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f68f0ULL || rel >= 0x1f6a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6a90 size=352 callers=1 calls=1
   calls: NonTrackedAlloc_116
*/
void sub_1f6a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6a90ULL || rel >= 0x1f6bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6bf0 size=320 callers=2 calls=0
*/
void sub_1f6bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6bf0ULL || rel >= 0x1f6d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6d30 size=400 callers=1 calls=2
   calls: sub_300c80, sub_300cb0
   ref: ./../../../../PxShared/src/foundation/include\PsArray.h
   ref: <allocation names disabled>
   ref: static const char *physx::shdfnd::ReflectionAllocator<void (*)(physx::PxOutputStream &)>::getName() 
*/
void PsArray_167(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6d30ULL || rel >= 0x1f6ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f6ec0 size=352 callers=1 calls=1
   calls: NonTrackedAlloc_117
*/
void sub_1f6ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f6ec0ULL || rel >= 0x1f7020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7020 size=320 callers=2 calls=0
*/
void sub_1f7020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7020ULL || rel >= 0x1f7160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7160 size=1360 callers=1 calls=0
   ref: RevoluteJoint
   ref: mPxConstraint
   ref: driveForceLimit
   ref: driveGearRatio
   ref: PxConstraint
   ref: driveVelocity
   ref: jointFlags
   ref: mLocalPose
*/
void projectionLinearTolerance(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7160ULL || rel >= 0x1f76b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f76b0 size=1136 callers=1 calls=0
   ref: SphericalJointData
   ref: mPxConstraint
   ref: tanQYLimit
   ref: PxConstraint
   ref: PxSphericalJointFlags
   ref: jointFlags
   ref: mLocalPose
   ref: string
*/
void projectionLinearTolerance_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f76b0ULL || rel >= 0x1f7b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7b20 size=1120 callers=1 calls=0
   ref: mPxConstraint
   ref: PxConstraint
   ref: jointFlags
   ref: mLocalPose
   ref: minDistance
   ref: string
   ref: JointData
   ref: PxDistanceJointFlags
*/
void PxDistanceJointFlags(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7b20ULL || rel >= 0x1f7f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f7f80 size=2320 callers=1 calls=0
   ref: D6JointData
   ref: driveAngularVelocity
   ref: PxJointLinearLimit
   ref: thSwingZ
   ref: mPxConstraint
   ref: thSwingY
   ref: mRecomputeMotion
   ref: tqTwistHigh
*/
void projectionLinearTolerance_3(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f7f80ULL || rel >= 0x1f8890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8890 size=1024 callers=1 calls=0
   ref: PxJointLinearLimitPair
   ref: mPxConstraint
   ref: PrismaticJointData
   ref: PxConstraint
   ref: PxPrismaticJointFlags
   ref: jointFlags
   ref: mLocalPose
   ref: string
*/
void projectionLinearTolerance_4(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8890ULL || rel >= 0x1f8c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8c90 size=832 callers=1 calls=0
   ref: FixedJoint
   ref: mPxConstraint
   ref: PxConstraint
   ref: mLocalPose
   ref: string
   ref: JointData
   ref: projectionLinearTolerance
   ref: FixedJointData
*/
void projectionLinearTolerance_5(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8c90ULL || rel >= 0x1f8fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f8fd0 size=1072 callers=1 calls=0
   ref: PxType
   ref: reference
   ref: SerialObjectIndex
   ref: Sn::InternalReferencePtr
   ref: objIndex
   ref: Sn::InternalReferenceIdx
   ref: Sn::ManifestEntry
   ref: PxSerialObjectId
*/
void SerialObjectIndex(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f8fd0ULL || rel >= 0x1f9400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9400 size=1920 callers=0 calls=7
   calls: PxDistanceJointFlags, SerialObjectIndex, projectionLinearTolerance, projectionLinearTolerance_2, projectionLinearTolerance_3, projectionLinearTolerance_4, projectionLinearTolerance_5
   ref: PxBase
   ref: yAngle
   ref: userData
   ref: PxJointLinearLimitPair
   ref: PxJointLinearLimit
   ref: forceLimit
   ref: contactDistance
   ref: PxD6JointDrive
*/
void PxJointLinearLimitPair(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9400ULL || rel >= 0x1f9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001f9b80 size=2784 callers=1 calls=1
   calls: sub_300cb0
   ref: RevoluteJoint
   ref: FixedJoint
   ref: PxSerializerDefaultAdapter
   ref: PrismaticJoint
   ref: SphericalJoint
   ref: D6Joint
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtens
   ref: DistanceJoint
*/
void PxSerializerDefaultAdapter(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1f9b80ULL || rel >= 0x1fa660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fa660 size=1696 callers=1 calls=1
   calls: sub_300cb0
*/
void sub_1fa660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fa660ULL || rel >= 0x1fad00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fad00 size=16 callers=0 calls=0
*/
void sub_1fad00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fad00ULL || rel >= 0x1fad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fad10 size=32 callers=0 calls=0
*/
void sub_1fad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fad10ULL || rel >= 0x1fad30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fad30 size=16 callers=0 calls=0
*/
void sub_1fad30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fad30ULL || rel >= 0x1fad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fad40 size=32 callers=0 calls=0
*/
void sub_1fad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fad40ULL || rel >= 0x1fad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fad60 size=32 callers=0 calls=0
*/
void sub_1fad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fad60ULL || rel >= 0x1fad80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fad80 size=112 callers=0 calls=0
*/
void sub_1fad80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fad80ULL || rel >= 0x1fadf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fadf0 size=16 callers=0 calls=0
*/
void sub_1fadf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fadf0ULL || rel >= 0x1fae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae00 size=16 callers=0 calls=0
*/
void sub_1fae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae00ULL || rel >= 0x1fae10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae10 size=16 callers=0 calls=0
*/
void sub_1fae10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae10ULL || rel >= 0x1fae20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae20 size=16 callers=0 calls=0
*/
void sub_1fae20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae20ULL || rel >= 0x1fae30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae30 size=32 callers=0 calls=0
*/
void sub_1fae30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae30ULL || rel >= 0x1fae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae50 size=16 callers=0 calls=0
*/
void sub_1fae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae50ULL || rel >= 0x1fae60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae60 size=32 callers=0 calls=0
*/
void sub_1fae60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae60ULL || rel >= 0x1fae80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae80 size=16 callers=0 calls=0
*/
void sub_1fae80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae80ULL || rel >= 0x1fae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fae90 size=32 callers=0 calls=0
*/
void sub_1fae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fae90ULL || rel >= 0x1faeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faeb0 size=32 callers=0 calls=0
*/
void sub_1faeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faeb0ULL || rel >= 0x1faed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faed0 size=112 callers=0 calls=0
*/
void sub_1faed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faed0ULL || rel >= 0x1faf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faf40 size=16 callers=0 calls=0
*/
void sub_1faf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faf40ULL || rel >= 0x1faf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faf50 size=16 callers=0 calls=0
*/
void sub_1faf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faf50ULL || rel >= 0x1faf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faf60 size=16 callers=0 calls=0
*/
void sub_1faf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faf60ULL || rel >= 0x1faf70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faf70 size=16 callers=0 calls=0
*/
void sub_1faf70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faf70ULL || rel >= 0x1faf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001faf80 size=32 callers=0 calls=0
*/
void sub_1faf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1faf80ULL || rel >= 0x1fafa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fafa0 size=16 callers=0 calls=0
*/
void sub_1fafa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fafa0ULL || rel >= 0x1fafb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fafb0 size=32 callers=0 calls=0
*/
void sub_1fafb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fafb0ULL || rel >= 0x1fafd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fafd0 size=16 callers=0 calls=0
*/
void sub_1fafd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fafd0ULL || rel >= 0x1fafe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fafe0 size=32 callers=0 calls=0
*/
void sub_1fafe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fafe0ULL || rel >= 0x1fb000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb000 size=32 callers=0 calls=0
*/
void sub_1fb000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb000ULL || rel >= 0x1fb020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb020 size=112 callers=0 calls=0
*/
void sub_1fb020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb020ULL || rel >= 0x1fb090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb090 size=16 callers=0 calls=0
*/
void sub_1fb090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb090ULL || rel >= 0x1fb0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb0a0 size=16 callers=0 calls=0
*/
void sub_1fb0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb0a0ULL || rel >= 0x1fb0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb0b0 size=16 callers=0 calls=0
*/
void sub_1fb0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb0b0ULL || rel >= 0x1fb0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb0c0 size=16 callers=0 calls=0
*/
void sub_1fb0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb0c0ULL || rel >= 0x1fb0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb0d0 size=32 callers=0 calls=0
*/
void sub_1fb0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb0d0ULL || rel >= 0x1fb0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb0f0 size=16 callers=0 calls=0
*/
void sub_1fb0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb0f0ULL || rel >= 0x1fb100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb100 size=32 callers=0 calls=0
*/
void sub_1fb100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb100ULL || rel >= 0x1fb120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb120 size=16 callers=0 calls=0
*/
void sub_1fb120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb120ULL || rel >= 0x1fb130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb130 size=32 callers=0 calls=0
*/
void sub_1fb130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb130ULL || rel >= 0x1fb150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb150 size=32 callers=0 calls=0
*/
void sub_1fb150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb150ULL || rel >= 0x1fb170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb170 size=112 callers=0 calls=0
*/
void sub_1fb170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb170ULL || rel >= 0x1fb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb1e0 size=16 callers=0 calls=0
*/
void sub_1fb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb1e0ULL || rel >= 0x1fb1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb1f0 size=16 callers=0 calls=0
*/
void sub_1fb1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb1f0ULL || rel >= 0x1fb200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb200 size=16 callers=0 calls=0
*/
void sub_1fb200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb200ULL || rel >= 0x1fb210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb210 size=16 callers=0 calls=0
*/
void sub_1fb210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb210ULL || rel >= 0x1fb220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb220 size=32 callers=0 calls=0
*/
void sub_1fb220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb220ULL || rel >= 0x1fb240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb240 size=16 callers=0 calls=0
*/
void sub_1fb240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb240ULL || rel >= 0x1fb250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb250 size=32 callers=0 calls=0
*/
void sub_1fb250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb250ULL || rel >= 0x1fb270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb270 size=16 callers=0 calls=0
*/
void sub_1fb270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb270ULL || rel >= 0x1fb280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb280 size=32 callers=0 calls=0
*/
void sub_1fb280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb280ULL || rel >= 0x1fb2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb2a0 size=32 callers=0 calls=0
*/
void sub_1fb2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb2a0ULL || rel >= 0x1fb2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb2c0 size=112 callers=0 calls=0
*/
void sub_1fb2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb2c0ULL || rel >= 0x1fb330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb330 size=16 callers=0 calls=0
*/
void sub_1fb330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb330ULL || rel >= 0x1fb340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb340 size=16 callers=0 calls=0
*/
void sub_1fb340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb340ULL || rel >= 0x1fb350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb350 size=16 callers=0 calls=0
*/
void sub_1fb350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb350ULL || rel >= 0x1fb360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb360 size=16 callers=0 calls=0
*/
void sub_1fb360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb360ULL || rel >= 0x1fb370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb370 size=32 callers=0 calls=0
*/
void sub_1fb370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb370ULL || rel >= 0x1fb390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb390 size=16 callers=0 calls=0
*/
void sub_1fb390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb390ULL || rel >= 0x1fb3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb3a0 size=32 callers=0 calls=0
*/
void sub_1fb3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb3a0ULL || rel >= 0x1fb3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb3c0 size=16 callers=0 calls=0
*/
void sub_1fb3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb3c0ULL || rel >= 0x1fb3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb3d0 size=32 callers=0 calls=0
*/
void sub_1fb3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb3d0ULL || rel >= 0x1fb3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb3f0 size=32 callers=0 calls=0
*/
void sub_1fb3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb3f0ULL || rel >= 0x1fb410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb410 size=112 callers=0 calls=0
*/
void sub_1fb410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb410ULL || rel >= 0x1fb480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb480 size=16 callers=0 calls=0
*/
void sub_1fb480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb480ULL || rel >= 0x1fb490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb490 size=16 callers=0 calls=0
*/
void sub_1fb490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb490ULL || rel >= 0x1fb4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb4a0 size=16 callers=0 calls=0
*/
void sub_1fb4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb4a0ULL || rel >= 0x1fb4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb4b0 size=16 callers=0 calls=0
*/
void sub_1fb4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb4b0ULL || rel >= 0x1fb4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb4c0 size=32 callers=0 calls=0
*/
void sub_1fb4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb4c0ULL || rel >= 0x1fb4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb4e0 size=448 callers=1 calls=3
   calls: sub_1fdbb0, sub_300c80, sub_300cb0
   ref: <allocation names disabled>
   ref: ./../../PhysXExtensions/src/ExtFixedJoint.h
   ref: NonTrackedAlloc
   ref: C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtens
   ref: static const char *physx::shdfnd::ReflectionAllocator<physx::Ext::FixedJoint>::getName() [T = physx:
*/
void NonTrackedAlloc_118(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb4e0ULL || rel >= 0x1fb6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb6a0 size=16 callers=0 calls=0
*/
void sub_1fb6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb6a0ULL || rel >= 0x1fb6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb6b0 size=32 callers=0 calls=0
*/
void sub_1fb6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb6b0ULL || rel >= 0x1fb6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb6d0 size=16 callers=0 calls=0
*/
void sub_1fb6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb6d0ULL || rel >= 0x1fb6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb6e0 size=32 callers=0 calls=0
*/
void sub_1fb6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb6e0ULL || rel >= 0x1fb700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb700 size=112 callers=0 calls=0
*/
void sub_1fb700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb700ULL || rel >= 0x1fb770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb770 size=176 callers=0 calls=1
   calls: sub_1fedc0
*/
void sub_1fb770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb770ULL || rel >= 0x1fb820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fb820 size=2080 callers=0 calls=1
   calls: sub_1fe0d0
*/
void sub_1fb820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fb820ULL || rel >= 0x1fc040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc040 size=688 callers=0 calls=0
*/
void sub_1fc040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc040ULL || rel >= 0x1fc2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc2f0 size=16 callers=0 calls=0
*/
void sub_1fc2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc2f0ULL || rel >= 0x1fc300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc300 size=16 callers=0 calls=0
   ref: PxFixedJoint
*/
void PxFixedJoint(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc300ULL || rel >= 0x1fc310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc310 size=96 callers=0 calls=1
   calls: sub_300c80
*/
void sub_1fc310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc310ULL || rel >= 0x1fc370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc370 size=128 callers=0 calls=1
   calls: sub_300c80
*/
void sub_1fc370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc370ULL || rel >= 0x1fc3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc3f0 size=128 callers=0 calls=0
   ref: PxBase
   ref: PxFixedJoint
   ref: PxJoint
*/
void PxFixedJoint_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc3f0ULL || rel >= 0x1fc470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc470 size=768 callers=0 calls=1
   calls: sub_1fdf60
*/
void sub_1fc470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc470ULL || rel >= 0x1fc770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc770 size=32 callers=0 calls=0
*/
void sub_1fc770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc770ULL || rel >= 0x1fc790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc790 size=576 callers=0 calls=1
   calls: sub_1fdf60
*/
void sub_1fc790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc790ULL || rel >= 0x1fc9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fc9d0 size=64 callers=0 calls=0
*/
void sub_1fc9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fc9d0ULL || rel >= 0x1fca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fca10 size=1120 callers=0 calls=0
*/
void sub_1fca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fca10ULL || rel >= 0x1fce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fce70 size=992 callers=0 calls=1
   calls: sub_1fdf60
*/
void sub_1fce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fce70ULL || rel >= 0x1fd250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd250 size=480 callers=0 calls=1
   calls: sub_1fdf60
*/
void sub_1fd250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd250ULL || rel >= 0x1fd430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd430 size=16 callers=0 calls=0
*/
void sub_1fd430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd430ULL || rel >= 0x1fd440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd440 size=16 callers=0 calls=0
*/
void sub_1fd440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd440ULL || rel >= 0x1fd450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd450 size=64 callers=0 calls=0
*/
void sub_1fd450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd450ULL || rel >= 0x1fd490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd490 size=32 callers=0 calls=0
*/
void sub_1fd490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd490ULL || rel >= 0x1fd4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd4b0 size=16 callers=0 calls=0
*/
void sub_1fd4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd4b0ULL || rel >= 0x1fd4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd4c0 size=32 callers=0 calls=0
*/
void sub_1fd4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd4c0ULL || rel >= 0x1fd4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd4e0 size=16 callers=0 calls=0
*/
void sub_1fd4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd4e0ULL || rel >= 0x1fd4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd4f0 size=32 callers=0 calls=0
*/
void sub_1fd4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd4f0ULL || rel >= 0x1fd510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd510 size=16 callers=0 calls=0
*/
void sub_1fd510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd510ULL || rel >= 0x1fd520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd520 size=32 callers=0 calls=0
*/
void sub_1fd520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd520ULL || rel >= 0x1fd540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd540 size=16 callers=0 calls=0
*/
void sub_1fd540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd540ULL || rel >= 0x1fd550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd550 size=32 callers=0 calls=0
*/
void sub_1fd550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd550ULL || rel >= 0x1fd570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd570 size=16 callers=0 calls=0
*/
void sub_1fd570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd570ULL || rel >= 0x1fd580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd580 size=16 callers=0 calls=0
*/
void sub_1fd580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd580ULL || rel >= 0x1fd590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd590 size=16 callers=0 calls=0
*/
void sub_1fd590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd590ULL || rel >= 0x1fd5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd5a0 size=16 callers=0 calls=0
*/
void sub_1fd5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd5a0ULL || rel >= 0x1fd5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd5b0 size=32 callers=0 calls=0
*/
void sub_1fd5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd5b0ULL || rel >= 0x1fd5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd5d0 size=144 callers=0 calls=0
*/
void sub_1fd5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd5d0ULL || rel >= 0x1fd660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd660 size=16 callers=0 calls=0
*/
void sub_1fd660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd660ULL || rel >= 0x1fd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd670 size=448 callers=0 calls=1
   calls: sub_1fdf60
*/
void sub_1fd670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd670ULL || rel >= 0x1fd830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd830 size=304 callers=0 calls=0
*/
void sub_1fd830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd830ULL || rel >= 0x1fd960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd960 size=16 callers=0 calls=0
*/
void sub_1fd960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd960ULL || rel >= 0x1fd970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 001fd970 size=16 callers=0 calls=0
*/
void sub_1fd970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1fd970ULL || rel >= 0x1fd980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

