/* main functions 0104d460..0105fdc0 (133 of 204). */
#include "recomp_runtime.h"
extern uint64_t MODULE_BASE;
extern BlockFn RECOMP_LOOKUP(uint64_t);

/* 0104d460 size=128 callers=0 calls=0
*/
void sub_104d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d460ULL || rel >= 0x104d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d4e0 size=416 callers=1 calls=0
*/
void sub_104d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d4e0ULL || rel >= 0x104d680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d680 size=128 callers=0 calls=0
*/
void sub_104d680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d680ULL || rel >= 0x104d700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d700 size=96 callers=14 calls=1
   calls: Result
*/
void sub_104d700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d700ULL || rel >= 0x104d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d760 size=112 callers=2 calls=2
   calls: sub_15bbd10, sub_165e140
*/
void sub_104d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d760ULL || rel >= 0x104d7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d7d0 size=160 callers=2 calls=3
   calls: Result_3, sub_15bbd10, sub_165e140
*/
void sub_104d7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d7d0ULL || rel >= 0x104d870ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d870 size=128 callers=0 calls=0
*/
void sub_104d870(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d870ULL || rel >= 0x104d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104d8f0 size=320 callers=1 calls=2
   calls: sub_104d700, sub_104e3b0
*/
void sub_104d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104d8f0ULL || rel >= 0x104da30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104da30 size=384 callers=13 calls=4
   calls: sub_104d700, sub_104d760, sub_104e9d0, sub_e9fab0
*/
void sub_104da30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104da30ULL || rel >= 0x104dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104dbb0 size=32 callers=29 calls=0
*/
void sub_104dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104dbb0ULL || rel >= 0x104dbd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104dbd0 size=16 callers=1 calls=0
*/
void sub_104dbd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104dbd0ULL || rel >= 0x104dbe0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104dbe0 size=224 callers=1 calls=1
   calls: sub_e9fab0
*/
void sub_104dbe0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104dbe0ULL || rel >= 0x104dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104dcc0 size=80 callers=2 calls=1
   calls: sub_104d7d0
*/
void sub_104dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104dcc0ULL || rel >= 0x104dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104dd10 size=64 callers=4 calls=1
   calls: sub_104d7d0
*/
void sub_104dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104dd10ULL || rel >= 0x104dd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104dd50 size=96 callers=3 calls=2
   calls: sub_104ddb0, sub_104ea70
*/
void sub_104dd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104dd50ULL || rel >= 0x104ddb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ddb0 size=432 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_104ddb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ddb0ULL || rel >= 0x104df60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104df60 size=80 callers=2 calls=1
   calls: sub_104ebd0
*/
void sub_104df60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104df60ULL || rel >= 0x104dfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104dfb0 size=32 callers=7 calls=0
*/
void sub_104dfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104dfb0ULL || rel >= 0x104dfd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104dfd0 size=80 callers=7 calls=0
*/
void sub_104dfd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104dfd0ULL || rel >= 0x104e020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e020 size=16 callers=3 calls=0
*/
void sub_104e020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e020ULL || rel >= 0x104e030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e030 size=16 callers=3 calls=0
*/
void sub_104e030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e030ULL || rel >= 0x104e040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e040 size=16 callers=7 calls=0
*/
void sub_104e040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e040ULL || rel >= 0x104e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e050 size=48 callers=9 calls=0
*/
void sub_104e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e050ULL || rel >= 0x104e080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e080 size=16 callers=1 calls=0
*/
void sub_104e080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e080ULL || rel >= 0x104e090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e090 size=48 callers=2 calls=0
*/
void sub_104e090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e090ULL || rel >= 0x104e0c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e0c0 size=16 callers=1 calls=0
*/
void sub_104e0c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e0c0ULL || rel >= 0x104e0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e0d0 size=16 callers=1 calls=0
*/
void sub_104e0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e0d0ULL || rel >= 0x104e0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e0e0 size=144 callers=0 calls=1
   calls: sub_104c610
*/
void sub_104e0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e0e0ULL || rel >= 0x104e170ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e170 size=304 callers=0 calls=0
*/
void sub_104e170(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e170ULL || rel >= 0x104e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e2a0 size=16 callers=0 calls=0
*/
void sub_104e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e2a0ULL || rel >= 0x104e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e2b0 size=16 callers=0 calls=0
*/
void sub_104e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e2b0ULL || rel >= 0x104e2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e2c0 size=112 callers=0 calls=0
*/
void sub_104e2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e2c0ULL || rel >= 0x104e330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e330 size=16 callers=0 calls=0
*/
void sub_104e330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e330ULL || rel >= 0x104e340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e340 size=112 callers=0 calls=0
*/
void sub_104e340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e340ULL || rel >= 0x104e3b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e3b0 size=560 callers=1 calls=0
*/
void sub_104e3b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e3b0ULL || rel >= 0x104e5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e5e0 size=352 callers=0 calls=0
*/
void sub_104e5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e5e0ULL || rel >= 0x104e740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e740 size=528 callers=0 calls=0
*/
void sub_104e740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e740ULL || rel >= 0x104e950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e950 size=128 callers=0 calls=0
*/
void sub_104e950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e950ULL || rel >= 0x104e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e9d0 size=32 callers=1 calls=0
*/
void sub_104e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e9d0ULL || rel >= 0x104e9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104e9f0 size=128 callers=0 calls=0
*/
void sub_104e9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104e9f0ULL || rel >= 0x104ea70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ea70 size=352 callers=1 calls=2
   calls: sub_104dfb0, sub_6aea40
*/
void sub_104ea70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ea70ULL || rel >= 0x104ebd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ebd0 size=208 callers=1 calls=2
   calls: sub_104dfd0, sub_6aeb70
*/
void sub_104ebd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ebd0ULL || rel >= 0x104eca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104eca0 size=32 callers=0 calls=0
*/
void sub_104eca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104eca0ULL || rel >= 0x104ecc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ecc0 size=16 callers=0 calls=0
*/
void sub_104ecc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ecc0ULL || rel >= 0x104ecd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ecd0 size=16 callers=0 calls=0
*/
void sub_104ecd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ecd0ULL || rel >= 0x104ece0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ece0 size=240 callers=0 calls=0
*/
void sub_104ece0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ece0ULL || rel >= 0x104edd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104edd0 size=80 callers=0 calls=0
*/
void sub_104edd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104edd0ULL || rel >= 0x104ee20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ee20 size=80 callers=0 calls=0
*/
void sub_104ee20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ee20ULL || rel >= 0x104ee70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ee70 size=80 callers=0 calls=0
*/
void sub_104ee70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ee70ULL || rel >= 0x104eec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104eec0 size=80 callers=0 calls=0
*/
void sub_104eec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104eec0ULL || rel >= 0x104ef10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ef10 size=80 callers=0 calls=0
*/
void sub_104ef10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ef10ULL || rel >= 0x104ef60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ef60 size=80 callers=0 calls=0
*/
void sub_104ef60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ef60ULL || rel >= 0x104efb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104efb0 size=16 callers=0 calls=0
*/
void sub_104efb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104efb0ULL || rel >= 0x104efc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104efc0 size=16 callers=0 calls=0
*/
void sub_104efc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104efc0ULL || rel >= 0x104efd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104efd0 size=80 callers=0 calls=0
*/
void sub_104efd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104efd0ULL || rel >= 0x104f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104f020 size=80 callers=0 calls=0
*/
void sub_104f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104f020ULL || rel >= 0x104f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104f070 size=128 callers=0 calls=0
*/
void sub_104f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104f070ULL || rel >= 0x104f0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104f0f0 size=464 callers=1 calls=1
   calls: sub_105f120
*/
void sub_104f0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104f0f0ULL || rel >= 0x104f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104f2c0 size=784 callers=0 calls=0
*/
void sub_104f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104f2c0ULL || rel >= 0x104f5d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104f5d0 size=16 callers=0 calls=0
*/
void sub_104f5d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104f5d0ULL || rel >= 0x104f5e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104f5e0 size=752 callers=1 calls=11
   calls: sub_1049ac0, sub_1049b00, sub_1049b20, sub_104dd10, sub_104f8d0, sub_105faf0, sub_105feb0, sub_105ffa0, sub_10619f0, sub_1076970, sub_6a0d40
*/
void sub_104f5e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104f5e0ULL || rel >= 0x104f8d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104f8d0 size=672 callers=2 calls=5
   calls: sub_105f2f0, sub_105f740, sub_10617a0, sub_1345ca0, sub_b08840
*/
void sub_104f8d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104f8d0ULL || rel >= 0x104fb70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104fb70 size=304 callers=23 calls=4
   calls: StartLeaveSession, sub_1054250, sub_105f740, sub_6ce1c0
*/
void sub_104fb70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104fb70ULL || rel >= 0x104fca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104fca0 size=224 callers=0 calls=4
   calls: sub_105a420, sub_105fbf0, sub_105fdc0, sub_1076e30
*/
void sub_104fca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104fca0ULL || rel >= 0x104fd80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104fd80 size=576 callers=0 calls=5
   calls: sub_1050f60, sub_1054250, sub_105f740, sub_1076840, sub_6ce1c0
*/
void sub_104fd80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104fd80ULL || rel >= 0x104ffc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0104ffc0 size=64 callers=6 calls=0
*/
void sub_104ffc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x104ffc0ULL || rel >= 0x1050000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01050000 size=96 callers=13 calls=0
*/
void sub_1050000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1050000ULL || rel >= 0x1050060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01050060 size=48 callers=12 calls=0
*/
void sub_1050060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1050060ULL || rel >= 0x1050090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01050090 size=2656 callers=2 calls=9
   calls: sub_1050c60, sub_1050de0, sub_1050f60, sub_10538c0, sub_1053c70, sub_6ce100, sub_6ce3d0, sub_783bd0, sub_f9cab0
   ref: StartRandomMatching
*/
void StartRandomMatching(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1050090ULL || rel >= 0x1050af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01050af0 size=368 callers=5 calls=0
*/
void sub_1050af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1050af0ULL || rel >= 0x1050c60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01050c60 size=384 callers=1 calls=3
   calls: sub_1054340, sub_1054f70, sub_6ce100
*/
void sub_1050c60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1050c60ULL || rel >= 0x1050de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01050de0 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_1055280, sub_6ce100
*/
void sub_1050de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1050de0ULL || rel >= 0x1050f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01050f60 size=656 callers=4 calls=1
   calls: sub_10536f0
*/
void sub_1050f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1050f60ULL || rel >= 0x10511f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010511f0 size=2032 callers=3 calls=8
   calls: sub_1050f60, sub_10519e0, sub_1051b60, sub_10563d0, sub_6ce100, sub_6ce3d0, sub_783bd0, sub_f9cab0
   ref: StartCreateSession
*/
void StartCreateSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10511f0ULL || rel >= 0x10519e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010519e0 size=384 callers=9 calls=3
   calls: sub_1054f70, sub_10569b0, sub_6ce100
*/
void sub_10519e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10519e0ULL || rel >= 0x1051b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01051b60 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_10574c0, sub_6ce100
*/
void sub_1051b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1051b60ULL || rel >= 0x1051ce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01051ce0 size=1840 callers=3 calls=8
   calls: sub_1050f60, sub_1052410, sub_1052590, sub_1058650, sub_6ce100, sub_6ce3d0, sub_783bd0, sub_f9cab0
   ref: StartJoinSession
*/
void StartJoinSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1051ce0ULL || rel >= 0x1052410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01052410 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_1058c30, sub_6ce100
*/
void sub_1052410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1052410ULL || rel >= 0x1052590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01052590 size=384 callers=1 calls=3
   calls: sub_1054f70, sub_1059740, sub_6ce100
*/
void sub_1052590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1052590ULL || rel >= 0x1052710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01052710 size=1296 callers=1 calls=6
   calls: sub_10519e0, sub_1052df0, sub_10563d0, sub_6ce100, sub_6ce3d0, sub_f9cab0
   ref: StartLeaveSession
*/
void StartLeaveSession(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1052710ULL || rel >= 0x1052c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01052c20 size=48 callers=17 calls=0
*/
void sub_1052c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1052c20ULL || rel >= 0x1052c50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01052c50 size=80 callers=24 calls=0
*/
void sub_1052c50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1052c50ULL || rel >= 0x1052ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01052ca0 size=320 callers=26 calls=0
*/
void sub_1052ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1052ca0ULL || rel >= 0x1052de0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01052de0 size=16 callers=5 calls=0
*/
void sub_1052de0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1052de0ULL || rel >= 0x1052df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01052df0 size=384 callers=9 calls=3
   calls: sub_1054f70, sub_105a590, sub_6ce100
*/
void sub_1052df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1052df0ULL || rel >= 0x1052f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01052f70 size=1376 callers=0 calls=2
   calls: sub_1061800, sub_1076bd0
*/
void sub_1052f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1052f70ULL || rel >= 0x10534d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010534d0 size=16 callers=0 calls=0
*/
void sub_10534d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10534d0ULL || rel >= 0x10534e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010534e0 size=128 callers=0 calls=1
   calls: sub_1076f70
*/
void sub_10534e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10534e0ULL || rel >= 0x1053560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053560 size=144 callers=0 calls=1
   calls: sub_1076f70
*/
void sub_1053560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053560ULL || rel >= 0x10535f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010535f0 size=16 callers=0 calls=0
*/
void sub_10535f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10535f0ULL || rel >= 0x1053600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053600 size=112 callers=0 calls=0
*/
void sub_1053600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053600ULL || rel >= 0x1053670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053670 size=16 callers=0 calls=0
*/
void sub_1053670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053670ULL || rel >= 0x1053680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053680 size=112 callers=0 calls=0
*/
void sub_1053680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053680ULL || rel >= 0x10536f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010536f0 size=464 callers=8 calls=0
*/
void sub_10536f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10536f0ULL || rel >= 0x10538c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010538c0 size=272 callers=2 calls=1
   calls: sub_5e2350
*/
void sub_10538c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10538c0ULL || rel >= 0x10539d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010539d0 size=80 callers=0 calls=0
*/
void sub_10539d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10539d0ULL || rel >= 0x1053a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053a20 size=240 callers=0 calls=0
*/
void sub_1053a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053a20ULL || rel >= 0x1053b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053b10 size=80 callers=0 calls=0
*/
void sub_1053b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053b10ULL || rel >= 0x1053b60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053b60 size=80 callers=0 calls=0
*/
void sub_1053b60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053b60ULL || rel >= 0x1053bb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053bb0 size=16 callers=0 calls=0
*/
void sub_1053bb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053bb0ULL || rel >= 0x1053bc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053bc0 size=16 callers=0 calls=0
*/
void sub_1053bc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053bc0ULL || rel >= 0x1053bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053bd0 size=80 callers=0 calls=0
*/
void sub_1053bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053bd0ULL || rel >= 0x1053c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053c20 size=80 callers=0 calls=0
*/
void sub_1053c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053c20ULL || rel >= 0x1053c70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053c70 size=304 callers=1 calls=1
   calls: sub_6ce110
*/
void sub_1053c70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053c70ULL || rel >= 0x1053da0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053da0 size=256 callers=0 calls=0
*/
void sub_1053da0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053da0ULL || rel >= 0x1053ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053ea0 size=16 callers=0 calls=0
*/
void sub_1053ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053ea0ULL || rel >= 0x1053eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053eb0 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1053eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053eb0ULL || rel >= 0x1053f20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01053f20 size=336 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1053f20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1053f20ULL || rel >= 0x1054070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054070 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1054070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054070ULL || rel >= 0x10540d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010540d0 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10540d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10540d0ULL || rel >= 0x1054130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054130 size=16 callers=0 calls=0
*/
void sub_1054130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054130ULL || rel >= 0x1054140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054140 size=16 callers=0 calls=0
*/
void sub_1054140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054140ULL || rel >= 0x1054150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054150 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1054150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054150ULL || rel >= 0x10541c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010541c0 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_10541c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10541c0ULL || rel >= 0x1054230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054230 size=16 callers=0 calls=0
*/
void sub_1054230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054230ULL || rel >= 0x1054240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054240 size=16 callers=0 calls=0
*/
void sub_1054240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054240ULL || rel >= 0x1054250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054250 size=240 callers=32 calls=0
*/
void sub_1054250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054250ULL || rel >= 0x1054340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054340 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1054340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054340ULL || rel >= 0x1054480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054480 size=144 callers=0 calls=0
*/
void sub_1054480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054480ULL || rel >= 0x1054510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054510 size=144 callers=0 calls=0
*/
void sub_1054510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054510ULL || rel >= 0x10545a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010545a0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10545a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10545a0ULL || rel >= 0x1054610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054610 size=64 callers=0 calls=1
   calls: sub_1054d30
*/
void sub_1054610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054610ULL || rel >= 0x1054650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054650 size=16 callers=0 calls=0
*/
void sub_1054650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054650ULL || rel >= 0x1054660ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054660 size=48 callers=0 calls=0
*/
void sub_1054660(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054660ULL || rel >= 0x1054690ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054690 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1054690(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054690ULL || rel >= 0x1054750ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054750 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1054750(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054750ULL || rel >= 0x10547c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010547c0 size=144 callers=0 calls=0
*/
void sub_10547c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10547c0ULL || rel >= 0x1054850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054850 size=144 callers=0 calls=0
*/
void sub_1054850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054850ULL || rel >= 0x10548e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010548e0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10548e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10548e0ULL || rel >= 0x1054950ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054950 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1054950(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054950ULL || rel >= 0x10549c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010549c0 size=144 callers=0 calls=0
*/
void sub_10549c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10549c0ULL || rel >= 0x1054a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054a50 size=144 callers=0 calls=0
*/
void sub_1054a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054a50ULL || rel >= 0x1054ae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054ae0 size=48 callers=0 calls=0
*/
void sub_1054ae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054ae0ULL || rel >= 0x1054b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054b10 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1054b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054b10ULL || rel >= 0x1054bd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054bd0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1054bd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054bd0ULL || rel >= 0x1054c40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054c40 size=240 callers=195 calls=0
*/
void sub_1054c40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054c40ULL || rel >= 0x1054d30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054d30 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_1054d30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054d30ULL || rel >= 0x1054f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054f40 size=16 callers=0 calls=0
*/
void sub_1054f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054f40ULL || rel >= 0x1054f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054f50 size=16 callers=0 calls=0
*/
void sub_1054f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054f50ULL || rel >= 0x1054f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054f60 size=16 callers=0 calls=0
*/
void sub_1054f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054f60ULL || rel >= 0x1054f70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01054f70 size=320 callers=65 calls=0
*/
void sub_1054f70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1054f70ULL || rel >= 0x10550b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010550b0 size=464 callers=0 calls=0
*/
void sub_10550b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10550b0ULL || rel >= 0x1055280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055280 size=320 callers=1 calls=2
   calls: sub_1050af0, sub_5e2350
*/
void sub_1055280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055280ULL || rel >= 0x10553c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010553c0 size=288 callers=0 calls=0
*/
void sub_10553c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10553c0ULL || rel >= 0x10554e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010554e0 size=288 callers=0 calls=0
*/
void sub_10554e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10554e0ULL || rel >= 0x1055600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055600 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1055600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055600ULL || rel >= 0x1055670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055670 size=64 callers=0 calls=1
   calls: sub_1055e60
*/
void sub_1055670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055670ULL || rel >= 0x10556b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010556b0 size=16 callers=0 calls=0
*/
void sub_10556b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10556b0ULL || rel >= 0x10556c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010556c0 size=48 callers=0 calls=0
*/
void sub_10556c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10556c0ULL || rel >= 0x10556f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010556f0 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10556f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10556f0ULL || rel >= 0x1055770ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055770 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1055770(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055770ULL || rel >= 0x10557e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010557e0 size=288 callers=0 calls=0
*/
void sub_10557e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10557e0ULL || rel >= 0x1055900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055900 size=288 callers=0 calls=0
*/
void sub_1055900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055900ULL || rel >= 0x1055a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055a20 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1055a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055a20ULL || rel >= 0x1055a90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055a90 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1055a90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055a90ULL || rel >= 0x1055b00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055b00 size=288 callers=0 calls=0
*/
void sub_1055b00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055b00ULL || rel >= 0x1055c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055c20 size=288 callers=0 calls=0
*/
void sub_1055c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055c20ULL || rel >= 0x1055d40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055d40 size=48 callers=0 calls=0
*/
void sub_1055d40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055d40ULL || rel >= 0x1055d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055d70 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1055d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055d70ULL || rel >= 0x1055df0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055df0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1055df0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055df0ULL || rel >= 0x1055e60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01055e60 size=576 callers=1 calls=3
   calls: sub_10560a0, sub_6a1f70, sub_6a1f80
*/
void sub_1055e60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1055e60ULL || rel >= 0x10560a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010560a0 size=256 callers=1 calls=0
*/
void sub_10560a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10560a0ULL || rel >= 0x10561a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010561a0 size=16 callers=0 calls=0
*/
void sub_10561a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10561a0ULL || rel >= 0x10561b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010561b0 size=16 callers=0 calls=0
*/
void sub_10561b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10561b0ULL || rel >= 0x10561c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010561c0 size=16 callers=0 calls=0
*/
void sub_10561c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10561c0ULL || rel >= 0x10561d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010561d0 size=32 callers=0 calls=0
*/
void sub_10561d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10561d0ULL || rel >= 0x10561f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010561f0 size=16 callers=0 calls=0
*/
void sub_10561f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10561f0ULL || rel >= 0x1056200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056200 size=16 callers=0 calls=0
*/
void sub_1056200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056200ULL || rel >= 0x1056210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056210 size=16 callers=0 calls=0
*/
void sub_1056210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056210ULL || rel >= 0x1056220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056220 size=64 callers=0 calls=0
*/
void sub_1056220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056220ULL || rel >= 0x1056260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056260 size=16 callers=0 calls=0
*/
void sub_1056260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056260ULL || rel >= 0x1056270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056270 size=16 callers=0 calls=0
*/
void sub_1056270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056270ULL || rel >= 0x1056280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056280 size=16 callers=0 calls=0
*/
void sub_1056280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056280ULL || rel >= 0x1056290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056290 size=32 callers=0 calls=0
*/
void sub_1056290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056290ULL || rel >= 0x10562b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010562b0 size=16 callers=0 calls=0
*/
void sub_10562b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10562b0ULL || rel >= 0x10562c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010562c0 size=16 callers=0 calls=0
*/
void sub_10562c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10562c0ULL || rel >= 0x10562d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010562d0 size=16 callers=0 calls=0
*/
void sub_10562d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10562d0ULL || rel >= 0x10562e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010562e0 size=192 callers=0 calls=2
   calls: sub_10f5c30, sub_f9cab0
*/
void sub_10562e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10562e0ULL || rel >= 0x10563a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010563a0 size=16 callers=0 calls=0
*/
void sub_10563a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10563a0ULL || rel >= 0x10563b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010563b0 size=16 callers=0 calls=0
*/
void sub_10563b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10563b0ULL || rel >= 0x10563c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010563c0 size=16 callers=0 calls=0
*/
void sub_10563c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10563c0ULL || rel >= 0x10563d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010563d0 size=304 callers=28 calls=1
   calls: sub_6ce110
*/
void sub_10563d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10563d0ULL || rel >= 0x1056500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056500 size=256 callers=0 calls=0
*/
void sub_1056500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056500ULL || rel >= 0x1056600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056600 size=16 callers=0 calls=0
*/
void sub_1056600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056600ULL || rel >= 0x1056610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056610 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1056610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056610ULL || rel >= 0x1056680ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056680 size=336 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1056680(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056680ULL || rel >= 0x10567d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010567d0 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10567d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10567d0ULL || rel >= 0x1056830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056830 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1056830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056830ULL || rel >= 0x1056890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056890 size=16 callers=0 calls=0
*/
void sub_1056890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056890ULL || rel >= 0x10568a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010568a0 size=16 callers=0 calls=0
*/
void sub_10568a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10568a0ULL || rel >= 0x10568b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010568b0 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_10568b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10568b0ULL || rel >= 0x1056920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056920 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1056920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056920ULL || rel >= 0x1056990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056990 size=16 callers=0 calls=0
*/
void sub_1056990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056990ULL || rel >= 0x10569a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010569a0 size=16 callers=0 calls=0
*/
void sub_10569a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10569a0ULL || rel >= 0x10569b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010569b0 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_10569b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10569b0ULL || rel >= 0x1056af0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056af0 size=144 callers=0 calls=0
*/
void sub_1056af0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056af0ULL || rel >= 0x1056b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056b80 size=144 callers=0 calls=0
*/
void sub_1056b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056b80ULL || rel >= 0x1056c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056c10 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1056c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056c10ULL || rel >= 0x1056c80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056c80 size=64 callers=0 calls=1
   calls: sub_10572b0
*/
void sub_1056c80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056c80ULL || rel >= 0x1056cc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056cc0 size=16 callers=0 calls=0
*/
void sub_1056cc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056cc0ULL || rel >= 0x1056cd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056cd0 size=48 callers=0 calls=0
*/
void sub_1056cd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056cd0ULL || rel >= 0x1056d00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056d00 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1056d00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056d00ULL || rel >= 0x1056dc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056dc0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1056dc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056dc0ULL || rel >= 0x1056e30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056e30 size=144 callers=0 calls=0
*/
void sub_1056e30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056e30ULL || rel >= 0x1056ec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056ec0 size=144 callers=0 calls=0
*/
void sub_1056ec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056ec0ULL || rel >= 0x1056f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056f50 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1056f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056f50ULL || rel >= 0x1056fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01056fc0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1056fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1056fc0ULL || rel >= 0x1057030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057030 size=144 callers=0 calls=0
*/
void sub_1057030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057030ULL || rel >= 0x10570c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010570c0 size=144 callers=0 calls=0
*/
void sub_10570c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10570c0ULL || rel >= 0x1057150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057150 size=48 callers=0 calls=0
*/
void sub_1057150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057150ULL || rel >= 0x1057180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057180 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1057180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057180ULL || rel >= 0x1057240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057240 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1057240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057240ULL || rel >= 0x10572b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010572b0 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_10572b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10572b0ULL || rel >= 0x10574c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010574c0 size=320 callers=1 calls=2
   calls: sub_1050af0, sub_5e2350
*/
void sub_10574c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10574c0ULL || rel >= 0x1057600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057600 size=288 callers=0 calls=0
*/
void sub_1057600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057600ULL || rel >= 0x1057720ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057720 size=288 callers=0 calls=0
*/
void sub_1057720(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057720ULL || rel >= 0x1057840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057840 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1057840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057840ULL || rel >= 0x10578b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010578b0 size=64 callers=0 calls=1
   calls: sub_1058120
*/
void sub_10578b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10578b0ULL || rel >= 0x10578f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010578f0 size=16 callers=0 calls=0
*/
void sub_10578f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10578f0ULL || rel >= 0x1057900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057900 size=48 callers=0 calls=0
*/
void sub_1057900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057900ULL || rel >= 0x1057930ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057930 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1057930(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057930ULL || rel >= 0x10579f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010579f0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10579f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10579f0ULL || rel >= 0x1057a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057a60 size=288 callers=0 calls=0
*/
void sub_1057a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057a60ULL || rel >= 0x1057b80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057b80 size=288 callers=0 calls=0
*/
void sub_1057b80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057b80ULL || rel >= 0x1057ca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057ca0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1057ca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057ca0ULL || rel >= 0x1057d10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057d10 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1057d10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057d10ULL || rel >= 0x1057d80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057d80 size=288 callers=0 calls=0
*/
void sub_1057d80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057d80ULL || rel >= 0x1057ea0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057ea0 size=288 callers=0 calls=0
*/
void sub_1057ea0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057ea0ULL || rel >= 0x1057fc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057fc0 size=48 callers=0 calls=0
*/
void sub_1057fc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057fc0ULL || rel >= 0x1057ff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01057ff0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1057ff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1057ff0ULL || rel >= 0x10580b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010580b0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10580b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10580b0ULL || rel >= 0x1058120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058120 size=560 callers=1 calls=3
   calls: sub_1058350, sub_6a1f70, sub_6a1f80
*/
void sub_1058120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058120ULL || rel >= 0x1058350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058350 size=240 callers=2 calls=0
*/
void sub_1058350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058350ULL || rel >= 0x1058440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058440 size=16 callers=0 calls=0
*/
void sub_1058440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058440ULL || rel >= 0x1058450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058450 size=16 callers=0 calls=0
*/
void sub_1058450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058450ULL || rel >= 0x1058460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058460 size=16 callers=0 calls=0
*/
void sub_1058460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058460ULL || rel >= 0x1058470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058470 size=32 callers=0 calls=0
*/
void sub_1058470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058470ULL || rel >= 0x1058490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058490 size=16 callers=0 calls=0
*/
void sub_1058490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058490ULL || rel >= 0x10584a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010584a0 size=16 callers=0 calls=0
*/
void sub_10584a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10584a0ULL || rel >= 0x10584b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010584b0 size=16 callers=0 calls=0
*/
void sub_10584b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10584b0ULL || rel >= 0x10584c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010584c0 size=32 callers=0 calls=0
*/
void sub_10584c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10584c0ULL || rel >= 0x10584e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010584e0 size=16 callers=0 calls=0
*/
void sub_10584e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10584e0ULL || rel >= 0x10584f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010584f0 size=16 callers=0 calls=0
*/
void sub_10584f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10584f0ULL || rel >= 0x1058500ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058500 size=16 callers=0 calls=0
*/
void sub_1058500(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058500ULL || rel >= 0x1058510ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058510 size=32 callers=0 calls=0
*/
void sub_1058510(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058510ULL || rel >= 0x1058530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058530 size=16 callers=0 calls=0
*/
void sub_1058530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058530ULL || rel >= 0x1058540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058540 size=16 callers=0 calls=0
*/
void sub_1058540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058540ULL || rel >= 0x1058550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058550 size=16 callers=0 calls=0
*/
void sub_1058550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058550ULL || rel >= 0x1058560ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058560 size=192 callers=0 calls=2
   calls: sub_10f5c30, sub_f9cab0
*/
void sub_1058560(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058560ULL || rel >= 0x1058620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058620 size=16 callers=0 calls=0
*/
void sub_1058620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058620ULL || rel >= 0x1058630ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058630 size=16 callers=0 calls=0
*/
void sub_1058630(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058630ULL || rel >= 0x1058640ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058640 size=16 callers=0 calls=0
*/
void sub_1058640(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058640ULL || rel >= 0x1058650ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058650 size=304 callers=1 calls=1
   calls: sub_6ce110
*/
void sub_1058650(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058650ULL || rel >= 0x1058780ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058780 size=256 callers=0 calls=0
*/
void sub_1058780(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058780ULL || rel >= 0x1058880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058880 size=16 callers=0 calls=0
*/
void sub_1058880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058880ULL || rel >= 0x1058890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058890 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1058890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058890ULL || rel >= 0x1058900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058900 size=336 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1058900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058900ULL || rel >= 0x1058a50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058a50 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1058a50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058a50ULL || rel >= 0x1058ab0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058ab0 size=96 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1058ab0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058ab0ULL || rel >= 0x1058b10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058b10 size=16 callers=0 calls=0
*/
void sub_1058b10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058b10ULL || rel >= 0x1058b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058b20 size=16 callers=0 calls=0
*/
void sub_1058b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058b20ULL || rel >= 0x1058b30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058b30 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1058b30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058b30ULL || rel >= 0x1058ba0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058ba0 size=112 callers=0 calls=1
   calls: sub_1054250
*/
void sub_1058ba0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058ba0ULL || rel >= 0x1058c10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058c10 size=16 callers=0 calls=0
*/
void sub_1058c10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058c10ULL || rel >= 0x1058c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058c20 size=16 callers=0 calls=0
*/
void sub_1058c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058c20ULL || rel >= 0x1058c30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058c30 size=320 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1058c30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058c30ULL || rel >= 0x1058d70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058d70 size=144 callers=0 calls=0
*/
void sub_1058d70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058d70ULL || rel >= 0x1058e00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058e00 size=144 callers=0 calls=0
*/
void sub_1058e00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058e00ULL || rel >= 0x1058e90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058e90 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1058e90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058e90ULL || rel >= 0x1058f00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058f00 size=64 callers=0 calls=1
   calls: sub_1059530
*/
void sub_1058f00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058f00ULL || rel >= 0x1058f40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058f40 size=16 callers=0 calls=0
*/
void sub_1058f40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058f40ULL || rel >= 0x1058f50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058f50 size=48 callers=0 calls=0
*/
void sub_1058f50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058f50ULL || rel >= 0x1058f80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01058f80 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1058f80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1058f80ULL || rel >= 0x1059040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059040 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1059040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059040ULL || rel >= 0x10590b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010590b0 size=144 callers=0 calls=0
*/
void sub_10590b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10590b0ULL || rel >= 0x1059140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059140 size=144 callers=0 calls=0
*/
void sub_1059140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059140ULL || rel >= 0x10591d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010591d0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10591d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10591d0ULL || rel >= 0x1059240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059240 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1059240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059240ULL || rel >= 0x10592b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010592b0 size=144 callers=0 calls=0
*/
void sub_10592b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10592b0ULL || rel >= 0x1059340ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059340 size=144 callers=0 calls=0
*/
void sub_1059340(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059340ULL || rel >= 0x10593d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010593d0 size=48 callers=0 calls=0
*/
void sub_10593d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10593d0ULL || rel >= 0x1059400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059400 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1059400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059400ULL || rel >= 0x10594c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010594c0 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_10594c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10594c0ULL || rel >= 0x1059530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059530 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_1059530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059530ULL || rel >= 0x1059740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059740 size=336 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_1059740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059740ULL || rel >= 0x1059890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059890 size=144 callers=0 calls=0
*/
void sub_1059890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059890ULL || rel >= 0x1059920ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059920 size=144 callers=0 calls=0
*/
void sub_1059920(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059920ULL || rel >= 0x10599b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 010599b0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_10599b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x10599b0ULL || rel >= 0x1059a20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059a20 size=64 callers=0 calls=1
   calls: sub_1059fd0
*/
void sub_1059a20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059a20ULL || rel >= 0x1059a60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059a60 size=16 callers=0 calls=0
*/
void sub_1059a60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059a60ULL || rel >= 0x1059a70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059a70 size=48 callers=0 calls=0
*/
void sub_1059a70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059a70ULL || rel >= 0x1059aa0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059aa0 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1059aa0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059aa0ULL || rel >= 0x1059b20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059b20 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1059b20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059b20ULL || rel >= 0x1059b90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059b90 size=144 callers=0 calls=0
*/
void sub_1059b90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059b90ULL || rel >= 0x1059c20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059c20 size=144 callers=0 calls=0
*/
void sub_1059c20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059c20ULL || rel >= 0x1059cb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059cb0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1059cb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059cb0ULL || rel >= 0x1059d20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059d20 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_1059d20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059d20ULL || rel >= 0x1059d90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059d90 size=144 callers=0 calls=0
*/
void sub_1059d90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059d90ULL || rel >= 0x1059e20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059e20 size=144 callers=0 calls=0
*/
void sub_1059e20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059e20ULL || rel >= 0x1059eb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059eb0 size=48 callers=0 calls=0
*/
void sub_1059eb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059eb0ULL || rel >= 0x1059ee0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059ee0 size=128 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1059ee0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059ee0ULL || rel >= 0x1059f60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059f60 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_1059f60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059f60ULL || rel >= 0x1059fd0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 01059fd0 size=544 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_1059fd0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x1059fd0ULL || rel >= 0x105a1f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a1f0 size=16 callers=0 calls=0
*/
void sub_105a1f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a1f0ULL || rel >= 0x105a200ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a200 size=16 callers=0 calls=0
*/
void sub_105a200(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a200ULL || rel >= 0x105a210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a210 size=16 callers=0 calls=0
*/
void sub_105a210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a210ULL || rel >= 0x105a220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a220 size=32 callers=0 calls=0
*/
void sub_105a220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a220ULL || rel >= 0x105a240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a240 size=16 callers=0 calls=0
*/
void sub_105a240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a240ULL || rel >= 0x105a250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a250 size=16 callers=0 calls=0
*/
void sub_105a250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a250ULL || rel >= 0x105a260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a260 size=16 callers=0 calls=0
*/
void sub_105a260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a260ULL || rel >= 0x105a270ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a270 size=64 callers=0 calls=0
*/
void sub_105a270(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a270ULL || rel >= 0x105a2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a2b0 size=16 callers=0 calls=0
*/
void sub_105a2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a2b0ULL || rel >= 0x105a2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a2c0 size=16 callers=0 calls=0
*/
void sub_105a2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a2c0ULL || rel >= 0x105a2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a2d0 size=16 callers=0 calls=0
*/
void sub_105a2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a2d0ULL || rel >= 0x105a2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a2e0 size=32 callers=0 calls=0
*/
void sub_105a2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a2e0ULL || rel >= 0x105a300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a300 size=16 callers=0 calls=0
*/
void sub_105a300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a300ULL || rel >= 0x105a310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a310 size=16 callers=0 calls=0
*/
void sub_105a310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a310ULL || rel >= 0x105a320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a320 size=16 callers=0 calls=0
*/
void sub_105a320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a320ULL || rel >= 0x105a330ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a330 size=192 callers=0 calls=2
   calls: sub_10f5c30, sub_f9cab0
*/
void sub_105a330(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a330ULL || rel >= 0x105a3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a3f0 size=16 callers=0 calls=0
*/
void sub_105a3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a3f0ULL || rel >= 0x105a400ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a400 size=16 callers=0 calls=0
*/
void sub_105a400(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a400ULL || rel >= 0x105a410ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a410 size=16 callers=0 calls=0
*/
void sub_105a410(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a410ULL || rel >= 0x105a420ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a420 size=368 callers=2 calls=1
   calls: sub_11bdb10
*/
void sub_105a420(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a420ULL || rel >= 0x105a590ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a590 size=288 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_105a590(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a590ULL || rel >= 0x105a6b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a6b0 size=144 callers=0 calls=0
*/
void sub_105a6b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a6b0ULL || rel >= 0x105a740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a740 size=144 callers=0 calls=0
*/
void sub_105a740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a740ULL || rel >= 0x105a7d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a7d0 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_105a7d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a7d0ULL || rel >= 0x105a840ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a840 size=64 callers=0 calls=1
   calls: sub_105ae70
*/
void sub_105a840(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a840ULL || rel >= 0x105a880ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a880 size=16 callers=0 calls=0
*/
void sub_105a880(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a880ULL || rel >= 0x105a890ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a890 size=48 callers=0 calls=0
*/
void sub_105a890(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a890ULL || rel >= 0x105a8c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a8c0 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_105a8c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a8c0ULL || rel >= 0x105a980ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a980 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_105a980(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a980ULL || rel >= 0x105a9f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105a9f0 size=144 callers=0 calls=0
*/
void sub_105a9f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105a9f0ULL || rel >= 0x105aa80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105aa80 size=144 callers=0 calls=0
*/
void sub_105aa80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105aa80ULL || rel >= 0x105ab10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ab10 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_105ab10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ab10ULL || rel >= 0x105ab80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ab80 size=112 callers=0 calls=1
   calls: sub_1054c40
*/
void sub_105ab80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ab80ULL || rel >= 0x105abf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105abf0 size=144 callers=0 calls=0
*/
void sub_105abf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105abf0ULL || rel >= 0x105ac80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ac80 size=144 callers=0 calls=0
*/
void sub_105ac80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ac80ULL || rel >= 0x105ad10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ad10 size=48 callers=0 calls=0
*/
void sub_105ad10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ad10ULL || rel >= 0x105ad40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ad40 size=192 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_105ad40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ad40ULL || rel >= 0x105ae00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ae00 size=112 callers=0 calls=2
   calls: sub_6ce3c0, sub_6ce580
*/
void sub_105ae00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ae00ULL || rel >= 0x105ae70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ae70 size=528 callers=1 calls=2
   calls: sub_6a1f70, sub_6a1f80
*/
void sub_105ae70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ae70ULL || rel >= 0x105b080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b080 size=16 callers=0 calls=0
*/
void sub_105b080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b080ULL || rel >= 0x105b090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b090 size=16 callers=0 calls=0
*/
void sub_105b090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b090ULL || rel >= 0x105b0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b0a0 size=16 callers=0 calls=0
*/
void sub_105b0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b0a0ULL || rel >= 0x105b0b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b0b0 size=32 callers=0 calls=0
*/
void sub_105b0b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b0b0ULL || rel >= 0x105b0d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b0d0 size=16 callers=0 calls=0
*/
void sub_105b0d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b0d0ULL || rel >= 0x105b0e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b0e0 size=16 callers=0 calls=0
*/
void sub_105b0e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b0e0ULL || rel >= 0x105b0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b0f0 size=16 callers=0 calls=0
*/
void sub_105b0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b0f0ULL || rel >= 0x105b100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b100 size=32 callers=0 calls=0
*/
void sub_105b100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b100ULL || rel >= 0x105b120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b120 size=16 callers=0 calls=0
*/
void sub_105b120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b120ULL || rel >= 0x105b130ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b130 size=16 callers=0 calls=0
*/
void sub_105b130(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b130ULL || rel >= 0x105b140ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b140 size=16 callers=0 calls=0
*/
void sub_105b140(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b140ULL || rel >= 0x105b150ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b150 size=192 callers=0 calls=2
   calls: sub_10f5c30, sub_f9cab0
*/
void sub_105b150(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b150ULL || rel >= 0x105b210ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b210 size=16 callers=0 calls=0
*/
void sub_105b210(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b210ULL || rel >= 0x105b220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b220 size=16 callers=0 calls=0
*/
void sub_105b220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b220ULL || rel >= 0x105b230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b230 size=16 callers=0 calls=0
*/
void sub_105b230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b230ULL || rel >= 0x105b240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b240 size=128 callers=0 calls=0
*/
void sub_105b240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b240ULL || rel >= 0x105b2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b2c0 size=16 callers=6 calls=0
*/
void sub_105b2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b2c0ULL || rel >= 0x105b2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105b2d0 size=3184 callers=1 calls=23
   calls: message_error, sub_10464e0, sub_1049c80, sub_104d8f0, sub_105bf40, sub_105e540, sub_105e620, sub_105e700, sub_105e7e0, sub_105e8f0, sub_10613f0, sub_5cf8e0
   ... +11 more
   ref: d6eee09e
*/
void d6eee09e(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105b2d0ULL || rel >= 0x105bf40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105bf40 size=176 callers=1 calls=6
   calls: sub_105c4e0, sub_105c670, sub_105c800, sub_105c990, sub_105d1b0, sub_105dd60
*/
void sub_105bf40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105bf40ULL || rel >= 0x105bff0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105bff0 size=688 callers=0 calls=4
   calls: sub_5cf8f0, sub_65f110, sub_6a09d0, sub_6a1bd0
*/
void sub_105bff0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105bff0ULL || rel >= 0x105c2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c2a0 size=16 callers=0 calls=0
*/
void sub_105c2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c2a0ULL || rel >= 0x105c2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c2b0 size=176 callers=1 calls=7
   calls: sub_10496c0, sub_104dbe0, sub_104f5e0, sub_1063ea0, sub_10f6720, sub_6a0ab0, sub_ff96c0
*/
void sub_105c2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c2b0ULL || rel >= 0x105c360ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c360 size=48 callers=1 calls=2
   calls: sub_1064e30, sub_6a0ab0
*/
void sub_105c360(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c360ULL || rel >= 0x105c390ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c390 size=48 callers=31 calls=1
   calls: sub_6a0d40
*/
void sub_105c390(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c390ULL || rel >= 0x105c3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c3c0 size=32 callers=3 calls=1
   calls: sub_6a0d40
*/
void sub_105c3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c3c0ULL || rel >= 0x105c3e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c3e0 size=16 callers=0 calls=0
*/
void sub_105c3e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c3e0ULL || rel >= 0x105c3f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c3f0 size=112 callers=0 calls=0
*/
void sub_105c3f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c3f0ULL || rel >= 0x105c460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c460 size=16 callers=0 calls=0
*/
void sub_105c460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c460ULL || rel >= 0x105c470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c470 size=112 callers=0 calls=0
*/
void sub_105c470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c470ULL || rel >= 0x105c4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c4e0 size=400 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_105c4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c4e0ULL || rel >= 0x105c670ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c670 size=400 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_105c670(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c670ULL || rel >= 0x105c800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c800 size=400 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_105c800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c800ULL || rel >= 0x105c990ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105c990 size=336 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_105c990(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105c990ULL || rel >= 0x105cae0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cae0 size=80 callers=0 calls=0
*/
void sub_105cae0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cae0ULL || rel >= 0x105cb30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cb30 size=240 callers=0 calls=0
*/
void sub_105cb30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cb30ULL || rel >= 0x105cc20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cc20 size=16 callers=0 calls=0
*/
void sub_105cc20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cc20ULL || rel >= 0x105cc30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cc30 size=16 callers=0 calls=0
*/
void sub_105cc30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cc30ULL || rel >= 0x105cc40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cc40 size=16 callers=0 calls=0
*/
void sub_105cc40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cc40ULL || rel >= 0x105cc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cc50 size=16 callers=0 calls=0
*/
void sub_105cc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cc50ULL || rel >= 0x105cc60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cc60 size=16 callers=0 calls=0
*/
void sub_105cc60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cc60ULL || rel >= 0x105cc70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cc70 size=16 callers=0 calls=0
*/
void sub_105cc70(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cc70ULL || rel >= 0x105cc80ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cc80 size=16 callers=0 calls=0
*/
void sub_105cc80(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cc80ULL || rel >= 0x105cc90ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cc90 size=80 callers=0 calls=0
*/
void sub_105cc90(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cc90ULL || rel >= 0x105cce0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cce0 size=80 callers=0 calls=0
*/
void sub_105cce0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cce0ULL || rel >= 0x105cd30ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cd30 size=16 callers=0 calls=0
*/
void sub_105cd30(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cd30ULL || rel >= 0x105cd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cd40 size=16 callers=0 calls=0
*/
void sub_105cd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cd40ULL || rel >= 0x105cd50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cd50 size=80 callers=0 calls=0
*/
void sub_105cd50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cd50ULL || rel >= 0x105cda0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cda0 size=80 callers=0 calls=0
*/
void sub_105cda0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cda0ULL || rel >= 0x105cdf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cdf0 size=16 callers=0 calls=0
*/
void sub_105cdf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cdf0ULL || rel >= 0x105ce00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ce00 size=16 callers=0 calls=0
*/
void sub_105ce00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ce00ULL || rel >= 0x105ce10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ce10 size=16 callers=0 calls=0
*/
void sub_105ce10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ce10ULL || rel >= 0x105ce20ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ce20 size=240 callers=0 calls=0
*/
void sub_105ce20(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ce20ULL || rel >= 0x105cf10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cf10 size=80 callers=0 calls=0
*/
void sub_105cf10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cf10ULL || rel >= 0x105cf60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cf60 size=80 callers=0 calls=0
*/
void sub_105cf60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cf60ULL || rel >= 0x105cfb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105cfb0 size=80 callers=0 calls=0
*/
void sub_105cfb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105cfb0ULL || rel >= 0x105d000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d000 size=80 callers=0 calls=0
*/
void sub_105d000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d000ULL || rel >= 0x105d050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d050 size=80 callers=0 calls=0
*/
void sub_105d050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d050ULL || rel >= 0x105d0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d0a0 size=80 callers=0 calls=0
*/
void sub_105d0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d0a0ULL || rel >= 0x105d0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d0f0 size=16 callers=0 calls=0
*/
void sub_105d0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d0f0ULL || rel >= 0x105d100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d100 size=16 callers=0 calls=0
*/
void sub_105d100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d100ULL || rel >= 0x105d110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d110 size=80 callers=0 calls=0
*/
void sub_105d110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d110ULL || rel >= 0x105d160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d160 size=80 callers=0 calls=0
*/
void sub_105d160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d160ULL || rel >= 0x105d1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d1b0 size=336 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_105d1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d1b0ULL || rel >= 0x105d300ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d300 size=80 callers=0 calls=0
*/
void sub_105d300(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d300ULL || rel >= 0x105d350ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d350 size=240 callers=0 calls=0
*/
void sub_105d350(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d350ULL || rel >= 0x105d440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d440 size=16 callers=0 calls=0
*/
void sub_105d440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d440ULL || rel >= 0x105d450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d450 size=16 callers=0 calls=0
*/
void sub_105d450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d450ULL || rel >= 0x105d460ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d460 size=16 callers=0 calls=0
*/
void sub_105d460(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d460ULL || rel >= 0x105d470ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d470 size=16 callers=0 calls=0
*/
void sub_105d470(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d470ULL || rel >= 0x105d480ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d480 size=16 callers=0 calls=0
*/
void sub_105d480(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d480ULL || rel >= 0x105d490ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d490 size=80 callers=0 calls=0
*/
void sub_105d490(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d490ULL || rel >= 0x105d4e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d4e0 size=80 callers=0 calls=0
*/
void sub_105d4e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d4e0ULL || rel >= 0x105d530ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d530 size=16 callers=0 calls=0
*/
void sub_105d530(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d530ULL || rel >= 0x105d540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d540 size=16 callers=0 calls=0
*/
void sub_105d540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d540ULL || rel >= 0x105d550ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d550 size=80 callers=0 calls=0
*/
void sub_105d550(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d550ULL || rel >= 0x105d5a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d5a0 size=80 callers=0 calls=0
*/
void sub_105d5a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d5a0ULL || rel >= 0x105d5f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d5f0 size=16 callers=0 calls=0
*/
void sub_105d5f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d5f0ULL || rel >= 0x105d600ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d600 size=16 callers=0 calls=0
*/
void sub_105d600(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d600ULL || rel >= 0x105d610ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d610 size=16 callers=0 calls=0
*/
void sub_105d610(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d610ULL || rel >= 0x105d620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d620 size=240 callers=0 calls=0
*/
void sub_105d620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d620ULL || rel >= 0x105d710ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d710 size=80 callers=0 calls=0
*/
void sub_105d710(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d710ULL || rel >= 0x105d760ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d760 size=80 callers=0 calls=0
*/
void sub_105d760(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d760ULL || rel >= 0x105d7b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d7b0 size=80 callers=0 calls=0
*/
void sub_105d7b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d7b0ULL || rel >= 0x105d800ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d800 size=80 callers=0 calls=0
*/
void sub_105d800(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d800ULL || rel >= 0x105d850ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d850 size=80 callers=0 calls=0
*/
void sub_105d850(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d850ULL || rel >= 0x105d8a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d8a0 size=80 callers=0 calls=0
*/
void sub_105d8a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d8a0ULL || rel >= 0x105d8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d8f0 size=16 callers=0 calls=0
*/
void sub_105d8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d8f0ULL || rel >= 0x105d900ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d900 size=16 callers=0 calls=0
*/
void sub_105d900(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d900ULL || rel >= 0x105d910ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d910 size=80 callers=0 calls=0
*/
void sub_105d910(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d910ULL || rel >= 0x105d960ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d960 size=80 callers=0 calls=0
*/
void sub_105d960(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d960ULL || rel >= 0x105d9b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d9b0 size=16 callers=0 calls=0
*/
void sub_105d9b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d9b0ULL || rel >= 0x105d9c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d9c0 size=16 callers=0 calls=0
*/
void sub_105d9c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d9c0ULL || rel >= 0x105d9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105d9d0 size=240 callers=0 calls=0
*/
void sub_105d9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105d9d0ULL || rel >= 0x105dac0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105dac0 size=80 callers=0 calls=0
*/
void sub_105dac0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105dac0ULL || rel >= 0x105db10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105db10 size=80 callers=0 calls=0
*/
void sub_105db10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105db10ULL || rel >= 0x105db60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105db60 size=80 callers=0 calls=0
*/
void sub_105db60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105db60ULL || rel >= 0x105dbb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105dbb0 size=80 callers=0 calls=0
*/
void sub_105dbb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105dbb0ULL || rel >= 0x105dc00ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105dc00 size=80 callers=0 calls=0
*/
void sub_105dc00(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105dc00ULL || rel >= 0x105dc50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105dc50 size=80 callers=0 calls=0
*/
void sub_105dc50(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105dc50ULL || rel >= 0x105dca0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105dca0 size=16 callers=0 calls=0
*/
void sub_105dca0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105dca0ULL || rel >= 0x105dcb0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105dcb0 size=16 callers=0 calls=0
*/
void sub_105dcb0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105dcb0ULL || rel >= 0x105dcc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105dcc0 size=80 callers=0 calls=0
*/
void sub_105dcc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105dcc0ULL || rel >= 0x105dd10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105dd10 size=80 callers=0 calls=0
*/
void sub_105dd10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105dd10ULL || rel >= 0x105dd60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105dd60 size=352 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_105dd60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105dd60ULL || rel >= 0x105dec0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105dec0 size=80 callers=0 calls=0
*/
void sub_105dec0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105dec0ULL || rel >= 0x105df10ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105df10 size=240 callers=0 calls=0
*/
void sub_105df10(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105df10ULL || rel >= 0x105e000ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e000 size=16 callers=0 calls=0
*/
void sub_105e000(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e000ULL || rel >= 0x105e010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e010 size=64 callers=0 calls=2
   calls: sub_104c140, sub_15bbd30
*/
void sub_105e010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e010ULL || rel >= 0x105e050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e050 size=80 callers=0 calls=0
*/
void sub_105e050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e050ULL || rel >= 0x105e0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e0a0 size=80 callers=0 calls=0
*/
void sub_105e0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e0a0ULL || rel >= 0x105e0f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e0f0 size=16 callers=0 calls=0
*/
void sub_105e0f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e0f0ULL || rel >= 0x105e100ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e100 size=16 callers=0 calls=0
*/
void sub_105e100(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e100ULL || rel >= 0x105e110ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e110 size=80 callers=0 calls=0
*/
void sub_105e110(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e110ULL || rel >= 0x105e160ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e160 size=80 callers=0 calls=0
*/
void sub_105e160(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e160ULL || rel >= 0x105e1b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e1b0 size=16 callers=0 calls=0
*/
void sub_105e1b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e1b0ULL || rel >= 0x105e1c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e1c0 size=16 callers=0 calls=0
*/
void sub_105e1c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e1c0ULL || rel >= 0x105e1d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e1d0 size=16 callers=0 calls=0
*/
void sub_105e1d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e1d0ULL || rel >= 0x105e1e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e1e0 size=64 callers=0 calls=2
   calls: sub_104c140, sub_15bbd30
*/
void sub_105e1e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e1e0ULL || rel >= 0x105e220ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e220 size=16 callers=0 calls=0
*/
void sub_105e220(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e220ULL || rel >= 0x105e230ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e230 size=16 callers=0 calls=0
*/
void sub_105e230(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e230ULL || rel >= 0x105e240ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e240 size=16 callers=0 calls=0
*/
void sub_105e240(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e240ULL || rel >= 0x105e250ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e250 size=16 callers=0 calls=0
*/
void sub_105e250(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e250ULL || rel >= 0x105e260ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e260 size=32 callers=0 calls=0
*/
void sub_105e260(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e260ULL || rel >= 0x105e280ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e280 size=16 callers=0 calls=0
*/
void sub_105e280(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e280ULL || rel >= 0x105e290ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e290 size=16 callers=0 calls=0
*/
void sub_105e290(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e290ULL || rel >= 0x105e2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e2a0 size=16 callers=0 calls=0
*/
void sub_105e2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e2a0ULL || rel >= 0x105e2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e2b0 size=96 callers=0 calls=0
*/
void sub_105e2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e2b0ULL || rel >= 0x105e310ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e310 size=16 callers=0 calls=0
*/
void sub_105e310(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e310ULL || rel >= 0x105e320ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e320 size=160 callers=0 calls=0
*/
void sub_105e320(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e320ULL || rel >= 0x105e3c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e3c0 size=112 callers=0 calls=0
*/
void sub_105e3c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e3c0ULL || rel >= 0x105e430ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e430 size=16 callers=0 calls=0
*/
void sub_105e430(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e430ULL || rel >= 0x105e440ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e440 size=16 callers=0 calls=0
*/
void sub_105e440(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e440ULL || rel >= 0x105e450ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e450 size=112 callers=0 calls=0
*/
void sub_105e450(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e450ULL || rel >= 0x105e4c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e4c0 size=16 callers=0 calls=0
*/
void sub_105e4c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e4c0ULL || rel >= 0x105e4d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e4d0 size=112 callers=0 calls=0
*/
void sub_105e4d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e4d0ULL || rel >= 0x105e540ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e540 size=224 callers=1 calls=1
   calls: sub_1049250
*/
void sub_105e540(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e540ULL || rel >= 0x105e620ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e620 size=224 callers=1 calls=1
   calls: sub_10f63a0
*/
void sub_105e620(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e620ULL || rel >= 0x105e700ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e700 size=224 callers=1 calls=1
   calls: sub_1061e90
*/
void sub_105e700(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e700ULL || rel >= 0x105e7e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e7e0 size=272 callers=1 calls=1
   calls: sub_104f0f0
*/
void sub_105e7e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e7e0ULL || rel >= 0x105e8f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e8f0 size=224 callers=1 calls=1
   calls: sub_10f5b60
*/
void sub_105e8f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e8f0ULL || rel >= 0x105e9d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105e9d0 size=128 callers=0 calls=0
*/
void sub_105e9d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105e9d0ULL || rel >= 0x105ea50ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ea50 size=528 callers=1 calls=6
   calls: sub_1307dd0, sub_1308200, sub_1308340, sub_5e2350, sub_67b990, sub_c4ac70
   ref: common/message_error.dat
*/
void message_error(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ea50ULL || rel >= 0x105ec60ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ec60 size=384 callers=0 calls=7
   calls: sub_15bbd30, sub_5e7b30, sub_67bdb0, sub_67d450, sub_7c22b0, sub_e764f0, sub_e766c0
*/
void sub_105ec60(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ec60ULL || rel >= 0x105ede0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105ede0 size=240 callers=0 calls=0
*/
void sub_105ede0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105ede0ULL || rel >= 0x105eed0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105eed0 size=320 callers=0 calls=1
   calls: sub_5e2bc0
*/
void sub_105eed0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105eed0ULL || rel >= 0x105f010ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f010 size=16 callers=0 calls=0
*/
void sub_105f010(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f010ULL || rel >= 0x105f020ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f020 size=16 callers=0 calls=0
*/
void sub_105f020(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f020ULL || rel >= 0x105f030ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f030 size=16 callers=0 calls=0
*/
void sub_105f030(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f030ULL || rel >= 0x105f040ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f040 size=16 callers=0 calls=0
*/
void sub_105f040(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f040ULL || rel >= 0x105f050ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f050 size=16 callers=0 calls=0
*/
void sub_105f050(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f050ULL || rel >= 0x105f060ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f060 size=16 callers=0 calls=0
*/
void sub_105f060(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f060ULL || rel >= 0x105f070ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f070 size=16 callers=0 calls=0
*/
void sub_105f070(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f070ULL || rel >= 0x105f080ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f080 size=16 callers=0 calls=0
*/
void sub_105f080(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f080ULL || rel >= 0x105f090ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f090 size=16 callers=0 calls=0
*/
void sub_105f090(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f090ULL || rel >= 0x105f0a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f0a0 size=128 callers=0 calls=0
*/
void sub_105f0a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f0a0ULL || rel >= 0x105f120ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f120 size=96 callers=1 calls=1
   calls: sub_5e2350
*/
void sub_105f120(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f120ULL || rel >= 0x105f180ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f180 size=288 callers=0 calls=0
*/
void sub_105f180(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f180ULL || rel >= 0x105f2a0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f2a0 size=16 callers=0 calls=0
*/
void sub_105f2a0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f2a0ULL || rel >= 0x105f2b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f2b0 size=16 callers=0 calls=0
*/
void sub_105f2b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f2b0ULL || rel >= 0x105f2c0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f2c0 size=16 callers=0 calls=0
*/
void sub_105f2c0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f2c0ULL || rel >= 0x105f2d0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f2d0 size=16 callers=0 calls=0
*/
void sub_105f2d0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f2d0ULL || rel >= 0x105f2e0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f2e0 size=16 callers=0 calls=0
*/
void sub_105f2e0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f2e0ULL || rel >= 0x105f2f0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f2f0 size=704 callers=1 calls=5
   calls: sub_105f5b0, sub_10774d0, sub_136b870, sub_5e2350, sub_784f40
*/
void sub_105f2f0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f2f0ULL || rel >= 0x105f5b0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f5b0 size=400 callers=1 calls=5
   calls: sub_17411e0, sub_6ac2d0, sub_6ae820, sub_6ae870, sub_6ae9d0
*/
void sub_105f5b0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f5b0ULL || rel >= 0x105f740ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f740 size=240 callers=3 calls=1
   calls: sub_105f830
*/
void sub_105f740(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f740ULL || rel >= 0x105f830ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105f830 size=704 callers=1 calls=3
   calls: sub_1741420, sub_1741740, sub_6ac2d0
*/
void sub_105f830(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105f830ULL || rel >= 0x105faf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105faf0 size=256 callers=1 calls=0
*/
void sub_105faf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105faf0ULL || rel >= 0x105fbf0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105fbf0 size=336 callers=1 calls=3
   calls: sub_1061810, sub_1061830, sub_6ae9d0
*/
void sub_105fbf0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105fbf0ULL || rel >= 0x105fd40ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105fd40 size=128 callers=0 calls=1
   calls: sub_6ae9d0
*/
void sub_105fd40(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105fd40ULL || rel >= 0x105fdc0ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

/* 0105fdc0 size=176 callers=1 calls=2
   calls: sub_1061810, sub_6ae9d0
*/
void sub_105fdc0(GuestContext* c){
  while(!c->halted){
    uint64_t rel = c->pc - MODULE_BASE;
    if(rel < 0x105fdc0ULL || rel >= 0x105fe70ULL) break;
    BlockFn f = RECOMP_LOOKUP(c->pc);
    if(!f) break;
    f(c);
  }
}

