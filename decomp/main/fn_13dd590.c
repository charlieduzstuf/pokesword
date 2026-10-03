/* main functions 013dd590..013f7d40 (168 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 013dd590 size=16 callers=0 calls=0
*/
void sub_13dd590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd590ULL || rel >= 0x13dd5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dd5a0 size=16 callers=0 calls=0
*/
void sub_13dd5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd5a0ULL || rel >= 0x13dd5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dd5b0 size=192 callers=0 calls=5
   calls: sub_13a8100, sub_13c4930, sub_680be0, sub_680c80, sub_680d80
*/
void sub_13dd5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd5b0ULL || rel >= 0x13dd670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dd670 size=16 callers=0 calls=0
*/
void sub_13dd670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd670ULL || rel >= 0x13dd680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dd680 size=16 callers=0 calls=0
*/
void sub_13dd680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd680ULL || rel >= 0x13dd690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dd690 size=16 callers=0 calls=0
*/
void sub_13dd690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd690ULL || rel >= 0x13dd6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dd6a0 size=992 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e00, sub_680e70, sub_680ff0
   ref: IsTurnOnEnd
   ref: TurnAngle
   ref: IsTerrainHeightAdjust
   ref: MoveSpeed
   ref: MotionFadeDistance
   ref: MotionParam
   ref: CS_FObjACMove
*/
void IsTerrainHeightAdjust(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dd6a0ULL || rel >= 0x13dda80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dda80 size=16 callers=0 calls=0
*/
void sub_13dda80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dda80ULL || rel >= 0x13dda90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dda90 size=16 callers=0 calls=0
*/
void sub_13dda90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dda90ULL || rel >= 0x13ddaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ddaa0 size=16 callers=0 calls=0
*/
void sub_13ddaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ddaa0ULL || rel >= 0x13ddab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ddab0 size=736 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80, sub_680e00, sub_680e70
   ref: IsTerrainHeightAdjust
   ref: MoveSpeed
   ref: CS_FObjACMoveFrame
   ref: MotionParam
   ref: MoveFrame
   ref: MotionFadeFrame
*/
void IsTerrainHeightAdjust_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ddab0ULL || rel >= 0x13ddd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ddd90 size=16 callers=0 calls=0
*/
void sub_13ddd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ddd90ULL || rel >= 0x13ddda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ddda0 size=16 callers=0 calls=0
*/
void sub_13ddda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ddda0ULL || rel >= 0x13dddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dddb0 size=16 callers=0 calls=0
*/
void sub_13dddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dddb0ULL || rel >= 0x13dddc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dddc0 size=784 callers=0 calls=7
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680e00, sub_680f00
   ref: CS_FObjACMoveTurnToTarget
   ref: Target
   ref: MoveSpeed
   ref: MotionParam
*/
void CS_FObjACMoveTurnToTarget(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dddc0ULL || rel >= 0x13de0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de0d0 size=16 callers=0 calls=0
*/
void sub_13de0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de0d0ULL || rel >= 0x13de0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de0e0 size=16 callers=0 calls=0
*/
void sub_13de0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de0e0ULL || rel >= 0x13de0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de0f0 size=16 callers=0 calls=0
*/
void sub_13de0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de0f0ULL || rel >= 0x13de100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de100 size=544 callers=0 calls=7
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80, sub_680e00
   ref: PathID
   ref: MotionParam
   ref: Deceleration
   ref: CS_FObjACPathMove
*/
void CS_FObjACPathMove(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de100ULL || rel >= 0x13de320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de320 size=16 callers=0 calls=0
*/
void sub_13de320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de320ULL || rel >= 0x13de330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de330 size=16 callers=0 calls=0
*/
void sub_13de330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de330ULL || rel >= 0x13de340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de340 size=16 callers=0 calls=0
*/
void sub_13de340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de340ULL || rel >= 0x13de350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de350 size=624 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80, sub_680e00, sub_680e70
   ref: IsFixedFrame
   ref: IsPerfectRotate
   ref: CS_FObjACRot
   ref: DelayFrame
*/
void IsPerfectRotate(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de350ULL || rel >= 0x13de5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de5c0 size=16 callers=0 calls=0
*/
void sub_13de5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de5c0ULL || rel >= 0x13de5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de5d0 size=16 callers=0 calls=0
*/
void sub_13de5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de5d0ULL || rel >= 0x13de5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de5e0 size=16 callers=0 calls=0
*/
void sub_13de5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de5e0ULL || rel >= 0x13de5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de5f0 size=656 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80, sub_680e70, sub_680f00
   ref: CS_FObjACRotTarget
   ref: Target
   ref: IsFixedFrame
   ref: IsPerfectRotate
   ref: DelayFrame
*/
void CS_FObjACRotTarget(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de5f0ULL || rel >= 0x13de880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de880 size=16 callers=0 calls=0
*/
void sub_13de880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de880ULL || rel >= 0x13de890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de890 size=16 callers=0 calls=0
*/
void sub_13de890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de890ULL || rel >= 0x13de8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de8a0 size=16 callers=0 calls=0
*/
void sub_13de8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de8a0ULL || rel >= 0x13de8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013de8b0 size=736 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80, sub_680e00, sub_680e70
   ref: IsFixedFrame
   ref: IsPerfectRotate
   ref: DelayFrame
   ref: CS_FObjACRotTargetPos
*/
void CS_FObjACRotTargetPos(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13de8b0ULL || rel >= 0x13deb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013deb90 size=16 callers=0 calls=0
*/
void sub_13deb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13deb90ULL || rel >= 0x13deba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013deba0 size=16 callers=0 calls=0
*/
void sub_13deba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13deba0ULL || rel >= 0x13debb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013debb0 size=16 callers=0 calls=0
*/
void sub_13debb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13debb0ULL || rel >= 0x13debc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013debc0 size=432 callers=0 calls=7
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0, sub_680c80, sub_680d80, sub_680f00
   ref: Target
   ref: DelayFrame
   ref: CS_FObjACRotEach
*/
void CS_FObjACRotEach(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13debc0ULL || rel >= 0x13ded70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ded70 size=16 callers=0 calls=0
*/
void sub_13ded70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ded70ULL || rel >= 0x13ded80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ded80 size=16 callers=0 calls=0
*/
void sub_13ded80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ded80ULL || rel >= 0x13ded90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ded90 size=16 callers=0 calls=0
*/
void sub_13ded90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ded90ULL || rel >= 0x13deda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013deda0 size=64 callers=0 calls=2
   calls: sub_13a8100, sub_680be0
*/
void sub_13deda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13deda0ULL || rel >= 0x13dede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dede0 size=16 callers=0 calls=0
*/
void sub_13dede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dede0ULL || rel >= 0x13dedf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dedf0 size=16 callers=0 calls=0
*/
void sub_13dedf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dedf0ULL || rel >= 0x13dee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dee00 size=16 callers=0 calls=0
*/
void sub_13dee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dee00ULL || rel >= 0x13dee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dee10 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_FObjACWait
*/
void CS_FObjACWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dee10ULL || rel >= 0x13dee90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dee90 size=16 callers=0 calls=0
*/
void sub_13dee90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dee90ULL || rel >= 0x13deea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013deea0 size=16 callers=0 calls=0
*/
void sub_13deea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13deea0ULL || rel >= 0x13deeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013deeb0 size=16 callers=0 calls=0
*/
void sub_13deeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13deeb0ULL || rel >= 0x13deec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013deec0 size=432 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680e70, sub_680f00
   ref: IsInstantTransiting
   ref: MotionType
   ref: CS_FObjMotionPlayOneShot
*/
void CS_FObjMotionPlayOneShot(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13deec0ULL || rel >= 0x13df070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df070 size=16 callers=0 calls=0
*/
void sub_13df070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df070ULL || rel >= 0x13df080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df080 size=16 callers=0 calls=0
*/
void sub_13df080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df080ULL || rel >= 0x13df090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df090 size=16 callers=0 calls=0
*/
void sub_13df090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df090ULL || rel >= 0x13df0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df0a0 size=432 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680e70, sub_680f00
   ref: IsInstantTransiting
   ref: MotionType
   ref: CS_FObjMotionPlayLoopIn
*/
void CS_FObjMotionPlayLoopIn(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df0a0ULL || rel >= 0x13df250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df250 size=16 callers=0 calls=0
*/
void sub_13df250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df250ULL || rel >= 0x13df260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df260 size=16 callers=0 calls=0
*/
void sub_13df260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df260ULL || rel >= 0x13df270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df270 size=16 callers=0 calls=0
*/
void sub_13df270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df270ULL || rel >= 0x13df280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df280 size=432 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680e70, sub_680f00
   ref: IsInstantTransiting
   ref: MotionType
   ref: CS_FObjMotionPlayLoopOut
*/
void CS_FObjMotionPlayLoopOut(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df280ULL || rel >= 0x13df430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df430 size=16 callers=0 calls=0
*/
void sub_13df430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df430ULL || rel >= 0x13df440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df440 size=16 callers=0 calls=0
*/
void sub_13df440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df440ULL || rel >= 0x13df450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df450 size=16 callers=0 calls=0
*/
void sub_13df450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df450ULL || rel >= 0x13df460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df460 size=432 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680e70, sub_680f00
   ref: WaitType
   ref: CS_FObjMotionChangeWaitType
   ref: IsInstantTransiting
*/
void CS_FObjMotionChangeWaitType(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df460ULL || rel >= 0x13df610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df610 size=16 callers=0 calls=0
*/
void sub_13df610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df610ULL || rel >= 0x13df620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df620 size=16 callers=0 calls=0
*/
void sub_13df620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df620ULL || rel >= 0x13df630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df630 size=16 callers=0 calls=0
*/
void sub_13df630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df630ULL || rel >= 0x13df640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df640 size=64 callers=0 calls=2
   calls: sub_13a8100, sub_680be0
*/
void sub_13df640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df640ULL || rel >= 0x13df680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df680 size=16 callers=0 calls=0
*/
void sub_13df680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df680ULL || rel >= 0x13df690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df690 size=16 callers=0 calls=0
*/
void sub_13df690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df690ULL || rel >= 0x13df6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df6a0 size=16 callers=0 calls=0
*/
void sub_13df6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df6a0ULL || rel >= 0x13df6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df6b0 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_FObjMotionWait
*/
void CS_FObjMotionWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df6b0ULL || rel >= 0x13df730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df730 size=16 callers=0 calls=0
*/
void sub_13df730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df730ULL || rel >= 0x13df740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df740 size=16 callers=0 calls=0
*/
void sub_13df740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df740ULL || rel >= 0x13df750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df750 size=16 callers=0 calls=0
*/
void sub_13df750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df750ULL || rel >= 0x13df760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df760 size=240 callers=0 calls=6
   calls: sub_13a8100, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680f00
   ref: StateName
*/
void StateName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df760ULL || rel >= 0x13df850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df850 size=16 callers=0 calls=0
*/
void sub_13df850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df850ULL || rel >= 0x13df860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df860 size=16 callers=0 calls=0
*/
void sub_13df860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df860ULL || rel >= 0x13df870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df870 size=16 callers=0 calls=0
*/
void sub_13df870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df870ULL || rel >= 0x13df880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df880 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_FObjMotionWaitStateName
*/
void CS_FObjMotionWaitStateName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df880ULL || rel >= 0x13df900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df900 size=16 callers=0 calls=0
*/
void sub_13df900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df900ULL || rel >= 0x13df910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df910 size=16 callers=0 calls=0
*/
void sub_13df910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df910ULL || rel >= 0x13df920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df920 size=16 callers=0 calls=0
*/
void sub_13df920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df920ULL || rel >= 0x13df930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df930 size=160 callers=0 calls=4
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_680be0
   ref: CS_FObjMotionReset
*/
void CS_FObjMotionReset(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df930ULL || rel >= 0x13df9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df9d0 size=16 callers=0 calls=0
*/
void sub_13df9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df9d0ULL || rel >= 0x13df9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df9e0 size=16 callers=0 calls=0
*/
void sub_13df9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df9e0ULL || rel >= 0x13df9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013df9f0 size=16 callers=0 calls=0
*/
void sub_13df9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13df9f0ULL || rel >= 0x13dfa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dfa00 size=320 callers=0 calls=7
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680f00
   ref: CS_StateSetTrigger
   ref: ParameterName
*/
void CS_StateSetTrigger(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dfa00ULL || rel >= 0x13dfb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dfb40 size=16 callers=0 calls=0
*/
void sub_13dfb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dfb40ULL || rel >= 0x13dfb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dfb50 size=16 callers=0 calls=0
*/
void sub_13dfb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dfb50ULL || rel >= 0x13dfb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dfb60 size=16 callers=0 calls=0
*/
void sub_13dfb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dfb60ULL || rel >= 0x13dfb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dfb70 size=432 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680e70, sub_680f00
   ref: Enabled
   ref: CS_StateSetBool
   ref: ParameterName
*/
void CS_StateSetBool(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dfb70ULL || rel >= 0x13dfd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dfd20 size=16 callers=0 calls=0
*/
void sub_13dfd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dfd20ULL || rel >= 0x13dfd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dfd30 size=16 callers=0 calls=0
*/
void sub_13dfd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dfd30ULL || rel >= 0x13dfd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dfd40 size=16 callers=0 calls=0
*/
void sub_13dfd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dfd40ULL || rel >= 0x13dfd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dfd50 size=432 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680d80, sub_680f00
   ref: CS_StateSetInt
   ref: ParameterName
*/
void CS_StateSetInt(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dfd50ULL || rel >= 0x13dff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dff00 size=16 callers=0 calls=0
*/
void sub_13dff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dff00ULL || rel >= 0x13dff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dff10 size=16 callers=0 calls=0
*/
void sub_13dff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dff10ULL || rel >= 0x13dff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dff20 size=16 callers=0 calls=0
*/
void sub_13dff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dff20ULL || rel >= 0x13dff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013dff30 size=432 callers=0 calls=8
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680e00, sub_680f00
   ref: ParameterName
   ref: CS_StateSetFloat
*/
void CS_StateSetFloat(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13dff30ULL || rel >= 0x13e00e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e00e0 size=16 callers=0 calls=0
*/
void sub_13e00e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e00e0ULL || rel >= 0x13e00f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e00f0 size=16 callers=0 calls=0
*/
void sub_13e00f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e00f0ULL || rel >= 0x13e0100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0100 size=16 callers=0 calls=0
*/
void sub_13e0100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0100ULL || rel >= 0x13e0110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0110 size=976 callers=0 calls=11
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680d80, sub_680e00, sub_680e70, sub_680f00, sub_680ff0
   ref: Offset
   ref: CS_EffectPlay
   ref: JointName
   ref: IsFollow
   ref: UniqueID
   ref: FilePath
*/
void CS_EffectPlay(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0110ULL || rel >= 0x13e04e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e04e0 size=16 callers=0 calls=0
*/
void sub_13e04e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e04e0ULL || rel >= 0x13e04f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e04f0 size=16 callers=0 calls=0
*/
void sub_13e04f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e04f0ULL || rel >= 0x13e0500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0500 size=16 callers=0 calls=0
*/
void sub_13e0500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0500ULL || rel >= 0x13e0510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0510 size=768 callers=0 calls=10
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680d80, sub_680e00, sub_680e70, sub_680f00
   ref: CS_EffectPlayHead
   ref: OffsetY
   ref: IsFollow
   ref: UniqueID
   ref: FilePath
*/
void CS_EffectPlayHead(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0510ULL || rel >= 0x13e0810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0810 size=16 callers=0 calls=0
*/
void sub_13e0810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0810ULL || rel >= 0x13e0820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0820 size=16 callers=0 calls=0
*/
void sub_13e0820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0820ULL || rel >= 0x13e0830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0830 size=16 callers=0 calls=0
*/
void sub_13e0830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0830ULL || rel >= 0x13e0840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0840 size=1008 callers=0 calls=8
   calls: sub_13a8200, sub_66c4e0, sub_66c570, sub_680c80, sub_680d80, sub_680e00, sub_680f00, sub_680ff0
   ref: Offset
   ref: CS_EffectPlayOnCamera
   ref: UniqueID
   ref: FilePath
*/
void CS_EffectPlayOnCamera(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0840ULL || rel >= 0x13e0c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0c30 size=16 callers=0 calls=0
*/
void sub_13e0c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0c30ULL || rel >= 0x13e0c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0c40 size=16 callers=0 calls=0
*/
void sub_13e0c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0c40ULL || rel >= 0x13e0c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0c50 size=16 callers=0 calls=0
*/
void sub_13e0c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0c50ULL || rel >= 0x13e0c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0c60 size=672 callers=0 calls=8
   calls: sub_13a8200, sub_66c4e0, sub_66c570, sub_680c80, sub_680d80, sub_680e00, sub_680f00, sub_680ff0
   ref: Position
   ref: UniqueID
   ref: CS_EffectPlayWorld
   ref: FilePath
*/
void CS_EffectPlayWorld(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0c60ULL || rel >= 0x13e0f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0f00 size=16 callers=0 calls=0
*/
void sub_13e0f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0f00ULL || rel >= 0x13e0f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0f10 size=16 callers=0 calls=0
*/
void sub_13e0f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0f10ULL || rel >= 0x13e0f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0f20 size=16 callers=0 calls=0
*/
void sub_13e0f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0f20ULL || rel >= 0x13e0f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e0f30 size=768 callers=0 calls=10
   calls: sub_13a8100, sub_13a8200, sub_66c4e0, sub_66c570, sub_680be0, sub_680c80, sub_680d80, sub_680e00, sub_680e70, sub_680f00
   ref: CS_EffectPlayHead
   ref: OffsetY
   ref: IsFollow
   ref: UniqueID
   ref: FilePath
*/
void CS_EffectPlayHead_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e0f30ULL || rel >= 0x13e1230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1230 size=16 callers=0 calls=0
*/
void sub_13e1230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1230ULL || rel >= 0x13e1240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1240 size=16 callers=0 calls=0
*/
void sub_13e1240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1240ULL || rel >= 0x13e1250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1250 size=16 callers=0 calls=0
*/
void sub_13e1250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1250ULL || rel >= 0x13e1260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1260 size=160 callers=0 calls=3
   calls: sub_66c4e0, sub_680c80, sub_680d80
   ref: UniqueID
*/
void UniqueID(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1260ULL || rel >= 0x13e1300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1300 size=16 callers=0 calls=0
*/
void sub_13e1300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1300ULL || rel >= 0x13e1310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1310 size=16 callers=0 calls=0
*/
void sub_13e1310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1310ULL || rel >= 0x13e1320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1320 size=16 callers=0 calls=0
*/
void sub_13e1320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1320ULL || rel >= 0x13e1330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1330 size=128 callers=0 calls=1
   calls: sub_13a8200
   ref: CS_EffectWait
*/
void CS_EffectWait(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1330ULL || rel >= 0x13e13b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e13b0 size=16 callers=0 calls=0
*/
void sub_13e13b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e13b0ULL || rel >= 0x13e13c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e13c0 size=16 callers=0 calls=0
*/
void sub_13e13c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e13c0ULL || rel >= 0x13e13d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e13d0 size=16 callers=0 calls=0
*/
void sub_13e13d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e13d0ULL || rel >= 0x13e13e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e13e0 size=128 callers=0 calls=0
*/
void sub_13e13e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e13e0ULL || rel >= 0x13e1460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1460 size=992 callers=1 calls=1
   calls: sub_13a7fe0
   ref: Cue/CueFlag
   ref: Cue/CueYesNo
   ref: Cue/CueWorkConditional
   ref: Cue/CueListMenu
   ref: Cue/Cue
   ref: Cue/CueWork
*/
void CueYesNo(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1460ULL || rel >= 0x13e1840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1840 size=176 callers=0 calls=3
   calls: sub_67f4c0, sub_680c80, sub_680f00
   ref: PointName
*/
void PointName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1840ULL || rel >= 0x13e18f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e18f0 size=16 callers=0 calls=0
*/
void sub_13e18f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e18f0ULL || rel >= 0x13e1900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1900 size=16 callers=0 calls=0
*/
void sub_13e1900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1900ULL || rel >= 0x13e1910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1910 size=16 callers=0 calls=0
*/
void sub_13e1910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1910ULL || rel >= 0x13e1920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1920 size=560 callers=0 calls=4
   calls: sub_135a1a0, sub_67f4c0, sub_680c80, sub_680f00
   ref: FlagName
   ref: TruePointName
   ref: FalsePointName
*/
void FalsePointName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1920ULL || rel >= 0x13e1b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1b50 size=16 callers=0 calls=0
*/
void sub_13e1b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1b50ULL || rel >= 0x13e1b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1b60 size=16 callers=0 calls=0
*/
void sub_13e1b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1b60ULL || rel >= 0x13e1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1b70 size=16 callers=0 calls=0
*/
void sub_13e1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1b70ULL || rel >= 0x13e1b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1b80 size=768 callers=0 calls=5
   calls: sub_135a760, sub_67f4c0, sub_680c80, sub_680d80, sub_680f00
   ref: Value1
   ref: PointName2
   ref: Value2
   ref: PointName1
   ref: WorkName
*/
void PointName2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1b80ULL || rel >= 0x13e1e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1e80 size=16 callers=0 calls=0
*/
void sub_13e1e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1e80ULL || rel >= 0x13e1e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1e90 size=16 callers=0 calls=0
*/
void sub_13e1e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1e90ULL || rel >= 0x13e1ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1ea0 size=16 callers=0 calls=0
*/
void sub_13e1ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1ea0ULL || rel >= 0x13e1eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e1eb0 size=896 callers=0 calls=5
   calls: sub_135a760, sub_67f4c0, sub_680c80, sub_680d80, sub_680f00
   ref: PointNameTrue
   ref: PointNameFalse
   ref: Conditional
   ref: WorkName
*/
void PointNameFalse(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e1eb0ULL || rel >= 0x13e2230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2230 size=16 callers=0 calls=0
*/
void sub_13e2230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2230ULL || rel >= 0x13e2240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2240 size=16 callers=0 calls=0
*/
void sub_13e2240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2240ULL || rel >= 0x13e2250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2250 size=16 callers=0 calls=0
*/
void sub_13e2250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2250ULL || rel >= 0x13e2260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2260 size=320 callers=0 calls=3
   calls: sub_67f4c0, sub_680c80, sub_680f00
   ref: YesPointName
   ref: NoPointName
*/
void YesPointName(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2260ULL || rel >= 0x13e23a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e23a0 size=16 callers=0 calls=0
*/
void sub_13e23a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e23a0ULL || rel >= 0x13e23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e23b0 size=16 callers=0 calls=0
*/
void sub_13e23b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e23b0ULL || rel >= 0x13e23c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e23c0 size=16 callers=0 calls=0
*/
void sub_13e23c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e23c0ULL || rel >= 0x13e23d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e23d0 size=912 callers=0 calls=3
   calls: sub_67f4c0, sub_680c80, sub_680f00
   ref: PointName3
   ref: PointName2
   ref: PointName1
   ref: PointName5
   ref: PointName4
   ref: PointName6
   ref: PointName7
*/
void PointName7(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e23d0ULL || rel >= 0x13e2760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2760 size=16 callers=0 calls=0
*/
void sub_13e2760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2760ULL || rel >= 0x13e2770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2770 size=16 callers=0 calls=0
*/
void sub_13e2770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2770ULL || rel >= 0x13e2780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2780 size=16 callers=0 calls=0
*/
void sub_13e2780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2780ULL || rel >= 0x13e2790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2790 size=80 callers=1 calls=1
   calls: sub_13f75a0
*/
void sub_13e2790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2790ULL || rel >= 0x13e27e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e27e0 size=96 callers=0 calls=0
*/
void sub_13e27e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e27e0ULL || rel >= 0x13e2840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2840 size=96 callers=0 calls=0
*/
void sub_13e2840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2840ULL || rel >= 0x13e28a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e28a0 size=96 callers=0 calls=0
*/
void sub_13e28a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e28a0ULL || rel >= 0x13e2900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2900 size=96 callers=0 calls=0
*/
void sub_13e2900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2900ULL || rel >= 0x13e2960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2960 size=96 callers=0 calls=0
*/
void sub_13e2960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2960ULL || rel >= 0x13e29c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e29c0 size=96 callers=0 calls=0
*/
void sub_13e29c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e29c0ULL || rel >= 0x13e2a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2a20 size=272 callers=1 calls=2
   calls: sub_13e3740, sub_5cfad0
   ref: bin/script/amx/cut_scene.amx
*/
void cut_scene(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2a20ULL || rel >= 0x13e2b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2b30 size=96 callers=1 calls=0
*/
void sub_13e2b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2b30ULL || rel >= 0x13e2b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2b90 size=272 callers=1 calls=0
*/
void sub_13e2b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2b90ULL || rel >= 0x13e2ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2ca0 size=560 callers=0 calls=1
   calls: sub_13f86f0
*/
void sub_13e2ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2ca0ULL || rel >= 0x13e2ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2ed0 size=16 callers=1 calls=0
*/
void sub_13e2ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2ed0ULL || rel >= 0x13e2ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2ee0 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13e2ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2ee0ULL || rel >= 0x13e2f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2f50 size=32 callers=0 calls=0
*/
void sub_13e2f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2f50ULL || rel >= 0x13e2f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2f70 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13e2f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2f70ULL || rel >= 0x13e2fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e2fe0 size=112 callers=0 calls=1
   calls: sub_13a1bc0
*/
void sub_13e2fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e2fe0ULL || rel >= 0x13e3050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3050 size=224 callers=1 calls=2
   calls: sub_13e3fe0, sub_5e2350
*/
void sub_13e3050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3050ULL || rel >= 0x13e3130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3130 size=304 callers=0 calls=0
*/
void sub_13e3130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3130ULL || rel >= 0x13e3260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3260 size=16 callers=0 calls=0
*/
void sub_13e3260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3260ULL || rel >= 0x13e3270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3270 size=16 callers=0 calls=0
*/
void sub_13e3270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3270ULL || rel >= 0x13e3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3280 size=16 callers=0 calls=0
*/
void sub_13e3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3280ULL || rel >= 0x13e3290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3290 size=16 callers=0 calls=0
*/
void sub_13e3290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3290ULL || rel >= 0x13e32a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e32a0 size=16 callers=0 calls=0
*/
void sub_13e32a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e32a0ULL || rel >= 0x13e32b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e32b0 size=416 callers=0 calls=3
   calls: sub_13e41f0, sub_13e5d60, sub_5e2350
*/
void sub_13e32b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e32b0ULL || rel >= 0x13e3450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3450 size=368 callers=0 calls=3
   calls: sub_13e41f0, sub_13e5be0, sub_5e2350
*/
void sub_13e3450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3450ULL || rel >= 0x13e35c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e35c0 size=16 callers=2 calls=0
*/
void sub_13e35c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e35c0ULL || rel >= 0x13e35d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e35d0 size=16 callers=3 calls=0
*/
void sub_13e35d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e35d0ULL || rel >= 0x13e35e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e35e0 size=176 callers=2 calls=0
*/
void sub_13e35e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e35e0ULL || rel >= 0x13e3690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3690 size=176 callers=1 calls=0
*/
void sub_13e3690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3690ULL || rel >= 0x13e3740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3740 size=608 callers=5 calls=3
   calls: sub_13e41f0, sub_13e5d60, sub_5e2350
*/
void sub_13e3740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3740ULL || rel >= 0x13e39a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e39a0 size=416 callers=3 calls=0
*/
void sub_13e39a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e39a0ULL || rel >= 0x13e3b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3b40 size=384 callers=2 calls=0
*/
void sub_13e3b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3b40ULL || rel >= 0x13e3cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3cc0 size=240 callers=2 calls=0
*/
void sub_13e3cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3cc0ULL || rel >= 0x13e3db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3db0 size=144 callers=1 calls=1
   calls: sub_13e46d0
*/
void sub_13e3db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3db0ULL || rel >= 0x13e3e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3e40 size=144 callers=1 calls=1
   calls: sub_13e4800
*/
void sub_13e3e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3e40ULL || rel >= 0x13e3ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3ed0 size=240 callers=0 calls=0
*/
void sub_13e3ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3ed0ULL || rel >= 0x13e3fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3fc0 size=16 callers=0 calls=0
*/
void sub_13e3fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3fc0ULL || rel >= 0x13e3fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3fd0 size=16 callers=0 calls=0
*/
void sub_13e3fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3fd0ULL || rel >= 0x13e3fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e3fe0 size=512 callers=1 calls=0
*/
void sub_13e3fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e3fe0ULL || rel >= 0x13e41e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e41e0 size=16 callers=0 calls=0
*/
void sub_13e41e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e41e0ULL || rel >= 0x13e41f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e41f0 size=320 callers=3 calls=0
*/
void sub_13e41f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e41f0ULL || rel >= 0x13e4330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4330 size=464 callers=0 calls=0
*/
void sub_13e4330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4330ULL || rel >= 0x13e4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4500 size=128 callers=0 calls=0
*/
void sub_13e4500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4500ULL || rel >= 0x13e4580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4580 size=336 callers=0 calls=1
   calls: sub_13e50b0
*/
void sub_13e4580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4580ULL || rel >= 0x13e46d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e46d0 size=224 callers=2 calls=1
   calls: sub_13e50b0
*/
void sub_13e46d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e46d0ULL || rel >= 0x13e47b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e47b0 size=16 callers=0 calls=0
*/
void sub_13e47b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e47b0ULL || rel >= 0x13e47c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e47c0 size=16 callers=0 calls=0
*/
void sub_13e47c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e47c0ULL || rel >= 0x13e47d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e47d0 size=16 callers=0 calls=0
*/
void sub_13e47d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e47d0ULL || rel >= 0x13e47e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e47e0 size=16 callers=0 calls=0
*/
void sub_13e47e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e47e0ULL || rel >= 0x13e47f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e47f0 size=16 callers=0 calls=0
*/
void sub_13e47f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e47f0ULL || rel >= 0x13e4800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4800 size=320 callers=4 calls=3
   calls: sub_13e4d90, sub_13e4ea0, sub_5cfaf0
*/
void sub_13e4800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4800ULL || rel >= 0x13e4940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4940 size=240 callers=0 calls=0
*/
void sub_13e4940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4940ULL || rel >= 0x13e4a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4a30 size=16 callers=0 calls=0
*/
void sub_13e4a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4a30ULL || rel >= 0x13e4a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4a40 size=16 callers=0 calls=0
*/
void sub_13e4a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4a40ULL || rel >= 0x13e4a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4a50 size=16 callers=0 calls=0
*/
void sub_13e4a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4a50ULL || rel >= 0x13e4a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4a60 size=240 callers=1 calls=1
   calls: sub_1310f00
*/
void sub_13e4a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4a60ULL || rel >= 0x13e4b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4b50 size=16 callers=3 calls=0
*/
void sub_13e4b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4b50ULL || rel >= 0x13e4b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4b60 size=512 callers=3 calls=3
   calls: sub_1307dd0, sub_13e54e0, sub_c4ac70
*/
void sub_13e4b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4b60ULL || rel >= 0x13e4d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4d60 size=48 callers=1 calls=0
*/
void sub_13e4d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4d60ULL || rel >= 0x13e4d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4d90 size=272 callers=1 calls=2
   calls: sub_13a2960, sub_13e4b60
*/
void sub_13e4d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4d90ULL || rel >= 0x13e4ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4ea0 size=288 callers=1 calls=2
   calls: sub_13a2960, sub_13e4b60
*/
void sub_13e4ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4ea0ULL || rel >= 0x13e4fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e4fc0 size=240 callers=10 calls=0
*/
void sub_13e4fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e4fc0ULL || rel >= 0x13e50b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e50b0 size=576 callers=12 calls=0
*/
void sub_13e50b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e50b0ULL || rel >= 0x13e52f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e52f0 size=160 callers=3 calls=1
   calls: sub_13083a0
*/
void sub_13e52f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e52f0ULL || rel >= 0x13e5390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e5390 size=240 callers=2 calls=1
   calls: sub_13e4b60
*/
void sub_13e5390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e5390ULL || rel >= 0x13e5480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e5480 size=96 callers=1 calls=1
   calls: sub_13e50b0
*/
void sub_13e5480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e5480ULL || rel >= 0x13e54e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e54e0 size=688 callers=2 calls=1
   calls: sub_13e5790
*/
void sub_13e54e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e54e0ULL || rel >= 0x13e5790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e5790 size=272 callers=1 calls=0
*/
void sub_13e5790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e5790ULL || rel >= 0x13e58a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e58a0 size=704 callers=0 calls=0
*/
void sub_13e58a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e58a0ULL || rel >= 0x13e5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e5b60 size=64 callers=0 calls=0
*/
void sub_13e5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e5b60ULL || rel >= 0x13e5ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e5ba0 size=64 callers=0 calls=0
*/
void sub_13e5ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e5ba0ULL || rel >= 0x13e5be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e5be0 size=384 callers=1 calls=6
   calls: sub_13e4800, sub_5dd790, sub_5e26a0, sub_5e2930, sub_8c2c10, sub_d0c0
*/
void sub_13e5be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e5be0ULL || rel >= 0x13e5d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e5d60 size=384 callers=2 calls=5
   calls: sub_13e4800, sub_5dd790, sub_5e2930, sub_8c2c10, sub_d0c0
*/
void sub_13e5d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e5d60ULL || rel >= 0x13e5ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e5ee0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_13e5ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e5ee0ULL || rel >= 0x13e5fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e5fb0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_13e5fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e5fb0ULL || rel >= 0x13e6080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6080 size=16 callers=0 calls=0
*/
void sub_13e6080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6080ULL || rel >= 0x13e6090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6090 size=16 callers=0 calls=0
*/
void sub_13e6090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6090ULL || rel >= 0x13e60a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e60a0 size=16 callers=0 calls=0
*/
void sub_13e60a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e60a0ULL || rel >= 0x13e60b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e60b0 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_13e60b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e60b0ULL || rel >= 0x13e6180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6180 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_13e6180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6180ULL || rel >= 0x13e6250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6250 size=16 callers=0 calls=0
*/
void sub_13e6250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6250ULL || rel >= 0x13e6260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6260 size=16 callers=0 calls=0
*/
void sub_13e6260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6260ULL || rel >= 0x13e6270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6270 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_13e6270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6270ULL || rel >= 0x13e6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6350 size=224 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_13e6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6350ULL || rel >= 0x13e6430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6430 size=304 callers=0 calls=0
*/
void sub_13e6430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6430ULL || rel >= 0x13e6560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6560 size=16 callers=1 calls=0
*/
void sub_13e6560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6560ULL || rel >= 0x13e6570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6570 size=160 callers=0 calls=1
   calls: sub_1367100
*/
void sub_13e6570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6570ULL || rel >= 0x13e6610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6610 size=144 callers=0 calls=1
   calls: sub_1367510
*/
void sub_13e6610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6610ULL || rel >= 0x13e66a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e66a0 size=144 callers=0 calls=1
   calls: sub_1367a30
*/
void sub_13e66a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e66a0ULL || rel >= 0x13e6730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6730 size=144 callers=0 calls=1
   calls: sub_1367350
*/
void sub_13e6730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6730ULL || rel >= 0x13e67c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e67c0 size=32 callers=0 calls=1
   calls: sub_786b80
*/
void sub_13e67c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e67c0ULL || rel >= 0x13e67e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e67e0 size=32 callers=0 calls=1
   calls: sub_786c10
*/
void sub_13e67e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e67e0ULL || rel >= 0x13e6800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6800 size=32 callers=0 calls=1
   calls: sub_786e20
*/
void sub_13e6800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6800ULL || rel >= 0x13e6820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6820 size=192 callers=0 calls=6
   calls: sub_786b80, sub_786d90, sub_786e20, sub_786e70, sub_786ec0, sub_786f10
*/
void sub_13e6820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6820ULL || rel >= 0x13e68e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e68e0 size=32 callers=0 calls=1
   calls: sub_786de0
*/
void sub_13e68e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e68e0ULL || rel >= 0x13e6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6900 size=32 callers=0 calls=1
   calls: sub_786ad0
*/
void sub_13e6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6900ULL || rel >= 0x13e6920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6920 size=32 callers=0 calls=1
   calls: sub_786a40
*/
void sub_13e6920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6920ULL || rel >= 0x13e6940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6940 size=128 callers=0 calls=1
   calls: sub_137bb10
*/
void sub_13e6940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6940ULL || rel >= 0x13e69c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e69c0 size=128 callers=0 calls=1
   calls: sub_137bb60
*/
void sub_13e69c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e69c0ULL || rel >= 0x13e6a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6a40 size=128 callers=0 calls=1
   calls: sub_137bbb0
*/
void sub_13e6a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6a40ULL || rel >= 0x13e6ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6ac0 size=112 callers=0 calls=1
   calls: sub_1368ae0
*/
void sub_13e6ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6ac0ULL || rel >= 0x13e6b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6b30 size=144 callers=0 calls=2
   calls: sub_14dfc70, sub_14dfe50
*/
void sub_13e6b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6b30ULL || rel >= 0x13e6bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6bc0 size=128 callers=0 calls=2
   calls: sub_14dfd60, sub_14dfe50
*/
void sub_13e6bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6bc0ULL || rel >= 0x13e6c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6c40 size=112 callers=0 calls=1
   calls: sub_14dfe50
*/
void sub_13e6c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6c40ULL || rel >= 0x13e6cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6cb0 size=144 callers=0 calls=1
   calls: sub_137b8e0
*/
void sub_13e6cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6cb0ULL || rel >= 0x13e6d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6d40 size=144 callers=0 calls=1
   calls: sub_137b940
*/
void sub_13e6d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6d40ULL || rel >= 0x13e6dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6dd0 size=128 callers=0 calls=1
   calls: sub_137b8b0
*/
void sub_13e6dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6dd0ULL || rel >= 0x13e6e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6e50 size=240 callers=0 calls=2
   calls: sub_e3cdd0, sub_e3d020
*/
void sub_13e6e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6e50ULL || rel >= 0x13e6f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e6f40 size=224 callers=0 calls=1
   calls: sub_e3ce60
*/
void sub_13e6f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e6f40ULL || rel >= 0x13e7020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e7020 size=240 callers=0 calls=1
   calls: sub_e3cee0
*/
void sub_13e7020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e7020ULL || rel >= 0x13e7110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e7110 size=144 callers=0 calls=1
   calls: sub_136b7c0
*/
void sub_13e7110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e7110ULL || rel >= 0x13e71a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e71a0 size=144 callers=0 calls=1
   calls: sub_136b820
*/
void sub_13e71a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e71a0ULL || rel >= 0x13e7230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e7230 size=128 callers=0 calls=1
   calls: sub_136b790
*/
void sub_13e7230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e7230ULL || rel >= 0x13e72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e72b0 size=144 callers=0 calls=3
   calls: sub_136e810, sub_137baa0, sub_137bab0
*/
void sub_13e72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e72b0ULL || rel >= 0x13e7340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e7340 size=128 callers=0 calls=2
   calls: sub_137baa0, sub_137bab0
*/
void sub_13e7340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e7340ULL || rel >= 0x13e73c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e73c0 size=128 callers=0 calls=1
   calls: sub_137baa0
*/
void sub_13e73c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e73c0ULL || rel >= 0x13e7440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e7440 size=160 callers=0 calls=2
   calls: sub_137ca10, sub_13b12d0
*/
void sub_13e7440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e7440ULL || rel >= 0x13e74e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e74e0 size=1072 callers=0 calls=5
   calls: sub_136b580, sub_137ca10, sub_13b12d0, sub_b6f8c0, sub_b70440
*/
void sub_13e74e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e74e0ULL || rel >= 0x13e7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e7910 size=160 callers=0 calls=2
   calls: sub_137c8a0, sub_13b12d0
*/
void sub_13e7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e7910ULL || rel >= 0x13e79b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e79b0 size=896 callers=0 calls=5
   calls: sub_136b580, sub_137c8a0, sub_13b12d0, sub_b6f8c0, sub_b70440
*/
void sub_13e79b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e79b0ULL || rel >= 0x13e7d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e7d30 size=304 callers=0 calls=4
   calls: sub_136b780, sub_13b12d0, sub_b4c070, sub_b751c0
*/
void sub_13e7d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e7d30ULL || rel >= 0x13e7e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e7e60 size=128 callers=0 calls=0
*/
void sub_13e7e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e7e60ULL || rel >= 0x13e7ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e7ee0 size=16 callers=1 calls=0
*/
void sub_13e7ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e7ee0ULL || rel >= 0x13e7ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e7ef0 size=304 callers=0 calls=3
   calls: sub_13ea340, sub_13eb080, sub_66efd0
*/
void sub_13e7ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e7ef0ULL || rel >= 0x13e8020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e8020 size=256 callers=0 calls=3
   calls: sub_762d70, sub_7847d0, sub_784800
*/
void sub_13e8020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8020ULL || rel >= 0x13e8120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e8120 size=368 callers=0 calls=2
   calls: sub_13ea840, sub_7847d0
*/
void sub_13e8120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8120ULL || rel >= 0x13e8290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e8290 size=208 callers=0 calls=2
   calls: sub_13ea460, sub_7847d0
*/
void sub_13e8290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8290ULL || rel >= 0x13e8360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e8360 size=400 callers=0 calls=3
   calls: sub_13ead90, sub_767950, sub_7847d0
*/
void sub_13e8360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8360ULL || rel >= 0x13e84f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e84f0 size=240 callers=0 calls=3
   calls: sub_764b40, sub_765720, sub_7847d0
*/
void sub_13e84f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e84f0ULL || rel >= 0x13e85e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e85e0 size=208 callers=0 calls=1
   calls: sub_784800
*/
void sub_13e85e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e85e0ULL || rel >= 0x13e86b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e86b0 size=432 callers=0 calls=2
   calls: sub_13ea640, sub_7847d0
*/
void sub_13e86b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e86b0ULL || rel >= 0x13e8860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e8860 size=224 callers=0 calls=3
   calls: sub_7628f0, sub_767950, sub_7847d0
*/
void sub_13e8860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8860ULL || rel >= 0x13e8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e8940 size=160 callers=0 calls=1
   calls: sub_785960
*/
void sub_13e8940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8940ULL || rel >= 0x13e89e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e89e0 size=256 callers=0 calls=2
   calls: sub_136b5e0, sub_7847d0
*/
void sub_13e89e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e89e0ULL || rel >= 0x13e8ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e8ae0 size=352 callers=0 calls=3
   calls: sub_765e60, sub_767950, sub_7847d0
*/
void sub_13e8ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8ae0ULL || rel >= 0x13e8c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e8c40 size=224 callers=0 calls=3
   calls: sub_7669e0, sub_767950, sub_7847d0
*/
void sub_13e8c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8c40ULL || rel >= 0x13e8d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e8d20 size=336 callers=0 calls=6
   calls: sub_765de0, sub_7661c0, sub_766220, sub_7664a0, sub_766860, sub_7847d0
*/
void sub_13e8d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8d20ULL || rel >= 0x13e8e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e8e70 size=224 callers=0 calls=3
   calls: sub_762890, sub_767950, sub_7847d0
*/
void sub_13e8e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8e70ULL || rel >= 0x13e8f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e8f50 size=256 callers=0 calls=4
   calls: sub_66efd0, sub_767950, sub_7847d0, sub_d839d0
*/
void sub_13e8f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e8f50ULL || rel >= 0x13e9050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e9050 size=640 callers=0 calls=5
   calls: sub_12ffe00, sub_762930, sub_767f20, sub_7847d0, sub_d63270
*/
void sub_13e9050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9050ULL || rel >= 0x13e92d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e92d0 size=272 callers=0 calls=2
   calls: sub_14073b0, sub_66efd0
*/
void sub_13e92d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e92d0ULL || rel >= 0x13e93e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e93e0 size=128 callers=0 calls=1
   calls: sub_13533f0
*/
void sub_13e93e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e93e0ULL || rel >= 0x13e9460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e9460 size=128 callers=0 calls=1
   calls: sub_1350ab0
*/
void sub_13e9460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9460ULL || rel >= 0x13e94e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e94e0 size=128 callers=0 calls=1
   calls: sub_1350f70
*/
void sub_13e94e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e94e0ULL || rel >= 0x13e9560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e9560 size=160 callers=0 calls=1
   calls: sub_134f600
*/
void sub_13e9560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9560ULL || rel >= 0x13e9600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e9600 size=576 callers=0 calls=5
   calls: sub_134f490, sub_1354700, sub_762930, sub_762940, sub_767950
*/
void sub_13e9600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9600ULL || rel >= 0x13e9840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e9840 size=400 callers=0 calls=3
   calls: sub_134f490, sub_1354700, sub_13ea640
*/
void sub_13e9840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9840ULL || rel >= 0x13e99d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e99d0 size=160 callers=0 calls=1
   calls: sub_13518e0
*/
void sub_13e99d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e99d0ULL || rel >= 0x13e9a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e9a70 size=256 callers=0 calls=2
   calls: sub_134f490, sub_13ea840
*/
void sub_13e9a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9a70ULL || rel >= 0x13e9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e9b70 size=272 callers=0 calls=3
   calls: sub_134f3e0, sub_134f490, sub_13ea460
*/
void sub_13e9b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9b70ULL || rel >= 0x13e9c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e9c80 size=272 callers=0 calls=3
   calls: sub_134f3e0, sub_134f490, sub_13ead90
*/
void sub_13e9c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9c80ULL || rel >= 0x13e9d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e9d90 size=288 callers=0 calls=3
   calls: sub_134f490, sub_765e60, sub_767950
*/
void sub_13e9d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9d90ULL || rel >= 0x13e9eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e9eb0 size=288 callers=0 calls=3
   calls: sub_134f490, sub_7669e0, sub_767950
*/
void sub_13e9eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9eb0ULL || rel >= 0x13e9fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013e9fd0 size=448 callers=0 calls=7
   calls: sub_134f3e0, sub_134f490, sub_765de0, sub_7661c0, sub_766220, sub_7664a0, sub_766860
*/
void sub_13e9fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13e9fd0ULL || rel >= 0x13ea190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ea190 size=304 callers=0 calls=2
   calls: sub_134f490, sub_136b5e0
*/
void sub_13ea190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ea190ULL || rel >= 0x13ea2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ea2c0 size=128 callers=0 calls=1
   calls: sub_1379d60
*/
void sub_13ea2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ea2c0ULL || rel >= 0x13ea340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ea340 size=288 callers=1 calls=3
   calls: sub_13eae90, sub_c38350, sub_e9db40
*/
void sub_13ea340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ea340ULL || rel >= 0x13ea460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ea460 size=480 callers=2 calls=1
   calls: sub_763a10
*/
void sub_13ea460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ea460ULL || rel >= 0x13ea640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ea640 size=208 callers=6 calls=3
   calls: sub_765670, sub_765ae0, sub_765b70
*/
void sub_13ea640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ea640ULL || rel >= 0x13ea710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ea710 size=64 callers=1 calls=1
   calls: sub_762930
*/
void sub_13ea710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ea710ULL || rel >= 0x13ea750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ea750 size=240 callers=1 calls=3
   calls: sub_12ffe00, sub_767f20, sub_d63270
*/
void sub_13ea750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ea750ULL || rel >= 0x13ea840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ea840 size=1360 callers=4 calls=23
   calls: sub_12fa1e0, sub_12ff5f0, sub_12ffd80, sub_762930, sub_762940, sub_762d70, sub_763020, sub_763690, sub_765a90, sub_765de0, sub_767540, sub_767600
   ... +11 more
*/
void sub_13ea840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ea840ULL || rel >= 0x13ead90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ead90 size=256 callers=3 calls=0
*/
void sub_13ead90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ead90ULL || rel >= 0x13eae90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eae90 size=496 callers=1 calls=1
   calls: sub_e9d130
*/
void sub_13eae90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eae90ULL || rel >= 0x13eb080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eb080 size=304 callers=1 calls=0
*/
void sub_13eb080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eb080ULL || rel >= 0x13eb1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eb1b0 size=16 callers=1 calls=0
*/
void sub_13eb1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eb1b0ULL || rel >= 0x13eb1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eb1c0 size=672 callers=0 calls=6
   calls: sub_13ecf40, sub_66efd0, sub_d738b0, sub_d754d0, sub_d754f0, trainer_data__03d
*/
void sub_13eb1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eb1c0ULL || rel >= 0x13eb460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eb460 size=576 callers=0 calls=5
   calls: sub_13ecf40, sub_66efd0, sub_d745e0, sub_d754d0, sub_d754f0
*/
void sub_13eb460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eb460ULL || rel >= 0x13eb6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eb6a0 size=208 callers=0 calls=5
   calls: NONE_NONE_3, sub_ce39d0, sub_ce39f0, sub_e889f0, trainer_data__03d
*/
void sub_13eb6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eb6a0ULL || rel >= 0x13eb770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eb770 size=48 callers=0 calls=1
   calls: sub_e88ff0
*/
void sub_13eb770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eb770ULL || rel >= 0x13eb7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eb7a0 size=1056 callers=0 calls=5
   calls: sub_13ecf40, sub_66efd0, sub_d738b0, sub_d754d0, sub_d754f0
*/
void sub_13eb7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eb7a0ULL || rel >= 0x13ebbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ebbc0 size=224 callers=0 calls=1
   calls: sub_66efe0
*/
void sub_13ebbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ebbc0ULL || rel >= 0x13ebca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ebca0 size=224 callers=0 calls=1
   calls: sub_66efe0
*/
void sub_13ebca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ebca0ULL || rel >= 0x13ebd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ebd80 size=144 callers=0 calls=2
   calls: sub_13ece20, sub_13faad0
*/
void sub_13ebd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ebd80ULL || rel >= 0x13ebe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ebe10 size=160 callers=0 calls=4
   calls: sub_1453a90, sub_1453cb0, trainer_data__03d, trainer_type__03d_2
*/
void sub_13ebe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ebe10ULL || rel >= 0x13ebeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ebeb0 size=32 callers=0 calls=0
*/
void sub_13ebeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ebeb0ULL || rel >= 0x13ebed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ebed0 size=176 callers=0 calls=1
   calls: sub_13ed150
*/
void sub_13ebed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ebed0ULL || rel >= 0x13ebf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ebf80 size=208 callers=0 calls=1
   calls: sub_135a880
*/
void sub_13ebf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ebf80ULL || rel >= 0x13ec050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ec050 size=176 callers=0 calls=1
   calls: sub_135ad00
*/
void sub_13ec050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec050ULL || rel >= 0x13ec100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ec100 size=448 callers=0 calls=4
   calls: sub_13ed150, sub_13ed240, sub_caaf10, sub_d281c0
   ref: loc_eff_head
*/
void loc_eff_head(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec100ULL || rel >= 0x13ec2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ec2c0 size=176 callers=0 calls=2
   calls: sub_13ed150, sub_caadc0
*/
void sub_13ec2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec2c0ULL || rel >= 0x13ec370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ec370 size=48 callers=0 calls=1
   calls: sub_cab0c0
*/
void sub_13ec370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec370ULL || rel >= 0x13ec3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ec3a0 size=144 callers=0 calls=2
   calls: sub_13ed150, sub_d5bcb0
*/
void sub_13ec3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec3a0ULL || rel >= 0x13ec430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ec430 size=272 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_13ec430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec430ULL || rel >= 0x13ec540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ec540 size=272 callers=0 calls=1
   calls: sub_13b1c90
*/
void sub_13ec540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec540ULL || rel >= 0x13ec650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ec650 size=240 callers=0 calls=3
   calls: sub_13ed150, sub_13ed240, sub_d5bb20
*/
void sub_13ec650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec650ULL || rel >= 0x13ec740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ec740 size=144 callers=0 calls=2
   calls: sub_13ed150, sub_d5bc60
*/
void sub_13ec740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec740ULL || rel >= 0x13ec7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ec7d0 size=256 callers=0 calls=2
   calls: sub_13ed150, sub_caa7b0
*/
void sub_13ec7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec7d0ULL || rel >= 0x13ec8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ec8d0 size=416 callers=0 calls=2
   calls: sub_13ed330, sub_d36be0
*/
void sub_13ec8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ec8d0ULL || rel >= 0x13eca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eca70 size=112 callers=0 calls=0
*/
void sub_13eca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eca70ULL || rel >= 0x13ecae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ecae0 size=112 callers=0 calls=0
*/
void sub_13ecae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ecae0ULL || rel >= 0x13ecb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ecb50 size=80 callers=0 calls=4
   calls: NONE_NONE_5, sub_ce39d0, sub_ce39f0, sub_e889f0
*/
void sub_13ecb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ecb50ULL || rel >= 0x13ecba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ecba0 size=240 callers=0 calls=2
   calls: sub_66efd0, sub_d74aa0
*/
void sub_13ecba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ecba0ULL || rel >= 0x13ecc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ecc90 size=48 callers=0 calls=1
   calls: sub_787130
*/
void sub_13ecc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ecc90ULL || rel >= 0x13eccc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eccc0 size=144 callers=0 calls=4
   calls: NONE_NONE_6, sub_ce39d0, sub_ce39f0, sub_e889f0
*/
void sub_13eccc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eccc0ULL || rel >= 0x13ecd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ecd50 size=208 callers=0 calls=2
   calls: sub_66efd0, sub_d75500
*/
void sub_13ecd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ecd50ULL || rel >= 0x13ece20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ece20 size=288 callers=1 calls=3
   calls: sub_13ed070, sub_c38350, sub_e9da70
*/
void sub_13ece20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ece20ULL || rel >= 0x13ecf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ecf40 size=304 callers=9 calls=0
*/
void sub_13ecf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ecf40ULL || rel >= 0x13ed070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed070 size=224 callers=2 calls=1
   calls: sub_d71690
*/
void sub_13ed070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed070ULL || rel >= 0x13ed150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed150 size=240 callers=10 calls=1
   calls: sub_13b1c90
*/
void sub_13ed150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed150ULL || rel >= 0x13ed240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed240 size=240 callers=64 calls=1
   calls: sub_13b1c90
*/
void sub_13ed240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed240ULL || rel >= 0x13ed330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed330 size=304 callers=16 calls=1
   calls: sub_967240
*/
void sub_13ed330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed330ULL || rel >= 0x13ed460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed460 size=128 callers=0 calls=0
*/
void sub_13ed460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed460ULL || rel >= 0x13ed4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed4e0 size=16 callers=1 calls=0
*/
void sub_13ed4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed4e0ULL || rel >= 0x13ed4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed4f0 size=272 callers=0 calls=5
   calls: msg_wide_road_username, sub_13f9120, sub_13f9140, sub_13f9150, sub_66efd0
*/
void sub_13ed4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed4f0ULL || rel >= 0x13ed600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed600 size=160 callers=0 calls=2
   calls: sub_13f9120, sub_e3e3c0
*/
void sub_13ed600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed600ULL || rel >= 0x13ed6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed6a0 size=192 callers=0 calls=2
   calls: L_cursor_00_3, sub_13f9120
*/
void sub_13ed6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed6a0ULL || rel >= 0x13ed760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed760 size=304 callers=0 calls=3
   calls: sub_13f9120, sub_140a3f0, sub_66efd0
*/
void sub_13ed760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed760ULL || rel >= 0x13ed890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed890 size=96 callers=0 calls=2
   calls: sub_13f9120, sub_13f9d50
*/
void sub_13ed890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed890ULL || rel >= 0x13ed8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed8f0 size=176 callers=0 calls=2
   calls: sub_1308340, sub_13f9120
*/
void sub_13ed8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed8f0ULL || rel >= 0x13ed9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed9a0 size=80 callers=0 calls=1
   calls: sub_13f9120
*/
void sub_13ed9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed9a0ULL || rel >= 0x13ed9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ed9f0 size=304 callers=0 calls=5
   calls: sub_13f9120, sub_13f9ea0, sub_e3e490, sub_e3e730, sub_e3e9d0
*/
void sub_13ed9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ed9f0ULL || rel >= 0x13edb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013edb20 size=192 callers=0 calls=3
   calls: sub_13ef0a0, sub_13f9120, sub_13f9140
*/
void sub_13edb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13edb20ULL || rel >= 0x13edbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013edbe0 size=848 callers=0 calls=7
   calls: sub_13ef1e0, sub_13f9120, sub_13f9d50, sub_13f9ea0, sub_e3e490, sub_e3e730, sub_e3e9d0
*/
void sub_13edbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13edbe0ULL || rel >= 0x13edf30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013edf30 size=256 callers=0 calls=3
   calls: sub_13ef440, sub_13f9f70, sub_66efd0
*/
void sub_13edf30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13edf30ULL || rel >= 0x13ee030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ee030 size=112 callers=0 calls=1
   calls: sub_e420a0
*/
void sub_13ee030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ee030ULL || rel >= 0x13ee0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ee0a0 size=304 callers=0 calls=2
   calls: sub_1409440, sub_66efd0
*/
void sub_13ee0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ee0a0ULL || rel >= 0x13ee1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ee1d0 size=464 callers=0 calls=3
   calls: sub_13e4b50, sub_66efe0, sub_66f050
*/
void sub_13ee1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ee1d0ULL || rel >= 0x13ee3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ee3a0 size=224 callers=0 calls=2
   calls: sub_1308340, sub_13e4fc0
*/
void sub_13ee3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ee3a0ULL || rel >= 0x13ee480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ee480 size=224 callers=0 calls=1
   calls: sub_13e50b0
*/
void sub_13ee480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ee480ULL || rel >= 0x13ee560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ee560 size=2320 callers=0 calls=33
   calls: bag_pocket, place_name_6, ribbon, seikaku, sub_1052c20, sub_13131d0, sub_13133a0, sub_1313580, sub_1313c10, sub_1313ef0, sub_13149a0, sub_1314b50
   ... +21 more
*/
void sub_13ee560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ee560ULL || rel >= 0x13eee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eee70 size=288 callers=0 calls=1
   calls: sub_1315b90
*/
void sub_13eee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eee70ULL || rel >= 0x13eef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013eef90 size=272 callers=0 calls=1
   calls: sub_1315b90
*/
void sub_13eef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13eef90ULL || rel >= 0x13ef0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef0a0 size=320 callers=1 calls=1
   calls: sub_14066d0
*/
void sub_13ef0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef0a0ULL || rel >= 0x13ef1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef1e0 size=320 callers=1 calls=1
   calls: sub_14066d0
*/
void sub_13ef1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef1e0ULL || rel >= 0x13ef320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef320 size=112 callers=1 calls=1
   calls: sub_784960
*/
void sub_13ef320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef320ULL || rel >= 0x13ef390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef390 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_13ef390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef390ULL || rel >= 0x13ef3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef3e0 size=96 callers=0 calls=0
*/
void sub_13ef3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef3e0ULL || rel >= 0x13ef440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef440 size=352 callers=1 calls=0
*/
void sub_13ef440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef440ULL || rel >= 0x13ef5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef5a0 size=16 callers=0 calls=0
*/
void sub_13ef5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef5a0ULL || rel >= 0x13ef5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef5b0 size=16 callers=0 calls=0
*/
void sub_13ef5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef5b0ULL || rel >= 0x13ef5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef5c0 size=48 callers=0 calls=1
   calls: sub_c70
*/
void sub_13ef5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef5c0ULL || rel >= 0x13ef5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef5f0 size=16 callers=0 calls=0
*/
void sub_13ef5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef5f0ULL || rel >= 0x13ef600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef600 size=16 callers=0 calls=0
*/
void sub_13ef600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef600ULL || rel >= 0x13ef610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef610 size=16 callers=0 calls=0
*/
void sub_13ef610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef610ULL || rel >= 0x13ef620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef620 size=128 callers=0 calls=1
   calls: sub_1308340
*/
void sub_13ef620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef620ULL || rel >= 0x13ef6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef6a0 size=384 callers=4 calls=1
   calls: sub_13a6920
*/
void sub_13ef6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef6a0ULL || rel >= 0x13ef820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef820 size=128 callers=0 calls=0
*/
void sub_13ef820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef820ULL || rel >= 0x13ef8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef8a0 size=16 callers=1 calls=0
*/
void sub_13ef8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef8a0ULL || rel >= 0x13ef8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef8b0 size=224 callers=0 calls=2
   calls: sub_13f67a0, sub_66efd0
*/
void sub_13ef8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef8b0ULL || rel >= 0x13ef990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013ef990 size=2768 callers=0 calls=7
   calls: sub_13a6920, sub_13f6520, sub_13f66b0, sub_13f67a0, sub_5cfaf0, sub_5e7a30, sub_d11430
   ref: _Goal_3_2_3
   ref: wait_trigger
   ref: _Goal_2_2
   ref: _Goal_3_2_1
   ref: _Goal_1_2
   ref: %s%s%02d
   ref: _Goal_3_2_2
*/
void wait_trigger(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13ef990ULL || rel >= 0x13f0460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f0460 size=1120 callers=0 calls=11
   calls: sub_13f6520, sub_13f66b0, sub_13f67a0, sub_13f68d0, sub_5cbcf0, sub_5cfaf0, sub_5e7a30, sub_68d950, sub_68d9f0, sub_794330, sub_c6c5c0
   ref: Play_Prop_Gimmick_a_t0701_g0202_Landbreak
   ref: _Hole_
   ref: crack_trigger
   ref: Play_Prop_Gimmick_a_t0701_g0102_Landbreak
   ref: %s%s%02d
*/
void Play_Prop_Gimmick_a_t0701_g0202_Landbreak(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f0460ULL || rel >= 0x13f08c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f08c0 size=176 callers=0 calls=1
   calls: sub_13f6ad0
*/
void sub_13f08c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f08c0ULL || rel >= 0x13f0970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f0970 size=272 callers=0 calls=2
   calls: sub_13f6ad0, sub_d160d0
*/
void sub_13f0970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f0970ULL || rel >= 0x13f0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f0a80 size=128 callers=0 calls=1
   calls: sub_13a67a0
*/
void sub_13f0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f0a80ULL || rel >= 0x13f0b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f0b00 size=240 callers=0 calls=2
   calls: sub_136c810, sub_13a67a0
*/
void sub_13f0b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f0b00ULL || rel >= 0x13f0bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f0bf0 size=256 callers=0 calls=2
   calls: sub_136c910, sub_13a67a0
*/
void sub_13f0bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f0bf0ULL || rel >= 0x13f0cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f0cf0 size=256 callers=0 calls=2
   calls: sub_136c810, sub_13a67a0
*/
void sub_13f0cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f0cf0ULL || rel >= 0x13f0df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f0df0 size=1392 callers=0 calls=11
   calls: sub_136c740, sub_136c7a0, sub_136c7e0, sub_136c810, sub_137b970, sub_13a67a0, sub_e591a0, sub_e59310, sub_e91740, sub_ead0f0, sub_ead110
*/
void sub_13f0df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f0df0ULL || rel >= 0x13f1360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1360 size=240 callers=0 calls=2
   calls: sub_136c830, sub_13a67a0
*/
void sub_13f1360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1360ULL || rel >= 0x13f1450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1450 size=256 callers=0 calls=2
   calls: sub_136c860, sub_13a67a0
*/
void sub_13f1450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1450ULL || rel >= 0x13f1550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1550 size=112 callers=0 calls=1
   calls: sub_e59180
*/
void sub_13f1550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1550ULL || rel >= 0x13f15c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f15c0 size=32 callers=0 calls=1
   calls: sub_e591a0
*/
void sub_13f15c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f15c0ULL || rel >= 0x13f15e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f15e0 size=144 callers=0 calls=2
   calls: sub_13f6c00, sub_d00dd0
*/
void sub_13f15e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f15e0ULL || rel >= 0x13f1670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1670 size=128 callers=0 calls=1
   calls: sub_13f6c00
*/
void sub_13f1670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1670ULL || rel >= 0x13f16f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f16f0 size=160 callers=0 calls=2
   calls: sub_13f6c00, sub_d00de0
*/
void sub_13f16f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f16f0ULL || rel >= 0x13f1790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1790 size=160 callers=0 calls=2
   calls: sub_13f6c00, sub_d00e00
*/
void sub_13f1790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1790ULL || rel >= 0x13f1830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1830 size=128 callers=0 calls=1
   calls: sub_13f6c00
*/
void sub_13f1830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1830ULL || rel >= 0x13f18b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f18b0 size=208 callers=0 calls=3
   calls: sub_13f6c00, sub_7c19a0, sub_d01750
*/
void sub_13f18b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f18b0ULL || rel >= 0x13f1980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1980 size=128 callers=0 calls=2
   calls: sub_13f6c00, sub_d011d0
*/
void sub_13f1980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1980ULL || rel >= 0x13f1a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1a00 size=208 callers=0 calls=3
   calls: sub_13f6c00, sub_7c19a0, sub_d01720
*/
void sub_13f1a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1a00ULL || rel >= 0x13f1ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1ad0 size=160 callers=0 calls=2
   calls: sub_13f6c00, sub_d01720
*/
void sub_13f1ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1ad0ULL || rel >= 0x13f1b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1b70 size=144 callers=0 calls=2
   calls: sub_13f6c00, sub_d01730
*/
void sub_13f1b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1b70ULL || rel >= 0x13f1c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1c00 size=96 callers=0 calls=2
   calls: sub_66efd0, sub_d7b040
*/
void sub_13f1c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1c00ULL || rel >= 0x13f1c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1c60 size=128 callers=0 calls=2
   calls: sub_13f6c00, sub_d00b50
*/
void sub_13f1c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1c60ULL || rel >= 0x13f1ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1ce0 size=144 callers=0 calls=2
   calls: sub_13f6c00, sub_d01760
*/
void sub_13f1ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1ce0ULL || rel >= 0x13f1d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1d70 size=128 callers=0 calls=2
   calls: Play_Prop_Gimmick_nut_drop, sub_13f6c00
*/
void sub_13f1d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1d70ULL || rel >= 0x13f1df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1df0 size=128 callers=0 calls=2
   calls: sub_13f6c00, sub_d018e0
*/
void sub_13f1df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1df0ULL || rel >= 0x13f1e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1e70 size=128 callers=0 calls=2
   calls: sub_13f6c00, sub_d01950
*/
void sub_13f1e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1e70ULL || rel >= 0x13f1ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1ef0 size=128 callers=0 calls=2
   calls: sub_13f6c00, sub_d01970
*/
void sub_13f1ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1ef0ULL || rel >= 0x13f1f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1f70 size=128 callers=0 calls=2
   calls: sub_13f6c00, sub_d019c0
*/
void sub_13f1f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1f70ULL || rel >= 0x13f1ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f1ff0 size=384 callers=0 calls=4
   calls: sub_13f6c00, sub_990590, sub_d20d30, sub_d25bd0
*/
void sub_13f1ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f1ff0ULL || rel >= 0x13f2170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f2170 size=32 callers=0 calls=1
   calls: MutePM_at_Recovering
*/
void sub_13f2170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f2170ULL || rel >= 0x13f2190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f2190 size=80 callers=0 calls=2
   calls: sub_66efd0, sub_d9cd00
*/
void sub_13f2190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f2190ULL || rel >= 0x13f21e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f21e0 size=224 callers=0 calls=2
   calls: sub_13f6d80, sub_d05a80
*/
void sub_13f21e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f21e0ULL || rel >= 0x13f22c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f22c0 size=240 callers=0 calls=2
   calls: sub_13f6d80, sub_d05a80
*/
void sub_13f22c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f22c0ULL || rel >= 0x13f23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f23b0 size=240 callers=0 calls=2
   calls: sub_13f6d80, sub_d05a80
*/
void sub_13f23b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f23b0ULL || rel >= 0x13f24a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f24a0 size=256 callers=0 calls=2
   calls: sub_13f6d80, sub_d05bc0
*/
void sub_13f24a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f24a0ULL || rel >= 0x13f25a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f25a0 size=432 callers=0 calls=3
   calls: sub_66efd0, sub_d6efc0, sub_dea850
*/
void sub_13f25a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f25a0ULL || rel >= 0x13f2750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f2750 size=1520 callers=0 calls=10
   calls: sub_134f3a0, sub_144f170, sub_66efd0, sub_762fd0, sub_767680, sub_76f550, sub_76f6c0, sub_d9a080, sub_dea850, sub_dea980
*/
void sub_13f2750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f2750ULL || rel >= 0x13f2d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f2d40 size=208 callers=0 calls=3
   calls: sub_135a760, sub_66efd0, sub_eecbc0
*/
void sub_13f2d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f2d40ULL || rel >= 0x13f2e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f2e10 size=144 callers=0 calls=1
   calls: sub_134a6d0
*/
void sub_13f2e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f2e10ULL || rel >= 0x13f2ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f2ea0 size=576 callers=0 calls=3
   calls: sub_134a830, sub_134f490, sub_1350770
*/
void sub_13f2ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f2ea0ULL || rel >= 0x13f30e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f30e0 size=416 callers=0 calls=4
   calls: sub_134a700, sub_134a8f0, sub_13f6eb0, sub_66efd0
*/
void sub_13f30e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f30e0ULL || rel >= 0x13f3280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f3280 size=336 callers=0 calls=2
   calls: sub_1313580, sub_134a700
*/
void sub_13f3280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f3280ULL || rel >= 0x13f33d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f33d0 size=384 callers=0 calls=5
   calls: sub_1313580, sub_1315b90, sub_134a700, sub_764b40, sub_7670a0
*/
void sub_13f33d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f33d0ULL || rel >= 0x13f3550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f3550 size=176 callers=0 calls=1
   calls: sub_134a960
*/
void sub_13f3550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f3550ULL || rel >= 0x13f3600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f3600 size=176 callers=0 calls=1
   calls: sub_134a9d0
*/
void sub_13f3600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f3600ULL || rel >= 0x13f36b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f36b0 size=160 callers=0 calls=1
   calls: sub_134ad20
*/
void sub_13f36b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f36b0ULL || rel >= 0x13f3750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f3750 size=144 callers=0 calls=1
   calls: sub_134aa40
*/
void sub_13f3750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f3750ULL || rel >= 0x13f37e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f37e0 size=400 callers=0 calls=4
   calls: sub_13000b0, sub_134ae00, sub_13f6eb0, sub_66efd0
*/
void sub_13f37e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f37e0ULL || rel >= 0x13f3970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f3970 size=128 callers=0 calls=1
   calls: sub_134b0b0
*/
void sub_13f3970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f3970ULL || rel >= 0x13f39f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f39f0 size=272 callers=0 calls=2
   calls: sub_1405c70, sub_66efd0
*/
void sub_13f39f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f39f0ULL || rel >= 0x13f3b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f3b00 size=64 callers=0 calls=1
   calls: sub_13f5f20
*/
void sub_13f3b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f3b00ULL || rel >= 0x13f3b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f3b40 size=432 callers=0 calls=3
   calls: sub_134f3e0, sub_134f490, sub_762890
*/
void sub_13f3b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f3b40ULL || rel >= 0x13f3cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f3cf0 size=128 callers=0 calls=1
   calls: sub_1370690
*/
void sub_13f3cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f3cf0ULL || rel >= 0x13f3d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f3d70 size=256 callers=0 calls=3
   calls: sub_143eb70, sub_66efd0, sub_66efe0
*/
void sub_13f3d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f3d70ULL || rel >= 0x13f3e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f3e70 size=480 callers=0 calls=3
   calls: sub_13b1210, sub_13f6fc0, sub_66efd0
*/
void sub_13f3e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f3e70ULL || rel >= 0x13f4050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4050 size=144 callers=0 calls=3
   calls: sub_13b1210, sub_13f6040, sub_5cfaf0
*/
void sub_13f4050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4050ULL || rel >= 0x13f40e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f40e0 size=144 callers=0 calls=3
   calls: sub_13b1210, sub_13f6040, sub_5cfaf0
*/
void sub_13f40e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f40e0ULL || rel >= 0x13f4170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4170 size=144 callers=0 calls=3
   calls: sub_13b1210, sub_13f6040, sub_5cfaf0
*/
void sub_13f4170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4170ULL || rel >= 0x13f4200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4200 size=64 callers=0 calls=2
   calls: sub_66efd0, sub_d720e0
*/
void sub_13f4200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4200ULL || rel >= 0x13f4240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4240 size=64 callers=0 calls=2
   calls: sub_66efd0, sub_d720e0
*/
void sub_13f4240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4240ULL || rel >= 0x13f4280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4280 size=592 callers=0 calls=2
   calls: sub_1345ca0, sub_1345cb0
*/
void sub_13f4280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4280ULL || rel >= 0x13f44d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f44d0 size=288 callers=0 calls=2
   calls: sub_1409d40, sub_66efd0
*/
void sub_13f44d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f44d0ULL || rel >= 0x13f45f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f45f0 size=128 callers=0 calls=1
   calls: sub_1345bf0
*/
void sub_13f45f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f45f0ULL || rel >= 0x13f4670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4670 size=144 callers=0 calls=1
   calls: sub_1345bd0
*/
void sub_13f4670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4670ULL || rel >= 0x13f4700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4700 size=80 callers=0 calls=2
   calls: sub_66efd0, sub_dcbe80
*/
void sub_13f4700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4700ULL || rel >= 0x13f4750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4750 size=240 callers=0 calls=1
   calls: sub_dcd0d0
*/
void sub_13f4750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4750ULL || rel >= 0x13f4840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4840 size=32 callers=0 calls=1
   calls: sub_dcd370
*/
void sub_13f4840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4840ULL || rel >= 0x13f4860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4860 size=32 callers=0 calls=2
   calls: sub_dcd370, sub_dcd3f0
*/
void sub_13f4860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4860ULL || rel >= 0x13f4880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4880 size=64 callers=0 calls=1
   calls: sub_dcd4f0
*/
void sub_13f4880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4880ULL || rel >= 0x13f48c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f48c0 size=64 callers=0 calls=1
   calls: sub_dcd5d0
*/
void sub_13f48c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f48c0ULL || rel >= 0x13f4900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4900 size=560 callers=0 calls=4
   calls: sub_135a4b0, sub_13a6920, sub_cec710, sub_d25bd0
*/
void sub_13f4900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4900ULL || rel >= 0x13f4b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4b30 size=352 callers=0 calls=5
   calls: sub_136b780, sub_b4c060, sub_b6fb50, sub_b98390, sub_d25bd0
*/
void sub_13f4b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4b30ULL || rel >= 0x13f4c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4c90 size=128 callers=0 calls=2
   calls: sub_136b780, sub_b6fb40
*/
void sub_13f4c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4c90ULL || rel >= 0x13f4d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4d10 size=464 callers=0 calls=7
   calls: sub_12fa580, sub_12fac60, sub_12fad80, sub_12faeb0, sub_12fafe0, sub_13b1210, sub_5cfaf0
*/
void sub_13f4d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4d10ULL || rel >= 0x13f4ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f4ee0 size=864 callers=0 calls=8
   calls: sub_12fa580, sub_12fac60, sub_12fad80, sub_12faeb0, sub_12fafe0, sub_134f490, sub_13b1210, sub_5cfaf0
*/
void sub_13f4ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f4ee0ULL || rel >= 0x13f5240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5240 size=352 callers=0 calls=3
   calls: sub_13f6370, sub_13f7100, sub_66efd0
*/
void sub_13f5240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5240ULL || rel >= 0x13f53a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f53a0 size=112 callers=0 calls=2
   calls: is_force_overwrite_2, sub_13f6370
*/
void sub_13f53a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f53a0ULL || rel >= 0x13f5410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5410 size=96 callers=0 calls=1
   calls: sub_13f6370
*/
void sub_13f5410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5410ULL || rel >= 0x13f5470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5470 size=288 callers=0 calls=4
   calls: sub_13a6b50, sub_13b1370, sub_13ef6a0, sub_d572b0
*/
void sub_13f5470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5470ULL || rel >= 0x13f5590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5590 size=128 callers=0 calls=1
   calls: sub_136b850
*/
void sub_13f5590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5590ULL || rel >= 0x13f5610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5610 size=128 callers=0 calls=1
   calls: sub_136b840
*/
void sub_13f5610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5610ULL || rel >= 0x13f5690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5690 size=320 callers=0 calls=4
   calls: sub_136b780, sub_66efd0, sub_eef900, sub_ef0540
*/
void sub_13f5690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5690ULL || rel >= 0x13f57d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f57d0 size=128 callers=0 calls=2
   calls: sub_136b780, sub_c219c0
*/
void sub_13f57d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f57d0ULL || rel >= 0x13f5850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5850 size=624 callers=0 calls=3
   calls: sub_1345ca0, sub_1345cb0, sub_14be490
*/
void sub_13f5850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5850ULL || rel >= 0x13f5ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5ac0 size=160 callers=0 calls=4
   calls: sub_135a2d0, sub_135a3c0, sub_e4c350, sub_e4c3c0
*/
void sub_13f5ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5ac0ULL || rel >= 0x13f5b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5b60 size=128 callers=0 calls=1
   calls: sub_13ef6a0
*/
void sub_13f5b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5b60ULL || rel >= 0x13f5be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5be0 size=368 callers=0 calls=5
   calls: sub_1357dd0, sub_767950, sub_769040, sub_769050, sub_7847d0
*/
void sub_13f5be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5be0ULL || rel >= 0x13f5d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5d50 size=48 callers=0 calls=2
   calls: sub_66efd0, sub_d6cb90
*/
void sub_13f5d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5d50ULL || rel >= 0x13f5d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5d80 size=352 callers=0 calls=3
   calls: sub_13f7220, sub_13f7420, sub_66efd0
*/
void sub_13f5d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5d80ULL || rel >= 0x13f5ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5ee0 size=32 callers=0 calls=1
   calls: sub_1376830
*/
void sub_13f5ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5ee0ULL || rel >= 0x13f5f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5f00 size=16 callers=0 calls=0
*/
void sub_13f5f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5f00ULL || rel >= 0x13f5f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5f10 size=16 callers=0 calls=0
*/
void sub_13f5f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5f10ULL || rel >= 0x13f5f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f5f20 size=288 callers=1 calls=1
   calls: sub_1403910
*/
void sub_13f5f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f5f20ULL || rel >= 0x13f6040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f6040 size=336 callers=3 calls=2
   calls: sub_13a6920, sub_13f6190
*/
void sub_13f6040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f6040ULL || rel >= 0x13f6190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f6190 size=480 callers=2 calls=4
   calls: sub_13a6920, sub_618c60, sub_618cb0, sub_619640
*/
void sub_13f6190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f6190ULL || rel >= 0x13f6370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f6370 size=432 callers=3 calls=2
   calls: sub_134f490, sub_763380
*/
void sub_13f6370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f6370ULL || rel >= 0x13f6520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f6520 size=400 callers=14 calls=1
   calls: sub_1c0
*/
void sub_13f6520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f6520ULL || rel >= 0x13f66b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f66b0 size=240 callers=51 calls=1
   calls: sub_13a6920
*/
void sub_13f66b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f66b0ULL || rel >= 0x13f67a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f67a0 size=304 callers=16 calls=1
   calls: sub_967240
*/
void sub_13f67a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f67a0ULL || rel >= 0x13f68d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f68d0 size=512 callers=25 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_619640
*/
void sub_13f68d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f68d0ULL || rel >= 0x13f6ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f6ad0 size=304 callers=2 calls=1
   calls: sub_13a6920
*/
void sub_13f6ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f6ad0ULL || rel >= 0x13f6c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f6c00 size=384 callers=18 calls=1
   calls: sub_13a6920
*/
void sub_13f6c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f6c00ULL || rel >= 0x13f6d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f6d80 size=304 callers=4 calls=1
   calls: sub_967240
*/
void sub_13f6d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f6d80ULL || rel >= 0x13f6eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f6eb0 size=272 callers=2 calls=1
   calls: sub_140a7e0
*/
void sub_13f6eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f6eb0ULL || rel >= 0x13f6fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f6fc0 size=320 callers=1 calls=2
   calls: sub_1404430, sub_5cfaf0
*/
void sub_13f6fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f6fc0ULL || rel >= 0x13f7100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7100 size=288 callers=1 calls=1
   calls: sub_1407af0
*/
void sub_13f7100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7100ULL || rel >= 0x13f7220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7220 size=464 callers=1 calls=0
*/
void sub_13f7220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7220ULL || rel >= 0x13f73f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f73f0 size=16 callers=0 calls=0
*/
void sub_13f73f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f73f0ULL || rel >= 0x13f7400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7400 size=16 callers=0 calls=0
*/
void sub_13f7400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7400ULL || rel >= 0x13f7410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7410 size=16 callers=0 calls=0
*/
void sub_13f7410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7410ULL || rel >= 0x13f7420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7420 size=256 callers=1 calls=1
   calls: sub_14087a0
*/
void sub_13f7420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7420ULL || rel >= 0x13f7520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7520 size=128 callers=0 calls=0
*/
void sub_13f7520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7520ULL || rel >= 0x13f75a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f75a0 size=448 callers=3 calls=4
   calls: sub_13a2e70, sub_13f7760, sub_13fae80, sub_65d700
*/
void sub_13f75a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f75a0ULL || rel >= 0x13f7760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7760 size=432 callers=1 calls=0
*/
void sub_13f7760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7760ULL || rel >= 0x13f7910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7910 size=1056 callers=0 calls=4
   calls: sub_13a2f60, sub_13e39a0, sub_13fb840, sub_793de0
*/
void sub_13f7910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7910ULL || rel >= 0x13f7d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7d30 size=16 callers=0 calls=0
*/
void sub_13f7d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7d30ULL || rel >= 0x13f7d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 013f7d40 size=16 callers=0 calls=0
*/
void sub_13f7d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x13f7d40ULL || rel >= 0x13f7d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

