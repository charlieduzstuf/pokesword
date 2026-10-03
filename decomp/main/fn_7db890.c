/* main functions 007db890..007efe10 (55 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 007db890 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_8169a0
*/
void sub_7db890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db890ULL || rel >= 0x7db8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db8d0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_816a60
*/
void sub_7db8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db8d0ULL || rel >= 0x7db910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db910 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817c80
*/
void sub_7db910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db910ULL || rel >= 0x7db940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db940 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817cb0
*/
void sub_7db940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db940ULL || rel >= 0x7db970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db970 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817ce0
*/
void sub_7db970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db970ULL || rel >= 0x7db9a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db9a0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817d10
*/
void sub_7db9a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db9a0ULL || rel >= 0x7db9e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007db9e0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817d40
*/
void sub_7db9e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7db9e0ULL || rel >= 0x7dba20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dba20 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_816b90
*/
void sub_7dba20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dba20ULL || rel >= 0x7dba50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dba50 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_8174b0
*/
void sub_7dba50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dba50ULL || rel >= 0x7dba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dba90 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_816e00
*/
void sub_7dba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dba90ULL || rel >= 0x7dbad0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbad0 size=96 callers=0 calls=2
   calls: sub_7e88f0, sub_817710
*/
void sub_7dbad0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbad0ULL || rel >= 0x7dbb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbb30 size=160 callers=0 calls=8
   calls: sub_7cb490, sub_7cd0c0, sub_7e88f0, sub_7ecc90, sub_7ee6b0, sub_7fe1d0, sub_817770, sub_8ac140
*/
void sub_7dbb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbb30ULL || rel >= 0x7dbbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbbd0 size=160 callers=0 calls=8
   calls: sub_7cb490, sub_7cd0c0, sub_7e88f0, sub_7ecc90, sub_7ee6b0, sub_7fe1d0, sub_8177b0, sub_8ac140
*/
void sub_7dbbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbbd0ULL || rel >= 0x7dbc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbc70 size=80 callers=0 calls=3
   calls: sub_7e88f0, sub_7f8bc0, sub_817100
*/
void sub_7dbc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbc70ULL || rel >= 0x7dbcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbcc0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817190
*/
void sub_7dbcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbcc0ULL || rel >= 0x7dbd00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbd00 size=80 callers=0 calls=3
   calls: sub_7e88f0, sub_7f8bc0, sub_8170d0
*/
void sub_7dbd00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbd00ULL || rel >= 0x7dbd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbd50 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_8171c0
*/
void sub_7dbd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbd50ULL || rel >= 0x7dbd90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbd90 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817130
*/
void sub_7dbd90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbd90ULL || rel >= 0x7dbdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbdc0 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_816aa0
*/
void sub_7dbdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbdc0ULL || rel >= 0x7dbe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbe10 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_816af0
*/
void sub_7dbe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbe10ULL || rel >= 0x7dbe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbe60 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_816b40
*/
void sub_7dbe60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbe60ULL || rel >= 0x7dbeb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbeb0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_816bc0
*/
void sub_7dbeb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbeb0ULL || rel >= 0x7dbee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbee0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_8173b0
*/
void sub_7dbee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbee0ULL || rel >= 0x7dbf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbf20 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_8177f0
*/
void sub_7dbf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbf20ULL || rel >= 0x7dbf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbf60 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817830
*/
void sub_7dbf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbf60ULL || rel >= 0x7dbf90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbf90 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817d70
*/
void sub_7dbf90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbf90ULL || rel >= 0x7dbfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbfc0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817db0
*/
void sub_7dbfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbfc0ULL || rel >= 0x7dbff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dbff0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_816e80
*/
void sub_7dbff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dbff0ULL || rel >= 0x7dc020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc020 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_816f20
*/
void sub_7dc020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc020ULL || rel >= 0x7dc060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc060 size=112 callers=0 calls=2
   calls: sub_7e88f0, sub_816f90
*/
void sub_7dc060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc060ULL || rel >= 0x7dc0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc0d0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_8178c0
*/
void sub_7dc0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc0d0ULL || rel >= 0x7dc100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc100 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817160
*/
void sub_7dc100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc100ULL || rel >= 0x7dc130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc130 size=112 callers=0 calls=2
   calls: sub_7e88f0, sub_8172b0
*/
void sub_7dc130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc130ULL || rel >= 0x7dc1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc1a0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817370
*/
void sub_7dc1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc1a0ULL || rel >= 0x7dc1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc1e0 size=64 callers=0 calls=2
   calls: sub_7fe230, sub_801780
*/
void sub_7dc1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc1e0ULL || rel >= 0x7dc220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc220 size=48 callers=0 calls=2
   calls: sub_7fe230, sub_8017d0
*/
void sub_7dc220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc220ULL || rel >= 0x7dc250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc250 size=64 callers=0 calls=2
   calls: sub_7fe230, sub_8017c0
*/
void sub_7dc250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc250ULL || rel >= 0x7dc290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc290 size=160 callers=0 calls=3
   calls: sub_7cd240, sub_7ecc90, sub_7fe1d0
*/
void sub_7dc290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc290ULL || rel >= 0x7dc330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc330 size=80 callers=0 calls=3
   calls: sub_7f8bc0, sub_7fe210, sub_8023b0
*/
void sub_7dc330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc330ULL || rel >= 0x7dc380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc380 size=48 callers=0 calls=2
   calls: sub_7fe210, sub_802430
*/
void sub_7dc380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc380ULL || rel >= 0x7dc3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc3b0 size=48 callers=0 calls=2
   calls: sub_7fe210, sub_802500
*/
void sub_7dc3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc3b0ULL || rel >= 0x7dc3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc3e0 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_8171f0
*/
void sub_7dc3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc3e0ULL || rel >= 0x7dc430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc430 size=112 callers=0 calls=3
   calls: sub_7cb490, sub_7cd0c0, sub_8ac060
*/
void sub_7dc430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc430ULL || rel >= 0x7dc4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc4a0 size=128 callers=0 calls=3
   calls: sub_7cb490, sub_7cd0c0, sub_8ac0d0
*/
void sub_7dc4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc4a0ULL || rel >= 0x7dc520ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc520 size=32 callers=0 calls=2
   calls: sub_7e88f0, sub_817c60
*/
void sub_7dc520(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc520ULL || rel >= 0x7dc540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc540 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817bb0
*/
void sub_7dc540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc540ULL || rel >= 0x7dc580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc580 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_816f60
*/
void sub_7dc580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc580ULL || rel >= 0x7dc5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc5c0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818310
*/
void sub_7dc5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc5c0ULL || rel >= 0x7dc5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc5f0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817fa0
*/
void sub_7dc5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc5f0ULL || rel >= 0x7dc620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc620 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_818000
*/
void sub_7dc620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc620ULL || rel >= 0x7dc660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc660 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_818040
*/
void sub_7dc660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc660ULL || rel >= 0x7dc6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc6a0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818080
*/
void sub_7dc6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc6a0ULL || rel >= 0x7dc6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc6d0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_8180c0
*/
void sub_7dc6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc6d0ULL || rel >= 0x7dc700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc700 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818100
*/
void sub_7dc700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc700ULL || rel >= 0x7dc730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc730 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818140
*/
void sub_7dc730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc730ULL || rel >= 0x7dc760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc760 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818170
*/
void sub_7dc760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc760ULL || rel >= 0x7dc790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc790 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_8181a0
*/
void sub_7dc790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc790ULL || rel >= 0x7dc7c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc7c0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_8181d0
*/
void sub_7dc7c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc7c0ULL || rel >= 0x7dc7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc7f0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_8181f0
*/
void sub_7dc7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc7f0ULL || rel >= 0x7dc820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc820 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817e60
*/
void sub_7dc820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc820ULL || rel >= 0x7dc850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc850 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817e90
*/
void sub_7dc850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc850ULL || rel >= 0x7dc890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc890 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817ed0
*/
void sub_7dc890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc890ULL || rel >= 0x7dc8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc8c0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817f00
*/
void sub_7dc8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc8c0ULL || rel >= 0x7dc8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc8f0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817f30
*/
void sub_7dc8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc8f0ULL || rel >= 0x7dc920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc920 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817f60
*/
void sub_7dc920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc920ULL || rel >= 0x7dc960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc960 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818210
*/
void sub_7dc960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc960ULL || rel >= 0x7dc990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc990 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818240
*/
void sub_7dc990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc990ULL || rel >= 0x7dc9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc9c0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818270
*/
void sub_7dc9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc9c0ULL || rel >= 0x7dc9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dc9f0 size=32 callers=0 calls=2
   calls: sub_7e88f0, sub_817de0
*/
void sub_7dc9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dc9f0ULL || rel >= 0x7dca10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dca10 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817e00
*/
void sub_7dca10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dca10ULL || rel >= 0x7dca40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dca40 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_817e30
*/
void sub_7dca40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dca40ULL || rel >= 0x7dca70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dca70 size=176 callers=0 calls=2
   calls: sub_7cb420, sub_7fe1d0
*/
void sub_7dca70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dca70ULL || rel >= 0x7dcb20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dcb20 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_817630
*/
void sub_7dcb20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dcb20ULL || rel >= 0x7dcb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dcb70 size=224 callers=0 calls=2
   calls: sub_7cb540, sub_7cb690
*/
void sub_7dcb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dcb70ULL || rel >= 0x7dcc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dcc50 size=224 callers=0 calls=3
   calls: sub_7ef330, sub_7fc2e0, sub_7fc450
*/
void sub_7dcc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dcc50ULL || rel >= 0x7dcd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dcd30 size=176 callers=0 calls=1
   calls: sub_7fc4e0
*/
void sub_7dcd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dcd30ULL || rel >= 0x7dcde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dcde0 size=192 callers=0 calls=1
   calls: sub_7dfb80
*/
void sub_7dcde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dcde0ULL || rel >= 0x7dcea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dcea0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817270
*/
void sub_7dcea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dcea0ULL || rel >= 0x7dcee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dcee0 size=288 callers=0 calls=4
   calls: sub_7cb540, sub_7cc390, sub_7ed5e0, sub_7fe1d0
*/
void sub_7dcee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dcee0ULL || rel >= 0x7dd000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dd000 size=112 callers=0 calls=0
*/
void sub_7dd000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dd000ULL || rel >= 0x7dd070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dd070 size=368 callers=0 calls=6
   calls: sub_7cb540, sub_7ed5e0, sub_7ee6b0, sub_7fe1d0, sub_8aabb0, sub_8aabe0
*/
void sub_7dd070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dd070ULL || rel >= 0x7dd1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dd1e0 size=368 callers=0 calls=5
   calls: sub_7cb420, sub_7ecc90, sub_7f2370, sub_7fe1d0, sub_8a8260
*/
void sub_7dd1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dd1e0ULL || rel >= 0x7dd350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dd350 size=816 callers=0 calls=6
   calls: sub_7cb420, sub_7cbf80, sub_7ecc90, sub_7f2370, sub_7fe1d0, sub_8a8260
*/
void sub_7dd350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dd350ULL || rel >= 0x7dd680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dd680 size=240 callers=0 calls=2
   calls: sub_7cb420, sub_7fe1d0
*/
void sub_7dd680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dd680ULL || rel >= 0x7dd770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dd770 size=176 callers=0 calls=0
*/
void sub_7dd770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dd770ULL || rel >= 0x7dd820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dd820 size=272 callers=0 calls=3
   calls: sub_7ca9e0, sub_7cb540, sub_7eb5f0
*/
void sub_7dd820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dd820ULL || rel >= 0x7dd930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dd930 size=272 callers=0 calls=3
   calls: sub_7ca9e0, sub_7cb540, sub_7eb5f0
*/
void sub_7dd930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dd930ULL || rel >= 0x7dda40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dda40 size=288 callers=0 calls=3
   calls: sub_7ca9e0, sub_7cb540, sub_7eb5f0
*/
void sub_7dda40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dda40ULL || rel >= 0x7ddb60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ddb60 size=272 callers=0 calls=4
   calls: sub_7ca9e0, sub_7cb540, sub_7cbb30, sub_7eb5f0
*/
void sub_7ddb60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ddb60ULL || rel >= 0x7ddc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ddc70 size=112 callers=0 calls=0
*/
void sub_7ddc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ddc70ULL || rel >= 0x7ddce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ddce0 size=288 callers=0 calls=8
   calls: sub_7cb420, sub_7cb490, sub_7cb540, sub_7cd0c0, sub_7ecc90, sub_7ee6b0, sub_7fe1d0, sub_8ac140
*/
void sub_7ddce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ddce0ULL || rel >= 0x7dde00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dde00 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_8174f0
*/
void sub_7dde00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dde00ULL || rel >= 0x7dde50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dde50 size=144 callers=0 calls=1
   calls: sub_7cb540
*/
void sub_7dde50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dde50ULL || rel >= 0x7ddee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ddee0 size=128 callers=0 calls=1
   calls: sub_7cb540
*/
void sub_7ddee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ddee0ULL || rel >= 0x7ddf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ddf60 size=208 callers=0 calls=2
   calls: sub_7cb4b0, sub_7fe1d0
*/
void sub_7ddf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ddf60ULL || rel >= 0x7de030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007de030 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_817540
*/
void sub_7de030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7de030ULL || rel >= 0x7de070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007de070 size=256 callers=0 calls=3
   calls: sub_7cb420, sub_7f7fe0, sub_7fe1d0
*/
void sub_7de070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7de070ULL || rel >= 0x7de170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007de170 size=48 callers=0 calls=0
*/
void sub_7de170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7de170ULL || rel >= 0x7de1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007de1a0 size=128 callers=0 calls=0
*/
void sub_7de1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7de1a0ULL || rel >= 0x7de220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007de220 size=384 callers=1 calls=7
   calls: sub_7cb420, sub_7cb540, sub_7ed5e0, sub_7ef2b0, sub_7ef4c0, sub_7ef5d0, sub_7fe1d0
*/
void sub_7de220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7de220ULL || rel >= 0x7de3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007de3a0 size=416 callers=0 calls=1
   calls: sub_7de220
*/
void sub_7de3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7de3a0ULL || rel >= 0x7de540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007de540 size=128 callers=0 calls=0
*/
void sub_7de540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7de540ULL || rel >= 0x7de5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007de5c0 size=176 callers=0 calls=2
   calls: sub_7cb420, sub_7fe1d0
*/
void sub_7de5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7de5c0ULL || rel >= 0x7de670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007de670 size=176 callers=0 calls=2
   calls: sub_7cb420, sub_7fe1d0
*/
void sub_7de670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7de670ULL || rel >= 0x7de720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007de720 size=336 callers=0 calls=2
   calls: sub_8aabb0, sub_8aabe0
*/
void sub_7de720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7de720ULL || rel >= 0x7de870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007de870 size=528 callers=0 calls=2
   calls: sub_7e88f0, sub_8182e0
*/
void sub_7de870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7de870ULL || rel >= 0x7dea80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dea80 size=640 callers=0 calls=2
   calls: sub_7c56e0, sub_7dfae0
*/
void sub_7dea80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dea80ULL || rel >= 0x7ded00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ded00 size=192 callers=0 calls=0
*/
void sub_7ded00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ded00ULL || rel >= 0x7dedc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dedc0 size=80 callers=0 calls=0
*/
void sub_7dedc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dedc0ULL || rel >= 0x7dee10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dee10 size=96 callers=0 calls=1
   calls: sub_813b40
*/
void sub_7dee10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dee10ULL || rel >= 0x7dee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dee70 size=80 callers=0 calls=2
   calls: sub_7e88f0, sub_818340
*/
void sub_7dee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dee70ULL || rel >= 0x7deec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007deec0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_818390
*/
void sub_7deec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7deec0ULL || rel >= 0x7def00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007def00 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_8183e0
*/
void sub_7def00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7def00ULL || rel >= 0x7def40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007def40 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818430
*/
void sub_7def40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7def40ULL || rel >= 0x7def70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007def70 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818470
*/
void sub_7def70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7def70ULL || rel >= 0x7defa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007defa0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_8184b0
*/
void sub_7defa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7defa0ULL || rel >= 0x7defd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007defd0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_8184f0
*/
void sub_7defd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7defd0ULL || rel >= 0x7df010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df010 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818550
*/
void sub_7df010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df010ULL || rel >= 0x7df040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df040 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818590
*/
void sub_7df040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df040ULL || rel >= 0x7df070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df070 size=128 callers=0 calls=2
   calls: sub_7e88f0, sub_8185d0
*/
void sub_7df070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df070ULL || rel >= 0x7df0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df0f0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_8185e0
*/
void sub_7df0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df0f0ULL || rel >= 0x7df130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df130 size=80 callers=0 calls=3
   calls: sub_7e88f0, sub_7f8bc0, sub_8185f0
*/
void sub_7df130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df130ULL || rel >= 0x7df180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df180 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_818600
*/
void sub_7df180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df180ULL || rel >= 0x7df1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df1c0 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_818610
*/
void sub_7df1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df1c0ULL || rel >= 0x7df200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df200 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_818620
*/
void sub_7df200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df200ULL || rel >= 0x7df240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df240 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_818630
*/
void sub_7df240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df240ULL || rel >= 0x7df280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df280 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818640
*/
void sub_7df280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df280ULL || rel >= 0x7df2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df2b0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818650
*/
void sub_7df2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df2b0ULL || rel >= 0x7df2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df2e0 size=48 callers=0 calls=2
   calls: sub_7e88f0, sub_818690
*/
void sub_7df2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df2e0ULL || rel >= 0x7df310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df310 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_8186d0
*/
void sub_7df310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df310ULL || rel >= 0x7df350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df350 size=64 callers=0 calls=2
   calls: sub_7e88f0, sub_818720
*/
void sub_7df350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df350ULL || rel >= 0x7df390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df390 size=928 callers=2 calls=4
   calls: sub_813b20, sub_813b30, sub_813b40, sub_8167c0
*/
void sub_7df390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df390ULL || rel >= 0x7df730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df730 size=304 callers=1 calls=7
   calls: sub_7c4c70, sub_7ca170, sub_7ca1c0, sub_7cc1b0, sub_7d3c30, sub_7ecc90, sub_7fe1d0
*/
void sub_7df730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df730ULL || rel >= 0x7df860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df860 size=256 callers=1 calls=7
   calls: sub_7ca1c0, sub_7cad10, sub_7cc1b0, sub_7ed1c0, sub_7ef2b0, sub_7f0bb0, sub_7fe1d0
*/
void sub_7df860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df860ULL || rel >= 0x7df960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007df960 size=384 callers=1 calls=12
   calls: sub_780c60, sub_7ca9e0, sub_7cb320, sub_7cb3f0, sub_7cd220, sub_7cd2b0, sub_7ed5e0, sub_7ee6b0, sub_7f8070, sub_7fe1d0, sub_7fe250, sub_803560
*/
void sub_7df960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7df960ULL || rel >= 0x7dfae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dfae0 size=160 callers=1 calls=6
   calls: sub_7cd1f0, sub_7cd430, sub_7ed5e0, sub_7ee810, sub_7f3710, sub_7fe1d0
*/
void sub_7dfae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dfae0ULL || rel >= 0x7dfb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dfb80 size=272 callers=1 calls=11
   calls: sub_7cbad0, sub_7cbed0, sub_7cc260, sub_7dfc90, sub_7ed1a0, sub_7ee6b0, sub_7ef320, sub_7f2960, sub_7fc2e0, sub_7fc430, sub_7fe1d0
*/
void sub_7dfb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dfb80ULL || rel >= 0x7dfc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dfc90 size=272 callers=1 calls=2
   calls: sub_765dd0, sub_7664a0
*/
void sub_7dfc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dfc90ULL || rel >= 0x7dfda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dfda0 size=16 callers=1 calls=0
*/
void sub_7dfda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dfda0ULL || rel >= 0x7dfdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dfdb0 size=16 callers=2 calls=0
*/
void sub_7dfdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dfdb0ULL || rel >= 0x7dfdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dfdc0 size=16 callers=1 calls=0
*/
void sub_7dfdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dfdc0ULL || rel >= 0x7dfdd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dfdd0 size=16 callers=3 calls=0
*/
void sub_7dfdd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dfdd0ULL || rel >= 0x7dfde0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007dfde0 size=672 callers=16 calls=1
   calls: sub_7e0080
*/
void sub_7dfde0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7dfde0ULL || rel >= 0x7e0080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e0080 size=13360 callers=2 calls=0
*/
void sub_7e0080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e0080ULL || rel >= 0x7e34b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e34b0 size=560 callers=1 calls=1
   calls: sub_8ac5d0
*/
void sub_7e34b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e34b0ULL || rel >= 0x7e36e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e36e0 size=16 callers=0 calls=0
*/
void sub_7e36e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e36e0ULL || rel >= 0x7e36f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e36f0 size=16 callers=0 calls=0
*/
void sub_7e36f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e36f0ULL || rel >= 0x7e3700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3700 size=16 callers=0 calls=0
*/
void sub_7e3700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3700ULL || rel >= 0x7e3710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3710 size=16 callers=0 calls=0
*/
void sub_7e3710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3710ULL || rel >= 0x7e3720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3720 size=16 callers=0 calls=0
*/
void sub_7e3720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3720ULL || rel >= 0x7e3730ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3730 size=128 callers=0 calls=0
*/
void sub_7e3730(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3730ULL || rel >= 0x7e37b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e37b0 size=304 callers=1 calls=3
   calls: sub_7e38e0, sub_7e39f0, sub_7f7080
*/
void sub_7e37b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e37b0ULL || rel >= 0x7e38e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e38e0 size=272 callers=1 calls=2
   calls: sub_7dfde0, sub_7e7c20
*/
void sub_7e38e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e38e0ULL || rel >= 0x7e39f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e39f0 size=352 callers=1 calls=5
   calls: sub_7e88d0, sub_7e88e0, sub_7e8920, sub_7fe2b0, sub_8924f0
*/
void sub_7e39f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e39f0ULL || rel >= 0x7e3b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3b50 size=80 callers=9 calls=2
   calls: sub_7ed1a0, sub_7fe1d0
*/
void sub_7e3b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3b50ULL || rel >= 0x7e3ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3ba0 size=112 callers=5 calls=1
   calls: sub_8a79f0
*/
void sub_7e3ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3ba0ULL || rel >= 0x7e3c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3c10 size=112 callers=1 calls=1
   calls: sub_8a7be0
*/
void sub_7e3c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3c10ULL || rel >= 0x7e3c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3c80 size=128 callers=1 calls=1
   calls: sub_8a7a20
*/
void sub_7e3c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3c80ULL || rel >= 0x7e3d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3d00 size=192 callers=1 calls=2
   calls: sub_8930c0, sub_893100
*/
void sub_7e3d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3d00ULL || rel >= 0x7e3dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3dc0 size=128 callers=1 calls=2
   calls: sub_7fe2b0, sub_803a70
*/
void sub_7e3dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3dc0ULL || rel >= 0x7e3e40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3e40 size=256 callers=1 calls=3
   calls: sub_7e88d0, sub_8139d0, sub_892600
*/
void sub_7e3e40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3e40ULL || rel >= 0x7e3f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e3f40 size=592 callers=2 calls=0
*/
void sub_7e3f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e3f40ULL || rel >= 0x7e4190ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4190 size=176 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e4190(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4190ULL || rel >= 0x7e4240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4240 size=64 callers=0 calls=1
   calls: sub_7c58b0
*/
void sub_7e4240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4240ULL || rel >= 0x7e4280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4280 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e4280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4280ULL || rel >= 0x7e4340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4340 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e4340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4340ULL || rel >= 0x7e4400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4400 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e4400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4400ULL || rel >= 0x7e44c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e44c0 size=64 callers=0 calls=1
   calls: sub_8925a0
*/
void sub_7e44c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e44c0ULL || rel >= 0x7e4500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4500 size=192 callers=0 calls=4
   calls: sub_7e6900, sub_7e69b0, sub_7e75c0, sub_8a7be0
*/
void sub_7e4500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4500ULL || rel >= 0x7e45c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e45c0 size=384 callers=0 calls=6
   calls: sub_7cc3d0, sub_7e6900, sub_7e6cd0, sub_7e6dc0, sub_7e75c0, sub_8a7be0
*/
void sub_7e45c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e45c0ULL || rel >= 0x7e4740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4740 size=272 callers=0 calls=5
   calls: sub_7e6900, sub_7e75c0, sub_7e88d0, sub_8139d0, sub_8a7be0
*/
void sub_7e4740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4740ULL || rel >= 0x7e4850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4850 size=64 callers=0 calls=1
   calls: sub_8925a0
*/
void sub_7e4850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4850ULL || rel >= 0x7e4890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4890 size=240 callers=0 calls=5
   calls: sub_7e6900, sub_7e69b0, sub_7e6e90, sub_7e75c0, sub_8a7be0
*/
void sub_7e4890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4890ULL || rel >= 0x7e4980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4980 size=96 callers=0 calls=2
   calls: sub_7cc410, sub_7cc460
*/
void sub_7e4980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4980ULL || rel >= 0x7e49e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e49e0 size=384 callers=0 calls=6
   calls: sub_7cc3d0, sub_7e6900, sub_7e6cd0, sub_7e6dc0, sub_7e75c0, sub_8a7be0
*/
void sub_7e49e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e49e0ULL || rel >= 0x7e4b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4b60 size=256 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e4b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4b60ULL || rel >= 0x7e4c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4c60 size=320 callers=0 calls=11
   calls: sub_7ca1c0, sub_7cba10, sub_7cbb40, sub_7e6f90, sub_7e7050, sub_7e8930, sub_7fe1d0, sub_7fe260, sub_7fe2b0, sub_890ee0, sub_8925a0
*/
void sub_7e4c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4c60ULL || rel >= 0x7e4da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4da0 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e4da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4da0ULL || rel >= 0x7e4e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4e60 size=96 callers=0 calls=3
   calls: sub_7cb850, sub_8924c0, sub_8a7bd0
*/
void sub_7e4e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4e60ULL || rel >= 0x7e4ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4ec0 size=208 callers=0 calls=4
   calls: sub_7e6900, sub_7e75c0, sub_8925b0, sub_8a7be0
*/
void sub_7e4ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4ec0ULL || rel >= 0x7e4f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e4f90 size=112 callers=0 calls=2
   calls: sub_7e6900, sub_7e75c0
*/
void sub_7e4f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e4f90ULL || rel >= 0x7e5000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5000 size=288 callers=0 calls=12
   calls: sub_7e6900, sub_7e69b0, sub_7e7220, sub_7e75c0, sub_7ed1c0, sub_7ee6b0, sub_7fe1d0, sub_850590, sub_8924c0, sub_8925c0, sub_8a7bd0, sub_8a7be0
*/
void sub_7e5000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5000ULL || rel >= 0x7e5120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5120 size=64 callers=0 calls=1
   calls: sub_7cc460
*/
void sub_7e5120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5120ULL || rel >= 0x7e5160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5160 size=384 callers=0 calls=6
   calls: sub_7cc3d0, sub_7e6900, sub_7e6cd0, sub_7e6dc0, sub_7e75c0, sub_8a7be0
*/
void sub_7e5160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5160ULL || rel >= 0x7e52e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e52e0 size=256 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e52e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e52e0ULL || rel >= 0x7e53e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e53e0 size=272 callers=0 calls=8
   calls: sub_7ca1c0, sub_7cbb40, sub_7e7050, sub_7fe1d0, sub_7fe260, sub_7fe2b0, sub_890ee0, sub_8925a0
*/
void sub_7e53e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e53e0ULL || rel >= 0x7e54f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e54f0 size=192 callers=0 calls=4
   calls: sub_7e6900, sub_7e69b0, sub_7e75c0, sub_8a7be0
*/
void sub_7e54f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e54f0ULL || rel >= 0x7e55b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e55b0 size=64 callers=0 calls=1
   calls: sub_7cc460
*/
void sub_7e55b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e55b0ULL || rel >= 0x7e55f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e55f0 size=384 callers=0 calls=6
   calls: sub_7cc3d0, sub_7e6900, sub_7e6cd0, sub_7e6dc0, sub_7e75c0, sub_8a7be0
*/
void sub_7e55f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e55f0ULL || rel >= 0x7e5770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5770 size=272 callers=0 calls=5
   calls: sub_7e6900, sub_7e75c0, sub_7e88d0, sub_8139d0, sub_8a7be0
*/
void sub_7e5770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5770ULL || rel >= 0x7e5880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5880 size=272 callers=0 calls=8
   calls: sub_7ca1c0, sub_7cbb40, sub_7e7050, sub_7fe1d0, sub_7fe260, sub_7fe2b0, sub_890ee0, sub_8925a0
*/
void sub_7e5880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5880ULL || rel >= 0x7e5990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5990 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e5990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5990ULL || rel >= 0x7e5a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5a50 size=256 callers=0 calls=8
   calls: sub_7cbb40, sub_7e6900, sub_7e75c0, sub_7fe1d0, sub_7fe260, sub_7fe2b0, sub_890ee0, sub_8a7be0
*/
void sub_7e5a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5a50ULL || rel >= 0x7e5b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5b50 size=240 callers=0 calls=6
   calls: sub_7cbb20, sub_7cbb40, sub_7e6900, sub_7e75c0, sub_7fcf30, sub_8a7be0
*/
void sub_7e5b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5b50ULL || rel >= 0x7e5c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5c40 size=192 callers=0 calls=4
   calls: sub_7e6900, sub_7e72b0, sub_7e75c0, sub_8a7be0
*/
void sub_7e5c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5c40ULL || rel >= 0x7e5d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5d00 size=192 callers=0 calls=4
   calls: sub_7e6900, sub_7e7350, sub_7e75c0, sub_8a7be0
*/
void sub_7e5d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5d00ULL || rel >= 0x7e5dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5dc0 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e5dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5dc0ULL || rel >= 0x7e5e80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5e80 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e5e80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5e80ULL || rel >= 0x7e5f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5f40 size=80 callers=0 calls=3
   calls: sub_7cb850, sub_7cbb70, sub_7cbc20
*/
void sub_7e5f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5f40ULL || rel >= 0x7e5f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e5f90 size=192 callers=0 calls=2
   calls: sub_7c58b0, sub_7cbb70
*/
void sub_7e5f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e5f90ULL || rel >= 0x7e6050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6050 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e6050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6050ULL || rel >= 0x7e6110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6110 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e6110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6110ULL || rel >= 0x7e61d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e61d0 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e61d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e61d0ULL || rel >= 0x7e6290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6290 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e6290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6290ULL || rel >= 0x7e6350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6350 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e6350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6350ULL || rel >= 0x7e6410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6410 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e6410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6410ULL || rel >= 0x7e64d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e64d0 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e64d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e64d0ULL || rel >= 0x7e6590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6590 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e6590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6590ULL || rel >= 0x7e6650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6650 size=112 callers=0 calls=2
   calls: sub_7e6900, sub_7e75c0
*/
void sub_7e6650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6650ULL || rel >= 0x7e66c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e66c0 size=192 callers=0 calls=3
   calls: sub_7e6900, sub_7e75c0, sub_8a7be0
*/
void sub_7e66c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e66c0ULL || rel >= 0x7e6780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6780 size=384 callers=0 calls=3
   calls: sub_892490, sub_8924a0, sub_8a7bd0
*/
void sub_7e6780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6780ULL || rel >= 0x7e6900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6900 size=176 callers=44 calls=2
   calls: sub_896170, sub_8a7ab0
*/
void sub_7e6900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6900ULL || rel >= 0x7e69b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e69b0 size=800 callers=4 calls=2
   calls: sub_8924c0, sub_8a7bd0
*/
void sub_7e69b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e69b0ULL || rel >= 0x7e6cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6cd0 size=240 callers=4 calls=4
   calls: sub_7fe2b0, sub_803a70, sub_8924c0, sub_8a7bd0
*/
void sub_7e6cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6cd0ULL || rel >= 0x7e6dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6dc0 size=208 callers=4 calls=6
   calls: sub_7ca080, sub_7cb310, sub_7cd930, sub_7cd940, sub_7fe2b0, sub_803a50
*/
void sub_7e6dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6dc0ULL || rel >= 0x7e6e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6e90 size=256 callers=1 calls=3
   calls: sub_7cc3d0, sub_7fe2b0, sub_803a50
*/
void sub_7e6e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6e90ULL || rel >= 0x7e6f90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e6f90 size=192 callers=1 calls=4
   calls: sub_7c56e0, sub_7c58b0, sub_7ca1c0, sub_7e8920
*/
void sub_7e6f90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e6f90ULL || rel >= 0x7e7050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7050 size=464 callers=3 calls=11
   calls: sub_7c5910, sub_7ca1c0, sub_7cb850, sub_7cce80, sub_7e7b50, sub_7ed1b0, sub_7ed5e0, sub_7fc2f0, sub_7fe1d0, sub_7fe310, sub_801890
*/
void sub_7e7050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7050ULL || rel >= 0x7e7220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7220 size=144 callers=1 calls=8
   calls: sub_7caa30, sub_7cb850, sub_7e8920, sub_7ed1a0, sub_7fc2f0, sub_7fe1d0, sub_84f450, sub_84f460
*/
void sub_7e7220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7220ULL || rel >= 0x7e72b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e72b0 size=160 callers=1 calls=2
   calls: sub_8924c0, sub_8a7bd0
*/
void sub_7e72b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e72b0ULL || rel >= 0x7e7350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7350 size=352 callers=1 calls=7
   calls: sub_7cb850, sub_7e74b0, sub_7ed5e0, sub_7f2f20, sub_7f7690, sub_7fe1d0, sub_8925d0
*/
void sub_7e7350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7350ULL || rel >= 0x7e74b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e74b0 size=272 callers=4 calls=5
   calls: sub_7ed1c0, sub_7ed5e0, sub_7fccc0, sub_7fe1d0, sub_84af60
*/
void sub_7e74b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e74b0ULL || rel >= 0x7e75c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e75c0 size=336 callers=40 calls=9
   calls: sub_7e7710, sub_891e00, sub_891ee0, sub_892360, sub_8923e0, sub_892430, sub_892600, sub_8a7a40, sub_8a7be0
*/
void sub_7e75c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e75c0ULL || rel >= 0x7e7710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7710 size=240 callers=1 calls=1
   calls: sub_8a7a40
*/
void sub_7e7710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7710ULL || rel >= 0x7e7800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7800 size=176 callers=0 calls=1
   calls: sub_7dfde0
*/
void sub_7e7800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7800ULL || rel >= 0x7e78b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e78b0 size=176 callers=0 calls=1
   calls: sub_7dfde0
*/
void sub_7e78b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e78b0ULL || rel >= 0x7e7960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7960 size=176 callers=0 calls=1
   calls: sub_7dfde0
*/
void sub_7e7960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7960ULL || rel >= 0x7e7a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7a10 size=176 callers=0 calls=1
   calls: sub_7dfde0
*/
void sub_7e7a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7a10ULL || rel >= 0x7e7ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7ac0 size=128 callers=0 calls=0
*/
void sub_7e7ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7ac0ULL || rel >= 0x7e7b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7b40 size=16 callers=5 calls=0
*/
void sub_7e7b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7b40ULL || rel >= 0x7e7b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7b50 size=80 callers=3 calls=1
   calls: sub_7c56e0
*/
void sub_7e7b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7b50ULL || rel >= 0x7e7ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7ba0 size=128 callers=0 calls=0
*/
void sub_7e7ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7ba0ULL || rel >= 0x7e7c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e7c20 size=1088 callers=3 calls=13
   calls: sub_7e0080, sub_7e8060, sub_7e8170, sub_7e8300, sub_7e8420, sub_7e8540, sub_7e8670, sub_7e8790, sub_7e89c0, sub_8139c0, sub_81c630, sub_82cb80
   ... +1 more
*/
void sub_7e7c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e7c20ULL || rel >= 0x7e8060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8060 size=272 callers=1 calls=1
   calls: sub_82b0f0
*/
void sub_7e8060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8060ULL || rel >= 0x7e8170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8170 size=400 callers=1 calls=1
   calls: sub_7e8a20
*/
void sub_7e8170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8170ULL || rel >= 0x7e8300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8300 size=288 callers=1 calls=1
   calls: sub_804980
*/
void sub_7e8300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8300ULL || rel >= 0x7e8420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8420 size=288 callers=1 calls=1
   calls: sub_816930
*/
void sub_7e8420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8420ULL || rel >= 0x7e8540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8540 size=304 callers=1 calls=1
   calls: sub_80dd20
*/
void sub_7e8540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8540ULL || rel >= 0x7e8670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8670 size=288 callers=1 calls=1
   calls: sub_830dc0
*/
void sub_7e8670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8670ULL || rel >= 0x7e8790ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8790 size=240 callers=1 calls=1
   calls: sub_890c10
*/
void sub_7e8790(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8790ULL || rel >= 0x7e8880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8880 size=80 callers=0 calls=5
   calls: sub_7e8c30, sub_8139d0, sub_82b460, sub_82cca0, sub_84f140
*/
void sub_7e8880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8880ULL || rel >= 0x7e88d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e88d0 size=16 callers=9 calls=0
*/
void sub_7e88d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e88d0ULL || rel >= 0x7e88e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e88e0 size=16 callers=1 calls=0
*/
void sub_7e88e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e88e0ULL || rel >= 0x7e88f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e88f0 size=16 callers=114 calls=0
*/
void sub_7e88f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e88f0ULL || rel >= 0x7e8900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8900 size=16 callers=1 calls=0
*/
void sub_7e8900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8900ULL || rel >= 0x7e8910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8910 size=16 callers=5 calls=0
*/
void sub_7e8910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8910ULL || rel >= 0x7e8920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8920 size=16 callers=4 calls=0
*/
void sub_7e8920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8920ULL || rel >= 0x7e8930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8930 size=16 callers=1 calls=0
*/
void sub_7e8930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8930ULL || rel >= 0x7e8940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8940 size=128 callers=0 calls=0
*/
void sub_7e8940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8940ULL || rel >= 0x7e89c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e89c0 size=16 callers=2 calls=0
*/
void sub_7e89c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e89c0ULL || rel >= 0x7e89d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e89d0 size=16 callers=0 calls=0
*/
void sub_7e89d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e89d0ULL || rel >= 0x7e89e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e89e0 size=16 callers=1 calls=0
*/
void sub_7e89e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e89e0ULL || rel >= 0x7e89f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e89f0 size=16 callers=2 calls=0
*/
void sub_7e89f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e89f0ULL || rel >= 0x7e8a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8a00 size=16 callers=1 calls=0
*/
void sub_7e8a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8a00ULL || rel >= 0x7e8a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8a10 size=16 callers=2 calls=0
*/
void sub_7e8a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8a10ULL || rel >= 0x7e8a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8a20 size=528 callers=1 calls=3
   calls: sub_7e9f70, sub_7ea450, sub_7ea5d0
*/
void sub_7e8a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8a20ULL || rel >= 0x7e8c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8c30 size=48 callers=1 calls=1
   calls: sub_7ea5d0
*/
void sub_7e8c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8c30ULL || rel >= 0x7e8c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8c60 size=16 callers=22 calls=0
*/
void sub_7e8c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8c60ULL || rel >= 0x7e8c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8c70 size=144 callers=8 calls=2
   calls: sub_7eadb0, sub_7fe240
*/
void sub_7e8c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8c70ULL || rel >= 0x7e8d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8d00 size=112 callers=15 calls=3
   calls: sub_7e9bb0, sub_7e9bd0, sub_7fe240
*/
void sub_7e8d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8d00ULL || rel >= 0x7e8d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8d70 size=160 callers=1 calls=8
   calls: sub_7e9b30, sub_7e9b70, sub_7e9bb0, sub_7e9bd0, sub_7e9ca0, sub_7eaee0, sub_7eaf40, sub_7fe240
*/
void sub_7e8d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8d70ULL || rel >= 0x7e8e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8e10 size=128 callers=3 calls=6
   calls: sub_7e9a60, sub_7e9ac0, sub_7e9b30, sub_7e9b70, sub_7eaf40, sub_7fe240
*/
void sub_7e8e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8e10ULL || rel >= 0x7e8e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8e90 size=128 callers=1 calls=6
   calls: sub_7e9a60, sub_7e9ae0, sub_7e9b30, sub_7e9b70, sub_7eaf40, sub_7fe240
*/
void sub_7e8e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8e90ULL || rel >= 0x7e8f10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8f10 size=80 callers=1 calls=4
   calls: sub_7e9ae0, sub_7e9b30, sub_7eaf40, sub_7fe240
*/
void sub_7e8f10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8f10ULL || rel >= 0x7e8f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8f60 size=16 callers=179 calls=0
*/
void sub_7e8f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8f60ULL || rel >= 0x7e8f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e8f70 size=224 callers=0 calls=6
   calls: sub_7e9060, sub_7e9b30, sub_7e9b60, sub_7e9bb0, sub_7eaf40, sub_7fe240
*/
void sub_7e8f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e8f70ULL || rel >= 0x7e9050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9050 size=16 callers=4 calls=0
*/
void sub_7e9050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9050ULL || rel >= 0x7e9060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9060 size=576 callers=1 calls=18
   calls: sub_7e92a0, sub_7e9a50, sub_7e9b30, sub_7e9b50, sub_7e9b70, sub_7e9b90, sub_7e9bb0, sub_7e9bc0, sub_7e9bd0, sub_7e9be0, sub_7e9bf0, sub_7e9c00
   ... +6 more
*/
void sub_7e9060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9060ULL || rel >= 0x7e92a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e92a0 size=560 callers=1 calls=21
   calls: sub_7e9a60, sub_7e9a90, sub_7e9b30, sub_7e9b70, sub_7e9b90, sub_7e9ba0, sub_7e9bf0, sub_7eaf40, sub_7eb590, sub_7eb5c0, sub_7ecc90, sub_7ed1e0
   ... +9 more
*/
void sub_7e92a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e92a0ULL || rel >= 0x7e94d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e94d0 size=64 callers=168 calls=3
   calls: sub_7ea270, sub_7ea800, sub_7ea810
*/
void sub_7e94d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e94d0ULL || rel >= 0x7e9510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9510 size=64 callers=89 calls=2
   calls: sub_7ea800, sub_7ea830
*/
void sub_7e9510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9510ULL || rel >= 0x7e9550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9550 size=80 callers=4 calls=4
   calls: sub_7ea110, sub_7ea260, sub_7ea5d0, sub_7ea800
*/
void sub_7e9550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9550ULL || rel >= 0x7e95a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e95a0 size=112 callers=75 calls=3
   calls: sub_7e9e10, sub_7e9e20, sub_7ea3b0
*/
void sub_7e95a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e95a0ULL || rel >= 0x7e9610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9610 size=112 callers=418 calls=3
   calls: sub_7e9e10, sub_7e9e30, sub_7ea3b0
*/
void sub_7e9610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9610ULL || rel >= 0x7e9680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9680 size=112 callers=108 calls=3
   calls: sub_7e9e10, sub_7e9e50, sub_7ea3b0
*/
void sub_7e9680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9680ULL || rel >= 0x7e96f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e96f0 size=48 callers=1 calls=1
   calls: sub_7e9d60
*/
void sub_7e96f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e96f0ULL || rel >= 0x7e9720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9720 size=144 callers=9 calls=3
   calls: sub_7e9e10, sub_7e9eb0, sub_7ea3b0
*/
void sub_7e9720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9720ULL || rel >= 0x7e97b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e97b0 size=64 callers=17 calls=1
   calls: sub_7e9d60
*/
void sub_7e97b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e97b0ULL || rel >= 0x7e97f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e97f0 size=64 callers=1 calls=1
   calls: sub_7e9d60
*/
void sub_7e97f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e97f0ULL || rel >= 0x7e9830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9830 size=48 callers=230 calls=1
   calls: sub_7e9d60
*/
void sub_7e9830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9830ULL || rel >= 0x7e9860ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9860 size=64 callers=0 calls=2
   calls: sub_7e9d60, sub_7e9f50
*/
void sub_7e9860(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9860ULL || rel >= 0x7e98a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e98a0 size=112 callers=9 calls=3
   calls: sub_7e9e10, sub_7e9f20, sub_7ea3b0
*/
void sub_7e98a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e98a0ULL || rel >= 0x7e9910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9910 size=48 callers=0 calls=1
   calls: sub_7e9d60
*/
void sub_7e9910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9910ULL || rel >= 0x7e9940ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9940 size=48 callers=1 calls=0
*/
void sub_7e9940(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9940ULL || rel >= 0x7e9970ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9970 size=32 callers=5 calls=0
*/
void sub_7e9970(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9970ULL || rel >= 0x7e9990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9990 size=16 callers=0 calls=0
*/
void sub_7e9990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9990ULL || rel >= 0x7e99a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e99a0 size=16 callers=0 calls=0
*/
void sub_7e99a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e99a0ULL || rel >= 0x7e99b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e99b0 size=48 callers=1 calls=0
*/
void sub_7e99b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e99b0ULL || rel >= 0x7e99e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e99e0 size=16 callers=2 calls=0
*/
void sub_7e99e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e99e0ULL || rel >= 0x7e99f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e99f0 size=16 callers=1 calls=0
*/
void sub_7e99f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e99f0ULL || rel >= 0x7e9a00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9a00 size=16 callers=4 calls=0
*/
void sub_7e9a00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9a00ULL || rel >= 0x7e9a10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9a10 size=16 callers=5 calls=0
*/
void sub_7e9a10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9a10ULL || rel >= 0x7e9a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9a20 size=16 callers=1 calls=0
*/
void sub_7e9a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9a20ULL || rel >= 0x7e9a30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9a30 size=32 callers=2 calls=0
*/
void sub_7e9a30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9a30ULL || rel >= 0x7e9a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9a50 size=16 callers=1 calls=0
*/
void sub_7e9a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9a50ULL || rel >= 0x7e9a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9a60 size=16 callers=8 calls=0
*/
void sub_7e9a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9a60ULL || rel >= 0x7e9a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9a70 size=16 callers=0 calls=0
*/
void sub_7e9a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9a70ULL || rel >= 0x7e9a80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9a80 size=16 callers=0 calls=0
*/
void sub_7e9a80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9a80ULL || rel >= 0x7e9a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9a90 size=16 callers=1 calls=0
*/
void sub_7e9a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9a90ULL || rel >= 0x7e9aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9aa0 size=16 callers=1 calls=0
*/
void sub_7e9aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9aa0ULL || rel >= 0x7e9ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9ab0 size=16 callers=1 calls=0
*/
void sub_7e9ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9ab0ULL || rel >= 0x7e9ac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9ac0 size=32 callers=1 calls=0
*/
void sub_7e9ac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9ac0ULL || rel >= 0x7e9ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9ae0 size=32 callers=2 calls=0
*/
void sub_7e9ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9ae0ULL || rel >= 0x7e9b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9b00 size=16 callers=6 calls=0
*/
void sub_7e9b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9b00ULL || rel >= 0x7e9b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9b10 size=32 callers=6 calls=0
*/
void sub_7e9b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9b10ULL || rel >= 0x7e9b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9b30 size=16 callers=23 calls=0
*/
void sub_7e9b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9b30ULL || rel >= 0x7e9b40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9b40 size=16 callers=1 calls=0
*/
void sub_7e9b40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9b40ULL || rel >= 0x7e9b50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9b50 size=16 callers=2 calls=0
*/
void sub_7e9b50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9b50ULL || rel >= 0x7e9b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9b60 size=16 callers=2 calls=0
*/
void sub_7e9b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9b60ULL || rel >= 0x7e9b70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9b70 size=16 callers=15 calls=0
*/
void sub_7e9b70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9b70ULL || rel >= 0x7e9b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9b80 size=16 callers=4 calls=0
*/
void sub_7e9b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9b80ULL || rel >= 0x7e9b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9b90 size=16 callers=6 calls=0
*/
void sub_7e9b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9b90ULL || rel >= 0x7e9ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9ba0 size=16 callers=94 calls=0
*/
void sub_7e9ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9ba0ULL || rel >= 0x7e9bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9bb0 size=16 callers=8 calls=0
*/
void sub_7e9bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9bb0ULL || rel >= 0x7e9bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9bc0 size=16 callers=6 calls=0
*/
void sub_7e9bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9bc0ULL || rel >= 0x7e9bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9bd0 size=16 callers=4 calls=0
*/
void sub_7e9bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9bd0ULL || rel >= 0x7e9be0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9be0 size=16 callers=2 calls=0
*/
void sub_7e9be0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9be0ULL || rel >= 0x7e9bf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9bf0 size=16 callers=2 calls=0
*/
void sub_7e9bf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9bf0ULL || rel >= 0x7e9c00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9c00 size=16 callers=1 calls=0
*/
void sub_7e9c00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9c00ULL || rel >= 0x7e9c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9c10 size=16 callers=1 calls=0
*/
void sub_7e9c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9c10ULL || rel >= 0x7e9c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9c20 size=16 callers=2 calls=0
*/
void sub_7e9c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9c20ULL || rel >= 0x7e9c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9c30 size=16 callers=1 calls=0
*/
void sub_7e9c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9c30ULL || rel >= 0x7e9c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9c40 size=16 callers=1 calls=0
*/
void sub_7e9c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9c40ULL || rel >= 0x7e9c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9c50 size=16 callers=1 calls=0
*/
void sub_7e9c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9c50ULL || rel >= 0x7e9c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9c60 size=16 callers=2 calls=0
*/
void sub_7e9c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9c60ULL || rel >= 0x7e9c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9c70 size=16 callers=1 calls=0
*/
void sub_7e9c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9c70ULL || rel >= 0x7e9c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9c80 size=32 callers=1 calls=0
*/
void sub_7e9c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9c80ULL || rel >= 0x7e9ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9ca0 size=32 callers=2 calls=0
*/
void sub_7e9ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9ca0ULL || rel >= 0x7e9cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9cc0 size=32 callers=2 calls=0
*/
void sub_7e9cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9cc0ULL || rel >= 0x7e9ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9ce0 size=16 callers=1 calls=0
*/
void sub_7e9ce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9ce0ULL || rel >= 0x7e9cf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9cf0 size=48 callers=1 calls=0
*/
void sub_7e9cf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9cf0ULL || rel >= 0x7e9d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9d20 size=32 callers=32 calls=0
*/
void sub_7e9d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9d20ULL || rel >= 0x7e9d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9d40 size=16 callers=0 calls=0
*/
void sub_7e9d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9d40ULL || rel >= 0x7e9d50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9d50 size=16 callers=0 calls=0
*/
void sub_7e9d50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9d50ULL || rel >= 0x7e9d60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9d60 size=32 callers=6 calls=0
*/
void sub_7e9d60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9d60ULL || rel >= 0x7e9d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9d80 size=64 callers=0 calls=1
   calls: sub_7e9f40
*/
void sub_7e9d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9d80ULL || rel >= 0x7e9dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9dc0 size=48 callers=1 calls=0
*/
void sub_7e9dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9dc0ULL || rel >= 0x7e9df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9df0 size=16 callers=0 calls=0
*/
void sub_7e9df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9df0ULL || rel >= 0x7e9e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9e00 size=16 callers=0 calls=0
*/
void sub_7e9e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9e00ULL || rel >= 0x7e9e10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9e10 size=16 callers=10 calls=0
*/
void sub_7e9e10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9e10ULL || rel >= 0x7e9e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9e20 size=16 callers=1 calls=0
*/
void sub_7e9e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9e20ULL || rel >= 0x7e9e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9e30 size=32 callers=1 calls=0
*/
void sub_7e9e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9e30ULL || rel >= 0x7e9e50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9e50 size=32 callers=1 calls=0
*/
void sub_7e9e50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9e50ULL || rel >= 0x7e9e70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9e70 size=48 callers=0 calls=0
*/
void sub_7e9e70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9e70ULL || rel >= 0x7e9ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9ea0 size=16 callers=0 calls=0
*/
void sub_7e9ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9ea0ULL || rel >= 0x7e9eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9eb0 size=32 callers=1 calls=0
*/
void sub_7e9eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9eb0ULL || rel >= 0x7e9ed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9ed0 size=80 callers=0 calls=0
*/
void sub_7e9ed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9ed0ULL || rel >= 0x7e9f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9f20 size=32 callers=1 calls=0
*/
void sub_7e9f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9f20ULL || rel >= 0x7e9f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9f40 size=16 callers=6 calls=0
*/
void sub_7e9f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9f40ULL || rel >= 0x7e9f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9f50 size=16 callers=1 calls=0
*/
void sub_7e9f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9f50ULL || rel >= 0x7e9f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9f60 size=16 callers=0 calls=0
*/
void sub_7e9f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9f60ULL || rel >= 0x7e9f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9f70 size=112 callers=1 calls=2
   calls: sub_7e9e10, sub_7e9fe0
*/
void sub_7e9f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9f70ULL || rel >= 0x7e9fe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007e9fe0 size=304 callers=1 calls=1
   calls: sub_7e9dc0
*/
void sub_7e9fe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7e9fe0ULL || rel >= 0x7ea110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea110 size=64 callers=1 calls=1
   calls: sub_7e9e10
*/
void sub_7ea110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea110ULL || rel >= 0x7ea150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea150 size=128 callers=0 calls=0
*/
void sub_7ea150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea150ULL || rel >= 0x7ea1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea1d0 size=144 callers=0 calls=0
*/
void sub_7ea1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea1d0ULL || rel >= 0x7ea260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea260 size=16 callers=1 calls=0
*/
void sub_7ea260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea260ULL || rel >= 0x7ea270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea270 size=128 callers=1 calls=2
   calls: sub_7e9e10, sub_7e9f40
*/
void sub_7ea270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea270ULL || rel >= 0x7ea2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea2f0 size=192 callers=0 calls=2
   calls: sub_7e9e10, sub_7e9f40
*/
void sub_7ea2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea2f0ULL || rel >= 0x7ea3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea3b0 size=160 callers=5 calls=1
   calls: sub_7e9f40
*/
void sub_7ea3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea3b0ULL || rel >= 0x7ea450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea450 size=80 callers=1 calls=1
   calls: sub_7ea4a0
*/
void sub_7ea450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea450ULL || rel >= 0x7ea4a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea4a0 size=304 callers=1 calls=1
   calls: sub_7e9cf0
*/
void sub_7ea4a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea4a0ULL || rel >= 0x7ea5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea5d0 size=288 callers=3 calls=1
   calls: sub_7e9d20
*/
void sub_7ea5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea5d0ULL || rel >= 0x7ea6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea6f0 size=128 callers=0 calls=0
*/
void sub_7ea6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea6f0ULL || rel >= 0x7ea770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea770 size=144 callers=0 calls=0
*/
void sub_7ea770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea770ULL || rel >= 0x7ea800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea800 size=16 callers=3 calls=0
*/
void sub_7ea800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea800ULL || rel >= 0x7ea810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea810 size=32 callers=1 calls=0
*/
void sub_7ea810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea810ULL || rel >= 0x7ea830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea830 size=64 callers=1 calls=1
   calls: sub_7e9d20
*/
void sub_7ea830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea830ULL || rel >= 0x7ea870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea870 size=160 callers=1 calls=4
   calls: sub_7e9970, sub_7e9b00, sub_7e9b10, sub_7ea910
*/
void sub_7ea870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea870ULL || rel >= 0x7ea910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ea910 size=304 callers=1 calls=1
   calls: sub_7e9940
*/
void sub_7ea910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ea910ULL || rel >= 0x7eaa40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eaa40 size=128 callers=0 calls=0
*/
void sub_7eaa40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eaa40ULL || rel >= 0x7eaac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eaac0 size=144 callers=0 calls=0
*/
void sub_7eaac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eaac0ULL || rel >= 0x7eab50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eab50 size=288 callers=1 calls=7
   calls: sub_7e9970, sub_7e99b0, sub_7e99e0, sub_7e9b00, sub_7e9b10, sub_7e9b30, sub_7eac70
*/
void sub_7eab50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eab50ULL || rel >= 0x7eac70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eac70 size=208 callers=2 calls=4
   calls: sub_7e9b00, sub_7e9b30, sub_7e9b40, sub_7e9b80
*/
void sub_7eac70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eac70ULL || rel >= 0x7ead40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ead40 size=112 callers=1 calls=4
   calls: sub_7e9970, sub_7e9b00, sub_7e9b10, sub_7e9b30
*/
void sub_7ead40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ead40ULL || rel >= 0x7eadb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eadb0 size=304 callers=1 calls=12
   calls: sub_7e9970, sub_7e9b10, sub_7e9b30, sub_7e9b60, sub_7e9c30, sub_7e9c40, sub_7e9c50, sub_7e9c60, sub_7e9c70, sub_7e9c80, sub_7e9ce0, sub_7eac70
*/
void sub_7eadb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eadb0ULL || rel >= 0x7eaee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eaee0 size=96 callers=2 calls=4
   calls: sub_7e9970, sub_7e9b00, sub_7e9b10, sub_7e9b30
*/
void sub_7eaee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eaee0ULL || rel >= 0x7eaf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eaf40 size=16 callers=7 calls=0
*/
void sub_7eaf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eaf40ULL || rel >= 0x7eaf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eaf50 size=112 callers=1 calls=4
   calls: sub_7e9b30, sub_7e9b70, sub_7e9bb0, sub_7e9bc0
*/
void sub_7eaf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eaf50ULL || rel >= 0x7eafc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eafc0 size=144 callers=30 calls=5
   calls: sub_7e9b30, sub_7e9b70, sub_7e9b90, sub_7e9bb0, sub_7e9bc0
*/
void sub_7eafc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eafc0ULL || rel >= 0x7eb050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb050 size=224 callers=18 calls=4
   calls: sub_7e9b30, sub_7e9b70, sub_7e9b90, sub_7e9bc0
*/
void sub_7eb050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb050ULL || rel >= 0x7eb130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb130 size=176 callers=1 calls=5
   calls: sub_7e9b30, sub_7e9b70, sub_7e9b90, sub_7e9ba0, sub_7e9c60
*/
void sub_7eb130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb130ULL || rel >= 0x7eb1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb1e0 size=80 callers=1 calls=0
*/
void sub_7eb1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb1e0ULL || rel >= 0x7eb230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb230 size=48 callers=6 calls=0
*/
void sub_7eb230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb230ULL || rel >= 0x7eb260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb260 size=48 callers=2 calls=0
*/
void sub_7eb260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb260ULL || rel >= 0x7eb290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb290 size=32 callers=1 calls=0
*/
void sub_7eb290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb290ULL || rel >= 0x7eb2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb2b0 size=80 callers=1 calls=0
*/
void sub_7eb2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb2b0ULL || rel >= 0x7eb300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb300 size=48 callers=24 calls=0
*/
void sub_7eb300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb300ULL || rel >= 0x7eb330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb330 size=32 callers=3 calls=0
*/
void sub_7eb330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb330ULL || rel >= 0x7eb350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb350 size=80 callers=4 calls=0
*/
void sub_7eb350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb350ULL || rel >= 0x7eb3a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb3a0 size=48 callers=1 calls=0
*/
void sub_7eb3a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb3a0ULL || rel >= 0x7eb3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb3d0 size=80 callers=1 calls=0
*/
void sub_7eb3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb3d0ULL || rel >= 0x7eb420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb420 size=64 callers=4 calls=0
*/
void sub_7eb420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb420ULL || rel >= 0x7eb460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb460 size=16 callers=1 calls=0
*/
void sub_7eb460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb460ULL || rel >= 0x7eb470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb470 size=32 callers=1 calls=0
*/
void sub_7eb470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb470ULL || rel >= 0x7eb490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb490 size=32 callers=2 calls=0
*/
void sub_7eb490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb490ULL || rel >= 0x7eb4b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb4b0 size=64 callers=2 calls=0
*/
void sub_7eb4b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb4b0ULL || rel >= 0x7eb4f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb4f0 size=32 callers=1 calls=0
*/
void sub_7eb4f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb4f0ULL || rel >= 0x7eb510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb510 size=32 callers=1 calls=0
*/
void sub_7eb510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb510ULL || rel >= 0x7eb530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb530 size=16 callers=1 calls=0
*/
void sub_7eb530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb530ULL || rel >= 0x7eb540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb540 size=80 callers=1 calls=0
*/
void sub_7eb540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb540ULL || rel >= 0x7eb590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb590 size=48 callers=1 calls=0
*/
void sub_7eb590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb590ULL || rel >= 0x7eb5c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb5c0 size=16 callers=1 calls=0
*/
void sub_7eb5c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb5c0ULL || rel >= 0x7eb5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb5d0 size=32 callers=1 calls=0
*/
void sub_7eb5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb5d0ULL || rel >= 0x7eb5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb5f0 size=64 callers=4 calls=0
*/
void sub_7eb5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb5f0ULL || rel >= 0x7eb630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb630 size=48 callers=0 calls=0
*/
void sub_7eb630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb630ULL || rel >= 0x7eb660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb660 size=32 callers=1 calls=0
*/
void sub_7eb660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb660ULL || rel >= 0x7eb680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb680 size=48 callers=1 calls=0
*/
void sub_7eb680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb680ULL || rel >= 0x7eb6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb6b0 size=32 callers=2 calls=0
*/
void sub_7eb6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb6b0ULL || rel >= 0x7eb6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb6d0 size=176 callers=3 calls=0
*/
void sub_7eb6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb6d0ULL || rel >= 0x7eb780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb780 size=272 callers=1 calls=1
   calls: sub_7eb6d0
*/
void sub_7eb780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb780ULL || rel >= 0x7eb890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb890 size=288 callers=1 calls=1
   calls: sub_7eb6d0
*/
void sub_7eb890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb890ULL || rel >= 0x7eb9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eb9b0 size=96 callers=1 calls=0
*/
void sub_7eb9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eb9b0ULL || rel >= 0x7eba10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eba10 size=128 callers=1 calls=1
   calls: sub_7eb6d0
*/
void sub_7eba10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eba10ULL || rel >= 0x7eba90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eba90 size=32 callers=1 calls=0
*/
void sub_7eba90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eba90ULL || rel >= 0x7ebab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ebab0 size=96 callers=2 calls=0
*/
void sub_7ebab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebab0ULL || rel >= 0x7ebb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ebb10 size=112 callers=1 calls=0
*/
void sub_7ebb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebb10ULL || rel >= 0x7ebb80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ebb80 size=304 callers=1 calls=0
*/
void sub_7ebb80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebb80ULL || rel >= 0x7ebcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ebcb0 size=256 callers=1 calls=0
*/
void sub_7ebcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebcb0ULL || rel >= 0x7ebdb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ebdb0 size=80 callers=1 calls=0
*/
void sub_7ebdb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebdb0ULL || rel >= 0x7ebe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ebe00 size=192 callers=1 calls=0
*/
void sub_7ebe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebe00ULL || rel >= 0x7ebec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ebec0 size=96 callers=0 calls=0
*/
void sub_7ebec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebec0ULL || rel >= 0x7ebf20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ebf20 size=48 callers=2 calls=0
*/
void sub_7ebf20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebf20ULL || rel >= 0x7ebf50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ebf50 size=48 callers=2 calls=0
*/
void sub_7ebf50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebf50ULL || rel >= 0x7ebf80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ebf80 size=64 callers=0 calls=0
*/
void sub_7ebf80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebf80ULL || rel >= 0x7ebfc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ebfc0 size=256 callers=1 calls=1
   calls: sub_783bd0
*/
void sub_7ebfc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ebfc0ULL || rel >= 0x7ec0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ec0c0 size=48 callers=1 calls=0
*/
void sub_7ec0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ec0c0ULL || rel >= 0x7ec0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ec0f0 size=368 callers=1 calls=2
   calls: sub_7ed820, sub_7fc1c0
*/
void sub_7ec0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ec0f0ULL || rel >= 0x7ec260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ec260 size=1616 callers=2 calls=1
   calls: sub_7fc1e0
*/
void sub_7ec260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ec260ULL || rel >= 0x7ec8b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ec8b0 size=208 callers=1 calls=1
   calls: sub_7fc1f0
*/
void sub_7ec8b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ec8b0ULL || rel >= 0x7ec980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ec980 size=784 callers=1 calls=6
   calls: sub_7ee6b0, sub_7eebd0, sub_7fc1f0, sub_7fc210, sub_7fc2e0, sub_7fc450
*/
void sub_7ec980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ec980ULL || rel >= 0x7ecc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ecc90 size=16 callers=129 calls=0
*/
void sub_7ecc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ecc90ULL || rel >= 0x7ecca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ecca0 size=416 callers=1 calls=4
   calls: sub_7847d0, sub_7ece40, sub_7ecfd0, sub_804820
*/
void sub_7ecca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ecca0ULL || rel >= 0x7ece40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ece40 size=400 callers=2 calls=1
   calls: sub_7ed090
*/
void sub_7ece40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ece40ULL || rel >= 0x7ecfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ecfd0 size=192 callers=1 calls=6
   calls: sub_7ee6b0, sub_7eef50, sub_7ef340, sub_7fc450, sub_7fc5b0, sub_804820
*/
void sub_7ecfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ecfd0ULL || rel >= 0x7ed090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed090 size=272 callers=2 calls=6
   calls: sub_762930, sub_762940, sub_767720, sub_7c56e0, sub_7ed7d0, sub_7edcf0
*/
void sub_7ed090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed090ULL || rel >= 0x7ed1a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed1a0 size=16 callers=14 calls=0
*/
void sub_7ed1a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed1a0ULL || rel >= 0x7ed1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed1b0 size=16 callers=54 calls=0
*/
void sub_7ed1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed1b0ULL || rel >= 0x7ed1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed1c0 size=32 callers=8 calls=0
*/
void sub_7ed1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed1c0ULL || rel >= 0x7ed1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed1e0 size=16 callers=39 calls=0
*/
void sub_7ed1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed1e0ULL || rel >= 0x7ed1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed1f0 size=48 callers=1 calls=0
*/
void sub_7ed1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed1f0ULL || rel >= 0x7ed220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed220 size=48 callers=13 calls=1
   calls: sub_7ef360
*/
void sub_7ed220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed220ULL || rel >= 0x7ed250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed250 size=256 callers=1 calls=4
   calls: sub_7847d0, sub_7ef330, sub_7ef920, sub_7fc430
*/
void sub_7ed250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed250ULL || rel >= 0x7ed350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed350 size=384 callers=1 calls=7
   calls: sub_7847d0, sub_7ee6b0, sub_7ef330, sub_7ef920, sub_7f2560, sub_7fc430, sub_804820
*/
void sub_7ed350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed350ULL || rel >= 0x7ed4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed4d0 size=144 callers=2 calls=3
   calls: sub_7ee6b0, sub_7fc2e0, sub_7fc450
*/
void sub_7ed4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed4d0ULL || rel >= 0x7ed560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed560 size=128 callers=8 calls=3
   calls: sub_7cae30, sub_7fc2e0, sub_7fc450
*/
void sub_7ed560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed560ULL || rel >= 0x7ed5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed5e0 size=128 callers=28 calls=3
   calls: sub_7cae30, sub_7fc2e0, sub_7fc450
*/
void sub_7ed5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed5e0ULL || rel >= 0x7ed660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed660 size=144 callers=1 calls=4
   calls: sub_7cae30, sub_7ee6b0, sub_7fc2e0, sub_7fc450
*/
void sub_7ed660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed660ULL || rel >= 0x7ed6f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed6f0 size=32 callers=18 calls=0
*/
void sub_7ed6f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed6f0ULL || rel >= 0x7ed710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed710 size=160 callers=0 calls=0
*/
void sub_7ed710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed710ULL || rel >= 0x7ed7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed7b0 size=32 callers=30 calls=0
*/
void sub_7ed7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed7b0ULL || rel >= 0x7ed7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed7d0 size=80 callers=3 calls=0
*/
void sub_7ed7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed7d0ULL || rel >= 0x7ed820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ed820 size=592 callers=6 calls=2
   calls: sub_76f440, sub_7f3540
*/
void sub_7ed820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ed820ULL || rel >= 0x7eda70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eda70 size=160 callers=0 calls=0
*/
void sub_7eda70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eda70ULL || rel >= 0x7edb10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007edb10 size=160 callers=0 calls=0
*/
void sub_7edb10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7edb10ULL || rel >= 0x7edbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007edbb0 size=160 callers=0 calls=0
*/
void sub_7edbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7edbb0ULL || rel >= 0x7edc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007edc50 size=160 callers=0 calls=0
*/
void sub_7edc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7edc50ULL || rel >= 0x7edcf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007edcf0 size=848 callers=11 calls=20
   calls: sub_762930, sub_762940, sub_762d70, sub_7635d0, sub_763e60, sub_764b40, sub_765520, sub_765ab0, sub_7670b0, sub_767160, sub_768ef0, sub_7692e0
   ... +8 more
*/
void sub_7edcf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7edcf0ULL || rel >= 0x7ee040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee040 size=16 callers=0 calls=0
*/
void sub_7ee040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee040ULL || rel >= 0x7ee050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee050 size=704 callers=1 calls=3
   calls: sub_763de0, sub_764c30, sub_7690e0
*/
void sub_7ee050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee050ULL || rel >= 0x7ee310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee310 size=256 callers=4 calls=9
   calls: sub_762940, sub_763e60, sub_7644a0, sub_765520, sub_7658a0, sub_767160, sub_7ee6d0, sub_7f36e0, sub_7f7b60
*/
void sub_7ee310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee310ULL || rel >= 0x7ee410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee410 size=672 callers=1 calls=6
   calls: sub_765ae0, sub_765b70, sub_765d90, sub_765dd0, sub_7692e0, sub_769330
*/
void sub_7ee410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee410ULL || rel >= 0x7ee6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee6b0 size=16 callers=930 calls=0
*/
void sub_7ee6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee6b0ULL || rel >= 0x7ee6c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee6c0 size=16 callers=80 calls=0
*/
void sub_7ee6c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee6c0ULL || rel >= 0x7ee6d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee6d0 size=272 callers=4 calls=6
   calls: sub_762930, sub_763e60, sub_7644a0, sub_7670a0, sub_768f00, sub_768fa0
*/
void sub_7ee6d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee6d0ULL || rel >= 0x7ee7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee7e0 size=16 callers=1 calls=0
*/
void sub_7ee7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee7e0ULL || rel >= 0x7ee7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee7f0 size=16 callers=1 calls=0
*/
void sub_7ee7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee7f0ULL || rel >= 0x7ee800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee800 size=16 callers=55 calls=0
*/
void sub_7ee800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee800ULL || rel >= 0x7ee810ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee810 size=16 callers=43 calls=0
*/
void sub_7ee810(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee810ULL || rel >= 0x7ee820ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee820 size=272 callers=2 calls=3
   calls: sub_765b00, sub_765db0, sub_7664a0
*/
void sub_7ee820(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee820ULL || rel >= 0x7ee930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ee930 size=672 callers=0 calls=4
   calls: sub_765ae0, sub_765b70, sub_765d90, sub_765dd0
*/
void sub_7ee930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ee930ULL || rel >= 0x7eebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eebd0 size=464 callers=5 calls=0
*/
void sub_7eebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eebd0ULL || rel >= 0x7eeda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eeda0 size=416 callers=0 calls=2
   calls: sub_76f6c0, sub_7ed7d0
*/
void sub_7eeda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eeda0ULL || rel >= 0x7eef40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eef40 size=16 callers=117 calls=0
*/
void sub_7eef40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eef40ULL || rel >= 0x7eef50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007eef50 size=688 callers=368 calls=7
   calls: sub_763e60, sub_7eef50, sub_7f7700, sub_7f7960, sub_7ffe20, sub_800280, sub_800290
*/
void sub_7eef50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7eef50ULL || rel >= 0x7ef200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef200 size=32 callers=5 calls=0
*/
void sub_7ef200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef200ULL || rel >= 0x7ef220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef220 size=16 callers=40 calls=0
*/
void sub_7ef220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef220ULL || rel >= 0x7ef230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef230 size=16 callers=2 calls=0
*/
void sub_7ef230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef230ULL || rel >= 0x7ef240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef240 size=16 callers=1 calls=0
*/
void sub_7ef240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef240ULL || rel >= 0x7ef250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef250 size=16 callers=3 calls=0
*/
void sub_7ef250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef250ULL || rel >= 0x7ef260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef260 size=80 callers=0 calls=1
   calls: sub_7eef50
*/
void sub_7ef260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef260ULL || rel >= 0x7ef2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef2b0 size=32 callers=168 calls=1
   calls: sub_7eef50
*/
void sub_7ef2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef2b0ULL || rel >= 0x7ef2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef2d0 size=16 callers=2 calls=0
*/
void sub_7ef2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef2d0ULL || rel >= 0x7ef2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef2e0 size=32 callers=0 calls=0
*/
void sub_7ef2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef2e0ULL || rel >= 0x7ef300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef300 size=16 callers=2 calls=0
*/
void sub_7ef300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef300ULL || rel >= 0x7ef310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef310 size=16 callers=0 calls=0
*/
void sub_7ef310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef310ULL || rel >= 0x7ef320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef320 size=16 callers=17 calls=0
*/
void sub_7ef320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef320ULL || rel >= 0x7ef330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef330 size=16 callers=36 calls=0
*/
void sub_7ef330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef330ULL || rel >= 0x7ef340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef340 size=32 callers=2 calls=0
*/
void sub_7ef340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef340ULL || rel >= 0x7ef360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef360 size=32 callers=2 calls=0
*/
void sub_7ef360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef360ULL || rel >= 0x7ef380ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef380 size=80 callers=9 calls=0
*/
void sub_7ef380(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef380ULL || rel >= 0x7ef3d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef3d0 size=240 callers=26 calls=1
   calls: sub_7ffe20
*/
void sub_7ef3d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef3d0ULL || rel >= 0x7ef4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef4c0 size=32 callers=157 calls=0
*/
void sub_7ef4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef4c0ULL || rel >= 0x7ef4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef4e0 size=80 callers=3 calls=1
   calls: sub_800290
*/
void sub_7ef4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef4e0ULL || rel >= 0x7ef530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef530 size=16 callers=2 calls=0
*/
void sub_7ef530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef530ULL || rel >= 0x7ef540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef540 size=64 callers=22 calls=1
   calls: sub_7eef50
*/
void sub_7ef540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef540ULL || rel >= 0x7ef580ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef580 size=80 callers=28 calls=2
   calls: sub_767950, sub_7eef50
*/
void sub_7ef580(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef580ULL || rel >= 0x7ef5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef5d0 size=96 callers=14 calls=1
   calls: sub_7eef50
*/
void sub_7ef5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef5d0ULL || rel >= 0x7ef630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef630 size=64 callers=11 calls=1
   calls: sub_7f88c0
*/
void sub_7ef630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef630ULL || rel >= 0x7ef670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef670 size=48 callers=1 calls=0
*/
void sub_7ef670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef670ULL || rel >= 0x7ef6a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef6a0 size=112 callers=64 calls=0
*/
void sub_7ef6a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef6a0ULL || rel >= 0x7ef710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef710 size=64 callers=4 calls=0
*/
void sub_7ef710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef710ULL || rel >= 0x7ef750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef750 size=16 callers=24 calls=0
*/
void sub_7ef750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef750ULL || rel >= 0x7ef760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef760 size=16 callers=3 calls=0
*/
void sub_7ef760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef760ULL || rel >= 0x7ef770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef770 size=128 callers=1 calls=2
   calls: sub_7f8790, sub_7f8960
*/
void sub_7ef770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef770ULL || rel >= 0x7ef7f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef7f0 size=224 callers=1 calls=3
   calls: sub_7eef50, sub_7f79e0, sub_7f88c0
*/
void sub_7ef7f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef7f0ULL || rel >= 0x7ef8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef8d0 size=80 callers=1 calls=2
   calls: sub_7f8790, sub_7f89e0
*/
void sub_7ef8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef8d0ULL || rel >= 0x7ef920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007ef920 size=256 callers=4 calls=6
   calls: sub_7655b0, sub_765830, sub_765ac0, sub_768270, sub_7ee820, sub_7efa20
*/
void sub_7ef920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7ef920ULL || rel >= 0x7efa20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007efa20 size=656 callers=2 calls=3
   calls: sub_763e00, sub_764df0, sub_7692e0
*/
void sub_7efa20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7efa20ULL || rel >= 0x7efcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007efcb0 size=336 callers=2 calls=5
   calls: sub_762940, sub_7658a0, sub_767160, sub_7ee6d0, sub_7f7b60
*/
void sub_7efcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7efcb0ULL || rel >= 0x7efe00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007efe00 size=16 callers=36 calls=0
*/
void sub_7efe00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7efe00ULL || rel >= 0x7efe10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 007efe10 size=80 callers=6 calls=0
*/
void sub_7efe10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x7efe10ULL || rel >= 0x7efe60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

