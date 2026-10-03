/* main functions 0034b130..003694a0 (20 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0034b130 size=16 callers=0 calls=0
*/
void sub_34b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b130ULL || rel >= 0x34b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b140 size=288 callers=1 calls=3
   calls: sub_3045e0, sub_349be0, sub_385430
*/
void sub_34b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b140ULL || rel >= 0x34b260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b260 size=16 callers=0 calls=0
*/
void sub_34b260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b260ULL || rel >= 0x34b270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b270 size=160 callers=0 calls=1
   calls: sub_34c330
*/
void sub_34b270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b270ULL || rel >= 0x34b310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b310 size=112 callers=0 calls=1
   calls: sub_3351b0
*/
void sub_34b310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b310ULL || rel >= 0x34b380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b380 size=352 callers=0 calls=0
*/
void sub_34b380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b380ULL || rel >= 0x34b4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b4e0 size=128 callers=0 calls=0
*/
void sub_34b4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b4e0ULL || rel >= 0x34b560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b560 size=256 callers=0 calls=0
*/
void sub_34b560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b560ULL || rel >= 0x34b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b660 size=176 callers=0 calls=0
*/
void sub_34b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b660ULL || rel >= 0x34b710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b710 size=16 callers=0 calls=0
*/
void sub_34b710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b710ULL || rel >= 0x34b720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b720 size=160 callers=0 calls=0
*/
void sub_34b720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b720ULL || rel >= 0x34b7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b7c0 size=208 callers=1 calls=2
   calls: sub_382c40, sub_3b3a10
*/
void sub_34b7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b7c0ULL || rel >= 0x34b890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b890 size=128 callers=0 calls=0
*/
void sub_34b890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b890ULL || rel >= 0x34b910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b910 size=176 callers=0 calls=0
*/
void sub_34b910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b910ULL || rel >= 0x34b9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034b9c0 size=256 callers=0 calls=0
*/
void sub_34b9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34b9c0ULL || rel >= 0x34bac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bac0 size=176 callers=0 calls=0
*/
void sub_34bac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bac0ULL || rel >= 0x34bb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bb70 size=208 callers=0 calls=0
*/
void sub_34bb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bb70ULL || rel >= 0x34bc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bc40 size=16 callers=0 calls=0
*/
void sub_34bc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bc40ULL || rel >= 0x34bc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bc50 size=112 callers=0 calls=0
*/
void sub_34bc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bc50ULL || rel >= 0x34bcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bcc0 size=160 callers=0 calls=0
*/
void sub_34bcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bcc0ULL || rel >= 0x34bd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bd60 size=192 callers=0 calls=0
*/
void sub_34bd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bd60ULL || rel >= 0x34be20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034be20 size=128 callers=0 calls=0
*/
void sub_34be20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34be20ULL || rel >= 0x34bea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bea0 size=160 callers=0 calls=0
*/
void sub_34bea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bea0ULL || rel >= 0x34bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bf40 size=80 callers=0 calls=0
*/
void sub_34bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bf40ULL || rel >= 0x34bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034bf90 size=128 callers=0 calls=0
*/
void sub_34bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34bf90ULL || rel >= 0x34c010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c010 size=16 callers=0 calls=0
*/
void sub_34c010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c010ULL || rel >= 0x34c020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c020 size=16 callers=0 calls=0
*/
void sub_34c020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c020ULL || rel >= 0x34c030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c030 size=16 callers=0 calls=0
*/
void sub_34c030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c030ULL || rel >= 0x34c040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c040 size=160 callers=0 calls=0
*/
void sub_34c040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c040ULL || rel >= 0x34c0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c0e0 size=160 callers=0 calls=0
*/
void sub_34c0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c0e0ULL || rel >= 0x34c180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c180 size=32 callers=0 calls=0
*/
void sub_34c180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c180ULL || rel >= 0x34c1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c1a0 size=64 callers=0 calls=0
*/
void sub_34c1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c1a0ULL || rel >= 0x34c1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c1e0 size=16 callers=0 calls=0
*/
void sub_34c1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c1e0ULL || rel >= 0x34c1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c1f0 size=32 callers=0 calls=0
*/
void sub_34c1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c1f0ULL || rel >= 0x34c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c210 size=16 callers=0 calls=0
*/
void sub_34c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c210ULL || rel >= 0x34c220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c220 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_34c220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c220ULL || rel >= 0x34c290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c290 size=16 callers=0 calls=0
*/
void sub_34c290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c290ULL || rel >= 0x34c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c2a0 size=16 callers=0 calls=0
*/
void sub_34c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c2a0ULL || rel >= 0x34c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c2b0 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_34c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c2b0ULL || rel >= 0x34c320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c320 size=16 callers=0 calls=0
*/
void sub_34c320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c320ULL || rel >= 0x34c330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c330 size=736 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_34c330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c330ULL || rel >= 0x34c610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c610 size=128 callers=1 calls=3
   calls: sub_3045e0, sub_34c690, sub_363510
*/
void sub_34c610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c610ULL || rel >= 0x34c690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c690 size=240 callers=1 calls=1
   calls: sub_335420
*/
void sub_34c690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c690ULL || rel >= 0x34c780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034c780 size=736 callers=1 calls=3
   calls: sub_3045e0, sub_3047c0, sub_34ca60
*/
void sub_34c780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34c780ULL || rel >= 0x34ca60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ca60 size=640 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_34ca60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ca60ULL || rel >= 0x34cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034cce0 size=400 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_34cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34cce0ULL || rel >= 0x34ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ce70 size=48 callers=0 calls=1
   calls: sub_34cce0
*/
void sub_34ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ce70ULL || rel >= 0x34cea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034cea0 size=96 callers=0 calls=0
*/
void sub_34cea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34cea0ULL || rel >= 0x34cf00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034cf00 size=288 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_34cf00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34cf00ULL || rel >= 0x34d020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d020 size=80 callers=0 calls=0
*/
void sub_34d020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d020ULL || rel >= 0x34d070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d070 size=80 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_34d070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d070ULL || rel >= 0x34d0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d0c0 size=448 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_34d0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d0c0ULL || rel >= 0x34d280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d280 size=464 callers=1 calls=0
*/
void sub_34d280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d280ULL || rel >= 0x34d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d450 size=592 callers=9 calls=0
*/
void sub_34d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d450ULL || rel >= 0x34d6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d6a0 size=192 callers=0 calls=0
*/
void sub_34d6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d6a0ULL || rel >= 0x34d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d760 size=16 callers=0 calls=0
*/
void sub_34d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d760ULL || rel >= 0x34d770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d770 size=16 callers=0 calls=0
*/
void sub_34d770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d770ULL || rel >= 0x34d780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d780 size=48 callers=0 calls=1
   calls: sub_3518d0
*/
void sub_34d780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d780ULL || rel >= 0x34d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d7b0 size=48 callers=0 calls=1
   calls: sub_3518d0
*/
void sub_34d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d7b0ULL || rel >= 0x34d7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d7e0 size=128 callers=1 calls=3
   calls: sub_3045e0, sub_351840, sub_3820f0
*/
void sub_34d7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d7e0ULL || rel >= 0x34d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d860 size=16 callers=0 calls=0
*/
void sub_34d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d860ULL || rel >= 0x34d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d870 size=256 callers=0 calls=0
*/
void sub_34d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d870ULL || rel >= 0x34d970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034d970 size=176 callers=0 calls=0
*/
void sub_34d970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34d970ULL || rel >= 0x34da20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034da20 size=16 callers=0 calls=0
*/
void sub_34da20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34da20ULL || rel >= 0x34da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034da30 size=176 callers=0 calls=0
*/
void sub_34da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34da30ULL || rel >= 0x34dae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dae0 size=160 callers=0 calls=0
*/
void sub_34dae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dae0ULL || rel >= 0x34db80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034db80 size=80 callers=0 calls=0
*/
void sub_34db80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34db80ULL || rel >= 0x34dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dbd0 size=16 callers=0 calls=0
*/
void sub_34dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dbd0ULL || rel >= 0x34dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dbe0 size=16 callers=0 calls=0
*/
void sub_34dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dbe0ULL || rel >= 0x34dbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dbf0 size=16 callers=0 calls=0
*/
void sub_34dbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dbf0ULL || rel >= 0x34dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dc00 size=16 callers=0 calls=0
*/
void sub_34dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dc00ULL || rel >= 0x34dc10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dc10 size=16 callers=0 calls=0
*/
void sub_34dc10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dc10ULL || rel >= 0x34dc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dc20 size=32 callers=1 calls=0
*/
void sub_34dc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dc20ULL || rel >= 0x34dc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dc40 size=16 callers=1 calls=0
*/
void sub_34dc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dc40ULL || rel >= 0x34dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dc50 size=64 callers=0 calls=0
*/
void sub_34dc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dc50ULL || rel >= 0x34dc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dc90 size=32 callers=2 calls=0
*/
void sub_34dc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dc90ULL || rel >= 0x34dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dcb0 size=64 callers=1 calls=1
   calls: sub_304740
*/
void sub_34dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dcb0ULL || rel >= 0x34dcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034dcf0 size=416 callers=1 calls=3
   calls: sub_3046a0, sub_304740, sub_34de90
*/
void sub_34dcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34dcf0ULL || rel >= 0x34de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034de90 size=448 callers=9 calls=0
*/
void sub_34de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34de90ULL || rel >= 0x34e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e050 size=16 callers=1 calls=0
*/
void sub_34e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e050ULL || rel >= 0x34e060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e060 size=432 callers=2 calls=3
   calls: sub_3046a0, sub_304740, sub_34de90
*/
void sub_34e060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e060ULL || rel >= 0x34e210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e210 size=64 callers=2 calls=0
*/
void sub_34e210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e210ULL || rel >= 0x34e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e250 size=256 callers=25 calls=3
   calls: sub_3046a0, sub_304740, sub_34e350
*/
void sub_34e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e250ULL || rel >= 0x34e350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e350 size=512 callers=6 calls=0
*/
void sub_34e350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e350ULL || rel >= 0x34e550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e550 size=64 callers=41 calls=1
   calls: sub_304740
*/
void sub_34e550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e550ULL || rel >= 0x34e590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e590 size=64 callers=52 calls=1
   calls: sub_34e350
*/
void sub_34e590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e590ULL || rel >= 0x34e5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e5d0 size=272 callers=2 calls=2
   calls: sub_379b50, sub_3a4450
*/
void sub_34e5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e5d0ULL || rel >= 0x34e6e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e6e0 size=96 callers=3 calls=2
   calls: sub_3047c0, sub_379b60
*/
void sub_34e6e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e6e0ULL || rel >= 0x34e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e740 size=112 callers=0 calls=3
   calls: sub_3047c0, sub_379b60, sub_3a44a0
*/
void sub_34e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e740ULL || rel >= 0x34e7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e7b0 size=336 callers=2 calls=5
   calls: sub_3047c0, sub_34e900, sub_3887b0, sub_38ab60, sub_3a45b0
*/
void sub_34e7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e7b0ULL || rel >= 0x34e900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034e900 size=320 callers=2 calls=2
   calls: sub_3047c0, sub_39b740
*/
void sub_34e900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34e900ULL || rel >= 0x34ea40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ea40 size=992 callers=3 calls=5
   calls: sub_34ee20, sub_34f2d0, sub_3887d0, sub_38a980, sub_39b150
*/
void sub_34ea40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ea40ULL || rel >= 0x34ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ee20 size=720 callers=3 calls=6
   calls: sub_34f2d0, sub_3887b0, sub_3887d0, sub_38a980, sub_38add0, sub_39b150
*/
void sub_34ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ee20ULL || rel >= 0x34f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f0f0 size=336 callers=1 calls=0
*/
void sub_34f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f0f0ULL || rel >= 0x34f240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f240 size=144 callers=1 calls=1
   calls: sub_3a4560
*/
void sub_34f240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f240ULL || rel >= 0x34f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f2d0 size=432 callers=3 calls=6
   calls: sub_362fd0, sub_3887b0, sub_38a3c0, sub_38a820, sub_38a8c0, sub_395920
*/
void sub_34f2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f2d0ULL || rel >= 0x34f480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f480 size=80 callers=1 calls=1
   calls: sub_3887b0
*/
void sub_34f480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f480ULL || rel >= 0x34f4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f4d0 size=32 callers=0 calls=0
*/
void sub_34f4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f4d0ULL || rel >= 0x34f4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f4f0 size=32 callers=0 calls=0
*/
void sub_34f4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f4f0ULL || rel >= 0x34f510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f510 size=32 callers=0 calls=0
*/
void sub_34f510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f510ULL || rel >= 0x34f530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f530 size=176 callers=1 calls=0
*/
void sub_34f530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f530ULL || rel >= 0x34f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f5e0 size=464 callers=0 calls=0
*/
void sub_34f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f5e0ULL || rel >= 0x34f7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034f7b0 size=592 callers=4 calls=2
   calls: sub_34fa40, sub_3887d0
*/
void sub_34f7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34f7b0ULL || rel >= 0x34fa00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fa00 size=32 callers=1 calls=0
*/
void sub_34fa00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fa00ULL || rel >= 0x34fa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fa20 size=16 callers=0 calls=0
*/
void sub_34fa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fa20ULL || rel >= 0x34fa30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fa30 size=16 callers=0 calls=0
*/
void sub_34fa30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fa30ULL || rel >= 0x34fa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fa40 size=256 callers=3 calls=0
*/
void sub_34fa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fa40ULL || rel >= 0x34fb40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fb40 size=80 callers=2 calls=0
*/
void sub_34fb40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fb40ULL || rel >= 0x34fb90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fb90 size=16 callers=6 calls=0
*/
void sub_34fb90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fb90ULL || rel >= 0x34fba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fba0 size=32 callers=1 calls=0
*/
void sub_34fba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fba0ULL || rel >= 0x34fbc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fbc0 size=64 callers=1 calls=0
*/
void sub_34fbc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fbc0ULL || rel >= 0x34fc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fc00 size=80 callers=0 calls=0
*/
void sub_34fc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fc00ULL || rel >= 0x34fc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fc50 size=240 callers=0 calls=2
   calls: sub_32c040, sub_395920
*/
void sub_34fc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fc50ULL || rel >= 0x34fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fd40 size=128 callers=0 calls=0
*/
void sub_34fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fd40ULL || rel >= 0x34fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fdc0 size=112 callers=0 calls=0
*/
void sub_34fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fdc0ULL || rel >= 0x34fe30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034fe30 size=256 callers=1 calls=1
   calls: sub_32e6c0
*/
void sub_34fe30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34fe30ULL || rel >= 0x34ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0034ff30 size=256 callers=1 calls=1
   calls: sub_32e6c0
*/
void sub_34ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x34ff30ULL || rel >= 0x350030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00350030 size=3104 callers=1 calls=12
   calls: sub_3045e0, sub_3047c0, sub_32c040, sub_32c180, sub_32e540, sub_350c50, sub_3887b0, sub_389ec0, sub_38a3b0, sub_38a420, sub_38add0, sub_395920
*/
void sub_350030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x350030ULL || rel >= 0x350c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00350c50 size=240 callers=8 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_350c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x350c50ULL || rel >= 0x350d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00350d40 size=1408 callers=1 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3512c0, sub_395830
*/
void sub_350d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x350d40ULL || rel >= 0x3512c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003512c0 size=496 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3512c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3512c0ULL || rel >= 0x3514b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003514b0 size=48 callers=3 calls=0
*/
void sub_3514b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3514b0ULL || rel >= 0x3514e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003514e0 size=32 callers=1 calls=0
*/
void sub_3514e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3514e0ULL || rel >= 0x351500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351500 size=80 callers=2 calls=0
*/
void sub_351500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351500ULL || rel >= 0x351550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351550 size=672 callers=1 calls=7
   calls: sub_34e900, sub_34f2d0, sub_3887b0, sub_3887d0, sub_38a980, sub_38add0, sub_39b150
*/
void sub_351550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351550ULL || rel >= 0x3517f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003517f0 size=16 callers=0 calls=0
*/
void sub_3517f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3517f0ULL || rel >= 0x351800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351800 size=16 callers=0 calls=0
*/
void sub_351800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351800ULL || rel >= 0x351810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351810 size=16 callers=0 calls=0
*/
void sub_351810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351810ULL || rel >= 0x351820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351820 size=16 callers=0 calls=0
*/
void sub_351820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351820ULL || rel >= 0x351830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351830 size=16 callers=0 calls=0
*/
void sub_351830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351830ULL || rel >= 0x351840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351840 size=144 callers=1 calls=2
   calls: sub_381ca0, sub_3a45f0
*/
void sub_351840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351840ULL || rel >= 0x3518d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003518d0 size=592 callers=4 calls=7
   calls: sub_3047c0, sub_349950, sub_351b20, sub_351c80, sub_351d90, sub_35c6b0, sub_3a4610
*/
void sub_3518d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3518d0ULL || rel >= 0x351b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351b20 size=352 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_351b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351b20ULL || rel >= 0x351c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351c80 size=272 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_351c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351c80ULL || rel >= 0x351d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351d90 size=272 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_351d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351d90ULL || rel >= 0x351ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351ea0 size=16 callers=0 calls=0
*/
void sub_351ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351ea0ULL || rel >= 0x351eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351eb0 size=48 callers=0 calls=1
   calls: sub_3518d0
*/
void sub_351eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351eb0ULL || rel >= 0x351ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351ee0 size=48 callers=0 calls=1
   calls: sub_3518d0
*/
void sub_351ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351ee0ULL || rel >= 0x351f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00351f10 size=240 callers=1 calls=4
   calls: sub_3045e0, sub_381ca0, sub_3820f0, sub_3a45f0
*/
void sub_351f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x351f10ULL || rel >= 0x352000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352000 size=16 callers=0 calls=0
*/
void sub_352000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352000ULL || rel >= 0x352010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352010 size=192 callers=0 calls=0
*/
void sub_352010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352010ULL || rel >= 0x3520d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003520d0 size=256 callers=0 calls=2
   calls: sub_382c40, sub_3b3a10
*/
void sub_3520d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3520d0ULL || rel >= 0x3521d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003521d0 size=624 callers=1 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3bdf70, sub_3bdfc0
*/
void sub_3521d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3521d0ULL || rel >= 0x352440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352440 size=560 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_352440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352440ULL || rel >= 0x352670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352670 size=176 callers=0 calls=0
*/
void sub_352670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352670ULL || rel >= 0x352720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352720 size=224 callers=0 calls=0
*/
void sub_352720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352720ULL || rel >= 0x352800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352800 size=32 callers=0 calls=0
*/
void sub_352800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352800ULL || rel >= 0x352820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352820 size=16 callers=1 calls=0
*/
void sub_352820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352820ULL || rel >= 0x352830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352830 size=928 callers=0 calls=5
   calls: sub_3045e0, sub_3047c0, sub_352bd0, sub_3776c0, sub_383a90
*/
void sub_352830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352830ULL || rel >= 0x352bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352bd0 size=464 callers=47 calls=2
   calls: sub_39d140, sub_3b33a0
*/
void sub_352bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352bd0ULL || rel >= 0x352da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352da0 size=80 callers=2 calls=0
*/
void sub_352da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352da0ULL || rel >= 0x352df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00352df0 size=544 callers=1 calls=3
   calls: sub_352bd0, sub_353010, sub_353330
*/
void sub_352df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x352df0ULL || rel >= 0x353010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353010 size=800 callers=4 calls=2
   calls: sub_352bd0, sub_353010
*/
void sub_353010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353010ULL || rel >= 0x353330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353330 size=560 callers=5 calls=2
   calls: sub_352bd0, sub_353330
*/
void sub_353330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353330ULL || rel >= 0x353560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353560 size=320 callers=0 calls=1
   calls: sub_377930
*/
void sub_353560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353560ULL || rel >= 0x3536a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003536a0 size=384 callers=7 calls=0
*/
void sub_3536a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3536a0ULL || rel >= 0x353820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353820 size=784 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_353820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353820ULL || rel >= 0x353b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353b30 size=64 callers=0 calls=0
*/
void sub_353b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353b30ULL || rel >= 0x353b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353b70 size=80 callers=0 calls=0
*/
void sub_353b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353b70ULL || rel >= 0x353bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353bc0 size=32 callers=0 calls=0
*/
void sub_353bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353bc0ULL || rel >= 0x353be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353be0 size=32 callers=0 calls=0
*/
void sub_353be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353be0ULL || rel >= 0x353c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353c00 size=32 callers=0 calls=0
*/
void sub_353c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353c00ULL || rel >= 0x353c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353c20 size=32 callers=0 calls=0
*/
void sub_353c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353c20ULL || rel >= 0x353c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353c40 size=752 callers=0 calls=0
*/
void sub_353c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353c40ULL || rel >= 0x353f30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00353f30 size=272 callers=0 calls=0
*/
void sub_353f30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x353f30ULL || rel >= 0x354040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354040 size=544 callers=0 calls=2
   calls: sub_386400, sub_3c5b10
*/
void sub_354040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354040ULL || rel >= 0x354260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354260 size=464 callers=0 calls=1
   calls: sub_386410
*/
void sub_354260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354260ULL || rel >= 0x354430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354430 size=480 callers=0 calls=1
   calls: sub_389210
*/
void sub_354430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354430ULL || rel >= 0x354610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354610 size=16 callers=0 calls=0
*/
void sub_354610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354610ULL || rel >= 0x354620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354620 size=464 callers=0 calls=2
   calls: sub_3b2490, sub_3c5b10
*/
void sub_354620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354620ULL || rel >= 0x3547f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003547f0 size=16 callers=0 calls=0
*/
void sub_3547f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3547f0ULL || rel >= 0x354800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354800 size=464 callers=0 calls=1
   calls: sub_3b2610
*/
void sub_354800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354800ULL || rel >= 0x3549d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003549d0 size=16 callers=0 calls=0
*/
void sub_3549d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3549d0ULL || rel >= 0x3549e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003549e0 size=480 callers=0 calls=2
   calls: sub_3b2ef0, sub_3c5b10
*/
void sub_3549e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3549e0ULL || rel >= 0x354bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354bc0 size=16 callers=0 calls=0
*/
void sub_354bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354bc0ULL || rel >= 0x354bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354bd0 size=16 callers=0 calls=0
*/
void sub_354bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354bd0ULL || rel >= 0x354be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354be0 size=272 callers=0 calls=0
*/
void sub_354be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354be0ULL || rel >= 0x354cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354cf0 size=240 callers=0 calls=1
   calls: sub_34c330
*/
void sub_354cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354cf0ULL || rel >= 0x354de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354de0 size=128 callers=0 calls=1
   calls: sub_3352a0
*/
void sub_354de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354de0ULL || rel >= 0x354e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00354e60 size=592 callers=0 calls=0
*/
void sub_354e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x354e60ULL || rel >= 0x3550b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003550b0 size=224 callers=0 calls=0
*/
void sub_3550b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3550b0ULL || rel >= 0x355190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355190 size=336 callers=1 calls=3
   calls: sub_3045e0, sub_3351b0, sub_3a48c0
*/
void sub_355190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355190ULL || rel >= 0x3552e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003552e0 size=560 callers=1 calls=4
   calls: sub_3045e0, sub_35c6f0, sub_3a48c0, sub_3bdd90
*/
void sub_3552e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3552e0ULL || rel >= 0x355510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355510 size=304 callers=1 calls=1
   calls: sub_3bdd90
*/
void sub_355510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355510ULL || rel >= 0x355640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355640 size=80 callers=1 calls=0
*/
void sub_355640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355640ULL || rel >= 0x355690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355690 size=272 callers=1 calls=1
   calls: sub_3be290
*/
void sub_355690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355690ULL || rel >= 0x3557a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003557a0 size=32 callers=0 calls=0
*/
void sub_3557a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3557a0ULL || rel >= 0x3557c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003557c0 size=192 callers=1 calls=4
   calls: sub_3351b0, sub_3552e0, sub_355510, sub_355690
*/
void sub_3557c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3557c0ULL || rel >= 0x355880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355880 size=240 callers=1 calls=4
   calls: sub_3045e0, sub_3382d0, sub_33c6d0, sub_357ac0
*/
void sub_355880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355880ULL || rel >= 0x355970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355970 size=272 callers=0 calls=3
   calls: sub_3557c0, sub_387510, sub_387fb0
*/
void sub_355970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355970ULL || rel >= 0x355a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355a80 size=176 callers=0 calls=3
   calls: sub_355880, sub_387770, sub_388010
*/
void sub_355a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355a80ULL || rel >= 0x355b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355b30 size=80 callers=0 calls=1
   calls: sub_387370
*/
void sub_355b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355b30ULL || rel >= 0x355b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355b80 size=80 callers=0 calls=1
   calls: sub_3874a0
*/
void sub_355b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355b80ULL || rel >= 0x355bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355bd0 size=32 callers=1 calls=0
*/
void sub_355bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355bd0ULL || rel >= 0x355bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355bf0 size=32 callers=1 calls=0
*/
void sub_355bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355bf0ULL || rel >= 0x355c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355c10 size=112 callers=1 calls=0
*/
void sub_355c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355c10ULL || rel >= 0x355c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355c80 size=208 callers=0 calls=0
*/
void sub_355c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355c80ULL || rel >= 0x355d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355d50 size=16 callers=0 calls=0
*/
void sub_355d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355d50ULL || rel >= 0x355d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355d60 size=512 callers=0 calls=7
   calls: sub_3045e0, sub_355f60, sub_3825f0, sub_3844a0, sub_3845d0, sub_384e80, sub_3c5b00
*/
void sub_355d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355d60ULL || rel >= 0x355f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00355f60 size=416 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_355f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x355f60ULL || rel >= 0x356100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356100 size=1248 callers=0 calls=5
   calls: sub_3045e0, sub_3047c0, sub_3351b0, sub_349be0, sub_355190
*/
void sub_356100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356100ULL || rel >= 0x3565e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003565e0 size=304 callers=0 calls=2
   calls: sub_383520, sub_383740
*/
void sub_3565e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3565e0ULL || rel >= 0x356710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356710 size=16 callers=0 calls=0
*/
void sub_356710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356710ULL || rel >= 0x356720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356720 size=96 callers=2 calls=1
   calls: sub_3b36d0
*/
void sub_356720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356720ULL || rel >= 0x356780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356780 size=368 callers=0 calls=1
   calls: sub_385e80
*/
void sub_356780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356780ULL || rel >= 0x3568f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003568f0 size=400 callers=0 calls=0
*/
void sub_3568f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3568f0ULL || rel >= 0x356a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356a80 size=16 callers=3 calls=0
*/
void sub_356a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356a80ULL || rel >= 0x356a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356a90 size=304 callers=0 calls=0
*/
void sub_356a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356a90ULL || rel >= 0x356bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356bc0 size=400 callers=0 calls=0
*/
void sub_356bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356bc0ULL || rel >= 0x356d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356d50 size=272 callers=0 calls=3
   calls: sub_3045e0, sub_3047c0, sub_382ac0
*/
void sub_356d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356d50ULL || rel >= 0x356e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356e60 size=160 callers=0 calls=0
*/
void sub_356e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356e60ULL || rel >= 0x356f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356f00 size=112 callers=0 calls=0
*/
void sub_356f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356f00ULL || rel >= 0x356f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356f70 size=16 callers=0 calls=0
*/
void sub_356f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356f70ULL || rel >= 0x356f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356f80 size=32 callers=0 calls=0
*/
void sub_356f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356f80ULL || rel >= 0x356fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00356fa0 size=288 callers=0 calls=3
   calls: sub_3045e0, sub_385e80, sub_399350
*/
void sub_356fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x356fa0ULL || rel >= 0x3570c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003570c0 size=400 callers=0 calls=1
   calls: sub_3c56b0
*/
void sub_3570c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3570c0ULL || rel >= 0x357250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357250 size=192 callers=0 calls=0
*/
void sub_357250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357250ULL || rel >= 0x357310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357310 size=96 callers=1 calls=0
*/
void sub_357310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357310ULL || rel >= 0x357370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357370 size=224 callers=1 calls=0
*/
void sub_357370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357370ULL || rel >= 0x357450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357450 size=208 callers=1 calls=0
*/
void sub_357450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357450ULL || rel >= 0x357520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357520 size=304 callers=1 calls=0
*/
void sub_357520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357520ULL || rel >= 0x357650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357650 size=128 callers=3 calls=1
   calls: sub_357650
*/
void sub_357650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357650ULL || rel >= 0x3576d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003576d0 size=160 callers=0 calls=1
   calls: sub_34c330
*/
void sub_3576d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3576d0ULL || rel >= 0x357770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357770 size=352 callers=0 calls=0
*/
void sub_357770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357770ULL || rel >= 0x3578d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003578d0 size=128 callers=0 calls=0
*/
void sub_3578d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3578d0ULL || rel >= 0x357950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357950 size=16 callers=0 calls=0
*/
void sub_357950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357950ULL || rel >= 0x357960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357960 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_357960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357960ULL || rel >= 0x3579d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003579d0 size=16 callers=0 calls=0
*/
void sub_3579d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3579d0ULL || rel >= 0x3579e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003579e0 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3579e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3579e0ULL || rel >= 0x357a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357a50 size=16 callers=0 calls=0
*/
void sub_357a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357a50ULL || rel >= 0x357a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357a60 size=96 callers=0 calls=0
*/
void sub_357a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357a60ULL || rel >= 0x357ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357ac0 size=48 callers=1 calls=1
   calls: sub_33d850
*/
void sub_357ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357ac0ULL || rel >= 0x357af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357af0 size=16 callers=0 calls=0
*/
void sub_357af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357af0ULL || rel >= 0x357b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357b00 size=48 callers=0 calls=1
   calls: sub_33d8a0
*/
void sub_357b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357b00ULL || rel >= 0x357b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357b30 size=64 callers=0 calls=2
   calls: sub_33e810, sub_355bf0
*/
void sub_357b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357b30ULL || rel >= 0x357b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357b70 size=32 callers=1 calls=0
*/
void sub_357b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357b70ULL || rel >= 0x357b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357b90 size=112 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_357b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357b90ULL || rel >= 0x357c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357c00 size=176 callers=1 calls=0
*/
void sub_357c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357c00ULL || rel >= 0x357cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357cb0 size=208 callers=1 calls=0
*/
void sub_357cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357cb0ULL || rel >= 0x357d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357d80 size=128 callers=1 calls=0
*/
void sub_357d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357d80ULL || rel >= 0x357e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357e00 size=160 callers=1 calls=0
*/
void sub_357e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357e00ULL || rel >= 0x357ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357ea0 size=128 callers=2 calls=0
*/
void sub_357ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357ea0ULL || rel >= 0x357f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00357f20 size=624 callers=0 calls=3
   calls: sub_3045e0, sub_3047c0, sub_3c23a0
*/
void sub_357f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x357f20ULL || rel >= 0x358190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358190 size=288 callers=3 calls=2
   calls: sub_3047c0, sub_3582b0
*/
void sub_358190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358190ULL || rel >= 0x3582b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003582b0 size=640 callers=1 calls=0
*/
void sub_3582b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3582b0ULL || rel >= 0x358530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358530 size=96 callers=1 calls=0
*/
void sub_358530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358530ULL || rel >= 0x358590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358590 size=688 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_358590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358590ULL || rel >= 0x358840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358840 size=576 callers=5 calls=3
   calls: sub_3046a0, sub_304740, sub_359ef0
*/
void sub_358840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358840ULL || rel >= 0x358a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358a80 size=128 callers=4 calls=1
   calls: sub_304740
*/
void sub_358a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358a80ULL || rel >= 0x358b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358b00 size=928 callers=3 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_358b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358b00ULL || rel >= 0x358ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00358ea0 size=688 callers=1 calls=0
*/
void sub_358ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x358ea0ULL || rel >= 0x359150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359150 size=336 callers=3 calls=2
   calls: sub_358b00, sub_3e7ef0
*/
void sub_359150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359150ULL || rel >= 0x3592a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003592a0 size=1504 callers=0 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3592a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3592a0ULL || rel >= 0x359880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359880 size=176 callers=2 calls=0
*/
void sub_359880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359880ULL || rel >= 0x359930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359930 size=848 callers=1 calls=2
   calls: sub_358b00, sub_3e7ef0
*/
void sub_359930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359930ULL || rel >= 0x359c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359c80 size=624 callers=2 calls=0
*/
void sub_359c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359c80ULL || rel >= 0x359ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00359ef0 size=368 callers=1 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_359ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x359ef0ULL || rel >= 0x35a060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a060 size=304 callers=2 calls=1
   calls: sub_304740
*/
void sub_35a060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a060ULL || rel >= 0x35a190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a190 size=352 callers=1 calls=4
   calls: sub_3045e0, sub_358840, sub_359150, sub_35a2f0
*/
void sub_35a190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a190ULL || rel >= 0x35a2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a2f0 size=1184 callers=9 calls=5
   calls: sub_3045e0, sub_3047c0, sub_35aef0, sub_35b0d0, sub_397bc0
*/
void sub_35a2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a2f0ULL || rel >= 0x35a790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a790 size=352 callers=1 calls=3
   calls: sub_3045e0, sub_358840, sub_35a2f0
*/
void sub_35a790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a790ULL || rel >= 0x35a8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a8f0 size=176 callers=1 calls=2
   calls: sub_359150, sub_35a2f0
*/
void sub_35a8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a8f0ULL || rel >= 0x35a9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035a9a0 size=352 callers=2 calls=4
   calls: sub_3045e0, sub_358840, sub_359150, sub_35a2f0
*/
void sub_35a9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35a9a0ULL || rel >= 0x35ab00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ab00 size=80 callers=2 calls=2
   calls: sub_359930, sub_35a2f0
*/
void sub_35ab00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ab00ULL || rel >= 0x35ab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ab50 size=512 callers=2 calls=5
   calls: sub_3045e0, sub_358840, sub_358b00, sub_35a2f0, sub_3e7ef0
*/
void sub_35ab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ab50ULL || rel >= 0x35ad50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ad50 size=368 callers=2 calls=4
   calls: sub_3045e0, sub_358840, sub_359c80, sub_35a2f0
*/
void sub_35ad50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ad50ULL || rel >= 0x35aec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035aec0 size=48 callers=1 calls=1
   calls: sub_35a2f0
*/
void sub_35aec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35aec0ULL || rel >= 0x35aef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035aef0 size=480 callers=4 calls=2
   calls: sub_3046a0, sub_304740
*/
void sub_35aef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35aef0ULL || rel >= 0x35b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b0d0 size=576 callers=12 calls=5
   calls: sub_3045e0, sub_3046a0, sub_304740, sub_3047c0, sub_32bc50
*/
void sub_35b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b0d0ULL || rel >= 0x35b310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b310 size=32 callers=3 calls=0
*/
void sub_35b310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b310ULL || rel >= 0x35b330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b330 size=112 callers=13 calls=0
*/
void sub_35b330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b330ULL || rel >= 0x35b3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b3a0 size=224 callers=1 calls=1
   calls: sub_3936b0
*/
void sub_35b3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b3a0ULL || rel >= 0x35b480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b480 size=256 callers=1 calls=2
   calls: sub_3047c0, sub_37a460
*/
void sub_35b480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b480ULL || rel >= 0x35b580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b580 size=64 callers=7 calls=1
   calls: sub_3045e0
*/
void sub_35b580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b580ULL || rel >= 0x35b5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b5c0 size=16 callers=12 calls=0
*/
void sub_35b5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b5c0ULL || rel >= 0x35b5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b5d0 size=80 callers=43 calls=1
   calls: sub_35b480
*/
void sub_35b5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b5d0ULL || rel >= 0x35b620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b620 size=32 callers=2 calls=0
*/
void sub_35b620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b620ULL || rel >= 0x35b640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b640 size=32 callers=6 calls=0
*/
void sub_35b640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b640ULL || rel >= 0x35b660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b660 size=160 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_35b660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b660ULL || rel >= 0x35b700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b700 size=368 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_35b700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b700ULL || rel >= 0x35b870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035b870 size=528 callers=1 calls=2
   calls: sub_3047c0, sub_35ba80
*/
void sub_35b870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35b870ULL || rel >= 0x35ba80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ba80 size=592 callers=3 calls=2
   calls: sub_35b700, sub_35ba80
*/
void sub_35ba80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ba80ULL || rel >= 0x35bcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bcd0 size=320 callers=2 calls=2
   calls: sub_35b870, sub_35be10
*/
void sub_35bcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bcd0ULL || rel >= 0x35be10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035be10 size=384 callers=3 calls=1
   calls: sub_35be10
*/
void sub_35be10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35be10ULL || rel >= 0x35bf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035bf90 size=544 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_35bf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35bf90ULL || rel >= 0x35c1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c1b0 size=96 callers=2 calls=0
*/
void sub_35c1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c1b0ULL || rel >= 0x35c210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c210 size=256 callers=1 calls=4
   calls: sub_3045e0, sub_335420, sub_35b620, sub_363510
*/
void sub_35c210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c210ULL || rel >= 0x35c310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c310 size=96 callers=0 calls=0
*/
void sub_35c310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c310ULL || rel >= 0x35c370ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c370 size=288 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_35c370(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c370ULL || rel >= 0x35c490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c490 size=304 callers=1 calls=2
   calls: sub_3045e0, sub_35b660
*/
void sub_35c490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c490ULL || rel >= 0x35c5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c5c0 size=112 callers=0 calls=2
   calls: sub_3047c0, sub_35b640
*/
void sub_35c5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c5c0ULL || rel >= 0x35c630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c630 size=128 callers=0 calls=3
   calls: sub_3047c0, sub_35b640, sub_363530
*/
void sub_35c630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c630ULL || rel >= 0x35c6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c6b0 size=64 callers=2 calls=1
   calls: sub_3be1a0
*/
void sub_35c6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c6b0ULL || rel >= 0x35c6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c6f0 size=32 callers=1 calls=0
*/
void sub_35c6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c6f0ULL || rel >= 0x35c710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c710 size=192 callers=0 calls=2
   calls: sub_352da0, sub_355640
*/
void sub_35c710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c710ULL || rel >= 0x35c7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c7d0 size=32 callers=1 calls=0
*/
void sub_35c7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c7d0ULL || rel >= 0x35c7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c7f0 size=512 callers=1 calls=2
   calls: sub_331150, sub_38ef70
*/
void sub_35c7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c7f0ULL || rel >= 0x35c9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035c9f0 size=240 callers=3 calls=4
   calls: sub_331150, sub_35c7f0, sub_35cae0, sub_38ef70
*/
void sub_35c9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35c9f0ULL || rel >= 0x35cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035cae0 size=864 callers=1 calls=9
   calls: sub_3047c0, sub_331150, sub_3351b0, sub_35b580, sub_35b5d0, sub_3790e0, sub_37f560, sub_380dd0, sub_38e5c0
*/
void sub_35cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35cae0ULL || rel >= 0x35ce40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ce40 size=48 callers=1 calls=1
   calls: sub_35ce70
*/
void sub_35ce40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ce40ULL || rel >= 0x35ce70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ce70 size=320 callers=1 calls=3
   calls: sub_3351b0, sub_3396f0, sub_382ac0
*/
void sub_35ce70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ce70ULL || rel >= 0x35cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035cfb0 size=160 callers=1 calls=2
   calls: sub_3351b0, sub_3396f0
*/
void sub_35cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35cfb0ULL || rel >= 0x35d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d050 size=256 callers=1 calls=3
   calls: sub_3351b0, sub_33a9e0, sub_382b10
*/
void sub_35d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d050ULL || rel >= 0x35d150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d150 size=320 callers=1 calls=4
   calls: sub_3351b0, sub_33bcc0, sub_35c9f0, sub_382b60
*/
void sub_35d150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d150ULL || rel >= 0x35d290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d290 size=48 callers=1 calls=0
*/
void sub_35d290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d290ULL || rel >= 0x35d2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d2c0 size=272 callers=1 calls=1
   calls: sub_35c9f0
*/
void sub_35d2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d2c0ULL || rel >= 0x35d3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d3d0 size=16 callers=0 calls=0
*/
void sub_35d3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d3d0ULL || rel >= 0x35d3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d3e0 size=16 callers=0 calls=0
*/
void sub_35d3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d3e0ULL || rel >= 0x35d3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d3f0 size=32 callers=0 calls=0
*/
void sub_35d3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d3f0ULL || rel >= 0x35d410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d410 size=16 callers=0 calls=0
*/
void sub_35d410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d410ULL || rel >= 0x35d420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d420 size=16 callers=0 calls=0
*/
void sub_35d420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d420ULL || rel >= 0x35d430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d430 size=336 callers=1 calls=2
   calls: sub_35b5c0, sub_38b060
*/
void sub_35d430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d430ULL || rel >= 0x35d580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d580 size=416 callers=0 calls=5
   calls: sub_38b400, sub_3bd790, sub_3be010, sub_3be190, sub_3be1a0
*/
void sub_35d580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d580ULL || rel >= 0x35d720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d720 size=16 callers=0 calls=0
*/
void sub_35d720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d720ULL || rel >= 0x35d730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d730 size=96 callers=0 calls=1
   calls: sub_35b5d0
*/
void sub_35d730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d730ULL || rel >= 0x35d790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d790 size=96 callers=0 calls=1
   calls: sub_35b5d0
*/
void sub_35d790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d790ULL || rel >= 0x35d7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d7f0 size=112 callers=0 calls=2
   calls: sub_35b5d0, sub_38b5d0
*/
void sub_35d7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d7f0ULL || rel >= 0x35d860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d860 size=112 callers=0 calls=2
   calls: sub_35b5d0, sub_38b5d0
*/
void sub_35d860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d860ULL || rel >= 0x35d8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035d8d0 size=1008 callers=0 calls=21
   calls: sub_3045e0, sub_3047c0, sub_331150, sub_3351b0, sub_3382d0, sub_33c510, sub_33c6d0, sub_33cb20, sub_33e830, sub_3414e0, sub_3419a0, sub_341a10
   ... +9 more
*/
void sub_35d8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35d8d0ULL || rel >= 0x35dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035dcc0 size=16 callers=0 calls=0
*/
void sub_35dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35dcc0ULL || rel >= 0x35dcd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035dcd0 size=224 callers=0 calls=1
   calls: sub_393270
*/
void sub_35dcd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35dcd0ULL || rel >= 0x35ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ddb0 size=224 callers=0 calls=1
   calls: sub_393270
*/
void sub_35ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ddb0ULL || rel >= 0x35de90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035de90 size=800 callers=0 calls=7
   calls: sub_35b330, sub_35b5c0, sub_35b5d0, sub_37a260, sub_392c80, sub_393270, sub_393280
*/
void sub_35de90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35de90ULL || rel >= 0x35e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e1b0 size=704 callers=0 calls=17
   calls: sub_3045e0, sub_3047c0, sub_331150, sub_3382d0, sub_33c6d0, sub_33cb20, sub_33e830, sub_3414e0, sub_341a10, sub_341a80, sub_341b30, sub_341b80
   ... +5 more
*/
void sub_35e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e1b0ULL || rel >= 0x35e470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e470 size=672 callers=0 calls=20
   calls: sub_3045e0, sub_3047c0, sub_331150, sub_3351b0, sub_3382d0, sub_33c6d0, sub_33e830, sub_3414e0, sub_3419a0, sub_341a10, sub_341a80, sub_341b30
   ... +8 more
*/
void sub_35e470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e470ULL || rel >= 0x35e710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e710 size=96 callers=0 calls=1
   calls: sub_35b5d0
*/
void sub_35e710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e710ULL || rel >= 0x35e770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e770 size=512 callers=0 calls=7
   calls: sub_3351b0, sub_35b330, sub_35b5c0, sub_35b5d0, sub_37a260, sub_380d60, sub_38c830
*/
void sub_35e770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e770ULL || rel >= 0x35e970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e970 size=32 callers=0 calls=0
*/
void sub_35e970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e970ULL || rel >= 0x35e990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035e990 size=320 callers=1 calls=4
   calls: sub_3045e0, sub_32ee10, sub_35ead0, sub_35ed20
*/
void sub_35e990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35e990ULL || rel >= 0x35ead0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ead0 size=592 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_35ead0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ead0ULL || rel >= 0x35ed20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ed20 size=576 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_35ed20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ed20ULL || rel >= 0x35ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ef60 size=160 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_35ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ef60ULL || rel >= 0x35f000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f000 size=224 callers=5 calls=0
*/
void sub_35f000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f000ULL || rel >= 0x35f0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f0e0 size=176 callers=2 calls=0
*/
void sub_35f0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f0e0ULL || rel >= 0x35f190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f190 size=128 callers=1 calls=0
*/
void sub_35f190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f190ULL || rel >= 0x35f210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f210 size=112 callers=4 calls=0
*/
void sub_35f210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f210ULL || rel >= 0x35f280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f280 size=64 callers=5 calls=0
*/
void sub_35f280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f280ULL || rel >= 0x35f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f2c0 size=16 callers=1 calls=0
*/
void sub_35f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f2c0ULL || rel >= 0x35f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f2d0 size=224 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_35f2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f2d0ULL || rel >= 0x35f3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f3b0 size=304 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_35f3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f3b0ULL || rel >= 0x35f4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f4e0 size=112 callers=0 calls=1
   calls: sub_3b6b20
*/
void sub_35f4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f4e0ULL || rel >= 0x35f550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f550 size=128 callers=0 calls=2
   calls: sub_363530, sub_3b6b20
*/
void sub_35f550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f550ULL || rel >= 0x35f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f5d0 size=192 callers=1 calls=1
   calls: sub_335420
*/
void sub_35f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f5d0ULL || rel >= 0x35f690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f690 size=96 callers=1 calls=2
   calls: sub_3045e0, sub_363510
*/
void sub_35f690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f690ULL || rel >= 0x35f6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f6f0 size=96 callers=0 calls=0
*/
void sub_35f6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f6f0ULL || rel >= 0x35f750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f750 size=288 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_35f750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f750ULL || rel >= 0x35f870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f870 size=304 callers=1 calls=0
*/
void sub_35f870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f870ULL || rel >= 0x35f9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035f9a0 size=192 callers=1 calls=1
   calls: sub_33e810
*/
void sub_35f9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35f9a0ULL || rel >= 0x35fa60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035fa60 size=1184 callers=8 calls=2
   calls: sub_3690b0, sub_3691b0
*/
void sub_35fa60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35fa60ULL || rel >= 0x35ff00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ff00 size=16 callers=0 calls=0
*/
void sub_35ff00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ff00ULL || rel >= 0x35ff10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ff10 size=16 callers=0 calls=0
*/
void sub_35ff10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ff10ULL || rel >= 0x35ff20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ff20 size=16 callers=0 calls=0
*/
void sub_35ff20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ff20ULL || rel >= 0x35ff30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0035ff30 size=1568 callers=3 calls=5
   calls: sub_3045e0, sub_3047c0, sub_35f0e0, sub_360640, sub_39f090
*/
void sub_35ff30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x35ff30ULL || rel >= 0x360550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360550 size=240 callers=1 calls=1
   calls: sub_35f0e0
*/
void sub_360550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360550ULL || rel >= 0x360640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360640 size=1376 callers=1 calls=4
   calls: sub_3045e0, sub_3047c0, sub_361fa0, sub_39b150
*/
void sub_360640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360640ULL || rel >= 0x360ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360ba0 size=128 callers=0 calls=1
   calls: sub_361fa0
*/
void sub_360ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360ba0ULL || rel >= 0x360c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360c20 size=288 callers=1 calls=4
   calls: sub_3045e0, sub_335420, sub_3629e0, sub_363510
*/
void sub_360c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360c20ULL || rel >= 0x360d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360d40 size=96 callers=0 calls=0
*/
void sub_360d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360d40ULL || rel >= 0x360da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360da0 size=288 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_360da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360da0ULL || rel >= 0x360ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360ec0 size=288 callers=1 calls=4
   calls: sub_3045e0, sub_335420, sub_3629e0, sub_363510
*/
void sub_360ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360ec0ULL || rel >= 0x360fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00360fe0 size=96 callers=0 calls=0
*/
void sub_360fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x360fe0ULL || rel >= 0x361040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361040 size=288 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_361040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361040ULL || rel >= 0x361160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361160 size=288 callers=2 calls=4
   calls: sub_3045e0, sub_335420, sub_3629e0, sub_363510
*/
void sub_361160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361160ULL || rel >= 0x361280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361280 size=96 callers=0 calls=0
*/
void sub_361280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361280ULL || rel >= 0x3612e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003612e0 size=288 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_3612e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3612e0ULL || rel >= 0x361400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361400 size=16 callers=3 calls=0
*/
void sub_361400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361400ULL || rel >= 0x361410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361410 size=832 callers=0 calls=5
   calls: sub_3045e0, sub_3047c0, sub_361770, sub_361900, sub_361a70
*/
void sub_361410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361410ULL || rel >= 0x361750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361750 size=32 callers=3 calls=0
*/
void sub_361750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361750ULL || rel >= 0x361770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361770 size=400 callers=1 calls=2
   calls: sub_377930, sub_39b150
*/
void sub_361770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361770ULL || rel >= 0x361900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361900 size=368 callers=2 calls=2
   calls: sub_377930, sub_39b150
*/
void sub_361900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361900ULL || rel >= 0x361a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361a70 size=528 callers=1 calls=1
   calls: sub_362160
*/
void sub_361a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361a70ULL || rel >= 0x361c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361c80 size=512 callers=1 calls=1
   calls: sub_361e80
*/
void sub_361c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361c80ULL || rel >= 0x361e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361e80 size=288 callers=5 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_361e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361e80ULL || rel >= 0x361fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00361fa0 size=448 callers=2 calls=3
   calls: sub_361e80, sub_362160, sub_39d140
*/
void sub_361fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x361fa0ULL || rel >= 0x362160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362160 size=480 callers=3 calls=2
   calls: sub_361e80, sub_3b33a0
*/
void sub_362160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362160ULL || rel >= 0x362340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362340 size=32 callers=0 calls=0
*/
void sub_362340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362340ULL || rel >= 0x362360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362360 size=320 callers=13 calls=2
   calls: sub_3047c0, sub_39b740
*/
void sub_362360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362360ULL || rel >= 0x3624a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003624a0 size=64 callers=9 calls=0
*/
void sub_3624a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3624a0ULL || rel >= 0x3624e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003624e0 size=144 callers=1 calls=0
*/
void sub_3624e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3624e0ULL || rel >= 0x362570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362570 size=32 callers=0 calls=0
*/
void sub_362570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362570ULL || rel >= 0x362590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362590 size=64 callers=0 calls=1
   calls: sub_362360
*/
void sub_362590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362590ULL || rel >= 0x3625d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003625d0 size=32 callers=0 calls=0
*/
void sub_3625d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3625d0ULL || rel >= 0x3625f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003625f0 size=32 callers=0 calls=0
*/
void sub_3625f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3625f0ULL || rel >= 0x362610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362610 size=112 callers=0 calls=1
   calls: sub_362360
*/
void sub_362610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362610ULL || rel >= 0x362680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362680 size=112 callers=0 calls=1
   calls: sub_362360
*/
void sub_362680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362680ULL || rel >= 0x3626f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003626f0 size=16 callers=0 calls=0
*/
void sub_3626f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3626f0ULL || rel >= 0x362700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362700 size=16 callers=0 calls=0
*/
void sub_362700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362700ULL || rel >= 0x362710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362710 size=32 callers=0 calls=0
*/
void sub_362710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362710ULL || rel >= 0x362730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362730 size=16 callers=0 calls=0
*/
void sub_362730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362730ULL || rel >= 0x362740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362740 size=48 callers=0 calls=1
   calls: sub_3627c0
*/
void sub_362740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362740ULL || rel >= 0x362770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362770 size=16 callers=0 calls=0
*/
void sub_362770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362770ULL || rel >= 0x362780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362780 size=16 callers=0 calls=0
*/
void sub_362780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362780ULL || rel >= 0x362790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362790 size=48 callers=0 calls=1
   calls: sub_3627c0
*/
void sub_362790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362790ULL || rel >= 0x3627c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003627c0 size=288 callers=6 calls=2
   calls: sub_3047c0, sub_362a20
*/
void sub_3627c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3627c0ULL || rel >= 0x3628e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003628e0 size=48 callers=0 calls=1
   calls: sub_3627c0
*/
void sub_3628e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3628e0ULL || rel >= 0x362910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362910 size=16 callers=0 calls=0
*/
void sub_362910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362910ULL || rel >= 0x362920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362920 size=16 callers=0 calls=0
*/
void sub_362920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362920ULL || rel >= 0x362930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362930 size=48 callers=0 calls=1
   calls: sub_3627c0
*/
void sub_362930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362930ULL || rel >= 0x362960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362960 size=48 callers=0 calls=1
   calls: sub_3627c0
*/
void sub_362960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362960ULL || rel >= 0x362990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362990 size=16 callers=0 calls=0
*/
void sub_362990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362990ULL || rel >= 0x3629a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003629a0 size=16 callers=0 calls=0
*/
void sub_3629a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3629a0ULL || rel >= 0x3629b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003629b0 size=48 callers=0 calls=1
   calls: sub_3627c0
*/
void sub_3629b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3629b0ULL || rel >= 0x3629e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003629e0 size=64 callers=3 calls=1
   calls: sub_3b1ca0
*/
void sub_3629e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3629e0ULL || rel >= 0x362a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362a20 size=160 callers=2 calls=3
   calls: sub_3047c0, sub_3b2860, sub_3b3970
*/
void sub_362a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362a20ULL || rel >= 0x362ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362ac0 size=48 callers=0 calls=1
   calls: sub_362a20
*/
void sub_362ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362ac0ULL || rel >= 0x362af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362af0 size=80 callers=0 calls=1
   calls: sub_3045e0
*/
void sub_362af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362af0ULL || rel >= 0x362b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362b40 size=176 callers=0 calls=1
   calls: sub_3b1ce0
*/
void sub_362b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362b40ULL || rel >= 0x362bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362bf0 size=112 callers=0 calls=1
   calls: sub_361c80
*/
void sub_362bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362bf0ULL || rel >= 0x362c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362c60 size=16 callers=0 calls=0
*/
void sub_362c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362c60ULL || rel >= 0x362c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362c70 size=16 callers=0 calls=0
*/
void sub_362c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362c70ULL || rel >= 0x362c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362c80 size=16 callers=0 calls=0
*/
void sub_362c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362c80ULL || rel >= 0x362c90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362c90 size=16 callers=0 calls=0
*/
void sub_362c90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362c90ULL || rel >= 0x362ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362ca0 size=16 callers=0 calls=0
*/
void sub_362ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362ca0ULL || rel >= 0x362cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362cb0 size=16 callers=0 calls=0
*/
void sub_362cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362cb0ULL || rel >= 0x362cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362cc0 size=96 callers=4 calls=1
   calls: sub_3047c0
*/
void sub_362cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362cc0ULL || rel >= 0x362d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362d20 size=256 callers=2 calls=4
   calls: sub_304740, sub_3047c0, sub_3a5700, sub_3a5710
*/
void sub_362d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362d20ULL || rel >= 0x362e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362e20 size=48 callers=0 calls=1
   calls: sub_362d20
*/
void sub_362e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362e20ULL || rel >= 0x362e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362e50 size=80 callers=2 calls=0
*/
void sub_362e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362e50ULL || rel >= 0x362ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362ea0 size=48 callers=0 calls=0
*/
void sub_362ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362ea0ULL || rel >= 0x362ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362ed0 size=80 callers=0 calls=0
*/
void sub_362ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362ed0ULL || rel >= 0x362f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362f20 size=96 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_362f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362f20ULL || rel >= 0x362f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362f80 size=80 callers=0 calls=0
*/
void sub_362f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362f80ULL || rel >= 0x362fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00362fd0 size=48 callers=1 calls=0
*/
void sub_362fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x362fd0ULL || rel >= 0x363000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363000 size=480 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_363000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363000ULL || rel >= 0x3631e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003631e0 size=336 callers=1 calls=0
*/
void sub_3631e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3631e0ULL || rel >= 0x363330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363330 size=176 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_363330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363330ULL || rel >= 0x3633e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003633e0 size=128 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_3633e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3633e0ULL || rel >= 0x363460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363460 size=176 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_363460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363460ULL || rel >= 0x363510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363510 size=32 callers=13 calls=0
*/
void sub_363510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363510ULL || rel >= 0x363530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363530 size=32 callers=5 calls=0
*/
void sub_363530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363530ULL || rel >= 0x363550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363550 size=16 callers=0 calls=0
*/
void sub_363550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363550ULL || rel >= 0x363560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363560 size=16 callers=0 calls=0
*/
void sub_363560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363560ULL || rel >= 0x363570ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363570 size=176 callers=0 calls=3
   calls: sub_3047c0, sub_367630, sub_379fa0
*/
void sub_363570(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363570ULL || rel >= 0x363620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363620 size=176 callers=0 calls=3
   calls: sub_3047c0, sub_367630, sub_379fa0
*/
void sub_363620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363620ULL || rel >= 0x3636d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003636d0 size=192 callers=0 calls=4
   calls: sub_3047c0, sub_367630, sub_379eb0, sub_379fa0
*/
void sub_3636d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3636d0ULL || rel >= 0x363790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363790 size=16 callers=0 calls=0
*/
void sub_363790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363790ULL || rel >= 0x3637a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003637a0 size=48 callers=0 calls=1
   calls: sub_3637d0
*/
void sub_3637a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3637a0ULL || rel >= 0x3637d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003637d0 size=432 callers=1 calls=5
   calls: sub_3047c0, sub_331150, sub_379b60, sub_379be0, sub_38fcb0
*/
void sub_3637d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3637d0ULL || rel >= 0x363980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363980 size=816 callers=1 calls=7
   calls: sub_3045e0, sub_3047c0, sub_349be0, sub_366280, sub_366d90, sub_367630, sub_385430
*/
void sub_363980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363980ULL || rel >= 0x363cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363cb0 size=192 callers=0 calls=2
   calls: sub_3351b0, sub_367750
*/
void sub_363cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363cb0ULL || rel >= 0x363d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363d70 size=384 callers=0 calls=1
   calls: sub_367500
*/
void sub_363d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363d70ULL || rel >= 0x363ef0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363ef0 size=160 callers=1 calls=3
   calls: sub_3045e0, sub_379e60, sub_379f40
*/
void sub_363ef0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363ef0ULL || rel >= 0x363f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363f90 size=16 callers=0 calls=0
*/
void sub_363f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363f90ULL || rel >= 0x363fa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00363fa0 size=528 callers=0 calls=1
   calls: sub_3641b0
*/
void sub_363fa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x363fa0ULL || rel >= 0x3641b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003641b0 size=576 callers=2 calls=5
   calls: sub_3047c0, sub_331150, sub_379b60, sub_379be0, sub_38fcb0
*/
void sub_3641b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3641b0ULL || rel >= 0x3643f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003643f0 size=400 callers=0 calls=1
   calls: sub_3641b0
*/
void sub_3643f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3643f0ULL || rel >= 0x364580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00364580 size=2864 callers=0 calls=24
   calls: sub_3045e0, sub_3047c0, sub_331150, sub_35b580, sub_35b5d0, sub_3650b0, sub_365390, sub_3657c0, sub_377930, sub_379b50, sub_379d20, sub_379db0
   ... +12 more
*/
void sub_364580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x364580ULL || rel >= 0x3650b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003650b0 size=736 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_3650b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3650b0ULL || rel >= 0x365390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365390 size=1072 callers=3 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_365390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365390ULL || rel >= 0x3657c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003657c0 size=352 callers=8 calls=1
   calls: sub_365920
*/
void sub_3657c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3657c0ULL || rel >= 0x365920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365920 size=336 callers=1 calls=1
   calls: sub_365a70
*/
void sub_365920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365920ULL || rel >= 0x365a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365a70 size=320 callers=1 calls=1
   calls: sub_365bb0
*/
void sub_365a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365a70ULL || rel >= 0x365bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365bb0 size=336 callers=1 calls=1
   calls: sub_365d00
*/
void sub_365bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365bb0ULL || rel >= 0x365d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365d00 size=400 callers=1 calls=0
*/
void sub_365d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365d00ULL || rel >= 0x365e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365e90 size=80 callers=2 calls=1
   calls: sub_37e080
*/
void sub_365e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365e90ULL || rel >= 0x365ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365ee0 size=112 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_365ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365ee0ULL || rel >= 0x365f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365f50 size=112 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_365f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365f50ULL || rel >= 0x365fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365fc0 size=16 callers=0 calls=0
*/
void sub_365fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365fc0ULL || rel >= 0x365fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365fd0 size=16 callers=0 calls=0
*/
void sub_365fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365fd0ULL || rel >= 0x365fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00365fe0 size=304 callers=0 calls=0
*/
void sub_365fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x365fe0ULL || rel >= 0x366110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366110 size=320 callers=1 calls=4
   calls: sub_3047c0, sub_380980, sub_39b730, sub_39b740
*/
void sub_366110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366110ULL || rel >= 0x366250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366250 size=48 callers=0 calls=1
   calls: sub_366110
*/
void sub_366250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366250ULL || rel >= 0x366280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366280 size=256 callers=2 calls=3
   calls: sub_3045e0, sub_335420, sub_363510
*/
void sub_366280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366280ULL || rel >= 0x366380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366380 size=128 callers=0 calls=0
*/
void sub_366380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366380ULL || rel >= 0x366400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366400 size=96 callers=1 calls=1
   calls: sub_377930
*/
void sub_366400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366400ULL || rel >= 0x366460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366460 size=224 callers=1 calls=2
   calls: sub_366540, sub_3784f0
*/
void sub_366460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366460ULL || rel >= 0x366540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366540 size=304 callers=2 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_366540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366540ULL || rel >= 0x366670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366670 size=1168 callers=1 calls=8
   calls: sub_3045e0, sub_3047c0, sub_32e6c0, sub_3657c0, sub_3776c0, sub_399c50, sub_39d140, sub_39d710
*/
void sub_366670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366670ULL || rel >= 0x366b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366b00 size=192 callers=1 calls=0
*/
void sub_366b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366b00ULL || rel >= 0x366bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366bc0 size=96 callers=0 calls=0
*/
void sub_366bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366bc0ULL || rel >= 0x366c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366c20 size=288 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_366c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366c20ULL || rel >= 0x366d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366d40 size=80 callers=1 calls=0
*/
void sub_366d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366d40ULL || rel >= 0x366d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366d90 size=512 callers=1 calls=5
   calls: sub_3045e0, sub_366f90, sub_367120, sub_39b0e0, sub_39b730
*/
void sub_366d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366d90ULL || rel >= 0x366f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00366f90 size=400 callers=1 calls=1
   calls: sub_39b150
*/
void sub_366f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x366f90ULL || rel >= 0x367120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367120 size=992 callers=1 calls=4
   calls: sub_3045e0, sub_3047c0, sub_3351b0, sub_3807d0
*/
void sub_367120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367120ULL || rel >= 0x367500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367500 size=304 callers=1 calls=2
   calls: sub_3047c0, sub_380980
*/
void sub_367500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367500ULL || rel >= 0x367630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367630 size=288 callers=4 calls=3
   calls: sub_3351b0, sub_3807d0, sub_380980
*/
void sub_367630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367630ULL || rel >= 0x367750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367750 size=240 callers=1 calls=2
   calls: sub_3351b0, sub_3807d0
*/
void sub_367750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367750ULL || rel >= 0x367840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367840 size=1408 callers=0 calls=6
   calls: sub_3047c0, sub_331150, sub_339930, sub_37f560, sub_380dd0, sub_38e5c0
*/
void sub_367840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367840ULL || rel >= 0x367dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367dc0 size=112 callers=0 calls=2
   calls: sub_32e6c0, sub_38ca70
*/
void sub_367dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367dc0ULL || rel >= 0x367e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367e30 size=128 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_367e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367e30ULL || rel >= 0x367eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367eb0 size=32 callers=1 calls=0
*/
void sub_367eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367eb0ULL || rel >= 0x367ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367ed0 size=272 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_367ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367ed0ULL || rel >= 0x367fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00367fe0 size=224 callers=2 calls=1
   calls: sub_3047c0
*/
void sub_367fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x367fe0ULL || rel >= 0x3680c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003680c0 size=240 callers=4 calls=1
   calls: sub_3045e0
*/
void sub_3680c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3680c0ULL || rel >= 0x3681b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003681b0 size=48 callers=1 calls=1
   calls: sub_3681e0
*/
void sub_3681b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3681b0ULL || rel >= 0x3681e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003681e0 size=448 callers=2 calls=3
   calls: sub_3047c0, sub_38d280, sub_3c6710
*/
void sub_3681e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3681e0ULL || rel >= 0x3683a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003683a0 size=768 callers=0 calls=4
   calls: sub_3047c0, sub_3c5e50, sub_3c6870, sub_3da630
*/
void sub_3683a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3683a0ULL || rel >= 0x3686a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003686a0 size=464 callers=1 calls=2
   calls: sub_3047c0, sub_368a60
*/
void sub_3686a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3686a0ULL || rel >= 0x368870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368870 size=144 callers=0 calls=1
   calls: sub_368a60
*/
void sub_368870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368870ULL || rel >= 0x368900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368900 size=144 callers=1 calls=1
   calls: sub_305450
*/
void sub_368900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368900ULL || rel >= 0x368990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368990 size=64 callers=0 calls=2
   calls: sub_3044e0, sub_305660
*/
void sub_368990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368990ULL || rel >= 0x3689d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003689d0 size=16 callers=2 calls=0
*/
void sub_3689d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3689d0ULL || rel >= 0x3689e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003689e0 size=16 callers=0 calls=0
*/
void sub_3689e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3689e0ULL || rel >= 0x3689f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003689f0 size=112 callers=1 calls=0
*/
void sub_3689f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3689f0ULL || rel >= 0x368a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368a60 size=96 callers=9 calls=0
*/
void sub_368a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368a60ULL || rel >= 0x368ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368ac0 size=64 callers=1 calls=1
   calls: sub_37d640
*/
void sub_368ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368ac0ULL || rel >= 0x368b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368b00 size=16 callers=0 calls=0
*/
void sub_368b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368b00ULL || rel >= 0x368b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368b10 size=16 callers=2 calls=0
*/
void sub_368b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368b10ULL || rel >= 0x368b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368b20 size=528 callers=5 calls=2
   calls: sub_3047c0, sub_368d30
*/
void sub_368b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368b20ULL || rel >= 0x368d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368d30 size=432 callers=1 calls=2
   calls: sub_3045e0, sub_3047c0
*/
void sub_368d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368d30ULL || rel >= 0x368ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368ee0 size=272 callers=0 calls=0
*/
void sub_368ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368ee0ULL || rel >= 0x368ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00368ff0 size=160 callers=1 calls=1
   calls: sub_3047c0
*/
void sub_368ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x368ff0ULL || rel >= 0x369090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369090 size=16 callers=1 calls=0
*/
void sub_369090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369090ULL || rel >= 0x3690a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003690a0 size=16 callers=0 calls=0
*/
void sub_3690a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3690a0ULL || rel >= 0x3690b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003690b0 size=96 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3690b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3690b0ULL || rel >= 0x369110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369110 size=160 callers=0 calls=1
   calls: sub_3047c0
*/
void sub_369110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369110ULL || rel >= 0x3691b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003691b0 size=144 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_3691b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3691b0ULL || rel >= 0x369240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369240 size=320 callers=1 calls=1
   calls: sub_3045e0
*/
void sub_369240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369240ULL || rel >= 0x369380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369380 size=176 callers=1 calls=1
   calls: sub_38f380
*/
void sub_369380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369380ULL || rel >= 0x369430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 00369430 size=112 callers=1 calls=0
*/
void sub_369430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x369430ULL || rel >= 0x3694a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 003694a0 size=48 callers=2 calls=0
*/
void sub_3694a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x3694a0ULL || rel >= 0x3694d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

