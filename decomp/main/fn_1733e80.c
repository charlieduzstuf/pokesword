/* main functions 01733e80..01749fb0 (199 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 01733e80 size=16 callers=20 calls=0
*/
void sub_1733e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1733e80ULL || rel >= 0x1733e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01733e90 size=48 callers=1 calls=1
   calls: sub_165ba50
*/
void sub_1733e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1733e90ULL || rel >= 0x1733ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01733ec0 size=16 callers=0 calls=0
*/
void sub_1733ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1733ec0ULL || rel >= 0x1733ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01733ed0 size=48 callers=0 calls=1
   calls: sub_165baa0
*/
void sub_1733ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1733ed0ULL || rel >= 0x1733f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01733f00 size=224 callers=3 calls=1
   calls: sub_165e060
   ref: SessionStatusCheckJob::CheckSessionStatus4JointSession
   ref: SessionStatusCheckJob::CheckSessionStatus
*/
void SessionStatusCheckJob_CheckSessionStatus(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1733f00ULL || rel >= 0x1733fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01733fe0 size=1728 callers=1 calls=9
   calls: sub_165e060, sub_165e140, sub_16a77c0, sub_16a7830, sub_172bd80, sub_172c070, sub_172c670, sub_172ca40, sub_172d090
*/
void sub_1733fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1733fe0ULL || rel >= 0x17346a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017346a0 size=1040 callers=1 calls=7
   calls: sub_165e060, sub_165e140, sub_16a77c0, sub_16a7830, sub_172bd80, sub_172c670, sub_172ca40
*/
void sub_17346a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17346a0ULL || rel >= 0x1734ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01734ab0 size=64 callers=4 calls=0
*/
void sub_1734ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1734ab0ULL || rel >= 0x1734af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01734af0 size=16 callers=0 calls=0
*/
void sub_1734af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1734af0ULL || rel >= 0x1734b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01734b00 size=96 callers=1 calls=1
   calls: sub_16580b0
*/
void sub_1734b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1734b00ULL || rel >= 0x1734b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01734b60 size=176 callers=0 calls=4
   calls: sub_16580b0, sub_16580f0, sub_1716390, sub_17163e0
*/
void sub_1734b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1734b60ULL || rel >= 0x1734c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01734c10 size=176 callers=0 calls=4
   calls: sub_16580b0, sub_16580f0, sub_1716390, sub_17163e0
*/
void sub_1734c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1734c10ULL || rel >= 0x1734cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01734cc0 size=416 callers=1 calls=4
   calls: sub_1652bd0, sub_16580c0, sub_165e060, sub_17162d0
*/
void sub_1734cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1734cc0ULL || rel >= 0x1734e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01734e60 size=112 callers=1 calls=1
   calls: sub_16580f0
*/
void sub_1734e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1734e60ULL || rel >= 0x1734ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01734ed0 size=256 callers=1 calls=3
   calls: sub_16580c0, sub_16581f0, sub_165e060
*/
void sub_1734ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1734ed0ULL || rel >= 0x1734fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01734fd0 size=208 callers=4 calls=3
   calls: sub_16580f0, sub_1658120, sub_165e060
*/
void sub_1734fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1734fd0ULL || rel >= 0x17350a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017350a0 size=64 callers=1 calls=0
*/
void sub_17350a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17350a0ULL || rel >= 0x17350e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017350e0 size=48 callers=1 calls=0
*/
void sub_17350e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17350e0ULL || rel >= 0x1735110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735110 size=64 callers=8 calls=0
*/
void sub_1735110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735110ULL || rel >= 0x1735150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735150 size=208 callers=1 calls=0
*/
void sub_1735150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735150ULL || rel >= 0x1735220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735220 size=64 callers=2 calls=0
*/
void sub_1735220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735220ULL || rel >= 0x1735260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735260 size=48 callers=1 calls=0
*/
void sub_1735260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735260ULL || rel >= 0x1735290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735290 size=64 callers=5 calls=0
*/
void sub_1735290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735290ULL || rel >= 0x17352d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017352d0 size=128 callers=3 calls=0
*/
void sub_17352d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17352d0ULL || rel >= 0x1735350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735350 size=80 callers=39 calls=0
*/
void sub_1735350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735350ULL || rel >= 0x17353a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017353a0 size=80 callers=6 calls=0
*/
void sub_17353a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17353a0ULL || rel >= 0x17353f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017353f0 size=80 callers=3 calls=0
*/
void sub_17353f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17353f0ULL || rel >= 0x1735440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735440 size=48 callers=7 calls=0
*/
void sub_1735440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735440ULL || rel >= 0x1735470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735470 size=80 callers=3 calls=0
*/
void sub_1735470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735470ULL || rel >= 0x17354c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017354c0 size=80 callers=1 calls=0
*/
void sub_17354c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17354c0ULL || rel >= 0x1735510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735510 size=48 callers=1 calls=0
*/
void sub_1735510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735510ULL || rel >= 0x1735540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735540 size=80 callers=5 calls=0
*/
void sub_1735540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735540ULL || rel >= 0x1735590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735590 size=64 callers=6 calls=0
*/
void sub_1735590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735590ULL || rel >= 0x17355d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017355d0 size=48 callers=5 calls=0
*/
void sub_17355d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17355d0ULL || rel >= 0x1735600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735600 size=64 callers=1 calls=0
*/
void sub_1735600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735600ULL || rel >= 0x1735640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735640 size=80 callers=6 calls=0
*/
void sub_1735640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735640ULL || rel >= 0x1735690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735690 size=432 callers=7 calls=2
   calls: sub_172c3e0, sub_172c450
*/
void sub_1735690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735690ULL || rel >= 0x1735840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735840 size=336 callers=15 calls=4
   calls: sub_16a8390, sub_16c16d0, sub_172abd0, sub_174de50
*/
void sub_1735840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735840ULL || rel >= 0x1735990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735990 size=144 callers=0 calls=0
*/
void sub_1735990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735990ULL || rel >= 0x1735a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735a20 size=80 callers=23 calls=0
*/
void sub_1735a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735a20ULL || rel >= 0x1735a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735a70 size=64 callers=1 calls=0
*/
void sub_1735a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735a70ULL || rel >= 0x1735ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735ab0 size=80 callers=1 calls=0
*/
void sub_1735ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735ab0ULL || rel >= 0x1735b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735b00 size=64 callers=2 calls=0
*/
void sub_1735b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735b00ULL || rel >= 0x1735b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735b40 size=80 callers=1 calls=0
*/
void sub_1735b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735b40ULL || rel >= 0x1735b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735b90 size=64 callers=1 calls=0
*/
void sub_1735b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735b90ULL || rel >= 0x1735bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735bd0 size=256 callers=1 calls=0
*/
void sub_1735bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735bd0ULL || rel >= 0x1735cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735cd0 size=112 callers=3 calls=0
*/
void sub_1735cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735cd0ULL || rel >= 0x1735d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735d40 size=16 callers=5 calls=0
*/
void sub_1735d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735d40ULL || rel >= 0x1735d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735d50 size=32 callers=2 calls=0
*/
void sub_1735d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735d50ULL || rel >= 0x1735d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735d70 size=16 callers=2 calls=0
*/
void sub_1735d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735d70ULL || rel >= 0x1735d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735d80 size=16 callers=0 calls=0
*/
void sub_1735d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735d80ULL || rel >= 0x1735d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735d90 size=32 callers=0 calls=0
*/
void sub_1735d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735d90ULL || rel >= 0x1735db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735db0 size=16 callers=0 calls=0
*/
void sub_1735db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735db0ULL || rel >= 0x1735dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735dc0 size=16 callers=0 calls=0
*/
void sub_1735dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735dc0ULL || rel >= 0x1735dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735dd0 size=16 callers=0 calls=0
*/
void sub_1735dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735dd0ULL || rel >= 0x1735de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735de0 size=16 callers=0 calls=0
*/
void sub_1735de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735de0ULL || rel >= 0x1735df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735df0 size=64 callers=3 calls=1
   calls: sub_165ba50
*/
void sub_1735df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735df0ULL || rel >= 0x1735e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735e30 size=64 callers=3 calls=1
   calls: sub_1655170
*/
void sub_1735e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735e30ULL || rel >= 0x1735e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735e70 size=16 callers=0 calls=0
*/
void sub_1735e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735e70ULL || rel >= 0x1735e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735e80 size=304 callers=1 calls=2
   calls: sub_1655190, sub_165e060
*/
void sub_1735e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735e80ULL || rel >= 0x1735fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01735fb0 size=128 callers=0 calls=2
   calls: sub_16551b0, sub_165e060
*/
void sub_1735fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1735fb0ULL || rel >= 0x1736030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736030 size=96 callers=3 calls=2
   calls: sub_1655110, sub_1655290
*/
void sub_1736030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736030ULL || rel >= 0x1736090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736090 size=16 callers=0 calls=0
*/
void sub_1736090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736090ULL || rel >= 0x17360a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017360a0 size=16 callers=0 calls=0
*/
void sub_17360a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17360a0ULL || rel >= 0x17360b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017360b0 size=16 callers=0 calls=0
*/
void sub_17360b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17360b0ULL || rel >= 0x17360c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017360c0 size=16 callers=1 calls=0
*/
void sub_17360c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17360c0ULL || rel >= 0x17360d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017360d0 size=16 callers=1 calls=0
*/
void sub_17360d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17360d0ULL || rel >= 0x17360e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017360e0 size=16 callers=1 calls=0
*/
void sub_17360e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17360e0ULL || rel >= 0x17360f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017360f0 size=224 callers=1 calls=5
   calls: SDK_MW_Nintendo_PiaTransport_5_18_0, sub_16524a0, sub_1652a90, sub_165dee0, sub_165e060
   ref: pia transport heap
*/
void pia_transport_heap(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17360f0ULL || rel >= 0x17361d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017361d0 size=176 callers=0 calls=5
   calls: sub_1652b20, sub_165dfb0, sub_165e140, sub_1736280, sub_174d230
*/
void sub_17361d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17361d0ULL || rel >= 0x1736280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736280 size=176 callers=2 calls=3
   calls: sub_1652b90, sub_1652c30, sub_165e060
*/
void sub_1736280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736280ULL || rel >= 0x1736330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736330 size=176 callers=1 calls=2
   calls: sub_1652bf0, sub_165e060
*/
void sub_1736330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736330ULL || rel >= 0x17363e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017363e0 size=16 callers=1 calls=0
*/
void sub_17363e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17363e0ULL || rel >= 0x17363f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017363f0 size=16 callers=2 calls=0
*/
void sub_17363f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17363f0ULL || rel >= 0x1736400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736400 size=256 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1736400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736400ULL || rel >= 0x1736500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736500 size=160 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1736500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736500ULL || rel >= 0x17365a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017365a0 size=96 callers=1 calls=2
   calls: sub_165fb30, sub_173cf60
*/
void sub_17365a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17365a0ULL || rel >= 0x1736600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736600 size=80 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_1736600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736600ULL || rel >= 0x1736650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736650 size=80 callers=0 calls=2
   calls: sub_1652d30, sub_173cfa0
*/
void sub_1736650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736650ULL || rel >= 0x17366a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017366a0 size=336 callers=1 calls=4
   calls: sub_1652bd0, sub_165e060, sub_165fb70, sub_17162d0
*/
void sub_17366a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17366a0ULL || rel >= 0x17367f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017367f0 size=80 callers=1 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_17367f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17367f0ULL || rel >= 0x1736840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736840 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1736840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736840ULL || rel >= 0x17368a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017368a0 size=16 callers=0 calls=0
*/
void sub_17368a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17368a0ULL || rel >= 0x17368b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017368b0 size=256 callers=0 calls=2
   calls: sub_1652f90, sub_174de50
*/
void sub_17368b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17368b0ULL || rel >= 0x17369b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017369b0 size=432 callers=1 calls=3
   calls: sub_1652f90, sub_165e060, sub_174de50
*/
void sub_17369b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17369b0ULL || rel >= 0x1736b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736b60 size=144 callers=1 calls=1
   calls: sub_165fb70
*/
void sub_1736b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736b60ULL || rel >= 0x1736bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736bf0 size=240 callers=2 calls=1
   calls: sub_165e060
*/
void sub_1736bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736bf0ULL || rel >= 0x1736ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736ce0 size=64 callers=2 calls=0
*/
void sub_1736ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736ce0ULL || rel >= 0x1736d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736d20 size=32 callers=4 calls=0
*/
void sub_1736d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736d20ULL || rel >= 0x1736d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736d40 size=48 callers=1 calls=0
*/
void sub_1736d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736d40ULL || rel >= 0x1736d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736d70 size=32 callers=1 calls=0
*/
void sub_1736d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736d70ULL || rel >= 0x1736d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736d90 size=144 callers=0 calls=3
   calls: sub_165e060, sub_1736e20, sub_1737360
*/
void sub_1736d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736d90ULL || rel >= 0x1736e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01736e20 size=1344 callers=1 calls=5
   calls: sub_165c600, sub_165c6b0, sub_165e060, sub_1737a50, sub_1737bc0
*/
void sub_1736e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1736e20ULL || rel >= 0x1737360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737360 size=944 callers=1 calls=11
   calls: sub_1652f90, sub_165e140, sub_165fd40, sub_165fd50, sub_1736500, sub_1737710, sub_1737860, sub_173ab40, sub_173ab60, sub_174de50, sub_174de70
*/
void sub_1737360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737360ULL || rel >= 0x1737710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737710 size=336 callers=2 calls=2
   calls: sub_165c600, sub_165c6b0
*/
void sub_1737710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737710ULL || rel >= 0x1737860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737860 size=496 callers=2 calls=4
   calls: sub_165c600, sub_165c6b0, sub_165fb70, sub_1736bf0
*/
void sub_1737860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737860ULL || rel >= 0x1737a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737a50 size=368 callers=4 calls=5
   calls: sub_1652f90, sub_165e060, sub_1736400, sub_1737bc0, sub_174de50
*/
void sub_1737a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737a50ULL || rel >= 0x1737bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737bc0 size=272 callers=4 calls=4
   calls: sub_165e060, sub_173caa0, sub_173ef10, sub_174de50
*/
void sub_1737bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737bc0ULL || rel >= 0x1737cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737cd0 size=384 callers=0 calls=3
   calls: sub_165e060, sub_165fb70, sub_174de50
*/
void sub_1737cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737cd0ULL || rel >= 0x1737e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737e50 size=16 callers=0 calls=0
*/
void sub_1737e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737e50ULL || rel >= 0x1737e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737e60 size=16 callers=0 calls=0
*/
void sub_1737e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737e60ULL || rel >= 0x1737e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737e70 size=16 callers=0 calls=0
*/
void sub_1737e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737e70ULL || rel >= 0x1737e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737e80 size=16 callers=0 calls=0
*/
void sub_1737e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737e80ULL || rel >= 0x1737e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737e90 size=128 callers=2 calls=3
   calls: ReliableProtocol_send_buffer_num, sub_165d8e0, sub_165d9b0
   ref: BroadcastReliableProtocol receive buffer num
   ref: BroadcastReliableProtocol send buffer num
*/
void BroadcastReliableProtocol_send_buffer_num(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737e90ULL || rel >= 0x1737f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737f10 size=96 callers=0 calls=1
   calls: sub_1716390
*/
void sub_1737f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737f10ULL || rel >= 0x1737f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737f70 size=80 callers=2 calls=1
   calls: sub_1716390
*/
void sub_1737f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737f70ULL || rel >= 0x1737fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01737fc0 size=112 callers=0 calls=2
   calls: sub_1716390, sub_17426c0
*/
void sub_1737fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1737fc0ULL || rel >= 0x1738030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738030 size=352 callers=2 calls=5
   calls: sub_1652bd0, sub_165e060, sub_17162d0, sub_1716390, sub_1738de0
*/
void sub_1738030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738030ULL || rel >= 0x1738190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738190 size=320 callers=0 calls=3
   calls: sub_165e060, sub_173d040, sub_1743f20
*/
void sub_1738190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738190ULL || rel >= 0x17382d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017382d0 size=80 callers=0 calls=1
   calls: sub_1744090
*/
void sub_17382d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17382d0ULL || rel >= 0x1738320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738320 size=288 callers=0 calls=5
   calls: sub_165e060, sub_173d270, sub_17440f0, sub_1744290, sub_174de50
*/
void sub_1738320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738320ULL || rel >= 0x1738440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738440 size=368 callers=0 calls=5
   calls: sub_165d8e0, sub_165da20, sub_165e060, sub_1746a10, sub_1746bd0
*/
void sub_1738440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738440ULL || rel >= 0x17385b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017385b0 size=352 callers=1 calls=5
   calls: sub_165d8e0, sub_165da20, sub_165e060, sub_1746570, sub_1746bd0
*/
void sub_17385b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17385b0ULL || rel >= 0x1738710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738710 size=624 callers=0 calls=5
   calls: sub_165d8e0, sub_165da20, sub_165e060, sub_1739430, sub_1746020
*/
void sub_1738710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738710ULL || rel >= 0x1738980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738980 size=80 callers=1 calls=0
*/
void sub_1738980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738980ULL || rel >= 0x17389d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017389d0 size=96 callers=0 calls=0
*/
void sub_17389d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17389d0ULL || rel >= 0x1738a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738a30 size=96 callers=0 calls=0
*/
void sub_1738a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738a30ULL || rel >= 0x1738a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738a90 size=16 callers=0 calls=0
*/
void sub_1738a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738a90ULL || rel >= 0x1738aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738aa0 size=624 callers=0 calls=6
   calls: sub_165d8e0, sub_165da20, sub_173ab40, sub_173ab60, sub_1744770, sub_174de70
*/
void sub_1738aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738aa0ULL || rel >= 0x1738d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738d10 size=80 callers=0 calls=1
   calls: sub_1745350
*/
void sub_1738d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738d10ULL || rel >= 0x1738d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738d60 size=112 callers=0 calls=0
*/
void sub_1738d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738d60ULL || rel >= 0x1738dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738dd0 size=16 callers=0 calls=0
*/
void sub_1738dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738dd0ULL || rel >= 0x1738de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738de0 size=64 callers=1 calls=1
   calls: sub_1743960
*/
void sub_1738de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738de0ULL || rel >= 0x1738e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738e20 size=64 callers=0 calls=1
   calls: sub_17392a0
*/
void sub_1738e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738e20ULL || rel >= 0x1738e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738e60 size=64 callers=0 calls=2
   calls: sub_17392a0, sub_1743bf0
*/
void sub_1738e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738e60ULL || rel >= 0x1738ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01738ea0 size=448 callers=0 calls=7
   calls: sub_165e060, sub_165e140, sub_1716390, sub_17163e0, sub_1739060, sub_17391b0, sub_174e350
*/
void sub_1738ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1738ea0ULL || rel >= 0x1739060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739060 size=336 callers=2 calls=3
   calls: sub_1652bd0, sub_165e060, sub_17162d0
*/
void sub_1739060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739060ULL || rel >= 0x17391b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017391b0 size=240 callers=2 calls=3
   calls: sub_1652bd0, sub_165e060, sub_17162d0
*/
void sub_17391b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17391b0ULL || rel >= 0x17392a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017392a0 size=144 callers=2 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_17392a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17392a0ULL || rel >= 0x1739330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739330 size=144 callers=0 calls=1
   calls: sub_1743f00
*/
void sub_1739330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739330ULL || rel >= 0x17393c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017393c0 size=112 callers=0 calls=1
   calls: sub_1743f00
*/
void sub_17393c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17393c0ULL || rel >= 0x1739430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739430 size=32 callers=2 calls=0
*/
void sub_1739430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739430ULL || rel >= 0x1739450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739450 size=96 callers=0 calls=0
*/
void sub_1739450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739450ULL || rel >= 0x17394b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017394b0 size=416 callers=0 calls=2
   calls: sub_1746d40, sub_174e350
*/
void sub_17394b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17394b0ULL || rel >= 0x1739650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739650 size=144 callers=0 calls=2
   calls: sub_165c600, sub_1746d90
*/
void sub_1739650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739650ULL || rel >= 0x17396e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017396e0 size=128 callers=0 calls=1
   calls: sub_174e350
*/
void sub_17396e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17396e0ULL || rel >= 0x1739760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739760 size=16 callers=0 calls=0
*/
void sub_1739760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739760ULL || rel >= 0x1739770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739770 size=16 callers=0 calls=0
*/
void sub_1739770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739770ULL || rel >= 0x1739780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739780 size=352 callers=4 calls=1
   calls: sub_165e060
*/
void sub_1739780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739780ULL || rel >= 0x17398e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017398e0 size=224 callers=1 calls=1
   calls: sub_165e060
*/
void sub_17398e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17398e0ULL || rel >= 0x17399c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017399c0 size=16 callers=0 calls=0
*/
void sub_17399c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17399c0ULL || rel >= 0x17399d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017399d0 size=16 callers=1 calls=0
   ref: SDK MW+Nintendo+PiaTransport-5_18_0
*/
void SDK_MW_Nintendo_PiaTransport_5_18_0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17399d0ULL || rel >= 0x17399e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017399e0 size=16 callers=0 calls=0
*/
void sub_17399e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17399e0ULL || rel >= 0x17399f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017399f0 size=16 callers=2 calls=0
*/
void sub_17399f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17399f0ULL || rel >= 0x1739a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739a00 size=144 callers=0 calls=1
   calls: sub_174de50
*/
void sub_1739a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739a00ULL || rel >= 0x1739a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739a90 size=32 callers=1 calls=0
*/
void sub_1739a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739a90ULL || rel >= 0x1739ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739ab0 size=16 callers=1 calls=0
*/
void sub_1739ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739ab0ULL || rel >= 0x1739ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739ac0 size=112 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1739ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739ac0ULL || rel >= 0x1739b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739b30 size=256 callers=2 calls=2
   calls: sub_165c6b0, sub_174de50
*/
void sub_1739b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739b30ULL || rel >= 0x1739c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739c30 size=48 callers=2 calls=1
   calls: sub_173cf60
*/
void sub_1739c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739c30ULL || rel >= 0x1739c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739c60 size=16 callers=2 calls=0
*/
void sub_1739c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739c60ULL || rel >= 0x1739c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739c70 size=16 callers=0 calls=0
*/
void sub_1739c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739c70ULL || rel >= 0x1739c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739c80 size=96 callers=0 calls=0
*/
void sub_1739c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739c80ULL || rel >= 0x1739ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739ce0 size=16 callers=0 calls=0
*/
void sub_1739ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739ce0ULL || rel >= 0x1739cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739cf0 size=32 callers=1 calls=0
*/
void sub_1739cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739cf0ULL || rel >= 0x1739d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739d10 size=16 callers=0 calls=0
*/
void sub_1739d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739d10ULL || rel >= 0x1739d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739d20 size=16 callers=0 calls=0
*/
void sub_1739d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739d20ULL || rel >= 0x1739d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739d30 size=64 callers=0 calls=0
*/
void sub_1739d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739d30ULL || rel >= 0x1739d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739d70 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1739d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739d70ULL || rel >= 0x1739dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739dd0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1739dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739dd0ULL || rel >= 0x1739e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739e30 size=16 callers=0 calls=0
*/
void sub_1739e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739e30ULL || rel >= 0x1739e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739e40 size=96 callers=6 calls=0
*/
void sub_1739e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739e40ULL || rel >= 0x1739ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739ea0 size=80 callers=1 calls=0
*/
void sub_1739ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739ea0ULL || rel >= 0x1739ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739ef0 size=112 callers=1 calls=0
*/
void sub_1739ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739ef0ULL || rel >= 0x1739f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01739f60 size=464 callers=4 calls=2
   calls: StreamBroadcastReliable, sub_173a1c0
   ref: [Analysis]     0xffffffff, %8d,  %8d,    %8d, Packet
   ref: [Analysis]     ProtocolId, TotalNum, TotalSize, AverageSize, Protocol(port)
   ref: [Analysis] ---------------------------- END ----------------------------
   ref: [Analysis] ------ BEGIN(%s, %d.%03d sec. passed) ------
   ref: [Analysis]     0x%08x, %8d,  %8d,    %8d, %s(%u)
*/
void Analysis_0x_08x_8d_8d_8d_s_u(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1739f60ULL || rel >= 0x173a130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a130 size=80 callers=1 calls=0
*/
void sub_173a130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a130ULL || rel >= 0x173a180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a180 size=64 callers=1 calls=0
*/
void sub_173a180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a180ULL || rel >= 0x173a1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a1c0 size=176 callers=8 calls=0
*/
void sub_173a1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a1c0ULL || rel >= 0x173a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a270 size=96 callers=1 calls=2
   calls: sub_173b080, sub_173e240
*/
void sub_173a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a270ULL || rel >= 0x173a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a2d0 size=64 callers=1 calls=1
   calls: sub_173e2a0
*/
void sub_173a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a2d0ULL || rel >= 0x173a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a310 size=16 callers=0 calls=0
*/
void sub_173a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a310ULL || rel >= 0x173a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a320 size=480 callers=1 calls=8
   calls: sub_1652bd0, sub_165e060, sub_165e140, sub_1661510, sub_1661530, sub_17162d0, sub_173b0e0, sub_173b300
   ref: Pia Receive
*/
void Pia_Receive(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a320ULL || rel >= 0x173a500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a500 size=160 callers=0 calls=5
   calls: sub_1661520, sub_16615e0, sub_1716390, sub_17163e0, sub_173b410
*/
void sub_173a500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a500ULL || rel >= 0x173a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a5a0 size=304 callers=1 calls=5
   calls: sub_165e060, sub_165e140, sub_173b1a0, sub_173b420, sub_173b750
*/
void sub_173a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a5a0ULL || rel >= 0x173a6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a6d0 size=48 callers=0 calls=1
   calls: sub_173b500
*/
void sub_173a6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a6d0ULL || rel >= 0x173a700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a700 size=16 callers=0 calls=0
*/
void sub_173a700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a700ULL || rel >= 0x173a710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173a710 size=1056 callers=1 calls=5
   calls: sub_1660500, sub_1660810, sub_173b510, sub_173bd00, sub_173e2c0
*/
void sub_173a710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173a710ULL || rel >= 0x173ab30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ab30 size=16 callers=0 calls=0
*/
void sub_173ab30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ab30ULL || rel >= 0x173ab40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ab40 size=32 callers=14 calls=0
*/
void sub_173ab40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ab40ULL || rel >= 0x173ab60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ab60 size=64 callers=14 calls=0
*/
void sub_173ab60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ab60ULL || rel >= 0x173aba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173aba0 size=64 callers=0 calls=1
   calls: sub_173e5b0
*/
void sub_173aba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173aba0ULL || rel >= 0x173abe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173abe0 size=32 callers=0 calls=0
*/
void sub_173abe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173abe0ULL || rel >= 0x173ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ac00 size=400 callers=0 calls=4
   calls: sub_173bb40, sub_173e1e0, sub_173e2c0, sub_173e5b0
*/
void sub_173ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ac00ULL || rel >= 0x173ad90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ad90 size=16 callers=0 calls=0
*/
void sub_173ad90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ad90ULL || rel >= 0x173ada0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ada0 size=16 callers=0 calls=0
*/
void sub_173ada0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ada0ULL || rel >= 0x173adb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173adb0 size=16 callers=0 calls=0
*/
void sub_173adb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173adb0ULL || rel >= 0x173adc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173adc0 size=144 callers=0 calls=4
   calls: sub_1749820, sub_17499e0, sub_174de50, sub_174de60
*/
void sub_173adc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173adc0ULL || rel >= 0x173ae50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ae50 size=160 callers=2 calls=2
   calls: sub_165e060, sub_173b790
*/
void sub_173ae50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ae50ULL || rel >= 0x173aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173aef0 size=16 callers=1 calls=0
*/
void sub_173aef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173aef0ULL || rel >= 0x173af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173af00 size=176 callers=3 calls=5
   calls: f_1_2_11_f_NINTENDO_SDK_v1_2, sub_165e060, sub_165e140, sub_16616d0, sub_1661700
*/
void sub_173af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173af00ULL || rel >= 0x173afb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173afb0 size=16 callers=0 calls=0
*/
void sub_173afb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173afb0ULL || rel >= 0x173afc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173afc0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_173afc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173afc0ULL || rel >= 0x173b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b020 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_173b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b020ULL || rel >= 0x173b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b080 size=64 callers=2 calls=1
   calls: sub_1652940
*/
void sub_173b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b080ULL || rel >= 0x173b0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b0c0 size=16 callers=0 calls=0
*/
void sub_173b0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b0c0ULL || rel >= 0x173b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b0d0 size=16 callers=0 calls=0
*/
void sub_173b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b0d0ULL || rel >= 0x173b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b0e0 size=112 callers=2 calls=1
   calls: sub_165e060
*/
void sub_173b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b0e0ULL || rel >= 0x173b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b150 size=80 callers=0 calls=2
   calls: sub_1652940, sub_1652950
*/
void sub_173b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b150ULL || rel >= 0x173b1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b1a0 size=16 callers=2 calls=0
*/
void sub_173b1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b1a0ULL || rel >= 0x173b1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b1b0 size=256 callers=2 calls=4
   calls: sub_1652940, sub_1652950, sub_16560c0, sub_165e060
*/
void sub_173b1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b1b0ULL || rel >= 0x173b2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b2b0 size=64 callers=0 calls=2
   calls: sub_1652940, sub_1652950
*/
void sub_173b2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b2b0ULL || rel >= 0x173b2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b2f0 size=16 callers=0 calls=0
*/
void sub_173b2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b2f0ULL || rel >= 0x173b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b300 size=272 callers=4 calls=2
   calls: sub_1655c60, sub_1739e40
*/
void sub_173b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b300ULL || rel >= 0x173b410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b410 size=16 callers=4 calls=0
*/
void sub_173b410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b410ULL || rel >= 0x173b420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b420 size=224 callers=4 calls=5
   calls: sub_1655c80, sub_1655c90, sub_165c600, sub_165e060, sub_1739ea0
*/
void sub_173b420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b420ULL || rel >= 0x173b500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b500 size=16 callers=4 calls=0
*/
void sub_173b500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b500ULL || rel >= 0x173b510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b510 size=576 callers=3 calls=10
   calls: sub_1655c80, sub_1655c90, sub_165e060, sub_1660500, sub_1660980, sub_173a130, sub_173a180, sub_173e240, sub_173e2a0, sub_173e2c0
*/
void sub_173b510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b510ULL || rel >= 0x173b750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b750 size=64 callers=6 calls=2
   calls: sub_1655c80, sub_1739ef0
*/
void sub_173b750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b750ULL || rel >= 0x173b790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b790 size=224 callers=4 calls=5
   calls: sub_1655c80, sub_1655c90, sub_165c600, sub_165c6b0, sub_165e060
*/
void sub_173b790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b790ULL || rel >= 0x173b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b870 size=48 callers=1 calls=0
*/
void sub_173b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b870ULL || rel >= 0x173b8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b8a0 size=304 callers=1 calls=4
   calls: sub_1652bd0, sub_165e060, sub_1660390, sub_1716330
*/
void sub_173b8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b8a0ULL || rel >= 0x173b9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173b9d0 size=176 callers=1 calls=3
   calls: sub_16604c0, sub_1716390, sub_17163e0
*/
void sub_173b9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173b9d0ULL || rel >= 0x173ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ba80 size=144 callers=1 calls=1
   calls: sub_165e060
*/
void sub_173ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ba80ULL || rel >= 0x173bb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173bb10 size=32 callers=1 calls=0
*/
void sub_173bb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173bb10ULL || rel >= 0x173bb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173bb30 size=16 callers=3 calls=0
*/
void sub_173bb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173bb30ULL || rel >= 0x173bb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173bb40 size=64 callers=4 calls=0
*/
void sub_173bb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173bb40ULL || rel >= 0x173bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173bb80 size=256 callers=3 calls=2
   calls: sub_165d8e0, sub_165da20
*/
void sub_173bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173bb80ULL || rel >= 0x173bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173bc80 size=16 callers=2 calls=0
*/
void sub_173bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173bc80ULL || rel >= 0x173bc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173bc90 size=112 callers=1 calls=0
*/
void sub_173bc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173bc90ULL || rel >= 0x173bd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173bd00 size=64 callers=1 calls=0
*/
void sub_173bd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173bd00ULL || rel >= 0x173bd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173bd40 size=16 callers=2 calls=0
*/
void sub_173bd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173bd40ULL || rel >= 0x173bd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173bd50 size=112 callers=1 calls=3
   calls: sub_1739a90, sub_173b080, sub_173e970
*/
void sub_173bd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173bd50ULL || rel >= 0x173bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173bdc0 size=80 callers=1 calls=2
   calls: sub_1739ab0, sub_173eb40
*/
void sub_173bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173bdc0ULL || rel >= 0x173be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173be10 size=16 callers=0 calls=0
*/
void sub_173be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173be10ULL || rel >= 0x173be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173be20 size=624 callers=1 calls=8
   calls: sub_1652bd0, sub_165dad0, sub_165daf0, sub_165e060, sub_165e140, sub_17162d0, sub_173b0e0, sub_173b300
   ref: Pia Send
   ref: Pia Send Broadcast
   ref: Pia Send Unicast
*/
void Pia_Send(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173be20ULL || rel >= 0x173c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173c090 size=224 callers=0 calls=5
   calls: sub_165dae0, sub_165dba0, sub_1716390, sub_17163e0, sub_173b410
*/
void sub_173c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173c090ULL || rel >= 0x173c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173c170 size=400 callers=1 calls=9
   calls: sub_165c600, sub_165e060, sub_165e140, sub_171e140, sub_171e210, sub_173b1a0, sub_173b420, sub_173b750, sub_173eb50
*/
void sub_173c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173c170ULL || rel >= 0x173c300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173c300 size=80 callers=0 calls=1
   calls: sub_173b500
*/
void sub_173c300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173c300ULL || rel >= 0x173c350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173c350 size=16 callers=0 calls=0
*/
void sub_173c350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173c350ULL || rel >= 0x173c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173c360 size=960 callers=1 calls=5
   calls: sub_165c600, sub_165c960, sub_1660660, sub_173b510, sub_173bc80
*/
void sub_173c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173c360ULL || rel >= 0x173c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173c720 size=560 callers=47 calls=10
   calls: sub_165fd30, sub_165fd40, sub_165fd50, sub_1660440, sub_1660540, sub_173bb30, sub_173bb80, sub_173eb50, sub_173eb60, sub_173eed0
*/
void sub_173c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173c720ULL || rel >= 0x173c950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173c950 size=112 callers=4 calls=0
*/
void sub_173c950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173c950ULL || rel >= 0x173c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173c9c0 size=160 callers=4 calls=4
   calls: sub_165fd50, sub_1660440, sub_173bb30, sub_173bb80
*/
void sub_173c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173c9c0ULL || rel >= 0x173ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ca60 size=64 callers=4 calls=1
   calls: sub_1660540
*/
void sub_173ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ca60ULL || rel >= 0x173caa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173caa0 size=128 callers=63 calls=2
   calls: sub_165e060, sub_173ebb0
*/
void sub_173caa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173caa0ULL || rel >= 0x173cb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173cb20 size=288 callers=3 calls=6
   calls: f_1_2_11_f_NINTENDO_SDK_v1, sub_165dd10, sub_165dd40, sub_165de10, sub_165e060, sub_165e140
*/
void sub_173cb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173cb20ULL || rel >= 0x173cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173cc40 size=240 callers=2 calls=2
   calls: sub_165e060, sub_173b790
*/
void sub_173cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173cc40ULL || rel >= 0x173cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173cd30 size=80 callers=1 calls=1
   calls: sub_173b750
*/
void sub_173cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173cd30ULL || rel >= 0x173cd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173cd80 size=272 callers=0 calls=5
   calls: sub_1660cb0, sub_1660cc0, sub_1660f00, sub_171e0e0, sub_171e210
*/
void sub_173cd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173cd80ULL || rel >= 0x173ce90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ce90 size=16 callers=0 calls=0
*/
void sub_173ce90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ce90ULL || rel >= 0x173cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173cea0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_173cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173cea0ULL || rel >= 0x173cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173cf00 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_173cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173cf00ULL || rel >= 0x173cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173cf60 size=64 callers=12 calls=0
*/
void sub_173cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173cf60ULL || rel >= 0x173cfa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173cfa0 size=16 callers=8 calls=0
*/
void sub_173cfa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173cfa0ULL || rel >= 0x173cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173cfb0 size=16 callers=0 calls=0
*/
void sub_173cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173cfb0ULL || rel >= 0x173cfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173cfc0 size=16 callers=1 calls=0
*/
void sub_173cfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173cfc0ULL || rel >= 0x173cfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173cfd0 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_173cfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173cfd0ULL || rel >= 0x173d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d030 size=16 callers=0 calls=0
*/
void sub_173d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d030ULL || rel >= 0x173d040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d040 size=432 callers=5 calls=2
   calls: sub_165e060, sub_165fdf0
*/
void sub_173d040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d040ULL || rel >= 0x173d1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d1f0 size=32 callers=0 calls=0
*/
void sub_173d1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d1f0ULL || rel >= 0x173d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d210 size=96 callers=0 calls=1
   calls: sub_165e060
*/
void sub_173d210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d210ULL || rel >= 0x173d270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d270 size=96 callers=8 calls=1
   calls: sub_165e060
*/
void sub_173d270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d270ULL || rel >= 0x173d2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d2d0 size=16 callers=0 calls=0
*/
void sub_173d2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d2d0ULL || rel >= 0x173d2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d2e0 size=16 callers=0 calls=0
*/
void sub_173d2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d2e0ULL || rel >= 0x173d2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d2f0 size=384 callers=2 calls=0
   ref: BandwidthCheck
   ref: SyncClock
   ref: BroadcastReliable
   ref: (KickoutReason_Unknown PROTOCOL NAME)
   ref: KeepAlive
   ref: RoundrobinUnreliable
   ref: ReliableBroadcast
   ref: Atomic
*/
void StreamBroadcastReliable(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d2f0ULL || rel >= 0x173d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d470 size=96 callers=1 calls=1
   calls: sub_16580b0
*/
void sub_173d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d470ULL || rel >= 0x173d4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d4d0 size=144 callers=2 calls=3
   calls: sub_16581f0, sub_1716390, sub_17163e0
*/
void sub_173d4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d4d0ULL || rel >= 0x173d560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d560 size=128 callers=1 calls=3
   calls: sub_16581f0, sub_1716390, sub_17163e0
*/
void sub_173d560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d560ULL || rel >= 0x173d5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d5e0 size=144 callers=0 calls=3
   calls: sub_16581f0, sub_1716390, sub_17163e0
*/
void sub_173d5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d5e0ULL || rel >= 0x173d670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d670 size=96 callers=1 calls=1
   calls: sub_165e060
*/
void sub_173d670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d670ULL || rel >= 0x173d6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d6d0 size=48 callers=16 calls=1
   calls: sub_17163e0
*/
void sub_173d6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d6d0ULL || rel >= 0x173d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d700 size=144 callers=16 calls=2
   calls: sub_1652bd0, sub_17162d0
*/
void sub_173d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d700ULL || rel >= 0x173d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d790 size=304 callers=16 calls=3
   calls: sub_16580c0, sub_173cfc0, sub_173d8c0
*/
void sub_173d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d790ULL || rel >= 0x173d8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d8c0 size=272 callers=1 calls=0
*/
void sub_173d8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d8c0ULL || rel >= 0x173d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173d9d0 size=352 callers=20 calls=2
   calls: sub_1658120, sub_17163e0
*/
void sub_173d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173d9d0ULL || rel >= 0x173db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173db30 size=144 callers=37 calls=0
*/
void sub_173db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173db30ULL || rel >= 0x173dbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173dbc0 size=208 callers=1 calls=1
   calls: sub_165e060
*/
void sub_173dbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173dbc0ULL || rel >= 0x173dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173dc90 size=64 callers=1 calls=0
*/
void sub_173dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173dc90ULL || rel >= 0x173dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173dcd0 size=288 callers=2 calls=1
   calls: sub_165e060
*/
void sub_173dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173dcd0ULL || rel >= 0x173ddf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ddf0 size=112 callers=2 calls=0
*/
void sub_173ddf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ddf0ULL || rel >= 0x173de60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173de60 size=288 callers=1 calls=1
   calls: sub_165e060
*/
void sub_173de60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173de60ULL || rel >= 0x173df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173df80 size=112 callers=1 calls=0
*/
void sub_173df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173df80ULL || rel >= 0x173dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173dff0 size=208 callers=1 calls=1
   calls: sub_165e060
*/
void sub_173dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173dff0ULL || rel >= 0x173e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e0c0 size=288 callers=4 calls=2
   calls: sub_165e060, sub_165e140
*/
void sub_173e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e0c0ULL || rel >= 0x173e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e1e0 size=80 callers=1 calls=0
*/
void sub_173e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e1e0ULL || rel >= 0x173e230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e230 size=16 callers=0 calls=0
*/
void sub_173e230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e230ULL || rel >= 0x173e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e240 size=96 callers=2 calls=1
   calls: sub_165fb30
*/
void sub_173e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e240ULL || rel >= 0x173e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e2a0 size=32 callers=2 calls=0
*/
void sub_173e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e2a0ULL || rel >= 0x173e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e2c0 size=432 callers=5 calls=4
   calls: sub_165fb70, sub_165fd50, sub_1660380, sub_173e470
*/
void sub_173e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e2c0ULL || rel >= 0x173e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e470 size=240 callers=1 calls=1
   calls: sub_165e060
*/
void sub_173e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e470ULL || rel >= 0x173e560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e560 size=80 callers=0 calls=0
*/
void sub_173e560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e560ULL || rel >= 0x173e5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e5b0 size=48 callers=2 calls=1
   calls: sub_165fb70
*/
void sub_173e5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e5b0ULL || rel >= 0x173e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e5e0 size=16 callers=10 calls=0
*/
void sub_173e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e5e0ULL || rel >= 0x173e5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e5f0 size=96 callers=1 calls=0
*/
void sub_173e5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e5f0ULL || rel >= 0x173e650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e650 size=80 callers=11 calls=0
*/
void sub_173e650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e650ULL || rel >= 0x173e6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e6a0 size=96 callers=9 calls=0
*/
void sub_173e6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e6a0ULL || rel >= 0x173e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e700 size=96 callers=11 calls=0
*/
void sub_173e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e700ULL || rel >= 0x173e760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e760 size=96 callers=1 calls=0
*/
void sub_173e760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e760ULL || rel >= 0x173e7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e7c0 size=16 callers=1 calls=0
*/
void sub_173e7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e7c0ULL || rel >= 0x173e7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e7d0 size=16 callers=0 calls=0
*/
void sub_173e7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e7d0ULL || rel >= 0x173e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e7e0 size=400 callers=1 calls=1
   calls: sub_165e060
*/
void sub_173e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e7e0ULL || rel >= 0x173e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173e970 size=464 callers=1 calls=0
*/
void sub_173e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173e970ULL || rel >= 0x173eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173eb40 size=16 callers=1 calls=0
*/
void sub_173eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173eb40ULL || rel >= 0x173eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173eb50 size=16 callers=9 calls=0
*/
void sub_173eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173eb50ULL || rel >= 0x173eb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173eb60 size=80 callers=7 calls=0
*/
void sub_173eb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173eb60ULL || rel >= 0x173ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ebb0 size=800 callers=1 calls=3
   calls: sub_165e140, sub_173e7e0, sub_173efe0
*/
void sub_173ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ebb0ULL || rel >= 0x173eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173eed0 size=64 callers=5 calls=0
*/
void sub_173eed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173eed0ULL || rel >= 0x173ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ef10 size=16 callers=54 calls=0
*/
void sub_173ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ef10ULL || rel >= 0x173ef20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ef20 size=16 callers=3 calls=0
*/
void sub_173ef20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ef20ULL || rel >= 0x173ef30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ef30 size=16 callers=17 calls=0
*/
void sub_173ef30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ef30ULL || rel >= 0x173ef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ef40 size=32 callers=6 calls=0
*/
void sub_173ef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ef40ULL || rel >= 0x173ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ef60 size=48 callers=9 calls=0
*/
void sub_173ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ef60ULL || rel >= 0x173ef90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ef90 size=80 callers=2 calls=0
*/
void sub_173ef90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ef90ULL || rel >= 0x173efe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173efe0 size=912 callers=3 calls=0
*/
void sub_173efe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173efe0ULL || rel >= 0x173f370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173f370 size=16 callers=2 calls=0
*/
void sub_173f370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173f370ULL || rel >= 0x173f380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173f380 size=96 callers=1 calls=1
   calls: sub_173cf60
*/
void sub_173f380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173f380ULL || rel >= 0x173f3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173f3e0 size=96 callers=0 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_173f3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173f3e0ULL || rel >= 0x173f440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173f440 size=80 callers=8 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_173f440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173f440ULL || rel >= 0x173f490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173f490 size=112 callers=0 calls=3
   calls: sub_1716390, sub_17163e0, sub_173cfa0
*/
void sub_173f490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173f490ULL || rel >= 0x173f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173f500 size=448 callers=1 calls=3
   calls: sub_1652bd0, sub_165e060, sub_17162d0
*/
void sub_173f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173f500ULL || rel >= 0x173f6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173f6c0 size=384 callers=0 calls=3
   calls: sub_165e060, sub_173d040, sub_174de50
*/
void sub_173f6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173f6c0ULL || rel >= 0x173f840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173f840 size=144 callers=0 calls=0
*/
void sub_173f840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173f840ULL || rel >= 0x173f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173f8d0 size=944 callers=0 calls=10
   calls: sub_165e060, sub_173ab40, sub_173ab60, sub_173fc80, sub_173ffd0, sub_1740500, sub_1740830, sub_17409d0, sub_1741970, sub_174de70
*/
void sub_173f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173f8d0ULL || rel >= 0x173fc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173fc80 size=848 callers=1 calls=5
   calls: sub_173af00, sub_173e650, sub_173e6a0, sub_173e700, sub_173e760
*/
void sub_173fc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173fc80ULL || rel >= 0x173ffd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0173ffd0 size=1328 callers=1 calls=2
   calls: sub_1741f50, sub_17422f0
*/
void sub_173ffd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x173ffd0ULL || rel >= 0x1740500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01740500 size=816 callers=1 calls=1
   calls: sub_165c6b0
*/
void sub_1740500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1740500ULL || rel >= 0x1740830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01740830 size=416 callers=2 calls=1
   calls: sub_1741a90
*/
void sub_1740830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1740830ULL || rel >= 0x17409d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017409d0 size=1072 callers=1 calls=3
   calls: sub_173cb20, sub_1741a90, sub_1741c20
*/
void sub_17409d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17409d0ULL || rel >= 0x1740e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01740e00 size=480 callers=0 calls=3
   calls: sub_165e060, sub_173d270, sub_174de50
*/
void sub_1740e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1740e00ULL || rel >= 0x1740fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01740fe0 size=304 callers=0 calls=1
   calls: sub_171b080
*/
void sub_1740fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1740fe0ULL || rel >= 0x1741110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01741110 size=208 callers=1 calls=1
   calls: sub_174fd20
*/
void sub_1741110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1741110ULL || rel >= 0x17411e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017411e0 size=576 callers=1 calls=2
   calls: sub_165e060, sub_1741420
*/
void sub_17411e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17411e0ULL || rel >= 0x1741420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01741420 size=160 callers=11 calls=1
   calls: sub_165e060
*/
void sub_1741420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1741420ULL || rel >= 0x17414c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017414c0 size=160 callers=1 calls=3
   calls: sub_165e060, sub_1741560, sub_174fd20
*/
void sub_17414c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17414c0ULL || rel >= 0x1741560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01741560 size=480 callers=1 calls=2
   calls: sub_165e060, sub_1741420
*/
void sub_1741560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1741560ULL || rel >= 0x1741740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01741740 size=304 callers=9 calls=1
   calls: sub_165e060
*/
void sub_1741740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1741740ULL || rel >= 0x1741870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01741870 size=240 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1741870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1741870ULL || rel >= 0x1741960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01741960 size=16 callers=0 calls=0
*/
void sub_1741960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1741960ULL || rel >= 0x1741970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01741970 size=288 callers=2 calls=1
   calls: sub_1741a90
*/
void sub_1741970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1741970ULL || rel >= 0x1741a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01741a90 size=400 callers=4 calls=2
   calls: sub_173caa0, sub_17420d0
*/
void sub_1741a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1741a90ULL || rel >= 0x1741c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01741c20 size=816 callers=1 calls=0
*/
void sub_1741c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1741c20ULL || rel >= 0x1741f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01741f50 size=384 callers=1 calls=1
   calls: sub_171b080
*/
void sub_1741f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1741f50ULL || rel >= 0x17420d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017420d0 size=544 callers=1 calls=6
   calls: sub_173ef20, sub_173ef30, sub_173ef40, sub_173ef60, sub_173ef90, sub_1742550
*/
void sub_17420d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17420d0ULL || rel >= 0x17422f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017422f0 size=416 callers=1 calls=0
*/
void sub_17422f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17422f0ULL || rel >= 0x1742490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742490 size=192 callers=0 calls=3
   calls: sub_173e650, sub_173e6a0, sub_173e700
*/
void sub_1742490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742490ULL || rel >= 0x1742550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742550 size=192 callers=1 calls=3
   calls: sub_173ef30, sub_173ef40, sub_173ef60
*/
void sub_1742550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742550ULL || rel >= 0x1742610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742610 size=16 callers=0 calls=0
*/
void sub_1742610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742610ULL || rel >= 0x1742620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742620 size=16 callers=0 calls=0
*/
void sub_1742620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742620ULL || rel >= 0x1742630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742630 size=144 callers=3 calls=3
   calls: sub_165d8e0, sub_165d9b0, sub_1739c30
   ref: ReliableProtocol send buffer num
   ref: ReliableProtocol receive buffer num
*/
void ReliableProtocol_send_buffer_num(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742630ULL || rel >= 0x17426c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017426c0 size=176 callers=1 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_17426c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17426c0ULL || rel >= 0x1742770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742770 size=160 callers=2 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_1742770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742770ULL || rel >= 0x1742810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742810 size=192 callers=0 calls=3
   calls: sub_1716390, sub_17163e0, sub_1739c60
*/
void sub_1742810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742810ULL || rel >= 0x17428d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017428d0 size=496 callers=2 calls=6
   calls: sub_1652bd0, sub_165e060, sub_17162d0, sub_1716390, sub_17163e0, sub_1743960
*/
void sub_17428d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17428d0ULL || rel >= 0x1742ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742ac0 size=288 callers=0 calls=3
   calls: sub_165e060, sub_173d040, sub_1743f20
*/
void sub_1742ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742ac0ULL || rel >= 0x1742be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742be0 size=96 callers=0 calls=1
   calls: sub_1744090
*/
void sub_1742be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742be0ULL || rel >= 0x1742c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742c40 size=208 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1742c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742c40ULL || rel >= 0x1742d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742d10 size=304 callers=0 calls=5
   calls: sub_165e060, sub_173d270, sub_17440f0, sub_1744290, sub_174de50
*/
void sub_1742d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742d10ULL || rel >= 0x1742e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742e40 size=224 callers=0 calls=3
   calls: sub_165e060, sub_1742f20, sub_174de70
*/
void sub_1742e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742e40ULL || rel >= 0x1742f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01742f20 size=416 callers=1 calls=4
   calls: sub_165d8e0, sub_165da20, sub_165e060, sub_1746570
*/
void sub_1742f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1742f20ULL || rel >= 0x17430c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017430c0 size=656 callers=0 calls=6
   calls: sub_165d8e0, sub_165da20, sub_173ab40, sub_173ab60, sub_1744770, sub_174de70
*/
void sub_17430c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17430c0ULL || rel >= 0x1743350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743350 size=288 callers=0 calls=1
   calls: sub_1745350
*/
void sub_1743350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743350ULL || rel >= 0x1743470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743470 size=224 callers=0 calls=0
*/
void sub_1743470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743470ULL || rel >= 0x1743550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743550 size=816 callers=0 calls=4
   calls: sub_165d8e0, sub_165da20, sub_165e060, sub_1746020
*/
void sub_1743550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743550ULL || rel >= 0x1743880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743880 size=176 callers=0 calls=1
   calls: sub_174fd20
*/
void sub_1743880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743880ULL || rel >= 0x1743930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743930 size=16 callers=0 calls=0
*/
void sub_1743930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743930ULL || rel >= 0x1743940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743940 size=16 callers=0 calls=0
*/
void sub_1743940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743940ULL || rel >= 0x1743950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743950 size=16 callers=0 calls=0
*/
void sub_1743950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743950ULL || rel >= 0x1743960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743960 size=656 callers=4 calls=0
*/
void sub_1743960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743960ULL || rel >= 0x1743bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743bf0 size=144 callers=1 calls=3
   calls: sub_1716390, sub_17163e0, sub_1743e80
*/
void sub_1743bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743bf0ULL || rel >= 0x1743c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743c80 size=144 callers=0 calls=3
   calls: sub_1716390, sub_17163e0, sub_1743e80
*/
void sub_1743c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743c80ULL || rel >= 0x1743d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743d10 size=368 callers=0 calls=6
   calls: sub_165e060, sub_165e140, sub_1716390, sub_17163e0, sub_1739060, sub_17391b0
*/
void sub_1743d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743d10ULL || rel >= 0x1743e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743e80 size=128 callers=2 calls=2
   calls: sub_1716390, sub_17163e0
*/
void sub_1743e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743e80ULL || rel >= 0x1743f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743f00 size=32 callers=2 calls=0
*/
void sub_1743f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743f00ULL || rel >= 0x1743f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01743f20 size=368 callers=4 calls=1
   calls: sub_165e060
*/
void sub_1743f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1743f20ULL || rel >= 0x1744090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01744090 size=96 callers=5 calls=0
*/
void sub_1744090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1744090ULL || rel >= 0x17440f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017440f0 size=416 callers=4 calls=1
   calls: sub_165e060
*/
void sub_17440f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17440f0ULL || rel >= 0x1744290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01744290 size=704 callers=4 calls=2
   calls: sub_165e060, sub_1744550
*/
void sub_1744290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1744290ULL || rel >= 0x1744550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01744550 size=464 callers=2 calls=1
   calls: sub_1747510
*/
void sub_1744550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1744550ULL || rel >= 0x1744720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01744720 size=16 callers=0 calls=0
*/
void sub_1744720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1744720ULL || rel >= 0x1744730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01744730 size=64 callers=0 calls=0
*/
void sub_1744730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1744730ULL || rel >= 0x1744770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01744770 size=1504 callers=4 calls=8
   calls: sub_165c6b0, sub_165e060, sub_165e140, sub_17398e0, sub_173af00, sub_1744d50, sub_1744ec0, sub_17450d0
*/
void sub_1744770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1744770ULL || rel >= 0x1744d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01744d50 size=368 callers=1 calls=0
*/
void sub_1744d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1744d50ULL || rel >= 0x1744ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01744ec0 size=528 callers=1 calls=3
   calls: sub_165e060, sub_1747620, sub_17479b0
*/
void sub_1744ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1744ec0ULL || rel >= 0x17450d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017450d0 size=640 callers=1 calls=2
   calls: sub_165e060, sub_173af00
*/
void sub_17450d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17450d0ULL || rel >= 0x1745350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01745350 size=1616 callers=6 calls=7
   calls: sub_165c600, sub_165e060, sub_1739780, sub_1744550, sub_17459a0, sub_1745ab0, sub_1745d20
*/
void sub_1745350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1745350ULL || rel >= 0x17459a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017459a0 size=272 callers=1 calls=3
   calls: sub_165c600, sub_1749730, sub_174de50
*/
void sub_17459a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17459a0ULL || rel >= 0x1745ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01745ab0 size=624 callers=2 calls=3
   calls: sub_165c600, sub_165e060, sub_1739780
*/
void sub_1745ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1745ab0ULL || rel >= 0x1745d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01745d20 size=768 callers=2 calls=3
   calls: sub_165c600, sub_165e060, sub_1739780
*/
void sub_1745d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1745d20ULL || rel >= 0x1746020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746020 size=1008 callers=5 calls=2
   calls: sub_165e060, sub_1746410
*/
void sub_1746020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746020ULL || rel >= 0x1746410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746410 size=352 callers=1 calls=1
   calls: sub_174e000
*/
void sub_1746410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746410ULL || rel >= 0x1746570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746570 size=224 callers=19 calls=0
*/
void sub_1746570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746570ULL || rel >= 0x1746650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746650 size=960 callers=0 calls=3
   calls: sub_165e060, sub_173cb20, sub_1746af0
*/
void sub_1746650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746650ULL || rel >= 0x1746a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746a10 size=224 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1746a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746a10ULL || rel >= 0x1746af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746af0 size=224 callers=1 calls=0
*/
void sub_1746af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746af0ULL || rel >= 0x1746bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746bd0 size=160 callers=3 calls=0
*/
void sub_1746bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746bd0ULL || rel >= 0x1746c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746c70 size=64 callers=0 calls=0
*/
void sub_1746c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746c70ULL || rel >= 0x1746cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746cb0 size=16 callers=0 calls=0
*/
void sub_1746cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746cb0ULL || rel >= 0x1746cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746cc0 size=128 callers=0 calls=2
   calls: sub_173caa0, sub_173ef10
*/
void sub_1746cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746cc0ULL || rel >= 0x1746d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746d40 size=80 callers=2 calls=2
   calls: sub_173caa0, sub_173ef10
*/
void sub_1746d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746d40ULL || rel >= 0x1746d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01746d90 size=1360 callers=1 calls=6
   calls: sub_165c600, sub_165e060, sub_1739780, sub_173cb20, sub_17472e0, sub_17473b0
*/
void sub_1746d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1746d90ULL || rel >= 0x17472e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017472e0 size=208 callers=1 calls=1
   calls: sub_165e060
*/
void sub_17472e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17472e0ULL || rel >= 0x17473b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017473b0 size=320 callers=1 calls=1
   calls: sub_165e060
*/
void sub_17473b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17473b0ULL || rel >= 0x17474f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017474f0 size=16 callers=0 calls=0
*/
void sub_17474f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17474f0ULL || rel >= 0x1747500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747500 size=16 callers=0 calls=0
*/
void sub_1747500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747500ULL || rel >= 0x1747510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747510 size=272 callers=1 calls=0
*/
void sub_1747510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747510ULL || rel >= 0x1747620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747620 size=912 callers=1 calls=0
*/
void sub_1747620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747620ULL || rel >= 0x17479b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017479b0 size=208 callers=1 calls=1
   calls: sub_165e060
*/
void sub_17479b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17479b0ULL || rel >= 0x1747a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747a80 size=272 callers=0 calls=0
*/
void sub_1747a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747a80ULL || rel >= 0x1747b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747b90 size=16 callers=0 calls=0
*/
void sub_1747b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747b90ULL || rel >= 0x1747ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747ba0 size=16 callers=0 calls=0
*/
void sub_1747ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747ba0ULL || rel >= 0x1747bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747bb0 size=16 callers=0 calls=0
*/
void sub_1747bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747bb0ULL || rel >= 0x1747bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747bc0 size=64 callers=1 calls=1
   calls: sub_173cf60
*/
void sub_1747bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747bc0ULL || rel >= 0x1747c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747c00 size=16 callers=0 calls=0
*/
void sub_1747c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747c00ULL || rel >= 0x1747c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747c10 size=48 callers=0 calls=1
   calls: sub_173cfa0
*/
void sub_1747c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747c10ULL || rel >= 0x1747c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747c40 size=288 callers=1 calls=5
   calls: sub_1652bd0, sub_165e060, sub_17162d0, sub_1748ab0, sub_1748fb0
*/
void sub_1747c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747c40ULL || rel >= 0x1747d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747d60 size=144 callers=1 calls=3
   calls: sub_1716390, sub_17163e0, sub_1748ae0
*/
void sub_1747d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747d60ULL || rel >= 0x1747df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747df0 size=256 callers=0 calls=4
   calls: sub_165e060, sub_173d040, sub_174de50, sub_174e350
*/
void sub_1747df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747df0ULL || rel >= 0x1747ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747ef0 size=128 callers=0 calls=1
   calls: sub_1748da0
*/
void sub_1747ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747ef0ULL || rel >= 0x1747f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01747f70 size=496 callers=0 calls=8
   calls: sub_165e060, sub_173ab40, sub_173ab60, sub_173e7c0, sub_1748160, sub_1748260, sub_1748de0, sub_1748e60
*/
void sub_1747f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1747f70ULL || rel >= 0x1748160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748160 size=256 callers=2 calls=3
   calls: sub_165c600, sub_165e060, sub_1748690
*/
void sub_1748160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748160ULL || rel >= 0x1748260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748260 size=336 callers=1 calls=6
   calls: sub_165c600, sub_165c6b0, sub_17485f0, sub_1748690, sub_1748e80, sub_174de50
*/
void sub_1748260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748260ULL || rel >= 0x17483b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017483b0 size=224 callers=2 calls=3
   calls: sub_1748160, sub_1748d60, sub_1748e60
*/
void sub_17483b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17483b0ULL || rel >= 0x1748490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748490 size=48 callers=1 calls=0
*/
void sub_1748490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748490ULL || rel >= 0x17484c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017484c0 size=304 callers=0 calls=5
   calls: sub_165e060, sub_173d270, sub_17483b0, sub_1748da0, sub_174de50
*/
void sub_17484c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17484c0ULL || rel >= 0x17485f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017485f0 size=160 callers=1 calls=1
   calls: sub_165e060
*/
void sub_17485f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17485f0ULL || rel >= 0x1748690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748690 size=384 callers=2 calls=4
   calls: sub_165e060, sub_165e140, sub_173caa0, sub_173ef10
*/
void sub_1748690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748690ULL || rel >= 0x1748810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748810 size=64 callers=0 calls=0
*/
void sub_1748810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748810ULL || rel >= 0x1748850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748850 size=80 callers=0 calls=0
*/
void sub_1748850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748850ULL || rel >= 0x17488a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017488a0 size=48 callers=0 calls=0
*/
void sub_17488a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17488a0ULL || rel >= 0x17488d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017488d0 size=48 callers=0 calls=0
*/
void sub_17488d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17488d0ULL || rel >= 0x1748900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748900 size=48 callers=0 calls=0
*/
void sub_1748900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748900ULL || rel >= 0x1748930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748930 size=48 callers=0 calls=0
*/
void sub_1748930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748930ULL || rel >= 0x1748960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748960 size=16 callers=0 calls=0
*/
void sub_1748960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748960ULL || rel >= 0x1748970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748970 size=16 callers=0 calls=0
*/
void sub_1748970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748970ULL || rel >= 0x1748980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748980 size=16 callers=0 calls=0
*/
void sub_1748980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748980ULL || rel >= 0x1748990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748990 size=16 callers=0 calls=0
*/
void sub_1748990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748990ULL || rel >= 0x17489a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017489a0 size=256 callers=0 calls=1
   calls: sub_165e060
*/
void sub_17489a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17489a0ULL || rel >= 0x1748aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748aa0 size=16 callers=0 calls=0
*/
void sub_1748aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748aa0ULL || rel >= 0x1748ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748ab0 size=48 callers=1 calls=0
*/
void sub_1748ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748ab0ULL || rel >= 0x1748ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748ae0 size=16 callers=1 calls=0
*/
void sub_1748ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748ae0ULL || rel >= 0x1748af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748af0 size=272 callers=0 calls=0
*/
void sub_1748af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748af0ULL || rel >= 0x1748c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748c00 size=272 callers=0 calls=0
*/
void sub_1748c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748c00ULL || rel >= 0x1748d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748d10 size=16 callers=0 calls=0
*/
void sub_1748d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748d10ULL || rel >= 0x1748d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748d20 size=32 callers=0 calls=0
*/
void sub_1748d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748d20ULL || rel >= 0x1748d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748d40 size=32 callers=0 calls=0
*/
void sub_1748d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748d40ULL || rel >= 0x1748d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748d60 size=64 callers=1 calls=0
*/
void sub_1748d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748d60ULL || rel >= 0x1748da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748da0 size=64 callers=3 calls=0
*/
void sub_1748da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748da0ULL || rel >= 0x1748de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748de0 size=128 callers=1 calls=1
   calls: sub_165c6b0
*/
void sub_1748de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748de0ULL || rel >= 0x1748e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748e60 size=32 callers=4 calls=0
*/
void sub_1748e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748e60ULL || rel >= 0x1748e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748e80 size=176 callers=1 calls=0
*/
void sub_1748e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748e80ULL || rel >= 0x1748f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748f30 size=128 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1748f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748f30ULL || rel >= 0x1748fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01748fb0 size=128 callers=1 calls=1
   calls: sub_165e060
*/
void sub_1748fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1748fb0ULL || rel >= 0x1749030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749030 size=32 callers=1 calls=0
*/
void sub_1749030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749030ULL || rel >= 0x1749050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749050 size=16 callers=2 calls=0
*/
void sub_1749050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749050ULL || rel >= 0x1749060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749060 size=16 callers=0 calls=0
*/
void sub_1749060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749060ULL || rel >= 0x1749070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749070 size=112 callers=3 calls=1
   calls: sub_165e060
*/
void sub_1749070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749070ULL || rel >= 0x17490e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017490e0 size=16 callers=1 calls=0
*/
void sub_17490e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17490e0ULL || rel >= 0x17490f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017490f0 size=32 callers=2 calls=0
*/
void sub_17490f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17490f0ULL || rel >= 0x1749110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749110 size=336 callers=1 calls=0
*/
void sub_1749110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749110ULL || rel >= 0x1749260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749260 size=16 callers=0 calls=0
*/
void sub_1749260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749260ULL || rel >= 0x1749270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749270 size=96 callers=1 calls=2
   calls: sub_165fb30, sub_1749030
*/
void sub_1749270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749270ULL || rel >= 0x17492d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017492d0 size=80 callers=1 calls=1
   calls: sub_1749050
*/
void sub_17492d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17492d0ULL || rel >= 0x1749320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749320 size=80 callers=0 calls=2
   calls: sub_1652d30, sub_1749050
*/
void sub_1749320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749320ULL || rel >= 0x1749370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749370 size=128 callers=0 calls=1
   calls: sub_165e060
*/
void sub_1749370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749370ULL || rel >= 0x17493f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017493f0 size=16 callers=1 calls=0
*/
void sub_17493f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17493f0ULL || rel >= 0x1749400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749400 size=16 callers=9 calls=0
*/
void sub_1749400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749400ULL || rel >= 0x1749410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749410 size=160 callers=3 calls=4
   calls: sub_165c600, sub_165ca20, sub_165fd50, sub_1749070
*/
void sub_1749410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749410ULL || rel >= 0x17494b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017494b0 size=128 callers=2 calls=3
   calls: sub_165c600, sub_165fd50, sub_1749070
*/
void sub_17494b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17494b0ULL || rel >= 0x1749530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749530 size=176 callers=2 calls=6
   calls: sub_1652d30, sub_165c600, sub_165fb30, sub_165fb70, sub_165fd50, sub_1749070
*/
void sub_1749530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749530ULL || rel >= 0x17495e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017495e0 size=160 callers=16 calls=6
   calls: sub_1652d30, sub_165fb30, sub_165fb70, sub_165fd50, sub_1748490, sub_17490e0
*/
void sub_17495e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17495e0ULL || rel >= 0x1749680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749680 size=128 callers=7 calls=2
   calls: sub_165e060, sub_17483b0
*/
void sub_1749680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749680ULL || rel >= 0x1749700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749700 size=48 callers=7 calls=0
*/
void sub_1749700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749700ULL || rel >= 0x1749730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749730 size=48 callers=1 calls=0
*/
void sub_1749730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749730ULL || rel >= 0x1749760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749760 size=32 callers=1 calls=0
*/
void sub_1749760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749760ULL || rel >= 0x1749780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749780 size=48 callers=1 calls=0
*/
void sub_1749780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749780ULL || rel >= 0x17497b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017497b0 size=48 callers=1 calls=0
*/
void sub_17497b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17497b0ULL || rel >= 0x17497e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017497e0 size=32 callers=2 calls=0
*/
void sub_17497e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17497e0ULL || rel >= 0x1749800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749800 size=16 callers=1 calls=0
*/
void sub_1749800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749800ULL || rel >= 0x1749810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749810 size=16 callers=0 calls=0
*/
void sub_1749810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749810ULL || rel >= 0x1749820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749820 size=128 callers=117 calls=2
   calls: sub_1652c70, sub_16538d0
*/
void sub_1749820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749820ULL || rel >= 0x17498a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017498a0 size=192 callers=16 calls=2
   calls: sub_1652c70, sub_1652cf0
*/
void sub_17498a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17498a0ULL || rel >= 0x1749960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749960 size=128 callers=11 calls=1
   calls: sub_1652cf0
*/
void sub_1749960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749960ULL || rel >= 0x17499e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 017499e0 size=80 callers=143 calls=1
   calls: sub_1652d30
*/
void sub_17499e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x17499e0ULL || rel >= 0x1749a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749a30 size=80 callers=0 calls=1
   calls: sub_1652d30
*/
void sub_1749a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749a30ULL || rel >= 0x1749a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749a80 size=144 callers=38 calls=1
   calls: sub_1652cf0
*/
void sub_1749a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749a80ULL || rel >= 0x1749b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749b10 size=224 callers=6 calls=1
   calls: sub_1653b50
*/
void sub_1749b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749b10ULL || rel >= 0x1749bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749bf0 size=224 callers=5 calls=1
   calls: sub_1653b50
*/
void sub_1749bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749bf0ULL || rel >= 0x1749cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749cd0 size=16 callers=41 calls=0
*/
void sub_1749cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749cd0ULL || rel >= 0x1749ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749ce0 size=16 callers=34 calls=0
*/
void sub_1749ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749ce0ULL || rel >= 0x1749cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749cf0 size=96 callers=51 calls=2
   calls: sub_165fb30, sub_165fd90
*/
void sub_1749cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749cf0ULL || rel >= 0x1749d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749d50 size=16 callers=8 calls=0
*/
void sub_1749d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749d50ULL || rel >= 0x1749d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749d60 size=16 callers=9 calls=0
*/
void sub_1749d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749d60ULL || rel >= 0x1749d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749d70 size=16 callers=18 calls=0
*/
void sub_1749d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749d70ULL || rel >= 0x1749d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749d80 size=16 callers=53 calls=0
*/
void sub_1749d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749d80ULL || rel >= 0x1749d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749d90 size=16 callers=35 calls=0
*/
void sub_1749d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749d90ULL || rel >= 0x1749da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749da0 size=16 callers=84 calls=0
*/
void sub_1749da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749da0ULL || rel >= 0x1749db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749db0 size=16 callers=12 calls=0
*/
void sub_1749db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749db0ULL || rel >= 0x1749dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749dc0 size=32 callers=30 calls=0
*/
void sub_1749dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749dc0ULL || rel >= 0x1749de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749de0 size=32 callers=10 calls=0
*/
void sub_1749de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749de0ULL || rel >= 0x1749e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749e00 size=16 callers=5 calls=0
*/
void sub_1749e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749e00ULL || rel >= 0x1749e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749e10 size=16 callers=6 calls=0
*/
void sub_1749e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749e10ULL || rel >= 0x1749e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749e20 size=32 callers=7 calls=0
*/
void sub_1749e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749e20ULL || rel >= 0x1749e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749e40 size=16 callers=17 calls=0
*/
void sub_1749e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749e40ULL || rel >= 0x1749e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749e50 size=16 callers=7 calls=0
*/
void sub_1749e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749e50ULL || rel >= 0x1749e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749e60 size=16 callers=11 calls=0
*/
void sub_1749e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749e60ULL || rel >= 0x1749e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749e70 size=16 callers=1 calls=0
*/
void sub_1749e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749e70ULL || rel >= 0x1749e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749e80 size=32 callers=2 calls=0
*/
void sub_1749e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749e80ULL || rel >= 0x1749ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749ea0 size=32 callers=8 calls=0
*/
void sub_1749ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749ea0ULL || rel >= 0x1749ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749ec0 size=32 callers=1 calls=0
*/
void sub_1749ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749ec0ULL || rel >= 0x1749ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749ee0 size=16 callers=11 calls=0
*/
void sub_1749ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749ee0ULL || rel >= 0x1749ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749ef0 size=16 callers=23 calls=0
*/
void sub_1749ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749ef0ULL || rel >= 0x1749f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749f00 size=16 callers=16 calls=0
*/
void sub_1749f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749f00ULL || rel >= 0x1749f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749f10 size=16 callers=20 calls=0
*/
void sub_1749f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749f10ULL || rel >= 0x1749f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749f20 size=16 callers=4 calls=0
*/
void sub_1749f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749f20ULL || rel >= 0x1749f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749f30 size=16 callers=9 calls=0
*/
void sub_1749f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749f30ULL || rel >= 0x1749f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749f40 size=16 callers=10 calls=0
*/
void sub_1749f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749f40ULL || rel >= 0x1749f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749f50 size=16 callers=9 calls=0
*/
void sub_1749f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749f50ULL || rel >= 0x1749f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749f60 size=32 callers=4 calls=0
*/
void sub_1749f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749f60ULL || rel >= 0x1749f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749f80 size=16 callers=4 calls=0
*/
void sub_1749f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749f80ULL || rel >= 0x1749f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749f90 size=16 callers=4 calls=0
*/
void sub_1749f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749f90ULL || rel >= 0x1749fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749fa0 size=16 callers=4 calls=0
*/
void sub_1749fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749fa0ULL || rel >= 0x1749fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01749fb0 size=16 callers=2 calls=0
*/
void sub_1749fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1749fb0ULL || rel >= 0x1749fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

