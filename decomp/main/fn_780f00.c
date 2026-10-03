/* main functions 00780f00..007a39b0 (52 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 00780f00 size=48 callers=1 calls=2
   calls: sub_7816f0, sub_781a60
*/
void sub_780f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780f00ULL || rel >= 0x780f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780f30 size=80 callers=1 calls=0
*/
void sub_780f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780f30ULL || rel >= 0x780f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780f80 size=48 callers=5 calls=1
   calls: sub_7816f0
*/
void sub_780f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780f80ULL || rel >= 0x780fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780fb0 size=48 callers=1 calls=1
   calls: sub_7816f0
*/
void sub_780fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780fb0ULL || rel >= 0x780fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00780fe0 size=96 callers=4 calls=4
   calls: sub_7816f0, sub_781c40, sub_781ca0, sub_781d00
*/
void sub_780fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x780fe0ULL || rel >= 0x781040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781040 size=112 callers=4 calls=2
   calls: sub_7816f0, sub_781dc0
*/
void sub_781040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781040ULL || rel >= 0x7810b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007810b0 size=128 callers=3 calls=3
   calls: sub_7816f0, sub_781dc0, sub_781ee0
*/
void sub_7810b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7810b0ULL || rel >= 0x781130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781130 size=80 callers=1 calls=1
   calls: sub_7816f0
*/
void sub_781130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781130ULL || rel >= 0x781180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781180 size=48 callers=1 calls=1
   calls: sub_7816f0
*/
void sub_781180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781180ULL || rel >= 0x7811b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007811b0 size=48 callers=1 calls=1
   calls: sub_7816f0
*/
void sub_7811b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7811b0ULL || rel >= 0x7811e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007811e0 size=48 callers=6 calls=1
   calls: sub_7816f0
*/
void sub_7811e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7811e0ULL || rel >= 0x781210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781210 size=48 callers=4 calls=1
   calls: sub_7816f0
*/
void sub_781210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781210ULL || rel >= 0x781240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781240 size=48 callers=2 calls=2
   calls: sub_7816f0, sub_7821e0
*/
void sub_781240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781240ULL || rel >= 0x781270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781270 size=48 callers=1 calls=2
   calls: sub_7816f0, sub_7822a0
*/
void sub_781270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781270ULL || rel >= 0x7812a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007812a0 size=48 callers=2 calls=2
   calls: sub_7816f0, sub_782120
*/
void sub_7812a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7812a0ULL || rel >= 0x7812d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007812d0 size=48 callers=0 calls=0
*/
void sub_7812d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7812d0ULL || rel >= 0x781300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781300 size=368 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_781300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781300ULL || rel >= 0x781470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781470 size=112 callers=0 calls=0
*/
void sub_781470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781470ULL || rel >= 0x7814e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007814e0 size=352 callers=1 calls=4
   calls: s_s_s_2, sub_5dd790, sub_5e26a0, sub_5e2930
*/
void sub_7814e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7814e0ULL || rel >= 0x781640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781640 size=112 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_781640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781640ULL || rel >= 0x7816b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007816b0 size=32 callers=1 calls=0
*/
void sub_7816b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7816b0ULL || rel >= 0x7816d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007816d0 size=16 callers=0 calls=0
*/
void sub_7816d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7816d0ULL || rel >= 0x7816e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007816e0 size=16 callers=0 calls=0
*/
void sub_7816e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7816e0ULL || rel >= 0x7816f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007816f0 size=16 callers=27 calls=0
*/
void sub_7816f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7816f0ULL || rel >= 0x781700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781700 size=96 callers=0 calls=0
*/
void sub_781700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781700ULL || rel >= 0x781760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781760 size=96 callers=0 calls=0
*/
void sub_781760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781760ULL || rel >= 0x7817c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007817c0 size=96 callers=0 calls=0
*/
void sub_7817c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7817c0ULL || rel >= 0x781820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781820 size=96 callers=0 calls=0
*/
void sub_781820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781820ULL || rel >= 0x781880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781880 size=96 callers=2 calls=0
*/
void sub_781880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781880ULL || rel >= 0x7818e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007818e0 size=96 callers=1 calls=0
*/
void sub_7818e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7818e0ULL || rel >= 0x781940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781940 size=96 callers=0 calls=0
*/
void sub_781940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781940ULL || rel >= 0x7819a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007819a0 size=96 callers=1 calls=0
*/
void sub_7819a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7819a0ULL || rel >= 0x781a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781a00 size=96 callers=0 calls=0
*/
void sub_781a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781a00ULL || rel >= 0x781a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781a60 size=96 callers=1 calls=0
*/
void sub_781a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781a60ULL || rel >= 0x781ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781ac0 size=96 callers=0 calls=0
*/
void sub_781ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781ac0ULL || rel >= 0x781b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781b20 size=96 callers=0 calls=0
*/
void sub_781b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781b20ULL || rel >= 0x781b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781b80 size=96 callers=0 calls=0
*/
void sub_781b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781b80ULL || rel >= 0x781be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781be0 size=96 callers=0 calls=0
*/
void sub_781be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781be0ULL || rel >= 0x781c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781c40 size=96 callers=1 calls=0
*/
void sub_781c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781c40ULL || rel >= 0x781ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781ca0 size=96 callers=1 calls=0
*/
void sub_781ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781ca0ULL || rel >= 0x781d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781d00 size=96 callers=1 calls=0
*/
void sub_781d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781d00ULL || rel >= 0x781d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781d60 size=96 callers=0 calls=0
*/
void sub_781d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781d60ULL || rel >= 0x781dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781dc0 size=288 callers=4 calls=0
*/
void sub_781dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781dc0ULL || rel >= 0x781ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00781ee0 size=288 callers=1 calls=0
*/
void sub_781ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x781ee0ULL || rel >= 0x782000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782000 size=288 callers=0 calls=0
*/
void sub_782000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782000ULL || rel >= 0x782120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782120 size=96 callers=1 calls=0
*/
void sub_782120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782120ULL || rel >= 0x782180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782180 size=96 callers=0 calls=0
*/
void sub_782180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782180ULL || rel >= 0x7821e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007821e0 size=96 callers=1 calls=0
*/
void sub_7821e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7821e0ULL || rel >= 0x782240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782240 size=96 callers=0 calls=0
*/
void sub_782240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782240ULL || rel >= 0x7822a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007822a0 size=96 callers=1 calls=0
*/
void sub_7822a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7822a0ULL || rel >= 0x782300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782300 size=96 callers=0 calls=0
*/
void sub_782300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782300ULL || rel >= 0x782360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782360 size=1504 callers=0 calls=0
*/
void sub_782360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782360ULL || rel >= 0x782940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782940 size=64 callers=6 calls=0
*/
void sub_782940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782940ULL || rel >= 0x782980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782980 size=16 callers=6 calls=0
*/
void sub_782980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782980ULL || rel >= 0x782990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782990 size=16 callers=0 calls=0
*/
void sub_782990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782990ULL || rel >= 0x7829a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007829a0 size=128 callers=6 calls=1
   calls: sub_782a20
*/
void sub_7829a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7829a0ULL || rel >= 0x782a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782a20 size=624 callers=2 calls=6
   calls: s_s_s_5, sub_5dd790, sub_5e26a0, sub_5e2930, sub_5e2bc0, sub_76a5c0
*/
void sub_782a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782a20ULL || rel >= 0x782c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782c90 size=32 callers=5 calls=0
*/
void sub_782c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782c90ULL || rel >= 0x782cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782cb0 size=64 callers=20 calls=0
*/
void sub_782cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782cb0ULL || rel >= 0x782cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782cf0 size=128 callers=1 calls=0
*/
void sub_782cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782cf0ULL || rel >= 0x782d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782d70 size=32 callers=6 calls=0
*/
void sub_782d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782d70ULL || rel >= 0x782d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782d90 size=32 callers=7 calls=0
*/
void sub_782d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782d90ULL || rel >= 0x782db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782db0 size=16 callers=1 calls=0
*/
void sub_782db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782db0ULL || rel >= 0x782dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782dc0 size=16 callers=1 calls=0
*/
void sub_782dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782dc0ULL || rel >= 0x782dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782dd0 size=16 callers=1 calls=0
*/
void sub_782dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782dd0ULL || rel >= 0x782de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782de0 size=16 callers=2 calls=0
*/
void sub_782de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782de0ULL || rel >= 0x782df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782df0 size=16 callers=0 calls=0
*/
void sub_782df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782df0ULL || rel >= 0x782e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782e00 size=16 callers=1 calls=0
*/
void sub_782e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782e00ULL || rel >= 0x782e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782e10 size=144 callers=1 calls=0
*/
void sub_782e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782e10ULL || rel >= 0x782ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782ea0 size=16 callers=0 calls=0
*/
void sub_782ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782ea0ULL || rel >= 0x782eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782eb0 size=16 callers=0 calls=0
*/
void sub_782eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782eb0ULL || rel >= 0x782ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782ec0 size=16 callers=0 calls=0
*/
void sub_782ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782ec0ULL || rel >= 0x782ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782ed0 size=16 callers=0 calls=0
*/
void sub_782ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782ed0ULL || rel >= 0x782ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782ee0 size=128 callers=0 calls=5
   calls: sub_762930, sub_762940, sub_763dc0, sub_76bf30, sub_76bfa0
*/
void sub_782ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782ee0ULL || rel >= 0x782f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00782f60 size=336 callers=1 calls=12
   calls: sub_762930, sub_762940, sub_762d70, sub_763dc0, sub_767950, sub_76bf30, sub_76bfa0, sub_76bfb0, sub_76bfc0, sub_76bfd0, sub_76c000, sub_7830b0
*/
void sub_782f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x782f60ULL || rel >= 0x7830b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007830b0 size=1280 callers=1 calls=16
   calls: sub_762d70, sub_764b40, sub_765180, sub_765520, sub_765dd0, sub_7670a0, sub_7673c0, sub_767720, sub_767850, sub_767950, sub_768ef0, sub_768f00
   ... +4 more
*/
void sub_7830b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7830b0ULL || rel >= 0x7835b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007835b0 size=336 callers=1 calls=13
   calls: sub_762930, sub_762940, sub_762d70, sub_763170, sub_763dc0, sub_764b40, sub_767950, sub_76bf30, sub_76bfa0, sub_76bfb0, sub_76bfc0, sub_76bfd0
   ... +1 more
*/
void sub_7835b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7835b0ULL || rel >= 0x783700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00783700 size=368 callers=1 calls=12
   calls: sub_762930, sub_762940, sub_762d70, sub_763dc0, sub_767950, sub_76bf30, sub_76bfa0, sub_76bfb0, sub_76bfc0, sub_76bfd0, sub_76c000, sub_783870
*/
void sub_783700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783700ULL || rel >= 0x783870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00783870 size=208 callers=1 calls=1
   calls: sub_7670a0
*/
void sub_783870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783870ULL || rel >= 0x783940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00783940 size=336 callers=1 calls=12
   calls: sub_762930, sub_762940, sub_762d70, sub_763dc0, sub_767950, sub_76bf30, sub_76bfa0, sub_76bfb0, sub_76bfc0, sub_76bfd0, sub_76c000, sub_783a90
*/
void sub_783940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783940ULL || rel >= 0x783a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00783a90 size=304 callers=1 calls=3
   calls: sub_762930, sub_762d70, sub_767950
*/
void sub_783a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783a90ULL || rel >= 0x783bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00783bc0 size=16 callers=0 calls=0
*/
void sub_783bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783bc0ULL || rel >= 0x783bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00783bd0 size=400 callers=64 calls=1
   calls: sub_76f550
*/
void sub_783bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783bd0ULL || rel >= 0x783d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00783d60 size=208 callers=0 calls=0
*/
void sub_783d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783d60ULL || rel >= 0x783e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00783e30 size=208 callers=0 calls=0
*/
void sub_783e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783e30ULL || rel >= 0x783f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00783f00 size=208 callers=0 calls=0
*/
void sub_783f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783f00ULL || rel >= 0x783fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00783fd0 size=208 callers=0 calls=0
*/
void sub_783fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x783fd0ULL || rel >= 0x7840a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007840a0 size=272 callers=0 calls=3
   calls: sub_762d50, sub_767950, sub_76f6c0
*/
void sub_7840a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7840a0ULL || rel >= 0x7841b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007841b0 size=256 callers=0 calls=3
   calls: sub_762d50, sub_767950, sub_76f6c0
*/
void sub_7841b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7841b0ULL || rel >= 0x7842b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007842b0 size=256 callers=0 calls=4
   calls: sub_762d40, sub_762d50, sub_767950, sub_7843b0
*/
void sub_7842b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7842b0ULL || rel >= 0x7843b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007843b0 size=240 callers=2 calls=1
   calls: sub_762d50
*/
void sub_7843b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7843b0ULL || rel >= 0x7844a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007844a0 size=208 callers=0 calls=1
   calls: sub_7843b0
*/
void sub_7844a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7844a0ULL || rel >= 0x784570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784570 size=416 callers=0 calls=0
*/
void sub_784570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784570ULL || rel >= 0x784710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784710 size=16 callers=0 calls=0
*/
void sub_784710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784710ULL || rel >= 0x784720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784720 size=64 callers=0 calls=0
*/
void sub_784720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784720ULL || rel >= 0x784760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784760 size=112 callers=1 calls=0
*/
void sub_784760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784760ULL || rel >= 0x7847d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007847d0 size=16 callers=298 calls=0
*/
void sub_7847d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7847d0ULL || rel >= 0x7847e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007847e0 size=16 callers=0 calls=0
*/
void sub_7847e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7847e0ULL || rel >= 0x7847f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007847f0 size=16 callers=6 calls=0
*/
void sub_7847f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7847f0ULL || rel >= 0x784800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784800 size=352 callers=3 calls=3
   calls: sub_762d50, sub_7656d0, sub_767950
*/
void sub_784800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784800ULL || rel >= 0x784960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784960 size=288 callers=6 calls=3
   calls: sub_762d50, sub_7656d0, sub_767950
*/
void sub_784960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784960ULL || rel >= 0x784a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784a80 size=400 callers=0 calls=2
   calls: sub_762930, sub_767950
*/
void sub_784a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784a80ULL || rel >= 0x784c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784c10 size=384 callers=0 calls=1
   calls: sub_76f6c0
*/
void sub_784c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784c10ULL || rel >= 0x784d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784d90 size=176 callers=0 calls=1
   calls: sub_762d40
*/
void sub_784d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784d90ULL || rel >= 0x784e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784e40 size=240 callers=7 calls=1
   calls: sub_76f7f0
*/
void sub_784e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784e40ULL || rel >= 0x784f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784f30 size=16 callers=2 calls=0
*/
void sub_784f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784f30ULL || rel >= 0x784f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784f40 size=32 callers=8 calls=1
   calls: sub_784f60
*/
void sub_784f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784f40ULL || rel >= 0x784f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00784f60 size=432 callers=1 calls=2
   calls: sub_76f7d0, sub_76f7f0
*/
void sub_784f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x784f60ULL || rel >= 0x785110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785110 size=528 callers=18 calls=1
   calls: sub_762d50
*/
void sub_785110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785110ULL || rel >= 0x785320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785320 size=16 callers=9 calls=0
*/
void sub_785320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785320ULL || rel >= 0x785330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785330 size=896 callers=0 calls=2
   calls: sub_762d50, sub_76f7e0
*/
void sub_785330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785330ULL || rel >= 0x7856b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007856b0 size=256 callers=1 calls=5
   calls: sub_762930, sub_767950, sub_7690e0, sub_769150, sub_7693e0
*/
void sub_7856b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7856b0ULL || rel >= 0x7857b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007857b0 size=336 callers=1 calls=4
   calls: sub_7690c0, sub_7690e0, sub_7691a0, sub_7693e0
*/
void sub_7857b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7857b0ULL || rel >= 0x785900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785900 size=96 callers=2 calls=1
   calls: sub_7691d0
*/
void sub_785900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785900ULL || rel >= 0x785960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785960 size=96 callers=8 calls=1
   calls: sub_7628f0
*/
void sub_785960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785960ULL || rel >= 0x7859c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007859c0 size=192 callers=2 calls=0
*/
void sub_7859c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7859c0ULL || rel >= 0x785a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785a80 size=96 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_785a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785a80ULL || rel >= 0x785ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785ae0 size=96 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_785ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785ae0ULL || rel >= 0x785b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785b40 size=320 callers=1 calls=4
   calls: s_s_s_7, sub_5dd790, sub_5e26a0, sub_5e2930
*/
void sub_785b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785b40ULL || rel >= 0x785c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785c80 size=96 callers=8 calls=3
   calls: sub_7863b0, sub_786410, sub_786420
*/
void sub_785c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785c80ULL || rel >= 0x785ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785ce0 size=96 callers=12 calls=0
*/
void sub_785ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785ce0ULL || rel >= 0x785d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785d40 size=96 callers=0 calls=4
   calls: sub_7863b0, sub_786410, sub_786b30, sub_786bf0
*/
void sub_785d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785d40ULL || rel >= 0x785da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785da0 size=80 callers=0 calls=0
*/
void sub_785da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785da0ULL || rel >= 0x785df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785df0 size=240 callers=1 calls=0
*/
void sub_785df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785df0ULL || rel >= 0x785ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785ee0 size=128 callers=1 calls=4
   calls: sub_7863b0, sub_786410, sub_786420, sub_786bd0
*/
void sub_785ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785ee0ULL || rel >= 0x785f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785f60 size=80 callers=1 calls=3
   calls: sub_7863b0, sub_786410, sub_786ca0
*/
void sub_785f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785f60ULL || rel >= 0x785fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785fb0 size=48 callers=1 calls=0
*/
void sub_785fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785fb0ULL || rel >= 0x785fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785fe0 size=16 callers=0 calls=0
*/
void sub_785fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785fe0ULL || rel >= 0x785ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00785ff0 size=96 callers=0 calls=0
*/
void sub_785ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x785ff0ULL || rel >= 0x786050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786050 size=80 callers=1 calls=3
   calls: sub_7863b0, sub_786410, sub_786420
*/
void sub_786050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786050ULL || rel >= 0x7860a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007860a0 size=64 callers=9 calls=0
*/
void sub_7860a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7860a0ULL || rel >= 0x7860e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007860e0 size=80 callers=1 calls=3
   calls: sub_7863b0, sub_786410, sub_786bf0
*/
void sub_7860e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7860e0ULL || rel >= 0x786130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786130 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_786130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786130ULL || rel >= 0x786200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786200 size=208 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_786200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786200ULL || rel >= 0x7862d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007862d0 size=112 callers=0 calls=0
*/
void sub_7862d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7862d0ULL || rel >= 0x786340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786340 size=112 callers=0 calls=0
*/
void sub_786340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786340ULL || rel >= 0x7863b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007863b0 size=96 callers=86 calls=1
   calls: sub_785ce0
*/
void sub_7863b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7863b0ULL || rel >= 0x786410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786410 size=16 callers=86 calls=0
*/
void sub_786410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786410ULL || rel >= 0x786420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786420 size=960 callers=126 calls=0
*/
void sub_786420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786420ULL || rel >= 0x7867e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007867e0 size=464 callers=4 calls=0
*/
void sub_7867e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7867e0ULL || rel >= 0x7869b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007869b0 size=144 callers=1 calls=1
   calls: sub_7867e0
*/
void sub_7869b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7869b0ULL || rel >= 0x786a40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786a40 size=144 callers=26 calls=2
   calls: sub_785ce0, sub_786420
*/
void sub_786a40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786a40ULL || rel >= 0x786ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786ad0 size=96 callers=1 calls=1
   calls: sub_785ce0
*/
void sub_786ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786ad0ULL || rel >= 0x786b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786b30 size=16 callers=1 calls=0
*/
void sub_786b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786b30ULL || rel >= 0x786b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786b40 size=32 callers=10 calls=0
*/
void sub_786b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786b40ULL || rel >= 0x786b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786b60 size=32 callers=2 calls=0
*/
void sub_786b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786b60ULL || rel >= 0x786b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786b80 size=80 callers=4 calls=1
   calls: sub_785ce0
*/
void sub_786b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786b80ULL || rel >= 0x786bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786bd0 size=32 callers=2 calls=0
*/
void sub_786bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786bd0ULL || rel >= 0x786bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786bf0 size=32 callers=2 calls=0
*/
void sub_786bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786bf0ULL || rel >= 0x786c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786c10 size=32 callers=18 calls=0
*/
void sub_786c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786c10ULL || rel >= 0x786c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786c30 size=32 callers=1 calls=0
*/
void sub_786c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786c30ULL || rel >= 0x786c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786c50 size=80 callers=59 calls=1
   calls: sub_785ce0
*/
void sub_786c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786c50ULL || rel >= 0x786ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786ca0 size=32 callers=7 calls=0
*/
void sub_786ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786ca0ULL || rel >= 0x786cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786cc0 size=16 callers=2 calls=0
*/
void sub_786cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786cc0ULL || rel >= 0x786cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786cd0 size=32 callers=4 calls=0
*/
void sub_786cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786cd0ULL || rel >= 0x786cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786cf0 size=112 callers=19 calls=1
   calls: sub_785ce0
*/
void sub_786cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786cf0ULL || rel >= 0x786d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786d60 size=48 callers=4 calls=0
*/
void sub_786d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786d60ULL || rel >= 0x786d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786d90 size=80 callers=15 calls=1
   calls: sub_785ce0
*/
void sub_786d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786d90ULL || rel >= 0x786de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786de0 size=64 callers=1 calls=1
   calls: sub_785df0
*/
void sub_786de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786de0ULL || rel >= 0x786e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786e20 size=80 callers=2 calls=1
   calls: sub_785ce0
*/
void sub_786e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786e20ULL || rel >= 0x786e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786e70 size=80 callers=2 calls=1
   calls: sub_785ce0
*/
void sub_786e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786e70ULL || rel >= 0x786ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786ec0 size=80 callers=2 calls=1
   calls: sub_785ce0
*/
void sub_786ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786ec0ULL || rel >= 0x786f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786f10 size=80 callers=1 calls=1
   calls: sub_785ce0
*/
void sub_786f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786f10ULL || rel >= 0x786f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786f60 size=80 callers=1 calls=1
   calls: sub_785ce0
*/
void sub_786f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786f60ULL || rel >= 0x786fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786fb0 size=16 callers=1 calls=0
*/
void sub_786fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786fb0ULL || rel >= 0x786fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786fc0 size=32 callers=1 calls=0
*/
void sub_786fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786fc0ULL || rel >= 0x786fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00786fe0 size=32 callers=52 calls=0
*/
void sub_786fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x786fe0ULL || rel >= 0x787000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00787000 size=160 callers=21 calls=0
*/
void sub_787000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x787000ULL || rel >= 0x7870a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007870a0 size=112 callers=2 calls=0
*/
void sub_7870a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7870a0ULL || rel >= 0x787110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00787110 size=32 callers=0 calls=0
*/
void sub_787110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x787110ULL || rel >= 0x787130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00787130 size=144 callers=1 calls=0
*/
void sub_787130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x787130ULL || rel >= 0x7871c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007871c0 size=272 callers=1 calls=2
   calls: sub_76f700, sub_7872d0
*/
void sub_7871c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7871c0ULL || rel >= 0x7872d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007872d0 size=624 callers=1 calls=7
   calls: sub_7624c0, sub_762930, sub_7670a0, sub_7692e0, sub_769330, sub_787540, sub_787c10
*/
void sub_7872d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7872d0ULL || rel >= 0x787540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00787540 size=1744 callers=1 calls=26
   calls: sub_762930, sub_762940, sub_762d70, sub_762fd0, sub_763380, sub_7670b0, sub_7671b0, sub_76bc60, sub_76bc80, sub_76c420, sub_76c470, sub_76c4a0
   ... +14 more
*/
void sub_787540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x787540ULL || rel >= 0x787c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00787c10 size=432 callers=1 calls=11
   calls: sub_67b990, sub_7634d0, sub_765ef0, sub_7664a0, sub_767570, sub_767690, sub_7679c0, sub_7692e0, sub_769330, sub_76a5c0, sub_76bb10
*/
void sub_787c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x787c10ULL || rel >= 0x787dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00787dc0 size=464 callers=1 calls=9
   calls: sub_762930, sub_762940, sub_762d70, sub_76bc60, sub_76bc80, sub_76c420, sub_76c470, sub_76c4a0, sub_76c5e0
*/
void sub_787dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x787dc0ULL || rel >= 0x787f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00787f90 size=176 callers=1 calls=6
   calls: sub_762930, sub_762940, sub_76c420, sub_76c470, sub_76c4a0, sub_76c5e0
*/
void sub_787f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x787f90ULL || rel >= 0x788040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00788040 size=176 callers=1 calls=6
   calls: sub_762930, sub_762940, sub_76c420, sub_76c470, sub_76c4a0, sub_76c5e0
*/
void sub_788040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x788040ULL || rel >= 0x7880f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007880f0 size=512 callers=1 calls=1
   calls: sub_762d70
*/
void sub_7880f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7880f0ULL || rel >= 0x7882f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007882f0 size=272 callers=1 calls=1
   calls: sub_762d70
*/
void sub_7882f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7882f0ULL || rel >= 0x788400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00788400 size=304 callers=1 calls=1
   calls: sub_7635d0
*/
void sub_788400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x788400ULL || rel >= 0x788530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00788530 size=208 callers=1 calls=4
   calls: sub_76be10, sub_76beb0, sub_76bec0, sub_76bed0
*/
void sub_788530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x788530ULL || rel >= 0x788600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00788600 size=320 callers=1 calls=4
   calls: sub_765dd0, sub_76be10, sub_76beb0, sub_76bed0
*/
void sub_788600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x788600ULL || rel >= 0x788740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00788740 size=720 callers=2 calls=4
   calls: sub_762930, sub_765dd0, sub_782c90, sub_782cb0
*/
void sub_788740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x788740ULL || rel >= 0x788a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00788a10 size=224 callers=0 calls=0
*/
void sub_788a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x788a10ULL || rel >= 0x788af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00788af0 size=64 callers=0 calls=1
   calls: sub_78ec70
*/
void sub_788af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x788af0ULL || rel >= 0x788b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00788b30 size=16 callers=0 calls=0
*/
void sub_788b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x788b30ULL || rel >= 0x788b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00788b40 size=16 callers=0 calls=0
*/
void sub_788b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x788b40ULL || rel >= 0x788b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00788b50 size=640 callers=1 calls=0
   ref: Unsupported window type: %d
*/
void Unsupported_window_type_d(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x788b50ULL || rel >= 0x788dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00788dd0 size=704 callers=1 calls=1
   calls: Real_FFT_optimization_must_be_even
*/
void sub_788dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x788dd0ULL || rel >= 0x789090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00789090 size=272 callers=1 calls=0
*/
void sub_789090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x789090ULL || rel >= 0x7891a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007891a0 size=800 callers=1 calls=1
   calls: sub_78d430
   ref: Failed during GrainReader allocation, insufficient memory.
   ref: Failed during Grain Readers allocation, insufficient memory.
*/
void Failed_during_GrainReader_allocation_insufficient_memory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7891a0ULL || rel >= 0x7894c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007894c0 size=816 callers=1 calls=0
*/
void sub_7894c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7894c0ULL || rel >= 0x7897f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007897f0 size=848 callers=1 calls=1
   calls: sub_78d5a0
*/
void sub_7897f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7897f0ULL || rel >= 0x789b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00789b40 size=2656 callers=1 calls=3
   calls: Failed_during_GrainReader_allocation_insufficient_memory, sub_78d3d0, sub_78d8d0
   ref: Failed during grain allocation, insufficient memory.
   ref: Failed during Grain Pool allocation, insufficient memory.
   ref: Failed during activegrains set allocation, insufficient memory.
*/
void Failed_during_grain_allocation_insufficient_memory(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x789b40ULL || rel >= 0x78a5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078a5a0 size=480 callers=1 calls=1
   calls: sub_78d3d0
*/
void sub_78a5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78a5a0ULL || rel >= 0x78a780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078a780 size=768 callers=1 calls=2
   calls: sub_6a54a0, sub_7897f0
*/
void sub_78a780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78a780ULL || rel >= 0x78aa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078aa80 size=624 callers=1 calls=3
   calls: sub_6f9720, sub_7894c0, sub_78da40
*/
void sub_78aa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78aa80ULL || rel >= 0x78acf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078acf0 size=592 callers=1 calls=1
   calls: Unsupported_window_type_d
*/
void sub_78acf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78acf0ULL || rel >= 0x78af40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078af40 size=224 callers=1 calls=0
*/
void sub_78af40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78af40ULL || rel >= 0x78b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078b020 size=16 callers=0 calls=0
*/
void sub_78b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78b020ULL || rel >= 0x78b030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078b030 size=16 callers=0 calls=0
*/
void sub_78b030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78b030ULL || rel >= 0x78b040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078b040 size=1024 callers=0 calls=4
   calls: Failed_during_grain_allocation_insufficient_memory, sub_788dd0, sub_78acf0, sub_78dbb0
   ref: Init with frameSize: %u, mOverlap: %u, mWindow: %d
   ref: CGFGranularFX::Init result: %d
   ref: mPitchRatio is: %f
   ref: mTimeRatio is: %f
   ref: Failed during Channel vector allocation, insufficient memory.
   ref: Failed during channel allocation, insufficient memory.
*/
void mTimeRatio_is_f(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78b040ULL || rel >= 0x78b440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078b440 size=400 callers=0 calls=3
   calls: sub_789090, sub_78a5a0, sub_78af40
*/
void sub_78b440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78b440ULL || rel >= 0x78b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078b5d0 size=16 callers=0 calls=0
*/
void sub_78b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78b5d0ULL || rel >= 0x78b5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078b5e0 size=32 callers=0 calls=0
*/
void sub_78b5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78b5e0ULL || rel >= 0x78b600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078b600 size=7600 callers=0 calls=4
   calls: kiss_fft_usage_error_improper_alloc, kiss_fft_usage_error_improper_alloc_2, sub_78a780, sub_78aa80
   ref: mPitchRatio is: %f
   ref: mTimeRatio is: %f
*/
void mTimeRatio_is_f_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78b600ULL || rel >= 0x78d3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078d3b0 size=32 callers=0 calls=0
*/
void sub_78d3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78d3b0ULL || rel >= 0x78d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078d3d0 size=96 callers=4 calls=1
   calls: sub_78d3d0
*/
void sub_78d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78d3d0ULL || rel >= 0x78d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078d430 size=368 callers=1 calls=0
*/
void sub_78d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78d430ULL || rel >= 0x78d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078d5a0 size=816 callers=1 calls=0
*/
void sub_78d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78d5a0ULL || rel >= 0x78d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078d8d0 size=368 callers=1 calls=0
*/
void sub_78d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78d8d0ULL || rel >= 0x78da40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078da40 size=368 callers=1 calls=0
*/
void sub_78da40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78da40ULL || rel >= 0x78dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078dbb0 size=368 callers=1 calls=0
*/
void sub_78dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78dbb0ULL || rel >= 0x78dd20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078dd20 size=80 callers=0 calls=0
*/
void sub_78dd20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78dd20ULL || rel >= 0x78dd70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078dd70 size=496 callers=4 calls=2
   calls: sub_78e1d0, sub_860
   ref: Real FFT optimization must be even.
*/
void Real_FFT_optimization_must_be_even(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78dd70ULL || rel >= 0x78df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078df60 size=320 callers=1 calls=1
   calls: sub_78ebd0
   ref: kiss fft usage error: improper alloc
*/
void kiss_fft_usage_error_improper_alloc(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78df60ULL || rel >= 0x78e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078e0a0 size=304 callers=1 calls=0
   ref: kiss fft usage error: improper alloc
*/
void kiss_fft_usage_error_improper_alloc_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78e0a0ULL || rel >= 0x78e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078e1d0 size=416 callers=2 calls=1
   calls: sub_860
*/
void sub_78e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78e1d0ULL || rel >= 0x78e370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078e370 size=2144 callers=2 calls=2
   calls: sub_78e370, sub_860
*/
void sub_78e370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78e370ULL || rel >= 0x78ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078ebd0 size=160 callers=1 calls=2
   calls: sub_78e370, sub_860
*/
void sub_78ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78ebd0ULL || rel >= 0x78ec70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078ec70 size=32 callers=1 calls=0
*/
void sub_78ec70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78ec70ULL || rel >= 0x78ec90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078ec90 size=16 callers=0 calls=0
*/
void sub_78ec90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78ec90ULL || rel >= 0x78eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078eca0 size=16 callers=0 calls=0
*/
void sub_78eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78eca0ULL || rel >= 0x78ecb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078ecb0 size=144 callers=0 calls=0
*/
void sub_78ecb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78ecb0ULL || rel >= 0x78ed40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078ed40 size=112 callers=0 calls=0
*/
void sub_78ed40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78ed40ULL || rel >= 0x78edb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078edb0 size=80 callers=0 calls=0
*/
void sub_78edb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78edb0ULL || rel >= 0x78ee00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078ee00 size=160 callers=0 calls=0
*/
void sub_78ee00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78ee00ULL || rel >= 0x78eea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078eea0 size=464 callers=0 calls=0
*/
void sub_78eea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78eea0ULL || rel >= 0x78f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f070 size=224 callers=0 calls=6
   calls: sub_78f150, sub_78f240, sub_78f350, sub_790140, sub_e7c0f0, sub_e7e890
   ref: attention
*/
void attention(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f070ULL || rel >= 0x78f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f150 size=240 callers=55 calls=2
   calls: sub_78faa0, sub_e7c160
*/
void sub_78f150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f150ULL || rel >= 0x78f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f240 size=272 callers=50 calls=2
   calls: sub_78fb80, sub_e7c160
*/
void sub_78f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f240ULL || rel >= 0x78f350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f350 size=432 callers=1 calls=3
   calls: sub_790010, sub_e7c160, sub_e7c210
*/
void sub_78f350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f350ULL || rel >= 0x78f500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f500 size=16 callers=0 calls=0
*/
void sub_78f500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f500ULL || rel >= 0x78f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f510 size=16 callers=0 calls=0
*/
void sub_78f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f510ULL || rel >= 0x78f520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f520 size=16 callers=0 calls=0
*/
void sub_78f520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f520ULL || rel >= 0x78f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f530 size=224 callers=0 calls=2
   calls: sub_7906a0, sub_e7c160
*/
void sub_78f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f530ULL || rel >= 0x78f610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f610 size=16 callers=0 calls=0
*/
void sub_78f610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f610ULL || rel >= 0x78f620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f620 size=416 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_78f620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f620ULL || rel >= 0x78f7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f7c0 size=16 callers=0 calls=0
*/
void sub_78f7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f7c0ULL || rel >= 0x78f7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f7d0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_78f7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f7d0ULL || rel >= 0x78f880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f880 size=16 callers=0 calls=0
*/
void sub_78f880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f880ULL || rel >= 0x78f890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f890 size=16 callers=0 calls=0
*/
void sub_78f890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f890ULL || rel >= 0x78f8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f8a0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_78f8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f8a0ULL || rel >= 0x78f950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078f950 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_78f950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78f950ULL || rel >= 0x78fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fa00 size=16 callers=0 calls=0
*/
void sub_78fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fa00ULL || rel >= 0x78fa10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fa10 size=16 callers=0 calls=0
*/
void sub_78fa10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fa10ULL || rel >= 0x78fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fa20 size=16 callers=0 calls=0
*/
void sub_78fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fa20ULL || rel >= 0x78fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fa30 size=16 callers=0 calls=0
*/
void sub_78fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fa30ULL || rel >= 0x78fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fa40 size=16 callers=0 calls=0
*/
void sub_78fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fa40ULL || rel >= 0x78fa50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fa50 size=16 callers=0 calls=0
*/
void sub_78fa50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fa50ULL || rel >= 0x78fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fa60 size=16 callers=0 calls=0
*/
void sub_78fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fa60ULL || rel >= 0x78fa70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fa70 size=16 callers=0 calls=0
*/
void sub_78fa70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fa70ULL || rel >= 0x78fa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fa80 size=16 callers=0 calls=0
*/
void sub_78fa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fa80ULL || rel >= 0x78fa90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fa90 size=16 callers=0 calls=0
*/
void sub_78fa90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fa90ULL || rel >= 0x78faa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078faa0 size=224 callers=2 calls=1
   calls: unfocusRoot
*/
void sub_78faa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78faa0ULL || rel >= 0x78fb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fb80 size=304 callers=1 calls=0
*/
void sub_78fb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fb80ULL || rel >= 0x78fcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078fcb0 size=816 callers=3 calls=0
*/
void sub_78fcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78fcb0ULL || rel >= 0x78ffe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0078ffe0 size=48 callers=0 calls=1
   calls: sub_78fcb0
*/
void sub_78ffe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x78ffe0ULL || rel >= 0x790010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790010 size=304 callers=1 calls=0
*/
void sub_790010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790010ULL || rel >= 0x790140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790140 size=288 callers=4 calls=2
   calls: sub_790260, sub_e809c0
*/
void sub_790140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790140ULL || rel >= 0x790260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790260 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_790260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790260ULL || rel >= 0x790490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790490 size=528 callers=188 calls=0
*/
void sub_790490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790490ULL || rel >= 0x7906a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007906a0 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_7906a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7906a0ULL || rel >= 0x7907e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007907e0 size=752 callers=0 calls=10
   calls: sub_67b990, sub_67d450, sub_790f90, sub_c39c40, sub_c3a7b0, sub_c444b0, sub_d0c0, sub_e7eb10, sub_e806b0, sub_eb5fb0
   ref: attention
*/
void attention_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7907e0ULL || rel >= 0x790ad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790ad0 size=272 callers=0 calls=4
   calls: sub_c44310, sub_c44410, sub_e80580, sub_e807f0
*/
void sub_790ad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790ad0ULL || rel >= 0x790be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790be0 size=16 callers=0 calls=0
*/
void sub_790be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790be0ULL || rel >= 0x790bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790bf0 size=96 callers=0 calls=0
*/
void sub_790bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790bf0ULL || rel >= 0x790c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790c50 size=96 callers=0 calls=0
*/
void sub_790c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790c50ULL || rel >= 0x790cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790cb0 size=16 callers=0 calls=0
*/
void sub_790cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790cb0ULL || rel >= 0x790cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790cc0 size=96 callers=0 calls=0
*/
void sub_790cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790cc0ULL || rel >= 0x790d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790d20 size=96 callers=0 calls=0
*/
void sub_790d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790d20ULL || rel >= 0x790d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790d80 size=16 callers=0 calls=0
*/
void sub_790d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790d80ULL || rel >= 0x790d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790d90 size=16 callers=0 calls=0
*/
void sub_790d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790d90ULL || rel >= 0x790da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790da0 size=96 callers=0 calls=0
*/
void sub_790da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790da0ULL || rel >= 0x790e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790e00 size=96 callers=0 calls=0
*/
void sub_790e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790e00ULL || rel >= 0x790e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790e60 size=304 callers=0 calls=0
*/
void sub_790e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790e60ULL || rel >= 0x790f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00790f90 size=272 callers=6 calls=2
   calls: sub_5cfaf0, sub_eb6100
*/
void sub_790f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x790f90ULL || rel >= 0x7910a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007910a0 size=16 callers=7 calls=0
*/
void sub_7910a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7910a0ULL || rel >= 0x7910b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007910b0 size=208 callers=4 calls=2
   calls: sub_5cff50, sub_5e6770
*/
void sub_7910b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7910b0ULL || rel >= 0x791180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791180 size=304 callers=4 calls=2
   calls: sub_1c0, sub_5e6770
*/
void sub_791180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791180ULL || rel >= 0x7912b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007912b0 size=320 callers=4 calls=2
   calls: sub_5cfaf0, sub_793620
*/
void sub_7912b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7912b0ULL || rel >= 0x7913f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007913f0 size=16 callers=0 calls=0
*/
void sub_7913f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7913f0ULL || rel >= 0x791400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791400 size=336 callers=5 calls=2
   calls: sub_5cfaf0, sub_793630
*/
void sub_791400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791400ULL || rel >= 0x791550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791550 size=16 callers=0 calls=0
*/
void sub_791550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791550ULL || rel >= 0x791560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791560 size=96 callers=8 calls=0
*/
void sub_791560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791560ULL || rel >= 0x7915c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007915c0 size=80 callers=0 calls=1
   calls: sub_1c0
*/
void sub_7915c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7915c0ULL || rel >= 0x791610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791610 size=96 callers=0 calls=0
*/
void sub_791610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791610ULL || rel >= 0x791670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791670 size=912 callers=1 calls=10
   calls: SourceGlobal_2, sub_5cf9c0, sub_791a00, sub_792720, sub_792a50, sub_792e20, sub_793600, sub_793620, sub_7938b0, unnamed_13
   ref: BGM.bnk
   ref: Init.bnk
   ref: Stream.pck
   ref: Common_UI.bnk
   ref: Common.bnk
   ref: Game_Init
   ref: SourceGlobal
*/
void SourceGlobal(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791670ULL || rel >= 0x791a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791a00 size=368 callers=16 calls=2
   calls: sub_791dc0, sub_792060
*/
void sub_791a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791a00ULL || rel >= 0x791b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791b70 size=464 callers=1 calls=5
   calls: sub_791a00, sub_7935d0, sub_793610, sub_793630, sub_7936f0
   ref: BGM.bnk
   ref: Init.bnk
   ref: Common_UI.bnk
   ref: Common.bnk
*/
void unnamed_12(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791b70ULL || rel >= 0x791d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791d40 size=16 callers=1 calls=0
*/
void sub_791d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791d40ULL || rel >= 0x791d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791d50 size=80 callers=3 calls=1
   calls: sub_7935f0
*/
void sub_791d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791d50ULL || rel >= 0x791da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791da0 size=16 callers=9 calls=0
*/
void sub_791da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791da0ULL || rel >= 0x791db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791db0 size=16 callers=1 calls=0
*/
void sub_791db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791db0ULL || rel >= 0x791dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00791dc0 size=672 callers=1 calls=1
   calls: sub_792a50
*/
void sub_791dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x791dc0ULL || rel >= 0x792060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00792060 size=672 callers=1 calls=1
   calls: sub_792e20
*/
void sub_792060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x792060ULL || rel >= 0x792300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00792300 size=1056 callers=1 calls=0
*/
void sub_792300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x792300ULL || rel >= 0x792720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00792720 size=336 callers=1 calls=0
*/
void sub_792720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x792720ULL || rel >= 0x792870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00792870 size=112 callers=0 calls=1
   calls: sub_673a80
*/
void sub_792870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x792870ULL || rel >= 0x7928e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007928e0 size=112 callers=0 calls=1
   calls: sub_673a80
*/
void sub_7928e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7928e0ULL || rel >= 0x792950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00792950 size=16 callers=0 calls=0
*/
void sub_792950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x792950ULL || rel >= 0x792960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00792960 size=112 callers=0 calls=0
*/
void sub_792960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x792960ULL || rel >= 0x7929d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007929d0 size=16 callers=0 calls=0
*/
void sub_7929d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7929d0ULL || rel >= 0x7929e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007929e0 size=112 callers=0 calls=0
*/
void sub_7929e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7929e0ULL || rel >= 0x792a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00792a50 size=272 callers=2 calls=0
*/
void sub_792a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x792a50ULL || rel >= 0x792b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00792b60 size=704 callers=0 calls=0
*/
void sub_792b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x792b60ULL || rel >= 0x792e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00792e20 size=272 callers=2 calls=0
*/
void sub_792e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x792e20ULL || rel >= 0x792f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00792f30 size=704 callers=0 calls=0
*/
void sub_792f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x792f30ULL || rel >= 0x7931f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007931f0 size=656 callers=1 calls=8
   calls: GFDefaultListener, sub_27d0, sub_6733e0, sub_673a80, sub_6745f0, sub_674640, sub_793480, sub_d0c0
   ref: bin/sound/NX64/wwise/bank/
   ref: English(US)
*/
void unnamed_13(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7931f0ULL || rel >= 0x793480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793480 size=336 callers=26 calls=3
   calls: sub_5e6180, sub_793c70, sub_d0c0
*/
void sub_793480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793480ULL || rel >= 0x7935d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007935d0 size=16 callers=1 calls=0
*/
void sub_7935d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7935d0ULL || rel >= 0x7935e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007935e0 size=16 callers=0 calls=0
*/
void sub_7935e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7935e0ULL || rel >= 0x7935f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007935f0 size=16 callers=1 calls=0
*/
void sub_7935f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7935f0ULL || rel >= 0x793600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793600 size=16 callers=1 calls=0
*/
void sub_793600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793600ULL || rel >= 0x793610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793610 size=16 callers=1 calls=0
*/
void sub_793610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793610ULL || rel >= 0x793620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793620 size=16 callers=6 calls=0
*/
void sub_793620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793620ULL || rel >= 0x793630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793630 size=16 callers=6 calls=0
*/
void sub_793630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793630ULL || rel >= 0x793640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793640 size=176 callers=2 calls=2
   calls: sub_674f30, sub_d0c0
   ref: SourceGlobal
*/
void SourceGlobal_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793640ULL || rel >= 0x7936f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007936f0 size=80 callers=2 calls=1
   calls: sub_675040
*/
void sub_7936f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7936f0ULL || rel >= 0x793740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793740 size=320 callers=0 calls=2
   calls: sub_674680, sub_6752d0
*/
void sub_793740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793740ULL || rel >= 0x793880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793880 size=48 callers=0 calls=0
*/
void sub_793880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793880ULL || rel >= 0x7938b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007938b0 size=112 callers=1 calls=1
   calls: sub_675510
*/
void sub_7938b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7938b0ULL || rel >= 0x793920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793920 size=16 callers=0 calls=0
*/
void sub_793920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793920ULL || rel >= 0x793930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793930 size=96 callers=0 calls=1
   calls: sub_675390
*/
void sub_793930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793930ULL || rel >= 0x793990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793990 size=128 callers=0 calls=1
   calls: sub_6753e0
*/
void sub_793990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793990ULL || rel >= 0x793a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793a10 size=80 callers=3 calls=1
   calls: sub_6755b0
*/
void sub_793a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793a10ULL || rel >= 0x793a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793a60 size=96 callers=9 calls=1
   calls: sub_675720
*/
void sub_793a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793a60ULL || rel >= 0x793ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793ac0 size=96 callers=0 calls=1
   calls: sub_675750
*/
void sub_793ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793ac0ULL || rel >= 0x793b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793b20 size=128 callers=0 calls=1
   calls: sub_675780
*/
void sub_793b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793b20ULL || rel >= 0x793ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793ba0 size=112 callers=0 calls=1
   calls: sub_6757c0
*/
void sub_793ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793ba0ULL || rel >= 0x793c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793c10 size=96 callers=0 calls=1
   calls: sub_6757f0
*/
void sub_793c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793c10ULL || rel >= 0x793c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793c70 size=160 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_793c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793c70ULL || rel >= 0x793d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793d10 size=208 callers=8 calls=4
   calls: SourceGlobal_2, sub_5cfaf0, sub_791a00, sub_d0c0
*/
void sub_793d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793d10ULL || rel >= 0x793de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793de0 size=192 callers=9 calls=3
   calls: sub_791a00, sub_792300, sub_7936f0
*/
void sub_793de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793de0ULL || rel >= 0x793ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793ea0 size=144 callers=20 calls=1
   calls: sub_791a00
*/
void sub_793ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793ea0ULL || rel >= 0x793f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793f30 size=128 callers=8 calls=1
   calls: sub_791a00
*/
void sub_793f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793f30ULL || rel >= 0x793fb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00793fb0 size=144 callers=9 calls=1
   calls: sub_791a00
*/
void sub_793fb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x793fb0ULL || rel >= 0x794040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794040 size=128 callers=24 calls=1
   calls: sub_791a00
*/
void sub_794040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794040ULL || rel >= 0x7940c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007940c0 size=96 callers=0 calls=1
   calls: sub_791a00
*/
void sub_7940c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7940c0ULL || rel >= 0x794120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794120 size=128 callers=0 calls=1
   calls: sub_791a00
*/
void sub_794120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794120ULL || rel >= 0x7941a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007941a0 size=128 callers=0 calls=1
   calls: sub_791a00
*/
void sub_7941a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7941a0ULL || rel >= 0x794220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794220 size=112 callers=4 calls=1
   calls: sub_791a00
*/
void sub_794220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794220ULL || rel >= 0x794290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794290 size=128 callers=3 calls=1
   calls: sub_791a00
*/
void sub_794290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794290ULL || rel >= 0x794310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794310 size=32 callers=36 calls=0
*/
void sub_794310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794310ULL || rel >= 0x794330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794330 size=96 callers=137 calls=1
   calls: sub_791a00
*/
void sub_794330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794330ULL || rel >= 0x794390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794390 size=96 callers=0 calls=1
   calls: sub_791a00
*/
void sub_794390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794390ULL || rel >= 0x7943f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007943f0 size=128 callers=4 calls=1
   calls: sub_791a00
*/
void sub_7943f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7943f0ULL || rel >= 0x794470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794470 size=32 callers=2 calls=0
*/
void sub_794470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794470ULL || rel >= 0x794490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794490 size=16 callers=3 calls=0
*/
void sub_794490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794490ULL || rel >= 0x7944a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007944a0 size=16 callers=0 calls=0
*/
void sub_7944a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7944a0ULL || rel >= 0x7944b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007944b0 size=16 callers=0 calls=0
*/
void sub_7944b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7944b0ULL || rel >= 0x7944c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007944c0 size=80 callers=0 calls=0
*/
void sub_7944c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7944c0ULL || rel >= 0x794510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794510 size=80 callers=0 calls=0
*/
void sub_794510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794510ULL || rel >= 0x794560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794560 size=304 callers=1 calls=1
   calls: sub_799930
*/
void sub_794560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794560ULL || rel >= 0x794690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794690 size=1552 callers=0 calls=18
   calls: sub_78f150, sub_78f240, sub_794560, sub_794ca0, sub_794e80, sub_7950c0, sub_7951f0, sub_799dd0, sub_799f80, sub_79a420, sub_79a790, sub_79ab20
   ... +6 more
   ref: font_fs_42_00.bffnt
   ref: BagViewShop
   ref: CommonOptionBar
   ref: common/iteminfo.dat
   ref: MsgWindowView
   ref: font_fs_32_00.bffnt
   ref: BagViewTop
   ref: common/wazainfo.dat
*/
void BagViewShop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794690ULL || rel >= 0x794ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794ca0 size=480 callers=1 calls=3
   calls: sub_799dd0, sub_e7c160, sub_e7c210
*/
void sub_794ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794ca0ULL || rel >= 0x794e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00794e80 size=576 callers=32 calls=2
   calls: sub_e7c160, sub_e7d190
*/
void sub_794e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x794e80ULL || rel >= 0x7950c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007950c0 size=304 callers=18 calls=3
   calls: sub_5e6180, sub_799f00, sub_d0c0
*/
void sub_7950c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7950c0ULL || rel >= 0x7951f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007951f0 size=256 callers=1 calls=1
   calls: sub_799840
*/
void sub_7951f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7951f0ULL || rel >= 0x7952f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007952f0 size=1840 callers=0 calls=21
   calls: sub_14b2b20, sub_14d68a0, sub_1500ea0, sub_5cfad0, sub_5cfaf0, sub_795a20, sub_795ac0, sub_795bc0, sub_799dd0, sub_79b5a0, sub_79b6f0, sub_79b840
   ... +9 more
   ref: BagViewShop
   ref: BagViewTop
   ref: BagViewSkillSelect
*/
void BagViewShop_2(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7952f0ULL || rel >= 0x795a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00795a20 size=160 callers=1 calls=2
   calls: sub_1308340, sub_14d6820
*/
void sub_795a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x795a20ULL || rel >= 0x795ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00795ac0 size=256 callers=2 calls=1
   calls: sub_93c570
*/
void sub_795ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x795ac0ULL || rel >= 0x795bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00795bc0 size=336 callers=127 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_795bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x795bc0ULL || rel >= 0x795d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00795d10 size=176 callers=0 calls=2
   calls: sub_799dd0, sub_7a7980
*/
void sub_795d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x795d10ULL || rel >= 0x795dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00795dc0 size=1296 callers=0 calls=2
   calls: sub_79ba80, sub_e7c160
*/
void sub_795dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x795dc0ULL || rel >= 0x7962d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007962d0 size=1232 callers=0 calls=7
   calls: sub_1367a30, sub_79bbc0, sub_79bd10, sub_79be60, sub_79bfb0, sub_79c100, sub_e7c160
*/
void sub_7962d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7962d0ULL || rel >= 0x7967a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007967a0 size=640 callers=0 calls=5
   calls: sub_79be60, sub_79c240, sub_79c330, sub_79c480, sub_e7c160
*/
void sub_7967a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7967a0ULL || rel >= 0x796a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00796a20 size=1456 callers=0 calls=14
   calls: sub_79bd10, sub_79bfb0, sub_79c100, sub_79c240, sub_79c330, sub_79c5d0, sub_79c720, sub_79c870, sub_79c9c0, sub_79cb10, sub_79cc60, sub_79cdb0
   ... +2 more
*/
void sub_796a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x796a20ULL || rel >= 0x796fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00796fd0 size=848 callers=0 calls=5
   calls: sub_79bd10, sub_79be60, sub_79c240, sub_79c720, sub_e7c160
*/
void sub_796fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x796fd0ULL || rel >= 0x797320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00797320 size=960 callers=0 calls=6
   calls: sub_79bd10, sub_79be60, sub_79c240, sub_79c330, sub_79d050, sub_e7c160
*/
void sub_797320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x797320ULL || rel >= 0x7976e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007976e0 size=1184 callers=0 calls=5
   calls: sub_79bd10, sub_79be60, sub_79c240, sub_79d050, sub_e7c160
*/
void sub_7976e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7976e0ULL || rel >= 0x797b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00797b80 size=416 callers=0 calls=3
   calls: sub_79bd10, sub_79c240, sub_e7c160
*/
void sub_797b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x797b80ULL || rel >= 0x797d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00797d20 size=528 callers=0 calls=4
   calls: sub_79bd10, sub_79c240, sub_79c330, sub_e7c160
*/
void sub_797d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x797d20ULL || rel >= 0x797f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00797f30 size=432 callers=0 calls=3
   calls: sub_79c240, sub_79c330, sub_e7c160
*/
void sub_797f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x797f30ULL || rel >= 0x7980e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007980e0 size=656 callers=0 calls=7
   calls: sub_786c10, sub_79b6f0, sub_79bd10, sub_79c240, sub_79c330, sub_7a21c0, sub_e7c160
   ref: BagViewTop
*/
void BagViewTop(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7980e0ULL || rel >= 0x798370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00798370 size=624 callers=0 calls=4
   calls: sub_79bd10, sub_79c240, sub_79c330, sub_e7c160
*/
void sub_798370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x798370ULL || rel >= 0x7985e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007985e0 size=768 callers=0 calls=4
   calls: sub_79bd10, sub_79c240, sub_79c330, sub_e7c160
*/
void sub_7985e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7985e0ULL || rel >= 0x7988e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007988e0 size=416 callers=0 calls=3
   calls: sub_79bd10, sub_79c240, sub_e7c160
*/
void sub_7988e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7988e0ULL || rel >= 0x798a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00798a80 size=1088 callers=0 calls=5
   calls: sub_79bd10, sub_79be60, sub_79c240, sub_79c330, sub_e7c160
*/
void sub_798a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x798a80ULL || rel >= 0x798ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00798ec0 size=736 callers=0 calls=4
   calls: sub_79bd10, sub_79be60, sub_79c240, sub_e7c160
*/
void sub_798ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x798ec0ULL || rel >= 0x7991a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007991a0 size=624 callers=0 calls=4
   calls: sub_79bd10, sub_79c240, sub_79c330, sub_e7c160
*/
void sub_7991a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7991a0ULL || rel >= 0x799410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799410 size=16 callers=0 calls=0
*/
void sub_799410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799410ULL || rel >= 0x799420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799420 size=448 callers=0 calls=3
   calls: sub_5cf8e0, sub_5cf8f0, sub_65f110
*/
void sub_799420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799420ULL || rel >= 0x7995e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007995e0 size=16 callers=0 calls=0
*/
void sub_7995e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7995e0ULL || rel >= 0x7995f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007995f0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_7995f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7995f0ULL || rel >= 0x7996a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007996a0 size=16 callers=0 calls=0
*/
void sub_7996a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7996a0ULL || rel >= 0x7996b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007996b0 size=16 callers=0 calls=0
*/
void sub_7996b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7996b0ULL || rel >= 0x7996c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007996c0 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_7996c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7996c0ULL || rel >= 0x799770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799770 size=176 callers=0 calls=1
   calls: sub_c39c40
*/
void sub_799770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799770ULL || rel >= 0x799820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799820 size=16 callers=0 calls=0
*/
void sub_799820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799820ULL || rel >= 0x799830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799830 size=16 callers=0 calls=0
*/
void sub_799830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799830ULL || rel >= 0x799840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799840 size=240 callers=8 calls=1
   calls: wazainfo
*/
void sub_799840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799840ULL || rel >= 0x799930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799930 size=432 callers=8 calls=1
   calls: sub_7863b0
*/
void sub_799930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799930ULL || rel >= 0x799ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799ae0 size=16 callers=0 calls=0
*/
void sub_799ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799ae0ULL || rel >= 0x799af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799af0 size=16 callers=0 calls=0
*/
void sub_799af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799af0ULL || rel >= 0x799b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799b00 size=16 callers=0 calls=0
*/
void sub_799b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799b00ULL || rel >= 0x799b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799b10 size=16 callers=0 calls=0
*/
void sub_799b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799b10ULL || rel >= 0x799b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799b20 size=560 callers=0 calls=0
*/
void sub_799b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799b20ULL || rel >= 0x799d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799d50 size=16 callers=0 calls=0
*/
void sub_799d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799d50ULL || rel >= 0x799d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799d60 size=16 callers=0 calls=0
*/
void sub_799d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799d60ULL || rel >= 0x799d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799d70 size=16 callers=0 calls=0
*/
void sub_799d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799d70ULL || rel >= 0x799d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799d80 size=16 callers=0 calls=0
*/
void sub_799d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799d80ULL || rel >= 0x799d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799d90 size=16 callers=0 calls=0
*/
void sub_799d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799d90ULL || rel >= 0x799da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799da0 size=16 callers=0 calls=0
*/
void sub_799da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799da0ULL || rel >= 0x799db0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799db0 size=16 callers=0 calls=0
*/
void sub_799db0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799db0ULL || rel >= 0x799dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799dc0 size=16 callers=0 calls=0
*/
void sub_799dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799dc0ULL || rel >= 0x799dd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799dd0 size=304 callers=156 calls=0
*/
void sub_799dd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799dd0ULL || rel >= 0x799f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799f00 size=128 callers=1 calls=1
   calls: sub_d0c0
*/
void sub_799f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799f00ULL || rel >= 0x799f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00799f80 size=288 callers=2 calls=2
   calls: sub_79a0a0, sub_e809c0
*/
void sub_799f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x799f80ULL || rel >= 0x79a0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079a0a0 size=384 callers=1 calls=3
   calls: sub_790490, sub_79a220, sub_e7fe20
*/
void sub_79a0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79a0a0ULL || rel >= 0x79a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079a220 size=512 callers=1 calls=1
   calls: anonymous_2
*/
void sub_79a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79a220ULL || rel >= 0x79a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079a420 size=288 callers=1 calls=2
   calls: sub_79a540, sub_e809c0
*/
void sub_79a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79a420ULL || rel >= 0x79a540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079a540 size=592 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_79a540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79a540ULL || rel >= 0x79a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079a790 size=288 callers=2 calls=2
   calls: sub_79a8b0, sub_e809c0
*/
void sub_79a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79a790ULL || rel >= 0x79a8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079a8b0 size=624 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_79a8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79a8b0ULL || rel >= 0x79ab20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079ab20 size=288 callers=31 calls=2
   calls: sub_79ac40, sub_e809c0
*/
void sub_79ab20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79ab20ULL || rel >= 0x79ac40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079ac40 size=384 callers=1 calls=3
   calls: sub_790490, sub_79adc0, sub_e7fe20
*/
void sub_79ac40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79ac40ULL || rel >= 0x79adc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079adc0 size=320 callers=1 calls=2
   calls: anonymous_2, sub_ea46c0
*/
void sub_79adc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79adc0ULL || rel >= 0x79af00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079af00 size=288 callers=2 calls=2
   calls: sub_79b020, sub_e809c0
*/
void sub_79af00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79af00ULL || rel >= 0x79b020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079b020 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_79b020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79b020ULL || rel >= 0x79b250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079b250 size=288 callers=35 calls=2
   calls: sub_79b370, sub_e809c0
*/
void sub_79b250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79b250ULL || rel >= 0x79b370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079b370 size=560 callers=1 calls=3
   calls: anonymous_2, sub_790490, sub_e7fe20
*/
void sub_79b370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79b370ULL || rel >= 0x79b5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079b5a0 size=336 callers=3 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_79b5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79b5a0ULL || rel >= 0x79b6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079b6f0 size=336 callers=24 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_79b6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79b6f0ULL || rel >= 0x79b840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079b840 size=336 callers=9 calls=2
   calls: sub_5cfaf0, sub_e7f6c0
*/
void sub_79b840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79b840ULL || rel >= 0x79b990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079b990 size=240 callers=92 calls=1
   calls: sub_e7f6c0
*/
void sub_79b990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79b990ULL || rel >= 0x79ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079ba80 size=320 callers=1 calls=1
   calls: anonymous
*/
void sub_79ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79ba80ULL || rel >= 0x79bbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079bbc0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_79bbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79bbc0ULL || rel >= 0x79bd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079bd10 size=336 callers=16 calls=1
   calls: anonymous
*/
void sub_79bd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79bd10ULL || rel >= 0x79be60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079be60 size=336 callers=9 calls=1
   calls: anonymous
*/
void sub_79be60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79be60ULL || rel >= 0x79bfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079bfb0 size=336 callers=2 calls=1
   calls: anonymous
*/
void sub_79bfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79bfb0ULL || rel >= 0x79c100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079c100 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_79c100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79c100ULL || rel >= 0x79c240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079c240 size=240 callers=84 calls=0
*/
void sub_79c240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79c240ULL || rel >= 0x79c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079c330 size=336 callers=10 calls=1
   calls: anonymous
*/
void sub_79c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79c330ULL || rel >= 0x79c480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079c480 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_79c480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79c480ULL || rel >= 0x79c5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079c5d0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_79c5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79c5d0ULL || rel >= 0x79c720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079c720 size=336 callers=2 calls=1
   calls: anonymous
*/
void sub_79c720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79c720ULL || rel >= 0x79c870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079c870 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_79c870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79c870ULL || rel >= 0x79c9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079c9c0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_79c9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79c9c0ULL || rel >= 0x79cb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079cb10 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_79cb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79cb10ULL || rel >= 0x79cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079cc60 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_79cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79cc60ULL || rel >= 0x79cdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079cdb0 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_79cdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79cdb0ULL || rel >= 0x79cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079cf00 size=336 callers=1 calls=1
   calls: anonymous
*/
void sub_79cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79cf00ULL || rel >= 0x79d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079d050 size=320 callers=2 calls=1
   calls: anonymous
*/
void sub_79d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79d050ULL || rel >= 0x79d190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079d190 size=128 callers=0 calls=0
*/
void sub_79d190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79d190ULL || rel >= 0x79d210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079d210 size=4848 callers=0 calls=19
   calls: color_unselect, sub_12b7bf0, sub_14aad40, sub_14ab040, sub_14ba7b0, sub_5cfad0, sub_67b990, sub_79e500, sub_79e8a0, sub_79ebb0, sub_7a3c20, sub_7a3f10
   ... +7 more
   ref: grid_00
*/
void grid_00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79d210ULL || rel >= 0x79e500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079e500 size=928 callers=1 calls=7
   calls: sub_14eec70, sub_14f1840, sub_14f1850, sub_14f1ef0, sub_7a41b0, sub_7a4ba0, sub_e84250
*/
void sub_79e500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79e500ULL || rel >= 0x79e8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079e8a0 size=736 callers=1 calls=2
   calls: sub_14aad40, sub_e83930
*/
void sub_79e8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79e8a0ULL || rel >= 0x79eb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079eb80 size=48 callers=46 calls=0
*/
void sub_79eb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79eb80ULL || rel >= 0x79ebb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079ebb0 size=272 callers=37 calls=2
   calls: sub_14ac370, sub_67d450
*/
void sub_79ebb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79ebb0ULL || rel >= 0x79ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079ecc0 size=544 callers=1 calls=3
   calls: sub_17ac790, sub_7a3a10, sub_93c570
   ref: color_select
   ref: color_unselect
*/
void color_unselect(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79ecc0ULL || rel >= 0x79eee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079eee0 size=624 callers=1 calls=0
*/
void sub_79eee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79eee0ULL || rel >= 0x79f150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079f150 size=128 callers=0 calls=3
   calls: sub_14aad40, sub_e82f10, sub_e833a0
   ref: anime_f_in_follow
*/
void anime_f_in_follow(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79f150ULL || rel >= 0x79f1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079f1d0 size=16 callers=0 calls=0
*/
void sub_79f1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79f1d0ULL || rel >= 0x79f1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079f1e0 size=496 callers=0 calls=1
   calls: sub_c46830
   ref: bin/appli/bag/bin/bag_top_00_lyt.bin
   ref: bin/appli/bag/bin/uikit_bag_top.bin
*/
void uikit_bag_top(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79f1e0ULL || rel >= 0x79f3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079f3d0 size=976 callers=3 calls=5
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10, sub_eb7b00
*/
void sub_79f3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79f3d0ULL || rel >= 0x79f7a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079f7a0 size=304 callers=1 calls=1
   calls: sub_7a3a10
*/
void sub_79f7a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79f7a0ULL || rel >= 0x79f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0079f8d0 size=1936 callers=2 calls=2
   calls: sub_1366cd0, sub_786a40
*/
void sub_79f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x79f8d0ULL || rel >= 0x7a0060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a0060 size=2272 callers=26 calls=23
   calls: sub_12b86e0, sub_12b8870, sub_1366a40, sub_1366cd0, sub_14aad40, sub_14e1a30, sub_14e1b40, sub_14edac0, sub_14eea30, sub_14f1840, sub_14f1850, sub_14f1870
   ... +11 more
*/
void sub_7a0060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a0060ULL || rel >= 0x7a0940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a0940 size=304 callers=18 calls=1
   calls: sub_e83f20
*/
void sub_7a0940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a0940ULL || rel >= 0x7a0a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a0a70 size=16 callers=0 calls=0
*/
void sub_7a0a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a0a70ULL || rel >= 0x7a0a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a0a80 size=304 callers=0 calls=0
*/
void sub_7a0a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a0a80ULL || rel >= 0x7a0bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a0bb0 size=368 callers=1 calls=3
   calls: bag_pocket, sub_79ebb0, sub_e7eb10
*/
void sub_7a0bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a0bb0ULL || rel >= 0x7a0d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a0d20 size=304 callers=1 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_7a0d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a0d20ULL || rel >= 0x7a0e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a0e50 size=416 callers=2 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_7a0e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a0e50ULL || rel >= 0x7a0ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a0ff0 size=688 callers=9 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_7a0ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a0ff0ULL || rel >= 0x7a12a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a12a0 size=1360 callers=6 calls=7
   calls: sub_12b7e10, sub_12b8680, sub_14e1a30, sub_14e6d90, sub_762d50, sub_e7eb10, sub_e83e60
*/
void sub_7a12a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a12a0ULL || rel >= 0x7a17f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a17f0 size=480 callers=3 calls=2
   calls: sub_14aad40, sub_7a19d0
*/
void sub_7a17f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a17f0ULL || rel >= 0x7a19d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a19d0 size=272 callers=10 calls=4
   calls: sub_1366a40, sub_7863b0, sub_786410, sub_786420
*/
void sub_7a19d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a19d0ULL || rel >= 0x7a1ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a1ae0 size=16 callers=3 calls=0
*/
void sub_7a1ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a1ae0ULL || rel >= 0x7a1af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a1af0 size=176 callers=6 calls=1
   calls: sub_1366a40
*/
void sub_7a1af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a1af0ULL || rel >= 0x7a1ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a1ba0 size=144 callers=8 calls=1
   calls: sub_e83430
*/
void sub_7a1ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a1ba0ULL || rel >= 0x7a1c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a1c30 size=496 callers=2 calls=4
   calls: sub_1315b90, sub_137b8b0, sub_79ebb0, sub_e7eb10
*/
void sub_7a1c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a1c30ULL || rel >= 0x7a1e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a1e20 size=368 callers=15 calls=4
   calls: sub_1366a40, sub_14aad40, sub_7a17f0, sub_7a19d0
*/
void sub_7a1e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a1e20ULL || rel >= 0x7a1f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a1f90 size=128 callers=2 calls=1
   calls: sub_1366a40
*/
void sub_7a1f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a1f90ULL || rel >= 0x7a2010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2010 size=176 callers=11 calls=3
   calls: sub_14e1a00, sub_14e1b40, sub_14e6550
*/
void sub_7a2010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2010ULL || rel >= 0x7a20c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a20c0 size=128 callers=4 calls=3
   calls: sub_14e1a00, sub_14e1b40, sub_14e6550
*/
void sub_7a20c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a20c0ULL || rel >= 0x7a2140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2140 size=128 callers=46 calls=2
   calls: sub_14e1a00, sub_14e1b40
*/
void sub_7a2140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2140ULL || rel >= 0x7a21c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a21c0 size=144 callers=89 calls=1
   calls: sub_1366a40
*/
void sub_7a21c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a21c0ULL || rel >= 0x7a2250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2250 size=144 callers=6 calls=1
   calls: sub_1366a40
*/
void sub_7a2250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2250ULL || rel >= 0x7a22e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a22e0 size=208 callers=3 calls=2
   calls: sub_1366a40, sub_e83930
*/
void sub_7a22e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a22e0ULL || rel >= 0x7a23b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a23b0 size=416 callers=3 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_7a23b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a23b0ULL || rel >= 0x7a2550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2550 size=624 callers=12 calls=4
   calls: sub_14e3670, sub_67d450, sub_93c570, sub_e7eb10
*/
void sub_7a2550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2550ULL || rel >= 0x7a27c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a27c0 size=256 callers=12 calls=3
   calls: sub_14e4040, sub_79f7a0, sub_93c570
*/
void sub_7a27c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a27c0ULL || rel >= 0x7a28c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a28c0 size=240 callers=12 calls=3
   calls: Play_UI_common_decide_5, sub_14e3680, sub_93c570
*/
void sub_7a28c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a28c0ULL || rel >= 0x7a29b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a29b0 size=272 callers=6 calls=2
   calls: sub_14ac370, sub_67d080
*/
void sub_7a29b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a29b0ULL || rel >= 0x7a2ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2ac0 size=32 callers=3 calls=0
*/
void sub_7a2ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2ac0ULL || rel >= 0x7a2ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2ae0 size=48 callers=1 calls=1
   calls: sub_14e6550
*/
void sub_7a2ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2ae0ULL || rel >= 0x7a2b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2b10 size=112 callers=1 calls=1
   calls: sub_14aad40
*/
void sub_7a2b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2b10ULL || rel >= 0x7a2b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2b80 size=80 callers=1 calls=1
   calls: sub_14aad40
*/
void sub_7a2b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2b80ULL || rel >= 0x7a2bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2bd0 size=464 callers=2 calls=1
   calls: sub_14e1a00
*/
void sub_7a2bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2bd0ULL || rel >= 0x7a2da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2da0 size=64 callers=3 calls=0
*/
void sub_7a2da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2da0ULL || rel >= 0x7a2de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2de0 size=80 callers=1 calls=0
*/
void sub_7a2de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2de0ULL || rel >= 0x7a2e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a2e30 size=624 callers=1 calls=4
   calls: sub_14ea4f0, sub_14ea9a0, sub_67d450, sub_e7eb10
*/
void sub_7a2e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a2e30ULL || rel >= 0x7a30a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a30a0 size=160 callers=1 calls=2
   calls: sub_1366a40, sub_786cf0
*/
void sub_7a30a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a30a0ULL || rel >= 0x7a3140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3140 size=16 callers=1 calls=0
*/
void sub_7a3140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3140ULL || rel >= 0x7a3150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3150 size=48 callers=1 calls=1
   calls: sub_e59010
*/
void sub_7a3150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3150ULL || rel >= 0x7a3180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3180 size=576 callers=6 calls=3
   calls: sub_1315b90, sub_79ebb0, sub_e7eb10
*/
void sub_7a3180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3180ULL || rel >= 0x7a33c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a33c0 size=96 callers=4 calls=2
   calls: sub_12b8440, sub_14aad40
*/
void sub_7a33c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a33c0ULL || rel >= 0x7a3420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3420 size=64 callers=1 calls=1
   calls: sub_14aad40
*/
void sub_7a3420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3420ULL || rel >= 0x7a3460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3460 size=48 callers=5 calls=0
*/
void sub_7a3460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3460ULL || rel >= 0x7a3490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3490 size=112 callers=1 calls=3
   calls: sub_12b89a0, sub_14aad40, sub_e83c60
*/
void sub_7a3490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3490ULL || rel >= 0x7a3500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3500 size=112 callers=1 calls=3
   calls: sub_12b8aa0, sub_14aad40, sub_e83c60
*/
void sub_7a3500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3500ULL || rel >= 0x7a3570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3570 size=176 callers=1 calls=4
   calls: sub_e83430, sub_e83930, sub_e83a20, sub_e83f20
*/
void sub_7a3570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3570ULL || rel >= 0x7a3620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3620 size=496 callers=1 calls=2
   calls: sub_5cfad0, sub_7a3c20
*/
void sub_7a3620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3620ULL || rel >= 0x7a3810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3810 size=32 callers=31 calls=0
*/
void sub_7a3810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3810ULL || rel >= 0x7a3830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3830 size=32 callers=3 calls=0
*/
void sub_7a3830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3830ULL || rel >= 0x7a3850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3850 size=320 callers=0 calls=1
   calls: sub_7a3f10
*/
void sub_7a3850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3850ULL || rel >= 0x7a3990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a3990 size=16 callers=0 calls=0
*/
void sub_7a3990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a3990ULL || rel >= 0x7a39a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a39a0 size=16 callers=0 calls=0
*/
void sub_7a39a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a39a0ULL || rel >= 0x7a39b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007a39b0 size=16 callers=0 calls=0
*/
void sub_7a39b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7a39b0ULL || rel >= 0x7a39c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

