/* main functions 00865350..00873ff0 (63 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00865350 size=176 callers=0 calls=4
   calls: sub_7f7c40, sub_819600, sub_819640, sub_8197a0
*/
void sub_865350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865350ULL || rel >= 0x865400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865400 size=160 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_865400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865400ULL || rel >= 0x8654a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008654a0 size=176 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_8197a0
*/
void sub_8654a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8654a0ULL || rel >= 0x865550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865550 size=224 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_803e10, sub_819600, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_865550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865550ULL || rel >= 0x865630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865630 size=80 callers=0 calls=1
   calls: sub_8197b0
*/
void sub_865630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865630ULL || rel >= 0x865680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865680 size=16 callers=0 calls=0
*/
void sub_865680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865680ULL || rel >= 0x865690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865690 size=320 callers=0 calls=12
   calls: sub_7f05d0, sub_7f7150, sub_7f79e0, sub_7f8bc0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196d0, sub_8197a0, sub_819b80
*/
void sub_865690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865690ULL || rel >= 0x8657d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008657d0 size=320 callers=0 calls=12
   calls: sub_7f05d0, sub_7f7150, sub_7f79e0, sub_7f8bc0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196d0, sub_8197a0, sub_819b80
*/
void sub_8657d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8657d0ULL || rel >= 0x865910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865910 size=272 callers=0 calls=12
   calls: sub_7811e0, sub_7f0b70, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819680, sub_8196d0, sub_8197a0, sub_8198c0, sub_81aa40
*/
void sub_865910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865910ULL || rel >= 0x865a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865a20 size=320 callers=0 calls=12
   calls: sub_780c60, sub_7f0b70, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819680, sub_8196d0, sub_8197a0, sub_8198c0, sub_81aa40
*/
void sub_865a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865a20ULL || rel >= 0x865b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865b60 size=272 callers=0 calls=12
   calls: sub_780ec0, sub_7f0b70, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819680, sub_8196d0, sub_8197a0, sub_8198c0, sub_81aa40
*/
void sub_865b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865b60ULL || rel >= 0x865c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865c70 size=208 callers=0 calls=5
   calls: sub_819600, sub_819640, sub_8196a0, sub_8196b0, sub_8197a0
*/
void sub_865c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865c70ULL || rel >= 0x865d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865d40 size=192 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_8197a0, sub_81a030
*/
void sub_865d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865d40ULL || rel >= 0x865e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865e00 size=240 callers=0 calls=6
   calls: sub_780ec0, sub_803d20, sub_819600, sub_819640, sub_819680, sub_8197a0
*/
void sub_865e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865e00ULL || rel >= 0x865ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00865ef0 size=368 callers=0 calls=12
   calls: sub_7f79e0, sub_7f8bc0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196d0, sub_819730, sub_8197a0, sub_819b80, sub_81abd0
*/
void sub_865ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x865ef0ULL || rel >= 0x866060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866060 size=368 callers=0 calls=13
   calls: sub_7f0670, sub_7f8810, sub_7f88a0, sub_7f8bc0, sub_803c60, sub_819600, sub_8196a0, sub_8196d0, sub_819730, sub_8197a0, sub_819d00, sub_81a1d0
   ... +1 more
*/
void sub_866060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866060ULL || rel >= 0x8661d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008661d0 size=304 callers=0 calls=10
   calls: sub_7f8bc0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196d0, sub_8197a0, sub_819df0, sub_81abd0
*/
void sub_8661d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8661d0ULL || rel >= 0x866300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866300 size=16 callers=0 calls=0
*/
void sub_866300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866300ULL || rel >= 0x866310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866310 size=112 callers=0 calls=2
   calls: sub_819600, sub_8197a0
*/
void sub_866310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866310ULL || rel >= 0x866380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866380 size=96 callers=0 calls=2
   calls: sub_819600, sub_8197a0
*/
void sub_866380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866380ULL || rel >= 0x8663e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008663e0 size=416 callers=0 calls=15
   calls: sub_7f0670, sub_7f79e0, sub_7f8bc0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196d0, sub_8197a0, sub_8198c0, sub_819a30
   ... +3 more
*/
void sub_8663e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8663e0ULL || rel >= 0x866580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866580 size=96 callers=0 calls=2
   calls: sub_819600, sub_8197a0
*/
void sub_866580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866580ULL || rel >= 0x8665e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008665e0 size=416 callers=0 calls=15
   calls: sub_7f0670, sub_7f79e0, sub_7f8bc0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196d0, sub_8197a0, sub_8198c0, sub_819a30
   ... +3 more
*/
void sub_8665e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8665e0ULL || rel >= 0x866780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866780 size=416 callers=0 calls=15
   calls: sub_7f0670, sub_7f79e0, sub_7f8bc0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196d0, sub_8197a0, sub_8198c0, sub_819a30
   ... +3 more
*/
void sub_866780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866780ULL || rel >= 0x866920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866920 size=128 callers=0 calls=0
*/
void sub_866920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866920ULL || rel >= 0x8669a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008669a0 size=32 callers=0 calls=0
*/
void sub_8669a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8669a0ULL || rel >= 0x8669c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008669c0 size=32 callers=0 calls=0
*/
void sub_8669c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8669c0ULL || rel >= 0x8669e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008669e0 size=32 callers=0 calls=0
*/
void sub_8669e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8669e0ULL || rel >= 0x866a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866a00 size=32 callers=0 calls=0
*/
void sub_866a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866a00ULL || rel >= 0x866a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866a20 size=32 callers=0 calls=0
*/
void sub_866a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866a20ULL || rel >= 0x866a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866a40 size=32 callers=0 calls=0
*/
void sub_866a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866a40ULL || rel >= 0x866a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866a60 size=32 callers=0 calls=0
*/
void sub_866a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866a60ULL || rel >= 0x866a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866a80 size=32 callers=0 calls=0
*/
void sub_866a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866a80ULL || rel >= 0x866aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866aa0 size=32 callers=0 calls=0
*/
void sub_866aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866aa0ULL || rel >= 0x866ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866ac0 size=32 callers=0 calls=0
*/
void sub_866ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866ac0ULL || rel >= 0x866ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866ae0 size=32 callers=0 calls=0
*/
void sub_866ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866ae0ULL || rel >= 0x866b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866b00 size=32 callers=0 calls=0
*/
void sub_866b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866b00ULL || rel >= 0x866b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866b20 size=32 callers=0 calls=0
*/
void sub_866b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866b20ULL || rel >= 0x866b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866b40 size=32 callers=0 calls=0
*/
void sub_866b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866b40ULL || rel >= 0x866b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866b60 size=32 callers=0 calls=0
*/
void sub_866b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866b60ULL || rel >= 0x866b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866b80 size=32 callers=0 calls=0
*/
void sub_866b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866b80ULL || rel >= 0x866ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866ba0 size=32 callers=0 calls=0
*/
void sub_866ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866ba0ULL || rel >= 0x866bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866bc0 size=32 callers=0 calls=0
*/
void sub_866bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866bc0ULL || rel >= 0x866be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866be0 size=32 callers=0 calls=0
*/
void sub_866be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866be0ULL || rel >= 0x866c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866c00 size=32 callers=0 calls=0
*/
void sub_866c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866c00ULL || rel >= 0x866c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866c20 size=32 callers=0 calls=0
*/
void sub_866c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866c20ULL || rel >= 0x866c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866c40 size=32 callers=0 calls=0
*/
void sub_866c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866c40ULL || rel >= 0x866c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866c60 size=32 callers=0 calls=0
*/
void sub_866c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866c60ULL || rel >= 0x866c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866c80 size=32 callers=0 calls=0
*/
void sub_866c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866c80ULL || rel >= 0x866ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866ca0 size=32 callers=0 calls=0
*/
void sub_866ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866ca0ULL || rel >= 0x866cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866cc0 size=32 callers=0 calls=0
*/
void sub_866cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866cc0ULL || rel >= 0x866ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866ce0 size=32 callers=0 calls=0
*/
void sub_866ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866ce0ULL || rel >= 0x866d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866d00 size=32 callers=0 calls=0
*/
void sub_866d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866d00ULL || rel >= 0x866d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866d20 size=32 callers=0 calls=0
*/
void sub_866d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866d20ULL || rel >= 0x866d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866d40 size=32 callers=0 calls=0
*/
void sub_866d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866d40ULL || rel >= 0x866d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866d60 size=32 callers=0 calls=0
*/
void sub_866d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866d60ULL || rel >= 0x866d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866d80 size=32 callers=0 calls=0
*/
void sub_866d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866d80ULL || rel >= 0x866da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866da0 size=32 callers=0 calls=0
*/
void sub_866da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866da0ULL || rel >= 0x866dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866dc0 size=32 callers=0 calls=0
*/
void sub_866dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866dc0ULL || rel >= 0x866de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866de0 size=32 callers=0 calls=0
*/
void sub_866de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866de0ULL || rel >= 0x866e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866e00 size=32 callers=0 calls=0
*/
void sub_866e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866e00ULL || rel >= 0x866e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866e20 size=32 callers=0 calls=0
*/
void sub_866e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866e20ULL || rel >= 0x866e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866e40 size=32 callers=0 calls=0
*/
void sub_866e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866e40ULL || rel >= 0x866e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866e60 size=32 callers=0 calls=0
*/
void sub_866e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866e60ULL || rel >= 0x866e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866e80 size=32 callers=0 calls=0
*/
void sub_866e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866e80ULL || rel >= 0x866ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866ea0 size=32 callers=0 calls=0
*/
void sub_866ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866ea0ULL || rel >= 0x866ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866ec0 size=32 callers=0 calls=0
*/
void sub_866ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866ec0ULL || rel >= 0x866ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866ee0 size=32 callers=0 calls=0
*/
void sub_866ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866ee0ULL || rel >= 0x866f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866f00 size=32 callers=0 calls=0
*/
void sub_866f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866f00ULL || rel >= 0x866f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866f20 size=32 callers=0 calls=0
*/
void sub_866f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866f20ULL || rel >= 0x866f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866f40 size=32 callers=0 calls=0
*/
void sub_866f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866f40ULL || rel >= 0x866f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866f60 size=32 callers=0 calls=0
*/
void sub_866f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866f60ULL || rel >= 0x866f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866f80 size=32 callers=0 calls=0
*/
void sub_866f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866f80ULL || rel >= 0x866fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866fa0 size=32 callers=0 calls=0
*/
void sub_866fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866fa0ULL || rel >= 0x866fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866fc0 size=32 callers=0 calls=0
*/
void sub_866fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866fc0ULL || rel >= 0x866fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00866fe0 size=32 callers=0 calls=0
*/
void sub_866fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x866fe0ULL || rel >= 0x867000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867000 size=32 callers=0 calls=0
*/
void sub_867000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867000ULL || rel >= 0x867020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867020 size=32 callers=0 calls=0
*/
void sub_867020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867020ULL || rel >= 0x867040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867040 size=32 callers=0 calls=0
*/
void sub_867040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867040ULL || rel >= 0x867060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867060 size=32 callers=0 calls=0
*/
void sub_867060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867060ULL || rel >= 0x867080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867080 size=32 callers=0 calls=0
*/
void sub_867080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867080ULL || rel >= 0x8670a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008670a0 size=32 callers=0 calls=0
*/
void sub_8670a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8670a0ULL || rel >= 0x8670c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008670c0 size=32 callers=0 calls=0
*/
void sub_8670c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8670c0ULL || rel >= 0x8670e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008670e0 size=32 callers=0 calls=0
*/
void sub_8670e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8670e0ULL || rel >= 0x867100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867100 size=32 callers=0 calls=0
*/
void sub_867100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867100ULL || rel >= 0x867120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867120 size=32 callers=0 calls=0
*/
void sub_867120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867120ULL || rel >= 0x867140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867140 size=32 callers=0 calls=0
*/
void sub_867140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867140ULL || rel >= 0x867160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867160 size=32 callers=0 calls=0
*/
void sub_867160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867160ULL || rel >= 0x867180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867180 size=32 callers=0 calls=0
*/
void sub_867180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867180ULL || rel >= 0x8671a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008671a0 size=32 callers=0 calls=0
*/
void sub_8671a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8671a0ULL || rel >= 0x8671c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008671c0 size=32 callers=0 calls=0
*/
void sub_8671c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8671c0ULL || rel >= 0x8671e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008671e0 size=32 callers=0 calls=0
*/
void sub_8671e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8671e0ULL || rel >= 0x867200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867200 size=32 callers=0 calls=0
*/
void sub_867200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867200ULL || rel >= 0x867220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867220 size=32 callers=0 calls=0
*/
void sub_867220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867220ULL || rel >= 0x867240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867240 size=32 callers=0 calls=0
*/
void sub_867240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867240ULL || rel >= 0x867260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867260 size=32 callers=0 calls=0
*/
void sub_867260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867260ULL || rel >= 0x867280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867280 size=32 callers=0 calls=0
*/
void sub_867280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867280ULL || rel >= 0x8672a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008672a0 size=32 callers=0 calls=0
*/
void sub_8672a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8672a0ULL || rel >= 0x8672c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008672c0 size=32 callers=0 calls=0
*/
void sub_8672c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8672c0ULL || rel >= 0x8672e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008672e0 size=32 callers=0 calls=0
*/
void sub_8672e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8672e0ULL || rel >= 0x867300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867300 size=32 callers=0 calls=0
*/
void sub_867300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867300ULL || rel >= 0x867320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867320 size=32 callers=0 calls=0
*/
void sub_867320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867320ULL || rel >= 0x867340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867340 size=32 callers=0 calls=0
*/
void sub_867340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867340ULL || rel >= 0x867360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867360 size=32 callers=0 calls=0
*/
void sub_867360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867360ULL || rel >= 0x867380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867380 size=32 callers=0 calls=0
*/
void sub_867380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867380ULL || rel >= 0x8673a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008673a0 size=32 callers=0 calls=0
*/
void sub_8673a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8673a0ULL || rel >= 0x8673c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008673c0 size=32 callers=0 calls=0
*/
void sub_8673c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8673c0ULL || rel >= 0x8673e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008673e0 size=32 callers=0 calls=0
*/
void sub_8673e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8673e0ULL || rel >= 0x867400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867400 size=32 callers=0 calls=0
*/
void sub_867400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867400ULL || rel >= 0x867420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867420 size=32 callers=0 calls=0
*/
void sub_867420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867420ULL || rel >= 0x867440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867440 size=32 callers=0 calls=0
*/
void sub_867440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867440ULL || rel >= 0x867460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867460 size=32 callers=0 calls=0
*/
void sub_867460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867460ULL || rel >= 0x867480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867480 size=32 callers=0 calls=0
*/
void sub_867480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867480ULL || rel >= 0x8674a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008674a0 size=32 callers=0 calls=0
*/
void sub_8674a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8674a0ULL || rel >= 0x8674c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008674c0 size=32 callers=0 calls=0
*/
void sub_8674c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8674c0ULL || rel >= 0x8674e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008674e0 size=32 callers=0 calls=0
*/
void sub_8674e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8674e0ULL || rel >= 0x867500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867500 size=32 callers=0 calls=0
*/
void sub_867500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867500ULL || rel >= 0x867520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867520 size=32 callers=0 calls=0
*/
void sub_867520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867520ULL || rel >= 0x867540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867540 size=32 callers=0 calls=0
*/
void sub_867540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867540ULL || rel >= 0x867560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867560 size=32 callers=0 calls=0
*/
void sub_867560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867560ULL || rel >= 0x867580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867580 size=32 callers=0 calls=0
*/
void sub_867580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867580ULL || rel >= 0x8675a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008675a0 size=32 callers=0 calls=0
*/
void sub_8675a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8675a0ULL || rel >= 0x8675c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008675c0 size=32 callers=0 calls=0
*/
void sub_8675c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8675c0ULL || rel >= 0x8675e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008675e0 size=32 callers=0 calls=0
*/
void sub_8675e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8675e0ULL || rel >= 0x867600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867600 size=32 callers=0 calls=0
*/
void sub_867600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867600ULL || rel >= 0x867620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867620 size=32 callers=0 calls=0
*/
void sub_867620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867620ULL || rel >= 0x867640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867640 size=32 callers=0 calls=0
*/
void sub_867640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867640ULL || rel >= 0x867660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867660 size=32 callers=0 calls=0
*/
void sub_867660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867660ULL || rel >= 0x867680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867680 size=32 callers=0 calls=0
*/
void sub_867680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867680ULL || rel >= 0x8676a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008676a0 size=32 callers=0 calls=0
*/
void sub_8676a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8676a0ULL || rel >= 0x8676c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008676c0 size=32 callers=0 calls=0
*/
void sub_8676c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8676c0ULL || rel >= 0x8676e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008676e0 size=32 callers=0 calls=0
*/
void sub_8676e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8676e0ULL || rel >= 0x867700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867700 size=32 callers=0 calls=0
*/
void sub_867700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867700ULL || rel >= 0x867720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867720 size=32 callers=0 calls=0
*/
void sub_867720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867720ULL || rel >= 0x867740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867740 size=32 callers=0 calls=0
*/
void sub_867740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867740ULL || rel >= 0x867760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867760 size=32 callers=0 calls=0
*/
void sub_867760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867760ULL || rel >= 0x867780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867780 size=32 callers=0 calls=0
*/
void sub_867780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867780ULL || rel >= 0x8677a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008677a0 size=32 callers=0 calls=0
*/
void sub_8677a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8677a0ULL || rel >= 0x8677c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008677c0 size=32 callers=0 calls=0
*/
void sub_8677c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8677c0ULL || rel >= 0x8677e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008677e0 size=32 callers=0 calls=0
*/
void sub_8677e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8677e0ULL || rel >= 0x867800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867800 size=32 callers=0 calls=0
*/
void sub_867800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867800ULL || rel >= 0x867820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867820 size=32 callers=0 calls=0
*/
void sub_867820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867820ULL || rel >= 0x867840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867840 size=32 callers=0 calls=0
*/
void sub_867840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867840ULL || rel >= 0x867860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867860 size=32 callers=0 calls=0
*/
void sub_867860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867860ULL || rel >= 0x867880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867880 size=32 callers=0 calls=0
*/
void sub_867880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867880ULL || rel >= 0x8678a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008678a0 size=32 callers=0 calls=0
*/
void sub_8678a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8678a0ULL || rel >= 0x8678c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008678c0 size=32 callers=0 calls=0
*/
void sub_8678c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8678c0ULL || rel >= 0x8678e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008678e0 size=32 callers=0 calls=0
*/
void sub_8678e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8678e0ULL || rel >= 0x867900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867900 size=32 callers=0 calls=0
*/
void sub_867900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867900ULL || rel >= 0x867920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867920 size=32 callers=0 calls=0
*/
void sub_867920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867920ULL || rel >= 0x867940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867940 size=32 callers=0 calls=0
*/
void sub_867940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867940ULL || rel >= 0x867960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867960 size=32 callers=0 calls=0
*/
void sub_867960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867960ULL || rel >= 0x867980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867980 size=32 callers=0 calls=0
*/
void sub_867980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867980ULL || rel >= 0x8679a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008679a0 size=32 callers=0 calls=0
*/
void sub_8679a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8679a0ULL || rel >= 0x8679c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008679c0 size=32 callers=0 calls=0
*/
void sub_8679c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8679c0ULL || rel >= 0x8679e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008679e0 size=32 callers=0 calls=0
*/
void sub_8679e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8679e0ULL || rel >= 0x867a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867a00 size=32 callers=0 calls=0
*/
void sub_867a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867a00ULL || rel >= 0x867a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867a20 size=32 callers=0 calls=0
*/
void sub_867a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867a20ULL || rel >= 0x867a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867a40 size=32 callers=0 calls=0
*/
void sub_867a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867a40ULL || rel >= 0x867a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867a60 size=32 callers=0 calls=0
*/
void sub_867a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867a60ULL || rel >= 0x867a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867a80 size=32 callers=0 calls=0
*/
void sub_867a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867a80ULL || rel >= 0x867aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867aa0 size=32 callers=0 calls=0
*/
void sub_867aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867aa0ULL || rel >= 0x867ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867ac0 size=32 callers=0 calls=0
*/
void sub_867ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867ac0ULL || rel >= 0x867ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867ae0 size=32 callers=0 calls=0
*/
void sub_867ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867ae0ULL || rel >= 0x867b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867b00 size=32 callers=0 calls=0
*/
void sub_867b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867b00ULL || rel >= 0x867b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867b20 size=32 callers=0 calls=0
*/
void sub_867b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867b20ULL || rel >= 0x867b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867b40 size=32 callers=0 calls=0
*/
void sub_867b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867b40ULL || rel >= 0x867b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867b60 size=32 callers=0 calls=0
*/
void sub_867b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867b60ULL || rel >= 0x867b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867b80 size=32 callers=0 calls=0
*/
void sub_867b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867b80ULL || rel >= 0x867ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867ba0 size=32 callers=0 calls=0
*/
void sub_867ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867ba0ULL || rel >= 0x867bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867bc0 size=32 callers=0 calls=0
*/
void sub_867bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867bc0ULL || rel >= 0x867be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867be0 size=32 callers=0 calls=0
*/
void sub_867be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867be0ULL || rel >= 0x867c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867c00 size=32 callers=0 calls=0
*/
void sub_867c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867c00ULL || rel >= 0x867c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867c20 size=32 callers=0 calls=0
*/
void sub_867c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867c20ULL || rel >= 0x867c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867c40 size=32 callers=0 calls=0
*/
void sub_867c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867c40ULL || rel >= 0x867c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867c60 size=32 callers=0 calls=0
*/
void sub_867c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867c60ULL || rel >= 0x867c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867c80 size=32 callers=0 calls=0
*/
void sub_867c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867c80ULL || rel >= 0x867ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867ca0 size=32 callers=0 calls=0
*/
void sub_867ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867ca0ULL || rel >= 0x867cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867cc0 size=32 callers=0 calls=0
*/
void sub_867cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867cc0ULL || rel >= 0x867ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867ce0 size=32 callers=0 calls=0
*/
void sub_867ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867ce0ULL || rel >= 0x867d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867d00 size=32 callers=0 calls=0
*/
void sub_867d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867d00ULL || rel >= 0x867d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867d20 size=32 callers=0 calls=0
*/
void sub_867d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867d20ULL || rel >= 0x867d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867d40 size=32 callers=0 calls=0
*/
void sub_867d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867d40ULL || rel >= 0x867d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867d60 size=32 callers=0 calls=0
*/
void sub_867d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867d60ULL || rel >= 0x867d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867d80 size=32 callers=0 calls=0
*/
void sub_867d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867d80ULL || rel >= 0x867da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867da0 size=32 callers=0 calls=0
*/
void sub_867da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867da0ULL || rel >= 0x867dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867dc0 size=32 callers=0 calls=0
*/
void sub_867dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867dc0ULL || rel >= 0x867de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867de0 size=32 callers=0 calls=0
*/
void sub_867de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867de0ULL || rel >= 0x867e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867e00 size=32 callers=0 calls=0
*/
void sub_867e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867e00ULL || rel >= 0x867e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867e20 size=32 callers=0 calls=0
*/
void sub_867e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867e20ULL || rel >= 0x867e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867e40 size=32 callers=0 calls=0
*/
void sub_867e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867e40ULL || rel >= 0x867e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867e60 size=32 callers=0 calls=0
*/
void sub_867e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867e60ULL || rel >= 0x867e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867e80 size=32 callers=0 calls=0
*/
void sub_867e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867e80ULL || rel >= 0x867ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867ea0 size=32 callers=0 calls=0
*/
void sub_867ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867ea0ULL || rel >= 0x867ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867ec0 size=32 callers=0 calls=0
*/
void sub_867ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867ec0ULL || rel >= 0x867ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867ee0 size=32 callers=0 calls=0
*/
void sub_867ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867ee0ULL || rel >= 0x867f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867f00 size=32 callers=0 calls=0
*/
void sub_867f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867f00ULL || rel >= 0x867f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867f20 size=32 callers=0 calls=0
*/
void sub_867f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867f20ULL || rel >= 0x867f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867f40 size=32 callers=0 calls=0
*/
void sub_867f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867f40ULL || rel >= 0x867f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867f60 size=32 callers=0 calls=0
*/
void sub_867f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867f60ULL || rel >= 0x867f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867f80 size=32 callers=0 calls=0
*/
void sub_867f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867f80ULL || rel >= 0x867fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867fa0 size=32 callers=0 calls=0
*/
void sub_867fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867fa0ULL || rel >= 0x867fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867fc0 size=32 callers=0 calls=0
*/
void sub_867fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867fc0ULL || rel >= 0x867fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00867fe0 size=32 callers=0 calls=0
*/
void sub_867fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x867fe0ULL || rel >= 0x868000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868000 size=32 callers=0 calls=0
*/
void sub_868000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868000ULL || rel >= 0x868020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868020 size=32 callers=0 calls=0
*/
void sub_868020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868020ULL || rel >= 0x868040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868040 size=32 callers=0 calls=0
*/
void sub_868040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868040ULL || rel >= 0x868060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868060 size=32 callers=0 calls=0
*/
void sub_868060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868060ULL || rel >= 0x868080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868080 size=32 callers=0 calls=0
*/
void sub_868080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868080ULL || rel >= 0x8680a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008680a0 size=32 callers=0 calls=0
*/
void sub_8680a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8680a0ULL || rel >= 0x8680c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008680c0 size=32 callers=0 calls=0
*/
void sub_8680c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8680c0ULL || rel >= 0x8680e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008680e0 size=32 callers=0 calls=0
*/
void sub_8680e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8680e0ULL || rel >= 0x868100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868100 size=32 callers=0 calls=0
*/
void sub_868100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868100ULL || rel >= 0x868120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868120 size=32 callers=0 calls=0
*/
void sub_868120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868120ULL || rel >= 0x868140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868140 size=32 callers=0 calls=0
*/
void sub_868140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868140ULL || rel >= 0x868160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868160 size=32 callers=0 calls=0
*/
void sub_868160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868160ULL || rel >= 0x868180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868180 size=32 callers=0 calls=0
*/
void sub_868180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868180ULL || rel >= 0x8681a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008681a0 size=32 callers=0 calls=0
*/
void sub_8681a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8681a0ULL || rel >= 0x8681c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008681c0 size=32 callers=0 calls=0
*/
void sub_8681c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8681c0ULL || rel >= 0x8681e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008681e0 size=32 callers=0 calls=0
*/
void sub_8681e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8681e0ULL || rel >= 0x868200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868200 size=32 callers=0 calls=0
*/
void sub_868200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868200ULL || rel >= 0x868220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868220 size=32 callers=0 calls=0
*/
void sub_868220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868220ULL || rel >= 0x868240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868240 size=32 callers=0 calls=0
*/
void sub_868240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868240ULL || rel >= 0x868260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868260 size=32 callers=0 calls=0
*/
void sub_868260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868260ULL || rel >= 0x868280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868280 size=32 callers=0 calls=0
*/
void sub_868280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868280ULL || rel >= 0x8682a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008682a0 size=32 callers=0 calls=0
*/
void sub_8682a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8682a0ULL || rel >= 0x8682c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008682c0 size=32 callers=0 calls=0
*/
void sub_8682c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8682c0ULL || rel >= 0x8682e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008682e0 size=32 callers=0 calls=0
*/
void sub_8682e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8682e0ULL || rel >= 0x868300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868300 size=32 callers=0 calls=0
*/
void sub_868300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868300ULL || rel >= 0x868320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868320 size=32 callers=0 calls=0
*/
void sub_868320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868320ULL || rel >= 0x868340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868340 size=32 callers=0 calls=0
*/
void sub_868340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868340ULL || rel >= 0x868360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868360 size=32 callers=0 calls=0
*/
void sub_868360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868360ULL || rel >= 0x868380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868380 size=32 callers=0 calls=0
*/
void sub_868380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868380ULL || rel >= 0x8683a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008683a0 size=32 callers=0 calls=0
*/
void sub_8683a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8683a0ULL || rel >= 0x8683c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008683c0 size=32 callers=0 calls=0
*/
void sub_8683c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8683c0ULL || rel >= 0x8683e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008683e0 size=32 callers=0 calls=0
*/
void sub_8683e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8683e0ULL || rel >= 0x868400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868400 size=32 callers=0 calls=0
*/
void sub_868400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868400ULL || rel >= 0x868420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868420 size=32 callers=0 calls=0
*/
void sub_868420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868420ULL || rel >= 0x868440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868440 size=32 callers=0 calls=0
*/
void sub_868440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868440ULL || rel >= 0x868460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868460 size=32 callers=0 calls=0
*/
void sub_868460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868460ULL || rel >= 0x868480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868480 size=32 callers=0 calls=0
*/
void sub_868480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868480ULL || rel >= 0x8684a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008684a0 size=32 callers=0 calls=0
*/
void sub_8684a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8684a0ULL || rel >= 0x8684c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008684c0 size=32 callers=0 calls=0
*/
void sub_8684c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8684c0ULL || rel >= 0x8684e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008684e0 size=32 callers=0 calls=0
*/
void sub_8684e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8684e0ULL || rel >= 0x868500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868500 size=32 callers=0 calls=0
*/
void sub_868500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868500ULL || rel >= 0x868520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868520 size=32 callers=0 calls=0
*/
void sub_868520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868520ULL || rel >= 0x868540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868540 size=32 callers=0 calls=0
*/
void sub_868540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868540ULL || rel >= 0x868560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868560 size=32 callers=0 calls=0
*/
void sub_868560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868560ULL || rel >= 0x868580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868580 size=32 callers=0 calls=0
*/
void sub_868580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868580ULL || rel >= 0x8685a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008685a0 size=32 callers=0 calls=0
*/
void sub_8685a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8685a0ULL || rel >= 0x8685c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008685c0 size=32 callers=0 calls=0
*/
void sub_8685c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8685c0ULL || rel >= 0x8685e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008685e0 size=32 callers=0 calls=0
*/
void sub_8685e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8685e0ULL || rel >= 0x868600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868600 size=32 callers=0 calls=0
*/
void sub_868600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868600ULL || rel >= 0x868620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868620 size=32 callers=0 calls=0
*/
void sub_868620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868620ULL || rel >= 0x868640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868640 size=32 callers=0 calls=0
*/
void sub_868640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868640ULL || rel >= 0x868660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868660 size=32 callers=0 calls=0
*/
void sub_868660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868660ULL || rel >= 0x868680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868680 size=32 callers=0 calls=0
*/
void sub_868680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868680ULL || rel >= 0x8686a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008686a0 size=32 callers=0 calls=0
*/
void sub_8686a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8686a0ULL || rel >= 0x8686c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008686c0 size=32 callers=0 calls=0
*/
void sub_8686c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8686c0ULL || rel >= 0x8686e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008686e0 size=32 callers=0 calls=0
*/
void sub_8686e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8686e0ULL || rel >= 0x868700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868700 size=32 callers=0 calls=0
*/
void sub_868700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868700ULL || rel >= 0x868720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868720 size=32 callers=0 calls=0
*/
void sub_868720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868720ULL || rel >= 0x868740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868740 size=32 callers=0 calls=0
*/
void sub_868740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868740ULL || rel >= 0x868760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868760 size=32 callers=0 calls=0
*/
void sub_868760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868760ULL || rel >= 0x868780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868780 size=32 callers=0 calls=0
*/
void sub_868780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868780ULL || rel >= 0x8687a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008687a0 size=32 callers=0 calls=0
*/
void sub_8687a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8687a0ULL || rel >= 0x8687c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008687c0 size=32 callers=0 calls=0
*/
void sub_8687c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8687c0ULL || rel >= 0x8687e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008687e0 size=32 callers=0 calls=0
*/
void sub_8687e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8687e0ULL || rel >= 0x868800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868800 size=32 callers=0 calls=0
*/
void sub_868800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868800ULL || rel >= 0x868820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868820 size=32 callers=0 calls=0
*/
void sub_868820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868820ULL || rel >= 0x868840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868840 size=32 callers=0 calls=0
*/
void sub_868840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868840ULL || rel >= 0x868860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868860 size=32 callers=0 calls=0
*/
void sub_868860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868860ULL || rel >= 0x868880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868880 size=32 callers=0 calls=0
*/
void sub_868880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868880ULL || rel >= 0x8688a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008688a0 size=32 callers=0 calls=0
*/
void sub_8688a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8688a0ULL || rel >= 0x8688c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008688c0 size=32 callers=0 calls=0
*/
void sub_8688c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8688c0ULL || rel >= 0x8688e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008688e0 size=32 callers=0 calls=0
*/
void sub_8688e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8688e0ULL || rel >= 0x868900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868900 size=32 callers=0 calls=0
*/
void sub_868900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868900ULL || rel >= 0x868920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868920 size=32 callers=0 calls=0
*/
void sub_868920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868920ULL || rel >= 0x868940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868940 size=32 callers=0 calls=0
*/
void sub_868940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868940ULL || rel >= 0x868960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868960 size=32 callers=0 calls=0
*/
void sub_868960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868960ULL || rel >= 0x868980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868980 size=32 callers=0 calls=0
*/
void sub_868980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868980ULL || rel >= 0x8689a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008689a0 size=32 callers=0 calls=0
*/
void sub_8689a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8689a0ULL || rel >= 0x8689c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008689c0 size=32 callers=0 calls=0
*/
void sub_8689c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8689c0ULL || rel >= 0x8689e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008689e0 size=32 callers=0 calls=0
*/
void sub_8689e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8689e0ULL || rel >= 0x868a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868a00 size=320 callers=0 calls=6
   calls: sub_7e8c60, sub_7e8c70, sub_7e9ba0, sub_7eafc0, sub_7eb050, sub_7ee6b0
*/
void sub_868a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868a00ULL || rel >= 0x868b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868b40 size=176 callers=0 calls=7
   calls: sub_7e8c60, sub_7e8d00, sub_7e9a00, sub_7e9ba0, sub_7eafc0, sub_7eb050, sub_7ee6b0
*/
void sub_868b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868b40ULL || rel >= 0x868bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868bf0 size=176 callers=3 calls=6
   calls: sub_7e8c60, sub_7e8d00, sub_7e9ba0, sub_7eafc0, sub_7eb050, sub_7ee6b0
*/
void sub_868bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868bf0ULL || rel >= 0x868ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868ca0 size=112 callers=0 calls=4
   calls: sub_7e8c60, sub_7e8d00, sub_7eafc0, sub_7ee6b0
*/
void sub_868ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868ca0ULL || rel >= 0x868d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868d10 size=96 callers=0 calls=2
   calls: sub_819600, sub_819790
*/
void sub_868d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868d10ULL || rel >= 0x868d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868d70 size=128 callers=0 calls=4
   calls: sub_7ee800, sub_819600, sub_8196d0, sub_819790
*/
void sub_868d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868d70ULL || rel >= 0x868df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868df0 size=96 callers=0 calls=3
   calls: sub_7ee800, sub_819600, sub_8196d0
*/
void sub_868df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868df0ULL || rel >= 0x868e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868e50 size=128 callers=0 calls=3
   calls: sub_7ee6c0, sub_819600, sub_8196d0
*/
void sub_868e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868e50ULL || rel >= 0x868ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868ed0 size=144 callers=0 calls=6
   calls: sub_7ee800, sub_7ee810, sub_7f36f0, sub_7fc800, sub_819600, sub_8196d0
*/
void sub_868ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868ed0ULL || rel >= 0x868f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00868f60 size=208 callers=0 calls=8
   calls: sub_780d40, sub_7efef0, sub_7f0670, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819fb0
*/
void sub_868f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x868f60ULL || rel >= 0x869030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869030 size=272 callers=0 calls=9
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819970, sub_81a290, sub_81a2d0
*/
void sub_869030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869030ULL || rel >= 0x869140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869140 size=208 callers=0 calls=7
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_819600, sub_819640, sub_819970, sub_81a290
*/
void sub_869140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869140ULL || rel >= 0x869210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869210 size=544 callers=0 calls=10
   calls: sub_7ebf20, sub_7ebf50, sub_803c60, sub_819600, sub_819640, sub_8197a0, sub_819970, sub_819df0, sub_81a1d0, sub_81a2d0
*/
void sub_869210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869210ULL || rel >= 0x869430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869430 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_869430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869430ULL || rel >= 0x869480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869480 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_869480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869480ULL || rel >= 0x8694c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008694c0 size=224 callers=0 calls=5
   calls: sub_7cc000, sub_819600, sub_81a1d0, sub_81aab0, sub_8651b0
*/
void sub_8694c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8694c0ULL || rel >= 0x8695a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008695a0 size=64 callers=0 calls=0
*/
void sub_8695a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8695a0ULL || rel >= 0x8695e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008695e0 size=208 callers=0 calls=7
   calls: sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819b80
*/
void sub_8695e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8695e0ULL || rel >= 0x8696b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008696b0 size=368 callers=0 calls=15
   calls: sub_7eb260, sub_7eb9b0, sub_7ef220, sub_7f0540, sub_7f2520, sub_7f2540, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690
   ... +3 more
*/
void sub_8696b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8696b0ULL || rel >= 0x869820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869820 size=368 callers=0 calls=15
   calls: sub_7ef220, sub_7f0500, sub_7f0540, sub_7f2520, sub_7f2540, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_8196d0
   ... +3 more
*/
void sub_869820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869820ULL || rel >= 0x869990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869990 size=96 callers=0 calls=3
   calls: sub_819600, sub_819610, sub_819790
*/
void sub_869990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869990ULL || rel >= 0x8699f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008699f0 size=176 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196b0, sub_81a030
*/
void sub_8699f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8699f0ULL || rel >= 0x869aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869aa0 size=16 callers=0 calls=0
*/
void sub_869aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869aa0ULL || rel >= 0x869ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869ab0 size=176 callers=0 calls=6
   calls: sub_7e8c60, sub_7e8d00, sub_7e9ba0, sub_7eafc0, sub_7eb050, sub_819690
*/
void sub_869ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869ab0ULL || rel >= 0x869b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869b60 size=160 callers=0 calls=5
   calls: sub_7eef50, sub_7f0670, sub_819600, sub_8196d0, sub_81c060
*/
void sub_869b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869b60ULL || rel >= 0x869c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869c00 size=112 callers=0 calls=3
   calls: sub_7f0670, sub_819600, sub_8196d0
*/
void sub_869c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869c00ULL || rel >= 0x869c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869c70 size=272 callers=0 calls=10
   calls: sub_7ef4c0, sub_7f0670, sub_7f7940, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819d00
*/
void sub_869c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869c70ULL || rel >= 0x869d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869d80 size=208 callers=0 calls=9
   calls: sub_7f8cf0, sub_803c60, sub_803d20, sub_819600, sub_819640, sub_819e70, sub_81a030, sub_81bf40, sub_81c1b0
*/
void sub_869d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869d80ULL || rel >= 0x869e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869e50 size=96 callers=0 calls=2
   calls: sub_819600, sub_819970
*/
void sub_869e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869e50ULL || rel >= 0x869eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869eb0 size=144 callers=0 calls=5
   calls: sub_803c60, sub_803d20, sub_819600, sub_819640, sub_81a030
*/
void sub_869eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869eb0ULL || rel >= 0x869f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00869f40 size=224 callers=0 calls=9
   calls: sub_7cb490, sub_7ccca0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_81a030, sub_81aae0
*/
void sub_869f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x869f40ULL || rel >= 0x86a020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a020 size=128 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_819790, sub_81aae0
*/
void sub_86a020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a020ULL || rel >= 0x86a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a0a0 size=96 callers=0 calls=3
   calls: sub_7f80c0, sub_819600, sub_8196d0
*/
void sub_86a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a0a0ULL || rel >= 0x86a100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a100 size=688 callers=0 calls=14
   calls: sub_7eef50, sub_7f0670, sub_7f79e0, sub_7f8810, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819bc0, sub_819d00
   ... +2 more
*/
void sub_86a100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a100ULL || rel >= 0x86a3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a3b0 size=96 callers=0 calls=3
   calls: sub_7f0670, sub_819600, sub_8196d0
*/
void sub_86a3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a3b0ULL || rel >= 0x86a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a410 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_86a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a410ULL || rel >= 0x86a460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a460 size=144 callers=0 calls=3
   calls: sub_7eef50, sub_819600, sub_8196d0
*/
void sub_86a460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a460ULL || rel >= 0x86a4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a4f0 size=208 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_81a4a0
*/
void sub_86a4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a4f0ULL || rel >= 0x86a5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a5c0 size=112 callers=0 calls=3
   calls: sub_7ef5d0, sub_819600, sub_8196d0
*/
void sub_86a5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a5c0ULL || rel >= 0x86a630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a630 size=144 callers=0 calls=5
   calls: sub_7f7690, sub_7f78c0, sub_819600, sub_819640, sub_819680
*/
void sub_86a630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a630ULL || rel >= 0x86a6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a6c0 size=272 callers=0 calls=6
   calls: sub_7ef2b0, sub_7ef4c0, sub_803c60, sub_819600, sub_8196d0, sub_819c80
*/
void sub_86a6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a6c0ULL || rel >= 0x86a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a7d0 size=272 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819c80
*/
void sub_86a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a7d0ULL || rel >= 0x86a8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a8e0 size=96 callers=0 calls=3
   calls: sub_819600, sub_819680, sub_819690
*/
void sub_86a8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a8e0ULL || rel >= 0x86a940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086a940 size=352 callers=0 calls=5
   calls: sub_803d20, sub_803d60, sub_819600, sub_819680, sub_819690
*/
void sub_86a940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86a940ULL || rel >= 0x86aaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086aaa0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_86aaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86aaa0ULL || rel >= 0x86ab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086ab00 size=112 callers=0 calls=3
   calls: sub_7f05a0, sub_819600, sub_8196d0
*/
void sub_86ab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86ab00ULL || rel >= 0x86ab70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086ab70 size=144 callers=0 calls=4
   calls: sub_7eef50, sub_819600, sub_819640, sub_8196d0
*/
void sub_86ab70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86ab70ULL || rel >= 0x86ac00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086ac00 size=176 callers=0 calls=3
   calls: sub_7eef50, sub_819600, sub_8196d0
*/
void sub_86ac00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86ac00ULL || rel >= 0x86acb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086acb0 size=176 callers=0 calls=4
   calls: sub_7eef50, sub_819600, sub_819640, sub_8196d0
*/
void sub_86acb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86acb0ULL || rel >= 0x86ad60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086ad60 size=112 callers=0 calls=4
   calls: sub_7eef50, sub_819600, sub_819640, sub_8196d0
*/
void sub_86ad60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86ad60ULL || rel >= 0x86add0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086add0 size=112 callers=0 calls=3
   calls: sub_7f0ba0, sub_819600, sub_8196d0
*/
void sub_86add0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86add0ULL || rel >= 0x86ae40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086ae40 size=496 callers=0 calls=10
   calls: sub_7f0ba0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819df0, sub_81a030, sub_81a6b0
*/
void sub_86ae40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86ae40ULL || rel >= 0x86b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b030 size=112 callers=0 calls=3
   calls: sub_7f0ba0, sub_819600, sub_8196d0
*/
void sub_86b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b030ULL || rel >= 0x86b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b0a0 size=112 callers=0 calls=3
   calls: sub_7f0ba0, sub_819600, sub_8196d0
*/
void sub_86b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b0a0ULL || rel >= 0x86b110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b110 size=496 callers=0 calls=9
   calls: sub_7f0ba0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_819df0, sub_81a030, sub_81a6b0
*/
void sub_86b110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b110ULL || rel >= 0x86b300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b300 size=128 callers=0 calls=3
   calls: sub_7f0ba0, sub_819600, sub_8196d0
*/
void sub_86b300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b300ULL || rel >= 0x86b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b380 size=192 callers=0 calls=5
   calls: sub_7cbf80, sub_7f2650, sub_819600, sub_819640, sub_8196d0
*/
void sub_86b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b380ULL || rel >= 0x86b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b440 size=16 callers=0 calls=0
*/
void sub_86b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b440ULL || rel >= 0x86b450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b450 size=240 callers=0 calls=6
   calls: sub_7cbf80, sub_7f2650, sub_7f7700, sub_819600, sub_819640, sub_8196d0
*/
void sub_86b450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b450ULL || rel >= 0x86b540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b540 size=240 callers=0 calls=6
   calls: sub_819600, sub_819640, sub_819700, sub_81ab90, sub_81bf40, sub_86b9a0
*/
void sub_86b540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b540ULL || rel >= 0x86b630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b630 size=192 callers=0 calls=5
   calls: sub_7cbf80, sub_7f2650, sub_819600, sub_819640, sub_8196d0
*/
void sub_86b630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b630ULL || rel >= 0x86b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b6f0 size=16 callers=0 calls=0
*/
void sub_86b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b6f0ULL || rel >= 0x86b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b700 size=240 callers=0 calls=6
   calls: sub_7cbf80, sub_7f2650, sub_7f7700, sub_819600, sub_819640, sub_8196d0
*/
void sub_86b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b700ULL || rel >= 0x86b7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b7f0 size=192 callers=0 calls=5
   calls: sub_7cbf80, sub_7f2650, sub_819600, sub_819640, sub_8196d0
*/
void sub_86b7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b7f0ULL || rel >= 0x86b8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b8b0 size=16 callers=0 calls=0
*/
void sub_86b8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b8b0ULL || rel >= 0x86b8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b8c0 size=224 callers=0 calls=6
   calls: sub_7cbf80, sub_7f2650, sub_7f7700, sub_819600, sub_819640, sub_8196d0
*/
void sub_86b8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b8c0ULL || rel >= 0x86b9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086b9a0 size=256 callers=1 calls=3
   calls: sub_7cbf80, sub_7f2650, sub_8196d0
*/
void sub_86b9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86b9a0ULL || rel >= 0x86baa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086baa0 size=224 callers=0 calls=5
   calls: sub_7efe00, sub_7efef0, sub_7eff30, sub_819600, sub_8196d0
*/
void sub_86baa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86baa0ULL || rel >= 0x86bb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086bb80 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_86bb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86bb80ULL || rel >= 0x86bbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086bbe0 size=160 callers=0 calls=3
   calls: sub_7ef5d0, sub_819600, sub_8196d0
*/
void sub_86bbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86bbe0ULL || rel >= 0x86bc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086bc80 size=160 callers=0 calls=6
   calls: sub_780ec0, sub_7f0aa0, sub_819600, sub_8196d0, sub_819910, sub_82d7e0
*/
void sub_86bc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86bc80ULL || rel >= 0x86bd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086bd20 size=160 callers=0 calls=5
   calls: sub_819600, sub_819690, sub_81aab0, sub_81ac90, sub_81bf40
*/
void sub_86bd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86bd20ULL || rel >= 0x86bdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086bdc0 size=128 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819f70
*/
void sub_86bdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86bdc0ULL || rel >= 0x86be40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086be40 size=128 callers=0 calls=3
   calls: sub_803c60, sub_819600, sub_819f70
*/
void sub_86be40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86be40ULL || rel >= 0x86bec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086bec0 size=208 callers=0 calls=9
   calls: sub_7f05a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_81a030, sub_81a0e0
*/
void sub_86bec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86bec0ULL || rel >= 0x86bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086bf90 size=256 callers=0 calls=9
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819690, sub_8196b0, sub_81a030, sub_81a0e0
*/
void sub_86bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86bf90ULL || rel >= 0x86c090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c090 size=112 callers=0 calls=2
   calls: sub_819600, sub_819690
*/
void sub_86c090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c090ULL || rel >= 0x86c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c100 size=112 callers=0 calls=2
   calls: sub_819600, sub_819690
*/
void sub_86c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c100ULL || rel >= 0x86c170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c170 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_86c170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c170ULL || rel >= 0x86c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c1e0 size=112 callers=0 calls=4
   calls: sub_819600, sub_8196a0, sub_8196c0, sub_81a120
*/
void sub_86c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c1e0ULL || rel >= 0x86c250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c250 size=112 callers=0 calls=4
   calls: sub_803c60, sub_803d20, sub_819600, sub_81a030
*/
void sub_86c250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c250ULL || rel >= 0x86c2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c2c0 size=112 callers=0 calls=4
   calls: sub_7f8820, sub_819600, sub_819680, sub_81bf40
*/
void sub_86c2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c2c0ULL || rel >= 0x86c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c330 size=144 callers=0 calls=7
   calls: sub_7eef50, sub_803c60, sub_803d20, sub_819600, sub_8196d0, sub_81a030, sub_81c2b0
*/
void sub_86c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c330ULL || rel >= 0x86c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c3c0 size=240 callers=0 calls=9
   calls: sub_7ef4c0, sub_7f8810, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819d00
*/
void sub_86c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c3c0ULL || rel >= 0x86c4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c4b0 size=352 callers=0 calls=11
   calls: sub_7ee800, sub_7ef4c0, sub_7f7690, sub_7f87c0, sub_803c60, sub_819600, sub_819690, sub_8196a0, sub_8196b0, sub_8196d0, sub_819d00
*/
void sub_86c4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c4b0ULL || rel >= 0x86c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c610 size=560 callers=0 calls=14
   calls: sub_7e9830, sub_7e9ba0, sub_7ef770, sub_7f7770, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196a0, sub_8196d0, sub_819c80
   ... +2 more
*/
void sub_86c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c610ULL || rel >= 0x86c840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c840 size=336 callers=0 calls=9
   calls: sub_7ef4c0, sub_7ef5d0, sub_803c60, sub_819600, sub_819690, sub_8196a0, sub_8196d0, sub_819c80, sub_868bf0
*/
void sub_86c840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c840ULL || rel >= 0x86c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086c990 size=672 callers=0 calls=19
   calls: sub_7e9830, sub_7e9ba0, sub_7ee800, sub_7ef4c0, sub_7ef5d0, sub_7f87c0, sub_7f8cf0, sub_803c60, sub_803d20, sub_803d60, sub_819690, sub_8196a0
   ... +7 more
*/
void sub_86c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86c990ULL || rel >= 0x86cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086cc30 size=272 callers=0 calls=5
   calls: sub_7e9830, sub_7e9ba0, sub_803c60, sub_819600, sub_819c80
*/
void sub_86cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86cc30ULL || rel >= 0x86cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086cd40 size=480 callers=0 calls=12
   calls: sub_7ef2b0, sub_7ef4c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8196a0, sub_8196d0, sub_819c80, sub_81a030, sub_868bf0
*/
void sub_86cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86cd40ULL || rel >= 0x86cf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086cf20 size=208 callers=0 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196a0, sub_81a030
*/
void sub_86cf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86cf20ULL || rel >= 0x86cff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086cff0 size=64 callers=0 calls=1
   calls: sub_8196a0
*/
void sub_86cff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86cff0ULL || rel >= 0x86d030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d030 size=288 callers=0 calls=11
   calls: sub_7ee800, sub_7ef4c0, sub_7ef5d0, sub_7f87c0, sub_803c60, sub_819600, sub_819690, sub_8196a0, sub_8196b0, sub_8196d0, sub_819d00
*/
void sub_86d030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d030ULL || rel >= 0x86d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d150 size=128 callers=0 calls=2
   calls: sub_7e9830, sub_7e9ba0
*/
void sub_86d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d150ULL || rel >= 0x86d1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d1d0 size=144 callers=0 calls=3
   calls: sub_7e9830, sub_7e9ba0, sub_819600
*/
void sub_86d1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d1d0ULL || rel >= 0x86d260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d260 size=384 callers=0 calls=12
   calls: sub_7e8c60, sub_7e8d00, sub_7e9ba0, sub_7eafc0, sub_7eb050, sub_7f05a0, sub_819600, sub_819690, sub_8196a0, sub_8196b0, sub_8196d0, sub_81b500
*/
void sub_86d260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d260ULL || rel >= 0x86d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d3e0 size=288 callers=0 calls=9
   calls: sub_7e8c60, sub_7e8d00, sub_7e9ba0, sub_7eafc0, sub_7eb050, sub_803c60, sub_819690, sub_8196b0, sub_819c80
*/
void sub_86d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d3e0ULL || rel >= 0x86d500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d500 size=128 callers=0 calls=3
   calls: sub_819600, sub_8196a0, sub_8196b0
*/
void sub_86d500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d500ULL || rel >= 0x86d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d580 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_86d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d580ULL || rel >= 0x86d5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d5d0 size=208 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_8196d0, sub_81ab50
*/
void sub_86d5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d5d0ULL || rel >= 0x86d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d6a0 size=192 callers=0 calls=4
   calls: sub_7f2650, sub_819600, sub_8196d0, sub_81b500
*/
void sub_86d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d6a0ULL || rel >= 0x86d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d760 size=240 callers=0 calls=3
   calls: sub_7eef50, sub_819600, sub_8196d0
*/
void sub_86d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d760ULL || rel >= 0x86d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d850 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_86d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d850ULL || rel >= 0x86d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d8a0 size=128 callers=0 calls=3
   calls: sub_7ef6a0, sub_819600, sub_8196d0
*/
void sub_86d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d8a0ULL || rel >= 0x86d920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d920 size=112 callers=0 calls=3
   calls: sub_7f0aa0, sub_819600, sub_8196d0
*/
void sub_86d920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d920ULL || rel >= 0x86d990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086d990 size=160 callers=0 calls=5
   calls: sub_780d10, sub_7eef50, sub_819600, sub_819690, sub_8196d0
*/
void sub_86d990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86d990ULL || rel >= 0x86da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086da30 size=144 callers=0 calls=4
   calls: sub_7f0bb0, sub_7f7720, sub_819600, sub_8196d0
*/
void sub_86da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86da30ULL || rel >= 0x86dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086dac0 size=112 callers=0 calls=3
   calls: sub_7f0bb0, sub_819600, sub_8196d0
*/
void sub_86dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86dac0ULL || rel >= 0x86db30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086db30 size=192 callers=0 calls=5
   calls: sub_7f2510, sub_7f2520, sub_819600, sub_819690, sub_8196d0
*/
void sub_86db30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86db30ULL || rel >= 0x86dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086dbf0 size=112 callers=0 calls=3
   calls: sub_7f0aa0, sub_819600, sub_8196d0
*/
void sub_86dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86dbf0ULL || rel >= 0x86dc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086dc60 size=176 callers=0 calls=3
   calls: sub_819600, sub_819640, sub_81ac10
*/
void sub_86dc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86dc60ULL || rel >= 0x86dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086dd10 size=208 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_81a350, sub_81aab0
*/
void sub_86dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86dd10ULL || rel >= 0x86dde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086dde0 size=144 callers=0 calls=2
   calls: sub_819600, sub_81a350
*/
void sub_86dde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86dde0ULL || rel >= 0x86de70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086de70 size=176 callers=0 calls=4
   calls: sub_819600, sub_819690, sub_81a350, sub_82da30
*/
void sub_86de70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86de70ULL || rel >= 0x86df20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086df20 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_86df20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86df20ULL || rel >= 0x86df80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086df80 size=112 callers=0 calls=3
   calls: sub_7f05a0, sub_819600, sub_8196d0
*/
void sub_86df80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86df80ULL || rel >= 0x86dff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086dff0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_86dff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86dff0ULL || rel >= 0x86e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e050 size=112 callers=0 calls=3
   calls: sub_7f7dd0, sub_819600, sub_81a350
*/
void sub_86e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e050ULL || rel >= 0x86e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e0c0 size=96 callers=0 calls=3
   calls: sub_7f7db0, sub_819600, sub_81a350
*/
void sub_86e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e0c0ULL || rel >= 0x86e120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e120 size=96 callers=0 calls=2
   calls: sub_819600, sub_81a310
*/
void sub_86e120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e120ULL || rel >= 0x86e180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e180 size=112 callers=0 calls=3
   calls: sub_7f0670, sub_819600, sub_8196d0
*/
void sub_86e180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e180ULL || rel >= 0x86e1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e1f0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_86e1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e1f0ULL || rel >= 0x86e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e250 size=112 callers=0 calls=3
   calls: sub_7f05a0, sub_819600, sub_8196d0
*/
void sub_86e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e250ULL || rel >= 0x86e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e2c0 size=288 callers=0 calls=4
   calls: sub_7f09c0, sub_819600, sub_8196d0, sub_81bfc0
*/
void sub_86e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e2c0ULL || rel >= 0x86e3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e3e0 size=128 callers=0 calls=4
   calls: sub_7f09c0, sub_819600, sub_8196d0, sub_81bfc0
*/
void sub_86e3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e3e0ULL || rel >= 0x86e460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e460 size=320 callers=0 calls=5
   calls: sub_7f09c0, sub_819600, sub_819690, sub_8196d0, sub_82da30
*/
void sub_86e460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e460ULL || rel >= 0x86e5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e5a0 size=240 callers=0 calls=6
   calls: sub_7f09c0, sub_819600, sub_819640, sub_8196d0, sub_81aab0, sub_81bfc0
*/
void sub_86e5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e5a0ULL || rel >= 0x86e690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e690 size=176 callers=0 calls=5
   calls: sub_7f09c0, sub_819600, sub_819690, sub_8196d0, sub_82da30
*/
void sub_86e690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e690ULL || rel >= 0x86e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e740 size=96 callers=0 calls=2
   calls: sub_819600, sub_81b7a0
*/
void sub_86e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e740ULL || rel >= 0x86e7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e7a0 size=144 callers=0 calls=4
   calls: sub_7f09c0, sub_819600, sub_8196d0, sub_81b100
*/
void sub_86e7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e7a0ULL || rel >= 0x86e830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e830 size=256 callers=0 calls=8
   calls: sub_7f09c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a510, sub_81b100
*/
void sub_86e830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e830ULL || rel >= 0x86e930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e930 size=160 callers=0 calls=4
   calls: sub_819600, sub_819690, sub_8197f0, sub_81ae20
*/
void sub_86e930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e930ULL || rel >= 0x86e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086e9d0 size=192 callers=0 calls=8
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_86e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86e9d0ULL || rel >= 0x86ea90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086ea90 size=16 callers=0 calls=0
*/
void sub_86ea90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86ea90ULL || rel >= 0x86eaa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086eaa0 size=96 callers=0 calls=2
   calls: sub_819600, sub_819640
*/
void sub_86eaa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86eaa0ULL || rel >= 0x86eb00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086eb00 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_86eb00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86eb00ULL || rel >= 0x86eb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086eb40 size=16 callers=0 calls=0
*/
void sub_86eb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86eb40ULL || rel >= 0x86eb50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086eb50 size=336 callers=0 calls=10
   calls: sub_7f09c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a550, sub_81aab0, sub_81b100, sub_81b8d0
*/
void sub_86eb50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86eb50ULL || rel >= 0x86eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086eca0 size=528 callers=0 calls=12
   calls: sub_7eef40, sub_7f09c0, sub_7f7b30, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_81a550, sub_81af00, sub_81b090
*/
void sub_86eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86eca0ULL || rel >= 0x86eeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086eeb0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_86eeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86eeb0ULL || rel >= 0x86ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086ef10 size=112 callers=0 calls=3
   calls: sub_7f05a0, sub_819600, sub_8196d0
*/
void sub_86ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86ef10ULL || rel >= 0x86ef80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086ef80 size=112 callers=0 calls=3
   calls: sub_7f05a0, sub_819600, sub_8196d0
*/
void sub_86ef80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86ef80ULL || rel >= 0x86eff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086eff0 size=112 callers=0 calls=3
   calls: sub_7f05a0, sub_819600, sub_8196d0
*/
void sub_86eff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86eff0ULL || rel >= 0x86f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f060 size=112 callers=0 calls=3
   calls: sub_7ee6c0, sub_819600, sub_8196d0
*/
void sub_86f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f060ULL || rel >= 0x86f0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f0d0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_86f0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f0d0ULL || rel >= 0x86f130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f130 size=272 callers=0 calls=5
   calls: sub_7f2520, sub_819600, sub_819690, sub_8196d0, sub_81a6b0
*/
void sub_86f130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f130ULL || rel >= 0x86f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f240 size=208 callers=0 calls=6
   calls: sub_7f0ba0, sub_7f7690, sub_819600, sub_819690, sub_8196d0, sub_81ae20
*/
void sub_86f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f240ULL || rel >= 0x86f310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f310 size=128 callers=0 calls=4
   calls: sub_819600, sub_819690, sub_8196c0, sub_81a6b0
*/
void sub_86f310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f310ULL || rel >= 0x86f390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f390 size=240 callers=0 calls=10
   calls: sub_7f0ba0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196b0, sub_8196d0, sub_81a030, sub_81a6b0
*/
void sub_86f390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f390ULL || rel >= 0x86f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f480 size=112 callers=0 calls=2
   calls: sub_819600, sub_8196a0
*/
void sub_86f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f480ULL || rel >= 0x86f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f4f0 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_86f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f4f0ULL || rel >= 0x86f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f530 size=64 callers=0 calls=2
   calls: sub_819640, sub_86f640
*/
void sub_86f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f530ULL || rel >= 0x86f570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f570 size=128 callers=0 calls=4
   calls: sub_7f0aa0, sub_819600, sub_819640, sub_8196d0
*/
void sub_86f570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f570ULL || rel >= 0x86f5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f5f0 size=16 callers=0 calls=0
*/
void sub_86f5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f5f0ULL || rel >= 0x86f600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f600 size=64 callers=0 calls=1
   calls: sub_819600
*/
void sub_86f600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f600ULL || rel >= 0x86f640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f640 size=224 callers=2 calls=9
   calls: sub_7f0ba0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196d0, sub_81a030, sub_81a060, sub_81a6b0
*/
void sub_86f640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f640ULL || rel >= 0x86f720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f720 size=192 callers=1 calls=7
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196b0, sub_81a030
*/
void sub_86f720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f720ULL || rel >= 0x86f7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f7e0 size=256 callers=0 calls=9
   calls: sub_7f09c0, sub_7f24b0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_81a510
*/
void sub_86f7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f7e0ULL || rel >= 0x86f8e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086f8e0 size=400 callers=0 calls=11
   calls: sub_7ef6a0, sub_7ef750, sub_7f78c0, sub_7f88a0, sub_7f88c0, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819c80, sub_819d00
*/
void sub_86f8e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86f8e0ULL || rel >= 0x86fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086fa70 size=336 callers=0 calls=9
   calls: sub_7eef50, sub_803c60, sub_803d20, sub_819600, sub_819640, sub_8196d0, sub_819bc0, sub_81a030, sub_81a590
*/
void sub_86fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86fa70ULL || rel >= 0x86fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086fbc0 size=400 callers=0 calls=13
   calls: sub_7eef50, sub_7f0c80, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819bc0, sub_819df0, sub_81a030
   ... +1 more
*/
void sub_86fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86fbc0ULL || rel >= 0x86fd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086fd50 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_86fd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86fd50ULL || rel >= 0x86fda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086fda0 size=16 callers=0 calls=0
*/
void sub_86fda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86fda0ULL || rel >= 0x86fdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086fdb0 size=16 callers=0 calls=0
*/
void sub_86fdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86fdb0ULL || rel >= 0x86fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086fdc0 size=160 callers=0 calls=4
   calls: sub_7f0aa0, sub_819600, sub_8196d0, sub_86ff60
*/
void sub_86fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86fdc0ULL || rel >= 0x86fe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086fe60 size=256 callers=0 calls=4
   calls: sub_7eb300, sub_819600, sub_8197a0, sub_81a210
*/
void sub_86fe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86fe60ULL || rel >= 0x86ff60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0086ff60 size=784 callers=5 calls=3
   calls: sub_7eb300, sub_8197a0, sub_8651b0
*/
void sub_86ff60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x86ff60ULL || rel >= 0x870270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00870270 size=384 callers=0 calls=12
   calls: sub_7eb300, sub_7ee6b0, sub_7f0aa0, sub_803c60, sub_803d20, sub_803d60, sub_8197a0, sub_81a030, sub_81a0a0, sub_81a1d0, sub_81a6b0, sub_86ff60
*/
void sub_870270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x870270ULL || rel >= 0x8703f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008703f0 size=160 callers=0 calls=4
   calls: sub_7f0aa0, sub_819600, sub_8196d0, sub_86ff60
*/
void sub_8703f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8703f0ULL || rel >= 0x870490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00870490 size=672 callers=0 calls=7
   calls: sub_7f0c00, sub_7f7690, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819df0
*/
void sub_870490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x870490ULL || rel >= 0x870730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00870730 size=256 callers=0 calls=6
   calls: sub_7eef50, sub_7ef4c0, sub_7ef540, sub_7ef5d0, sub_819600, sub_8196d0
*/
void sub_870730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x870730ULL || rel >= 0x870830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00870830 size=384 callers=0 calls=12
   calls: sub_7eef50, sub_7ef540, sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819b00, sub_819d00, sub_81a590
*/
void sub_870830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x870830ULL || rel >= 0x8709b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008709b0 size=192 callers=0 calls=3
   calls: sub_7eef50, sub_819600, sub_8196d0
*/
void sub_8709b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8709b0ULL || rel >= 0x870a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00870a70 size=368 callers=0 calls=9
   calls: sub_7f0670, sub_7f2530, sub_7f7220, sub_7f7690, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819fb0
*/
void sub_870a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x870a70ULL || rel >= 0x870be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00870be0 size=352 callers=0 calls=14
   calls: sub_7eb1e0, sub_7ee6c0, sub_7ef4c0, sub_7f0160, sub_7f0aa0, sub_7f2540, sub_7f87c0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640
   ... +2 more
*/
void sub_870be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x870be0ULL || rel >= 0x870d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00870d40 size=240 callers=0 calls=8
   calls: sub_7ef4c0, sub_7f0aa0, sub_7f87a0, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819d00
*/
void sub_870d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x870d40ULL || rel >= 0x870e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00870e30 size=320 callers=0 calls=12
   calls: sub_7ef4c0, sub_7f0500, sub_7f0aa0, sub_7f2520, sub_7f2540, sub_7f87c0, sub_803c60, sub_819600, sub_819640, sub_8196d0, sub_819d00, sub_82d990
*/
void sub_870e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x870e30ULL || rel >= 0x870f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00870f70 size=128 callers=0 calls=5
   calls: sub_7f7ff0, sub_819600, sub_819640, sub_8196b0, sub_81aab0
*/
void sub_870f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x870f70ULL || rel >= 0x870ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00870ff0 size=304 callers=0 calls=10
   calls: sub_7ef540, sub_7f79e0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_8196a0, sub_8196d0, sub_819b00, sub_81a030
*/
void sub_870ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x870ff0ULL || rel >= 0x871120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00871120 size=112 callers=0 calls=2
   calls: sub_7f7690, sub_819600
*/
void sub_871120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x871120ULL || rel >= 0x871190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00871190 size=224 callers=0 calls=7
   calls: sub_7f87f0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_81a290
*/
void sub_871190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x871190ULL || rel >= 0x871270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00871270 size=112 callers=0 calls=3
   calls: sub_803c60, sub_803d20, sub_81a030
*/
void sub_871270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x871270ULL || rel >= 0x8712e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008712e0 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_8712e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8712e0ULL || rel >= 0x871330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00871330 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_871330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x871330ULL || rel >= 0x871380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00871380 size=80 callers=0 calls=1
   calls: sub_819600
*/
void sub_871380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x871380ULL || rel >= 0x8713d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008713d0 size=80 callers=0 calls=1
   calls: sub_871420
*/
void sub_8713d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8713d0ULL || rel >= 0x871420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00871420 size=848 callers=2 calls=14
   calls: sub_7cb490, sub_7ee6b0, sub_7fc2e0, sub_7fc450, sub_803c60, sub_819600, sub_819640, sub_819c80, sub_81acc0, sub_81bb60, sub_81be80, sub_81be90
   ... +2 more
*/
void sub_871420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x871420ULL || rel >= 0x871770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00871770 size=112 callers=0 calls=3
   calls: sub_803c60, sub_803d20, sub_81a030
*/
void sub_871770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x871770ULL || rel >= 0x8717e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008717e0 size=80 callers=0 calls=1
   calls: sub_871420
*/
void sub_8717e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8717e0ULL || rel >= 0x871830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00871830 size=400 callers=0 calls=7
   calls: sub_7fe2a0, sub_8025a0, sub_803c60, sub_819600, sub_819640, sub_819df0, sub_819f70
*/
void sub_871830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x871830ULL || rel >= 0x8719c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008719c0 size=304 callers=0 calls=10
   calls: sub_7f0130, sub_7f0540, sub_7f2540, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819c40
*/
void sub_8719c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8719c0ULL || rel >= 0x871af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00871af0 size=512 callers=0 calls=16
   calls: sub_7eef50, sub_7ef4c0, sub_7ef750, sub_7f05a0, sub_7f1310, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819d00
   ... +4 more
*/
void sub_871af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x871af0ULL || rel >= 0x871cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00871cf0 size=560 callers=0 calls=10
   calls: sub_7eef50, sub_7f1310, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819e30, sub_81a030
*/
void sub_871cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x871cf0ULL || rel >= 0x871f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00871f20 size=512 callers=0 calls=10
   calls: sub_7eef50, sub_7f1310, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819e30, sub_81a030
*/
void sub_871f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x871f20ULL || rel >= 0x872120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00872120 size=512 callers=0 calls=10
   calls: sub_7eef50, sub_7f1310, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819e30, sub_81a030
*/
void sub_872120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x872120ULL || rel >= 0x872320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00872320 size=256 callers=0 calls=9
   calls: sub_7ef3d0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819f30, sub_81a0e0
*/
void sub_872320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x872320ULL || rel >= 0x872420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00872420 size=400 callers=0 calls=8
   calls: sub_7ef3d0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819f30
*/
void sub_872420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x872420ULL || rel >= 0x8725b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008725b0 size=400 callers=0 calls=8
   calls: sub_7ef3d0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_819f30
*/
void sub_8725b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8725b0ULL || rel >= 0x872740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00872740 size=240 callers=0 calls=7
   calls: sub_7f8870, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819d00
*/
void sub_872740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x872740ULL || rel >= 0x872830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00872830 size=160 callers=0 calls=6
   calls: sub_7f0670, sub_7f87a0, sub_803c60, sub_819600, sub_8196d0, sub_819d00
*/
void sub_872830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x872830ULL || rel >= 0x8728d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008728d0 size=256 callers=0 calls=8
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197a0, sub_81a190
*/
void sub_8728d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8728d0ULL || rel >= 0x8729d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008729d0 size=240 callers=0 calls=8
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197a0, sub_81a190
*/
void sub_8729d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8729d0ULL || rel >= 0x872ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00872ac0 size=256 callers=0 calls=8
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197a0, sub_81a190
*/
void sub_872ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x872ac0ULL || rel >= 0x872bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00872bc0 size=272 callers=0 calls=8
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197a0, sub_81a190
*/
void sub_872bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x872bc0ULL || rel >= 0x872cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00872cd0 size=256 callers=0 calls=8
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197a0, sub_81a190
*/
void sub_872cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x872cd0ULL || rel >= 0x872dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00872dd0 size=240 callers=0 calls=8
   calls: sub_7f8810, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197e0, sub_81a190
*/
void sub_872dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x872dd0ULL || rel >= 0x872ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00872ec0 size=256 callers=0 calls=8
   calls: sub_7f8810, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197e0, sub_81a190
*/
void sub_872ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x872ec0ULL || rel >= 0x872fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00872fc0 size=256 callers=0 calls=8
   calls: sub_7f8810, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197e0, sub_81a190
*/
void sub_872fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x872fc0ULL || rel >= 0x8730c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008730c0 size=256 callers=0 calls=8
   calls: sub_7f8810, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197e0, sub_81a190
*/
void sub_8730c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8730c0ULL || rel >= 0x8731c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008731c0 size=96 callers=0 calls=3
   calls: sub_819640, sub_81a6b0, sub_81ae20
*/
void sub_8731c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8731c0ULL || rel >= 0x873220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873220 size=336 callers=0 calls=11
   calls: sub_7f0ba0, sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_8197a0, sub_81a190, sub_81a6b0
*/
void sub_873220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873220ULL || rel >= 0x873370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873370 size=128 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_81ae20, sub_81aed0
*/
void sub_873370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873370ULL || rel >= 0x8733f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008733f0 size=288 callers=0 calls=9
   calls: sub_7f87a0, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8197a0, sub_81a030, sub_81a190
*/
void sub_8733f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8733f0ULL || rel >= 0x873510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873510 size=208 callers=0 calls=6
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_81a980
*/
void sub_873510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873510ULL || rel >= 0x8735e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008735e0 size=208 callers=0 calls=7
   calls: sub_803c60, sub_819600, sub_819640, sub_8198c0, sub_8199a0, sub_819f70, sub_81a400
*/
void sub_8735e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8735e0ULL || rel >= 0x8736b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008736b0 size=208 callers=0 calls=7
   calls: sub_803c60, sub_819600, sub_819640, sub_8198c0, sub_8199a0, sub_819f70, sub_81a400
*/
void sub_8736b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8736b0ULL || rel >= 0x873780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873780 size=128 callers=0 calls=4
   calls: sub_819600, sub_819640, sub_8198c0, sub_81a400
*/
void sub_873780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873780ULL || rel >= 0x873800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873800 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_873800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873800ULL || rel >= 0x873860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873860 size=144 callers=0 calls=5
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a030
*/
void sub_873860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873860ULL || rel >= 0x8738f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008738f0 size=224 callers=0 calls=6
   calls: sub_819600, sub_819640, sub_819690, sub_8198c0, sub_81a400, sub_81bf20
*/
void sub_8738f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8738f0ULL || rel >= 0x8739d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 008739d0 size=96 callers=0 calls=1
   calls: sub_819600
*/
void sub_8739d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x8739d0ULL || rel >= 0x873a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873a30 size=144 callers=0 calls=5
   calls: sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_81a030
*/
void sub_873a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873a30ULL || rel >= 0x873ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873ac0 size=208 callers=0 calls=7
   calls: sub_7f8810, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_819d00
*/
void sub_873ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873ac0ULL || rel >= 0x873b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873b90 size=256 callers=0 calls=9
   calls: sub_7eb3d0, sub_7eef50, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819640, sub_8196d0, sub_81a4a0
*/
void sub_873b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873b90ULL || rel >= 0x873c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873c90 size=304 callers=0 calls=11
   calls: sub_7cb490, sub_803c60, sub_803d20, sub_803d60, sub_819600, sub_819690, sub_8198c0, sub_8199a0, sub_819a20, sub_81a760, sub_81aa40
*/
void sub_873c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873c90ULL || rel >= 0x873dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873dc0 size=320 callers=0 calls=7
   calls: sub_7ef4c0, sub_803c60, sub_819600, sub_8196d0, sub_8197a0, sub_819c80, sub_81a1d0
*/
void sub_873dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873dc0ULL || rel >= 0x873f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873f00 size=240 callers=0 calls=9
   calls: sub_803c60, sub_819600, sub_819640, sub_8198c0, sub_8199a0, sub_819a20, sub_81a0e0, sub_81a400, sub_81a760
*/
void sub_873f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873f00ULL || rel >= 0x873ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00873ff0 size=272 callers=0 calls=10
   calls: sub_803c60, sub_819600, sub_819640, sub_8197a0, sub_819930, sub_819940, sub_819a10, sub_81a720, sub_81a760, sub_81c3a0
*/
void sub_873ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x873ff0ULL || rel >= 0x874100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

